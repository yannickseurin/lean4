// Lean compiler output
// Module: Lean.Meta.Match.MatcherApp.Transform
// Imports: public import Lean.Meta.Match.MatcherApp.Basic public import Lean.Meta.Match.MatchEqsExt public import Lean.Meta.Match.AltTelescopes public import Lean.Meta.AppBuilder import Lean.Meta.Tactic.Split import Lean.Meta.Tactic.Refl
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
lean_object* l_Subarray_empty___redArg();
lean_object* l_Array_instInhabited___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Meta_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_forallBoundedTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_forallAltVarsTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_getEquationsFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(lean_object*);
lean_object* l_Lean_Meta_getMatcherInfo_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqMPR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Split_simpMatchTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_admit(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_arrowDomainsN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* l_Lean_mkArrowN(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "unexpected matcher application, insufficient number of parameters in alternative"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2;
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "unexpected matcher application, alternative must have "};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4;
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " parameters"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "failed to add argument to matcher application, argument type was not refined by `casesOn`"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1;
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "unexpected type at MatcherApp.addArg"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__2 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "failed to add argument to matcher application, type error when constructing the new motive"};
static const lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "unexpected matcher application, motive must be lambda expression with #"};
static const lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " arguments"};
static const lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "failed to transfer argument through matcher application, alt type must be telescope with #"};
static const lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__0 = (const lean_object*)&l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__0_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed__const__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 101, .m_capacity = 101, .m_length = 100, .m_data = "failed to transfer argument through matcher application, type error when constructing the new motive"};
static const lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1;
static lean_once_cell_t l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2;
static const lean_string_object l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "failed to transfer argument through matcher application, motive must be lambda expression with #"};
static const lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3 = (const lean_object*)&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_altParams(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_all(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__32(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Function"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "const"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1_value;
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 8, 186, 189, 152, 89, 197, 12)}};
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1_value),LEAN_SCALAR_PTR_LITERAL(231, 33, 22, 82, 100, 121, 126, 178)}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value;
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__42(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0_value;
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 186, 243, 194, 96, 12, 218, 7)}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.Match.MatcherApp.Transform"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.MatcherApp.transform"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "assertion violation: ys.size == splitterAltInfo.numFields\n        "};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__45(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "assertion violation: altInfo.numOverlaps = 0\n      "};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__50(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "failed to transform matcher, type error when constructing splitter motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "failed to transform matcher, type error when constructing new motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "failed to transform matcher, type error when constructing new pre-splitter motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "\nfailed with"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__61(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matcher "};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = " has no MatchInfo found"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__5;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__6;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Cannot close goal after splitting: "};
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Type "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " of alternative "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " still depends on "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_MatcherApp_inferMatchType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___closed__0_value;
static const lean_closure_object l_Lean_Meta_MatcherApp_inferMatchType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___closed__1_value;
static const lean_closure_object l_Lean_Meta_MatcherApp_inferMatchType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed, .m_arity = 10, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
v___x_9_ = lean_apply_7(v_k_1_, v_b_2_, v_c_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(lean_object* v_type_19_, lean_object* v_maxFVars_x3f_20_, lean_object* v_k_21_, uint8_t v_cleanupAnnotations_22_, uint8_t v_whnfType_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v___f_29_; lean_object* v___x_30_; 
v___f_29_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_29_, 0, v_k_21_);
v___x_30_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_19_, v_maxFVars_x3f_20_, v___f_29_, v_cleanupAnnotations_22_, v_whnfType_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v_a_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_38_; 
v_a_31_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_38_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_38_ == 0)
{
v___x_33_ = v___x_30_;
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_a_31_);
lean_dec(v___x_30_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_36_; 
if (v_isShared_34_ == 0)
{
v___x_36_ = v___x_33_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_a_31_);
v___x_36_ = v_reuseFailAlloc_37_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
return v___x_36_;
}
}
}
else
{
lean_object* v_a_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_46_; 
v_a_39_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_46_ == 0)
{
v___x_41_ = v___x_30_;
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_a_39_);
lean_dec(v___x_30_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_44_; 
if (v_isShared_42_ == 0)
{
v___x_44_ = v___x_41_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_a_39_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___boxed(lean_object* v_type_47_, lean_object* v_maxFVars_x3f_48_, lean_object* v_k_49_, lean_object* v_cleanupAnnotations_50_, lean_object* v_whnfType_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_57_; uint8_t v_whnfType_boxed_58_; lean_object* v_res_59_; 
v_cleanupAnnotations_boxed_57_ = lean_unbox(v_cleanupAnnotations_50_);
v_whnfType_boxed_58_ = lean_unbox(v_whnfType_51_);
v_res_59_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_type_47_, v_maxFVars_x3f_48_, v_k_49_, v_cleanupAnnotations_boxed_57_, v_whnfType_boxed_58_, v___y_52_, v___y_53_, v___y_54_, v___y_55_);
lean_dec(v___y_55_);
lean_dec_ref(v___y_54_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(lean_object* v_00_u03b1_60_, lean_object* v_type_61_, lean_object* v_maxFVars_x3f_62_, lean_object* v_k_63_, uint8_t v_cleanupAnnotations_64_, uint8_t v_whnfType_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_type_61_, v_maxFVars_x3f_62_, v_k_63_, v_cleanupAnnotations_64_, v_whnfType_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___boxed(lean_object* v_00_u03b1_72_, lean_object* v_type_73_, lean_object* v_maxFVars_x3f_74_, lean_object* v_k_75_, lean_object* v_cleanupAnnotations_76_, lean_object* v_whnfType_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_83_; uint8_t v_whnfType_boxed_84_; lean_object* v_res_85_; 
v_cleanupAnnotations_boxed_83_ = lean_unbox(v_cleanupAnnotations_76_);
v_whnfType_boxed_84_ = lean_unbox(v_whnfType_77_);
v_res_85_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(v_00_u03b1_72_, v_type_73_, v_maxFVars_x3f_74_, v_k_75_, v_cleanupAnnotations_boxed_83_, v_whnfType_boxed_84_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(lean_object* v_e_86_, lean_object* v_maxFVars_87_, lean_object* v_k_88_, uint8_t v_cleanupAnnotations_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
lean_object* v___f_95_; uint8_t v___x_96_; uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___f_95_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_95_, 0, v_k_88_);
v___x_96_ = 1;
v___x_97_ = 0;
v___x_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_98_, 0, v_maxFVars_87_);
v___x_99_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_86_, v___x_96_, v___x_97_, v___x_96_, v___x_97_, v___x_98_, v___f_95_, v_cleanupAnnotations_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_);
lean_dec_ref_known(v___x_98_, 1);
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_107_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_107_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_107_ == 0)
{
v___x_102_ = v___x_99_;
v_isShared_103_ = v_isSharedCheck_107_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_a_100_);
lean_dec(v___x_99_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_107_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_105_; 
if (v_isShared_103_ == 0)
{
v___x_105_ = v___x_102_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_a_100_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
}
else
{
lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_115_; 
v_a_108_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_115_ == 0)
{
v___x_110_ = v___x_99_;
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v___x_99_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_113_; 
if (v_isShared_111_ == 0)
{
v___x_113_ = v___x_110_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v_a_108_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg___boxed(lean_object* v_e_116_, lean_object* v_maxFVars_117_, lean_object* v_k_118_, lean_object* v_cleanupAnnotations_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_125_; lean_object* v_res_126_; 
v_cleanupAnnotations_boxed_125_ = lean_unbox(v_cleanupAnnotations_119_);
v_res_126_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(v_e_116_, v_maxFVars_117_, v_k_118_, v_cleanupAnnotations_boxed_125_, v___y_120_, v___y_121_, v___y_122_, v___y_123_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_121_);
lean_dec_ref(v___y_120_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2(lean_object* v_00_u03b1_127_, lean_object* v_e_128_, lean_object* v_maxFVars_129_, lean_object* v_k_130_, uint8_t v_cleanupAnnotations_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(v_e_128_, v_maxFVars_129_, v_k_130_, v_cleanupAnnotations_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___boxed(lean_object* v_00_u03b1_138_, lean_object* v_e_139_, lean_object* v_maxFVars_140_, lean_object* v_k_141_, lean_object* v_cleanupAnnotations_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_148_; lean_object* v_res_149_; 
v_cleanupAnnotations_boxed_148_ = lean_unbox(v_cleanupAnnotations_142_);
v_res_149_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2(v_00_u03b1_138_, v_e_139_, v_maxFVars_140_, v_k_141_, v_cleanupAnnotations_boxed_148_, v___y_143_, v___y_144_, v___y_145_, v___y_146_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(lean_object* v_alt_150_, uint8_t v___x_151_, lean_object* v_xs_152_, uint8_t v_refined_153_, lean_object* v___x_154_, lean_object* v_unrefinedArgType_155_, lean_object* v_x_156_, lean_object* v_x_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_){
_start:
{
uint8_t v___x_163_; uint8_t v___x_164_; lean_object* v___x_165_; 
v___x_163_ = 0;
v___x_164_ = 1;
lean_inc_ref(v_x_156_);
v___x_165_ = l_Lean_Meta_mkLambdaFVars(v_x_156_, v_alt_150_, v___x_163_, v___x_151_, v___x_163_, v___x_151_, v___x_164_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
if (lean_obj_tag(v___x_165_) == 0)
{
lean_object* v_a_166_; uint8_t v_refined_168_; lean_object* v___y_169_; lean_object* v___y_170_; lean_object* v___y_171_; lean_object* v___y_172_; 
v_a_166_ = lean_ctor_get(v___x_165_, 0);
lean_inc(v_a_166_);
lean_dec_ref_known(v___x_165_, 1);
if (v_refined_153_ == 0)
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_192_ = lean_unsigned_to_nat(0u);
v___x_193_ = lean_array_get(v___x_154_, v_x_156_, v___x_192_);
lean_dec_ref(v_x_156_);
lean_inc(v___y_161_);
lean_inc_ref(v___y_160_);
lean_inc(v___y_159_);
lean_inc_ref(v___y_158_);
v___x_194_ = lean_infer_type(v___x_193_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; lean_object* v___x_196_; 
v_a_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_a_195_);
lean_dec_ref_known(v___x_194_, 1);
v___x_196_ = l_Lean_Meta_isExprDefEq(v_unrefinedArgType_155_, v_a_195_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; uint8_t v___x_198_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
lean_inc(v_a_197_);
lean_dec_ref_known(v___x_196_, 1);
v___x_198_ = lean_unbox(v_a_197_);
lean_dec(v_a_197_);
if (v___x_198_ == 0)
{
v_refined_168_ = v___x_151_;
v___y_169_ = v___y_158_;
v___y_170_ = v___y_159_;
v___y_171_ = v___y_160_;
v___y_172_ = v___y_161_;
goto v___jp_167_;
}
else
{
v_refined_168_ = v_refined_153_;
v___y_169_ = v___y_158_;
v___y_170_ = v___y_159_;
v___y_171_ = v___y_160_;
v___y_172_ = v___y_161_;
goto v___jp_167_;
}
}
else
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
lean_dec(v_a_166_);
lean_dec_ref(v_xs_152_);
v_a_199_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_206_ == 0)
{
v___x_201_ = v___x_196_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_196_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_a_199_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
else
{
lean_object* v_a_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_214_; 
lean_dec(v_a_166_);
lean_dec_ref(v_unrefinedArgType_155_);
lean_dec_ref(v_xs_152_);
v_a_207_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_214_ == 0)
{
v___x_209_ = v___x_194_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_dec(v___x_194_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_a_207_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
else
{
lean_dec_ref(v_x_156_);
lean_dec_ref(v_unrefinedArgType_155_);
v_refined_168_ = v_refined_153_;
v___y_169_ = v___y_158_;
v___y_170_ = v___y_159_;
v___y_171_ = v___y_160_;
v___y_172_ = v___y_161_;
goto v___jp_167_;
}
v___jp_167_:
{
lean_object* v___x_173_; 
v___x_173_ = l_Lean_Meta_mkLambdaFVars(v_xs_152_, v_a_166_, v___x_163_, v___x_151_, v___x_163_, v___x_151_, v___x_164_, v___y_169_, v___y_170_, v___y_171_, v___y_172_);
if (lean_obj_tag(v___x_173_) == 0)
{
lean_object* v_a_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_183_; 
v_a_174_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_183_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_183_ == 0)
{
v___x_176_ = v___x_173_;
v_isShared_177_ = v_isSharedCheck_183_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_a_174_);
lean_dec(v___x_173_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_183_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_181_; 
v___x_178_ = lean_box(v_refined_168_);
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v_a_174_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 0, v___x_179_);
v___x_181_ = v___x_176_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v___x_179_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
}
else
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
v_a_184_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_173_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_173_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_a_184_);
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
lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_222_; 
lean_dec_ref(v_x_156_);
lean_dec_ref(v_unrefinedArgType_155_);
lean_dec_ref(v_xs_152_);
v_a_215_ = lean_ctor_get(v___x_165_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_222_ == 0)
{
v___x_217_ = v___x_165_;
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_165_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_220_; 
if (v_isShared_218_ == 0)
{
v___x_220_ = v___x_217_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_a_215_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed(lean_object* v_alt_223_, lean_object* v___x_224_, lean_object* v_xs_225_, lean_object* v_refined_226_, lean_object* v___x_227_, lean_object* v_unrefinedArgType_228_, lean_object* v_x_229_, lean_object* v_x_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
uint8_t v___x_4197__boxed_236_; uint8_t v_refined_boxed_237_; lean_object* v_res_238_; 
v___x_4197__boxed_236_ = lean_unbox(v___x_224_);
v_refined_boxed_237_ = lean_unbox(v_refined_226_);
v_res_238_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(v_alt_223_, v___x_4197__boxed_236_, v_xs_225_, v_refined_boxed_237_, v___x_227_, v_unrefinedArgType_228_, v_x_229_, v_x_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_);
lean_dec(v___y_234_);
lean_dec_ref(v___y_233_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
lean_dec_ref(v_x_230_);
lean_dec_ref(v___x_227_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(lean_object* v_msgData_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_){
_start:
{
lean_object* v___x_245_; lean_object* v_env_246_; lean_object* v___x_247_; lean_object* v_toCold_248_; lean_object* v_mctx_249_; lean_object* v_lctx_250_; lean_object* v_options_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_245_ = lean_st_ref_get(v___y_243_);
v_env_246_ = lean_ctor_get(v___x_245_, 0);
lean_inc_ref(v_env_246_);
lean_dec(v___x_245_);
v___x_247_ = lean_st_ref_get(v___y_241_);
v_toCold_248_ = lean_ctor_get(v___y_242_, 0);
v_mctx_249_ = lean_ctor_get(v___x_247_, 0);
lean_inc_ref(v_mctx_249_);
lean_dec(v___x_247_);
v_lctx_250_ = lean_ctor_get(v___y_240_, 2);
v_options_251_ = lean_ctor_get(v_toCold_248_, 2);
lean_inc_ref(v_options_251_);
lean_inc_ref(v_lctx_250_);
v___x_252_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_252_, 0, v_env_246_);
lean_ctor_set(v___x_252_, 1, v_mctx_249_);
lean_ctor_set(v___x_252_, 2, v_lctx_250_);
lean_ctor_set(v___x_252_, 3, v_options_251_);
v___x_253_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
lean_ctor_set(v___x_253_, 1, v_msgData_239_);
v___x_254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0___boxed(lean_object* v_msgData_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v_msgData_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(lean_object* v_msg_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v_ref_268_; lean_object* v___x_269_; lean_object* v_a_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_278_; 
v_ref_268_ = lean_ctor_get(v___y_265_, 2);
v___x_269_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v_msg_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_);
v_a_270_ = lean_ctor_get(v___x_269_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v___x_269_);
if (v_isSharedCheck_278_ == 0)
{
v___x_272_ = v___x_269_;
v_isShared_273_ = v_isSharedCheck_278_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_a_270_);
lean_dec(v___x_269_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_278_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_274_; lean_object* v___x_276_; 
lean_inc(v_ref_268_);
v___x_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_274_, 0, v_ref_268_);
lean_ctor_set(v___x_274_, 1, v_a_270_);
if (v_isShared_273_ == 0)
{
lean_ctor_set_tag(v___x_272_, 1);
lean_ctor_set(v___x_272_, 0, v___x_274_);
v___x_276_ = v___x_272_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_274_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
return v___x_276_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg___boxed(lean_object* v_msg_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v_msg_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_);
lean_dec(v___y_283_);
lean_dec_ref(v___y_282_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
return v_res_285_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1));
v___x_290_ = l_Lean_stringToMessageData(v___x_289_);
return v___x_290_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3));
v___x_293_ = l_Lean_stringToMessageData(v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5));
v___x_296_ = l_Lean_stringToMessageData(v___x_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(uint8_t v___x_297_, uint8_t v_refined_298_, lean_object* v___x_299_, lean_object* v_unrefinedArgType_300_, lean_object* v_binderType_301_, lean_object* v_numParams_302_, lean_object* v_xs_303_, lean_object* v_alt_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___f_312_; lean_object* v___y_314_; lean_object* v___y_315_; lean_object* v___y_316_; lean_object* v___y_317_; lean_object* v___y_318_; lean_object* v___y_332_; lean_object* v___y_333_; lean_object* v___y_334_; lean_object* v___y_335_; lean_object* v___y_336_; uint8_t v___y_337_; lean_object* v___x_345_; uint8_t v___x_346_; 
v___x_310_ = lean_box(v___x_297_);
v___x_311_ = lean_box(v_refined_298_);
lean_inc_ref(v_xs_303_);
v___f_312_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed), 13, 6);
lean_closure_set(v___f_312_, 0, v_alt_304_);
lean_closure_set(v___f_312_, 1, v___x_310_);
lean_closure_set(v___f_312_, 2, v_xs_303_);
lean_closure_set(v___f_312_, 3, v___x_311_);
lean_closure_set(v___f_312_, 4, v___x_299_);
lean_closure_set(v___f_312_, 5, v_unrefinedArgType_300_);
v___x_345_ = lean_array_get_size(v_xs_303_);
v___x_346_ = lean_nat_dec_eq(v___x_345_, v_numParams_302_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_347_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4);
v___x_348_ = l_Nat_reprFast(v_numParams_302_);
v___x_349_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
v___x_350_ = l_Lean_MessageData_ofFormat(v___x_349_);
v___x_351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_347_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
v___x_352_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6);
v___x_353_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_353_, 0, v___x_351_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
v___x_354_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_353_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_dec_ref_known(v___x_354_, 1);
goto v___jp_340_;
}
else
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_362_; 
lean_dec_ref(v___f_312_);
lean_dec_ref(v_xs_303_);
lean_dec_ref(v_binderType_301_);
v_a_355_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_362_ == 0)
{
v___x_357_ = v___x_354_;
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v___x_354_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_360_; 
if (v_isShared_358_ == 0)
{
v___x_360_ = v___x_357_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_a_355_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
}
else
{
lean_dec(v_numParams_302_);
goto v___jp_340_;
}
v___jp_313_:
{
if (lean_obj_tag(v___y_318_) == 0)
{
lean_object* v_a_319_; lean_object* v___x_320_; uint8_t v___x_321_; lean_object* v___x_322_; 
v_a_319_ = lean_ctor_get(v___y_318_, 0);
lean_inc(v_a_319_);
lean_dec_ref_known(v___y_318_, 1);
v___x_320_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0));
v___x_321_ = 0;
v___x_322_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_a_319_, v___x_320_, v___f_312_, v___x_321_, v___x_321_, v___y_315_, v___y_316_, v___y_314_, v___y_317_);
return v___x_322_;
}
else
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
lean_dec_ref(v___f_312_);
v_a_323_ = lean_ctor_get(v___y_318_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___y_318_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___y_318_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v___y_318_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_a_323_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
v___jp_331_:
{
if (v___y_337_ == 0)
{
lean_object* v___x_338_; lean_object* v___x_339_; 
lean_dec_ref(v___y_333_);
v___x_338_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2);
v___x_339_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_338_, v___y_334_, v___y_335_, v___y_332_, v___y_336_);
v___y_314_ = v___y_332_;
v___y_315_ = v___y_334_;
v___y_316_ = v___y_335_;
v___y_317_ = v___y_336_;
v___y_318_ = v___x_339_;
goto v___jp_313_;
}
else
{
v___y_314_ = v___y_332_;
v___y_315_ = v___y_334_;
v___y_316_ = v___y_335_;
v___y_317_ = v___y_336_;
v___y_318_ = v___y_333_;
goto v___jp_313_;
}
}
v___jp_340_:
{
lean_object* v___x_341_; 
v___x_341_ = l_Lean_Meta_instantiateForall(v_binderType_301_, v_xs_303_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
lean_dec_ref(v_xs_303_);
if (lean_obj_tag(v___x_341_) == 0)
{
v___y_314_ = v___y_307_;
v___y_315_ = v___y_305_;
v___y_316_ = v___y_306_;
v___y_317_ = v___y_308_;
v___y_318_ = v___x_341_;
goto v___jp_313_;
}
else
{
lean_object* v_a_342_; uint8_t v___x_343_; 
v_a_342_ = lean_ctor_get(v___x_341_, 0);
lean_inc(v_a_342_);
v___x_343_ = l_Lean_Exception_isInterrupt(v_a_342_);
if (v___x_343_ == 0)
{
uint8_t v___x_344_; 
v___x_344_ = l_Lean_Exception_isRuntime(v_a_342_);
v___y_332_ = v___y_307_;
v___y_333_ = v___x_341_;
v___y_334_ = v___y_305_;
v___y_335_ = v___y_306_;
v___y_336_ = v___y_308_;
v___y_337_ = v___x_344_;
goto v___jp_331_;
}
else
{
lean_dec(v_a_342_);
v___y_332_ = v___y_307_;
v___y_333_ = v___x_341_;
v___y_334_ = v___y_305_;
v___y_335_ = v___y_306_;
v___y_336_ = v___y_308_;
v___y_337_ = v___x_343_;
goto v___jp_331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed(lean_object* v___x_363_, lean_object* v_refined_364_, lean_object* v___x_365_, lean_object* v_unrefinedArgType_366_, lean_object* v_binderType_367_, lean_object* v_numParams_368_, lean_object* v_xs_369_, lean_object* v_alt_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
uint8_t v___x_4422__boxed_376_; uint8_t v_refined_boxed_377_; lean_object* v_res_378_; 
v___x_4422__boxed_376_ = lean_unbox(v___x_363_);
v_refined_boxed_377_ = lean_unbox(v_refined_364_);
v_res_378_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(v___x_4422__boxed_376_, v_refined_boxed_377_, v___x_365_, v_unrefinedArgType_366_, v_binderType_367_, v_numParams_368_, v_xs_369_, v_alt_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
return v_res_378_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1(void){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0));
v___x_381_ = l_Lean_stringToMessageData(v___x_380_);
return v___x_381_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__2));
v___x_384_ = l_Lean_stringToMessageData(v___x_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(lean_object* v_unrefinedArgType_385_, lean_object* v_typeNew_386_, lean_object* v_altNumParams_387_, lean_object* v_alts_388_, uint8_t v_refined_389_, lean_object* v_i_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_){
_start:
{
lean_object* v___x_396_; uint8_t v___x_397_; 
v___x_396_ = lean_array_get_size(v_alts_388_);
v___x_397_ = lean_nat_dec_lt(v_i_390_, v___x_396_);
if (v___x_397_ == 0)
{
lean_dec(v_i_390_);
lean_dec_ref(v_typeNew_386_);
lean_dec_ref(v_unrefinedArgType_385_);
if (v_refined_389_ == 0)
{
lean_object* v___x_398_; lean_object* v___x_399_; 
lean_dec_ref(v_alts_388_);
v___x_398_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1);
v___x_399_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_398_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
return v___x_399_;
}
else
{
lean_object* v___x_400_; 
v___x_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_400_, 0, v_alts_388_);
return v___x_400_;
}
}
else
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v_alt_403_; lean_object* v_numParams_404_; lean_object* v___x_405_; 
v___x_401_ = lean_unsigned_to_nat(0u);
v___x_402_ = l_Lean_instInhabitedExpr;
v_alt_403_ = lean_array_fget_borrowed(v_alts_388_, v_i_390_);
v_numParams_404_ = lean_array_get_borrowed(v___x_401_, v_altNumParams_387_, v_i_390_);
v___x_405_ = l_Lean_Meta_whnfD(v_typeNew_386_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v_a_406_; 
v_a_406_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_a_406_);
lean_dec_ref_known(v___x_405_, 1);
if (lean_obj_tag(v_a_406_) == 7)
{
lean_object* v_binderType_407_; lean_object* v_body_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___f_411_; uint8_t v___x_412_; lean_object* v___x_413_; 
v_binderType_407_ = lean_ctor_get(v_a_406_, 1);
lean_inc_ref(v_binderType_407_);
v_body_408_ = lean_ctor_get(v_a_406_, 2);
lean_inc_ref(v_body_408_);
lean_dec_ref_known(v_a_406_, 3);
v___x_409_ = lean_box(v___x_397_);
v___x_410_ = lean_box(v_refined_389_);
lean_inc_n(v_numParams_404_, 2);
lean_inc_ref(v_unrefinedArgType_385_);
v___f_411_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed), 13, 6);
lean_closure_set(v___f_411_, 0, v___x_409_);
lean_closure_set(v___f_411_, 1, v___x_410_);
lean_closure_set(v___f_411_, 2, v___x_402_);
lean_closure_set(v___f_411_, 3, v_unrefinedArgType_385_);
lean_closure_set(v___f_411_, 4, v_binderType_407_);
lean_closure_set(v___f_411_, 5, v_numParams_404_);
v___x_412_ = 0;
lean_inc(v_alt_403_);
v___x_413_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(v_alt_403_, v_numParams_404_, v___f_411_, v___x_412_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v_a_414_; lean_object* v_fst_415_; lean_object* v_snd_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; uint8_t v___x_421_; 
v_a_414_ = lean_ctor_get(v___x_413_, 0);
lean_inc(v_a_414_);
lean_dec_ref_known(v___x_413_, 1);
v_fst_415_ = lean_ctor_get(v_a_414_, 0);
lean_inc(v_fst_415_);
v_snd_416_ = lean_ctor_get(v_a_414_, 1);
lean_inc(v_snd_416_);
lean_dec(v_a_414_);
v___x_417_ = lean_expr_instantiate1(v_body_408_, v_fst_415_);
lean_dec_ref(v_body_408_);
v___x_418_ = lean_array_fset(v_alts_388_, v_i_390_, v_fst_415_);
v___x_419_ = lean_unsigned_to_nat(1u);
v___x_420_ = lean_nat_add(v_i_390_, v___x_419_);
lean_dec(v_i_390_);
v___x_421_ = lean_unbox(v_snd_416_);
lean_dec(v_snd_416_);
v_typeNew_386_ = v___x_417_;
v_alts_388_ = v___x_418_;
v_refined_389_ = v___x_421_;
v_i_390_ = v___x_420_;
goto _start;
}
else
{
lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_430_; 
lean_dec_ref(v_body_408_);
lean_dec(v_i_390_);
lean_dec_ref(v_alts_388_);
lean_dec_ref(v_unrefinedArgType_385_);
v_a_423_ = lean_ctor_get(v___x_413_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_413_);
if (v_isSharedCheck_430_ == 0)
{
v___x_425_ = v___x_413_;
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v___x_413_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_428_; 
if (v_isShared_426_ == 0)
{
v___x_428_ = v___x_425_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_a_423_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
}
else
{
lean_object* v___x_431_; lean_object* v___x_432_; 
lean_dec(v_a_406_);
lean_dec(v_i_390_);
lean_dec_ref(v_alts_388_);
lean_dec_ref(v_unrefinedArgType_385_);
v___x_431_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3);
v___x_432_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_431_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
return v___x_432_;
}
}
else
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_440_; 
lean_dec(v_i_390_);
lean_dec_ref(v_alts_388_);
lean_dec_ref(v_unrefinedArgType_385_);
v_a_433_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_440_ == 0)
{
v___x_435_ = v___x_405_;
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_405_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_438_; 
if (v_isShared_436_ == 0)
{
v___x_438_ = v___x_435_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_a_433_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___boxed(lean_object* v_unrefinedArgType_441_, lean_object* v_typeNew_442_, lean_object* v_altNumParams_443_, lean_object* v_alts_444_, lean_object* v_refined_445_, lean_object* v_i_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_){
_start:
{
uint8_t v_refined_boxed_452_; lean_object* v_res_453_; 
v_refined_boxed_452_ = lean_unbox(v_refined_445_);
v_res_453_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(v_unrefinedArgType_441_, v_typeNew_442_, v_altNumParams_443_, v_alts_444_, v_refined_boxed_452_, v_i_446_, v_a_447_, v_a_448_, v_a_449_, v_a_450_);
lean_dec(v_a_450_);
lean_dec_ref(v_a_449_);
lean_dec(v_a_448_);
lean_dec_ref(v_a_447_);
lean_dec_ref(v_altNumParams_443_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(lean_object* v_00_u03b1_454_, lean_object* v_msg_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v_msg_455_, v___y_456_, v___y_457_, v___y_458_, v___y_459_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___boxed(lean_object* v_00_u03b1_462_, lean_object* v_msg_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(v_00_u03b1_462_, v_msg_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(lean_object* v_e_470_, lean_object* v_k_471_, uint8_t v_cleanupAnnotations_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v___f_478_; uint8_t v___x_479_; uint8_t v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___f_478_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_478_, 0, v_k_471_);
v___x_479_ = 1;
v___x_480_ = 0;
v___x_481_ = lean_box(0);
v___x_482_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_470_, v___x_479_, v___x_480_, v___x_479_, v___x_480_, v___x_481_, v___f_478_, v_cleanupAnnotations_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v_a_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_490_; 
v_a_483_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_490_ == 0)
{
v___x_485_ = v___x_482_;
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_a_483_);
lean_dec(v___x_482_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_488_; 
if (v_isShared_486_ == 0)
{
v___x_488_ = v___x_485_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_a_483_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
v_a_491_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_498_ == 0)
{
v___x_493_ = v___x_482_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_482_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_a_491_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg___boxed(lean_object* v_e_499_, lean_object* v_k_500_, lean_object* v_cleanupAnnotations_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_507_; lean_object* v_res_508_; 
v_cleanupAnnotations_boxed_507_ = lean_unbox(v_cleanupAnnotations_501_);
v_res_508_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_e_499_, v_k_500_, v_cleanupAnnotations_boxed_507_, v___y_502_, v___y_503_, v___y_504_, v___y_505_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(lean_object* v_00_u03b1_509_, lean_object* v_e_510_, lean_object* v_k_511_, uint8_t v_cleanupAnnotations_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_e_510_, v_k_511_, v_cleanupAnnotations_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___boxed(lean_object* v_00_u03b1_519_, lean_object* v_e_520_, lean_object* v_k_521_, lean_object* v_cleanupAnnotations_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_528_; lean_object* v_res_529_; 
v_cleanupAnnotations_boxed_528_ = lean_unbox(v_cleanupAnnotations_522_);
v_res_529_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(v_00_u03b1_519_, v_e_520_, v_k_521_, v_cleanupAnnotations_boxed_528_, v___y_523_, v___y_524_, v___y_525_, v___y_526_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(lean_object* v___x_530_, lean_object* v_motiveArgs_531_, lean_object* v_x_532_, lean_object* v_x_533_){
_start:
{
lean_object* v_zero_534_; uint8_t v_isZero_535_; 
v_zero_534_ = lean_unsigned_to_nat(0u);
v_isZero_535_ = lean_nat_dec_eq(v_x_532_, v_zero_534_);
if (v_isZero_535_ == 1)
{
lean_dec(v_x_532_);
return v_x_533_;
}
else
{
lean_object* v_one_536_; lean_object* v_n_537_; lean_object* v___x_538_; uint8_t v___x_539_; 
v_one_536_ = lean_unsigned_to_nat(1u);
v_n_537_ = lean_nat_sub(v_x_532_, v_one_536_);
lean_dec(v_x_532_);
v___x_538_ = lean_array_fget_borrowed(v___x_530_, v_n_537_);
v___x_539_ = l_Lean_Expr_isFVar(v___x_538_);
if (v___x_539_ == 0)
{
v_x_532_ = v_n_537_;
goto _start;
}
else
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_541_ = l_Lean_instInhabitedExpr;
v___x_542_ = lean_array_get_borrowed(v___x_541_, v_motiveArgs_531_, v_n_537_);
lean_inc(v___x_538_);
v___x_543_ = l_Lean_Expr_replaceFVar(v_x_533_, v___x_538_, v___x_542_);
lean_dec_ref(v_x_533_);
v_x_532_ = v_n_537_;
v_x_533_ = v___x_543_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0___boxed(lean_object* v___x_545_, lean_object* v_motiveArgs_546_, lean_object* v_x_547_, lean_object* v_x_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_545_, v_motiveArgs_546_, v_x_547_, v_x_548_);
lean_dec_ref(v_motiveArgs_546_);
lean_dec_ref(v___x_545_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(lean_object* v___x_550_, lean_object* v_motiveArgs_551_, lean_object* v_x_552_, lean_object* v_x_553_){
_start:
{
lean_object* v_zero_554_; uint8_t v_isZero_555_; 
v_zero_554_ = lean_unsigned_to_nat(0u);
v_isZero_555_ = lean_nat_dec_eq(v_x_552_, v_zero_554_);
if (v_isZero_555_ == 1)
{
return v_x_553_;
}
else
{
lean_object* v_one_556_; lean_object* v_n_557_; lean_object* v___x_558_; uint8_t v___x_559_; 
v_one_556_ = lean_unsigned_to_nat(1u);
v_n_557_ = lean_nat_sub(v_x_552_, v_one_556_);
v___x_558_ = lean_array_fget_borrowed(v___x_550_, v_n_557_);
v___x_559_ = l_Lean_Expr_isFVar(v___x_558_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; 
v___x_560_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_550_, v_motiveArgs_551_, v_n_557_, v_x_553_);
return v___x_560_;
}
else
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_561_ = l_Lean_instInhabitedExpr;
v___x_562_ = lean_array_get_borrowed(v___x_561_, v_motiveArgs_551_, v_n_557_);
lean_inc(v___x_558_);
v___x_563_ = l_Lean_Expr_replaceFVar(v_x_553_, v___x_558_, v___x_562_);
lean_dec_ref(v_x_553_);
v___x_564_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_550_, v_motiveArgs_551_, v_n_557_, v___x_563_);
return v___x_564_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0___boxed(lean_object* v___x_565_, lean_object* v_motiveArgs_566_, lean_object* v_x_567_, lean_object* v_x_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(v___x_565_, v_motiveArgs_566_, v_x_567_, v_x_568_);
lean_dec(v_x_567_);
lean_dec_ref(v_motiveArgs_566_);
lean_dec_ref(v___x_565_);
return v_res_569_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = ((lean_object*)(l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0));
v___x_572_ = l_Lean_stringToMessageData(v___x_571_);
return v___x_572_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = ((lean_object*)(l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2));
v___x_575_ = l_Lean_stringToMessageData(v___x_574_);
return v___x_575_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = ((lean_object*)(l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4));
v___x_578_ = l_Lean_stringToMessageData(v___x_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0(lean_object* v_matcherApp_579_, lean_object* v_e_580_, lean_object* v_discrs_581_, lean_object* v_toMatcherInfo_582_, lean_object* v_remaining_583_, lean_object* v_params_584_, lean_object* v_matcherName_585_, lean_object* v_alts_586_, lean_object* v_matcherLevels_587_, lean_object* v_motiveArgs_588_, lean_object* v_motiveBody_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v___y_596_; lean_object* v___y_597_; lean_object* v___y_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v___y_602_; uint8_t v___y_603_; lean_object* v___y_604_; lean_object* v___y_605_; lean_object* v___y_606_; lean_object* v___y_607_; lean_object* v___y_608_; lean_object* v___y_609_; lean_object* v___y_610_; lean_object* v___y_646_; lean_object* v___y_647_; lean_object* v___y_648_; lean_object* v___y_649_; lean_object* v___y_650_; lean_object* v___y_651_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v_matcherLevels_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_657_; lean_object* v___y_658_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; lean_object* v___x_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_739_ = lean_array_get_size(v_motiveArgs_588_);
v___x_740_ = lean_array_get_size(v_discrs_581_);
v___x_741_ = lean_nat_dec_eq(v___x_739_, v___x_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_757_; 
lean_dec_ref(v_motiveBody_589_);
lean_dec_ref(v_motiveArgs_588_);
lean_dec_ref(v_matcherLevels_587_);
lean_dec_ref(v_alts_586_);
lean_dec(v_matcherName_585_);
lean_dec_ref(v_params_584_);
lean_dec_ref(v_toMatcherInfo_582_);
lean_dec_ref(v_discrs_581_);
lean_dec_ref(v_e_580_);
v___x_742_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_743_ = l_Nat_reprFast(v___x_740_);
v___x_744_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_744_, 0, v___x_743_);
v___x_745_ = l_Lean_MessageData_ofFormat(v___x_744_);
v___x_746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_742_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
v___x_747_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_748_, 0, v___x_746_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
v___x_749_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_748_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
v_a_750_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_757_ == 0)
{
v___x_752_ = v___x_749_;
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_750_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
else
{
v___y_699_ = v___y_590_;
v___y_700_ = v___y_591_;
v___y_701_ = v___y_592_;
v___y_702_ = v___y_593_;
goto v___jp_698_;
}
v___jp_595_:
{
lean_object* v___x_611_; 
lean_inc(v___y_610_);
lean_inc_ref(v___y_609_);
lean_inc(v___y_608_);
lean_inc_ref(v___y_607_);
v___x_611_ = lean_infer_type(v___y_600_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
lean_inc(v_a_612_);
lean_dec_ref_known(v___x_611_, 1);
v___x_613_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_579_);
v___x_614_ = lean_unsigned_to_nat(0u);
v___x_615_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(v___y_597_, v_a_612_, v___x_613_, v___y_604_, v___y_603_, v___x_614_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
lean_dec_ref(v___x_613_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_628_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_628_ == 0)
{
v___x_618_ = v___x_615_;
v_isShared_619_ = v_isSharedCheck_628_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_615_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_628_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_626_; 
v___x_620_ = lean_unsigned_to_nat(1u);
v___x_621_ = lean_mk_empty_array_with_capacity(v___x_620_);
v___x_622_ = lean_array_push(v___x_621_, v_e_580_);
v___x_623_ = l_Array_append___redArg(v___x_622_, v___y_596_);
v___x_624_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_624_, 0, v___y_602_);
lean_ctor_set(v___x_624_, 1, v___y_599_);
lean_ctor_set(v___x_624_, 2, v___y_601_);
lean_ctor_set(v___x_624_, 3, v___y_598_);
lean_ctor_set(v___x_624_, 4, v___y_606_);
lean_ctor_set(v___x_624_, 5, v___y_605_);
lean_ctor_set(v___x_624_, 6, v_a_616_);
lean_ctor_set(v___x_624_, 7, v___x_623_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_624_);
v___x_626_ = v___x_618_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_624_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
else
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_636_; 
lean_dec_ref(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec_ref(v___y_602_);
lean_dec_ref(v___y_601_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec_ref(v_e_580_);
v_a_629_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_636_ == 0)
{
v___x_631_ = v___x_615_;
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_615_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_634_; 
if (v_isShared_632_ == 0)
{
v___x_634_ = v___x_631_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_a_629_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
}
else
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
lean_dec_ref(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec_ref(v___y_604_);
lean_dec_ref(v___y_602_);
lean_dec_ref(v___y_601_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec_ref(v___y_597_);
lean_dec_ref(v_e_580_);
v_a_637_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v___x_611_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_611_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_637_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
v___jp_645_:
{
uint8_t v___x_659_; uint8_t v___x_660_; uint8_t v___x_661_; lean_object* v___x_662_; 
v___x_659_ = 0;
v___x_660_ = 1;
v___x_661_ = 1;
v___x_662_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_588_, v___y_653_, v___x_659_, v___x_660_, v___x_659_, v___x_660_, v___x_661_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
lean_inc_n(v_a_663_, 2);
lean_dec_ref_known(v___x_662_, 1);
lean_inc_ref(v_matcherLevels_654_);
v___x_664_ = lean_array_to_list(v_matcherLevels_654_);
lean_inc(v___y_649_);
v___x_665_ = l_Lean_mkConst(v___y_649_, v___x_664_);
v___x_666_ = l_Lean_mkAppN(v___x_665_, v___y_648_);
v___x_667_ = l_Lean_Expr_app___override(v___x_666_, v_a_663_);
v___x_668_ = l_Lean_mkAppN(v___x_667_, v___y_652_);
lean_inc_ref(v___x_668_);
v___x_669_ = l_Lean_Meta_isTypeCorrect(v___x_668_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; uint8_t v___x_671_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
lean_inc(v_a_670_);
lean_dec_ref_known(v___x_669_, 1);
v___x_671_ = lean_unbox(v_a_670_);
lean_dec(v_a_670_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
lean_dec_ref(v___x_668_);
lean_dec(v_a_663_);
lean_dec_ref(v_matcherLevels_654_);
lean_dec_ref(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec_ref(v___y_650_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec_ref(v_e_580_);
v___x_672_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1);
v___x_673_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_672_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
v_a_674_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_673_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_673_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_674_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
else
{
v___y_596_ = v___y_646_;
v___y_597_ = v___y_647_;
v___y_598_ = v___y_648_;
v___y_599_ = v___y_649_;
v___y_600_ = v___x_668_;
v___y_601_ = v_matcherLevels_654_;
v___y_602_ = v___y_650_;
v___y_603_ = v___x_659_;
v___y_604_ = v___y_651_;
v___y_605_ = v___y_652_;
v___y_606_ = v_a_663_;
v___y_607_ = v___y_655_;
v___y_608_ = v___y_656_;
v___y_609_ = v___y_657_;
v___y_610_ = v___y_658_;
goto v___jp_595_;
}
}
else
{
lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
lean_dec_ref(v___x_668_);
lean_dec(v_a_663_);
lean_dec_ref(v_matcherLevels_654_);
lean_dec_ref(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec_ref(v___y_650_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec_ref(v_e_580_);
v_a_682_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_689_ == 0)
{
v___x_684_ = v___x_669_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_dec(v___x_669_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_682_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_697_; 
lean_dec_ref(v_matcherLevels_654_);
lean_dec_ref(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec_ref(v___y_650_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec_ref(v_e_580_);
v_a_690_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_697_ == 0)
{
v___x_692_ = v___x_662_;
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_662_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_690_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
v___jp_698_:
{
lean_object* v___x_703_; 
lean_inc(v___y_702_);
lean_inc_ref(v___y_701_);
lean_inc(v___y_700_);
lean_inc_ref(v___y_699_);
lean_inc_ref(v_e_580_);
v___x_703_ = lean_infer_type(v_e_580_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v_a_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v_a_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc_n(v_a_704_, 2);
lean_dec_ref_known(v___x_703_, 1);
v___x_705_ = lean_array_get_size(v_discrs_581_);
v___x_706_ = l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(v_discrs_581_, v_motiveArgs_588_, v___x_705_, v_a_704_);
v___x_707_ = l_Lean_mkArrow(v___x_706_, v_motiveBody_589_, v___y_701_, v___y_702_);
if (lean_obj_tag(v___x_707_) == 0)
{
lean_object* v_uElimPos_x3f_708_; 
v_uElimPos_x3f_708_ = lean_ctor_get(v_toMatcherInfo_582_, 3);
if (lean_obj_tag(v_uElimPos_x3f_708_) == 0)
{
lean_object* v_a_709_; 
v_a_709_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_a_709_);
lean_dec_ref_known(v___x_707_, 1);
v___y_646_ = v_remaining_583_;
v___y_647_ = v_a_704_;
v___y_648_ = v_params_584_;
v___y_649_ = v_matcherName_585_;
v___y_650_ = v_toMatcherInfo_582_;
v___y_651_ = v_alts_586_;
v___y_652_ = v_discrs_581_;
v___y_653_ = v_a_709_;
v_matcherLevels_654_ = v_matcherLevels_587_;
v___y_655_ = v___y_699_;
v___y_656_ = v___y_700_;
v___y_657_ = v___y_701_;
v___y_658_ = v___y_702_;
goto v___jp_645_;
}
else
{
lean_object* v_a_710_; lean_object* v_val_711_; lean_object* v___x_712_; 
v_a_710_ = lean_ctor_get(v___x_707_, 0);
lean_inc_n(v_a_710_, 2);
lean_dec_ref_known(v___x_707_, 1);
v_val_711_ = lean_ctor_get(v_uElimPos_x3f_708_, 0);
v___x_712_ = l_Lean_Meta_getLevel(v_a_710_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v_a_713_; lean_object* v___x_714_; 
v_a_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_a_713_);
lean_dec_ref_known(v___x_712_, 1);
v___x_714_ = lean_array_set(v_matcherLevels_587_, v_val_711_, v_a_713_);
v___y_646_ = v_remaining_583_;
v___y_647_ = v_a_704_;
v___y_648_ = v_params_584_;
v___y_649_ = v_matcherName_585_;
v___y_650_ = v_toMatcherInfo_582_;
v___y_651_ = v_alts_586_;
v___y_652_ = v_discrs_581_;
v___y_653_ = v_a_710_;
v_matcherLevels_654_ = v___x_714_;
v___y_655_ = v___y_699_;
v___y_656_ = v___y_700_;
v___y_657_ = v___y_701_;
v___y_658_ = v___y_702_;
goto v___jp_645_;
}
else
{
lean_object* v_a_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_722_; 
lean_dec(v_a_710_);
lean_dec(v_a_704_);
lean_dec_ref(v_motiveArgs_588_);
lean_dec_ref(v_matcherLevels_587_);
lean_dec_ref(v_alts_586_);
lean_dec(v_matcherName_585_);
lean_dec_ref(v_params_584_);
lean_dec_ref(v_toMatcherInfo_582_);
lean_dec_ref(v_discrs_581_);
lean_dec_ref(v_e_580_);
v_a_715_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_722_ == 0)
{
v___x_717_ = v___x_712_;
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_a_715_);
lean_dec(v___x_712_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_720_; 
if (v_isShared_718_ == 0)
{
v___x_720_ = v___x_717_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_a_715_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
}
}
else
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
lean_dec(v_a_704_);
lean_dec_ref(v_motiveArgs_588_);
lean_dec_ref(v_matcherLevels_587_);
lean_dec_ref(v_alts_586_);
lean_dec(v_matcherName_585_);
lean_dec_ref(v_params_584_);
lean_dec_ref(v_toMatcherInfo_582_);
lean_dec_ref(v_discrs_581_);
lean_dec_ref(v_e_580_);
v_a_723_ = lean_ctor_get(v___x_707_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_707_);
if (v_isSharedCheck_730_ == 0)
{
v___x_725_ = v___x_707_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_707_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_723_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
else
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
lean_dec_ref(v_motiveBody_589_);
lean_dec_ref(v_motiveArgs_588_);
lean_dec_ref(v_matcherLevels_587_);
lean_dec_ref(v_alts_586_);
lean_dec(v_matcherName_585_);
lean_dec_ref(v_params_584_);
lean_dec_ref(v_toMatcherInfo_582_);
lean_dec_ref(v_discrs_581_);
lean_dec_ref(v_e_580_);
v_a_731_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_703_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_703_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_731_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___boxed(lean_object* v_matcherApp_758_, lean_object* v_e_759_, lean_object* v_discrs_760_, lean_object* v_toMatcherInfo_761_, lean_object* v_remaining_762_, lean_object* v_params_763_, lean_object* v_matcherName_764_, lean_object* v_alts_765_, lean_object* v_matcherLevels_766_, lean_object* v_motiveArgs_767_, lean_object* v_motiveBody_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Lean_Meta_MatcherApp_addArg___lam__0(v_matcherApp_758_, v_e_759_, v_discrs_760_, v_toMatcherInfo_761_, v_remaining_762_, v_params_763_, v_matcherName_764_, v_alts_765_, v_matcherLevels_766_, v_motiveArgs_767_, v_motiveBody_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec_ref(v_remaining_762_);
lean_dec_ref(v_matcherApp_758_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg(lean_object* v_matcherApp_775_, lean_object* v_e_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_){
_start:
{
lean_object* v_toMatcherInfo_782_; lean_object* v_matcherName_783_; lean_object* v_matcherLevels_784_; lean_object* v_params_785_; lean_object* v_motive_786_; lean_object* v_discrs_787_; lean_object* v_alts_788_; lean_object* v_remaining_789_; lean_object* v___f_790_; uint8_t v___x_791_; lean_object* v___x_792_; 
v_toMatcherInfo_782_ = lean_ctor_get(v_matcherApp_775_, 0);
lean_inc_ref(v_toMatcherInfo_782_);
v_matcherName_783_ = lean_ctor_get(v_matcherApp_775_, 1);
lean_inc(v_matcherName_783_);
v_matcherLevels_784_ = lean_ctor_get(v_matcherApp_775_, 2);
lean_inc_ref(v_matcherLevels_784_);
v_params_785_ = lean_ctor_get(v_matcherApp_775_, 3);
lean_inc_ref(v_params_785_);
v_motive_786_ = lean_ctor_get(v_matcherApp_775_, 4);
lean_inc_ref(v_motive_786_);
v_discrs_787_ = lean_ctor_get(v_matcherApp_775_, 5);
lean_inc_ref(v_discrs_787_);
v_alts_788_ = lean_ctor_get(v_matcherApp_775_, 6);
lean_inc_ref(v_alts_788_);
v_remaining_789_ = lean_ctor_get(v_matcherApp_775_, 7);
lean_inc_ref(v_remaining_789_);
v___f_790_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_addArg___lam__0___boxed), 16, 9);
lean_closure_set(v___f_790_, 0, v_matcherApp_775_);
lean_closure_set(v___f_790_, 1, v_e_776_);
lean_closure_set(v___f_790_, 2, v_discrs_787_);
lean_closure_set(v___f_790_, 3, v_toMatcherInfo_782_);
lean_closure_set(v___f_790_, 4, v_remaining_789_);
lean_closure_set(v___f_790_, 5, v_params_785_);
lean_closure_set(v___f_790_, 6, v_matcherName_783_);
lean_closure_set(v___f_790_, 7, v_alts_788_);
lean_closure_set(v___f_790_, 8, v_matcherLevels_784_);
v___x_791_ = 0;
v___x_792_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_786_, v___f_790_, v___x_791_, v_a_777_, v_a_778_, v_a_779_, v_a_780_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___boxed(lean_object* v_matcherApp_793_, lean_object* v_e_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lean_Meta_MatcherApp_addArg(v_matcherApp_793_, v_e_794_, v_a_795_, v_a_796_, v_a_797_, v_a_798_);
lean_dec(v_a_798_);
lean_dec_ref(v_a_797_);
lean_dec(v_a_796_);
lean_dec_ref(v_a_795_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object* v_matcherApp_801_, lean_object* v_e_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l_Lean_Meta_MatcherApp_addArg(v_matcherApp_801_, v_e_802_, v_a_803_, v_a_804_, v_a_805_, v_a_806_);
if (lean_obj_tag(v___x_808_) == 0)
{
lean_object* v_a_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_817_; 
v_a_809_ = lean_ctor_get(v___x_808_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_817_ == 0)
{
v___x_811_ = v___x_808_;
v_isShared_812_ = v_isSharedCheck_817_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_a_809_);
lean_dec(v___x_808_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_817_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_813_; lean_object* v___x_815_; 
v___x_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_813_, 0, v_a_809_);
if (v_isShared_812_ == 0)
{
lean_ctor_set(v___x_811_, 0, v___x_813_);
v___x_815_ = v___x_811_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v___x_813_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
else
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_833_; 
v_a_818_ = lean_ctor_get(v___x_808_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_833_ == 0)
{
v___x_820_ = v___x_808_;
v_isShared_821_ = v_isSharedCheck_833_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_808_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_833_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
uint8_t v___y_823_; uint8_t v___x_831_; 
v___x_831_ = l_Lean_Exception_isInterrupt(v_a_818_);
if (v___x_831_ == 0)
{
uint8_t v___x_832_; 
lean_inc(v_a_818_);
v___x_832_ = l_Lean_Exception_isRuntime(v_a_818_);
v___y_823_ = v___x_832_;
goto v___jp_822_;
}
else
{
v___y_823_ = v___x_831_;
goto v___jp_822_;
}
v___jp_822_:
{
if (v___y_823_ == 0)
{
lean_object* v___x_824_; lean_object* v___x_826_; 
lean_dec(v_a_818_);
v___x_824_ = lean_box(0);
if (v_isShared_821_ == 0)
{
lean_ctor_set_tag(v___x_820_, 0);
lean_ctor_set(v___x_820_, 0, v___x_824_);
v___x_826_ = v___x_820_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
else
{
lean_object* v___x_829_; 
if (v_isShared_821_ == 0)
{
v___x_829_ = v___x_820_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_818_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f___boxed(lean_object* v_matcherApp_834_, lean_object* v_e_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_Lean_Meta_MatcherApp_addArg_x3f(v_matcherApp_834_, v_e_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_);
lean_dec(v_a_839_);
lean_dec_ref(v_a_838_);
lean_dec(v_a_837_);
lean_dec_ref(v_a_836_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(lean_object* v_type_842_, lean_object* v_k_843_, uint8_t v_cleanupAnnotations_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
lean_object* v___f_850_; uint8_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___f_850_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_850_, 0, v_k_843_);
v___x_851_ = 0;
v___x_852_ = lean_box(0);
v___x_853_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_851_, v___x_852_, v_type_842_, v___f_850_, v_cleanupAnnotations_844_, v___x_851_, v___y_845_, v___y_846_, v___y_847_, v___y_848_);
if (lean_obj_tag(v___x_853_) == 0)
{
lean_object* v_a_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
v_a_854_ = lean_ctor_get(v___x_853_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_861_ == 0)
{
v___x_856_ = v___x_853_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_a_854_);
lean_dec(v___x_853_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
if (v_isShared_857_ == 0)
{
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_a_854_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
else
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_869_; 
v_a_862_ = lean_ctor_get(v___x_853_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_869_ == 0)
{
v___x_864_ = v___x_853_;
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_853_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_867_; 
if (v_isShared_865_ == 0)
{
v___x_867_ = v___x_864_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_a_862_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg___boxed(lean_object* v_type_870_, lean_object* v_k_871_, lean_object* v_cleanupAnnotations_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_878_; lean_object* v_res_879_; 
v_cleanupAnnotations_boxed_878_ = lean_unbox(v_cleanupAnnotations_872_);
v_res_879_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(v_type_870_, v_k_871_, v_cleanupAnnotations_boxed_878_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(lean_object* v_00_u03b1_880_, lean_object* v_type_881_, lean_object* v_k_882_, uint8_t v_cleanupAnnotations_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
lean_object* v___x_889_; 
v___x_889_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(v_type_881_, v_k_882_, v_cleanupAnnotations_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___boxed(lean_object* v_00_u03b1_890_, lean_object* v_type_891_, lean_object* v_k_892_, lean_object* v_cleanupAnnotations_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_899_; lean_object* v_res_900_; 
v_cleanupAnnotations_boxed_899_ = lean_unbox(v_cleanupAnnotations_893_);
v_res_900_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(v_00_u03b1_890_, v_type_891_, v_k_892_, v_cleanupAnnotations_boxed_899_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
lean_dec(v___y_897_);
lean_dec_ref(v___y_896_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
return v_res_900_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(size_t v_sz_901_, size_t v_i_902_, lean_object* v_bs_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_){
_start:
{
uint8_t v___x_909_; 
v___x_909_ = lean_usize_dec_lt(v_i_902_, v_sz_901_);
if (v___x_909_ == 0)
{
lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_910_ = l_unsafeCast___redArg(v_bs_903_);
lean_dec_ref(v_bs_903_);
v___x_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
return v___x_911_;
}
else
{
lean_object* v_v_912_; lean_object* v___x_913_; lean_object* v_bs_x27_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v_v_912_ = lean_array_uget(v_bs_903_, v_i_902_);
v___x_913_ = lean_unsigned_to_nat(0u);
v_bs_x27_914_ = lean_array_uset(v_bs_903_, v_i_902_, v___x_913_);
v___x_915_ = l_unsafeCast___redArg(v_v_912_);
lean_dec(v_v_912_);
lean_inc(v___y_907_);
lean_inc_ref(v___y_906_);
lean_inc(v___y_905_);
lean_inc_ref(v___y_904_);
v___x_916_ = lean_infer_type(v___x_915_, v___y_904_, v___y_905_, v___y_906_, v___y_907_);
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v_a_917_; size_t v___x_918_; size_t v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_a_917_ = lean_ctor_get(v___x_916_, 0);
lean_inc(v_a_917_);
lean_dec_ref_known(v___x_916_, 1);
v___x_918_ = ((size_t)1ULL);
v___x_919_ = lean_usize_add(v_i_902_, v___x_918_);
v___x_920_ = l_unsafeCast___redArg(v_a_917_);
lean_dec(v_a_917_);
v___x_921_ = lean_array_uset(v_bs_x27_914_, v_i_902_, v___x_920_);
v_i_902_ = v___x_919_;
v_bs_903_ = v___x_921_;
goto _start;
}
else
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
lean_dec_ref(v_bs_x27_914_);
v_a_923_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_916_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_916_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___boxed(lean_object* v_sz_931_, lean_object* v_i_932_, lean_object* v_bs_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
size_t v_sz_boxed_939_; size_t v_i_boxed_940_; lean_object* v_res_941_; 
v_sz_boxed_939_ = lean_unbox_usize(v_sz_931_);
lean_dec(v_sz_931_);
v_i_boxed_940_ = lean_unbox_usize(v_i_932_);
lean_dec(v_i_932_);
v_res_941_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(v_sz_boxed_939_, v_i_boxed_940_, v_bs_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_);
lean_dec(v___y_937_);
lean_dec_ref(v___y_936_);
lean_dec(v___y_935_);
lean_dec_ref(v___y_934_);
return v_res_941_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1(void){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_943_ = ((lean_object*)(l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__0));
v___x_944_ = l_Lean_stringToMessageData(v___x_943_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0(uint8_t v___x_945_, uint8_t v___x_946_, uint8_t v___x_947_, lean_object* v_a_948_, lean_object* v_fvs_949_, lean_object* v_body_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
lean_object* v___x_964_; uint8_t v___x_965_; 
v___x_964_ = lean_array_get_size(v_fvs_949_);
v___x_965_ = lean_nat_dec_eq(v___x_964_, v_a_948_);
if (v___x_965_ == 0)
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_981_; 
lean_dec_ref(v_fvs_949_);
v___x_966_ = lean_obj_once(&l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1, &l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1_once, _init_l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1);
v___x_967_ = l_Nat_reprFast(v_a_948_);
v___x_968_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
v___x_969_ = l_Lean_MessageData_ofFormat(v___x_968_);
v___x_970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_966_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_970_);
lean_ctor_set(v___x_972_, 1, v___x_971_);
v___x_973_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_972_, v___y_951_, v___y_952_, v___y_953_, v___y_954_);
v_a_974_ = lean_ctor_get(v___x_973_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_981_ == 0)
{
v___x_976_ = v___x_973_;
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_a_974_);
lean_dec(v___x_973_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_979_; 
if (v_isShared_977_ == 0)
{
v___x_979_ = v___x_976_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_a_974_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
else
{
lean_dec(v_a_948_);
goto v___jp_956_;
}
v___jp_956_:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_957_ = lean_unsigned_to_nat(2u);
v___x_958_ = l_Lean_Expr_getAppNumArgs(v_body_950_);
v___x_959_ = lean_nat_sub(v___x_958_, v___x_957_);
lean_dec(v___x_958_);
v___x_960_ = lean_unsigned_to_nat(1u);
v___x_961_ = lean_nat_sub(v___x_959_, v___x_960_);
lean_dec(v___x_959_);
v___x_962_ = l_Lean_Expr_getRevArg_x21(v_body_950_, v___x_961_);
v___x_963_ = l_Lean_Meta_mkLambdaFVars(v_fvs_949_, v___x_962_, v___x_945_, v___x_946_, v___x_945_, v___x_946_, v___x_947_, v___y_951_, v___y_952_, v___y_953_, v___y_954_);
return v___x_963_;
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___boxed(lean_object* v___x_982_, lean_object* v___x_983_, lean_object* v___x_984_, lean_object* v_a_985_, lean_object* v_fvs_986_, lean_object* v_body_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
uint8_t v___x_3831__boxed_993_; uint8_t v___x_3832__boxed_994_; uint8_t v___x_3833__boxed_995_; lean_object* v_res_996_; 
v___x_3831__boxed_993_ = lean_unbox(v___x_982_);
v___x_3832__boxed_994_ = lean_unbox(v___x_983_);
v___x_3833__boxed_995_ = lean_unbox(v___x_984_);
v_res_996_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0(v___x_3831__boxed_993_, v___x_3832__boxed_994_, v___x_3833__boxed_995_, v_a_985_, v_fvs_986_, v_body_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec_ref(v_body_987_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(lean_object* v_as_997_, lean_object* v_bs_998_, lean_object* v_i_999_, lean_object* v_cs_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
lean_object* v___x_1006_; uint8_t v___x_1007_; 
v___x_1006_ = lean_array_get_size(v_as_997_);
v___x_1007_ = lean_nat_dec_lt(v_i_999_, v___x_1006_);
if (v___x_1007_ == 0)
{
lean_object* v___x_1008_; 
lean_dec(v_i_999_);
v___x_1008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1008_, 0, v_cs_1000_);
return v___x_1008_;
}
else
{
lean_object* v___x_1009_; uint8_t v___x_1010_; 
v___x_1009_ = lean_array_get_size(v_bs_998_);
v___x_1010_ = lean_nat_dec_lt(v_i_999_, v___x_1009_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; 
lean_dec(v_i_999_);
v___x_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1011_, 0, v_cs_1000_);
return v___x_1011_;
}
else
{
uint8_t v___x_1012_; uint8_t v___x_1013_; lean_object* v_a_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___f_1018_; lean_object* v_b_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1012_ = 0;
v___x_1013_ = 1;
v_a_1014_ = lean_array_fget_borrowed(v_as_997_, v_i_999_);
v___x_1015_ = lean_box(v___x_1012_);
v___x_1016_ = lean_box(v___x_1010_);
v___x_1017_ = lean_box(v___x_1013_);
lean_inc_n(v_a_1014_, 2);
v___f_1018_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1018_, 0, v___x_1015_);
lean_closure_set(v___f_1018_, 1, v___x_1016_);
lean_closure_set(v___f_1018_, 2, v___x_1017_);
lean_closure_set(v___f_1018_, 3, v_a_1014_);
v_b_1019_ = lean_array_fget_borrowed(v_bs_998_, v_i_999_);
v___x_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1020_, 0, v_a_1014_);
lean_inc(v_b_1019_);
v___x_1021_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_b_1019_, v___x_1020_, v___f_1018_, v___x_1012_, v___x_1012_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v_a_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1022_);
lean_dec_ref_known(v___x_1021_, 1);
v___x_1023_ = lean_unsigned_to_nat(1u);
v___x_1024_ = lean_nat_add(v_i_999_, v___x_1023_);
lean_dec(v_i_999_);
v___x_1025_ = lean_array_push(v_cs_1000_, v_a_1022_);
v_i_999_ = v___x_1024_;
v_cs_1000_ = v___x_1025_;
goto _start;
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
lean_dec_ref(v_cs_1000_);
lean_dec(v_i_999_);
v_a_1027_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_1021_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1021_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___boxed(lean_object* v_as_1035_, lean_object* v_bs_1036_, lean_object* v_i_1037_, lean_object* v_cs_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(v_as_1035_, v_bs_1036_, v_i_1037_, v_cs_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_);
lean_dec(v___y_1042_);
lean_dec_ref(v___y_1041_);
lean_dec(v___y_1040_);
lean_dec_ref(v___y_1039_);
lean_dec_ref(v_bs_1036_);
lean_dec_ref(v_as_1035_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0(lean_object* v_matcherApp_1049_, lean_object* v_altAuxs_1050_, lean_object* v_x_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_){
_start:
{
size_t v_sz_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_3551__overap_1062_; lean_object* v___x_1063_; 
v_sz_1057_ = lean_array_size(v_altAuxs_1050_);
v___x_1058_ = l_unsafeCast___redArg(v_altAuxs_1050_);
v___x_1059_ = lean_box_usize(v_sz_1057_);
v___x_1060_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed__const__1));
v___x_1061_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___boxed), 8, 3);
lean_closure_set(v___x_1061_, 0, v___x_1059_);
lean_closure_set(v___x_1061_, 1, v___x_1060_);
lean_closure_set(v___x_1061_, 2, v___x_1058_);
v___x_3551__overap_1062_ = l_unsafeCast___redArg(v___x_1061_);
lean_dec_ref(v___x_1061_);
lean_inc(v___y_1055_);
lean_inc_ref(v___y_1054_);
lean_inc(v___y_1053_);
lean_inc_ref(v___y_1052_);
v___x_1063_ = lean_apply_5(v___x_3551__overap_1062_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, lean_box(0));
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_object* v_a_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v_a_1064_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_a_1064_);
lean_dec_ref_known(v___x_1063_, 1);
v___x_1065_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_1049_);
v___x_1066_ = lean_unsigned_to_nat(0u);
v___x_1067_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_1068_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(v___x_1065_, v_a_1064_, v___x_1066_, v___x_1067_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_);
lean_dec(v_a_1064_);
lean_dec_ref(v___x_1065_);
return v___x_1068_;
}
else
{
return v___x_1063_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed(lean_object* v_matcherApp_1069_, lean_object* v_altAuxs_1070_, lean_object* v_x_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Lean_Meta_MatcherApp_refineThrough___lam__0(v_matcherApp_1069_, v_altAuxs_1070_, v_x_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
lean_dec(v___y_1073_);
lean_dec_ref(v___y_1072_);
lean_dec_ref(v_x_1071_);
lean_dec_ref(v_altAuxs_1070_);
lean_dec_ref(v_matcherApp_1069_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(lean_object* v_motiveArgs_1078_, lean_object* v___x_1079_, lean_object* v_i_1080_, lean_object* v_a_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v_zero_1087_; uint8_t v_isZero_1088_; 
v_zero_1087_ = lean_unsigned_to_nat(0u);
v_isZero_1088_ = lean_nat_dec_eq(v_i_1080_, v_zero_1087_);
if (v_isZero_1088_ == 1)
{
lean_object* v___x_1089_; 
lean_dec(v_i_1080_);
v___x_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1089_, 0, v_a_1081_);
return v___x_1089_;
}
else
{
lean_object* v___x_1090_; lean_object* v_one_1091_; lean_object* v_n_1092_; lean_object* v_motiveArg_1093_; lean_object* v_discr_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1090_ = l_Lean_instInhabitedExpr;
v_one_1091_ = lean_unsigned_to_nat(1u);
v_n_1092_ = lean_nat_sub(v_i_1080_, v_one_1091_);
lean_dec(v_i_1080_);
v_motiveArg_1093_ = lean_array_get_borrowed(v___x_1090_, v_motiveArgs_1078_, v_n_1092_);
v_discr_1094_ = lean_array_fget_borrowed(v___x_1079_, v_n_1092_);
v___x_1095_ = lean_box(0);
lean_inc(v_discr_1094_);
v___x_1096_ = l_Lean_Meta_kabstract(v_a_1081_, v_discr_1094_, v___x_1095_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v_a_1097_; lean_object* v___x_1098_; 
v_a_1097_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_a_1097_);
lean_dec_ref_known(v___x_1096_, 1);
v___x_1098_ = lean_expr_instantiate1(v_a_1097_, v_motiveArg_1093_);
lean_dec(v_a_1097_);
v_i_1080_ = v_n_1092_;
v_a_1081_ = v___x_1098_;
goto _start;
}
else
{
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v_a_1100_; 
v_a_1100_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_a_1100_);
lean_dec_ref_known(v___x_1096_, 1);
v_i_1080_ = v_n_1092_;
v_a_1081_ = v_a_1100_;
goto _start;
}
else
{
lean_dec(v_n_1092_);
return v___x_1096_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg___boxed(lean_object* v_motiveArgs_1102_, lean_object* v___x_1103_, lean_object* v_i_1104_, lean_object* v_a_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v_motiveArgs_1102_, v___x_1103_, v_i_1104_, v_a_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_);
lean_dec(v___y_1109_);
lean_dec_ref(v___y_1108_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec_ref(v___x_1103_);
lean_dec_ref(v_motiveArgs_1102_);
return v_res_1111_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0));
v___x_1114_ = l_Lean_stringToMessageData(v___x_1113_);
return v___x_1114_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1115_ = lean_box(0);
v___x_1116_ = l_unsafeCast___redArg(v___x_1115_);
return v___x_1116_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1118_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3));
v___x_1119_ = l_Lean_stringToMessageData(v___x_1118_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1(lean_object* v___f_1120_, lean_object* v_discrs_1121_, lean_object* v_e_1122_, lean_object* v_toMatcherInfo_1123_, lean_object* v_params_1124_, lean_object* v_matcherName_1125_, lean_object* v_matcherLevels_1126_, lean_object* v_motiveArgs_1127_, lean_object* v___motiveBody_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
lean_object* v___y_1135_; lean_object* v___y_1136_; uint8_t v___y_1137_; lean_object* v___y_1138_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1141_; lean_object* v___y_1154_; lean_object* v___y_1155_; lean_object* v___y_1156_; lean_object* v___y_1157_; lean_object* v_matcherLevels_1158_; lean_object* v___y_1159_; lean_object* v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v___y_1203_; lean_object* v___y_1204_; lean_object* v___y_1205_; lean_object* v___y_1206_; lean_object* v___x_1233_; lean_object* v___x_1234_; uint8_t v___x_1235_; 
v___x_1233_ = lean_array_get_size(v_motiveArgs_1127_);
v___x_1234_ = lean_array_get_size(v_discrs_1121_);
v___x_1235_ = lean_nat_dec_eq(v___x_1233_, v___x_1234_);
if (v___x_1235_ == 0)
{
lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v_a_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1251_; 
lean_dec_ref(v_motiveArgs_1127_);
lean_dec_ref(v_matcherLevels_1126_);
lean_dec(v_matcherName_1125_);
lean_dec_ref(v_e_1122_);
lean_dec_ref(v___f_1120_);
v___x_1236_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__4, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__4_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__4);
v___x_1237_ = l_Nat_reprFast(v___x_1234_);
v___x_1238_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
v___x_1239_ = l_Lean_MessageData_ofFormat(v___x_1238_);
v___x_1240_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1236_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
v___x_1241_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_1242_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1240_);
lean_ctor_set(v___x_1242_, 1, v___x_1241_);
v___x_1243_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_1242_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_);
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1246_ = v___x_1243_;
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_a_1244_);
lean_dec(v___x_1243_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v___x_1249_; 
if (v_isShared_1247_ == 0)
{
v___x_1249_ = v___x_1246_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v_a_1244_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
else
{
v___y_1203_ = v___y_1129_;
v___y_1204_ = v___y_1130_;
v___y_1205_ = v___y_1131_;
v___y_1206_ = v___y_1132_;
goto v___jp_1202_;
}
v___jp_1134_:
{
lean_object* v___x_1142_; 
lean_inc(v___y_1141_);
lean_inc_ref(v___y_1140_);
lean_inc(v___y_1139_);
lean_inc_ref(v___y_1138_);
v___x_1142_ = lean_infer_type(v___y_1136_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v___x_1144_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
lean_inc(v_a_1143_);
lean_dec_ref_known(v___x_1142_, 1);
v___x_1144_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(v_a_1143_, v___y_1135_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
return v___x_1144_;
}
else
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
lean_dec_ref(v___y_1135_);
v_a_1145_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1142_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1142_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
v___jp_1153_:
{
uint8_t v___x_1163_; uint8_t v___x_1164_; uint8_t v___x_1165_; lean_object* v___x_1166_; 
v___x_1163_ = 0;
v___x_1164_ = 1;
v___x_1165_ = 1;
v___x_1166_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_1127_, v___y_1156_, v___x_1163_, v___x_1164_, v___x_1163_, v___x_1164_, v___x_1165_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
if (lean_obj_tag(v___x_1166_) == 0)
{
lean_object* v_a_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v_a_1167_ = lean_ctor_get(v___x_1166_, 0);
lean_inc(v_a_1167_);
lean_dec_ref_known(v___x_1166_, 1);
v___x_1168_ = lean_array_to_list(v_matcherLevels_1158_);
v___x_1169_ = l_Lean_mkConst(v___y_1157_, v___x_1168_);
v___x_1170_ = l_Lean_mkAppN(v___x_1169_, v___y_1155_);
v___x_1171_ = l_Lean_Expr_app___override(v___x_1170_, v_a_1167_);
v___x_1172_ = l_Lean_mkAppN(v___x_1171_, v___y_1154_);
lean_inc_ref(v___x_1172_);
v___x_1173_ = l_Lean_Meta_isTypeCorrect(v___x_1172_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; uint8_t v___x_1175_; 
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_a_1174_);
lean_dec_ref_known(v___x_1173_, 1);
v___x_1175_ = lean_unbox(v_a_1174_);
lean_dec(v_a_1174_);
if (v___x_1175_ == 0)
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v_a_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1185_; 
lean_dec_ref(v___x_1172_);
lean_dec_ref(v___f_1120_);
v___x_1176_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1);
v___x_1177_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_1176_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
v_a_1178_ = lean_ctor_get(v___x_1177_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1180_ = v___x_1177_;
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_a_1178_);
lean_dec(v___x_1177_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1183_; 
if (v_isShared_1181_ == 0)
{
v___x_1183_ = v___x_1180_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_a_1178_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
else
{
v___y_1135_ = v___f_1120_;
v___y_1136_ = v___x_1172_;
v___y_1137_ = v___x_1163_;
v___y_1138_ = v___y_1159_;
v___y_1139_ = v___y_1160_;
v___y_1140_ = v___y_1161_;
v___y_1141_ = v___y_1162_;
goto v___jp_1134_;
}
}
else
{
lean_object* v_a_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1193_; 
lean_dec_ref(v___x_1172_);
lean_dec_ref(v___f_1120_);
v_a_1186_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1188_ = v___x_1173_;
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_a_1186_);
lean_dec(v___x_1173_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___x_1191_; 
if (v_isShared_1189_ == 0)
{
v___x_1191_ = v___x_1188_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_a_1186_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
}
}
else
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1201_; 
lean_dec_ref(v_matcherLevels_1158_);
lean_dec(v___y_1157_);
lean_dec_ref(v___f_1120_);
v_a_1194_ = lean_ctor_get(v___x_1166_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1166_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1196_ = v___x_1166_;
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___x_1166_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1199_; 
if (v_isShared_1197_ == 0)
{
v___x_1199_ = v___x_1196_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_a_1194_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
}
v___jp_1202_:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1207_ = lean_array_get_size(v_discrs_1121_);
v___x_1208_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v_motiveArgs_1127_, v_discrs_1121_, v___x_1207_, v_e_1122_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1210_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
lean_inc_n(v_a_1209_, 2);
lean_dec_ref_known(v___x_1208_, 1);
v___x_1210_ = l_Lean_Meta_mkEq(v_a_1209_, v_a_1209_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1210_) == 0)
{
lean_object* v_uElimPos_x3f_1211_; 
v_uElimPos_x3f_1211_ = lean_ctor_get(v_toMatcherInfo_1123_, 3);
if (lean_obj_tag(v_uElimPos_x3f_1211_) == 0)
{
lean_object* v_a_1212_; 
v_a_1212_ = lean_ctor_get(v___x_1210_, 0);
lean_inc(v_a_1212_);
lean_dec_ref_known(v___x_1210_, 1);
v___y_1154_ = v_discrs_1121_;
v___y_1155_ = v_params_1124_;
v___y_1156_ = v_a_1212_;
v___y_1157_ = v_matcherName_1125_;
v_matcherLevels_1158_ = v_matcherLevels_1126_;
v___y_1159_ = v___y_1203_;
v___y_1160_ = v___y_1204_;
v___y_1161_ = v___y_1205_;
v___y_1162_ = v___y_1206_;
goto v___jp_1153_;
}
else
{
lean_object* v_a_1213_; lean_object* v_val_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v_a_1213_ = lean_ctor_get(v___x_1210_, 0);
lean_inc(v_a_1213_);
lean_dec_ref_known(v___x_1210_, 1);
v_val_1214_ = lean_ctor_get(v_uElimPos_x3f_1211_, 0);
v___x_1215_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2);
v___x_1216_ = lean_array_set(v_matcherLevels_1126_, v_val_1214_, v___x_1215_);
v___y_1154_ = v_discrs_1121_;
v___y_1155_ = v_params_1124_;
v___y_1156_ = v_a_1213_;
v___y_1157_ = v_matcherName_1125_;
v_matcherLevels_1158_ = v___x_1216_;
v___y_1159_ = v___y_1203_;
v___y_1160_ = v___y_1204_;
v___y_1161_ = v___y_1205_;
v___y_1162_ = v___y_1206_;
goto v___jp_1153_;
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
lean_dec_ref(v_motiveArgs_1127_);
lean_dec_ref(v_matcherLevels_1126_);
lean_dec(v_matcherName_1125_);
lean_dec_ref(v___f_1120_);
v_a_1217_ = lean_ctor_get(v___x_1210_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1210_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1210_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1210_);
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
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
}
else
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
lean_dec_ref(v_motiveArgs_1127_);
lean_dec_ref(v_matcherLevels_1126_);
lean_dec(v_matcherName_1125_);
lean_dec_ref(v___f_1120_);
v_a_1225_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1208_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1208_);
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
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_a_1225_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed(lean_object* v___f_1252_, lean_object* v_discrs_1253_, lean_object* v_e_1254_, lean_object* v_toMatcherInfo_1255_, lean_object* v_params_1256_, lean_object* v_matcherName_1257_, lean_object* v_matcherLevels_1258_, lean_object* v_motiveArgs_1259_, lean_object* v___motiveBody_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l_Lean_Meta_MatcherApp_refineThrough___lam__1(v___f_1252_, v_discrs_1253_, v_e_1254_, v_toMatcherInfo_1255_, v_params_1256_, v_matcherName_1257_, v_matcherLevels_1258_, v_motiveArgs_1259_, v___motiveBody_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
lean_dec(v___y_1262_);
lean_dec_ref(v___y_1261_);
lean_dec_ref(v___motiveBody_1260_);
lean_dec_ref(v_params_1256_);
lean_dec_ref(v_toMatcherInfo_1255_);
lean_dec_ref(v_discrs_1253_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough(lean_object* v_matcherApp_1267_, lean_object* v_e_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_){
_start:
{
lean_object* v_toMatcherInfo_1274_; lean_object* v_matcherName_1275_; lean_object* v_matcherLevels_1276_; lean_object* v_params_1277_; lean_object* v_motive_1278_; lean_object* v_discrs_1279_; lean_object* v___f_1280_; lean_object* v___f_1281_; uint8_t v___x_1282_; lean_object* v___x_1283_; 
v_toMatcherInfo_1274_ = lean_ctor_get(v_matcherApp_1267_, 0);
lean_inc_ref(v_toMatcherInfo_1274_);
v_matcherName_1275_ = lean_ctor_get(v_matcherApp_1267_, 1);
lean_inc(v_matcherName_1275_);
v_matcherLevels_1276_ = lean_ctor_get(v_matcherApp_1267_, 2);
lean_inc_ref(v_matcherLevels_1276_);
v_params_1277_ = lean_ctor_get(v_matcherApp_1267_, 3);
lean_inc_ref(v_params_1277_);
v_motive_1278_ = lean_ctor_get(v_matcherApp_1267_, 4);
lean_inc_ref(v_motive_1278_);
v_discrs_1279_ = lean_ctor_get(v_matcherApp_1267_, 5);
lean_inc_ref(v_discrs_1279_);
v___f_1280_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1280_, 0, v_matcherApp_1267_);
v___f_1281_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed), 14, 7);
lean_closure_set(v___f_1281_, 0, v___f_1280_);
lean_closure_set(v___f_1281_, 1, v_discrs_1279_);
lean_closure_set(v___f_1281_, 2, v_e_1268_);
lean_closure_set(v___f_1281_, 3, v_toMatcherInfo_1274_);
lean_closure_set(v___f_1281_, 4, v_params_1277_);
lean_closure_set(v___f_1281_, 5, v_matcherName_1275_);
lean_closure_set(v___f_1281_, 6, v_matcherLevels_1276_);
v___x_1282_ = 0;
v___x_1283_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_1278_, v___f_1281_, v___x_1282_, v_a_1269_, v_a_1270_, v_a_1271_, v_a_1272_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___boxed(lean_object* v_matcherApp_1284_, lean_object* v_e_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_){
_start:
{
lean_object* v_res_1291_; 
v_res_1291_ = l_Lean_Meta_MatcherApp_refineThrough(v_matcherApp_1284_, v_e_1285_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
lean_dec(v_a_1289_);
lean_dec_ref(v_a_1288_);
lean_dec(v_a_1287_);
lean_dec_ref(v_a_1286_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(lean_object* v_motiveArgs_1292_, lean_object* v___x_1293_, lean_object* v_n_1294_, lean_object* v_i_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_){
_start:
{
lean_object* v___x_1303_; 
v___x_1303_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v_motiveArgs_1292_, v___x_1293_, v_i_1295_, v_a_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___boxed(lean_object* v_motiveArgs_1304_, lean_object* v___x_1305_, lean_object* v_n_1306_, lean_object* v_i_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(v_motiveArgs_1304_, v___x_1305_, v_n_1306_, v_i_1307_, v_a_1308_, v_a_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
lean_dec(v_n_1306_);
lean_dec_ref(v___x_1305_);
lean_dec_ref(v_motiveArgs_1304_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f(lean_object* v_matcherApp_1316_, lean_object* v_e_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_){
_start:
{
lean_object* v___x_1323_; 
v___x_1323_ = l_Lean_Meta_MatcherApp_refineThrough(v_matcherApp_1316_, v_e_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1332_; 
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1326_ = v___x_1323_;
v_isShared_1327_ = v_isSharedCheck_1332_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v___x_1323_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1332_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1328_; lean_object* v___x_1330_; 
v___x_1328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1328_, 0, v_a_1324_);
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 0, v___x_1328_);
v___x_1330_ = v___x_1326_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v___x_1328_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1348_; 
v_a_1333_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1335_ = v___x_1323_;
v_isShared_1336_ = v_isSharedCheck_1348_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1323_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1348_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
uint8_t v___y_1338_; uint8_t v___x_1346_; 
v___x_1346_ = l_Lean_Exception_isInterrupt(v_a_1333_);
if (v___x_1346_ == 0)
{
uint8_t v___x_1347_; 
lean_inc(v_a_1333_);
v___x_1347_ = l_Lean_Exception_isRuntime(v_a_1333_);
v___y_1338_ = v___x_1347_;
goto v___jp_1337_;
}
else
{
v___y_1338_ = v___x_1346_;
goto v___jp_1337_;
}
v___jp_1337_:
{
if (v___y_1338_ == 0)
{
lean_object* v___x_1339_; lean_object* v___x_1341_; 
lean_dec(v_a_1333_);
v___x_1339_ = lean_box(0);
if (v_isShared_1336_ == 0)
{
lean_ctor_set_tag(v___x_1335_, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1339_);
v___x_1341_ = v___x_1335_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v___x_1339_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
return v___x_1341_;
}
}
else
{
lean_object* v___x_1344_; 
if (v_isShared_1336_ == 0)
{
v___x_1344_ = v___x_1335_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v_a_1333_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f___boxed(lean_object* v_matcherApp_1349_, lean_object* v_e_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l_Lean_Meta_MatcherApp_refineThrough_x3f(v_matcherApp_1349_, v_e_1350_, v_a_1351_, v_a_1352_, v_a_1353_, v_a_1354_);
lean_dec(v_a_1354_);
lean_dec_ref(v_a_1353_);
lean_dec(v_a_1352_);
lean_dec_ref(v_a_1351_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(lean_object* v_lctx_1357_, lean_object* v_x_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_){
_start:
{
lean_object* v_keyedConfig_1364_; uint8_t v_trackZetaDelta_1365_; lean_object* v_zetaDeltaSet_1366_; lean_object* v_localInstances_1367_; lean_object* v_defEqCtx_x3f_1368_; lean_object* v_synthPendingDepth_1369_; lean_object* v_customCanUnfoldPredicate_x3f_1370_; uint8_t v_univApprox_1371_; uint8_t v_inTypeClassResolution_1372_; uint8_t v_cacheInferType_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v_keyedConfig_1364_ = lean_ctor_get(v___y_1359_, 0);
v_trackZetaDelta_1365_ = lean_ctor_get_uint8(v___y_1359_, sizeof(void*)*7);
v_zetaDeltaSet_1366_ = lean_ctor_get(v___y_1359_, 1);
v_localInstances_1367_ = lean_ctor_get(v___y_1359_, 3);
v_defEqCtx_x3f_1368_ = lean_ctor_get(v___y_1359_, 4);
v_synthPendingDepth_1369_ = lean_ctor_get(v___y_1359_, 5);
v_customCanUnfoldPredicate_x3f_1370_ = lean_ctor_get(v___y_1359_, 6);
v_univApprox_1371_ = lean_ctor_get_uint8(v___y_1359_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1372_ = lean_ctor_get_uint8(v___y_1359_, sizeof(void*)*7 + 2);
v_cacheInferType_1373_ = lean_ctor_get_uint8(v___y_1359_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_1370_);
lean_inc(v_synthPendingDepth_1369_);
lean_inc(v_defEqCtx_x3f_1368_);
lean_inc_ref(v_localInstances_1367_);
lean_inc(v_zetaDeltaSet_1366_);
lean_inc_ref(v_keyedConfig_1364_);
v___x_1374_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1374_, 0, v_keyedConfig_1364_);
lean_ctor_set(v___x_1374_, 1, v_zetaDeltaSet_1366_);
lean_ctor_set(v___x_1374_, 2, v_lctx_1357_);
lean_ctor_set(v___x_1374_, 3, v_localInstances_1367_);
lean_ctor_set(v___x_1374_, 4, v_defEqCtx_x3f_1368_);
lean_ctor_set(v___x_1374_, 5, v_synthPendingDepth_1369_);
lean_ctor_set(v___x_1374_, 6, v_customCanUnfoldPredicate_x3f_1370_);
lean_ctor_set_uint8(v___x_1374_, sizeof(void*)*7, v_trackZetaDelta_1365_);
lean_ctor_set_uint8(v___x_1374_, sizeof(void*)*7 + 1, v_univApprox_1371_);
lean_ctor_set_uint8(v___x_1374_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1372_);
lean_ctor_set_uint8(v___x_1374_, sizeof(void*)*7 + 3, v_cacheInferType_1373_);
lean_inc(v___y_1362_);
lean_inc_ref(v___y_1361_);
lean_inc(v___y_1360_);
v___x_1375_ = lean_apply_5(v_x_1358_, v___x_1374_, v___y_1360_, v___y_1361_, v___y_1362_, lean_box(0));
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg___boxed(lean_object* v_lctx_1376_, lean_object* v_x_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1376_, v_x_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_);
lean_dec(v___y_1381_);
lean_dec_ref(v___y_1380_);
lean_dec(v___y_1379_);
lean_dec_ref(v___y_1378_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(lean_object* v_00_u03b1_1384_, lean_object* v_lctx_1385_, lean_object* v_x_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
lean_object* v___x_1392_; 
v___x_1392_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1385_, v_x_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_);
return v___x_1392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___boxed(lean_object* v_00_u03b1_1393_, lean_object* v_lctx_1394_, lean_object* v_x_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(v_00_u03b1_1393_, v_lctx_1394_, v_x_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_);
lean_dec(v___y_1399_);
lean_dec_ref(v___y_1398_);
lean_dec(v___y_1397_);
lean_dec_ref(v___y_1396_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(lean_object* v_as_1402_, size_t v_i_1403_, size_t v_stop_1404_, lean_object* v_b_1405_){
_start:
{
uint8_t v___x_1406_; 
v___x_1406_ = lean_usize_dec_eq(v_i_1403_, v_stop_1404_);
if (v___x_1406_ == 0)
{
lean_object* v___x_1407_; lean_object* v_fst_1408_; lean_object* v_snd_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; size_t v___x_1412_; size_t v___x_1413_; 
v___x_1407_ = lean_array_uget_borrowed(v_as_1402_, v_i_1403_);
v_fst_1408_ = lean_ctor_get(v___x_1407_, 0);
v_snd_1409_ = lean_ctor_get(v___x_1407_, 1);
v___x_1410_ = l_Lean_Expr_fvarId_x21(v_fst_1408_);
lean_inc(v_snd_1409_);
v___x_1411_ = l_Lean_LocalContext_setUserName(v_b_1405_, v___x_1410_, v_snd_1409_);
v___x_1412_ = ((size_t)1ULL);
v___x_1413_ = lean_usize_add(v_i_1403_, v___x_1412_);
v_i_1403_ = v___x_1413_;
v_b_1405_ = v___x_1411_;
goto _start;
}
else
{
return v_b_1405_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1___boxed(lean_object* v_as_1415_, lean_object* v_i_1416_, lean_object* v_stop_1417_, lean_object* v_b_1418_){
_start:
{
size_t v_i_boxed_1419_; size_t v_stop_boxed_1420_; lean_object* v_res_1421_; 
v_i_boxed_1419_ = lean_unbox_usize(v_i_1416_);
lean_dec(v_i_1416_);
v_stop_boxed_1420_ = lean_unbox_usize(v_stop_1417_);
lean_dec(v_stop_1417_);
v_res_1421_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(v_as_1415_, v_i_boxed_1419_, v_stop_boxed_1420_, v_b_1418_);
lean_dec_ref(v_as_1415_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(lean_object* v_fvars_1422_, lean_object* v_names_1423_, lean_object* v_k_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_){
_start:
{
lean_object* v_lctx_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; uint8_t v___x_1434_; 
v_lctx_1430_ = lean_ctor_get(v_a_1425_, 2);
v___x_1431_ = l_Array_zip___redArg(v_fvars_1422_, v_names_1423_);
v___x_1432_ = lean_unsigned_to_nat(0u);
v___x_1433_ = lean_array_get_size(v___x_1431_);
v___x_1434_ = lean_nat_dec_lt(v___x_1432_, v___x_1433_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; 
lean_dec_ref(v___x_1431_);
lean_inc_ref(v_lctx_1430_);
v___x_1435_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1430_, v_k_1424_, v_a_1425_, v_a_1426_, v_a_1427_, v_a_1428_);
return v___x_1435_;
}
else
{
uint8_t v___x_1436_; 
v___x_1436_ = lean_nat_dec_le(v___x_1433_, v___x_1433_);
if (v___x_1436_ == 0)
{
if (v___x_1434_ == 0)
{
lean_object* v___x_1437_; 
lean_dec_ref(v___x_1431_);
lean_inc_ref(v_lctx_1430_);
v___x_1437_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1430_, v_k_1424_, v_a_1425_, v_a_1426_, v_a_1427_, v_a_1428_);
return v___x_1437_;
}
else
{
size_t v___x_1438_; size_t v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; 
v___x_1438_ = ((size_t)0ULL);
v___x_1439_ = lean_usize_of_nat(v___x_1433_);
lean_inc_ref(v_lctx_1430_);
v___x_1440_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(v___x_1431_, v___x_1438_, v___x_1439_, v_lctx_1430_);
lean_dec_ref(v___x_1431_);
v___x_1441_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v___x_1440_, v_k_1424_, v_a_1425_, v_a_1426_, v_a_1427_, v_a_1428_);
return v___x_1441_;
}
}
else
{
size_t v___x_1442_; size_t v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1442_ = ((size_t)0ULL);
v___x_1443_ = lean_usize_of_nat(v___x_1433_);
lean_inc_ref(v_lctx_1430_);
v___x_1444_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(v___x_1431_, v___x_1442_, v___x_1443_, v_lctx_1430_);
lean_dec_ref(v___x_1431_);
v___x_1445_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v___x_1444_, v_k_1424_, v_a_1425_, v_a_1426_, v_a_1427_, v_a_1428_);
return v___x_1445_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg___boxed(lean_object* v_fvars_1446_, lean_object* v_names_1447_, lean_object* v_k_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_, lean_object* v_a_1453_){
_start:
{
lean_object* v_res_1454_; 
v_res_1454_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1446_, v_names_1447_, v_k_1448_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_);
lean_dec(v_a_1452_);
lean_dec_ref(v_a_1451_);
lean_dec(v_a_1450_);
lean_dec_ref(v_a_1449_);
lean_dec_ref(v_names_1447_);
lean_dec_ref(v_fvars_1446_);
return v_res_1454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(lean_object* v_00_u03b1_1455_, lean_object* v_fvars_1456_, lean_object* v_names_1457_, lean_object* v_k_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_){
_start:
{
lean_object* v___x_1464_; 
v___x_1464_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1456_, v_names_1457_, v_k_1458_, v_a_1459_, v_a_1460_, v_a_1461_, v_a_1462_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___boxed(lean_object* v_00_u03b1_1465_, lean_object* v_fvars_1466_, lean_object* v_names_1467_, lean_object* v_k_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_, lean_object* v_a_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(v_00_u03b1_1465_, v_fvars_1466_, v_names_1467_, v_k_1468_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
lean_dec(v_a_1472_);
lean_dec_ref(v_a_1471_);
lean_dec(v_a_1470_);
lean_dec_ref(v_a_1469_);
lean_dec_ref(v_names_1467_);
lean_dec_ref(v_fvars_1466_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(lean_object* v_k_1475_, lean_object* v_fvars_1476_, lean_object* v_names_1477_, lean_object* v_runInBase_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_){
_start:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1484_ = lean_apply_2(v_runInBase_1478_, lean_box(0), v_k_1475_);
v___x_1485_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1476_, v_names_1477_, v___x_1484_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed(lean_object* v_k_1486_, lean_object* v_fvars_1487_, lean_object* v_names_1488_, lean_object* v_runInBase_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_){
_start:
{
lean_object* v_res_1495_; 
v_res_1495_ = l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(v_k_1486_, v_fvars_1487_, v_names_1488_, v_runInBase_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_);
lean_dec(v___y_1493_);
lean_dec_ref(v___y_1492_);
lean_dec(v___y_1491_);
lean_dec_ref(v___y_1490_);
lean_dec_ref(v_names_1488_);
lean_dec_ref(v_fvars_1487_);
return v_res_1495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg(lean_object* v_inst_1496_, lean_object* v_inst_1497_, lean_object* v_fvars_1498_, lean_object* v_names_1499_, lean_object* v_k_1500_){
_start:
{
lean_object* v_toBind_1501_; lean_object* v_liftWith_1502_; lean_object* v_restoreM_1503_; lean_object* v___f_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
v_toBind_1501_ = lean_ctor_get(v_inst_1497_, 1);
lean_inc(v_toBind_1501_);
lean_dec_ref(v_inst_1497_);
v_liftWith_1502_ = lean_ctor_get(v_inst_1496_, 0);
lean_inc(v_liftWith_1502_);
v_restoreM_1503_ = lean_ctor_get(v_inst_1496_, 1);
lean_inc(v_restoreM_1503_);
lean_dec_ref(v_inst_1496_);
v___f_1504_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1504_, 0, v_k_1500_);
lean_closure_set(v___f_1504_, 1, v_fvars_1498_);
lean_closure_set(v___f_1504_, 2, v_names_1499_);
v___x_1505_ = lean_apply_2(v_liftWith_1502_, lean_box(0), v___f_1504_);
v___x_1506_ = lean_apply_1(v_restoreM_1503_, lean_box(0));
v___x_1507_ = lean_apply_4(v_toBind_1501_, lean_box(0), lean_box(0), v___x_1505_, v___x_1506_);
return v___x_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames(lean_object* v_n_1508_, lean_object* v_inst_1509_, lean_object* v_inst_1510_, lean_object* v_00_u03b1_1511_, lean_object* v_fvars_1512_, lean_object* v_names_1513_, lean_object* v_k_1514_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Lean_Meta_MatcherApp_withUserNames___redArg(v_inst_1509_, v_inst_1510_, v_fvars_1512_, v_names_1513_, v_k_1514_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(lean_object* v_k_1516_, lean_object* v_runInBase_1517_, lean_object* v_ys_1518_, lean_object* v_args_1519_, lean_object* v___mask_1520_, lean_object* v___bodyType_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = lean_apply_2(v_k_1516_, v_ys_1518_, v_args_1519_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
v___x_1528_ = lean_apply_7(v_runInBase_1517_, lean_box(0), v___x_1527_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, lean_box(0));
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed(lean_object* v_k_1529_, lean_object* v_runInBase_1530_, lean_object* v_ys_1531_, lean_object* v_args_1532_, lean_object* v___mask_1533_, lean_object* v___bodyType_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(v_k_1529_, v_runInBase_1530_, v_ys_1531_, v_args_1532_, v___mask_1533_, v___bodyType_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
lean_dec(v___y_1536_);
lean_dec_ref(v___y_1535_);
lean_dec_ref(v___bodyType_1534_);
lean_dec_ref(v___mask_1533_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(lean_object* v_k_1541_, lean_object* v_origAltType_1542_, lean_object* v_altInfo_1543_, lean_object* v_runInBase_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_){
_start:
{
lean_object* v___f_1550_; lean_object* v___x_1551_; 
v___f_1550_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1550_, 0, v_k_1541_);
lean_closure_set(v___f_1550_, 1, v_runInBase_1544_);
v___x_1551_ = l_Lean_Meta_Match_forallAltVarsTelescope___redArg(v_origAltType_1542_, v_altInfo_1543_, v___f_1550_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed(lean_object* v_k_1552_, lean_object* v_origAltType_1553_, lean_object* v_altInfo_1554_, lean_object* v_runInBase_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(v_k_1552_, v_origAltType_1553_, v_altInfo_1554_, v_runInBase_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_);
lean_dec(v___y_1559_);
lean_dec_ref(v___y_1558_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(lean_object* v_inst_1562_, lean_object* v_inst_1563_, lean_object* v_origAltType_1564_, lean_object* v_altInfo_1565_, lean_object* v_k_1566_){
_start:
{
lean_object* v_toBind_1567_; lean_object* v_liftWith_1568_; lean_object* v_restoreM_1569_; lean_object* v___f_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v_toBind_1567_ = lean_ctor_get(v_inst_1562_, 1);
lean_inc(v_toBind_1567_);
lean_dec_ref(v_inst_1562_);
v_liftWith_1568_ = lean_ctor_get(v_inst_1563_, 0);
lean_inc(v_liftWith_1568_);
v_restoreM_1569_ = lean_ctor_get(v_inst_1563_, 1);
lean_inc(v_restoreM_1569_);
lean_dec_ref(v_inst_1563_);
v___f_1570_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed), 9, 3);
lean_closure_set(v___f_1570_, 0, v_k_1566_);
lean_closure_set(v___f_1570_, 1, v_origAltType_1564_);
lean_closure_set(v___f_1570_, 2, v_altInfo_1565_);
v___x_1571_ = lean_apply_2(v_liftWith_1568_, lean_box(0), v___f_1570_);
v___x_1572_ = lean_apply_1(v_restoreM_1569_, lean_box(0));
v___x_1573_ = lean_apply_4(v_toBind_1567_, lean_box(0), lean_box(0), v___x_1571_, v___x_1572_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27(lean_object* v_n_1574_, lean_object* v_inst_1575_, lean_object* v_inst_1576_, lean_object* v_00_u03b1_1577_, lean_object* v_origAltType_1578_, lean_object* v_altInfo_1579_, lean_object* v_k_1580_){
_start:
{
lean_object* v___x_1581_; 
v___x_1581_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(v_inst_1575_, v_inst_1576_, v_origAltType_1578_, v_altInfo_1579_, v_k_1580_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_altParams(lean_object* v_fvars_1582_){
_start:
{
lean_object* v_args_1583_; lean_object* v_discrEqs_1584_; lean_object* v___x_1585_; 
v_args_1583_ = lean_ctor_get(v_fvars_1582_, 0);
lean_inc_ref(v_args_1583_);
v_discrEqs_1584_ = lean_ctor_get(v_fvars_1582_, 3);
lean_inc_ref(v_discrEqs_1584_);
lean_dec_ref(v_fvars_1582_);
v___x_1585_ = l_Array_append___redArg(v_args_1583_, v_discrEqs_1584_);
lean_dec_ref(v_discrEqs_1584_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_all(lean_object* v_fvars_1586_){
_start:
{
lean_object* v_fields_1587_; lean_object* v_overlaps_1588_; lean_object* v_discrEqs_1589_; lean_object* v_extraEqs_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v_fields_1587_ = lean_ctor_get(v_fvars_1586_, 1);
lean_inc_ref(v_fields_1587_);
v_overlaps_1588_ = lean_ctor_get(v_fvars_1586_, 2);
lean_inc_ref(v_overlaps_1588_);
v_discrEqs_1589_ = lean_ctor_get(v_fvars_1586_, 3);
lean_inc_ref(v_discrEqs_1589_);
v_extraEqs_1590_ = lean_ctor_get(v_fvars_1586_, 4);
lean_inc_ref(v_extraEqs_1590_);
lean_dec_ref(v_fvars_1586_);
v___x_1591_ = l_Array_append___redArg(v_fields_1587_, v_overlaps_1588_);
lean_dec_ref(v_overlaps_1588_);
v___x_1592_ = l_Array_append___redArg(v___x_1591_, v_discrEqs_1589_);
lean_dec_ref(v_discrEqs_1589_);
v___x_1593_ = l_Array_append___redArg(v___x_1592_, v_extraEqs_1590_);
lean_dec_ref(v_extraEqs_1590_);
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0(lean_object* v_inst_1594_, lean_object* v_inst_1595_, lean_object* v_x_1596_){
_start:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1597_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2);
v___x_1598_ = l_Lean_throwError___redArg(v_inst_1594_, v_inst_1595_, v___x_1597_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed(lean_object* v_inst_1599_, lean_object* v_inst_1600_, lean_object* v_x_1601_){
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__0(v_inst_1599_, v_inst_1600_, v_x_1601_);
lean_dec_ref(v_x_1601_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1(lean_object* v_inst_1603_, lean_object* v_x_1604_){
_start:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1605_ = l_Lean_Expr_fvarId_x21(v_x_1604_);
v___x_1606_ = lean_alloc_closure((void*)(l_Lean_FVarId_getUserName___boxed), 6, 1);
lean_closure_set(v___x_1606_, 0, v___x_1605_);
v___x_1607_ = lean_apply_2(v_inst_1603_, lean_box(0), v___x_1606_);
return v___x_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed(lean_object* v_inst_1608_, lean_object* v_x_1609_){
_start:
{
lean_object* v_res_1610_; 
v_res_1610_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__1(v_inst_1608_, v_x_1609_);
lean_dec_ref(v_x_1609_);
return v_res_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2(lean_object* v_inst_1611_, lean_object* v___f_1612_, lean_object* v_xs_1613_, lean_object* v_x_1614_){
_start:
{
size_t v_sz_1615_; size_t v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
v_sz_1615_ = lean_array_size(v_xs_1613_);
v___x_1616_ = ((size_t)0ULL);
v___x_1617_ = l_unsafeCast___redArg(v_xs_1613_);
v___x_1618_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_1611_, v___f_1612_, v_sz_1615_, v___x_1616_, v___x_1617_);
v___x_1619_ = l_unsafeCast___redArg(v___x_1618_);
lean_dec(v___x_1618_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed(lean_object* v_inst_1620_, lean_object* v___f_1621_, lean_object* v_xs_1622_, lean_object* v_x_1623_){
_start:
{
lean_object* v_res_1624_; 
v_res_1624_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__2(v_inst_1620_, v___f_1621_, v_xs_1622_, v_x_1623_);
lean_dec_ref(v_x_1623_);
lean_dec_ref(v_xs_1622_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3(lean_object* v_fst_1625_, lean_object* v_fst_1626_, lean_object* v___x_1627_, lean_object* v___x_1628_, lean_object* v_toPure_1629_, lean_object* v_____do__lift_1630_){
_start:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1631_ = lean_array_push(v_fst_1625_, v_____do__lift_1630_);
v___x_1632_ = lean_nat_add(v_fst_1626_, v___x_1627_);
v___x_1633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1632_);
lean_ctor_set(v___x_1633_, 1, v___x_1628_);
v___x_1634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1631_);
lean_ctor_set(v___x_1634_, 1, v___x_1633_);
v___x_1635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1634_);
v___x_1636_ = lean_apply_2(v_toPure_1629_, lean_box(0), v___x_1635_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3___boxed(lean_object* v_fst_1637_, lean_object* v_fst_1638_, lean_object* v___x_1639_, lean_object* v___x_1640_, lean_object* v_toPure_1641_, lean_object* v_____do__lift_1642_){
_start:
{
lean_object* v_res_1643_; 
v_res_1643_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__3(v_fst_1637_, v_fst_1638_, v___x_1639_, v___x_1640_, v_toPure_1641_, v_____do__lift_1642_);
lean_dec(v___x_1639_);
lean_dec(v_fst_1638_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4(uint8_t v_val_1644_, lean_object* v_a_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_){
_start:
{
if (v_val_1644_ == 0)
{
lean_object* v___x_1651_; 
v___x_1651_ = l_Lean_Meta_mkEqRefl(v_a_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_);
return v___x_1651_;
}
else
{
lean_object* v___x_1652_; 
v___x_1652_ = l_Lean_Meta_mkHEqRefl(v_a_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_);
return v___x_1652_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4___boxed(lean_object* v_val_1653_, lean_object* v_a_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_){
_start:
{
uint8_t v_val_12220__boxed_1660_; lean_object* v_res_1661_; 
v_val_12220__boxed_1660_ = lean_unbox(v_val_1653_);
v_res_1661_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__4(v_val_12220__boxed_1660_, v_a_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
lean_dec(v___y_1658_);
lean_dec_ref(v___y_1657_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__5(lean_object* v_toPure_1662_, lean_object* v_inst_1663_, lean_object* v_toBind_1664_, lean_object* v_a_1665_, lean_object* v_x_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v_snd_1668_; lean_object* v_snd_1669_; lean_object* v_fst_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1718_; 
v_snd_1668_ = lean_ctor_get(v___y_1667_, 1);
lean_inc(v_snd_1668_);
v_snd_1669_ = lean_ctor_get(v_snd_1668_, 1);
lean_inc(v_snd_1669_);
v_fst_1670_ = lean_ctor_get(v___y_1667_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___y_1667_);
if (v_isSharedCheck_1718_ == 0)
{
lean_object* v_unused_1719_; 
v_unused_1719_ = lean_ctor_get(v___y_1667_, 1);
lean_dec(v_unused_1719_);
v___x_1672_ = v___y_1667_;
v_isShared_1673_ = v_isSharedCheck_1718_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_fst_1670_);
lean_dec(v___y_1667_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1718_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v_fst_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1716_; 
v_fst_1674_ = lean_ctor_get(v_snd_1668_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v_snd_1668_);
if (v_isSharedCheck_1716_ == 0)
{
lean_object* v_unused_1717_; 
v_unused_1717_ = lean_ctor_get(v_snd_1668_, 1);
lean_dec(v_unused_1717_);
v___x_1676_ = v_snd_1668_;
v_isShared_1677_ = v_isSharedCheck_1716_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_fst_1674_);
lean_dec(v_snd_1668_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1716_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v_array_1678_; lean_object* v_start_1679_; lean_object* v_stop_1680_; uint8_t v___x_1681_; 
v_array_1678_ = lean_ctor_get(v_snd_1669_, 0);
v_start_1679_ = lean_ctor_get(v_snd_1669_, 1);
v_stop_1680_ = lean_ctor_get(v_snd_1669_, 2);
v___x_1681_ = lean_nat_dec_lt(v_start_1679_, v_stop_1680_);
if (v___x_1681_ == 0)
{
lean_object* v___x_1683_; 
lean_dec_ref(v_a_1665_);
lean_dec(v_toBind_1664_);
lean_dec(v_inst_1663_);
if (v_isShared_1677_ == 0)
{
v___x_1683_ = v___x_1676_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_fst_1674_);
lean_ctor_set(v_reuseFailAlloc_1689_, 1, v_snd_1669_);
v___x_1683_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
lean_object* v___x_1685_; 
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 1, v___x_1683_);
v___x_1685_ = v___x_1672_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v_fst_1670_);
lean_ctor_set(v_reuseFailAlloc_1688_, 1, v___x_1683_);
v___x_1685_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1685_);
v___x_1687_ = lean_apply_2(v_toPure_1662_, lean_box(0), v___x_1686_);
return v___x_1687_;
}
}
}
else
{
lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1712_; 
lean_inc(v_stop_1680_);
lean_inc(v_start_1679_);
lean_inc_ref(v_array_1678_);
v_isSharedCheck_1712_ = !lean_is_exclusive(v_snd_1669_);
if (v_isSharedCheck_1712_ == 0)
{
lean_object* v_unused_1713_; lean_object* v_unused_1714_; lean_object* v_unused_1715_; 
v_unused_1713_ = lean_ctor_get(v_snd_1669_, 2);
lean_dec(v_unused_1713_);
v_unused_1714_ = lean_ctor_get(v_snd_1669_, 1);
lean_dec(v_unused_1714_);
v_unused_1715_ = lean_ctor_get(v_snd_1669_, 0);
lean_dec(v_unused_1715_);
v___x_1691_ = v_snd_1669_;
v_isShared_1692_ = v_isSharedCheck_1712_;
goto v_resetjp_1690_;
}
else
{
lean_dec(v_snd_1669_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1712_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1697_; 
v___x_1693_ = lean_array_fget(v_array_1678_, v_start_1679_);
v___x_1694_ = lean_unsigned_to_nat(1u);
v___x_1695_ = lean_nat_add(v_start_1679_, v___x_1694_);
lean_dec(v_start_1679_);
if (v_isShared_1692_ == 0)
{
lean_ctor_set(v___x_1691_, 1, v___x_1695_);
v___x_1697_ = v___x_1691_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v_array_1678_);
lean_ctor_set(v_reuseFailAlloc_1711_, 1, v___x_1695_);
lean_ctor_set(v_reuseFailAlloc_1711_, 2, v_stop_1680_);
v___x_1697_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v___x_1699_; 
lean_dec_ref(v_a_1665_);
lean_dec(v_toBind_1664_);
lean_dec(v_inst_1663_);
if (v_isShared_1677_ == 0)
{
lean_ctor_set(v___x_1676_, 1, v___x_1697_);
v___x_1699_ = v___x_1676_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_fst_1674_);
lean_ctor_set(v_reuseFailAlloc_1705_, 1, v___x_1697_);
v___x_1699_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
lean_object* v___x_1701_; 
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 1, v___x_1699_);
v___x_1701_ = v___x_1672_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_fst_1670_);
lean_ctor_set(v_reuseFailAlloc_1704_, 1, v___x_1699_);
v___x_1701_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1701_);
v___x_1703_ = lean_apply_2(v_toPure_1662_, lean_box(0), v___x_1702_);
return v___x_1703_;
}
}
}
else
{
lean_object* v_val_1706_; lean_object* v___f_1707_; lean_object* v___f_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
lean_del_object(v___x_1676_);
lean_del_object(v___x_1672_);
v_val_1706_ = lean_ctor_get(v___x_1693_, 0);
lean_inc(v_val_1706_);
lean_dec_ref_known(v___x_1693_, 1);
v___f_1707_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_1707_, 0, v_fst_1670_);
lean_closure_set(v___f_1707_, 1, v_fst_1674_);
lean_closure_set(v___f_1707_, 2, v___x_1694_);
lean_closure_set(v___f_1707_, 3, v___x_1697_);
lean_closure_set(v___f_1707_, 4, v_toPure_1662_);
v___f_1708_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__4___boxed), 7, 2);
lean_closure_set(v___f_1708_, 0, v_val_1706_);
lean_closure_set(v___f_1708_, 1, v_a_1665_);
v___x_1709_ = lean_apply_2(v_inst_1663_, lean_box(0), v___f_1708_);
v___x_1710_ = lean_apply_4(v_toBind_1664_, lean_box(0), lean_box(0), v___x_1709_, v___f_1707_);
return v___x_1710_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6(lean_object* v_heq_1720_, lean_object* v_fst_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_){
_start:
{
lean_object* v___x_1727_; 
v___x_1727_ = l_Lean_mkArrow(v_heq_1720_, v_fst_1721_, v___y_1724_, v___y_1725_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed(lean_object* v_heq_1728_, lean_object* v_fst_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__6(v_heq_1728_, v_fst_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
lean_dec(v___y_1733_);
lean_dec_ref(v___y_1732_);
lean_dec(v___y_1731_);
lean_dec_ref(v___y_1730_);
return v_res_1735_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0(void){
_start:
{
lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1736_ = lean_box(0);
v___x_1737_ = l_unsafeCast___redArg(v___x_1736_);
return v___x_1737_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__1(void){
_start:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; 
v___x_1738_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0);
v___x_1739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1738_);
return v___x_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7(lean_object* v_heq_1740_, lean_object* v_fst_1741_, lean_object* v_fst_1742_, lean_object* v___x_1743_, lean_object* v___x_1744_, lean_object* v_toPure_1745_, lean_object* v_____x_1746_){
_start:
{
uint8_t v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1747_ = l_Lean_Expr_isHEq(v_heq_1740_);
v___x_1748_ = lean_box(v___x_1747_);
v___x_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1749_, 0, v___x_1748_);
v___x_1750_ = lean_array_push(v_fst_1741_, v___x_1749_);
v___x_1751_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__1);
v___x_1752_ = lean_array_push(v_fst_1742_, v___x_1751_);
v___x_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1743_);
lean_ctor_set(v___x_1753_, 1, v___x_1744_);
v___x_1754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1752_);
lean_ctor_set(v___x_1754_, 1, v___x_1753_);
v___x_1755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1750_);
lean_ctor_set(v___x_1755_, 1, v___x_1754_);
v___x_1756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1756_, 0, v_____x_1746_);
lean_ctor_set(v___x_1756_, 1, v___x_1755_);
v___x_1757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1757_, 0, v___x_1756_);
v___x_1758_ = lean_apply_2(v_toPure_1745_, lean_box(0), v___x_1757_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7___boxed(lean_object* v_heq_1759_, lean_object* v_fst_1760_, lean_object* v_fst_1761_, lean_object* v___x_1762_, lean_object* v___x_1763_, lean_object* v_toPure_1764_, lean_object* v_____x_1765_){
_start:
{
lean_object* v_res_1766_; 
v_res_1766_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__7(v_heq_1759_, v_fst_1760_, v_fst_1761_, v___x_1762_, v___x_1763_, v_toPure_1764_, v_____x_1765_);
lean_dec_ref(v_heq_1759_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__8(lean_object* v_fst_1767_, lean_object* v_fst_1768_, lean_object* v_fst_1769_, lean_object* v___x_1770_, lean_object* v___x_1771_, lean_object* v_toPure_1772_, lean_object* v_inst_1773_, lean_object* v_toBind_1774_, lean_object* v_heq_1775_){
_start:
{
lean_object* v___f_1776_; lean_object* v___f_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
lean_inc_ref(v_heq_1775_);
v___f_1776_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1776_, 0, v_heq_1775_);
lean_closure_set(v___f_1776_, 1, v_fst_1767_);
v___f_1777_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__7___boxed), 7, 6);
lean_closure_set(v___f_1777_, 0, v_heq_1775_);
lean_closure_set(v___f_1777_, 1, v_fst_1768_);
lean_closure_set(v___f_1777_, 2, v_fst_1769_);
lean_closure_set(v___f_1777_, 3, v___x_1770_);
lean_closure_set(v___f_1777_, 4, v___x_1771_);
lean_closure_set(v___f_1777_, 5, v_toPure_1772_);
v___x_1778_ = lean_apply_2(v_inst_1773_, lean_box(0), v___f_1776_);
v___x_1779_ = lean_apply_4(v_toBind_1774_, lean_box(0), lean_box(0), v___x_1778_, v___f_1777_);
return v___x_1779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9(lean_object* v___x_1780_, lean_object* v_a_1781_, lean_object* v_inst_1782_, lean_object* v_toBind_1783_, lean_object* v___f_1784_, lean_object* v_fst_1785_, lean_object* v_fst_1786_, lean_object* v___x_1787_, lean_object* v___x_1788_, lean_object* v___x_1789_, lean_object* v_fst_1790_, lean_object* v_toPure_1791_, uint8_t v_____do__lift_1792_){
_start:
{
if (v_____do__lift_1792_ == 0)
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
lean_dec(v_toPure_1791_);
lean_dec(v_fst_1790_);
lean_dec_ref(v___x_1789_);
lean_dec_ref(v___x_1788_);
lean_dec(v___x_1787_);
lean_dec(v_fst_1786_);
lean_dec(v_fst_1785_);
v___x_1793_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEqHEq___boxed), 7, 2);
lean_closure_set(v___x_1793_, 0, v___x_1780_);
lean_closure_set(v___x_1793_, 1, v_a_1781_);
v___x_1794_ = lean_apply_2(v_inst_1782_, lean_box(0), v___x_1793_);
v___x_1795_ = lean_apply_4(v_toBind_1783_, lean_box(0), lean_box(0), v___x_1794_, v___f_1784_);
return v___x_1795_;
}
else
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
lean_dec(v___f_1784_);
lean_dec(v_toBind_1783_);
lean_dec(v_inst_1782_);
lean_dec_ref(v_a_1781_);
lean_dec_ref(v___x_1780_);
v___x_1796_ = lean_box(0);
v___x_1797_ = lean_array_push(v_fst_1785_, v___x_1796_);
v___x_1798_ = lean_array_push(v_fst_1786_, v___x_1787_);
v___x_1799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1788_);
lean_ctor_set(v___x_1799_, 1, v___x_1789_);
v___x_1800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1800_, 0, v___x_1798_);
lean_ctor_set(v___x_1800_, 1, v___x_1799_);
v___x_1801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1797_);
lean_ctor_set(v___x_1801_, 1, v___x_1800_);
v___x_1802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1802_, 0, v_fst_1790_);
lean_ctor_set(v___x_1802_, 1, v___x_1801_);
v___x_1803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1802_);
v___x_1804_ = lean_apply_2(v_toPure_1791_, lean_box(0), v___x_1803_);
return v___x_1804_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed(lean_object* v___x_1805_, lean_object* v_a_1806_, lean_object* v_inst_1807_, lean_object* v_toBind_1808_, lean_object* v___f_1809_, lean_object* v_fst_1810_, lean_object* v_fst_1811_, lean_object* v___x_1812_, lean_object* v___x_1813_, lean_object* v___x_1814_, lean_object* v_fst_1815_, lean_object* v_toPure_1816_, lean_object* v_____do__lift_1817_){
_start:
{
uint8_t v_____do__lift_12420__boxed_1818_; lean_object* v_res_1819_; 
v_____do__lift_12420__boxed_1818_ = lean_unbox(v_____do__lift_1817_);
v_res_1819_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__9(v___x_1805_, v_a_1806_, v_inst_1807_, v_toBind_1808_, v___f_1809_, v_fst_1810_, v_fst_1811_, v___x_1812_, v___x_1813_, v___x_1814_, v_fst_1815_, v_toPure_1816_, v_____do__lift_12420__boxed_1818_);
return v_res_1819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10(lean_object* v_toPure_1820_, uint8_t v_addEqualities_1821_, lean_object* v_inst_1822_, lean_object* v_toBind_1823_, lean_object* v_a_1824_, lean_object* v_x_1825_, lean_object* v___y_1826_){
_start:
{
lean_object* v_snd_1827_; lean_object* v_snd_1828_; lean_object* v_snd_1829_; lean_object* v_snd_1830_; lean_object* v_fst_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1937_; 
v_snd_1827_ = lean_ctor_get(v___y_1826_, 1);
lean_inc(v_snd_1827_);
v_snd_1828_ = lean_ctor_get(v_snd_1827_, 1);
lean_inc(v_snd_1828_);
v_snd_1829_ = lean_ctor_get(v_snd_1828_, 1);
lean_inc(v_snd_1829_);
v_snd_1830_ = lean_ctor_get(v_snd_1829_, 1);
lean_inc(v_snd_1830_);
v_fst_1831_ = lean_ctor_get(v___y_1826_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___y_1826_);
if (v_isSharedCheck_1937_ == 0)
{
lean_object* v_unused_1938_; 
v_unused_1938_ = lean_ctor_get(v___y_1826_, 1);
lean_dec(v_unused_1938_);
v___x_1833_ = v___y_1826_;
v_isShared_1834_ = v_isSharedCheck_1937_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_fst_1831_);
lean_dec(v___y_1826_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1937_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v_fst_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1935_; 
v_fst_1835_ = lean_ctor_get(v_snd_1827_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v_snd_1827_);
if (v_isSharedCheck_1935_ == 0)
{
lean_object* v_unused_1936_; 
v_unused_1936_ = lean_ctor_get(v_snd_1827_, 1);
lean_dec(v_unused_1936_);
v___x_1837_ = v_snd_1827_;
v_isShared_1838_ = v_isSharedCheck_1935_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_fst_1835_);
lean_dec(v_snd_1827_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1935_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v_fst_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1933_; 
v_fst_1839_ = lean_ctor_get(v_snd_1828_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v_snd_1828_);
if (v_isSharedCheck_1933_ == 0)
{
lean_object* v_unused_1934_; 
v_unused_1934_ = lean_ctor_get(v_snd_1828_, 1);
lean_dec(v_unused_1934_);
v___x_1841_ = v_snd_1828_;
v_isShared_1842_ = v_isSharedCheck_1933_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_fst_1839_);
lean_dec(v_snd_1828_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1933_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v_fst_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1931_; 
v_fst_1843_ = lean_ctor_get(v_snd_1829_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v_snd_1829_);
if (v_isSharedCheck_1931_ == 0)
{
lean_object* v_unused_1932_; 
v_unused_1932_ = lean_ctor_get(v_snd_1829_, 1);
lean_dec(v_unused_1932_);
v___x_1845_ = v_snd_1829_;
v_isShared_1846_ = v_isSharedCheck_1931_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_fst_1843_);
lean_dec(v_snd_1829_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1931_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v_array_1847_; lean_object* v_start_1848_; lean_object* v_stop_1849_; uint8_t v___x_1850_; 
v_array_1847_ = lean_ctor_get(v_snd_1830_, 0);
v_start_1848_ = lean_ctor_get(v_snd_1830_, 1);
v_stop_1849_ = lean_ctor_get(v_snd_1830_, 2);
v___x_1850_ = lean_nat_dec_lt(v_start_1848_, v_stop_1849_);
if (v___x_1850_ == 0)
{
lean_object* v___x_1852_; 
lean_dec_ref(v_a_1824_);
lean_dec(v_toBind_1823_);
lean_dec(v_inst_1822_);
if (v_isShared_1846_ == 0)
{
v___x_1852_ = v___x_1845_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_fst_1843_);
lean_ctor_set(v_reuseFailAlloc_1864_, 1, v_snd_1830_);
v___x_1852_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
lean_object* v___x_1854_; 
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 1, v___x_1852_);
v___x_1854_ = v___x_1841_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_fst_1839_);
lean_ctor_set(v_reuseFailAlloc_1863_, 1, v___x_1852_);
v___x_1854_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
lean_object* v___x_1856_; 
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 1, v___x_1854_);
v___x_1856_ = v___x_1837_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_fst_1835_);
lean_ctor_set(v_reuseFailAlloc_1862_, 1, v___x_1854_);
v___x_1856_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
lean_object* v___x_1858_; 
if (v_isShared_1834_ == 0)
{
lean_ctor_set(v___x_1833_, 1, v___x_1856_);
v___x_1858_ = v___x_1833_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_fst_1831_);
lean_ctor_set(v_reuseFailAlloc_1861_, 1, v___x_1856_);
v___x_1858_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1858_);
v___x_1860_ = lean_apply_2(v_toPure_1820_, lean_box(0), v___x_1859_);
return v___x_1860_;
}
}
}
}
}
else
{
lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1927_; 
lean_inc(v_stop_1849_);
lean_inc(v_start_1848_);
lean_inc_ref(v_array_1847_);
v_isSharedCheck_1927_ = !lean_is_exclusive(v_snd_1830_);
if (v_isSharedCheck_1927_ == 0)
{
lean_object* v_unused_1928_; lean_object* v_unused_1929_; lean_object* v_unused_1930_; 
v_unused_1928_ = lean_ctor_get(v_snd_1830_, 2);
lean_dec(v_unused_1928_);
v_unused_1929_ = lean_ctor_get(v_snd_1830_, 1);
lean_dec(v_unused_1929_);
v_unused_1930_ = lean_ctor_get(v_snd_1830_, 0);
lean_dec(v_unused_1930_);
v___x_1866_ = v_snd_1830_;
v_isShared_1867_ = v_isSharedCheck_1927_;
goto v_resetjp_1865_;
}
else
{
lean_dec(v_snd_1830_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1927_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v_array_1868_; lean_object* v_start_1869_; lean_object* v_stop_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1875_; 
v_array_1868_ = lean_ctor_get(v_fst_1843_, 0);
v_start_1869_ = lean_ctor_get(v_fst_1843_, 1);
v_stop_1870_ = lean_ctor_get(v_fst_1843_, 2);
v___x_1871_ = lean_array_fget(v_array_1847_, v_start_1848_);
v___x_1872_ = lean_unsigned_to_nat(1u);
v___x_1873_ = lean_nat_add(v_start_1848_, v___x_1872_);
lean_dec(v_start_1848_);
if (v_isShared_1867_ == 0)
{
lean_ctor_set(v___x_1866_, 1, v___x_1873_);
v___x_1875_ = v___x_1866_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_array_1847_);
lean_ctor_set(v_reuseFailAlloc_1926_, 1, v___x_1873_);
lean_ctor_set(v_reuseFailAlloc_1926_, 2, v_stop_1849_);
v___x_1875_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
uint8_t v___x_1876_; 
v___x_1876_ = lean_nat_dec_lt(v_start_1869_, v_stop_1870_);
if (v___x_1876_ == 0)
{
lean_object* v___x_1878_; 
lean_dec(v___x_1871_);
lean_dec_ref(v_a_1824_);
lean_dec(v_toBind_1823_);
lean_dec(v_inst_1822_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 1, v___x_1875_);
v___x_1878_ = v___x_1845_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_fst_1843_);
lean_ctor_set(v_reuseFailAlloc_1890_, 1, v___x_1875_);
v___x_1878_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
lean_object* v___x_1880_; 
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 1, v___x_1878_);
v___x_1880_ = v___x_1841_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_fst_1839_);
lean_ctor_set(v_reuseFailAlloc_1889_, 1, v___x_1878_);
v___x_1880_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
lean_object* v___x_1882_; 
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 1, v___x_1880_);
v___x_1882_ = v___x_1837_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_fst_1835_);
lean_ctor_set(v_reuseFailAlloc_1888_, 1, v___x_1880_);
v___x_1882_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
lean_object* v___x_1884_; 
if (v_isShared_1834_ == 0)
{
lean_ctor_set(v___x_1833_, 1, v___x_1882_);
v___x_1884_ = v___x_1833_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_fst_1831_);
lean_ctor_set(v_reuseFailAlloc_1887_, 1, v___x_1882_);
v___x_1884_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1884_);
v___x_1886_ = lean_apply_2(v_toPure_1820_, lean_box(0), v___x_1885_);
return v___x_1886_;
}
}
}
}
}
else
{
lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1922_; 
lean_inc(v_stop_1870_);
lean_inc(v_start_1869_);
lean_inc_ref(v_array_1868_);
v_isSharedCheck_1922_ = !lean_is_exclusive(v_fst_1843_);
if (v_isSharedCheck_1922_ == 0)
{
lean_object* v_unused_1923_; lean_object* v_unused_1924_; lean_object* v_unused_1925_; 
v_unused_1923_ = lean_ctor_get(v_fst_1843_, 2);
lean_dec(v_unused_1923_);
v_unused_1924_ = lean_ctor_get(v_fst_1843_, 1);
lean_dec(v_unused_1924_);
v_unused_1925_ = lean_ctor_get(v_fst_1843_, 0);
lean_dec(v_unused_1925_);
v___x_1892_ = v_fst_1843_;
v_isShared_1893_ = v_isSharedCheck_1922_;
goto v_resetjp_1891_;
}
else
{
lean_dec(v_fst_1843_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1922_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1897_; 
v___x_1894_ = lean_array_fget(v_array_1868_, v_start_1869_);
v___x_1895_ = lean_nat_add(v_start_1869_, v___x_1872_);
lean_dec(v_start_1869_);
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 1, v___x_1895_);
v___x_1897_ = v___x_1892_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_array_1868_);
lean_ctor_set(v_reuseFailAlloc_1921_, 1, v___x_1895_);
lean_ctor_set(v_reuseFailAlloc_1921_, 2, v_stop_1870_);
v___x_1897_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
if (v_addEqualities_1821_ == 0)
{
lean_dec(v___x_1894_);
lean_dec_ref(v_a_1824_);
lean_dec(v_toBind_1823_);
lean_dec(v_inst_1822_);
goto v___jp_1898_;
}
else
{
if (lean_obj_tag(v___x_1871_) == 0)
{
lean_object* v___f_1916_; lean_object* v___f_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; 
lean_del_object(v___x_1845_);
lean_del_object(v___x_1841_);
lean_del_object(v___x_1837_);
lean_del_object(v___x_1833_);
lean_inc_n(v_toBind_1823_, 2);
lean_inc_n(v_inst_1822_, 2);
lean_inc(v_toPure_1820_);
lean_inc_ref(v___x_1875_);
lean_inc_ref(v___x_1897_);
lean_inc(v_fst_1839_);
lean_inc(v_fst_1835_);
lean_inc(v_fst_1831_);
v___f_1916_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__8), 9, 8);
lean_closure_set(v___f_1916_, 0, v_fst_1831_);
lean_closure_set(v___f_1916_, 1, v_fst_1835_);
lean_closure_set(v___f_1916_, 2, v_fst_1839_);
lean_closure_set(v___f_1916_, 3, v___x_1897_);
lean_closure_set(v___f_1916_, 4, v___x_1875_);
lean_closure_set(v___f_1916_, 5, v_toPure_1820_);
lean_closure_set(v___f_1916_, 6, v_inst_1822_);
lean_closure_set(v___f_1916_, 7, v_toBind_1823_);
lean_inc_ref(v_a_1824_);
v___f_1917_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed), 13, 12);
lean_closure_set(v___f_1917_, 0, v___x_1894_);
lean_closure_set(v___f_1917_, 1, v_a_1824_);
lean_closure_set(v___f_1917_, 2, v_inst_1822_);
lean_closure_set(v___f_1917_, 3, v_toBind_1823_);
lean_closure_set(v___f_1917_, 4, v___f_1916_);
lean_closure_set(v___f_1917_, 5, v_fst_1835_);
lean_closure_set(v___f_1917_, 6, v_fst_1839_);
lean_closure_set(v___f_1917_, 7, v___x_1871_);
lean_closure_set(v___f_1917_, 8, v___x_1897_);
lean_closure_set(v___f_1917_, 9, v___x_1875_);
lean_closure_set(v___f_1917_, 10, v_fst_1831_);
lean_closure_set(v___f_1917_, 11, v_toPure_1820_);
v___x_1918_ = lean_alloc_closure((void*)(l_Lean_Meta_isProof___boxed), 6, 1);
lean_closure_set(v___x_1918_, 0, v_a_1824_);
v___x_1919_ = lean_apply_2(v_inst_1822_, lean_box(0), v___x_1918_);
v___x_1920_ = lean_apply_4(v_toBind_1823_, lean_box(0), lean_box(0), v___x_1919_, v___f_1917_);
return v___x_1920_;
}
else
{
lean_dec(v___x_1894_);
lean_dec_ref(v_a_1824_);
lean_dec(v_toBind_1823_);
lean_dec(v_inst_1822_);
goto v___jp_1898_;
}
}
v___jp_1898_:
{
lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1903_; 
v___x_1899_ = lean_box(0);
v___x_1900_ = lean_array_push(v_fst_1835_, v___x_1899_);
v___x_1901_ = lean_array_push(v_fst_1839_, v___x_1871_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 1, v___x_1875_);
lean_ctor_set(v___x_1845_, 0, v___x_1897_);
v___x_1903_ = v___x_1845_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v___x_1897_);
lean_ctor_set(v_reuseFailAlloc_1915_, 1, v___x_1875_);
v___x_1903_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
lean_object* v___x_1905_; 
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 1, v___x_1903_);
lean_ctor_set(v___x_1841_, 0, v___x_1901_);
v___x_1905_ = v___x_1841_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v___x_1901_);
lean_ctor_set(v_reuseFailAlloc_1914_, 1, v___x_1903_);
v___x_1905_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
lean_object* v___x_1907_; 
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 1, v___x_1905_);
lean_ctor_set(v___x_1837_, 0, v___x_1900_);
v___x_1907_ = v___x_1837_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v___x_1900_);
lean_ctor_set(v_reuseFailAlloc_1913_, 1, v___x_1905_);
v___x_1907_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
lean_object* v___x_1909_; 
if (v_isShared_1834_ == 0)
{
lean_ctor_set(v___x_1833_, 1, v___x_1907_);
v___x_1909_ = v___x_1833_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_fst_1831_);
lean_ctor_set(v_reuseFailAlloc_1912_, 1, v___x_1907_);
v___x_1909_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1909_);
v___x_1911_ = lean_apply_2(v_toPure_1820_, lean_box(0), v___x_1910_);
return v___x_1911_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10___boxed(lean_object* v_toPure_1939_, lean_object* v_addEqualities_1940_, lean_object* v_inst_1941_, lean_object* v_toBind_1942_, lean_object* v_a_1943_, lean_object* v_x_1944_, lean_object* v___y_1945_){
_start:
{
uint8_t v_addEqualities_boxed_1946_; lean_object* v_res_1947_; 
v_addEqualities_boxed_1946_ = lean_unbox(v_addEqualities_1940_);
v_res_1947_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__10(v_toPure_1939_, v_addEqualities_boxed_1946_, v_inst_1941_, v_toBind_1942_, v_a_1943_, v_x_1944_, v___y_1945_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__11(lean_object* v_toPure_1948_, lean_object* v_____do__lift_1949_){
_start:
{
lean_object* v___x_1950_; 
v___x_1950_ = lean_apply_2(v_toPure_1948_, lean_box(0), v_____do__lift_1949_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__12(lean_object* v_toPure_1951_, lean_object* v_____do__lift_1952_){
_start:
{
lean_object* v___x_1953_; 
v___x_1953_ = lean_apply_2(v_toPure_1951_, lean_box(0), v_____do__lift_1952_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__13(lean_object* v_fst_1954_, lean_object* v_fst_1955_, lean_object* v_____do__lift_1956_, lean_object* v_toPure_1957_, lean_object* v_____do__lift_1958_){
_start:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1959_, 0, v_fst_1954_);
lean_ctor_set(v___x_1959_, 1, v_fst_1955_);
v___x_1960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1960_, 0, v_____do__lift_1958_);
lean_ctor_set(v___x_1960_, 1, v___x_1959_);
v___x_1961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1961_, 0, v_____do__lift_1956_);
lean_ctor_set(v___x_1961_, 1, v___x_1960_);
v___x_1962_ = lean_apply_2(v_toPure_1957_, lean_box(0), v___x_1961_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__14(lean_object* v_fst_1963_, lean_object* v_fst_1964_, lean_object* v_toPure_1965_, lean_object* v_fst_1966_, lean_object* v_inst_1967_, lean_object* v_toBind_1968_, lean_object* v_____do__lift_1969_){
_start:
{
lean_object* v___f_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___f_1970_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__13), 5, 4);
lean_closure_set(v___f_1970_, 0, v_fst_1963_);
lean_closure_set(v___f_1970_, 1, v_fst_1964_);
lean_closure_set(v___f_1970_, 2, v_____do__lift_1969_);
lean_closure_set(v___f_1970_, 3, v_toPure_1965_);
v___x_1971_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1971_, 0, v_fst_1966_);
v___x_1972_ = lean_apply_2(v_inst_1967_, lean_box(0), v___x_1971_);
v___x_1973_ = lean_apply_4(v_toBind_1968_, lean_box(0), lean_box(0), v___x_1972_, v___f_1970_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__15(lean_object* v_toPure_1974_, lean_object* v_inst_1975_, lean_object* v_toBind_1976_, lean_object* v_motiveArgs_1977_, lean_object* v_____s_1978_){
_start:
{
lean_object* v_snd_1979_; lean_object* v_snd_1980_; lean_object* v_fst_1981_; lean_object* v_fst_1982_; lean_object* v_fst_1983_; lean_object* v___f_1984_; uint8_t v___x_1985_; uint8_t v___x_1986_; uint8_t v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
v_snd_1979_ = lean_ctor_get(v_____s_1978_, 1);
lean_inc(v_snd_1979_);
v_snd_1980_ = lean_ctor_get(v_snd_1979_, 1);
lean_inc(v_snd_1980_);
v_fst_1981_ = lean_ctor_get(v_____s_1978_, 0);
lean_inc_n(v_fst_1981_, 2);
lean_dec_ref(v_____s_1978_);
v_fst_1982_ = lean_ctor_get(v_snd_1979_, 0);
lean_inc(v_fst_1982_);
lean_dec(v_snd_1979_);
v_fst_1983_ = lean_ctor_get(v_snd_1980_, 0);
lean_inc(v_fst_1983_);
lean_dec(v_snd_1980_);
lean_inc(v_toBind_1976_);
lean_inc(v_inst_1975_);
v___f_1984_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__14), 7, 6);
lean_closure_set(v___f_1984_, 0, v_fst_1982_);
lean_closure_set(v___f_1984_, 1, v_fst_1983_);
lean_closure_set(v___f_1984_, 2, v_toPure_1974_);
lean_closure_set(v___f_1984_, 3, v_fst_1981_);
lean_closure_set(v___f_1984_, 4, v_inst_1975_);
lean_closure_set(v___f_1984_, 5, v_toBind_1976_);
v___x_1985_ = 0;
v___x_1986_ = 1;
v___x_1987_ = 1;
v___x_1988_ = lean_box(v___x_1985_);
v___x_1989_ = lean_box(v___x_1986_);
v___x_1990_ = lean_box(v___x_1985_);
v___x_1991_ = lean_box(v___x_1986_);
v___x_1992_ = lean_box(v___x_1987_);
v___x_1993_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1993_, 0, v_motiveArgs_1977_);
lean_closure_set(v___x_1993_, 1, v_fst_1981_);
lean_closure_set(v___x_1993_, 2, v___x_1988_);
lean_closure_set(v___x_1993_, 3, v___x_1989_);
lean_closure_set(v___x_1993_, 4, v___x_1990_);
lean_closure_set(v___x_1993_, 5, v___x_1991_);
lean_closure_set(v___x_1993_, 6, v___x_1992_);
v___x_1994_ = lean_apply_2(v_inst_1975_, lean_box(0), v___x_1993_);
v___x_1995_ = lean_apply_4(v_toBind_1976_, lean_box(0), lean_box(0), v___x_1994_, v___f_1984_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16(lean_object* v_toMatcherInfo_1998_, lean_object* v_discrs_x27_1999_, lean_object* v_motiveArgs_2000_, lean_object* v_inst_2001_, lean_object* v___f_2002_, lean_object* v_toBind_2003_, lean_object* v___f_2004_, lean_object* v_motiveBody_x27_2005_){
_start:
{
lean_object* v_discrInfos_2006_; lean_object* v___x_2007_; lean_object* v_addHEqualities_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; size_t v_sz_2017_; size_t v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; 
v_discrInfos_2006_ = lean_ctor_get(v_toMatcherInfo_1998_, 4);
lean_inc_ref(v_discrInfos_2006_);
lean_dec_ref(v_toMatcherInfo_1998_);
v___x_2007_ = lean_unsigned_to_nat(0u);
v_addHEqualities_2008_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0));
v___x_2009_ = lean_array_get_size(v_discrs_x27_1999_);
v___x_2010_ = l_Array_toSubarray___redArg(v_discrs_x27_1999_, v___x_2007_, v___x_2009_);
v___x_2011_ = lean_array_get_size(v_discrInfos_2006_);
v___x_2012_ = l_Array_toSubarray___redArg(v_discrInfos_2006_, v___x_2007_, v___x_2011_);
v___x_2013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2013_, 0, v___x_2010_);
lean_ctor_set(v___x_2013_, 1, v___x_2012_);
v___x_2014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2014_, 0, v_addHEqualities_2008_);
lean_ctor_set(v___x_2014_, 1, v___x_2013_);
v___x_2015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2015_, 0, v_addHEqualities_2008_);
lean_ctor_set(v___x_2015_, 1, v___x_2014_);
v___x_2016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2016_, 0, v_motiveBody_x27_2005_);
lean_ctor_set(v___x_2016_, 1, v___x_2015_);
v_sz_2017_ = lean_array_size(v_motiveArgs_2000_);
v___x_2018_ = ((size_t)0ULL);
v___x_2019_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2001_, v_motiveArgs_2000_, v___f_2002_, v_sz_2017_, v___x_2018_, v___x_2016_);
v___x_2020_ = lean_apply_4(v_toBind_2003_, lean_box(0), lean_box(0), v___x_2019_, v___f_2004_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__17(lean_object* v_onMotive_2021_, lean_object* v_motiveArgs_2022_, lean_object* v_motiveBody_2023_, lean_object* v_toBind_2024_, lean_object* v___f_2025_, lean_object* v_____r_2026_){
_start:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2027_ = lean_apply_2(v_onMotive_2021_, v_motiveArgs_2022_, v_motiveBody_2023_);
v___x_2028_ = lean_apply_4(v_toBind_2024_, lean_box(0), lean_box(0), v___x_2027_, v___f_2025_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__18(lean_object* v___f_2029_, lean_object* v_____r_2030_){
_start:
{
lean_object* v___x_2031_; 
v___x_2031_ = lean_apply_1(v___f_2029_, v_____r_2030_);
return v___x_2031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19(lean_object* v_toPure_2032_, lean_object* v_inst_2033_, lean_object* v_toBind_2034_, lean_object* v_toMatcherInfo_2035_, lean_object* v_discrs_x27_2036_, lean_object* v_inst_2037_, lean_object* v___f_2038_, lean_object* v_onMotive_2039_, lean_object* v_discrs_2040_, lean_object* v_inst_2041_, lean_object* v_motiveArgs_2042_, lean_object* v_motiveBody_2043_){
_start:
{
lean_object* v___f_2044_; lean_object* v___f_2045_; lean_object* v___f_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; uint8_t v___x_2049_; 
lean_inc_ref_n(v_motiveArgs_2042_, 3);
lean_inc_n(v_toBind_2034_, 3);
v___f_2044_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__15), 5, 4);
lean_closure_set(v___f_2044_, 0, v_toPure_2032_);
lean_closure_set(v___f_2044_, 1, v_inst_2033_);
lean_closure_set(v___f_2044_, 2, v_toBind_2034_);
lean_closure_set(v___f_2044_, 3, v_motiveArgs_2042_);
lean_inc_ref(v_inst_2037_);
v___f_2045_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__16), 8, 7);
lean_closure_set(v___f_2045_, 0, v_toMatcherInfo_2035_);
lean_closure_set(v___f_2045_, 1, v_discrs_x27_2036_);
lean_closure_set(v___f_2045_, 2, v_motiveArgs_2042_);
lean_closure_set(v___f_2045_, 3, v_inst_2037_);
lean_closure_set(v___f_2045_, 4, v___f_2038_);
lean_closure_set(v___f_2045_, 5, v_toBind_2034_);
lean_closure_set(v___f_2045_, 6, v___f_2044_);
lean_inc_ref(v___f_2045_);
lean_inc_ref(v_motiveBody_2043_);
lean_inc(v_onMotive_2039_);
v___f_2046_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__17), 6, 5);
lean_closure_set(v___f_2046_, 0, v_onMotive_2039_);
lean_closure_set(v___f_2046_, 1, v_motiveArgs_2042_);
lean_closure_set(v___f_2046_, 2, v_motiveBody_2043_);
lean_closure_set(v___f_2046_, 3, v_toBind_2034_);
lean_closure_set(v___f_2046_, 4, v___f_2045_);
v___x_2047_ = lean_array_get_size(v_motiveArgs_2042_);
v___x_2048_ = lean_array_get_size(v_discrs_2040_);
v___x_2049_ = lean_nat_dec_eq(v___x_2047_, v___x_2048_);
if (v___x_2049_ == 0)
{
lean_object* v___f_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; 
lean_dec_ref(v___f_2045_);
lean_dec_ref(v_motiveBody_2043_);
lean_dec_ref(v_motiveArgs_2042_);
lean_dec(v_onMotive_2039_);
v___f_2050_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__18), 2, 1);
lean_closure_set(v___f_2050_, 0, v___f_2046_);
v___x_2051_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_2052_ = l_Nat_reprFast(v___x_2048_);
v___x_2053_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2052_);
v___x_2054_ = l_Lean_MessageData_ofFormat(v___x_2053_);
v___x_2055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2051_);
lean_ctor_set(v___x_2055_, 1, v___x_2054_);
v___x_2056_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_2057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2055_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
v___x_2058_ = l_Lean_throwError___redArg(v_inst_2037_, v_inst_2041_, v___x_2057_);
v___x_2059_ = lean_apply_4(v_toBind_2034_, lean_box(0), lean_box(0), v___x_2058_, v___f_2050_);
return v___x_2059_;
}
else
{
lean_object* v___x_2060_; lean_object* v___x_2061_; 
lean_dec_ref(v___f_2046_);
lean_dec_ref(v_inst_2041_);
lean_dec_ref(v_inst_2037_);
v___x_2060_ = lean_box(0);
v___x_2061_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__17(v_onMotive_2039_, v_motiveArgs_2042_, v_motiveBody_2043_, v_toBind_2034_, v___f_2045_, v___x_2060_);
return v___x_2061_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed(lean_object* v_toPure_2062_, lean_object* v_inst_2063_, lean_object* v_toBind_2064_, lean_object* v_toMatcherInfo_2065_, lean_object* v_discrs_x27_2066_, lean_object* v_inst_2067_, lean_object* v___f_2068_, lean_object* v_onMotive_2069_, lean_object* v_discrs_2070_, lean_object* v_inst_2071_, lean_object* v_motiveArgs_2072_, lean_object* v_motiveBody_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__19(v_toPure_2062_, v_inst_2063_, v_toBind_2064_, v_toMatcherInfo_2065_, v_discrs_x27_2066_, v_inst_2067_, v___f_2068_, v_onMotive_2069_, v_discrs_2070_, v_inst_2071_, v_motiveArgs_2072_, v_motiveBody_2073_);
lean_dec_ref(v_discrs_2070_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20(lean_object* v_fst_2075_, lean_object* v_numParams_2076_, lean_object* v_numDiscrs_2077_, lean_object* v_altInfos_2078_, lean_object* v_uElimPos_x3f_2079_, lean_object* v_snd_2080_, lean_object* v_overlaps_2081_, lean_object* v_matcherName_2082_, lean_object* v_matcherLevels_2083_, lean_object* v_params_x27_2084_, lean_object* v_fst_2085_, lean_object* v_discrs_x27_2086_, lean_object* v_fst_2087_, lean_object* v_toPure_2088_, lean_object* v_____do__lift_2089_){
_start:
{
lean_object* v_remaining_x27_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; 
v_remaining_x27_2090_ = l_Array_append___redArg(v_fst_2075_, v_____do__lift_2089_);
v___x_2091_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2091_, 0, v_numParams_2076_);
lean_ctor_set(v___x_2091_, 1, v_numDiscrs_2077_);
lean_ctor_set(v___x_2091_, 2, v_altInfos_2078_);
lean_ctor_set(v___x_2091_, 3, v_uElimPos_x3f_2079_);
lean_ctor_set(v___x_2091_, 4, v_snd_2080_);
lean_ctor_set(v___x_2091_, 5, v_overlaps_2081_);
v___x_2092_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2091_);
lean_ctor_set(v___x_2092_, 1, v_matcherName_2082_);
lean_ctor_set(v___x_2092_, 2, v_matcherLevels_2083_);
lean_ctor_set(v___x_2092_, 3, v_params_x27_2084_);
lean_ctor_set(v___x_2092_, 4, v_fst_2085_);
lean_ctor_set(v___x_2092_, 5, v_discrs_x27_2086_);
lean_ctor_set(v___x_2092_, 6, v_fst_2087_);
lean_ctor_set(v___x_2092_, 7, v_remaining_x27_2090_);
v___x_2093_ = lean_apply_2(v_toPure_2088_, lean_box(0), v___x_2092_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed(lean_object* v_fst_2094_, lean_object* v_numParams_2095_, lean_object* v_numDiscrs_2096_, lean_object* v_altInfos_2097_, lean_object* v_uElimPos_x3f_2098_, lean_object* v_snd_2099_, lean_object* v_overlaps_2100_, lean_object* v_matcherName_2101_, lean_object* v_matcherLevels_2102_, lean_object* v_params_x27_2103_, lean_object* v_fst_2104_, lean_object* v_discrs_x27_2105_, lean_object* v_fst_2106_, lean_object* v_toPure_2107_, lean_object* v_____do__lift_2108_){
_start:
{
lean_object* v_res_2109_; 
v_res_2109_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__20(v_fst_2094_, v_numParams_2095_, v_numDiscrs_2096_, v_altInfos_2097_, v_uElimPos_x3f_2098_, v_snd_2099_, v_overlaps_2100_, v_matcherName_2101_, v_matcherLevels_2102_, v_params_x27_2103_, v_fst_2104_, v_discrs_x27_2105_, v_fst_2106_, v_toPure_2107_, v_____do__lift_2108_);
lean_dec_ref(v_____do__lift_2108_);
return v_res_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21(lean_object* v_fst_2110_, lean_object* v_numParams_2111_, lean_object* v_numDiscrs_2112_, lean_object* v_altInfos_2113_, lean_object* v_uElimPos_x3f_2114_, lean_object* v_snd_2115_, lean_object* v_overlaps_2116_, lean_object* v_matcherName_2117_, lean_object* v_matcherLevels_2118_, lean_object* v_params_x27_2119_, lean_object* v_fst_2120_, lean_object* v_discrs_x27_2121_, lean_object* v_toPure_2122_, lean_object* v_onRemaining_2123_, lean_object* v_remaining_2124_, lean_object* v_toBind_2125_, lean_object* v_____s_2126_){
_start:
{
lean_object* v_fst_2127_; lean_object* v___f_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v_fst_2127_ = lean_ctor_get(v_____s_2126_, 0);
lean_inc(v_fst_2127_);
lean_dec_ref(v_____s_2126_);
v___f_2128_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed), 15, 14);
lean_closure_set(v___f_2128_, 0, v_fst_2110_);
lean_closure_set(v___f_2128_, 1, v_numParams_2111_);
lean_closure_set(v___f_2128_, 2, v_numDiscrs_2112_);
lean_closure_set(v___f_2128_, 3, v_altInfos_2113_);
lean_closure_set(v___f_2128_, 4, v_uElimPos_x3f_2114_);
lean_closure_set(v___f_2128_, 5, v_snd_2115_);
lean_closure_set(v___f_2128_, 6, v_overlaps_2116_);
lean_closure_set(v___f_2128_, 7, v_matcherName_2117_);
lean_closure_set(v___f_2128_, 8, v_matcherLevels_2118_);
lean_closure_set(v___f_2128_, 9, v_params_x27_2119_);
lean_closure_set(v___f_2128_, 10, v_fst_2120_);
lean_closure_set(v___f_2128_, 11, v_discrs_x27_2121_);
lean_closure_set(v___f_2128_, 12, v_fst_2127_);
lean_closure_set(v___f_2128_, 13, v_toPure_2122_);
v___x_2129_ = lean_apply_1(v_onRemaining_2123_, v_remaining_2124_);
v___x_2130_ = lean_apply_4(v_toBind_2125_, lean_box(0), lean_box(0), v___x_2129_, v___f_2128_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed(lean_object** _args){
lean_object* v_fst_2131_ = _args[0];
lean_object* v_numParams_2132_ = _args[1];
lean_object* v_numDiscrs_2133_ = _args[2];
lean_object* v_altInfos_2134_ = _args[3];
lean_object* v_uElimPos_x3f_2135_ = _args[4];
lean_object* v_snd_2136_ = _args[5];
lean_object* v_overlaps_2137_ = _args[6];
lean_object* v_matcherName_2138_ = _args[7];
lean_object* v_matcherLevels_2139_ = _args[8];
lean_object* v_params_x27_2140_ = _args[9];
lean_object* v_fst_2141_ = _args[10];
lean_object* v_discrs_x27_2142_ = _args[11];
lean_object* v_toPure_2143_ = _args[12];
lean_object* v_onRemaining_2144_ = _args[13];
lean_object* v_remaining_2145_ = _args[14];
lean_object* v_toBind_2146_ = _args[15];
lean_object* v_____s_2147_ = _args[16];
_start:
{
lean_object* v_res_2148_; 
v_res_2148_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__21(v_fst_2131_, v_numParams_2132_, v_numDiscrs_2133_, v_altInfos_2134_, v_uElimPos_x3f_2135_, v_snd_2136_, v_overlaps_2137_, v_matcherName_2138_, v_matcherLevels_2139_, v_params_x27_2140_, v_fst_2141_, v_discrs_x27_2142_, v_toPure_2143_, v_onRemaining_2144_, v_remaining_2145_, v_toBind_2146_, v_____s_2147_);
return v_res_2148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22(lean_object* v_toPure_2149_, lean_object* v_next_2150_, lean_object* v_G_2151_, lean_object* v_____do__lift_2152_){
_start:
{
if (lean_obj_tag(v_____do__lift_2152_) == 0)
{
lean_object* v_a_2153_; lean_object* v___x_2154_; 
lean_dec(v_G_2151_);
v_a_2153_ = lean_ctor_get(v_____do__lift_2152_, 0);
lean_inc(v_a_2153_);
lean_dec_ref_known(v_____do__lift_2152_, 1);
v___x_2154_ = lean_apply_2(v_toPure_2149_, lean_box(0), v_a_2153_);
return v___x_2154_;
}
else
{
lean_object* v_a_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; 
lean_dec(v_toPure_2149_);
v_a_2155_ = lean_ctor_get(v_____do__lift_2152_, 0);
lean_inc(v_a_2155_);
lean_dec_ref_known(v_____do__lift_2152_, 1);
v___x_2156_ = lean_unsigned_to_nat(1u);
v___x_2157_ = lean_nat_add(v_next_2150_, v___x_2156_);
v___x_2158_ = lean_apply_4(v_G_2151_, v___x_2157_, v_a_2155_, lean_box(0), lean_box(0));
return v___x_2158_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed(lean_object* v_toPure_2159_, lean_object* v_next_2160_, lean_object* v_G_2161_, lean_object* v_____do__lift_2162_){
_start:
{
lean_object* v_res_2163_; 
v_res_2163_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__22(v_toPure_2159_, v_next_2160_, v_G_2161_, v_____do__lift_2162_);
lean_dec(v_next_2160_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23(lean_object* v_xs_2164_, lean_object* v_ys4_2165_, uint8_t v___x_2166_, uint8_t v___x_2167_, lean_object* v_inst_2168_, lean_object* v_alt_x27_2169_){
_start:
{
lean_object* v___x_2170_; uint8_t v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___x_2170_ = l_Array_append___redArg(v_xs_2164_, v_ys4_2165_);
v___x_2171_ = 1;
v___x_2172_ = lean_box(v___x_2166_);
v___x_2173_ = lean_box(v___x_2167_);
v___x_2174_ = lean_box(v___x_2166_);
v___x_2175_ = lean_box(v___x_2167_);
v___x_2176_ = lean_box(v___x_2171_);
v___x_2177_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_2177_, 0, v___x_2170_);
lean_closure_set(v___x_2177_, 1, v_alt_x27_2169_);
lean_closure_set(v___x_2177_, 2, v___x_2172_);
lean_closure_set(v___x_2177_, 3, v___x_2173_);
lean_closure_set(v___x_2177_, 4, v___x_2174_);
lean_closure_set(v___x_2177_, 5, v___x_2175_);
lean_closure_set(v___x_2177_, 6, v___x_2176_);
v___x_2178_ = lean_apply_2(v_inst_2168_, lean_box(0), v___x_2177_);
return v___x_2178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed(lean_object* v_xs_2179_, lean_object* v_ys4_2180_, lean_object* v___x_2181_, lean_object* v___x_2182_, lean_object* v_inst_2183_, lean_object* v_alt_x27_2184_){
_start:
{
uint8_t v___x_12873__boxed_2185_; uint8_t v___x_12874__boxed_2186_; lean_object* v_res_2187_; 
v___x_12873__boxed_2185_ = lean_unbox(v___x_2181_);
v___x_12874__boxed_2186_ = lean_unbox(v___x_2182_);
v_res_2187_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__23(v_xs_2179_, v_ys4_2180_, v___x_12873__boxed_2185_, v___x_12874__boxed_2186_, v_inst_2183_, v_alt_x27_2184_);
lean_dec_ref(v_ys4_2180_);
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__24(lean_object* v_xs_2188_, lean_object* v_remaining_x27_2189_, lean_object* v_ys4_2190_, lean_object* v_onAlt_2191_, lean_object* v_next_2192_, lean_object* v_altType_2193_, lean_object* v_toBind_2194_, lean_object* v___f_2195_, lean_object* v_alt_2196_){
_start:
{
lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
lean_inc_ref(v_remaining_x27_2189_);
lean_inc_ref(v_xs_2188_);
v___x_2197_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2197_, 0, v_xs_2188_);
lean_ctor_set(v___x_2197_, 1, v_xs_2188_);
lean_ctor_set(v___x_2197_, 2, v_remaining_x27_2189_);
lean_ctor_set(v___x_2197_, 3, v_remaining_x27_2189_);
lean_ctor_set(v___x_2197_, 4, v_ys4_2190_);
v___x_2198_ = lean_apply_4(v_onAlt_2191_, v_next_2192_, v_altType_2193_, v___x_2197_, v_alt_2196_);
v___x_2199_ = lean_apply_4(v_toBind_2194_, lean_box(0), lean_box(0), v___x_2198_, v___f_2195_);
return v___x_2199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__25(lean_object* v___x_2200_, lean_object* v_xs_2201_, lean_object* v_inst_2202_, lean_object* v_toBind_2203_, lean_object* v___f_2204_, lean_object* v_inst_2205_, lean_object* v_inst_2206_, lean_object* v_names_2207_){
_start:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
lean_inc_ref(v_xs_2201_);
v___x_2208_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLambda___boxed), 7, 2);
lean_closure_set(v___x_2208_, 0, v___x_2200_);
lean_closure_set(v___x_2208_, 1, v_xs_2201_);
v___x_2209_ = lean_apply_2(v_inst_2202_, lean_box(0), v___x_2208_);
v___x_2210_ = lean_apply_4(v_toBind_2203_, lean_box(0), lean_box(0), v___x_2209_, v___f_2204_);
v___x_2211_ = l_Lean_Meta_MatcherApp_withUserNames___redArg(v_inst_2205_, v_inst_2206_, v_xs_2201_, v_names_2207_, v___x_2210_);
return v___x_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26(lean_object* v_xs_2212_, uint8_t v___x_2213_, uint8_t v___x_2214_, lean_object* v_inst_2215_, lean_object* v_remaining_x27_2216_, lean_object* v_onAlt_2217_, lean_object* v_next_2218_, lean_object* v_toBind_2219_, lean_object* v___x_2220_, lean_object* v_inst_2221_, lean_object* v_inst_2222_, lean_object* v___f_2223_, lean_object* v_ys4_2224_, lean_object* v_altType_2225_){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___f_2228_; lean_object* v___f_2229_; lean_object* v___f_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; 
v___x_2226_ = lean_box(v___x_2213_);
v___x_2227_ = lean_box(v___x_2214_);
lean_inc(v_inst_2215_);
lean_inc_ref(v_ys4_2224_);
lean_inc_ref_n(v_xs_2212_, 2);
v___f_2228_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed), 6, 5);
lean_closure_set(v___f_2228_, 0, v_xs_2212_);
lean_closure_set(v___f_2228_, 1, v_ys4_2224_);
lean_closure_set(v___f_2228_, 2, v___x_2226_);
lean_closure_set(v___f_2228_, 3, v___x_2227_);
lean_closure_set(v___f_2228_, 4, v_inst_2215_);
lean_inc_n(v_toBind_2219_, 2);
v___f_2229_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__24), 9, 8);
lean_closure_set(v___f_2229_, 0, v_xs_2212_);
lean_closure_set(v___f_2229_, 1, v_remaining_x27_2216_);
lean_closure_set(v___f_2229_, 2, v_ys4_2224_);
lean_closure_set(v___f_2229_, 3, v_onAlt_2217_);
lean_closure_set(v___f_2229_, 4, v_next_2218_);
lean_closure_set(v___f_2229_, 5, v_altType_2225_);
lean_closure_set(v___f_2229_, 6, v_toBind_2219_);
lean_closure_set(v___f_2229_, 7, v___f_2228_);
lean_inc_ref(v_inst_2222_);
lean_inc_ref(v_inst_2221_);
lean_inc_ref(v___x_2220_);
v___f_2230_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__25), 8, 7);
lean_closure_set(v___f_2230_, 0, v___x_2220_);
lean_closure_set(v___f_2230_, 1, v_xs_2212_);
lean_closure_set(v___f_2230_, 2, v_inst_2215_);
lean_closure_set(v___f_2230_, 3, v_toBind_2219_);
lean_closure_set(v___f_2230_, 4, v___f_2229_);
lean_closure_set(v___f_2230_, 5, v_inst_2221_);
lean_closure_set(v___f_2230_, 6, v_inst_2222_);
v___x_2231_ = l_Lean_Meta_lambdaTelescope___redArg(v_inst_2221_, v_inst_2222_, v___x_2220_, v___f_2223_, v___x_2213_);
v___x_2232_ = lean_apply_4(v_toBind_2219_, lean_box(0), lean_box(0), v___x_2231_, v___f_2230_);
return v___x_2232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed(lean_object* v_xs_2233_, lean_object* v___x_2234_, lean_object* v___x_2235_, lean_object* v_inst_2236_, lean_object* v_remaining_x27_2237_, lean_object* v_onAlt_2238_, lean_object* v_next_2239_, lean_object* v_toBind_2240_, lean_object* v___x_2241_, lean_object* v_inst_2242_, lean_object* v_inst_2243_, lean_object* v___f_2244_, lean_object* v_ys4_2245_, lean_object* v_altType_2246_){
_start:
{
uint8_t v___x_12926__boxed_2247_; uint8_t v___x_12927__boxed_2248_; lean_object* v_res_2249_; 
v___x_12926__boxed_2247_ = lean_unbox(v___x_2234_);
v___x_12927__boxed_2248_ = lean_unbox(v___x_2235_);
v_res_2249_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__26(v_xs_2233_, v___x_12926__boxed_2247_, v___x_12927__boxed_2248_, v_inst_2236_, v_remaining_x27_2237_, v_onAlt_2238_, v_next_2239_, v_toBind_2240_, v___x_2241_, v_inst_2242_, v_inst_2243_, v___f_2244_, v_ys4_2245_, v_altType_2246_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27(uint8_t v___x_2250_, uint8_t v___x_2251_, lean_object* v_inst_2252_, lean_object* v_remaining_x27_2253_, lean_object* v_onAlt_2254_, lean_object* v_next_2255_, lean_object* v_toBind_2256_, lean_object* v___x_2257_, lean_object* v_inst_2258_, lean_object* v_inst_2259_, lean_object* v___f_2260_, lean_object* v_fst_2261_, lean_object* v_xs_2262_, lean_object* v_altType_2263_){
_start:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___f_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2264_ = lean_box(v___x_2250_);
v___x_2265_ = lean_box(v___x_2251_);
lean_inc_ref(v_inst_2259_);
lean_inc_ref(v_inst_2258_);
v___f_2266_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed), 14, 12);
lean_closure_set(v___f_2266_, 0, v_xs_2262_);
lean_closure_set(v___f_2266_, 1, v___x_2264_);
lean_closure_set(v___f_2266_, 2, v___x_2265_);
lean_closure_set(v___f_2266_, 3, v_inst_2252_);
lean_closure_set(v___f_2266_, 4, v_remaining_x27_2253_);
lean_closure_set(v___f_2266_, 5, v_onAlt_2254_);
lean_closure_set(v___f_2266_, 6, v_next_2255_);
lean_closure_set(v___f_2266_, 7, v_toBind_2256_);
lean_closure_set(v___f_2266_, 8, v___x_2257_);
lean_closure_set(v___f_2266_, 9, v_inst_2258_);
lean_closure_set(v___f_2266_, 10, v_inst_2259_);
lean_closure_set(v___f_2266_, 11, v___f_2260_);
v___x_2267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2267_, 0, v_fst_2261_);
v___x_2268_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2258_, v_inst_2259_, v_altType_2263_, v___x_2267_, v___f_2266_, v___x_2250_, v___x_2250_);
return v___x_2268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed(lean_object* v___x_2269_, lean_object* v___x_2270_, lean_object* v_inst_2271_, lean_object* v_remaining_x27_2272_, lean_object* v_onAlt_2273_, lean_object* v_next_2274_, lean_object* v_toBind_2275_, lean_object* v___x_2276_, lean_object* v_inst_2277_, lean_object* v_inst_2278_, lean_object* v___f_2279_, lean_object* v_fst_2280_, lean_object* v_xs_2281_, lean_object* v_altType_2282_){
_start:
{
uint8_t v___x_12961__boxed_2283_; uint8_t v___x_12962__boxed_2284_; lean_object* v_res_2285_; 
v___x_12961__boxed_2283_ = lean_unbox(v___x_2269_);
v___x_12962__boxed_2284_ = lean_unbox(v___x_2270_);
v_res_2285_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__27(v___x_12961__boxed_2283_, v___x_12962__boxed_2284_, v_inst_2271_, v_remaining_x27_2272_, v_onAlt_2273_, v_next_2274_, v_toBind_2275_, v___x_2276_, v_inst_2277_, v_inst_2278_, v___f_2279_, v_fst_2280_, v_xs_2281_, v_altType_2282_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__28(lean_object* v_fst_2286_, lean_object* v___x_2287_, lean_object* v___x_2288_, lean_object* v___x_2289_, lean_object* v_toPure_2290_, lean_object* v_alt_x27_2291_){
_start:
{
lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2292_ = lean_array_push(v_fst_2286_, v_alt_x27_2291_);
v___x_2293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2287_);
lean_ctor_set(v___x_2293_, 1, v___x_2288_);
v___x_2294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2289_);
lean_ctor_set(v___x_2294_, 1, v___x_2293_);
v___x_2295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2292_);
lean_ctor_set(v___x_2295_, 1, v___x_2294_);
v___x_2296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2295_);
v___x_2297_ = lean_apply_2(v_toPure_2290_, lean_box(0), v___x_2296_);
return v___x_2297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29(lean_object* v___x_2298_, lean_object* v_toPure_2299_, lean_object* v_toBind_2300_, lean_object* v___f_2301_, uint8_t v___x_2302_, uint8_t v___x_2303_, lean_object* v_inst_2304_, lean_object* v_remaining_x27_2305_, lean_object* v_onAlt_2306_, lean_object* v_inst_2307_, lean_object* v_inst_2308_, lean_object* v___f_2309_, lean_object* v_fst_2310_, lean_object* v_next_2311_, lean_object* v_acc_2312_, lean_object* v_h_2313_, lean_object* v_G_2314_){
_start:
{
uint8_t v___x_2315_; 
v___x_2315_ = lean_nat_dec_lt(v_next_2311_, v___x_2298_);
if (v___x_2315_ == 0)
{
lean_object* v___x_2316_; 
lean_dec(v_G_2314_);
lean_dec(v_next_2311_);
lean_dec(v_fst_2310_);
lean_dec(v___f_2309_);
lean_dec_ref(v_inst_2308_);
lean_dec_ref(v_inst_2307_);
lean_dec(v_onAlt_2306_);
lean_dec_ref(v_remaining_x27_2305_);
lean_dec(v_inst_2304_);
lean_dec(v___f_2301_);
lean_dec(v_toBind_2300_);
v___x_2316_ = lean_apply_2(v_toPure_2299_, lean_box(0), v_acc_2312_);
return v___x_2316_;
}
else
{
lean_object* v_snd_2317_; lean_object* v_snd_2318_; lean_object* v_snd_2319_; lean_object* v_fst_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2430_; 
v_snd_2317_ = lean_ctor_get(v_acc_2312_, 1);
lean_inc(v_snd_2317_);
v_snd_2318_ = lean_ctor_get(v_snd_2317_, 1);
lean_inc(v_snd_2318_);
v_snd_2319_ = lean_ctor_get(v_snd_2318_, 1);
lean_inc(v_snd_2319_);
v_fst_2320_ = lean_ctor_get(v_acc_2312_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v_acc_2312_);
if (v_isSharedCheck_2430_ == 0)
{
lean_object* v_unused_2431_; 
v_unused_2431_ = lean_ctor_get(v_acc_2312_, 1);
lean_dec(v_unused_2431_);
v___x_2322_ = v_acc_2312_;
v_isShared_2323_ = v_isSharedCheck_2430_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_fst_2320_);
lean_dec(v_acc_2312_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2430_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v_fst_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2428_; 
v_fst_2324_ = lean_ctor_get(v_snd_2317_, 0);
v_isSharedCheck_2428_ = !lean_is_exclusive(v_snd_2317_);
if (v_isSharedCheck_2428_ == 0)
{
lean_object* v_unused_2429_; 
v_unused_2429_ = lean_ctor_get(v_snd_2317_, 1);
lean_dec(v_unused_2429_);
v___x_2326_ = v_snd_2317_;
v_isShared_2327_ = v_isSharedCheck_2428_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_fst_2324_);
lean_dec(v_snd_2317_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2428_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v_fst_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2426_; 
v_fst_2328_ = lean_ctor_get(v_snd_2318_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v_snd_2318_);
if (v_isSharedCheck_2426_ == 0)
{
lean_object* v_unused_2427_; 
v_unused_2427_ = lean_ctor_get(v_snd_2318_, 1);
lean_dec(v_unused_2427_);
v___x_2330_ = v_snd_2318_;
v_isShared_2331_ = v_isSharedCheck_2426_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_fst_2328_);
lean_dec(v_snd_2318_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2426_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v_array_2332_; lean_object* v_start_2333_; lean_object* v_stop_2334_; lean_object* v___f_2335_; lean_object* v___y_2337_; uint8_t v___x_2340_; 
v_array_2332_ = lean_ctor_get(v_snd_2319_, 0);
v_start_2333_ = lean_ctor_get(v_snd_2319_, 1);
v_stop_2334_ = lean_ctor_get(v_snd_2319_, 2);
lean_inc(v_next_2311_);
lean_inc(v_toPure_2299_);
v___f_2335_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed), 4, 3);
lean_closure_set(v___f_2335_, 0, v_toPure_2299_);
lean_closure_set(v___f_2335_, 1, v_next_2311_);
lean_closure_set(v___f_2335_, 2, v_G_2314_);
v___x_2340_ = lean_nat_dec_lt(v_start_2333_, v_stop_2334_);
if (v___x_2340_ == 0)
{
lean_object* v___x_2342_; 
lean_dec(v_next_2311_);
lean_dec(v_fst_2310_);
lean_dec(v___f_2309_);
lean_dec_ref(v_inst_2308_);
lean_dec_ref(v_inst_2307_);
lean_dec(v_onAlt_2306_);
lean_dec_ref(v_remaining_x27_2305_);
lean_dec(v_inst_2304_);
if (v_isShared_2331_ == 0)
{
v___x_2342_ = v___x_2330_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v_fst_2328_);
lean_ctor_set(v_reuseFailAlloc_2351_, 1, v_snd_2319_);
v___x_2342_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
lean_object* v___x_2344_; 
if (v_isShared_2327_ == 0)
{
lean_ctor_set(v___x_2326_, 1, v___x_2342_);
v___x_2344_ = v___x_2326_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_fst_2324_);
lean_ctor_set(v_reuseFailAlloc_2350_, 1, v___x_2342_);
v___x_2344_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
lean_object* v___x_2346_; 
if (v_isShared_2323_ == 0)
{
lean_ctor_set(v___x_2322_, 1, v___x_2344_);
v___x_2346_ = v___x_2322_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_fst_2320_);
lean_ctor_set(v_reuseFailAlloc_2349_, 1, v___x_2344_);
v___x_2346_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2346_);
v___x_2348_ = lean_apply_2(v_toPure_2299_, lean_box(0), v___x_2347_);
v___y_2337_ = v___x_2348_;
goto v___jp_2336_;
}
}
}
}
else
{
lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2422_; 
lean_inc(v_stop_2334_);
lean_inc(v_start_2333_);
lean_inc_ref(v_array_2332_);
v_isSharedCheck_2422_ = !lean_is_exclusive(v_snd_2319_);
if (v_isSharedCheck_2422_ == 0)
{
lean_object* v_unused_2423_; lean_object* v_unused_2424_; lean_object* v_unused_2425_; 
v_unused_2423_ = lean_ctor_get(v_snd_2319_, 2);
lean_dec(v_unused_2423_);
v_unused_2424_ = lean_ctor_get(v_snd_2319_, 1);
lean_dec(v_unused_2424_);
v_unused_2425_ = lean_ctor_get(v_snd_2319_, 0);
lean_dec(v_unused_2425_);
v___x_2353_ = v_snd_2319_;
v_isShared_2354_ = v_isSharedCheck_2422_;
goto v_resetjp_2352_;
}
else
{
lean_dec(v_snd_2319_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2422_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v_array_2355_; lean_object* v_start_2356_; lean_object* v_stop_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2362_; 
v_array_2355_ = lean_ctor_get(v_fst_2328_, 0);
v_start_2356_ = lean_ctor_get(v_fst_2328_, 1);
v_stop_2357_ = lean_ctor_get(v_fst_2328_, 2);
v___x_2358_ = lean_array_fget(v_array_2332_, v_start_2333_);
v___x_2359_ = lean_unsigned_to_nat(1u);
v___x_2360_ = lean_nat_add(v_start_2333_, v___x_2359_);
lean_dec(v_start_2333_);
if (v_isShared_2354_ == 0)
{
lean_ctor_set(v___x_2353_, 1, v___x_2360_);
v___x_2362_ = v___x_2353_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_array_2332_);
lean_ctor_set(v_reuseFailAlloc_2421_, 1, v___x_2360_);
lean_ctor_set(v_reuseFailAlloc_2421_, 2, v_stop_2334_);
v___x_2362_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
uint8_t v___x_2363_; 
v___x_2363_ = lean_nat_dec_lt(v_start_2356_, v_stop_2357_);
if (v___x_2363_ == 0)
{
lean_object* v___x_2365_; 
lean_dec(v___x_2358_);
lean_dec(v_next_2311_);
lean_dec(v_fst_2310_);
lean_dec(v___f_2309_);
lean_dec_ref(v_inst_2308_);
lean_dec_ref(v_inst_2307_);
lean_dec(v_onAlt_2306_);
lean_dec_ref(v_remaining_x27_2305_);
lean_dec(v_inst_2304_);
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 1, v___x_2362_);
v___x_2365_ = v___x_2330_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_fst_2328_);
lean_ctor_set(v_reuseFailAlloc_2374_, 1, v___x_2362_);
v___x_2365_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
lean_object* v___x_2367_; 
if (v_isShared_2327_ == 0)
{
lean_ctor_set(v___x_2326_, 1, v___x_2365_);
v___x_2367_ = v___x_2326_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v_fst_2324_);
lean_ctor_set(v_reuseFailAlloc_2373_, 1, v___x_2365_);
v___x_2367_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
lean_object* v___x_2369_; 
if (v_isShared_2323_ == 0)
{
lean_ctor_set(v___x_2322_, 1, v___x_2367_);
v___x_2369_ = v___x_2322_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v_fst_2320_);
lean_ctor_set(v_reuseFailAlloc_2372_, 1, v___x_2367_);
v___x_2369_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2370_, 0, v___x_2369_);
v___x_2371_ = lean_apply_2(v_toPure_2299_, lean_box(0), v___x_2370_);
v___y_2337_ = v___x_2371_;
goto v___jp_2336_;
}
}
}
}
else
{
lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2417_; 
lean_inc(v_stop_2357_);
lean_inc(v_start_2356_);
lean_inc_ref(v_array_2355_);
v_isSharedCheck_2417_ = !lean_is_exclusive(v_fst_2328_);
if (v_isSharedCheck_2417_ == 0)
{
lean_object* v_unused_2418_; lean_object* v_unused_2419_; lean_object* v_unused_2420_; 
v_unused_2418_ = lean_ctor_get(v_fst_2328_, 2);
lean_dec(v_unused_2418_);
v_unused_2419_ = lean_ctor_get(v_fst_2328_, 1);
lean_dec(v_unused_2419_);
v_unused_2420_ = lean_ctor_get(v_fst_2328_, 0);
lean_dec(v_unused_2420_);
v___x_2376_ = v_fst_2328_;
v_isShared_2377_ = v_isSharedCheck_2417_;
goto v_resetjp_2375_;
}
else
{
lean_dec(v_fst_2328_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2417_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v_array_2378_; lean_object* v_start_2379_; lean_object* v_stop_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2384_; 
v_array_2378_ = lean_ctor_get(v_fst_2324_, 0);
v_start_2379_ = lean_ctor_get(v_fst_2324_, 1);
v_stop_2380_ = lean_ctor_get(v_fst_2324_, 2);
v___x_2381_ = lean_array_fget(v_array_2355_, v_start_2356_);
v___x_2382_ = lean_nat_add(v_start_2356_, v___x_2359_);
lean_dec(v_start_2356_);
if (v_isShared_2377_ == 0)
{
lean_ctor_set(v___x_2376_, 1, v___x_2382_);
v___x_2384_ = v___x_2376_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v_array_2355_);
lean_ctor_set(v_reuseFailAlloc_2416_, 1, v___x_2382_);
lean_ctor_set(v_reuseFailAlloc_2416_, 2, v_stop_2357_);
v___x_2384_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
uint8_t v___x_2385_; 
v___x_2385_ = lean_nat_dec_lt(v_start_2379_, v_stop_2380_);
if (v___x_2385_ == 0)
{
lean_object* v___x_2387_; 
lean_dec(v___x_2381_);
lean_dec(v___x_2358_);
lean_dec(v_next_2311_);
lean_dec(v_fst_2310_);
lean_dec(v___f_2309_);
lean_dec_ref(v_inst_2308_);
lean_dec_ref(v_inst_2307_);
lean_dec(v_onAlt_2306_);
lean_dec_ref(v_remaining_x27_2305_);
lean_dec(v_inst_2304_);
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 1, v___x_2362_);
lean_ctor_set(v___x_2330_, 0, v___x_2384_);
v___x_2387_ = v___x_2330_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v___x_2384_);
lean_ctor_set(v_reuseFailAlloc_2396_, 1, v___x_2362_);
v___x_2387_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
lean_object* v___x_2389_; 
if (v_isShared_2327_ == 0)
{
lean_ctor_set(v___x_2326_, 1, v___x_2387_);
v___x_2389_ = v___x_2326_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2395_; 
v_reuseFailAlloc_2395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2395_, 0, v_fst_2324_);
lean_ctor_set(v_reuseFailAlloc_2395_, 1, v___x_2387_);
v___x_2389_ = v_reuseFailAlloc_2395_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
lean_object* v___x_2391_; 
if (v_isShared_2323_ == 0)
{
lean_ctor_set(v___x_2322_, 1, v___x_2389_);
v___x_2391_ = v___x_2322_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_fst_2320_);
lean_ctor_set(v_reuseFailAlloc_2394_, 1, v___x_2389_);
v___x_2391_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___x_2392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2392_, 0, v___x_2391_);
v___x_2393_ = lean_apply_2(v_toPure_2299_, lean_box(0), v___x_2392_);
v___y_2337_ = v___x_2393_;
goto v___jp_2336_;
}
}
}
}
else
{
lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2412_; 
lean_inc(v_stop_2380_);
lean_inc(v_start_2379_);
lean_inc_ref(v_array_2378_);
lean_del_object(v___x_2330_);
lean_del_object(v___x_2326_);
lean_del_object(v___x_2322_);
v_isSharedCheck_2412_ = !lean_is_exclusive(v_fst_2324_);
if (v_isSharedCheck_2412_ == 0)
{
lean_object* v_unused_2413_; lean_object* v_unused_2414_; lean_object* v_unused_2415_; 
v_unused_2413_ = lean_ctor_get(v_fst_2324_, 2);
lean_dec(v_unused_2413_);
v_unused_2414_ = lean_ctor_get(v_fst_2324_, 1);
lean_dec(v_unused_2414_);
v_unused_2415_ = lean_ctor_get(v_fst_2324_, 0);
lean_dec(v_unused_2415_);
v___x_2398_ = v_fst_2324_;
v_isShared_2399_ = v_isSharedCheck_2412_;
goto v_resetjp_2397_;
}
else
{
lean_dec(v_fst_2324_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2412_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___f_2403_; lean_object* v___x_2404_; lean_object* v___x_2406_; 
v___x_2400_ = lean_array_fget_borrowed(v_array_2378_, v_start_2379_);
v___x_2401_ = lean_box(v___x_2302_);
v___x_2402_ = lean_box(v___x_2303_);
lean_inc_ref(v_inst_2308_);
lean_inc_ref(v_inst_2307_);
lean_inc(v___x_2400_);
lean_inc(v_toBind_2300_);
v___f_2403_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed), 14, 12);
lean_closure_set(v___f_2403_, 0, v___x_2401_);
lean_closure_set(v___f_2403_, 1, v___x_2402_);
lean_closure_set(v___f_2403_, 2, v_inst_2304_);
lean_closure_set(v___f_2403_, 3, v_remaining_x27_2305_);
lean_closure_set(v___f_2403_, 4, v_onAlt_2306_);
lean_closure_set(v___f_2403_, 5, v_next_2311_);
lean_closure_set(v___f_2403_, 6, v_toBind_2300_);
lean_closure_set(v___f_2403_, 7, v___x_2400_);
lean_closure_set(v___f_2403_, 8, v_inst_2307_);
lean_closure_set(v___f_2403_, 9, v_inst_2308_);
lean_closure_set(v___f_2403_, 10, v___f_2309_);
lean_closure_set(v___f_2403_, 11, v_fst_2310_);
v___x_2404_ = lean_nat_add(v_start_2379_, v___x_2359_);
lean_dec(v_start_2379_);
if (v_isShared_2399_ == 0)
{
lean_ctor_set(v___x_2398_, 1, v___x_2404_);
v___x_2406_ = v___x_2398_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v_array_2378_);
lean_ctor_set(v_reuseFailAlloc_2411_, 1, v___x_2404_);
lean_ctor_set(v_reuseFailAlloc_2411_, 2, v_stop_2380_);
v___x_2406_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
lean_object* v___f_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___f_2407_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__28), 6, 5);
lean_closure_set(v___f_2407_, 0, v_fst_2320_);
lean_closure_set(v___f_2407_, 1, v___x_2384_);
lean_closure_set(v___f_2407_, 2, v___x_2362_);
lean_closure_set(v___f_2407_, 3, v___x_2406_);
lean_closure_set(v___f_2407_, 4, v_toPure_2299_);
v___x_2408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2381_);
v___x_2409_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2307_, v_inst_2308_, v___x_2358_, v___x_2408_, v___f_2403_, v___x_2302_, v___x_2302_);
lean_inc(v_toBind_2300_);
v___x_2410_ = lean_apply_4(v_toBind_2300_, lean_box(0), lean_box(0), v___x_2409_, v___f_2407_);
v___y_2337_ = v___x_2410_;
goto v___jp_2336_;
}
}
}
}
}
}
}
}
}
v___jp_2336_:
{
lean_object* v___x_2338_; lean_object* v___x_2339_; 
lean_inc(v_toBind_2300_);
v___x_2338_ = lean_apply_4(v_toBind_2300_, lean_box(0), lean_box(0), v___y_2337_, v___f_2301_);
v___x_2339_ = lean_apply_4(v_toBind_2300_, lean_box(0), lean_box(0), v___x_2338_, v___f_2335_);
return v___x_2339_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed(lean_object** _args){
lean_object* v___x_2432_ = _args[0];
lean_object* v_toPure_2433_ = _args[1];
lean_object* v_toBind_2434_ = _args[2];
lean_object* v___f_2435_ = _args[3];
lean_object* v___x_2436_ = _args[4];
lean_object* v___x_2437_ = _args[5];
lean_object* v_inst_2438_ = _args[6];
lean_object* v_remaining_x27_2439_ = _args[7];
lean_object* v_onAlt_2440_ = _args[8];
lean_object* v_inst_2441_ = _args[9];
lean_object* v_inst_2442_ = _args[10];
lean_object* v___f_2443_ = _args[11];
lean_object* v_fst_2444_ = _args[12];
lean_object* v_next_2445_ = _args[13];
lean_object* v_acc_2446_ = _args[14];
lean_object* v_h_2447_ = _args[15];
lean_object* v_G_2448_ = _args[16];
_start:
{
uint8_t v___x_13012__boxed_2449_; uint8_t v___x_13013__boxed_2450_; lean_object* v_res_2451_; 
v___x_13012__boxed_2449_ = lean_unbox(v___x_2436_);
v___x_13013__boxed_2450_ = lean_unbox(v___x_2437_);
v_res_2451_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__29(v___x_2432_, v_toPure_2433_, v_toBind_2434_, v___f_2435_, v___x_13012__boxed_2449_, v___x_13013__boxed_2450_, v_inst_2438_, v_remaining_x27_2439_, v_onAlt_2440_, v_inst_2441_, v_inst_2442_, v___f_2443_, v_fst_2444_, v_next_2445_, v_acc_2446_, v_h_2447_, v_G_2448_);
lean_dec(v___x_2432_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__30(lean_object* v_matcherApp_2452_, lean_object* v_alts_2453_, lean_object* v___x_2454_, lean_object* v___x_2455_, lean_object* v_remaining_x27_2456_, lean_object* v___f_2457_, lean_object* v_toBind_2458_, lean_object* v___f_2459_, lean_object* v_altTypes_2460_){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2461_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_2452_);
v___x_2462_ = lean_array_get_size(v___x_2461_);
v___x_2463_ = lean_array_get_size(v_altTypes_2460_);
lean_inc_n(v___x_2454_, 3);
v___x_2464_ = l_Array_toSubarray___redArg(v_alts_2453_, v___x_2454_, v___x_2455_);
v___x_2465_ = l_Array_toSubarray___redArg(v___x_2461_, v___x_2454_, v___x_2462_);
v___x_2466_ = l_Array_toSubarray___redArg(v_altTypes_2460_, v___x_2454_, v___x_2463_);
v___x_2467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2467_, 0, v___x_2465_);
lean_ctor_set(v___x_2467_, 1, v___x_2466_);
v___x_2468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2464_);
lean_ctor_set(v___x_2468_, 1, v___x_2467_);
v___x_2469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2469_, 0, v_remaining_x27_2456_);
lean_ctor_set(v___x_2469_, 1, v___x_2468_);
v___x_2470_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_2457_, v___x_2454_, v___x_2469_, lean_box(0));
v___x_2471_ = lean_apply_4(v_toBind_2458_, lean_box(0), lean_box(0), v___x_2470_, v___f_2459_);
return v___x_2471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__30___boxed(lean_object* v_matcherApp_2472_, lean_object* v_alts_2473_, lean_object* v___x_2474_, lean_object* v___x_2475_, lean_object* v_remaining_x27_2476_, lean_object* v___f_2477_, lean_object* v_toBind_2478_, lean_object* v___f_2479_, lean_object* v_altTypes_2480_){
_start:
{
lean_object* v_res_2481_; 
v_res_2481_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__30(v_matcherApp_2472_, v_alts_2473_, v___x_2474_, v___x_2475_, v_remaining_x27_2476_, v___f_2477_, v_toBind_2478_, v___f_2479_, v_altTypes_2480_);
lean_dec_ref(v_matcherApp_2472_);
return v_res_2481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31(lean_object* v_alts_2482_, lean_object* v_toPure_2483_, lean_object* v_toBind_2484_, lean_object* v___f_2485_, uint8_t v___x_2486_, uint8_t v___x_2487_, lean_object* v_inst_2488_, lean_object* v_remaining_x27_2489_, lean_object* v_onAlt_2490_, lean_object* v_inst_2491_, lean_object* v_inst_2492_, lean_object* v___f_2493_, lean_object* v_fst_2494_, lean_object* v_matcherApp_2495_, lean_object* v___x_2496_, lean_object* v___f_2497_, lean_object* v_aux_2498_, lean_object* v_____r_2499_){
_start:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___f_2503_; lean_object* v___f_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2500_ = lean_array_get_size(v_alts_2482_);
v___x_2501_ = lean_box(v___x_2486_);
v___x_2502_ = lean_box(v___x_2487_);
lean_inc_ref(v_remaining_x27_2489_);
lean_inc(v_inst_2488_);
lean_inc_n(v_toBind_2484_, 2);
v___f_2503_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed), 17, 13);
lean_closure_set(v___f_2503_, 0, v___x_2500_);
lean_closure_set(v___f_2503_, 1, v_toPure_2483_);
lean_closure_set(v___f_2503_, 2, v_toBind_2484_);
lean_closure_set(v___f_2503_, 3, v___f_2485_);
lean_closure_set(v___f_2503_, 4, v___x_2501_);
lean_closure_set(v___f_2503_, 5, v___x_2502_);
lean_closure_set(v___f_2503_, 6, v_inst_2488_);
lean_closure_set(v___f_2503_, 7, v_remaining_x27_2489_);
lean_closure_set(v___f_2503_, 8, v_onAlt_2490_);
lean_closure_set(v___f_2503_, 9, v_inst_2491_);
lean_closure_set(v___f_2503_, 10, v_inst_2492_);
lean_closure_set(v___f_2503_, 11, v___f_2493_);
lean_closure_set(v___f_2503_, 12, v_fst_2494_);
v___f_2504_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__30___boxed), 9, 8);
lean_closure_set(v___f_2504_, 0, v_matcherApp_2495_);
lean_closure_set(v___f_2504_, 1, v_alts_2482_);
lean_closure_set(v___f_2504_, 2, v___x_2496_);
lean_closure_set(v___f_2504_, 3, v___x_2500_);
lean_closure_set(v___f_2504_, 4, v_remaining_x27_2489_);
lean_closure_set(v___f_2504_, 5, v___f_2503_);
lean_closure_set(v___f_2504_, 6, v_toBind_2484_);
lean_closure_set(v___f_2504_, 7, v___f_2497_);
v___x_2505_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_2505_, 0, v___x_2500_);
lean_closure_set(v___x_2505_, 1, v_aux_2498_);
v___x_2506_ = lean_apply_2(v_inst_2488_, lean_box(0), v___x_2505_);
v___x_2507_ = lean_apply_4(v_toBind_2484_, lean_box(0), lean_box(0), v___x_2506_, v___f_2504_);
return v___x_2507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed(lean_object** _args){
lean_object* v_alts_2508_ = _args[0];
lean_object* v_toPure_2509_ = _args[1];
lean_object* v_toBind_2510_ = _args[2];
lean_object* v___f_2511_ = _args[3];
lean_object* v___x_2512_ = _args[4];
lean_object* v___x_2513_ = _args[5];
lean_object* v_inst_2514_ = _args[6];
lean_object* v_remaining_x27_2515_ = _args[7];
lean_object* v_onAlt_2516_ = _args[8];
lean_object* v_inst_2517_ = _args[9];
lean_object* v_inst_2518_ = _args[10];
lean_object* v___f_2519_ = _args[11];
lean_object* v_fst_2520_ = _args[12];
lean_object* v_matcherApp_2521_ = _args[13];
lean_object* v___x_2522_ = _args[14];
lean_object* v___f_2523_ = _args[15];
lean_object* v_aux_2524_ = _args[16];
lean_object* v_____r_2525_ = _args[17];
_start:
{
uint8_t v___x_13273__boxed_2526_; uint8_t v___x_13274__boxed_2527_; lean_object* v_res_2528_; 
v___x_13273__boxed_2526_ = lean_unbox(v___x_2512_);
v___x_13274__boxed_2527_ = lean_unbox(v___x_2513_);
v_res_2528_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__31(v_alts_2508_, v_toPure_2509_, v_toBind_2510_, v___f_2511_, v___x_13273__boxed_2526_, v___x_13274__boxed_2527_, v_inst_2514_, v_remaining_x27_2515_, v_onAlt_2516_, v_inst_2517_, v_inst_2518_, v___f_2519_, v_fst_2520_, v_matcherApp_2521_, v___x_2522_, v___f_2523_, v_aux_2524_, v_____r_2525_);
return v_res_2528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__32(lean_object* v___x_2529_, lean_object* v_e_2530_){
_start:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2531_ = l_Lean_indentD(v_e_2530_);
v___x_2532_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2532_, 0, v___x_2529_);
lean_ctor_set(v___x_2532_, 1, v___x_2531_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33(lean_object* v___x_2533_, lean_object* v___f_2534_, lean_object* v_runInBase_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_){
_start:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2541_ = lean_apply_2(v_runInBase_2535_, lean_box(0), v___x_2533_);
v___x_2542_ = l_Lean_Meta_mapErrorImp___redArg(v___x_2541_, v___f_2534_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed(lean_object* v___x_2543_, lean_object* v___f_2544_, lean_object* v_runInBase_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_){
_start:
{
lean_object* v_res_2551_; 
v_res_2551_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__33(v___x_2543_, v___f_2544_, v_runInBase_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35(lean_object* v_toPure_2552_, lean_object* v_next_2553_, lean_object* v_G_2554_, lean_object* v_____do__lift_2555_){
_start:
{
if (lean_obj_tag(v_____do__lift_2555_) == 0)
{
lean_object* v_a_2556_; lean_object* v___x_2557_; 
lean_dec(v_G_2554_);
v_a_2556_ = lean_ctor_get(v_____do__lift_2555_, 0);
lean_inc(v_a_2556_);
lean_dec_ref_known(v_____do__lift_2555_, 1);
v___x_2557_ = lean_apply_2(v_toPure_2552_, lean_box(0), v_a_2556_);
return v___x_2557_;
}
else
{
lean_object* v_a_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; 
lean_dec(v_toPure_2552_);
v_a_2558_ = lean_ctor_get(v_____do__lift_2555_, 0);
lean_inc(v_a_2558_);
lean_dec_ref_known(v_____do__lift_2555_, 1);
v___x_2559_ = lean_unsigned_to_nat(1u);
v___x_2560_ = lean_nat_add(v_next_2553_, v___x_2559_);
v___x_2561_ = lean_apply_4(v_G_2554_, v___x_2560_, v_a_2558_, lean_box(0), lean_box(0));
return v___x_2561_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed(lean_object* v_toPure_2562_, lean_object* v_next_2563_, lean_object* v_G_2564_, lean_object* v_____do__lift_2565_){
_start:
{
lean_object* v_res_2566_; 
v_res_2566_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__35(v_toPure_2562_, v_next_2563_, v_G_2564_, v_____do__lift_2565_);
lean_dec(v_next_2563_);
return v_res_2566_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5(void){
_start:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
v___x_2575_ = lean_box(0);
v___x_2576_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4));
v___x_2577_ = l_Lean_mkConst(v___x_2576_, v___x_2575_);
return v___x_2577_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6(void){
_start:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___x_2578_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5);
v___x_2579_ = lean_unsigned_to_nat(2u);
v___x_2580_ = lean_mk_empty_array_with_capacity(v___x_2579_);
v___x_2581_ = lean_array_push(v___x_2580_, v___x_2578_);
return v___x_2581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34(lean_object* v___x_2582_, lean_object* v_toPure_2583_, lean_object* v_inst_2584_, lean_object* v_alt_x27_2585_){
_start:
{
uint8_t v_hasUnitThunk_2586_; 
v_hasUnitThunk_2586_ = lean_ctor_get_uint8(v___x_2582_, sizeof(void*)*2);
if (v_hasUnitThunk_2586_ == 0)
{
lean_object* v___x_2587_; 
lean_dec(v_inst_2584_);
v___x_2587_ = lean_apply_2(v_toPure_2583_, lean_box(0), v_alt_x27_2585_);
return v___x_2587_;
}
else
{
lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
lean_dec(v_toPure_2583_);
v___x_2588_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2));
v___x_2589_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6);
v___x_2590_ = lean_array_push(v___x_2589_, v_alt_x27_2585_);
v___x_2591_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM___boxed), 7, 2);
lean_closure_set(v___x_2591_, 0, v___x_2588_);
lean_closure_set(v___x_2591_, 1, v___x_2590_);
v___x_2592_ = lean_apply_2(v_inst_2584_, lean_box(0), v___x_2591_);
return v___x_2592_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed(lean_object* v___x_2593_, lean_object* v_toPure_2594_, lean_object* v_inst_2595_, lean_object* v_alt_x27_2596_){
_start:
{
lean_object* v_res_2597_; 
v_res_2597_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__34(v___x_2593_, v_toPure_2594_, v_inst_2595_, v_alt_x27_2596_);
lean_dec_ref(v___x_2593_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36(lean_object* v_ys_2598_, lean_object* v_ys2_2599_, lean_object* v_ys3_2600_, lean_object* v_ys4_2601_, uint8_t v___x_2602_, uint8_t v_useSplitter_2603_, lean_object* v_inst_2604_, lean_object* v_alt_x27_2605_){
_start:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; uint8_t v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2606_ = l_Array_append___redArg(v_ys_2598_, v_ys2_2599_);
v___x_2607_ = l_Array_append___redArg(v___x_2606_, v_ys3_2600_);
v___x_2608_ = l_Array_append___redArg(v___x_2607_, v_ys4_2601_);
v___x_2609_ = 1;
v___x_2610_ = lean_box(v___x_2602_);
v___x_2611_ = lean_box(v_useSplitter_2603_);
v___x_2612_ = lean_box(v___x_2602_);
v___x_2613_ = lean_box(v_useSplitter_2603_);
v___x_2614_ = lean_box(v___x_2609_);
v___x_2615_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_2615_, 0, v___x_2608_);
lean_closure_set(v___x_2615_, 1, v_alt_x27_2605_);
lean_closure_set(v___x_2615_, 2, v___x_2610_);
lean_closure_set(v___x_2615_, 3, v___x_2611_);
lean_closure_set(v___x_2615_, 4, v___x_2612_);
lean_closure_set(v___x_2615_, 5, v___x_2613_);
lean_closure_set(v___x_2615_, 6, v___x_2614_);
v___x_2616_ = lean_apply_2(v_inst_2604_, lean_box(0), v___x_2615_);
return v___x_2616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed(lean_object* v_ys_2617_, lean_object* v_ys2_2618_, lean_object* v_ys3_2619_, lean_object* v_ys4_2620_, lean_object* v___x_2621_, lean_object* v_useSplitter_2622_, lean_object* v_inst_2623_, lean_object* v_alt_x27_2624_){
_start:
{
uint8_t v___x_13427__boxed_2625_; uint8_t v_useSplitter_boxed_2626_; lean_object* v_res_2627_; 
v___x_13427__boxed_2625_ = lean_unbox(v___x_2621_);
v_useSplitter_boxed_2626_ = lean_unbox(v_useSplitter_2622_);
v_res_2627_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__36(v_ys_2617_, v_ys2_2618_, v_ys3_2619_, v_ys4_2620_, v___x_13427__boxed_2625_, v_useSplitter_boxed_2626_, v_inst_2623_, v_alt_x27_2624_);
lean_dec_ref(v_ys4_2620_);
lean_dec_ref(v_ys3_2619_);
lean_dec_ref(v_ys2_2618_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__37(lean_object* v_args_2628_, lean_object* v_ys_2629_, lean_object* v_ys2_2630_, lean_object* v_ys3_2631_, lean_object* v_ys4_2632_, lean_object* v_onAlt_2633_, lean_object* v_next_2634_, lean_object* v_altType_2635_, lean_object* v_toBind_2636_, lean_object* v___f_2637_, lean_object* v_alt_2638_){
_start:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2639_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2639_, 0, v_args_2628_);
lean_ctor_set(v___x_2639_, 1, v_ys_2629_);
lean_ctor_set(v___x_2639_, 2, v_ys2_2630_);
lean_ctor_set(v___x_2639_, 3, v_ys3_2631_);
lean_ctor_set(v___x_2639_, 4, v_ys4_2632_);
v___x_2640_ = lean_apply_4(v_onAlt_2633_, v_next_2634_, v_altType_2635_, v___x_2639_, v_alt_2638_);
v___x_2641_ = lean_apply_4(v_toBind_2636_, lean_box(0), lean_box(0), v___x_2640_, v___f_2637_);
return v___x_2641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38(lean_object* v_toMonadExceptOf_2642_, lean_object* v_ys_2643_, lean_object* v_ys2_2644_, lean_object* v_ys3_2645_, uint8_t v___x_2646_, uint8_t v_useSplitter_2647_, lean_object* v_inst_2648_, lean_object* v_args_2649_, lean_object* v_onAlt_2650_, lean_object* v_next_2651_, lean_object* v_toBind_2652_, lean_object* v___x_2653_, lean_object* v___f_2654_, lean_object* v_ys4_2655_, lean_object* v_altType_2656_){
_start:
{
lean_object* v_tryCatch_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___f_2660_; lean_object* v___f_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; 
v_tryCatch_2657_ = lean_ctor_get(v_toMonadExceptOf_2642_, 1);
lean_inc(v_tryCatch_2657_);
lean_dec_ref(v_toMonadExceptOf_2642_);
v___x_2658_ = lean_box(v___x_2646_);
v___x_2659_ = lean_box(v_useSplitter_2647_);
lean_inc(v_inst_2648_);
lean_inc_ref(v_ys4_2655_);
lean_inc_ref_n(v_ys3_2645_, 2);
lean_inc_ref(v_ys2_2644_);
lean_inc_ref(v_ys_2643_);
v___f_2660_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed), 8, 7);
lean_closure_set(v___f_2660_, 0, v_ys_2643_);
lean_closure_set(v___f_2660_, 1, v_ys2_2644_);
lean_closure_set(v___f_2660_, 2, v_ys3_2645_);
lean_closure_set(v___f_2660_, 3, v_ys4_2655_);
lean_closure_set(v___f_2660_, 4, v___x_2658_);
lean_closure_set(v___f_2660_, 5, v___x_2659_);
lean_closure_set(v___f_2660_, 6, v_inst_2648_);
lean_inc(v_toBind_2652_);
lean_inc_ref(v_args_2649_);
v___f_2661_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__37), 11, 10);
lean_closure_set(v___f_2661_, 0, v_args_2649_);
lean_closure_set(v___f_2661_, 1, v_ys_2643_);
lean_closure_set(v___f_2661_, 2, v_ys2_2644_);
lean_closure_set(v___f_2661_, 3, v_ys3_2645_);
lean_closure_set(v___f_2661_, 4, v_ys4_2655_);
lean_closure_set(v___f_2661_, 5, v_onAlt_2650_);
lean_closure_set(v___f_2661_, 6, v_next_2651_);
lean_closure_set(v___f_2661_, 7, v_altType_2656_);
lean_closure_set(v___f_2661_, 8, v_toBind_2652_);
lean_closure_set(v___f_2661_, 9, v___f_2660_);
v___x_2662_ = l_Array_append___redArg(v_args_2649_, v_ys3_2645_);
lean_dec_ref(v_ys3_2645_);
v___x_2663_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLambda___boxed), 7, 2);
lean_closure_set(v___x_2663_, 0, v___x_2653_);
lean_closure_set(v___x_2663_, 1, v___x_2662_);
v___x_2664_ = lean_apply_2(v_inst_2648_, lean_box(0), v___x_2663_);
v___x_2665_ = lean_apply_3(v_tryCatch_2657_, lean_box(0), v___x_2664_, v___f_2654_);
v___x_2666_ = lean_apply_4(v_toBind_2652_, lean_box(0), lean_box(0), v___x_2665_, v___f_2661_);
return v___x_2666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed(lean_object* v_toMonadExceptOf_2667_, lean_object* v_ys_2668_, lean_object* v_ys2_2669_, lean_object* v_ys3_2670_, lean_object* v___x_2671_, lean_object* v_useSplitter_2672_, lean_object* v_inst_2673_, lean_object* v_args_2674_, lean_object* v_onAlt_2675_, lean_object* v_next_2676_, lean_object* v_toBind_2677_, lean_object* v___x_2678_, lean_object* v___f_2679_, lean_object* v_ys4_2680_, lean_object* v_altType_2681_){
_start:
{
uint8_t v___x_13463__boxed_2682_; uint8_t v_useSplitter_boxed_2683_; lean_object* v_res_2684_; 
v___x_13463__boxed_2682_ = lean_unbox(v___x_2671_);
v_useSplitter_boxed_2683_ = lean_unbox(v_useSplitter_2672_);
v_res_2684_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__38(v_toMonadExceptOf_2667_, v_ys_2668_, v_ys2_2669_, v_ys3_2670_, v___x_13463__boxed_2682_, v_useSplitter_boxed_2683_, v_inst_2673_, v_args_2674_, v_onAlt_2675_, v_next_2676_, v_toBind_2677_, v___x_2678_, v___f_2679_, v_ys4_2680_, v_altType_2681_);
return v_res_2684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39(lean_object* v_toMonadExceptOf_2685_, lean_object* v_ys_2686_, lean_object* v_ys2_2687_, uint8_t v___x_2688_, uint8_t v_useSplitter_2689_, lean_object* v_inst_2690_, lean_object* v_args_2691_, lean_object* v_onAlt_2692_, lean_object* v_next_2693_, lean_object* v_toBind_2694_, lean_object* v___x_2695_, lean_object* v___f_2696_, lean_object* v_fst_2697_, lean_object* v_inst_2698_, lean_object* v_inst_2699_, lean_object* v_ys3_2700_, lean_object* v_altType_2701_){
_start:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___f_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; 
v___x_2702_ = lean_box(v___x_2688_);
v___x_2703_ = lean_box(v_useSplitter_2689_);
v___f_2704_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed), 15, 13);
lean_closure_set(v___f_2704_, 0, v_toMonadExceptOf_2685_);
lean_closure_set(v___f_2704_, 1, v_ys_2686_);
lean_closure_set(v___f_2704_, 2, v_ys2_2687_);
lean_closure_set(v___f_2704_, 3, v_ys3_2700_);
lean_closure_set(v___f_2704_, 4, v___x_2702_);
lean_closure_set(v___f_2704_, 5, v___x_2703_);
lean_closure_set(v___f_2704_, 6, v_inst_2690_);
lean_closure_set(v___f_2704_, 7, v_args_2691_);
lean_closure_set(v___f_2704_, 8, v_onAlt_2692_);
lean_closure_set(v___f_2704_, 9, v_next_2693_);
lean_closure_set(v___f_2704_, 10, v_toBind_2694_);
lean_closure_set(v___f_2704_, 11, v___x_2695_);
lean_closure_set(v___f_2704_, 12, v___f_2696_);
v___x_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2705_, 0, v_fst_2697_);
v___x_2706_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2698_, v_inst_2699_, v_altType_2701_, v___x_2705_, v___f_2704_, v___x_2688_, v___x_2688_);
return v___x_2706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed(lean_object** _args){
lean_object* v_toMonadExceptOf_2707_ = _args[0];
lean_object* v_ys_2708_ = _args[1];
lean_object* v_ys2_2709_ = _args[2];
lean_object* v___x_2710_ = _args[3];
lean_object* v_useSplitter_2711_ = _args[4];
lean_object* v_inst_2712_ = _args[5];
lean_object* v_args_2713_ = _args[6];
lean_object* v_onAlt_2714_ = _args[7];
lean_object* v_next_2715_ = _args[8];
lean_object* v_toBind_2716_ = _args[9];
lean_object* v___x_2717_ = _args[10];
lean_object* v___f_2718_ = _args[11];
lean_object* v_fst_2719_ = _args[12];
lean_object* v_inst_2720_ = _args[13];
lean_object* v_inst_2721_ = _args[14];
lean_object* v_ys3_2722_ = _args[15];
lean_object* v_altType_2723_ = _args[16];
_start:
{
uint8_t v___x_13493__boxed_2724_; uint8_t v_useSplitter_boxed_2725_; lean_object* v_res_2726_; 
v___x_13493__boxed_2724_ = lean_unbox(v___x_2710_);
v_useSplitter_boxed_2725_ = lean_unbox(v_useSplitter_2711_);
v_res_2726_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__39(v_toMonadExceptOf_2707_, v_ys_2708_, v_ys2_2709_, v___x_13493__boxed_2724_, v_useSplitter_boxed_2725_, v_inst_2712_, v_args_2713_, v_onAlt_2714_, v_next_2715_, v_toBind_2716_, v___x_2717_, v___f_2718_, v_fst_2719_, v_inst_2720_, v_inst_2721_, v_ys3_2722_, v_altType_2723_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40(lean_object* v_toMonadExceptOf_2727_, lean_object* v_ys_2728_, uint8_t v___x_2729_, uint8_t v_useSplitter_2730_, lean_object* v_inst_2731_, lean_object* v_args_2732_, lean_object* v_onAlt_2733_, lean_object* v_next_2734_, lean_object* v_toBind_2735_, lean_object* v___x_2736_, lean_object* v___f_2737_, lean_object* v_fst_2738_, lean_object* v_inst_2739_, lean_object* v_inst_2740_, lean_object* v_numDiscrEqs_2741_, lean_object* v_ys2_2742_, lean_object* v_altType_2743_){
_start:
{
lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___f_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2744_ = lean_box(v___x_2729_);
v___x_2745_ = lean_box(v_useSplitter_2730_);
lean_inc_ref(v_inst_2740_);
lean_inc_ref(v_inst_2739_);
v___f_2746_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed), 17, 15);
lean_closure_set(v___f_2746_, 0, v_toMonadExceptOf_2727_);
lean_closure_set(v___f_2746_, 1, v_ys_2728_);
lean_closure_set(v___f_2746_, 2, v_ys2_2742_);
lean_closure_set(v___f_2746_, 3, v___x_2744_);
lean_closure_set(v___f_2746_, 4, v___x_2745_);
lean_closure_set(v___f_2746_, 5, v_inst_2731_);
lean_closure_set(v___f_2746_, 6, v_args_2732_);
lean_closure_set(v___f_2746_, 7, v_onAlt_2733_);
lean_closure_set(v___f_2746_, 8, v_next_2734_);
lean_closure_set(v___f_2746_, 9, v_toBind_2735_);
lean_closure_set(v___f_2746_, 10, v___x_2736_);
lean_closure_set(v___f_2746_, 11, v___f_2737_);
lean_closure_set(v___f_2746_, 12, v_fst_2738_);
lean_closure_set(v___f_2746_, 13, v_inst_2739_);
lean_closure_set(v___f_2746_, 14, v_inst_2740_);
v___x_2747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2747_, 0, v_numDiscrEqs_2741_);
v___x_2748_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2739_, v_inst_2740_, v_altType_2743_, v___x_2747_, v___f_2746_, v___x_2729_, v___x_2729_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed(lean_object** _args){
lean_object* v_toMonadExceptOf_2749_ = _args[0];
lean_object* v_ys_2750_ = _args[1];
lean_object* v___x_2751_ = _args[2];
lean_object* v_useSplitter_2752_ = _args[3];
lean_object* v_inst_2753_ = _args[4];
lean_object* v_args_2754_ = _args[5];
lean_object* v_onAlt_2755_ = _args[6];
lean_object* v_next_2756_ = _args[7];
lean_object* v_toBind_2757_ = _args[8];
lean_object* v___x_2758_ = _args[9];
lean_object* v___f_2759_ = _args[10];
lean_object* v_fst_2760_ = _args[11];
lean_object* v_inst_2761_ = _args[12];
lean_object* v_inst_2762_ = _args[13];
lean_object* v_numDiscrEqs_2763_ = _args[14];
lean_object* v_ys2_2764_ = _args[15];
lean_object* v_altType_2765_ = _args[16];
_start:
{
uint8_t v___x_13521__boxed_2766_; uint8_t v_useSplitter_boxed_2767_; lean_object* v_res_2768_; 
v___x_13521__boxed_2766_ = lean_unbox(v___x_2751_);
v_useSplitter_boxed_2767_ = lean_unbox(v_useSplitter_2752_);
v_res_2768_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__40(v_toMonadExceptOf_2749_, v_ys_2750_, v___x_13521__boxed_2766_, v_useSplitter_boxed_2767_, v_inst_2753_, v_args_2754_, v_onAlt_2755_, v_next_2756_, v_toBind_2757_, v___x_2758_, v___f_2759_, v_fst_2760_, v_inst_2761_, v_inst_2762_, v_numDiscrEqs_2763_, v_ys2_2764_, v_altType_2765_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41(lean_object* v___x_2769_, lean_object* v_inst_2770_, lean_object* v_inst_2771_, lean_object* v___f_2772_, uint8_t v___x_2773_, lean_object* v_toBind_2774_, lean_object* v___f_2775_, lean_object* v_altType_2776_){
_start:
{
lean_object* v_numOverlaps_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; 
v_numOverlaps_2777_ = lean_ctor_get(v___x_2769_, 1);
lean_inc(v_numOverlaps_2777_);
v___x_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2778_, 0, v_numOverlaps_2777_);
v___x_2779_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2770_, v_inst_2771_, v_altType_2776_, v___x_2778_, v___f_2772_, v___x_2773_, v___x_2773_);
v___x_2780_ = lean_apply_4(v_toBind_2774_, lean_box(0), lean_box(0), v___x_2779_, v___f_2775_);
return v___x_2780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed(lean_object* v___x_2781_, lean_object* v_inst_2782_, lean_object* v_inst_2783_, lean_object* v___f_2784_, lean_object* v___x_2785_, lean_object* v_toBind_2786_, lean_object* v___f_2787_, lean_object* v_altType_2788_){
_start:
{
uint8_t v___x_13553__boxed_2789_; lean_object* v_res_2790_; 
v___x_13553__boxed_2789_ = lean_unbox(v___x_2785_);
v_res_2790_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__41(v___x_2781_, v_inst_2782_, v_inst_2783_, v___f_2784_, v___x_13553__boxed_2789_, v_toBind_2786_, v___f_2787_, v_altType_2788_);
lean_dec_ref(v___x_2781_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__42(lean_object* v___f_2791_, lean_object* v_altType_2792_){
_start:
{
lean_object* v___x_2793_; 
v___x_2793_ = lean_apply_1(v___f_2791_, v_altType_2792_);
return v___x_2793_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2(void){
_start:
{
lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; 
v___x_2798_ = lean_box(0);
v___x_2799_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1));
v___x_2800_ = l_Lean_mkConst(v___x_2799_, v___x_2798_);
return v___x_2800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44(lean_object* v___x_2801_, lean_object* v_toPure_2802_, lean_object* v_toBind_2803_, lean_object* v___f_2804_, lean_object* v___x_2805_, lean_object* v_inst_2806_, lean_object* v___f_2807_, lean_object* v_altType_2808_){
_start:
{
uint8_t v_hasUnitThunk_2809_; 
v_hasUnitThunk_2809_ = lean_ctor_get_uint8(v___x_2801_, sizeof(void*)*2);
if (v_hasUnitThunk_2809_ == 0)
{
lean_object* v___x_2810_; lean_object* v___x_2811_; 
lean_dec(v___f_2807_);
lean_dec(v_inst_2806_);
v___x_2810_ = lean_apply_2(v_toPure_2802_, lean_box(0), v_altType_2808_);
v___x_2811_ = lean_apply_4(v_toBind_2803_, lean_box(0), lean_box(0), v___x_2810_, v___f_2804_);
return v___x_2811_;
}
else
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
lean_dec(v___f_2804_);
lean_dec(v_toPure_2802_);
v___x_2812_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2);
v___x_2813_ = lean_mk_empty_array_with_capacity(v___x_2805_);
v___x_2814_ = lean_array_push(v___x_2813_, v___x_2812_);
v___x_2815_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateForall___boxed), 7, 2);
lean_closure_set(v___x_2815_, 0, v_altType_2808_);
lean_closure_set(v___x_2815_, 1, v___x_2814_);
v___x_2816_ = lean_apply_2(v_inst_2806_, lean_box(0), v___x_2815_);
v___x_2817_ = lean_apply_4(v_toBind_2803_, lean_box(0), lean_box(0), v___x_2816_, v___f_2807_);
return v___x_2817_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed(lean_object* v___x_2818_, lean_object* v_toPure_2819_, lean_object* v_toBind_2820_, lean_object* v___f_2821_, lean_object* v___x_2822_, lean_object* v_inst_2823_, lean_object* v___f_2824_, lean_object* v_altType_2825_){
_start:
{
lean_object* v_res_2826_; 
v_res_2826_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__44(v___x_2818_, v_toPure_2819_, v_toBind_2820_, v___f_2821_, v___x_2822_, v_inst_2823_, v___f_2824_, v_altType_2825_);
lean_dec(v___x_2822_);
lean_dec_ref(v___x_2818_);
return v_res_2826_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3(void){
_start:
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
v___x_2830_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2));
v___x_2831_ = lean_unsigned_to_nat(8u);
v___x_2832_ = lean_unsigned_to_nat(360u);
v___x_2833_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1));
v___x_2834_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0));
v___x_2835_ = l_mkPanicMessageWithDecl(v___x_2834_, v___x_2833_, v___x_2832_, v___x_2831_, v___x_2830_);
return v___x_2835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43(lean_object* v___x_2836_, lean_object* v___x_2837_, lean_object* v_toMonadExceptOf_2838_, uint8_t v___x_2839_, uint8_t v_useSplitter_2840_, lean_object* v_inst_2841_, lean_object* v_onAlt_2842_, lean_object* v_next_2843_, lean_object* v_toBind_2844_, lean_object* v___x_2845_, lean_object* v___f_2846_, lean_object* v_fst_2847_, lean_object* v_inst_2848_, lean_object* v_inst_2849_, lean_object* v_numDiscrEqs_2850_, lean_object* v___f_2851_, lean_object* v___x_2852_, lean_object* v_toPure_2853_, lean_object* v___x_2854_, lean_object* v___x_2855_, lean_object* v_ys_2856_, lean_object* v_args_2857_){
_start:
{
lean_object* v_numFields_2858_; lean_object* v___x_2859_; uint8_t v___x_2860_; 
v_numFields_2858_ = lean_ctor_get(v___x_2836_, 0);
v___x_2859_ = lean_array_get_size(v_ys_2856_);
v___x_2860_ = lean_nat_dec_eq(v___x_2859_, v_numFields_2858_);
if (v___x_2860_ == 0)
{
lean_object* v___x_2861_; lean_object* v___x_2862_; 
lean_dec_ref(v_args_2857_);
lean_dec_ref(v_ys_2856_);
lean_dec_ref(v___x_2855_);
lean_dec(v___x_2854_);
lean_dec(v_toPure_2853_);
lean_dec_ref(v___x_2852_);
lean_dec(v___f_2851_);
lean_dec(v_numDiscrEqs_2850_);
lean_dec_ref(v_inst_2849_);
lean_dec_ref(v_inst_2848_);
lean_dec(v_fst_2847_);
lean_dec(v___f_2846_);
lean_dec_ref(v___x_2845_);
lean_dec(v_toBind_2844_);
lean_dec(v_next_2843_);
lean_dec(v_onAlt_2842_);
lean_dec(v_inst_2841_);
lean_dec_ref(v_toMonadExceptOf_2838_);
lean_dec_ref(v___x_2836_);
v___x_2861_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3);
v___x_2862_ = l_panic___redArg(v___x_2837_, v___x_2861_);
return v___x_2862_;
}
else
{
lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___f_2865_; lean_object* v___x_2866_; lean_object* v___f_2867_; lean_object* v___f_2868_; lean_object* v___f_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; 
v___x_2863_ = lean_box(v___x_2839_);
v___x_2864_ = lean_box(v_useSplitter_2840_);
lean_inc_ref(v_inst_2849_);
lean_inc_ref(v_inst_2848_);
lean_inc_n(v_toBind_2844_, 3);
lean_inc_n(v_inst_2841_, 2);
lean_inc_ref(v_ys_2856_);
v___f_2865_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed), 17, 15);
lean_closure_set(v___f_2865_, 0, v_toMonadExceptOf_2838_);
lean_closure_set(v___f_2865_, 1, v_ys_2856_);
lean_closure_set(v___f_2865_, 2, v___x_2863_);
lean_closure_set(v___f_2865_, 3, v___x_2864_);
lean_closure_set(v___f_2865_, 4, v_inst_2841_);
lean_closure_set(v___f_2865_, 5, v_args_2857_);
lean_closure_set(v___f_2865_, 6, v_onAlt_2842_);
lean_closure_set(v___f_2865_, 7, v_next_2843_);
lean_closure_set(v___f_2865_, 8, v_toBind_2844_);
lean_closure_set(v___f_2865_, 9, v___x_2845_);
lean_closure_set(v___f_2865_, 10, v___f_2846_);
lean_closure_set(v___f_2865_, 11, v_fst_2847_);
lean_closure_set(v___f_2865_, 12, v_inst_2848_);
lean_closure_set(v___f_2865_, 13, v_inst_2849_);
lean_closure_set(v___f_2865_, 14, v_numDiscrEqs_2850_);
v___x_2866_ = lean_box(v___x_2839_);
v___f_2867_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed), 8, 7);
lean_closure_set(v___f_2867_, 0, v___x_2836_);
lean_closure_set(v___f_2867_, 1, v_inst_2848_);
lean_closure_set(v___f_2867_, 2, v_inst_2849_);
lean_closure_set(v___f_2867_, 3, v___f_2865_);
lean_closure_set(v___f_2867_, 4, v___x_2866_);
lean_closure_set(v___f_2867_, 5, v_toBind_2844_);
lean_closure_set(v___f_2867_, 6, v___f_2851_);
v___f_2868_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__42), 2, 1);
lean_closure_set(v___f_2868_, 0, v___f_2867_);
lean_inc_ref(v___f_2868_);
v___f_2869_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed), 8, 7);
lean_closure_set(v___f_2869_, 0, v___x_2852_);
lean_closure_set(v___f_2869_, 1, v_toPure_2853_);
lean_closure_set(v___f_2869_, 2, v_toBind_2844_);
lean_closure_set(v___f_2869_, 3, v___f_2868_);
lean_closure_set(v___f_2869_, 4, v___x_2854_);
lean_closure_set(v___f_2869_, 5, v_inst_2841_);
lean_closure_set(v___f_2869_, 6, v___f_2868_);
v___x_2870_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateForall___boxed), 7, 2);
lean_closure_set(v___x_2870_, 0, v___x_2855_);
lean_closure_set(v___x_2870_, 1, v_ys_2856_);
v___x_2871_ = lean_apply_2(v_inst_2841_, lean_box(0), v___x_2870_);
v___x_2872_ = lean_apply_4(v_toBind_2844_, lean_box(0), lean_box(0), v___x_2871_, v___f_2869_);
return v___x_2872_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed(lean_object** _args){
lean_object* v___x_2873_ = _args[0];
lean_object* v___x_2874_ = _args[1];
lean_object* v_toMonadExceptOf_2875_ = _args[2];
lean_object* v___x_2876_ = _args[3];
lean_object* v_useSplitter_2877_ = _args[4];
lean_object* v_inst_2878_ = _args[5];
lean_object* v_onAlt_2879_ = _args[6];
lean_object* v_next_2880_ = _args[7];
lean_object* v_toBind_2881_ = _args[8];
lean_object* v___x_2882_ = _args[9];
lean_object* v___f_2883_ = _args[10];
lean_object* v_fst_2884_ = _args[11];
lean_object* v_inst_2885_ = _args[12];
lean_object* v_inst_2886_ = _args[13];
lean_object* v_numDiscrEqs_2887_ = _args[14];
lean_object* v___f_2888_ = _args[15];
lean_object* v___x_2889_ = _args[16];
lean_object* v_toPure_2890_ = _args[17];
lean_object* v___x_2891_ = _args[18];
lean_object* v___x_2892_ = _args[19];
lean_object* v_ys_2893_ = _args[20];
lean_object* v_args_2894_ = _args[21];
_start:
{
uint8_t v___x_13650__boxed_2895_; uint8_t v_useSplitter_boxed_2896_; lean_object* v_res_2897_; 
v___x_13650__boxed_2895_ = lean_unbox(v___x_2876_);
v_useSplitter_boxed_2896_ = lean_unbox(v_useSplitter_2877_);
v_res_2897_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__43(v___x_2873_, v___x_2874_, v_toMonadExceptOf_2875_, v___x_13650__boxed_2895_, v_useSplitter_boxed_2896_, v_inst_2878_, v_onAlt_2879_, v_next_2880_, v_toBind_2881_, v___x_2882_, v___f_2883_, v_fst_2884_, v_inst_2885_, v_inst_2886_, v_numDiscrEqs_2887_, v___f_2888_, v___x_2889_, v_toPure_2890_, v___x_2891_, v___x_2892_, v_ys_2893_, v_args_2894_);
lean_dec(v___x_2874_);
return v_res_2897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__45(lean_object* v_fst_2898_, lean_object* v___x_2899_, lean_object* v___x_2900_, lean_object* v___x_2901_, lean_object* v___x_2902_, lean_object* v___x_2903_, lean_object* v_toPure_2904_, lean_object* v_alt_x27_2905_){
_start:
{
lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
v___x_2906_ = lean_array_push(v_fst_2898_, v_alt_x27_2905_);
v___x_2907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2899_);
lean_ctor_set(v___x_2907_, 1, v___x_2900_);
v___x_2908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2901_);
lean_ctor_set(v___x_2908_, 1, v___x_2907_);
v___x_2909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2902_);
lean_ctor_set(v___x_2909_, 1, v___x_2908_);
v___x_2910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2910_, 0, v___x_2903_);
lean_ctor_set(v___x_2910_, 1, v___x_2909_);
v___x_2911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2906_);
lean_ctor_set(v___x_2911_, 1, v___x_2910_);
v___x_2912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2911_);
v___x_2913_ = lean_apply_2(v_toPure_2904_, lean_box(0), v___x_2912_);
return v___x_2913_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1(void){
_start:
{
lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; 
v___x_2915_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0));
v___x_2916_ = lean_unsigned_to_nat(6u);
v___x_2917_ = lean_unsigned_to_nat(358u);
v___x_2918_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1));
v___x_2919_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0));
v___x_2920_ = l_mkPanicMessageWithDecl(v___x_2919_, v___x_2918_, v___x_2917_, v___x_2916_, v___x_2915_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46(lean_object* v___x_2921_, lean_object* v_toPure_2922_, lean_object* v_toBind_2923_, lean_object* v___f_2924_, lean_object* v___x_2925_, lean_object* v___x_2926_, lean_object* v_inst_2927_, lean_object* v___x_2928_, lean_object* v_toMonadExceptOf_2929_, uint8_t v___x_2930_, uint8_t v_useSplitter_2931_, lean_object* v_onAlt_2932_, lean_object* v___f_2933_, lean_object* v_fst_2934_, lean_object* v_inst_2935_, lean_object* v_inst_2936_, lean_object* v_numDiscrEqs_2937_, lean_object* v_next_2938_, lean_object* v_acc_2939_, lean_object* v_h_2940_, lean_object* v_G_2941_){
_start:
{
uint8_t v___x_2942_; 
v___x_2942_ = lean_nat_dec_lt(v_next_2938_, v___x_2921_);
if (v___x_2942_ == 0)
{
lean_object* v___x_2943_; 
lean_dec(v_G_2941_);
lean_dec(v_next_2938_);
lean_dec(v_numDiscrEqs_2937_);
lean_dec_ref(v_inst_2936_);
lean_dec_ref(v_inst_2935_);
lean_dec(v_fst_2934_);
lean_dec(v___f_2933_);
lean_dec(v_onAlt_2932_);
lean_dec_ref(v_toMonadExceptOf_2929_);
lean_dec(v___x_2928_);
lean_dec(v_inst_2927_);
lean_dec(v___f_2924_);
lean_dec(v_toBind_2923_);
v___x_2943_ = lean_apply_2(v_toPure_2922_, lean_box(0), v_acc_2939_);
return v___x_2943_;
}
else
{
lean_object* v_snd_2944_; lean_object* v_snd_2945_; lean_object* v_snd_2946_; lean_object* v_snd_2947_; lean_object* v_snd_2948_; lean_object* v_fst_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_3159_; 
v_snd_2944_ = lean_ctor_get(v_acc_2939_, 1);
lean_inc(v_snd_2944_);
v_snd_2945_ = lean_ctor_get(v_snd_2944_, 1);
lean_inc(v_snd_2945_);
v_snd_2946_ = lean_ctor_get(v_snd_2945_, 1);
lean_inc(v_snd_2946_);
v_snd_2947_ = lean_ctor_get(v_snd_2946_, 1);
lean_inc(v_snd_2947_);
v_snd_2948_ = lean_ctor_get(v_snd_2947_, 1);
lean_inc(v_snd_2948_);
v_fst_2949_ = lean_ctor_get(v_acc_2939_, 0);
v_isSharedCheck_3159_ = !lean_is_exclusive(v_acc_2939_);
if (v_isSharedCheck_3159_ == 0)
{
lean_object* v_unused_3160_; 
v_unused_3160_ = lean_ctor_get(v_acc_2939_, 1);
lean_dec(v_unused_3160_);
v___x_2951_ = v_acc_2939_;
v_isShared_2952_ = v_isSharedCheck_3159_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_fst_2949_);
lean_dec(v_acc_2939_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_3159_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v_fst_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_3157_; 
v_fst_2953_ = lean_ctor_get(v_snd_2944_, 0);
v_isSharedCheck_3157_ = !lean_is_exclusive(v_snd_2944_);
if (v_isSharedCheck_3157_ == 0)
{
lean_object* v_unused_3158_; 
v_unused_3158_ = lean_ctor_get(v_snd_2944_, 1);
lean_dec(v_unused_3158_);
v___x_2955_ = v_snd_2944_;
v_isShared_2956_ = v_isSharedCheck_3157_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_fst_2953_);
lean_dec(v_snd_2944_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_3157_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v_fst_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_3155_; 
v_fst_2957_ = lean_ctor_get(v_snd_2945_, 0);
v_isSharedCheck_3155_ = !lean_is_exclusive(v_snd_2945_);
if (v_isSharedCheck_3155_ == 0)
{
lean_object* v_unused_3156_; 
v_unused_3156_ = lean_ctor_get(v_snd_2945_, 1);
lean_dec(v_unused_3156_);
v___x_2959_ = v_snd_2945_;
v_isShared_2960_ = v_isSharedCheck_3155_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_fst_2957_);
lean_dec(v_snd_2945_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_3155_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v_fst_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_3153_; 
v_fst_2961_ = lean_ctor_get(v_snd_2946_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v_snd_2946_);
if (v_isSharedCheck_3153_ == 0)
{
lean_object* v_unused_3154_; 
v_unused_3154_ = lean_ctor_get(v_snd_2946_, 1);
lean_dec(v_unused_3154_);
v___x_2963_ = v_snd_2946_;
v_isShared_2964_ = v_isSharedCheck_3153_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_fst_2961_);
lean_dec(v_snd_2946_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_3153_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v_fst_2965_; lean_object* v___x_2967_; uint8_t v_isShared_2968_; uint8_t v_isSharedCheck_3151_; 
v_fst_2965_ = lean_ctor_get(v_snd_2947_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v_snd_2947_);
if (v_isSharedCheck_3151_ == 0)
{
lean_object* v_unused_3152_; 
v_unused_3152_ = lean_ctor_get(v_snd_2947_, 1);
lean_dec(v_unused_3152_);
v___x_2967_ = v_snd_2947_;
v_isShared_2968_ = v_isSharedCheck_3151_;
goto v_resetjp_2966_;
}
else
{
lean_inc(v_fst_2965_);
lean_dec(v_snd_2947_);
v___x_2967_ = lean_box(0);
v_isShared_2968_ = v_isSharedCheck_3151_;
goto v_resetjp_2966_;
}
v_resetjp_2966_:
{
lean_object* v_array_2969_; lean_object* v_start_2970_; lean_object* v_stop_2971_; lean_object* v___f_2972_; lean_object* v___y_2974_; uint8_t v___x_2977_; 
v_array_2969_ = lean_ctor_get(v_snd_2948_, 0);
v_start_2970_ = lean_ctor_get(v_snd_2948_, 1);
v_stop_2971_ = lean_ctor_get(v_snd_2948_, 2);
lean_inc(v_next_2938_);
lean_inc(v_toPure_2922_);
v___f_2972_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed), 4, 3);
lean_closure_set(v___f_2972_, 0, v_toPure_2922_);
lean_closure_set(v___f_2972_, 1, v_next_2938_);
lean_closure_set(v___f_2972_, 2, v_G_2941_);
v___x_2977_ = lean_nat_dec_lt(v_start_2970_, v_stop_2971_);
if (v___x_2977_ == 0)
{
lean_object* v___x_2979_; 
lean_dec(v_next_2938_);
lean_dec(v_numDiscrEqs_2937_);
lean_dec_ref(v_inst_2936_);
lean_dec_ref(v_inst_2935_);
lean_dec(v_fst_2934_);
lean_dec(v___f_2933_);
lean_dec(v_onAlt_2932_);
lean_dec_ref(v_toMonadExceptOf_2929_);
lean_dec(v___x_2928_);
lean_dec(v_inst_2927_);
if (v_isShared_2968_ == 0)
{
v___x_2979_ = v___x_2967_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_fst_2965_);
lean_ctor_set(v_reuseFailAlloc_2994_, 1, v_snd_2948_);
v___x_2979_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
lean_object* v___x_2981_; 
if (v_isShared_2964_ == 0)
{
lean_ctor_set(v___x_2963_, 1, v___x_2979_);
v___x_2981_ = v___x_2963_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v_fst_2961_);
lean_ctor_set(v_reuseFailAlloc_2993_, 1, v___x_2979_);
v___x_2981_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
lean_object* v___x_2983_; 
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 1, v___x_2981_);
v___x_2983_ = v___x_2959_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_fst_2957_);
lean_ctor_set(v_reuseFailAlloc_2992_, 1, v___x_2981_);
v___x_2983_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
lean_object* v___x_2985_; 
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 1, v___x_2983_);
v___x_2985_ = v___x_2955_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v_fst_2953_);
lean_ctor_set(v_reuseFailAlloc_2991_, 1, v___x_2983_);
v___x_2985_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
lean_object* v___x_2987_; 
if (v_isShared_2952_ == 0)
{
lean_ctor_set(v___x_2951_, 1, v___x_2985_);
v___x_2987_ = v___x_2951_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v_fst_2949_);
lean_ctor_set(v_reuseFailAlloc_2990_, 1, v___x_2985_);
v___x_2987_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
lean_object* v___x_2988_; lean_object* v___x_2989_; 
v___x_2988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2988_, 0, v___x_2987_);
v___x_2989_ = lean_apply_2(v_toPure_2922_, lean_box(0), v___x_2988_);
v___y_2974_ = v___x_2989_;
goto v___jp_2973_;
}
}
}
}
}
}
else
{
lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3147_; 
lean_inc(v_stop_2971_);
lean_inc(v_start_2970_);
lean_inc_ref(v_array_2969_);
v_isSharedCheck_3147_ = !lean_is_exclusive(v_snd_2948_);
if (v_isSharedCheck_3147_ == 0)
{
lean_object* v_unused_3148_; lean_object* v_unused_3149_; lean_object* v_unused_3150_; 
v_unused_3148_ = lean_ctor_get(v_snd_2948_, 2);
lean_dec(v_unused_3148_);
v_unused_3149_ = lean_ctor_get(v_snd_2948_, 1);
lean_dec(v_unused_3149_);
v_unused_3150_ = lean_ctor_get(v_snd_2948_, 0);
lean_dec(v_unused_3150_);
v___x_2996_ = v_snd_2948_;
v_isShared_2997_ = v_isSharedCheck_3147_;
goto v_resetjp_2995_;
}
else
{
lean_dec(v_snd_2948_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3147_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
lean_object* v_array_2998_; lean_object* v_start_2999_; lean_object* v_stop_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3005_; 
v_array_2998_ = lean_ctor_get(v_fst_2965_, 0);
v_start_2999_ = lean_ctor_get(v_fst_2965_, 1);
v_stop_3000_ = lean_ctor_get(v_fst_2965_, 2);
v___x_3001_ = lean_array_fget(v_array_2969_, v_start_2970_);
v___x_3002_ = lean_unsigned_to_nat(1u);
v___x_3003_ = lean_nat_add(v_start_2970_, v___x_3002_);
lean_dec(v_start_2970_);
if (v_isShared_2997_ == 0)
{
lean_ctor_set(v___x_2996_, 1, v___x_3003_);
v___x_3005_ = v___x_2996_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_array_2969_);
lean_ctor_set(v_reuseFailAlloc_3146_, 1, v___x_3003_);
lean_ctor_set(v_reuseFailAlloc_3146_, 2, v_stop_2971_);
v___x_3005_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
uint8_t v___x_3006_; 
v___x_3006_ = lean_nat_dec_lt(v_start_2999_, v_stop_3000_);
if (v___x_3006_ == 0)
{
lean_object* v___x_3008_; 
lean_dec(v___x_3001_);
lean_dec(v_next_2938_);
lean_dec(v_numDiscrEqs_2937_);
lean_dec_ref(v_inst_2936_);
lean_dec_ref(v_inst_2935_);
lean_dec(v_fst_2934_);
lean_dec(v___f_2933_);
lean_dec(v_onAlt_2932_);
lean_dec_ref(v_toMonadExceptOf_2929_);
lean_dec(v___x_2928_);
lean_dec(v_inst_2927_);
if (v_isShared_2968_ == 0)
{
lean_ctor_set(v___x_2967_, 1, v___x_3005_);
v___x_3008_ = v___x_2967_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v_fst_2965_);
lean_ctor_set(v_reuseFailAlloc_3023_, 1, v___x_3005_);
v___x_3008_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
lean_object* v___x_3010_; 
if (v_isShared_2964_ == 0)
{
lean_ctor_set(v___x_2963_, 1, v___x_3008_);
v___x_3010_ = v___x_2963_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_fst_2961_);
lean_ctor_set(v_reuseFailAlloc_3022_, 1, v___x_3008_);
v___x_3010_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
lean_object* v___x_3012_; 
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 1, v___x_3010_);
v___x_3012_ = v___x_2959_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v_fst_2957_);
lean_ctor_set(v_reuseFailAlloc_3021_, 1, v___x_3010_);
v___x_3012_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
lean_object* v___x_3014_; 
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 1, v___x_3012_);
v___x_3014_ = v___x_2955_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v_fst_2953_);
lean_ctor_set(v_reuseFailAlloc_3020_, 1, v___x_3012_);
v___x_3014_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
lean_object* v___x_3016_; 
if (v_isShared_2952_ == 0)
{
lean_ctor_set(v___x_2951_, 1, v___x_3014_);
v___x_3016_ = v___x_2951_;
goto v_reusejp_3015_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v_fst_2949_);
lean_ctor_set(v_reuseFailAlloc_3019_, 1, v___x_3014_);
v___x_3016_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3015_;
}
v_reusejp_3015_:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; 
v___x_3017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3017_, 0, v___x_3016_);
v___x_3018_ = lean_apply_2(v_toPure_2922_, lean_box(0), v___x_3017_);
v___y_2974_ = v___x_3018_;
goto v___jp_2973_;
}
}
}
}
}
}
else
{
lean_object* v___x_3025_; uint8_t v_isShared_3026_; uint8_t v_isSharedCheck_3142_; 
lean_inc(v_stop_3000_);
lean_inc(v_start_2999_);
lean_inc_ref(v_array_2998_);
v_isSharedCheck_3142_ = !lean_is_exclusive(v_fst_2965_);
if (v_isSharedCheck_3142_ == 0)
{
lean_object* v_unused_3143_; lean_object* v_unused_3144_; lean_object* v_unused_3145_; 
v_unused_3143_ = lean_ctor_get(v_fst_2965_, 2);
lean_dec(v_unused_3143_);
v_unused_3144_ = lean_ctor_get(v_fst_2965_, 1);
lean_dec(v_unused_3144_);
v_unused_3145_ = lean_ctor_get(v_fst_2965_, 0);
lean_dec(v_unused_3145_);
v___x_3025_ = v_fst_2965_;
v_isShared_3026_ = v_isSharedCheck_3142_;
goto v_resetjp_3024_;
}
else
{
lean_dec(v_fst_2965_);
v___x_3025_ = lean_box(0);
v_isShared_3026_ = v_isSharedCheck_3142_;
goto v_resetjp_3024_;
}
v_resetjp_3024_:
{
lean_object* v_array_3027_; lean_object* v_start_3028_; lean_object* v_stop_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3033_; 
v_array_3027_ = lean_ctor_get(v_fst_2961_, 0);
v_start_3028_ = lean_ctor_get(v_fst_2961_, 1);
v_stop_3029_ = lean_ctor_get(v_fst_2961_, 2);
v___x_3030_ = lean_array_fget(v_array_2998_, v_start_2999_);
v___x_3031_ = lean_nat_add(v_start_2999_, v___x_3002_);
lean_dec(v_start_2999_);
if (v_isShared_3026_ == 0)
{
lean_ctor_set(v___x_3025_, 1, v___x_3031_);
v___x_3033_ = v___x_3025_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v_array_2998_);
lean_ctor_set(v_reuseFailAlloc_3141_, 1, v___x_3031_);
lean_ctor_set(v_reuseFailAlloc_3141_, 2, v_stop_3000_);
v___x_3033_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
uint8_t v___x_3034_; 
v___x_3034_ = lean_nat_dec_lt(v_start_3028_, v_stop_3029_);
if (v___x_3034_ == 0)
{
lean_object* v___x_3036_; 
lean_dec(v___x_3030_);
lean_dec(v___x_3001_);
lean_dec(v_next_2938_);
lean_dec(v_numDiscrEqs_2937_);
lean_dec_ref(v_inst_2936_);
lean_dec_ref(v_inst_2935_);
lean_dec(v_fst_2934_);
lean_dec(v___f_2933_);
lean_dec(v_onAlt_2932_);
lean_dec_ref(v_toMonadExceptOf_2929_);
lean_dec(v___x_2928_);
lean_dec(v_inst_2927_);
if (v_isShared_2968_ == 0)
{
lean_ctor_set(v___x_2967_, 1, v___x_3005_);
lean_ctor_set(v___x_2967_, 0, v___x_3033_);
v___x_3036_ = v___x_2967_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v___x_3033_);
lean_ctor_set(v_reuseFailAlloc_3051_, 1, v___x_3005_);
v___x_3036_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
lean_object* v___x_3038_; 
if (v_isShared_2964_ == 0)
{
lean_ctor_set(v___x_2963_, 1, v___x_3036_);
v___x_3038_ = v___x_2963_;
goto v_reusejp_3037_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v_fst_2961_);
lean_ctor_set(v_reuseFailAlloc_3050_, 1, v___x_3036_);
v___x_3038_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3037_;
}
v_reusejp_3037_:
{
lean_object* v___x_3040_; 
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 1, v___x_3038_);
v___x_3040_ = v___x_2959_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v_fst_2957_);
lean_ctor_set(v_reuseFailAlloc_3049_, 1, v___x_3038_);
v___x_3040_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
lean_object* v___x_3042_; 
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 1, v___x_3040_);
v___x_3042_ = v___x_2955_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_fst_2953_);
lean_ctor_set(v_reuseFailAlloc_3048_, 1, v___x_3040_);
v___x_3042_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
lean_object* v___x_3044_; 
if (v_isShared_2952_ == 0)
{
lean_ctor_set(v___x_2951_, 1, v___x_3042_);
v___x_3044_ = v___x_2951_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v_fst_2949_);
lean_ctor_set(v_reuseFailAlloc_3047_, 1, v___x_3042_);
v___x_3044_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3045_, 0, v___x_3044_);
v___x_3046_ = lean_apply_2(v_toPure_2922_, lean_box(0), v___x_3045_);
v___y_2974_ = v___x_3046_;
goto v___jp_2973_;
}
}
}
}
}
}
else
{
lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3137_; 
lean_inc(v_stop_3029_);
lean_inc(v_start_3028_);
lean_inc_ref(v_array_3027_);
v_isSharedCheck_3137_ = !lean_is_exclusive(v_fst_2961_);
if (v_isSharedCheck_3137_ == 0)
{
lean_object* v_unused_3138_; lean_object* v_unused_3139_; lean_object* v_unused_3140_; 
v_unused_3138_ = lean_ctor_get(v_fst_2961_, 2);
lean_dec(v_unused_3138_);
v_unused_3139_ = lean_ctor_get(v_fst_2961_, 1);
lean_dec(v_unused_3139_);
v_unused_3140_ = lean_ctor_get(v_fst_2961_, 0);
lean_dec(v_unused_3140_);
v___x_3053_ = v_fst_2961_;
v_isShared_3054_ = v_isSharedCheck_3137_;
goto v_resetjp_3052_;
}
else
{
lean_dec(v_fst_2961_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3137_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v_array_3055_; lean_object* v_start_3056_; lean_object* v_stop_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3061_; 
v_array_3055_ = lean_ctor_get(v_fst_2957_, 0);
v_start_3056_ = lean_ctor_get(v_fst_2957_, 1);
v_stop_3057_ = lean_ctor_get(v_fst_2957_, 2);
v___x_3058_ = lean_array_fget(v_array_3027_, v_start_3028_);
v___x_3059_ = lean_nat_add(v_start_3028_, v___x_3002_);
lean_dec(v_start_3028_);
if (v_isShared_3054_ == 0)
{
lean_ctor_set(v___x_3053_, 1, v___x_3059_);
v___x_3061_ = v___x_3053_;
goto v_reusejp_3060_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_array_3027_);
lean_ctor_set(v_reuseFailAlloc_3136_, 1, v___x_3059_);
lean_ctor_set(v_reuseFailAlloc_3136_, 2, v_stop_3029_);
v___x_3061_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3060_;
}
v_reusejp_3060_:
{
uint8_t v___x_3062_; 
v___x_3062_ = lean_nat_dec_lt(v_start_3056_, v_stop_3057_);
if (v___x_3062_ == 0)
{
lean_object* v___x_3064_; 
lean_dec(v___x_3058_);
lean_dec(v___x_3030_);
lean_dec(v___x_3001_);
lean_dec(v_next_2938_);
lean_dec(v_numDiscrEqs_2937_);
lean_dec_ref(v_inst_2936_);
lean_dec_ref(v_inst_2935_);
lean_dec(v_fst_2934_);
lean_dec(v___f_2933_);
lean_dec(v_onAlt_2932_);
lean_dec_ref(v_toMonadExceptOf_2929_);
lean_dec(v___x_2928_);
lean_dec(v_inst_2927_);
if (v_isShared_2968_ == 0)
{
lean_ctor_set(v___x_2967_, 1, v___x_3005_);
lean_ctor_set(v___x_2967_, 0, v___x_3033_);
v___x_3064_ = v___x_2967_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v___x_3033_);
lean_ctor_set(v_reuseFailAlloc_3079_, 1, v___x_3005_);
v___x_3064_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
lean_object* v___x_3066_; 
if (v_isShared_2964_ == 0)
{
lean_ctor_set(v___x_2963_, 1, v___x_3064_);
lean_ctor_set(v___x_2963_, 0, v___x_3061_);
v___x_3066_ = v___x_2963_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v___x_3061_);
lean_ctor_set(v_reuseFailAlloc_3078_, 1, v___x_3064_);
v___x_3066_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
lean_object* v___x_3068_; 
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 1, v___x_3066_);
v___x_3068_ = v___x_2959_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_fst_2957_);
lean_ctor_set(v_reuseFailAlloc_3077_, 1, v___x_3066_);
v___x_3068_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
lean_object* v___x_3070_; 
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 1, v___x_3068_);
v___x_3070_ = v___x_2955_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v_fst_2953_);
lean_ctor_set(v_reuseFailAlloc_3076_, 1, v___x_3068_);
v___x_3070_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
lean_object* v___x_3072_; 
if (v_isShared_2952_ == 0)
{
lean_ctor_set(v___x_2951_, 1, v___x_3070_);
v___x_3072_ = v___x_2951_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_fst_2949_);
lean_ctor_set(v_reuseFailAlloc_3075_, 1, v___x_3070_);
v___x_3072_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
lean_object* v___x_3073_; lean_object* v___x_3074_; 
v___x_3073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3072_);
v___x_3074_ = lean_apply_2(v_toPure_2922_, lean_box(0), v___x_3073_);
v___y_2974_ = v___x_3074_;
goto v___jp_2973_;
}
}
}
}
}
}
else
{
lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3132_; 
lean_inc(v_stop_3057_);
lean_inc(v_start_3056_);
lean_inc_ref(v_array_3055_);
v_isSharedCheck_3132_ = !lean_is_exclusive(v_fst_2957_);
if (v_isSharedCheck_3132_ == 0)
{
lean_object* v_unused_3133_; lean_object* v_unused_3134_; lean_object* v_unused_3135_; 
v_unused_3133_ = lean_ctor_get(v_fst_2957_, 2);
lean_dec(v_unused_3133_);
v_unused_3134_ = lean_ctor_get(v_fst_2957_, 1);
lean_dec(v_unused_3134_);
v_unused_3135_ = lean_ctor_get(v_fst_2957_, 0);
lean_dec(v_unused_3135_);
v___x_3081_ = v_fst_2957_;
v_isShared_3082_ = v_isSharedCheck_3132_;
goto v_resetjp_3080_;
}
else
{
lean_dec(v_fst_2957_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3132_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v_array_3083_; lean_object* v_start_3084_; lean_object* v_stop_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3089_; 
v_array_3083_ = lean_ctor_get(v_fst_2953_, 0);
v_start_3084_ = lean_ctor_get(v_fst_2953_, 1);
v_stop_3085_ = lean_ctor_get(v_fst_2953_, 2);
v___x_3086_ = lean_array_fget(v_array_3055_, v_start_3056_);
v___x_3087_ = lean_nat_add(v_start_3056_, v___x_3002_);
lean_dec(v_start_3056_);
if (v_isShared_3082_ == 0)
{
lean_ctor_set(v___x_3081_, 1, v___x_3087_);
v___x_3089_ = v___x_3081_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_array_3055_);
lean_ctor_set(v_reuseFailAlloc_3131_, 1, v___x_3087_);
lean_ctor_set(v_reuseFailAlloc_3131_, 2, v_stop_3057_);
v___x_3089_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
uint8_t v___x_3090_; 
v___x_3090_ = lean_nat_dec_lt(v_start_3084_, v_stop_3085_);
if (v___x_3090_ == 0)
{
lean_object* v___x_3092_; 
lean_dec(v___x_3086_);
lean_dec(v___x_3058_);
lean_dec(v___x_3030_);
lean_dec(v___x_3001_);
lean_dec(v_next_2938_);
lean_dec(v_numDiscrEqs_2937_);
lean_dec_ref(v_inst_2936_);
lean_dec_ref(v_inst_2935_);
lean_dec(v_fst_2934_);
lean_dec(v___f_2933_);
lean_dec(v_onAlt_2932_);
lean_dec_ref(v_toMonadExceptOf_2929_);
lean_dec(v___x_2928_);
lean_dec(v_inst_2927_);
if (v_isShared_2968_ == 0)
{
lean_ctor_set(v___x_2967_, 1, v___x_3005_);
lean_ctor_set(v___x_2967_, 0, v___x_3033_);
v___x_3092_ = v___x_2967_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v___x_3033_);
lean_ctor_set(v_reuseFailAlloc_3107_, 1, v___x_3005_);
v___x_3092_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
lean_object* v___x_3094_; 
if (v_isShared_2964_ == 0)
{
lean_ctor_set(v___x_2963_, 1, v___x_3092_);
lean_ctor_set(v___x_2963_, 0, v___x_3061_);
v___x_3094_ = v___x_2963_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v___x_3061_);
lean_ctor_set(v_reuseFailAlloc_3106_, 1, v___x_3092_);
v___x_3094_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
lean_object* v___x_3096_; 
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 1, v___x_3094_);
lean_ctor_set(v___x_2959_, 0, v___x_3089_);
v___x_3096_ = v___x_2959_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3105_; 
v_reuseFailAlloc_3105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3105_, 0, v___x_3089_);
lean_ctor_set(v_reuseFailAlloc_3105_, 1, v___x_3094_);
v___x_3096_ = v_reuseFailAlloc_3105_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
lean_object* v___x_3098_; 
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 1, v___x_3096_);
v___x_3098_ = v___x_2955_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3104_; 
v_reuseFailAlloc_3104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3104_, 0, v_fst_2953_);
lean_ctor_set(v_reuseFailAlloc_3104_, 1, v___x_3096_);
v___x_3098_ = v_reuseFailAlloc_3104_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
lean_object* v___x_3100_; 
if (v_isShared_2952_ == 0)
{
lean_ctor_set(v___x_2951_, 1, v___x_3098_);
v___x_3100_ = v___x_2951_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v_fst_2949_);
lean_ctor_set(v_reuseFailAlloc_3103_, 1, v___x_3098_);
v___x_3100_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3101_, 0, v___x_3100_);
v___x_3102_ = lean_apply_2(v_toPure_2922_, lean_box(0), v___x_3101_);
v___y_2974_ = v___x_3102_;
goto v___jp_2973_;
}
}
}
}
}
}
else
{
lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3127_; 
lean_inc(v_stop_3085_);
lean_inc(v_start_3084_);
lean_inc_ref(v_array_3083_);
lean_del_object(v___x_2967_);
lean_del_object(v___x_2963_);
lean_del_object(v___x_2959_);
lean_del_object(v___x_2955_);
lean_del_object(v___x_2951_);
v_isSharedCheck_3127_ = !lean_is_exclusive(v_fst_2953_);
if (v_isSharedCheck_3127_ == 0)
{
lean_object* v_unused_3128_; lean_object* v_unused_3129_; lean_object* v_unused_3130_; 
v_unused_3128_ = lean_ctor_get(v_fst_2953_, 2);
lean_dec(v_unused_3128_);
v_unused_3129_ = lean_ctor_get(v_fst_2953_, 1);
lean_dec(v_unused_3129_);
v_unused_3130_ = lean_ctor_get(v_fst_2953_, 0);
lean_dec(v_unused_3130_);
v___x_3109_ = v_fst_2953_;
v_isShared_3110_ = v_isSharedCheck_3127_;
goto v_resetjp_3108_;
}
else
{
lean_dec(v_fst_2953_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3127_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v_numOverlaps_3111_; uint8_t v___x_3112_; 
v_numOverlaps_3111_ = lean_ctor_get(v___x_3086_, 1);
v___x_3112_ = lean_nat_dec_eq(v_numOverlaps_3111_, v___x_2925_);
if (v___x_3112_ == 0)
{
lean_object* v___x_3113_; lean_object* v___x_3114_; 
lean_del_object(v___x_3109_);
lean_dec_ref(v___x_3089_);
lean_dec(v___x_3086_);
lean_dec(v_stop_3085_);
lean_dec(v_start_3084_);
lean_dec_ref(v_array_3083_);
lean_dec_ref(v___x_3061_);
lean_dec(v___x_3058_);
lean_dec_ref(v___x_3033_);
lean_dec(v___x_3030_);
lean_dec_ref(v___x_3005_);
lean_dec(v___x_3001_);
lean_dec(v_fst_2949_);
lean_dec(v_next_2938_);
lean_dec(v_numDiscrEqs_2937_);
lean_dec_ref(v_inst_2936_);
lean_dec_ref(v_inst_2935_);
lean_dec(v_fst_2934_);
lean_dec(v___f_2933_);
lean_dec(v_onAlt_2932_);
lean_dec_ref(v_toMonadExceptOf_2929_);
lean_dec(v___x_2928_);
lean_dec(v_inst_2927_);
lean_dec(v_toPure_2922_);
v___x_3113_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1);
v___x_3114_ = l_panic___redArg(v___x_2926_, v___x_3113_);
v___y_2974_ = v___x_3114_;
goto v___jp_2973_;
}
else
{
lean_object* v___f_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___f_3119_; lean_object* v___x_3120_; lean_object* v___x_3122_; 
lean_inc(v_inst_2927_);
lean_inc_n(v_toPure_2922_, 2);
lean_inc(v___x_3058_);
v___f_3115_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed), 4, 3);
lean_closure_set(v___f_3115_, 0, v___x_3058_);
lean_closure_set(v___f_3115_, 1, v_toPure_2922_);
lean_closure_set(v___f_3115_, 2, v_inst_2927_);
v___x_3116_ = lean_array_fget_borrowed(v_array_3083_, v_start_3084_);
v___x_3117_ = lean_box(v___x_2930_);
v___x_3118_ = lean_box(v_useSplitter_2931_);
lean_inc(v___x_3086_);
lean_inc_ref(v_inst_2936_);
lean_inc_ref(v_inst_2935_);
lean_inc(v___x_3116_);
lean_inc(v_toBind_2923_);
v___f_3119_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed), 22, 20);
lean_closure_set(v___f_3119_, 0, v___x_3058_);
lean_closure_set(v___f_3119_, 1, v___x_2928_);
lean_closure_set(v___f_3119_, 2, v_toMonadExceptOf_2929_);
lean_closure_set(v___f_3119_, 3, v___x_3117_);
lean_closure_set(v___f_3119_, 4, v___x_3118_);
lean_closure_set(v___f_3119_, 5, v_inst_2927_);
lean_closure_set(v___f_3119_, 6, v_onAlt_2932_);
lean_closure_set(v___f_3119_, 7, v_next_2938_);
lean_closure_set(v___f_3119_, 8, v_toBind_2923_);
lean_closure_set(v___f_3119_, 9, v___x_3116_);
lean_closure_set(v___f_3119_, 10, v___f_2933_);
lean_closure_set(v___f_3119_, 11, v_fst_2934_);
lean_closure_set(v___f_3119_, 12, v_inst_2935_);
lean_closure_set(v___f_3119_, 13, v_inst_2936_);
lean_closure_set(v___f_3119_, 14, v_numDiscrEqs_2937_);
lean_closure_set(v___f_3119_, 15, v___f_3115_);
lean_closure_set(v___f_3119_, 16, v___x_3086_);
lean_closure_set(v___f_3119_, 17, v_toPure_2922_);
lean_closure_set(v___f_3119_, 18, v___x_3002_);
lean_closure_set(v___f_3119_, 19, v___x_3001_);
v___x_3120_ = lean_nat_add(v_start_3084_, v___x_3002_);
lean_dec(v_start_3084_);
if (v_isShared_3110_ == 0)
{
lean_ctor_set(v___x_3109_, 1, v___x_3120_);
v___x_3122_ = v___x_3109_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v_array_3083_);
lean_ctor_set(v_reuseFailAlloc_3126_, 1, v___x_3120_);
lean_ctor_set(v_reuseFailAlloc_3126_, 2, v_stop_3085_);
v___x_3122_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
lean_object* v___f_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___f_3123_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__45), 8, 7);
lean_closure_set(v___f_3123_, 0, v_fst_2949_);
lean_closure_set(v___f_3123_, 1, v___x_3033_);
lean_closure_set(v___f_3123_, 2, v___x_3005_);
lean_closure_set(v___f_3123_, 3, v___x_3061_);
lean_closure_set(v___f_3123_, 4, v___x_3089_);
lean_closure_set(v___f_3123_, 5, v___x_3122_);
lean_closure_set(v___f_3123_, 6, v_toPure_2922_);
v___x_3124_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(v_inst_2936_, v_inst_2935_, v___x_3030_, v___x_3086_, v___f_3119_);
lean_inc(v_toBind_2923_);
v___x_3125_ = lean_apply_4(v_toBind_2923_, lean_box(0), lean_box(0), v___x_3124_, v___f_3123_);
v___y_2974_ = v___x_3125_;
goto v___jp_2973_;
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
v___jp_2973_:
{
lean_object* v___x_2975_; lean_object* v___x_2976_; 
lean_inc(v_toBind_2923_);
v___x_2975_ = lean_apply_4(v_toBind_2923_, lean_box(0), lean_box(0), v___y_2974_, v___f_2924_);
v___x_2976_ = lean_apply_4(v_toBind_2923_, lean_box(0), lean_box(0), v___x_2975_, v___f_2972_);
return v___x_2976_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed(lean_object** _args){
lean_object* v___x_3161_ = _args[0];
lean_object* v_toPure_3162_ = _args[1];
lean_object* v_toBind_3163_ = _args[2];
lean_object* v___f_3164_ = _args[3];
lean_object* v___x_3165_ = _args[4];
lean_object* v___x_3166_ = _args[5];
lean_object* v_inst_3167_ = _args[6];
lean_object* v___x_3168_ = _args[7];
lean_object* v_toMonadExceptOf_3169_ = _args[8];
lean_object* v___x_3170_ = _args[9];
lean_object* v_useSplitter_3171_ = _args[10];
lean_object* v_onAlt_3172_ = _args[11];
lean_object* v___f_3173_ = _args[12];
lean_object* v_fst_3174_ = _args[13];
lean_object* v_inst_3175_ = _args[14];
lean_object* v_inst_3176_ = _args[15];
lean_object* v_numDiscrEqs_3177_ = _args[16];
lean_object* v_next_3178_ = _args[17];
lean_object* v_acc_3179_ = _args[18];
lean_object* v_h_3180_ = _args[19];
lean_object* v_G_3181_ = _args[20];
_start:
{
uint8_t v___x_13769__boxed_3182_; uint8_t v_useSplitter_boxed_3183_; lean_object* v_res_3184_; 
v___x_13769__boxed_3182_ = lean_unbox(v___x_3170_);
v_useSplitter_boxed_3183_ = lean_unbox(v_useSplitter_3171_);
v_res_3184_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__46(v___x_3161_, v_toPure_3162_, v_toBind_3163_, v___f_3164_, v___x_3165_, v___x_3166_, v_inst_3167_, v___x_3168_, v_toMonadExceptOf_3169_, v___x_13769__boxed_3182_, v_useSplitter_boxed_3183_, v_onAlt_3172_, v___f_3173_, v_fst_3174_, v_inst_3175_, v_inst_3176_, v_numDiscrEqs_3177_, v_next_3178_, v_acc_3179_, v_h_3180_, v_G_3181_);
lean_dec(v___x_3166_);
lean_dec(v___x_3165_);
lean_dec(v___x_3161_);
return v_res_3184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47(lean_object* v_fst_3185_, lean_object* v_numParams_3186_, lean_object* v_numDiscrs_3187_, lean_object* v_altInfos_3188_, lean_object* v_uElimPos_x3f_3189_, lean_object* v_snd_3190_, lean_object* v_overlaps_3191_, lean_object* v_splitterName_3192_, lean_object* v_matcherLevels_3193_, lean_object* v_params_x27_3194_, lean_object* v_fst_3195_, lean_object* v_discrs_x27_3196_, lean_object* v_fst_3197_, lean_object* v_toPure_3198_, lean_object* v_____do__lift_3199_){
_start:
{
lean_object* v_remaining_x27_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v_remaining_x27_3200_ = l_Array_append___redArg(v_fst_3185_, v_____do__lift_3199_);
v___x_3201_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3201_, 0, v_numParams_3186_);
lean_ctor_set(v___x_3201_, 1, v_numDiscrs_3187_);
lean_ctor_set(v___x_3201_, 2, v_altInfos_3188_);
lean_ctor_set(v___x_3201_, 3, v_uElimPos_x3f_3189_);
lean_ctor_set(v___x_3201_, 4, v_snd_3190_);
lean_ctor_set(v___x_3201_, 5, v_overlaps_3191_);
v___x_3202_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3201_);
lean_ctor_set(v___x_3202_, 1, v_splitterName_3192_);
lean_ctor_set(v___x_3202_, 2, v_matcherLevels_3193_);
lean_ctor_set(v___x_3202_, 3, v_params_x27_3194_);
lean_ctor_set(v___x_3202_, 4, v_fst_3195_);
lean_ctor_set(v___x_3202_, 5, v_discrs_x27_3196_);
lean_ctor_set(v___x_3202_, 6, v_fst_3197_);
lean_ctor_set(v___x_3202_, 7, v_remaining_x27_3200_);
v___x_3203_ = lean_apply_2(v_toPure_3198_, lean_box(0), v___x_3202_);
return v___x_3203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed(lean_object* v_fst_3204_, lean_object* v_numParams_3205_, lean_object* v_numDiscrs_3206_, lean_object* v_altInfos_3207_, lean_object* v_uElimPos_x3f_3208_, lean_object* v_snd_3209_, lean_object* v_overlaps_3210_, lean_object* v_splitterName_3211_, lean_object* v_matcherLevels_3212_, lean_object* v_params_x27_3213_, lean_object* v_fst_3214_, lean_object* v_discrs_x27_3215_, lean_object* v_fst_3216_, lean_object* v_toPure_3217_, lean_object* v_____do__lift_3218_){
_start:
{
lean_object* v_res_3219_; 
v_res_3219_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__47(v_fst_3204_, v_numParams_3205_, v_numDiscrs_3206_, v_altInfos_3207_, v_uElimPos_x3f_3208_, v_snd_3209_, v_overlaps_3210_, v_splitterName_3211_, v_matcherLevels_3212_, v_params_x27_3213_, v_fst_3214_, v_discrs_x27_3215_, v_fst_3216_, v_toPure_3217_, v_____do__lift_3218_);
lean_dec_ref(v_____do__lift_3218_);
return v_res_3219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48(lean_object* v_fst_3220_, lean_object* v_numParams_3221_, lean_object* v_numDiscrs_3222_, lean_object* v_altInfos_3223_, lean_object* v_uElimPos_x3f_3224_, lean_object* v_snd_3225_, lean_object* v_overlaps_3226_, lean_object* v_splitterName_3227_, lean_object* v_matcherLevels_3228_, lean_object* v_params_x27_3229_, lean_object* v_fst_3230_, lean_object* v_discrs_x27_3231_, lean_object* v_toPure_3232_, lean_object* v_onRemaining_3233_, lean_object* v_remaining_3234_, lean_object* v_toBind_3235_, lean_object* v_____s_3236_){
_start:
{
lean_object* v_fst_3237_; lean_object* v___f_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; 
v_fst_3237_ = lean_ctor_get(v_____s_3236_, 0);
lean_inc(v_fst_3237_);
lean_dec_ref(v_____s_3236_);
v___f_3238_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed), 15, 14);
lean_closure_set(v___f_3238_, 0, v_fst_3220_);
lean_closure_set(v___f_3238_, 1, v_numParams_3221_);
lean_closure_set(v___f_3238_, 2, v_numDiscrs_3222_);
lean_closure_set(v___f_3238_, 3, v_altInfos_3223_);
lean_closure_set(v___f_3238_, 4, v_uElimPos_x3f_3224_);
lean_closure_set(v___f_3238_, 5, v_snd_3225_);
lean_closure_set(v___f_3238_, 6, v_overlaps_3226_);
lean_closure_set(v___f_3238_, 7, v_splitterName_3227_);
lean_closure_set(v___f_3238_, 8, v_matcherLevels_3228_);
lean_closure_set(v___f_3238_, 9, v_params_x27_3229_);
lean_closure_set(v___f_3238_, 10, v_fst_3230_);
lean_closure_set(v___f_3238_, 11, v_discrs_x27_3231_);
lean_closure_set(v___f_3238_, 12, v_fst_3237_);
lean_closure_set(v___f_3238_, 13, v_toPure_3232_);
v___x_3239_ = lean_apply_1(v_onRemaining_3233_, v_remaining_3234_);
v___x_3240_ = lean_apply_4(v_toBind_3235_, lean_box(0), lean_box(0), v___x_3239_, v___f_3238_);
return v___x_3240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed(lean_object** _args){
lean_object* v_fst_3241_ = _args[0];
lean_object* v_numParams_3242_ = _args[1];
lean_object* v_numDiscrs_3243_ = _args[2];
lean_object* v_altInfos_3244_ = _args[3];
lean_object* v_uElimPos_x3f_3245_ = _args[4];
lean_object* v_snd_3246_ = _args[5];
lean_object* v_overlaps_3247_ = _args[6];
lean_object* v_splitterName_3248_ = _args[7];
lean_object* v_matcherLevels_3249_ = _args[8];
lean_object* v_params_x27_3250_ = _args[9];
lean_object* v_fst_3251_ = _args[10];
lean_object* v_discrs_x27_3252_ = _args[11];
lean_object* v_toPure_3253_ = _args[12];
lean_object* v_onRemaining_3254_ = _args[13];
lean_object* v_remaining_3255_ = _args[14];
lean_object* v_toBind_3256_ = _args[15];
lean_object* v_____s_3257_ = _args[16];
_start:
{
lean_object* v_res_3258_; 
v_res_3258_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__48(v_fst_3241_, v_numParams_3242_, v_numDiscrs_3243_, v_altInfos_3244_, v_uElimPos_x3f_3245_, v_snd_3246_, v_overlaps_3247_, v_splitterName_3248_, v_matcherLevels_3249_, v_params_x27_3250_, v_fst_3251_, v_discrs_x27_3252_, v_toPure_3253_, v_onRemaining_3254_, v_remaining_3255_, v_toBind_3256_, v_____s_3257_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49(lean_object* v_splitterMatchInfo_3259_, lean_object* v_fst_3260_, lean_object* v_numParams_3261_, lean_object* v_numDiscrs_3262_, lean_object* v_altInfos_3263_, lean_object* v_uElimPos_x3f_3264_, lean_object* v_snd_3265_, lean_object* v_overlaps_3266_, lean_object* v_splitterName_3267_, lean_object* v_matcherLevels_3268_, lean_object* v_params_x27_3269_, lean_object* v_fst_3270_, lean_object* v_discrs_x27_3271_, lean_object* v_toPure_3272_, lean_object* v_onRemaining_3273_, lean_object* v_remaining_3274_, lean_object* v_toBind_3275_, lean_object* v_origAltTypes_3276_, lean_object* v_alts_3277_, lean_object* v___x_3278_, lean_object* v___x_3279_, lean_object* v_remaining_x27_3280_, lean_object* v___f_3281_, lean_object* v_altTypes_3282_){
_start:
{
lean_object* v_altInfos_3283_; lean_object* v___f_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v_altInfos_3283_ = lean_ctor_get(v_splitterMatchInfo_3259_, 2);
lean_inc_ref(v_altInfos_3283_);
lean_dec_ref(v_splitterMatchInfo_3259_);
lean_inc(v_toBind_3275_);
lean_inc_ref(v_altInfos_3263_);
v___f_3284_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed), 17, 16);
lean_closure_set(v___f_3284_, 0, v_fst_3260_);
lean_closure_set(v___f_3284_, 1, v_numParams_3261_);
lean_closure_set(v___f_3284_, 2, v_numDiscrs_3262_);
lean_closure_set(v___f_3284_, 3, v_altInfos_3263_);
lean_closure_set(v___f_3284_, 4, v_uElimPos_x3f_3264_);
lean_closure_set(v___f_3284_, 5, v_snd_3265_);
lean_closure_set(v___f_3284_, 6, v_overlaps_3266_);
lean_closure_set(v___f_3284_, 7, v_splitterName_3267_);
lean_closure_set(v___f_3284_, 8, v_matcherLevels_3268_);
lean_closure_set(v___f_3284_, 9, v_params_x27_3269_);
lean_closure_set(v___f_3284_, 10, v_fst_3270_);
lean_closure_set(v___f_3284_, 11, v_discrs_x27_3271_);
lean_closure_set(v___f_3284_, 12, v_toPure_3272_);
lean_closure_set(v___f_3284_, 13, v_onRemaining_3273_);
lean_closure_set(v___f_3284_, 14, v_remaining_3274_);
lean_closure_set(v___f_3284_, 15, v_toBind_3275_);
v___x_3285_ = lean_array_get_size(v_altInfos_3263_);
v___x_3286_ = lean_array_get_size(v_altInfos_3283_);
v___x_3287_ = lean_array_get_size(v_origAltTypes_3276_);
v___x_3288_ = lean_array_get_size(v_altTypes_3282_);
lean_inc_n(v___x_3278_, 5);
v___x_3289_ = l_Array_toSubarray___redArg(v_alts_3277_, v___x_3278_, v___x_3279_);
v___x_3290_ = l_Array_toSubarray___redArg(v_altInfos_3263_, v___x_3278_, v___x_3285_);
v___x_3291_ = l_Array_toSubarray___redArg(v_altInfos_3283_, v___x_3278_, v___x_3286_);
v___x_3292_ = l_Array_toSubarray___redArg(v_origAltTypes_3276_, v___x_3278_, v___x_3287_);
v___x_3293_ = l_Array_toSubarray___redArg(v_altTypes_3282_, v___x_3278_, v___x_3288_);
v___x_3294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3292_);
lean_ctor_set(v___x_3294_, 1, v___x_3293_);
v___x_3295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3295_, 0, v___x_3291_);
lean_ctor_set(v___x_3295_, 1, v___x_3294_);
v___x_3296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3296_, 0, v___x_3290_);
lean_ctor_set(v___x_3296_, 1, v___x_3295_);
v___x_3297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3297_, 0, v___x_3289_);
lean_ctor_set(v___x_3297_, 1, v___x_3296_);
v___x_3298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3298_, 0, v_remaining_x27_3280_);
lean_ctor_set(v___x_3298_, 1, v___x_3297_);
v___x_3299_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_3281_, v___x_3278_, v___x_3298_, lean_box(0));
v___x_3300_ = lean_apply_4(v_toBind_3275_, lean_box(0), lean_box(0), v___x_3299_, v___f_3284_);
return v___x_3300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed(lean_object** _args){
lean_object* v_splitterMatchInfo_3301_ = _args[0];
lean_object* v_fst_3302_ = _args[1];
lean_object* v_numParams_3303_ = _args[2];
lean_object* v_numDiscrs_3304_ = _args[3];
lean_object* v_altInfos_3305_ = _args[4];
lean_object* v_uElimPos_x3f_3306_ = _args[5];
lean_object* v_snd_3307_ = _args[6];
lean_object* v_overlaps_3308_ = _args[7];
lean_object* v_splitterName_3309_ = _args[8];
lean_object* v_matcherLevels_3310_ = _args[9];
lean_object* v_params_x27_3311_ = _args[10];
lean_object* v_fst_3312_ = _args[11];
lean_object* v_discrs_x27_3313_ = _args[12];
lean_object* v_toPure_3314_ = _args[13];
lean_object* v_onRemaining_3315_ = _args[14];
lean_object* v_remaining_3316_ = _args[15];
lean_object* v_toBind_3317_ = _args[16];
lean_object* v_origAltTypes_3318_ = _args[17];
lean_object* v_alts_3319_ = _args[18];
lean_object* v___x_3320_ = _args[19];
lean_object* v___x_3321_ = _args[20];
lean_object* v_remaining_x27_3322_ = _args[21];
lean_object* v___f_3323_ = _args[22];
lean_object* v_altTypes_3324_ = _args[23];
_start:
{
lean_object* v_res_3325_; 
v_res_3325_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__49(v_splitterMatchInfo_3301_, v_fst_3302_, v_numParams_3303_, v_numDiscrs_3304_, v_altInfos_3305_, v_uElimPos_x3f_3306_, v_snd_3307_, v_overlaps_3308_, v_splitterName_3309_, v_matcherLevels_3310_, v_params_x27_3311_, v_fst_3312_, v_discrs_x27_3313_, v_toPure_3314_, v_onRemaining_3315_, v_remaining_3316_, v_toBind_3317_, v_origAltTypes_3318_, v_alts_3319_, v___x_3320_, v___x_3321_, v_remaining_x27_3322_, v___f_3323_, v_altTypes_3324_);
return v_res_3325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__50(lean_object* v___x_3326_, lean_object* v_aux2_3327_, lean_object* v_inst_3328_, lean_object* v_toBind_3329_, lean_object* v___f_3330_, lean_object* v_____r_3331_){
_start:
{
lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; 
v___x_3332_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_3332_, 0, v___x_3326_);
lean_closure_set(v___x_3332_, 1, v_aux2_3327_);
v___x_3333_ = lean_apply_2(v_inst_3328_, lean_box(0), v___x_3332_);
v___x_3334_ = lean_apply_4(v_toBind_3329_, lean_box(0), lean_box(0), v___x_3333_, v___f_3330_);
return v___x_3334_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1(void){
_start:
{
lean_object* v___x_3336_; lean_object* v___x_3337_; 
v___x_3336_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0));
v___x_3337_ = l_Lean_stringToMessageData(v___x_3336_);
return v___x_3337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53(lean_object* v___x_3338_, lean_object* v_params_x27_3339_, lean_object* v_fst_3340_, lean_object* v_discrs_x27_3341_, lean_object* v_fst_3342_, lean_object* v_numParams_3343_, lean_object* v_numDiscrs_3344_, lean_object* v_altInfos_3345_, lean_object* v_uElimPos_x3f_3346_, lean_object* v_snd_3347_, lean_object* v_overlaps_3348_, lean_object* v_matcherLevels_3349_, lean_object* v_toPure_3350_, lean_object* v_onRemaining_3351_, lean_object* v_remaining_3352_, lean_object* v_toBind_3353_, lean_object* v_origAltTypes_3354_, lean_object* v_alts_3355_, lean_object* v___x_3356_, lean_object* v___x_3357_, lean_object* v_remaining_x27_3358_, lean_object* v___f_3359_, lean_object* v_inst_3360_, lean_object* v___x_3361_, uint8_t v___x_3362_, lean_object* v_liftWith_3363_, lean_object* v_restoreM_3364_, lean_object* v_matchEqns_3365_){
_start:
{
lean_object* v_splitterName_3366_; lean_object* v_splitterMatchInfo_3367_; lean_object* v___x_3368_; lean_object* v_aux2_3369_; lean_object* v_aux2_3370_; lean_object* v_aux2_3371_; lean_object* v___x_3372_; lean_object* v___f_3373_; lean_object* v___f_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___f_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___f_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; 
v_splitterName_3366_ = lean_ctor_get(v_matchEqns_3365_, 1);
lean_inc_n(v_splitterName_3366_, 2);
v_splitterMatchInfo_3367_ = lean_ctor_get(v_matchEqns_3365_, 2);
lean_inc_ref(v_splitterMatchInfo_3367_);
lean_dec_ref(v_matchEqns_3365_);
v___x_3368_ = l_Lean_mkConst(v_splitterName_3366_, v___x_3338_);
v_aux2_3369_ = l_Lean_mkAppN(v___x_3368_, v_params_x27_3339_);
lean_inc_ref(v_fst_3340_);
v_aux2_3370_ = l_Lean_Expr_app___override(v_aux2_3369_, v_fst_3340_);
v_aux2_3371_ = l_Lean_mkAppN(v_aux2_3370_, v_discrs_x27_3341_);
lean_inc_ref_n(v_aux2_3371_, 2);
v___x_3372_ = l_Lean_indentExpr(v_aux2_3371_);
lean_inc(v___x_3357_);
lean_inc_n(v_toBind_3353_, 3);
v___f_3373_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed), 24, 23);
lean_closure_set(v___f_3373_, 0, v_splitterMatchInfo_3367_);
lean_closure_set(v___f_3373_, 1, v_fst_3342_);
lean_closure_set(v___f_3373_, 2, v_numParams_3343_);
lean_closure_set(v___f_3373_, 3, v_numDiscrs_3344_);
lean_closure_set(v___f_3373_, 4, v_altInfos_3345_);
lean_closure_set(v___f_3373_, 5, v_uElimPos_x3f_3346_);
lean_closure_set(v___f_3373_, 6, v_snd_3347_);
lean_closure_set(v___f_3373_, 7, v_overlaps_3348_);
lean_closure_set(v___f_3373_, 8, v_splitterName_3366_);
lean_closure_set(v___f_3373_, 9, v_matcherLevels_3349_);
lean_closure_set(v___f_3373_, 10, v_params_x27_3339_);
lean_closure_set(v___f_3373_, 11, v_fst_3340_);
lean_closure_set(v___f_3373_, 12, v_discrs_x27_3341_);
lean_closure_set(v___f_3373_, 13, v_toPure_3350_);
lean_closure_set(v___f_3373_, 14, v_onRemaining_3351_);
lean_closure_set(v___f_3373_, 15, v_remaining_3352_);
lean_closure_set(v___f_3373_, 16, v_toBind_3353_);
lean_closure_set(v___f_3373_, 17, v_origAltTypes_3354_);
lean_closure_set(v___f_3373_, 18, v_alts_3355_);
lean_closure_set(v___f_3373_, 19, v___x_3356_);
lean_closure_set(v___f_3373_, 20, v___x_3357_);
lean_closure_set(v___f_3373_, 21, v_remaining_x27_3358_);
lean_closure_set(v___f_3373_, 22, v___f_3359_);
lean_inc(v_inst_3360_);
v___f_3374_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__50), 6, 5);
lean_closure_set(v___f_3374_, 0, v___x_3357_);
lean_closure_set(v___f_3374_, 1, v_aux2_3371_);
lean_closure_set(v___f_3374_, 2, v_inst_3360_);
lean_closure_set(v___f_3374_, 3, v_toBind_3353_);
lean_closure_set(v___f_3374_, 4, v___f_3373_);
v___x_3375_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1);
v___x_3376_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3376_, 0, v___x_3375_);
lean_ctor_set(v___x_3376_, 1, v___x_3372_);
v___x_3377_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3377_, 0, v___x_3376_);
lean_ctor_set(v___x_3377_, 1, v___x_3361_);
v___f_3378_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3378_, 0, v___x_3377_);
v___x_3379_ = lean_box(v___x_3362_);
v___x_3380_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_3380_, 0, v_aux2_3371_);
lean_closure_set(v___x_3380_, 1, v___x_3379_);
v___x_3381_ = lean_apply_2(v_inst_3360_, lean_box(0), v___x_3380_);
v___f_3382_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3382_, 0, v___x_3381_);
lean_closure_set(v___f_3382_, 1, v___f_3378_);
v___x_3383_ = lean_apply_2(v_liftWith_3363_, lean_box(0), v___f_3382_);
v___x_3384_ = lean_apply_1(v_restoreM_3364_, lean_box(0));
v___x_3385_ = lean_apply_4(v_toBind_3353_, lean_box(0), lean_box(0), v___x_3383_, v___x_3384_);
v___x_3386_ = lean_apply_4(v_toBind_3353_, lean_box(0), lean_box(0), v___x_3385_, v___f_3374_);
return v___x_3386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed(lean_object** _args){
lean_object* v___x_3387_ = _args[0];
lean_object* v_params_x27_3388_ = _args[1];
lean_object* v_fst_3389_ = _args[2];
lean_object* v_discrs_x27_3390_ = _args[3];
lean_object* v_fst_3391_ = _args[4];
lean_object* v_numParams_3392_ = _args[5];
lean_object* v_numDiscrs_3393_ = _args[6];
lean_object* v_altInfos_3394_ = _args[7];
lean_object* v_uElimPos_x3f_3395_ = _args[8];
lean_object* v_snd_3396_ = _args[9];
lean_object* v_overlaps_3397_ = _args[10];
lean_object* v_matcherLevels_3398_ = _args[11];
lean_object* v_toPure_3399_ = _args[12];
lean_object* v_onRemaining_3400_ = _args[13];
lean_object* v_remaining_3401_ = _args[14];
lean_object* v_toBind_3402_ = _args[15];
lean_object* v_origAltTypes_3403_ = _args[16];
lean_object* v_alts_3404_ = _args[17];
lean_object* v___x_3405_ = _args[18];
lean_object* v___x_3406_ = _args[19];
lean_object* v_remaining_x27_3407_ = _args[20];
lean_object* v___f_3408_ = _args[21];
lean_object* v_inst_3409_ = _args[22];
lean_object* v___x_3410_ = _args[23];
lean_object* v___x_3411_ = _args[24];
lean_object* v_liftWith_3412_ = _args[25];
lean_object* v_restoreM_3413_ = _args[26];
lean_object* v_matchEqns_3414_ = _args[27];
_start:
{
uint8_t v___x_14293__boxed_3415_; lean_object* v_res_3416_; 
v___x_14293__boxed_3415_ = lean_unbox(v___x_3411_);
v_res_3416_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__53(v___x_3387_, v_params_x27_3388_, v_fst_3389_, v_discrs_x27_3390_, v_fst_3391_, v_numParams_3392_, v_numDiscrs_3393_, v_altInfos_3394_, v_uElimPos_x3f_3395_, v_snd_3396_, v_overlaps_3397_, v_matcherLevels_3398_, v_toPure_3399_, v_onRemaining_3400_, v_remaining_3401_, v_toBind_3402_, v_origAltTypes_3403_, v_alts_3404_, v___x_3405_, v___x_3406_, v_remaining_x27_3407_, v___f_3408_, v_inst_3409_, v___x_3410_, v___x_14293__boxed_3415_, v_liftWith_3412_, v_restoreM_3413_, v_matchEqns_3414_);
return v_res_3416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51(lean_object* v___x_3417_, lean_object* v_params_x27_3418_, lean_object* v_fst_3419_, lean_object* v_discrs_x27_3420_, lean_object* v_fst_3421_, lean_object* v_numParams_3422_, lean_object* v_numDiscrs_3423_, lean_object* v_altInfos_3424_, lean_object* v_uElimPos_x3f_3425_, lean_object* v_snd_3426_, lean_object* v_overlaps_3427_, lean_object* v_matcherLevels_3428_, lean_object* v_toPure_3429_, lean_object* v_onRemaining_3430_, lean_object* v_remaining_3431_, lean_object* v_toBind_3432_, lean_object* v_alts_3433_, lean_object* v___x_3434_, lean_object* v___x_3435_, lean_object* v_remaining_x27_3436_, lean_object* v___f_3437_, lean_object* v_inst_3438_, lean_object* v___x_3439_, uint8_t v___x_3440_, lean_object* v_liftWith_3441_, lean_object* v_restoreM_3442_, lean_object* v_matcherName_3443_, lean_object* v_origAltTypes_3444_){
_start:
{
lean_object* v___x_3445_; lean_object* v___f_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; 
v___x_3445_ = lean_box(v___x_3440_);
lean_inc(v_inst_3438_);
lean_inc(v_toBind_3432_);
v___f_3446_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed), 28, 27);
lean_closure_set(v___f_3446_, 0, v___x_3417_);
lean_closure_set(v___f_3446_, 1, v_params_x27_3418_);
lean_closure_set(v___f_3446_, 2, v_fst_3419_);
lean_closure_set(v___f_3446_, 3, v_discrs_x27_3420_);
lean_closure_set(v___f_3446_, 4, v_fst_3421_);
lean_closure_set(v___f_3446_, 5, v_numParams_3422_);
lean_closure_set(v___f_3446_, 6, v_numDiscrs_3423_);
lean_closure_set(v___f_3446_, 7, v_altInfos_3424_);
lean_closure_set(v___f_3446_, 8, v_uElimPos_x3f_3425_);
lean_closure_set(v___f_3446_, 9, v_snd_3426_);
lean_closure_set(v___f_3446_, 10, v_overlaps_3427_);
lean_closure_set(v___f_3446_, 11, v_matcherLevels_3428_);
lean_closure_set(v___f_3446_, 12, v_toPure_3429_);
lean_closure_set(v___f_3446_, 13, v_onRemaining_3430_);
lean_closure_set(v___f_3446_, 14, v_remaining_3431_);
lean_closure_set(v___f_3446_, 15, v_toBind_3432_);
lean_closure_set(v___f_3446_, 16, v_origAltTypes_3444_);
lean_closure_set(v___f_3446_, 17, v_alts_3433_);
lean_closure_set(v___f_3446_, 18, v___x_3434_);
lean_closure_set(v___f_3446_, 19, v___x_3435_);
lean_closure_set(v___f_3446_, 20, v_remaining_x27_3436_);
lean_closure_set(v___f_3446_, 21, v___f_3437_);
lean_closure_set(v___f_3446_, 22, v_inst_3438_);
lean_closure_set(v___f_3446_, 23, v___x_3439_);
lean_closure_set(v___f_3446_, 24, v___x_3445_);
lean_closure_set(v___f_3446_, 25, v_liftWith_3441_);
lean_closure_set(v___f_3446_, 26, v_restoreM_3442_);
v___x_3447_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_getEquationsFor___boxed), 6, 1);
lean_closure_set(v___x_3447_, 0, v_matcherName_3443_);
v___x_3448_ = lean_apply_2(v_inst_3438_, lean_box(0), v___x_3447_);
v___x_3449_ = lean_apply_4(v_toBind_3432_, lean_box(0), lean_box(0), v___x_3448_, v___f_3446_);
return v___x_3449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed(lean_object** _args){
lean_object* v___x_3450_ = _args[0];
lean_object* v_params_x27_3451_ = _args[1];
lean_object* v_fst_3452_ = _args[2];
lean_object* v_discrs_x27_3453_ = _args[3];
lean_object* v_fst_3454_ = _args[4];
lean_object* v_numParams_3455_ = _args[5];
lean_object* v_numDiscrs_3456_ = _args[6];
lean_object* v_altInfos_3457_ = _args[7];
lean_object* v_uElimPos_x3f_3458_ = _args[8];
lean_object* v_snd_3459_ = _args[9];
lean_object* v_overlaps_3460_ = _args[10];
lean_object* v_matcherLevels_3461_ = _args[11];
lean_object* v_toPure_3462_ = _args[12];
lean_object* v_onRemaining_3463_ = _args[13];
lean_object* v_remaining_3464_ = _args[14];
lean_object* v_toBind_3465_ = _args[15];
lean_object* v_alts_3466_ = _args[16];
lean_object* v___x_3467_ = _args[17];
lean_object* v___x_3468_ = _args[18];
lean_object* v_remaining_x27_3469_ = _args[19];
lean_object* v___f_3470_ = _args[20];
lean_object* v_inst_3471_ = _args[21];
lean_object* v___x_3472_ = _args[22];
lean_object* v___x_3473_ = _args[23];
lean_object* v_liftWith_3474_ = _args[24];
lean_object* v_restoreM_3475_ = _args[25];
lean_object* v_matcherName_3476_ = _args[26];
lean_object* v_origAltTypes_3477_ = _args[27];
_start:
{
uint8_t v___x_14355__boxed_3478_; lean_object* v_res_3479_; 
v___x_14355__boxed_3478_ = lean_unbox(v___x_3473_);
v_res_3479_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__51(v___x_3450_, v_params_x27_3451_, v_fst_3452_, v_discrs_x27_3453_, v_fst_3454_, v_numParams_3455_, v_numDiscrs_3456_, v_altInfos_3457_, v_uElimPos_x3f_3458_, v_snd_3459_, v_overlaps_3460_, v_matcherLevels_3461_, v_toPure_3462_, v_onRemaining_3463_, v_remaining_3464_, v_toBind_3465_, v_alts_3466_, v___x_3467_, v___x_3468_, v_remaining_x27_3469_, v___f_3470_, v_inst_3471_, v___x_3472_, v___x_14355__boxed_3478_, v_liftWith_3474_, v_restoreM_3475_, v_matcherName_3476_, v_origAltTypes_3477_);
return v_res_3479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52(lean_object* v_alts_3480_, lean_object* v_toPure_3481_, lean_object* v_toBind_3482_, lean_object* v___f_3483_, lean_object* v___x_3484_, lean_object* v___x_3485_, lean_object* v_inst_3486_, lean_object* v___x_3487_, lean_object* v_toMonadExceptOf_3488_, uint8_t v___x_3489_, uint8_t v_useSplitter_3490_, lean_object* v_onAlt_3491_, lean_object* v___f_3492_, lean_object* v_fst_3493_, lean_object* v_inst_3494_, lean_object* v_inst_3495_, lean_object* v_numDiscrEqs_3496_, lean_object* v___x_3497_, lean_object* v_params_x27_3498_, lean_object* v_fst_3499_, lean_object* v_discrs_x27_3500_, lean_object* v_fst_3501_, lean_object* v_numParams_3502_, lean_object* v_numDiscrs_3503_, lean_object* v_altInfos_3504_, lean_object* v_uElimPos_x3f_3505_, lean_object* v_snd_3506_, lean_object* v_overlaps_3507_, lean_object* v_matcherLevels_3508_, lean_object* v_onRemaining_3509_, lean_object* v_remaining_3510_, lean_object* v_remaining_x27_3511_, lean_object* v___x_3512_, uint8_t v___x_3513_, lean_object* v_liftWith_3514_, lean_object* v_restoreM_3515_, lean_object* v_matcherName_3516_, lean_object* v_aux1_3517_, lean_object* v_____r_3518_){
_start:
{
lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___f_3522_; lean_object* v___x_3523_; lean_object* v___f_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3519_ = lean_array_get_size(v_alts_3480_);
v___x_3520_ = lean_box(v___x_3489_);
v___x_3521_ = lean_box(v_useSplitter_3490_);
lean_inc_n(v_inst_3486_, 2);
lean_inc(v___x_3484_);
lean_inc_n(v_toBind_3482_, 2);
lean_inc(v_toPure_3481_);
v___f_3522_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed), 21, 17);
lean_closure_set(v___f_3522_, 0, v___x_3519_);
lean_closure_set(v___f_3522_, 1, v_toPure_3481_);
lean_closure_set(v___f_3522_, 2, v_toBind_3482_);
lean_closure_set(v___f_3522_, 3, v___f_3483_);
lean_closure_set(v___f_3522_, 4, v___x_3484_);
lean_closure_set(v___f_3522_, 5, v___x_3485_);
lean_closure_set(v___f_3522_, 6, v_inst_3486_);
lean_closure_set(v___f_3522_, 7, v___x_3487_);
lean_closure_set(v___f_3522_, 8, v_toMonadExceptOf_3488_);
lean_closure_set(v___f_3522_, 9, v___x_3520_);
lean_closure_set(v___f_3522_, 10, v___x_3521_);
lean_closure_set(v___f_3522_, 11, v_onAlt_3491_);
lean_closure_set(v___f_3522_, 12, v___f_3492_);
lean_closure_set(v___f_3522_, 13, v_fst_3493_);
lean_closure_set(v___f_3522_, 14, v_inst_3494_);
lean_closure_set(v___f_3522_, 15, v_inst_3495_);
lean_closure_set(v___f_3522_, 16, v_numDiscrEqs_3496_);
v___x_3523_ = lean_box(v___x_3513_);
v___f_3524_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed), 28, 27);
lean_closure_set(v___f_3524_, 0, v___x_3497_);
lean_closure_set(v___f_3524_, 1, v_params_x27_3498_);
lean_closure_set(v___f_3524_, 2, v_fst_3499_);
lean_closure_set(v___f_3524_, 3, v_discrs_x27_3500_);
lean_closure_set(v___f_3524_, 4, v_fst_3501_);
lean_closure_set(v___f_3524_, 5, v_numParams_3502_);
lean_closure_set(v___f_3524_, 6, v_numDiscrs_3503_);
lean_closure_set(v___f_3524_, 7, v_altInfos_3504_);
lean_closure_set(v___f_3524_, 8, v_uElimPos_x3f_3505_);
lean_closure_set(v___f_3524_, 9, v_snd_3506_);
lean_closure_set(v___f_3524_, 10, v_overlaps_3507_);
lean_closure_set(v___f_3524_, 11, v_matcherLevels_3508_);
lean_closure_set(v___f_3524_, 12, v_toPure_3481_);
lean_closure_set(v___f_3524_, 13, v_onRemaining_3509_);
lean_closure_set(v___f_3524_, 14, v_remaining_3510_);
lean_closure_set(v___f_3524_, 15, v_toBind_3482_);
lean_closure_set(v___f_3524_, 16, v_alts_3480_);
lean_closure_set(v___f_3524_, 17, v___x_3484_);
lean_closure_set(v___f_3524_, 18, v___x_3519_);
lean_closure_set(v___f_3524_, 19, v_remaining_x27_3511_);
lean_closure_set(v___f_3524_, 20, v___f_3522_);
lean_closure_set(v___f_3524_, 21, v_inst_3486_);
lean_closure_set(v___f_3524_, 22, v___x_3512_);
lean_closure_set(v___f_3524_, 23, v___x_3523_);
lean_closure_set(v___f_3524_, 24, v_liftWith_3514_);
lean_closure_set(v___f_3524_, 25, v_restoreM_3515_);
lean_closure_set(v___f_3524_, 26, v_matcherName_3516_);
v___x_3525_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_3525_, 0, v___x_3519_);
lean_closure_set(v___x_3525_, 1, v_aux1_3517_);
v___x_3526_ = lean_apply_2(v_inst_3486_, lean_box(0), v___x_3525_);
v___x_3527_ = lean_apply_4(v_toBind_3482_, lean_box(0), lean_box(0), v___x_3526_, v___f_3524_);
return v___x_3527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed(lean_object** _args){
lean_object* v_alts_3528_ = _args[0];
lean_object* v_toPure_3529_ = _args[1];
lean_object* v_toBind_3530_ = _args[2];
lean_object* v___f_3531_ = _args[3];
lean_object* v___x_3532_ = _args[4];
lean_object* v___x_3533_ = _args[5];
lean_object* v_inst_3534_ = _args[6];
lean_object* v___x_3535_ = _args[7];
lean_object* v_toMonadExceptOf_3536_ = _args[8];
lean_object* v___x_3537_ = _args[9];
lean_object* v_useSplitter_3538_ = _args[10];
lean_object* v_onAlt_3539_ = _args[11];
lean_object* v___f_3540_ = _args[12];
lean_object* v_fst_3541_ = _args[13];
lean_object* v_inst_3542_ = _args[14];
lean_object* v_inst_3543_ = _args[15];
lean_object* v_numDiscrEqs_3544_ = _args[16];
lean_object* v___x_3545_ = _args[17];
lean_object* v_params_x27_3546_ = _args[18];
lean_object* v_fst_3547_ = _args[19];
lean_object* v_discrs_x27_3548_ = _args[20];
lean_object* v_fst_3549_ = _args[21];
lean_object* v_numParams_3550_ = _args[22];
lean_object* v_numDiscrs_3551_ = _args[23];
lean_object* v_altInfos_3552_ = _args[24];
lean_object* v_uElimPos_x3f_3553_ = _args[25];
lean_object* v_snd_3554_ = _args[26];
lean_object* v_overlaps_3555_ = _args[27];
lean_object* v_matcherLevels_3556_ = _args[28];
lean_object* v_onRemaining_3557_ = _args[29];
lean_object* v_remaining_3558_ = _args[30];
lean_object* v_remaining_x27_3559_ = _args[31];
lean_object* v___x_3560_ = _args[32];
lean_object* v___x_3561_ = _args[33];
lean_object* v_liftWith_3562_ = _args[34];
lean_object* v_restoreM_3563_ = _args[35];
lean_object* v_matcherName_3564_ = _args[36];
lean_object* v_aux1_3565_ = _args[37];
lean_object* v_____r_3566_ = _args[38];
_start:
{
uint8_t v___x_14389__boxed_3567_; uint8_t v_useSplitter_boxed_3568_; uint8_t v___x_14397__boxed_3569_; lean_object* v_res_3570_; 
v___x_14389__boxed_3567_ = lean_unbox(v___x_3537_);
v_useSplitter_boxed_3568_ = lean_unbox(v_useSplitter_3538_);
v___x_14397__boxed_3569_ = lean_unbox(v___x_3561_);
v_res_3570_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__52(v_alts_3528_, v_toPure_3529_, v_toBind_3530_, v___f_3531_, v___x_3532_, v___x_3533_, v_inst_3534_, v___x_3535_, v_toMonadExceptOf_3536_, v___x_14389__boxed_3567_, v_useSplitter_boxed_3568_, v_onAlt_3539_, v___f_3540_, v_fst_3541_, v_inst_3542_, v_inst_3543_, v_numDiscrEqs_3544_, v___x_3545_, v_params_x27_3546_, v_fst_3547_, v_discrs_x27_3548_, v_fst_3549_, v_numParams_3550_, v_numDiscrs_3551_, v_altInfos_3552_, v_uElimPos_x3f_3553_, v_snd_3554_, v_overlaps_3555_, v_matcherLevels_3556_, v_onRemaining_3557_, v_remaining_3558_, v_remaining_x27_3559_, v___x_3560_, v___x_14397__boxed_3569_, v_liftWith_3562_, v_restoreM_3563_, v_matcherName_3564_, v_aux1_3565_, v_____r_3566_);
return v_res_3570_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1(void){
_start:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; 
v___x_3572_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0));
v___x_3573_ = l_Lean_stringToMessageData(v___x_3572_);
return v___x_3573_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3(void){
_start:
{
lean_object* v___x_3575_; lean_object* v___x_3576_; 
v___x_3575_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2));
v___x_3576_ = l_Lean_stringToMessageData(v___x_3575_);
return v___x_3576_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5(void){
_start:
{
lean_object* v___x_3578_; lean_object* v___x_3579_; 
v___x_3578_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4));
v___x_3579_ = l_Lean_stringToMessageData(v___x_3578_);
return v___x_3579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55(lean_object* v_numParams_3580_, lean_object* v_numDiscrs_3581_, lean_object* v_altInfos_3582_, lean_object* v_uElimPos_x3f_3583_, lean_object* v_snd_3584_, lean_object* v_overlaps_3585_, lean_object* v_matcherName_3586_, lean_object* v_matcherLevels_3587_, lean_object* v_params_x27_3588_, lean_object* v_fst_3589_, lean_object* v_discrs_x27_3590_, lean_object* v_toPure_3591_, lean_object* v_onRemaining_3592_, lean_object* v_remaining_3593_, lean_object* v_toBind_3594_, lean_object* v_inst_3595_, lean_object* v_alts_3596_, lean_object* v___f_3597_, uint8_t v___x_3598_, lean_object* v_inst_3599_, lean_object* v_remaining_x27_3600_, lean_object* v_onAlt_3601_, lean_object* v_inst_3602_, lean_object* v___f_3603_, lean_object* v_matcherApp_3604_, lean_object* v___x_3605_, uint8_t v_useSplitter_3606_, uint8_t v_isCasesOn_3607_, lean_object* v___f_3608_, lean_object* v___x_3609_, lean_object* v___x_3610_, lean_object* v_toMonadExceptOf_3611_, lean_object* v___f_3612_, lean_object* v_numDiscrEqs_3613_, lean_object* v_____s_3614_){
_start:
{
lean_object* v_snd_3615_; lean_object* v_fst_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3682_; 
v_snd_3615_ = lean_ctor_get(v_____s_3614_, 1);
v_fst_3616_ = lean_ctor_get(v_____s_3614_, 0);
v_isSharedCheck_3682_ = !lean_is_exclusive(v_____s_3614_);
if (v_isSharedCheck_3682_ == 0)
{
v___x_3618_ = v_____s_3614_;
v_isShared_3619_ = v_isSharedCheck_3682_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_snd_3615_);
lean_inc(v_fst_3616_);
lean_dec(v_____s_3614_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3682_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v_fst_3620_; lean_object* v___x_3622_; uint8_t v_isShared_3623_; uint8_t v_isSharedCheck_3680_; 
v_fst_3620_ = lean_ctor_get(v_snd_3615_, 0);
v_isSharedCheck_3680_ = !lean_is_exclusive(v_snd_3615_);
if (v_isSharedCheck_3680_ == 0)
{
lean_object* v_unused_3681_; 
v_unused_3681_ = lean_ctor_get(v_snd_3615_, 1);
lean_dec(v_unused_3681_);
v___x_3622_ = v_snd_3615_;
v_isShared_3623_ = v_isSharedCheck_3680_;
goto v_resetjp_3621_;
}
else
{
lean_inc(v_fst_3620_);
lean_dec(v_snd_3615_);
v___x_3622_ = lean_box(0);
v_isShared_3623_ = v_isSharedCheck_3680_;
goto v_resetjp_3621_;
}
v_resetjp_3621_:
{
lean_object* v___f_3624_; 
lean_inc(v_toBind_3594_);
lean_inc_ref(v_remaining_3593_);
lean_inc(v_onRemaining_3592_);
lean_inc(v_toPure_3591_);
lean_inc_ref(v_discrs_x27_3590_);
lean_inc_ref(v_fst_3589_);
lean_inc_ref(v_params_x27_3588_);
lean_inc_ref(v_matcherLevels_3587_);
lean_inc(v_matcherName_3586_);
lean_inc_ref(v_overlaps_3585_);
lean_inc_ref(v_snd_3584_);
lean_inc(v_uElimPos_x3f_3583_);
lean_inc_ref(v_altInfos_3582_);
lean_inc(v_numDiscrs_3581_);
lean_inc(v_numParams_3580_);
lean_inc(v_fst_3616_);
v___f_3624_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed), 17, 16);
lean_closure_set(v___f_3624_, 0, v_fst_3616_);
lean_closure_set(v___f_3624_, 1, v_numParams_3580_);
lean_closure_set(v___f_3624_, 2, v_numDiscrs_3581_);
lean_closure_set(v___f_3624_, 3, v_altInfos_3582_);
lean_closure_set(v___f_3624_, 4, v_uElimPos_x3f_3583_);
lean_closure_set(v___f_3624_, 5, v_snd_3584_);
lean_closure_set(v___f_3624_, 6, v_overlaps_3585_);
lean_closure_set(v___f_3624_, 7, v_matcherName_3586_);
lean_closure_set(v___f_3624_, 8, v_matcherLevels_3587_);
lean_closure_set(v___f_3624_, 9, v_params_x27_3588_);
lean_closure_set(v___f_3624_, 10, v_fst_3589_);
lean_closure_set(v___f_3624_, 11, v_discrs_x27_3590_);
lean_closure_set(v___f_3624_, 12, v_toPure_3591_);
lean_closure_set(v___f_3624_, 13, v_onRemaining_3592_);
lean_closure_set(v___f_3624_, 14, v_remaining_3593_);
lean_closure_set(v___f_3624_, 15, v_toBind_3594_);
if (v_useSplitter_3606_ == 0)
{
lean_del_object(v___x_3618_);
lean_dec(v_fst_3616_);
lean_dec(v_numDiscrEqs_3613_);
lean_dec(v___f_3612_);
lean_dec_ref(v_toMonadExceptOf_3611_);
lean_dec(v___x_3610_);
lean_dec(v___x_3609_);
lean_dec(v___f_3608_);
lean_dec_ref(v_remaining_3593_);
lean_dec(v_onRemaining_3592_);
lean_dec_ref(v_overlaps_3585_);
lean_dec_ref(v_snd_3584_);
lean_dec(v_uElimPos_x3f_3583_);
lean_dec_ref(v_altInfos_3582_);
lean_dec(v_numDiscrs_3581_);
lean_dec(v_numParams_3580_);
goto v___jp_3625_;
}
else
{
if (v_isCasesOn_3607_ == 0)
{
lean_object* v_liftWith_3652_; lean_object* v_restoreM_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v_aux1_3656_; lean_object* v_aux1_3657_; lean_object* v_aux1_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3662_; 
lean_dec_ref(v___f_3624_);
lean_del_object(v___x_3622_);
lean_dec_ref(v_matcherApp_3604_);
lean_dec(v___f_3603_);
lean_dec(v___f_3597_);
v_liftWith_3652_ = lean_ctor_get(v_inst_3595_, 0);
lean_inc(v_liftWith_3652_);
v_restoreM_3653_ = lean_ctor_get(v_inst_3595_, 1);
lean_inc(v_restoreM_3653_);
lean_inc_ref(v_matcherLevels_3587_);
v___x_3654_ = lean_array_to_list(v_matcherLevels_3587_);
lean_inc(v___x_3654_);
lean_inc(v_matcherName_3586_);
v___x_3655_ = l_Lean_mkConst(v_matcherName_3586_, v___x_3654_);
v_aux1_3656_ = l_Lean_mkAppN(v___x_3655_, v_params_x27_3588_);
lean_inc_ref(v_fst_3589_);
v_aux1_3657_ = l_Lean_Expr_app___override(v_aux1_3656_, v_fst_3589_);
v_aux1_3658_ = l_Lean_mkAppN(v_aux1_3657_, v_discrs_x27_3590_);
lean_inc_ref(v_aux1_3658_);
v___x_3659_ = l_Lean_indentExpr(v_aux1_3658_);
v___x_3660_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3);
if (v_isShared_3619_ == 0)
{
lean_ctor_set_tag(v___x_3618_, 7);
lean_ctor_set(v___x_3618_, 1, v___x_3659_);
lean_ctor_set(v___x_3618_, 0, v___x_3660_);
v___x_3662_ = v___x_3618_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v___x_3660_);
lean_ctor_set(v_reuseFailAlloc_3679_, 1, v___x_3659_);
v___x_3662_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___f_3665_; uint8_t v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___f_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___f_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; 
v___x_3663_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5);
v___x_3664_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3664_, 0, v___x_3662_);
lean_ctor_set(v___x_3664_, 1, v___x_3663_);
v___f_3665_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3665_, 0, v___x_3664_);
v___x_3666_ = 0;
v___x_3667_ = lean_box(v___x_3598_);
v___x_3668_ = lean_box(v_useSplitter_3606_);
v___x_3669_ = lean_box(v___x_3666_);
lean_inc_ref(v_aux1_3658_);
lean_inc(v_restoreM_3653_);
lean_inc(v_liftWith_3652_);
lean_inc(v_inst_3599_);
lean_inc_n(v_toBind_3594_, 2);
v___f_3670_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed), 39, 38);
lean_closure_set(v___f_3670_, 0, v_alts_3596_);
lean_closure_set(v___f_3670_, 1, v_toPure_3591_);
lean_closure_set(v___f_3670_, 2, v_toBind_3594_);
lean_closure_set(v___f_3670_, 3, v___f_3608_);
lean_closure_set(v___f_3670_, 4, v___x_3605_);
lean_closure_set(v___f_3670_, 5, v___x_3609_);
lean_closure_set(v___f_3670_, 6, v_inst_3599_);
lean_closure_set(v___f_3670_, 7, v___x_3610_);
lean_closure_set(v___f_3670_, 8, v_toMonadExceptOf_3611_);
lean_closure_set(v___f_3670_, 9, v___x_3667_);
lean_closure_set(v___f_3670_, 10, v___x_3668_);
lean_closure_set(v___f_3670_, 11, v_onAlt_3601_);
lean_closure_set(v___f_3670_, 12, v___f_3612_);
lean_closure_set(v___f_3670_, 13, v_fst_3620_);
lean_closure_set(v___f_3670_, 14, v_inst_3595_);
lean_closure_set(v___f_3670_, 15, v_inst_3602_);
lean_closure_set(v___f_3670_, 16, v_numDiscrEqs_3613_);
lean_closure_set(v___f_3670_, 17, v___x_3654_);
lean_closure_set(v___f_3670_, 18, v_params_x27_3588_);
lean_closure_set(v___f_3670_, 19, v_fst_3589_);
lean_closure_set(v___f_3670_, 20, v_discrs_x27_3590_);
lean_closure_set(v___f_3670_, 21, v_fst_3616_);
lean_closure_set(v___f_3670_, 22, v_numParams_3580_);
lean_closure_set(v___f_3670_, 23, v_numDiscrs_3581_);
lean_closure_set(v___f_3670_, 24, v_altInfos_3582_);
lean_closure_set(v___f_3670_, 25, v_uElimPos_x3f_3583_);
lean_closure_set(v___f_3670_, 26, v_snd_3584_);
lean_closure_set(v___f_3670_, 27, v_overlaps_3585_);
lean_closure_set(v___f_3670_, 28, v_matcherLevels_3587_);
lean_closure_set(v___f_3670_, 29, v_onRemaining_3592_);
lean_closure_set(v___f_3670_, 30, v_remaining_3593_);
lean_closure_set(v___f_3670_, 31, v_remaining_x27_3600_);
lean_closure_set(v___f_3670_, 32, v___x_3663_);
lean_closure_set(v___f_3670_, 33, v___x_3669_);
lean_closure_set(v___f_3670_, 34, v_liftWith_3652_);
lean_closure_set(v___f_3670_, 35, v_restoreM_3653_);
lean_closure_set(v___f_3670_, 36, v_matcherName_3586_);
lean_closure_set(v___f_3670_, 37, v_aux1_3658_);
v___x_3671_ = lean_box(v___x_3666_);
v___x_3672_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_3672_, 0, v_aux1_3658_);
lean_closure_set(v___x_3672_, 1, v___x_3671_);
v___x_3673_ = lean_apply_2(v_inst_3599_, lean_box(0), v___x_3672_);
v___f_3674_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3674_, 0, v___x_3673_);
lean_closure_set(v___f_3674_, 1, v___f_3665_);
v___x_3675_ = lean_apply_2(v_liftWith_3652_, lean_box(0), v___f_3674_);
v___x_3676_ = lean_apply_1(v_restoreM_3653_, lean_box(0));
v___x_3677_ = lean_apply_4(v_toBind_3594_, lean_box(0), lean_box(0), v___x_3675_, v___x_3676_);
v___x_3678_ = lean_apply_4(v_toBind_3594_, lean_box(0), lean_box(0), v___x_3677_, v___f_3670_);
return v___x_3678_;
}
}
else
{
lean_del_object(v___x_3618_);
lean_dec(v_fst_3616_);
lean_dec(v_numDiscrEqs_3613_);
lean_dec(v___f_3612_);
lean_dec_ref(v_toMonadExceptOf_3611_);
lean_dec(v___x_3610_);
lean_dec(v___x_3609_);
lean_dec(v___f_3608_);
lean_dec_ref(v_remaining_3593_);
lean_dec(v_onRemaining_3592_);
lean_dec_ref(v_overlaps_3585_);
lean_dec_ref(v_snd_3584_);
lean_dec(v_uElimPos_x3f_3583_);
lean_dec_ref(v_altInfos_3582_);
lean_dec(v_numDiscrs_3581_);
lean_dec(v_numParams_3580_);
goto v___jp_3625_;
}
}
v___jp_3625_:
{
lean_object* v_liftWith_3626_; lean_object* v_restoreM_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v_aux_3630_; lean_object* v_aux_3631_; lean_object* v_aux_3632_; lean_object* v___x_3633_; uint8_t v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___f_3637_; lean_object* v___x_3638_; lean_object* v___x_3640_; 
v_liftWith_3626_ = lean_ctor_get(v_inst_3595_, 0);
lean_inc(v_liftWith_3626_);
v_restoreM_3627_ = lean_ctor_get(v_inst_3595_, 1);
lean_inc(v_restoreM_3627_);
v___x_3628_ = lean_array_to_list(v_matcherLevels_3587_);
v___x_3629_ = l_Lean_mkConst(v_matcherName_3586_, v___x_3628_);
v_aux_3630_ = l_Lean_mkAppN(v___x_3629_, v_params_x27_3588_);
lean_dec_ref(v_params_x27_3588_);
v_aux_3631_ = l_Lean_Expr_app___override(v_aux_3630_, v_fst_3589_);
v_aux_3632_ = l_Lean_mkAppN(v_aux_3631_, v_discrs_x27_3590_);
lean_dec_ref(v_discrs_x27_3590_);
lean_inc_ref_n(v_aux_3632_, 2);
v___x_3633_ = l_Lean_indentExpr(v_aux_3632_);
v___x_3634_ = 1;
v___x_3635_ = lean_box(v___x_3598_);
v___x_3636_ = lean_box(v___x_3634_);
lean_inc(v_inst_3599_);
lean_inc(v_toBind_3594_);
v___f_3637_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed), 18, 17);
lean_closure_set(v___f_3637_, 0, v_alts_3596_);
lean_closure_set(v___f_3637_, 1, v_toPure_3591_);
lean_closure_set(v___f_3637_, 2, v_toBind_3594_);
lean_closure_set(v___f_3637_, 3, v___f_3597_);
lean_closure_set(v___f_3637_, 4, v___x_3635_);
lean_closure_set(v___f_3637_, 5, v___x_3636_);
lean_closure_set(v___f_3637_, 6, v_inst_3599_);
lean_closure_set(v___f_3637_, 7, v_remaining_x27_3600_);
lean_closure_set(v___f_3637_, 8, v_onAlt_3601_);
lean_closure_set(v___f_3637_, 9, v_inst_3595_);
lean_closure_set(v___f_3637_, 10, v_inst_3602_);
lean_closure_set(v___f_3637_, 11, v___f_3603_);
lean_closure_set(v___f_3637_, 12, v_fst_3620_);
lean_closure_set(v___f_3637_, 13, v_matcherApp_3604_);
lean_closure_set(v___f_3637_, 14, v___x_3605_);
lean_closure_set(v___f_3637_, 15, v___f_3624_);
lean_closure_set(v___f_3637_, 16, v_aux_3632_);
v___x_3638_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1);
if (v_isShared_3623_ == 0)
{
lean_ctor_set_tag(v___x_3622_, 7);
lean_ctor_set(v___x_3622_, 1, v___x_3633_);
lean_ctor_set(v___x_3622_, 0, v___x_3638_);
v___x_3640_ = v___x_3622_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v___x_3638_);
lean_ctor_set(v_reuseFailAlloc_3651_, 1, v___x_3633_);
v___x_3640_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
lean_object* v___f_3641_; uint8_t v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___f_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; 
v___f_3641_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3641_, 0, v___x_3640_);
v___x_3642_ = 0;
v___x_3643_ = lean_box(v___x_3642_);
v___x_3644_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_3644_, 0, v_aux_3632_);
lean_closure_set(v___x_3644_, 1, v___x_3643_);
v___x_3645_ = lean_apply_2(v_inst_3599_, lean_box(0), v___x_3644_);
v___f_3646_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3646_, 0, v___x_3645_);
lean_closure_set(v___f_3646_, 1, v___f_3641_);
v___x_3647_ = lean_apply_2(v_liftWith_3626_, lean_box(0), v___f_3646_);
v___x_3648_ = lean_apply_1(v_restoreM_3627_, lean_box(0));
lean_inc(v_toBind_3594_);
v___x_3649_ = lean_apply_4(v_toBind_3594_, lean_box(0), lean_box(0), v___x_3647_, v___x_3648_);
v___x_3650_ = lean_apply_4(v_toBind_3594_, lean_box(0), lean_box(0), v___x_3649_, v___f_3637_);
return v___x_3650_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___boxed(lean_object** _args){
lean_object* v_numParams_3683_ = _args[0];
lean_object* v_numDiscrs_3684_ = _args[1];
lean_object* v_altInfos_3685_ = _args[2];
lean_object* v_uElimPos_x3f_3686_ = _args[3];
lean_object* v_snd_3687_ = _args[4];
lean_object* v_overlaps_3688_ = _args[5];
lean_object* v_matcherName_3689_ = _args[6];
lean_object* v_matcherLevels_3690_ = _args[7];
lean_object* v_params_x27_3691_ = _args[8];
lean_object* v_fst_3692_ = _args[9];
lean_object* v_discrs_x27_3693_ = _args[10];
lean_object* v_toPure_3694_ = _args[11];
lean_object* v_onRemaining_3695_ = _args[12];
lean_object* v_remaining_3696_ = _args[13];
lean_object* v_toBind_3697_ = _args[14];
lean_object* v_inst_3698_ = _args[15];
lean_object* v_alts_3699_ = _args[16];
lean_object* v___f_3700_ = _args[17];
lean_object* v___x_3701_ = _args[18];
lean_object* v_inst_3702_ = _args[19];
lean_object* v_remaining_x27_3703_ = _args[20];
lean_object* v_onAlt_3704_ = _args[21];
lean_object* v_inst_3705_ = _args[22];
lean_object* v___f_3706_ = _args[23];
lean_object* v_matcherApp_3707_ = _args[24];
lean_object* v___x_3708_ = _args[25];
lean_object* v_useSplitter_3709_ = _args[26];
lean_object* v_isCasesOn_3710_ = _args[27];
lean_object* v___f_3711_ = _args[28];
lean_object* v___x_3712_ = _args[29];
lean_object* v___x_3713_ = _args[30];
lean_object* v_toMonadExceptOf_3714_ = _args[31];
lean_object* v___f_3715_ = _args[32];
lean_object* v_numDiscrEqs_3716_ = _args[33];
lean_object* v_____s_3717_ = _args[34];
_start:
{
uint8_t v___x_14469__boxed_3718_; uint8_t v_useSplitter_boxed_3719_; uint8_t v_isCasesOn_boxed_3720_; lean_object* v_res_3721_; 
v___x_14469__boxed_3718_ = lean_unbox(v___x_3701_);
v_useSplitter_boxed_3719_ = lean_unbox(v_useSplitter_3709_);
v_isCasesOn_boxed_3720_ = lean_unbox(v_isCasesOn_3710_);
v_res_3721_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__55(v_numParams_3683_, v_numDiscrs_3684_, v_altInfos_3685_, v_uElimPos_x3f_3686_, v_snd_3687_, v_overlaps_3688_, v_matcherName_3689_, v_matcherLevels_3690_, v_params_x27_3691_, v_fst_3692_, v_discrs_x27_3693_, v_toPure_3694_, v_onRemaining_3695_, v_remaining_3696_, v_toBind_3697_, v_inst_3698_, v_alts_3699_, v___f_3700_, v___x_14469__boxed_3718_, v_inst_3702_, v_remaining_x27_3703_, v_onAlt_3704_, v_inst_3705_, v___f_3706_, v_matcherApp_3707_, v___x_3708_, v_useSplitter_boxed_3719_, v_isCasesOn_boxed_3720_, v___f_3711_, v___x_3712_, v___x_3713_, v_toMonadExceptOf_3714_, v___f_3715_, v_numDiscrEqs_3716_, v_____s_3717_);
return v_res_3721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54(lean_object* v_numParams_3722_, lean_object* v_numDiscrs_3723_, lean_object* v_altInfos_3724_, lean_object* v_uElimPos_x3f_3725_, lean_object* v_snd_3726_, lean_object* v_overlaps_3727_, lean_object* v_matcherName_3728_, lean_object* v_params_x27_3729_, lean_object* v_fst_3730_, lean_object* v_discrs_x27_3731_, lean_object* v_toPure_3732_, lean_object* v_onRemaining_3733_, lean_object* v_remaining_3734_, lean_object* v_toBind_3735_, lean_object* v_inst_3736_, lean_object* v_alts_3737_, lean_object* v___f_3738_, uint8_t v___x_3739_, lean_object* v_inst_3740_, lean_object* v_onAlt_3741_, lean_object* v_inst_3742_, lean_object* v___f_3743_, lean_object* v_matcherApp_3744_, uint8_t v_useSplitter_3745_, uint8_t v_isCasesOn_3746_, lean_object* v___f_3747_, lean_object* v___x_3748_, lean_object* v___x_3749_, lean_object* v_toMonadExceptOf_3750_, lean_object* v___f_3751_, lean_object* v_numDiscrEqs_3752_, lean_object* v_fst_3753_, lean_object* v___f_3754_, lean_object* v_matcherLevels_3755_){
_start:
{
lean_object* v___x_3756_; lean_object* v_remaining_x27_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___f_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; size_t v_sz_3768_; size_t v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; 
v___x_3756_ = lean_unsigned_to_nat(0u);
v_remaining_x27_3757_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_3758_ = lean_box(v___x_3739_);
v___x_3759_ = lean_box(v_useSplitter_3745_);
v___x_3760_ = lean_box(v_isCasesOn_3746_);
lean_inc_ref(v_inst_3742_);
lean_inc(v_toBind_3735_);
lean_inc_ref(v_discrs_x27_3731_);
v___f_3761_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___boxed), 35, 34);
lean_closure_set(v___f_3761_, 0, v_numParams_3722_);
lean_closure_set(v___f_3761_, 1, v_numDiscrs_3723_);
lean_closure_set(v___f_3761_, 2, v_altInfos_3724_);
lean_closure_set(v___f_3761_, 3, v_uElimPos_x3f_3725_);
lean_closure_set(v___f_3761_, 4, v_snd_3726_);
lean_closure_set(v___f_3761_, 5, v_overlaps_3727_);
lean_closure_set(v___f_3761_, 6, v_matcherName_3728_);
lean_closure_set(v___f_3761_, 7, v_matcherLevels_3755_);
lean_closure_set(v___f_3761_, 8, v_params_x27_3729_);
lean_closure_set(v___f_3761_, 9, v_fst_3730_);
lean_closure_set(v___f_3761_, 10, v_discrs_x27_3731_);
lean_closure_set(v___f_3761_, 11, v_toPure_3732_);
lean_closure_set(v___f_3761_, 12, v_onRemaining_3733_);
lean_closure_set(v___f_3761_, 13, v_remaining_3734_);
lean_closure_set(v___f_3761_, 14, v_toBind_3735_);
lean_closure_set(v___f_3761_, 15, v_inst_3736_);
lean_closure_set(v___f_3761_, 16, v_alts_3737_);
lean_closure_set(v___f_3761_, 17, v___f_3738_);
lean_closure_set(v___f_3761_, 18, v___x_3758_);
lean_closure_set(v___f_3761_, 19, v_inst_3740_);
lean_closure_set(v___f_3761_, 20, v_remaining_x27_3757_);
lean_closure_set(v___f_3761_, 21, v_onAlt_3741_);
lean_closure_set(v___f_3761_, 22, v_inst_3742_);
lean_closure_set(v___f_3761_, 23, v___f_3743_);
lean_closure_set(v___f_3761_, 24, v_matcherApp_3744_);
lean_closure_set(v___f_3761_, 25, v___x_3756_);
lean_closure_set(v___f_3761_, 26, v___x_3759_);
lean_closure_set(v___f_3761_, 27, v___x_3760_);
lean_closure_set(v___f_3761_, 28, v___f_3747_);
lean_closure_set(v___f_3761_, 29, v___x_3748_);
lean_closure_set(v___f_3761_, 30, v___x_3749_);
lean_closure_set(v___f_3761_, 31, v_toMonadExceptOf_3750_);
lean_closure_set(v___f_3761_, 32, v___f_3751_);
lean_closure_set(v___f_3761_, 33, v_numDiscrEqs_3752_);
v___x_3762_ = l_Array_reverse___redArg(v_fst_3753_);
v___x_3763_ = lean_array_get_size(v___x_3762_);
v___x_3764_ = l_Array_toSubarray___redArg(v___x_3762_, v___x_3756_, v___x_3763_);
v___x_3765_ = l_Array_reverse___redArg(v_discrs_x27_3731_);
v___x_3766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3766_, 0, v___x_3756_);
lean_ctor_set(v___x_3766_, 1, v___x_3764_);
v___x_3767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3767_, 0, v_remaining_x27_3757_);
lean_ctor_set(v___x_3767_, 1, v___x_3766_);
v_sz_3768_ = lean_array_size(v___x_3765_);
v___x_3769_ = ((size_t)0ULL);
v___x_3770_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_3742_, v___x_3765_, v___f_3754_, v_sz_3768_, v___x_3769_, v___x_3767_);
v___x_3771_ = lean_apply_4(v_toBind_3735_, lean_box(0), lean_box(0), v___x_3770_, v___f_3761_);
return v___x_3771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed(lean_object** _args){
lean_object* v_numParams_3772_ = _args[0];
lean_object* v_numDiscrs_3773_ = _args[1];
lean_object* v_altInfos_3774_ = _args[2];
lean_object* v_uElimPos_x3f_3775_ = _args[3];
lean_object* v_snd_3776_ = _args[4];
lean_object* v_overlaps_3777_ = _args[5];
lean_object* v_matcherName_3778_ = _args[6];
lean_object* v_params_x27_3779_ = _args[7];
lean_object* v_fst_3780_ = _args[8];
lean_object* v_discrs_x27_3781_ = _args[9];
lean_object* v_toPure_3782_ = _args[10];
lean_object* v_onRemaining_3783_ = _args[11];
lean_object* v_remaining_3784_ = _args[12];
lean_object* v_toBind_3785_ = _args[13];
lean_object* v_inst_3786_ = _args[14];
lean_object* v_alts_3787_ = _args[15];
lean_object* v___f_3788_ = _args[16];
lean_object* v___x_3789_ = _args[17];
lean_object* v_inst_3790_ = _args[18];
lean_object* v_onAlt_3791_ = _args[19];
lean_object* v_inst_3792_ = _args[20];
lean_object* v___f_3793_ = _args[21];
lean_object* v_matcherApp_3794_ = _args[22];
lean_object* v_useSplitter_3795_ = _args[23];
lean_object* v_isCasesOn_3796_ = _args[24];
lean_object* v___f_3797_ = _args[25];
lean_object* v___x_3798_ = _args[26];
lean_object* v___x_3799_ = _args[27];
lean_object* v_toMonadExceptOf_3800_ = _args[28];
lean_object* v___f_3801_ = _args[29];
lean_object* v_numDiscrEqs_3802_ = _args[30];
lean_object* v_fst_3803_ = _args[31];
lean_object* v___f_3804_ = _args[32];
lean_object* v_matcherLevels_3805_ = _args[33];
_start:
{
uint8_t v___x_14631__boxed_3806_; uint8_t v_useSplitter_boxed_3807_; uint8_t v_isCasesOn_boxed_3808_; lean_object* v_res_3809_; 
v___x_14631__boxed_3806_ = lean_unbox(v___x_3789_);
v_useSplitter_boxed_3807_ = lean_unbox(v_useSplitter_3795_);
v_isCasesOn_boxed_3808_ = lean_unbox(v_isCasesOn_3796_);
v_res_3809_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__54(v_numParams_3772_, v_numDiscrs_3773_, v_altInfos_3774_, v_uElimPos_x3f_3775_, v_snd_3776_, v_overlaps_3777_, v_matcherName_3778_, v_params_x27_3779_, v_fst_3780_, v_discrs_x27_3781_, v_toPure_3782_, v_onRemaining_3783_, v_remaining_3784_, v_toBind_3785_, v_inst_3786_, v_alts_3787_, v___f_3788_, v___x_14631__boxed_3806_, v_inst_3790_, v_onAlt_3791_, v_inst_3792_, v___f_3793_, v_matcherApp_3794_, v_useSplitter_boxed_3807_, v_isCasesOn_boxed_3808_, v___f_3797_, v___x_3798_, v___x_3799_, v_toMonadExceptOf_3800_, v___f_3801_, v_numDiscrEqs_3802_, v_fst_3803_, v___f_3804_, v_matcherLevels_3805_);
return v_res_3809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56(lean_object* v___f_3810_, lean_object* v_matcherLevels_3811_){
_start:
{
lean_object* v___x_3812_; 
v___x_3812_ = lean_apply_1(v___f_3810_, v_matcherLevels_3811_);
return v___x_3812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58(lean_object* v_toMatcherInfo_3813_, lean_object* v_matcherName_3814_, lean_object* v_params_x27_3815_, lean_object* v_discrs_x27_3816_, lean_object* v_toPure_3817_, lean_object* v_onRemaining_3818_, lean_object* v_remaining_3819_, lean_object* v_toBind_3820_, lean_object* v_inst_3821_, lean_object* v_alts_3822_, lean_object* v___f_3823_, uint8_t v___x_3824_, lean_object* v_inst_3825_, lean_object* v_onAlt_3826_, lean_object* v_inst_3827_, lean_object* v___f_3828_, lean_object* v_matcherApp_3829_, uint8_t v_useSplitter_3830_, uint8_t v_isCasesOn_3831_, lean_object* v___f_3832_, lean_object* v___x_3833_, lean_object* v___x_3834_, lean_object* v_toMonadExceptOf_3835_, lean_object* v___f_3836_, lean_object* v_numDiscrEqs_3837_, lean_object* v___f_3838_, lean_object* v_matcherLevels_3839_, lean_object* v_____x_3840_){
_start:
{
lean_object* v_snd_3841_; lean_object* v_snd_3842_; lean_object* v_fst_3843_; lean_object* v_fst_3844_; lean_object* v_fst_3845_; lean_object* v_snd_3846_; lean_object* v_numParams_3847_; lean_object* v_numDiscrs_3848_; lean_object* v_altInfos_3849_; lean_object* v_uElimPos_x3f_3850_; lean_object* v_overlaps_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___f_3855_; 
v_snd_3841_ = lean_ctor_get(v_____x_3840_, 1);
lean_inc(v_snd_3841_);
v_snd_3842_ = lean_ctor_get(v_snd_3841_, 1);
lean_inc(v_snd_3842_);
v_fst_3843_ = lean_ctor_get(v_____x_3840_, 0);
lean_inc(v_fst_3843_);
lean_dec_ref(v_____x_3840_);
v_fst_3844_ = lean_ctor_get(v_snd_3841_, 0);
lean_inc(v_fst_3844_);
lean_dec(v_snd_3841_);
v_fst_3845_ = lean_ctor_get(v_snd_3842_, 0);
lean_inc(v_fst_3845_);
v_snd_3846_ = lean_ctor_get(v_snd_3842_, 1);
lean_inc(v_snd_3846_);
lean_dec(v_snd_3842_);
v_numParams_3847_ = lean_ctor_get(v_toMatcherInfo_3813_, 0);
lean_inc(v_numParams_3847_);
v_numDiscrs_3848_ = lean_ctor_get(v_toMatcherInfo_3813_, 1);
lean_inc(v_numDiscrs_3848_);
v_altInfos_3849_ = lean_ctor_get(v_toMatcherInfo_3813_, 2);
lean_inc_ref(v_altInfos_3849_);
v_uElimPos_x3f_3850_ = lean_ctor_get(v_toMatcherInfo_3813_, 3);
lean_inc_n(v_uElimPos_x3f_3850_, 2);
v_overlaps_3851_ = lean_ctor_get(v_toMatcherInfo_3813_, 5);
lean_inc_ref(v_overlaps_3851_);
lean_dec_ref(v_toMatcherInfo_3813_);
v___x_3852_ = lean_box(v___x_3824_);
v___x_3853_ = lean_box(v_useSplitter_3830_);
v___x_3854_ = lean_box(v_isCasesOn_3831_);
lean_inc(v_toBind_3820_);
lean_inc(v_toPure_3817_);
v___f_3855_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed), 34, 33);
lean_closure_set(v___f_3855_, 0, v_numParams_3847_);
lean_closure_set(v___f_3855_, 1, v_numDiscrs_3848_);
lean_closure_set(v___f_3855_, 2, v_altInfos_3849_);
lean_closure_set(v___f_3855_, 3, v_uElimPos_x3f_3850_);
lean_closure_set(v___f_3855_, 4, v_snd_3846_);
lean_closure_set(v___f_3855_, 5, v_overlaps_3851_);
lean_closure_set(v___f_3855_, 6, v_matcherName_3814_);
lean_closure_set(v___f_3855_, 7, v_params_x27_3815_);
lean_closure_set(v___f_3855_, 8, v_fst_3843_);
lean_closure_set(v___f_3855_, 9, v_discrs_x27_3816_);
lean_closure_set(v___f_3855_, 10, v_toPure_3817_);
lean_closure_set(v___f_3855_, 11, v_onRemaining_3818_);
lean_closure_set(v___f_3855_, 12, v_remaining_3819_);
lean_closure_set(v___f_3855_, 13, v_toBind_3820_);
lean_closure_set(v___f_3855_, 14, v_inst_3821_);
lean_closure_set(v___f_3855_, 15, v_alts_3822_);
lean_closure_set(v___f_3855_, 16, v___f_3823_);
lean_closure_set(v___f_3855_, 17, v___x_3852_);
lean_closure_set(v___f_3855_, 18, v_inst_3825_);
lean_closure_set(v___f_3855_, 19, v_onAlt_3826_);
lean_closure_set(v___f_3855_, 20, v_inst_3827_);
lean_closure_set(v___f_3855_, 21, v___f_3828_);
lean_closure_set(v___f_3855_, 22, v_matcherApp_3829_);
lean_closure_set(v___f_3855_, 23, v___x_3853_);
lean_closure_set(v___f_3855_, 24, v___x_3854_);
lean_closure_set(v___f_3855_, 25, v___f_3832_);
lean_closure_set(v___f_3855_, 26, v___x_3833_);
lean_closure_set(v___f_3855_, 27, v___x_3834_);
lean_closure_set(v___f_3855_, 28, v_toMonadExceptOf_3835_);
lean_closure_set(v___f_3855_, 29, v___f_3836_);
lean_closure_set(v___f_3855_, 30, v_numDiscrEqs_3837_);
lean_closure_set(v___f_3855_, 31, v_fst_3845_);
lean_closure_set(v___f_3855_, 32, v___f_3838_);
if (lean_obj_tag(v_uElimPos_x3f_3850_) == 0)
{
lean_object* v___f_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; 
lean_dec(v_fst_3844_);
v___f_3856_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__56), 2, 1);
lean_closure_set(v___f_3856_, 0, v___f_3855_);
v___x_3857_ = lean_apply_2(v_toPure_3817_, lean_box(0), v_matcherLevels_3839_);
v___x_3858_ = lean_apply_4(v_toBind_3820_, lean_box(0), lean_box(0), v___x_3857_, v___f_3856_);
return v___x_3858_;
}
else
{
lean_object* v_val_3859_; lean_object* v___f_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; 
v_val_3859_ = lean_ctor_get(v_uElimPos_x3f_3850_, 0);
lean_inc(v_val_3859_);
lean_dec_ref_known(v_uElimPos_x3f_3850_, 1);
v___f_3860_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__56), 2, 1);
lean_closure_set(v___f_3860_, 0, v___f_3855_);
v___x_3861_ = lean_array_set(v_matcherLevels_3839_, v_val_3859_, v_fst_3844_);
lean_dec(v_val_3859_);
v___x_3862_ = lean_apply_2(v_toPure_3817_, lean_box(0), v___x_3861_);
v___x_3863_ = lean_apply_4(v_toBind_3820_, lean_box(0), lean_box(0), v___x_3862_, v___f_3860_);
return v___x_3863_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed(lean_object** _args){
lean_object* v_toMatcherInfo_3864_ = _args[0];
lean_object* v_matcherName_3865_ = _args[1];
lean_object* v_params_x27_3866_ = _args[2];
lean_object* v_discrs_x27_3867_ = _args[3];
lean_object* v_toPure_3868_ = _args[4];
lean_object* v_onRemaining_3869_ = _args[5];
lean_object* v_remaining_3870_ = _args[6];
lean_object* v_toBind_3871_ = _args[7];
lean_object* v_inst_3872_ = _args[8];
lean_object* v_alts_3873_ = _args[9];
lean_object* v___f_3874_ = _args[10];
lean_object* v___x_3875_ = _args[11];
lean_object* v_inst_3876_ = _args[12];
lean_object* v_onAlt_3877_ = _args[13];
lean_object* v_inst_3878_ = _args[14];
lean_object* v___f_3879_ = _args[15];
lean_object* v_matcherApp_3880_ = _args[16];
lean_object* v_useSplitter_3881_ = _args[17];
lean_object* v_isCasesOn_3882_ = _args[18];
lean_object* v___f_3883_ = _args[19];
lean_object* v___x_3884_ = _args[20];
lean_object* v___x_3885_ = _args[21];
lean_object* v_toMonadExceptOf_3886_ = _args[22];
lean_object* v___f_3887_ = _args[23];
lean_object* v_numDiscrEqs_3888_ = _args[24];
lean_object* v___f_3889_ = _args[25];
lean_object* v_matcherLevels_3890_ = _args[26];
lean_object* v_____x_3891_ = _args[27];
_start:
{
uint8_t v___x_14703__boxed_3892_; uint8_t v_useSplitter_boxed_3893_; uint8_t v_isCasesOn_boxed_3894_; lean_object* v_res_3895_; 
v___x_14703__boxed_3892_ = lean_unbox(v___x_3875_);
v_useSplitter_boxed_3893_ = lean_unbox(v_useSplitter_3881_);
v_isCasesOn_boxed_3894_ = lean_unbox(v_isCasesOn_3882_);
v_res_3895_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__58(v_toMatcherInfo_3864_, v_matcherName_3865_, v_params_x27_3866_, v_discrs_x27_3867_, v_toPure_3868_, v_onRemaining_3869_, v_remaining_3870_, v_toBind_3871_, v_inst_3872_, v_alts_3873_, v___f_3874_, v___x_14703__boxed_3892_, v_inst_3876_, v_onAlt_3877_, v_inst_3878_, v___f_3879_, v_matcherApp_3880_, v_useSplitter_boxed_3893_, v_isCasesOn_boxed_3894_, v___f_3883_, v___x_3884_, v___x_3885_, v_toMonadExceptOf_3886_, v___f_3887_, v_numDiscrEqs_3888_, v___f_3889_, v_matcherLevels_3890_, v_____x_3891_);
return v_res_3895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57(lean_object* v_toPure_3896_, lean_object* v_inst_3897_, lean_object* v_toBind_3898_, lean_object* v_toMatcherInfo_3899_, lean_object* v_inst_3900_, lean_object* v___f_3901_, lean_object* v_onMotive_3902_, lean_object* v_discrs_3903_, lean_object* v_inst_3904_, lean_object* v_matcherName_3905_, lean_object* v_params_x27_3906_, lean_object* v_onRemaining_3907_, lean_object* v_remaining_3908_, lean_object* v_inst_3909_, lean_object* v_alts_3910_, lean_object* v___f_3911_, lean_object* v_onAlt_3912_, lean_object* v___f_3913_, lean_object* v_matcherApp_3914_, uint8_t v_useSplitter_3915_, uint8_t v_isCasesOn_3916_, lean_object* v___f_3917_, lean_object* v___x_3918_, lean_object* v___x_3919_, lean_object* v_toMonadExceptOf_3920_, lean_object* v___f_3921_, lean_object* v_numDiscrEqs_3922_, lean_object* v___f_3923_, lean_object* v_matcherLevels_3924_, lean_object* v_motive_3925_, lean_object* v_discrs_x27_3926_){
_start:
{
lean_object* v___f_3927_; uint8_t v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___f_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; 
lean_inc_ref_n(v_inst_3900_, 2);
lean_inc_ref(v_discrs_x27_3926_);
lean_inc_ref(v_toMatcherInfo_3899_);
lean_inc_n(v_toBind_3898_, 2);
lean_inc(v_inst_3897_);
lean_inc(v_toPure_3896_);
v___f_3927_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed), 12, 10);
lean_closure_set(v___f_3927_, 0, v_toPure_3896_);
lean_closure_set(v___f_3927_, 1, v_inst_3897_);
lean_closure_set(v___f_3927_, 2, v_toBind_3898_);
lean_closure_set(v___f_3927_, 3, v_toMatcherInfo_3899_);
lean_closure_set(v___f_3927_, 4, v_discrs_x27_3926_);
lean_closure_set(v___f_3927_, 5, v_inst_3900_);
lean_closure_set(v___f_3927_, 6, v___f_3901_);
lean_closure_set(v___f_3927_, 7, v_onMotive_3902_);
lean_closure_set(v___f_3927_, 8, v_discrs_3903_);
lean_closure_set(v___f_3927_, 9, v_inst_3904_);
v___x_3928_ = 0;
v___x_3929_ = lean_box(v___x_3928_);
v___x_3930_ = lean_box(v_useSplitter_3915_);
v___x_3931_ = lean_box(v_isCasesOn_3916_);
lean_inc_ref(v_inst_3909_);
v___f_3932_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed), 28, 27);
lean_closure_set(v___f_3932_, 0, v_toMatcherInfo_3899_);
lean_closure_set(v___f_3932_, 1, v_matcherName_3905_);
lean_closure_set(v___f_3932_, 2, v_params_x27_3906_);
lean_closure_set(v___f_3932_, 3, v_discrs_x27_3926_);
lean_closure_set(v___f_3932_, 4, v_toPure_3896_);
lean_closure_set(v___f_3932_, 5, v_onRemaining_3907_);
lean_closure_set(v___f_3932_, 6, v_remaining_3908_);
lean_closure_set(v___f_3932_, 7, v_toBind_3898_);
lean_closure_set(v___f_3932_, 8, v_inst_3909_);
lean_closure_set(v___f_3932_, 9, v_alts_3910_);
lean_closure_set(v___f_3932_, 10, v___f_3911_);
lean_closure_set(v___f_3932_, 11, v___x_3929_);
lean_closure_set(v___f_3932_, 12, v_inst_3897_);
lean_closure_set(v___f_3932_, 13, v_onAlt_3912_);
lean_closure_set(v___f_3932_, 14, v_inst_3900_);
lean_closure_set(v___f_3932_, 15, v___f_3913_);
lean_closure_set(v___f_3932_, 16, v_matcherApp_3914_);
lean_closure_set(v___f_3932_, 17, v___x_3930_);
lean_closure_set(v___f_3932_, 18, v___x_3931_);
lean_closure_set(v___f_3932_, 19, v___f_3917_);
lean_closure_set(v___f_3932_, 20, v___x_3918_);
lean_closure_set(v___f_3932_, 21, v___x_3919_);
lean_closure_set(v___f_3932_, 22, v_toMonadExceptOf_3920_);
lean_closure_set(v___f_3932_, 23, v___f_3921_);
lean_closure_set(v___f_3932_, 24, v_numDiscrEqs_3922_);
lean_closure_set(v___f_3932_, 25, v___f_3923_);
lean_closure_set(v___f_3932_, 26, v_matcherLevels_3924_);
v___x_3933_ = l_Lean_Meta_lambdaTelescope___redArg(v_inst_3909_, v_inst_3900_, v_motive_3925_, v___f_3927_, v___x_3928_);
v___x_3934_ = lean_apply_4(v_toBind_3898_, lean_box(0), lean_box(0), v___x_3933_, v___f_3932_);
return v___x_3934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed(lean_object** _args){
lean_object* v_toPure_3935_ = _args[0];
lean_object* v_inst_3936_ = _args[1];
lean_object* v_toBind_3937_ = _args[2];
lean_object* v_toMatcherInfo_3938_ = _args[3];
lean_object* v_inst_3939_ = _args[4];
lean_object* v___f_3940_ = _args[5];
lean_object* v_onMotive_3941_ = _args[6];
lean_object* v_discrs_3942_ = _args[7];
lean_object* v_inst_3943_ = _args[8];
lean_object* v_matcherName_3944_ = _args[9];
lean_object* v_params_x27_3945_ = _args[10];
lean_object* v_onRemaining_3946_ = _args[11];
lean_object* v_remaining_3947_ = _args[12];
lean_object* v_inst_3948_ = _args[13];
lean_object* v_alts_3949_ = _args[14];
lean_object* v___f_3950_ = _args[15];
lean_object* v_onAlt_3951_ = _args[16];
lean_object* v___f_3952_ = _args[17];
lean_object* v_matcherApp_3953_ = _args[18];
lean_object* v_useSplitter_3954_ = _args[19];
lean_object* v_isCasesOn_3955_ = _args[20];
lean_object* v___f_3956_ = _args[21];
lean_object* v___x_3957_ = _args[22];
lean_object* v___x_3958_ = _args[23];
lean_object* v_toMonadExceptOf_3959_ = _args[24];
lean_object* v___f_3960_ = _args[25];
lean_object* v_numDiscrEqs_3961_ = _args[26];
lean_object* v___f_3962_ = _args[27];
lean_object* v_matcherLevels_3963_ = _args[28];
lean_object* v_motive_3964_ = _args[29];
lean_object* v_discrs_x27_3965_ = _args[30];
_start:
{
uint8_t v_useSplitter_boxed_3966_; uint8_t v_isCasesOn_boxed_3967_; lean_object* v_res_3968_; 
v_useSplitter_boxed_3966_ = lean_unbox(v_useSplitter_3954_);
v_isCasesOn_boxed_3967_ = lean_unbox(v_isCasesOn_3955_);
v_res_3968_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__57(v_toPure_3935_, v_inst_3936_, v_toBind_3937_, v_toMatcherInfo_3938_, v_inst_3939_, v___f_3940_, v_onMotive_3941_, v_discrs_3942_, v_inst_3943_, v_matcherName_3944_, v_params_x27_3945_, v_onRemaining_3946_, v_remaining_3947_, v_inst_3948_, v_alts_3949_, v___f_3950_, v_onAlt_3951_, v___f_3952_, v_matcherApp_3953_, v_useSplitter_boxed_3966_, v_isCasesOn_boxed_3967_, v___f_3956_, v___x_3957_, v___x_3958_, v_toMonadExceptOf_3959_, v___f_3960_, v_numDiscrEqs_3961_, v___f_3962_, v_matcherLevels_3963_, v_motive_3964_, v_discrs_x27_3965_);
return v_res_3968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59(lean_object* v_toPure_3969_, lean_object* v_inst_3970_, lean_object* v_toBind_3971_, lean_object* v_toMatcherInfo_3972_, lean_object* v_inst_3973_, lean_object* v___f_3974_, lean_object* v_onMotive_3975_, lean_object* v_discrs_3976_, lean_object* v_inst_3977_, lean_object* v_matcherName_3978_, lean_object* v_onRemaining_3979_, lean_object* v_remaining_3980_, lean_object* v_inst_3981_, lean_object* v_alts_3982_, lean_object* v___f_3983_, lean_object* v_onAlt_3984_, lean_object* v___f_3985_, lean_object* v_matcherApp_3986_, uint8_t v_useSplitter_3987_, uint8_t v_isCasesOn_3988_, lean_object* v___f_3989_, lean_object* v___x_3990_, lean_object* v___x_3991_, lean_object* v_toMonadExceptOf_3992_, lean_object* v___f_3993_, lean_object* v_numDiscrEqs_3994_, lean_object* v___f_3995_, lean_object* v_matcherLevels_3996_, lean_object* v_motive_3997_, lean_object* v_onParams_3998_, lean_object* v_params_x27_3999_){
_start:
{
lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___f_4002_; size_t v_sz_4003_; size_t v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; 
v___x_4000_ = lean_box(v_useSplitter_3987_);
v___x_4001_ = lean_box(v_isCasesOn_3988_);
lean_inc_ref(v_discrs_3976_);
lean_inc_ref(v_inst_3973_);
lean_inc(v_toBind_3971_);
v___f_4002_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed), 31, 30);
lean_closure_set(v___f_4002_, 0, v_toPure_3969_);
lean_closure_set(v___f_4002_, 1, v_inst_3970_);
lean_closure_set(v___f_4002_, 2, v_toBind_3971_);
lean_closure_set(v___f_4002_, 3, v_toMatcherInfo_3972_);
lean_closure_set(v___f_4002_, 4, v_inst_3973_);
lean_closure_set(v___f_4002_, 5, v___f_3974_);
lean_closure_set(v___f_4002_, 6, v_onMotive_3975_);
lean_closure_set(v___f_4002_, 7, v_discrs_3976_);
lean_closure_set(v___f_4002_, 8, v_inst_3977_);
lean_closure_set(v___f_4002_, 9, v_matcherName_3978_);
lean_closure_set(v___f_4002_, 10, v_params_x27_3999_);
lean_closure_set(v___f_4002_, 11, v_onRemaining_3979_);
lean_closure_set(v___f_4002_, 12, v_remaining_3980_);
lean_closure_set(v___f_4002_, 13, v_inst_3981_);
lean_closure_set(v___f_4002_, 14, v_alts_3982_);
lean_closure_set(v___f_4002_, 15, v___f_3983_);
lean_closure_set(v___f_4002_, 16, v_onAlt_3984_);
lean_closure_set(v___f_4002_, 17, v___f_3985_);
lean_closure_set(v___f_4002_, 18, v_matcherApp_3986_);
lean_closure_set(v___f_4002_, 19, v___x_4000_);
lean_closure_set(v___f_4002_, 20, v___x_4001_);
lean_closure_set(v___f_4002_, 21, v___f_3989_);
lean_closure_set(v___f_4002_, 22, v___x_3990_);
lean_closure_set(v___f_4002_, 23, v___x_3991_);
lean_closure_set(v___f_4002_, 24, v_toMonadExceptOf_3992_);
lean_closure_set(v___f_4002_, 25, v___f_3993_);
lean_closure_set(v___f_4002_, 26, v_numDiscrEqs_3994_);
lean_closure_set(v___f_4002_, 27, v___f_3995_);
lean_closure_set(v___f_4002_, 28, v_matcherLevels_3996_);
lean_closure_set(v___f_4002_, 29, v_motive_3997_);
v_sz_4003_ = lean_array_size(v_discrs_3976_);
v___x_4004_ = ((size_t)0ULL);
v___x_4005_ = l_unsafeCast___redArg(v_discrs_3976_);
lean_dec_ref(v_discrs_3976_);
v___x_4006_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_3973_, v_onParams_3998_, v_sz_4003_, v___x_4004_, v___x_4005_);
v___x_4007_ = l_unsafeCast___redArg(v___x_4006_);
lean_dec(v___x_4006_);
v___x_4008_ = lean_apply_4(v_toBind_3971_, lean_box(0), lean_box(0), v___x_4007_, v___f_4002_);
return v___x_4008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed(lean_object** _args){
lean_object* v_toPure_4009_ = _args[0];
lean_object* v_inst_4010_ = _args[1];
lean_object* v_toBind_4011_ = _args[2];
lean_object* v_toMatcherInfo_4012_ = _args[3];
lean_object* v_inst_4013_ = _args[4];
lean_object* v___f_4014_ = _args[5];
lean_object* v_onMotive_4015_ = _args[6];
lean_object* v_discrs_4016_ = _args[7];
lean_object* v_inst_4017_ = _args[8];
lean_object* v_matcherName_4018_ = _args[9];
lean_object* v_onRemaining_4019_ = _args[10];
lean_object* v_remaining_4020_ = _args[11];
lean_object* v_inst_4021_ = _args[12];
lean_object* v_alts_4022_ = _args[13];
lean_object* v___f_4023_ = _args[14];
lean_object* v_onAlt_4024_ = _args[15];
lean_object* v___f_4025_ = _args[16];
lean_object* v_matcherApp_4026_ = _args[17];
lean_object* v_useSplitter_4027_ = _args[18];
lean_object* v_isCasesOn_4028_ = _args[19];
lean_object* v___f_4029_ = _args[20];
lean_object* v___x_4030_ = _args[21];
lean_object* v___x_4031_ = _args[22];
lean_object* v_toMonadExceptOf_4032_ = _args[23];
lean_object* v___f_4033_ = _args[24];
lean_object* v_numDiscrEqs_4034_ = _args[25];
lean_object* v___f_4035_ = _args[26];
lean_object* v_matcherLevels_4036_ = _args[27];
lean_object* v_motive_4037_ = _args[28];
lean_object* v_onParams_4038_ = _args[29];
lean_object* v_params_x27_4039_ = _args[30];
_start:
{
uint8_t v_useSplitter_boxed_4040_; uint8_t v_isCasesOn_boxed_4041_; lean_object* v_res_4042_; 
v_useSplitter_boxed_4040_ = lean_unbox(v_useSplitter_4027_);
v_isCasesOn_boxed_4041_ = lean_unbox(v_isCasesOn_4028_);
v_res_4042_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__59(v_toPure_4009_, v_inst_4010_, v_toBind_4011_, v_toMatcherInfo_4012_, v_inst_4013_, v___f_4014_, v_onMotive_4015_, v_discrs_4016_, v_inst_4017_, v_matcherName_4018_, v_onRemaining_4019_, v_remaining_4020_, v_inst_4021_, v_alts_4022_, v___f_4023_, v_onAlt_4024_, v___f_4025_, v_matcherApp_4026_, v_useSplitter_boxed_4040_, v_isCasesOn_boxed_4041_, v___f_4029_, v___x_4030_, v___x_4031_, v_toMonadExceptOf_4032_, v___f_4033_, v_numDiscrEqs_4034_, v___f_4035_, v_matcherLevels_4036_, v_motive_4037_, v_onParams_4038_, v_params_x27_4039_);
return v_res_4042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60(lean_object* v_toPure_4043_, lean_object* v_inst_4044_, lean_object* v_toBind_4045_, lean_object* v_toMatcherInfo_4046_, lean_object* v_inst_4047_, lean_object* v___f_4048_, lean_object* v_onMotive_4049_, lean_object* v_discrs_4050_, lean_object* v_inst_4051_, lean_object* v_matcherName_4052_, lean_object* v_onRemaining_4053_, lean_object* v_remaining_4054_, lean_object* v_inst_4055_, lean_object* v_alts_4056_, lean_object* v___f_4057_, lean_object* v_onAlt_4058_, lean_object* v___f_4059_, lean_object* v_matcherApp_4060_, uint8_t v_useSplitter_4061_, uint8_t v_isCasesOn_4062_, lean_object* v___f_4063_, lean_object* v___x_4064_, lean_object* v___x_4065_, lean_object* v_toMonadExceptOf_4066_, lean_object* v___f_4067_, lean_object* v___f_4068_, lean_object* v_matcherLevels_4069_, lean_object* v_motive_4070_, lean_object* v_onParams_4071_, lean_object* v_params_4072_, lean_object* v_numDiscrEqs_4073_){
_start:
{
lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___f_4076_; size_t v_sz_4077_; size_t v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; 
v___x_4074_ = lean_box(v_useSplitter_4061_);
v___x_4075_ = lean_box(v_isCasesOn_4062_);
lean_inc(v_onParams_4071_);
lean_inc_ref(v_inst_4047_);
lean_inc(v_toBind_4045_);
v___f_4076_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed), 31, 30);
lean_closure_set(v___f_4076_, 0, v_toPure_4043_);
lean_closure_set(v___f_4076_, 1, v_inst_4044_);
lean_closure_set(v___f_4076_, 2, v_toBind_4045_);
lean_closure_set(v___f_4076_, 3, v_toMatcherInfo_4046_);
lean_closure_set(v___f_4076_, 4, v_inst_4047_);
lean_closure_set(v___f_4076_, 5, v___f_4048_);
lean_closure_set(v___f_4076_, 6, v_onMotive_4049_);
lean_closure_set(v___f_4076_, 7, v_discrs_4050_);
lean_closure_set(v___f_4076_, 8, v_inst_4051_);
lean_closure_set(v___f_4076_, 9, v_matcherName_4052_);
lean_closure_set(v___f_4076_, 10, v_onRemaining_4053_);
lean_closure_set(v___f_4076_, 11, v_remaining_4054_);
lean_closure_set(v___f_4076_, 12, v_inst_4055_);
lean_closure_set(v___f_4076_, 13, v_alts_4056_);
lean_closure_set(v___f_4076_, 14, v___f_4057_);
lean_closure_set(v___f_4076_, 15, v_onAlt_4058_);
lean_closure_set(v___f_4076_, 16, v___f_4059_);
lean_closure_set(v___f_4076_, 17, v_matcherApp_4060_);
lean_closure_set(v___f_4076_, 18, v___x_4074_);
lean_closure_set(v___f_4076_, 19, v___x_4075_);
lean_closure_set(v___f_4076_, 20, v___f_4063_);
lean_closure_set(v___f_4076_, 21, v___x_4064_);
lean_closure_set(v___f_4076_, 22, v___x_4065_);
lean_closure_set(v___f_4076_, 23, v_toMonadExceptOf_4066_);
lean_closure_set(v___f_4076_, 24, v___f_4067_);
lean_closure_set(v___f_4076_, 25, v_numDiscrEqs_4073_);
lean_closure_set(v___f_4076_, 26, v___f_4068_);
lean_closure_set(v___f_4076_, 27, v_matcherLevels_4069_);
lean_closure_set(v___f_4076_, 28, v_motive_4070_);
lean_closure_set(v___f_4076_, 29, v_onParams_4071_);
v_sz_4077_ = lean_array_size(v_params_4072_);
v___x_4078_ = ((size_t)0ULL);
v___x_4079_ = l_unsafeCast___redArg(v_params_4072_);
v___x_4080_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_4047_, v_onParams_4071_, v_sz_4077_, v___x_4078_, v___x_4079_);
v___x_4081_ = l_unsafeCast___redArg(v___x_4080_);
lean_dec(v___x_4080_);
v___x_4082_ = lean_apply_4(v_toBind_4045_, lean_box(0), lean_box(0), v___x_4081_, v___f_4076_);
return v___x_4082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed(lean_object** _args){
lean_object* v_toPure_4083_ = _args[0];
lean_object* v_inst_4084_ = _args[1];
lean_object* v_toBind_4085_ = _args[2];
lean_object* v_toMatcherInfo_4086_ = _args[3];
lean_object* v_inst_4087_ = _args[4];
lean_object* v___f_4088_ = _args[5];
lean_object* v_onMotive_4089_ = _args[6];
lean_object* v_discrs_4090_ = _args[7];
lean_object* v_inst_4091_ = _args[8];
lean_object* v_matcherName_4092_ = _args[9];
lean_object* v_onRemaining_4093_ = _args[10];
lean_object* v_remaining_4094_ = _args[11];
lean_object* v_inst_4095_ = _args[12];
lean_object* v_alts_4096_ = _args[13];
lean_object* v___f_4097_ = _args[14];
lean_object* v_onAlt_4098_ = _args[15];
lean_object* v___f_4099_ = _args[16];
lean_object* v_matcherApp_4100_ = _args[17];
lean_object* v_useSplitter_4101_ = _args[18];
lean_object* v_isCasesOn_4102_ = _args[19];
lean_object* v___f_4103_ = _args[20];
lean_object* v___x_4104_ = _args[21];
lean_object* v___x_4105_ = _args[22];
lean_object* v_toMonadExceptOf_4106_ = _args[23];
lean_object* v___f_4107_ = _args[24];
lean_object* v___f_4108_ = _args[25];
lean_object* v_matcherLevels_4109_ = _args[26];
lean_object* v_motive_4110_ = _args[27];
lean_object* v_onParams_4111_ = _args[28];
lean_object* v_params_4112_ = _args[29];
lean_object* v_numDiscrEqs_4113_ = _args[30];
_start:
{
uint8_t v_useSplitter_boxed_4114_; uint8_t v_isCasesOn_boxed_4115_; lean_object* v_res_4116_; 
v_useSplitter_boxed_4114_ = lean_unbox(v_useSplitter_4101_);
v_isCasesOn_boxed_4115_ = lean_unbox(v_isCasesOn_4102_);
v_res_4116_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__60(v_toPure_4083_, v_inst_4084_, v_toBind_4085_, v_toMatcherInfo_4086_, v_inst_4087_, v___f_4088_, v_onMotive_4089_, v_discrs_4090_, v_inst_4091_, v_matcherName_4092_, v_onRemaining_4093_, v_remaining_4094_, v_inst_4095_, v_alts_4096_, v___f_4097_, v_onAlt_4098_, v___f_4099_, v_matcherApp_4100_, v_useSplitter_boxed_4114_, v_isCasesOn_boxed_4115_, v___f_4103_, v___x_4104_, v___x_4105_, v_toMonadExceptOf_4106_, v___f_4107_, v___f_4108_, v_matcherLevels_4109_, v_motive_4110_, v_onParams_4111_, v_params_4112_, v_numDiscrEqs_4113_);
lean_dec_ref(v_params_4112_);
return v_res_4116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__61(lean_object* v___f_4117_, lean_object* v_numDiscrEqs_4118_){
_start:
{
lean_object* v___x_4119_; 
v___x_4119_ = lean_apply_1(v___f_4117_, v_numDiscrEqs_4118_);
return v___x_4119_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1(void){
_start:
{
lean_object* v___x_4121_; lean_object* v___x_4122_; 
v___x_4121_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0));
v___x_4122_ = l_Lean_stringToMessageData(v___x_4121_);
return v___x_4122_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3(void){
_start:
{
lean_object* v___x_4124_; lean_object* v___x_4125_; 
v___x_4124_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2));
v___x_4125_ = l_Lean_stringToMessageData(v___x_4124_);
return v___x_4125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63(lean_object* v_matcherName_4126_, lean_object* v_inst_4127_, lean_object* v_inst_4128_, lean_object* v_toBind_4129_, lean_object* v___f_4130_, lean_object* v_toPure_4131_, lean_object* v___f_4132_, lean_object* v_____do__lift_4133_){
_start:
{
if (lean_obj_tag(v_____do__lift_4133_) == 0)
{
lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; 
lean_dec(v___f_4132_);
lean_dec(v_toPure_4131_);
v___x_4134_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1);
v___x_4135_ = l_Lean_MessageData_ofName(v_matcherName_4126_);
v___x_4136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4136_, 0, v___x_4134_);
lean_ctor_set(v___x_4136_, 1, v___x_4135_);
v___x_4137_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3);
v___x_4138_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4138_, 0, v___x_4136_);
lean_ctor_set(v___x_4138_, 1, v___x_4137_);
v___x_4139_ = l_Lean_throwError___redArg(v_inst_4127_, v_inst_4128_, v___x_4138_);
v___x_4140_ = lean_apply_4(v_toBind_4129_, lean_box(0), lean_box(0), v___x_4139_, v___f_4130_);
return v___x_4140_;
}
else
{
lean_object* v_val_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; 
lean_dec(v___f_4130_);
lean_dec_ref(v_inst_4128_);
lean_dec_ref(v_inst_4127_);
lean_dec(v_matcherName_4126_);
v_val_4141_ = lean_ctor_get(v_____do__lift_4133_, 0);
v___x_4142_ = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(v_val_4141_);
v___x_4143_ = lean_apply_2(v_toPure_4131_, lean_box(0), v___x_4142_);
v___x_4144_ = lean_apply_4(v_toBind_4129_, lean_box(0), lean_box(0), v___x_4143_, v___f_4132_);
return v___x_4144_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed(lean_object* v_matcherName_4145_, lean_object* v_inst_4146_, lean_object* v_inst_4147_, lean_object* v_toBind_4148_, lean_object* v___f_4149_, lean_object* v_toPure_4150_, lean_object* v___f_4151_, lean_object* v_____do__lift_4152_){
_start:
{
lean_object* v_res_4153_; 
v_res_4153_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__63(v_matcherName_4145_, v_inst_4146_, v_inst_4147_, v_toBind_4148_, v___f_4149_, v_toPure_4150_, v___f_4151_, v_____do__lift_4152_);
lean_dec(v_____do__lift_4152_);
return v_res_4153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64(lean_object* v_matcherApp_4154_, lean_object* v_toPure_4155_, lean_object* v_inst_4156_, lean_object* v_toBind_4157_, lean_object* v_inst_4158_, lean_object* v___f_4159_, lean_object* v_onMotive_4160_, lean_object* v_inst_4161_, lean_object* v_onRemaining_4162_, lean_object* v_inst_4163_, lean_object* v___f_4164_, lean_object* v_onAlt_4165_, lean_object* v___f_4166_, uint8_t v_useSplitter_4167_, lean_object* v___f_4168_, lean_object* v___x_4169_, lean_object* v___x_4170_, lean_object* v_toMonadExceptOf_4171_, lean_object* v___f_4172_, lean_object* v___f_4173_, lean_object* v_onParams_4174_, lean_object* v_inst_4175_, lean_object* v_____do__lift_4176_){
_start:
{
lean_object* v_toMatcherInfo_4177_; lean_object* v_matcherName_4178_; lean_object* v_matcherLevels_4179_; lean_object* v_params_4180_; lean_object* v_motive_4181_; lean_object* v_discrs_4182_; lean_object* v_alts_4183_; lean_object* v_remaining_4184_; uint8_t v_isCasesOn_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___f_4188_; 
v_toMatcherInfo_4177_ = lean_ctor_get(v_matcherApp_4154_, 0);
lean_inc_ref(v_toMatcherInfo_4177_);
v_matcherName_4178_ = lean_ctor_get(v_matcherApp_4154_, 1);
lean_inc_n(v_matcherName_4178_, 3);
v_matcherLevels_4179_ = lean_ctor_get(v_matcherApp_4154_, 2);
lean_inc_ref(v_matcherLevels_4179_);
v_params_4180_ = lean_ctor_get(v_matcherApp_4154_, 3);
lean_inc_ref(v_params_4180_);
v_motive_4181_ = lean_ctor_get(v_matcherApp_4154_, 4);
lean_inc_ref(v_motive_4181_);
v_discrs_4182_ = lean_ctor_get(v_matcherApp_4154_, 5);
lean_inc_ref(v_discrs_4182_);
v_alts_4183_ = lean_ctor_get(v_matcherApp_4154_, 6);
lean_inc_ref(v_alts_4183_);
v_remaining_4184_ = lean_ctor_get(v_matcherApp_4154_, 7);
lean_inc_ref(v_remaining_4184_);
v_isCasesOn_4185_ = l_Lean_isCasesOnRecursor(v_____do__lift_4176_, v_matcherName_4178_);
v___x_4186_ = lean_box(v_useSplitter_4167_);
v___x_4187_ = lean_box(v_isCasesOn_4185_);
lean_inc_ref(v_inst_4161_);
lean_inc_ref(v_inst_4158_);
lean_inc(v_toBind_4157_);
lean_inc(v_toPure_4155_);
v___f_4188_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed), 31, 30);
lean_closure_set(v___f_4188_, 0, v_toPure_4155_);
lean_closure_set(v___f_4188_, 1, v_inst_4156_);
lean_closure_set(v___f_4188_, 2, v_toBind_4157_);
lean_closure_set(v___f_4188_, 3, v_toMatcherInfo_4177_);
lean_closure_set(v___f_4188_, 4, v_inst_4158_);
lean_closure_set(v___f_4188_, 5, v___f_4159_);
lean_closure_set(v___f_4188_, 6, v_onMotive_4160_);
lean_closure_set(v___f_4188_, 7, v_discrs_4182_);
lean_closure_set(v___f_4188_, 8, v_inst_4161_);
lean_closure_set(v___f_4188_, 9, v_matcherName_4178_);
lean_closure_set(v___f_4188_, 10, v_onRemaining_4162_);
lean_closure_set(v___f_4188_, 11, v_remaining_4184_);
lean_closure_set(v___f_4188_, 12, v_inst_4163_);
lean_closure_set(v___f_4188_, 13, v_alts_4183_);
lean_closure_set(v___f_4188_, 14, v___f_4164_);
lean_closure_set(v___f_4188_, 15, v_onAlt_4165_);
lean_closure_set(v___f_4188_, 16, v___f_4166_);
lean_closure_set(v___f_4188_, 17, v_matcherApp_4154_);
lean_closure_set(v___f_4188_, 18, v___x_4186_);
lean_closure_set(v___f_4188_, 19, v___x_4187_);
lean_closure_set(v___f_4188_, 20, v___f_4168_);
lean_closure_set(v___f_4188_, 21, v___x_4169_);
lean_closure_set(v___f_4188_, 22, v___x_4170_);
lean_closure_set(v___f_4188_, 23, v_toMonadExceptOf_4171_);
lean_closure_set(v___f_4188_, 24, v___f_4172_);
lean_closure_set(v___f_4188_, 25, v___f_4173_);
lean_closure_set(v___f_4188_, 26, v_matcherLevels_4179_);
lean_closure_set(v___f_4188_, 27, v_motive_4181_);
lean_closure_set(v___f_4188_, 28, v_onParams_4174_);
lean_closure_set(v___f_4188_, 29, v_params_4180_);
if (v_isCasesOn_4185_ == 0)
{
lean_object* v___f_4189_; lean_object* v___f_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; 
v___f_4189_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__61), 2, 1);
lean_closure_set(v___f_4189_, 0, v___f_4188_);
lean_inc_ref(v___f_4189_);
lean_inc(v_toBind_4157_);
lean_inc_ref(v_inst_4158_);
lean_inc(v_matcherName_4178_);
v___f_4190_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed), 8, 7);
lean_closure_set(v___f_4190_, 0, v_matcherName_4178_);
lean_closure_set(v___f_4190_, 1, v_inst_4158_);
lean_closure_set(v___f_4190_, 2, v_inst_4161_);
lean_closure_set(v___f_4190_, 3, v_toBind_4157_);
lean_closure_set(v___f_4190_, 4, v___f_4189_);
lean_closure_set(v___f_4190_, 5, v_toPure_4155_);
lean_closure_set(v___f_4190_, 6, v___f_4189_);
v___x_4191_ = l_Lean_Meta_getMatcherInfo_x3f___redArg(v_inst_4158_, v_inst_4175_, v_matcherName_4178_);
v___x_4192_ = lean_apply_4(v_toBind_4157_, lean_box(0), lean_box(0), v___x_4191_, v___f_4190_);
return v___x_4192_;
}
else
{
lean_object* v___f_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; 
lean_dec(v_matcherName_4178_);
lean_dec_ref(v_inst_4175_);
lean_dec_ref(v_inst_4161_);
lean_dec_ref(v_inst_4158_);
v___f_4193_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__61), 2, 1);
lean_closure_set(v___f_4193_, 0, v___f_4188_);
v___x_4194_ = lean_unsigned_to_nat(0u);
v___x_4195_ = lean_apply_2(v_toPure_4155_, lean_box(0), v___x_4194_);
v___x_4196_ = lean_apply_4(v_toBind_4157_, lean_box(0), lean_box(0), v___x_4195_, v___f_4193_);
return v___x_4196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed(lean_object** _args){
lean_object* v_matcherApp_4197_ = _args[0];
lean_object* v_toPure_4198_ = _args[1];
lean_object* v_inst_4199_ = _args[2];
lean_object* v_toBind_4200_ = _args[3];
lean_object* v_inst_4201_ = _args[4];
lean_object* v___f_4202_ = _args[5];
lean_object* v_onMotive_4203_ = _args[6];
lean_object* v_inst_4204_ = _args[7];
lean_object* v_onRemaining_4205_ = _args[8];
lean_object* v_inst_4206_ = _args[9];
lean_object* v___f_4207_ = _args[10];
lean_object* v_onAlt_4208_ = _args[11];
lean_object* v___f_4209_ = _args[12];
lean_object* v_useSplitter_4210_ = _args[13];
lean_object* v___f_4211_ = _args[14];
lean_object* v___x_4212_ = _args[15];
lean_object* v___x_4213_ = _args[16];
lean_object* v_toMonadExceptOf_4214_ = _args[17];
lean_object* v___f_4215_ = _args[18];
lean_object* v___f_4216_ = _args[19];
lean_object* v_onParams_4217_ = _args[20];
lean_object* v_inst_4218_ = _args[21];
lean_object* v_____do__lift_4219_ = _args[22];
_start:
{
uint8_t v_useSplitter_boxed_4220_; lean_object* v_res_4221_; 
v_useSplitter_boxed_4220_ = lean_unbox(v_useSplitter_4210_);
v_res_4221_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__64(v_matcherApp_4197_, v_toPure_4198_, v_inst_4199_, v_toBind_4200_, v_inst_4201_, v___f_4202_, v_onMotive_4203_, v_inst_4204_, v_onRemaining_4205_, v_inst_4206_, v___f_4207_, v_onAlt_4208_, v___f_4209_, v_useSplitter_boxed_4220_, v___f_4211_, v___x_4212_, v___x_4213_, v_toMonadExceptOf_4214_, v___f_4215_, v___f_4216_, v_onParams_4217_, v_inst_4218_, v_____do__lift_4219_);
return v_res_4221_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0(void){
_start:
{
lean_object* v___x_4222_; 
v___x_4222_ = l_Subarray_empty___redArg();
return v___x_4222_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__1(void){
_start:
{
lean_object* v___x_4223_; lean_object* v___x_4224_; 
v___x_4223_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4224_, 0, v___x_4223_);
lean_ctor_set(v___x_4224_, 1, v___x_4223_);
return v___x_4224_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__2(void){
_start:
{
lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; 
v___x_4225_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__1);
v___x_4226_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4227_, 0, v___x_4226_);
lean_ctor_set(v___x_4227_, 1, v___x_4225_);
return v___x_4227_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__3(void){
_start:
{
lean_object* v___x_4228_; 
v___x_4228_ = l_Array_instInhabited___redArg();
return v___x_4228_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__4(void){
_start:
{
lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; 
v___x_4229_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__2);
v___x_4230_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4231_, 0, v___x_4230_);
lean_ctor_set(v___x_4231_, 1, v___x_4229_);
return v___x_4231_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__5(void){
_start:
{
lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; 
v___x_4232_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__4, &l_Lean_Meta_MatcherApp_transform___redArg___closed__4_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__4);
v___x_4233_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4234_, 0, v___x_4233_);
lean_ctor_set(v___x_4234_, 1, v___x_4232_);
return v___x_4234_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__6(void){
_start:
{
lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; 
v___x_4235_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__5);
v___x_4236_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__3);
v___x_4237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4237_, 0, v___x_4236_);
lean_ctor_set(v___x_4237_, 1, v___x_4235_);
return v___x_4237_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__7(void){
_start:
{
lean_object* v___x_4238_; lean_object* v___x_4239_; 
v___x_4238_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__6);
v___x_4239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4239_, 0, v___x_4238_);
return v___x_4239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg(lean_object* v_inst_4240_, lean_object* v_inst_4241_, lean_object* v_inst_4242_, lean_object* v_inst_4243_, lean_object* v_inst_4244_, lean_object* v_matcherApp_4245_, uint8_t v_useSplitter_4246_, uint8_t v_addEqualities_4247_, lean_object* v_onParams_4248_, lean_object* v_onMotive_4249_, lean_object* v_onAlt_4250_, lean_object* v_onRemaining_4251_){
_start:
{
lean_object* v_toApplicative_4252_; lean_object* v_toBind_4253_; lean_object* v_getEnv_4254_; lean_object* v_toPure_4255_; lean_object* v_toMonadExceptOf_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___f_4259_; lean_object* v___f_4260_; lean_object* v___f_4261_; lean_object* v___x_4262_; lean_object* v___f_4263_; lean_object* v___x_4264_; lean_object* v___f_4265_; lean_object* v___f_4266_; lean_object* v___f_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___f_4270_; lean_object* v___x_4271_; 
v_toApplicative_4252_ = lean_ctor_get(v_inst_4242_, 0);
v_toBind_4253_ = lean_ctor_get(v_inst_4242_, 1);
lean_inc_n(v_toBind_4253_, 4);
v_getEnv_4254_ = lean_ctor_get(v_inst_4244_, 0);
lean_inc(v_getEnv_4254_);
v_toPure_4255_ = lean_ctor_get(v_toApplicative_4252_, 1);
lean_inc_n(v_toPure_4255_, 5);
v_toMonadExceptOf_4256_ = lean_ctor_get(v_inst_4243_, 0);
lean_inc_ref(v_toMonadExceptOf_4256_);
v___x_4257_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__7, &l_Lean_Meta_MatcherApp_transform___redArg___closed__7_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__7);
lean_inc_ref_n(v_inst_4242_, 4);
v___x_4258_ = l_instInhabitedOfMonad___redArg(v_inst_4242_, v___x_4257_);
lean_inc_ref(v_inst_4243_);
v___f_4259_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4259_, 0, v_inst_4242_);
lean_closure_set(v___f_4259_, 1, v_inst_4243_);
lean_inc_n(v_inst_4240_, 3);
v___f_4260_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_4260_, 0, v_inst_4240_);
v___f_4261_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4261_, 0, v_inst_4242_);
lean_closure_set(v___f_4261_, 1, v___f_4260_);
v___x_4262_ = l_Lean_instInhabitedExpr;
v___f_4263_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__5), 6, 3);
lean_closure_set(v___f_4263_, 0, v_toPure_4255_);
lean_closure_set(v___f_4263_, 1, v_inst_4240_);
lean_closure_set(v___f_4263_, 2, v_toBind_4253_);
v___x_4264_ = lean_box(v_addEqualities_4247_);
v___f_4265_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__10___boxed), 7, 4);
lean_closure_set(v___f_4265_, 0, v_toPure_4255_);
lean_closure_set(v___f_4265_, 1, v___x_4264_);
lean_closure_set(v___f_4265_, 2, v_inst_4240_);
lean_closure_set(v___f_4265_, 3, v_toBind_4253_);
v___f_4266_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__11), 2, 1);
lean_closure_set(v___f_4266_, 0, v_toPure_4255_);
v___f_4267_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__12), 2, 1);
lean_closure_set(v___f_4267_, 0, v_toPure_4255_);
v___x_4268_ = l_instInhabitedOfMonad___redArg(v_inst_4242_, v___x_4262_);
v___x_4269_ = lean_box(v_useSplitter_4246_);
v___f_4270_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed), 23, 22);
lean_closure_set(v___f_4270_, 0, v_matcherApp_4245_);
lean_closure_set(v___f_4270_, 1, v_toPure_4255_);
lean_closure_set(v___f_4270_, 2, v_inst_4240_);
lean_closure_set(v___f_4270_, 3, v_toBind_4253_);
lean_closure_set(v___f_4270_, 4, v_inst_4242_);
lean_closure_set(v___f_4270_, 5, v___f_4265_);
lean_closure_set(v___f_4270_, 6, v_onMotive_4249_);
lean_closure_set(v___f_4270_, 7, v_inst_4243_);
lean_closure_set(v___f_4270_, 8, v_onRemaining_4251_);
lean_closure_set(v___f_4270_, 9, v_inst_4241_);
lean_closure_set(v___f_4270_, 10, v___f_4267_);
lean_closure_set(v___f_4270_, 11, v_onAlt_4250_);
lean_closure_set(v___f_4270_, 12, v___f_4261_);
lean_closure_set(v___f_4270_, 13, v___x_4269_);
lean_closure_set(v___f_4270_, 14, v___f_4266_);
lean_closure_set(v___f_4270_, 15, v___x_4258_);
lean_closure_set(v___f_4270_, 16, v___x_4268_);
lean_closure_set(v___f_4270_, 17, v_toMonadExceptOf_4256_);
lean_closure_set(v___f_4270_, 18, v___f_4259_);
lean_closure_set(v___f_4270_, 19, v___f_4263_);
lean_closure_set(v___f_4270_, 20, v_onParams_4248_);
lean_closure_set(v___f_4270_, 21, v_inst_4244_);
v___x_4271_ = lean_apply_4(v_toBind_4253_, lean_box(0), lean_box(0), v_getEnv_4254_, v___f_4270_);
return v___x_4271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___boxed(lean_object* v_inst_4272_, lean_object* v_inst_4273_, lean_object* v_inst_4274_, lean_object* v_inst_4275_, lean_object* v_inst_4276_, lean_object* v_matcherApp_4277_, lean_object* v_useSplitter_4278_, lean_object* v_addEqualities_4279_, lean_object* v_onParams_4280_, lean_object* v_onMotive_4281_, lean_object* v_onAlt_4282_, lean_object* v_onRemaining_4283_){
_start:
{
uint8_t v_useSplitter_boxed_4284_; uint8_t v_addEqualities_boxed_4285_; lean_object* v_res_4286_; 
v_useSplitter_boxed_4284_ = lean_unbox(v_useSplitter_4278_);
v_addEqualities_boxed_4285_ = lean_unbox(v_addEqualities_4279_);
v_res_4286_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_4272_, v_inst_4273_, v_inst_4274_, v_inst_4275_, v_inst_4276_, v_matcherApp_4277_, v_useSplitter_boxed_4284_, v_addEqualities_boxed_4285_, v_onParams_4280_, v_onMotive_4281_, v_onAlt_4282_, v_onRemaining_4283_);
return v_res_4286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform(lean_object* v_n_4287_, lean_object* v_inst_4288_, lean_object* v_inst_4289_, lean_object* v_inst_4290_, lean_object* v_inst_4291_, lean_object* v_inst_4292_, lean_object* v_inst_4293_, lean_object* v_inst_4294_, lean_object* v_inst_4295_, lean_object* v_matcherApp_4296_, uint8_t v_useSplitter_4297_, uint8_t v_addEqualities_4298_, lean_object* v_onParams_4299_, lean_object* v_onMotive_4300_, lean_object* v_onAlt_4301_, lean_object* v_onRemaining_4302_){
_start:
{
lean_object* v___x_4303_; 
v___x_4303_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_4288_, v_inst_4289_, v_inst_4290_, v_inst_4291_, v_inst_4292_, v_matcherApp_4296_, v_useSplitter_4297_, v_addEqualities_4298_, v_onParams_4299_, v_onMotive_4300_, v_onAlt_4301_, v_onRemaining_4302_);
return v___x_4303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___boxed(lean_object* v_n_4304_, lean_object* v_inst_4305_, lean_object* v_inst_4306_, lean_object* v_inst_4307_, lean_object* v_inst_4308_, lean_object* v_inst_4309_, lean_object* v_inst_4310_, lean_object* v_inst_4311_, lean_object* v_inst_4312_, lean_object* v_matcherApp_4313_, lean_object* v_useSplitter_4314_, lean_object* v_addEqualities_4315_, lean_object* v_onParams_4316_, lean_object* v_onMotive_4317_, lean_object* v_onAlt_4318_, lean_object* v_onRemaining_4319_){
_start:
{
uint8_t v_useSplitter_boxed_4320_; uint8_t v_addEqualities_boxed_4321_; lean_object* v_res_4322_; 
v_useSplitter_boxed_4320_ = lean_unbox(v_useSplitter_4314_);
v_addEqualities_boxed_4321_ = lean_unbox(v_addEqualities_4315_);
v_res_4322_ = l_Lean_Meta_MatcherApp_transform(v_n_4304_, v_inst_4305_, v_inst_4306_, v_inst_4307_, v_inst_4308_, v_inst_4309_, v_inst_4310_, v_inst_4311_, v_inst_4312_, v_matcherApp_4313_, v_useSplitter_boxed_4320_, v_addEqualities_boxed_4321_, v_onParams_4316_, v_onMotive_4317_, v_onAlt_4318_, v_onRemaining_4319_);
lean_dec(v_inst_4312_);
lean_dec(v_inst_4311_);
lean_dec_ref(v_inst_4310_);
return v_res_4322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0(lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_){
_start:
{
lean_object* v___x_4329_; 
v___x_4329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4329_, 0, v___y_4323_);
return v___x_4329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed(lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_){
_start:
{
lean_object* v_res_4336_; 
v_res_4336_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__0(v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_, v___y_4334_);
lean_dec(v___y_4334_);
lean_dec_ref(v___y_4333_);
lean_dec(v___y_4332_);
lean_dec_ref(v___y_4331_);
return v_res_4336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1(lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_){
_start:
{
lean_object* v___x_4343_; 
v___x_4343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4343_, 0, v___y_4337_);
return v___x_4343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed(lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_){
_start:
{
lean_object* v_res_4350_; 
v_res_4350_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__1(v___y_4344_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_);
lean_dec(v___y_4348_);
lean_dec_ref(v___y_4347_);
lean_dec(v___y_4346_);
lean_dec_ref(v___y_4345_);
return v_res_4350_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(lean_object* v_opts_4351_, lean_object* v_opt_4352_){
_start:
{
lean_object* v_name_4353_; lean_object* v_defValue_4354_; lean_object* v_map_4355_; lean_object* v___x_4356_; 
v_name_4353_ = lean_ctor_get(v_opt_4352_, 0);
v_defValue_4354_ = lean_ctor_get(v_opt_4352_, 1);
v_map_4355_ = lean_ctor_get(v_opts_4351_, 0);
v___x_4356_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4355_, v_name_4353_);
if (lean_obj_tag(v___x_4356_) == 0)
{
uint8_t v___x_4357_; 
v___x_4357_ = lean_unbox(v_defValue_4354_);
return v___x_4357_;
}
else
{
lean_object* v_val_4358_; 
v_val_4358_ = lean_ctor_get(v___x_4356_, 0);
lean_inc(v_val_4358_);
lean_dec_ref_known(v___x_4356_, 1);
if (lean_obj_tag(v_val_4358_) == 1)
{
uint8_t v_v_4359_; 
v_v_4359_ = lean_ctor_get_uint8(v_val_4358_, 0);
lean_dec_ref_known(v_val_4358_, 0);
return v_v_4359_;
}
else
{
uint8_t v___x_4360_; 
lean_dec(v_val_4358_);
v___x_4360_ = lean_unbox(v_defValue_4354_);
return v___x_4360_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11___boxed(lean_object* v_opts_4361_, lean_object* v_opt_4362_){
_start:
{
uint8_t v_res_4363_; lean_object* v_r_4364_; 
v_res_4363_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(v_opts_4361_, v_opt_4362_);
lean_dec_ref(v_opt_4362_);
lean_dec_ref(v_opts_4361_);
v_r_4364_ = lean_box(v_res_4363_);
return v_r_4364_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(uint8_t v_suppressElabErrors_4373_, uint8_t v___y_4374_, lean_object* v_x_4375_){
_start:
{
if (lean_obj_tag(v_x_4375_) == 1)
{
lean_object* v_pre_4376_; 
v_pre_4376_ = lean_ctor_get(v_x_4375_, 0);
switch(lean_obj_tag(v_pre_4376_))
{
case 1:
{
lean_object* v_pre_4377_; 
v_pre_4377_ = lean_ctor_get(v_pre_4376_, 0);
switch(lean_obj_tag(v_pre_4377_))
{
case 0:
{
lean_object* v_str_4378_; lean_object* v_str_4379_; lean_object* v___x_4380_; uint8_t v___x_4381_; 
v_str_4378_ = lean_ctor_get(v_x_4375_, 1);
v_str_4379_ = lean_ctor_get(v_pre_4376_, 1);
v___x_4380_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0));
v___x_4381_ = lean_string_dec_eq(v_str_4379_, v___x_4380_);
if (v___x_4381_ == 0)
{
lean_object* v___x_4382_; uint8_t v___x_4383_; 
v___x_4382_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_4383_ = lean_string_dec_eq(v_str_4379_, v___x_4382_);
if (v___x_4383_ == 0)
{
return v___x_4383_;
}
else
{
lean_object* v___x_4384_; uint8_t v___x_4385_; 
v___x_4384_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2));
v___x_4385_ = lean_string_dec_eq(v_str_4378_, v___x_4384_);
if (v___x_4385_ == 0)
{
return v___x_4385_;
}
else
{
return v_suppressElabErrors_4373_;
}
}
}
else
{
lean_object* v___x_4386_; uint8_t v___x_4387_; 
v___x_4386_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3));
v___x_4387_ = lean_string_dec_eq(v_str_4378_, v___x_4386_);
if (v___x_4387_ == 0)
{
return v___x_4387_;
}
else
{
return v_suppressElabErrors_4373_;
}
}
}
case 1:
{
lean_object* v_pre_4388_; 
v_pre_4388_ = lean_ctor_get(v_pre_4377_, 0);
if (lean_obj_tag(v_pre_4388_) == 0)
{
lean_object* v_str_4389_; lean_object* v_str_4390_; lean_object* v_str_4391_; lean_object* v___x_4392_; uint8_t v___x_4393_; 
v_str_4389_ = lean_ctor_get(v_x_4375_, 1);
v_str_4390_ = lean_ctor_get(v_pre_4376_, 1);
v_str_4391_ = lean_ctor_get(v_pre_4377_, 1);
v___x_4392_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4));
v___x_4393_ = lean_string_dec_eq(v_str_4391_, v___x_4392_);
if (v___x_4393_ == 0)
{
return v___x_4393_;
}
else
{
lean_object* v___x_4394_; uint8_t v___x_4395_; 
v___x_4394_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5));
v___x_4395_ = lean_string_dec_eq(v_str_4390_, v___x_4394_);
if (v___x_4395_ == 0)
{
return v___x_4395_;
}
else
{
lean_object* v___x_4396_; uint8_t v___x_4397_; 
v___x_4396_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6));
v___x_4397_ = lean_string_dec_eq(v_str_4389_, v___x_4396_);
if (v___x_4397_ == 0)
{
return v___x_4397_;
}
else
{
return v_suppressElabErrors_4373_;
}
}
}
}
else
{
return v___y_4374_;
}
}
default: 
{
return v___y_4374_;
}
}
}
case 0:
{
lean_object* v_str_4398_; lean_object* v___x_4399_; uint8_t v___x_4400_; 
v_str_4398_ = lean_ctor_get(v_x_4375_, 1);
v___x_4399_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7));
v___x_4400_ = lean_string_dec_eq(v_str_4398_, v___x_4399_);
if (v___x_4400_ == 0)
{
return v___x_4400_;
}
else
{
return v_suppressElabErrors_4373_;
}
}
default: 
{
return v___y_4374_;
}
}
}
else
{
return v___y_4374_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v_suppressElabErrors_4401_, lean_object* v___y_4402_, lean_object* v_x_4403_){
_start:
{
uint8_t v_suppressElabErrors_boxed_4404_; uint8_t v___y_32304__boxed_4405_; uint8_t v_res_4406_; lean_object* v_r_4407_; 
v_suppressElabErrors_boxed_4404_ = lean_unbox(v_suppressElabErrors_4401_);
v___y_32304__boxed_4405_ = lean_unbox(v___y_4402_);
v_res_4406_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(v_suppressElabErrors_boxed_4404_, v___y_32304__boxed_4405_, v_x_4403_);
lean_dec(v_x_4403_);
v_r_4407_ = lean_box(v_res_4406_);
return v_r_4407_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(lean_object* v_ref_4409_, lean_object* v_msgData_4410_, uint8_t v_severity_4411_, uint8_t v_isSilent_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_){
_start:
{
uint8_t v___y_4419_; lean_object* v___y_4420_; lean_object* v___y_4421_; lean_object* v___y_4422_; lean_object* v___y_4423_; uint8_t v___y_4424_; lean_object* v___y_4425_; lean_object* v_currNamespace_4426_; lean_object* v_openDecls_4427_; lean_object* v___y_4428_; lean_object* v___y_4454_; lean_object* v___y_4455_; lean_object* v___y_4456_; uint8_t v___y_4457_; lean_object* v___y_4458_; lean_object* v___y_4459_; uint8_t v___y_4460_; uint8_t v___y_4461_; lean_object* v___y_4462_; lean_object* v___y_4463_; lean_object* v___y_4481_; lean_object* v___y_4482_; lean_object* v___y_4483_; uint8_t v___y_4484_; lean_object* v___y_4485_; lean_object* v___y_4486_; lean_object* v___y_4487_; uint8_t v___y_4488_; uint8_t v___y_4489_; lean_object* v___y_4490_; lean_object* v___y_4494_; lean_object* v___y_4495_; lean_object* v___y_4496_; lean_object* v___y_4497_; lean_object* v___y_4498_; lean_object* v___y_4499_; uint8_t v___y_4500_; uint8_t v___y_4501_; uint8_t v___y_4502_; uint8_t v___x_4507_; lean_object* v___y_4509_; lean_object* v___y_4510_; lean_object* v___y_4511_; lean_object* v___y_4512_; lean_object* v___y_4513_; lean_object* v___y_4514_; uint8_t v___y_4515_; uint8_t v___y_4516_; uint8_t v___y_4517_; uint8_t v___y_4519_; uint8_t v___x_4537_; 
v___x_4507_ = 2;
v___x_4537_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4411_, v___x_4507_);
if (v___x_4537_ == 0)
{
v___y_4519_ = v___x_4537_;
goto v___jp_4518_;
}
else
{
uint8_t v___x_4538_; 
lean_inc_ref(v_msgData_4410_);
v___x_4538_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_4410_);
v___y_4519_ = v___x_4538_;
goto v___jp_4518_;
}
v___jp_4418_:
{
lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v_env_4433_; lean_object* v_nextMacroScope_4434_; lean_object* v_ngen_4435_; lean_object* v_auxDeclNGen_4436_; lean_object* v_traceState_4437_; lean_object* v_cache_4438_; lean_object* v_messages_4439_; lean_object* v_infoState_4440_; lean_object* v_snapshotTasks_4441_; lean_object* v___x_4443_; uint8_t v_isShared_4444_; uint8_t v_isSharedCheck_4452_; 
lean_inc(v_openDecls_4427_);
lean_inc(v_currNamespace_4426_);
v___x_4429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4429_, 0, v_currNamespace_4426_);
lean_ctor_set(v___x_4429_, 1, v_openDecls_4427_);
v___x_4430_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4430_, 0, v___x_4429_);
lean_ctor_set(v___x_4430_, 1, v___y_4425_);
lean_inc_ref(v___y_4422_);
lean_inc_ref(v___y_4421_);
v___x_4431_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_4431_, 0, v___y_4421_);
lean_ctor_set(v___x_4431_, 1, v___y_4423_);
lean_ctor_set(v___x_4431_, 2, v___y_4420_);
lean_ctor_set(v___x_4431_, 3, v___y_4422_);
lean_ctor_set(v___x_4431_, 4, v___x_4430_);
lean_ctor_set_uint8(v___x_4431_, sizeof(void*)*5, v___y_4424_);
lean_ctor_set_uint8(v___x_4431_, sizeof(void*)*5 + 1, v___y_4419_);
lean_ctor_set_uint8(v___x_4431_, sizeof(void*)*5 + 2, v_isSilent_4412_);
v___x_4432_ = lean_st_ref_take(v___y_4428_);
v_env_4433_ = lean_ctor_get(v___x_4432_, 0);
v_nextMacroScope_4434_ = lean_ctor_get(v___x_4432_, 1);
v_ngen_4435_ = lean_ctor_get(v___x_4432_, 2);
v_auxDeclNGen_4436_ = lean_ctor_get(v___x_4432_, 3);
v_traceState_4437_ = lean_ctor_get(v___x_4432_, 4);
v_cache_4438_ = lean_ctor_get(v___x_4432_, 5);
v_messages_4439_ = lean_ctor_get(v___x_4432_, 6);
v_infoState_4440_ = lean_ctor_get(v___x_4432_, 7);
v_snapshotTasks_4441_ = lean_ctor_get(v___x_4432_, 8);
v_isSharedCheck_4452_ = !lean_is_exclusive(v___x_4432_);
if (v_isSharedCheck_4452_ == 0)
{
v___x_4443_ = v___x_4432_;
v_isShared_4444_ = v_isSharedCheck_4452_;
goto v_resetjp_4442_;
}
else
{
lean_inc(v_snapshotTasks_4441_);
lean_inc(v_infoState_4440_);
lean_inc(v_messages_4439_);
lean_inc(v_cache_4438_);
lean_inc(v_traceState_4437_);
lean_inc(v_auxDeclNGen_4436_);
lean_inc(v_ngen_4435_);
lean_inc(v_nextMacroScope_4434_);
lean_inc(v_env_4433_);
lean_dec(v___x_4432_);
v___x_4443_ = lean_box(0);
v_isShared_4444_ = v_isSharedCheck_4452_;
goto v_resetjp_4442_;
}
v_resetjp_4442_:
{
lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4448_; 
v___x_4445_ = lean_box(0);
v___x_4446_ = l_Lean_MessageLog_add(v___x_4431_, v_messages_4439_);
if (v_isShared_4444_ == 0)
{
lean_ctor_set(v___x_4443_, 6, v___x_4446_);
v___x_4448_ = v___x_4443_;
goto v_reusejp_4447_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v_env_4433_);
lean_ctor_set(v_reuseFailAlloc_4451_, 1, v_nextMacroScope_4434_);
lean_ctor_set(v_reuseFailAlloc_4451_, 2, v_ngen_4435_);
lean_ctor_set(v_reuseFailAlloc_4451_, 3, v_auxDeclNGen_4436_);
lean_ctor_set(v_reuseFailAlloc_4451_, 4, v_traceState_4437_);
lean_ctor_set(v_reuseFailAlloc_4451_, 5, v_cache_4438_);
lean_ctor_set(v_reuseFailAlloc_4451_, 6, v___x_4446_);
lean_ctor_set(v_reuseFailAlloc_4451_, 7, v_infoState_4440_);
lean_ctor_set(v_reuseFailAlloc_4451_, 8, v_snapshotTasks_4441_);
v___x_4448_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4447_;
}
v_reusejp_4447_:
{
lean_object* v___x_4449_; lean_object* v___x_4450_; 
v___x_4449_ = lean_st_ref_put(v___y_4428_, v___x_4448_);
v___x_4450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4450_, 0, v___x_4445_);
return v___x_4450_;
}
}
}
v___jp_4453_:
{
lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v_a_4466_; lean_object* v___x_4468_; uint8_t v_isShared_4469_; uint8_t v_isSharedCheck_4479_; 
v___x_4464_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_4410_);
v___x_4465_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v___x_4464_, v___y_4413_, v___y_4414_, v___y_4415_, v___y_4416_);
v_a_4466_ = lean_ctor_get(v___x_4465_, 0);
v_isSharedCheck_4479_ = !lean_is_exclusive(v___x_4465_);
if (v_isSharedCheck_4479_ == 0)
{
v___x_4468_ = v___x_4465_;
v_isShared_4469_ = v_isSharedCheck_4479_;
goto v_resetjp_4467_;
}
else
{
lean_inc(v_a_4466_);
lean_dec(v___x_4465_);
v___x_4468_ = lean_box(0);
v_isShared_4469_ = v_isSharedCheck_4479_;
goto v_resetjp_4467_;
}
v_resetjp_4467_:
{
lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; 
lean_inc_ref_n(v___y_4458_, 2);
v___x_4470_ = l_Lean_FileMap_toPosition(v___y_4458_, v___y_4462_);
lean_dec(v___y_4462_);
v___x_4471_ = l_Lean_FileMap_toPosition(v___y_4458_, v___y_4463_);
lean_dec(v___y_4463_);
v___x_4472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4472_, 0, v___x_4471_);
v___x_4473_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0));
if (v___y_4461_ == 0)
{
lean_del_object(v___x_4468_);
lean_dec_ref(v___y_4455_);
v___y_4419_ = v___y_4457_;
v___y_4420_ = v___x_4472_;
v___y_4421_ = v___y_4459_;
v___y_4422_ = v___x_4473_;
v___y_4423_ = v___x_4470_;
v___y_4424_ = v___y_4460_;
v___y_4425_ = v_a_4466_;
v_currNamespace_4426_ = v___y_4456_;
v_openDecls_4427_ = v___y_4454_;
v___y_4428_ = v___y_4416_;
goto v___jp_4418_;
}
else
{
uint8_t v___x_4474_; 
lean_inc(v_a_4466_);
v___x_4474_ = l_Lean_MessageData_hasTag(v___y_4455_, v_a_4466_);
if (v___x_4474_ == 0)
{
lean_object* v___x_4475_; lean_object* v___x_4477_; 
lean_dec_ref_known(v___x_4472_, 1);
lean_dec_ref(v___x_4470_);
lean_dec(v_a_4466_);
v___x_4475_ = lean_box(0);
if (v_isShared_4469_ == 0)
{
lean_ctor_set(v___x_4468_, 0, v___x_4475_);
v___x_4477_ = v___x_4468_;
goto v_reusejp_4476_;
}
else
{
lean_object* v_reuseFailAlloc_4478_; 
v_reuseFailAlloc_4478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4478_, 0, v___x_4475_);
v___x_4477_ = v_reuseFailAlloc_4478_;
goto v_reusejp_4476_;
}
v_reusejp_4476_:
{
return v___x_4477_;
}
}
else
{
lean_del_object(v___x_4468_);
v___y_4419_ = v___y_4457_;
v___y_4420_ = v___x_4472_;
v___y_4421_ = v___y_4459_;
v___y_4422_ = v___x_4473_;
v___y_4423_ = v___x_4470_;
v___y_4424_ = v___y_4460_;
v___y_4425_ = v_a_4466_;
v_currNamespace_4426_ = v___y_4456_;
v_openDecls_4427_ = v___y_4454_;
v___y_4428_ = v___y_4416_;
goto v___jp_4418_;
}
}
}
}
v___jp_4480_:
{
lean_object* v___x_4491_; 
v___x_4491_ = l_Lean_Syntax_getTailPos_x3f(v___y_4487_, v___y_4488_);
lean_dec(v___y_4487_);
if (lean_obj_tag(v___x_4491_) == 0)
{
lean_inc(v___y_4490_);
v___y_4454_ = v___y_4481_;
v___y_4455_ = v___y_4482_;
v___y_4456_ = v___y_4483_;
v___y_4457_ = v___y_4484_;
v___y_4458_ = v___y_4485_;
v___y_4459_ = v___y_4486_;
v___y_4460_ = v___y_4488_;
v___y_4461_ = v___y_4489_;
v___y_4462_ = v___y_4490_;
v___y_4463_ = v___y_4490_;
goto v___jp_4453_;
}
else
{
lean_object* v_val_4492_; 
v_val_4492_ = lean_ctor_get(v___x_4491_, 0);
lean_inc(v_val_4492_);
lean_dec_ref_known(v___x_4491_, 1);
v___y_4454_ = v___y_4481_;
v___y_4455_ = v___y_4482_;
v___y_4456_ = v___y_4483_;
v___y_4457_ = v___y_4484_;
v___y_4458_ = v___y_4485_;
v___y_4459_ = v___y_4486_;
v___y_4460_ = v___y_4488_;
v___y_4461_ = v___y_4489_;
v___y_4462_ = v___y_4490_;
v___y_4463_ = v_val_4492_;
goto v___jp_4453_;
}
}
v___jp_4493_:
{
lean_object* v_ref_4503_; lean_object* v___x_4504_; 
v_ref_4503_ = l_Lean_replaceRef(v_ref_4409_, v___y_4499_);
v___x_4504_ = l_Lean_Syntax_getPos_x3f(v_ref_4503_, v___y_4500_);
if (lean_obj_tag(v___x_4504_) == 0)
{
lean_object* v___x_4505_; 
v___x_4505_ = lean_unsigned_to_nat(0u);
v___y_4481_ = v___y_4494_;
v___y_4482_ = v___y_4495_;
v___y_4483_ = v___y_4496_;
v___y_4484_ = v___y_4502_;
v___y_4485_ = v___y_4497_;
v___y_4486_ = v___y_4498_;
v___y_4487_ = v_ref_4503_;
v___y_4488_ = v___y_4500_;
v___y_4489_ = v___y_4501_;
v___y_4490_ = v___x_4505_;
goto v___jp_4480_;
}
else
{
lean_object* v_val_4506_; 
v_val_4506_ = lean_ctor_get(v___x_4504_, 0);
lean_inc(v_val_4506_);
lean_dec_ref_known(v___x_4504_, 1);
v___y_4481_ = v___y_4494_;
v___y_4482_ = v___y_4495_;
v___y_4483_ = v___y_4496_;
v___y_4484_ = v___y_4502_;
v___y_4485_ = v___y_4497_;
v___y_4486_ = v___y_4498_;
v___y_4487_ = v_ref_4503_;
v___y_4488_ = v___y_4500_;
v___y_4489_ = v___y_4501_;
v___y_4490_ = v_val_4506_;
goto v___jp_4480_;
}
}
v___jp_4508_:
{
if (v___y_4517_ == 0)
{
v___y_4494_ = v___y_4509_;
v___y_4495_ = v___y_4512_;
v___y_4496_ = v___y_4513_;
v___y_4497_ = v___y_4510_;
v___y_4498_ = v___y_4511_;
v___y_4499_ = v___y_4514_;
v___y_4500_ = v___y_4515_;
v___y_4501_ = v___y_4516_;
v___y_4502_ = v_severity_4411_;
goto v___jp_4493_;
}
else
{
v___y_4494_ = v___y_4509_;
v___y_4495_ = v___y_4512_;
v___y_4496_ = v___y_4513_;
v___y_4497_ = v___y_4510_;
v___y_4498_ = v___y_4511_;
v___y_4499_ = v___y_4514_;
v___y_4500_ = v___y_4515_;
v___y_4501_ = v___y_4516_;
v___y_4502_ = v___x_4507_;
goto v___jp_4493_;
}
}
v___jp_4518_:
{
if (v___y_4519_ == 0)
{
lean_object* v_toCold_4520_; lean_object* v_ref_4521_; uint8_t v_suppressElabErrors_4522_; lean_object* v_fileName_4523_; lean_object* v_fileMap_4524_; lean_object* v_options_4525_; lean_object* v_currNamespace_4526_; lean_object* v_openDecls_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___f_4530_; uint8_t v___x_4531_; uint8_t v___x_4532_; 
v_toCold_4520_ = lean_ctor_get(v___y_4415_, 0);
v_ref_4521_ = lean_ctor_get(v___y_4415_, 2);
v_suppressElabErrors_4522_ = lean_ctor_get_uint8(v___y_4415_, sizeof(void*)*3 + 1);
v_fileName_4523_ = lean_ctor_get(v_toCold_4520_, 0);
v_fileMap_4524_ = lean_ctor_get(v_toCold_4520_, 1);
v_options_4525_ = lean_ctor_get(v_toCold_4520_, 2);
v_currNamespace_4526_ = lean_ctor_get(v_toCold_4520_, 4);
v_openDecls_4527_ = lean_ctor_get(v_toCold_4520_, 5);
v___x_4528_ = lean_box(v_suppressElabErrors_4522_);
v___x_4529_ = lean_box(v___y_4519_);
v___f_4530_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4530_, 0, v___x_4528_);
lean_closure_set(v___f_4530_, 1, v___x_4529_);
v___x_4531_ = 1;
v___x_4532_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4411_, v___x_4531_);
if (v___x_4532_ == 0)
{
v___y_4509_ = v_openDecls_4527_;
v___y_4510_ = v_fileMap_4524_;
v___y_4511_ = v_fileName_4523_;
v___y_4512_ = v___f_4530_;
v___y_4513_ = v_currNamespace_4526_;
v___y_4514_ = v_ref_4521_;
v___y_4515_ = v___y_4519_;
v___y_4516_ = v_suppressElabErrors_4522_;
v___y_4517_ = v___x_4532_;
goto v___jp_4508_;
}
else
{
lean_object* v___x_4533_; uint8_t v___x_4534_; 
v___x_4533_ = l_Lean_warningAsError;
v___x_4534_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(v_options_4525_, v___x_4533_);
v___y_4509_ = v_openDecls_4527_;
v___y_4510_ = v_fileMap_4524_;
v___y_4511_ = v_fileName_4523_;
v___y_4512_ = v___f_4530_;
v___y_4513_ = v_currNamespace_4526_;
v___y_4514_ = v_ref_4521_;
v___y_4515_ = v___y_4519_;
v___y_4516_ = v_suppressElabErrors_4522_;
v___y_4517_ = v___x_4534_;
goto v___jp_4508_;
}
}
else
{
lean_object* v___x_4535_; lean_object* v___x_4536_; 
lean_dec_ref(v_msgData_4410_);
v___x_4535_ = lean_box(0);
v___x_4536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4536_, 0, v___x_4535_);
return v___x_4536_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_4539_, lean_object* v_msgData_4540_, lean_object* v_severity_4541_, lean_object* v_isSilent_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_){
_start:
{
uint8_t v_severity_boxed_4548_; uint8_t v_isSilent_boxed_4549_; lean_object* v_res_4550_; 
v_severity_boxed_4548_ = lean_unbox(v_severity_4541_);
v_isSilent_boxed_4549_ = lean_unbox(v_isSilent_4542_);
v_res_4550_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(v_ref_4539_, v_msgData_4540_, v_severity_boxed_4548_, v_isSilent_boxed_4549_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
lean_dec(v___y_4546_);
lean_dec_ref(v___y_4545_);
lean_dec(v___y_4544_);
lean_dec_ref(v___y_4543_);
lean_dec(v_ref_4539_);
return v_res_4550_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(lean_object* v_msgData_4551_, uint8_t v_severity_4552_, uint8_t v_isSilent_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_){
_start:
{
lean_object* v_ref_4559_; lean_object* v___x_4560_; 
v_ref_4559_ = lean_ctor_get(v___y_4556_, 2);
v___x_4560_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(v_ref_4559_, v_msgData_4551_, v_severity_4552_, v_isSilent_4553_, v___y_4554_, v___y_4555_, v___y_4556_, v___y_4557_);
return v___x_4560_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0___boxed(lean_object* v_msgData_4561_, lean_object* v_severity_4562_, lean_object* v_isSilent_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_){
_start:
{
uint8_t v_severity_boxed_4569_; uint8_t v_isSilent_boxed_4570_; lean_object* v_res_4571_; 
v_severity_boxed_4569_ = lean_unbox(v_severity_4562_);
v_isSilent_boxed_4570_ = lean_unbox(v_isSilent_4563_);
v_res_4571_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(v_msgData_4561_, v_severity_boxed_4569_, v_isSilent_boxed_4570_, v___y_4564_, v___y_4565_, v___y_4566_, v___y_4567_);
lean_dec(v___y_4567_);
lean_dec_ref(v___y_4566_);
lean_dec(v___y_4565_);
lean_dec_ref(v___y_4564_);
return v_res_4571_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(lean_object* v_msgData_4572_, lean_object* v___y_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_, lean_object* v___y_4576_){
_start:
{
uint8_t v___x_4578_; uint8_t v___x_4579_; lean_object* v___x_4580_; 
v___x_4578_ = 0;
v___x_4579_ = 0;
v___x_4580_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(v_msgData_4572_, v___x_4578_, v___x_4579_, v___y_4573_, v___y_4574_, v___y_4575_, v___y_4576_);
return v___x_4580_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0___boxed(lean_object* v_msgData_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_){
_start:
{
lean_object* v_res_4587_; 
v_res_4587_ = l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(v_msgData_4581_, v___y_4582_, v___y_4583_, v___y_4584_, v___y_4585_);
lean_dec(v___y_4585_);
lean_dec_ref(v___y_4584_);
lean_dec(v___y_4583_);
lean_dec_ref(v___y_4582_);
return v_res_4587_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1(void){
_start:
{
lean_object* v___x_4589_; lean_object* v___x_4590_; 
v___x_4589_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0));
v___x_4590_ = l_Lean_stringToMessageData(v___x_4589_);
return v___x_4590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2(uint8_t v___x_4591_, lean_object* v___altIdx_4592_, lean_object* v_expAltType_4593_, lean_object* v___altFVars_4594_, lean_object* v_alt_4595_, lean_object* v___y_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_){
_start:
{
lean_object* v___x_4601_; 
lean_inc(v___y_4599_);
lean_inc_ref(v___y_4598_);
lean_inc(v___y_4597_);
lean_inc_ref(v___y_4596_);
lean_inc_ref(v_alt_4595_);
v___x_4601_ = lean_infer_type(v_alt_4595_, v___y_4596_, v___y_4597_, v___y_4598_, v___y_4599_);
if (lean_obj_tag(v___x_4601_) == 0)
{
lean_object* v_a_4602_; lean_object* v___x_4603_; 
v_a_4602_ = lean_ctor_get(v___x_4601_, 0);
lean_inc(v_a_4602_);
lean_dec_ref_known(v___x_4601_, 1);
v___x_4603_ = l_Lean_Meta_mkEq(v_expAltType_4593_, v_a_4602_, v___y_4596_, v___y_4597_, v___y_4598_, v___y_4599_);
if (lean_obj_tag(v___x_4603_) == 0)
{
lean_object* v_a_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; 
v_a_4604_ = lean_ctor_get(v___x_4603_, 0);
lean_inc(v_a_4604_);
lean_dec_ref_known(v___x_4603_, 1);
v___x_4605_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0);
v___x_4606_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_4604_, v___x_4605_, v___y_4596_, v___y_4597_, v___y_4598_, v___y_4599_);
if (lean_obj_tag(v___x_4606_) == 0)
{
lean_object* v_a_4607_; lean_object* v___y_4609_; lean_object* v___x_4619_; lean_object* v___x_4620_; 
v_a_4607_ = lean_ctor_get(v___x_4606_, 0);
lean_inc(v_a_4607_);
lean_dec_ref_known(v___x_4606_, 1);
v___x_4619_ = l_Lean_Expr_mvarId_x21(v_a_4607_);
v___x_4620_ = l_Lean_Meta_Split_simpMatchTarget(v___x_4619_, v___y_4596_, v___y_4597_, v___y_4598_, v___y_4599_);
if (lean_obj_tag(v___x_4620_) == 0)
{
lean_object* v_a_4621_; lean_object* v___x_4622_; 
v_a_4621_ = lean_ctor_get(v___x_4620_, 0);
lean_inc_n(v_a_4621_, 2);
lean_dec_ref_known(v___x_4620_, 1);
v___x_4622_ = l_Lean_MVarId_refl(v_a_4621_, v___x_4591_, v___y_4596_, v___y_4597_, v___y_4598_, v___y_4599_);
if (lean_obj_tag(v___x_4622_) == 0)
{
lean_dec(v_a_4621_);
v___y_4609_ = v___x_4622_;
goto v___jp_4608_;
}
else
{
lean_object* v_a_4623_; uint8_t v___y_4625_; uint8_t v___x_4638_; 
v_a_4623_ = lean_ctor_get(v___x_4622_, 0);
lean_inc(v_a_4623_);
v___x_4638_ = l_Lean_Exception_isInterrupt(v_a_4623_);
if (v___x_4638_ == 0)
{
uint8_t v___x_4639_; 
v___x_4639_ = l_Lean_Exception_isRuntime(v_a_4623_);
v___y_4625_ = v___x_4639_;
goto v___jp_4624_;
}
else
{
lean_dec(v_a_4623_);
v___y_4625_ = v___x_4638_;
goto v___jp_4624_;
}
v___jp_4624_:
{
if (v___y_4625_ == 0)
{
lean_object* v___x_4627_; uint8_t v_isShared_4628_; uint8_t v_isSharedCheck_4636_; 
v_isSharedCheck_4636_ = !lean_is_exclusive(v___x_4622_);
if (v_isSharedCheck_4636_ == 0)
{
lean_object* v_unused_4637_; 
v_unused_4637_ = lean_ctor_get(v___x_4622_, 0);
lean_dec(v_unused_4637_);
v___x_4627_ = v___x_4622_;
v_isShared_4628_ = v_isSharedCheck_4636_;
goto v_resetjp_4626_;
}
else
{
lean_dec(v___x_4622_);
v___x_4627_ = lean_box(0);
v_isShared_4628_ = v_isSharedCheck_4636_;
goto v_resetjp_4626_;
}
v_resetjp_4626_:
{
lean_object* v___x_4629_; lean_object* v___x_4631_; 
v___x_4629_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1, &l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1);
lean_inc(v_a_4621_);
if (v_isShared_4628_ == 0)
{
lean_ctor_set(v___x_4627_, 0, v_a_4621_);
v___x_4631_ = v___x_4627_;
goto v_reusejp_4630_;
}
else
{
lean_object* v_reuseFailAlloc_4635_; 
v_reuseFailAlloc_4635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4635_, 0, v_a_4621_);
v___x_4631_ = v_reuseFailAlloc_4635_;
goto v_reusejp_4630_;
}
v_reusejp_4630_:
{
lean_object* v___x_4632_; lean_object* v___x_4633_; 
v___x_4632_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4632_, 0, v___x_4629_);
lean_ctor_set(v___x_4632_, 1, v___x_4631_);
v___x_4633_ = l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(v___x_4632_, v___y_4596_, v___y_4597_, v___y_4598_, v___y_4599_);
if (lean_obj_tag(v___x_4633_) == 0)
{
lean_object* v___x_4634_; 
lean_dec_ref_known(v___x_4633_, 1);
v___x_4634_ = l_Lean_MVarId_admit(v_a_4621_, v___x_4591_, v___y_4596_, v___y_4597_, v___y_4598_, v___y_4599_);
v___y_4609_ = v___x_4634_;
goto v___jp_4608_;
}
else
{
lean_dec(v_a_4621_);
v___y_4609_ = v___x_4633_;
goto v___jp_4608_;
}
}
}
}
else
{
lean_dec(v_a_4621_);
v___y_4609_ = v___x_4622_;
goto v___jp_4608_;
}
}
}
}
else
{
lean_object* v_a_4640_; lean_object* v___x_4642_; uint8_t v_isShared_4643_; uint8_t v_isSharedCheck_4647_; 
lean_dec(v_a_4607_);
lean_dec_ref(v_alt_4595_);
v_a_4640_ = lean_ctor_get(v___x_4620_, 0);
v_isSharedCheck_4647_ = !lean_is_exclusive(v___x_4620_);
if (v_isSharedCheck_4647_ == 0)
{
v___x_4642_ = v___x_4620_;
v_isShared_4643_ = v_isSharedCheck_4647_;
goto v_resetjp_4641_;
}
else
{
lean_inc(v_a_4640_);
lean_dec(v___x_4620_);
v___x_4642_ = lean_box(0);
v_isShared_4643_ = v_isSharedCheck_4647_;
goto v_resetjp_4641_;
}
v_resetjp_4641_:
{
lean_object* v___x_4645_; 
if (v_isShared_4643_ == 0)
{
v___x_4645_ = v___x_4642_;
goto v_reusejp_4644_;
}
else
{
lean_object* v_reuseFailAlloc_4646_; 
v_reuseFailAlloc_4646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4646_, 0, v_a_4640_);
v___x_4645_ = v_reuseFailAlloc_4646_;
goto v_reusejp_4644_;
}
v_reusejp_4644_:
{
return v___x_4645_;
}
}
}
v___jp_4608_:
{
if (lean_obj_tag(v___y_4609_) == 0)
{
lean_object* v___x_4610_; 
lean_dec_ref_known(v___y_4609_, 1);
v___x_4610_ = l_Lean_Meta_mkEqMPR(v_a_4607_, v_alt_4595_, v___y_4596_, v___y_4597_, v___y_4598_, v___y_4599_);
return v___x_4610_;
}
else
{
lean_object* v_a_4611_; lean_object* v___x_4613_; uint8_t v_isShared_4614_; uint8_t v_isSharedCheck_4618_; 
lean_dec(v_a_4607_);
lean_dec_ref(v_alt_4595_);
v_a_4611_ = lean_ctor_get(v___y_4609_, 0);
v_isSharedCheck_4618_ = !lean_is_exclusive(v___y_4609_);
if (v_isSharedCheck_4618_ == 0)
{
v___x_4613_ = v___y_4609_;
v_isShared_4614_ = v_isSharedCheck_4618_;
goto v_resetjp_4612_;
}
else
{
lean_inc(v_a_4611_);
lean_dec(v___y_4609_);
v___x_4613_ = lean_box(0);
v_isShared_4614_ = v_isSharedCheck_4618_;
goto v_resetjp_4612_;
}
v_resetjp_4612_:
{
lean_object* v___x_4616_; 
if (v_isShared_4614_ == 0)
{
v___x_4616_ = v___x_4613_;
goto v_reusejp_4615_;
}
else
{
lean_object* v_reuseFailAlloc_4617_; 
v_reuseFailAlloc_4617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4617_, 0, v_a_4611_);
v___x_4616_ = v_reuseFailAlloc_4617_;
goto v_reusejp_4615_;
}
v_reusejp_4615_:
{
return v___x_4616_;
}
}
}
}
}
else
{
lean_dec_ref(v_alt_4595_);
return v___x_4606_;
}
}
else
{
lean_dec_ref(v_alt_4595_);
return v___x_4603_;
}
}
else
{
lean_dec_ref(v_alt_4595_);
lean_dec_ref(v_expAltType_4593_);
return v___x_4601_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed(lean_object* v___x_4648_, lean_object* v___altIdx_4649_, lean_object* v_expAltType_4650_, lean_object* v___altFVars_4651_, lean_object* v_alt_4652_, lean_object* v___y_4653_, lean_object* v___y_4654_, lean_object* v___y_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_){
_start:
{
uint8_t v___x_32649__boxed_4658_; lean_object* v_res_4659_; 
v___x_32649__boxed_4658_ = lean_unbox(v___x_4648_);
v_res_4659_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__2(v___x_32649__boxed_4658_, v___altIdx_4649_, v_expAltType_4650_, v___altFVars_4651_, v_alt_4652_, v___y_4653_, v___y_4654_, v___y_4655_, v___y_4656_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
lean_dec(v___y_4654_);
lean_dec_ref(v___y_4653_);
lean_dec_ref(v___altFVars_4651_);
lean_dec(v___altIdx_4649_);
return v_res_4659_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(lean_object* v___x_4660_, lean_object* v_e_4661_){
_start:
{
uint8_t v___x_4662_; lean_object* v_d_4664_; lean_object* v_b_4665_; 
v___x_4662_ = l_Lean_Expr_hasFVar(v_e_4661_);
if (v___x_4662_ == 0)
{
return v___x_4662_;
}
else
{
switch(lean_obj_tag(v_e_4661_))
{
case 7:
{
lean_object* v_binderType_4668_; lean_object* v_body_4669_; 
v_binderType_4668_ = lean_ctor_get(v_e_4661_, 1);
v_body_4669_ = lean_ctor_get(v_e_4661_, 2);
v_d_4664_ = v_binderType_4668_;
v_b_4665_ = v_body_4669_;
goto v___jp_4663_;
}
case 6:
{
lean_object* v_binderType_4670_; lean_object* v_body_4671_; 
v_binderType_4670_ = lean_ctor_get(v_e_4661_, 1);
v_body_4671_ = lean_ctor_get(v_e_4661_, 2);
v_d_4664_ = v_binderType_4670_;
v_b_4665_ = v_body_4671_;
goto v___jp_4663_;
}
case 10:
{
lean_object* v_expr_4672_; 
v_expr_4672_ = lean_ctor_get(v_e_4661_, 1);
v_e_4661_ = v_expr_4672_;
goto _start;
}
case 8:
{
lean_object* v_type_4674_; lean_object* v_value_4675_; lean_object* v_body_4676_; uint8_t v___x_4677_; 
v_type_4674_ = lean_ctor_get(v_e_4661_, 1);
v_value_4675_ = lean_ctor_get(v_e_4661_, 2);
v_body_4676_ = lean_ctor_get(v_e_4661_, 3);
v___x_4677_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4660_, v_type_4674_);
if (v___x_4677_ == 0)
{
uint8_t v___x_4678_; 
v___x_4678_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4660_, v_value_4675_);
if (v___x_4678_ == 0)
{
v_e_4661_ = v_body_4676_;
goto _start;
}
else
{
return v___x_4662_;
}
}
else
{
return v___x_4662_;
}
}
case 5:
{
lean_object* v_fn_4680_; lean_object* v_arg_4681_; uint8_t v___x_4682_; 
v_fn_4680_ = lean_ctor_get(v_e_4661_, 0);
v_arg_4681_ = lean_ctor_get(v_e_4661_, 1);
v___x_4682_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4660_, v_fn_4680_);
if (v___x_4682_ == 0)
{
v_e_4661_ = v_arg_4681_;
goto _start;
}
else
{
return v___x_4662_;
}
}
case 11:
{
lean_object* v_struct_4684_; 
v_struct_4684_ = lean_ctor_get(v_e_4661_, 2);
v_e_4661_ = v_struct_4684_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_4686_; lean_object* v___x_4687_; uint8_t v___x_4688_; 
v_fvarId_4686_ = lean_ctor_get(v_e_4661_, 0);
v___x_4687_ = l_Lean_Expr_fvarId_x21(v___x_4660_);
v___x_4688_ = l_Lean_instBEqFVarId_beq(v_fvarId_4686_, v___x_4687_);
lean_dec(v___x_4687_);
return v___x_4688_;
}
default: 
{
uint8_t v___x_4689_; 
v___x_4689_ = 0;
return v___x_4689_;
}
}
}
v___jp_4663_:
{
uint8_t v___x_4666_; 
v___x_4666_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4660_, v_d_4664_);
if (v___x_4666_ == 0)
{
v_e_4661_ = v_b_4665_;
goto _start;
}
else
{
return v___x_4662_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1___boxed(lean_object* v___x_4690_, lean_object* v_e_4691_){
_start:
{
uint8_t v_res_4692_; lean_object* v_r_4693_; 
v_res_4692_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4690_, v_e_4691_);
lean_dec_ref(v_e_4691_);
lean_dec_ref(v___x_4690_);
v_r_4693_ = lean_box(v_res_4692_);
return v_r_4693_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4695_; lean_object* v___x_4696_; 
v___x_4695_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0));
v___x_4696_ = l_Lean_stringToMessageData(v___x_4695_);
return v___x_4696_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_4698_; lean_object* v___x_4699_; 
v___x_4698_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2));
v___x_4699_ = l_Lean_stringToMessageData(v___x_4698_);
return v___x_4699_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_4701_; lean_object* v___x_4702_; 
v___x_4701_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4));
v___x_4702_ = l_Lean_stringToMessageData(v___x_4701_);
return v___x_4702_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(lean_object* v_a_4703_, lean_object* v_termAlt_4704_, lean_object* v_a_4705_, lean_object* v_b_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_){
_start:
{
lean_object* v_array_4712_; lean_object* v_start_4713_; lean_object* v_stop_4714_; lean_object* v___x_4716_; uint8_t v_isShared_4717_; uint8_t v_isSharedCheck_4742_; 
v_array_4712_ = lean_ctor_get(v_a_4705_, 0);
v_start_4713_ = lean_ctor_get(v_a_4705_, 1);
v_stop_4714_ = lean_ctor_get(v_a_4705_, 2);
v_isSharedCheck_4742_ = !lean_is_exclusive(v_a_4705_);
if (v_isSharedCheck_4742_ == 0)
{
v___x_4716_ = v_a_4705_;
v_isShared_4717_ = v_isSharedCheck_4742_;
goto v_resetjp_4715_;
}
else
{
lean_inc(v_stop_4714_);
lean_inc(v_start_4713_);
lean_inc(v_array_4712_);
lean_dec(v_a_4705_);
v___x_4716_ = lean_box(0);
v_isShared_4717_ = v_isSharedCheck_4742_;
goto v_resetjp_4715_;
}
v_resetjp_4715_:
{
uint8_t v___x_4718_; 
v___x_4718_ = lean_nat_dec_lt(v_start_4713_, v_stop_4714_);
if (v___x_4718_ == 0)
{
lean_object* v___x_4719_; 
lean_del_object(v___x_4716_);
lean_dec(v_stop_4714_);
lean_dec(v_start_4713_);
lean_dec_ref(v_array_4712_);
lean_dec_ref(v_termAlt_4704_);
lean_dec_ref(v_a_4703_);
v___x_4719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4719_, 0, v_b_4706_);
return v___x_4719_;
}
else
{
lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4724_; 
v___x_4720_ = lean_box(0);
v___x_4721_ = lean_unsigned_to_nat(1u);
v___x_4722_ = lean_nat_add(v_start_4713_, v___x_4721_);
lean_inc_ref(v_array_4712_);
if (v_isShared_4717_ == 0)
{
lean_ctor_set(v___x_4716_, 1, v___x_4722_);
v___x_4724_ = v___x_4716_;
goto v_reusejp_4723_;
}
else
{
lean_object* v_reuseFailAlloc_4741_; 
v_reuseFailAlloc_4741_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4741_, 0, v_array_4712_);
lean_ctor_set(v_reuseFailAlloc_4741_, 1, v___x_4722_);
lean_ctor_set(v_reuseFailAlloc_4741_, 2, v_stop_4714_);
v___x_4724_ = v_reuseFailAlloc_4741_;
goto v_reusejp_4723_;
}
v_reusejp_4723_:
{
lean_object* v___x_4725_; uint8_t v___x_4726_; 
v___x_4725_ = lean_array_fget(v_array_4712_, v_start_4713_);
lean_dec(v_start_4713_);
lean_dec_ref(v_array_4712_);
v___x_4726_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4725_, v_a_4703_);
if (v___x_4726_ == 0)
{
lean_dec(v___x_4725_);
v_a_4705_ = v___x_4724_;
v_b_4706_ = v___x_4720_;
goto _start;
}
else
{
lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; 
v___x_4728_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1);
lean_inc_ref(v_a_4703_);
v___x_4729_ = l_Lean_MessageData_ofExpr(v_a_4703_);
v___x_4730_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4730_, 0, v___x_4728_);
lean_ctor_set(v___x_4730_, 1, v___x_4729_);
v___x_4731_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3);
v___x_4732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4732_, 0, v___x_4730_);
lean_ctor_set(v___x_4732_, 1, v___x_4731_);
lean_inc_ref(v_termAlt_4704_);
v___x_4733_ = l_Lean_MessageData_ofExpr(v_termAlt_4704_);
v___x_4734_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4734_, 0, v___x_4732_);
lean_ctor_set(v___x_4734_, 1, v___x_4733_);
v___x_4735_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5);
v___x_4736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4736_, 0, v___x_4734_);
lean_ctor_set(v___x_4736_, 1, v___x_4735_);
v___x_4737_ = l_Lean_MessageData_ofExpr(v___x_4725_);
v___x_4738_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4738_, 0, v___x_4736_);
lean_ctor_set(v___x_4738_, 1, v___x_4737_);
v___x_4739_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_4738_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
if (lean_obj_tag(v___x_4739_) == 0)
{
lean_dec_ref_known(v___x_4739_, 1);
v_a_4705_ = v___x_4724_;
v_b_4706_ = v___x_4720_;
goto _start;
}
else
{
lean_dec_ref(v___x_4724_);
lean_dec_ref(v_termAlt_4704_);
lean_dec_ref(v_a_4703_);
return v___x_4739_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___boxed(lean_object* v_a_4743_, lean_object* v_termAlt_4744_, lean_object* v_a_4745_, lean_object* v_b_4746_, lean_object* v___y_4747_, lean_object* v___y_4748_, lean_object* v___y_4749_, lean_object* v___y_4750_, lean_object* v___y_4751_){
_start:
{
lean_object* v_res_4752_; 
v_res_4752_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_4743_, v_termAlt_4744_, v_a_4745_, v_b_4746_, v___y_4747_, v___y_4748_, v___y_4749_, v___y_4750_);
lean_dec(v___y_4750_);
lean_dec_ref(v___y_4749_);
lean_dec(v___y_4748_);
lean_dec_ref(v___y_4747_);
return v_res_4752_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(lean_object* v_nExtra_4753_, lean_object* v___x_4754_, uint8_t v___x_4755_, uint8_t v___x_4756_, uint8_t v___x_4757_, lean_object* v_xs_4758_, lean_object* v_termAltBody_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_, lean_object* v___y_4763_){
_start:
{
lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; 
v___x_4765_ = lean_array_get_size(v_xs_4758_);
v___x_4766_ = lean_nat_sub(v___x_4765_, v_nExtra_4753_);
v___x_4767_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_4766_);
lean_inc_ref(v_xs_4758_);
v___x_4768_ = l_Array_toSubarray___redArg(v_xs_4758_, v___x_4767_, v___x_4766_);
v___x_4769_ = l_Array_toSubarray___redArg(v_xs_4758_, v___x_4766_, v___x_4765_);
lean_inc(v___y_4763_);
lean_inc_ref(v___y_4762_);
lean_inc(v___y_4761_);
lean_inc_ref(v___y_4760_);
v___x_4770_ = lean_infer_type(v_termAltBody_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_);
if (lean_obj_tag(v___x_4770_) == 0)
{
lean_object* v_a_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; 
v_a_4771_ = lean_ctor_get(v___x_4770_, 0);
lean_inc_n(v_a_4771_, 2);
lean_dec_ref_known(v___x_4770_, 1);
v___x_4772_ = lean_box(0);
v___x_4773_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_4771_, v___x_4754_, v___x_4769_, v___x_4772_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_);
if (lean_obj_tag(v___x_4773_) == 0)
{
lean_object* v___x_4774_; lean_object* v___x_4775_; 
lean_dec_ref_known(v___x_4773_, 1);
v___x_4774_ = l_Subarray_copy___redArg(v___x_4768_);
v___x_4775_ = l_Lean_Meta_mkLambdaFVars(v___x_4774_, v_a_4771_, v___x_4755_, v___x_4756_, v___x_4755_, v___x_4756_, v___x_4757_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_);
return v___x_4775_;
}
else
{
lean_object* v_a_4776_; lean_object* v___x_4778_; uint8_t v_isShared_4779_; uint8_t v_isSharedCheck_4783_; 
lean_dec(v_a_4771_);
lean_dec_ref(v___x_4768_);
v_a_4776_ = lean_ctor_get(v___x_4773_, 0);
v_isSharedCheck_4783_ = !lean_is_exclusive(v___x_4773_);
if (v_isSharedCheck_4783_ == 0)
{
v___x_4778_ = v___x_4773_;
v_isShared_4779_ = v_isSharedCheck_4783_;
goto v_resetjp_4777_;
}
else
{
lean_inc(v_a_4776_);
lean_dec(v___x_4773_);
v___x_4778_ = lean_box(0);
v_isShared_4779_ = v_isSharedCheck_4783_;
goto v_resetjp_4777_;
}
v_resetjp_4777_:
{
lean_object* v___x_4781_; 
if (v_isShared_4779_ == 0)
{
v___x_4781_ = v___x_4778_;
goto v_reusejp_4780_;
}
else
{
lean_object* v_reuseFailAlloc_4782_; 
v_reuseFailAlloc_4782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4782_, 0, v_a_4776_);
v___x_4781_ = v_reuseFailAlloc_4782_;
goto v_reusejp_4780_;
}
v_reusejp_4780_:
{
return v___x_4781_;
}
}
}
}
else
{
lean_dec_ref(v___x_4769_);
lean_dec_ref(v___x_4768_);
lean_dec(v___x_4754_);
return v___x_4770_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed(lean_object* v_nExtra_4784_, lean_object* v___x_4785_, lean_object* v___x_4786_, lean_object* v___x_4787_, lean_object* v___x_4788_, lean_object* v_xs_4789_, lean_object* v_termAltBody_4790_, lean_object* v___y_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_){
_start:
{
uint8_t v___x_32939__boxed_4796_; uint8_t v___x_32940__boxed_4797_; uint8_t v___x_32941__boxed_4798_; lean_object* v_res_4799_; 
v___x_32939__boxed_4796_ = lean_unbox(v___x_4786_);
v___x_32940__boxed_4797_ = lean_unbox(v___x_4787_);
v___x_32941__boxed_4798_ = lean_unbox(v___x_4788_);
v_res_4799_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(v_nExtra_4784_, v___x_4785_, v___x_32939__boxed_4796_, v___x_32940__boxed_4797_, v___x_32941__boxed_4798_, v_xs_4789_, v_termAltBody_4790_, v___y_4791_, v___y_4792_, v___y_4793_, v___y_4794_);
lean_dec(v___y_4794_);
lean_dec_ref(v___y_4793_);
lean_dec(v___y_4792_);
lean_dec_ref(v___y_4791_);
lean_dec(v_nExtra_4784_);
return v_res_4799_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(lean_object* v_nExtra_4800_, size_t v_sz_4801_, size_t v_i_4802_, lean_object* v_bs_4803_, lean_object* v___y_4804_, lean_object* v___y_4805_, lean_object* v___y_4806_, lean_object* v___y_4807_){
_start:
{
uint8_t v___x_4809_; 
v___x_4809_ = lean_usize_dec_lt(v_i_4802_, v_sz_4801_);
if (v___x_4809_ == 0)
{
lean_object* v___x_4810_; lean_object* v___x_4811_; 
lean_dec(v_nExtra_4800_);
v___x_4810_ = l_unsafeCast___redArg(v_bs_4803_);
lean_dec_ref(v_bs_4803_);
v___x_4811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4811_, 0, v___x_4810_);
return v___x_4811_;
}
else
{
uint8_t v___x_4812_; uint8_t v___x_4813_; lean_object* v_v_4814_; lean_object* v___x_4815_; lean_object* v_bs_x27_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___f_4821_; lean_object* v___x_4822_; 
v___x_4812_ = 0;
v___x_4813_ = 1;
v_v_4814_ = lean_array_uget(v_bs_4803_, v_i_4802_);
v___x_4815_ = lean_unsigned_to_nat(0u);
v_bs_x27_4816_ = lean_array_uset(v_bs_4803_, v_i_4802_, v___x_4815_);
v___x_4817_ = l_unsafeCast___redArg(v_v_4814_);
lean_dec(v_v_4814_);
v___x_4818_ = lean_box(v___x_4812_);
v___x_4819_ = lean_box(v___x_4809_);
v___x_4820_ = lean_box(v___x_4813_);
lean_inc(v___x_4817_);
lean_inc(v_nExtra_4800_);
v___f_4821_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed), 12, 5);
lean_closure_set(v___f_4821_, 0, v_nExtra_4800_);
lean_closure_set(v___f_4821_, 1, v___x_4817_);
lean_closure_set(v___f_4821_, 2, v___x_4818_);
lean_closure_set(v___f_4821_, 3, v___x_4819_);
lean_closure_set(v___f_4821_, 4, v___x_4820_);
v___x_4822_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v___x_4817_, v___f_4821_, v___x_4812_, v___y_4804_, v___y_4805_, v___y_4806_, v___y_4807_);
if (lean_obj_tag(v___x_4822_) == 0)
{
lean_object* v_a_4823_; size_t v___x_4824_; size_t v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; 
v_a_4823_ = lean_ctor_get(v___x_4822_, 0);
lean_inc(v_a_4823_);
lean_dec_ref_known(v___x_4822_, 1);
v___x_4824_ = ((size_t)1ULL);
v___x_4825_ = lean_usize_add(v_i_4802_, v___x_4824_);
v___x_4826_ = l_unsafeCast___redArg(v_a_4823_);
lean_dec(v_a_4823_);
v___x_4827_ = lean_array_uset(v_bs_x27_4816_, v_i_4802_, v___x_4826_);
v_i_4802_ = v___x_4825_;
v_bs_4803_ = v___x_4827_;
goto _start;
}
else
{
lean_object* v_a_4829_; lean_object* v___x_4831_; uint8_t v_isShared_4832_; uint8_t v_isSharedCheck_4836_; 
lean_dec_ref(v_bs_x27_4816_);
lean_dec(v_nExtra_4800_);
v_a_4829_ = lean_ctor_get(v___x_4822_, 0);
v_isSharedCheck_4836_ = !lean_is_exclusive(v___x_4822_);
if (v_isSharedCheck_4836_ == 0)
{
v___x_4831_ = v___x_4822_;
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
else
{
lean_inc(v_a_4829_);
lean_dec(v___x_4822_);
v___x_4831_ = lean_box(0);
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
v_resetjp_4830_:
{
lean_object* v___x_4834_; 
if (v_isShared_4832_ == 0)
{
v___x_4834_ = v___x_4831_;
goto v_reusejp_4833_;
}
else
{
lean_object* v_reuseFailAlloc_4835_; 
v_reuseFailAlloc_4835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4835_, 0, v_a_4829_);
v___x_4834_ = v_reuseFailAlloc_4835_;
goto v_reusejp_4833_;
}
v_reusejp_4833_:
{
return v___x_4834_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___boxed(lean_object* v_nExtra_4837_, lean_object* v_sz_4838_, lean_object* v_i_4839_, lean_object* v_bs_4840_, lean_object* v___y_4841_, lean_object* v___y_4842_, lean_object* v___y_4843_, lean_object* v___y_4844_, lean_object* v___y_4845_){
_start:
{
size_t v_sz_boxed_4846_; size_t v_i_boxed_4847_; lean_object* v_res_4848_; 
v_sz_boxed_4846_ = lean_unbox_usize(v_sz_4838_);
lean_dec(v_sz_4838_);
v_i_boxed_4847_ = lean_unbox_usize(v_i_4839_);
lean_dec(v_i_4839_);
v_res_4848_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(v_nExtra_4837_, v_sz_boxed_4846_, v_i_boxed_4847_, v_bs_4840_, v___y_4841_, v___y_4842_, v___y_4843_, v___y_4844_);
lean_dec(v___y_4844_);
lean_dec_ref(v___y_4843_);
lean_dec(v___y_4842_);
lean_dec_ref(v___y_4841_);
return v_res_4848_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0(void){
_start:
{
lean_object* v___x_4849_; lean_object* v___x_4850_; 
v___x_4849_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2);
v___x_4850_ = l_Lean_Expr_sort___override(v___x_4849_);
return v___x_4850_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1(void){
_start:
{
lean_object* v___x_4851_; lean_object* v___x_4852_; 
v___x_4851_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2);
v___x_4852_ = l_Lean_Level_succ___override(v___x_4851_);
return v___x_4852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3(lean_object* v_nExtra_4853_, uint8_t v___x_4854_, uint8_t v___x_4855_, lean_object* v_alts_4856_, lean_object* v_toMatcherInfo_4857_, lean_object* v_matcherName_4858_, lean_object* v_params_4859_, lean_object* v_matcherLevels_4860_, lean_object* v_motiveArgs_4861_, lean_object* v_body_4862_, lean_object* v___y_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_){
_start:
{
lean_object* v___x_4868_; 
lean_inc(v_nExtra_4853_);
v___x_4868_ = l_Lean_Meta_arrowDomainsN(v_nExtra_4853_, v_body_4862_, v___y_4863_, v___y_4864_, v___y_4865_, v___y_4866_);
if (lean_obj_tag(v___x_4868_) == 0)
{
lean_object* v_a_4869_; lean_object* v___x_4870_; uint8_t v___x_4871_; lean_object* v___x_4872_; 
v_a_4869_ = lean_ctor_get(v___x_4868_, 0);
lean_inc(v_a_4869_);
lean_dec_ref_known(v___x_4868_, 1);
v___x_4870_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0, &l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0);
v___x_4871_ = 1;
lean_inc_ref(v_motiveArgs_4861_);
v___x_4872_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_4861_, v___x_4870_, v___x_4854_, v___x_4855_, v___x_4854_, v___x_4855_, v___x_4871_, v___y_4863_, v___y_4864_, v___y_4865_, v___y_4866_);
if (lean_obj_tag(v___x_4872_) == 0)
{
lean_object* v_a_4873_; size_t v_sz_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_31794__overap_4879_; lean_object* v___x_4880_; 
v_a_4873_ = lean_ctor_get(v___x_4872_, 0);
lean_inc(v_a_4873_);
lean_dec_ref_known(v___x_4872_, 1);
v_sz_4874_ = lean_array_size(v_alts_4856_);
v___x_4875_ = l_unsafeCast___redArg(v_alts_4856_);
v___x_4876_ = lean_box_usize(v_sz_4874_);
v___x_4877_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed__const__1));
v___x_4878_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___boxed), 9, 4);
lean_closure_set(v___x_4878_, 0, v_nExtra_4853_);
lean_closure_set(v___x_4878_, 1, v___x_4876_);
lean_closure_set(v___x_4878_, 2, v___x_4877_);
lean_closure_set(v___x_4878_, 3, v___x_4875_);
v___x_31794__overap_4879_ = l_unsafeCast___redArg(v___x_4878_);
lean_dec_ref(v___x_4878_);
lean_inc(v___y_4866_);
lean_inc_ref(v___y_4865_);
lean_inc(v___y_4864_);
lean_inc_ref(v___y_4863_);
v___x_4880_ = lean_apply_5(v___x_31794__overap_4879_, v___y_4863_, v___y_4864_, v___y_4865_, v___y_4866_, lean_box(0));
if (lean_obj_tag(v___x_4880_) == 0)
{
lean_object* v_a_4881_; lean_object* v_matcherLevels_4883_; lean_object* v___y_4884_; lean_object* v___y_4885_; lean_object* v_uElimPos_x3f_4890_; 
v_a_4881_ = lean_ctor_get(v___x_4880_, 0);
lean_inc(v_a_4881_);
lean_dec_ref_known(v___x_4880_, 1);
v_uElimPos_x3f_4890_ = lean_ctor_get(v_toMatcherInfo_4857_, 3);
if (lean_obj_tag(v_uElimPos_x3f_4890_) == 0)
{
v_matcherLevels_4883_ = v_matcherLevels_4860_;
v___y_4884_ = v___y_4865_;
v___y_4885_ = v___y_4866_;
goto v___jp_4882_;
}
else
{
lean_object* v_val_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; 
v_val_4891_ = lean_ctor_get(v_uElimPos_x3f_4890_, 0);
v___x_4892_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1, &l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1);
v___x_4893_ = lean_array_set(v_matcherLevels_4860_, v_val_4891_, v___x_4892_);
v_matcherLevels_4883_ = v___x_4893_;
v___y_4884_ = v___y_4865_;
v___y_4885_ = v___y_4866_;
goto v___jp_4882_;
}
v___jp_4882_:
{
lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; 
v___x_4886_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_4887_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_4887_, 0, v_toMatcherInfo_4857_);
lean_ctor_set(v___x_4887_, 1, v_matcherName_4858_);
lean_ctor_set(v___x_4887_, 2, v_matcherLevels_4883_);
lean_ctor_set(v___x_4887_, 3, v_params_4859_);
lean_ctor_set(v___x_4887_, 4, v_a_4873_);
lean_ctor_set(v___x_4887_, 5, v_motiveArgs_4861_);
lean_ctor_set(v___x_4887_, 6, v_a_4881_);
lean_ctor_set(v___x_4887_, 7, v___x_4886_);
v___x_4888_ = l_Lean_Meta_MatcherApp_toExpr(v___x_4887_);
v___x_4889_ = l_Lean_mkArrowN(v_a_4869_, v___x_4888_, v___y_4884_, v___y_4885_);
lean_dec(v_a_4869_);
return v___x_4889_;
}
}
else
{
lean_object* v_a_4894_; lean_object* v___x_4896_; uint8_t v_isShared_4897_; uint8_t v_isSharedCheck_4901_; 
lean_dec(v_a_4873_);
lean_dec(v_a_4869_);
lean_dec_ref(v_motiveArgs_4861_);
lean_dec_ref(v_matcherLevels_4860_);
lean_dec_ref(v_params_4859_);
lean_dec(v_matcherName_4858_);
lean_dec_ref(v_toMatcherInfo_4857_);
v_a_4894_ = lean_ctor_get(v___x_4880_, 0);
v_isSharedCheck_4901_ = !lean_is_exclusive(v___x_4880_);
if (v_isSharedCheck_4901_ == 0)
{
v___x_4896_ = v___x_4880_;
v_isShared_4897_ = v_isSharedCheck_4901_;
goto v_resetjp_4895_;
}
else
{
lean_inc(v_a_4894_);
lean_dec(v___x_4880_);
v___x_4896_ = lean_box(0);
v_isShared_4897_ = v_isSharedCheck_4901_;
goto v_resetjp_4895_;
}
v_resetjp_4895_:
{
lean_object* v___x_4899_; 
if (v_isShared_4897_ == 0)
{
v___x_4899_ = v___x_4896_;
goto v_reusejp_4898_;
}
else
{
lean_object* v_reuseFailAlloc_4900_; 
v_reuseFailAlloc_4900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4900_, 0, v_a_4894_);
v___x_4899_ = v_reuseFailAlloc_4900_;
goto v_reusejp_4898_;
}
v_reusejp_4898_:
{
return v___x_4899_;
}
}
}
}
else
{
lean_dec(v_a_4869_);
lean_dec_ref(v_motiveArgs_4861_);
lean_dec_ref(v_matcherLevels_4860_);
lean_dec_ref(v_params_4859_);
lean_dec(v_matcherName_4858_);
lean_dec_ref(v_toMatcherInfo_4857_);
lean_dec(v_nExtra_4853_);
return v___x_4872_;
}
}
else
{
lean_object* v_a_4902_; lean_object* v___x_4904_; uint8_t v_isShared_4905_; uint8_t v_isSharedCheck_4909_; 
lean_dec_ref(v_motiveArgs_4861_);
lean_dec_ref(v_matcherLevels_4860_);
lean_dec_ref(v_params_4859_);
lean_dec(v_matcherName_4858_);
lean_dec_ref(v_toMatcherInfo_4857_);
lean_dec(v_nExtra_4853_);
v_a_4902_ = lean_ctor_get(v___x_4868_, 0);
v_isSharedCheck_4909_ = !lean_is_exclusive(v___x_4868_);
if (v_isSharedCheck_4909_ == 0)
{
v___x_4904_ = v___x_4868_;
v_isShared_4905_ = v_isSharedCheck_4909_;
goto v_resetjp_4903_;
}
else
{
lean_inc(v_a_4902_);
lean_dec(v___x_4868_);
v___x_4904_ = lean_box(0);
v_isShared_4905_ = v_isSharedCheck_4909_;
goto v_resetjp_4903_;
}
v_resetjp_4903_:
{
lean_object* v___x_4907_; 
if (v_isShared_4905_ == 0)
{
v___x_4907_ = v___x_4904_;
goto v_reusejp_4906_;
}
else
{
lean_object* v_reuseFailAlloc_4908_; 
v_reuseFailAlloc_4908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4908_, 0, v_a_4902_);
v___x_4907_ = v_reuseFailAlloc_4908_;
goto v_reusejp_4906_;
}
v_reusejp_4906_:
{
return v___x_4907_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed(lean_object* v_nExtra_4910_, lean_object* v___x_4911_, lean_object* v___x_4912_, lean_object* v_alts_4913_, lean_object* v_toMatcherInfo_4914_, lean_object* v_matcherName_4915_, lean_object* v_params_4916_, lean_object* v_matcherLevels_4917_, lean_object* v_motiveArgs_4918_, lean_object* v_body_4919_, lean_object* v___y_4920_, lean_object* v___y_4921_, lean_object* v___y_4922_, lean_object* v___y_4923_, lean_object* v___y_4924_){
_start:
{
uint8_t v___x_33084__boxed_4925_; uint8_t v___x_33085__boxed_4926_; lean_object* v_res_4927_; 
v___x_33084__boxed_4925_ = lean_unbox(v___x_4911_);
v___x_33085__boxed_4926_ = lean_unbox(v___x_4912_);
v_res_4927_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__3(v_nExtra_4910_, v___x_33084__boxed_4925_, v___x_33085__boxed_4926_, v_alts_4913_, v_toMatcherInfo_4914_, v_matcherName_4915_, v_params_4916_, v_matcherLevels_4917_, v_motiveArgs_4918_, v_body_4919_, v___y_4920_, v___y_4921_, v___y_4922_, v___y_4923_);
lean_dec(v___y_4923_);
lean_dec_ref(v___y_4922_);
lean_dec(v___y_4921_);
lean_dec_ref(v___y_4920_);
lean_dec_ref(v_alts_4913_);
return v_res_4927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(lean_object* v_k_4928_, lean_object* v_ys_4929_, lean_object* v_args_4930_, lean_object* v___mask_4931_, lean_object* v___bodyType_4932_, lean_object* v___y_4933_, lean_object* v___y_4934_, lean_object* v___y_4935_, lean_object* v___y_4936_){
_start:
{
lean_object* v___x_4938_; 
lean_inc(v___y_4936_);
lean_inc_ref(v___y_4935_);
lean_inc(v___y_4934_);
lean_inc_ref(v___y_4933_);
v___x_4938_ = lean_apply_7(v_k_4928_, v_ys_4929_, v_args_4930_, v___y_4933_, v___y_4934_, v___y_4935_, v___y_4936_, lean_box(0));
return v___x_4938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed(lean_object* v_k_4939_, lean_object* v_ys_4940_, lean_object* v_args_4941_, lean_object* v___mask_4942_, lean_object* v___bodyType_4943_, lean_object* v___y_4944_, lean_object* v___y_4945_, lean_object* v___y_4946_, lean_object* v___y_4947_, lean_object* v___y_4948_){
_start:
{
lean_object* v_res_4949_; 
v_res_4949_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(v_k_4939_, v_ys_4940_, v_args_4941_, v___mask_4942_, v___bodyType_4943_, v___y_4944_, v___y_4945_, v___y_4946_, v___y_4947_);
lean_dec(v___y_4947_);
lean_dec_ref(v___y_4946_);
lean_dec(v___y_4945_);
lean_dec_ref(v___y_4944_);
lean_dec_ref(v___bodyType_4943_);
lean_dec_ref(v___mask_4942_);
return v_res_4949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(lean_object* v_origAltType_4950_, lean_object* v_altInfo_4951_, lean_object* v_k_4952_, lean_object* v___y_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_){
_start:
{
lean_object* v___f_4958_; lean_object* v___x_4959_; 
v___f_4958_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_4958_, 0, v_k_4952_);
v___x_4959_ = l_Lean_Meta_Match_forallAltVarsTelescope___redArg(v_origAltType_4950_, v_altInfo_4951_, v___f_4958_, v___y_4953_, v___y_4954_, v___y_4955_, v___y_4956_);
if (lean_obj_tag(v___x_4959_) == 0)
{
lean_object* v_a_4960_; lean_object* v___x_4962_; uint8_t v_isShared_4963_; uint8_t v_isSharedCheck_4967_; 
v_a_4960_ = lean_ctor_get(v___x_4959_, 0);
v_isSharedCheck_4967_ = !lean_is_exclusive(v___x_4959_);
if (v_isSharedCheck_4967_ == 0)
{
v___x_4962_ = v___x_4959_;
v_isShared_4963_ = v_isSharedCheck_4967_;
goto v_resetjp_4961_;
}
else
{
lean_inc(v_a_4960_);
lean_dec(v___x_4959_);
v___x_4962_ = lean_box(0);
v_isShared_4963_ = v_isSharedCheck_4967_;
goto v_resetjp_4961_;
}
v_resetjp_4961_:
{
lean_object* v___x_4965_; 
if (v_isShared_4963_ == 0)
{
v___x_4965_ = v___x_4962_;
goto v_reusejp_4964_;
}
else
{
lean_object* v_reuseFailAlloc_4966_; 
v_reuseFailAlloc_4966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4966_, 0, v_a_4960_);
v___x_4965_ = v_reuseFailAlloc_4966_;
goto v_reusejp_4964_;
}
v_reusejp_4964_:
{
return v___x_4965_;
}
}
}
else
{
lean_object* v_a_4968_; lean_object* v___x_4970_; uint8_t v_isShared_4971_; uint8_t v_isSharedCheck_4975_; 
v_a_4968_ = lean_ctor_get(v___x_4959_, 0);
v_isSharedCheck_4975_ = !lean_is_exclusive(v___x_4959_);
if (v_isSharedCheck_4975_ == 0)
{
v___x_4970_ = v___x_4959_;
v_isShared_4971_ = v_isSharedCheck_4975_;
goto v_resetjp_4969_;
}
else
{
lean_inc(v_a_4968_);
lean_dec(v___x_4959_);
v___x_4970_ = lean_box(0);
v_isShared_4971_ = v_isSharedCheck_4975_;
goto v_resetjp_4969_;
}
v_resetjp_4969_:
{
lean_object* v___x_4973_; 
if (v_isShared_4971_ == 0)
{
v___x_4973_ = v___x_4970_;
goto v_reusejp_4972_;
}
else
{
lean_object* v_reuseFailAlloc_4974_; 
v_reuseFailAlloc_4974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4974_, 0, v_a_4968_);
v___x_4973_ = v_reuseFailAlloc_4974_;
goto v_reusejp_4972_;
}
v_reusejp_4972_:
{
return v___x_4973_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___boxed(lean_object* v_origAltType_4976_, lean_object* v_altInfo_4977_, lean_object* v_k_4978_, lean_object* v___y_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_, lean_object* v___y_4982_, lean_object* v___y_4983_){
_start:
{
lean_object* v_res_4984_; 
v_res_4984_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v_origAltType_4976_, v_altInfo_4977_, v_k_4978_, v___y_4979_, v___y_4980_, v___y_4981_, v___y_4982_);
lean_dec(v___y_4982_);
lean_dec_ref(v___y_4981_);
lean_dec(v___y_4980_);
lean_dec_ref(v___y_4979_);
return v_res_4984_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(lean_object* v___x_4985_, lean_object* v___x_4986_, lean_object* v___f_4987_, lean_object* v_fst_4988_, lean_object* v___x_4989_, lean_object* v___x_4990_, lean_object* v___x_4991_, lean_object* v___x_4992_, lean_object* v___x_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_, lean_object* v___y_4996_, lean_object* v___y_4997_){
_start:
{
lean_object* v___x_4999_; 
v___x_4999_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v___x_4985_, v___x_4986_, v___f_4987_, v___y_4994_, v___y_4995_, v___y_4996_, v___y_4997_);
if (lean_obj_tag(v___x_4999_) == 0)
{
lean_object* v_a_5000_; lean_object* v___x_5002_; uint8_t v_isShared_5003_; uint8_t v_isSharedCheck_5014_; 
v_a_5000_ = lean_ctor_get(v___x_4999_, 0);
v_isSharedCheck_5014_ = !lean_is_exclusive(v___x_4999_);
if (v_isSharedCheck_5014_ == 0)
{
v___x_5002_ = v___x_4999_;
v_isShared_5003_ = v_isSharedCheck_5014_;
goto v_resetjp_5001_;
}
else
{
lean_inc(v_a_5000_);
lean_dec(v___x_4999_);
v___x_5002_ = lean_box(0);
v_isShared_5003_ = v_isSharedCheck_5014_;
goto v_resetjp_5001_;
}
v_resetjp_5001_:
{
lean_object* v___x_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5012_; 
v___x_5004_ = lean_array_push(v_fst_4988_, v_a_5000_);
v___x_5005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5005_, 0, v___x_4989_);
lean_ctor_set(v___x_5005_, 1, v___x_4990_);
v___x_5006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5006_, 0, v___x_4991_);
lean_ctor_set(v___x_5006_, 1, v___x_5005_);
v___x_5007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5007_, 0, v___x_4992_);
lean_ctor_set(v___x_5007_, 1, v___x_5006_);
v___x_5008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5008_, 0, v___x_4993_);
lean_ctor_set(v___x_5008_, 1, v___x_5007_);
v___x_5009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5009_, 0, v___x_5004_);
lean_ctor_set(v___x_5009_, 1, v___x_5008_);
v___x_5010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5010_, 0, v___x_5009_);
if (v_isShared_5003_ == 0)
{
lean_ctor_set(v___x_5002_, 0, v___x_5010_);
v___x_5012_ = v___x_5002_;
goto v_reusejp_5011_;
}
else
{
lean_object* v_reuseFailAlloc_5013_; 
v_reuseFailAlloc_5013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5013_, 0, v___x_5010_);
v___x_5012_ = v_reuseFailAlloc_5013_;
goto v_reusejp_5011_;
}
v_reusejp_5011_:
{
return v___x_5012_;
}
}
}
else
{
lean_object* v_a_5015_; lean_object* v___x_5017_; uint8_t v_isShared_5018_; uint8_t v_isSharedCheck_5022_; 
lean_dec_ref(v___x_4993_);
lean_dec_ref(v___x_4992_);
lean_dec_ref(v___x_4991_);
lean_dec_ref(v___x_4990_);
lean_dec_ref(v___x_4989_);
lean_dec(v_fst_4988_);
v_a_5015_ = lean_ctor_get(v___x_4999_, 0);
v_isSharedCheck_5022_ = !lean_is_exclusive(v___x_4999_);
if (v_isSharedCheck_5022_ == 0)
{
v___x_5017_ = v___x_4999_;
v_isShared_5018_ = v_isSharedCheck_5022_;
goto v_resetjp_5016_;
}
else
{
lean_inc(v_a_5015_);
lean_dec(v___x_4999_);
v___x_5017_ = lean_box(0);
v_isShared_5018_ = v_isSharedCheck_5022_;
goto v_resetjp_5016_;
}
v_resetjp_5016_:
{
lean_object* v___x_5020_; 
if (v_isShared_5018_ == 0)
{
v___x_5020_ = v___x_5017_;
goto v_reusejp_5019_;
}
else
{
lean_object* v_reuseFailAlloc_5021_; 
v_reuseFailAlloc_5021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5021_, 0, v_a_5015_);
v___x_5020_ = v_reuseFailAlloc_5021_;
goto v_reusejp_5019_;
}
v_reusejp_5019_:
{
return v___x_5020_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed(lean_object* v___x_5023_, lean_object* v___x_5024_, lean_object* v___f_5025_, lean_object* v_fst_5026_, lean_object* v___x_5027_, lean_object* v___x_5028_, lean_object* v___x_5029_, lean_object* v___x_5030_, lean_object* v___x_5031_, lean_object* v___y_5032_, lean_object* v___y_5033_, lean_object* v___y_5034_, lean_object* v___y_5035_, lean_object* v___y_5036_){
_start:
{
lean_object* v_res_5037_; 
v_res_5037_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(v___x_5023_, v___x_5024_, v___f_5025_, v_fst_5026_, v___x_5027_, v___x_5028_, v___x_5029_, v___x_5030_, v___x_5031_, v___y_5032_, v___y_5033_, v___y_5034_, v___y_5035_);
lean_dec(v___y_5035_);
lean_dec_ref(v___y_5034_);
lean_dec(v___y_5033_);
lean_dec_ref(v___y_5032_);
return v_res_5037_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(lean_object* v_args_5038_, lean_object* v_ys_5039_, lean_object* v_ys2_5040_, lean_object* v_ys3_5041_, lean_object* v_onAlt_5042_, lean_object* v_a_5043_, uint8_t v___x_5044_, uint8_t v_useSplitter_5045_, lean_object* v___x_5046_, lean_object* v_ys4_5047_, lean_object* v_altType_5048_, lean_object* v___y_5049_, lean_object* v___y_5050_, lean_object* v___y_5051_, lean_object* v___y_5052_){
_start:
{
lean_object* v___y_5055_; lean_object* v___x_5065_; lean_object* v___x_5066_; 
lean_inc_ref(v_args_5038_);
v___x_5065_ = l_Array_append___redArg(v_args_5038_, v_ys3_5041_);
v___x_5066_ = l_Lean_Meta_instantiateLambda(v___x_5046_, v___x_5065_, v___y_5049_, v___y_5050_, v___y_5051_, v___y_5052_);
lean_dec_ref(v___x_5065_);
if (lean_obj_tag(v___x_5066_) == 0)
{
v___y_5055_ = v___x_5066_;
goto v___jp_5054_;
}
else
{
lean_object* v_a_5067_; uint8_t v___y_5069_; uint8_t v___x_5072_; 
v_a_5067_ = lean_ctor_get(v___x_5066_, 0);
lean_inc(v_a_5067_);
v___x_5072_ = l_Lean_Exception_isInterrupt(v_a_5067_);
if (v___x_5072_ == 0)
{
uint8_t v___x_5073_; 
v___x_5073_ = l_Lean_Exception_isRuntime(v_a_5067_);
v___y_5069_ = v___x_5073_;
goto v___jp_5068_;
}
else
{
lean_dec(v_a_5067_);
v___y_5069_ = v___x_5072_;
goto v___jp_5068_;
}
v___jp_5068_:
{
if (v___y_5069_ == 0)
{
lean_object* v___x_5070_; lean_object* v___x_5071_; 
lean_dec_ref_known(v___x_5066_, 1);
v___x_5070_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2);
v___x_5071_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_5070_, v___y_5049_, v___y_5050_, v___y_5051_, v___y_5052_);
v___y_5055_ = v___x_5071_;
goto v___jp_5054_;
}
else
{
v___y_5055_ = v___x_5066_;
goto v___jp_5054_;
}
}
}
v___jp_5054_:
{
if (lean_obj_tag(v___y_5055_) == 0)
{
lean_object* v_a_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; 
v_a_5056_ = lean_ctor_get(v___y_5055_, 0);
lean_inc(v_a_5056_);
lean_dec_ref_known(v___y_5055_, 1);
lean_inc_ref(v_ys4_5047_);
lean_inc_ref(v_ys3_5041_);
lean_inc_ref(v_ys2_5040_);
lean_inc_ref(v_ys_5039_);
v___x_5057_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5057_, 0, v_args_5038_);
lean_ctor_set(v___x_5057_, 1, v_ys_5039_);
lean_ctor_set(v___x_5057_, 2, v_ys2_5040_);
lean_ctor_set(v___x_5057_, 3, v_ys3_5041_);
lean_ctor_set(v___x_5057_, 4, v_ys4_5047_);
lean_inc(v___y_5052_);
lean_inc_ref(v___y_5051_);
lean_inc(v___y_5050_);
lean_inc_ref(v___y_5049_);
v___x_5058_ = lean_apply_9(v_onAlt_5042_, v_a_5043_, v_altType_5048_, v___x_5057_, v_a_5056_, v___y_5049_, v___y_5050_, v___y_5051_, v___y_5052_, lean_box(0));
if (lean_obj_tag(v___x_5058_) == 0)
{
lean_object* v_a_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; uint8_t v___x_5063_; lean_object* v___x_5064_; 
v_a_5059_ = lean_ctor_get(v___x_5058_, 0);
lean_inc(v_a_5059_);
lean_dec_ref_known(v___x_5058_, 1);
v___x_5060_ = l_Array_append___redArg(v_ys_5039_, v_ys2_5040_);
lean_dec_ref(v_ys2_5040_);
v___x_5061_ = l_Array_append___redArg(v___x_5060_, v_ys3_5041_);
lean_dec_ref(v_ys3_5041_);
v___x_5062_ = l_Array_append___redArg(v___x_5061_, v_ys4_5047_);
lean_dec_ref(v_ys4_5047_);
v___x_5063_ = 1;
v___x_5064_ = l_Lean_Meta_mkLambdaFVars(v___x_5062_, v_a_5059_, v___x_5044_, v_useSplitter_5045_, v___x_5044_, v_useSplitter_5045_, v___x_5063_, v___y_5049_, v___y_5050_, v___y_5051_, v___y_5052_);
return v___x_5064_;
}
else
{
lean_dec_ref(v_ys4_5047_);
lean_dec_ref(v_ys3_5041_);
lean_dec_ref(v_ys2_5040_);
lean_dec_ref(v_ys_5039_);
return v___x_5058_;
}
}
else
{
lean_dec_ref(v_altType_5048_);
lean_dec_ref(v_ys4_5047_);
lean_dec(v_a_5043_);
lean_dec_ref(v_onAlt_5042_);
lean_dec_ref(v_ys3_5041_);
lean_dec_ref(v_ys2_5040_);
lean_dec_ref(v_ys_5039_);
lean_dec_ref(v_args_5038_);
return v___y_5055_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed(lean_object* v_args_5074_, lean_object* v_ys_5075_, lean_object* v_ys2_5076_, lean_object* v_ys3_5077_, lean_object* v_onAlt_5078_, lean_object* v_a_5079_, lean_object* v___x_5080_, lean_object* v_useSplitter_5081_, lean_object* v___x_5082_, lean_object* v_ys4_5083_, lean_object* v_altType_5084_, lean_object* v___y_5085_, lean_object* v___y_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_, lean_object* v___y_5089_){
_start:
{
uint8_t v___x_33347__boxed_5090_; uint8_t v_useSplitter_boxed_5091_; lean_object* v_res_5092_; 
v___x_33347__boxed_5090_ = lean_unbox(v___x_5080_);
v_useSplitter_boxed_5091_ = lean_unbox(v_useSplitter_5081_);
v_res_5092_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(v_args_5074_, v_ys_5075_, v_ys2_5076_, v_ys3_5077_, v_onAlt_5078_, v_a_5079_, v___x_33347__boxed_5090_, v_useSplitter_boxed_5091_, v___x_5082_, v_ys4_5083_, v_altType_5084_, v___y_5085_, v___y_5086_, v___y_5087_, v___y_5088_);
lean_dec(v___y_5088_);
lean_dec_ref(v___y_5087_);
lean_dec(v___y_5086_);
lean_dec_ref(v___y_5085_);
return v_res_5092_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(lean_object* v_args_5093_, lean_object* v_ys_5094_, lean_object* v_ys2_5095_, lean_object* v_onAlt_5096_, lean_object* v_a_5097_, uint8_t v___x_5098_, uint8_t v_useSplitter_5099_, lean_object* v___x_5100_, lean_object* v_extraEqualities_5101_, lean_object* v_ys3_5102_, lean_object* v_altType_5103_, lean_object* v___y_5104_, lean_object* v___y_5105_, lean_object* v___y_5106_, lean_object* v___y_5107_){
_start:
{
lean_object* v___x_5109_; lean_object* v___x_5110_; lean_object* v___f_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; 
v___x_5109_ = lean_box(v___x_5098_);
v___x_5110_ = lean_box(v_useSplitter_5099_);
v___f_5111_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed), 16, 9);
lean_closure_set(v___f_5111_, 0, v_args_5093_);
lean_closure_set(v___f_5111_, 1, v_ys_5094_);
lean_closure_set(v___f_5111_, 2, v_ys2_5095_);
lean_closure_set(v___f_5111_, 3, v_ys3_5102_);
lean_closure_set(v___f_5111_, 4, v_onAlt_5096_);
lean_closure_set(v___f_5111_, 5, v_a_5097_);
lean_closure_set(v___f_5111_, 6, v___x_5109_);
lean_closure_set(v___f_5111_, 7, v___x_5110_);
lean_closure_set(v___f_5111_, 8, v___x_5100_);
v___x_5112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5112_, 0, v_extraEqualities_5101_);
v___x_5113_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_altType_5103_, v___x_5112_, v___f_5111_, v___x_5098_, v___x_5098_, v___y_5104_, v___y_5105_, v___y_5106_, v___y_5107_);
return v___x_5113_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed(lean_object* v_args_5114_, lean_object* v_ys_5115_, lean_object* v_ys2_5116_, lean_object* v_onAlt_5117_, lean_object* v_a_5118_, lean_object* v___x_5119_, lean_object* v_useSplitter_5120_, lean_object* v___x_5121_, lean_object* v_extraEqualities_5122_, lean_object* v_ys3_5123_, lean_object* v_altType_5124_, lean_object* v___y_5125_, lean_object* v___y_5126_, lean_object* v___y_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_){
_start:
{
uint8_t v___x_33412__boxed_5130_; uint8_t v_useSplitter_boxed_5131_; lean_object* v_res_5132_; 
v___x_33412__boxed_5130_ = lean_unbox(v___x_5119_);
v_useSplitter_boxed_5131_ = lean_unbox(v_useSplitter_5120_);
v_res_5132_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(v_args_5114_, v_ys_5115_, v_ys2_5116_, v_onAlt_5117_, v_a_5118_, v___x_33412__boxed_5130_, v_useSplitter_boxed_5131_, v___x_5121_, v_extraEqualities_5122_, v_ys3_5123_, v_altType_5124_, v___y_5125_, v___y_5126_, v___y_5127_, v___y_5128_);
lean_dec(v___y_5128_);
lean_dec_ref(v___y_5127_);
lean_dec(v___y_5126_);
lean_dec_ref(v___y_5125_);
return v_res_5132_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(lean_object* v_args_5133_, lean_object* v_ys_5134_, lean_object* v_onAlt_5135_, lean_object* v_a_5136_, uint8_t v___x_5137_, uint8_t v_useSplitter_5138_, lean_object* v___x_5139_, lean_object* v_extraEqualities_5140_, lean_object* v_numDiscrEqs_5141_, lean_object* v_ys2_5142_, lean_object* v_altType_5143_, lean_object* v___y_5144_, lean_object* v___y_5145_, lean_object* v___y_5146_, lean_object* v___y_5147_){
_start:
{
lean_object* v___x_5149_; lean_object* v___x_5150_; lean_object* v___f_5151_; lean_object* v___x_5152_; lean_object* v___x_5153_; 
v___x_5149_ = lean_box(v___x_5137_);
v___x_5150_ = lean_box(v_useSplitter_5138_);
v___f_5151_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed), 16, 9);
lean_closure_set(v___f_5151_, 0, v_args_5133_);
lean_closure_set(v___f_5151_, 1, v_ys_5134_);
lean_closure_set(v___f_5151_, 2, v_ys2_5142_);
lean_closure_set(v___f_5151_, 3, v_onAlt_5135_);
lean_closure_set(v___f_5151_, 4, v_a_5136_);
lean_closure_set(v___f_5151_, 5, v___x_5149_);
lean_closure_set(v___f_5151_, 6, v___x_5150_);
lean_closure_set(v___f_5151_, 7, v___x_5139_);
lean_closure_set(v___f_5151_, 8, v_extraEqualities_5140_);
v___x_5152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5152_, 0, v_numDiscrEqs_5141_);
v___x_5153_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_altType_5143_, v___x_5152_, v___f_5151_, v___x_5137_, v___x_5137_, v___y_5144_, v___y_5145_, v___y_5146_, v___y_5147_);
return v___x_5153_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed(lean_object* v_args_5154_, lean_object* v_ys_5155_, lean_object* v_onAlt_5156_, lean_object* v_a_5157_, lean_object* v___x_5158_, lean_object* v_useSplitter_5159_, lean_object* v___x_5160_, lean_object* v_extraEqualities_5161_, lean_object* v_numDiscrEqs_5162_, lean_object* v_ys2_5163_, lean_object* v_altType_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_, lean_object* v___y_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_){
_start:
{
uint8_t v___x_33443__boxed_5170_; uint8_t v_useSplitter_boxed_5171_; lean_object* v_res_5172_; 
v___x_33443__boxed_5170_ = lean_unbox(v___x_5158_);
v_useSplitter_boxed_5171_ = lean_unbox(v_useSplitter_5159_);
v_res_5172_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(v_args_5154_, v_ys_5155_, v_onAlt_5156_, v_a_5157_, v___x_33443__boxed_5170_, v_useSplitter_boxed_5171_, v___x_5160_, v_extraEqualities_5161_, v_numDiscrEqs_5162_, v_ys2_5163_, v_altType_5164_, v___y_5165_, v___y_5166_, v___y_5167_, v___y_5168_);
lean_dec(v___y_5168_);
lean_dec_ref(v___y_5167_);
lean_dec(v___y_5166_);
lean_dec_ref(v___y_5165_);
return v_res_5172_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0(void){
_start:
{
lean_object* v___x_5173_; 
v___x_5173_ = l_instMonadEIO___redArg();
return v___x_5173_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(lean_object* v_msg_5178_, lean_object* v___y_5179_, lean_object* v___y_5180_, lean_object* v___y_5181_, lean_object* v___y_5182_){
_start:
{
lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v_toApplicative_5186_; lean_object* v___x_5188_; uint8_t v_isShared_5189_; uint8_t v_isSharedCheck_5247_; 
v___x_5184_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0);
v___x_5185_ = l_StateRefT_x27_instMonad___redArg(v___x_5184_);
v_toApplicative_5186_ = lean_ctor_get(v___x_5185_, 0);
v_isSharedCheck_5247_ = !lean_is_exclusive(v___x_5185_);
if (v_isSharedCheck_5247_ == 0)
{
lean_object* v_unused_5248_; 
v_unused_5248_ = lean_ctor_get(v___x_5185_, 1);
lean_dec(v_unused_5248_);
v___x_5188_ = v___x_5185_;
v_isShared_5189_ = v_isSharedCheck_5247_;
goto v_resetjp_5187_;
}
else
{
lean_inc(v_toApplicative_5186_);
lean_dec(v___x_5185_);
v___x_5188_ = lean_box(0);
v_isShared_5189_ = v_isSharedCheck_5247_;
goto v_resetjp_5187_;
}
v_resetjp_5187_:
{
lean_object* v_toFunctor_5190_; lean_object* v_toSeq_5191_; lean_object* v_toSeqLeft_5192_; lean_object* v_toSeqRight_5193_; lean_object* v___x_5195_; uint8_t v_isShared_5196_; uint8_t v_isSharedCheck_5245_; 
v_toFunctor_5190_ = lean_ctor_get(v_toApplicative_5186_, 0);
v_toSeq_5191_ = lean_ctor_get(v_toApplicative_5186_, 2);
v_toSeqLeft_5192_ = lean_ctor_get(v_toApplicative_5186_, 3);
v_toSeqRight_5193_ = lean_ctor_get(v_toApplicative_5186_, 4);
v_isSharedCheck_5245_ = !lean_is_exclusive(v_toApplicative_5186_);
if (v_isSharedCheck_5245_ == 0)
{
lean_object* v_unused_5246_; 
v_unused_5246_ = lean_ctor_get(v_toApplicative_5186_, 1);
lean_dec(v_unused_5246_);
v___x_5195_ = v_toApplicative_5186_;
v_isShared_5196_ = v_isSharedCheck_5245_;
goto v_resetjp_5194_;
}
else
{
lean_inc(v_toSeqRight_5193_);
lean_inc(v_toSeqLeft_5192_);
lean_inc(v_toSeq_5191_);
lean_inc(v_toFunctor_5190_);
lean_dec(v_toApplicative_5186_);
v___x_5195_ = lean_box(0);
v_isShared_5196_ = v_isSharedCheck_5245_;
goto v_resetjp_5194_;
}
v_resetjp_5194_:
{
lean_object* v___f_5197_; lean_object* v___f_5198_; lean_object* v___f_5199_; lean_object* v___f_5200_; lean_object* v___x_5201_; lean_object* v___f_5202_; lean_object* v___f_5203_; lean_object* v___f_5204_; lean_object* v___x_5206_; 
v___f_5197_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1));
v___f_5198_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2));
lean_inc_ref(v_toFunctor_5190_);
v___f_5199_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5199_, 0, v_toFunctor_5190_);
v___f_5200_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5200_, 0, v_toFunctor_5190_);
v___x_5201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5201_, 0, v___f_5199_);
lean_ctor_set(v___x_5201_, 1, v___f_5200_);
v___f_5202_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5202_, 0, v_toSeqRight_5193_);
v___f_5203_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5203_, 0, v_toSeqLeft_5192_);
v___f_5204_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5204_, 0, v_toSeq_5191_);
if (v_isShared_5196_ == 0)
{
lean_ctor_set(v___x_5195_, 4, v___f_5202_);
lean_ctor_set(v___x_5195_, 3, v___f_5203_);
lean_ctor_set(v___x_5195_, 2, v___f_5204_);
lean_ctor_set(v___x_5195_, 1, v___f_5197_);
lean_ctor_set(v___x_5195_, 0, v___x_5201_);
v___x_5206_ = v___x_5195_;
goto v_reusejp_5205_;
}
else
{
lean_object* v_reuseFailAlloc_5244_; 
v_reuseFailAlloc_5244_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5244_, 0, v___x_5201_);
lean_ctor_set(v_reuseFailAlloc_5244_, 1, v___f_5197_);
lean_ctor_set(v_reuseFailAlloc_5244_, 2, v___f_5204_);
lean_ctor_set(v_reuseFailAlloc_5244_, 3, v___f_5203_);
lean_ctor_set(v_reuseFailAlloc_5244_, 4, v___f_5202_);
v___x_5206_ = v_reuseFailAlloc_5244_;
goto v_reusejp_5205_;
}
v_reusejp_5205_:
{
lean_object* v___x_5208_; 
if (v_isShared_5189_ == 0)
{
lean_ctor_set(v___x_5188_, 1, v___f_5198_);
lean_ctor_set(v___x_5188_, 0, v___x_5206_);
v___x_5208_ = v___x_5188_;
goto v_reusejp_5207_;
}
else
{
lean_object* v_reuseFailAlloc_5243_; 
v_reuseFailAlloc_5243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5243_, 0, v___x_5206_);
lean_ctor_set(v_reuseFailAlloc_5243_, 1, v___f_5198_);
v___x_5208_ = v_reuseFailAlloc_5243_;
goto v_reusejp_5207_;
}
v_reusejp_5207_:
{
lean_object* v___x_5209_; lean_object* v_toApplicative_5210_; lean_object* v___x_5212_; uint8_t v_isShared_5213_; uint8_t v_isSharedCheck_5241_; 
v___x_5209_ = l_StateRefT_x27_instMonad___redArg(v___x_5208_);
v_toApplicative_5210_ = lean_ctor_get(v___x_5209_, 0);
v_isSharedCheck_5241_ = !lean_is_exclusive(v___x_5209_);
if (v_isSharedCheck_5241_ == 0)
{
lean_object* v_unused_5242_; 
v_unused_5242_ = lean_ctor_get(v___x_5209_, 1);
lean_dec(v_unused_5242_);
v___x_5212_ = v___x_5209_;
v_isShared_5213_ = v_isSharedCheck_5241_;
goto v_resetjp_5211_;
}
else
{
lean_inc(v_toApplicative_5210_);
lean_dec(v___x_5209_);
v___x_5212_ = lean_box(0);
v_isShared_5213_ = v_isSharedCheck_5241_;
goto v_resetjp_5211_;
}
v_resetjp_5211_:
{
lean_object* v_toFunctor_5214_; lean_object* v_toSeq_5215_; lean_object* v_toSeqLeft_5216_; lean_object* v_toSeqRight_5217_; lean_object* v___x_5219_; uint8_t v_isShared_5220_; uint8_t v_isSharedCheck_5239_; 
v_toFunctor_5214_ = lean_ctor_get(v_toApplicative_5210_, 0);
v_toSeq_5215_ = lean_ctor_get(v_toApplicative_5210_, 2);
v_toSeqLeft_5216_ = lean_ctor_get(v_toApplicative_5210_, 3);
v_toSeqRight_5217_ = lean_ctor_get(v_toApplicative_5210_, 4);
v_isSharedCheck_5239_ = !lean_is_exclusive(v_toApplicative_5210_);
if (v_isSharedCheck_5239_ == 0)
{
lean_object* v_unused_5240_; 
v_unused_5240_ = lean_ctor_get(v_toApplicative_5210_, 1);
lean_dec(v_unused_5240_);
v___x_5219_ = v_toApplicative_5210_;
v_isShared_5220_ = v_isSharedCheck_5239_;
goto v_resetjp_5218_;
}
else
{
lean_inc(v_toSeqRight_5217_);
lean_inc(v_toSeqLeft_5216_);
lean_inc(v_toSeq_5215_);
lean_inc(v_toFunctor_5214_);
lean_dec(v_toApplicative_5210_);
v___x_5219_ = lean_box(0);
v_isShared_5220_ = v_isSharedCheck_5239_;
goto v_resetjp_5218_;
}
v_resetjp_5218_:
{
lean_object* v___f_5221_; lean_object* v___f_5222_; lean_object* v___f_5223_; lean_object* v___f_5224_; lean_object* v___x_5225_; lean_object* v___f_5226_; lean_object* v___f_5227_; lean_object* v___f_5228_; lean_object* v___x_5230_; 
v___f_5221_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3));
v___f_5222_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4));
lean_inc_ref(v_toFunctor_5214_);
v___f_5223_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5223_, 0, v_toFunctor_5214_);
v___f_5224_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5224_, 0, v_toFunctor_5214_);
v___x_5225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5225_, 0, v___f_5223_);
lean_ctor_set(v___x_5225_, 1, v___f_5224_);
v___f_5226_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5226_, 0, v_toSeqRight_5217_);
v___f_5227_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5227_, 0, v_toSeqLeft_5216_);
v___f_5228_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5228_, 0, v_toSeq_5215_);
if (v_isShared_5220_ == 0)
{
lean_ctor_set(v___x_5219_, 4, v___f_5226_);
lean_ctor_set(v___x_5219_, 3, v___f_5227_);
lean_ctor_set(v___x_5219_, 2, v___f_5228_);
lean_ctor_set(v___x_5219_, 1, v___f_5221_);
lean_ctor_set(v___x_5219_, 0, v___x_5225_);
v___x_5230_ = v___x_5219_;
goto v_reusejp_5229_;
}
else
{
lean_object* v_reuseFailAlloc_5238_; 
v_reuseFailAlloc_5238_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5238_, 0, v___x_5225_);
lean_ctor_set(v_reuseFailAlloc_5238_, 1, v___f_5221_);
lean_ctor_set(v_reuseFailAlloc_5238_, 2, v___f_5228_);
lean_ctor_set(v_reuseFailAlloc_5238_, 3, v___f_5227_);
lean_ctor_set(v_reuseFailAlloc_5238_, 4, v___f_5226_);
v___x_5230_ = v_reuseFailAlloc_5238_;
goto v_reusejp_5229_;
}
v_reusejp_5229_:
{
lean_object* v___x_5232_; 
if (v_isShared_5213_ == 0)
{
lean_ctor_set(v___x_5212_, 1, v___f_5222_);
lean_ctor_set(v___x_5212_, 0, v___x_5230_);
v___x_5232_ = v___x_5212_;
goto v_reusejp_5231_;
}
else
{
lean_object* v_reuseFailAlloc_5237_; 
v_reuseFailAlloc_5237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5237_, 0, v___x_5230_);
lean_ctor_set(v_reuseFailAlloc_5237_, 1, v___f_5222_);
v___x_5232_ = v_reuseFailAlloc_5237_;
goto v_reusejp_5231_;
}
v_reusejp_5231_:
{
lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_27367__overap_5235_; lean_object* v___x_5236_; 
v___x_5233_ = l_Lean_instInhabitedExpr;
v___x_5234_ = l_instInhabitedOfMonad___redArg(v___x_5232_, v___x_5233_);
v___x_27367__overap_5235_ = lean_panic_fn_borrowed(v___x_5234_, v_msg_5178_);
lean_dec(v___x_5234_);
lean_inc(v___y_5182_);
lean_inc_ref(v___y_5181_);
lean_inc(v___y_5180_);
lean_inc_ref(v___y_5179_);
v___x_5236_ = lean_apply_5(v___x_27367__overap_5235_, v___y_5179_, v___y_5180_, v___y_5181_, v___y_5182_, lean_box(0));
return v___x_5236_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___boxed(lean_object* v_msg_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_, lean_object* v___y_5252_, lean_object* v___y_5253_, lean_object* v___y_5254_){
_start:
{
lean_object* v_res_5255_; 
v_res_5255_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(v_msg_5249_, v___y_5250_, v___y_5251_, v___y_5252_, v___y_5253_);
lean_dec(v___y_5253_);
lean_dec_ref(v___y_5252_);
lean_dec(v___y_5251_);
lean_dec_ref(v___y_5250_);
return v_res_5255_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(lean_object* v___x_5256_, lean_object* v_onAlt_5257_, lean_object* v_a_5258_, uint8_t v___x_5259_, uint8_t v_useSplitter_5260_, lean_object* v___x_5261_, lean_object* v_extraEqualities_5262_, lean_object* v_numDiscrEqs_5263_, lean_object* v___x_5264_, lean_object* v___x_5265_, lean_object* v___x_5266_, lean_object* v_ys_5267_, lean_object* v_args_5268_, lean_object* v___y_5269_, lean_object* v___y_5270_, lean_object* v___y_5271_, lean_object* v___y_5272_){
_start:
{
lean_object* v_numFields_5274_; lean_object* v_numOverlaps_5275_; uint8_t v_hasUnitThunk_5276_; lean_object* v___x_5277_; uint8_t v___x_5278_; 
v_numFields_5274_ = lean_ctor_get(v___x_5256_, 0);
v_numOverlaps_5275_ = lean_ctor_get(v___x_5256_, 1);
v_hasUnitThunk_5276_ = lean_ctor_get_uint8(v___x_5256_, sizeof(void*)*2);
v___x_5277_ = lean_array_get_size(v_ys_5267_);
v___x_5278_ = lean_nat_dec_eq(v___x_5277_, v_numFields_5274_);
if (v___x_5278_ == 0)
{
lean_object* v___x_5279_; lean_object* v___x_5280_; 
lean_dec_ref(v_args_5268_);
lean_dec_ref(v_ys_5267_);
lean_dec_ref(v___x_5264_);
lean_dec(v_numDiscrEqs_5263_);
lean_dec(v_extraEqualities_5262_);
lean_dec_ref(v___x_5261_);
lean_dec(v_a_5258_);
lean_dec_ref(v_onAlt_5257_);
v___x_5279_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3);
v___x_5280_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(v___x_5279_, v___y_5269_, v___y_5270_, v___y_5271_, v___y_5272_);
return v___x_5280_;
}
else
{
lean_object* v___x_5281_; lean_object* v___x_5282_; lean_object* v___f_5283_; lean_object* v_altType_5285_; lean_object* v___y_5286_; lean_object* v___y_5287_; lean_object* v___y_5288_; lean_object* v___y_5289_; lean_object* v___x_5299_; 
v___x_5281_ = lean_box(v___x_5259_);
v___x_5282_ = lean_box(v_useSplitter_5260_);
lean_inc_ref(v_ys_5267_);
v___f_5283_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed), 16, 9);
lean_closure_set(v___f_5283_, 0, v_args_5268_);
lean_closure_set(v___f_5283_, 1, v_ys_5267_);
lean_closure_set(v___f_5283_, 2, v_onAlt_5257_);
lean_closure_set(v___f_5283_, 3, v_a_5258_);
lean_closure_set(v___f_5283_, 4, v___x_5281_);
lean_closure_set(v___f_5283_, 5, v___x_5282_);
lean_closure_set(v___f_5283_, 6, v___x_5261_);
lean_closure_set(v___f_5283_, 7, v_extraEqualities_5262_);
lean_closure_set(v___f_5283_, 8, v_numDiscrEqs_5263_);
v___x_5299_ = l_Lean_Meta_instantiateForall(v___x_5264_, v_ys_5267_, v___y_5269_, v___y_5270_, v___y_5271_, v___y_5272_);
lean_dec_ref(v_ys_5267_);
if (lean_obj_tag(v___x_5299_) == 0)
{
uint8_t v_hasUnitThunk_5300_; 
v_hasUnitThunk_5300_ = lean_ctor_get_uint8(v___x_5265_, sizeof(void*)*2);
if (v_hasUnitThunk_5300_ == 0)
{
lean_object* v_a_5301_; 
v_a_5301_ = lean_ctor_get(v___x_5299_, 0);
lean_inc(v_a_5301_);
lean_dec_ref_known(v___x_5299_, 1);
v_altType_5285_ = v_a_5301_;
v___y_5286_ = v___y_5269_;
v___y_5287_ = v___y_5270_;
v___y_5288_ = v___y_5271_;
v___y_5289_ = v___y_5272_;
goto v___jp_5284_;
}
else
{
lean_object* v_a_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; 
v_a_5302_ = lean_ctor_get(v___x_5299_, 0);
lean_inc(v_a_5302_);
lean_dec_ref_known(v___x_5299_, 1);
v___x_5303_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2);
v___x_5304_ = lean_mk_empty_array_with_capacity(v___x_5266_);
v___x_5305_ = lean_array_push(v___x_5304_, v___x_5303_);
v___x_5306_ = l_Lean_Meta_instantiateForall(v_a_5302_, v___x_5305_, v___y_5269_, v___y_5270_, v___y_5271_, v___y_5272_);
lean_dec_ref(v___x_5305_);
if (lean_obj_tag(v___x_5306_) == 0)
{
lean_object* v_a_5307_; 
v_a_5307_ = lean_ctor_get(v___x_5306_, 0);
lean_inc(v_a_5307_);
lean_dec_ref_known(v___x_5306_, 1);
v_altType_5285_ = v_a_5307_;
v___y_5286_ = v___y_5269_;
v___y_5287_ = v___y_5270_;
v___y_5288_ = v___y_5271_;
v___y_5289_ = v___y_5272_;
goto v___jp_5284_;
}
else
{
lean_dec_ref(v___f_5283_);
return v___x_5306_;
}
}
}
else
{
lean_dec_ref(v___f_5283_);
return v___x_5299_;
}
v___jp_5284_:
{
lean_object* v___x_5290_; lean_object* v___x_5291_; 
lean_inc(v_numOverlaps_5275_);
v___x_5290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5290_, 0, v_numOverlaps_5275_);
v___x_5291_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_altType_5285_, v___x_5290_, v___f_5283_, v___x_5259_, v___x_5259_, v___y_5286_, v___y_5287_, v___y_5288_, v___y_5289_);
if (lean_obj_tag(v___x_5291_) == 0)
{
if (v_hasUnitThunk_5276_ == 0)
{
return v___x_5291_;
}
else
{
lean_object* v_a_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; 
v_a_5292_ = lean_ctor_get(v___x_5291_, 0);
lean_inc(v_a_5292_);
lean_dec_ref_known(v___x_5291_, 1);
v___x_5293_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2));
v___x_5294_ = lean_unsigned_to_nat(2u);
v___x_5295_ = lean_mk_empty_array_with_capacity(v___x_5294_);
lean_dec_ref(v___x_5295_);
v___x_5296_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6);
v___x_5297_ = lean_array_push(v___x_5296_, v_a_5292_);
v___x_5298_ = l_Lean_Meta_mkAppM(v___x_5293_, v___x_5297_, v___y_5286_, v___y_5287_, v___y_5288_, v___y_5289_);
return v___x_5298_;
}
}
else
{
return v___x_5291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed(lean_object** _args){
lean_object* v___x_5308_ = _args[0];
lean_object* v_onAlt_5309_ = _args[1];
lean_object* v_a_5310_ = _args[2];
lean_object* v___x_5311_ = _args[3];
lean_object* v_useSplitter_5312_ = _args[4];
lean_object* v___x_5313_ = _args[5];
lean_object* v_extraEqualities_5314_ = _args[6];
lean_object* v_numDiscrEqs_5315_ = _args[7];
lean_object* v___x_5316_ = _args[8];
lean_object* v___x_5317_ = _args[9];
lean_object* v___x_5318_ = _args[10];
lean_object* v_ys_5319_ = _args[11];
lean_object* v_args_5320_ = _args[12];
lean_object* v___y_5321_ = _args[13];
lean_object* v___y_5322_ = _args[14];
lean_object* v___y_5323_ = _args[15];
lean_object* v___y_5324_ = _args[16];
lean_object* v___y_5325_ = _args[17];
_start:
{
uint8_t v___x_33645__boxed_5326_; uint8_t v_useSplitter_boxed_5327_; lean_object* v_res_5328_; 
v___x_33645__boxed_5326_ = lean_unbox(v___x_5311_);
v_useSplitter_boxed_5327_ = lean_unbox(v_useSplitter_5312_);
v_res_5328_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(v___x_5308_, v_onAlt_5309_, v_a_5310_, v___x_33645__boxed_5326_, v_useSplitter_boxed_5327_, v___x_5313_, v_extraEqualities_5314_, v_numDiscrEqs_5315_, v___x_5316_, v___x_5317_, v___x_5318_, v_ys_5319_, v_args_5320_, v___y_5321_, v___y_5322_, v___y_5323_, v___y_5324_);
lean_dec(v___y_5324_);
lean_dec_ref(v___y_5323_);
lean_dec(v___y_5322_);
lean_dec_ref(v___y_5321_);
lean_dec(v___x_5318_);
lean_dec_ref(v___x_5317_);
lean_dec_ref(v___x_5308_);
return v_res_5328_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(lean_object* v_msg_5329_, lean_object* v___y_5330_, lean_object* v___y_5331_, lean_object* v___y_5332_, lean_object* v___y_5333_){
_start:
{
lean_object* v___x_5335_; lean_object* v___x_5336_; lean_object* v_toApplicative_5337_; lean_object* v___x_5339_; uint8_t v_isShared_5340_; uint8_t v_isSharedCheck_5398_; 
v___x_5335_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0);
v___x_5336_ = l_StateRefT_x27_instMonad___redArg(v___x_5335_);
v_toApplicative_5337_ = lean_ctor_get(v___x_5336_, 0);
v_isSharedCheck_5398_ = !lean_is_exclusive(v___x_5336_);
if (v_isSharedCheck_5398_ == 0)
{
lean_object* v_unused_5399_; 
v_unused_5399_ = lean_ctor_get(v___x_5336_, 1);
lean_dec(v_unused_5399_);
v___x_5339_ = v___x_5336_;
v_isShared_5340_ = v_isSharedCheck_5398_;
goto v_resetjp_5338_;
}
else
{
lean_inc(v_toApplicative_5337_);
lean_dec(v___x_5336_);
v___x_5339_ = lean_box(0);
v_isShared_5340_ = v_isSharedCheck_5398_;
goto v_resetjp_5338_;
}
v_resetjp_5338_:
{
lean_object* v_toFunctor_5341_; lean_object* v_toSeq_5342_; lean_object* v_toSeqLeft_5343_; lean_object* v_toSeqRight_5344_; lean_object* v___x_5346_; uint8_t v_isShared_5347_; uint8_t v_isSharedCheck_5396_; 
v_toFunctor_5341_ = lean_ctor_get(v_toApplicative_5337_, 0);
v_toSeq_5342_ = lean_ctor_get(v_toApplicative_5337_, 2);
v_toSeqLeft_5343_ = lean_ctor_get(v_toApplicative_5337_, 3);
v_toSeqRight_5344_ = lean_ctor_get(v_toApplicative_5337_, 4);
v_isSharedCheck_5396_ = !lean_is_exclusive(v_toApplicative_5337_);
if (v_isSharedCheck_5396_ == 0)
{
lean_object* v_unused_5397_; 
v_unused_5397_ = lean_ctor_get(v_toApplicative_5337_, 1);
lean_dec(v_unused_5397_);
v___x_5346_ = v_toApplicative_5337_;
v_isShared_5347_ = v_isSharedCheck_5396_;
goto v_resetjp_5345_;
}
else
{
lean_inc(v_toSeqRight_5344_);
lean_inc(v_toSeqLeft_5343_);
lean_inc(v_toSeq_5342_);
lean_inc(v_toFunctor_5341_);
lean_dec(v_toApplicative_5337_);
v___x_5346_ = lean_box(0);
v_isShared_5347_ = v_isSharedCheck_5396_;
goto v_resetjp_5345_;
}
v_resetjp_5345_:
{
lean_object* v___f_5348_; lean_object* v___f_5349_; lean_object* v___f_5350_; lean_object* v___f_5351_; lean_object* v___x_5352_; lean_object* v___f_5353_; lean_object* v___f_5354_; lean_object* v___f_5355_; lean_object* v___x_5357_; 
v___f_5348_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1));
v___f_5349_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2));
lean_inc_ref(v_toFunctor_5341_);
v___f_5350_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5350_, 0, v_toFunctor_5341_);
v___f_5351_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5351_, 0, v_toFunctor_5341_);
v___x_5352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5352_, 0, v___f_5350_);
lean_ctor_set(v___x_5352_, 1, v___f_5351_);
v___f_5353_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5353_, 0, v_toSeqRight_5344_);
v___f_5354_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5354_, 0, v_toSeqLeft_5343_);
v___f_5355_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5355_, 0, v_toSeq_5342_);
if (v_isShared_5347_ == 0)
{
lean_ctor_set(v___x_5346_, 4, v___f_5353_);
lean_ctor_set(v___x_5346_, 3, v___f_5354_);
lean_ctor_set(v___x_5346_, 2, v___f_5355_);
lean_ctor_set(v___x_5346_, 1, v___f_5348_);
lean_ctor_set(v___x_5346_, 0, v___x_5352_);
v___x_5357_ = v___x_5346_;
goto v_reusejp_5356_;
}
else
{
lean_object* v_reuseFailAlloc_5395_; 
v_reuseFailAlloc_5395_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5395_, 0, v___x_5352_);
lean_ctor_set(v_reuseFailAlloc_5395_, 1, v___f_5348_);
lean_ctor_set(v_reuseFailAlloc_5395_, 2, v___f_5355_);
lean_ctor_set(v_reuseFailAlloc_5395_, 3, v___f_5354_);
lean_ctor_set(v_reuseFailAlloc_5395_, 4, v___f_5353_);
v___x_5357_ = v_reuseFailAlloc_5395_;
goto v_reusejp_5356_;
}
v_reusejp_5356_:
{
lean_object* v___x_5359_; 
if (v_isShared_5340_ == 0)
{
lean_ctor_set(v___x_5339_, 1, v___f_5349_);
lean_ctor_set(v___x_5339_, 0, v___x_5357_);
v___x_5359_ = v___x_5339_;
goto v_reusejp_5358_;
}
else
{
lean_object* v_reuseFailAlloc_5394_; 
v_reuseFailAlloc_5394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5394_, 0, v___x_5357_);
lean_ctor_set(v_reuseFailAlloc_5394_, 1, v___f_5349_);
v___x_5359_ = v_reuseFailAlloc_5394_;
goto v_reusejp_5358_;
}
v_reusejp_5358_:
{
lean_object* v___x_5360_; lean_object* v_toApplicative_5361_; lean_object* v___x_5363_; uint8_t v_isShared_5364_; uint8_t v_isSharedCheck_5392_; 
v___x_5360_ = l_StateRefT_x27_instMonad___redArg(v___x_5359_);
v_toApplicative_5361_ = lean_ctor_get(v___x_5360_, 0);
v_isSharedCheck_5392_ = !lean_is_exclusive(v___x_5360_);
if (v_isSharedCheck_5392_ == 0)
{
lean_object* v_unused_5393_; 
v_unused_5393_ = lean_ctor_get(v___x_5360_, 1);
lean_dec(v_unused_5393_);
v___x_5363_ = v___x_5360_;
v_isShared_5364_ = v_isSharedCheck_5392_;
goto v_resetjp_5362_;
}
else
{
lean_inc(v_toApplicative_5361_);
lean_dec(v___x_5360_);
v___x_5363_ = lean_box(0);
v_isShared_5364_ = v_isSharedCheck_5392_;
goto v_resetjp_5362_;
}
v_resetjp_5362_:
{
lean_object* v_toFunctor_5365_; lean_object* v_toSeq_5366_; lean_object* v_toSeqLeft_5367_; lean_object* v_toSeqRight_5368_; lean_object* v___x_5370_; uint8_t v_isShared_5371_; uint8_t v_isSharedCheck_5390_; 
v_toFunctor_5365_ = lean_ctor_get(v_toApplicative_5361_, 0);
v_toSeq_5366_ = lean_ctor_get(v_toApplicative_5361_, 2);
v_toSeqLeft_5367_ = lean_ctor_get(v_toApplicative_5361_, 3);
v_toSeqRight_5368_ = lean_ctor_get(v_toApplicative_5361_, 4);
v_isSharedCheck_5390_ = !lean_is_exclusive(v_toApplicative_5361_);
if (v_isSharedCheck_5390_ == 0)
{
lean_object* v_unused_5391_; 
v_unused_5391_ = lean_ctor_get(v_toApplicative_5361_, 1);
lean_dec(v_unused_5391_);
v___x_5370_ = v_toApplicative_5361_;
v_isShared_5371_ = v_isSharedCheck_5390_;
goto v_resetjp_5369_;
}
else
{
lean_inc(v_toSeqRight_5368_);
lean_inc(v_toSeqLeft_5367_);
lean_inc(v_toSeq_5366_);
lean_inc(v_toFunctor_5365_);
lean_dec(v_toApplicative_5361_);
v___x_5370_ = lean_box(0);
v_isShared_5371_ = v_isSharedCheck_5390_;
goto v_resetjp_5369_;
}
v_resetjp_5369_:
{
lean_object* v___f_5372_; lean_object* v___f_5373_; lean_object* v___f_5374_; lean_object* v___f_5375_; lean_object* v___x_5376_; lean_object* v___f_5377_; lean_object* v___f_5378_; lean_object* v___f_5379_; lean_object* v___x_5381_; 
v___f_5372_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3));
v___f_5373_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4));
lean_inc_ref(v_toFunctor_5365_);
v___f_5374_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5374_, 0, v_toFunctor_5365_);
v___f_5375_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5375_, 0, v_toFunctor_5365_);
v___x_5376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5376_, 0, v___f_5374_);
lean_ctor_set(v___x_5376_, 1, v___f_5375_);
v___f_5377_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5377_, 0, v_toSeqRight_5368_);
v___f_5378_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5378_, 0, v_toSeqLeft_5367_);
v___f_5379_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5379_, 0, v_toSeq_5366_);
if (v_isShared_5371_ == 0)
{
lean_ctor_set(v___x_5370_, 4, v___f_5377_);
lean_ctor_set(v___x_5370_, 3, v___f_5378_);
lean_ctor_set(v___x_5370_, 2, v___f_5379_);
lean_ctor_set(v___x_5370_, 1, v___f_5372_);
lean_ctor_set(v___x_5370_, 0, v___x_5376_);
v___x_5381_ = v___x_5370_;
goto v_reusejp_5380_;
}
else
{
lean_object* v_reuseFailAlloc_5389_; 
v_reuseFailAlloc_5389_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5389_, 0, v___x_5376_);
lean_ctor_set(v_reuseFailAlloc_5389_, 1, v___f_5372_);
lean_ctor_set(v_reuseFailAlloc_5389_, 2, v___f_5379_);
lean_ctor_set(v_reuseFailAlloc_5389_, 3, v___f_5378_);
lean_ctor_set(v_reuseFailAlloc_5389_, 4, v___f_5377_);
v___x_5381_ = v_reuseFailAlloc_5389_;
goto v_reusejp_5380_;
}
v_reusejp_5380_:
{
lean_object* v___x_5383_; 
if (v_isShared_5364_ == 0)
{
lean_ctor_set(v___x_5363_, 1, v___f_5373_);
lean_ctor_set(v___x_5363_, 0, v___x_5381_);
v___x_5383_ = v___x_5363_;
goto v_reusejp_5382_;
}
else
{
lean_object* v_reuseFailAlloc_5388_; 
v_reuseFailAlloc_5388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5388_, 0, v___x_5381_);
lean_ctor_set(v_reuseFailAlloc_5388_, 1, v___f_5373_);
v___x_5383_ = v_reuseFailAlloc_5388_;
goto v_reusejp_5382_;
}
v_reusejp_5382_:
{
lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_27387__overap_5386_; lean_object* v___x_5387_; 
v___x_5384_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__7, &l_Lean_Meta_MatcherApp_transform___redArg___closed__7_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__7);
v___x_5385_ = l_instInhabitedOfMonad___redArg(v___x_5383_, v___x_5384_);
v___x_27387__overap_5386_ = lean_panic_fn_borrowed(v___x_5385_, v_msg_5329_);
lean_dec(v___x_5385_);
lean_inc(v___y_5333_);
lean_inc_ref(v___y_5332_);
lean_inc(v___y_5331_);
lean_inc_ref(v___y_5330_);
v___x_5387_ = lean_apply_5(v___x_27387__overap_5386_, v___y_5330_, v___y_5331_, v___y_5332_, v___y_5333_, lean_box(0));
return v___x_5387_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___boxed(lean_object* v_msg_5400_, lean_object* v___y_5401_, lean_object* v___y_5402_, lean_object* v___y_5403_, lean_object* v___y_5404_, lean_object* v___y_5405_){
_start:
{
lean_object* v_res_5406_; 
v_res_5406_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(v_msg_5400_, v___y_5401_, v___y_5402_, v___y_5403_, v___y_5404_);
lean_dec(v___y_5404_);
lean_dec_ref(v___y_5403_);
lean_dec(v___y_5402_);
lean_dec_ref(v___y_5401_);
return v_res_5406_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(lean_object* v___x_5407_, lean_object* v___y_5408_, lean_object* v___y_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_){
_start:
{
lean_object* v___x_5413_; 
v___x_5413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5413_, 0, v___x_5407_);
return v___x_5413_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed(lean_object* v___x_5414_, lean_object* v___y_5415_, lean_object* v___y_5416_, lean_object* v___y_5417_, lean_object* v___y_5418_, lean_object* v___y_5419_){
_start:
{
lean_object* v_res_5420_; 
v_res_5420_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(v___x_5414_, v___y_5415_, v___y_5416_, v___y_5417_, v___y_5418_);
lean_dec(v___y_5418_);
lean_dec_ref(v___y_5417_);
lean_dec(v___y_5416_);
lean_dec_ref(v___y_5415_);
return v_res_5420_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(lean_object* v_upperBound_5421_, lean_object* v_onAlt_5422_, uint8_t v_useSplitter_5423_, lean_object* v_extraEqualities_5424_, lean_object* v_numDiscrEqs_5425_, lean_object* v_a_5426_, lean_object* v_b_5427_, lean_object* v___y_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_, lean_object* v___y_5431_){
_start:
{
lean_object* v___y_5434_; uint8_t v___x_5457_; 
v___x_5457_ = lean_nat_dec_lt(v_a_5426_, v_upperBound_5421_);
if (v___x_5457_ == 0)
{
lean_object* v___x_5458_; 
lean_dec(v_a_5426_);
lean_dec(v_numDiscrEqs_5425_);
lean_dec(v_extraEqualities_5424_);
lean_dec_ref(v_onAlt_5422_);
v___x_5458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5458_, 0, v_b_5427_);
return v___x_5458_;
}
else
{
lean_object* v_snd_5459_; lean_object* v_snd_5460_; lean_object* v_snd_5461_; lean_object* v_snd_5462_; lean_object* v_snd_5463_; lean_object* v_fst_5464_; lean_object* v___x_5466_; uint8_t v_isShared_5467_; uint8_t v_isSharedCheck_5668_; 
v_snd_5459_ = lean_ctor_get(v_b_5427_, 1);
lean_inc(v_snd_5459_);
v_snd_5460_ = lean_ctor_get(v_snd_5459_, 1);
lean_inc(v_snd_5460_);
v_snd_5461_ = lean_ctor_get(v_snd_5460_, 1);
lean_inc(v_snd_5461_);
v_snd_5462_ = lean_ctor_get(v_snd_5461_, 1);
lean_inc(v_snd_5462_);
v_snd_5463_ = lean_ctor_get(v_snd_5462_, 1);
lean_inc(v_snd_5463_);
v_fst_5464_ = lean_ctor_get(v_b_5427_, 0);
v_isSharedCheck_5668_ = !lean_is_exclusive(v_b_5427_);
if (v_isSharedCheck_5668_ == 0)
{
lean_object* v_unused_5669_; 
v_unused_5669_ = lean_ctor_get(v_b_5427_, 1);
lean_dec(v_unused_5669_);
v___x_5466_ = v_b_5427_;
v_isShared_5467_ = v_isSharedCheck_5668_;
goto v_resetjp_5465_;
}
else
{
lean_inc(v_fst_5464_);
lean_dec(v_b_5427_);
v___x_5466_ = lean_box(0);
v_isShared_5467_ = v_isSharedCheck_5668_;
goto v_resetjp_5465_;
}
v_resetjp_5465_:
{
lean_object* v_fst_5468_; lean_object* v___x_5470_; uint8_t v_isShared_5471_; uint8_t v_isSharedCheck_5666_; 
v_fst_5468_ = lean_ctor_get(v_snd_5459_, 0);
v_isSharedCheck_5666_ = !lean_is_exclusive(v_snd_5459_);
if (v_isSharedCheck_5666_ == 0)
{
lean_object* v_unused_5667_; 
v_unused_5667_ = lean_ctor_get(v_snd_5459_, 1);
lean_dec(v_unused_5667_);
v___x_5470_ = v_snd_5459_;
v_isShared_5471_ = v_isSharedCheck_5666_;
goto v_resetjp_5469_;
}
else
{
lean_inc(v_fst_5468_);
lean_dec(v_snd_5459_);
v___x_5470_ = lean_box(0);
v_isShared_5471_ = v_isSharedCheck_5666_;
goto v_resetjp_5469_;
}
v_resetjp_5469_:
{
lean_object* v_fst_5472_; lean_object* v___x_5474_; uint8_t v_isShared_5475_; uint8_t v_isSharedCheck_5664_; 
v_fst_5472_ = lean_ctor_get(v_snd_5460_, 0);
v_isSharedCheck_5664_ = !lean_is_exclusive(v_snd_5460_);
if (v_isSharedCheck_5664_ == 0)
{
lean_object* v_unused_5665_; 
v_unused_5665_ = lean_ctor_get(v_snd_5460_, 1);
lean_dec(v_unused_5665_);
v___x_5474_ = v_snd_5460_;
v_isShared_5475_ = v_isSharedCheck_5664_;
goto v_resetjp_5473_;
}
else
{
lean_inc(v_fst_5472_);
lean_dec(v_snd_5460_);
v___x_5474_ = lean_box(0);
v_isShared_5475_ = v_isSharedCheck_5664_;
goto v_resetjp_5473_;
}
v_resetjp_5473_:
{
lean_object* v_fst_5476_; lean_object* v___x_5478_; uint8_t v_isShared_5479_; uint8_t v_isSharedCheck_5662_; 
v_fst_5476_ = lean_ctor_get(v_snd_5461_, 0);
v_isSharedCheck_5662_ = !lean_is_exclusive(v_snd_5461_);
if (v_isSharedCheck_5662_ == 0)
{
lean_object* v_unused_5663_; 
v_unused_5663_ = lean_ctor_get(v_snd_5461_, 1);
lean_dec(v_unused_5663_);
v___x_5478_ = v_snd_5461_;
v_isShared_5479_ = v_isSharedCheck_5662_;
goto v_resetjp_5477_;
}
else
{
lean_inc(v_fst_5476_);
lean_dec(v_snd_5461_);
v___x_5478_ = lean_box(0);
v_isShared_5479_ = v_isSharedCheck_5662_;
goto v_resetjp_5477_;
}
v_resetjp_5477_:
{
lean_object* v_fst_5480_; lean_object* v___x_5482_; uint8_t v_isShared_5483_; uint8_t v_isSharedCheck_5660_; 
v_fst_5480_ = lean_ctor_get(v_snd_5462_, 0);
v_isSharedCheck_5660_ = !lean_is_exclusive(v_snd_5462_);
if (v_isSharedCheck_5660_ == 0)
{
lean_object* v_unused_5661_; 
v_unused_5661_ = lean_ctor_get(v_snd_5462_, 1);
lean_dec(v_unused_5661_);
v___x_5482_ = v_snd_5462_;
v_isShared_5483_ = v_isSharedCheck_5660_;
goto v_resetjp_5481_;
}
else
{
lean_inc(v_fst_5480_);
lean_dec(v_snd_5462_);
v___x_5482_ = lean_box(0);
v_isShared_5483_ = v_isSharedCheck_5660_;
goto v_resetjp_5481_;
}
v_resetjp_5481_:
{
lean_object* v_array_5484_; lean_object* v_start_5485_; lean_object* v_stop_5486_; uint8_t v___x_5487_; 
v_array_5484_ = lean_ctor_get(v_snd_5463_, 0);
v_start_5485_ = lean_ctor_get(v_snd_5463_, 1);
v_stop_5486_ = lean_ctor_get(v_snd_5463_, 2);
v___x_5487_ = lean_nat_dec_lt(v_start_5485_, v_stop_5486_);
if (v___x_5487_ == 0)
{
lean_object* v___x_5489_; 
if (v_isShared_5483_ == 0)
{
v___x_5489_ = v___x_5482_;
goto v_reusejp_5488_;
}
else
{
lean_object* v_reuseFailAlloc_5504_; 
v_reuseFailAlloc_5504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5504_, 0, v_fst_5480_);
lean_ctor_set(v_reuseFailAlloc_5504_, 1, v_snd_5463_);
v___x_5489_ = v_reuseFailAlloc_5504_;
goto v_reusejp_5488_;
}
v_reusejp_5488_:
{
lean_object* v___x_5491_; 
if (v_isShared_5479_ == 0)
{
lean_ctor_set(v___x_5478_, 1, v___x_5489_);
v___x_5491_ = v___x_5478_;
goto v_reusejp_5490_;
}
else
{
lean_object* v_reuseFailAlloc_5503_; 
v_reuseFailAlloc_5503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5503_, 0, v_fst_5476_);
lean_ctor_set(v_reuseFailAlloc_5503_, 1, v___x_5489_);
v___x_5491_ = v_reuseFailAlloc_5503_;
goto v_reusejp_5490_;
}
v_reusejp_5490_:
{
lean_object* v___x_5493_; 
if (v_isShared_5475_ == 0)
{
lean_ctor_set(v___x_5474_, 1, v___x_5491_);
v___x_5493_ = v___x_5474_;
goto v_reusejp_5492_;
}
else
{
lean_object* v_reuseFailAlloc_5502_; 
v_reuseFailAlloc_5502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5502_, 0, v_fst_5472_);
lean_ctor_set(v_reuseFailAlloc_5502_, 1, v___x_5491_);
v___x_5493_ = v_reuseFailAlloc_5502_;
goto v_reusejp_5492_;
}
v_reusejp_5492_:
{
lean_object* v___x_5495_; 
if (v_isShared_5471_ == 0)
{
lean_ctor_set(v___x_5470_, 1, v___x_5493_);
v___x_5495_ = v___x_5470_;
goto v_reusejp_5494_;
}
else
{
lean_object* v_reuseFailAlloc_5501_; 
v_reuseFailAlloc_5501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5501_, 0, v_fst_5468_);
lean_ctor_set(v_reuseFailAlloc_5501_, 1, v___x_5493_);
v___x_5495_ = v_reuseFailAlloc_5501_;
goto v_reusejp_5494_;
}
v_reusejp_5494_:
{
lean_object* v___x_5497_; 
if (v_isShared_5467_ == 0)
{
lean_ctor_set(v___x_5466_, 1, v___x_5495_);
v___x_5497_ = v___x_5466_;
goto v_reusejp_5496_;
}
else
{
lean_object* v_reuseFailAlloc_5500_; 
v_reuseFailAlloc_5500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5500_, 0, v_fst_5464_);
lean_ctor_set(v_reuseFailAlloc_5500_, 1, v___x_5495_);
v___x_5497_ = v_reuseFailAlloc_5500_;
goto v_reusejp_5496_;
}
v_reusejp_5496_:
{
lean_object* v___x_5498_; lean_object* v___f_5499_; 
v___x_5498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5498_, 0, v___x_5497_);
v___f_5499_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5499_, 0, v___x_5498_);
v___y_5434_ = v___f_5499_;
goto v___jp_5433_;
}
}
}
}
}
}
else
{
lean_object* v___x_5506_; uint8_t v_isShared_5507_; uint8_t v_isSharedCheck_5656_; 
lean_inc(v_stop_5486_);
lean_inc(v_start_5485_);
lean_inc_ref(v_array_5484_);
v_isSharedCheck_5656_ = !lean_is_exclusive(v_snd_5463_);
if (v_isSharedCheck_5656_ == 0)
{
lean_object* v_unused_5657_; lean_object* v_unused_5658_; lean_object* v_unused_5659_; 
v_unused_5657_ = lean_ctor_get(v_snd_5463_, 2);
lean_dec(v_unused_5657_);
v_unused_5658_ = lean_ctor_get(v_snd_5463_, 1);
lean_dec(v_unused_5658_);
v_unused_5659_ = lean_ctor_get(v_snd_5463_, 0);
lean_dec(v_unused_5659_);
v___x_5506_ = v_snd_5463_;
v_isShared_5507_ = v_isSharedCheck_5656_;
goto v_resetjp_5505_;
}
else
{
lean_dec(v_snd_5463_);
v___x_5506_ = lean_box(0);
v_isShared_5507_ = v_isSharedCheck_5656_;
goto v_resetjp_5505_;
}
v_resetjp_5505_:
{
lean_object* v_array_5508_; lean_object* v_start_5509_; lean_object* v_stop_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; lean_object* v___x_5515_; 
v_array_5508_ = lean_ctor_get(v_fst_5480_, 0);
v_start_5509_ = lean_ctor_get(v_fst_5480_, 1);
v_stop_5510_ = lean_ctor_get(v_fst_5480_, 2);
v___x_5511_ = lean_array_fget(v_array_5484_, v_start_5485_);
v___x_5512_ = lean_unsigned_to_nat(1u);
v___x_5513_ = lean_nat_add(v_start_5485_, v___x_5512_);
lean_dec(v_start_5485_);
if (v_isShared_5507_ == 0)
{
lean_ctor_set(v___x_5506_, 1, v___x_5513_);
v___x_5515_ = v___x_5506_;
goto v_reusejp_5514_;
}
else
{
lean_object* v_reuseFailAlloc_5655_; 
v_reuseFailAlloc_5655_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5655_, 0, v_array_5484_);
lean_ctor_set(v_reuseFailAlloc_5655_, 1, v___x_5513_);
lean_ctor_set(v_reuseFailAlloc_5655_, 2, v_stop_5486_);
v___x_5515_ = v_reuseFailAlloc_5655_;
goto v_reusejp_5514_;
}
v_reusejp_5514_:
{
uint8_t v___x_5516_; 
v___x_5516_ = lean_nat_dec_lt(v_start_5509_, v_stop_5510_);
if (v___x_5516_ == 0)
{
lean_object* v___x_5518_; 
lean_dec(v___x_5511_);
if (v_isShared_5483_ == 0)
{
lean_ctor_set(v___x_5482_, 1, v___x_5515_);
v___x_5518_ = v___x_5482_;
goto v_reusejp_5517_;
}
else
{
lean_object* v_reuseFailAlloc_5533_; 
v_reuseFailAlloc_5533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5533_, 0, v_fst_5480_);
lean_ctor_set(v_reuseFailAlloc_5533_, 1, v___x_5515_);
v___x_5518_ = v_reuseFailAlloc_5533_;
goto v_reusejp_5517_;
}
v_reusejp_5517_:
{
lean_object* v___x_5520_; 
if (v_isShared_5479_ == 0)
{
lean_ctor_set(v___x_5478_, 1, v___x_5518_);
v___x_5520_ = v___x_5478_;
goto v_reusejp_5519_;
}
else
{
lean_object* v_reuseFailAlloc_5532_; 
v_reuseFailAlloc_5532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5532_, 0, v_fst_5476_);
lean_ctor_set(v_reuseFailAlloc_5532_, 1, v___x_5518_);
v___x_5520_ = v_reuseFailAlloc_5532_;
goto v_reusejp_5519_;
}
v_reusejp_5519_:
{
lean_object* v___x_5522_; 
if (v_isShared_5475_ == 0)
{
lean_ctor_set(v___x_5474_, 1, v___x_5520_);
v___x_5522_ = v___x_5474_;
goto v_reusejp_5521_;
}
else
{
lean_object* v_reuseFailAlloc_5531_; 
v_reuseFailAlloc_5531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5531_, 0, v_fst_5472_);
lean_ctor_set(v_reuseFailAlloc_5531_, 1, v___x_5520_);
v___x_5522_ = v_reuseFailAlloc_5531_;
goto v_reusejp_5521_;
}
v_reusejp_5521_:
{
lean_object* v___x_5524_; 
if (v_isShared_5471_ == 0)
{
lean_ctor_set(v___x_5470_, 1, v___x_5522_);
v___x_5524_ = v___x_5470_;
goto v_reusejp_5523_;
}
else
{
lean_object* v_reuseFailAlloc_5530_; 
v_reuseFailAlloc_5530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5530_, 0, v_fst_5468_);
lean_ctor_set(v_reuseFailAlloc_5530_, 1, v___x_5522_);
v___x_5524_ = v_reuseFailAlloc_5530_;
goto v_reusejp_5523_;
}
v_reusejp_5523_:
{
lean_object* v___x_5526_; 
if (v_isShared_5467_ == 0)
{
lean_ctor_set(v___x_5466_, 1, v___x_5524_);
v___x_5526_ = v___x_5466_;
goto v_reusejp_5525_;
}
else
{
lean_object* v_reuseFailAlloc_5529_; 
v_reuseFailAlloc_5529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5529_, 0, v_fst_5464_);
lean_ctor_set(v_reuseFailAlloc_5529_, 1, v___x_5524_);
v___x_5526_ = v_reuseFailAlloc_5529_;
goto v_reusejp_5525_;
}
v_reusejp_5525_:
{
lean_object* v___x_5527_; lean_object* v___f_5528_; 
v___x_5527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5527_, 0, v___x_5526_);
v___f_5528_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5528_, 0, v___x_5527_);
v___y_5434_ = v___f_5528_;
goto v___jp_5433_;
}
}
}
}
}
}
else
{
lean_object* v___x_5535_; uint8_t v_isShared_5536_; uint8_t v_isSharedCheck_5651_; 
lean_inc(v_stop_5510_);
lean_inc(v_start_5509_);
lean_inc_ref(v_array_5508_);
v_isSharedCheck_5651_ = !lean_is_exclusive(v_fst_5480_);
if (v_isSharedCheck_5651_ == 0)
{
lean_object* v_unused_5652_; lean_object* v_unused_5653_; lean_object* v_unused_5654_; 
v_unused_5652_ = lean_ctor_get(v_fst_5480_, 2);
lean_dec(v_unused_5652_);
v_unused_5653_ = lean_ctor_get(v_fst_5480_, 1);
lean_dec(v_unused_5653_);
v_unused_5654_ = lean_ctor_get(v_fst_5480_, 0);
lean_dec(v_unused_5654_);
v___x_5535_ = v_fst_5480_;
v_isShared_5536_ = v_isSharedCheck_5651_;
goto v_resetjp_5534_;
}
else
{
lean_dec(v_fst_5480_);
v___x_5535_ = lean_box(0);
v_isShared_5536_ = v_isSharedCheck_5651_;
goto v_resetjp_5534_;
}
v_resetjp_5534_:
{
lean_object* v_array_5537_; lean_object* v_start_5538_; lean_object* v_stop_5539_; lean_object* v___x_5540_; lean_object* v___x_5541_; lean_object* v___x_5543_; 
v_array_5537_ = lean_ctor_get(v_fst_5476_, 0);
v_start_5538_ = lean_ctor_get(v_fst_5476_, 1);
v_stop_5539_ = lean_ctor_get(v_fst_5476_, 2);
v___x_5540_ = lean_array_fget(v_array_5508_, v_start_5509_);
v___x_5541_ = lean_nat_add(v_start_5509_, v___x_5512_);
lean_dec(v_start_5509_);
if (v_isShared_5536_ == 0)
{
lean_ctor_set(v___x_5535_, 1, v___x_5541_);
v___x_5543_ = v___x_5535_;
goto v_reusejp_5542_;
}
else
{
lean_object* v_reuseFailAlloc_5650_; 
v_reuseFailAlloc_5650_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5650_, 0, v_array_5508_);
lean_ctor_set(v_reuseFailAlloc_5650_, 1, v___x_5541_);
lean_ctor_set(v_reuseFailAlloc_5650_, 2, v_stop_5510_);
v___x_5543_ = v_reuseFailAlloc_5650_;
goto v_reusejp_5542_;
}
v_reusejp_5542_:
{
uint8_t v___x_5544_; 
v___x_5544_ = lean_nat_dec_lt(v_start_5538_, v_stop_5539_);
if (v___x_5544_ == 0)
{
lean_object* v___x_5546_; 
lean_dec(v___x_5540_);
lean_dec(v___x_5511_);
if (v_isShared_5483_ == 0)
{
lean_ctor_set(v___x_5482_, 1, v___x_5515_);
lean_ctor_set(v___x_5482_, 0, v___x_5543_);
v___x_5546_ = v___x_5482_;
goto v_reusejp_5545_;
}
else
{
lean_object* v_reuseFailAlloc_5561_; 
v_reuseFailAlloc_5561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5561_, 0, v___x_5543_);
lean_ctor_set(v_reuseFailAlloc_5561_, 1, v___x_5515_);
v___x_5546_ = v_reuseFailAlloc_5561_;
goto v_reusejp_5545_;
}
v_reusejp_5545_:
{
lean_object* v___x_5548_; 
if (v_isShared_5479_ == 0)
{
lean_ctor_set(v___x_5478_, 1, v___x_5546_);
v___x_5548_ = v___x_5478_;
goto v_reusejp_5547_;
}
else
{
lean_object* v_reuseFailAlloc_5560_; 
v_reuseFailAlloc_5560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5560_, 0, v_fst_5476_);
lean_ctor_set(v_reuseFailAlloc_5560_, 1, v___x_5546_);
v___x_5548_ = v_reuseFailAlloc_5560_;
goto v_reusejp_5547_;
}
v_reusejp_5547_:
{
lean_object* v___x_5550_; 
if (v_isShared_5475_ == 0)
{
lean_ctor_set(v___x_5474_, 1, v___x_5548_);
v___x_5550_ = v___x_5474_;
goto v_reusejp_5549_;
}
else
{
lean_object* v_reuseFailAlloc_5559_; 
v_reuseFailAlloc_5559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5559_, 0, v_fst_5472_);
lean_ctor_set(v_reuseFailAlloc_5559_, 1, v___x_5548_);
v___x_5550_ = v_reuseFailAlloc_5559_;
goto v_reusejp_5549_;
}
v_reusejp_5549_:
{
lean_object* v___x_5552_; 
if (v_isShared_5471_ == 0)
{
lean_ctor_set(v___x_5470_, 1, v___x_5550_);
v___x_5552_ = v___x_5470_;
goto v_reusejp_5551_;
}
else
{
lean_object* v_reuseFailAlloc_5558_; 
v_reuseFailAlloc_5558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5558_, 0, v_fst_5468_);
lean_ctor_set(v_reuseFailAlloc_5558_, 1, v___x_5550_);
v___x_5552_ = v_reuseFailAlloc_5558_;
goto v_reusejp_5551_;
}
v_reusejp_5551_:
{
lean_object* v___x_5554_; 
if (v_isShared_5467_ == 0)
{
lean_ctor_set(v___x_5466_, 1, v___x_5552_);
v___x_5554_ = v___x_5466_;
goto v_reusejp_5553_;
}
else
{
lean_object* v_reuseFailAlloc_5557_; 
v_reuseFailAlloc_5557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5557_, 0, v_fst_5464_);
lean_ctor_set(v_reuseFailAlloc_5557_, 1, v___x_5552_);
v___x_5554_ = v_reuseFailAlloc_5557_;
goto v_reusejp_5553_;
}
v_reusejp_5553_:
{
lean_object* v___x_5555_; lean_object* v___f_5556_; 
v___x_5555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5555_, 0, v___x_5554_);
v___f_5556_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5556_, 0, v___x_5555_);
v___y_5434_ = v___f_5556_;
goto v___jp_5433_;
}
}
}
}
}
}
else
{
lean_object* v___x_5563_; uint8_t v_isShared_5564_; uint8_t v_isSharedCheck_5646_; 
lean_inc(v_stop_5539_);
lean_inc(v_start_5538_);
lean_inc_ref(v_array_5537_);
v_isSharedCheck_5646_ = !lean_is_exclusive(v_fst_5476_);
if (v_isSharedCheck_5646_ == 0)
{
lean_object* v_unused_5647_; lean_object* v_unused_5648_; lean_object* v_unused_5649_; 
v_unused_5647_ = lean_ctor_get(v_fst_5476_, 2);
lean_dec(v_unused_5647_);
v_unused_5648_ = lean_ctor_get(v_fst_5476_, 1);
lean_dec(v_unused_5648_);
v_unused_5649_ = lean_ctor_get(v_fst_5476_, 0);
lean_dec(v_unused_5649_);
v___x_5563_ = v_fst_5476_;
v_isShared_5564_ = v_isSharedCheck_5646_;
goto v_resetjp_5562_;
}
else
{
lean_dec(v_fst_5476_);
v___x_5563_ = lean_box(0);
v_isShared_5564_ = v_isSharedCheck_5646_;
goto v_resetjp_5562_;
}
v_resetjp_5562_:
{
lean_object* v_array_5565_; lean_object* v_start_5566_; lean_object* v_stop_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5571_; 
v_array_5565_ = lean_ctor_get(v_fst_5472_, 0);
v_start_5566_ = lean_ctor_get(v_fst_5472_, 1);
v_stop_5567_ = lean_ctor_get(v_fst_5472_, 2);
v___x_5568_ = lean_array_fget(v_array_5537_, v_start_5538_);
v___x_5569_ = lean_nat_add(v_start_5538_, v___x_5512_);
lean_dec(v_start_5538_);
if (v_isShared_5564_ == 0)
{
lean_ctor_set(v___x_5563_, 1, v___x_5569_);
v___x_5571_ = v___x_5563_;
goto v_reusejp_5570_;
}
else
{
lean_object* v_reuseFailAlloc_5645_; 
v_reuseFailAlloc_5645_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5645_, 0, v_array_5537_);
lean_ctor_set(v_reuseFailAlloc_5645_, 1, v___x_5569_);
lean_ctor_set(v_reuseFailAlloc_5645_, 2, v_stop_5539_);
v___x_5571_ = v_reuseFailAlloc_5645_;
goto v_reusejp_5570_;
}
v_reusejp_5570_:
{
uint8_t v___x_5572_; 
v___x_5572_ = lean_nat_dec_lt(v_start_5566_, v_stop_5567_);
if (v___x_5572_ == 0)
{
lean_object* v___x_5574_; 
lean_dec(v___x_5568_);
lean_dec(v___x_5540_);
lean_dec(v___x_5511_);
if (v_isShared_5483_ == 0)
{
lean_ctor_set(v___x_5482_, 1, v___x_5515_);
lean_ctor_set(v___x_5482_, 0, v___x_5543_);
v___x_5574_ = v___x_5482_;
goto v_reusejp_5573_;
}
else
{
lean_object* v_reuseFailAlloc_5589_; 
v_reuseFailAlloc_5589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5589_, 0, v___x_5543_);
lean_ctor_set(v_reuseFailAlloc_5589_, 1, v___x_5515_);
v___x_5574_ = v_reuseFailAlloc_5589_;
goto v_reusejp_5573_;
}
v_reusejp_5573_:
{
lean_object* v___x_5576_; 
if (v_isShared_5479_ == 0)
{
lean_ctor_set(v___x_5478_, 1, v___x_5574_);
lean_ctor_set(v___x_5478_, 0, v___x_5571_);
v___x_5576_ = v___x_5478_;
goto v_reusejp_5575_;
}
else
{
lean_object* v_reuseFailAlloc_5588_; 
v_reuseFailAlloc_5588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5588_, 0, v___x_5571_);
lean_ctor_set(v_reuseFailAlloc_5588_, 1, v___x_5574_);
v___x_5576_ = v_reuseFailAlloc_5588_;
goto v_reusejp_5575_;
}
v_reusejp_5575_:
{
lean_object* v___x_5578_; 
if (v_isShared_5475_ == 0)
{
lean_ctor_set(v___x_5474_, 1, v___x_5576_);
v___x_5578_ = v___x_5474_;
goto v_reusejp_5577_;
}
else
{
lean_object* v_reuseFailAlloc_5587_; 
v_reuseFailAlloc_5587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5587_, 0, v_fst_5472_);
lean_ctor_set(v_reuseFailAlloc_5587_, 1, v___x_5576_);
v___x_5578_ = v_reuseFailAlloc_5587_;
goto v_reusejp_5577_;
}
v_reusejp_5577_:
{
lean_object* v___x_5580_; 
if (v_isShared_5471_ == 0)
{
lean_ctor_set(v___x_5470_, 1, v___x_5578_);
v___x_5580_ = v___x_5470_;
goto v_reusejp_5579_;
}
else
{
lean_object* v_reuseFailAlloc_5586_; 
v_reuseFailAlloc_5586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5586_, 0, v_fst_5468_);
lean_ctor_set(v_reuseFailAlloc_5586_, 1, v___x_5578_);
v___x_5580_ = v_reuseFailAlloc_5586_;
goto v_reusejp_5579_;
}
v_reusejp_5579_:
{
lean_object* v___x_5582_; 
if (v_isShared_5467_ == 0)
{
lean_ctor_set(v___x_5466_, 1, v___x_5580_);
v___x_5582_ = v___x_5466_;
goto v_reusejp_5581_;
}
else
{
lean_object* v_reuseFailAlloc_5585_; 
v_reuseFailAlloc_5585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5585_, 0, v_fst_5464_);
lean_ctor_set(v_reuseFailAlloc_5585_, 1, v___x_5580_);
v___x_5582_ = v_reuseFailAlloc_5585_;
goto v_reusejp_5581_;
}
v_reusejp_5581_:
{
lean_object* v___x_5583_; lean_object* v___f_5584_; 
v___x_5583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5583_, 0, v___x_5582_);
v___f_5584_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5584_, 0, v___x_5583_);
v___y_5434_ = v___f_5584_;
goto v___jp_5433_;
}
}
}
}
}
}
else
{
lean_object* v___x_5591_; uint8_t v_isShared_5592_; uint8_t v_isSharedCheck_5641_; 
lean_inc(v_stop_5567_);
lean_inc(v_start_5566_);
lean_inc_ref(v_array_5565_);
v_isSharedCheck_5641_ = !lean_is_exclusive(v_fst_5472_);
if (v_isSharedCheck_5641_ == 0)
{
lean_object* v_unused_5642_; lean_object* v_unused_5643_; lean_object* v_unused_5644_; 
v_unused_5642_ = lean_ctor_get(v_fst_5472_, 2);
lean_dec(v_unused_5642_);
v_unused_5643_ = lean_ctor_get(v_fst_5472_, 1);
lean_dec(v_unused_5643_);
v_unused_5644_ = lean_ctor_get(v_fst_5472_, 0);
lean_dec(v_unused_5644_);
v___x_5591_ = v_fst_5472_;
v_isShared_5592_ = v_isSharedCheck_5641_;
goto v_resetjp_5590_;
}
else
{
lean_dec(v_fst_5472_);
v___x_5591_ = lean_box(0);
v_isShared_5592_ = v_isSharedCheck_5641_;
goto v_resetjp_5590_;
}
v_resetjp_5590_:
{
lean_object* v_array_5593_; lean_object* v_start_5594_; lean_object* v_stop_5595_; lean_object* v___x_5596_; lean_object* v___x_5597_; lean_object* v___x_5599_; 
v_array_5593_ = lean_ctor_get(v_fst_5468_, 0);
v_start_5594_ = lean_ctor_get(v_fst_5468_, 1);
v_stop_5595_ = lean_ctor_get(v_fst_5468_, 2);
v___x_5596_ = lean_array_fget(v_array_5565_, v_start_5566_);
v___x_5597_ = lean_nat_add(v_start_5566_, v___x_5512_);
lean_dec(v_start_5566_);
if (v_isShared_5592_ == 0)
{
lean_ctor_set(v___x_5591_, 1, v___x_5597_);
v___x_5599_ = v___x_5591_;
goto v_reusejp_5598_;
}
else
{
lean_object* v_reuseFailAlloc_5640_; 
v_reuseFailAlloc_5640_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5640_, 0, v_array_5565_);
lean_ctor_set(v_reuseFailAlloc_5640_, 1, v___x_5597_);
lean_ctor_set(v_reuseFailAlloc_5640_, 2, v_stop_5567_);
v___x_5599_ = v_reuseFailAlloc_5640_;
goto v_reusejp_5598_;
}
v_reusejp_5598_:
{
uint8_t v___x_5600_; 
v___x_5600_ = lean_nat_dec_lt(v_start_5594_, v_stop_5595_);
if (v___x_5600_ == 0)
{
lean_object* v___x_5602_; 
lean_dec(v___x_5596_);
lean_dec(v___x_5568_);
lean_dec(v___x_5540_);
lean_dec(v___x_5511_);
if (v_isShared_5483_ == 0)
{
lean_ctor_set(v___x_5482_, 1, v___x_5515_);
lean_ctor_set(v___x_5482_, 0, v___x_5543_);
v___x_5602_ = v___x_5482_;
goto v_reusejp_5601_;
}
else
{
lean_object* v_reuseFailAlloc_5617_; 
v_reuseFailAlloc_5617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5617_, 0, v___x_5543_);
lean_ctor_set(v_reuseFailAlloc_5617_, 1, v___x_5515_);
v___x_5602_ = v_reuseFailAlloc_5617_;
goto v_reusejp_5601_;
}
v_reusejp_5601_:
{
lean_object* v___x_5604_; 
if (v_isShared_5479_ == 0)
{
lean_ctor_set(v___x_5478_, 1, v___x_5602_);
lean_ctor_set(v___x_5478_, 0, v___x_5571_);
v___x_5604_ = v___x_5478_;
goto v_reusejp_5603_;
}
else
{
lean_object* v_reuseFailAlloc_5616_; 
v_reuseFailAlloc_5616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5616_, 0, v___x_5571_);
lean_ctor_set(v_reuseFailAlloc_5616_, 1, v___x_5602_);
v___x_5604_ = v_reuseFailAlloc_5616_;
goto v_reusejp_5603_;
}
v_reusejp_5603_:
{
lean_object* v___x_5606_; 
if (v_isShared_5475_ == 0)
{
lean_ctor_set(v___x_5474_, 1, v___x_5604_);
lean_ctor_set(v___x_5474_, 0, v___x_5599_);
v___x_5606_ = v___x_5474_;
goto v_reusejp_5605_;
}
else
{
lean_object* v_reuseFailAlloc_5615_; 
v_reuseFailAlloc_5615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5615_, 0, v___x_5599_);
lean_ctor_set(v_reuseFailAlloc_5615_, 1, v___x_5604_);
v___x_5606_ = v_reuseFailAlloc_5615_;
goto v_reusejp_5605_;
}
v_reusejp_5605_:
{
lean_object* v___x_5608_; 
if (v_isShared_5471_ == 0)
{
lean_ctor_set(v___x_5470_, 1, v___x_5606_);
v___x_5608_ = v___x_5470_;
goto v_reusejp_5607_;
}
else
{
lean_object* v_reuseFailAlloc_5614_; 
v_reuseFailAlloc_5614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5614_, 0, v_fst_5468_);
lean_ctor_set(v_reuseFailAlloc_5614_, 1, v___x_5606_);
v___x_5608_ = v_reuseFailAlloc_5614_;
goto v_reusejp_5607_;
}
v_reusejp_5607_:
{
lean_object* v___x_5610_; 
if (v_isShared_5467_ == 0)
{
lean_ctor_set(v___x_5466_, 1, v___x_5608_);
v___x_5610_ = v___x_5466_;
goto v_reusejp_5609_;
}
else
{
lean_object* v_reuseFailAlloc_5613_; 
v_reuseFailAlloc_5613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5613_, 0, v_fst_5464_);
lean_ctor_set(v_reuseFailAlloc_5613_, 1, v___x_5608_);
v___x_5610_ = v_reuseFailAlloc_5613_;
goto v_reusejp_5609_;
}
v_reusejp_5609_:
{
lean_object* v___x_5611_; lean_object* v___f_5612_; 
v___x_5611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5611_, 0, v___x_5610_);
v___f_5612_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5612_, 0, v___x_5611_);
v___y_5434_ = v___f_5612_;
goto v___jp_5433_;
}
}
}
}
}
}
else
{
lean_object* v___x_5619_; uint8_t v_isShared_5620_; uint8_t v_isSharedCheck_5636_; 
lean_inc(v_stop_5595_);
lean_inc(v_start_5594_);
lean_inc_ref(v_array_5593_);
lean_del_object(v___x_5482_);
lean_del_object(v___x_5478_);
lean_del_object(v___x_5474_);
lean_del_object(v___x_5470_);
lean_del_object(v___x_5466_);
v_isSharedCheck_5636_ = !lean_is_exclusive(v_fst_5468_);
if (v_isSharedCheck_5636_ == 0)
{
lean_object* v_unused_5637_; lean_object* v_unused_5638_; lean_object* v_unused_5639_; 
v_unused_5637_ = lean_ctor_get(v_fst_5468_, 2);
lean_dec(v_unused_5637_);
v_unused_5638_ = lean_ctor_get(v_fst_5468_, 1);
lean_dec(v_unused_5638_);
v_unused_5639_ = lean_ctor_get(v_fst_5468_, 0);
lean_dec(v_unused_5639_);
v___x_5619_ = v_fst_5468_;
v_isShared_5620_ = v_isSharedCheck_5636_;
goto v_resetjp_5618_;
}
else
{
lean_dec(v_fst_5468_);
v___x_5619_ = lean_box(0);
v_isShared_5620_ = v_isSharedCheck_5636_;
goto v_resetjp_5618_;
}
v_resetjp_5618_:
{
lean_object* v_numOverlaps_5621_; lean_object* v___x_5622_; uint8_t v___x_5623_; 
v_numOverlaps_5621_ = lean_ctor_get(v___x_5596_, 1);
v___x_5622_ = lean_unsigned_to_nat(0u);
v___x_5623_ = lean_nat_dec_eq(v_numOverlaps_5621_, v___x_5622_);
if (v___x_5623_ == 0)
{
lean_object* v___x_5624_; lean_object* v___x_5625_; 
lean_del_object(v___x_5619_);
lean_dec_ref(v___x_5599_);
lean_dec(v___x_5596_);
lean_dec(v_stop_5595_);
lean_dec(v_start_5594_);
lean_dec_ref(v_array_5593_);
lean_dec_ref(v___x_5571_);
lean_dec(v___x_5568_);
lean_dec_ref(v___x_5543_);
lean_dec(v___x_5540_);
lean_dec_ref(v___x_5515_);
lean_dec(v___x_5511_);
lean_dec(v_fst_5464_);
v___x_5624_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1);
v___x_5625_ = lean_alloc_closure((void*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___boxed), 6, 1);
lean_closure_set(v___x_5625_, 0, v___x_5624_);
v___y_5434_ = v___x_5625_;
goto v___jp_5433_;
}
else
{
uint8_t v___x_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___f_5630_; lean_object* v___x_5631_; lean_object* v___x_5633_; 
v___x_5626_ = 0;
v___x_5627_ = lean_array_fget_borrowed(v_array_5593_, v_start_5594_);
v___x_5628_ = lean_box(v___x_5626_);
v___x_5629_ = lean_box(v_useSplitter_5423_);
lean_inc(v___x_5596_);
lean_inc(v_numDiscrEqs_5425_);
lean_inc(v_extraEqualities_5424_);
lean_inc(v___x_5627_);
lean_inc(v_a_5426_);
lean_inc_ref(v_onAlt_5422_);
v___f_5630_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed), 18, 11);
lean_closure_set(v___f_5630_, 0, v___x_5568_);
lean_closure_set(v___f_5630_, 1, v_onAlt_5422_);
lean_closure_set(v___f_5630_, 2, v_a_5426_);
lean_closure_set(v___f_5630_, 3, v___x_5628_);
lean_closure_set(v___f_5630_, 4, v___x_5629_);
lean_closure_set(v___f_5630_, 5, v___x_5627_);
lean_closure_set(v___f_5630_, 6, v_extraEqualities_5424_);
lean_closure_set(v___f_5630_, 7, v_numDiscrEqs_5425_);
lean_closure_set(v___f_5630_, 8, v___x_5511_);
lean_closure_set(v___f_5630_, 9, v___x_5596_);
lean_closure_set(v___f_5630_, 10, v___x_5512_);
v___x_5631_ = lean_nat_add(v_start_5594_, v___x_5512_);
lean_dec(v_start_5594_);
if (v_isShared_5620_ == 0)
{
lean_ctor_set(v___x_5619_, 1, v___x_5631_);
v___x_5633_ = v___x_5619_;
goto v_reusejp_5632_;
}
else
{
lean_object* v_reuseFailAlloc_5635_; 
v_reuseFailAlloc_5635_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5635_, 0, v_array_5593_);
lean_ctor_set(v_reuseFailAlloc_5635_, 1, v___x_5631_);
lean_ctor_set(v_reuseFailAlloc_5635_, 2, v_stop_5595_);
v___x_5633_ = v_reuseFailAlloc_5635_;
goto v_reusejp_5632_;
}
v_reusejp_5632_:
{
lean_object* v___f_5634_; 
v___f_5634_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed), 14, 9);
lean_closure_set(v___f_5634_, 0, v___x_5540_);
lean_closure_set(v___f_5634_, 1, v___x_5596_);
lean_closure_set(v___f_5634_, 2, v___f_5630_);
lean_closure_set(v___f_5634_, 3, v_fst_5464_);
lean_closure_set(v___f_5634_, 4, v___x_5543_);
lean_closure_set(v___f_5634_, 5, v___x_5515_);
lean_closure_set(v___f_5634_, 6, v___x_5571_);
lean_closure_set(v___f_5634_, 7, v___x_5599_);
lean_closure_set(v___f_5634_, 8, v___x_5633_);
v___y_5434_ = v___f_5634_;
goto v___jp_5433_;
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
}
}
}
}
v___jp_5433_:
{
lean_object* v___x_5435_; 
lean_inc(v___y_5431_);
lean_inc_ref(v___y_5430_);
lean_inc(v___y_5429_);
lean_inc_ref(v___y_5428_);
v___x_5435_ = lean_apply_5(v___y_5434_, v___y_5428_, v___y_5429_, v___y_5430_, v___y_5431_, lean_box(0));
if (lean_obj_tag(v___x_5435_) == 0)
{
lean_object* v_a_5436_; lean_object* v___x_5438_; uint8_t v_isShared_5439_; uint8_t v_isSharedCheck_5448_; 
v_a_5436_ = lean_ctor_get(v___x_5435_, 0);
v_isSharedCheck_5448_ = !lean_is_exclusive(v___x_5435_);
if (v_isSharedCheck_5448_ == 0)
{
v___x_5438_ = v___x_5435_;
v_isShared_5439_ = v_isSharedCheck_5448_;
goto v_resetjp_5437_;
}
else
{
lean_inc(v_a_5436_);
lean_dec(v___x_5435_);
v___x_5438_ = lean_box(0);
v_isShared_5439_ = v_isSharedCheck_5448_;
goto v_resetjp_5437_;
}
v_resetjp_5437_:
{
if (lean_obj_tag(v_a_5436_) == 0)
{
lean_object* v_a_5440_; lean_object* v___x_5442_; 
lean_dec(v_a_5426_);
lean_dec(v_numDiscrEqs_5425_);
lean_dec(v_extraEqualities_5424_);
lean_dec_ref(v_onAlt_5422_);
v_a_5440_ = lean_ctor_get(v_a_5436_, 0);
lean_inc(v_a_5440_);
lean_dec_ref_known(v_a_5436_, 1);
if (v_isShared_5439_ == 0)
{
lean_ctor_set(v___x_5438_, 0, v_a_5440_);
v___x_5442_ = v___x_5438_;
goto v_reusejp_5441_;
}
else
{
lean_object* v_reuseFailAlloc_5443_; 
v_reuseFailAlloc_5443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5443_, 0, v_a_5440_);
v___x_5442_ = v_reuseFailAlloc_5443_;
goto v_reusejp_5441_;
}
v_reusejp_5441_:
{
return v___x_5442_;
}
}
else
{
lean_object* v_a_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; 
lean_del_object(v___x_5438_);
v_a_5444_ = lean_ctor_get(v_a_5436_, 0);
lean_inc(v_a_5444_);
lean_dec_ref_known(v_a_5436_, 1);
v___x_5445_ = lean_unsigned_to_nat(1u);
v___x_5446_ = lean_nat_add(v_a_5426_, v___x_5445_);
lean_dec(v_a_5426_);
v_a_5426_ = v___x_5446_;
v_b_5427_ = v_a_5444_;
goto _start;
}
}
}
else
{
lean_object* v_a_5449_; lean_object* v___x_5451_; uint8_t v_isShared_5452_; uint8_t v_isSharedCheck_5456_; 
lean_dec(v_a_5426_);
lean_dec(v_numDiscrEqs_5425_);
lean_dec(v_extraEqualities_5424_);
lean_dec_ref(v_onAlt_5422_);
v_a_5449_ = lean_ctor_get(v___x_5435_, 0);
v_isSharedCheck_5456_ = !lean_is_exclusive(v___x_5435_);
if (v_isSharedCheck_5456_ == 0)
{
v___x_5451_ = v___x_5435_;
v_isShared_5452_ = v_isSharedCheck_5456_;
goto v_resetjp_5450_;
}
else
{
lean_inc(v_a_5449_);
lean_dec(v___x_5435_);
v___x_5451_ = lean_box(0);
v_isShared_5452_ = v_isSharedCheck_5456_;
goto v_resetjp_5450_;
}
v_resetjp_5450_:
{
lean_object* v___x_5454_; 
if (v_isShared_5452_ == 0)
{
v___x_5454_ = v___x_5451_;
goto v_reusejp_5453_;
}
else
{
lean_object* v_reuseFailAlloc_5455_; 
v_reuseFailAlloc_5455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5455_, 0, v_a_5449_);
v___x_5454_ = v_reuseFailAlloc_5455_;
goto v_reusejp_5453_;
}
v_reusejp_5453_:
{
return v___x_5454_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___boxed(lean_object* v_upperBound_5670_, lean_object* v_onAlt_5671_, lean_object* v_useSplitter_5672_, lean_object* v_extraEqualities_5673_, lean_object* v_numDiscrEqs_5674_, lean_object* v_a_5675_, lean_object* v_b_5676_, lean_object* v___y_5677_, lean_object* v___y_5678_, lean_object* v___y_5679_, lean_object* v___y_5680_, lean_object* v___y_5681_){
_start:
{
uint8_t v_useSplitter_boxed_5682_; lean_object* v_res_5683_; 
v_useSplitter_boxed_5682_ = lean_unbox(v_useSplitter_5672_);
v_res_5683_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v_upperBound_5670_, v_onAlt_5671_, v_useSplitter_boxed_5682_, v_extraEqualities_5673_, v_numDiscrEqs_5674_, v_a_5675_, v_b_5676_, v___y_5677_, v___y_5678_, v___y_5679_, v___y_5680_);
lean_dec(v___y_5680_);
lean_dec_ref(v___y_5679_);
lean_dec(v___y_5678_);
lean_dec_ref(v___y_5677_);
lean_dec(v_upperBound_5670_);
return v_res_5683_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(uint8_t v_addEqualities_5684_, lean_object* v_as_5685_, size_t v_sz_5686_, size_t v_i_5687_, lean_object* v_b_5688_, lean_object* v___y_5689_, lean_object* v___y_5690_, lean_object* v___y_5691_, lean_object* v___y_5692_){
_start:
{
lean_object* v_a_5695_; uint8_t v___x_5699_; 
v___x_5699_ = lean_usize_dec_lt(v_i_5687_, v_sz_5686_);
if (v___x_5699_ == 0)
{
lean_object* v___x_5700_; 
v___x_5700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5700_, 0, v_b_5688_);
return v___x_5700_;
}
else
{
lean_object* v_snd_5701_; lean_object* v_snd_5702_; lean_object* v_snd_5703_; lean_object* v_snd_5704_; lean_object* v_fst_5705_; lean_object* v___x_5707_; uint8_t v_isShared_5708_; uint8_t v_isSharedCheck_5851_; 
v_snd_5701_ = lean_ctor_get(v_b_5688_, 1);
lean_inc(v_snd_5701_);
v_snd_5702_ = lean_ctor_get(v_snd_5701_, 1);
lean_inc(v_snd_5702_);
v_snd_5703_ = lean_ctor_get(v_snd_5702_, 1);
lean_inc(v_snd_5703_);
v_snd_5704_ = lean_ctor_get(v_snd_5703_, 1);
lean_inc(v_snd_5704_);
v_fst_5705_ = lean_ctor_get(v_b_5688_, 0);
v_isSharedCheck_5851_ = !lean_is_exclusive(v_b_5688_);
if (v_isSharedCheck_5851_ == 0)
{
lean_object* v_unused_5852_; 
v_unused_5852_ = lean_ctor_get(v_b_5688_, 1);
lean_dec(v_unused_5852_);
v___x_5707_ = v_b_5688_;
v_isShared_5708_ = v_isSharedCheck_5851_;
goto v_resetjp_5706_;
}
else
{
lean_inc(v_fst_5705_);
lean_dec(v_b_5688_);
v___x_5707_ = lean_box(0);
v_isShared_5708_ = v_isSharedCheck_5851_;
goto v_resetjp_5706_;
}
v_resetjp_5706_:
{
lean_object* v_fst_5709_; lean_object* v___x_5711_; uint8_t v_isShared_5712_; uint8_t v_isSharedCheck_5849_; 
v_fst_5709_ = lean_ctor_get(v_snd_5701_, 0);
v_isSharedCheck_5849_ = !lean_is_exclusive(v_snd_5701_);
if (v_isSharedCheck_5849_ == 0)
{
lean_object* v_unused_5850_; 
v_unused_5850_ = lean_ctor_get(v_snd_5701_, 1);
lean_dec(v_unused_5850_);
v___x_5711_ = v_snd_5701_;
v_isShared_5712_ = v_isSharedCheck_5849_;
goto v_resetjp_5710_;
}
else
{
lean_inc(v_fst_5709_);
lean_dec(v_snd_5701_);
v___x_5711_ = lean_box(0);
v_isShared_5712_ = v_isSharedCheck_5849_;
goto v_resetjp_5710_;
}
v_resetjp_5710_:
{
lean_object* v_fst_5713_; lean_object* v___x_5715_; uint8_t v_isShared_5716_; uint8_t v_isSharedCheck_5847_; 
v_fst_5713_ = lean_ctor_get(v_snd_5702_, 0);
v_isSharedCheck_5847_ = !lean_is_exclusive(v_snd_5702_);
if (v_isSharedCheck_5847_ == 0)
{
lean_object* v_unused_5848_; 
v_unused_5848_ = lean_ctor_get(v_snd_5702_, 1);
lean_dec(v_unused_5848_);
v___x_5715_ = v_snd_5702_;
v_isShared_5716_ = v_isSharedCheck_5847_;
goto v_resetjp_5714_;
}
else
{
lean_inc(v_fst_5713_);
lean_dec(v_snd_5702_);
v___x_5715_ = lean_box(0);
v_isShared_5716_ = v_isSharedCheck_5847_;
goto v_resetjp_5714_;
}
v_resetjp_5714_:
{
lean_object* v_fst_5717_; lean_object* v___x_5719_; uint8_t v_isShared_5720_; uint8_t v_isSharedCheck_5845_; 
v_fst_5717_ = lean_ctor_get(v_snd_5703_, 0);
v_isSharedCheck_5845_ = !lean_is_exclusive(v_snd_5703_);
if (v_isSharedCheck_5845_ == 0)
{
lean_object* v_unused_5846_; 
v_unused_5846_ = lean_ctor_get(v_snd_5703_, 1);
lean_dec(v_unused_5846_);
v___x_5719_ = v_snd_5703_;
v_isShared_5720_ = v_isSharedCheck_5845_;
goto v_resetjp_5718_;
}
else
{
lean_inc(v_fst_5717_);
lean_dec(v_snd_5703_);
v___x_5719_ = lean_box(0);
v_isShared_5720_ = v_isSharedCheck_5845_;
goto v_resetjp_5718_;
}
v_resetjp_5718_:
{
lean_object* v_array_5721_; lean_object* v_start_5722_; lean_object* v_stop_5723_; uint8_t v___x_5724_; 
v_array_5721_ = lean_ctor_get(v_snd_5704_, 0);
v_start_5722_ = lean_ctor_get(v_snd_5704_, 1);
v_stop_5723_ = lean_ctor_get(v_snd_5704_, 2);
v___x_5724_ = lean_nat_dec_lt(v_start_5722_, v_stop_5723_);
if (v___x_5724_ == 0)
{
lean_object* v___x_5726_; 
if (v_isShared_5720_ == 0)
{
v___x_5726_ = v___x_5719_;
goto v_reusejp_5725_;
}
else
{
lean_object* v_reuseFailAlloc_5737_; 
v_reuseFailAlloc_5737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5737_, 0, v_fst_5717_);
lean_ctor_set(v_reuseFailAlloc_5737_, 1, v_snd_5704_);
v___x_5726_ = v_reuseFailAlloc_5737_;
goto v_reusejp_5725_;
}
v_reusejp_5725_:
{
lean_object* v___x_5728_; 
if (v_isShared_5716_ == 0)
{
lean_ctor_set(v___x_5715_, 1, v___x_5726_);
v___x_5728_ = v___x_5715_;
goto v_reusejp_5727_;
}
else
{
lean_object* v_reuseFailAlloc_5736_; 
v_reuseFailAlloc_5736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5736_, 0, v_fst_5713_);
lean_ctor_set(v_reuseFailAlloc_5736_, 1, v___x_5726_);
v___x_5728_ = v_reuseFailAlloc_5736_;
goto v_reusejp_5727_;
}
v_reusejp_5727_:
{
lean_object* v___x_5730_; 
if (v_isShared_5712_ == 0)
{
lean_ctor_set(v___x_5711_, 1, v___x_5728_);
v___x_5730_ = v___x_5711_;
goto v_reusejp_5729_;
}
else
{
lean_object* v_reuseFailAlloc_5735_; 
v_reuseFailAlloc_5735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5735_, 0, v_fst_5709_);
lean_ctor_set(v_reuseFailAlloc_5735_, 1, v___x_5728_);
v___x_5730_ = v_reuseFailAlloc_5735_;
goto v_reusejp_5729_;
}
v_reusejp_5729_:
{
lean_object* v___x_5732_; 
if (v_isShared_5708_ == 0)
{
lean_ctor_set(v___x_5707_, 1, v___x_5730_);
v___x_5732_ = v___x_5707_;
goto v_reusejp_5731_;
}
else
{
lean_object* v_reuseFailAlloc_5734_; 
v_reuseFailAlloc_5734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5734_, 0, v_fst_5705_);
lean_ctor_set(v_reuseFailAlloc_5734_, 1, v___x_5730_);
v___x_5732_ = v_reuseFailAlloc_5734_;
goto v_reusejp_5731_;
}
v_reusejp_5731_:
{
lean_object* v___x_5733_; 
v___x_5733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5733_, 0, v___x_5732_);
return v___x_5733_;
}
}
}
}
}
else
{
lean_object* v___x_5739_; uint8_t v_isShared_5740_; uint8_t v_isSharedCheck_5841_; 
lean_inc(v_stop_5723_);
lean_inc(v_start_5722_);
lean_inc_ref(v_array_5721_);
v_isSharedCheck_5841_ = !lean_is_exclusive(v_snd_5704_);
if (v_isSharedCheck_5841_ == 0)
{
lean_object* v_unused_5842_; lean_object* v_unused_5843_; lean_object* v_unused_5844_; 
v_unused_5842_ = lean_ctor_get(v_snd_5704_, 2);
lean_dec(v_unused_5842_);
v_unused_5843_ = lean_ctor_get(v_snd_5704_, 1);
lean_dec(v_unused_5843_);
v_unused_5844_ = lean_ctor_get(v_snd_5704_, 0);
lean_dec(v_unused_5844_);
v___x_5739_ = v_snd_5704_;
v_isShared_5740_ = v_isSharedCheck_5841_;
goto v_resetjp_5738_;
}
else
{
lean_dec(v_snd_5704_);
v___x_5739_ = lean_box(0);
v_isShared_5740_ = v_isSharedCheck_5841_;
goto v_resetjp_5738_;
}
v_resetjp_5738_:
{
lean_object* v_array_5741_; lean_object* v_start_5742_; lean_object* v_stop_5743_; lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5748_; 
v_array_5741_ = lean_ctor_get(v_fst_5717_, 0);
v_start_5742_ = lean_ctor_get(v_fst_5717_, 1);
v_stop_5743_ = lean_ctor_get(v_fst_5717_, 2);
v___x_5744_ = lean_array_fget(v_array_5721_, v_start_5722_);
v___x_5745_ = lean_unsigned_to_nat(1u);
v___x_5746_ = lean_nat_add(v_start_5722_, v___x_5745_);
lean_dec(v_start_5722_);
if (v_isShared_5740_ == 0)
{
lean_ctor_set(v___x_5739_, 1, v___x_5746_);
v___x_5748_ = v___x_5739_;
goto v_reusejp_5747_;
}
else
{
lean_object* v_reuseFailAlloc_5840_; 
v_reuseFailAlloc_5840_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5840_, 0, v_array_5721_);
lean_ctor_set(v_reuseFailAlloc_5840_, 1, v___x_5746_);
lean_ctor_set(v_reuseFailAlloc_5840_, 2, v_stop_5723_);
v___x_5748_ = v_reuseFailAlloc_5840_;
goto v_reusejp_5747_;
}
v_reusejp_5747_:
{
uint8_t v___x_5749_; 
v___x_5749_ = lean_nat_dec_lt(v_start_5742_, v_stop_5743_);
if (v___x_5749_ == 0)
{
lean_object* v___x_5751_; 
lean_dec(v___x_5744_);
if (v_isShared_5720_ == 0)
{
lean_ctor_set(v___x_5719_, 1, v___x_5748_);
v___x_5751_ = v___x_5719_;
goto v_reusejp_5750_;
}
else
{
lean_object* v_reuseFailAlloc_5762_; 
v_reuseFailAlloc_5762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5762_, 0, v_fst_5717_);
lean_ctor_set(v_reuseFailAlloc_5762_, 1, v___x_5748_);
v___x_5751_ = v_reuseFailAlloc_5762_;
goto v_reusejp_5750_;
}
v_reusejp_5750_:
{
lean_object* v___x_5753_; 
if (v_isShared_5716_ == 0)
{
lean_ctor_set(v___x_5715_, 1, v___x_5751_);
v___x_5753_ = v___x_5715_;
goto v_reusejp_5752_;
}
else
{
lean_object* v_reuseFailAlloc_5761_; 
v_reuseFailAlloc_5761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5761_, 0, v_fst_5713_);
lean_ctor_set(v_reuseFailAlloc_5761_, 1, v___x_5751_);
v___x_5753_ = v_reuseFailAlloc_5761_;
goto v_reusejp_5752_;
}
v_reusejp_5752_:
{
lean_object* v___x_5755_; 
if (v_isShared_5712_ == 0)
{
lean_ctor_set(v___x_5711_, 1, v___x_5753_);
v___x_5755_ = v___x_5711_;
goto v_reusejp_5754_;
}
else
{
lean_object* v_reuseFailAlloc_5760_; 
v_reuseFailAlloc_5760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5760_, 0, v_fst_5709_);
lean_ctor_set(v_reuseFailAlloc_5760_, 1, v___x_5753_);
v___x_5755_ = v_reuseFailAlloc_5760_;
goto v_reusejp_5754_;
}
v_reusejp_5754_:
{
lean_object* v___x_5757_; 
if (v_isShared_5708_ == 0)
{
lean_ctor_set(v___x_5707_, 1, v___x_5755_);
v___x_5757_ = v___x_5707_;
goto v_reusejp_5756_;
}
else
{
lean_object* v_reuseFailAlloc_5759_; 
v_reuseFailAlloc_5759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5759_, 0, v_fst_5705_);
lean_ctor_set(v_reuseFailAlloc_5759_, 1, v___x_5755_);
v___x_5757_ = v_reuseFailAlloc_5759_;
goto v_reusejp_5756_;
}
v_reusejp_5756_:
{
lean_object* v___x_5758_; 
v___x_5758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5758_, 0, v___x_5757_);
return v___x_5758_;
}
}
}
}
}
else
{
lean_object* v___x_5764_; uint8_t v_isShared_5765_; uint8_t v_isSharedCheck_5836_; 
lean_inc(v_stop_5743_);
lean_inc(v_start_5742_);
lean_inc_ref(v_array_5741_);
v_isSharedCheck_5836_ = !lean_is_exclusive(v_fst_5717_);
if (v_isSharedCheck_5836_ == 0)
{
lean_object* v_unused_5837_; lean_object* v_unused_5838_; lean_object* v_unused_5839_; 
v_unused_5837_ = lean_ctor_get(v_fst_5717_, 2);
lean_dec(v_unused_5837_);
v_unused_5838_ = lean_ctor_get(v_fst_5717_, 1);
lean_dec(v_unused_5838_);
v_unused_5839_ = lean_ctor_get(v_fst_5717_, 0);
lean_dec(v_unused_5839_);
v___x_5764_ = v_fst_5717_;
v_isShared_5765_ = v_isSharedCheck_5836_;
goto v_resetjp_5763_;
}
else
{
lean_dec(v_fst_5717_);
v___x_5764_ = lean_box(0);
v_isShared_5765_ = v_isSharedCheck_5836_;
goto v_resetjp_5763_;
}
v_resetjp_5763_:
{
lean_object* v___x_5766_; lean_object* v___x_5767_; lean_object* v___x_5769_; 
v___x_5766_ = lean_array_fget(v_array_5741_, v_start_5742_);
v___x_5767_ = lean_nat_add(v_start_5742_, v___x_5745_);
lean_dec(v_start_5742_);
if (v_isShared_5765_ == 0)
{
lean_ctor_set(v___x_5764_, 1, v___x_5767_);
v___x_5769_ = v___x_5764_;
goto v_reusejp_5768_;
}
else
{
lean_object* v_reuseFailAlloc_5835_; 
v_reuseFailAlloc_5835_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5835_, 0, v_array_5741_);
lean_ctor_set(v_reuseFailAlloc_5835_, 1, v___x_5767_);
lean_ctor_set(v_reuseFailAlloc_5835_, 2, v_stop_5743_);
v___x_5769_ = v_reuseFailAlloc_5835_;
goto v_reusejp_5768_;
}
v_reusejp_5768_:
{
if (v_addEqualities_5684_ == 0)
{
lean_dec(v___x_5766_);
goto v___jp_5770_;
}
else
{
if (lean_obj_tag(v___x_5744_) == 0)
{
lean_object* v_a_5786_; lean_object* v___x_5787_; 
lean_del_object(v___x_5719_);
lean_del_object(v___x_5715_);
lean_del_object(v___x_5711_);
lean_del_object(v___x_5707_);
v_a_5786_ = lean_array_uget_borrowed(v_as_5685_, v_i_5687_);
lean_inc(v_a_5786_);
v___x_5787_ = l_Lean_Meta_isProof(v_a_5786_, v___y_5689_, v___y_5690_, v___y_5691_, v___y_5692_);
if (lean_obj_tag(v___x_5787_) == 0)
{
lean_object* v_a_5788_; uint8_t v___x_5789_; 
v_a_5788_ = lean_ctor_get(v___x_5787_, 0);
lean_inc(v_a_5788_);
lean_dec_ref_known(v___x_5787_, 1);
v___x_5789_ = lean_unbox(v_a_5788_);
lean_dec(v_a_5788_);
if (v___x_5789_ == 0)
{
lean_object* v___x_5790_; 
lean_inc(v_a_5786_);
v___x_5790_ = l_Lean_Meta_mkEqHEq(v___x_5766_, v_a_5786_, v___y_5689_, v___y_5690_, v___y_5691_, v___y_5692_);
if (lean_obj_tag(v___x_5790_) == 0)
{
lean_object* v_a_5791_; lean_object* v___x_5792_; 
v_a_5791_ = lean_ctor_get(v___x_5790_, 0);
lean_inc_n(v_a_5791_, 2);
lean_dec_ref_known(v___x_5790_, 1);
v___x_5792_ = l_Lean_mkArrow(v_a_5791_, v_fst_5705_, v___y_5691_, v___y_5692_);
if (lean_obj_tag(v___x_5792_) == 0)
{
lean_object* v_a_5793_; uint8_t v___x_5794_; lean_object* v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5797_; lean_object* v___x_5798_; lean_object* v___x_5799_; lean_object* v___x_5800_; lean_object* v___x_5801_; lean_object* v___x_5802_; lean_object* v___x_5803_; 
v_a_5793_ = lean_ctor_get(v___x_5792_, 0);
lean_inc(v_a_5793_);
lean_dec_ref_known(v___x_5792_, 1);
v___x_5794_ = l_Lean_Expr_isHEq(v_a_5791_);
lean_dec(v_a_5791_);
v___x_5795_ = lean_box(v___x_5794_);
v___x_5796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5796_, 0, v___x_5795_);
v___x_5797_ = lean_array_push(v_fst_5709_, v___x_5796_);
v___x_5798_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__1);
v___x_5799_ = lean_array_push(v_fst_5713_, v___x_5798_);
v___x_5800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5800_, 0, v___x_5769_);
lean_ctor_set(v___x_5800_, 1, v___x_5748_);
v___x_5801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5801_, 0, v___x_5799_);
lean_ctor_set(v___x_5801_, 1, v___x_5800_);
v___x_5802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5802_, 0, v___x_5797_);
lean_ctor_set(v___x_5802_, 1, v___x_5801_);
v___x_5803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5803_, 0, v_a_5793_);
lean_ctor_set(v___x_5803_, 1, v___x_5802_);
v_a_5695_ = v___x_5803_;
goto v___jp_5694_;
}
else
{
lean_object* v_a_5804_; lean_object* v___x_5806_; uint8_t v_isShared_5807_; uint8_t v_isSharedCheck_5811_; 
lean_dec(v_a_5791_);
lean_dec_ref(v___x_5769_);
lean_dec_ref(v___x_5748_);
lean_dec(v_fst_5713_);
lean_dec(v_fst_5709_);
v_a_5804_ = lean_ctor_get(v___x_5792_, 0);
v_isSharedCheck_5811_ = !lean_is_exclusive(v___x_5792_);
if (v_isSharedCheck_5811_ == 0)
{
v___x_5806_ = v___x_5792_;
v_isShared_5807_ = v_isSharedCheck_5811_;
goto v_resetjp_5805_;
}
else
{
lean_inc(v_a_5804_);
lean_dec(v___x_5792_);
v___x_5806_ = lean_box(0);
v_isShared_5807_ = v_isSharedCheck_5811_;
goto v_resetjp_5805_;
}
v_resetjp_5805_:
{
lean_object* v___x_5809_; 
if (v_isShared_5807_ == 0)
{
v___x_5809_ = v___x_5806_;
goto v_reusejp_5808_;
}
else
{
lean_object* v_reuseFailAlloc_5810_; 
v_reuseFailAlloc_5810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5810_, 0, v_a_5804_);
v___x_5809_ = v_reuseFailAlloc_5810_;
goto v_reusejp_5808_;
}
v_reusejp_5808_:
{
return v___x_5809_;
}
}
}
}
else
{
lean_object* v_a_5812_; lean_object* v___x_5814_; uint8_t v_isShared_5815_; uint8_t v_isSharedCheck_5819_; 
lean_dec_ref(v___x_5769_);
lean_dec_ref(v___x_5748_);
lean_dec(v_fst_5713_);
lean_dec(v_fst_5709_);
lean_dec(v_fst_5705_);
v_a_5812_ = lean_ctor_get(v___x_5790_, 0);
v_isSharedCheck_5819_ = !lean_is_exclusive(v___x_5790_);
if (v_isSharedCheck_5819_ == 0)
{
v___x_5814_ = v___x_5790_;
v_isShared_5815_ = v_isSharedCheck_5819_;
goto v_resetjp_5813_;
}
else
{
lean_inc(v_a_5812_);
lean_dec(v___x_5790_);
v___x_5814_ = lean_box(0);
v_isShared_5815_ = v_isSharedCheck_5819_;
goto v_resetjp_5813_;
}
v_resetjp_5813_:
{
lean_object* v___x_5817_; 
if (v_isShared_5815_ == 0)
{
v___x_5817_ = v___x_5814_;
goto v_reusejp_5816_;
}
else
{
lean_object* v_reuseFailAlloc_5818_; 
v_reuseFailAlloc_5818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5818_, 0, v_a_5812_);
v___x_5817_ = v_reuseFailAlloc_5818_;
goto v_reusejp_5816_;
}
v_reusejp_5816_:
{
return v___x_5817_;
}
}
}
}
else
{
lean_object* v___x_5820_; lean_object* v___x_5821_; lean_object* v___x_5822_; lean_object* v___x_5823_; lean_object* v___x_5824_; lean_object* v___x_5825_; lean_object* v___x_5826_; 
lean_dec(v___x_5766_);
v___x_5820_ = lean_box(0);
v___x_5821_ = lean_array_push(v_fst_5709_, v___x_5820_);
v___x_5822_ = lean_array_push(v_fst_5713_, v___x_5744_);
v___x_5823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5823_, 0, v___x_5769_);
lean_ctor_set(v___x_5823_, 1, v___x_5748_);
v___x_5824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5824_, 0, v___x_5822_);
lean_ctor_set(v___x_5824_, 1, v___x_5823_);
v___x_5825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5825_, 0, v___x_5821_);
lean_ctor_set(v___x_5825_, 1, v___x_5824_);
v___x_5826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5826_, 0, v_fst_5705_);
lean_ctor_set(v___x_5826_, 1, v___x_5825_);
v_a_5695_ = v___x_5826_;
goto v___jp_5694_;
}
}
else
{
lean_object* v_a_5827_; lean_object* v___x_5829_; uint8_t v_isShared_5830_; uint8_t v_isSharedCheck_5834_; 
lean_dec_ref(v___x_5769_);
lean_dec(v___x_5766_);
lean_dec_ref(v___x_5748_);
lean_dec(v_fst_5713_);
lean_dec(v_fst_5709_);
lean_dec(v_fst_5705_);
v_a_5827_ = lean_ctor_get(v___x_5787_, 0);
v_isSharedCheck_5834_ = !lean_is_exclusive(v___x_5787_);
if (v_isSharedCheck_5834_ == 0)
{
v___x_5829_ = v___x_5787_;
v_isShared_5830_ = v_isSharedCheck_5834_;
goto v_resetjp_5828_;
}
else
{
lean_inc(v_a_5827_);
lean_dec(v___x_5787_);
v___x_5829_ = lean_box(0);
v_isShared_5830_ = v_isSharedCheck_5834_;
goto v_resetjp_5828_;
}
v_resetjp_5828_:
{
lean_object* v___x_5832_; 
if (v_isShared_5830_ == 0)
{
v___x_5832_ = v___x_5829_;
goto v_reusejp_5831_;
}
else
{
lean_object* v_reuseFailAlloc_5833_; 
v_reuseFailAlloc_5833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5833_, 0, v_a_5827_);
v___x_5832_ = v_reuseFailAlloc_5833_;
goto v_reusejp_5831_;
}
v_reusejp_5831_:
{
return v___x_5832_;
}
}
}
}
else
{
lean_dec(v___x_5766_);
goto v___jp_5770_;
}
}
v___jp_5770_:
{
lean_object* v___x_5771_; lean_object* v___x_5772_; lean_object* v___x_5773_; lean_object* v___x_5775_; 
v___x_5771_ = lean_box(0);
v___x_5772_ = lean_array_push(v_fst_5709_, v___x_5771_);
v___x_5773_ = lean_array_push(v_fst_5713_, v___x_5744_);
if (v_isShared_5720_ == 0)
{
lean_ctor_set(v___x_5719_, 1, v___x_5748_);
lean_ctor_set(v___x_5719_, 0, v___x_5769_);
v___x_5775_ = v___x_5719_;
goto v_reusejp_5774_;
}
else
{
lean_object* v_reuseFailAlloc_5785_; 
v_reuseFailAlloc_5785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5785_, 0, v___x_5769_);
lean_ctor_set(v_reuseFailAlloc_5785_, 1, v___x_5748_);
v___x_5775_ = v_reuseFailAlloc_5785_;
goto v_reusejp_5774_;
}
v_reusejp_5774_:
{
lean_object* v___x_5777_; 
if (v_isShared_5716_ == 0)
{
lean_ctor_set(v___x_5715_, 1, v___x_5775_);
lean_ctor_set(v___x_5715_, 0, v___x_5773_);
v___x_5777_ = v___x_5715_;
goto v_reusejp_5776_;
}
else
{
lean_object* v_reuseFailAlloc_5784_; 
v_reuseFailAlloc_5784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5784_, 0, v___x_5773_);
lean_ctor_set(v_reuseFailAlloc_5784_, 1, v___x_5775_);
v___x_5777_ = v_reuseFailAlloc_5784_;
goto v_reusejp_5776_;
}
v_reusejp_5776_:
{
lean_object* v___x_5779_; 
if (v_isShared_5712_ == 0)
{
lean_ctor_set(v___x_5711_, 1, v___x_5777_);
lean_ctor_set(v___x_5711_, 0, v___x_5772_);
v___x_5779_ = v___x_5711_;
goto v_reusejp_5778_;
}
else
{
lean_object* v_reuseFailAlloc_5783_; 
v_reuseFailAlloc_5783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5783_, 0, v___x_5772_);
lean_ctor_set(v_reuseFailAlloc_5783_, 1, v___x_5777_);
v___x_5779_ = v_reuseFailAlloc_5783_;
goto v_reusejp_5778_;
}
v_reusejp_5778_:
{
lean_object* v___x_5781_; 
if (v_isShared_5708_ == 0)
{
lean_ctor_set(v___x_5707_, 1, v___x_5779_);
v___x_5781_ = v___x_5707_;
goto v_reusejp_5780_;
}
else
{
lean_object* v_reuseFailAlloc_5782_; 
v_reuseFailAlloc_5782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5782_, 0, v_fst_5705_);
lean_ctor_set(v_reuseFailAlloc_5782_, 1, v___x_5779_);
v___x_5781_ = v_reuseFailAlloc_5782_;
goto v_reusejp_5780_;
}
v_reusejp_5780_:
{
v_a_5695_ = v___x_5781_;
goto v___jp_5694_;
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
v___jp_5694_:
{
size_t v___x_5696_; size_t v___x_5697_; 
v___x_5696_ = ((size_t)1ULL);
v___x_5697_ = lean_usize_add(v_i_5687_, v___x_5696_);
v_i_5687_ = v___x_5697_;
v_b_5688_ = v_a_5695_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7___boxed(lean_object* v_addEqualities_5853_, lean_object* v_as_5854_, lean_object* v_sz_5855_, lean_object* v_i_5856_, lean_object* v_b_5857_, lean_object* v___y_5858_, lean_object* v___y_5859_, lean_object* v___y_5860_, lean_object* v___y_5861_, lean_object* v___y_5862_){
_start:
{
uint8_t v_addEqualities_boxed_5863_; size_t v_sz_boxed_5864_; size_t v_i_boxed_5865_; lean_object* v_res_5866_; 
v_addEqualities_boxed_5863_ = lean_unbox(v_addEqualities_5853_);
v_sz_boxed_5864_ = lean_unbox_usize(v_sz_5855_);
lean_dec(v_sz_5855_);
v_i_boxed_5865_ = lean_unbox_usize(v_i_5856_);
lean_dec(v_i_5856_);
v_res_5866_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(v_addEqualities_boxed_5863_, v_as_5854_, v_sz_boxed_5864_, v_i_boxed_5865_, v_b_5857_, v___y_5858_, v___y_5859_, v___y_5860_, v___y_5861_);
lean_dec(v___y_5861_);
lean_dec_ref(v___y_5860_);
lean_dec(v___y_5859_);
lean_dec_ref(v___y_5858_);
lean_dec_ref(v_as_5854_);
return v_res_5866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(lean_object* v_onMotive_5867_, lean_object* v_toMatcherInfo_5868_, lean_object* v_a_5869_, uint8_t v_addEqualities_5870_, size_t v___x_5871_, lean_object* v_discrs_5872_, lean_object* v_motiveArgs_5873_, lean_object* v_motiveBody_5874_, lean_object* v___y_5875_, lean_object* v___y_5876_, lean_object* v___y_5877_, lean_object* v___y_5878_){
_start:
{
lean_object* v___x_5972_; lean_object* v___x_5973_; uint8_t v___x_5974_; 
v___x_5972_ = lean_array_get_size(v_motiveArgs_5873_);
v___x_5973_ = lean_array_get_size(v_discrs_5872_);
v___x_5974_ = lean_nat_dec_eq(v___x_5972_, v___x_5973_);
if (v___x_5974_ == 0)
{
lean_object* v___x_5975_; lean_object* v___x_5976_; lean_object* v___x_5977_; lean_object* v___x_5978_; lean_object* v___x_5979_; lean_object* v___x_5980_; lean_object* v___x_5981_; lean_object* v___x_5982_; lean_object* v_a_5983_; lean_object* v___x_5985_; uint8_t v_isShared_5986_; uint8_t v_isSharedCheck_5990_; 
lean_dec_ref(v_motiveBody_5874_);
lean_dec_ref(v_motiveArgs_5873_);
lean_dec_ref(v_a_5869_);
lean_dec_ref(v_toMatcherInfo_5868_);
lean_dec_ref(v_onMotive_5867_);
v___x_5975_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_5976_ = l_Nat_reprFast(v___x_5973_);
v___x_5977_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5977_, 0, v___x_5976_);
v___x_5978_ = l_Lean_MessageData_ofFormat(v___x_5977_);
v___x_5979_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5979_, 0, v___x_5975_);
lean_ctor_set(v___x_5979_, 1, v___x_5978_);
v___x_5980_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_5981_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5981_, 0, v___x_5979_);
lean_ctor_set(v___x_5981_, 1, v___x_5980_);
v___x_5982_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_5981_, v___y_5875_, v___y_5876_, v___y_5877_, v___y_5878_);
v_a_5983_ = lean_ctor_get(v___x_5982_, 0);
v_isSharedCheck_5990_ = !lean_is_exclusive(v___x_5982_);
if (v_isSharedCheck_5990_ == 0)
{
v___x_5985_ = v___x_5982_;
v_isShared_5986_ = v_isSharedCheck_5990_;
goto v_resetjp_5984_;
}
else
{
lean_inc(v_a_5983_);
lean_dec(v___x_5982_);
v___x_5985_ = lean_box(0);
v_isShared_5986_ = v_isSharedCheck_5990_;
goto v_resetjp_5984_;
}
v_resetjp_5984_:
{
lean_object* v___x_5988_; 
if (v_isShared_5986_ == 0)
{
v___x_5988_ = v___x_5985_;
goto v_reusejp_5987_;
}
else
{
lean_object* v_reuseFailAlloc_5989_; 
v_reuseFailAlloc_5989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5989_, 0, v_a_5983_);
v___x_5988_ = v_reuseFailAlloc_5989_;
goto v_reusejp_5987_;
}
v_reusejp_5987_:
{
return v___x_5988_;
}
}
}
else
{
goto v___jp_5880_;
}
v___jp_5880_:
{
lean_object* v___x_5881_; 
lean_inc(v___y_5878_);
lean_inc_ref(v___y_5877_);
lean_inc(v___y_5876_);
lean_inc_ref(v___y_5875_);
lean_inc_ref(v_motiveArgs_5873_);
v___x_5881_ = lean_apply_7(v_onMotive_5867_, v_motiveArgs_5873_, v_motiveBody_5874_, v___y_5875_, v___y_5876_, v___y_5877_, v___y_5878_, lean_box(0));
if (lean_obj_tag(v___x_5881_) == 0)
{
lean_object* v_a_5882_; lean_object* v_discrInfos_5883_; lean_object* v___x_5884_; lean_object* v_addHEqualities_5885_; lean_object* v___x_5886_; lean_object* v___x_5887_; lean_object* v___x_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; lean_object* v___x_5891_; lean_object* v___x_5892_; lean_object* v___x_5893_; size_t v_sz_5894_; lean_object* v___x_5895_; 
v_a_5882_ = lean_ctor_get(v___x_5881_, 0);
lean_inc(v_a_5882_);
lean_dec_ref_known(v___x_5881_, 1);
v_discrInfos_5883_ = lean_ctor_get(v_toMatcherInfo_5868_, 4);
lean_inc_ref(v_discrInfos_5883_);
lean_dec_ref(v_toMatcherInfo_5868_);
v___x_5884_ = lean_unsigned_to_nat(0u);
v_addHEqualities_5885_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0));
v___x_5886_ = lean_array_get_size(v_a_5869_);
v___x_5887_ = l_Array_toSubarray___redArg(v_a_5869_, v___x_5884_, v___x_5886_);
v___x_5888_ = lean_array_get_size(v_discrInfos_5883_);
v___x_5889_ = l_Array_toSubarray___redArg(v_discrInfos_5883_, v___x_5884_, v___x_5888_);
v___x_5890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5890_, 0, v___x_5887_);
lean_ctor_set(v___x_5890_, 1, v___x_5889_);
v___x_5891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5891_, 0, v_addHEqualities_5885_);
lean_ctor_set(v___x_5891_, 1, v___x_5890_);
v___x_5892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5892_, 0, v_addHEqualities_5885_);
lean_ctor_set(v___x_5892_, 1, v___x_5891_);
v___x_5893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5893_, 0, v_a_5882_);
lean_ctor_set(v___x_5893_, 1, v___x_5892_);
v_sz_5894_ = lean_array_size(v_motiveArgs_5873_);
v___x_5895_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(v_addEqualities_5870_, v_motiveArgs_5873_, v_sz_5894_, v___x_5871_, v___x_5893_, v___y_5875_, v___y_5876_, v___y_5877_, v___y_5878_);
if (lean_obj_tag(v___x_5895_) == 0)
{
lean_object* v_a_5896_; lean_object* v_snd_5897_; lean_object* v_snd_5898_; lean_object* v_fst_5899_; lean_object* v___x_5901_; uint8_t v_isShared_5902_; uint8_t v_isSharedCheck_5954_; 
v_a_5896_ = lean_ctor_get(v___x_5895_, 0);
lean_inc(v_a_5896_);
lean_dec_ref_known(v___x_5895_, 1);
v_snd_5897_ = lean_ctor_get(v_a_5896_, 1);
lean_inc(v_snd_5897_);
v_snd_5898_ = lean_ctor_get(v_snd_5897_, 1);
lean_inc(v_snd_5898_);
v_fst_5899_ = lean_ctor_get(v_a_5896_, 0);
v_isSharedCheck_5954_ = !lean_is_exclusive(v_a_5896_);
if (v_isSharedCheck_5954_ == 0)
{
lean_object* v_unused_5955_; 
v_unused_5955_ = lean_ctor_get(v_a_5896_, 1);
lean_dec(v_unused_5955_);
v___x_5901_ = v_a_5896_;
v_isShared_5902_ = v_isSharedCheck_5954_;
goto v_resetjp_5900_;
}
else
{
lean_inc(v_fst_5899_);
lean_dec(v_a_5896_);
v___x_5901_ = lean_box(0);
v_isShared_5902_ = v_isSharedCheck_5954_;
goto v_resetjp_5900_;
}
v_resetjp_5900_:
{
lean_object* v_fst_5903_; lean_object* v___x_5905_; uint8_t v_isShared_5906_; uint8_t v_isSharedCheck_5952_; 
v_fst_5903_ = lean_ctor_get(v_snd_5897_, 0);
v_isSharedCheck_5952_ = !lean_is_exclusive(v_snd_5897_);
if (v_isSharedCheck_5952_ == 0)
{
lean_object* v_unused_5953_; 
v_unused_5953_ = lean_ctor_get(v_snd_5897_, 1);
lean_dec(v_unused_5953_);
v___x_5905_ = v_snd_5897_;
v_isShared_5906_ = v_isSharedCheck_5952_;
goto v_resetjp_5904_;
}
else
{
lean_inc(v_fst_5903_);
lean_dec(v_snd_5897_);
v___x_5905_ = lean_box(0);
v_isShared_5906_ = v_isSharedCheck_5952_;
goto v_resetjp_5904_;
}
v_resetjp_5904_:
{
lean_object* v_fst_5907_; lean_object* v___x_5909_; uint8_t v_isShared_5910_; uint8_t v_isSharedCheck_5950_; 
v_fst_5907_ = lean_ctor_get(v_snd_5898_, 0);
v_isSharedCheck_5950_ = !lean_is_exclusive(v_snd_5898_);
if (v_isSharedCheck_5950_ == 0)
{
lean_object* v_unused_5951_; 
v_unused_5951_ = lean_ctor_get(v_snd_5898_, 1);
lean_dec(v_unused_5951_);
v___x_5909_ = v_snd_5898_;
v_isShared_5910_ = v_isSharedCheck_5950_;
goto v_resetjp_5908_;
}
else
{
lean_inc(v_fst_5907_);
lean_dec(v_snd_5898_);
v___x_5909_ = lean_box(0);
v_isShared_5910_ = v_isSharedCheck_5950_;
goto v_resetjp_5908_;
}
v_resetjp_5908_:
{
uint8_t v___x_5911_; uint8_t v___x_5912_; uint8_t v___x_5913_; lean_object* v___x_5914_; 
v___x_5911_ = 0;
v___x_5912_ = 1;
v___x_5913_ = 1;
lean_inc(v_fst_5899_);
v___x_5914_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_5873_, v_fst_5899_, v___x_5911_, v___x_5912_, v___x_5911_, v___x_5912_, v___x_5913_, v___y_5875_, v___y_5876_, v___y_5877_, v___y_5878_);
if (lean_obj_tag(v___x_5914_) == 0)
{
lean_object* v_a_5915_; lean_object* v___x_5916_; 
v_a_5915_ = lean_ctor_get(v___x_5914_, 0);
lean_inc(v_a_5915_);
lean_dec_ref_known(v___x_5914_, 1);
v___x_5916_ = l_Lean_Meta_getLevel(v_fst_5899_, v___y_5875_, v___y_5876_, v___y_5877_, v___y_5878_);
if (lean_obj_tag(v___x_5916_) == 0)
{
lean_object* v_a_5917_; lean_object* v___x_5919_; uint8_t v_isShared_5920_; uint8_t v_isSharedCheck_5933_; 
v_a_5917_ = lean_ctor_get(v___x_5916_, 0);
v_isSharedCheck_5933_ = !lean_is_exclusive(v___x_5916_);
if (v_isSharedCheck_5933_ == 0)
{
v___x_5919_ = v___x_5916_;
v_isShared_5920_ = v_isSharedCheck_5933_;
goto v_resetjp_5918_;
}
else
{
lean_inc(v_a_5917_);
lean_dec(v___x_5916_);
v___x_5919_ = lean_box(0);
v_isShared_5920_ = v_isSharedCheck_5933_;
goto v_resetjp_5918_;
}
v_resetjp_5918_:
{
lean_object* v___x_5922_; 
if (v_isShared_5910_ == 0)
{
lean_ctor_set(v___x_5909_, 1, v_fst_5907_);
lean_ctor_set(v___x_5909_, 0, v_fst_5903_);
v___x_5922_ = v___x_5909_;
goto v_reusejp_5921_;
}
else
{
lean_object* v_reuseFailAlloc_5932_; 
v_reuseFailAlloc_5932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5932_, 0, v_fst_5903_);
lean_ctor_set(v_reuseFailAlloc_5932_, 1, v_fst_5907_);
v___x_5922_ = v_reuseFailAlloc_5932_;
goto v_reusejp_5921_;
}
v_reusejp_5921_:
{
lean_object* v___x_5924_; 
if (v_isShared_5906_ == 0)
{
lean_ctor_set(v___x_5905_, 1, v___x_5922_);
lean_ctor_set(v___x_5905_, 0, v_a_5917_);
v___x_5924_ = v___x_5905_;
goto v_reusejp_5923_;
}
else
{
lean_object* v_reuseFailAlloc_5931_; 
v_reuseFailAlloc_5931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5931_, 0, v_a_5917_);
lean_ctor_set(v_reuseFailAlloc_5931_, 1, v___x_5922_);
v___x_5924_ = v_reuseFailAlloc_5931_;
goto v_reusejp_5923_;
}
v_reusejp_5923_:
{
lean_object* v___x_5926_; 
if (v_isShared_5902_ == 0)
{
lean_ctor_set(v___x_5901_, 1, v___x_5924_);
lean_ctor_set(v___x_5901_, 0, v_a_5915_);
v___x_5926_ = v___x_5901_;
goto v_reusejp_5925_;
}
else
{
lean_object* v_reuseFailAlloc_5930_; 
v_reuseFailAlloc_5930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5930_, 0, v_a_5915_);
lean_ctor_set(v_reuseFailAlloc_5930_, 1, v___x_5924_);
v___x_5926_ = v_reuseFailAlloc_5930_;
goto v_reusejp_5925_;
}
v_reusejp_5925_:
{
lean_object* v___x_5928_; 
if (v_isShared_5920_ == 0)
{
lean_ctor_set(v___x_5919_, 0, v___x_5926_);
v___x_5928_ = v___x_5919_;
goto v_reusejp_5927_;
}
else
{
lean_object* v_reuseFailAlloc_5929_; 
v_reuseFailAlloc_5929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5929_, 0, v___x_5926_);
v___x_5928_ = v_reuseFailAlloc_5929_;
goto v_reusejp_5927_;
}
v_reusejp_5927_:
{
return v___x_5928_;
}
}
}
}
}
}
else
{
lean_object* v_a_5934_; lean_object* v___x_5936_; uint8_t v_isShared_5937_; uint8_t v_isSharedCheck_5941_; 
lean_dec(v_a_5915_);
lean_del_object(v___x_5909_);
lean_dec(v_fst_5907_);
lean_del_object(v___x_5905_);
lean_dec(v_fst_5903_);
lean_del_object(v___x_5901_);
v_a_5934_ = lean_ctor_get(v___x_5916_, 0);
v_isSharedCheck_5941_ = !lean_is_exclusive(v___x_5916_);
if (v_isSharedCheck_5941_ == 0)
{
v___x_5936_ = v___x_5916_;
v_isShared_5937_ = v_isSharedCheck_5941_;
goto v_resetjp_5935_;
}
else
{
lean_inc(v_a_5934_);
lean_dec(v___x_5916_);
v___x_5936_ = lean_box(0);
v_isShared_5937_ = v_isSharedCheck_5941_;
goto v_resetjp_5935_;
}
v_resetjp_5935_:
{
lean_object* v___x_5939_; 
if (v_isShared_5937_ == 0)
{
v___x_5939_ = v___x_5936_;
goto v_reusejp_5938_;
}
else
{
lean_object* v_reuseFailAlloc_5940_; 
v_reuseFailAlloc_5940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5940_, 0, v_a_5934_);
v___x_5939_ = v_reuseFailAlloc_5940_;
goto v_reusejp_5938_;
}
v_reusejp_5938_:
{
return v___x_5939_;
}
}
}
}
else
{
lean_object* v_a_5942_; lean_object* v___x_5944_; uint8_t v_isShared_5945_; uint8_t v_isSharedCheck_5949_; 
lean_del_object(v___x_5909_);
lean_dec(v_fst_5907_);
lean_del_object(v___x_5905_);
lean_dec(v_fst_5903_);
lean_del_object(v___x_5901_);
lean_dec(v_fst_5899_);
v_a_5942_ = lean_ctor_get(v___x_5914_, 0);
v_isSharedCheck_5949_ = !lean_is_exclusive(v___x_5914_);
if (v_isSharedCheck_5949_ == 0)
{
v___x_5944_ = v___x_5914_;
v_isShared_5945_ = v_isSharedCheck_5949_;
goto v_resetjp_5943_;
}
else
{
lean_inc(v_a_5942_);
lean_dec(v___x_5914_);
v___x_5944_ = lean_box(0);
v_isShared_5945_ = v_isSharedCheck_5949_;
goto v_resetjp_5943_;
}
v_resetjp_5943_:
{
lean_object* v___x_5947_; 
if (v_isShared_5945_ == 0)
{
v___x_5947_ = v___x_5944_;
goto v_reusejp_5946_;
}
else
{
lean_object* v_reuseFailAlloc_5948_; 
v_reuseFailAlloc_5948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5948_, 0, v_a_5942_);
v___x_5947_ = v_reuseFailAlloc_5948_;
goto v_reusejp_5946_;
}
v_reusejp_5946_:
{
return v___x_5947_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5956_; lean_object* v___x_5958_; uint8_t v_isShared_5959_; uint8_t v_isSharedCheck_5963_; 
lean_dec_ref(v_motiveArgs_5873_);
v_a_5956_ = lean_ctor_get(v___x_5895_, 0);
v_isSharedCheck_5963_ = !lean_is_exclusive(v___x_5895_);
if (v_isSharedCheck_5963_ == 0)
{
v___x_5958_ = v___x_5895_;
v_isShared_5959_ = v_isSharedCheck_5963_;
goto v_resetjp_5957_;
}
else
{
lean_inc(v_a_5956_);
lean_dec(v___x_5895_);
v___x_5958_ = lean_box(0);
v_isShared_5959_ = v_isSharedCheck_5963_;
goto v_resetjp_5957_;
}
v_resetjp_5957_:
{
lean_object* v___x_5961_; 
if (v_isShared_5959_ == 0)
{
v___x_5961_ = v___x_5958_;
goto v_reusejp_5960_;
}
else
{
lean_object* v_reuseFailAlloc_5962_; 
v_reuseFailAlloc_5962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5962_, 0, v_a_5956_);
v___x_5961_ = v_reuseFailAlloc_5962_;
goto v_reusejp_5960_;
}
v_reusejp_5960_:
{
return v___x_5961_;
}
}
}
}
else
{
lean_object* v_a_5964_; lean_object* v___x_5966_; uint8_t v_isShared_5967_; uint8_t v_isSharedCheck_5971_; 
lean_dec_ref(v_motiveArgs_5873_);
lean_dec_ref(v_a_5869_);
lean_dec_ref(v_toMatcherInfo_5868_);
v_a_5964_ = lean_ctor_get(v___x_5881_, 0);
v_isSharedCheck_5971_ = !lean_is_exclusive(v___x_5881_);
if (v_isSharedCheck_5971_ == 0)
{
v___x_5966_ = v___x_5881_;
v_isShared_5967_ = v_isSharedCheck_5971_;
goto v_resetjp_5965_;
}
else
{
lean_inc(v_a_5964_);
lean_dec(v___x_5881_);
v___x_5966_ = lean_box(0);
v_isShared_5967_ = v_isSharedCheck_5971_;
goto v_resetjp_5965_;
}
v_resetjp_5965_:
{
lean_object* v___x_5969_; 
if (v_isShared_5967_ == 0)
{
v___x_5969_ = v___x_5966_;
goto v_reusejp_5968_;
}
else
{
lean_object* v_reuseFailAlloc_5970_; 
v_reuseFailAlloc_5970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5970_, 0, v_a_5964_);
v___x_5969_ = v_reuseFailAlloc_5970_;
goto v_reusejp_5968_;
}
v_reusejp_5968_:
{
return v___x_5969_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed(lean_object* v_onMotive_5991_, lean_object* v_toMatcherInfo_5992_, lean_object* v_a_5993_, lean_object* v_addEqualities_5994_, lean_object* v___x_5995_, lean_object* v_discrs_5996_, lean_object* v_motiveArgs_5997_, lean_object* v_motiveBody_5998_, lean_object* v___y_5999_, lean_object* v___y_6000_, lean_object* v___y_6001_, lean_object* v___y_6002_, lean_object* v___y_6003_){
_start:
{
uint8_t v_addEqualities_boxed_6004_; size_t v___x_34699__boxed_6005_; lean_object* v_res_6006_; 
v_addEqualities_boxed_6004_ = lean_unbox(v_addEqualities_5994_);
v___x_34699__boxed_6005_ = lean_unbox_usize(v___x_5995_);
lean_dec(v___x_5995_);
v_res_6006_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(v_onMotive_5991_, v_toMatcherInfo_5992_, v_a_5993_, v_addEqualities_boxed_6004_, v___x_34699__boxed_6005_, v_discrs_5996_, v_motiveArgs_5997_, v_motiveBody_5998_, v___y_5999_, v___y_6000_, v___y_6001_, v___y_6002_);
lean_dec(v___y_6002_);
lean_dec_ref(v___y_6001_);
lean_dec(v___y_6000_);
lean_dec_ref(v___y_5999_);
lean_dec_ref(v_discrs_5996_);
return v_res_6006_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(lean_object* v_as_6007_, size_t v_sz_6008_, size_t v_i_6009_, lean_object* v_b_6010_, lean_object* v___y_6011_, lean_object* v___y_6012_, lean_object* v___y_6013_, lean_object* v___y_6014_){
_start:
{
lean_object* v_a_6017_; uint8_t v___x_6021_; 
v___x_6021_ = lean_usize_dec_lt(v_i_6009_, v_sz_6008_);
if (v___x_6021_ == 0)
{
lean_object* v___x_6022_; 
v___x_6022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6022_, 0, v_b_6010_);
return v___x_6022_;
}
else
{
lean_object* v_snd_6023_; lean_object* v_snd_6024_; lean_object* v_fst_6025_; lean_object* v___x_6027_; uint8_t v_isShared_6028_; uint8_t v_isSharedCheck_6085_; 
v_snd_6023_ = lean_ctor_get(v_b_6010_, 1);
lean_inc(v_snd_6023_);
v_snd_6024_ = lean_ctor_get(v_snd_6023_, 1);
lean_inc(v_snd_6024_);
v_fst_6025_ = lean_ctor_get(v_b_6010_, 0);
v_isSharedCheck_6085_ = !lean_is_exclusive(v_b_6010_);
if (v_isSharedCheck_6085_ == 0)
{
lean_object* v_unused_6086_; 
v_unused_6086_ = lean_ctor_get(v_b_6010_, 1);
lean_dec(v_unused_6086_);
v___x_6027_ = v_b_6010_;
v_isShared_6028_ = v_isSharedCheck_6085_;
goto v_resetjp_6026_;
}
else
{
lean_inc(v_fst_6025_);
lean_dec(v_b_6010_);
v___x_6027_ = lean_box(0);
v_isShared_6028_ = v_isSharedCheck_6085_;
goto v_resetjp_6026_;
}
v_resetjp_6026_:
{
lean_object* v_fst_6029_; lean_object* v___x_6031_; uint8_t v_isShared_6032_; uint8_t v_isSharedCheck_6083_; 
v_fst_6029_ = lean_ctor_get(v_snd_6023_, 0);
v_isSharedCheck_6083_ = !lean_is_exclusive(v_snd_6023_);
if (v_isSharedCheck_6083_ == 0)
{
lean_object* v_unused_6084_; 
v_unused_6084_ = lean_ctor_get(v_snd_6023_, 1);
lean_dec(v_unused_6084_);
v___x_6031_ = v_snd_6023_;
v_isShared_6032_ = v_isSharedCheck_6083_;
goto v_resetjp_6030_;
}
else
{
lean_inc(v_fst_6029_);
lean_dec(v_snd_6023_);
v___x_6031_ = lean_box(0);
v_isShared_6032_ = v_isSharedCheck_6083_;
goto v_resetjp_6030_;
}
v_resetjp_6030_:
{
lean_object* v_array_6033_; lean_object* v_start_6034_; lean_object* v_stop_6035_; uint8_t v___x_6036_; 
v_array_6033_ = lean_ctor_get(v_snd_6024_, 0);
v_start_6034_ = lean_ctor_get(v_snd_6024_, 1);
v_stop_6035_ = lean_ctor_get(v_snd_6024_, 2);
v___x_6036_ = lean_nat_dec_lt(v_start_6034_, v_stop_6035_);
if (v___x_6036_ == 0)
{
lean_object* v___x_6038_; 
if (v_isShared_6032_ == 0)
{
v___x_6038_ = v___x_6031_;
goto v_reusejp_6037_;
}
else
{
lean_object* v_reuseFailAlloc_6043_; 
v_reuseFailAlloc_6043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6043_, 0, v_fst_6029_);
lean_ctor_set(v_reuseFailAlloc_6043_, 1, v_snd_6024_);
v___x_6038_ = v_reuseFailAlloc_6043_;
goto v_reusejp_6037_;
}
v_reusejp_6037_:
{
lean_object* v___x_6040_; 
if (v_isShared_6028_ == 0)
{
lean_ctor_set(v___x_6027_, 1, v___x_6038_);
v___x_6040_ = v___x_6027_;
goto v_reusejp_6039_;
}
else
{
lean_object* v_reuseFailAlloc_6042_; 
v_reuseFailAlloc_6042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6042_, 0, v_fst_6025_);
lean_ctor_set(v_reuseFailAlloc_6042_, 1, v___x_6038_);
v___x_6040_ = v_reuseFailAlloc_6042_;
goto v_reusejp_6039_;
}
v_reusejp_6039_:
{
lean_object* v___x_6041_; 
v___x_6041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6041_, 0, v___x_6040_);
return v___x_6041_;
}
}
}
else
{
lean_object* v___x_6045_; uint8_t v_isShared_6046_; uint8_t v_isSharedCheck_6079_; 
lean_inc(v_stop_6035_);
lean_inc(v_start_6034_);
lean_inc_ref(v_array_6033_);
v_isSharedCheck_6079_ = !lean_is_exclusive(v_snd_6024_);
if (v_isSharedCheck_6079_ == 0)
{
lean_object* v_unused_6080_; lean_object* v_unused_6081_; lean_object* v_unused_6082_; 
v_unused_6080_ = lean_ctor_get(v_snd_6024_, 2);
lean_dec(v_unused_6080_);
v_unused_6081_ = lean_ctor_get(v_snd_6024_, 1);
lean_dec(v_unused_6081_);
v_unused_6082_ = lean_ctor_get(v_snd_6024_, 0);
lean_dec(v_unused_6082_);
v___x_6045_ = v_snd_6024_;
v_isShared_6046_ = v_isSharedCheck_6079_;
goto v_resetjp_6044_;
}
else
{
lean_dec(v_snd_6024_);
v___x_6045_ = lean_box(0);
v_isShared_6046_ = v_isSharedCheck_6079_;
goto v_resetjp_6044_;
}
v_resetjp_6044_:
{
lean_object* v___x_6047_; lean_object* v___x_6048_; lean_object* v___x_6049_; lean_object* v___x_6051_; 
v___x_6047_ = lean_array_fget(v_array_6033_, v_start_6034_);
v___x_6048_ = lean_unsigned_to_nat(1u);
v___x_6049_ = lean_nat_add(v_start_6034_, v___x_6048_);
lean_dec(v_start_6034_);
if (v_isShared_6046_ == 0)
{
lean_ctor_set(v___x_6045_, 1, v___x_6049_);
v___x_6051_ = v___x_6045_;
goto v_reusejp_6050_;
}
else
{
lean_object* v_reuseFailAlloc_6078_; 
v_reuseFailAlloc_6078_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6078_, 0, v_array_6033_);
lean_ctor_set(v_reuseFailAlloc_6078_, 1, v___x_6049_);
lean_ctor_set(v_reuseFailAlloc_6078_, 2, v_stop_6035_);
v___x_6051_ = v_reuseFailAlloc_6078_;
goto v_reusejp_6050_;
}
v_reusejp_6050_:
{
lean_object* v___y_6053_; 
if (lean_obj_tag(v___x_6047_) == 0)
{
lean_object* v___x_6071_; lean_object* v___x_6072_; 
lean_del_object(v___x_6031_);
lean_del_object(v___x_6027_);
v___x_6071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6071_, 0, v_fst_6029_);
lean_ctor_set(v___x_6071_, 1, v___x_6051_);
v___x_6072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6072_, 0, v_fst_6025_);
lean_ctor_set(v___x_6072_, 1, v___x_6071_);
v_a_6017_ = v___x_6072_;
goto v___jp_6016_;
}
else
{
lean_object* v_val_6073_; lean_object* v_a_6074_; uint8_t v___x_6075_; 
v_val_6073_ = lean_ctor_get(v___x_6047_, 0);
lean_inc(v_val_6073_);
lean_dec_ref_known(v___x_6047_, 1);
v_a_6074_ = lean_array_uget_borrowed(v_as_6007_, v_i_6009_);
v___x_6075_ = lean_unbox(v_val_6073_);
lean_dec(v_val_6073_);
if (v___x_6075_ == 0)
{
lean_object* v___x_6076_; 
lean_inc(v_a_6074_);
v___x_6076_ = l_Lean_Meta_mkEqRefl(v_a_6074_, v___y_6011_, v___y_6012_, v___y_6013_, v___y_6014_);
v___y_6053_ = v___x_6076_;
goto v___jp_6052_;
}
else
{
lean_object* v___x_6077_; 
lean_inc(v_a_6074_);
v___x_6077_ = l_Lean_Meta_mkHEqRefl(v_a_6074_, v___y_6011_, v___y_6012_, v___y_6013_, v___y_6014_);
v___y_6053_ = v___x_6077_;
goto v___jp_6052_;
}
}
v___jp_6052_:
{
if (lean_obj_tag(v___y_6053_) == 0)
{
lean_object* v_a_6054_; lean_object* v___x_6055_; lean_object* v___x_6056_; lean_object* v___x_6058_; 
v_a_6054_ = lean_ctor_get(v___y_6053_, 0);
lean_inc(v_a_6054_);
lean_dec_ref_known(v___y_6053_, 1);
v___x_6055_ = lean_array_push(v_fst_6025_, v_a_6054_);
v___x_6056_ = lean_nat_add(v_fst_6029_, v___x_6048_);
lean_dec(v_fst_6029_);
if (v_isShared_6032_ == 0)
{
lean_ctor_set(v___x_6031_, 1, v___x_6051_);
lean_ctor_set(v___x_6031_, 0, v___x_6056_);
v___x_6058_ = v___x_6031_;
goto v_reusejp_6057_;
}
else
{
lean_object* v_reuseFailAlloc_6062_; 
v_reuseFailAlloc_6062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6062_, 0, v___x_6056_);
lean_ctor_set(v_reuseFailAlloc_6062_, 1, v___x_6051_);
v___x_6058_ = v_reuseFailAlloc_6062_;
goto v_reusejp_6057_;
}
v_reusejp_6057_:
{
lean_object* v___x_6060_; 
if (v_isShared_6028_ == 0)
{
lean_ctor_set(v___x_6027_, 1, v___x_6058_);
lean_ctor_set(v___x_6027_, 0, v___x_6055_);
v___x_6060_ = v___x_6027_;
goto v_reusejp_6059_;
}
else
{
lean_object* v_reuseFailAlloc_6061_; 
v_reuseFailAlloc_6061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6061_, 0, v___x_6055_);
lean_ctor_set(v_reuseFailAlloc_6061_, 1, v___x_6058_);
v___x_6060_ = v_reuseFailAlloc_6061_;
goto v_reusejp_6059_;
}
v_reusejp_6059_:
{
v_a_6017_ = v___x_6060_;
goto v___jp_6016_;
}
}
}
else
{
lean_object* v_a_6063_; lean_object* v___x_6065_; uint8_t v_isShared_6066_; uint8_t v_isSharedCheck_6070_; 
lean_dec_ref(v___x_6051_);
lean_del_object(v___x_6031_);
lean_dec(v_fst_6029_);
lean_del_object(v___x_6027_);
lean_dec(v_fst_6025_);
v_a_6063_ = lean_ctor_get(v___y_6053_, 0);
v_isSharedCheck_6070_ = !lean_is_exclusive(v___y_6053_);
if (v_isSharedCheck_6070_ == 0)
{
v___x_6065_ = v___y_6053_;
v_isShared_6066_ = v_isSharedCheck_6070_;
goto v_resetjp_6064_;
}
else
{
lean_inc(v_a_6063_);
lean_dec(v___y_6053_);
v___x_6065_ = lean_box(0);
v_isShared_6066_ = v_isSharedCheck_6070_;
goto v_resetjp_6064_;
}
v_resetjp_6064_:
{
lean_object* v___x_6068_; 
if (v_isShared_6066_ == 0)
{
v___x_6068_ = v___x_6065_;
goto v_reusejp_6067_;
}
else
{
lean_object* v_reuseFailAlloc_6069_; 
v_reuseFailAlloc_6069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6069_, 0, v_a_6063_);
v___x_6068_ = v_reuseFailAlloc_6069_;
goto v_reusejp_6067_;
}
v_reusejp_6067_:
{
return v___x_6068_;
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
v___jp_6016_:
{
size_t v___x_6018_; size_t v___x_6019_; 
v___x_6018_ = ((size_t)1ULL);
v___x_6019_ = lean_usize_add(v_i_6009_, v___x_6018_);
v_i_6009_ = v___x_6019_;
v_b_6010_ = v_a_6017_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8___boxed(lean_object* v_as_6087_, lean_object* v_sz_6088_, lean_object* v_i_6089_, lean_object* v_b_6090_, lean_object* v___y_6091_, lean_object* v___y_6092_, lean_object* v___y_6093_, lean_object* v___y_6094_, lean_object* v___y_6095_){
_start:
{
size_t v_sz_boxed_6096_; size_t v_i_boxed_6097_; lean_object* v_res_6098_; 
v_sz_boxed_6096_ = lean_unbox_usize(v_sz_6088_);
lean_dec(v_sz_6088_);
v_i_boxed_6097_ = lean_unbox_usize(v_i_6089_);
lean_dec(v_i_6089_);
v_res_6098_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(v_as_6087_, v_sz_boxed_6096_, v_i_boxed_6097_, v_b_6090_, v___y_6091_, v___y_6092_, v___y_6093_, v___y_6094_);
lean_dec(v___y_6094_);
lean_dec_ref(v___y_6093_);
lean_dec(v___y_6092_);
lean_dec_ref(v___y_6091_);
lean_dec_ref(v_as_6087_);
return v_res_6098_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(lean_object* v___x_6099_, lean_object* v___y_6100_, lean_object* v___y_6101_, lean_object* v___y_6102_, lean_object* v___y_6103_){
_start:
{
lean_object* v___x_6105_; 
v___x_6105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6105_, 0, v___x_6099_);
return v___x_6105_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed(lean_object* v___x_6106_, lean_object* v___y_6107_, lean_object* v___y_6108_, lean_object* v___y_6109_, lean_object* v___y_6110_, lean_object* v___y_6111_){
_start:
{
lean_object* v_res_6112_; 
v_res_6112_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(v___x_6106_, v___y_6107_, v___y_6108_, v___y_6109_, v___y_6110_);
lean_dec(v___y_6110_);
lean_dec_ref(v___y_6109_);
lean_dec(v___y_6108_);
lean_dec_ref(v___y_6107_);
return v_res_6112_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(size_t v_sz_6113_, size_t v_i_6114_, lean_object* v_bs_6115_, lean_object* v___y_6116_, lean_object* v___y_6117_, lean_object* v___y_6118_){
_start:
{
uint8_t v___x_6120_; 
v___x_6120_ = lean_usize_dec_lt(v_i_6114_, v_sz_6113_);
if (v___x_6120_ == 0)
{
lean_object* v___x_6121_; lean_object* v___x_6122_; 
v___x_6121_ = l_unsafeCast___redArg(v_bs_6115_);
lean_dec_ref(v_bs_6115_);
v___x_6122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6122_, 0, v___x_6121_);
return v___x_6122_;
}
else
{
lean_object* v_v_6123_; lean_object* v___x_6124_; lean_object* v_bs_x27_6125_; lean_object* v___x_6126_; lean_object* v___x_6127_; lean_object* v___x_6128_; 
v_v_6123_ = lean_array_uget(v_bs_6115_, v_i_6114_);
v___x_6124_ = lean_unsigned_to_nat(0u);
v_bs_x27_6125_ = lean_array_uset(v_bs_6115_, v_i_6114_, v___x_6124_);
v___x_6126_ = l_unsafeCast___redArg(v_v_6123_);
lean_dec(v_v_6123_);
v___x_6127_ = l_Lean_Expr_fvarId_x21(v___x_6126_);
lean_dec(v___x_6126_);
v___x_6128_ = l_Lean_FVarId_getUserName___redArg(v___x_6127_, v___y_6116_, v___y_6117_, v___y_6118_);
if (lean_obj_tag(v___x_6128_) == 0)
{
lean_object* v_a_6129_; size_t v___x_6130_; size_t v___x_6131_; lean_object* v___x_6132_; lean_object* v___x_6133_; 
v_a_6129_ = lean_ctor_get(v___x_6128_, 0);
lean_inc(v_a_6129_);
lean_dec_ref_known(v___x_6128_, 1);
v___x_6130_ = ((size_t)1ULL);
v___x_6131_ = lean_usize_add(v_i_6114_, v___x_6130_);
v___x_6132_ = l_unsafeCast___redArg(v_a_6129_);
lean_dec(v_a_6129_);
v___x_6133_ = lean_array_uset(v_bs_x27_6125_, v_i_6114_, v___x_6132_);
v_i_6114_ = v___x_6131_;
v_bs_6115_ = v___x_6133_;
goto _start;
}
else
{
lean_object* v_a_6135_; lean_object* v___x_6137_; uint8_t v_isShared_6138_; uint8_t v_isSharedCheck_6142_; 
lean_dec_ref(v_bs_x27_6125_);
v_a_6135_ = lean_ctor_get(v___x_6128_, 0);
v_isSharedCheck_6142_ = !lean_is_exclusive(v___x_6128_);
if (v_isSharedCheck_6142_ == 0)
{
v___x_6137_ = v___x_6128_;
v_isShared_6138_ = v_isSharedCheck_6142_;
goto v_resetjp_6136_;
}
else
{
lean_inc(v_a_6135_);
lean_dec(v___x_6128_);
v___x_6137_ = lean_box(0);
v_isShared_6138_ = v_isSharedCheck_6142_;
goto v_resetjp_6136_;
}
v_resetjp_6136_:
{
lean_object* v___x_6140_; 
if (v_isShared_6138_ == 0)
{
v___x_6140_ = v___x_6137_;
goto v_reusejp_6139_;
}
else
{
lean_object* v_reuseFailAlloc_6141_; 
v_reuseFailAlloc_6141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6141_, 0, v_a_6135_);
v___x_6140_ = v_reuseFailAlloc_6141_;
goto v_reusejp_6139_;
}
v_reusejp_6139_:
{
return v___x_6140_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg___boxed(lean_object* v_sz_6143_, lean_object* v_i_6144_, lean_object* v_bs_6145_, lean_object* v___y_6146_, lean_object* v___y_6147_, lean_object* v___y_6148_, lean_object* v___y_6149_){
_start:
{
size_t v_sz_boxed_6150_; size_t v_i_boxed_6151_; lean_object* v_res_6152_; 
v_sz_boxed_6150_ = lean_unbox_usize(v_sz_6143_);
lean_dec(v_sz_6143_);
v_i_boxed_6151_ = lean_unbox_usize(v_i_6144_);
lean_dec(v_i_6144_);
v_res_6152_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(v_sz_boxed_6150_, v_i_boxed_6151_, v_bs_6145_, v___y_6146_, v___y_6147_, v___y_6148_);
lean_dec(v___y_6148_);
lean_dec_ref(v___y_6147_);
lean_dec_ref(v___y_6146_);
return v_res_6152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(size_t v_sz_6153_, size_t v_i_6154_, lean_object* v_bs_6155_, lean_object* v___y_6156_, lean_object* v___y_6157_, lean_object* v___y_6158_, lean_object* v___y_6159_){
_start:
{
lean_object* v___x_6161_; 
v___x_6161_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(v_sz_6153_, v_i_6154_, v_bs_6155_, v___y_6156_, v___y_6158_, v___y_6159_);
return v___x_6161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___boxed(lean_object* v_sz_6162_, lean_object* v_i_6163_, lean_object* v_bs_6164_, lean_object* v___y_6165_, lean_object* v___y_6166_, lean_object* v___y_6167_, lean_object* v___y_6168_, lean_object* v___y_6169_){
_start:
{
size_t v_sz_boxed_6170_; size_t v_i_boxed_6171_; lean_object* v_res_6172_; 
v_sz_boxed_6170_ = lean_unbox_usize(v_sz_6162_);
lean_dec(v_sz_6162_);
v_i_boxed_6171_ = lean_unbox_usize(v_i_6163_);
lean_dec(v_i_6163_);
v_res_6172_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(v_sz_boxed_6170_, v_i_boxed_6171_, v_bs_6164_, v___y_6165_, v___y_6166_, v___y_6167_, v___y_6168_);
lean_dec(v___y_6168_);
lean_dec_ref(v___y_6167_);
lean_dec(v___y_6166_);
lean_dec_ref(v___y_6165_);
return v_res_6172_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(lean_object* v_xs_6173_, lean_object* v_x_6174_, lean_object* v___y_6175_, lean_object* v___y_6176_, lean_object* v___y_6177_, lean_object* v___y_6178_){
_start:
{
size_t v_sz_6180_; lean_object* v___x_6181_; lean_object* v___x_6182_; lean_object* v___x_6183_; lean_object* v___x_6184_; lean_object* v___x_31957__overap_6185_; lean_object* v___x_6186_; 
v_sz_6180_ = lean_array_size(v_xs_6173_);
v___x_6181_ = l_unsafeCast___redArg(v_xs_6173_);
v___x_6182_ = lean_box_usize(v_sz_6180_);
v___x_6183_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed__const__1));
v___x_6184_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___boxed), 8, 3);
lean_closure_set(v___x_6184_, 0, v___x_6182_);
lean_closure_set(v___x_6184_, 1, v___x_6183_);
lean_closure_set(v___x_6184_, 2, v___x_6181_);
v___x_31957__overap_6185_ = l_unsafeCast___redArg(v___x_6184_);
lean_dec_ref(v___x_6184_);
lean_inc(v___y_6178_);
lean_inc_ref(v___y_6177_);
lean_inc(v___y_6176_);
lean_inc_ref(v___y_6175_);
v___x_6186_ = lean_apply_5(v___x_31957__overap_6185_, v___y_6175_, v___y_6176_, v___y_6177_, v___y_6178_, lean_box(0));
return v___x_6186_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed(lean_object* v_xs_6187_, lean_object* v_x_6188_, lean_object* v___y_6189_, lean_object* v___y_6190_, lean_object* v___y_6191_, lean_object* v___y_6192_, lean_object* v___y_6193_){
_start:
{
lean_object* v_res_6194_; 
v_res_6194_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(v_xs_6187_, v_x_6188_, v___y_6189_, v___y_6190_, v___y_6191_, v___y_6192_);
lean_dec(v___y_6192_);
lean_dec_ref(v___y_6191_);
lean_dec(v___y_6190_);
lean_dec_ref(v___y_6189_);
lean_dec_ref(v_x_6188_);
lean_dec_ref(v_xs_6187_);
return v_res_6194_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(lean_object* v___x_6195_, lean_object* v___x_6196_, lean_object* v___f_6197_, uint8_t v___x_6198_, lean_object* v_fst_6199_, lean_object* v___x_6200_, lean_object* v___x_6201_, lean_object* v___x_6202_, lean_object* v___y_6203_, lean_object* v___y_6204_, lean_object* v___y_6205_, lean_object* v___y_6206_){
_start:
{
lean_object* v___x_6208_; 
v___x_6208_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v___x_6195_, v___x_6196_, v___f_6197_, v___x_6198_, v___x_6198_, v___y_6203_, v___y_6204_, v___y_6205_, v___y_6206_);
if (lean_obj_tag(v___x_6208_) == 0)
{
lean_object* v_a_6209_; lean_object* v___x_6211_; uint8_t v_isShared_6212_; uint8_t v_isSharedCheck_6221_; 
v_a_6209_ = lean_ctor_get(v___x_6208_, 0);
v_isSharedCheck_6221_ = !lean_is_exclusive(v___x_6208_);
if (v_isSharedCheck_6221_ == 0)
{
v___x_6211_ = v___x_6208_;
v_isShared_6212_ = v_isSharedCheck_6221_;
goto v_resetjp_6210_;
}
else
{
lean_inc(v_a_6209_);
lean_dec(v___x_6208_);
v___x_6211_ = lean_box(0);
v_isShared_6212_ = v_isSharedCheck_6221_;
goto v_resetjp_6210_;
}
v_resetjp_6210_:
{
lean_object* v___x_6213_; lean_object* v___x_6214_; lean_object* v___x_6215_; lean_object* v___x_6216_; lean_object* v___x_6217_; lean_object* v___x_6219_; 
v___x_6213_ = lean_array_push(v_fst_6199_, v_a_6209_);
v___x_6214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6214_, 0, v___x_6200_);
lean_ctor_set(v___x_6214_, 1, v___x_6201_);
v___x_6215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6215_, 0, v___x_6202_);
lean_ctor_set(v___x_6215_, 1, v___x_6214_);
v___x_6216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6216_, 0, v___x_6213_);
lean_ctor_set(v___x_6216_, 1, v___x_6215_);
v___x_6217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6217_, 0, v___x_6216_);
if (v_isShared_6212_ == 0)
{
lean_ctor_set(v___x_6211_, 0, v___x_6217_);
v___x_6219_ = v___x_6211_;
goto v_reusejp_6218_;
}
else
{
lean_object* v_reuseFailAlloc_6220_; 
v_reuseFailAlloc_6220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6220_, 0, v___x_6217_);
v___x_6219_ = v_reuseFailAlloc_6220_;
goto v_reusejp_6218_;
}
v_reusejp_6218_:
{
return v___x_6219_;
}
}
}
else
{
lean_object* v_a_6222_; lean_object* v___x_6224_; uint8_t v_isShared_6225_; uint8_t v_isSharedCheck_6229_; 
lean_dec_ref(v___x_6202_);
lean_dec_ref(v___x_6201_);
lean_dec_ref(v___x_6200_);
lean_dec(v_fst_6199_);
v_a_6222_ = lean_ctor_get(v___x_6208_, 0);
v_isSharedCheck_6229_ = !lean_is_exclusive(v___x_6208_);
if (v_isSharedCheck_6229_ == 0)
{
v___x_6224_ = v___x_6208_;
v_isShared_6225_ = v_isSharedCheck_6229_;
goto v_resetjp_6223_;
}
else
{
lean_inc(v_a_6222_);
lean_dec(v___x_6208_);
v___x_6224_ = lean_box(0);
v_isShared_6225_ = v_isSharedCheck_6229_;
goto v_resetjp_6223_;
}
v_resetjp_6223_:
{
lean_object* v___x_6227_; 
if (v_isShared_6225_ == 0)
{
v___x_6227_ = v___x_6224_;
goto v_reusejp_6226_;
}
else
{
lean_object* v_reuseFailAlloc_6228_; 
v_reuseFailAlloc_6228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6228_, 0, v_a_6222_);
v___x_6227_ = v_reuseFailAlloc_6228_;
goto v_reusejp_6226_;
}
v_reusejp_6226_:
{
return v___x_6227_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed(lean_object* v___x_6230_, lean_object* v___x_6231_, lean_object* v___f_6232_, lean_object* v___x_6233_, lean_object* v_fst_6234_, lean_object* v___x_6235_, lean_object* v___x_6236_, lean_object* v___x_6237_, lean_object* v___y_6238_, lean_object* v___y_6239_, lean_object* v___y_6240_, lean_object* v___y_6241_, lean_object* v___y_6242_){
_start:
{
uint8_t v___x_35194__boxed_6243_; lean_object* v_res_6244_; 
v___x_35194__boxed_6243_ = lean_unbox(v___x_6233_);
v_res_6244_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(v___x_6230_, v___x_6231_, v___f_6232_, v___x_35194__boxed_6243_, v_fst_6234_, v___x_6235_, v___x_6236_, v___x_6237_, v___y_6238_, v___y_6239_, v___y_6240_, v___y_6241_);
lean_dec(v___y_6241_);
lean_dec_ref(v___y_6240_);
lean_dec(v___y_6239_);
lean_dec_ref(v___y_6238_);
return v_res_6244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(lean_object* v_fvars_6245_, lean_object* v_names_6246_, lean_object* v_k_6247_, lean_object* v___y_6248_, lean_object* v___y_6249_, lean_object* v___y_6250_, lean_object* v___y_6251_){
_start:
{
lean_object* v___x_6253_; 
v___x_6253_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_6245_, v_names_6246_, v_k_6247_, v___y_6248_, v___y_6249_, v___y_6250_, v___y_6251_);
if (lean_obj_tag(v___x_6253_) == 0)
{
lean_object* v_a_6254_; lean_object* v___x_6256_; uint8_t v_isShared_6257_; uint8_t v_isSharedCheck_6261_; 
v_a_6254_ = lean_ctor_get(v___x_6253_, 0);
v_isSharedCheck_6261_ = !lean_is_exclusive(v___x_6253_);
if (v_isSharedCheck_6261_ == 0)
{
v___x_6256_ = v___x_6253_;
v_isShared_6257_ = v_isSharedCheck_6261_;
goto v_resetjp_6255_;
}
else
{
lean_inc(v_a_6254_);
lean_dec(v___x_6253_);
v___x_6256_ = lean_box(0);
v_isShared_6257_ = v_isSharedCheck_6261_;
goto v_resetjp_6255_;
}
v_resetjp_6255_:
{
lean_object* v___x_6259_; 
if (v_isShared_6257_ == 0)
{
v___x_6259_ = v___x_6256_;
goto v_reusejp_6258_;
}
else
{
lean_object* v_reuseFailAlloc_6260_; 
v_reuseFailAlloc_6260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6260_, 0, v_a_6254_);
v___x_6259_ = v_reuseFailAlloc_6260_;
goto v_reusejp_6258_;
}
v_reusejp_6258_:
{
return v___x_6259_;
}
}
}
else
{
lean_object* v_a_6262_; lean_object* v___x_6264_; uint8_t v_isShared_6265_; uint8_t v_isSharedCheck_6269_; 
v_a_6262_ = lean_ctor_get(v___x_6253_, 0);
v_isSharedCheck_6269_ = !lean_is_exclusive(v___x_6253_);
if (v_isSharedCheck_6269_ == 0)
{
v___x_6264_ = v___x_6253_;
v_isShared_6265_ = v_isSharedCheck_6269_;
goto v_resetjp_6263_;
}
else
{
lean_inc(v_a_6262_);
lean_dec(v___x_6253_);
v___x_6264_ = lean_box(0);
v_isShared_6265_ = v_isSharedCheck_6269_;
goto v_resetjp_6263_;
}
v_resetjp_6263_:
{
lean_object* v___x_6267_; 
if (v_isShared_6265_ == 0)
{
v___x_6267_ = v___x_6264_;
goto v_reusejp_6266_;
}
else
{
lean_object* v_reuseFailAlloc_6268_; 
v_reuseFailAlloc_6268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6268_, 0, v_a_6262_);
v___x_6267_ = v_reuseFailAlloc_6268_;
goto v_reusejp_6266_;
}
v_reusejp_6266_:
{
return v___x_6267_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg___boxed(lean_object* v_fvars_6270_, lean_object* v_names_6271_, lean_object* v_k_6272_, lean_object* v___y_6273_, lean_object* v___y_6274_, lean_object* v___y_6275_, lean_object* v___y_6276_, lean_object* v___y_6277_){
_start:
{
lean_object* v_res_6278_; 
v_res_6278_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_fvars_6270_, v_names_6271_, v_k_6272_, v___y_6273_, v___y_6274_, v___y_6275_, v___y_6276_);
lean_dec(v___y_6276_);
lean_dec_ref(v___y_6275_);
lean_dec(v___y_6274_);
lean_dec_ref(v___y_6273_);
lean_dec_ref(v_names_6271_);
lean_dec_ref(v_fvars_6270_);
return v_res_6278_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(lean_object* v___x_6279_, lean_object* v_xs_6280_, lean_object* v_remaining_x27_6281_, lean_object* v_ys4_6282_, lean_object* v_onAlt_6283_, lean_object* v_a_6284_, lean_object* v_altType_6285_, uint8_t v___x_6286_, uint8_t v___x_6287_, lean_object* v___y_6288_, lean_object* v___y_6289_, lean_object* v___y_6290_, lean_object* v___y_6291_){
_start:
{
lean_object* v___x_6293_; 
v___x_6293_ = l_Lean_Meta_instantiateLambda(v___x_6279_, v_xs_6280_, v___y_6288_, v___y_6289_, v___y_6290_, v___y_6291_);
if (lean_obj_tag(v___x_6293_) == 0)
{
lean_object* v_a_6294_; lean_object* v___x_6295_; lean_object* v___x_6296_; 
v_a_6294_ = lean_ctor_get(v___x_6293_, 0);
lean_inc(v_a_6294_);
lean_dec_ref_known(v___x_6293_, 1);
lean_inc_ref(v_ys4_6282_);
lean_inc_ref(v_remaining_x27_6281_);
lean_inc_ref_n(v_xs_6280_, 2);
v___x_6295_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6295_, 0, v_xs_6280_);
lean_ctor_set(v___x_6295_, 1, v_xs_6280_);
lean_ctor_set(v___x_6295_, 2, v_remaining_x27_6281_);
lean_ctor_set(v___x_6295_, 3, v_remaining_x27_6281_);
lean_ctor_set(v___x_6295_, 4, v_ys4_6282_);
lean_inc(v___y_6291_);
lean_inc_ref(v___y_6290_);
lean_inc(v___y_6289_);
lean_inc_ref(v___y_6288_);
v___x_6296_ = lean_apply_9(v_onAlt_6283_, v_a_6284_, v_altType_6285_, v___x_6295_, v_a_6294_, v___y_6288_, v___y_6289_, v___y_6290_, v___y_6291_, lean_box(0));
if (lean_obj_tag(v___x_6296_) == 0)
{
lean_object* v_a_6297_; lean_object* v___x_6298_; uint8_t v___x_6299_; lean_object* v___x_6300_; 
v_a_6297_ = lean_ctor_get(v___x_6296_, 0);
lean_inc(v_a_6297_);
lean_dec_ref_known(v___x_6296_, 1);
v___x_6298_ = l_Array_append___redArg(v_xs_6280_, v_ys4_6282_);
lean_dec_ref(v_ys4_6282_);
v___x_6299_ = 1;
v___x_6300_ = l_Lean_Meta_mkLambdaFVars(v___x_6298_, v_a_6297_, v___x_6286_, v___x_6287_, v___x_6286_, v___x_6287_, v___x_6299_, v___y_6288_, v___y_6289_, v___y_6290_, v___y_6291_);
lean_dec(v___y_6291_);
lean_dec_ref(v___y_6290_);
lean_dec(v___y_6289_);
lean_dec_ref(v___y_6288_);
return v___x_6300_;
}
else
{
lean_dec(v___y_6291_);
lean_dec_ref(v___y_6290_);
lean_dec(v___y_6289_);
lean_dec_ref(v___y_6288_);
lean_dec_ref(v_ys4_6282_);
lean_dec_ref(v_xs_6280_);
return v___x_6296_;
}
}
else
{
lean_dec(v___y_6291_);
lean_dec_ref(v___y_6290_);
lean_dec(v___y_6289_);
lean_dec_ref(v___y_6288_);
lean_dec_ref(v_altType_6285_);
lean_dec(v_a_6284_);
lean_dec_ref(v_onAlt_6283_);
lean_dec_ref(v_ys4_6282_);
lean_dec_ref(v_remaining_x27_6281_);
lean_dec_ref(v_xs_6280_);
return v___x_6293_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed(lean_object* v___x_6301_, lean_object* v_xs_6302_, lean_object* v_remaining_x27_6303_, lean_object* v_ys4_6304_, lean_object* v_onAlt_6305_, lean_object* v_a_6306_, lean_object* v_altType_6307_, lean_object* v___x_6308_, lean_object* v___x_6309_, lean_object* v___y_6310_, lean_object* v___y_6311_, lean_object* v___y_6312_, lean_object* v___y_6313_, lean_object* v___y_6314_){
_start:
{
uint8_t v___x_35321__boxed_6315_; uint8_t v___x_35322__boxed_6316_; lean_object* v_res_6317_; 
v___x_35321__boxed_6315_ = lean_unbox(v___x_6308_);
v___x_35322__boxed_6316_ = lean_unbox(v___x_6309_);
v_res_6317_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(v___x_6301_, v_xs_6302_, v_remaining_x27_6303_, v_ys4_6304_, v_onAlt_6305_, v_a_6306_, v_altType_6307_, v___x_35321__boxed_6315_, v___x_35322__boxed_6316_, v___y_6310_, v___y_6311_, v___y_6312_, v___y_6313_);
return v_res_6317_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(lean_object* v___x_6318_, lean_object* v_xs_6319_, lean_object* v_remaining_x27_6320_, lean_object* v_onAlt_6321_, lean_object* v_a_6322_, uint8_t v___x_6323_, uint8_t v___x_6324_, lean_object* v___f_6325_, lean_object* v_ys4_6326_, lean_object* v_altType_6327_, lean_object* v___y_6328_, lean_object* v___y_6329_, lean_object* v___y_6330_, lean_object* v___y_6331_){
_start:
{
lean_object* v___x_6333_; lean_object* v___x_6334_; lean_object* v___f_6335_; lean_object* v___x_6336_; 
v___x_6333_ = lean_box(v___x_6323_);
v___x_6334_ = lean_box(v___x_6324_);
lean_inc_ref(v_xs_6319_);
lean_inc_ref(v___x_6318_);
v___f_6335_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed), 14, 9);
lean_closure_set(v___f_6335_, 0, v___x_6318_);
lean_closure_set(v___f_6335_, 1, v_xs_6319_);
lean_closure_set(v___f_6335_, 2, v_remaining_x27_6320_);
lean_closure_set(v___f_6335_, 3, v_ys4_6326_);
lean_closure_set(v___f_6335_, 4, v_onAlt_6321_);
lean_closure_set(v___f_6335_, 5, v_a_6322_);
lean_closure_set(v___f_6335_, 6, v_altType_6327_);
lean_closure_set(v___f_6335_, 7, v___x_6333_);
lean_closure_set(v___f_6335_, 8, v___x_6334_);
v___x_6336_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v___x_6318_, v___f_6325_, v___x_6323_, v___y_6328_, v___y_6329_, v___y_6330_, v___y_6331_);
if (lean_obj_tag(v___x_6336_) == 0)
{
lean_object* v_a_6337_; lean_object* v___x_6338_; 
v_a_6337_ = lean_ctor_get(v___x_6336_, 0);
lean_inc(v_a_6337_);
lean_dec_ref_known(v___x_6336_, 1);
v___x_6338_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_xs_6319_, v_a_6337_, v___f_6335_, v___y_6328_, v___y_6329_, v___y_6330_, v___y_6331_);
lean_dec(v_a_6337_);
lean_dec_ref(v_xs_6319_);
return v___x_6338_;
}
else
{
lean_object* v_a_6339_; lean_object* v___x_6341_; uint8_t v_isShared_6342_; uint8_t v_isSharedCheck_6346_; 
lean_dec_ref(v___f_6335_);
lean_dec_ref(v_xs_6319_);
v_a_6339_ = lean_ctor_get(v___x_6336_, 0);
v_isSharedCheck_6346_ = !lean_is_exclusive(v___x_6336_);
if (v_isSharedCheck_6346_ == 0)
{
v___x_6341_ = v___x_6336_;
v_isShared_6342_ = v_isSharedCheck_6346_;
goto v_resetjp_6340_;
}
else
{
lean_inc(v_a_6339_);
lean_dec(v___x_6336_);
v___x_6341_ = lean_box(0);
v_isShared_6342_ = v_isSharedCheck_6346_;
goto v_resetjp_6340_;
}
v_resetjp_6340_:
{
lean_object* v___x_6344_; 
if (v_isShared_6342_ == 0)
{
v___x_6344_ = v___x_6341_;
goto v_reusejp_6343_;
}
else
{
lean_object* v_reuseFailAlloc_6345_; 
v_reuseFailAlloc_6345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6345_, 0, v_a_6339_);
v___x_6344_ = v_reuseFailAlloc_6345_;
goto v_reusejp_6343_;
}
v_reusejp_6343_:
{
return v___x_6344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed(lean_object* v___x_6347_, lean_object* v_xs_6348_, lean_object* v_remaining_x27_6349_, lean_object* v_onAlt_6350_, lean_object* v_a_6351_, lean_object* v___x_6352_, lean_object* v___x_6353_, lean_object* v___f_6354_, lean_object* v_ys4_6355_, lean_object* v_altType_6356_, lean_object* v___y_6357_, lean_object* v___y_6358_, lean_object* v___y_6359_, lean_object* v___y_6360_, lean_object* v___y_6361_){
_start:
{
uint8_t v___x_35363__boxed_6362_; uint8_t v___x_35364__boxed_6363_; lean_object* v_res_6364_; 
v___x_35363__boxed_6362_ = lean_unbox(v___x_6352_);
v___x_35364__boxed_6363_ = lean_unbox(v___x_6353_);
v_res_6364_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(v___x_6347_, v_xs_6348_, v_remaining_x27_6349_, v_onAlt_6350_, v_a_6351_, v___x_35363__boxed_6362_, v___x_35364__boxed_6363_, v___f_6354_, v_ys4_6355_, v_altType_6356_, v___y_6357_, v___y_6358_, v___y_6359_, v___y_6360_);
lean_dec(v___y_6360_);
lean_dec_ref(v___y_6359_);
lean_dec(v___y_6358_);
lean_dec_ref(v___y_6357_);
return v_res_6364_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(lean_object* v___x_6365_, lean_object* v_remaining_x27_6366_, lean_object* v_onAlt_6367_, lean_object* v_a_6368_, uint8_t v___x_6369_, uint8_t v___x_6370_, lean_object* v___f_6371_, lean_object* v_extraEqualities_6372_, lean_object* v_xs_6373_, lean_object* v_altType_6374_, lean_object* v___y_6375_, lean_object* v___y_6376_, lean_object* v___y_6377_, lean_object* v___y_6378_){
_start:
{
lean_object* v___x_6380_; lean_object* v___x_6381_; lean_object* v___f_6382_; lean_object* v___x_6383_; lean_object* v___x_6384_; 
v___x_6380_ = lean_box(v___x_6369_);
v___x_6381_ = lean_box(v___x_6370_);
v___f_6382_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed), 15, 8);
lean_closure_set(v___f_6382_, 0, v___x_6365_);
lean_closure_set(v___f_6382_, 1, v_xs_6373_);
lean_closure_set(v___f_6382_, 2, v_remaining_x27_6366_);
lean_closure_set(v___f_6382_, 3, v_onAlt_6367_);
lean_closure_set(v___f_6382_, 4, v_a_6368_);
lean_closure_set(v___f_6382_, 5, v___x_6380_);
lean_closure_set(v___f_6382_, 6, v___x_6381_);
lean_closure_set(v___f_6382_, 7, v___f_6371_);
v___x_6383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6383_, 0, v_extraEqualities_6372_);
v___x_6384_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_altType_6374_, v___x_6383_, v___f_6382_, v___x_6369_, v___x_6369_, v___y_6375_, v___y_6376_, v___y_6377_, v___y_6378_);
return v___x_6384_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed(lean_object* v___x_6385_, lean_object* v_remaining_x27_6386_, lean_object* v_onAlt_6387_, lean_object* v_a_6388_, lean_object* v___x_6389_, lean_object* v___x_6390_, lean_object* v___f_6391_, lean_object* v_extraEqualities_6392_, lean_object* v_xs_6393_, lean_object* v_altType_6394_, lean_object* v___y_6395_, lean_object* v___y_6396_, lean_object* v___y_6397_, lean_object* v___y_6398_, lean_object* v___y_6399_){
_start:
{
uint8_t v___x_35418__boxed_6400_; uint8_t v___x_35419__boxed_6401_; lean_object* v_res_6402_; 
v___x_35418__boxed_6400_ = lean_unbox(v___x_6389_);
v___x_35419__boxed_6401_ = lean_unbox(v___x_6390_);
v_res_6402_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(v___x_6385_, v_remaining_x27_6386_, v_onAlt_6387_, v_a_6388_, v___x_35418__boxed_6400_, v___x_35419__boxed_6401_, v___f_6391_, v_extraEqualities_6392_, v_xs_6393_, v_altType_6394_, v___y_6395_, v___y_6396_, v___y_6397_, v___y_6398_);
lean_dec(v___y_6398_);
lean_dec_ref(v___y_6397_);
lean_dec(v___y_6396_);
lean_dec_ref(v___y_6395_);
return v_res_6402_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(lean_object* v_upperBound_6404_, lean_object* v_onAlt_6405_, lean_object* v_extraEqualities_6406_, lean_object* v_a_6407_, lean_object* v_b_6408_, lean_object* v___y_6409_, lean_object* v___y_6410_, lean_object* v___y_6411_, lean_object* v___y_6412_){
_start:
{
lean_object* v___y_6415_; uint8_t v___x_6438_; 
v___x_6438_ = lean_nat_dec_lt(v_a_6407_, v_upperBound_6404_);
if (v___x_6438_ == 0)
{
lean_object* v___x_6439_; 
lean_dec(v_a_6407_);
lean_dec(v_extraEqualities_6406_);
lean_dec_ref(v_onAlt_6405_);
v___x_6439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6439_, 0, v_b_6408_);
return v___x_6439_;
}
else
{
lean_object* v_snd_6440_; lean_object* v_snd_6441_; lean_object* v_snd_6442_; lean_object* v_fst_6443_; lean_object* v___x_6445_; uint8_t v_isShared_6446_; uint8_t v_isSharedCheck_6550_; 
v_snd_6440_ = lean_ctor_get(v_b_6408_, 1);
lean_inc(v_snd_6440_);
v_snd_6441_ = lean_ctor_get(v_snd_6440_, 1);
lean_inc(v_snd_6441_);
v_snd_6442_ = lean_ctor_get(v_snd_6441_, 1);
lean_inc(v_snd_6442_);
v_fst_6443_ = lean_ctor_get(v_b_6408_, 0);
v_isSharedCheck_6550_ = !lean_is_exclusive(v_b_6408_);
if (v_isSharedCheck_6550_ == 0)
{
lean_object* v_unused_6551_; 
v_unused_6551_ = lean_ctor_get(v_b_6408_, 1);
lean_dec(v_unused_6551_);
v___x_6445_ = v_b_6408_;
v_isShared_6446_ = v_isSharedCheck_6550_;
goto v_resetjp_6444_;
}
else
{
lean_inc(v_fst_6443_);
lean_dec(v_b_6408_);
v___x_6445_ = lean_box(0);
v_isShared_6446_ = v_isSharedCheck_6550_;
goto v_resetjp_6444_;
}
v_resetjp_6444_:
{
lean_object* v_fst_6447_; lean_object* v___x_6449_; uint8_t v_isShared_6450_; uint8_t v_isSharedCheck_6548_; 
v_fst_6447_ = lean_ctor_get(v_snd_6440_, 0);
v_isSharedCheck_6548_ = !lean_is_exclusive(v_snd_6440_);
if (v_isSharedCheck_6548_ == 0)
{
lean_object* v_unused_6549_; 
v_unused_6549_ = lean_ctor_get(v_snd_6440_, 1);
lean_dec(v_unused_6549_);
v___x_6449_ = v_snd_6440_;
v_isShared_6450_ = v_isSharedCheck_6548_;
goto v_resetjp_6448_;
}
else
{
lean_inc(v_fst_6447_);
lean_dec(v_snd_6440_);
v___x_6449_ = lean_box(0);
v_isShared_6450_ = v_isSharedCheck_6548_;
goto v_resetjp_6448_;
}
v_resetjp_6448_:
{
lean_object* v_fst_6451_; lean_object* v___x_6453_; uint8_t v_isShared_6454_; uint8_t v_isSharedCheck_6546_; 
v_fst_6451_ = lean_ctor_get(v_snd_6441_, 0);
v_isSharedCheck_6546_ = !lean_is_exclusive(v_snd_6441_);
if (v_isSharedCheck_6546_ == 0)
{
lean_object* v_unused_6547_; 
v_unused_6547_ = lean_ctor_get(v_snd_6441_, 1);
lean_dec(v_unused_6547_);
v___x_6453_ = v_snd_6441_;
v_isShared_6454_ = v_isSharedCheck_6546_;
goto v_resetjp_6452_;
}
else
{
lean_inc(v_fst_6451_);
lean_dec(v_snd_6441_);
v___x_6453_ = lean_box(0);
v_isShared_6454_ = v_isSharedCheck_6546_;
goto v_resetjp_6452_;
}
v_resetjp_6452_:
{
lean_object* v_array_6455_; lean_object* v_start_6456_; lean_object* v_stop_6457_; uint8_t v___x_6458_; 
v_array_6455_ = lean_ctor_get(v_snd_6442_, 0);
v_start_6456_ = lean_ctor_get(v_snd_6442_, 1);
v_stop_6457_ = lean_ctor_get(v_snd_6442_, 2);
v___x_6458_ = lean_nat_dec_lt(v_start_6456_, v_stop_6457_);
if (v___x_6458_ == 0)
{
lean_object* v___x_6460_; 
if (v_isShared_6454_ == 0)
{
v___x_6460_ = v___x_6453_;
goto v_reusejp_6459_;
}
else
{
lean_object* v_reuseFailAlloc_6469_; 
v_reuseFailAlloc_6469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6469_, 0, v_fst_6451_);
lean_ctor_set(v_reuseFailAlloc_6469_, 1, v_snd_6442_);
v___x_6460_ = v_reuseFailAlloc_6469_;
goto v_reusejp_6459_;
}
v_reusejp_6459_:
{
lean_object* v___x_6462_; 
if (v_isShared_6450_ == 0)
{
lean_ctor_set(v___x_6449_, 1, v___x_6460_);
v___x_6462_ = v___x_6449_;
goto v_reusejp_6461_;
}
else
{
lean_object* v_reuseFailAlloc_6468_; 
v_reuseFailAlloc_6468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6468_, 0, v_fst_6447_);
lean_ctor_set(v_reuseFailAlloc_6468_, 1, v___x_6460_);
v___x_6462_ = v_reuseFailAlloc_6468_;
goto v_reusejp_6461_;
}
v_reusejp_6461_:
{
lean_object* v___x_6464_; 
if (v_isShared_6446_ == 0)
{
lean_ctor_set(v___x_6445_, 1, v___x_6462_);
v___x_6464_ = v___x_6445_;
goto v_reusejp_6463_;
}
else
{
lean_object* v_reuseFailAlloc_6467_; 
v_reuseFailAlloc_6467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6467_, 0, v_fst_6443_);
lean_ctor_set(v_reuseFailAlloc_6467_, 1, v___x_6462_);
v___x_6464_ = v_reuseFailAlloc_6467_;
goto v_reusejp_6463_;
}
v_reusejp_6463_:
{
lean_object* v___x_6465_; lean_object* v___f_6466_; 
v___x_6465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6465_, 0, v___x_6464_);
v___f_6466_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6466_, 0, v___x_6465_);
v___y_6415_ = v___f_6466_;
goto v___jp_6414_;
}
}
}
}
else
{
lean_object* v___x_6471_; uint8_t v_isShared_6472_; uint8_t v_isSharedCheck_6542_; 
lean_inc(v_stop_6457_);
lean_inc(v_start_6456_);
lean_inc_ref(v_array_6455_);
v_isSharedCheck_6542_ = !lean_is_exclusive(v_snd_6442_);
if (v_isSharedCheck_6542_ == 0)
{
lean_object* v_unused_6543_; lean_object* v_unused_6544_; lean_object* v_unused_6545_; 
v_unused_6543_ = lean_ctor_get(v_snd_6442_, 2);
lean_dec(v_unused_6543_);
v_unused_6544_ = lean_ctor_get(v_snd_6442_, 1);
lean_dec(v_unused_6544_);
v_unused_6545_ = lean_ctor_get(v_snd_6442_, 0);
lean_dec(v_unused_6545_);
v___x_6471_ = v_snd_6442_;
v_isShared_6472_ = v_isSharedCheck_6542_;
goto v_resetjp_6470_;
}
else
{
lean_dec(v_snd_6442_);
v___x_6471_ = lean_box(0);
v_isShared_6472_ = v_isSharedCheck_6542_;
goto v_resetjp_6470_;
}
v_resetjp_6470_:
{
lean_object* v_array_6473_; lean_object* v_start_6474_; lean_object* v_stop_6475_; lean_object* v___x_6476_; lean_object* v___x_6477_; lean_object* v___x_6478_; lean_object* v___x_6480_; 
v_array_6473_ = lean_ctor_get(v_fst_6451_, 0);
v_start_6474_ = lean_ctor_get(v_fst_6451_, 1);
v_stop_6475_ = lean_ctor_get(v_fst_6451_, 2);
v___x_6476_ = lean_array_fget(v_array_6455_, v_start_6456_);
v___x_6477_ = lean_unsigned_to_nat(1u);
v___x_6478_ = lean_nat_add(v_start_6456_, v___x_6477_);
lean_dec(v_start_6456_);
if (v_isShared_6472_ == 0)
{
lean_ctor_set(v___x_6471_, 1, v___x_6478_);
v___x_6480_ = v___x_6471_;
goto v_reusejp_6479_;
}
else
{
lean_object* v_reuseFailAlloc_6541_; 
v_reuseFailAlloc_6541_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6541_, 0, v_array_6455_);
lean_ctor_set(v_reuseFailAlloc_6541_, 1, v___x_6478_);
lean_ctor_set(v_reuseFailAlloc_6541_, 2, v_stop_6457_);
v___x_6480_ = v_reuseFailAlloc_6541_;
goto v_reusejp_6479_;
}
v_reusejp_6479_:
{
uint8_t v___x_6481_; 
v___x_6481_ = lean_nat_dec_lt(v_start_6474_, v_stop_6475_);
if (v___x_6481_ == 0)
{
lean_object* v___x_6483_; 
lean_dec(v___x_6476_);
if (v_isShared_6454_ == 0)
{
lean_ctor_set(v___x_6453_, 1, v___x_6480_);
v___x_6483_ = v___x_6453_;
goto v_reusejp_6482_;
}
else
{
lean_object* v_reuseFailAlloc_6492_; 
v_reuseFailAlloc_6492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6492_, 0, v_fst_6451_);
lean_ctor_set(v_reuseFailAlloc_6492_, 1, v___x_6480_);
v___x_6483_ = v_reuseFailAlloc_6492_;
goto v_reusejp_6482_;
}
v_reusejp_6482_:
{
lean_object* v___x_6485_; 
if (v_isShared_6450_ == 0)
{
lean_ctor_set(v___x_6449_, 1, v___x_6483_);
v___x_6485_ = v___x_6449_;
goto v_reusejp_6484_;
}
else
{
lean_object* v_reuseFailAlloc_6491_; 
v_reuseFailAlloc_6491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6491_, 0, v_fst_6447_);
lean_ctor_set(v_reuseFailAlloc_6491_, 1, v___x_6483_);
v___x_6485_ = v_reuseFailAlloc_6491_;
goto v_reusejp_6484_;
}
v_reusejp_6484_:
{
lean_object* v___x_6487_; 
if (v_isShared_6446_ == 0)
{
lean_ctor_set(v___x_6445_, 1, v___x_6485_);
v___x_6487_ = v___x_6445_;
goto v_reusejp_6486_;
}
else
{
lean_object* v_reuseFailAlloc_6490_; 
v_reuseFailAlloc_6490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6490_, 0, v_fst_6443_);
lean_ctor_set(v_reuseFailAlloc_6490_, 1, v___x_6485_);
v___x_6487_ = v_reuseFailAlloc_6490_;
goto v_reusejp_6486_;
}
v_reusejp_6486_:
{
lean_object* v___x_6488_; lean_object* v___f_6489_; 
v___x_6488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6488_, 0, v___x_6487_);
v___f_6489_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6489_, 0, v___x_6488_);
v___y_6415_ = v___f_6489_;
goto v___jp_6414_;
}
}
}
}
else
{
lean_object* v___x_6494_; uint8_t v_isShared_6495_; uint8_t v_isSharedCheck_6537_; 
lean_inc(v_stop_6475_);
lean_inc(v_start_6474_);
lean_inc_ref(v_array_6473_);
v_isSharedCheck_6537_ = !lean_is_exclusive(v_fst_6451_);
if (v_isSharedCheck_6537_ == 0)
{
lean_object* v_unused_6538_; lean_object* v_unused_6539_; lean_object* v_unused_6540_; 
v_unused_6538_ = lean_ctor_get(v_fst_6451_, 2);
lean_dec(v_unused_6538_);
v_unused_6539_ = lean_ctor_get(v_fst_6451_, 1);
lean_dec(v_unused_6539_);
v_unused_6540_ = lean_ctor_get(v_fst_6451_, 0);
lean_dec(v_unused_6540_);
v___x_6494_ = v_fst_6451_;
v_isShared_6495_ = v_isSharedCheck_6537_;
goto v_resetjp_6493_;
}
else
{
lean_dec(v_fst_6451_);
v___x_6494_ = lean_box(0);
v_isShared_6495_ = v_isSharedCheck_6537_;
goto v_resetjp_6493_;
}
v_resetjp_6493_:
{
lean_object* v_array_6496_; lean_object* v_start_6497_; lean_object* v_stop_6498_; lean_object* v___x_6499_; lean_object* v___x_6500_; lean_object* v___x_6502_; 
v_array_6496_ = lean_ctor_get(v_fst_6447_, 0);
v_start_6497_ = lean_ctor_get(v_fst_6447_, 1);
v_stop_6498_ = lean_ctor_get(v_fst_6447_, 2);
v___x_6499_ = lean_array_fget(v_array_6473_, v_start_6474_);
v___x_6500_ = lean_nat_add(v_start_6474_, v___x_6477_);
lean_dec(v_start_6474_);
if (v_isShared_6495_ == 0)
{
lean_ctor_set(v___x_6494_, 1, v___x_6500_);
v___x_6502_ = v___x_6494_;
goto v_reusejp_6501_;
}
else
{
lean_object* v_reuseFailAlloc_6536_; 
v_reuseFailAlloc_6536_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6536_, 0, v_array_6473_);
lean_ctor_set(v_reuseFailAlloc_6536_, 1, v___x_6500_);
lean_ctor_set(v_reuseFailAlloc_6536_, 2, v_stop_6475_);
v___x_6502_ = v_reuseFailAlloc_6536_;
goto v_reusejp_6501_;
}
v_reusejp_6501_:
{
uint8_t v___x_6503_; 
v___x_6503_ = lean_nat_dec_lt(v_start_6497_, v_stop_6498_);
if (v___x_6503_ == 0)
{
lean_object* v___x_6505_; 
lean_dec(v___x_6499_);
lean_dec(v___x_6476_);
if (v_isShared_6454_ == 0)
{
lean_ctor_set(v___x_6453_, 1, v___x_6480_);
lean_ctor_set(v___x_6453_, 0, v___x_6502_);
v___x_6505_ = v___x_6453_;
goto v_reusejp_6504_;
}
else
{
lean_object* v_reuseFailAlloc_6514_; 
v_reuseFailAlloc_6514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6514_, 0, v___x_6502_);
lean_ctor_set(v_reuseFailAlloc_6514_, 1, v___x_6480_);
v___x_6505_ = v_reuseFailAlloc_6514_;
goto v_reusejp_6504_;
}
v_reusejp_6504_:
{
lean_object* v___x_6507_; 
if (v_isShared_6450_ == 0)
{
lean_ctor_set(v___x_6449_, 1, v___x_6505_);
v___x_6507_ = v___x_6449_;
goto v_reusejp_6506_;
}
else
{
lean_object* v_reuseFailAlloc_6513_; 
v_reuseFailAlloc_6513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6513_, 0, v_fst_6447_);
lean_ctor_set(v_reuseFailAlloc_6513_, 1, v___x_6505_);
v___x_6507_ = v_reuseFailAlloc_6513_;
goto v_reusejp_6506_;
}
v_reusejp_6506_:
{
lean_object* v___x_6509_; 
if (v_isShared_6446_ == 0)
{
lean_ctor_set(v___x_6445_, 1, v___x_6507_);
v___x_6509_ = v___x_6445_;
goto v_reusejp_6508_;
}
else
{
lean_object* v_reuseFailAlloc_6512_; 
v_reuseFailAlloc_6512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6512_, 0, v_fst_6443_);
lean_ctor_set(v_reuseFailAlloc_6512_, 1, v___x_6507_);
v___x_6509_ = v_reuseFailAlloc_6512_;
goto v_reusejp_6508_;
}
v_reusejp_6508_:
{
lean_object* v___x_6510_; lean_object* v___f_6511_; 
v___x_6510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6510_, 0, v___x_6509_);
v___f_6511_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6511_, 0, v___x_6510_);
v___y_6415_ = v___f_6511_;
goto v___jp_6414_;
}
}
}
}
else
{
lean_object* v___x_6516_; uint8_t v_isShared_6517_; uint8_t v_isSharedCheck_6532_; 
lean_inc(v_stop_6498_);
lean_inc(v_start_6497_);
lean_inc_ref(v_array_6496_);
lean_del_object(v___x_6453_);
lean_del_object(v___x_6449_);
lean_del_object(v___x_6445_);
v_isSharedCheck_6532_ = !lean_is_exclusive(v_fst_6447_);
if (v_isSharedCheck_6532_ == 0)
{
lean_object* v_unused_6533_; lean_object* v_unused_6534_; lean_object* v_unused_6535_; 
v_unused_6533_ = lean_ctor_get(v_fst_6447_, 2);
lean_dec(v_unused_6533_);
v_unused_6534_ = lean_ctor_get(v_fst_6447_, 1);
lean_dec(v_unused_6534_);
v_unused_6535_ = lean_ctor_get(v_fst_6447_, 0);
lean_dec(v_unused_6535_);
v___x_6516_ = v_fst_6447_;
v_isShared_6517_ = v_isSharedCheck_6532_;
goto v_resetjp_6515_;
}
else
{
lean_dec(v_fst_6447_);
v___x_6516_ = lean_box(0);
v_isShared_6517_ = v_isSharedCheck_6532_;
goto v_resetjp_6515_;
}
v_resetjp_6515_:
{
lean_object* v___f_6518_; uint8_t v___x_6519_; lean_object* v_remaining_x27_6520_; lean_object* v___x_6521_; lean_object* v___x_6522_; lean_object* v___x_6523_; lean_object* v___f_6524_; lean_object* v___x_6525_; lean_object* v___x_6527_; 
v___f_6518_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0));
v___x_6519_ = 0;
v_remaining_x27_6520_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_6521_ = lean_array_fget_borrowed(v_array_6496_, v_start_6497_);
v___x_6522_ = lean_box(v___x_6519_);
v___x_6523_ = lean_box(v___x_6503_);
lean_inc(v_extraEqualities_6406_);
lean_inc(v_a_6407_);
lean_inc_ref(v_onAlt_6405_);
lean_inc(v___x_6521_);
v___f_6524_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed), 15, 8);
lean_closure_set(v___f_6524_, 0, v___x_6521_);
lean_closure_set(v___f_6524_, 1, v_remaining_x27_6520_);
lean_closure_set(v___f_6524_, 2, v_onAlt_6405_);
lean_closure_set(v___f_6524_, 3, v_a_6407_);
lean_closure_set(v___f_6524_, 4, v___x_6522_);
lean_closure_set(v___f_6524_, 5, v___x_6523_);
lean_closure_set(v___f_6524_, 6, v___f_6518_);
lean_closure_set(v___f_6524_, 7, v_extraEqualities_6406_);
v___x_6525_ = lean_nat_add(v_start_6497_, v___x_6477_);
lean_dec(v_start_6497_);
if (v_isShared_6517_ == 0)
{
lean_ctor_set(v___x_6516_, 1, v___x_6525_);
v___x_6527_ = v___x_6516_;
goto v_reusejp_6526_;
}
else
{
lean_object* v_reuseFailAlloc_6531_; 
v_reuseFailAlloc_6531_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6531_, 0, v_array_6496_);
lean_ctor_set(v_reuseFailAlloc_6531_, 1, v___x_6525_);
lean_ctor_set(v_reuseFailAlloc_6531_, 2, v_stop_6498_);
v___x_6527_ = v_reuseFailAlloc_6531_;
goto v_reusejp_6526_;
}
v_reusejp_6526_:
{
lean_object* v___x_6528_; lean_object* v___x_6529_; lean_object* v___f_6530_; 
v___x_6528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6528_, 0, v___x_6499_);
v___x_6529_ = lean_box(v___x_6519_);
v___f_6530_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed), 13, 8);
lean_closure_set(v___f_6530_, 0, v___x_6476_);
lean_closure_set(v___f_6530_, 1, v___x_6528_);
lean_closure_set(v___f_6530_, 2, v___f_6524_);
lean_closure_set(v___f_6530_, 3, v___x_6529_);
lean_closure_set(v___f_6530_, 4, v_fst_6443_);
lean_closure_set(v___f_6530_, 5, v___x_6502_);
lean_closure_set(v___f_6530_, 6, v___x_6480_);
lean_closure_set(v___f_6530_, 7, v___x_6527_);
v___y_6415_ = v___f_6530_;
goto v___jp_6414_;
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
v___jp_6414_:
{
lean_object* v___x_6416_; 
lean_inc(v___y_6412_);
lean_inc_ref(v___y_6411_);
lean_inc(v___y_6410_);
lean_inc_ref(v___y_6409_);
v___x_6416_ = lean_apply_5(v___y_6415_, v___y_6409_, v___y_6410_, v___y_6411_, v___y_6412_, lean_box(0));
if (lean_obj_tag(v___x_6416_) == 0)
{
lean_object* v_a_6417_; lean_object* v___x_6419_; uint8_t v_isShared_6420_; uint8_t v_isSharedCheck_6429_; 
v_a_6417_ = lean_ctor_get(v___x_6416_, 0);
v_isSharedCheck_6429_ = !lean_is_exclusive(v___x_6416_);
if (v_isSharedCheck_6429_ == 0)
{
v___x_6419_ = v___x_6416_;
v_isShared_6420_ = v_isSharedCheck_6429_;
goto v_resetjp_6418_;
}
else
{
lean_inc(v_a_6417_);
lean_dec(v___x_6416_);
v___x_6419_ = lean_box(0);
v_isShared_6420_ = v_isSharedCheck_6429_;
goto v_resetjp_6418_;
}
v_resetjp_6418_:
{
if (lean_obj_tag(v_a_6417_) == 0)
{
lean_object* v_a_6421_; lean_object* v___x_6423_; 
lean_dec(v_a_6407_);
lean_dec(v_extraEqualities_6406_);
lean_dec_ref(v_onAlt_6405_);
v_a_6421_ = lean_ctor_get(v_a_6417_, 0);
lean_inc(v_a_6421_);
lean_dec_ref_known(v_a_6417_, 1);
if (v_isShared_6420_ == 0)
{
lean_ctor_set(v___x_6419_, 0, v_a_6421_);
v___x_6423_ = v___x_6419_;
goto v_reusejp_6422_;
}
else
{
lean_object* v_reuseFailAlloc_6424_; 
v_reuseFailAlloc_6424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6424_, 0, v_a_6421_);
v___x_6423_ = v_reuseFailAlloc_6424_;
goto v_reusejp_6422_;
}
v_reusejp_6422_:
{
return v___x_6423_;
}
}
else
{
lean_object* v_a_6425_; lean_object* v___x_6426_; lean_object* v___x_6427_; 
lean_del_object(v___x_6419_);
v_a_6425_ = lean_ctor_get(v_a_6417_, 0);
lean_inc(v_a_6425_);
lean_dec_ref_known(v_a_6417_, 1);
v___x_6426_ = lean_unsigned_to_nat(1u);
v___x_6427_ = lean_nat_add(v_a_6407_, v___x_6426_);
lean_dec(v_a_6407_);
v_a_6407_ = v___x_6427_;
v_b_6408_ = v_a_6425_;
goto _start;
}
}
}
else
{
lean_object* v_a_6430_; lean_object* v___x_6432_; uint8_t v_isShared_6433_; uint8_t v_isSharedCheck_6437_; 
lean_dec(v_a_6407_);
lean_dec(v_extraEqualities_6406_);
lean_dec_ref(v_onAlt_6405_);
v_a_6430_ = lean_ctor_get(v___x_6416_, 0);
v_isSharedCheck_6437_ = !lean_is_exclusive(v___x_6416_);
if (v_isSharedCheck_6437_ == 0)
{
v___x_6432_ = v___x_6416_;
v_isShared_6433_ = v_isSharedCheck_6437_;
goto v_resetjp_6431_;
}
else
{
lean_inc(v_a_6430_);
lean_dec(v___x_6416_);
v___x_6432_ = lean_box(0);
v_isShared_6433_ = v_isSharedCheck_6437_;
goto v_resetjp_6431_;
}
v_resetjp_6431_:
{
lean_object* v___x_6435_; 
if (v_isShared_6433_ == 0)
{
v___x_6435_ = v___x_6432_;
goto v_reusejp_6434_;
}
else
{
lean_object* v_reuseFailAlloc_6436_; 
v_reuseFailAlloc_6436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6436_, 0, v_a_6430_);
v___x_6435_ = v_reuseFailAlloc_6436_;
goto v_reusejp_6434_;
}
v_reusejp_6434_:
{
return v___x_6435_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___boxed(lean_object* v_upperBound_6552_, lean_object* v_onAlt_6553_, lean_object* v_extraEqualities_6554_, lean_object* v_a_6555_, lean_object* v_b_6556_, lean_object* v___y_6557_, lean_object* v___y_6558_, lean_object* v___y_6559_, lean_object* v___y_6560_, lean_object* v___y_6561_){
_start:
{
lean_object* v_res_6562_; 
v_res_6562_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v_upperBound_6552_, v_onAlt_6553_, v_extraEqualities_6554_, v_a_6555_, v_b_6556_, v___y_6557_, v___y_6558_, v___y_6559_, v___y_6560_);
lean_dec(v___y_6560_);
lean_dec_ref(v___y_6559_);
lean_dec(v___y_6558_);
lean_dec_ref(v___y_6557_);
lean_dec(v_upperBound_6552_);
return v_res_6562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(lean_object* v_onParams_6563_, size_t v_sz_6564_, size_t v_i_6565_, lean_object* v_bs_6566_, lean_object* v___y_6567_, lean_object* v___y_6568_, lean_object* v___y_6569_, lean_object* v___y_6570_){
_start:
{
uint8_t v___x_6572_; 
v___x_6572_ = lean_usize_dec_lt(v_i_6565_, v_sz_6564_);
if (v___x_6572_ == 0)
{
lean_object* v___x_6573_; lean_object* v___x_6574_; 
lean_dec_ref(v_onParams_6563_);
v___x_6573_ = l_unsafeCast___redArg(v_bs_6566_);
lean_dec_ref(v_bs_6566_);
v___x_6574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6574_, 0, v___x_6573_);
return v___x_6574_;
}
else
{
lean_object* v_v_6575_; lean_object* v___x_6576_; lean_object* v_bs_x27_6577_; lean_object* v___x_6578_; lean_object* v___x_6579_; 
v_v_6575_ = lean_array_uget(v_bs_6566_, v_i_6565_);
v___x_6576_ = lean_unsigned_to_nat(0u);
v_bs_x27_6577_ = lean_array_uset(v_bs_6566_, v_i_6565_, v___x_6576_);
v___x_6578_ = l_unsafeCast___redArg(v_v_6575_);
lean_dec(v_v_6575_);
lean_inc_ref(v_onParams_6563_);
lean_inc(v___y_6570_);
lean_inc_ref(v___y_6569_);
lean_inc(v___y_6568_);
lean_inc_ref(v___y_6567_);
v___x_6579_ = lean_apply_6(v_onParams_6563_, v___x_6578_, v___y_6567_, v___y_6568_, v___y_6569_, v___y_6570_, lean_box(0));
if (lean_obj_tag(v___x_6579_) == 0)
{
lean_object* v_a_6580_; size_t v___x_6581_; size_t v___x_6582_; lean_object* v___x_6583_; lean_object* v___x_6584_; 
v_a_6580_ = lean_ctor_get(v___x_6579_, 0);
lean_inc(v_a_6580_);
lean_dec_ref_known(v___x_6579_, 1);
v___x_6581_ = ((size_t)1ULL);
v___x_6582_ = lean_usize_add(v_i_6565_, v___x_6581_);
v___x_6583_ = l_unsafeCast___redArg(v_a_6580_);
lean_dec(v_a_6580_);
v___x_6584_ = lean_array_uset(v_bs_x27_6577_, v_i_6565_, v___x_6583_);
v_i_6565_ = v___x_6582_;
v_bs_6566_ = v___x_6584_;
goto _start;
}
else
{
lean_object* v_a_6586_; lean_object* v___x_6588_; uint8_t v_isShared_6589_; uint8_t v_isSharedCheck_6593_; 
lean_dec_ref(v_bs_x27_6577_);
lean_dec_ref(v_onParams_6563_);
v_a_6586_ = lean_ctor_get(v___x_6579_, 0);
v_isSharedCheck_6593_ = !lean_is_exclusive(v___x_6579_);
if (v_isSharedCheck_6593_ == 0)
{
v___x_6588_ = v___x_6579_;
v_isShared_6589_ = v_isSharedCheck_6593_;
goto v_resetjp_6587_;
}
else
{
lean_inc(v_a_6586_);
lean_dec(v___x_6579_);
v___x_6588_ = lean_box(0);
v_isShared_6589_ = v_isSharedCheck_6593_;
goto v_resetjp_6587_;
}
v_resetjp_6587_:
{
lean_object* v___x_6591_; 
if (v_isShared_6589_ == 0)
{
v___x_6591_ = v___x_6588_;
goto v_reusejp_6590_;
}
else
{
lean_object* v_reuseFailAlloc_6592_; 
v_reuseFailAlloc_6592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6592_, 0, v_a_6586_);
v___x_6591_ = v_reuseFailAlloc_6592_;
goto v_reusejp_6590_;
}
v_reusejp_6590_:
{
return v___x_6591_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6___boxed(lean_object* v_onParams_6594_, lean_object* v_sz_6595_, lean_object* v_i_6596_, lean_object* v_bs_6597_, lean_object* v___y_6598_, lean_object* v___y_6599_, lean_object* v___y_6600_, lean_object* v___y_6601_, lean_object* v___y_6602_){
_start:
{
size_t v_sz_boxed_6603_; size_t v_i_boxed_6604_; lean_object* v_res_6605_; 
v_sz_boxed_6603_ = lean_unbox_usize(v_sz_6595_);
lean_dec(v_sz_6595_);
v_i_boxed_6604_ = lean_unbox_usize(v_i_6596_);
lean_dec(v_i_6596_);
v_res_6605_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(v_onParams_6594_, v_sz_boxed_6603_, v_i_boxed_6604_, v_bs_6597_, v___y_6598_, v___y_6599_, v___y_6600_, v___y_6601_);
lean_dec(v___y_6601_);
lean_dec_ref(v___y_6600_);
lean_dec(v___y_6599_);
lean_dec_ref(v___y_6598_);
return v_res_6605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(lean_object* v_declName_6606_, lean_object* v___y_6607_){
_start:
{
lean_object* v___x_6609_; lean_object* v_env_6610_; lean_object* v___x_6611_; lean_object* v___x_6612_; 
v___x_6609_ = lean_st_ref_get(v___y_6607_);
v_env_6610_ = lean_ctor_get(v___x_6609_, 0);
lean_inc_ref(v_env_6610_);
lean_dec(v___x_6609_);
v___x_6611_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_6610_, v_declName_6606_);
v___x_6612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6612_, 0, v___x_6611_);
return v___x_6612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg___boxed(lean_object* v_declName_6613_, lean_object* v___y_6614_, lean_object* v___y_6615_){
_start:
{
lean_object* v_res_6616_; 
v_res_6616_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_declName_6613_, v___y_6614_);
lean_dec(v___y_6614_);
return v_res_6616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(lean_object* v_matcherApp_6617_, uint8_t v_useSplitter_6618_, uint8_t v_addEqualities_6619_, lean_object* v_onParams_6620_, lean_object* v_onMotive_6621_, lean_object* v_onAlt_6622_, lean_object* v_onRemaining_6623_, lean_object* v___y_6624_, lean_object* v___y_6625_, lean_object* v___y_6626_, lean_object* v___y_6627_){
_start:
{
lean_object* v___x_6629_; lean_object* v_env_6630_; lean_object* v_toMatcherInfo_6631_; lean_object* v_matcherName_6632_; lean_object* v_matcherLevels_6633_; lean_object* v_params_6634_; lean_object* v_motive_6635_; lean_object* v_discrs_6636_; lean_object* v_alts_6637_; lean_object* v_remaining_6638_; lean_object* v___y_6640_; lean_object* v___y_6641_; lean_object* v___y_6642_; lean_object* v___y_6643_; lean_object* v___y_6644_; lean_object* v___y_6645_; lean_object* v___y_6646_; lean_object* v___y_6647_; lean_object* v___y_6648_; lean_object* v___y_6649_; lean_object* v___y_6650_; lean_object* v___y_6651_; lean_object* v___y_6652_; uint8_t v_isCasesOn_6751_; lean_object* v___y_6753_; size_t v___y_6754_; lean_object* v___y_6755_; lean_object* v___y_6756_; lean_object* v___y_6757_; lean_object* v___y_6758_; lean_object* v___y_6759_; lean_object* v_matcherLevels_6760_; lean_object* v___y_6761_; lean_object* v___y_6762_; lean_object* v___y_6763_; lean_object* v___y_6764_; lean_object* v_numDiscrEqs_6958_; lean_object* v___y_6959_; lean_object* v___y_6960_; lean_object* v___y_6961_; lean_object* v___y_6962_; 
v___x_6629_ = lean_st_ref_get(v___y_6627_);
v_env_6630_ = lean_ctor_get(v___x_6629_, 0);
lean_inc_ref(v_env_6630_);
lean_dec(v___x_6629_);
v_toMatcherInfo_6631_ = lean_ctor_get(v_matcherApp_6617_, 0);
lean_inc_ref(v_toMatcherInfo_6631_);
v_matcherName_6632_ = lean_ctor_get(v_matcherApp_6617_, 1);
lean_inc_n(v_matcherName_6632_, 2);
v_matcherLevels_6633_ = lean_ctor_get(v_matcherApp_6617_, 2);
v_params_6634_ = lean_ctor_get(v_matcherApp_6617_, 3);
v_motive_6635_ = lean_ctor_get(v_matcherApp_6617_, 4);
v_discrs_6636_ = lean_ctor_get(v_matcherApp_6617_, 5);
v_alts_6637_ = lean_ctor_get(v_matcherApp_6617_, 6);
lean_inc_ref(v_alts_6637_);
v_remaining_6638_ = lean_ctor_get(v_matcherApp_6617_, 7);
lean_inc_ref(v_remaining_6638_);
v_isCasesOn_6751_ = l_Lean_isCasesOnRecursor(v_env_6630_, v_matcherName_6632_);
if (v_isCasesOn_6751_ == 0)
{
lean_object* v___x_7022_; lean_object* v_a_7023_; 
lean_inc(v_matcherName_6632_);
v___x_7022_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_matcherName_6632_, v___y_6627_);
v_a_7023_ = lean_ctor_get(v___x_7022_, 0);
lean_inc(v_a_7023_);
lean_dec_ref(v___x_7022_);
if (lean_obj_tag(v_a_7023_) == 0)
{
lean_object* v___x_7024_; lean_object* v___x_7025_; lean_object* v___x_7026_; lean_object* v___x_7027_; lean_object* v___x_7028_; lean_object* v___x_7029_; lean_object* v_a_7030_; lean_object* v___x_7032_; uint8_t v_isShared_7033_; uint8_t v_isSharedCheck_7037_; 
lean_dec_ref(v_remaining_6638_);
lean_dec_ref(v_alts_6637_);
lean_dec_ref(v_toMatcherInfo_6631_);
lean_dec_ref(v_onRemaining_6623_);
lean_dec_ref(v_onAlt_6622_);
lean_dec_ref(v_onMotive_6621_);
lean_dec_ref(v_onParams_6620_);
lean_dec_ref(v_matcherApp_6617_);
v___x_7024_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1);
v___x_7025_ = l_Lean_MessageData_ofName(v_matcherName_6632_);
v___x_7026_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_7026_, 0, v___x_7024_);
lean_ctor_set(v___x_7026_, 1, v___x_7025_);
v___x_7027_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3);
v___x_7028_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_7028_, 0, v___x_7026_);
lean_ctor_set(v___x_7028_, 1, v___x_7027_);
v___x_7029_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_7028_, v___y_6624_, v___y_6625_, v___y_6626_, v___y_6627_);
v_a_7030_ = lean_ctor_get(v___x_7029_, 0);
v_isSharedCheck_7037_ = !lean_is_exclusive(v___x_7029_);
if (v_isSharedCheck_7037_ == 0)
{
v___x_7032_ = v___x_7029_;
v_isShared_7033_ = v_isSharedCheck_7037_;
goto v_resetjp_7031_;
}
else
{
lean_inc(v_a_7030_);
lean_dec(v___x_7029_);
v___x_7032_ = lean_box(0);
v_isShared_7033_ = v_isSharedCheck_7037_;
goto v_resetjp_7031_;
}
v_resetjp_7031_:
{
lean_object* v___x_7035_; 
if (v_isShared_7033_ == 0)
{
v___x_7035_ = v___x_7032_;
goto v_reusejp_7034_;
}
else
{
lean_object* v_reuseFailAlloc_7036_; 
v_reuseFailAlloc_7036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7036_, 0, v_a_7030_);
v___x_7035_ = v_reuseFailAlloc_7036_;
goto v_reusejp_7034_;
}
v_reusejp_7034_:
{
return v___x_7035_;
}
}
}
else
{
lean_object* v_val_7038_; lean_object* v___x_7039_; 
v_val_7038_ = lean_ctor_get(v_a_7023_, 0);
lean_inc(v_val_7038_);
lean_dec_ref_known(v_a_7023_, 1);
v___x_7039_ = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(v_val_7038_);
lean_dec(v_val_7038_);
v_numDiscrEqs_6958_ = v___x_7039_;
v___y_6959_ = v___y_6624_;
v___y_6960_ = v___y_6625_;
v___y_6961_ = v___y_6626_;
v___y_6962_ = v___y_6627_;
goto v___jp_6957_;
}
}
else
{
lean_object* v___x_7040_; 
v___x_7040_ = lean_unsigned_to_nat(0u);
v_numDiscrEqs_6958_ = v___x_7040_;
v___y_6959_ = v___y_6624_;
v___y_6960_ = v___y_6625_;
v___y_6961_ = v___y_6626_;
v___y_6962_ = v___y_6627_;
goto v___jp_6957_;
}
v___jp_6639_:
{
lean_object* v___x_6653_; lean_object* v___x_6654_; lean_object* v_aux_6655_; lean_object* v_aux_6656_; lean_object* v_aux_6657_; lean_object* v___x_6658_; lean_object* v___x_6659_; lean_object* v___x_6660_; lean_object* v___f_6661_; uint8_t v___x_6662_; lean_object* v___x_6663_; lean_object* v___x_6664_; lean_object* v___x_6665_; 
lean_inc_ref(v___y_6641_);
v___x_6653_ = lean_array_to_list(v___y_6641_);
lean_inc(v_matcherName_6632_);
v___x_6654_ = l_Lean_mkConst(v_matcherName_6632_, v___x_6653_);
v_aux_6655_ = l_Lean_mkAppN(v___x_6654_, v___y_6640_);
lean_inc_ref(v___y_6642_);
v_aux_6656_ = l_Lean_Expr_app___override(v_aux_6655_, v___y_6642_);
v_aux_6657_ = l_Lean_mkAppN(v_aux_6656_, v___y_6645_);
v___x_6658_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1);
lean_inc_ref_n(v_aux_6657_, 2);
v___x_6659_ = l_Lean_indentExpr(v_aux_6657_);
v___x_6660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6660_, 0, v___x_6658_);
lean_ctor_set(v___x_6660_, 1, v___x_6659_);
v___f_6661_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6661_, 0, v___x_6660_);
v___x_6662_ = 0;
v___x_6663_ = lean_box(v___x_6662_);
v___x_6664_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_6664_, 0, v_aux_6657_);
lean_closure_set(v___x_6664_, 1, v___x_6663_);
v___x_6665_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6664_, v___f_6661_, v___y_6650_, v___y_6652_, v___y_6646_, v___y_6647_);
if (lean_obj_tag(v___x_6665_) == 0)
{
lean_object* v___x_6666_; lean_object* v___x_6667_; 
lean_dec_ref_known(v___x_6665_, 1);
v___x_6666_ = lean_array_get_size(v_alts_6637_);
v___x_6667_ = l_Lean_Meta_inferArgumentTypesN(v___x_6666_, v_aux_6657_, v___y_6650_, v___y_6652_, v___y_6646_, v___y_6647_);
if (lean_obj_tag(v___x_6667_) == 0)
{
lean_object* v_a_6668_; lean_object* v___x_6669_; lean_object* v___x_6671_; uint8_t v_isShared_6672_; uint8_t v_isSharedCheck_6726_; 
v_a_6668_ = lean_ctor_get(v___x_6667_, 0);
lean_inc(v_a_6668_);
lean_dec_ref_known(v___x_6667_, 1);
v___x_6669_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_6617_);
v_isSharedCheck_6726_ = !lean_is_exclusive(v_matcherApp_6617_);
if (v_isSharedCheck_6726_ == 0)
{
lean_object* v_unused_6727_; lean_object* v_unused_6728_; lean_object* v_unused_6729_; lean_object* v_unused_6730_; lean_object* v_unused_6731_; lean_object* v_unused_6732_; lean_object* v_unused_6733_; lean_object* v_unused_6734_; 
v_unused_6727_ = lean_ctor_get(v_matcherApp_6617_, 7);
lean_dec(v_unused_6727_);
v_unused_6728_ = lean_ctor_get(v_matcherApp_6617_, 6);
lean_dec(v_unused_6728_);
v_unused_6729_ = lean_ctor_get(v_matcherApp_6617_, 5);
lean_dec(v_unused_6729_);
v_unused_6730_ = lean_ctor_get(v_matcherApp_6617_, 4);
lean_dec(v_unused_6730_);
v_unused_6731_ = lean_ctor_get(v_matcherApp_6617_, 3);
lean_dec(v_unused_6731_);
v_unused_6732_ = lean_ctor_get(v_matcherApp_6617_, 2);
lean_dec(v_unused_6732_);
v_unused_6733_ = lean_ctor_get(v_matcherApp_6617_, 1);
lean_dec(v_unused_6733_);
v_unused_6734_ = lean_ctor_get(v_matcherApp_6617_, 0);
lean_dec(v_unused_6734_);
v___x_6671_ = v_matcherApp_6617_;
v_isShared_6672_ = v_isSharedCheck_6726_;
goto v_resetjp_6670_;
}
else
{
lean_dec(v_matcherApp_6617_);
v___x_6671_ = lean_box(0);
v_isShared_6672_ = v_isSharedCheck_6726_;
goto v_resetjp_6670_;
}
v_resetjp_6670_:
{
lean_object* v___x_6673_; lean_object* v___x_6674_; lean_object* v___x_6675_; lean_object* v___x_6676_; lean_object* v___x_6677_; lean_object* v___x_6678_; lean_object* v___x_6679_; lean_object* v___x_6680_; lean_object* v___x_6681_; 
v___x_6673_ = lean_array_get_size(v___x_6669_);
v___x_6674_ = lean_array_get_size(v_a_6668_);
lean_inc_n(v___y_6648_, 3);
v___x_6675_ = l_Array_toSubarray___redArg(v_alts_6637_, v___y_6648_, v___x_6666_);
v___x_6676_ = l_Array_toSubarray___redArg(v___x_6669_, v___y_6648_, v___x_6673_);
v___x_6677_ = l_Array_toSubarray___redArg(v_a_6668_, v___y_6648_, v___x_6674_);
v___x_6678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6678_, 0, v___x_6676_);
lean_ctor_set(v___x_6678_, 1, v___x_6677_);
v___x_6679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6679_, 0, v___x_6675_);
lean_ctor_set(v___x_6679_, 1, v___x_6678_);
lean_inc_ref(v___y_6643_);
v___x_6680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6680_, 0, v___y_6643_);
lean_ctor_set(v___x_6680_, 1, v___x_6679_);
v___x_6681_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v___x_6666_, v_onAlt_6622_, v___y_6649_, v___y_6648_, v___x_6680_, v___y_6650_, v___y_6652_, v___y_6646_, v___y_6647_);
if (lean_obj_tag(v___x_6681_) == 0)
{
lean_object* v_a_6682_; lean_object* v_fst_6683_; lean_object* v___x_6684_; 
v_a_6682_ = lean_ctor_get(v___x_6681_, 0);
lean_inc(v_a_6682_);
lean_dec_ref_known(v___x_6681_, 1);
v_fst_6683_ = lean_ctor_get(v_a_6682_, 0);
lean_inc(v_fst_6683_);
lean_dec(v_a_6682_);
lean_inc(v___y_6647_);
lean_inc_ref(v___y_6646_);
lean_inc(v___y_6652_);
lean_inc_ref(v___y_6650_);
v___x_6684_ = lean_apply_6(v_onRemaining_6623_, v_remaining_6638_, v___y_6650_, v___y_6652_, v___y_6646_, v___y_6647_, lean_box(0));
if (lean_obj_tag(v___x_6684_) == 0)
{
lean_object* v_a_6685_; lean_object* v___x_6687_; uint8_t v_isShared_6688_; uint8_t v_isSharedCheck_6709_; 
v_a_6685_ = lean_ctor_get(v___x_6684_, 0);
v_isSharedCheck_6709_ = !lean_is_exclusive(v___x_6684_);
if (v_isSharedCheck_6709_ == 0)
{
v___x_6687_ = v___x_6684_;
v_isShared_6688_ = v_isSharedCheck_6709_;
goto v_resetjp_6686_;
}
else
{
lean_inc(v_a_6685_);
lean_dec(v___x_6684_);
v___x_6687_ = lean_box(0);
v_isShared_6688_ = v_isSharedCheck_6709_;
goto v_resetjp_6686_;
}
v_resetjp_6686_:
{
lean_object* v_numParams_6689_; lean_object* v_numDiscrs_6690_; lean_object* v_altInfos_6691_; lean_object* v_uElimPos_x3f_6692_; lean_object* v_overlaps_6693_; lean_object* v___x_6695_; uint8_t v_isShared_6696_; uint8_t v_isSharedCheck_6707_; 
v_numParams_6689_ = lean_ctor_get(v_toMatcherInfo_6631_, 0);
v_numDiscrs_6690_ = lean_ctor_get(v_toMatcherInfo_6631_, 1);
v_altInfos_6691_ = lean_ctor_get(v_toMatcherInfo_6631_, 2);
v_uElimPos_x3f_6692_ = lean_ctor_get(v_toMatcherInfo_6631_, 3);
v_overlaps_6693_ = lean_ctor_get(v_toMatcherInfo_6631_, 5);
v_isSharedCheck_6707_ = !lean_is_exclusive(v_toMatcherInfo_6631_);
if (v_isSharedCheck_6707_ == 0)
{
lean_object* v_unused_6708_; 
v_unused_6708_ = lean_ctor_get(v_toMatcherInfo_6631_, 4);
lean_dec(v_unused_6708_);
v___x_6695_ = v_toMatcherInfo_6631_;
v_isShared_6696_ = v_isSharedCheck_6707_;
goto v_resetjp_6694_;
}
else
{
lean_inc(v_overlaps_6693_);
lean_inc(v_uElimPos_x3f_6692_);
lean_inc(v_altInfos_6691_);
lean_inc(v_numDiscrs_6690_);
lean_inc(v_numParams_6689_);
lean_dec(v_toMatcherInfo_6631_);
v___x_6695_ = lean_box(0);
v_isShared_6696_ = v_isSharedCheck_6707_;
goto v_resetjp_6694_;
}
v_resetjp_6694_:
{
lean_object* v_remaining_x27_6697_; lean_object* v___x_6699_; 
v_remaining_x27_6697_ = l_Array_append___redArg(v___y_6651_, v_a_6685_);
lean_dec(v_a_6685_);
if (v_isShared_6696_ == 0)
{
lean_ctor_set(v___x_6695_, 4, v___y_6644_);
v___x_6699_ = v___x_6695_;
goto v_reusejp_6698_;
}
else
{
lean_object* v_reuseFailAlloc_6706_; 
v_reuseFailAlloc_6706_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_6706_, 0, v_numParams_6689_);
lean_ctor_set(v_reuseFailAlloc_6706_, 1, v_numDiscrs_6690_);
lean_ctor_set(v_reuseFailAlloc_6706_, 2, v_altInfos_6691_);
lean_ctor_set(v_reuseFailAlloc_6706_, 3, v_uElimPos_x3f_6692_);
lean_ctor_set(v_reuseFailAlloc_6706_, 4, v___y_6644_);
lean_ctor_set(v_reuseFailAlloc_6706_, 5, v_overlaps_6693_);
v___x_6699_ = v_reuseFailAlloc_6706_;
goto v_reusejp_6698_;
}
v_reusejp_6698_:
{
lean_object* v___x_6701_; 
if (v_isShared_6672_ == 0)
{
lean_ctor_set(v___x_6671_, 7, v_remaining_x27_6697_);
lean_ctor_set(v___x_6671_, 6, v_fst_6683_);
lean_ctor_set(v___x_6671_, 5, v___y_6645_);
lean_ctor_set(v___x_6671_, 4, v___y_6642_);
lean_ctor_set(v___x_6671_, 3, v___y_6640_);
lean_ctor_set(v___x_6671_, 2, v___y_6641_);
lean_ctor_set(v___x_6671_, 0, v___x_6699_);
v___x_6701_ = v___x_6671_;
goto v_reusejp_6700_;
}
else
{
lean_object* v_reuseFailAlloc_6705_; 
v_reuseFailAlloc_6705_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_6705_, 0, v___x_6699_);
lean_ctor_set(v_reuseFailAlloc_6705_, 1, v_matcherName_6632_);
lean_ctor_set(v_reuseFailAlloc_6705_, 2, v___y_6641_);
lean_ctor_set(v_reuseFailAlloc_6705_, 3, v___y_6640_);
lean_ctor_set(v_reuseFailAlloc_6705_, 4, v___y_6642_);
lean_ctor_set(v_reuseFailAlloc_6705_, 5, v___y_6645_);
lean_ctor_set(v_reuseFailAlloc_6705_, 6, v_fst_6683_);
lean_ctor_set(v_reuseFailAlloc_6705_, 7, v_remaining_x27_6697_);
v___x_6701_ = v_reuseFailAlloc_6705_;
goto v_reusejp_6700_;
}
v_reusejp_6700_:
{
lean_object* v___x_6703_; 
if (v_isShared_6688_ == 0)
{
lean_ctor_set(v___x_6687_, 0, v___x_6701_);
v___x_6703_ = v___x_6687_;
goto v_reusejp_6702_;
}
else
{
lean_object* v_reuseFailAlloc_6704_; 
v_reuseFailAlloc_6704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6704_, 0, v___x_6701_);
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
}
}
else
{
lean_object* v_a_6710_; lean_object* v___x_6712_; uint8_t v_isShared_6713_; uint8_t v_isSharedCheck_6717_; 
lean_dec(v_fst_6683_);
lean_del_object(v___x_6671_);
lean_dec(v___y_6651_);
lean_dec_ref(v___y_6645_);
lean_dec_ref(v___y_6644_);
lean_dec_ref(v___y_6642_);
lean_dec_ref(v___y_6641_);
lean_dec_ref(v___y_6640_);
lean_dec(v_matcherName_6632_);
lean_dec_ref(v_toMatcherInfo_6631_);
v_a_6710_ = lean_ctor_get(v___x_6684_, 0);
v_isSharedCheck_6717_ = !lean_is_exclusive(v___x_6684_);
if (v_isSharedCheck_6717_ == 0)
{
v___x_6712_ = v___x_6684_;
v_isShared_6713_ = v_isSharedCheck_6717_;
goto v_resetjp_6711_;
}
else
{
lean_inc(v_a_6710_);
lean_dec(v___x_6684_);
v___x_6712_ = lean_box(0);
v_isShared_6713_ = v_isSharedCheck_6717_;
goto v_resetjp_6711_;
}
v_resetjp_6711_:
{
lean_object* v___x_6715_; 
if (v_isShared_6713_ == 0)
{
v___x_6715_ = v___x_6712_;
goto v_reusejp_6714_;
}
else
{
lean_object* v_reuseFailAlloc_6716_; 
v_reuseFailAlloc_6716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6716_, 0, v_a_6710_);
v___x_6715_ = v_reuseFailAlloc_6716_;
goto v_reusejp_6714_;
}
v_reusejp_6714_:
{
return v___x_6715_;
}
}
}
}
else
{
lean_object* v_a_6718_; lean_object* v___x_6720_; uint8_t v_isShared_6721_; uint8_t v_isSharedCheck_6725_; 
lean_del_object(v___x_6671_);
lean_dec(v___y_6651_);
lean_dec_ref(v___y_6645_);
lean_dec_ref(v___y_6644_);
lean_dec_ref(v___y_6642_);
lean_dec_ref(v___y_6641_);
lean_dec_ref(v___y_6640_);
lean_dec_ref(v_remaining_6638_);
lean_dec(v_matcherName_6632_);
lean_dec_ref(v_toMatcherInfo_6631_);
lean_dec_ref(v_onRemaining_6623_);
v_a_6718_ = lean_ctor_get(v___x_6681_, 0);
v_isSharedCheck_6725_ = !lean_is_exclusive(v___x_6681_);
if (v_isSharedCheck_6725_ == 0)
{
v___x_6720_ = v___x_6681_;
v_isShared_6721_ = v_isSharedCheck_6725_;
goto v_resetjp_6719_;
}
else
{
lean_inc(v_a_6718_);
lean_dec(v___x_6681_);
v___x_6720_ = lean_box(0);
v_isShared_6721_ = v_isSharedCheck_6725_;
goto v_resetjp_6719_;
}
v_resetjp_6719_:
{
lean_object* v___x_6723_; 
if (v_isShared_6721_ == 0)
{
v___x_6723_ = v___x_6720_;
goto v_reusejp_6722_;
}
else
{
lean_object* v_reuseFailAlloc_6724_; 
v_reuseFailAlloc_6724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6724_, 0, v_a_6718_);
v___x_6723_ = v_reuseFailAlloc_6724_;
goto v_reusejp_6722_;
}
v_reusejp_6722_:
{
return v___x_6723_;
}
}
}
}
}
else
{
lean_object* v_a_6735_; lean_object* v___x_6737_; uint8_t v_isShared_6738_; uint8_t v_isSharedCheck_6742_; 
lean_dec(v___y_6651_);
lean_dec(v___y_6649_);
lean_dec(v___y_6648_);
lean_dec_ref(v___y_6645_);
lean_dec_ref(v___y_6644_);
lean_dec_ref(v___y_6642_);
lean_dec_ref(v___y_6641_);
lean_dec_ref(v___y_6640_);
lean_dec_ref(v_remaining_6638_);
lean_dec_ref(v_alts_6637_);
lean_dec(v_matcherName_6632_);
lean_dec_ref(v_toMatcherInfo_6631_);
lean_dec_ref(v_onRemaining_6623_);
lean_dec_ref(v_onAlt_6622_);
lean_dec_ref(v_matcherApp_6617_);
v_a_6735_ = lean_ctor_get(v___x_6667_, 0);
v_isSharedCheck_6742_ = !lean_is_exclusive(v___x_6667_);
if (v_isSharedCheck_6742_ == 0)
{
v___x_6737_ = v___x_6667_;
v_isShared_6738_ = v_isSharedCheck_6742_;
goto v_resetjp_6736_;
}
else
{
lean_inc(v_a_6735_);
lean_dec(v___x_6667_);
v___x_6737_ = lean_box(0);
v_isShared_6738_ = v_isSharedCheck_6742_;
goto v_resetjp_6736_;
}
v_resetjp_6736_:
{
lean_object* v___x_6740_; 
if (v_isShared_6738_ == 0)
{
v___x_6740_ = v___x_6737_;
goto v_reusejp_6739_;
}
else
{
lean_object* v_reuseFailAlloc_6741_; 
v_reuseFailAlloc_6741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6741_, 0, v_a_6735_);
v___x_6740_ = v_reuseFailAlloc_6741_;
goto v_reusejp_6739_;
}
v_reusejp_6739_:
{
return v___x_6740_;
}
}
}
}
else
{
lean_object* v_a_6743_; lean_object* v___x_6745_; uint8_t v_isShared_6746_; uint8_t v_isSharedCheck_6750_; 
lean_dec_ref(v_aux_6657_);
lean_dec(v___y_6651_);
lean_dec(v___y_6649_);
lean_dec(v___y_6648_);
lean_dec_ref(v___y_6645_);
lean_dec_ref(v___y_6644_);
lean_dec_ref(v___y_6642_);
lean_dec_ref(v___y_6641_);
lean_dec_ref(v___y_6640_);
lean_dec_ref(v_remaining_6638_);
lean_dec_ref(v_alts_6637_);
lean_dec(v_matcherName_6632_);
lean_dec_ref(v_toMatcherInfo_6631_);
lean_dec_ref(v_onRemaining_6623_);
lean_dec_ref(v_onAlt_6622_);
lean_dec_ref(v_matcherApp_6617_);
v_a_6743_ = lean_ctor_get(v___x_6665_, 0);
v_isSharedCheck_6750_ = !lean_is_exclusive(v___x_6665_);
if (v_isSharedCheck_6750_ == 0)
{
v___x_6745_ = v___x_6665_;
v_isShared_6746_ = v_isSharedCheck_6750_;
goto v_resetjp_6744_;
}
else
{
lean_inc(v_a_6743_);
lean_dec(v___x_6665_);
v___x_6745_ = lean_box(0);
v_isShared_6746_ = v_isSharedCheck_6750_;
goto v_resetjp_6744_;
}
v_resetjp_6744_:
{
lean_object* v___x_6748_; 
if (v_isShared_6746_ == 0)
{
v___x_6748_ = v___x_6745_;
goto v_reusejp_6747_;
}
else
{
lean_object* v_reuseFailAlloc_6749_; 
v_reuseFailAlloc_6749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6749_, 0, v_a_6743_);
v___x_6748_ = v_reuseFailAlloc_6749_;
goto v_reusejp_6747_;
}
v_reusejp_6747_:
{
return v___x_6748_;
}
}
}
}
v___jp_6752_:
{
lean_object* v___x_6765_; lean_object* v_remaining_x27_6766_; lean_object* v___x_6767_; lean_object* v___x_6768_; lean_object* v___x_6769_; lean_object* v___x_6770_; lean_object* v___x_6771_; lean_object* v___x_6772_; size_t v_sz_6773_; lean_object* v___x_6774_; 
v___x_6765_ = lean_unsigned_to_nat(0u);
v_remaining_x27_6766_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_6767_ = l_Array_reverse___redArg(v___y_6759_);
v___x_6768_ = lean_array_get_size(v___x_6767_);
v___x_6769_ = l_Array_toSubarray___redArg(v___x_6767_, v___x_6765_, v___x_6768_);
lean_inc_ref(v___y_6758_);
v___x_6770_ = l_Array_reverse___redArg(v___y_6758_);
v___x_6771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6771_, 0, v___x_6765_);
lean_ctor_set(v___x_6771_, 1, v___x_6769_);
v___x_6772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6772_, 0, v_remaining_x27_6766_);
lean_ctor_set(v___x_6772_, 1, v___x_6771_);
v_sz_6773_ = lean_array_size(v___x_6770_);
v___x_6774_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(v___x_6770_, v_sz_6773_, v___y_6754_, v___x_6772_, v___y_6761_, v___y_6762_, v___y_6763_, v___y_6764_);
lean_dec_ref(v___x_6770_);
if (lean_obj_tag(v___x_6774_) == 0)
{
lean_object* v_a_6775_; lean_object* v_snd_6776_; 
v_a_6775_ = lean_ctor_get(v___x_6774_, 0);
lean_inc(v_a_6775_);
lean_dec_ref_known(v___x_6774_, 1);
v_snd_6776_ = lean_ctor_get(v_a_6775_, 1);
lean_inc(v_snd_6776_);
if (v_useSplitter_6618_ == 0)
{
lean_object* v_fst_6777_; lean_object* v_fst_6778_; 
lean_dec(v___y_6757_);
v_fst_6777_ = lean_ctor_get(v_a_6775_, 0);
lean_inc(v_fst_6777_);
lean_dec(v_a_6775_);
v_fst_6778_ = lean_ctor_get(v_snd_6776_, 0);
lean_inc(v_fst_6778_);
lean_dec(v_snd_6776_);
v___y_6640_ = v___y_6753_;
v___y_6641_ = v_matcherLevels_6760_;
v___y_6642_ = v___y_6755_;
v___y_6643_ = v_remaining_x27_6766_;
v___y_6644_ = v___y_6756_;
v___y_6645_ = v___y_6758_;
v___y_6646_ = v___y_6763_;
v___y_6647_ = v___y_6764_;
v___y_6648_ = v___x_6765_;
v___y_6649_ = v_fst_6778_;
v___y_6650_ = v___y_6761_;
v___y_6651_ = v_fst_6777_;
v___y_6652_ = v___y_6762_;
goto v___jp_6639_;
}
else
{
if (v_isCasesOn_6751_ == 0)
{
lean_object* v___x_6780_; uint8_t v_isShared_6781_; uint8_t v_isSharedCheck_6938_; 
v_isSharedCheck_6938_ = !lean_is_exclusive(v_matcherApp_6617_);
if (v_isSharedCheck_6938_ == 0)
{
lean_object* v_unused_6939_; lean_object* v_unused_6940_; lean_object* v_unused_6941_; lean_object* v_unused_6942_; lean_object* v_unused_6943_; lean_object* v_unused_6944_; lean_object* v_unused_6945_; lean_object* v_unused_6946_; 
v_unused_6939_ = lean_ctor_get(v_matcherApp_6617_, 7);
lean_dec(v_unused_6939_);
v_unused_6940_ = lean_ctor_get(v_matcherApp_6617_, 6);
lean_dec(v_unused_6940_);
v_unused_6941_ = lean_ctor_get(v_matcherApp_6617_, 5);
lean_dec(v_unused_6941_);
v_unused_6942_ = lean_ctor_get(v_matcherApp_6617_, 4);
lean_dec(v_unused_6942_);
v_unused_6943_ = lean_ctor_get(v_matcherApp_6617_, 3);
lean_dec(v_unused_6943_);
v_unused_6944_ = lean_ctor_get(v_matcherApp_6617_, 2);
lean_dec(v_unused_6944_);
v_unused_6945_ = lean_ctor_get(v_matcherApp_6617_, 1);
lean_dec(v_unused_6945_);
v_unused_6946_ = lean_ctor_get(v_matcherApp_6617_, 0);
lean_dec(v_unused_6946_);
v___x_6780_ = v_matcherApp_6617_;
v_isShared_6781_ = v_isSharedCheck_6938_;
goto v_resetjp_6779_;
}
else
{
lean_dec(v_matcherApp_6617_);
v___x_6780_ = lean_box(0);
v_isShared_6781_ = v_isSharedCheck_6938_;
goto v_resetjp_6779_;
}
v_resetjp_6779_:
{
lean_object* v_fst_6782_; lean_object* v___x_6784_; uint8_t v_isShared_6785_; uint8_t v_isSharedCheck_6936_; 
v_fst_6782_ = lean_ctor_get(v_a_6775_, 0);
v_isSharedCheck_6936_ = !lean_is_exclusive(v_a_6775_);
if (v_isSharedCheck_6936_ == 0)
{
lean_object* v_unused_6937_; 
v_unused_6937_ = lean_ctor_get(v_a_6775_, 1);
lean_dec(v_unused_6937_);
v___x_6784_ = v_a_6775_;
v_isShared_6785_ = v_isSharedCheck_6936_;
goto v_resetjp_6783_;
}
else
{
lean_inc(v_fst_6782_);
lean_dec(v_a_6775_);
v___x_6784_ = lean_box(0);
v_isShared_6785_ = v_isSharedCheck_6936_;
goto v_resetjp_6783_;
}
v_resetjp_6783_:
{
lean_object* v_fst_6786_; lean_object* v___x_6788_; uint8_t v_isShared_6789_; uint8_t v_isSharedCheck_6934_; 
v_fst_6786_ = lean_ctor_get(v_snd_6776_, 0);
v_isSharedCheck_6934_ = !lean_is_exclusive(v_snd_6776_);
if (v_isSharedCheck_6934_ == 0)
{
lean_object* v_unused_6935_; 
v_unused_6935_ = lean_ctor_get(v_snd_6776_, 1);
lean_dec(v_unused_6935_);
v___x_6788_ = v_snd_6776_;
v_isShared_6789_ = v_isSharedCheck_6934_;
goto v_resetjp_6787_;
}
else
{
lean_inc(v_fst_6786_);
lean_dec(v_snd_6776_);
v___x_6788_ = lean_box(0);
v_isShared_6789_ = v_isSharedCheck_6934_;
goto v_resetjp_6787_;
}
v_resetjp_6787_:
{
lean_object* v___x_6790_; lean_object* v___x_6791_; lean_object* v_aux1_6792_; lean_object* v_aux1_6793_; lean_object* v_aux1_6794_; lean_object* v___x_6795_; lean_object* v___x_6796_; lean_object* v___x_6797_; lean_object* v___x_6798_; lean_object* v___x_6799_; lean_object* v___f_6800_; uint8_t v___x_6801_; lean_object* v___x_6802_; lean_object* v___x_6803_; lean_object* v___x_6804_; 
lean_inc_ref(v_matcherLevels_6760_);
v___x_6790_ = lean_array_to_list(v_matcherLevels_6760_);
lean_inc(v___x_6790_);
lean_inc(v_matcherName_6632_);
v___x_6791_ = l_Lean_mkConst(v_matcherName_6632_, v___x_6790_);
v_aux1_6792_ = l_Lean_mkAppN(v___x_6791_, v___y_6753_);
lean_inc_ref(v___y_6755_);
v_aux1_6793_ = l_Lean_Expr_app___override(v_aux1_6792_, v___y_6755_);
v_aux1_6794_ = l_Lean_mkAppN(v_aux1_6793_, v___y_6758_);
v___x_6795_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3);
lean_inc_ref_n(v_aux1_6794_, 2);
v___x_6796_ = l_Lean_indentExpr(v_aux1_6794_);
v___x_6797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6797_, 0, v___x_6795_);
lean_ctor_set(v___x_6797_, 1, v___x_6796_);
v___x_6798_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5);
v___x_6799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6799_, 0, v___x_6797_);
lean_ctor_set(v___x_6799_, 1, v___x_6798_);
v___f_6800_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6800_, 0, v___x_6799_);
v___x_6801_ = 0;
v___x_6802_ = lean_box(v___x_6801_);
v___x_6803_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_6803_, 0, v_aux1_6794_);
lean_closure_set(v___x_6803_, 1, v___x_6802_);
v___x_6804_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6803_, v___f_6800_, v___y_6761_, v___y_6762_, v___y_6763_, v___y_6764_);
if (lean_obj_tag(v___x_6804_) == 0)
{
lean_object* v___x_6805_; lean_object* v___x_6806_; 
lean_dec_ref_known(v___x_6804_, 1);
v___x_6805_ = lean_array_get_size(v_alts_6637_);
v___x_6806_ = l_Lean_Meta_inferArgumentTypesN(v___x_6805_, v_aux1_6794_, v___y_6761_, v___y_6762_, v___y_6763_, v___y_6764_);
if (lean_obj_tag(v___x_6806_) == 0)
{
lean_object* v_a_6807_; lean_object* v___x_6808_; 
v_a_6807_ = lean_ctor_get(v___x_6806_, 0);
lean_inc(v_a_6807_);
lean_dec_ref_known(v___x_6806_, 1);
lean_inc(v___y_6764_);
lean_inc_ref(v___y_6763_);
lean_inc(v___y_6762_);
lean_inc_ref(v___y_6761_);
v___x_6808_ = lean_get_match_equations_for(v_matcherName_6632_, v___y_6761_, v___y_6762_, v___y_6763_, v___y_6764_);
if (lean_obj_tag(v___x_6808_) == 0)
{
lean_object* v_a_6809_; lean_object* v_splitterName_6810_; lean_object* v_splitterMatchInfo_6811_; lean_object* v___x_6812_; lean_object* v_aux2_6813_; lean_object* v_aux2_6814_; lean_object* v_aux2_6815_; lean_object* v___x_6816_; lean_object* v___x_6817_; lean_object* v___x_6818_; lean_object* v___x_6819_; lean_object* v___f_6820_; lean_object* v___x_6821_; lean_object* v___x_6822_; lean_object* v___x_6823_; 
v_a_6809_ = lean_ctor_get(v___x_6808_, 0);
lean_inc(v_a_6809_);
lean_dec_ref_known(v___x_6808_, 1);
v_splitterName_6810_ = lean_ctor_get(v_a_6809_, 1);
lean_inc_n(v_splitterName_6810_, 2);
v_splitterMatchInfo_6811_ = lean_ctor_get(v_a_6809_, 2);
lean_inc_ref(v_splitterMatchInfo_6811_);
lean_dec(v_a_6809_);
v___x_6812_ = l_Lean_mkConst(v_splitterName_6810_, v___x_6790_);
v_aux2_6813_ = l_Lean_mkAppN(v___x_6812_, v___y_6753_);
lean_inc_ref(v___y_6755_);
v_aux2_6814_ = l_Lean_Expr_app___override(v_aux2_6813_, v___y_6755_);
v_aux2_6815_ = l_Lean_mkAppN(v_aux2_6814_, v___y_6758_);
v___x_6816_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1);
lean_inc_ref_n(v_aux2_6815_, 2);
v___x_6817_ = l_Lean_indentExpr(v_aux2_6815_);
v___x_6818_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6818_, 0, v___x_6816_);
lean_ctor_set(v___x_6818_, 1, v___x_6817_);
v___x_6819_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6819_, 0, v___x_6818_);
lean_ctor_set(v___x_6819_, 1, v___x_6798_);
v___f_6820_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6820_, 0, v___x_6819_);
v___x_6821_ = lean_box(v___x_6801_);
v___x_6822_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_6822_, 0, v_aux2_6815_);
lean_closure_set(v___x_6822_, 1, v___x_6821_);
v___x_6823_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6822_, v___f_6820_, v___y_6761_, v___y_6762_, v___y_6763_, v___y_6764_);
if (lean_obj_tag(v___x_6823_) == 0)
{
lean_object* v___x_6824_; 
lean_dec_ref_known(v___x_6823_, 1);
v___x_6824_ = l_Lean_Meta_inferArgumentTypesN(v___x_6805_, v_aux2_6815_, v___y_6761_, v___y_6762_, v___y_6763_, v___y_6764_);
if (lean_obj_tag(v___x_6824_) == 0)
{
lean_object* v_a_6825_; lean_object* v_numParams_6826_; lean_object* v_numDiscrs_6827_; lean_object* v_altInfos_6828_; lean_object* v_uElimPos_x3f_6829_; lean_object* v_overlaps_6830_; lean_object* v_altInfos_6831_; lean_object* v___x_6833_; uint8_t v_isShared_6834_; uint8_t v_isSharedCheck_6888_; 
v_a_6825_ = lean_ctor_get(v___x_6824_, 0);
lean_inc(v_a_6825_);
lean_dec_ref_known(v___x_6824_, 1);
v_numParams_6826_ = lean_ctor_get(v_toMatcherInfo_6631_, 0);
lean_inc(v_numParams_6826_);
v_numDiscrs_6827_ = lean_ctor_get(v_toMatcherInfo_6631_, 1);
lean_inc(v_numDiscrs_6827_);
v_altInfos_6828_ = lean_ctor_get(v_toMatcherInfo_6631_, 2);
lean_inc_ref(v_altInfos_6828_);
v_uElimPos_x3f_6829_ = lean_ctor_get(v_toMatcherInfo_6631_, 3);
lean_inc(v_uElimPos_x3f_6829_);
v_overlaps_6830_ = lean_ctor_get(v_toMatcherInfo_6631_, 5);
lean_inc_ref(v_overlaps_6830_);
lean_dec_ref(v_toMatcherInfo_6631_);
v_altInfos_6831_ = lean_ctor_get(v_splitterMatchInfo_6811_, 2);
v_isSharedCheck_6888_ = !lean_is_exclusive(v_splitterMatchInfo_6811_);
if (v_isSharedCheck_6888_ == 0)
{
lean_object* v_unused_6889_; lean_object* v_unused_6890_; lean_object* v_unused_6891_; lean_object* v_unused_6892_; lean_object* v_unused_6893_; 
v_unused_6889_ = lean_ctor_get(v_splitterMatchInfo_6811_, 5);
lean_dec(v_unused_6889_);
v_unused_6890_ = lean_ctor_get(v_splitterMatchInfo_6811_, 4);
lean_dec(v_unused_6890_);
v_unused_6891_ = lean_ctor_get(v_splitterMatchInfo_6811_, 3);
lean_dec(v_unused_6891_);
v_unused_6892_ = lean_ctor_get(v_splitterMatchInfo_6811_, 1);
lean_dec(v_unused_6892_);
v_unused_6893_ = lean_ctor_get(v_splitterMatchInfo_6811_, 0);
lean_dec(v_unused_6893_);
v___x_6833_ = v_splitterMatchInfo_6811_;
v_isShared_6834_ = v_isSharedCheck_6888_;
goto v_resetjp_6832_;
}
else
{
lean_inc(v_altInfos_6831_);
lean_dec(v_splitterMatchInfo_6811_);
v___x_6833_ = lean_box(0);
v_isShared_6834_ = v_isSharedCheck_6888_;
goto v_resetjp_6832_;
}
v_resetjp_6832_:
{
lean_object* v___x_6835_; lean_object* v___x_6836_; lean_object* v___x_6837_; lean_object* v___x_6838_; lean_object* v___x_6839_; lean_object* v___x_6840_; lean_object* v___x_6841_; lean_object* v___x_6842_; lean_object* v___x_6843_; lean_object* v___x_6845_; 
v___x_6835_ = lean_array_get_size(v_altInfos_6828_);
v___x_6836_ = lean_array_get_size(v_altInfos_6831_);
v___x_6837_ = lean_array_get_size(v_a_6807_);
v___x_6838_ = lean_array_get_size(v_a_6825_);
v___x_6839_ = l_Array_toSubarray___redArg(v_alts_6637_, v___x_6765_, v___x_6805_);
lean_inc_ref(v_altInfos_6828_);
v___x_6840_ = l_Array_toSubarray___redArg(v_altInfos_6828_, v___x_6765_, v___x_6835_);
v___x_6841_ = l_Array_toSubarray___redArg(v_altInfos_6831_, v___x_6765_, v___x_6836_);
v___x_6842_ = l_Array_toSubarray___redArg(v_a_6807_, v___x_6765_, v___x_6837_);
v___x_6843_ = l_Array_toSubarray___redArg(v_a_6825_, v___x_6765_, v___x_6838_);
if (v_isShared_6789_ == 0)
{
lean_ctor_set(v___x_6788_, 1, v___x_6843_);
lean_ctor_set(v___x_6788_, 0, v___x_6842_);
v___x_6845_ = v___x_6788_;
goto v_reusejp_6844_;
}
else
{
lean_object* v_reuseFailAlloc_6887_; 
v_reuseFailAlloc_6887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6887_, 0, v___x_6842_);
lean_ctor_set(v_reuseFailAlloc_6887_, 1, v___x_6843_);
v___x_6845_ = v_reuseFailAlloc_6887_;
goto v_reusejp_6844_;
}
v_reusejp_6844_:
{
lean_object* v___x_6847_; 
if (v_isShared_6785_ == 0)
{
lean_ctor_set(v___x_6784_, 1, v___x_6845_);
lean_ctor_set(v___x_6784_, 0, v___x_6841_);
v___x_6847_ = v___x_6784_;
goto v_reusejp_6846_;
}
else
{
lean_object* v_reuseFailAlloc_6886_; 
v_reuseFailAlloc_6886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6886_, 0, v___x_6841_);
lean_ctor_set(v_reuseFailAlloc_6886_, 1, v___x_6845_);
v___x_6847_ = v_reuseFailAlloc_6886_;
goto v_reusejp_6846_;
}
v_reusejp_6846_:
{
lean_object* v___x_6848_; lean_object* v___x_6849_; lean_object* v___x_6850_; lean_object* v___x_6851_; 
v___x_6848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6848_, 0, v___x_6840_);
lean_ctor_set(v___x_6848_, 1, v___x_6847_);
v___x_6849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6849_, 0, v___x_6839_);
lean_ctor_set(v___x_6849_, 1, v___x_6848_);
v___x_6850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6850_, 0, v_remaining_x27_6766_);
lean_ctor_set(v___x_6850_, 1, v___x_6849_);
v___x_6851_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v___x_6805_, v_onAlt_6622_, v_useSplitter_6618_, v_fst_6786_, v___y_6757_, v___x_6765_, v___x_6850_, v___y_6761_, v___y_6762_, v___y_6763_, v___y_6764_);
if (lean_obj_tag(v___x_6851_) == 0)
{
lean_object* v_a_6852_; lean_object* v_fst_6853_; lean_object* v___x_6854_; 
v_a_6852_ = lean_ctor_get(v___x_6851_, 0);
lean_inc(v_a_6852_);
lean_dec_ref_known(v___x_6851_, 1);
v_fst_6853_ = lean_ctor_get(v_a_6852_, 0);
lean_inc(v_fst_6853_);
lean_dec(v_a_6852_);
lean_inc(v___y_6764_);
lean_inc_ref(v___y_6763_);
lean_inc(v___y_6762_);
lean_inc_ref(v___y_6761_);
v___x_6854_ = lean_apply_6(v_onRemaining_6623_, v_remaining_6638_, v___y_6761_, v___y_6762_, v___y_6763_, v___y_6764_, lean_box(0));
if (lean_obj_tag(v___x_6854_) == 0)
{
lean_object* v_a_6855_; lean_object* v___x_6857_; uint8_t v_isShared_6858_; uint8_t v_isSharedCheck_6869_; 
v_a_6855_ = lean_ctor_get(v___x_6854_, 0);
v_isSharedCheck_6869_ = !lean_is_exclusive(v___x_6854_);
if (v_isSharedCheck_6869_ == 0)
{
v___x_6857_ = v___x_6854_;
v_isShared_6858_ = v_isSharedCheck_6869_;
goto v_resetjp_6856_;
}
else
{
lean_inc(v_a_6855_);
lean_dec(v___x_6854_);
v___x_6857_ = lean_box(0);
v_isShared_6858_ = v_isSharedCheck_6869_;
goto v_resetjp_6856_;
}
v_resetjp_6856_:
{
lean_object* v_remaining_x27_6859_; lean_object* v___x_6861_; 
v_remaining_x27_6859_ = l_Array_append___redArg(v_fst_6782_, v_a_6855_);
lean_dec(v_a_6855_);
if (v_isShared_6834_ == 0)
{
lean_ctor_set(v___x_6833_, 5, v_overlaps_6830_);
lean_ctor_set(v___x_6833_, 4, v___y_6756_);
lean_ctor_set(v___x_6833_, 3, v_uElimPos_x3f_6829_);
lean_ctor_set(v___x_6833_, 2, v_altInfos_6828_);
lean_ctor_set(v___x_6833_, 1, v_numDiscrs_6827_);
lean_ctor_set(v___x_6833_, 0, v_numParams_6826_);
v___x_6861_ = v___x_6833_;
goto v_reusejp_6860_;
}
else
{
lean_object* v_reuseFailAlloc_6868_; 
v_reuseFailAlloc_6868_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_6868_, 0, v_numParams_6826_);
lean_ctor_set(v_reuseFailAlloc_6868_, 1, v_numDiscrs_6827_);
lean_ctor_set(v_reuseFailAlloc_6868_, 2, v_altInfos_6828_);
lean_ctor_set(v_reuseFailAlloc_6868_, 3, v_uElimPos_x3f_6829_);
lean_ctor_set(v_reuseFailAlloc_6868_, 4, v___y_6756_);
lean_ctor_set(v_reuseFailAlloc_6868_, 5, v_overlaps_6830_);
v___x_6861_ = v_reuseFailAlloc_6868_;
goto v_reusejp_6860_;
}
v_reusejp_6860_:
{
lean_object* v___x_6863_; 
if (v_isShared_6781_ == 0)
{
lean_ctor_set(v___x_6780_, 7, v_remaining_x27_6859_);
lean_ctor_set(v___x_6780_, 6, v_fst_6853_);
lean_ctor_set(v___x_6780_, 5, v___y_6758_);
lean_ctor_set(v___x_6780_, 4, v___y_6755_);
lean_ctor_set(v___x_6780_, 3, v___y_6753_);
lean_ctor_set(v___x_6780_, 2, v_matcherLevels_6760_);
lean_ctor_set(v___x_6780_, 1, v_splitterName_6810_);
lean_ctor_set(v___x_6780_, 0, v___x_6861_);
v___x_6863_ = v___x_6780_;
goto v_reusejp_6862_;
}
else
{
lean_object* v_reuseFailAlloc_6867_; 
v_reuseFailAlloc_6867_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_6867_, 0, v___x_6861_);
lean_ctor_set(v_reuseFailAlloc_6867_, 1, v_splitterName_6810_);
lean_ctor_set(v_reuseFailAlloc_6867_, 2, v_matcherLevels_6760_);
lean_ctor_set(v_reuseFailAlloc_6867_, 3, v___y_6753_);
lean_ctor_set(v_reuseFailAlloc_6867_, 4, v___y_6755_);
lean_ctor_set(v_reuseFailAlloc_6867_, 5, v___y_6758_);
lean_ctor_set(v_reuseFailAlloc_6867_, 6, v_fst_6853_);
lean_ctor_set(v_reuseFailAlloc_6867_, 7, v_remaining_x27_6859_);
v___x_6863_ = v_reuseFailAlloc_6867_;
goto v_reusejp_6862_;
}
v_reusejp_6862_:
{
lean_object* v___x_6865_; 
if (v_isShared_6858_ == 0)
{
lean_ctor_set(v___x_6857_, 0, v___x_6863_);
v___x_6865_ = v___x_6857_;
goto v_reusejp_6864_;
}
else
{
lean_object* v_reuseFailAlloc_6866_; 
v_reuseFailAlloc_6866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6866_, 0, v___x_6863_);
v___x_6865_ = v_reuseFailAlloc_6866_;
goto v_reusejp_6864_;
}
v_reusejp_6864_:
{
return v___x_6865_;
}
}
}
}
}
else
{
lean_object* v_a_6870_; lean_object* v___x_6872_; uint8_t v_isShared_6873_; uint8_t v_isSharedCheck_6877_; 
lean_dec(v_fst_6853_);
lean_del_object(v___x_6833_);
lean_dec_ref(v_overlaps_6830_);
lean_dec(v_uElimPos_x3f_6829_);
lean_dec_ref(v_altInfos_6828_);
lean_dec(v_numDiscrs_6827_);
lean_dec(v_numParams_6826_);
lean_dec(v_splitterName_6810_);
lean_dec(v_fst_6782_);
lean_del_object(v___x_6780_);
lean_dec_ref(v_matcherLevels_6760_);
lean_dec_ref(v___y_6758_);
lean_dec_ref(v___y_6756_);
lean_dec_ref(v___y_6755_);
lean_dec_ref(v___y_6753_);
v_a_6870_ = lean_ctor_get(v___x_6854_, 0);
v_isSharedCheck_6877_ = !lean_is_exclusive(v___x_6854_);
if (v_isSharedCheck_6877_ == 0)
{
v___x_6872_ = v___x_6854_;
v_isShared_6873_ = v_isSharedCheck_6877_;
goto v_resetjp_6871_;
}
else
{
lean_inc(v_a_6870_);
lean_dec(v___x_6854_);
v___x_6872_ = lean_box(0);
v_isShared_6873_ = v_isSharedCheck_6877_;
goto v_resetjp_6871_;
}
v_resetjp_6871_:
{
lean_object* v___x_6875_; 
if (v_isShared_6873_ == 0)
{
v___x_6875_ = v___x_6872_;
goto v_reusejp_6874_;
}
else
{
lean_object* v_reuseFailAlloc_6876_; 
v_reuseFailAlloc_6876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6876_, 0, v_a_6870_);
v___x_6875_ = v_reuseFailAlloc_6876_;
goto v_reusejp_6874_;
}
v_reusejp_6874_:
{
return v___x_6875_;
}
}
}
}
else
{
lean_object* v_a_6878_; lean_object* v___x_6880_; uint8_t v_isShared_6881_; uint8_t v_isSharedCheck_6885_; 
lean_del_object(v___x_6833_);
lean_dec_ref(v_overlaps_6830_);
lean_dec(v_uElimPos_x3f_6829_);
lean_dec_ref(v_altInfos_6828_);
lean_dec(v_numDiscrs_6827_);
lean_dec(v_numParams_6826_);
lean_dec(v_splitterName_6810_);
lean_dec(v_fst_6782_);
lean_del_object(v___x_6780_);
lean_dec_ref(v_matcherLevels_6760_);
lean_dec_ref(v___y_6758_);
lean_dec_ref(v___y_6756_);
lean_dec_ref(v___y_6755_);
lean_dec_ref(v___y_6753_);
lean_dec_ref(v_remaining_6638_);
lean_dec_ref(v_onRemaining_6623_);
v_a_6878_ = lean_ctor_get(v___x_6851_, 0);
v_isSharedCheck_6885_ = !lean_is_exclusive(v___x_6851_);
if (v_isSharedCheck_6885_ == 0)
{
v___x_6880_ = v___x_6851_;
v_isShared_6881_ = v_isSharedCheck_6885_;
goto v_resetjp_6879_;
}
else
{
lean_inc(v_a_6878_);
lean_dec(v___x_6851_);
v___x_6880_ = lean_box(0);
v_isShared_6881_ = v_isSharedCheck_6885_;
goto v_resetjp_6879_;
}
v_resetjp_6879_:
{
lean_object* v___x_6883_; 
if (v_isShared_6881_ == 0)
{
v___x_6883_ = v___x_6880_;
goto v_reusejp_6882_;
}
else
{
lean_object* v_reuseFailAlloc_6884_; 
v_reuseFailAlloc_6884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6884_, 0, v_a_6878_);
v___x_6883_ = v_reuseFailAlloc_6884_;
goto v_reusejp_6882_;
}
v_reusejp_6882_:
{
return v___x_6883_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_6894_; lean_object* v___x_6896_; uint8_t v_isShared_6897_; uint8_t v_isSharedCheck_6901_; 
lean_dec_ref(v_splitterMatchInfo_6811_);
lean_dec(v_splitterName_6810_);
lean_dec(v_a_6807_);
lean_del_object(v___x_6788_);
lean_dec(v_fst_6786_);
lean_del_object(v___x_6784_);
lean_dec(v_fst_6782_);
lean_del_object(v___x_6780_);
lean_dec_ref(v_matcherLevels_6760_);
lean_dec_ref(v___y_6758_);
lean_dec(v___y_6757_);
lean_dec_ref(v___y_6756_);
lean_dec_ref(v___y_6755_);
lean_dec_ref(v___y_6753_);
lean_dec_ref(v_remaining_6638_);
lean_dec_ref(v_alts_6637_);
lean_dec_ref(v_toMatcherInfo_6631_);
lean_dec_ref(v_onRemaining_6623_);
lean_dec_ref(v_onAlt_6622_);
v_a_6894_ = lean_ctor_get(v___x_6824_, 0);
v_isSharedCheck_6901_ = !lean_is_exclusive(v___x_6824_);
if (v_isSharedCheck_6901_ == 0)
{
v___x_6896_ = v___x_6824_;
v_isShared_6897_ = v_isSharedCheck_6901_;
goto v_resetjp_6895_;
}
else
{
lean_inc(v_a_6894_);
lean_dec(v___x_6824_);
v___x_6896_ = lean_box(0);
v_isShared_6897_ = v_isSharedCheck_6901_;
goto v_resetjp_6895_;
}
v_resetjp_6895_:
{
lean_object* v___x_6899_; 
if (v_isShared_6897_ == 0)
{
v___x_6899_ = v___x_6896_;
goto v_reusejp_6898_;
}
else
{
lean_object* v_reuseFailAlloc_6900_; 
v_reuseFailAlloc_6900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6900_, 0, v_a_6894_);
v___x_6899_ = v_reuseFailAlloc_6900_;
goto v_reusejp_6898_;
}
v_reusejp_6898_:
{
return v___x_6899_;
}
}
}
}
else
{
lean_object* v_a_6902_; lean_object* v___x_6904_; uint8_t v_isShared_6905_; uint8_t v_isSharedCheck_6909_; 
lean_dec_ref(v_aux2_6815_);
lean_dec_ref(v_splitterMatchInfo_6811_);
lean_dec(v_splitterName_6810_);
lean_dec(v_a_6807_);
lean_del_object(v___x_6788_);
lean_dec(v_fst_6786_);
lean_del_object(v___x_6784_);
lean_dec(v_fst_6782_);
lean_del_object(v___x_6780_);
lean_dec_ref(v_matcherLevels_6760_);
lean_dec_ref(v___y_6758_);
lean_dec(v___y_6757_);
lean_dec_ref(v___y_6756_);
lean_dec_ref(v___y_6755_);
lean_dec_ref(v___y_6753_);
lean_dec_ref(v_remaining_6638_);
lean_dec_ref(v_alts_6637_);
lean_dec_ref(v_toMatcherInfo_6631_);
lean_dec_ref(v_onRemaining_6623_);
lean_dec_ref(v_onAlt_6622_);
v_a_6902_ = lean_ctor_get(v___x_6823_, 0);
v_isSharedCheck_6909_ = !lean_is_exclusive(v___x_6823_);
if (v_isSharedCheck_6909_ == 0)
{
v___x_6904_ = v___x_6823_;
v_isShared_6905_ = v_isSharedCheck_6909_;
goto v_resetjp_6903_;
}
else
{
lean_inc(v_a_6902_);
lean_dec(v___x_6823_);
v___x_6904_ = lean_box(0);
v_isShared_6905_ = v_isSharedCheck_6909_;
goto v_resetjp_6903_;
}
v_resetjp_6903_:
{
lean_object* v___x_6907_; 
if (v_isShared_6905_ == 0)
{
v___x_6907_ = v___x_6904_;
goto v_reusejp_6906_;
}
else
{
lean_object* v_reuseFailAlloc_6908_; 
v_reuseFailAlloc_6908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6908_, 0, v_a_6902_);
v___x_6907_ = v_reuseFailAlloc_6908_;
goto v_reusejp_6906_;
}
v_reusejp_6906_:
{
return v___x_6907_;
}
}
}
}
else
{
lean_object* v_a_6910_; lean_object* v___x_6912_; uint8_t v_isShared_6913_; uint8_t v_isSharedCheck_6917_; 
lean_dec(v_a_6807_);
lean_dec(v___x_6790_);
lean_del_object(v___x_6788_);
lean_dec(v_fst_6786_);
lean_del_object(v___x_6784_);
lean_dec(v_fst_6782_);
lean_del_object(v___x_6780_);
lean_dec_ref(v_matcherLevels_6760_);
lean_dec_ref(v___y_6758_);
lean_dec(v___y_6757_);
lean_dec_ref(v___y_6756_);
lean_dec_ref(v___y_6755_);
lean_dec_ref(v___y_6753_);
lean_dec_ref(v_remaining_6638_);
lean_dec_ref(v_alts_6637_);
lean_dec_ref(v_toMatcherInfo_6631_);
lean_dec_ref(v_onRemaining_6623_);
lean_dec_ref(v_onAlt_6622_);
v_a_6910_ = lean_ctor_get(v___x_6808_, 0);
v_isSharedCheck_6917_ = !lean_is_exclusive(v___x_6808_);
if (v_isSharedCheck_6917_ == 0)
{
v___x_6912_ = v___x_6808_;
v_isShared_6913_ = v_isSharedCheck_6917_;
goto v_resetjp_6911_;
}
else
{
lean_inc(v_a_6910_);
lean_dec(v___x_6808_);
v___x_6912_ = lean_box(0);
v_isShared_6913_ = v_isSharedCheck_6917_;
goto v_resetjp_6911_;
}
v_resetjp_6911_:
{
lean_object* v___x_6915_; 
if (v_isShared_6913_ == 0)
{
v___x_6915_ = v___x_6912_;
goto v_reusejp_6914_;
}
else
{
lean_object* v_reuseFailAlloc_6916_; 
v_reuseFailAlloc_6916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6916_, 0, v_a_6910_);
v___x_6915_ = v_reuseFailAlloc_6916_;
goto v_reusejp_6914_;
}
v_reusejp_6914_:
{
return v___x_6915_;
}
}
}
}
else
{
lean_object* v_a_6918_; lean_object* v___x_6920_; uint8_t v_isShared_6921_; uint8_t v_isSharedCheck_6925_; 
lean_dec(v___x_6790_);
lean_del_object(v___x_6788_);
lean_dec(v_fst_6786_);
lean_del_object(v___x_6784_);
lean_dec(v_fst_6782_);
lean_del_object(v___x_6780_);
lean_dec_ref(v_matcherLevels_6760_);
lean_dec_ref(v___y_6758_);
lean_dec(v___y_6757_);
lean_dec_ref(v___y_6756_);
lean_dec_ref(v___y_6755_);
lean_dec_ref(v___y_6753_);
lean_dec_ref(v_remaining_6638_);
lean_dec_ref(v_alts_6637_);
lean_dec(v_matcherName_6632_);
lean_dec_ref(v_toMatcherInfo_6631_);
lean_dec_ref(v_onRemaining_6623_);
lean_dec_ref(v_onAlt_6622_);
v_a_6918_ = lean_ctor_get(v___x_6806_, 0);
v_isSharedCheck_6925_ = !lean_is_exclusive(v___x_6806_);
if (v_isSharedCheck_6925_ == 0)
{
v___x_6920_ = v___x_6806_;
v_isShared_6921_ = v_isSharedCheck_6925_;
goto v_resetjp_6919_;
}
else
{
lean_inc(v_a_6918_);
lean_dec(v___x_6806_);
v___x_6920_ = lean_box(0);
v_isShared_6921_ = v_isSharedCheck_6925_;
goto v_resetjp_6919_;
}
v_resetjp_6919_:
{
lean_object* v___x_6923_; 
if (v_isShared_6921_ == 0)
{
v___x_6923_ = v___x_6920_;
goto v_reusejp_6922_;
}
else
{
lean_object* v_reuseFailAlloc_6924_; 
v_reuseFailAlloc_6924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6924_, 0, v_a_6918_);
v___x_6923_ = v_reuseFailAlloc_6924_;
goto v_reusejp_6922_;
}
v_reusejp_6922_:
{
return v___x_6923_;
}
}
}
}
else
{
lean_object* v_a_6926_; lean_object* v___x_6928_; uint8_t v_isShared_6929_; uint8_t v_isSharedCheck_6933_; 
lean_dec_ref(v_aux1_6794_);
lean_dec(v___x_6790_);
lean_del_object(v___x_6788_);
lean_dec(v_fst_6786_);
lean_del_object(v___x_6784_);
lean_dec(v_fst_6782_);
lean_del_object(v___x_6780_);
lean_dec_ref(v_matcherLevels_6760_);
lean_dec_ref(v___y_6758_);
lean_dec(v___y_6757_);
lean_dec_ref(v___y_6756_);
lean_dec_ref(v___y_6755_);
lean_dec_ref(v___y_6753_);
lean_dec_ref(v_remaining_6638_);
lean_dec_ref(v_alts_6637_);
lean_dec(v_matcherName_6632_);
lean_dec_ref(v_toMatcherInfo_6631_);
lean_dec_ref(v_onRemaining_6623_);
lean_dec_ref(v_onAlt_6622_);
v_a_6926_ = lean_ctor_get(v___x_6804_, 0);
v_isSharedCheck_6933_ = !lean_is_exclusive(v___x_6804_);
if (v_isSharedCheck_6933_ == 0)
{
v___x_6928_ = v___x_6804_;
v_isShared_6929_ = v_isSharedCheck_6933_;
goto v_resetjp_6927_;
}
else
{
lean_inc(v_a_6926_);
lean_dec(v___x_6804_);
v___x_6928_ = lean_box(0);
v_isShared_6929_ = v_isSharedCheck_6933_;
goto v_resetjp_6927_;
}
v_resetjp_6927_:
{
lean_object* v___x_6931_; 
if (v_isShared_6929_ == 0)
{
v___x_6931_ = v___x_6928_;
goto v_reusejp_6930_;
}
else
{
lean_object* v_reuseFailAlloc_6932_; 
v_reuseFailAlloc_6932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6932_, 0, v_a_6926_);
v___x_6931_ = v_reuseFailAlloc_6932_;
goto v_reusejp_6930_;
}
v_reusejp_6930_:
{
return v___x_6931_;
}
}
}
}
}
}
}
else
{
lean_object* v_fst_6947_; lean_object* v_fst_6948_; 
lean_dec(v___y_6757_);
v_fst_6947_ = lean_ctor_get(v_a_6775_, 0);
lean_inc(v_fst_6947_);
lean_dec(v_a_6775_);
v_fst_6948_ = lean_ctor_get(v_snd_6776_, 0);
lean_inc(v_fst_6948_);
lean_dec(v_snd_6776_);
v___y_6640_ = v___y_6753_;
v___y_6641_ = v_matcherLevels_6760_;
v___y_6642_ = v___y_6755_;
v___y_6643_ = v_remaining_x27_6766_;
v___y_6644_ = v___y_6756_;
v___y_6645_ = v___y_6758_;
v___y_6646_ = v___y_6763_;
v___y_6647_ = v___y_6764_;
v___y_6648_ = v___x_6765_;
v___y_6649_ = v_fst_6948_;
v___y_6650_ = v___y_6761_;
v___y_6651_ = v_fst_6947_;
v___y_6652_ = v___y_6762_;
goto v___jp_6639_;
}
}
}
else
{
lean_object* v_a_6949_; lean_object* v___x_6951_; uint8_t v_isShared_6952_; uint8_t v_isSharedCheck_6956_; 
lean_dec_ref(v_matcherLevels_6760_);
lean_dec_ref(v___y_6758_);
lean_dec(v___y_6757_);
lean_dec_ref(v___y_6756_);
lean_dec_ref(v___y_6755_);
lean_dec_ref(v___y_6753_);
lean_dec_ref(v_remaining_6638_);
lean_dec_ref(v_alts_6637_);
lean_dec(v_matcherName_6632_);
lean_dec_ref(v_toMatcherInfo_6631_);
lean_dec_ref(v_onRemaining_6623_);
lean_dec_ref(v_onAlt_6622_);
lean_dec_ref(v_matcherApp_6617_);
v_a_6949_ = lean_ctor_get(v___x_6774_, 0);
v_isSharedCheck_6956_ = !lean_is_exclusive(v___x_6774_);
if (v_isSharedCheck_6956_ == 0)
{
v___x_6951_ = v___x_6774_;
v_isShared_6952_ = v_isSharedCheck_6956_;
goto v_resetjp_6950_;
}
else
{
lean_inc(v_a_6949_);
lean_dec(v___x_6774_);
v___x_6951_ = lean_box(0);
v_isShared_6952_ = v_isSharedCheck_6956_;
goto v_resetjp_6950_;
}
v_resetjp_6950_:
{
lean_object* v___x_6954_; 
if (v_isShared_6952_ == 0)
{
v___x_6954_ = v___x_6951_;
goto v_reusejp_6953_;
}
else
{
lean_object* v_reuseFailAlloc_6955_; 
v_reuseFailAlloc_6955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6955_, 0, v_a_6949_);
v___x_6954_ = v_reuseFailAlloc_6955_;
goto v_reusejp_6953_;
}
v_reusejp_6953_:
{
return v___x_6954_;
}
}
}
}
v___jp_6957_:
{
size_t v_sz_6963_; size_t v___x_6964_; lean_object* v___x_6965_; lean_object* v___x_6966_; lean_object* v___x_6967_; lean_object* v___x_6968_; lean_object* v___x_31490__overap_6969_; lean_object* v___x_6970_; 
v_sz_6963_ = lean_array_size(v_params_6634_);
v___x_6964_ = ((size_t)0ULL);
v___x_6965_ = l_unsafeCast___redArg(v_params_6634_);
v___x_6966_ = lean_box_usize(v_sz_6963_);
v___x_6967_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed__const__1));
lean_inc_ref(v_onParams_6620_);
v___x_6968_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6___boxed), 9, 4);
lean_closure_set(v___x_6968_, 0, v_onParams_6620_);
lean_closure_set(v___x_6968_, 1, v___x_6966_);
lean_closure_set(v___x_6968_, 2, v___x_6967_);
lean_closure_set(v___x_6968_, 3, v___x_6965_);
v___x_31490__overap_6969_ = l_unsafeCast___redArg(v___x_6968_);
lean_dec_ref(v___x_6968_);
lean_inc(v___y_6962_);
lean_inc_ref(v___y_6961_);
lean_inc(v___y_6960_);
lean_inc_ref(v___y_6959_);
v___x_6970_ = lean_apply_5(v___x_31490__overap_6969_, v___y_6959_, v___y_6960_, v___y_6961_, v___y_6962_, lean_box(0));
if (lean_obj_tag(v___x_6970_) == 0)
{
lean_object* v_a_6971_; size_t v_sz_6972_; lean_object* v___x_6973_; lean_object* v___x_6974_; lean_object* v___x_6975_; lean_object* v___x_6976_; lean_object* v___x_31493__overap_6977_; lean_object* v___x_6978_; 
v_a_6971_ = lean_ctor_get(v___x_6970_, 0);
lean_inc(v_a_6971_);
lean_dec_ref_known(v___x_6970_, 1);
v_sz_6972_ = lean_array_size(v_discrs_6636_);
v___x_6973_ = l_unsafeCast___redArg(v_discrs_6636_);
v___x_6974_ = lean_box_usize(v_sz_6972_);
v___x_6975_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed__const__1));
v___x_6976_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6___boxed), 9, 4);
lean_closure_set(v___x_6976_, 0, v_onParams_6620_);
lean_closure_set(v___x_6976_, 1, v___x_6974_);
lean_closure_set(v___x_6976_, 2, v___x_6975_);
lean_closure_set(v___x_6976_, 3, v___x_6973_);
v___x_31493__overap_6977_ = l_unsafeCast___redArg(v___x_6976_);
lean_dec_ref(v___x_6976_);
lean_inc(v___y_6962_);
lean_inc_ref(v___y_6961_);
lean_inc(v___y_6960_);
lean_inc_ref(v___y_6959_);
v___x_6978_ = lean_apply_5(v___x_31493__overap_6977_, v___y_6959_, v___y_6960_, v___y_6961_, v___y_6962_, lean_box(0));
if (lean_obj_tag(v___x_6978_) == 0)
{
lean_object* v_a_6979_; lean_object* v___x_6980_; lean_object* v___x_6981_; lean_object* v___f_6982_; uint8_t v___x_6983_; lean_object* v___x_6984_; 
v_a_6979_ = lean_ctor_get(v___x_6978_, 0);
lean_inc_n(v_a_6979_, 2);
lean_dec_ref_known(v___x_6978_, 1);
v___x_6980_ = lean_box(v_addEqualities_6619_);
v___x_6981_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed__const__1));
lean_inc_ref(v_discrs_6636_);
lean_inc_ref(v_toMatcherInfo_6631_);
v___f_6982_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed), 13, 6);
lean_closure_set(v___f_6982_, 0, v_onMotive_6621_);
lean_closure_set(v___f_6982_, 1, v_toMatcherInfo_6631_);
lean_closure_set(v___f_6982_, 2, v_a_6979_);
lean_closure_set(v___f_6982_, 3, v___x_6980_);
lean_closure_set(v___f_6982_, 4, v___x_6981_);
lean_closure_set(v___f_6982_, 5, v_discrs_6636_);
v___x_6983_ = 0;
lean_inc_ref(v_motive_6635_);
v___x_6984_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_6635_, v___f_6982_, v___x_6983_, v___y_6959_, v___y_6960_, v___y_6961_, v___y_6962_);
if (lean_obj_tag(v___x_6984_) == 0)
{
lean_object* v_a_6985_; lean_object* v_snd_6986_; lean_object* v_snd_6987_; lean_object* v_uElimPos_x3f_6988_; 
v_a_6985_ = lean_ctor_get(v___x_6984_, 0);
lean_inc(v_a_6985_);
lean_dec_ref_known(v___x_6984_, 1);
v_snd_6986_ = lean_ctor_get(v_a_6985_, 1);
v_snd_6987_ = lean_ctor_get(v_snd_6986_, 1);
lean_inc(v_snd_6987_);
v_uElimPos_x3f_6988_ = lean_ctor_get(v_toMatcherInfo_6631_, 3);
if (lean_obj_tag(v_uElimPos_x3f_6988_) == 0)
{
lean_object* v_fst_6989_; lean_object* v_fst_6990_; lean_object* v_snd_6991_; 
v_fst_6989_ = lean_ctor_get(v_a_6985_, 0);
lean_inc(v_fst_6989_);
lean_dec(v_a_6985_);
v_fst_6990_ = lean_ctor_get(v_snd_6987_, 0);
lean_inc(v_fst_6990_);
v_snd_6991_ = lean_ctor_get(v_snd_6987_, 1);
lean_inc(v_snd_6991_);
lean_dec(v_snd_6987_);
lean_inc_ref(v_matcherLevels_6633_);
v___y_6753_ = v_a_6971_;
v___y_6754_ = v___x_6964_;
v___y_6755_ = v_fst_6989_;
v___y_6756_ = v_snd_6991_;
v___y_6757_ = v_numDiscrEqs_6958_;
v___y_6758_ = v_a_6979_;
v___y_6759_ = v_fst_6990_;
v_matcherLevels_6760_ = v_matcherLevels_6633_;
v___y_6761_ = v___y_6959_;
v___y_6762_ = v___y_6960_;
v___y_6763_ = v___y_6961_;
v___y_6764_ = v___y_6962_;
goto v___jp_6752_;
}
else
{
lean_object* v_fst_6992_; lean_object* v_fst_6993_; lean_object* v_fst_6994_; lean_object* v_snd_6995_; lean_object* v_val_6996_; lean_object* v___x_6997_; 
lean_inc(v_snd_6986_);
v_fst_6992_ = lean_ctor_get(v_a_6985_, 0);
lean_inc(v_fst_6992_);
lean_dec(v_a_6985_);
v_fst_6993_ = lean_ctor_get(v_snd_6986_, 0);
lean_inc(v_fst_6993_);
lean_dec(v_snd_6986_);
v_fst_6994_ = lean_ctor_get(v_snd_6987_, 0);
lean_inc(v_fst_6994_);
v_snd_6995_ = lean_ctor_get(v_snd_6987_, 1);
lean_inc(v_snd_6995_);
lean_dec(v_snd_6987_);
v_val_6996_ = lean_ctor_get(v_uElimPos_x3f_6988_, 0);
lean_inc_ref(v_matcherLevels_6633_);
v___x_6997_ = lean_array_set(v_matcherLevels_6633_, v_val_6996_, v_fst_6993_);
v___y_6753_ = v_a_6971_;
v___y_6754_ = v___x_6964_;
v___y_6755_ = v_fst_6992_;
v___y_6756_ = v_snd_6995_;
v___y_6757_ = v_numDiscrEqs_6958_;
v___y_6758_ = v_a_6979_;
v___y_6759_ = v_fst_6994_;
v_matcherLevels_6760_ = v___x_6997_;
v___y_6761_ = v___y_6959_;
v___y_6762_ = v___y_6960_;
v___y_6763_ = v___y_6961_;
v___y_6764_ = v___y_6962_;
goto v___jp_6752_;
}
}
else
{
lean_object* v_a_6998_; lean_object* v___x_7000_; uint8_t v_isShared_7001_; uint8_t v_isSharedCheck_7005_; 
lean_dec(v_a_6979_);
lean_dec(v_a_6971_);
lean_dec(v_numDiscrEqs_6958_);
lean_dec_ref(v_remaining_6638_);
lean_dec_ref(v_alts_6637_);
lean_dec(v_matcherName_6632_);
lean_dec_ref(v_toMatcherInfo_6631_);
lean_dec_ref(v_onRemaining_6623_);
lean_dec_ref(v_onAlt_6622_);
lean_dec_ref(v_matcherApp_6617_);
v_a_6998_ = lean_ctor_get(v___x_6984_, 0);
v_isSharedCheck_7005_ = !lean_is_exclusive(v___x_6984_);
if (v_isSharedCheck_7005_ == 0)
{
v___x_7000_ = v___x_6984_;
v_isShared_7001_ = v_isSharedCheck_7005_;
goto v_resetjp_6999_;
}
else
{
lean_inc(v_a_6998_);
lean_dec(v___x_6984_);
v___x_7000_ = lean_box(0);
v_isShared_7001_ = v_isSharedCheck_7005_;
goto v_resetjp_6999_;
}
v_resetjp_6999_:
{
lean_object* v___x_7003_; 
if (v_isShared_7001_ == 0)
{
v___x_7003_ = v___x_7000_;
goto v_reusejp_7002_;
}
else
{
lean_object* v_reuseFailAlloc_7004_; 
v_reuseFailAlloc_7004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7004_, 0, v_a_6998_);
v___x_7003_ = v_reuseFailAlloc_7004_;
goto v_reusejp_7002_;
}
v_reusejp_7002_:
{
return v___x_7003_;
}
}
}
}
else
{
lean_object* v_a_7006_; lean_object* v___x_7008_; uint8_t v_isShared_7009_; uint8_t v_isSharedCheck_7013_; 
lean_dec(v_a_6971_);
lean_dec(v_numDiscrEqs_6958_);
lean_dec_ref(v_remaining_6638_);
lean_dec_ref(v_alts_6637_);
lean_dec(v_matcherName_6632_);
lean_dec_ref(v_toMatcherInfo_6631_);
lean_dec_ref(v_onRemaining_6623_);
lean_dec_ref(v_onAlt_6622_);
lean_dec_ref(v_onMotive_6621_);
lean_dec_ref(v_matcherApp_6617_);
v_a_7006_ = lean_ctor_get(v___x_6978_, 0);
v_isSharedCheck_7013_ = !lean_is_exclusive(v___x_6978_);
if (v_isSharedCheck_7013_ == 0)
{
v___x_7008_ = v___x_6978_;
v_isShared_7009_ = v_isSharedCheck_7013_;
goto v_resetjp_7007_;
}
else
{
lean_inc(v_a_7006_);
lean_dec(v___x_6978_);
v___x_7008_ = lean_box(0);
v_isShared_7009_ = v_isSharedCheck_7013_;
goto v_resetjp_7007_;
}
v_resetjp_7007_:
{
lean_object* v___x_7011_; 
if (v_isShared_7009_ == 0)
{
v___x_7011_ = v___x_7008_;
goto v_reusejp_7010_;
}
else
{
lean_object* v_reuseFailAlloc_7012_; 
v_reuseFailAlloc_7012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7012_, 0, v_a_7006_);
v___x_7011_ = v_reuseFailAlloc_7012_;
goto v_reusejp_7010_;
}
v_reusejp_7010_:
{
return v___x_7011_;
}
}
}
}
else
{
lean_object* v_a_7014_; lean_object* v___x_7016_; uint8_t v_isShared_7017_; uint8_t v_isSharedCheck_7021_; 
lean_dec(v_numDiscrEqs_6958_);
lean_dec_ref(v_remaining_6638_);
lean_dec_ref(v_alts_6637_);
lean_dec(v_matcherName_6632_);
lean_dec_ref(v_toMatcherInfo_6631_);
lean_dec_ref(v_onRemaining_6623_);
lean_dec_ref(v_onAlt_6622_);
lean_dec_ref(v_onMotive_6621_);
lean_dec_ref(v_onParams_6620_);
lean_dec_ref(v_matcherApp_6617_);
v_a_7014_ = lean_ctor_get(v___x_6970_, 0);
v_isSharedCheck_7021_ = !lean_is_exclusive(v___x_6970_);
if (v_isSharedCheck_7021_ == 0)
{
v___x_7016_ = v___x_6970_;
v_isShared_7017_ = v_isSharedCheck_7021_;
goto v_resetjp_7015_;
}
else
{
lean_inc(v_a_7014_);
lean_dec(v___x_6970_);
v___x_7016_ = lean_box(0);
v_isShared_7017_ = v_isSharedCheck_7021_;
goto v_resetjp_7015_;
}
v_resetjp_7015_:
{
lean_object* v___x_7019_; 
if (v_isShared_7017_ == 0)
{
v___x_7019_ = v___x_7016_;
goto v_reusejp_7018_;
}
else
{
lean_object* v_reuseFailAlloc_7020_; 
v_reuseFailAlloc_7020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7020_, 0, v_a_7014_);
v___x_7019_ = v_reuseFailAlloc_7020_;
goto v_reusejp_7018_;
}
v_reusejp_7018_:
{
return v___x_7019_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed(lean_object* v_matcherApp_7041_, lean_object* v_useSplitter_7042_, lean_object* v_addEqualities_7043_, lean_object* v_onParams_7044_, lean_object* v_onMotive_7045_, lean_object* v_onAlt_7046_, lean_object* v_onRemaining_7047_, lean_object* v___y_7048_, lean_object* v___y_7049_, lean_object* v___y_7050_, lean_object* v___y_7051_, lean_object* v___y_7052_){
_start:
{
uint8_t v_useSplitter_boxed_7053_; uint8_t v_addEqualities_boxed_7054_; lean_object* v_res_7055_; 
v_useSplitter_boxed_7053_ = lean_unbox(v_useSplitter_7042_);
v_addEqualities_boxed_7054_ = lean_unbox(v_addEqualities_7043_);
v_res_7055_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(v_matcherApp_7041_, v_useSplitter_boxed_7053_, v_addEqualities_boxed_7054_, v_onParams_7044_, v_onMotive_7045_, v_onAlt_7046_, v_onRemaining_7047_, v___y_7048_, v___y_7049_, v___y_7050_, v___y_7051_);
lean_dec(v___y_7051_);
lean_dec_ref(v___y_7050_);
lean_dec(v___y_7049_);
lean_dec_ref(v___y_7048_);
return v_res_7055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType(lean_object* v_matcherApp_7061_, lean_object* v_a_7062_, lean_object* v_a_7063_, lean_object* v_a_7064_, lean_object* v_a_7065_){
_start:
{
lean_object* v_toMatcherInfo_7067_; lean_object* v_matcherName_7068_; lean_object* v_matcherLevels_7069_; lean_object* v_params_7070_; lean_object* v_alts_7071_; lean_object* v_remaining_7072_; lean_object* v___f_7073_; lean_object* v___f_7074_; lean_object* v_nExtra_7075_; uint8_t v___x_7076_; lean_object* v___f_7077_; uint8_t v___x_7078_; lean_object* v___x_7079_; lean_object* v___x_7080_; lean_object* v___f_7081_; lean_object* v___x_7082_; 
v_toMatcherInfo_7067_ = lean_ctor_get(v_matcherApp_7061_, 0);
v_matcherName_7068_ = lean_ctor_get(v_matcherApp_7061_, 1);
v_matcherLevels_7069_ = lean_ctor_get(v_matcherApp_7061_, 2);
v_params_7070_ = lean_ctor_get(v_matcherApp_7061_, 3);
v_alts_7071_ = lean_ctor_get(v_matcherApp_7061_, 6);
v_remaining_7072_ = lean_ctor_get(v_matcherApp_7061_, 7);
v___f_7073_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___closed__0));
v___f_7074_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___closed__1));
v_nExtra_7075_ = lean_array_get_size(v_remaining_7072_);
v___x_7076_ = 1;
v___f_7077_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___closed__2));
v___x_7078_ = 0;
v___x_7079_ = lean_box(v___x_7078_);
v___x_7080_ = lean_box(v___x_7076_);
lean_inc_ref(v_matcherLevels_7069_);
lean_inc_ref(v_params_7070_);
lean_inc(v_matcherName_7068_);
lean_inc_ref(v_toMatcherInfo_7067_);
lean_inc_ref(v_alts_7071_);
v___f_7081_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed), 15, 8);
lean_closure_set(v___f_7081_, 0, v_nExtra_7075_);
lean_closure_set(v___f_7081_, 1, v___x_7079_);
lean_closure_set(v___f_7081_, 2, v___x_7080_);
lean_closure_set(v___f_7081_, 3, v_alts_7071_);
lean_closure_set(v___f_7081_, 4, v_toMatcherInfo_7067_);
lean_closure_set(v___f_7081_, 5, v_matcherName_7068_);
lean_closure_set(v___f_7081_, 6, v_params_7070_);
lean_closure_set(v___f_7081_, 7, v_matcherLevels_7069_);
v___x_7082_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(v_matcherApp_7061_, v___x_7076_, v___x_7078_, v___f_7073_, v___f_7081_, v___f_7077_, v___f_7074_, v_a_7062_, v_a_7063_, v_a_7064_, v_a_7065_);
return v___x_7082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___boxed(lean_object* v_matcherApp_7083_, lean_object* v_a_7084_, lean_object* v_a_7085_, lean_object* v_a_7086_, lean_object* v_a_7087_, lean_object* v_a_7088_){
_start:
{
lean_object* v_res_7089_; 
v_res_7089_ = l_Lean_Meta_MatcherApp_inferMatchType(v_matcherApp_7083_, v_a_7084_, v_a_7085_, v_a_7086_, v_a_7087_);
lean_dec(v_a_7087_);
lean_dec_ref(v_a_7086_);
lean_dec(v_a_7085_);
lean_dec_ref(v_a_7084_);
return v_res_7089_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(lean_object* v_a_7090_, lean_object* v_termAlt_7091_, lean_object* v_inst_7092_, lean_object* v_R_7093_, lean_object* v_a_7094_, lean_object* v_b_7095_, lean_object* v_c_7096_, lean_object* v___y_7097_, lean_object* v___y_7098_, lean_object* v___y_7099_, lean_object* v___y_7100_){
_start:
{
lean_object* v___x_7102_; 
v___x_7102_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_7090_, v_termAlt_7091_, v_a_7094_, v_b_7095_, v___y_7097_, v___y_7098_, v___y_7099_, v___y_7100_);
return v___x_7102_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___boxed(lean_object* v_a_7103_, lean_object* v_termAlt_7104_, lean_object* v_inst_7105_, lean_object* v_R_7106_, lean_object* v_a_7107_, lean_object* v_b_7108_, lean_object* v_c_7109_, lean_object* v___y_7110_, lean_object* v___y_7111_, lean_object* v___y_7112_, lean_object* v___y_7113_, lean_object* v___y_7114_){
_start:
{
lean_object* v_res_7115_; 
v_res_7115_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(v_a_7103_, v_termAlt_7104_, v_inst_7105_, v_R_7106_, v_a_7107_, v_b_7108_, v_c_7109_, v___y_7110_, v___y_7111_, v___y_7112_, v___y_7113_);
lean_dec(v___y_7113_);
lean_dec_ref(v___y_7112_);
lean_dec(v___y_7111_);
lean_dec_ref(v___y_7110_);
return v_res_7115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(lean_object* v_00_u03b1_7116_, lean_object* v_fvars_7117_, lean_object* v_names_7118_, lean_object* v_k_7119_, lean_object* v___y_7120_, lean_object* v___y_7121_, lean_object* v___y_7122_, lean_object* v___y_7123_){
_start:
{
lean_object* v___x_7125_; 
v___x_7125_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_fvars_7117_, v_names_7118_, v_k_7119_, v___y_7120_, v___y_7121_, v___y_7122_, v___y_7123_);
return v___x_7125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___boxed(lean_object* v_00_u03b1_7126_, lean_object* v_fvars_7127_, lean_object* v_names_7128_, lean_object* v_k_7129_, lean_object* v___y_7130_, lean_object* v___y_7131_, lean_object* v___y_7132_, lean_object* v___y_7133_, lean_object* v___y_7134_){
_start:
{
lean_object* v_res_7135_; 
v_res_7135_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(v_00_u03b1_7126_, v_fvars_7127_, v_names_7128_, v_k_7129_, v___y_7130_, v___y_7131_, v___y_7132_, v___y_7133_);
lean_dec(v___y_7133_);
lean_dec_ref(v___y_7132_);
lean_dec(v___y_7131_);
lean_dec_ref(v___y_7130_);
lean_dec_ref(v_names_7128_);
lean_dec_ref(v_fvars_7127_);
return v_res_7135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(lean_object* v_00_u03b1_7136_, lean_object* v_origAltType_7137_, lean_object* v_altInfo_7138_, lean_object* v_k_7139_, lean_object* v___y_7140_, lean_object* v___y_7141_, lean_object* v___y_7142_, lean_object* v___y_7143_){
_start:
{
lean_object* v___x_7145_; 
v___x_7145_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v_origAltType_7137_, v_altInfo_7138_, v_k_7139_, v___y_7140_, v___y_7141_, v___y_7142_, v___y_7143_);
return v___x_7145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___boxed(lean_object* v_00_u03b1_7146_, lean_object* v_origAltType_7147_, lean_object* v_altInfo_7148_, lean_object* v_k_7149_, lean_object* v___y_7150_, lean_object* v___y_7151_, lean_object* v___y_7152_, lean_object* v___y_7153_, lean_object* v___y_7154_){
_start:
{
lean_object* v_res_7155_; 
v_res_7155_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(v_00_u03b1_7146_, v_origAltType_7147_, v_altInfo_7148_, v_k_7149_, v___y_7150_, v___y_7151_, v___y_7152_, v___y_7153_);
lean_dec(v___y_7153_);
lean_dec_ref(v___y_7152_);
lean_dec(v___y_7151_);
lean_dec_ref(v___y_7150_);
return v_res_7155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(lean_object* v_declName_7156_, lean_object* v___y_7157_, lean_object* v___y_7158_, lean_object* v___y_7159_, lean_object* v___y_7160_){
_start:
{
lean_object* v___x_7162_; 
v___x_7162_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_declName_7156_, v___y_7160_);
return v___x_7162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___boxed(lean_object* v_declName_7163_, lean_object* v___y_7164_, lean_object* v___y_7165_, lean_object* v___y_7166_, lean_object* v___y_7167_, lean_object* v___y_7168_){
_start:
{
lean_object* v_res_7169_; 
v_res_7169_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(v_declName_7163_, v___y_7164_, v___y_7165_, v___y_7166_, v___y_7167_);
lean_dec(v___y_7167_);
lean_dec_ref(v___y_7166_);
lean_dec(v___y_7165_);
lean_dec_ref(v___y_7164_);
return v_res_7169_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(lean_object* v_upperBound_7170_, lean_object* v_onAlt_7171_, lean_object* v_extraEqualities_7172_, lean_object* v_inst_7173_, lean_object* v_R_7174_, lean_object* v_a_7175_, lean_object* v_b_7176_, lean_object* v_c_7177_, lean_object* v___y_7178_, lean_object* v___y_7179_, lean_object* v___y_7180_, lean_object* v___y_7181_){
_start:
{
lean_object* v___x_7183_; 
v___x_7183_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v_upperBound_7170_, v_onAlt_7171_, v_extraEqualities_7172_, v_a_7175_, v_b_7176_, v___y_7178_, v___y_7179_, v___y_7180_, v___y_7181_);
return v___x_7183_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___boxed(lean_object* v_upperBound_7184_, lean_object* v_onAlt_7185_, lean_object* v_extraEqualities_7186_, lean_object* v_inst_7187_, lean_object* v_R_7188_, lean_object* v_a_7189_, lean_object* v_b_7190_, lean_object* v_c_7191_, lean_object* v___y_7192_, lean_object* v___y_7193_, lean_object* v___y_7194_, lean_object* v___y_7195_, lean_object* v___y_7196_){
_start:
{
lean_object* v_res_7197_; 
v_res_7197_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(v_upperBound_7184_, v_onAlt_7185_, v_extraEqualities_7186_, v_inst_7187_, v_R_7188_, v_a_7189_, v_b_7190_, v_c_7191_, v___y_7192_, v___y_7193_, v___y_7194_, v___y_7195_);
lean_dec(v___y_7195_);
lean_dec_ref(v___y_7194_);
lean_dec(v___y_7193_);
lean_dec_ref(v___y_7192_);
lean_dec(v_upperBound_7184_);
return v_res_7197_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(lean_object* v_upperBound_7198_, lean_object* v_onAlt_7199_, uint8_t v_useSplitter_7200_, lean_object* v_extraEqualities_7201_, lean_object* v_numDiscrEqs_7202_, lean_object* v_inst_7203_, lean_object* v_R_7204_, lean_object* v_a_7205_, lean_object* v_b_7206_, lean_object* v_c_7207_, lean_object* v___y_7208_, lean_object* v___y_7209_, lean_object* v___y_7210_, lean_object* v___y_7211_){
_start:
{
lean_object* v___x_7213_; 
v___x_7213_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v_upperBound_7198_, v_onAlt_7199_, v_useSplitter_7200_, v_extraEqualities_7201_, v_numDiscrEqs_7202_, v_a_7205_, v_b_7206_, v___y_7208_, v___y_7209_, v___y_7210_, v___y_7211_);
return v___x_7213_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___boxed(lean_object* v_upperBound_7214_, lean_object* v_onAlt_7215_, lean_object* v_useSplitter_7216_, lean_object* v_extraEqualities_7217_, lean_object* v_numDiscrEqs_7218_, lean_object* v_inst_7219_, lean_object* v_R_7220_, lean_object* v_a_7221_, lean_object* v_b_7222_, lean_object* v_c_7223_, lean_object* v___y_7224_, lean_object* v___y_7225_, lean_object* v___y_7226_, lean_object* v___y_7227_, lean_object* v___y_7228_){
_start:
{
uint8_t v_useSplitter_boxed_7229_; lean_object* v_res_7230_; 
v_useSplitter_boxed_7229_ = lean_unbox(v_useSplitter_7216_);
v_res_7230_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(v_upperBound_7214_, v_onAlt_7215_, v_useSplitter_boxed_7229_, v_extraEqualities_7217_, v_numDiscrEqs_7218_, v_inst_7219_, v_R_7220_, v_a_7221_, v_b_7222_, v_c_7223_, v___y_7224_, v___y_7225_, v___y_7226_, v___y_7227_);
lean_dec(v___y_7227_);
lean_dec_ref(v___y_7226_);
lean_dec(v___y_7225_);
lean_dec_ref(v___y_7224_);
lean_dec(v_upperBound_7214_);
return v_res_7230_;
}
}
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_AltTelescopes(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_AltTelescopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Match_MatcherApp_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_AltTelescopes(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Match_MatcherApp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_AltTelescopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
}
#ifdef __cplusplus
}
#endif

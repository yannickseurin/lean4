// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.Main
// Imports: public import Lean.Elab.PreDefinition.Mutual public import Lean.Elab.PreDefinition.Structural.FindRecArg public import Lean.Elab.PreDefinition.Structural.Preprocess public import Lean.Elab.PreDefinition.Structural.BRecOn public import Lean.Elab.PreDefinition.Structural.IndPred public import Lean.Elab.PreDefinition.Structural.Eqns public import Lean.Elab.PreDefinition.Structural.SmartUnfolding public import Lean.Meta.Tactic.TryThis
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
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Elab_Structural_mkBRecOnMotive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVarOf(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_addAsAxiom___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Meta_PProdN_mkLambdas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_withEnv___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_local_ctx_erase(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Elab_Structural_RecArgInfo_indicesAndRecArgPos(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
extern lean_object* l_Lean_instInhabitedName;
extern lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_InductiveVal_numTypeFormers(lean_object*);
lean_object* l_Array_range(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Nat_blt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isInductivePredicate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkBRecOnApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_Positions_numIndices(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t l_Lean_getMaxHeight(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_setDefHeightOverride(lean_object*, lean_object*, uint32_t);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkBRecOnF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkIndPredBRecOnF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkBRecOnConst(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkIndPredBRecOnMotive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_withFunTypes___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Elab_addNonRec(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_findRecArgCandidates___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_tryCandidates___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_TerminationMeasure_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_addSmartUnfoldingDef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_abstractNestedProofs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_registerEqnsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveEqnAffectingOptions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_eraseRecAppSyntax(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAsAxiom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyAttributesOf(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__24___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__24(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed__const__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_f"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 65, 185, 154, 193, 83, 240, 170)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__0;
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__1 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__2 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__3 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__4 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__13(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Elab.PreDefinition.Structural.Basic"};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Elab.Structural.Positions.mapMwith"};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "assertion violation: positions.size = ys.size\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__3;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "assertion violation: positions.numIndices = xs.size\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__5;
static const lean_array_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__2;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "packedFArgs: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__4;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "FArgs: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__6;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "FTypes: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__8;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "funTypes: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__9 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__9_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__10;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", motives: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__11 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__11_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__12;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2(lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__3(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1;
static const lean_string_object l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__2 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__8___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__11(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__7(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Elab.Structural.Positions.groupAndSort"};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "assertion violation: Array.range xs.size == positions.flatten.qsort Nat.blt\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__2;
static const lean_array_object l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_PProdN_mkLambdas___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structural"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__2_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__4_value),LEAN_SCALAR_PTR_LITERAL(117, 73, 239, 7, 229, 151, 237, 199)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5_value)} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__6_value;
static const lean_array_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__7_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "assignments of type formers of "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__8 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__9;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " to functions: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__10 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17_spec__21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__0 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__0_value;
static const lean_string_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__1 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__1_value)}};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__2 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__3 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__3_value;
static const lean_string_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__4 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__4_value;
static lean_once_cell_t l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5;
static lean_once_cell_t l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6;
static const lean_ctor_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__0_value)}};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__7 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__4_value)}};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__8 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__8_value;
static const lean_string_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__9 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__9_value)}};
static const lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__10 = (const lean_object*)&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "its type is an inductive datatype and the datatype parameter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "\ndepends on the function parameter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 137, .m_capacity = 137, .m_length = 136, .m_data = "\nwhich cannot be fixed as it is an index or depends on an index, and indices cannot be fixed parameters when using structural recursion."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__0;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "New recArgInfos "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__2;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Reduced fixed params from "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__4;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " to "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__6;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ", erasing "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__8;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Trying argument set "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__9_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__15(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_reportTermMeasure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_reportTermMeasure___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_reportTermMeasure___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_reportTermMeasure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Structural_reportTermMeasure___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__1_value;
static const lean_string_object l_Lean_Elab_Structural_reportTermMeasure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Structural_reportTermMeasure___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__2_value;
static const lean_string_object l_Lean_Elab_Structural_reportTermMeasure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean_Elab_Structural_reportTermMeasure___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__3_value;
static const lean_string_object l_Lean_Elab_Structural_reportTermMeasure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "terminationBy"};
static const lean_object* l_Lean_Elab_Structural_reportTermMeasure___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Structural_reportTermMeasure___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Structural_reportTermMeasure___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Structural_reportTermMeasure___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__3_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l_Lean_Elab_Structural_reportTermMeasure___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__4_value),LEAN_SCALAR_PTR_LITERAL(20, 221, 175, 114, 26, 111, 13, 165)}};
static const lean_object* l_Lean_Elab_Structural_reportTermMeasure___closed__5 = (const lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__5_value;
static const lean_string_object l_Lean_Elab_Structural_reportTermMeasure___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Try this:"};
static const lean_object* l_Lean_Elab_Structural_reportTermMeasure___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_reportTermMeasure___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "structural recursion failed, produced type incorrect term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_structuralRecursion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_structuralRecursion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__0(lean_object* v_k_1_, lean_object* v_____r_2_){
_start:
{
lean_inc(v_k_1_);
return v_k_1_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__0___boxed(lean_object* v_k_3_, lean_object* v_____r_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__0(v_k_3_, v_____r_4_);
lean_dec(v_k_3_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__1(lean_object* v_inst_6_, lean_object* v_inst_7_, lean_object* v_inst_8_, lean_object* v___x_9_, lean_object* v_____do__lift_10_){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = l_Lean_Environment_unlockAsync(v_____do__lift_10_);
v___x_12_ = l_Lean_withEnv___redArg(v_inst_6_, v_inst_7_, v_inst_8_, v___x_11_, v___x_9_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__2(lean_object* v_inst_13_, lean_object* v_x_14_, lean_object* v___y_15_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_alloc_closure((void*)(l_Lean_Elab_addAsAxiom___boxed), 6, 1);
lean_closure_set(v___x_16_, 0, v___y_15_);
v___x_17_ = lean_apply_2(v_inst_13_, lean_box(0), v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg(lean_object* v_inst_18_, lean_object* v_inst_19_, lean_object* v_inst_20_, lean_object* v_inst_21_, lean_object* v_preDefs_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_toApplicative_24_; lean_object* v_toBind_25_; lean_object* v_toPure_26_; lean_object* v___f_27_; lean_object* v___y_29_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; uint8_t v___x_37_; 
v_toApplicative_24_ = lean_ctor_get(v_inst_18_, 0);
v_toBind_25_ = lean_ctor_get(v_inst_18_, 1);
lean_inc(v_toBind_25_);
v_toPure_26_ = lean_ctor_get(v_toApplicative_24_, 1);
v___f_27_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_27_, 0, v_k_23_);
v___x_34_ = lean_unsigned_to_nat(0u);
v___x_35_ = lean_array_get_size(v_preDefs_22_);
v___x_36_ = lean_box(0);
v___x_37_ = lean_nat_dec_lt(v___x_34_, v___x_35_);
if (v___x_37_ == 0)
{
lean_object* v___x_38_; 
lean_dec_ref(v_preDefs_22_);
lean_dec(v_inst_19_);
lean_inc(v_toPure_26_);
v___x_38_ = lean_apply_2(v_toPure_26_, lean_box(0), v___x_36_);
v___y_29_ = v___x_38_;
goto v___jp_28_;
}
else
{
lean_object* v___f_39_; uint8_t v___x_40_; 
v___f_39_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__2), 3, 1);
lean_closure_set(v___f_39_, 0, v_inst_19_);
v___x_40_ = lean_nat_dec_le(v___x_35_, v___x_35_);
if (v___x_40_ == 0)
{
if (v___x_37_ == 0)
{
lean_object* v___x_41_; 
lean_dec_ref(v___f_39_);
lean_dec_ref(v_preDefs_22_);
lean_inc(v_toPure_26_);
v___x_41_ = lean_apply_2(v_toPure_26_, lean_box(0), v___x_36_);
v___y_29_ = v___x_41_;
goto v___jp_28_;
}
else
{
size_t v___x_42_; size_t v___x_43_; lean_object* v___x_44_; 
v___x_42_ = ((size_t)0ULL);
v___x_43_ = lean_usize_of_nat(v___x_35_);
lean_inc_ref(v_inst_18_);
v___x_44_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_18_, v___f_39_, v_preDefs_22_, v___x_42_, v___x_43_, v___x_36_);
v___y_29_ = v___x_44_;
goto v___jp_28_;
}
}
else
{
size_t v___x_45_; size_t v___x_46_; lean_object* v___x_47_; 
v___x_45_ = ((size_t)0ULL);
v___x_46_ = lean_usize_of_nat(v___x_35_);
lean_inc_ref(v_inst_18_);
v___x_47_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_18_, v___f_39_, v_preDefs_22_, v___x_45_, v___x_46_, v___x_36_);
v___y_29_ = v___x_47_;
goto v___jp_28_;
}
}
v___jp_28_:
{
lean_object* v_getEnv_30_; lean_object* v___x_31_; lean_object* v___f_32_; lean_object* v___x_33_; 
v_getEnv_30_ = lean_ctor_get(v_inst_20_, 0);
lean_inc(v_getEnv_30_);
lean_inc(v_toBind_25_);
v___x_31_ = lean_apply_4(v_toBind_25_, lean_box(0), lean_box(0), v___y_29_, v___f_27_);
v___f_32_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg___lam__1), 5, 4);
lean_closure_set(v___f_32_, 0, v_inst_18_);
lean_closure_set(v___f_32_, 1, v_inst_21_);
lean_closure_set(v___f_32_, 2, v_inst_20_);
lean_closure_set(v___f_32_, 3, v___x_31_);
v___x_33_ = lean_apply_4(v_toBind_25_, lean_box(0), lean_box(0), v_getEnv_30_, v___f_32_);
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms(lean_object* v_n_48_, lean_object* v_00_u03b1_49_, lean_object* v_inst_50_, lean_object* v_inst_51_, lean_object* v_inst_52_, lean_object* v_inst_53_, lean_object* v_preDefs_54_, lean_object* v_k_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___redArg(v_inst_50_, v_inst_51_, v_inst_52_, v_inst_53_, v_preDefs_54_, v_k_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___lam__0(lean_object* v_k_57_, lean_object* v_b_58_, lean_object* v_c_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_){
_start:
{
lean_object* v___x_65_; 
lean_inc(v___y_63_);
lean_inc_ref(v___y_62_);
lean_inc(v___y_61_);
lean_inc_ref(v___y_60_);
v___x_65_ = lean_apply_7(v_k_57_, v_b_58_, v_c_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, lean_box(0));
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___lam__0___boxed(lean_object* v_k_66_, lean_object* v_b_67_, lean_object* v_c_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___lam__0(v_k_66_, v_b_67_, v_c_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
lean_dec(v___y_70_);
lean_dec_ref(v___y_69_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(lean_object* v_e_75_, lean_object* v_k_76_, uint8_t v_cleanupAnnotations_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___f_83_; uint8_t v___x_84_; uint8_t v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___f_83_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_83_, 0, v_k_76_);
v___x_84_ = 1;
v___x_85_ = 0;
v___x_86_ = lean_box(0);
v___x_87_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_75_, v___x_84_, v___x_85_, v___x_84_, v___x_85_, v___x_86_, v___f_83_, v_cleanupAnnotations_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_87_) == 0)
{
lean_object* v_a_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_95_; 
v_a_88_ = lean_ctor_get(v___x_87_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_87_);
if (v_isSharedCheck_95_ == 0)
{
v___x_90_ = v___x_87_;
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_a_88_);
lean_dec(v___x_87_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_93_; 
if (v_isShared_91_ == 0)
{
v___x_93_ = v___x_90_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v_a_88_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
else
{
lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_103_; 
v_a_96_ = lean_ctor_get(v___x_87_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_87_);
if (v_isSharedCheck_103_ == 0)
{
v___x_98_ = v___x_87_;
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_dec(v___x_87_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_101_; 
if (v_isShared_99_ == 0)
{
v___x_101_ = v___x_98_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_a_96_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___boxed(lean_object* v_e_104_, lean_object* v_k_105_, lean_object* v_cleanupAnnotations_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_112_; lean_object* v_res_113_; 
v_cleanupAnnotations_boxed_112_ = lean_unbox(v_cleanupAnnotations_106_);
v_res_113_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(v_e_104_, v_k_105_, v_cleanupAnnotations_boxed_112_, v___y_107_, v___y_108_, v___y_109_, v___y_110_);
lean_dec(v___y_110_);
lean_dec_ref(v___y_109_);
lean_dec(v___y_108_);
lean_dec_ref(v___y_107_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1(lean_object* v_00_u03b1_114_, lean_object* v_e_115_, lean_object* v_k_116_, uint8_t v_cleanupAnnotations_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(v_e_115_, v_k_116_, v_cleanupAnnotations_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___boxed(lean_object* v_00_u03b1_124_, lean_object* v_e_125_, lean_object* v_k_126_, lean_object* v_cleanupAnnotations_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_133_; lean_object* v_res_134_; 
v_cleanupAnnotations_boxed_133_ = lean_unbox(v_cleanupAnnotations_127_);
v_res_134_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1(v_00_u03b1_124_, v_e_125_, v_k_126_, v_cleanupAnnotations_boxed_133_, v___y_128_, v___y_129_, v___y_130_, v___y_131_);
lean_dec(v___y_131_);
lean_dec_ref(v___y_130_);
lean_dec(v___y_129_);
lean_dec_ref(v___y_128_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__0(lean_object* v_x_135_){
_start:
{
lean_object* v_indIdx_136_; 
v_indIdx_136_ = lean_ctor_get(v_x_135_, 5);
lean_inc(v_indIdx_136_);
return v_indIdx_136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__0___boxed(lean_object* v_x_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__0(v_x_137_);
lean_dec_ref(v_x_137_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1(lean_object* v___x_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v_toCold_148_; lean_object* v_options_149_; uint8_t v_hasTrace_150_; 
v_toCold_148_ = lean_ctor_get(v___y_145_, 0);
v_options_149_ = lean_ctor_get(v_toCold_148_, 2);
v_hasTrace_150_ = lean_ctor_get_uint8(v_options_149_, sizeof(void*)*1);
if (v_hasTrace_150_ == 0)
{
lean_object* v___x_151_; lean_object* v___x_152_; 
lean_dec(v___x_142_);
v___x_151_ = lean_box(v_hasTrace_150_);
v___x_152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
return v___x_152_;
}
else
{
lean_object* v_inheritedTraceOptions_153_; lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_inheritedTraceOptions_153_ = lean_ctor_get(v_toCold_148_, 11);
v___x_154_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__1));
v___x_155_ = l_Lean_Name_append(v___x_154_, v___x_142_);
v___x_156_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_153_, v_options_149_, v___x_155_);
lean_dec(v___x_155_);
v___x_157_ = lean_box(v___x_156_);
v___x_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
return v___x_158_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___boxed(lean_object* v___x_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1(v___x_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___lam__0(lean_object* v_fixedParamPerms_166_, lean_object* v___x_167_, lean_object* v___x_168_, lean_object* v_xs_169_, lean_object* v_snd_170_, uint8_t v___x_171_, lean_object* v_ys_172_, lean_object* v_x_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v_perms_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; uint8_t v___x_183_; uint8_t v___x_184_; lean_object* v___x_185_; 
v_perms_179_ = lean_ctor_get(v_fixedParamPerms_166_, 1);
v___x_180_ = lean_array_get_borrowed(v___x_167_, v_perms_179_, v___x_168_);
lean_inc_ref(v_ys_172_);
lean_inc(v___x_180_);
v___x_181_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v___x_180_, v_xs_169_, v_ys_172_);
v___x_182_ = l_Lean_Expr_beta(v_snd_170_, v_ys_172_);
v___x_183_ = 0;
v___x_184_ = 1;
v___x_185_ = l_Lean_Meta_mkLambdaFVars(v___x_181_, v___x_182_, v___x_183_, v___x_171_, v___x_183_, v___x_171_, v___x_184_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___lam__0___boxed(lean_object* v_fixedParamPerms_186_, lean_object* v___x_187_, lean_object* v___x_188_, lean_object* v_xs_189_, lean_object* v_snd_190_, lean_object* v___x_191_, lean_object* v_ys_192_, lean_object* v_x_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
uint8_t v___x_25286__boxed_199_; lean_object* v_res_200_; 
v___x_25286__boxed_199_ = lean_unbox(v___x_191_);
v_res_200_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___lam__0(v_fixedParamPerms_186_, v___x_187_, v___x_188_, v_xs_189_, v_snd_190_, v___x_25286__boxed_199_, v_ys_192_, v_x_193_, v___y_194_, v___y_195_, v___y_196_, v___y_197_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
lean_dec(v___y_195_);
lean_dec_ref(v___y_194_);
lean_dec_ref(v_x_193_);
lean_dec_ref(v_xs_189_);
lean_dec(v___x_188_);
lean_dec_ref(v___x_187_);
lean_dec_ref(v_fixedParamPerms_186_);
return v_res_200_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l_Array_instInhabited___redArg();
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg(lean_object* v_fixedParamPerms_202_, lean_object* v_xs_203_, size_t v_sz_204_, size_t v_i_205_, lean_object* v_bs_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
uint8_t v___x_212_; 
v___x_212_ = lean_usize_dec_lt(v_i_205_, v_sz_204_);
if (v___x_212_ == 0)
{
lean_object* v___x_213_; lean_object* v___x_214_; 
lean_dec_ref(v_xs_203_);
lean_dec_ref(v_fixedParamPerms_202_);
v___x_213_ = l_unsafeCast___redArg(v_bs_206_);
lean_dec_ref(v_bs_206_);
v___x_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
return v___x_214_;
}
else
{
lean_object* v_v_215_; lean_object* v___x_216_; lean_object* v_fst_217_; lean_object* v_snd_218_; lean_object* v___x_219_; lean_object* v_bs_x27_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___f_224_; uint8_t v___x_225_; lean_object* v___x_226_; 
v_v_215_ = lean_array_uget_borrowed(v_bs_206_, v_i_205_);
v___x_216_ = l_unsafeCast___redArg(v_v_215_);
v_fst_217_ = lean_ctor_get(v___x_216_, 0);
lean_inc(v_fst_217_);
v_snd_218_ = lean_ctor_get(v___x_216_, 1);
lean_inc(v_snd_218_);
lean_dec(v___x_216_);
v___x_219_ = lean_unsigned_to_nat(0u);
v_bs_x27_220_ = lean_array_uset(v_bs_206_, v_i_205_, v___x_219_);
v___x_221_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0);
v___x_222_ = lean_usize_to_nat(v_i_205_);
v___x_223_ = lean_box(v___x_212_);
lean_inc_ref(v_xs_203_);
lean_inc_ref(v_fixedParamPerms_202_);
v___f_224_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___lam__0___boxed), 13, 6);
lean_closure_set(v___f_224_, 0, v_fixedParamPerms_202_);
lean_closure_set(v___f_224_, 1, v___x_221_);
lean_closure_set(v___f_224_, 2, v___x_222_);
lean_closure_set(v___f_224_, 3, v_xs_203_);
lean_closure_set(v___f_224_, 4, v_snd_218_);
lean_closure_set(v___f_224_, 5, v___x_223_);
v___x_225_ = 0;
v___x_226_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(v_fst_217_, v___f_224_, v___x_225_, v___y_207_, v___y_208_, v___y_209_, v___y_210_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_227_; size_t v___x_228_; size_t v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v_a_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_a_227_);
lean_dec_ref_known(v___x_226_, 1);
v___x_228_ = ((size_t)1ULL);
v___x_229_ = lean_usize_add(v_i_205_, v___x_228_);
v___x_230_ = l_unsafeCast___redArg(v_a_227_);
lean_dec(v_a_227_);
v___x_231_ = lean_array_uset(v_bs_x27_220_, v_i_205_, v___x_230_);
v_i_205_ = v___x_229_;
v_bs_206_ = v___x_231_;
goto _start;
}
else
{
lean_object* v_a_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
lean_dec_ref(v_bs_x27_220_);
lean_dec_ref(v_xs_203_);
lean_dec_ref(v_fixedParamPerms_202_);
v_a_233_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_240_ == 0)
{
v___x_235_ = v___x_226_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_a_233_);
lean_dec(v___x_226_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_a_233_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___boxed(lean_object* v_fixedParamPerms_241_, lean_object* v_xs_242_, lean_object* v_sz_243_, lean_object* v_i_244_, lean_object* v_bs_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
size_t v_sz_boxed_251_; size_t v_i_boxed_252_; lean_object* v_res_253_; 
v_sz_boxed_251_ = lean_unbox_usize(v_sz_243_);
lean_dec(v_sz_243_);
v_i_boxed_252_ = lean_unbox_usize(v_i_244_);
lean_dec(v_i_244_);
v_res_253_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg(v_fixedParamPerms_241_, v_xs_242_, v_sz_boxed_251_, v_i_boxed_252_, v_bs_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8(lean_object* v_fixedParamPerms_254_, lean_object* v_xs_255_, lean_object* v_as_256_, size_t v_sz_257_, size_t v_i_258_, lean_object* v_bs_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg(v_fixedParamPerms_254_, v_xs_255_, v_sz_257_, v_i_258_, v_bs_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___boxed(lean_object* v_fixedParamPerms_266_, lean_object* v_xs_267_, lean_object* v_as_268_, lean_object* v_sz_269_, lean_object* v_i_270_, lean_object* v_bs_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_){
_start:
{
size_t v_sz_boxed_277_; size_t v_i_boxed_278_; lean_object* v_res_279_; 
v_sz_boxed_277_ = lean_unbox_usize(v_sz_269_);
lean_dec(v_sz_269_);
v_i_boxed_278_ = lean_unbox_usize(v_i_270_);
lean_dec(v_i_270_);
v_res_279_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8(v_fixedParamPerms_266_, v_xs_267_, v_as_268_, v_sz_boxed_277_, v_i_boxed_278_, v_bs_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec_ref(v_as_268_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13(lean_object* v_as_280_, size_t v_i_281_, size_t v_stop_282_, lean_object* v_b_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_){
_start:
{
uint8_t v___x_289_; 
v___x_289_ = lean_usize_dec_eq(v_i_281_, v_stop_282_);
if (v___x_289_ == 0)
{
lean_object* v___x_19658__overap_290_; lean_object* v___x_291_; 
v___x_19658__overap_290_ = lean_array_uget_borrowed(v_as_280_, v_i_281_);
lean_inc(v___x_19658__overap_290_);
lean_inc(v___y_287_);
lean_inc_ref(v___y_286_);
lean_inc(v___y_285_);
lean_inc_ref(v___y_284_);
v___x_291_ = lean_apply_5(v___x_19658__overap_290_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, lean_box(0));
if (lean_obj_tag(v___x_291_) == 0)
{
lean_object* v_a_292_; size_t v___x_293_; size_t v___x_294_; 
v_a_292_ = lean_ctor_get(v___x_291_, 0);
lean_inc(v_a_292_);
lean_dec_ref_known(v___x_291_, 1);
v___x_293_ = ((size_t)1ULL);
v___x_294_ = lean_usize_add(v_i_281_, v___x_293_);
v_i_281_ = v___x_294_;
v_b_283_ = v_a_292_;
goto _start;
}
else
{
return v___x_291_;
}
}
else
{
lean_object* v___x_296_; 
v___x_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_296_, 0, v_b_283_);
return v___x_296_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___boxed(lean_object* v_as_297_, lean_object* v_i_298_, lean_object* v_stop_299_, lean_object* v_b_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
size_t v_i_boxed_306_; size_t v_stop_boxed_307_; lean_object* v_res_308_; 
v_i_boxed_306_ = lean_unbox_usize(v_i_298_);
lean_dec(v_i_298_);
v_stop_boxed_307_ = lean_unbox_usize(v_stop_299_);
lean_dec(v_stop_299_);
v_res_308_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13(v_as_297_, v_i_boxed_306_, v_stop_boxed_307_, v_b_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
lean_dec_ref(v_as_297_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__24___redArg(lean_object* v_as_309_, size_t v_i_310_, size_t v_stop_311_, lean_object* v_b_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
uint8_t v___x_316_; 
v___x_316_ = lean_usize_dec_eq(v_i_310_, v_stop_311_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_array_uget_borrowed(v_as_309_, v_i_310_);
v___x_318_ = l_Lean_Elab_addAsAxiom___redArg(v___x_317_, v___y_313_, v___y_314_);
if (lean_obj_tag(v___x_318_) == 0)
{
lean_object* v_a_319_; size_t v___x_320_; size_t v___x_321_; 
v_a_319_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_a_319_);
lean_dec_ref_known(v___x_318_, 1);
v___x_320_ = ((size_t)1ULL);
v___x_321_ = lean_usize_add(v_i_310_, v___x_320_);
v_i_310_ = v___x_321_;
v_b_312_ = v_a_319_;
goto _start;
}
else
{
return v___x_318_;
}
}
else
{
lean_object* v___x_323_; 
v___x_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_323_, 0, v_b_312_);
return v___x_323_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__24___redArg___boxed(lean_object* v_as_324_, lean_object* v_i_325_, lean_object* v_stop_326_, lean_object* v_b_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
size_t v_i_boxed_331_; size_t v_stop_boxed_332_; lean_object* v_res_333_; 
v_i_boxed_331_ = lean_unbox_usize(v_i_325_);
lean_dec(v_i_325_);
v_stop_boxed_332_ = lean_unbox_usize(v_stop_326_);
lean_dec(v_stop_326_);
v_res_333_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__24___redArg(v_as_324_, v_i_boxed_331_, v_stop_boxed_332_, v_b_327_, v___y_328_, v___y_329_);
lean_dec(v___y_329_);
lean_dec_ref(v___y_328_);
lean_dec_ref(v_as_324_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__24(lean_object* v_as_334_, size_t v_i_335_, size_t v_stop_336_, lean_object* v_b_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__24___redArg(v_as_334_, v_i_335_, v_stop_336_, v_b_337_, v___y_340_, v___y_341_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__24___boxed(lean_object* v_as_344_, lean_object* v_i_345_, lean_object* v_stop_346_, lean_object* v_b_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_){
_start:
{
size_t v_i_boxed_353_; size_t v_stop_boxed_354_; lean_object* v_res_355_; 
v_i_boxed_353_ = lean_unbox_usize(v_i_345_);
lean_dec(v_i_345_);
v_stop_boxed_354_ = lean_unbox_usize(v_stop_346_);
lean_dec(v_stop_346_);
v_res_355_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__24(v_as_344_, v_i_boxed_353_, v_stop_boxed_354_, v_b_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_);
lean_dec(v___y_351_);
lean_dec_ref(v___y_350_);
lean_dec(v___y_349_);
lean_dec_ref(v___y_348_);
lean_dec_ref(v_as_344_);
return v_res_355_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__0(void){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_356_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__1(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__0);
v___x_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
return v___x_358_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__2(void){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_359_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__1);
v___x_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
return v___x_360_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__3(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__1);
v___x_362_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_362_, 0, v___x_361_);
lean_ctor_set(v___x_362_, 1, v___x_361_);
lean_ctor_set(v___x_362_, 2, v___x_361_);
lean_ctor_set(v___x_362_, 3, v___x_361_);
lean_ctor_set(v___x_362_, 4, v___x_361_);
lean_ctor_set(v___x_362_, 5, v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg(lean_object* v_env_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
lean_object* v___x_367_; lean_object* v_nextMacroScope_368_; lean_object* v_ngen_369_; lean_object* v_auxDeclNGen_370_; lean_object* v_traceState_371_; lean_object* v_messages_372_; lean_object* v_infoState_373_; lean_object* v_snapshotTasks_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_400_; 
v___x_367_ = lean_st_ref_take(v___y_365_);
v_nextMacroScope_368_ = lean_ctor_get(v___x_367_, 1);
v_ngen_369_ = lean_ctor_get(v___x_367_, 2);
v_auxDeclNGen_370_ = lean_ctor_get(v___x_367_, 3);
v_traceState_371_ = lean_ctor_get(v___x_367_, 4);
v_messages_372_ = lean_ctor_get(v___x_367_, 6);
v_infoState_373_ = lean_ctor_get(v___x_367_, 7);
v_snapshotTasks_374_ = lean_ctor_get(v___x_367_, 8);
v_isSharedCheck_400_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_400_ == 0)
{
lean_object* v_unused_401_; lean_object* v_unused_402_; 
v_unused_401_ = lean_ctor_get(v___x_367_, 5);
lean_dec(v_unused_401_);
v_unused_402_ = lean_ctor_get(v___x_367_, 0);
lean_dec(v_unused_402_);
v___x_376_ = v___x_367_;
v_isShared_377_ = v_isSharedCheck_400_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_snapshotTasks_374_);
lean_inc(v_infoState_373_);
lean_inc(v_messages_372_);
lean_inc(v_traceState_371_);
lean_inc(v_auxDeclNGen_370_);
lean_inc(v_ngen_369_);
lean_inc(v_nextMacroScope_368_);
lean_dec(v___x_367_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_400_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_378_; lean_object* v___x_380_; 
v___x_378_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__2);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 5, v___x_378_);
lean_ctor_set(v___x_376_, 0, v_env_363_);
v___x_380_ = v___x_376_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v_env_363_);
lean_ctor_set(v_reuseFailAlloc_399_, 1, v_nextMacroScope_368_);
lean_ctor_set(v_reuseFailAlloc_399_, 2, v_ngen_369_);
lean_ctor_set(v_reuseFailAlloc_399_, 3, v_auxDeclNGen_370_);
lean_ctor_set(v_reuseFailAlloc_399_, 4, v_traceState_371_);
lean_ctor_set(v_reuseFailAlloc_399_, 5, v___x_378_);
lean_ctor_set(v_reuseFailAlloc_399_, 6, v_messages_372_);
lean_ctor_set(v_reuseFailAlloc_399_, 7, v_infoState_373_);
lean_ctor_set(v_reuseFailAlloc_399_, 8, v_snapshotTasks_374_);
v___x_380_ = v_reuseFailAlloc_399_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v_mctx_383_; lean_object* v_zetaDeltaFVarIds_384_; lean_object* v_postponed_385_; lean_object* v_diag_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_397_; 
v___x_381_ = lean_st_ref_put(v___y_365_, v___x_380_);
v___x_382_ = lean_st_ref_take(v___y_364_);
v_mctx_383_ = lean_ctor_get(v___x_382_, 0);
v_zetaDeltaFVarIds_384_ = lean_ctor_get(v___x_382_, 2);
v_postponed_385_ = lean_ctor_get(v___x_382_, 3);
v_diag_386_ = lean_ctor_get(v___x_382_, 4);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_397_ == 0)
{
lean_object* v_unused_398_; 
v_unused_398_ = lean_ctor_get(v___x_382_, 1);
lean_dec(v_unused_398_);
v___x_388_ = v___x_382_;
v_isShared_389_ = v_isSharedCheck_397_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_diag_386_);
lean_inc(v_postponed_385_);
lean_inc(v_zetaDeltaFVarIds_384_);
lean_inc(v_mctx_383_);
lean_dec(v___x_382_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_397_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_393_; 
v___x_390_ = lean_box(0);
v___x_391_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__3);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 1, v___x_391_);
v___x_393_ = v___x_388_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_mctx_383_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v___x_391_);
lean_ctor_set(v_reuseFailAlloc_396_, 2, v_zetaDeltaFVarIds_384_);
lean_ctor_set(v_reuseFailAlloc_396_, 3, v_postponed_385_);
lean_ctor_set(v_reuseFailAlloc_396_, 4, v_diag_386_);
v___x_393_ = v_reuseFailAlloc_396_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_st_ref_put(v___y_364_, v___x_393_);
v___x_395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_395_, 0, v___x_390_);
return v___x_395_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___boxed(lean_object* v_env_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg(v_env_403_, v___y_404_, v___y_405_);
lean_dec(v___y_405_);
lean_dec(v___y_404_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23___redArg(lean_object* v_env_408_, lean_object* v_x_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
lean_object* v___x_415_; lean_object* v_env_416_; lean_object* v_a_418_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_415_ = lean_st_ref_get(v___y_413_);
v_env_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc_ref(v_env_416_);
lean_dec(v___x_415_);
v___x_428_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg(v_env_408_, v___y_411_, v___y_413_);
lean_dec_ref(v___x_428_);
lean_inc(v___y_413_);
lean_inc_ref(v___y_412_);
lean_inc(v___y_411_);
lean_inc_ref(v___y_410_);
v___x_429_ = lean_apply_5(v_x_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, lean_box(0));
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v_a_430_; lean_object* v___x_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_438_; 
v_a_430_ = lean_ctor_get(v___x_429_, 0);
lean_inc(v_a_430_);
lean_dec_ref_known(v___x_429_, 1);
v___x_431_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg(v_env_416_, v___y_411_, v___y_413_);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_438_ == 0)
{
lean_object* v_unused_439_; 
v_unused_439_ = lean_ctor_get(v___x_431_, 0);
lean_dec(v_unused_439_);
v___x_433_ = v___x_431_;
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
else
{
lean_dec(v___x_431_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_436_; 
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 0, v_a_430_);
v___x_436_ = v___x_433_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_a_430_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
else
{
lean_object* v_a_440_; 
v_a_440_ = lean_ctor_get(v___x_429_, 0);
lean_inc(v_a_440_);
lean_dec_ref_known(v___x_429_, 1);
v_a_418_ = v_a_440_;
goto v___jp_417_;
}
v___jp_417_:
{
lean_object* v___x_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_426_; 
v___x_419_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg(v_env_416_, v___y_411_, v___y_413_);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_426_ == 0)
{
lean_object* v_unused_427_; 
v_unused_427_ = lean_ctor_get(v___x_419_, 0);
lean_dec(v_unused_427_);
v___x_421_ = v___x_419_;
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
else
{
lean_dec(v___x_419_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_424_; 
if (v_isShared_422_ == 0)
{
lean_ctor_set_tag(v___x_421_, 1);
lean_ctor_set(v___x_421_, 0, v_a_418_);
v___x_424_ = v___x_421_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_a_418_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23___redArg___boxed(lean_object* v_env_441_, lean_object* v_x_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23___redArg(v_env_441_, v_x_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec(v___y_444_);
lean_dec_ref(v___y_443_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__1(lean_object* v___x_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_){
_start:
{
lean_object* v___x_455_; 
v___x_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_455_, 0, v___x_449_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__1___boxed(lean_object* v___x_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__1(v___x_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__0(lean_object* v___y_463_, lean_object* v_k_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
lean_object* v___x_470_; 
lean_inc(v___y_468_);
lean_inc_ref(v___y_467_);
lean_inc(v___y_466_);
lean_inc_ref(v___y_465_);
v___x_470_ = lean_apply_5(v___y_463_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, lean_box(0));
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v___x_471_; 
lean_dec_ref_known(v___x_470_, 1);
v___x_471_ = lean_apply_5(v_k_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, lean_box(0));
return v___x_471_;
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
lean_dec(v___y_468_);
lean_dec_ref(v___y_467_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
lean_dec_ref(v_k_464_);
v_a_472_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_470_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_470_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__0___boxed(lean_object* v___y_480_, lean_object* v_k_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__0(v___y_480_, v_k_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg(lean_object* v_preDefs_492_, lean_object* v_k_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
lean_object* v___y_500_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; uint8_t v___x_509_; 
v___x_506_ = lean_unsigned_to_nat(0u);
v___x_507_ = lean_array_get_size(v_preDefs_492_);
v___x_508_ = lean_box(0);
v___x_509_ = lean_nat_dec_lt(v___x_506_, v___x_507_);
if (v___x_509_ == 0)
{
lean_object* v___f_510_; 
lean_dec_ref(v_preDefs_492_);
v___f_510_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0));
v___y_500_ = v___f_510_;
goto v___jp_499_;
}
else
{
size_t v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_511_ = lean_usize_of_nat(v___x_507_);
v___x_512_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed__const__1));
v___x_513_ = lean_box_usize(v___x_511_);
v___x_514_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__24___boxed), 9, 4);
lean_closure_set(v___x_514_, 0, v_preDefs_492_);
lean_closure_set(v___x_514_, 1, v___x_512_);
lean_closure_set(v___x_514_, 2, v___x_513_);
lean_closure_set(v___x_514_, 3, v___x_508_);
v___y_500_ = v___x_514_;
goto v___jp_499_;
}
v___jp_499_:
{
lean_object* v___f_501_; lean_object* v___x_502_; lean_object* v_env_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___f_501_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_501_, 0, v___y_500_);
lean_closure_set(v___f_501_, 1, v_k_493_);
v___x_502_ = lean_st_ref_get(v___y_497_);
v_env_503_ = lean_ctor_get(v___x_502_, 0);
lean_inc_ref(v_env_503_);
lean_dec(v___x_502_);
v___x_504_ = l_Lean_Environment_unlockAsync(v_env_503_);
v___x_505_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23___redArg(v___x_504_, v___f_501_, v___y_494_, v___y_495_, v___y_496_, v___y_497_);
return v___x_505_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed(lean_object* v_preDefs_515_, lean_object* v_k_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg(v_preDefs_515_, v_k_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v___y_518_);
lean_dec_ref(v___y_517_);
return v_res_522_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg___closed__0(void){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = lean_box(0);
v___x_524_ = l_unsafeCast___redArg(v___x_523_);
return v___x_524_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg___closed__1(void){
_start:
{
lean_object* v___x_525_; lean_object* v_dummy_526_; 
v___x_525_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg___closed__0);
v_dummy_526_ = l_Lean_Expr_sort___override(v___x_525_);
return v_dummy_526_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg(uint8_t v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_recArgInfos_530_, lean_object* v___x_531_, lean_object* v_preDefs_532_, lean_object* v_a_533_, size_t v_sz_534_, size_t v_i_535_, lean_object* v_bs_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
uint8_t v___x_542_; 
v___x_542_ = lean_usize_dec_lt(v_i_535_, v_sz_534_);
if (v___x_542_ == 0)
{
lean_object* v___x_543_; lean_object* v___x_544_; 
lean_dec_ref(v_a_533_);
lean_dec_ref(v_preDefs_532_);
lean_dec_ref(v___x_531_);
lean_dec_ref(v_recArgInfos_530_);
v___x_543_ = l_unsafeCast___redArg(v_bs_536_);
lean_dec_ref(v_bs_536_);
v___x_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
return v___x_544_;
}
else
{
lean_object* v___x_545_; lean_object* v_v_546_; lean_object* v___x_547_; lean_object* v_bs_x27_548_; lean_object* v_a_550_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_545_ = l_Lean_instInhabitedExpr;
v_v_546_ = lean_array_uget(v_bs_536_, v_i_535_);
v___x_547_ = lean_unsigned_to_nat(0u);
v_bs_x27_548_ = lean_array_uset(v_bs_536_, v_i_535_, v___x_547_);
v___x_556_ = lean_usize_to_nat(v_i_535_);
v___x_557_ = l_unsafeCast___redArg(v_v_546_);
lean_dec(v_v_546_);
if (v_a_527_ == 0)
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_558_ = lean_array_get_borrowed(v___x_545_, v_a_528_, v___x_556_);
v___x_559_ = lean_array_get_borrowed(v___x_545_, v_a_529_, v___x_556_);
lean_dec(v___x_556_);
lean_inc(v___x_559_);
lean_inc(v___x_558_);
lean_inc_ref(v___x_531_);
lean_inc_ref(v_recArgInfos_530_);
v___x_560_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnF___boxed), 10, 5);
lean_closure_set(v___x_560_, 0, v_recArgInfos_530_);
lean_closure_set(v___x_560_, 1, v___x_531_);
lean_closure_set(v___x_560_, 2, v___x_557_);
lean_closure_set(v___x_560_, 3, v___x_558_);
lean_closure_set(v___x_560_, 4, v___x_559_);
lean_inc_ref(v_preDefs_532_);
v___x_561_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg(v_preDefs_532_, v___x_560_, v___y_537_, v___y_538_, v___y_539_, v___y_540_);
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v_a_562_; 
v_a_562_ = lean_ctor_get(v___x_561_, 0);
lean_inc(v_a_562_);
lean_dec_ref_known(v___x_561_, 1);
v_a_550_ = v_a_562_;
goto v___jp_549_;
}
else
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
lean_dec_ref(v_bs_x27_548_);
lean_dec_ref(v_a_533_);
lean_dec_ref(v_preDefs_532_);
lean_dec_ref(v___x_531_);
lean_dec_ref(v_recArgInfos_530_);
v_a_563_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v___x_561_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_561_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
}
else
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v_dummy_574_; lean_object* v_nargs_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_571_ = lean_array_get_borrowed(v___x_545_, v_a_528_, v___x_556_);
v___x_572_ = lean_array_get_borrowed(v___x_545_, v_a_529_, v___x_556_);
lean_dec(v___x_556_);
lean_inc_ref(v_a_533_);
v___x_573_ = lean_apply_1(v_a_533_, v___x_547_);
v_dummy_574_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg___closed__1);
v_nargs_575_ = l_Lean_Expr_getAppNumArgs(v___x_573_);
lean_inc(v_nargs_575_);
v___x_576_ = lean_mk_array(v_nargs_575_, v_dummy_574_);
v___x_577_ = lean_unsigned_to_nat(1u);
v___x_578_ = lean_nat_sub(v_nargs_575_, v___x_577_);
lean_dec(v_nargs_575_);
v___x_579_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_573_, v___x_576_, v___x_578_);
lean_inc(v___x_572_);
lean_inc(v___x_571_);
lean_inc_ref(v___x_531_);
lean_inc_ref(v_recArgInfos_530_);
v___x_580_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkIndPredBRecOnF___boxed), 11, 6);
lean_closure_set(v___x_580_, 0, v_recArgInfos_530_);
lean_closure_set(v___x_580_, 1, v___x_531_);
lean_closure_set(v___x_580_, 2, v___x_557_);
lean_closure_set(v___x_580_, 3, v___x_571_);
lean_closure_set(v___x_580_, 4, v___x_572_);
lean_closure_set(v___x_580_, 5, v___x_579_);
lean_inc_ref(v_preDefs_532_);
v___x_581_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg(v_preDefs_532_, v___x_580_, v___y_537_, v___y_538_, v___y_539_, v___y_540_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; lean_object* v_fst_583_; lean_object* v_snd_584_; lean_object* v___y_586_; lean_object* v___x_595_; uint8_t v___x_596_; 
v_a_582_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_582_);
lean_dec_ref_known(v___x_581_, 1);
v_fst_583_ = lean_ctor_get(v_a_582_, 0);
lean_inc(v_fst_583_);
v_snd_584_ = lean_ctor_get(v_a_582_, 1);
lean_inc(v_snd_584_);
lean_dec(v_a_582_);
v___x_595_ = lean_array_get_size(v_snd_584_);
v___x_596_ = lean_nat_dec_lt(v___x_547_, v___x_595_);
if (v___x_596_ == 0)
{
lean_dec(v_snd_584_);
v_a_550_ = v_fst_583_;
goto v___jp_549_;
}
else
{
lean_object* v___x_597_; uint8_t v___x_598_; 
v___x_597_ = lean_box(0);
v___x_598_ = lean_nat_dec_le(v___x_595_, v___x_595_);
if (v___x_598_ == 0)
{
if (v___x_596_ == 0)
{
lean_dec(v_snd_584_);
v_a_550_ = v_fst_583_;
goto v___jp_549_;
}
else
{
size_t v___x_599_; size_t v___x_600_; lean_object* v___x_601_; 
v___x_599_ = ((size_t)0ULL);
v___x_600_ = lean_usize_of_nat(v___x_595_);
v___x_601_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13(v_snd_584_, v___x_599_, v___x_600_, v___x_597_, v___y_537_, v___y_538_, v___y_539_, v___y_540_);
lean_dec(v_snd_584_);
v___y_586_ = v___x_601_;
goto v___jp_585_;
}
}
else
{
size_t v___x_602_; size_t v___x_603_; lean_object* v___x_604_; 
v___x_602_ = ((size_t)0ULL);
v___x_603_ = lean_usize_of_nat(v___x_595_);
v___x_604_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13(v_snd_584_, v___x_602_, v___x_603_, v___x_597_, v___y_537_, v___y_538_, v___y_539_, v___y_540_);
lean_dec(v_snd_584_);
v___y_586_ = v___x_604_;
goto v___jp_585_;
}
}
v___jp_585_:
{
if (lean_obj_tag(v___y_586_) == 0)
{
lean_dec_ref_known(v___y_586_, 1);
v_a_550_ = v_fst_583_;
goto v___jp_549_;
}
else
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_594_; 
lean_dec(v_fst_583_);
lean_dec_ref(v_bs_x27_548_);
lean_dec_ref(v_a_533_);
lean_dec_ref(v_preDefs_532_);
lean_dec_ref(v___x_531_);
lean_dec_ref(v_recArgInfos_530_);
v_a_587_ = lean_ctor_get(v___y_586_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___y_586_);
if (v_isSharedCheck_594_ == 0)
{
v___x_589_ = v___y_586_;
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___y_586_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_a_587_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_dec_ref(v_bs_x27_548_);
lean_dec_ref(v_a_533_);
lean_dec_ref(v_preDefs_532_);
lean_dec_ref(v___x_531_);
lean_dec_ref(v_recArgInfos_530_);
v_a_605_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_581_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_581_);
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
v___jp_549_:
{
size_t v___x_551_; size_t v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_551_ = ((size_t)1ULL);
v___x_552_ = lean_usize_add(v_i_535_, v___x_551_);
v___x_553_ = l_unsafeCast___redArg(v_a_550_);
lean_dec_ref(v_a_550_);
v___x_554_ = lean_array_uset(v_bs_x27_548_, v_i_535_, v___x_553_);
v_i_535_ = v___x_552_;
v_bs_536_ = v___x_554_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg___boxed(lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_recArgInfos_616_, lean_object* v___x_617_, lean_object* v_preDefs_618_, lean_object* v_a_619_, lean_object* v_sz_620_, lean_object* v_i_621_, lean_object* v_bs_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
uint8_t v_a_25771__boxed_628_; size_t v_sz_boxed_629_; size_t v_i_boxed_630_; lean_object* v_res_631_; 
v_a_25771__boxed_628_ = lean_unbox(v_a_613_);
v_sz_boxed_629_ = lean_unbox_usize(v_sz_620_);
lean_dec(v_sz_620_);
v_i_boxed_630_ = lean_unbox_usize(v_i_621_);
lean_dec(v_i_621_);
v_res_631_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg(v_a_25771__boxed_628_, v_a_614_, v_a_615_, v_recArgInfos_616_, v___x_617_, v_preDefs_618_, v_a_619_, v_sz_boxed_629_, v_i_boxed_630_, v_bs_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
lean_dec_ref(v_a_615_);
lean_dec_ref(v_a_614_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(uint8_t v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_recArgInfos_635_, lean_object* v___x_636_, lean_object* v_preDefs_637_, lean_object* v_a_638_, lean_object* v_as_639_, size_t v_sz_640_, size_t v_i_641_, lean_object* v_bs_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___redArg(v_a_632_, v_a_633_, v_a_634_, v_recArgInfos_635_, v___x_636_, v_preDefs_637_, v_a_638_, v_sz_640_, v_i_641_, v_bs_642_, v___y_643_, v___y_644_, v___y_645_, v___y_646_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___boxed(lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_recArgInfos_652_, lean_object* v___x_653_, lean_object* v_preDefs_654_, lean_object* v_a_655_, lean_object* v_as_656_, lean_object* v_sz_657_, lean_object* v_i_658_, lean_object* v_bs_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_){
_start:
{
uint8_t v_a_25939__boxed_665_; size_t v_sz_boxed_666_; size_t v_i_boxed_667_; lean_object* v_res_668_; 
v_a_25939__boxed_665_ = lean_unbox(v_a_649_);
v_sz_boxed_666_ = lean_unbox_usize(v_sz_657_);
lean_dec(v_sz_657_);
v_i_boxed_667_ = lean_unbox_usize(v_i_658_);
lean_dec(v_i_658_);
v_res_668_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(v_a_25939__boxed_665_, v_a_650_, v_a_651_, v_recArgInfos_652_, v___x_653_, v_preDefs_654_, v_a_655_, v_as_656_, v_sz_boxed_666_, v_i_boxed_667_, v_bs_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec_ref(v_as_656_);
lean_dec_ref(v_a_651_);
lean_dec_ref(v_a_650_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11_spec__21(lean_object* v_msgData_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_){
_start:
{
lean_object* v___x_675_; lean_object* v_env_676_; lean_object* v___x_677_; lean_object* v_toCold_678_; lean_object* v_mctx_679_; lean_object* v_lctx_680_; lean_object* v_options_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_675_ = lean_st_ref_get(v___y_673_);
v_env_676_ = lean_ctor_get(v___x_675_, 0);
lean_inc_ref(v_env_676_);
lean_dec(v___x_675_);
v___x_677_ = lean_st_ref_get(v___y_671_);
v_toCold_678_ = lean_ctor_get(v___y_672_, 0);
v_mctx_679_ = lean_ctor_get(v___x_677_, 0);
lean_inc_ref(v_mctx_679_);
lean_dec(v___x_677_);
v_lctx_680_ = lean_ctor_get(v___y_670_, 2);
v_options_681_ = lean_ctor_get(v_toCold_678_, 2);
lean_inc_ref(v_options_681_);
lean_inc_ref(v_lctx_680_);
v___x_682_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_682_, 0, v_env_676_);
lean_ctor_set(v___x_682_, 1, v_mctx_679_);
lean_ctor_set(v___x_682_, 2, v_lctx_680_);
lean_ctor_set(v___x_682_, 3, v_options_681_);
v___x_683_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
lean_ctor_set(v___x_683_, 1, v_msgData_669_);
v___x_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11_spec__21___boxed(lean_object* v_msgData_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11_spec__21(v_msgData_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
lean_dec(v___y_687_);
lean_dec_ref(v___y_686_);
return v_res_691_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___closed__0(void){
_start:
{
lean_object* v___x_692_; double v___x_693_; 
v___x_692_ = lean_unsigned_to_nat(0u);
v___x_693_ = lean_float_of_nat(v___x_692_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(lean_object* v_cls_697_, lean_object* v_msg_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_){
_start:
{
lean_object* v_ref_704_; lean_object* v___x_705_; lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_750_; 
v_ref_704_ = lean_ctor_get(v___y_701_, 2);
v___x_705_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11_spec__21(v_msg_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
v_a_706_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_750_ == 0)
{
v___x_708_ = v___x_705_;
v_isShared_709_ = v_isSharedCheck_750_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_dec(v___x_705_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_750_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_710_; lean_object* v_traceState_711_; lean_object* v_env_712_; lean_object* v_nextMacroScope_713_; lean_object* v_ngen_714_; lean_object* v_auxDeclNGen_715_; lean_object* v_cache_716_; lean_object* v_messages_717_; lean_object* v_infoState_718_; lean_object* v_snapshotTasks_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_749_; 
v___x_710_ = lean_st_ref_take(v___y_702_);
v_traceState_711_ = lean_ctor_get(v___x_710_, 4);
v_env_712_ = lean_ctor_get(v___x_710_, 0);
v_nextMacroScope_713_ = lean_ctor_get(v___x_710_, 1);
v_ngen_714_ = lean_ctor_get(v___x_710_, 2);
v_auxDeclNGen_715_ = lean_ctor_get(v___x_710_, 3);
v_cache_716_ = lean_ctor_get(v___x_710_, 5);
v_messages_717_ = lean_ctor_get(v___x_710_, 6);
v_infoState_718_ = lean_ctor_get(v___x_710_, 7);
v_snapshotTasks_719_ = lean_ctor_get(v___x_710_, 8);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_749_ == 0)
{
v___x_721_ = v___x_710_;
v_isShared_722_ = v_isSharedCheck_749_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_snapshotTasks_719_);
lean_inc(v_infoState_718_);
lean_inc(v_messages_717_);
lean_inc(v_cache_716_);
lean_inc(v_traceState_711_);
lean_inc(v_auxDeclNGen_715_);
lean_inc(v_ngen_714_);
lean_inc(v_nextMacroScope_713_);
lean_inc(v_env_712_);
lean_dec(v___x_710_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_749_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
uint64_t v_tid_723_; lean_object* v_traces_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_748_; 
v_tid_723_ = lean_ctor_get_uint64(v_traceState_711_, sizeof(void*)*1);
v_traces_724_ = lean_ctor_get(v_traceState_711_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v_traceState_711_);
if (v_isSharedCheck_748_ == 0)
{
v___x_726_ = v_traceState_711_;
v_isShared_727_ = v_isSharedCheck_748_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_traces_724_);
lean_dec(v_traceState_711_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_748_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_728_; lean_object* v___x_729_; double v___x_730_; uint8_t v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_739_; 
v___x_728_ = lean_box(0);
v___x_729_ = lean_box(0);
v___x_730_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___closed__0);
v___x_731_ = 0;
v___x_732_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___closed__1));
v___x_733_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_733_, 0, v_cls_697_);
lean_ctor_set(v___x_733_, 1, v___x_729_);
lean_ctor_set(v___x_733_, 2, v___x_732_);
lean_ctor_set_float(v___x_733_, sizeof(void*)*3, v___x_730_);
lean_ctor_set_float(v___x_733_, sizeof(void*)*3 + 8, v___x_730_);
lean_ctor_set_uint8(v___x_733_, sizeof(void*)*3 + 16, v___x_731_);
v___x_734_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___closed__2));
v___x_735_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_735_, 0, v___x_733_);
lean_ctor_set(v___x_735_, 1, v_a_706_);
lean_ctor_set(v___x_735_, 2, v___x_734_);
lean_inc(v_ref_704_);
v___x_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_736_, 0, v_ref_704_);
lean_ctor_set(v___x_736_, 1, v___x_735_);
v___x_737_ = l_Lean_PersistentArray_push___redArg(v_traces_724_, v___x_736_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 0, v___x_737_);
v___x_739_ = v___x_726_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_737_);
lean_ctor_set_uint64(v_reuseFailAlloc_747_, sizeof(void*)*1, v_tid_723_);
v___x_739_ = v_reuseFailAlloc_747_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
lean_object* v___x_741_; 
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 4, v___x_739_);
v___x_741_ = v___x_721_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_env_712_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_nextMacroScope_713_);
lean_ctor_set(v_reuseFailAlloc_746_, 2, v_ngen_714_);
lean_ctor_set(v_reuseFailAlloc_746_, 3, v_auxDeclNGen_715_);
lean_ctor_set(v_reuseFailAlloc_746_, 4, v___x_739_);
lean_ctor_set(v_reuseFailAlloc_746_, 5, v_cache_716_);
lean_ctor_set(v_reuseFailAlloc_746_, 6, v_messages_717_);
lean_ctor_set(v_reuseFailAlloc_746_, 7, v_infoState_718_);
lean_ctor_set(v_reuseFailAlloc_746_, 8, v_snapshotTasks_719_);
v___x_741_ = v_reuseFailAlloc_746_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_742_; lean_object* v___x_744_; 
v___x_742_ = lean_st_ref_put(v___y_702_, v___x_741_);
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 0, v___x_728_);
v___x_744_ = v___x_708_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v___x_728_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___boxed(lean_object* v_cls_751_, lean_object* v_msg_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v_cls_751_, v_msg_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
lean_dec(v___y_756_);
lean_dec_ref(v___y_755_);
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
return v_res_758_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___redArg___closed__0(void){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = lean_box(0);
v___x_760_ = l_unsafeCast___redArg(v___x_759_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___redArg(lean_object* v_declName_761_, uint8_t v_s_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v___x_766_; lean_object* v_env_767_; lean_object* v_nextMacroScope_768_; lean_object* v_ngen_769_; lean_object* v_auxDeclNGen_770_; lean_object* v_traceState_771_; lean_object* v_messages_772_; lean_object* v_infoState_773_; lean_object* v_snapshotTasks_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_803_; 
v___x_766_ = lean_st_ref_take(v___y_764_);
v_env_767_ = lean_ctor_get(v___x_766_, 0);
v_nextMacroScope_768_ = lean_ctor_get(v___x_766_, 1);
v_ngen_769_ = lean_ctor_get(v___x_766_, 2);
v_auxDeclNGen_770_ = lean_ctor_get(v___x_766_, 3);
v_traceState_771_ = lean_ctor_get(v___x_766_, 4);
v_messages_772_ = lean_ctor_get(v___x_766_, 6);
v_infoState_773_ = lean_ctor_get(v___x_766_, 7);
v_snapshotTasks_774_ = lean_ctor_get(v___x_766_, 8);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_803_ == 0)
{
lean_object* v_unused_804_; 
v_unused_804_ = lean_ctor_get(v___x_766_, 5);
lean_dec(v_unused_804_);
v___x_776_ = v___x_766_;
v_isShared_777_ = v_isSharedCheck_803_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_snapshotTasks_774_);
lean_inc(v_infoState_773_);
lean_inc(v_messages_772_);
lean_inc(v_traceState_771_);
lean_inc(v_auxDeclNGen_770_);
lean_inc(v_ngen_769_);
lean_inc(v_nextMacroScope_768_);
lean_inc(v_env_767_);
lean_dec(v___x_766_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_803_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
uint8_t v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_783_; 
v___x_778_ = 0;
v___x_779_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___redArg___closed__0);
v___x_780_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_767_, v_declName_761_, v_s_762_, v___x_778_, v___x_779_);
v___x_781_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__2);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 5, v___x_781_);
lean_ctor_set(v___x_776_, 0, v___x_780_);
v___x_783_ = v___x_776_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v___x_780_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v_nextMacroScope_768_);
lean_ctor_set(v_reuseFailAlloc_802_, 2, v_ngen_769_);
lean_ctor_set(v_reuseFailAlloc_802_, 3, v_auxDeclNGen_770_);
lean_ctor_set(v_reuseFailAlloc_802_, 4, v_traceState_771_);
lean_ctor_set(v_reuseFailAlloc_802_, 5, v___x_781_);
lean_ctor_set(v_reuseFailAlloc_802_, 6, v_messages_772_);
lean_ctor_set(v_reuseFailAlloc_802_, 7, v_infoState_773_);
lean_ctor_set(v_reuseFailAlloc_802_, 8, v_snapshotTasks_774_);
v___x_783_ = v_reuseFailAlloc_802_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v_mctx_786_; lean_object* v_zetaDeltaFVarIds_787_; lean_object* v_postponed_788_; lean_object* v_diag_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_800_; 
v___x_784_ = lean_st_ref_put(v___y_764_, v___x_783_);
v___x_785_ = lean_st_ref_take(v___y_763_);
v_mctx_786_ = lean_ctor_get(v___x_785_, 0);
v_zetaDeltaFVarIds_787_ = lean_ctor_get(v___x_785_, 2);
v_postponed_788_ = lean_ctor_get(v___x_785_, 3);
v_diag_789_ = lean_ctor_get(v___x_785_, 4);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_800_ == 0)
{
lean_object* v_unused_801_; 
v_unused_801_ = lean_ctor_get(v___x_785_, 1);
lean_dec(v_unused_801_);
v___x_791_ = v___x_785_;
v_isShared_792_ = v_isSharedCheck_800_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_diag_789_);
lean_inc(v_postponed_788_);
lean_inc(v_zetaDeltaFVarIds_787_);
lean_inc(v_mctx_786_);
lean_dec(v___x_785_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_800_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_796_; 
v___x_793_ = lean_box(0);
v___x_794_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__3);
if (v_isShared_792_ == 0)
{
lean_ctor_set(v___x_791_, 1, v___x_794_);
v___x_796_ = v___x_791_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_mctx_786_);
lean_ctor_set(v_reuseFailAlloc_799_, 1, v___x_794_);
lean_ctor_set(v_reuseFailAlloc_799_, 2, v_zetaDeltaFVarIds_787_);
lean_ctor_set(v_reuseFailAlloc_799_, 3, v_postponed_788_);
lean_ctor_set(v_reuseFailAlloc_799_, 4, v_diag_789_);
v___x_796_ = v_reuseFailAlloc_799_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_797_ = lean_st_ref_put(v___y_763_, v___x_796_);
v___x_798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_798_, 0, v___x_793_);
return v___x_798_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___redArg___boxed(lean_object* v_declName_805_, lean_object* v_s_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
uint8_t v_s_boxed_810_; lean_object* v_res_811_; 
v_s_boxed_810_ = lean_unbox(v_s_806_);
v_res_811_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___redArg(v_declName_805_, v_s_boxed_810_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec(v___y_807_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16(lean_object* v_declName_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
uint8_t v___x_818_; lean_object* v___x_819_; 
v___x_818_ = 0;
v___x_819_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___redArg(v_declName_812_, v___x_818_, v___y_814_, v___y_816_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16___boxed(lean_object* v_declName_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l_Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16(v_declName_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
lean_dec(v___y_822_);
lean_dec_ref(v___y_821_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg(lean_object* v_preDefs_830_, lean_object* v_xs_831_, uint8_t v_a_832_, lean_object* v___x_833_, size_t v_sz_834_, size_t v_i_835_, lean_object* v_bs_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
uint8_t v___x_842_; 
v___x_842_ = lean_usize_dec_lt(v_i_835_, v_sz_834_);
if (v___x_842_ == 0)
{
lean_object* v___x_843_; lean_object* v___x_844_; 
lean_dec(v___x_833_);
lean_dec_ref(v_xs_831_);
v___x_843_ = l_unsafeCast___redArg(v_bs_836_);
lean_dec_ref(v_bs_836_);
v___x_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
return v___x_844_;
}
else
{
lean_object* v___x_845_; lean_object* v_v_846_; lean_object* v___x_847_; lean_object* v_bs_x27_848_; lean_object* v_a_850_; lean_object* v___y_857_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v_levelParams_869_; lean_object* v_modifiers_870_; lean_object* v_declName_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; uint8_t v___x_875_; lean_object* v___x_876_; 
v___x_845_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v_v_846_ = lean_array_uget(v_bs_836_, v_i_835_);
v___x_847_ = lean_unsigned_to_nat(0u);
v_bs_x27_848_ = lean_array_uset(v_bs_836_, v_i_835_, v___x_847_);
v___x_867_ = lean_usize_to_nat(v_i_835_);
v___x_868_ = lean_array_get_borrowed(v___x_845_, v_preDefs_830_, v___x_867_);
lean_dec(v___x_867_);
v_levelParams_869_ = lean_ctor_get(v___x_868_, 1);
v_modifiers_870_ = lean_ctor_get(v___x_868_, 2);
v_declName_871_ = lean_ctor_get(v___x_868_, 3);
v___x_872_ = l_unsafeCast___redArg(v_v_846_);
lean_dec(v_v_846_);
v___x_873_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg___closed__1));
lean_inc(v_declName_871_);
v___x_874_ = l_Lean_Name_append(v_declName_871_, v___x_873_);
v___x_875_ = 1;
lean_inc_ref(v_xs_831_);
v___x_876_ = l_Lean_Meta_mkLambdaFVars(v_xs_831_, v___x_872_, v_a_832_, v___x_842_, v_a_832_, v___x_842_, v___x_875_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_878_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_876_, 1);
v___x_878_ = l_Lean_Elab_eraseRecAppSyntaxExpr(v_a_877_, v___y_839_, v___y_840_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; lean_object* v___x_880_; 
v_a_879_ = lean_ctor_get(v___x_878_, 0);
lean_inc_n(v_a_879_, 2);
lean_dec_ref_known(v___x_878_, 1);
lean_inc(v___y_840_);
lean_inc_ref(v___y_839_);
lean_inc(v___y_838_);
lean_inc_ref(v___y_837_);
v___x_880_ = lean_infer_type(v_a_879_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
if (lean_obj_tag(v___x_880_) == 0)
{
lean_object* v_a_881_; lean_object* v___x_882_; 
v_a_881_ = lean_ctor_get(v___x_880_, 0);
lean_inc(v_a_881_);
lean_dec_ref_known(v___x_880_, 1);
v___x_882_ = l_Lean_Meta_letToHave(v_a_881_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_958_; 
v_a_883_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_958_ == 0)
{
v___x_885_ = v___x_882_;
v_isShared_886_ = v_isSharedCheck_958_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_dec(v___x_882_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_958_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_887_; lean_object* v_env_888_; uint8_t v_isUnsafe_889_; uint32_t v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; uint8_t v___y_894_; 
v___x_887_ = lean_st_ref_get(v___y_840_);
v_env_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc_ref(v_env_888_);
lean_dec(v___x_887_);
v_isUnsafe_889_ = lean_ctor_get_uint8(v_modifiers_870_, sizeof(void*)*3 + 4);
lean_inc(v_a_879_);
v___x_890_ = l_Lean_getMaxHeight(v_env_888_, v_a_879_);
lean_inc(v_levelParams_869_);
lean_inc(v___x_874_);
v___x_891_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_891_, 0, v___x_874_);
lean_ctor_set(v___x_891_, 1, v_levelParams_869_);
lean_ctor_set(v___x_891_, 2, v_a_883_);
v___x_892_ = lean_box(1);
if (v_isUnsafe_889_ == 0)
{
uint8_t v___x_956_; 
v___x_956_ = 1;
v___y_894_ = v___x_956_;
goto v___jp_893_;
}
else
{
uint8_t v___x_957_; 
v___x_957_ = 0;
v___y_894_ = v___x_957_;
goto v___jp_893_;
}
v___jp_893_:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_899_; 
v___x_895_ = lean_box(0);
lean_inc(v___x_874_);
v___x_896_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_896_, 0, v___x_874_);
lean_ctor_set(v___x_896_, 1, v___x_895_);
v___x_897_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_897_, 0, v___x_891_);
lean_ctor_set(v___x_897_, 1, v_a_879_);
lean_ctor_set(v___x_897_, 2, v___x_892_);
lean_ctor_set(v___x_897_, 3, v___x_896_);
lean_ctor_set_uint8(v___x_897_, sizeof(void*)*4, v___y_894_);
if (v_isShared_886_ == 0)
{
lean_ctor_set_tag(v___x_885_, 1);
lean_ctor_set(v___x_885_, 0, v___x_897_);
v___x_899_ = v___x_885_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_897_);
v___x_899_ = v_reuseFailAlloc_955_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
lean_object* v___x_900_; 
v___x_900_ = l_Lean_addDecl(v___x_899_, v_a_832_, v___y_839_, v___y_840_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v___x_901_; lean_object* v_env_902_; lean_object* v_nextMacroScope_903_; lean_object* v_ngen_904_; lean_object* v_auxDeclNGen_905_; lean_object* v_traceState_906_; lean_object* v_messages_907_; lean_object* v_infoState_908_; lean_object* v_snapshotTasks_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_945_; 
lean_dec_ref_known(v___x_900_, 1);
v___x_901_ = lean_st_ref_take(v___y_840_);
v_env_902_ = lean_ctor_get(v___x_901_, 0);
v_nextMacroScope_903_ = lean_ctor_get(v___x_901_, 1);
v_ngen_904_ = lean_ctor_get(v___x_901_, 2);
v_auxDeclNGen_905_ = lean_ctor_get(v___x_901_, 3);
v_traceState_906_ = lean_ctor_get(v___x_901_, 4);
v_messages_907_ = lean_ctor_get(v___x_901_, 6);
v_infoState_908_ = lean_ctor_get(v___x_901_, 7);
v_snapshotTasks_909_ = lean_ctor_get(v___x_901_, 8);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_945_ == 0)
{
lean_object* v_unused_946_; 
v_unused_946_ = lean_ctor_get(v___x_901_, 5);
lean_dec(v_unused_946_);
v___x_911_ = v___x_901_;
v_isShared_912_ = v_isSharedCheck_945_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_snapshotTasks_909_);
lean_inc(v_infoState_908_);
lean_inc(v_messages_907_);
lean_inc(v_traceState_906_);
lean_inc(v_auxDeclNGen_905_);
lean_inc(v_ngen_904_);
lean_inc(v_nextMacroScope_903_);
lean_inc(v_env_902_);
lean_dec(v___x_901_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_945_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_916_; 
lean_inc(v___x_874_);
v___x_913_ = l_Lean_setDefHeightOverride(v_env_902_, v___x_874_, v___x_890_);
v___x_914_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__2);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 5, v___x_914_);
lean_ctor_set(v___x_911_, 0, v___x_913_);
v___x_916_ = v___x_911_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v___x_913_);
lean_ctor_set(v_reuseFailAlloc_944_, 1, v_nextMacroScope_903_);
lean_ctor_set(v_reuseFailAlloc_944_, 2, v_ngen_904_);
lean_ctor_set(v_reuseFailAlloc_944_, 3, v_auxDeclNGen_905_);
lean_ctor_set(v_reuseFailAlloc_944_, 4, v_traceState_906_);
lean_ctor_set(v_reuseFailAlloc_944_, 5, v___x_914_);
lean_ctor_set(v_reuseFailAlloc_944_, 6, v_messages_907_);
lean_ctor_set(v_reuseFailAlloc_944_, 7, v_infoState_908_);
lean_ctor_set(v_reuseFailAlloc_944_, 8, v_snapshotTasks_909_);
v___x_916_ = v_reuseFailAlloc_944_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v_mctx_919_; lean_object* v_zetaDeltaFVarIds_920_; lean_object* v_postponed_921_; lean_object* v_diag_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_942_; 
v___x_917_ = lean_st_ref_put(v___y_840_, v___x_916_);
v___x_918_ = lean_st_ref_take(v___y_838_);
v_mctx_919_ = lean_ctor_get(v___x_918_, 0);
v_zetaDeltaFVarIds_920_ = lean_ctor_get(v___x_918_, 2);
v_postponed_921_ = lean_ctor_get(v___x_918_, 3);
v_diag_922_ = lean_ctor_get(v___x_918_, 4);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_942_ == 0)
{
lean_object* v_unused_943_; 
v_unused_943_ = lean_ctor_get(v___x_918_, 1);
lean_dec(v_unused_943_);
v___x_924_ = v___x_918_;
v_isShared_925_ = v_isSharedCheck_942_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_diag_922_);
lean_inc(v_postponed_921_);
lean_inc(v_zetaDeltaFVarIds_920_);
lean_inc(v_mctx_919_);
lean_dec(v___x_918_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_942_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_926_; lean_object* v___x_928_; 
v___x_926_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg___closed__3);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 1, v___x_926_);
v___x_928_ = v___x_924_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_mctx_919_);
lean_ctor_set(v_reuseFailAlloc_941_, 1, v___x_926_);
lean_ctor_set(v_reuseFailAlloc_941_, 2, v_zetaDeltaFVarIds_920_);
lean_ctor_set(v_reuseFailAlloc_941_, 3, v_postponed_921_);
lean_ctor_set(v_reuseFailAlloc_941_, 4, v_diag_922_);
v___x_928_ = v_reuseFailAlloc_941_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_929_ = lean_st_ref_put(v___y_838_, v___x_928_);
lean_inc(v___x_874_);
v___x_930_ = l_Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16(v___x_874_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v___x_931_; lean_object* v___x_932_; 
lean_dec_ref_known(v___x_930_, 1);
lean_inc(v___x_833_);
v___x_931_ = l_Lean_mkConst(v___x_874_, v___x_833_);
v___x_932_ = l_Lean_mkAppN(v___x_931_, v_xs_831_);
v_a_850_ = v___x_932_;
goto v___jp_849_;
}
else
{
lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_940_; 
lean_dec(v___x_874_);
lean_dec_ref(v_bs_x27_848_);
lean_dec(v___x_833_);
lean_dec_ref(v_xs_831_);
v_a_933_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_940_ == 0)
{
v___x_935_ = v___x_930_;
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___x_930_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_938_; 
if (v_isShared_936_ == 0)
{
v___x_938_ = v___x_935_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_a_933_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
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
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_954_; 
lean_dec(v___x_874_);
lean_dec_ref(v_bs_x27_848_);
lean_dec(v___x_833_);
lean_dec_ref(v_xs_831_);
v_a_947_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_954_ == 0)
{
v___x_949_ = v___x_900_;
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_900_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_947_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_879_);
lean_dec(v___x_874_);
v___y_857_ = v___x_882_;
goto v___jp_856_;
}
}
else
{
lean_dec(v_a_879_);
lean_dec(v___x_874_);
v___y_857_ = v___x_880_;
goto v___jp_856_;
}
}
else
{
lean_dec(v___x_874_);
v___y_857_ = v___x_878_;
goto v___jp_856_;
}
}
else
{
lean_dec(v___x_874_);
v___y_857_ = v___x_876_;
goto v___jp_856_;
}
v___jp_849_:
{
size_t v___x_851_; size_t v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_851_ = ((size_t)1ULL);
v___x_852_ = lean_usize_add(v_i_835_, v___x_851_);
v___x_853_ = l_unsafeCast___redArg(v_a_850_);
lean_dec_ref(v_a_850_);
v___x_854_ = lean_array_uset(v_bs_x27_848_, v_i_835_, v___x_853_);
v_i_835_ = v___x_852_;
v_bs_836_ = v___x_854_;
goto _start;
}
v___jp_856_:
{
if (lean_obj_tag(v___y_857_) == 0)
{
lean_object* v_a_858_; 
v_a_858_ = lean_ctor_get(v___y_857_, 0);
lean_inc(v_a_858_);
lean_dec_ref_known(v___y_857_, 1);
v_a_850_ = v_a_858_;
goto v___jp_849_;
}
else
{
lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_866_; 
lean_dec_ref(v_bs_x27_848_);
lean_dec(v___x_833_);
lean_dec_ref(v_xs_831_);
v_a_859_ = lean_ctor_get(v___y_857_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___y_857_);
if (v_isSharedCheck_866_ == 0)
{
v___x_861_ = v___y_857_;
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___y_857_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
if (v_isShared_862_ == 0)
{
v___x_864_ = v___x_861_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_a_859_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg___boxed(lean_object* v_preDefs_959_, lean_object* v_xs_960_, lean_object* v_a_961_, lean_object* v___x_962_, lean_object* v_sz_963_, lean_object* v_i_964_, lean_object* v_bs_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_){
_start:
{
uint8_t v_a_26217__boxed_971_; size_t v_sz_boxed_972_; size_t v_i_boxed_973_; lean_object* v_res_974_; 
v_a_26217__boxed_971_ = lean_unbox(v_a_961_);
v_sz_boxed_972_ = lean_unbox_usize(v_sz_963_);
lean_dec(v_sz_963_);
v_i_boxed_973_ = lean_unbox_usize(v_i_964_);
lean_dec(v_i_964_);
v_res_974_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg(v_preDefs_959_, v_xs_960_, v_a_26217__boxed_971_, v___x_962_, v_sz_boxed_972_, v_i_boxed_973_, v_bs_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_);
lean_dec(v___y_969_);
lean_dec_ref(v___y_968_);
lean_dec(v___y_967_);
lean_dec_ref(v___y_966_);
lean_dec_ref(v_preDefs_959_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17(lean_object* v_preDefs_975_, lean_object* v_xs_976_, uint8_t v_a_977_, lean_object* v___x_978_, lean_object* v_as_979_, size_t v_sz_980_, size_t v_i_981_, lean_object* v_bs_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_){
_start:
{
lean_object* v___x_988_; 
v___x_988_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg(v_preDefs_975_, v_xs_976_, v_a_977_, v___x_978_, v_sz_980_, v_i_981_, v_bs_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___boxed(lean_object* v_preDefs_989_, lean_object* v_xs_990_, lean_object* v_a_991_, lean_object* v___x_992_, lean_object* v_as_993_, lean_object* v_sz_994_, lean_object* v_i_995_, lean_object* v_bs_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
uint8_t v_a_26443__boxed_1002_; size_t v_sz_boxed_1003_; size_t v_i_boxed_1004_; lean_object* v_res_1005_; 
v_a_26443__boxed_1002_ = lean_unbox(v_a_991_);
v_sz_boxed_1003_ = lean_unbox_usize(v_sz_994_);
lean_dec(v_sz_994_);
v_i_boxed_1004_ = lean_unbox_usize(v_i_995_);
lean_dec(v_i_995_);
v_res_1005_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17(v_preDefs_989_, v_xs_990_, v_a_26443__boxed_1002_, v___x_992_, v_as_993_, v_sz_boxed_1003_, v_i_boxed_1004_, v_bs_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec_ref(v_as_993_);
lean_dec_ref(v_preDefs_989_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9(lean_object* v_as_1006_, lean_object* v_bs_1007_, lean_object* v_i_1008_, lean_object* v_cs_1009_){
_start:
{
lean_object* v___x_1010_; uint8_t v___x_1011_; 
v___x_1010_ = lean_array_get_size(v_as_1006_);
v___x_1011_ = lean_nat_dec_lt(v_i_1008_, v___x_1010_);
if (v___x_1011_ == 0)
{
lean_dec(v_i_1008_);
return v_cs_1009_;
}
else
{
lean_object* v___x_1012_; uint8_t v___x_1013_; 
v___x_1012_ = lean_array_get_size(v_bs_1007_);
v___x_1013_ = lean_nat_dec_lt(v_i_1008_, v___x_1012_);
if (v___x_1013_ == 0)
{
lean_dec(v_i_1008_);
return v_cs_1009_;
}
else
{
lean_object* v_a_1014_; lean_object* v_ref_1015_; uint8_t v_kind_1016_; lean_object* v_levelParams_1017_; lean_object* v_modifiers_1018_; lean_object* v_declName_1019_; lean_object* v_binders_1020_; lean_object* v_numSectionVars_1021_; lean_object* v_type_1022_; lean_object* v_termination_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1035_; 
v_a_1014_ = lean_array_fget(v_as_1006_, v_i_1008_);
v_ref_1015_ = lean_ctor_get(v_a_1014_, 0);
v_kind_1016_ = lean_ctor_get_uint8(v_a_1014_, sizeof(void*)*9);
v_levelParams_1017_ = lean_ctor_get(v_a_1014_, 1);
v_modifiers_1018_ = lean_ctor_get(v_a_1014_, 2);
v_declName_1019_ = lean_ctor_get(v_a_1014_, 3);
v_binders_1020_ = lean_ctor_get(v_a_1014_, 4);
v_numSectionVars_1021_ = lean_ctor_get(v_a_1014_, 5);
v_type_1022_ = lean_ctor_get(v_a_1014_, 6);
v_termination_1023_ = lean_ctor_get(v_a_1014_, 8);
v_isSharedCheck_1035_ = !lean_is_exclusive(v_a_1014_);
if (v_isSharedCheck_1035_ == 0)
{
lean_object* v_unused_1036_; 
v_unused_1036_ = lean_ctor_get(v_a_1014_, 7);
lean_dec(v_unused_1036_);
v___x_1025_ = v_a_1014_;
v_isShared_1026_ = v_isSharedCheck_1035_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_termination_1023_);
lean_inc(v_type_1022_);
lean_inc(v_numSectionVars_1021_);
lean_inc(v_binders_1020_);
lean_inc(v_declName_1019_);
lean_inc(v_modifiers_1018_);
lean_inc(v_levelParams_1017_);
lean_inc(v_ref_1015_);
lean_dec(v_a_1014_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1035_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v_b_1027_; lean_object* v___x_1029_; 
v_b_1027_ = lean_array_fget_borrowed(v_bs_1007_, v_i_1008_);
lean_inc(v_b_1027_);
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 7, v_b_1027_);
v___x_1029_ = v___x_1025_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_ref_1015_);
lean_ctor_set(v_reuseFailAlloc_1034_, 1, v_levelParams_1017_);
lean_ctor_set(v_reuseFailAlloc_1034_, 2, v_modifiers_1018_);
lean_ctor_set(v_reuseFailAlloc_1034_, 3, v_declName_1019_);
lean_ctor_set(v_reuseFailAlloc_1034_, 4, v_binders_1020_);
lean_ctor_set(v_reuseFailAlloc_1034_, 5, v_numSectionVars_1021_);
lean_ctor_set(v_reuseFailAlloc_1034_, 6, v_type_1022_);
lean_ctor_set(v_reuseFailAlloc_1034_, 7, v_b_1027_);
lean_ctor_set(v_reuseFailAlloc_1034_, 8, v_termination_1023_);
lean_ctor_set_uint8(v_reuseFailAlloc_1034_, sizeof(void*)*9, v_kind_1016_);
v___x_1029_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1030_ = lean_unsigned_to_nat(1u);
v___x_1031_ = lean_nat_add(v_i_1008_, v___x_1030_);
lean_dec(v_i_1008_);
v___x_1032_ = lean_array_push(v_cs_1009_, v___x_1029_);
v_i_1008_ = v___x_1031_;
v_cs_1009_ = v___x_1032_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___boxed(lean_object* v_as_1037_, lean_object* v_bs_1038_, lean_object* v_i_1039_, lean_object* v_cs_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9(v_as_1037_, v_bs_1038_, v_i_1039_, v_cs_1040_);
lean_dec_ref(v_bs_1038_);
lean_dec_ref(v_as_1037_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(lean_object* v_a_1042_, lean_object* v_a_1043_){
_start:
{
if (lean_obj_tag(v_a_1042_) == 0)
{
lean_object* v___x_1044_; 
v___x_1044_ = l_List_reverse___redArg(v_a_1043_);
return v___x_1044_;
}
else
{
lean_object* v_head_1045_; lean_object* v_tail_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1055_; 
v_head_1045_ = lean_ctor_get(v_a_1042_, 0);
v_tail_1046_ = lean_ctor_get(v_a_1042_, 1);
v_isSharedCheck_1055_ = !lean_is_exclusive(v_a_1042_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1048_ = v_a_1042_;
v_isShared_1049_ = v_isSharedCheck_1055_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_tail_1046_);
lean_inc(v_head_1045_);
lean_dec(v_a_1042_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1055_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1050_; lean_object* v___x_1052_; 
v___x_1050_ = l_Lean_MessageData_ofExpr(v_head_1045_);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 1, v_a_1043_);
lean_ctor_set(v___x_1048_, 0, v___x_1050_);
v___x_1052_ = v___x_1048_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v___x_1050_);
lean_ctor_set(v_reuseFailAlloc_1054_, 1, v_a_1043_);
v___x_1052_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
v_a_1042_ = v_tail_1046_;
v_a_1043_ = v___x_1052_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(lean_object* v___x_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_funTypes_1059_, size_t v_sz_1060_, size_t v_i_1061_, lean_object* v_bs_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
uint8_t v___x_1068_; 
v___x_1068_ = lean_usize_dec_lt(v_i_1061_, v_sz_1060_);
if (v___x_1068_ == 0)
{
lean_object* v___x_1069_; lean_object* v___x_1070_; 
lean_dec_ref(v_funTypes_1059_);
lean_dec_ref(v_a_1058_);
lean_dec_ref(v_a_1057_);
lean_dec_ref(v___x_1056_);
v___x_1069_ = l_unsafeCast___redArg(v_bs_1062_);
lean_dec_ref(v_bs_1062_);
v___x_1070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1069_);
return v___x_1070_;
}
else
{
lean_object* v_v_1071_; lean_object* v___x_1072_; lean_object* v_fst_1073_; lean_object* v_snd_1074_; lean_object* v___x_1075_; lean_object* v_bs_x27_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v_v_1071_ = lean_array_uget_borrowed(v_bs_1062_, v_i_1061_);
v___x_1072_ = l_unsafeCast___redArg(v_v_1071_);
v_fst_1073_ = lean_ctor_get(v___x_1072_, 0);
lean_inc(v_fst_1073_);
v_snd_1074_ = lean_ctor_get(v___x_1072_, 1);
lean_inc(v_snd_1074_);
lean_dec(v___x_1072_);
v___x_1075_ = lean_unsigned_to_nat(0u);
v_bs_x27_1076_ = lean_array_uset(v_bs_1062_, v_i_1061_, v___x_1075_);
v___x_1077_ = lean_usize_to_nat(v_i_1061_);
lean_inc_ref(v_funTypes_1059_);
lean_inc_ref(v_a_1058_);
lean_inc_ref(v_a_1057_);
lean_inc_ref(v___x_1056_);
v___x_1078_ = l_Lean_Elab_Structural_mkBRecOnApp(v___x_1056_, v___x_1077_, v_a_1057_, v_a_1058_, v_funTypes_1059_, v_fst_1073_, v_snd_1074_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v_a_1079_; size_t v___x_1080_; size_t v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v_a_1079_ = lean_ctor_get(v___x_1078_, 0);
lean_inc(v_a_1079_);
lean_dec_ref_known(v___x_1078_, 1);
v___x_1080_ = ((size_t)1ULL);
v___x_1081_ = lean_usize_add(v_i_1061_, v___x_1080_);
v___x_1082_ = l_unsafeCast___redArg(v_a_1079_);
lean_dec(v_a_1079_);
v___x_1083_ = lean_array_uset(v_bs_x27_1076_, v_i_1061_, v___x_1082_);
v_i_1061_ = v___x_1081_;
v_bs_1062_ = v___x_1083_;
goto _start;
}
else
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1092_; 
lean_dec_ref(v_bs_x27_1076_);
lean_dec_ref(v_funTypes_1059_);
lean_dec_ref(v_a_1058_);
lean_dec_ref(v_a_1057_);
lean_dec_ref(v___x_1056_);
v_a_1085_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1087_ = v___x_1078_;
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___x_1078_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1090_; 
if (v_isShared_1088_ == 0)
{
v___x_1090_ = v___x_1087_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_a_1085_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___boxed(lean_object* v___x_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_funTypes_1096_, lean_object* v_sz_1097_, lean_object* v_i_1098_, lean_object* v_bs_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_){
_start:
{
size_t v_sz_boxed_1105_; size_t v_i_boxed_1106_; lean_object* v_res_1107_; 
v_sz_boxed_1105_ = lean_unbox_usize(v_sz_1097_);
lean_dec(v_sz_1097_);
v_i_boxed_1106_ = lean_unbox_usize(v_i_1098_);
lean_dec(v_i_1098_);
v_res_1107_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(v___x_1093_, v_a_1094_, v_a_1095_, v_funTypes_1096_, v_sz_boxed_1105_, v_i_boxed_1106_, v_bs_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec(v___y_1101_);
lean_dec_ref(v___y_1100_);
return v_res_1107_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7(lean_object* v___x_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_funTypes_1111_, lean_object* v_as_1112_, size_t v_sz_1113_, size_t v_i_1114_, lean_object* v_bs_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v___x_1121_; 
v___x_1121_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(v___x_1108_, v_a_1109_, v_a_1110_, v_funTypes_1111_, v_sz_1113_, v_i_1114_, v_bs_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___boxed(lean_object* v___x_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_funTypes_1125_, lean_object* v_as_1126_, lean_object* v_sz_1127_, lean_object* v_i_1128_, lean_object* v_bs_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_){
_start:
{
size_t v_sz_boxed_1135_; size_t v_i_boxed_1136_; lean_object* v_res_1137_; 
v_sz_boxed_1135_ = lean_unbox_usize(v_sz_1127_);
lean_dec(v_sz_1127_);
v_i_boxed_1136_ = lean_unbox_usize(v_i_1128_);
lean_dec(v_i_1128_);
v_res_1137_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7(v___x_1122_, v_a_1123_, v_a_1124_, v_funTypes_1125_, v_as_1126_, v_sz_boxed_1135_, v_i_boxed_1136_, v_bs_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_);
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
lean_dec_ref(v_as_1126_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(lean_object* v_a_1138_, lean_object* v_a_1139_){
_start:
{
if (lean_obj_tag(v_a_1138_) == 0)
{
lean_object* v___x_1140_; 
v___x_1140_ = l_List_reverse___redArg(v_a_1139_);
return v___x_1140_;
}
else
{
lean_object* v_head_1141_; lean_object* v_tail_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1151_; 
v_head_1141_ = lean_ctor_get(v_a_1138_, 0);
v_tail_1142_ = lean_ctor_get(v_a_1138_, 1);
v_isSharedCheck_1151_ = !lean_is_exclusive(v_a_1138_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1144_ = v_a_1138_;
v_isShared_1145_ = v_isSharedCheck_1151_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_tail_1142_);
lean_inc(v_head_1141_);
lean_dec(v_a_1138_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1151_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1146_; lean_object* v___x_1148_; 
v___x_1146_ = l_Lean_mkLevelParam(v_head_1141_);
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 1, v_a_1139_);
lean_ctor_set(v___x_1144_, 0, v___x_1146_);
v___x_1148_ = v___x_1144_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v___x_1146_);
lean_ctor_set(v_reuseFailAlloc_1150_, 1, v_a_1139_);
v___x_1148_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
v_a_1138_ = v_tail_1142_;
v_a_1139_ = v___x_1148_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__0(void){
_start:
{
lean_object* v___x_1152_; 
v___x_1152_ = l_instMonadEIO___redArg();
return v___x_1152_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg(lean_object* v_msg_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v_toApplicative_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1226_; 
v___x_1163_ = lean_obj_once(&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__0, &l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__0_once, _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__0);
v___x_1164_ = l_StateRefT_x27_instMonad___redArg(v___x_1163_);
v_toApplicative_1165_ = lean_ctor_get(v___x_1164_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1226_ == 0)
{
lean_object* v_unused_1227_; 
v_unused_1227_ = lean_ctor_get(v___x_1164_, 1);
lean_dec(v_unused_1227_);
v___x_1167_ = v___x_1164_;
v_isShared_1168_ = v_isSharedCheck_1226_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_toApplicative_1165_);
lean_dec(v___x_1164_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1226_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v_toFunctor_1169_; lean_object* v_toSeq_1170_; lean_object* v_toSeqLeft_1171_; lean_object* v_toSeqRight_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1224_; 
v_toFunctor_1169_ = lean_ctor_get(v_toApplicative_1165_, 0);
v_toSeq_1170_ = lean_ctor_get(v_toApplicative_1165_, 2);
v_toSeqLeft_1171_ = lean_ctor_get(v_toApplicative_1165_, 3);
v_toSeqRight_1172_ = lean_ctor_get(v_toApplicative_1165_, 4);
v_isSharedCheck_1224_ = !lean_is_exclusive(v_toApplicative_1165_);
if (v_isSharedCheck_1224_ == 0)
{
lean_object* v_unused_1225_; 
v_unused_1225_ = lean_ctor_get(v_toApplicative_1165_, 1);
lean_dec(v_unused_1225_);
v___x_1174_ = v_toApplicative_1165_;
v_isShared_1175_ = v_isSharedCheck_1224_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_toSeqRight_1172_);
lean_inc(v_toSeqLeft_1171_);
lean_inc(v_toSeq_1170_);
lean_inc(v_toFunctor_1169_);
lean_dec(v_toApplicative_1165_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1224_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___f_1176_; lean_object* v___f_1177_; lean_object* v___f_1178_; lean_object* v___f_1179_; lean_object* v___x_1180_; lean_object* v___f_1181_; lean_object* v___f_1182_; lean_object* v___f_1183_; lean_object* v___x_1185_; 
v___f_1176_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__1));
v___f_1177_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__2));
lean_inc_ref(v_toFunctor_1169_);
v___f_1178_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1178_, 0, v_toFunctor_1169_);
v___f_1179_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1179_, 0, v_toFunctor_1169_);
v___x_1180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1180_, 0, v___f_1178_);
lean_ctor_set(v___x_1180_, 1, v___f_1179_);
v___f_1181_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1181_, 0, v_toSeqRight_1172_);
v___f_1182_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1182_, 0, v_toSeqLeft_1171_);
v___f_1183_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1183_, 0, v_toSeq_1170_);
if (v_isShared_1175_ == 0)
{
lean_ctor_set(v___x_1174_, 4, v___f_1181_);
lean_ctor_set(v___x_1174_, 3, v___f_1182_);
lean_ctor_set(v___x_1174_, 2, v___f_1183_);
lean_ctor_set(v___x_1174_, 1, v___f_1176_);
lean_ctor_set(v___x_1174_, 0, v___x_1180_);
v___x_1185_ = v___x_1174_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v___x_1180_);
lean_ctor_set(v_reuseFailAlloc_1223_, 1, v___f_1176_);
lean_ctor_set(v_reuseFailAlloc_1223_, 2, v___f_1183_);
lean_ctor_set(v_reuseFailAlloc_1223_, 3, v___f_1182_);
lean_ctor_set(v_reuseFailAlloc_1223_, 4, v___f_1181_);
v___x_1185_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
lean_object* v___x_1187_; 
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 1, v___f_1177_);
lean_ctor_set(v___x_1167_, 0, v___x_1185_);
v___x_1187_ = v___x_1167_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v___x_1185_);
lean_ctor_set(v_reuseFailAlloc_1222_, 1, v___f_1177_);
v___x_1187_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
lean_object* v___x_1188_; lean_object* v_toApplicative_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1220_; 
v___x_1188_ = l_StateRefT_x27_instMonad___redArg(v___x_1187_);
v_toApplicative_1189_ = lean_ctor_get(v___x_1188_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1188_);
if (v_isSharedCheck_1220_ == 0)
{
lean_object* v_unused_1221_; 
v_unused_1221_ = lean_ctor_get(v___x_1188_, 1);
lean_dec(v_unused_1221_);
v___x_1191_ = v___x_1188_;
v_isShared_1192_ = v_isSharedCheck_1220_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_toApplicative_1189_);
lean_dec(v___x_1188_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1220_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v_toFunctor_1193_; lean_object* v_toSeq_1194_; lean_object* v_toSeqLeft_1195_; lean_object* v_toSeqRight_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1218_; 
v_toFunctor_1193_ = lean_ctor_get(v_toApplicative_1189_, 0);
v_toSeq_1194_ = lean_ctor_get(v_toApplicative_1189_, 2);
v_toSeqLeft_1195_ = lean_ctor_get(v_toApplicative_1189_, 3);
v_toSeqRight_1196_ = lean_ctor_get(v_toApplicative_1189_, 4);
v_isSharedCheck_1218_ = !lean_is_exclusive(v_toApplicative_1189_);
if (v_isSharedCheck_1218_ == 0)
{
lean_object* v_unused_1219_; 
v_unused_1219_ = lean_ctor_get(v_toApplicative_1189_, 1);
lean_dec(v_unused_1219_);
v___x_1198_ = v_toApplicative_1189_;
v_isShared_1199_ = v_isSharedCheck_1218_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_toSeqRight_1196_);
lean_inc(v_toSeqLeft_1195_);
lean_inc(v_toSeq_1194_);
lean_inc(v_toFunctor_1193_);
lean_dec(v_toApplicative_1189_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1218_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___f_1200_; lean_object* v___f_1201_; lean_object* v___f_1202_; lean_object* v___f_1203_; lean_object* v___x_1204_; lean_object* v___f_1205_; lean_object* v___f_1206_; lean_object* v___f_1207_; lean_object* v___x_1209_; 
v___f_1200_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__3));
v___f_1201_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___closed__4));
lean_inc_ref(v_toFunctor_1193_);
v___f_1202_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1202_, 0, v_toFunctor_1193_);
v___f_1203_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1203_, 0, v_toFunctor_1193_);
v___x_1204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1204_, 0, v___f_1202_);
lean_ctor_set(v___x_1204_, 1, v___f_1203_);
v___f_1205_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1205_, 0, v_toSeqRight_1196_);
v___f_1206_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1206_, 0, v_toSeqLeft_1195_);
v___f_1207_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1207_, 0, v_toSeq_1194_);
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 4, v___f_1205_);
lean_ctor_set(v___x_1198_, 3, v___f_1206_);
lean_ctor_set(v___x_1198_, 2, v___f_1207_);
lean_ctor_set(v___x_1198_, 1, v___f_1200_);
lean_ctor_set(v___x_1198_, 0, v___x_1204_);
v___x_1209_ = v___x_1198_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v___x_1204_);
lean_ctor_set(v_reuseFailAlloc_1217_, 1, v___f_1200_);
lean_ctor_set(v_reuseFailAlloc_1217_, 2, v___f_1207_);
lean_ctor_set(v_reuseFailAlloc_1217_, 3, v___f_1206_);
lean_ctor_set(v_reuseFailAlloc_1217_, 4, v___f_1205_);
v___x_1209_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1211_; 
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v___f_1201_);
lean_ctor_set(v___x_1191_, 0, v___x_1209_);
v___x_1211_ = v___x_1191_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v___x_1209_);
lean_ctor_set(v_reuseFailAlloc_1216_, 1, v___f_1201_);
v___x_1211_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_21828__overap_1214_; lean_object* v___x_1215_; 
v___x_1212_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0);
v___x_1213_ = l_instInhabitedOfMonad___redArg(v___x_1211_, v___x_1212_);
v___x_21828__overap_1214_ = lean_panic_fn_borrowed(v___x_1213_, v_msg_1157_);
lean_dec(v___x_1213_);
lean_inc(v___y_1161_);
lean_inc_ref(v___y_1160_);
lean_inc(v___y_1159_);
lean_inc_ref(v___y_1158_);
v___x_1215_ = lean_apply_5(v___x_21828__overap_1214_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, lean_box(0));
return v___x_1215_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg___boxed(lean_object* v_msg_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg(v_msg_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
lean_dec(v___y_1232_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec_ref(v___y_1229_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__13(lean_object* v_xs_1235_, size_t v_sz_1236_, size_t v_i_1237_, lean_object* v_bs_1238_){
_start:
{
uint8_t v___x_1239_; 
v___x_1239_ = lean_usize_dec_lt(v_i_1237_, v_sz_1236_);
if (v___x_1239_ == 0)
{
lean_object* v___x_1240_; 
v___x_1240_ = l_unsafeCast___redArg(v_bs_1238_);
lean_dec_ref(v_bs_1238_);
return v___x_1240_;
}
else
{
lean_object* v___x_1241_; lean_object* v_v_1242_; lean_object* v___x_1243_; lean_object* v_bs_x27_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; size_t v___x_1247_; size_t v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1241_ = l_Lean_instInhabitedExpr;
v_v_1242_ = lean_array_uget(v_bs_1238_, v_i_1237_);
v___x_1243_ = lean_unsigned_to_nat(0u);
v_bs_x27_1244_ = lean_array_uset(v_bs_1238_, v_i_1237_, v___x_1243_);
v___x_1245_ = l_unsafeCast___redArg(v_v_1242_);
lean_dec(v_v_1242_);
v___x_1246_ = lean_array_get_borrowed(v___x_1241_, v_xs_1235_, v___x_1245_);
lean_dec(v___x_1245_);
v___x_1247_ = ((size_t)1ULL);
v___x_1248_ = lean_usize_add(v_i_1237_, v___x_1247_);
v___x_1249_ = l_unsafeCast___redArg(v___x_1246_);
v___x_1250_ = lean_array_uset(v_bs_x27_1244_, v_i_1237_, v___x_1249_);
v_i_1237_ = v___x_1248_;
v_bs_1238_ = v___x_1250_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__13___boxed(lean_object* v_xs_1252_, lean_object* v_sz_1253_, lean_object* v_i_1254_, lean_object* v_bs_1255_){
_start:
{
size_t v_sz_boxed_1256_; size_t v_i_boxed_1257_; lean_object* v_res_1258_; 
v_sz_boxed_1256_ = lean_unbox_usize(v_sz_1253_);
lean_dec(v_sz_1253_);
v_i_boxed_1257_ = lean_unbox_usize(v_i_1254_);
lean_dec(v_i_1254_);
v_res_1258_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__13(v_xs_1252_, v_sz_boxed_1256_, v_i_boxed_1257_, v_bs_1255_);
lean_dec_ref(v_xs_1252_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__15___redArg(lean_object* v_xs_1259_, lean_object* v_f_1260_, lean_object* v_as_1261_, lean_object* v_bs_1262_, lean_object* v_i_1263_, lean_object* v_cs_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v___x_1270_; uint8_t v___x_1271_; 
v___x_1270_ = lean_array_get_size(v_as_1261_);
v___x_1271_ = lean_nat_dec_lt(v_i_1263_, v___x_1270_);
if (v___x_1271_ == 0)
{
lean_object* v___x_1272_; 
lean_dec(v_i_1263_);
lean_dec_ref(v_f_1260_);
v___x_1272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1272_, 0, v_cs_1264_);
return v___x_1272_;
}
else
{
lean_object* v___x_1273_; uint8_t v___x_1274_; 
v___x_1273_ = lean_array_get_size(v_bs_1262_);
v___x_1274_ = lean_nat_dec_lt(v_i_1263_, v___x_1273_);
if (v___x_1274_ == 0)
{
lean_object* v___x_1275_; 
lean_dec(v_i_1263_);
lean_dec_ref(v_f_1260_);
v___x_1275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1275_, 0, v_cs_1264_);
return v___x_1275_;
}
else
{
lean_object* v_a_1276_; lean_object* v_b_1277_; size_t v_sz_1278_; size_t v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v_a_1276_ = lean_array_fget_borrowed(v_as_1261_, v_i_1263_);
v_b_1277_ = lean_array_fget_borrowed(v_bs_1262_, v_i_1263_);
v_sz_1278_ = lean_array_size(v_b_1277_);
v___x_1279_ = ((size_t)0ULL);
v___x_1280_ = l_unsafeCast___redArg(v_b_1277_);
v___x_1281_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__13(v_xs_1259_, v_sz_1278_, v___x_1279_, v___x_1280_);
v___x_1282_ = l_unsafeCast___redArg(v___x_1281_);
lean_dec_ref(v___x_1281_);
lean_inc_ref(v_f_1260_);
lean_inc(v___y_1268_);
lean_inc_ref(v___y_1267_);
lean_inc(v___y_1266_);
lean_inc_ref(v___y_1265_);
lean_inc(v_a_1276_);
v___x_1283_ = lean_apply_7(v_f_1260_, v_a_1276_, v___x_1282_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_, lean_box(0));
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v_a_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v_a_1284_ = lean_ctor_get(v___x_1283_, 0);
lean_inc(v_a_1284_);
lean_dec_ref_known(v___x_1283_, 1);
v___x_1285_ = lean_unsigned_to_nat(1u);
v___x_1286_ = lean_nat_add(v_i_1263_, v___x_1285_);
lean_dec(v_i_1263_);
v___x_1287_ = lean_array_push(v_cs_1264_, v_a_1284_);
v_i_1263_ = v___x_1286_;
v_cs_1264_ = v___x_1287_;
goto _start;
}
else
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1296_; 
lean_dec_ref(v_cs_1264_);
lean_dec(v_i_1263_);
lean_dec_ref(v_f_1260_);
v_a_1289_ = lean_ctor_get(v___x_1283_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1291_ = v___x_1283_;
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v___x_1283_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___x_1294_; 
if (v_isShared_1292_ == 0)
{
v___x_1294_ = v___x_1291_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v_a_1289_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__15___redArg___boxed(lean_object* v_xs_1297_, lean_object* v_f_1298_, lean_object* v_as_1299_, lean_object* v_bs_1300_, lean_object* v_i_1301_, lean_object* v_cs_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__15___redArg(v_xs_1297_, v_f_1298_, v_as_1299_, v_bs_1300_, v_i_1301_, v_cs_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec_ref(v_bs_1300_);
lean_dec_ref(v_as_1299_);
lean_dec_ref(v_xs_1297_);
return v_res_1308_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1312_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__2));
v___x_1313_ = lean_unsigned_to_nat(2u);
v___x_1314_ = lean_unsigned_to_nat(73u);
v___x_1315_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__1));
v___x_1316_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__0));
v___x_1317_ = l_mkPanicMessageWithDecl(v___x_1316_, v___x_1315_, v___x_1314_, v___x_1313_, v___x_1312_);
return v___x_1317_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1319_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__4));
v___x_1320_ = lean_unsigned_to_nat(2u);
v___x_1321_ = lean_unsigned_to_nat(74u);
v___x_1322_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__1));
v___x_1323_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__0));
v___x_1324_ = l_mkPanicMessageWithDecl(v___x_1323_, v___x_1322_, v___x_1321_, v___x_1320_, v___x_1319_);
return v___x_1324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg(lean_object* v_f_1327_, lean_object* v_positions_1328_, lean_object* v_ys_1329_, lean_object* v_xs_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; uint8_t v___x_1338_; 
v___x_1336_ = lean_array_get_size(v_positions_1328_);
v___x_1337_ = lean_array_get_size(v_ys_1329_);
v___x_1338_ = lean_nat_dec_eq(v___x_1336_, v___x_1337_);
if (v___x_1338_ == 0)
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
lean_dec_ref(v_f_1327_);
v___x_1339_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__3, &l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__3_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__3);
v___x_1340_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg(v___x_1339_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_);
return v___x_1340_;
}
else
{
lean_object* v___x_1341_; lean_object* v___x_1342_; uint8_t v___x_1343_; 
v___x_1341_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_1328_);
v___x_1342_ = lean_array_get_size(v_xs_1330_);
v___x_1343_ = lean_nat_dec_eq(v___x_1341_, v___x_1342_);
lean_dec(v___x_1341_);
if (v___x_1343_ == 0)
{
lean_object* v___x_1344_; lean_object* v___x_1345_; 
lean_dec_ref(v_f_1327_);
v___x_1344_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__5, &l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__5_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__5);
v___x_1345_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg(v___x_1344_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_);
return v___x_1345_;
}
else
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1346_ = lean_unsigned_to_nat(0u);
v___x_1347_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__6));
v___x_1348_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__15___redArg(v_xs_1330_, v_f_1327_, v_ys_1329_, v_positions_1328_, v___x_1346_, v___x_1347_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_);
return v___x_1348_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___boxed(lean_object* v_f_1349_, lean_object* v_positions_1350_, lean_object* v_ys_1351_, lean_object* v_xs_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg(v_f_1349_, v_positions_1350_, v_ys_1351_, v_xs_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec_ref(v_xs_1352_);
lean_dec_ref(v_ys_1351_);
lean_dec_ref(v_positions_1350_);
return v_res_1358_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__2(void){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1362_ = lean_box(0);
v___x_1363_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__1));
v___x_1364_ = l_Lean_Expr_const___override(v___x_1363_, v___x_1362_);
return v___x_1364_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__4(void){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1366_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__3));
v___x_1367_ = l_Lean_stringToMessageData(v___x_1366_);
return v___x_1367_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__6(void){
_start:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__5));
v___x_1370_ = l_Lean_stringToMessageData(v___x_1369_);
return v___x_1370_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__8(void){
_start:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; 
v___x_1372_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__7));
v___x_1373_ = l_Lean_stringToMessageData(v___x_1372_);
return v___x_1373_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__10(void){
_start:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__9));
v___x_1376_ = l_Lean_stringToMessageData(v___x_1375_);
return v___x_1376_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__12(void){
_start:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; 
v___x_1378_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__11));
v___x_1379_ = l_Lean_stringToMessageData(v___x_1378_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2(lean_object* v_recArgInfos_1380_, lean_object* v_a_1381_, lean_object* v___x_1382_, size_t v___x_1383_, lean_object* v_fixedParamPerms_1384_, lean_object* v_xs_1385_, lean_object* v___x_1386_, lean_object* v_preDefs_1387_, lean_object* v_numIndices_1388_, lean_object* v___f_1389_, lean_object* v___x_1390_, uint8_t v_a_1391_, lean_object* v___x_1392_, lean_object* v___f_1393_, lean_object* v_funTypes_1394_, lean_object* v_motives_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_){
_start:
{
lean_object* v___y_1402_; lean_object* v___y_1403_; lean_object* v___y_1404_; lean_object* v___y_1405_; lean_object* v___y_1406_; lean_object* v___y_1407_; lean_object* v___y_1452_; lean_object* v_FArgs_1453_; lean_object* v___y_1454_; lean_object* v___y_1455_; lean_object* v___y_1456_; lean_object* v___y_1457_; lean_object* v___y_1509_; lean_object* v___y_1510_; lean_object* v___y_1511_; lean_object* v___y_1512_; lean_object* v___y_1513_; lean_object* v___y_1514_; lean_object* v___y_1537_; lean_object* v___y_1538_; lean_object* v___y_1539_; lean_object* v___y_1540_; lean_object* v___y_1541_; lean_object* v___y_1542_; lean_object* v___x_1633_; 
lean_inc_ref(v___f_1393_);
lean_inc(v___y_1399_);
lean_inc_ref(v___y_1398_);
lean_inc(v___y_1397_);
lean_inc_ref(v___y_1396_);
v___x_1633_ = lean_apply_5(v___f_1393_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, lean_box(0));
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_object* v_a_1634_; uint8_t v___x_1635_; 
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
lean_inc(v_a_1634_);
lean_dec_ref_known(v___x_1633_, 1);
v___x_1635_ = lean_unbox(v_a_1634_);
lean_dec(v_a_1634_);
if (v___x_1635_ == 0)
{
goto v___jp_1586_;
}
else
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___x_1636_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__10);
lean_inc_ref(v_funTypes_1394_);
v___x_1637_ = lean_array_to_list(v_funTypes_1394_);
v___x_1638_ = lean_box(0);
v___x_1639_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(v___x_1637_, v___x_1638_);
v___x_1640_ = l_Lean_MessageData_ofList(v___x_1639_);
v___x_1641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1636_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
v___x_1642_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__12, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__12_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__12);
v___x_1643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1641_);
lean_ctor_set(v___x_1643_, 1, v___x_1642_);
lean_inc_ref(v_motives_1395_);
v___x_1644_ = lean_array_to_list(v_motives_1395_);
v___x_1645_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(v___x_1644_, v___x_1638_);
v___x_1646_ = l_Lean_MessageData_ofList(v___x_1645_);
v___x_1647_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1643_);
lean_ctor_set(v___x_1647_, 1, v___x_1646_);
lean_inc(v___x_1390_);
v___x_1648_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_1390_, v___x_1647_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_dec_ref_known(v___x_1648_, 1);
goto v___jp_1586_;
}
else
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1656_; 
lean_dec_ref(v_motives_1395_);
lean_dec_ref(v_funTypes_1394_);
lean_dec_ref(v___f_1393_);
lean_dec(v___x_1390_);
lean_dec_ref(v___f_1389_);
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
lean_dec_ref(v_xs_1385_);
lean_dec_ref(v_fixedParamPerms_1384_);
lean_dec_ref(v___x_1382_);
lean_dec_ref(v_a_1381_);
lean_dec_ref(v_recArgInfos_1380_);
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1651_ = v___x_1648_;
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1648_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1654_; 
if (v_isShared_1652_ == 0)
{
v___x_1654_ = v___x_1651_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_a_1649_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
}
}
else
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1664_; 
lean_dec_ref(v_motives_1395_);
lean_dec_ref(v_funTypes_1394_);
lean_dec_ref(v___f_1393_);
lean_dec(v___x_1390_);
lean_dec_ref(v___f_1389_);
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
lean_dec_ref(v_xs_1385_);
lean_dec_ref(v_fixedParamPerms_1384_);
lean_dec_ref(v___x_1382_);
lean_dec_ref(v_a_1381_);
lean_dec_ref(v_recArgInfos_1380_);
v_a_1657_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1659_ = v___x_1633_;
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v___x_1633_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1662_; 
if (v_isShared_1660_ == 0)
{
v___x_1662_ = v___x_1659_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_a_1657_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
v___jp_1401_:
{
lean_object* v___x_1408_; size_t v_sz_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_24918__overap_1414_; lean_object* v___x_1415_; 
v___x_1408_ = l_Array_zip___redArg(v_recArgInfos_1380_, v_a_1381_);
lean_dec_ref(v_recArgInfos_1380_);
v_sz_1409_ = lean_array_size(v___x_1408_);
v___x_1410_ = l_unsafeCast___redArg(v___x_1408_);
v___x_1411_ = lean_box_usize(v_sz_1409_);
v___x_1412_ = lean_box_usize(v___x_1383_);
v___x_1413_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___boxed), 13, 8);
lean_closure_set(v___x_1413_, 0, v___x_1382_);
lean_closure_set(v___x_1413_, 1, v___y_1403_);
lean_closure_set(v___x_1413_, 2, v___y_1402_);
lean_closure_set(v___x_1413_, 3, v_funTypes_1394_);
lean_closure_set(v___x_1413_, 4, v___x_1408_);
lean_closure_set(v___x_1413_, 5, v___x_1411_);
lean_closure_set(v___x_1413_, 6, v___x_1412_);
lean_closure_set(v___x_1413_, 7, v___x_1410_);
v___x_24918__overap_1414_ = l_unsafeCast___redArg(v___x_1413_);
lean_dec_ref(v___x_1413_);
lean_inc(v___y_1407_);
lean_inc_ref(v___y_1406_);
lean_inc(v___y_1405_);
lean_inc_ref(v___y_1404_);
v___x_1415_ = lean_apply_5(v___x_24918__overap_1414_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, lean_box(0));
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_object* v_a_1416_; lean_object* v___x_1417_; size_t v_sz_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_24924__overap_1423_; lean_object* v___x_1424_; 
v_a_1416_ = lean_ctor_get(v___x_1415_, 0);
lean_inc(v_a_1416_);
lean_dec_ref_known(v___x_1415_, 1);
v___x_1417_ = l_Array_zip___redArg(v_a_1381_, v_a_1416_);
lean_dec(v_a_1416_);
lean_dec_ref(v_a_1381_);
v_sz_1418_ = lean_array_size(v___x_1417_);
v___x_1419_ = l_unsafeCast___redArg(v___x_1417_);
v___x_1420_ = lean_box_usize(v_sz_1418_);
v___x_1421_ = lean_box_usize(v___x_1383_);
v___x_1422_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___boxed), 11, 6);
lean_closure_set(v___x_1422_, 0, v_fixedParamPerms_1384_);
lean_closure_set(v___x_1422_, 1, v_xs_1385_);
lean_closure_set(v___x_1422_, 2, v___x_1417_);
lean_closure_set(v___x_1422_, 3, v___x_1420_);
lean_closure_set(v___x_1422_, 4, v___x_1421_);
lean_closure_set(v___x_1422_, 5, v___x_1419_);
v___x_24924__overap_1423_ = l_unsafeCast___redArg(v___x_1422_);
lean_dec_ref(v___x_1422_);
lean_inc(v___y_1407_);
lean_inc_ref(v___y_1406_);
lean_inc(v___y_1405_);
lean_inc_ref(v___y_1404_);
v___x_1424_ = lean_apply_5(v___x_24924__overap_1423_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, lean_box(0));
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1434_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1427_ = v___x_1424_;
v_isShared_1428_ = v_isSharedCheck_1434_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1424_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1434_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1432_; 
v___x_1429_ = lean_mk_empty_array_with_capacity(v___x_1386_);
v___x_1430_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9(v_preDefs_1387_, v_a_1425_, v___x_1386_, v___x_1429_);
lean_dec(v_a_1425_);
lean_dec_ref(v_preDefs_1387_);
if (v_isShared_1428_ == 0)
{
lean_ctor_set(v___x_1427_, 0, v___x_1430_);
v___x_1432_ = v___x_1427_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v___x_1430_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
else
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
v_a_1435_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1437_ = v___x_1424_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1424_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
if (v_isShared_1438_ == 0)
{
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_a_1435_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
}
else
{
lean_object* v_a_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1450_; 
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
lean_dec_ref(v_xs_1385_);
lean_dec_ref(v_fixedParamPerms_1384_);
lean_dec_ref(v_a_1381_);
v_a_1443_ = lean_ctor_get(v___x_1415_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1445_ = v___x_1415_;
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_a_1443_);
lean_dec(v___x_1415_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1448_; 
if (v_isShared_1446_ == 0)
{
v___x_1448_ = v___x_1445_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_a_1443_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
}
v___jp_1451_:
{
lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
lean_inc_ref(v___y_1452_);
lean_inc(v___x_1386_);
v___x_1458_ = lean_apply_1(v___y_1452_, v___x_1386_);
v___x_1459_ = lean_unsigned_to_nat(1u);
v___x_1460_ = lean_nat_add(v_numIndices_1388_, v___x_1459_);
v___x_1461_ = lean_box(0);
v___x_1462_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__2);
v___x_1463_ = lean_mk_array(v___x_1460_, v___x_1462_);
v___x_1464_ = l_Lean_mkAppN(v___x_1458_, v___x_1463_);
lean_dec_ref(v___x_1463_);
v___x_1465_ = lean_array_get_size(v___x_1382_);
v___x_1466_ = l_Lean_Meta_inferArgumentTypesN(v___x_1465_, v___x_1464_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_object* v_a_1467_; lean_object* v___x_1468_; 
v_a_1467_ = lean_ctor_get(v___x_1466_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v___x_1466_, 1);
v___x_1468_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg(v___f_1389_, v___x_1382_, v_a_1467_, v_FArgs_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
lean_dec_ref(v_FArgs_1453_);
lean_dec(v_a_1467_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_toCold_1469_; lean_object* v_options_1470_; uint8_t v_hasTrace_1471_; 
v_toCold_1469_ = lean_ctor_get(v___y_1456_, 0);
v_options_1470_ = lean_ctor_get(v_toCold_1469_, 2);
v_hasTrace_1471_ = lean_ctor_get_uint8(v_options_1470_, sizeof(void*)*1);
if (v_hasTrace_1471_ == 0)
{
lean_object* v_a_1472_; 
lean_dec(v___x_1390_);
v_a_1472_ = lean_ctor_get(v___x_1468_, 0);
lean_inc(v_a_1472_);
lean_dec_ref_known(v___x_1468_, 1);
v___y_1402_ = v_a_1472_;
v___y_1403_ = v___y_1452_;
v___y_1404_ = v___y_1454_;
v___y_1405_ = v___y_1455_;
v___y_1406_ = v___y_1456_;
v___y_1407_ = v___y_1457_;
goto v___jp_1401_;
}
else
{
lean_object* v_a_1473_; lean_object* v_inheritedTraceOptions_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; uint8_t v___x_1477_; 
v_a_1473_ = lean_ctor_get(v___x_1468_, 0);
lean_inc(v_a_1473_);
lean_dec_ref_known(v___x_1468_, 1);
v_inheritedTraceOptions_1474_ = lean_ctor_get(v_toCold_1469_, 11);
v___x_1475_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__1));
lean_inc(v___x_1390_);
v___x_1476_ = l_Lean_Name_append(v___x_1475_, v___x_1390_);
v___x_1477_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1474_, v_options_1470_, v___x_1476_);
lean_dec(v___x_1476_);
if (v___x_1477_ == 0)
{
lean_dec(v___x_1390_);
v___y_1402_ = v_a_1473_;
v___y_1403_ = v___y_1452_;
v___y_1404_ = v___y_1454_;
v___y_1405_ = v___y_1455_;
v___y_1406_ = v___y_1456_;
v___y_1407_ = v___y_1457_;
goto v___jp_1401_;
}
else
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1478_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__4);
lean_inc(v_a_1473_);
v___x_1479_ = lean_array_to_list(v_a_1473_);
v___x_1480_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(v___x_1479_, v___x_1461_);
v___x_1481_ = l_Lean_MessageData_ofList(v___x_1480_);
v___x_1482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1482_, 0, v___x_1478_);
lean_ctor_set(v___x_1482_, 1, v___x_1481_);
v___x_1483_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_1390_, v___x_1482_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
if (lean_obj_tag(v___x_1483_) == 0)
{
lean_dec_ref_known(v___x_1483_, 1);
v___y_1402_ = v_a_1473_;
v___y_1403_ = v___y_1452_;
v___y_1404_ = v___y_1454_;
v___y_1405_ = v___y_1455_;
v___y_1406_ = v___y_1456_;
v___y_1407_ = v___y_1457_;
goto v___jp_1401_;
}
else
{
lean_object* v_a_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1491_; 
lean_dec(v_a_1473_);
lean_dec_ref(v___y_1452_);
lean_dec_ref(v_funTypes_1394_);
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
lean_dec_ref(v_xs_1385_);
lean_dec_ref(v_fixedParamPerms_1384_);
lean_dec_ref(v___x_1382_);
lean_dec_ref(v_a_1381_);
lean_dec_ref(v_recArgInfos_1380_);
v_a_1484_ = lean_ctor_get(v___x_1483_, 0);
v_isSharedCheck_1491_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1486_ = v___x_1483_;
v_isShared_1487_ = v_isSharedCheck_1491_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_a_1484_);
lean_dec(v___x_1483_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1491_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1489_; 
if (v_isShared_1487_ == 0)
{
v___x_1489_ = v___x_1486_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v_a_1484_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
return v___x_1489_;
}
}
}
}
}
}
else
{
lean_object* v_a_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1499_; 
lean_dec_ref(v___y_1452_);
lean_dec_ref(v_funTypes_1394_);
lean_dec(v___x_1390_);
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
lean_dec_ref(v_xs_1385_);
lean_dec_ref(v_fixedParamPerms_1384_);
lean_dec_ref(v___x_1382_);
lean_dec_ref(v_a_1381_);
lean_dec_ref(v_recArgInfos_1380_);
v_a_1492_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1494_ = v___x_1468_;
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_a_1492_);
lean_dec(v___x_1468_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
lean_object* v___x_1497_; 
if (v_isShared_1495_ == 0)
{
v___x_1497_ = v___x_1494_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v_a_1492_);
v___x_1497_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
return v___x_1497_;
}
}
}
}
else
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1507_; 
lean_dec_ref(v_FArgs_1453_);
lean_dec_ref(v___y_1452_);
lean_dec_ref(v_funTypes_1394_);
lean_dec(v___x_1390_);
lean_dec_ref(v___f_1389_);
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
lean_dec_ref(v_xs_1385_);
lean_dec_ref(v_fixedParamPerms_1384_);
lean_dec_ref(v___x_1382_);
lean_dec_ref(v_a_1381_);
lean_dec_ref(v_recArgInfos_1380_);
v_a_1500_ = lean_ctor_get(v___x_1466_, 0);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1502_ = v___x_1466_;
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1466_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1505_; 
if (v_isShared_1503_ == 0)
{
v___x_1505_ = v___x_1502_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v_a_1500_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
}
}
v___jp_1508_:
{
if (v_a_1391_ == 0)
{
lean_object* v___x_1515_; lean_object* v_levelParams_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; size_t v_sz_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_24995__overap_1525_; lean_object* v___x_1526_; 
v___x_1515_ = lean_array_get_borrowed(v___x_1392_, v_preDefs_1387_, v___x_1386_);
v_levelParams_1516_ = lean_ctor_get(v___x_1515_, 1);
v___x_1517_ = lean_box(0);
lean_inc(v_levelParams_1516_);
v___x_1518_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(v_levelParams_1516_, v___x_1517_);
v_sz_1519_ = lean_array_size(v___y_1510_);
v___x_1520_ = l_unsafeCast___redArg(v___y_1510_);
v___x_1521_ = lean_box(v_a_1391_);
v___x_1522_ = lean_box_usize(v_sz_1519_);
v___x_1523_ = lean_box_usize(v___x_1383_);
lean_inc_ref(v_xs_1385_);
lean_inc_ref(v_preDefs_1387_);
v___x_1524_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___boxed), 13, 8);
lean_closure_set(v___x_1524_, 0, v_preDefs_1387_);
lean_closure_set(v___x_1524_, 1, v_xs_1385_);
lean_closure_set(v___x_1524_, 2, v___x_1521_);
lean_closure_set(v___x_1524_, 3, v___x_1518_);
lean_closure_set(v___x_1524_, 4, v___y_1510_);
lean_closure_set(v___x_1524_, 5, v___x_1522_);
lean_closure_set(v___x_1524_, 6, v___x_1523_);
lean_closure_set(v___x_1524_, 7, v___x_1520_);
v___x_24995__overap_1525_ = l_unsafeCast___redArg(v___x_1524_);
lean_dec_ref(v___x_1524_);
lean_inc(v___y_1514_);
lean_inc_ref(v___y_1513_);
lean_inc(v___y_1512_);
lean_inc_ref(v___y_1511_);
v___x_1526_ = lean_apply_5(v___x_24995__overap_1525_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_, lean_box(0));
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_a_1527_);
lean_dec_ref_known(v___x_1526_, 1);
v___y_1452_ = v___y_1509_;
v_FArgs_1453_ = v_a_1527_;
v___y_1454_ = v___y_1511_;
v___y_1455_ = v___y_1512_;
v___y_1456_ = v___y_1513_;
v___y_1457_ = v___y_1514_;
goto v___jp_1451_;
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1535_; 
lean_dec_ref(v___y_1509_);
lean_dec_ref(v_funTypes_1394_);
lean_dec(v___x_1390_);
lean_dec_ref(v___f_1389_);
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
lean_dec_ref(v_xs_1385_);
lean_dec_ref(v_fixedParamPerms_1384_);
lean_dec_ref(v___x_1382_);
lean_dec_ref(v_a_1381_);
lean_dec_ref(v_recArgInfos_1380_);
v_a_1528_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1535_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1535_ == 0)
{
v___x_1530_ = v___x_1526_;
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1526_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1533_; 
if (v_isShared_1531_ == 0)
{
v___x_1533_ = v___x_1530_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v_a_1528_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
}
}
else
{
v___y_1452_ = v___y_1509_;
v_FArgs_1453_ = v___y_1510_;
v___y_1454_ = v___y_1511_;
v___y_1455_ = v___y_1512_;
v___y_1456_ = v___y_1513_;
v___y_1457_ = v___y_1514_;
goto v___jp_1451_;
}
}
v___jp_1536_:
{
size_t v_sz_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_25011__overap_1549_; lean_object* v___x_1550_; 
v_sz_1543_ = lean_array_size(v_recArgInfos_1380_);
v___x_1544_ = l_unsafeCast___redArg(v_recArgInfos_1380_);
v___x_1545_ = lean_box(v_a_1391_);
v___x_1546_ = lean_box_usize(v_sz_1543_);
v___x_1547_ = lean_box_usize(v___x_1383_);
lean_inc_ref(v___y_1538_);
lean_inc_ref(v_preDefs_1387_);
lean_inc_ref(v___x_1382_);
lean_inc_ref_n(v_recArgInfos_1380_, 2);
lean_inc_ref(v_a_1381_);
v___x_1548_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14___boxed), 16, 11);
lean_closure_set(v___x_1548_, 0, v___x_1545_);
lean_closure_set(v___x_1548_, 1, v_a_1381_);
lean_closure_set(v___x_1548_, 2, v___y_1537_);
lean_closure_set(v___x_1548_, 3, v_recArgInfos_1380_);
lean_closure_set(v___x_1548_, 4, v___x_1382_);
lean_closure_set(v___x_1548_, 5, v_preDefs_1387_);
lean_closure_set(v___x_1548_, 6, v___y_1538_);
lean_closure_set(v___x_1548_, 7, v_recArgInfos_1380_);
lean_closure_set(v___x_1548_, 8, v___x_1546_);
lean_closure_set(v___x_1548_, 9, v___x_1547_);
lean_closure_set(v___x_1548_, 10, v___x_1544_);
v___x_25011__overap_1549_ = l_unsafeCast___redArg(v___x_1548_);
lean_dec_ref(v___x_1548_);
lean_inc(v___y_1542_);
lean_inc_ref(v___y_1541_);
lean_inc(v___y_1540_);
lean_inc_ref(v___y_1539_);
v___x_1550_ = lean_apply_5(v___x_25011__overap_1549_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, lean_box(0));
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v_a_1551_; lean_object* v___x_1552_; 
v_a_1551_ = lean_ctor_get(v___x_1550_, 0);
lean_inc(v_a_1551_);
lean_dec_ref_known(v___x_1550_, 1);
lean_inc(v___y_1542_);
lean_inc_ref(v___y_1541_);
lean_inc(v___y_1540_);
lean_inc_ref(v___y_1539_);
v___x_1552_ = lean_apply_5(v___f_1393_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, lean_box(0));
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v_a_1553_; uint8_t v___x_1554_; 
v_a_1553_ = lean_ctor_get(v___x_1552_, 0);
lean_inc(v_a_1553_);
lean_dec_ref_known(v___x_1552_, 1);
v___x_1554_ = lean_unbox(v_a_1553_);
lean_dec(v_a_1553_);
if (v___x_1554_ == 0)
{
v___y_1509_ = v___y_1538_;
v___y_1510_ = v_a_1551_;
v___y_1511_ = v___y_1539_;
v___y_1512_ = v___y_1540_;
v___y_1513_ = v___y_1541_;
v___y_1514_ = v___y_1542_;
goto v___jp_1508_;
}
else
{
lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1555_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__6);
lean_inc(v_a_1551_);
v___x_1556_ = lean_array_to_list(v_a_1551_);
v___x_1557_ = lean_box(0);
v___x_1558_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(v___x_1556_, v___x_1557_);
v___x_1559_ = l_Lean_MessageData_ofList(v___x_1558_);
v___x_1560_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1555_);
lean_ctor_set(v___x_1560_, 1, v___x_1559_);
lean_inc(v___x_1390_);
v___x_1561_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_1390_, v___x_1560_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_);
if (lean_obj_tag(v___x_1561_) == 0)
{
lean_dec_ref_known(v___x_1561_, 1);
v___y_1509_ = v___y_1538_;
v___y_1510_ = v_a_1551_;
v___y_1511_ = v___y_1539_;
v___y_1512_ = v___y_1540_;
v___y_1513_ = v___y_1541_;
v___y_1514_ = v___y_1542_;
goto v___jp_1508_;
}
else
{
lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1569_; 
lean_dec(v_a_1551_);
lean_dec_ref(v___y_1538_);
lean_dec_ref(v_funTypes_1394_);
lean_dec(v___x_1390_);
lean_dec_ref(v___f_1389_);
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
lean_dec_ref(v_xs_1385_);
lean_dec_ref(v_fixedParamPerms_1384_);
lean_dec_ref(v___x_1382_);
lean_dec_ref(v_a_1381_);
lean_dec_ref(v_recArgInfos_1380_);
v_a_1562_ = lean_ctor_get(v___x_1561_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1561_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1564_ = v___x_1561_;
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_dec(v___x_1561_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1567_; 
if (v_isShared_1565_ == 0)
{
v___x_1567_ = v___x_1564_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_a_1562_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
}
}
else
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1577_; 
lean_dec(v_a_1551_);
lean_dec_ref(v___y_1538_);
lean_dec_ref(v_funTypes_1394_);
lean_dec(v___x_1390_);
lean_dec_ref(v___f_1389_);
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
lean_dec_ref(v_xs_1385_);
lean_dec_ref(v_fixedParamPerms_1384_);
lean_dec_ref(v___x_1382_);
lean_dec_ref(v_a_1381_);
lean_dec_ref(v_recArgInfos_1380_);
v_a_1570_ = lean_ctor_get(v___x_1552_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1552_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1572_ = v___x_1552_;
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1552_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_a_1570_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
}
}
else
{
lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1585_; 
lean_dec_ref(v___y_1538_);
lean_dec_ref(v_funTypes_1394_);
lean_dec_ref(v___f_1393_);
lean_dec(v___x_1390_);
lean_dec_ref(v___f_1389_);
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
lean_dec_ref(v_xs_1385_);
lean_dec_ref(v_fixedParamPerms_1384_);
lean_dec_ref(v___x_1382_);
lean_dec_ref(v_a_1381_);
lean_dec_ref(v_recArgInfos_1380_);
v_a_1578_ = lean_ctor_get(v___x_1550_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1550_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1580_ = v___x_1550_;
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v___x_1550_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1583_; 
if (v_isShared_1581_ == 0)
{
v___x_1583_ = v___x_1580_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1578_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
v___jp_1586_:
{
lean_object* v___x_1587_; 
v___x_1587_ = l_Lean_Elab_Structural_mkBRecOnConst(v_recArgInfos_1380_, v___x_1382_, v_motives_1395_, v_a_1391_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_);
lean_dec_ref(v_motives_1395_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v_a_1588_; lean_object* v___x_1589_; 
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
lean_inc_n(v_a_1588_, 2);
lean_dec_ref_known(v___x_1587_, 1);
lean_inc_ref(v___x_1382_);
v___x_1589_ = l_Lean_Elab_Structural_inferBRecOnFTypes(v_recArgInfos_1380_, v___x_1382_, v_a_1588_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_object* v_a_1590_; lean_object* v___x_1591_; 
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
lean_inc(v_a_1590_);
lean_dec_ref_known(v___x_1589_, 1);
lean_inc_ref(v___f_1393_);
lean_inc(v___y_1399_);
lean_inc_ref(v___y_1398_);
lean_inc(v___y_1397_);
lean_inc_ref(v___y_1396_);
v___x_1591_ = lean_apply_5(v___f_1393_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, lean_box(0));
if (lean_obj_tag(v___x_1591_) == 0)
{
lean_object* v_a_1592_; uint8_t v___x_1593_; 
v_a_1592_ = lean_ctor_get(v___x_1591_, 0);
lean_inc(v_a_1592_);
lean_dec_ref_known(v___x_1591_, 1);
v___x_1593_ = lean_unbox(v_a_1592_);
lean_dec(v_a_1592_);
if (v___x_1593_ == 0)
{
v___y_1537_ = v_a_1590_;
v___y_1538_ = v_a_1588_;
v___y_1539_ = v___y_1396_;
v___y_1540_ = v___y_1397_;
v___y_1541_ = v___y_1398_;
v___y_1542_ = v___y_1399_;
goto v___jp_1536_;
}
else
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1594_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___closed__8);
lean_inc(v_a_1590_);
v___x_1595_ = lean_array_to_list(v_a_1590_);
v___x_1596_ = lean_box(0);
v___x_1597_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(v___x_1595_, v___x_1596_);
v___x_1598_ = l_Lean_MessageData_ofList(v___x_1597_);
v___x_1599_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1594_);
lean_ctor_set(v___x_1599_, 1, v___x_1598_);
lean_inc(v___x_1390_);
v___x_1600_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_1390_, v___x_1599_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_);
if (lean_obj_tag(v___x_1600_) == 0)
{
lean_dec_ref_known(v___x_1600_, 1);
v___y_1537_ = v_a_1590_;
v___y_1538_ = v_a_1588_;
v___y_1539_ = v___y_1396_;
v___y_1540_ = v___y_1397_;
v___y_1541_ = v___y_1398_;
v___y_1542_ = v___y_1399_;
goto v___jp_1536_;
}
else
{
lean_object* v_a_1601_; lean_object* v___x_1603_; uint8_t v_isShared_1604_; uint8_t v_isSharedCheck_1608_; 
lean_dec(v_a_1590_);
lean_dec(v_a_1588_);
lean_dec_ref(v_funTypes_1394_);
lean_dec_ref(v___f_1393_);
lean_dec(v___x_1390_);
lean_dec_ref(v___f_1389_);
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
lean_dec_ref(v_xs_1385_);
lean_dec_ref(v_fixedParamPerms_1384_);
lean_dec_ref(v___x_1382_);
lean_dec_ref(v_a_1381_);
lean_dec_ref(v_recArgInfos_1380_);
v_a_1601_ = lean_ctor_get(v___x_1600_, 0);
v_isSharedCheck_1608_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1603_ = v___x_1600_;
v_isShared_1604_ = v_isSharedCheck_1608_;
goto v_resetjp_1602_;
}
else
{
lean_inc(v_a_1601_);
lean_dec(v___x_1600_);
v___x_1603_ = lean_box(0);
v_isShared_1604_ = v_isSharedCheck_1608_;
goto v_resetjp_1602_;
}
v_resetjp_1602_:
{
lean_object* v___x_1606_; 
if (v_isShared_1604_ == 0)
{
v___x_1606_ = v___x_1603_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v_a_1601_);
v___x_1606_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
return v___x_1606_;
}
}
}
}
}
else
{
lean_object* v_a_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1616_; 
lean_dec(v_a_1590_);
lean_dec(v_a_1588_);
lean_dec_ref(v_funTypes_1394_);
lean_dec_ref(v___f_1393_);
lean_dec(v___x_1390_);
lean_dec_ref(v___f_1389_);
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
lean_dec_ref(v_xs_1385_);
lean_dec_ref(v_fixedParamPerms_1384_);
lean_dec_ref(v___x_1382_);
lean_dec_ref(v_a_1381_);
lean_dec_ref(v_recArgInfos_1380_);
v_a_1609_ = lean_ctor_get(v___x_1591_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1611_ = v___x_1591_;
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_a_1609_);
lean_dec(v___x_1591_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1614_; 
if (v_isShared_1612_ == 0)
{
v___x_1614_ = v___x_1611_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_a_1609_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
}
}
else
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1624_; 
lean_dec(v_a_1588_);
lean_dec_ref(v_funTypes_1394_);
lean_dec_ref(v___f_1393_);
lean_dec(v___x_1390_);
lean_dec_ref(v___f_1389_);
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
lean_dec_ref(v_xs_1385_);
lean_dec_ref(v_fixedParamPerms_1384_);
lean_dec_ref(v___x_1382_);
lean_dec_ref(v_a_1381_);
lean_dec_ref(v_recArgInfos_1380_);
v_a_1617_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1619_ = v___x_1589_;
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v___x_1589_);
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
else
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1632_; 
lean_dec_ref(v_funTypes_1394_);
lean_dec_ref(v___f_1393_);
lean_dec(v___x_1390_);
lean_dec_ref(v___f_1389_);
lean_dec_ref(v_preDefs_1387_);
lean_dec(v___x_1386_);
lean_dec_ref(v_xs_1385_);
lean_dec_ref(v_fixedParamPerms_1384_);
lean_dec_ref(v___x_1382_);
lean_dec_ref(v_a_1381_);
lean_dec_ref(v_recArgInfos_1380_);
v_a_1625_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1627_ = v___x_1587_;
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1587_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1630_; 
if (v_isShared_1628_ == 0)
{
v___x_1630_ = v___x_1627_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_a_1625_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___boxed(lean_object** _args){
lean_object* v_recArgInfos_1665_ = _args[0];
lean_object* v_a_1666_ = _args[1];
lean_object* v___x_1667_ = _args[2];
lean_object* v___x_1668_ = _args[3];
lean_object* v_fixedParamPerms_1669_ = _args[4];
lean_object* v_xs_1670_ = _args[5];
lean_object* v___x_1671_ = _args[6];
lean_object* v_preDefs_1672_ = _args[7];
lean_object* v_numIndices_1673_ = _args[8];
lean_object* v___f_1674_ = _args[9];
lean_object* v___x_1675_ = _args[10];
lean_object* v_a_1676_ = _args[11];
lean_object* v___x_1677_ = _args[12];
lean_object* v___f_1678_ = _args[13];
lean_object* v_funTypes_1679_ = _args[14];
lean_object* v_motives_1680_ = _args[15];
lean_object* v___y_1681_ = _args[16];
lean_object* v___y_1682_ = _args[17];
lean_object* v___y_1683_ = _args[18];
lean_object* v___y_1684_ = _args[19];
lean_object* v___y_1685_ = _args[20];
_start:
{
size_t v___x_27018__boxed_1686_; uint8_t v_a_27022__boxed_1687_; lean_object* v_res_1688_; 
v___x_27018__boxed_1686_ = lean_unbox_usize(v___x_1668_);
lean_dec(v___x_1668_);
v_a_27022__boxed_1687_ = lean_unbox(v_a_1676_);
v_res_1688_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2(v_recArgInfos_1665_, v_a_1666_, v___x_1667_, v___x_27018__boxed_1686_, v_fixedParamPerms_1669_, v_xs_1670_, v___x_1671_, v_preDefs_1672_, v_numIndices_1673_, v___f_1674_, v___x_1675_, v_a_27022__boxed_1687_, v___x_1677_, v___f_1678_, v_funTypes_1679_, v_motives_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec_ref(v___x_1677_);
lean_dec(v_numIndices_1673_);
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg(lean_object* v_a_1689_, lean_object* v_funTypes_1690_, size_t v_sz_1691_, size_t v_i_1692_, lean_object* v_bs_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_){
_start:
{
uint8_t v___x_1699_; 
v___x_1699_ = lean_usize_dec_lt(v_i_1692_, v_sz_1691_);
if (v___x_1699_ == 0)
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = l_unsafeCast___redArg(v_bs_1693_);
lean_dec_ref(v_bs_1693_);
v___x_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1700_);
return v___x_1701_;
}
else
{
lean_object* v___x_1702_; lean_object* v_v_1703_; lean_object* v___x_1704_; lean_object* v_bs_x27_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1702_ = l_Lean_instInhabitedExpr;
v_v_1703_ = lean_array_uget(v_bs_1693_, v_i_1692_);
v___x_1704_ = lean_unsigned_to_nat(0u);
v_bs_x27_1705_ = lean_array_uset(v_bs_1693_, v_i_1692_, v___x_1704_);
v___x_1706_ = lean_usize_to_nat(v_i_1692_);
v___x_1707_ = l_unsafeCast___redArg(v_v_1703_);
lean_dec(v_v_1703_);
v___x_1708_ = lean_array_get_borrowed(v___x_1702_, v_a_1689_, v___x_1706_);
v___x_1709_ = lean_array_get_borrowed(v___x_1702_, v_funTypes_1690_, v___x_1706_);
lean_dec(v___x_1706_);
lean_inc(v___x_1709_);
lean_inc(v___x_1708_);
v___x_1710_ = l_Lean_Elab_Structural_mkIndPredBRecOnMotive(v___x_1707_, v___x_1708_, v___x_1709_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v_a_1711_; size_t v___x_1712_; size_t v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; 
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
lean_inc(v_a_1711_);
lean_dec_ref_known(v___x_1710_, 1);
v___x_1712_ = ((size_t)1ULL);
v___x_1713_ = lean_usize_add(v_i_1692_, v___x_1712_);
v___x_1714_ = l_unsafeCast___redArg(v_a_1711_);
lean_dec(v_a_1711_);
v___x_1715_ = lean_array_uset(v_bs_x27_1705_, v_i_1692_, v___x_1714_);
v_i_1692_ = v___x_1713_;
v_bs_1693_ = v___x_1715_;
goto _start;
}
else
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1724_; 
lean_dec_ref(v_bs_x27_1705_);
v_a_1717_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1719_ = v___x_1710_;
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1710_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1722_; 
if (v_isShared_1720_ == 0)
{
v___x_1722_ = v___x_1719_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1717_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg___boxed(lean_object* v_a_1725_, lean_object* v_funTypes_1726_, lean_object* v_sz_1727_, lean_object* v_i_1728_, lean_object* v_bs_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
size_t v_sz_boxed_1735_; size_t v_i_boxed_1736_; lean_object* v_res_1737_; 
v_sz_boxed_1735_ = lean_unbox_usize(v_sz_1727_);
lean_dec(v_sz_1727_);
v_i_boxed_1736_ = lean_unbox_usize(v_i_1728_);
lean_dec(v_i_1728_);
v_res_1737_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg(v_a_1725_, v_funTypes_1726_, v_sz_boxed_1735_, v_i_boxed_1736_, v_bs_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
lean_dec(v___y_1733_);
lean_dec_ref(v___y_1732_);
lean_dec(v___y_1731_);
lean_dec_ref(v___y_1730_);
lean_dec_ref(v_funTypes_1726_);
lean_dec_ref(v_a_1725_);
return v_res_1737_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18(lean_object* v_a_1738_, lean_object* v_funTypes_1739_, lean_object* v_as_1740_, size_t v_sz_1741_, size_t v_i_1742_, lean_object* v_bs_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_){
_start:
{
lean_object* v___x_1749_; 
v___x_1749_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___redArg(v_a_1738_, v_funTypes_1739_, v_sz_1741_, v_i_1742_, v_bs_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_);
return v___x_1749_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___boxed(lean_object* v_a_1750_, lean_object* v_funTypes_1751_, lean_object* v_as_1752_, lean_object* v_sz_1753_, lean_object* v_i_1754_, lean_object* v_bs_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_){
_start:
{
size_t v_sz_boxed_1761_; size_t v_i_boxed_1762_; lean_object* v_res_1763_; 
v_sz_boxed_1761_ = lean_unbox_usize(v_sz_1753_);
lean_dec(v_sz_1753_);
v_i_boxed_1762_ = lean_unbox_usize(v_i_1754_);
lean_dec(v_i_1754_);
v_res_1763_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18(v_a_1750_, v_funTypes_1751_, v_as_1752_, v_sz_boxed_1761_, v_i_boxed_1762_, v_bs_1755_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
lean_dec(v___y_1757_);
lean_dec_ref(v___y_1756_);
lean_dec_ref(v_as_1752_);
lean_dec_ref(v_funTypes_1751_);
lean_dec_ref(v_a_1750_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__3(lean_object* v_recArgInfos_1764_, lean_object* v_a_1765_, size_t v___x_1766_, lean_object* v___f_1767_, lean_object* v_funTypes_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_){
_start:
{
size_t v_sz_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_25105__overap_1779_; lean_object* v___x_1780_; 
v_sz_1774_ = lean_array_size(v_recArgInfos_1764_);
v___x_1775_ = l_unsafeCast___redArg(v_recArgInfos_1764_);
v___x_1776_ = lean_box_usize(v_sz_1774_);
v___x_1777_ = lean_box_usize(v___x_1766_);
lean_inc_ref(v_funTypes_1768_);
v___x_1778_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18___boxed), 11, 6);
lean_closure_set(v___x_1778_, 0, v_a_1765_);
lean_closure_set(v___x_1778_, 1, v_funTypes_1768_);
lean_closure_set(v___x_1778_, 2, v_recArgInfos_1764_);
lean_closure_set(v___x_1778_, 3, v___x_1776_);
lean_closure_set(v___x_1778_, 4, v___x_1777_);
lean_closure_set(v___x_1778_, 5, v___x_1775_);
v___x_25105__overap_1779_ = l_unsafeCast___redArg(v___x_1778_);
lean_dec_ref(v___x_1778_);
lean_inc(v___y_1772_);
lean_inc_ref(v___y_1771_);
lean_inc(v___y_1770_);
lean_inc_ref(v___y_1769_);
v___x_1780_ = lean_apply_5(v___x_25105__overap_1779_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_, lean_box(0));
if (lean_obj_tag(v___x_1780_) == 0)
{
lean_object* v_a_1781_; lean_object* v___x_1782_; 
v_a_1781_ = lean_ctor_get(v___x_1780_, 0);
lean_inc(v_a_1781_);
lean_dec_ref_known(v___x_1780_, 1);
lean_inc(v___y_1772_);
lean_inc_ref(v___y_1771_);
lean_inc(v___y_1770_);
lean_inc_ref(v___y_1769_);
v___x_1782_ = lean_apply_7(v___f_1767_, v_funTypes_1768_, v_a_1781_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_, lean_box(0));
return v___x_1782_;
}
else
{
lean_object* v_a_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1790_; 
lean_dec_ref(v_funTypes_1768_);
lean_dec_ref(v___f_1767_);
v_a_1783_ = lean_ctor_get(v___x_1780_, 0);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1780_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1785_ = v___x_1780_;
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_a_1783_);
lean_dec(v___x_1780_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___x_1788_; 
if (v_isShared_1786_ == 0)
{
v___x_1788_ = v___x_1785_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_a_1783_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
return v___x_1788_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__3___boxed(lean_object* v_recArgInfos_1791_, lean_object* v_a_1792_, lean_object* v___x_1793_, lean_object* v___f_1794_, lean_object* v_funTypes_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_){
_start:
{
size_t v___x_27670__boxed_1801_; lean_object* v_res_1802_; 
v___x_27670__boxed_1801_ = lean_unbox_usize(v___x_1793_);
lean_dec(v___x_1793_);
v_res_1802_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__3(v_recArgInfos_1791_, v_a_1792_, v___x_27670__boxed_1801_, v___f_1794_, v_funTypes_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_);
lean_dec(v___y_1799_);
lean_dec_ref(v___y_1798_);
lean_dec(v___y_1797_);
lean_dec_ref(v___y_1796_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg(lean_object* v_fixedParamPerms_1803_, lean_object* v_xs_1804_, size_t v_sz_1805_, size_t v_i_1806_, lean_object* v_bs_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
uint8_t v___x_1813_; 
v___x_1813_ = lean_usize_dec_lt(v_i_1806_, v_sz_1805_);
if (v___x_1813_ == 0)
{
lean_object* v___x_1814_; lean_object* v___x_1815_; 
lean_dec_ref(v_xs_1804_);
v___x_1814_ = l_unsafeCast___redArg(v_bs_1807_);
lean_dec_ref(v_bs_1807_);
v___x_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1814_);
return v___x_1815_;
}
else
{
lean_object* v_v_1816_; lean_object* v_perms_1817_; lean_object* v___x_1818_; lean_object* v_value_1819_; lean_object* v___x_1820_; lean_object* v_bs_x27_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v_v_1816_ = lean_array_uget_borrowed(v_bs_1807_, v_i_1806_);
v_perms_1817_ = lean_ctor_get(v_fixedParamPerms_1803_, 1);
v___x_1818_ = l_unsafeCast___redArg(v_v_1816_);
v_value_1819_ = lean_ctor_get(v___x_1818_, 7);
lean_inc_ref(v_value_1819_);
lean_dec(v___x_1818_);
v___x_1820_ = lean_unsigned_to_nat(0u);
v_bs_x27_1821_ = lean_array_uset(v_bs_1807_, v_i_1806_, v___x_1820_);
v___x_1822_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0);
v___x_1823_ = lean_usize_to_nat(v_i_1806_);
v___x_1824_ = lean_array_get_borrowed(v___x_1822_, v_perms_1817_, v___x_1823_);
lean_dec(v___x_1823_);
lean_inc_ref(v_xs_1804_);
lean_inc(v___x_1824_);
v___x_1825_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v___x_1824_, v_value_1819_, v_xs_1804_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_);
if (lean_obj_tag(v___x_1825_) == 0)
{
lean_object* v_a_1826_; size_t v___x_1827_; size_t v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
v_a_1826_ = lean_ctor_get(v___x_1825_, 0);
lean_inc(v_a_1826_);
lean_dec_ref_known(v___x_1825_, 1);
v___x_1827_ = ((size_t)1ULL);
v___x_1828_ = lean_usize_add(v_i_1806_, v___x_1827_);
v___x_1829_ = l_unsafeCast___redArg(v_a_1826_);
lean_dec(v_a_1826_);
v___x_1830_ = lean_array_uset(v_bs_x27_1821_, v_i_1806_, v___x_1829_);
v_i_1806_ = v___x_1828_;
v_bs_1807_ = v___x_1830_;
goto _start;
}
else
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1839_; 
lean_dec_ref(v_bs_x27_1821_);
lean_dec_ref(v_xs_1804_);
v_a_1832_ = lean_ctor_get(v___x_1825_, 0);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1825_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1834_ = v___x_1825_;
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1825_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1837_; 
if (v_isShared_1835_ == 0)
{
v___x_1837_ = v___x_1834_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1832_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg___boxed(lean_object* v_fixedParamPerms_1840_, lean_object* v_xs_1841_, lean_object* v_sz_1842_, lean_object* v_i_1843_, lean_object* v_bs_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_){
_start:
{
size_t v_sz_boxed_1850_; size_t v_i_boxed_1851_; lean_object* v_res_1852_; 
v_sz_boxed_1850_ = lean_unbox_usize(v_sz_1842_);
lean_dec(v_sz_1842_);
v_i_boxed_1851_ = lean_unbox_usize(v_i_1843_);
lean_dec(v_i_1843_);
v_res_1852_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg(v_fixedParamPerms_1840_, v_xs_1841_, v_sz_boxed_1850_, v_i_boxed_1851_, v_bs_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_);
lean_dec(v___y_1848_);
lean_dec_ref(v___y_1847_);
lean_dec(v___y_1846_);
lean_dec_ref(v___y_1845_);
lean_dec_ref(v_fixedParamPerms_1840_);
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2(lean_object* v_fixedParamPerms_1853_, lean_object* v_xs_1854_, lean_object* v_as_1855_, size_t v_sz_1856_, size_t v_i_1857_, lean_object* v_bs_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_){
_start:
{
lean_object* v___x_1864_; 
v___x_1864_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg(v_fixedParamPerms_1853_, v_xs_1854_, v_sz_1856_, v_i_1857_, v_bs_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___boxed(lean_object* v_fixedParamPerms_1865_, lean_object* v_xs_1866_, lean_object* v_as_1867_, lean_object* v_sz_1868_, lean_object* v_i_1869_, lean_object* v_bs_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_){
_start:
{
size_t v_sz_boxed_1876_; size_t v_i_boxed_1877_; lean_object* v_res_1878_; 
v_sz_boxed_1876_ = lean_unbox_usize(v_sz_1868_);
lean_dec(v_sz_1868_);
v_i_boxed_1877_ = lean_unbox_usize(v_i_1869_);
lean_dec(v_i_1869_);
v_res_1878_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2(v_fixedParamPerms_1865_, v_xs_1866_, v_as_1867_, v_sz_boxed_1876_, v_i_boxed_1877_, v_bs_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_);
lean_dec(v___y_1874_);
lean_dec_ref(v___y_1873_);
lean_dec(v___y_1872_);
lean_dec_ref(v___y_1871_);
lean_dec_ref(v_as_1867_);
lean_dec_ref(v_fixedParamPerms_1865_);
return v_res_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(lean_object* v_msg_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_){
_start:
{
lean_object* v_ref_1885_; lean_object* v___x_1886_; lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1895_; 
v_ref_1885_ = lean_ctor_get(v___y_1882_, 2);
v___x_1886_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11_spec__21(v_msg_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_);
v_a_1887_ = lean_ctor_get(v___x_1886_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1889_ = v___x_1886_;
v_isShared_1890_ = v_isSharedCheck_1895_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1886_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1895_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1891_; lean_object* v___x_1893_; 
lean_inc(v_ref_1885_);
v___x_1891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1891_, 0, v_ref_1885_);
lean_ctor_set(v___x_1891_, 1, v_a_1887_);
if (v_isShared_1890_ == 0)
{
lean_ctor_set_tag(v___x_1889_, 1);
lean_ctor_set(v___x_1889_, 0, v___x_1891_);
v___x_1893_ = v___x_1889_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v___x_1891_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
return v___x_1893_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg___boxed(lean_object* v_msg_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v_msg_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_);
lean_dec(v___y_1900_);
lean_dec_ref(v___y_1899_);
lean_dec(v___y_1898_);
lean_dec_ref(v___y_1897_);
return v_res_1902_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__0));
v___x_1905_ = l_Lean_stringToMessageData(v___x_1904_);
return v___x_1905_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3(void){
_start:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1907_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__2));
v___x_1908_ = l_Lean_stringToMessageData(v___x_1907_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4(lean_object* v_constName_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_){
_start:
{
lean_object* v___x_1915_; lean_object* v_env_1916_; lean_object* v___x_1917_; 
v___x_1915_ = lean_st_ref_get(v___y_1913_);
v_env_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc_ref(v_env_1916_);
lean_dec(v___x_1915_);
lean_inc(v_constName_1909_);
v___x_1917_ = l_Lean_isInductiveCore_x3f(v_env_1916_, v_constName_1909_);
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_object* v___x_1918_; uint8_t v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
v___x_1918_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1);
v___x_1919_ = 0;
v___x_1920_ = l_Lean_MessageData_ofConstName(v_constName_1909_, v___x_1919_);
v___x_1921_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1921_, 0, v___x_1918_);
lean_ctor_set(v___x_1921_, 1, v___x_1920_);
v___x_1922_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3);
v___x_1923_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1923_, 0, v___x_1921_);
lean_ctor_set(v___x_1923_, 1, v___x_1922_);
v___x_1924_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v___x_1923_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_);
return v___x_1924_;
}
else
{
lean_object* v_val_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1932_; 
lean_dec(v_constName_1909_);
v_val_1925_ = lean_ctor_get(v___x_1917_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1927_ = v___x_1917_;
v_isShared_1928_ = v_isSharedCheck_1932_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_val_1925_);
lean_dec(v___x_1917_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1932_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v___x_1930_; 
if (v_isShared_1928_ == 0)
{
lean_ctor_set_tag(v___x_1927_, 0);
v___x_1930_ = v___x_1927_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v_val_1925_);
v___x_1930_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
return v___x_1930_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___boxed(lean_object* v_constName_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_){
_start:
{
lean_object* v_res_1939_; 
v_res_1939_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4(v_constName_1933_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_);
lean_dec(v___y_1937_);
lean_dec_ref(v___y_1936_);
lean_dec(v___y_1935_);
lean_dec_ref(v___y_1934_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___redArg(lean_object* v_a_1940_, lean_object* v_a_1941_, size_t v_sz_1942_, size_t v_i_1943_, lean_object* v_bs_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
uint8_t v___x_1950_; 
v___x_1950_ = lean_usize_dec_lt(v_i_1943_, v_sz_1942_);
if (v___x_1950_ == 0)
{
lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1951_ = l_unsafeCast___redArg(v_bs_1944_);
lean_dec_ref(v_bs_1944_);
v___x_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1951_);
return v___x_1952_;
}
else
{
lean_object* v___x_1953_; lean_object* v_v_1954_; lean_object* v___x_1955_; lean_object* v_bs_x27_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1953_ = l_Lean_instInhabitedExpr;
v_v_1954_ = lean_array_uget(v_bs_1944_, v_i_1943_);
v___x_1955_ = lean_unsigned_to_nat(0u);
v_bs_x27_1956_ = lean_array_uset(v_bs_1944_, v_i_1943_, v___x_1955_);
v___x_1957_ = lean_usize_to_nat(v_i_1943_);
v___x_1958_ = l_unsafeCast___redArg(v_v_1954_);
lean_dec(v_v_1954_);
v___x_1959_ = lean_array_get_borrowed(v___x_1953_, v_a_1940_, v___x_1957_);
v___x_1960_ = lean_array_get_borrowed(v___x_1953_, v_a_1941_, v___x_1957_);
lean_dec(v___x_1957_);
lean_inc(v___x_1960_);
lean_inc(v___x_1959_);
v___x_1961_ = l_Lean_Elab_Structural_mkBRecOnMotive(v___x_1958_, v___x_1959_, v___x_1960_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v_a_1962_; size_t v___x_1963_; size_t v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; 
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
lean_inc(v_a_1962_);
lean_dec_ref_known(v___x_1961_, 1);
v___x_1963_ = ((size_t)1ULL);
v___x_1964_ = lean_usize_add(v_i_1943_, v___x_1963_);
v___x_1965_ = l_unsafeCast___redArg(v_a_1962_);
lean_dec(v_a_1962_);
v___x_1966_ = lean_array_uset(v_bs_x27_1956_, v_i_1943_, v___x_1965_);
v_i_1943_ = v___x_1964_;
v_bs_1944_ = v___x_1966_;
goto _start;
}
else
{
lean_object* v_a_1968_; lean_object* v___x_1970_; uint8_t v_isShared_1971_; uint8_t v_isSharedCheck_1975_; 
lean_dec_ref(v_bs_x27_1956_);
v_a_1968_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1975_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1975_ == 0)
{
v___x_1970_ = v___x_1961_;
v_isShared_1971_ = v_isSharedCheck_1975_;
goto v_resetjp_1969_;
}
else
{
lean_inc(v_a_1968_);
lean_dec(v___x_1961_);
v___x_1970_ = lean_box(0);
v_isShared_1971_ = v_isSharedCheck_1975_;
goto v_resetjp_1969_;
}
v_resetjp_1969_:
{
lean_object* v___x_1973_; 
if (v_isShared_1971_ == 0)
{
v___x_1973_ = v___x_1970_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v_a_1968_);
v___x_1973_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
return v___x_1973_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___redArg___boxed(lean_object* v_a_1976_, lean_object* v_a_1977_, lean_object* v_sz_1978_, lean_object* v_i_1979_, lean_object* v_bs_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_){
_start:
{
size_t v_sz_boxed_1986_; size_t v_i_boxed_1987_; lean_object* v_res_1988_; 
v_sz_boxed_1986_ = lean_unbox_usize(v_sz_1978_);
lean_dec(v_sz_1978_);
v_i_boxed_1987_ = lean_unbox_usize(v_i_1979_);
lean_dec(v_i_1979_);
v_res_1988_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___redArg(v_a_1976_, v_a_1977_, v_sz_boxed_1986_, v_i_boxed_1987_, v_bs_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec_ref(v_a_1977_);
lean_dec_ref(v_a_1976_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19(lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_as_1991_, size_t v_sz_1992_, size_t v_i_1993_, lean_object* v_bs_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_){
_start:
{
lean_object* v___x_2000_; 
v___x_2000_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___redArg(v_a_1989_, v_a_1990_, v_sz_1992_, v_i_1993_, v_bs_1994_, v___y_1995_, v___y_1996_, v___y_1997_, v___y_1998_);
return v___x_2000_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___boxed(lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_as_2003_, lean_object* v_sz_2004_, lean_object* v_i_2005_, lean_object* v_bs_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_){
_start:
{
size_t v_sz_boxed_2012_; size_t v_i_boxed_2013_; lean_object* v_res_2014_; 
v_sz_boxed_2012_ = lean_unbox_usize(v_sz_2004_);
lean_dec(v_sz_2004_);
v_i_boxed_2013_ = lean_unbox_usize(v_i_2005_);
lean_dec(v_i_2005_);
v_res_2014_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19(v_a_2001_, v_a_2002_, v_as_2003_, v_sz_boxed_2012_, v_i_boxed_2013_, v_bs_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_);
lean_dec(v___y_2010_);
lean_dec_ref(v___y_2009_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2007_);
lean_dec_ref(v_as_2003_);
lean_dec_ref(v_a_2002_);
lean_dec_ref(v_a_2001_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg(lean_object* v_fixedParamPerms_2015_, lean_object* v_xs_2016_, size_t v_sz_2017_, size_t v_i_2018_, lean_object* v_bs_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_){
_start:
{
uint8_t v___x_2025_; 
v___x_2025_ = lean_usize_dec_lt(v_i_2018_, v_sz_2017_);
if (v___x_2025_ == 0)
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
lean_dec_ref(v_xs_2016_);
v___x_2026_ = l_unsafeCast___redArg(v_bs_2019_);
lean_dec_ref(v_bs_2019_);
v___x_2027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2026_);
return v___x_2027_;
}
else
{
lean_object* v_v_2028_; lean_object* v_perms_2029_; lean_object* v___x_2030_; lean_object* v_type_2031_; lean_object* v___x_2032_; lean_object* v_bs_x27_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; 
v_v_2028_ = lean_array_uget_borrowed(v_bs_2019_, v_i_2018_);
v_perms_2029_ = lean_ctor_get(v_fixedParamPerms_2015_, 1);
v___x_2030_ = l_unsafeCast___redArg(v_v_2028_);
v_type_2031_ = lean_ctor_get(v___x_2030_, 6);
lean_inc_ref(v_type_2031_);
lean_dec(v___x_2030_);
v___x_2032_ = lean_unsigned_to_nat(0u);
v_bs_x27_2033_ = lean_array_uset(v_bs_2019_, v_i_2018_, v___x_2032_);
v___x_2034_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0);
v___x_2035_ = lean_usize_to_nat(v_i_2018_);
v___x_2036_ = lean_array_get_borrowed(v___x_2034_, v_perms_2029_, v___x_2035_);
lean_dec(v___x_2035_);
lean_inc_ref(v_xs_2016_);
lean_inc(v___x_2036_);
v___x_2037_ = l_Lean_Elab_FixedParamPerm_instantiateForall(v___x_2036_, v_type_2031_, v_xs_2016_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v_a_2038_; size_t v___x_2039_; size_t v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
lean_inc(v_a_2038_);
lean_dec_ref_known(v___x_2037_, 1);
v___x_2039_ = ((size_t)1ULL);
v___x_2040_ = lean_usize_add(v_i_2018_, v___x_2039_);
v___x_2041_ = l_unsafeCast___redArg(v_a_2038_);
lean_dec(v_a_2038_);
v___x_2042_ = lean_array_uset(v_bs_x27_2033_, v_i_2018_, v___x_2041_);
v_i_2018_ = v___x_2040_;
v_bs_2019_ = v___x_2042_;
goto _start;
}
else
{
lean_object* v_a_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2051_; 
lean_dec_ref(v_bs_x27_2033_);
lean_dec_ref(v_xs_2016_);
v_a_2044_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2051_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2046_ = v___x_2037_;
v_isShared_2047_ = v_isSharedCheck_2051_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_a_2044_);
lean_dec(v___x_2037_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2051_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___x_2049_; 
if (v_isShared_2047_ == 0)
{
v___x_2049_ = v___x_2046_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v_a_2044_);
v___x_2049_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
return v___x_2049_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg___boxed(lean_object* v_fixedParamPerms_2052_, lean_object* v_xs_2053_, lean_object* v_sz_2054_, lean_object* v_i_2055_, lean_object* v_bs_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_){
_start:
{
size_t v_sz_boxed_2062_; size_t v_i_boxed_2063_; lean_object* v_res_2064_; 
v_sz_boxed_2062_ = lean_unbox_usize(v_sz_2054_);
lean_dec(v_sz_2054_);
v_i_boxed_2063_ = lean_unbox_usize(v_i_2055_);
lean_dec(v_i_2055_);
v_res_2064_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg(v_fixedParamPerms_2052_, v_xs_2053_, v_sz_boxed_2062_, v_i_boxed_2063_, v_bs_2056_, v___y_2057_, v___y_2058_, v___y_2059_, v___y_2060_);
lean_dec(v___y_2060_);
lean_dec_ref(v___y_2059_);
lean_dec(v___y_2058_);
lean_dec_ref(v___y_2057_);
lean_dec_ref(v_fixedParamPerms_2052_);
return v_res_2064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3(lean_object* v_fixedParamPerms_2065_, lean_object* v_xs_2066_, lean_object* v_as_2067_, size_t v_sz_2068_, size_t v_i_2069_, lean_object* v_bs_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_){
_start:
{
lean_object* v___x_2076_; 
v___x_2076_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg(v_fixedParamPerms_2065_, v_xs_2066_, v_sz_2068_, v_i_2069_, v_bs_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_);
return v___x_2076_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___boxed(lean_object* v_fixedParamPerms_2077_, lean_object* v_xs_2078_, lean_object* v_as_2079_, lean_object* v_sz_2080_, lean_object* v_i_2081_, lean_object* v_bs_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_){
_start:
{
size_t v_sz_boxed_2088_; size_t v_i_boxed_2089_; lean_object* v_res_2090_; 
v_sz_boxed_2088_ = lean_unbox_usize(v_sz_2080_);
lean_dec(v_sz_2080_);
v_i_boxed_2089_ = lean_unbox_usize(v_i_2081_);
lean_dec(v_i_2081_);
v_res_2090_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3(v_fixedParamPerms_2077_, v_xs_2078_, v_as_2079_, v_sz_boxed_2088_, v_i_boxed_2089_, v_bs_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_);
lean_dec(v___y_2086_);
lean_dec_ref(v___y_2085_);
lean_dec(v___y_2084_);
lean_dec_ref(v___y_2083_);
lean_dec_ref(v_as_2079_);
lean_dec_ref(v_fixedParamPerms_2077_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10_spec__11___redArg(lean_object* v_hi_2091_, lean_object* v_pivot_2092_, lean_object* v_as_2093_, lean_object* v_i_2094_, lean_object* v_k_2095_){
_start:
{
uint8_t v___x_2096_; 
v___x_2096_ = lean_nat_dec_lt(v_k_2095_, v_hi_2091_);
if (v___x_2096_ == 0)
{
lean_object* v___x_2097_; lean_object* v___x_2098_; 
lean_dec(v_k_2095_);
v___x_2097_ = lean_array_fswap(v_as_2093_, v_i_2094_, v_hi_2091_);
v___x_2098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2098_, 0, v_i_2094_);
lean_ctor_set(v___x_2098_, 1, v___x_2097_);
return v___x_2098_;
}
else
{
lean_object* v___x_2099_; uint8_t v___x_2100_; 
v___x_2099_ = lean_array_fget_borrowed(v_as_2093_, v_k_2095_);
v___x_2100_ = l_Nat_blt(v___x_2099_, v_pivot_2092_);
if (v___x_2100_ == 0)
{
lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2101_ = lean_unsigned_to_nat(1u);
v___x_2102_ = lean_nat_add(v_k_2095_, v___x_2101_);
lean_dec(v_k_2095_);
v_k_2095_ = v___x_2102_;
goto _start;
}
else
{
lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; 
v___x_2104_ = lean_array_fswap(v_as_2093_, v_i_2094_, v_k_2095_);
v___x_2105_ = lean_unsigned_to_nat(1u);
v___x_2106_ = lean_nat_add(v_i_2094_, v___x_2105_);
lean_dec(v_i_2094_);
v___x_2107_ = lean_nat_add(v_k_2095_, v___x_2105_);
lean_dec(v_k_2095_);
v_as_2093_ = v___x_2104_;
v_i_2094_ = v___x_2106_;
v_k_2095_ = v___x_2107_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10_spec__11___redArg___boxed(lean_object* v_hi_2109_, lean_object* v_pivot_2110_, lean_object* v_as_2111_, lean_object* v_i_2112_, lean_object* v_k_2113_){
_start:
{
lean_object* v_res_2114_; 
v_res_2114_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10_spec__11___redArg(v_hi_2109_, v_pivot_2110_, v_as_2111_, v_i_2112_, v_k_2113_);
lean_dec(v_pivot_2110_);
lean_dec(v_hi_2109_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10___redArg(lean_object* v_n_2115_, lean_object* v_as_2116_, lean_object* v_lo_2117_, lean_object* v_hi_2118_){
_start:
{
lean_object* v___y_2120_; uint8_t v___x_2130_; 
v___x_2130_ = lean_nat_dec_lt(v_lo_2117_, v_hi_2118_);
if (v___x_2130_ == 0)
{
lean_dec(v_lo_2117_);
return v_as_2116_;
}
else
{
lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v_mid_2133_; lean_object* v___y_2135_; lean_object* v___y_2141_; lean_object* v___x_2146_; lean_object* v___x_2147_; uint8_t v___x_2148_; 
v___x_2131_ = lean_nat_add(v_lo_2117_, v_hi_2118_);
v___x_2132_ = lean_unsigned_to_nat(1u);
v_mid_2133_ = lean_nat_shiftr(v___x_2131_, v___x_2132_);
lean_dec(v___x_2131_);
v___x_2146_ = lean_array_fget_borrowed(v_as_2116_, v_mid_2133_);
v___x_2147_ = lean_array_fget_borrowed(v_as_2116_, v_lo_2117_);
v___x_2148_ = l_Nat_blt(v___x_2146_, v___x_2147_);
if (v___x_2148_ == 0)
{
v___y_2141_ = v_as_2116_;
goto v___jp_2140_;
}
else
{
lean_object* v___x_2149_; 
v___x_2149_ = lean_array_fswap(v_as_2116_, v_lo_2117_, v_mid_2133_);
v___y_2141_ = v___x_2149_;
goto v___jp_2140_;
}
v___jp_2134_:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; uint8_t v___x_2138_; 
v___x_2136_ = lean_array_fget_borrowed(v___y_2135_, v_mid_2133_);
v___x_2137_ = lean_array_fget_borrowed(v___y_2135_, v_hi_2118_);
v___x_2138_ = l_Nat_blt(v___x_2136_, v___x_2137_);
if (v___x_2138_ == 0)
{
lean_dec(v_mid_2133_);
v___y_2120_ = v___y_2135_;
goto v___jp_2119_;
}
else
{
lean_object* v___x_2139_; 
v___x_2139_ = lean_array_fswap(v___y_2135_, v_mid_2133_, v_hi_2118_);
lean_dec(v_mid_2133_);
v___y_2120_ = v___x_2139_;
goto v___jp_2119_;
}
}
v___jp_2140_:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; uint8_t v___x_2144_; 
v___x_2142_ = lean_array_fget_borrowed(v___y_2141_, v_hi_2118_);
v___x_2143_ = lean_array_fget_borrowed(v___y_2141_, v_lo_2117_);
v___x_2144_ = l_Nat_blt(v___x_2142_, v___x_2143_);
if (v___x_2144_ == 0)
{
v___y_2135_ = v___y_2141_;
goto v___jp_2134_;
}
else
{
lean_object* v___x_2145_; 
v___x_2145_ = lean_array_fswap(v___y_2141_, v_lo_2117_, v_hi_2118_);
v___y_2135_ = v___x_2145_;
goto v___jp_2134_;
}
}
}
v___jp_2119_:
{
lean_object* v_pivot_2121_; lean_object* v___x_2122_; lean_object* v_fst_2123_; lean_object* v_snd_2124_; uint8_t v___x_2125_; 
v_pivot_2121_ = lean_array_fget(v___y_2120_, v_hi_2118_);
lean_inc_n(v_lo_2117_, 2);
v___x_2122_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10_spec__11___redArg(v_hi_2118_, v_pivot_2121_, v___y_2120_, v_lo_2117_, v_lo_2117_);
lean_dec(v_pivot_2121_);
v_fst_2123_ = lean_ctor_get(v___x_2122_, 0);
lean_inc(v_fst_2123_);
v_snd_2124_ = lean_ctor_get(v___x_2122_, 1);
lean_inc(v_snd_2124_);
lean_dec_ref(v___x_2122_);
v___x_2125_ = lean_nat_dec_le(v_hi_2118_, v_fst_2123_);
if (v___x_2125_ == 0)
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2126_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10___redArg(v_n_2115_, v_snd_2124_, v_lo_2117_, v_fst_2123_);
v___x_2127_ = lean_unsigned_to_nat(1u);
v___x_2128_ = lean_nat_add(v_fst_2123_, v___x_2127_);
lean_dec(v_fst_2123_);
v_as_2116_ = v___x_2126_;
v_lo_2117_ = v___x_2128_;
goto _start;
}
else
{
lean_dec(v_fst_2123_);
lean_dec(v_lo_2117_);
return v_snd_2124_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10___redArg___boxed(lean_object* v_n_2150_, lean_object* v_as_2151_, lean_object* v_lo_2152_, lean_object* v_hi_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10___redArg(v_n_2150_, v_as_2151_, v_lo_2152_, v_hi_2153_);
lean_dec(v_hi_2153_);
lean_dec(v_n_2150_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__6(lean_object* v_xs_2155_, lean_object* v_f_2156_, lean_object* v_x_2157_, lean_object* v_as_2158_, size_t v_i_2159_, size_t v_stop_2160_, lean_object* v_b_2161_){
_start:
{
lean_object* v___y_2163_; uint8_t v___x_2167_; 
v___x_2167_ = lean_usize_dec_eq(v_i_2159_, v_stop_2160_);
if (v___x_2167_ == 0)
{
lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; uint8_t v___x_2172_; 
v___x_2168_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_2169_ = lean_array_uget_borrowed(v_as_2158_, v_i_2159_);
v___x_2170_ = lean_array_get_borrowed(v___x_2168_, v_xs_2155_, v___x_2169_);
lean_inc_ref(v_f_2156_);
lean_inc(v___x_2170_);
v___x_2171_ = lean_apply_1(v_f_2156_, v___x_2170_);
v___x_2172_ = lean_nat_dec_eq(v___x_2171_, v_x_2157_);
lean_dec(v___x_2171_);
if (v___x_2172_ == 0)
{
v___y_2163_ = v_b_2161_;
goto v___jp_2162_;
}
else
{
lean_object* v___x_2173_; 
lean_inc(v___x_2169_);
v___x_2173_ = lean_array_push(v_b_2161_, v___x_2169_);
v___y_2163_ = v___x_2173_;
goto v___jp_2162_;
}
}
else
{
lean_dec_ref(v_f_2156_);
return v_b_2161_;
}
v___jp_2162_:
{
size_t v___x_2164_; size_t v___x_2165_; 
v___x_2164_ = ((size_t)1ULL);
v___x_2165_ = lean_usize_add(v_i_2159_, v___x_2164_);
v_i_2159_ = v___x_2165_;
v_b_2161_ = v___y_2163_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__6___boxed(lean_object* v_xs_2174_, lean_object* v_f_2175_, lean_object* v_x_2176_, lean_object* v_as_2177_, lean_object* v_i_2178_, lean_object* v_stop_2179_, lean_object* v_b_2180_){
_start:
{
size_t v_i_boxed_2181_; size_t v_stop_boxed_2182_; lean_object* v_res_2183_; 
v_i_boxed_2181_ = lean_unbox_usize(v_i_2178_);
lean_dec(v_i_2178_);
v_stop_boxed_2182_ = lean_unbox_usize(v_stop_2179_);
lean_dec(v_stop_2179_);
v_res_2183_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__6(v_xs_2174_, v_f_2175_, v_x_2176_, v_as_2177_, v_i_boxed_2181_, v_stop_boxed_2182_, v_b_2180_);
lean_dec_ref(v_as_2177_);
lean_dec(v_x_2176_);
lean_dec_ref(v_xs_2174_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__8(lean_object* v_xs_2186_, lean_object* v_f_2187_, size_t v_sz_2188_, size_t v_i_2189_, lean_object* v_bs_2190_){
_start:
{
uint8_t v___x_2191_; 
v___x_2191_ = lean_usize_dec_lt(v_i_2189_, v_sz_2188_);
if (v___x_2191_ == 0)
{
lean_object* v___x_2192_; 
lean_dec_ref(v_f_2187_);
v___x_2192_ = l_unsafeCast___redArg(v_bs_2190_);
lean_dec_ref(v_bs_2190_);
return v___x_2192_;
}
else
{
lean_object* v_v_2193_; lean_object* v___x_2194_; lean_object* v_bs_x27_2195_; lean_object* v___y_2197_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; uint8_t v___x_2207_; 
v_v_2193_ = lean_array_uget(v_bs_2190_, v_i_2189_);
v___x_2194_ = lean_unsigned_to_nat(0u);
v_bs_x27_2195_ = lean_array_uset(v_bs_2190_, v_i_2189_, v___x_2194_);
v___x_2203_ = lean_array_get_size(v_xs_2186_);
v___x_2204_ = l_Array_range(v___x_2203_);
v___x_2205_ = lean_array_get_size(v___x_2204_);
v___x_2206_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__8___closed__0));
v___x_2207_ = lean_nat_dec_lt(v___x_2194_, v___x_2205_);
if (v___x_2207_ == 0)
{
lean_dec_ref(v___x_2204_);
lean_dec(v_v_2193_);
v___y_2197_ = v___x_2206_;
goto v___jp_2196_;
}
else
{
lean_object* v___x_2208_; size_t v___x_2209_; size_t v___x_2210_; lean_object* v___x_2211_; 
v___x_2208_ = l_unsafeCast___redArg(v_v_2193_);
lean_dec(v_v_2193_);
v___x_2209_ = ((size_t)0ULL);
v___x_2210_ = lean_usize_of_nat(v___x_2205_);
lean_inc_ref(v_f_2187_);
v___x_2211_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__6(v_xs_2186_, v_f_2187_, v___x_2208_, v___x_2204_, v___x_2209_, v___x_2210_, v___x_2206_);
lean_dec_ref(v___x_2204_);
lean_dec(v___x_2208_);
v___y_2197_ = v___x_2211_;
goto v___jp_2196_;
}
v___jp_2196_:
{
size_t v___x_2198_; size_t v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2198_ = ((size_t)1ULL);
v___x_2199_ = lean_usize_add(v_i_2189_, v___x_2198_);
v___x_2200_ = l_unsafeCast___redArg(v___y_2197_);
lean_dec_ref(v___y_2197_);
v___x_2201_ = lean_array_uset(v_bs_x27_2195_, v_i_2189_, v___x_2200_);
v_i_2189_ = v___x_2199_;
v_bs_2190_ = v___x_2201_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__8___boxed(lean_object* v_xs_2212_, lean_object* v_f_2213_, lean_object* v_sz_2214_, lean_object* v_i_2215_, lean_object* v_bs_2216_){
_start:
{
size_t v_sz_boxed_2217_; size_t v_i_boxed_2218_; lean_object* v_res_2219_; 
v_sz_boxed_2217_ = lean_unbox_usize(v_sz_2214_);
lean_dec(v_sz_2214_);
v_i_boxed_2218_ = lean_unbox_usize(v_i_2215_);
lean_dec(v_i_2215_);
v_res_2219_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__8(v_xs_2212_, v_f_2213_, v_sz_boxed_2217_, v_i_boxed_2218_, v_bs_2216_);
lean_dec_ref(v_xs_2212_);
return v_res_2219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__11(lean_object* v_as_2220_, size_t v_i_2221_, size_t v_stop_2222_, lean_object* v_b_2223_){
_start:
{
uint8_t v___x_2224_; 
v___x_2224_ = lean_usize_dec_eq(v_i_2221_, v_stop_2222_);
if (v___x_2224_ == 0)
{
lean_object* v___x_2225_; lean_object* v___x_2226_; size_t v___x_2227_; size_t v___x_2228_; 
v___x_2225_ = lean_array_uget_borrowed(v_as_2220_, v_i_2221_);
v___x_2226_ = l_Array_append___redArg(v_b_2223_, v___x_2225_);
v___x_2227_ = ((size_t)1ULL);
v___x_2228_ = lean_usize_add(v_i_2221_, v___x_2227_);
v_i_2221_ = v___x_2228_;
v_b_2223_ = v___x_2226_;
goto _start;
}
else
{
return v_b_2223_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__11___boxed(lean_object* v_as_2230_, lean_object* v_i_2231_, lean_object* v_stop_2232_, lean_object* v_b_2233_){
_start:
{
size_t v_i_boxed_2234_; size_t v_stop_boxed_2235_; lean_object* v_res_2236_; 
v_i_boxed_2234_ = lean_unbox_usize(v_i_2231_);
lean_dec(v_i_2231_);
v_stop_boxed_2235_ = lean_unbox_usize(v_stop_2232_);
lean_dec(v_stop_2232_);
v_res_2236_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__11(v_as_2230_, v_i_boxed_2234_, v_stop_boxed_2235_, v_b_2233_);
lean_dec_ref(v_as_2230_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__7(lean_object* v_msg_2237_){
_start:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2238_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0);
v___x_2239_ = lean_panic_fn_borrowed(v___x_2238_, v_msg_2237_);
return v___x_2239_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__9___redArg(lean_object* v_xs_2240_, lean_object* v_ys_2241_, lean_object* v_x_2242_){
_start:
{
lean_object* v_zero_2243_; uint8_t v_isZero_2244_; 
v_zero_2243_ = lean_unsigned_to_nat(0u);
v_isZero_2244_ = lean_nat_dec_eq(v_x_2242_, v_zero_2243_);
if (v_isZero_2244_ == 1)
{
lean_dec(v_x_2242_);
return v_isZero_2244_;
}
else
{
lean_object* v_one_2245_; lean_object* v_n_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; uint8_t v___x_2249_; 
v_one_2245_ = lean_unsigned_to_nat(1u);
v_n_2246_ = lean_nat_sub(v_x_2242_, v_one_2245_);
lean_dec(v_x_2242_);
v___x_2247_ = lean_array_fget_borrowed(v_xs_2240_, v_n_2246_);
v___x_2248_ = lean_array_fget_borrowed(v_ys_2241_, v_n_2246_);
v___x_2249_ = lean_nat_dec_eq(v___x_2247_, v___x_2248_);
if (v___x_2249_ == 0)
{
lean_dec(v_n_2246_);
return v___x_2249_;
}
else
{
v_x_2242_ = v_n_2246_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__9___redArg___boxed(lean_object* v_xs_2251_, lean_object* v_ys_2252_, lean_object* v_x_2253_){
_start:
{
uint8_t v_res_2254_; lean_object* v_r_2255_; 
v_res_2254_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__9___redArg(v_xs_2251_, v_ys_2252_, v_x_2253_);
lean_dec_ref(v_ys_2252_);
lean_dec_ref(v_xs_2251_);
v_r_2255_ = lean_box(v_res_2254_);
return v_r_2255_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__2(void){
_start:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2258_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__1));
v___x_2259_ = lean_unsigned_to_nat(2u);
v___x_2260_ = lean_unsigned_to_nat(63u);
v___x_2261_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__0));
v___x_2262_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__0));
v___x_2263_ = l_mkPanicMessageWithDecl(v___x_2262_, v___x_2261_, v___x_2260_, v___x_2259_, v___x_2258_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5(lean_object* v_f_2266_, lean_object* v_xs_2267_, lean_object* v_ys_2268_){
_start:
{
size_t v_sz_2272_; size_t v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v_positions_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___y_2280_; lean_object* v___y_2286_; lean_object* v___y_2287_; lean_object* v___y_2288_; lean_object* v___y_2289_; lean_object* v___y_2292_; lean_object* v___y_2293_; lean_object* v___y_2294_; lean_object* v___y_2295_; lean_object* v___y_2298_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; uint8_t v___x_2308_; 
v_sz_2272_ = lean_array_size(v_ys_2268_);
v___x_2273_ = ((size_t)0ULL);
v___x_2274_ = l_unsafeCast___redArg(v_ys_2268_);
v___x_2275_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__8(v_xs_2267_, v_f_2266_, v_sz_2272_, v___x_2273_, v___x_2274_);
v_positions_2276_ = l_unsafeCast___redArg(v___x_2275_);
lean_dec_ref(v___x_2275_);
v___x_2277_ = lean_array_get_size(v_xs_2267_);
v___x_2278_ = l_Array_range(v___x_2277_);
v___x_2305_ = lean_unsigned_to_nat(0u);
v___x_2306_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__3));
v___x_2307_ = lean_array_get_size(v_positions_2276_);
v___x_2308_ = lean_nat_dec_lt(v___x_2305_, v___x_2307_);
if (v___x_2308_ == 0)
{
v___y_2298_ = v___x_2306_;
goto v___jp_2297_;
}
else
{
size_t v___x_2309_; lean_object* v___x_2310_; 
v___x_2309_ = lean_usize_of_nat(v___x_2307_);
v___x_2310_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__11(v_positions_2276_, v___x_2273_, v___x_2309_, v___x_2306_);
v___y_2298_ = v___x_2310_;
goto v___jp_2297_;
}
v___jp_2269_:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2270_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__2, &l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__2_once, _init_l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___closed__2);
v___x_2271_ = l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__7(v___x_2270_);
return v___x_2271_;
}
v___jp_2279_:
{
lean_object* v___x_2281_; lean_object* v___x_2282_; uint8_t v___x_2283_; 
v___x_2281_ = lean_array_get_size(v___x_2278_);
v___x_2282_ = lean_array_get_size(v___y_2280_);
v___x_2283_ = lean_nat_dec_eq(v___x_2281_, v___x_2282_);
if (v___x_2283_ == 0)
{
lean_dec_ref(v___y_2280_);
lean_dec_ref(v___x_2278_);
lean_dec(v_positions_2276_);
goto v___jp_2269_;
}
else
{
uint8_t v___x_2284_; 
v___x_2284_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__9___redArg(v___x_2278_, v___y_2280_, v___x_2281_);
lean_dec_ref(v___y_2280_);
lean_dec_ref(v___x_2278_);
if (v___x_2284_ == 0)
{
lean_dec(v_positions_2276_);
goto v___jp_2269_;
}
else
{
return v_positions_2276_;
}
}
}
v___jp_2285_:
{
lean_object* v___x_2290_; 
v___x_2290_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10___redArg(v___y_2288_, v___y_2287_, v___y_2286_, v___y_2289_);
lean_dec(v___y_2289_);
lean_dec(v___y_2288_);
v___y_2280_ = v___x_2290_;
goto v___jp_2279_;
}
v___jp_2291_:
{
uint8_t v___x_2296_; 
v___x_2296_ = lean_nat_dec_le(v___y_2295_, v___y_2294_);
if (v___x_2296_ == 0)
{
lean_dec(v___y_2294_);
lean_inc(v___y_2295_);
v___y_2286_ = v___y_2295_;
v___y_2287_ = v___y_2293_;
v___y_2288_ = v___y_2292_;
v___y_2289_ = v___y_2295_;
goto v___jp_2285_;
}
else
{
v___y_2286_ = v___y_2295_;
v___y_2287_ = v___y_2293_;
v___y_2288_ = v___y_2292_;
v___y_2289_ = v___y_2294_;
goto v___jp_2285_;
}
}
v___jp_2297_:
{
lean_object* v___x_2299_; lean_object* v___x_2300_; uint8_t v___x_2301_; 
v___x_2299_ = lean_array_get_size(v___y_2298_);
v___x_2300_ = lean_unsigned_to_nat(0u);
v___x_2301_ = lean_nat_dec_eq(v___x_2299_, v___x_2300_);
if (v___x_2301_ == 0)
{
lean_object* v___x_2302_; lean_object* v___x_2303_; uint8_t v___x_2304_; 
v___x_2302_ = lean_unsigned_to_nat(1u);
v___x_2303_ = lean_nat_sub(v___x_2299_, v___x_2302_);
v___x_2304_ = lean_nat_dec_le(v___x_2300_, v___x_2303_);
if (v___x_2304_ == 0)
{
lean_inc(v___x_2303_);
v___y_2292_ = v___x_2299_;
v___y_2293_ = v___y_2298_;
v___y_2294_ = v___x_2303_;
v___y_2295_ = v___x_2303_;
goto v___jp_2291_;
}
else
{
v___y_2292_ = v___x_2299_;
v___y_2293_ = v___y_2298_;
v___y_2294_ = v___x_2303_;
v___y_2295_ = v___x_2300_;
goto v___jp_2291_;
}
}
else
{
v___y_2280_ = v___y_2298_;
goto v___jp_2279_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___boxed(lean_object* v_f_2311_, lean_object* v_xs_2312_, lean_object* v_ys_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5(v_f_2311_, v_xs_2312_, v_ys_2313_);
lean_dec_ref(v_ys_2313_);
lean_dec_ref(v_xs_2312_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__0(lean_object* v_a_2315_, lean_object* v_a_2316_){
_start:
{
if (lean_obj_tag(v_a_2315_) == 0)
{
lean_object* v___x_2317_; 
v___x_2317_ = l_List_reverse___redArg(v_a_2316_);
return v___x_2317_;
}
else
{
lean_object* v_head_2318_; lean_object* v_tail_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2330_; 
v_head_2318_ = lean_ctor_get(v_a_2315_, 0);
v_tail_2319_ = lean_ctor_get(v_a_2315_, 1);
v_isSharedCheck_2330_ = !lean_is_exclusive(v_a_2315_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2321_ = v_a_2315_;
v_isShared_2322_ = v_isSharedCheck_2330_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_tail_2319_);
lean_inc(v_head_2318_);
lean_dec(v_a_2315_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2330_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2327_; 
v___x_2323_ = l_Nat_reprFast(v_head_2318_);
v___x_2324_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2324_, 0, v___x_2323_);
v___x_2325_ = l_Lean_MessageData_ofFormat(v___x_2324_);
if (v_isShared_2322_ == 0)
{
lean_ctor_set(v___x_2321_, 1, v_a_2316_);
lean_ctor_set(v___x_2321_, 0, v___x_2325_);
v___x_2327_ = v___x_2321_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v___x_2325_);
lean_ctor_set(v_reuseFailAlloc_2329_, 1, v_a_2316_);
v___x_2327_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
v_a_2315_ = v_tail_2319_;
v_a_2316_ = v___x_2327_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20(lean_object* v_a_2331_, lean_object* v_a_2332_){
_start:
{
if (lean_obj_tag(v_a_2331_) == 0)
{
lean_object* v___x_2333_; 
v___x_2333_ = l_List_reverse___redArg(v_a_2332_);
return v___x_2333_;
}
else
{
lean_object* v_head_2334_; lean_object* v_tail_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2347_; 
v_head_2334_ = lean_ctor_get(v_a_2331_, 0);
v_tail_2335_ = lean_ctor_get(v_a_2331_, 1);
v_isSharedCheck_2347_ = !lean_is_exclusive(v_a_2331_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2337_ = v_a_2331_;
v_isShared_2338_ = v_isSharedCheck_2347_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_tail_2335_);
lean_inc(v_head_2334_);
lean_dec(v_a_2331_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2347_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2344_; 
v___x_2339_ = lean_array_to_list(v_head_2334_);
v___x_2340_ = lean_box(0);
v___x_2341_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__0(v___x_2339_, v___x_2340_);
v___x_2342_ = l_Lean_MessageData_ofList(v___x_2341_);
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 1, v_a_2332_);
lean_ctor_set(v___x_2337_, 0, v___x_2342_);
v___x_2344_ = v___x_2337_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v___x_2342_);
lean_ctor_set(v_reuseFailAlloc_2346_, 1, v_a_2332_);
v___x_2344_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
v_a_2331_ = v_tail_2335_;
v_a_2332_ = v___x_2344_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__9(void){
_start:
{
lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2362_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__8));
v___x_2363_ = l_Lean_stringToMessageData(v___x_2362_);
return v___x_2363_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__11(void){
_start:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2365_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__10));
v___x_2366_ = l_Lean_stringToMessageData(v___x_2365_);
return v___x_2366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion(lean_object* v_preDefs_2367_, lean_object* v_fixedParamPerms_2368_, lean_object* v_xs_2369_, lean_object* v_recArgInfos_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_){
_start:
{
lean_object* v___f_2376_; lean_object* v___f_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; size_t v_sz_2381_; size_t v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_24553__overap_2387_; lean_object* v___x_2388_; 
v___f_2376_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__0));
v___f_2377_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__1));
v___x_2378_ = l_Lean_instInhabitedName;
v___x_2379_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_2380_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v_sz_2381_ = lean_array_size(v_preDefs_2367_);
v___x_2382_ = ((size_t)0ULL);
v___x_2383_ = l_unsafeCast___redArg(v_preDefs_2367_);
v___x_2384_ = lean_box_usize(v_sz_2381_);
v___x_2385_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed__const__1));
lean_inc(v___x_2383_);
lean_inc_ref(v_preDefs_2367_);
lean_inc_ref(v_xs_2369_);
lean_inc_ref(v_fixedParamPerms_2368_);
v___x_2386_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___boxed), 11, 6);
lean_closure_set(v___x_2386_, 0, v_fixedParamPerms_2368_);
lean_closure_set(v___x_2386_, 1, v_xs_2369_);
lean_closure_set(v___x_2386_, 2, v_preDefs_2367_);
lean_closure_set(v___x_2386_, 3, v___x_2384_);
lean_closure_set(v___x_2386_, 4, v___x_2385_);
lean_closure_set(v___x_2386_, 5, v___x_2383_);
v___x_24553__overap_2387_ = l_unsafeCast___redArg(v___x_2386_);
lean_dec_ref(v___x_2386_);
lean_inc(v_a_2374_);
lean_inc_ref(v_a_2373_);
lean_inc(v_a_2372_);
lean_inc_ref(v_a_2371_);
v___x_2388_ = lean_apply_5(v___x_24553__overap_2387_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_, lean_box(0));
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v_a_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_24555__overap_2393_; lean_object* v___x_2394_; 
v_a_2389_ = lean_ctor_get(v___x_2388_, 0);
lean_inc(v_a_2389_);
lean_dec_ref_known(v___x_2388_, 1);
v___x_2390_ = lean_box_usize(v_sz_2381_);
v___x_2391_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed__const__1));
lean_inc_ref(v_preDefs_2367_);
lean_inc_ref(v_xs_2369_);
lean_inc_ref(v_fixedParamPerms_2368_);
v___x_2392_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___boxed), 11, 6);
lean_closure_set(v___x_2392_, 0, v_fixedParamPerms_2368_);
lean_closure_set(v___x_2392_, 1, v_xs_2369_);
lean_closure_set(v___x_2392_, 2, v_preDefs_2367_);
lean_closure_set(v___x_2392_, 3, v___x_2390_);
lean_closure_set(v___x_2392_, 4, v___x_2391_);
lean_closure_set(v___x_2392_, 5, v___x_2383_);
v___x_24555__overap_2393_ = l_unsafeCast___redArg(v___x_2392_);
lean_dec_ref(v___x_2392_);
lean_inc(v_a_2374_);
lean_inc_ref(v_a_2373_);
lean_inc(v_a_2372_);
lean_inc_ref(v_a_2371_);
v___x_2394_ = lean_apply_5(v___x_24555__overap_2393_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_, lean_box(0));
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v_a_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v_indGroupInst_2398_; lean_object* v_toIndGroupInfo_2399_; lean_object* v_all_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2489_; 
v_a_2395_ = lean_ctor_get(v___x_2394_, 0);
lean_inc(v_a_2395_);
lean_dec_ref_known(v___x_2394_, 1);
v___x_2396_ = lean_unsigned_to_nat(0u);
v___x_2397_ = lean_array_get_borrowed(v___x_2379_, v_recArgInfos_2370_, v___x_2396_);
v_indGroupInst_2398_ = lean_ctor_get(v___x_2397_, 4);
v_toIndGroupInfo_2399_ = lean_ctor_get(v_indGroupInst_2398_, 0);
lean_inc_ref(v_toIndGroupInfo_2399_);
v_all_2400_ = lean_ctor_get(v_toIndGroupInfo_2399_, 0);
v_isSharedCheck_2489_ = !lean_is_exclusive(v_toIndGroupInfo_2399_);
if (v_isSharedCheck_2489_ == 0)
{
lean_object* v_unused_2490_; 
v_unused_2490_ = lean_ctor_get(v_toIndGroupInfo_2399_, 1);
lean_dec(v_unused_2490_);
v___x_2402_ = v_toIndGroupInfo_2399_;
v_isShared_2403_ = v_isSharedCheck_2489_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_all_2400_);
lean_dec(v_toIndGroupInfo_2399_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2489_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2404_ = lean_array_get(v___x_2378_, v_all_2400_, v___x_2396_);
lean_dec_ref(v_all_2400_);
v___x_2405_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4(v___x_2404_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_);
if (lean_obj_tag(v___x_2405_) == 0)
{
lean_object* v_a_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___f_2411_; lean_object* v___y_2413_; lean_object* v___y_2414_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___x_2455_; lean_object* v_a_2456_; uint8_t v___x_2457_; 
v_a_2406_ = lean_ctor_get(v___x_2405_, 0);
lean_inc(v_a_2406_);
lean_dec_ref_known(v___x_2405_, 1);
v___x_2407_ = l_Lean_InductiveVal_numTypeFormers(v_a_2406_);
v___x_2408_ = l_Array_range(v___x_2407_);
v___x_2409_ = l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5(v___f_2377_, v_recArgInfos_2370_, v___x_2408_);
lean_dec_ref(v___x_2408_);
v___x_2410_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5));
v___f_2411_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__6));
v___x_2455_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1(v___x_2410_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_);
v_a_2456_ = lean_ctor_get(v___x_2455_, 0);
lean_inc(v_a_2456_);
lean_dec_ref(v___x_2455_);
v___x_2457_ = lean_unbox(v_a_2456_);
lean_dec(v_a_2456_);
if (v___x_2457_ == 0)
{
lean_del_object(v___x_2402_);
v___y_2413_ = v_a_2371_;
v___y_2414_ = v_a_2372_;
v___y_2415_ = v_a_2373_;
v___y_2416_ = v_a_2374_;
goto v___jp_2412_;
}
else
{
lean_object* v_toConstantVal_2458_; lean_object* v_name_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2463_; 
v_toConstantVal_2458_ = lean_ctor_get(v_a_2406_, 0);
v_name_2459_ = lean_ctor_get(v_toConstantVal_2458_, 0);
v___x_2460_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__9, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__9);
lean_inc(v_name_2459_);
v___x_2461_ = l_Lean_MessageData_ofName(v_name_2459_);
if (v_isShared_2403_ == 0)
{
lean_ctor_set_tag(v___x_2402_, 7);
lean_ctor_set(v___x_2402_, 1, v___x_2461_);
lean_ctor_set(v___x_2402_, 0, v___x_2460_);
v___x_2463_ = v___x_2402_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v___x_2460_);
lean_ctor_set(v_reuseFailAlloc_2480_, 1, v___x_2461_);
v___x_2463_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2464_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__11, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__11_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__11);
v___x_2465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2463_);
lean_ctor_set(v___x_2465_, 1, v___x_2464_);
lean_inc_ref(v___x_2409_);
v___x_2466_ = lean_array_to_list(v___x_2409_);
v___x_2467_ = lean_box(0);
v___x_2468_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__20(v___x_2466_, v___x_2467_);
v___x_2469_ = l_Lean_MessageData_ofList(v___x_2468_);
v___x_2470_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2470_, 0, v___x_2465_);
lean_ctor_set(v___x_2470_, 1, v___x_2469_);
v___x_2471_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_2410_, v___x_2470_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_);
if (lean_obj_tag(v___x_2471_) == 0)
{
lean_dec_ref_known(v___x_2471_, 1);
v___y_2413_ = v_a_2371_;
v___y_2414_ = v_a_2372_;
v___y_2415_ = v_a_2373_;
v___y_2416_ = v_a_2374_;
goto v___jp_2412_;
}
else
{
lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2479_; 
lean_dec_ref(v___x_2409_);
lean_dec(v_a_2406_);
lean_dec(v_a_2395_);
lean_dec(v_a_2389_);
lean_dec_ref(v_recArgInfos_2370_);
lean_dec_ref(v_xs_2369_);
lean_dec_ref(v_fixedParamPerms_2368_);
lean_dec_ref(v_preDefs_2367_);
v_a_2472_ = lean_ctor_get(v___x_2471_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2471_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2474_ = v___x_2471_;
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v___x_2471_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2477_; 
if (v_isShared_2475_ == 0)
{
v___x_2477_ = v___x_2474_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2472_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
}
}
}
}
}
v___jp_2412_:
{
lean_object* v_toConstantVal_2417_; lean_object* v_numIndices_2418_; lean_object* v_name_2419_; lean_object* v___x_2420_; 
v_toConstantVal_2417_ = lean_ctor_get(v_a_2406_, 0);
lean_inc_ref(v_toConstantVal_2417_);
v_numIndices_2418_ = lean_ctor_get(v_a_2406_, 2);
lean_inc(v_numIndices_2418_);
lean_dec(v_a_2406_);
v_name_2419_ = lean_ctor_get(v_toConstantVal_2417_, 0);
lean_inc(v_name_2419_);
lean_dec_ref(v_toConstantVal_2417_);
v___x_2420_ = l_Lean_Meta_isInductivePredicate(v_name_2419_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_object* v_a_2421_; lean_object* v___x_2422_; lean_object* v___f_2423_; uint8_t v___x_2424_; 
v_a_2421_ = lean_ctor_get(v___x_2420_, 0);
lean_inc_n(v_a_2421_, 2);
lean_dec_ref_known(v___x_2420_, 1);
v___x_2422_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed__const__1));
lean_inc(v_numIndices_2418_);
lean_inc_ref(v_preDefs_2367_);
lean_inc_ref(v_xs_2369_);
lean_inc_ref(v_fixedParamPerms_2368_);
lean_inc_ref(v___x_2409_);
lean_inc(v_a_2389_);
lean_inc_ref(v_recArgInfos_2370_);
v___f_2423_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___boxed), 21, 14);
lean_closure_set(v___f_2423_, 0, v_recArgInfos_2370_);
lean_closure_set(v___f_2423_, 1, v_a_2389_);
lean_closure_set(v___f_2423_, 2, v___x_2409_);
lean_closure_set(v___f_2423_, 3, v___x_2422_);
lean_closure_set(v___f_2423_, 4, v_fixedParamPerms_2368_);
lean_closure_set(v___f_2423_, 5, v_xs_2369_);
lean_closure_set(v___f_2423_, 6, v___x_2396_);
lean_closure_set(v___f_2423_, 7, v_preDefs_2367_);
lean_closure_set(v___f_2423_, 8, v_numIndices_2418_);
lean_closure_set(v___f_2423_, 9, v___f_2376_);
lean_closure_set(v___f_2423_, 10, v___x_2410_);
lean_closure_set(v___f_2423_, 11, v_a_2421_);
lean_closure_set(v___f_2423_, 12, v___x_2380_);
lean_closure_set(v___f_2423_, 13, v___f_2411_);
v___x_2424_ = lean_unbox(v_a_2421_);
if (v___x_2424_ == 0)
{
size_t v_sz_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_24575__overap_2430_; lean_object* v___x_2431_; 
lean_dec_ref(v___f_2423_);
v_sz_2425_ = lean_array_size(v_recArgInfos_2370_);
v___x_2426_ = l_unsafeCast___redArg(v_recArgInfos_2370_);
v___x_2427_ = lean_box_usize(v_sz_2425_);
v___x_2428_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed__const__1));
lean_inc_ref(v_recArgInfos_2370_);
lean_inc(v_a_2389_);
v___x_2429_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__19___boxed), 11, 6);
lean_closure_set(v___x_2429_, 0, v_a_2389_);
lean_closure_set(v___x_2429_, 1, v_a_2395_);
lean_closure_set(v___x_2429_, 2, v_recArgInfos_2370_);
lean_closure_set(v___x_2429_, 3, v___x_2427_);
lean_closure_set(v___x_2429_, 4, v___x_2428_);
lean_closure_set(v___x_2429_, 5, v___x_2426_);
v___x_24575__overap_2430_ = l_unsafeCast___redArg(v___x_2429_);
lean_dec_ref(v___x_2429_);
lean_inc(v___y_2416_);
lean_inc_ref(v___y_2415_);
lean_inc(v___y_2414_);
lean_inc_ref(v___y_2413_);
v___x_2431_ = lean_apply_5(v___x_24575__overap_2430_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, lean_box(0));
if (lean_obj_tag(v___x_2431_) == 0)
{
lean_object* v_a_2432_; lean_object* v___x_2433_; uint8_t v___x_2434_; lean_object* v___x_2435_; 
v_a_2432_ = lean_ctor_get(v___x_2431_, 0);
lean_inc(v_a_2432_);
lean_dec_ref_known(v___x_2431_, 1);
v___x_2433_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__7));
v___x_2434_ = lean_unbox(v_a_2421_);
lean_dec(v_a_2421_);
v___x_2435_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2(v_recArgInfos_2370_, v_a_2389_, v___x_2409_, v___x_2382_, v_fixedParamPerms_2368_, v_xs_2369_, v___x_2396_, v_preDefs_2367_, v_numIndices_2418_, v___f_2376_, v___x_2410_, v___x_2434_, v___x_2380_, v___f_2411_, v___x_2433_, v_a_2432_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_);
lean_dec(v_numIndices_2418_);
return v___x_2435_;
}
else
{
lean_object* v_a_2436_; lean_object* v___x_2438_; uint8_t v_isShared_2439_; uint8_t v_isSharedCheck_2443_; 
lean_dec(v_a_2421_);
lean_dec(v_numIndices_2418_);
lean_dec_ref(v___x_2409_);
lean_dec(v_a_2389_);
lean_dec_ref(v_recArgInfos_2370_);
lean_dec_ref(v_xs_2369_);
lean_dec_ref(v_fixedParamPerms_2368_);
lean_dec_ref(v_preDefs_2367_);
v_a_2436_ = lean_ctor_get(v___x_2431_, 0);
v_isSharedCheck_2443_ = !lean_is_exclusive(v___x_2431_);
if (v_isSharedCheck_2443_ == 0)
{
v___x_2438_ = v___x_2431_;
v_isShared_2439_ = v_isSharedCheck_2443_;
goto v_resetjp_2437_;
}
else
{
lean_inc(v_a_2436_);
lean_dec(v___x_2431_);
v___x_2438_ = lean_box(0);
v_isShared_2439_ = v_isSharedCheck_2443_;
goto v_resetjp_2437_;
}
v_resetjp_2437_:
{
lean_object* v___x_2441_; 
if (v_isShared_2439_ == 0)
{
v___x_2441_ = v___x_2438_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v_a_2436_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
return v___x_2441_;
}
}
}
}
else
{
lean_object* v___x_2444_; lean_object* v___f_2445_; lean_object* v___x_2446_; 
lean_dec(v_a_2421_);
lean_dec(v_numIndices_2418_);
lean_dec_ref(v___x_2409_);
lean_dec(v_a_2395_);
lean_dec_ref(v_xs_2369_);
lean_dec_ref(v_fixedParamPerms_2368_);
lean_dec_ref(v_preDefs_2367_);
v___x_2444_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed__const__1));
lean_inc(v_a_2389_);
v___f_2445_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__3___boxed), 10, 4);
lean_closure_set(v___f_2445_, 0, v_recArgInfos_2370_);
lean_closure_set(v___f_2445_, 1, v_a_2389_);
lean_closure_set(v___f_2445_, 2, v___x_2444_);
lean_closure_set(v___f_2445_, 3, v___f_2423_);
v___x_2446_ = l_Lean_Elab_Structural_withFunTypes___redArg(v_a_2389_, v___f_2445_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_);
return v___x_2446_;
}
}
else
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2454_; 
lean_dec(v_numIndices_2418_);
lean_dec_ref(v___x_2409_);
lean_dec(v_a_2395_);
lean_dec(v_a_2389_);
lean_dec_ref(v_recArgInfos_2370_);
lean_dec_ref(v_xs_2369_);
lean_dec_ref(v_fixedParamPerms_2368_);
lean_dec_ref(v_preDefs_2367_);
v_a_2447_ = lean_ctor_get(v___x_2420_, 0);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2449_ = v___x_2420_;
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___x_2420_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2452_; 
if (v_isShared_2450_ == 0)
{
v___x_2452_ = v___x_2449_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v_a_2447_);
v___x_2452_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
return v___x_2452_;
}
}
}
}
}
else
{
lean_object* v_a_2481_; lean_object* v___x_2483_; uint8_t v_isShared_2484_; uint8_t v_isSharedCheck_2488_; 
lean_del_object(v___x_2402_);
lean_dec(v_a_2395_);
lean_dec(v_a_2389_);
lean_dec_ref(v_recArgInfos_2370_);
lean_dec_ref(v_xs_2369_);
lean_dec_ref(v_fixedParamPerms_2368_);
lean_dec_ref(v_preDefs_2367_);
v_a_2481_ = lean_ctor_get(v___x_2405_, 0);
v_isSharedCheck_2488_ = !lean_is_exclusive(v___x_2405_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2483_ = v___x_2405_;
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
else
{
lean_inc(v_a_2481_);
lean_dec(v___x_2405_);
v___x_2483_ = lean_box(0);
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
v_resetjp_2482_:
{
lean_object* v___x_2486_; 
if (v_isShared_2484_ == 0)
{
v___x_2486_ = v___x_2483_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v_a_2481_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
}
}
else
{
lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2498_; 
lean_dec(v_a_2389_);
lean_dec_ref(v_recArgInfos_2370_);
lean_dec_ref(v_xs_2369_);
lean_dec_ref(v_fixedParamPerms_2368_);
lean_dec_ref(v_preDefs_2367_);
v_a_2491_ = lean_ctor_get(v___x_2394_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2493_ = v___x_2394_;
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2394_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2496_; 
if (v_isShared_2494_ == 0)
{
v___x_2496_ = v___x_2493_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2491_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
}
else
{
lean_object* v_a_2499_; lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2506_; 
lean_dec(v___x_2383_);
lean_dec_ref(v_recArgInfos_2370_);
lean_dec_ref(v_xs_2369_);
lean_dec_ref(v_fixedParamPerms_2368_);
lean_dec_ref(v_preDefs_2367_);
v_a_2499_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2506_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2501_ = v___x_2388_;
v_isShared_2502_ = v_isSharedCheck_2506_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_a_2499_);
lean_dec(v___x_2388_);
v___x_2501_ = lean_box(0);
v_isShared_2502_ = v_isSharedCheck_2506_;
goto v_resetjp_2500_;
}
v_resetjp_2500_:
{
lean_object* v___x_2504_; 
if (v_isShared_2502_ == 0)
{
v___x_2504_ = v___x_2501_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v_a_2499_);
v___x_2504_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
return v___x_2504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___boxed(lean_object* v_preDefs_2507_, lean_object* v_fixedParamPerms_2508_, lean_object* v_xs_2509_, lean_object* v_recArgInfos_2510_, lean_object* v_a_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_, lean_object* v_a_2515_){
_start:
{
lean_object* v_res_2516_; 
v_res_2516_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion(v_preDefs_2507_, v_fixedParamPerms_2508_, v_xs_2509_, v_recArgInfos_2510_, v_a_2511_, v_a_2512_, v_a_2513_, v_a_2514_);
lean_dec(v_a_2514_);
lean_dec_ref(v_a_2513_);
lean_dec(v_a_2512_);
lean_dec_ref(v_a_2511_);
return v_res_2516_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14(lean_object* v_00_u03b3_2517_, lean_object* v_msg_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_){
_start:
{
lean_object* v___x_2524_; 
v___x_2524_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___redArg(v_msg_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14___boxed(lean_object* v_00_u03b3_2525_, lean_object* v_msg_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_){
_start:
{
lean_object* v_res_2532_; 
v_res_2532_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__14(v_00_u03b3_2525_, v_msg_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
return v_res_2532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6(lean_object* v_00_u03b3_2533_, lean_object* v_00_u03b1_2534_, lean_object* v_f_2535_, lean_object* v_positions_2536_, lean_object* v_ys_2537_, lean_object* v_xs_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg(v_f_2535_, v_positions_2536_, v_ys_2537_, v_xs_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___boxed(lean_object* v_00_u03b3_2545_, lean_object* v_00_u03b1_2546_, lean_object* v_f_2547_, lean_object* v_positions_2548_, lean_object* v_ys_2549_, lean_object* v_xs_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_){
_start:
{
lean_object* v_res_2556_; 
v_res_2556_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6(v_00_u03b3_2545_, v_00_u03b1_2546_, v_f_2547_, v_positions_2548_, v_ys_2549_, v_xs_2550_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_);
lean_dec(v___y_2554_);
lean_dec_ref(v___y_2553_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v_xs_2550_);
lean_dec_ref(v_ys_2549_);
lean_dec_ref(v_positions_2548_);
return v_res_2556_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(lean_object* v_00_u03b1_2557_, lean_object* v_preDefs_2558_, lean_object* v_k_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_){
_start:
{
lean_object* v___x_2565_; 
v___x_2565_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg(v_preDefs_2558_, v_k_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
return v___x_2565_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___boxed(lean_object* v_00_u03b1_2566_, lean_object* v_preDefs_2567_, lean_object* v_k_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_){
_start:
{
lean_object* v_res_2574_; 
v_res_2574_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(v_00_u03b1_2566_, v_preDefs_2567_, v_k_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_);
lean_dec(v___y_2572_);
lean_dec_ref(v___y_2571_);
lean_dec(v___y_2570_);
lean_dec_ref(v___y_2569_);
return v_res_2574_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29(lean_object* v_declName_2575_, uint8_t v_s_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_){
_start:
{
lean_object* v___x_2582_; 
v___x_2582_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___redArg(v_declName_2575_, v_s_2576_, v___y_2578_, v___y_2580_);
return v___x_2582_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29___boxed(lean_object* v_declName_2583_, lean_object* v_s_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_){
_start:
{
uint8_t v_s_boxed_2590_; lean_object* v_res_2591_; 
v_s_boxed_2590_ = lean_unbox(v_s_2584_);
v_res_2591_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16_spec__29(v_declName_2583_, v_s_boxed_2590_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_);
lean_dec(v___y_2588_);
lean_dec_ref(v___y_2587_);
lean_dec(v___y_2586_);
lean_dec_ref(v___y_2585_);
return v_res_2591_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4(lean_object* v_00_u03b1_2592_, lean_object* v_msg_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_){
_start:
{
lean_object* v___x_2599_; 
v___x_2599_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v_msg_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_);
return v___x_2599_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___boxed(lean_object* v_00_u03b1_2600_, lean_object* v_msg_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_){
_start:
{
lean_object* v_res_2607_; 
v_res_2607_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4(v_00_u03b1_2600_, v_msg_2601_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
lean_dec(v___y_2605_);
lean_dec_ref(v___y_2604_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
return v_res_2607_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__9(lean_object* v_xs_2608_, lean_object* v_ys_2609_, lean_object* v_hsz_2610_, lean_object* v_x_2611_, lean_object* v_x_2612_){
_start:
{
uint8_t v___x_2613_; 
v___x_2613_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__9___redArg(v_xs_2608_, v_ys_2609_, v_x_2611_);
return v___x_2613_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__9___boxed(lean_object* v_xs_2614_, lean_object* v_ys_2615_, lean_object* v_hsz_2616_, lean_object* v_x_2617_, lean_object* v_x_2618_){
_start:
{
uint8_t v_res_2619_; lean_object* v_r_2620_; 
v_res_2619_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__9(v_xs_2614_, v_ys_2615_, v_hsz_2616_, v_x_2617_, v_x_2618_);
lean_dec_ref(v_ys_2615_);
lean_dec_ref(v_xs_2614_);
v_r_2620_ = lean_box(v_res_2619_);
return v_r_2620_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10(lean_object* v_n_2621_, lean_object* v_as_2622_, lean_object* v_lo_2623_, lean_object* v_hi_2624_, lean_object* v_w_2625_, lean_object* v_hlo_2626_, lean_object* v_hhi_2627_){
_start:
{
lean_object* v___x_2628_; 
v___x_2628_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10___redArg(v_n_2621_, v_as_2622_, v_lo_2623_, v_hi_2624_);
return v___x_2628_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10___boxed(lean_object* v_n_2629_, lean_object* v_as_2630_, lean_object* v_lo_2631_, lean_object* v_hi_2632_, lean_object* v_w_2633_, lean_object* v_hlo_2634_, lean_object* v_hhi_2635_){
_start:
{
lean_object* v_res_2636_; 
v_res_2636_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10(v_n_2629_, v_as_2630_, v_lo_2631_, v_hi_2632_, v_w_2633_, v_hlo_2634_, v_hhi_2635_);
lean_dec(v_hi_2632_);
lean_dec(v_n_2629_);
return v_res_2636_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__15(lean_object* v_00_u03b1_2637_, lean_object* v_00_u03b3_2638_, lean_object* v_xs_2639_, lean_object* v_f_2640_, lean_object* v_as_2641_, lean_object* v_bs_2642_, lean_object* v_i_2643_, lean_object* v_cs_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_){
_start:
{
lean_object* v___x_2650_; 
v___x_2650_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__15___redArg(v_xs_2639_, v_f_2640_, v_as_2641_, v_bs_2642_, v_i_2643_, v_cs_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__15___boxed(lean_object* v_00_u03b1_2651_, lean_object* v_00_u03b3_2652_, lean_object* v_xs_2653_, lean_object* v_f_2654_, lean_object* v_as_2655_, lean_object* v_bs_2656_, lean_object* v_i_2657_, lean_object* v_cs_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_){
_start:
{
lean_object* v_res_2664_; 
v_res_2664_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__15(v_00_u03b1_2651_, v_00_u03b3_2652_, v_xs_2653_, v_f_2654_, v_as_2655_, v_bs_2656_, v_i_2657_, v_cs_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_);
lean_dec(v___y_2662_);
lean_dec_ref(v___y_2661_);
lean_dec(v___y_2660_);
lean_dec_ref(v___y_2659_);
lean_dec_ref(v_bs_2656_);
lean_dec_ref(v_as_2655_);
lean_dec_ref(v_xs_2653_);
return v_res_2664_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25(lean_object* v_env_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_){
_start:
{
lean_object* v___x_2671_; 
v___x_2671_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___redArg(v_env_2665_, v___y_2667_, v___y_2669_);
return v___x_2671_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25___boxed(lean_object* v_env_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_){
_start:
{
lean_object* v_res_2678_; 
v_res_2678_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23_spec__25(v_env_2672_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_);
lean_dec(v___y_2676_);
lean_dec_ref(v___y_2675_);
lean_dec(v___y_2674_);
lean_dec_ref(v___y_2673_);
return v_res_2678_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23(lean_object* v_00_u03b1_2679_, lean_object* v_env_2680_, lean_object* v_x_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_){
_start:
{
lean_object* v___x_2687_; 
v___x_2687_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23___redArg(v_env_2680_, v_x_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
return v___x_2687_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23___boxed(lean_object* v_00_u03b1_2688_, lean_object* v_env_2689_, lean_object* v_x_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_){
_start:
{
lean_object* v_res_2696_; 
v_res_2696_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12_spec__23(v_00_u03b1_2688_, v_env_2689_, v_x_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_);
lean_dec(v___y_2694_);
lean_dec_ref(v___y_2693_);
lean_dec(v___y_2692_);
lean_dec_ref(v___y_2691_);
return v_res_2696_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10_spec__11(lean_object* v_n_2697_, lean_object* v_lo_2698_, lean_object* v_hi_2699_, lean_object* v_hhi_2700_, lean_object* v_pivot_2701_, lean_object* v_as_2702_, lean_object* v_i_2703_, lean_object* v_k_2704_, lean_object* v_ilo_2705_, lean_object* v_ik_2706_, lean_object* v_w_2707_){
_start:
{
lean_object* v___x_2708_; 
v___x_2708_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10_spec__11___redArg(v_hi_2699_, v_pivot_2701_, v_as_2702_, v_i_2703_, v_k_2704_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10_spec__11___boxed(lean_object* v_n_2709_, lean_object* v_lo_2710_, lean_object* v_hi_2711_, lean_object* v_hhi_2712_, lean_object* v_pivot_2713_, lean_object* v_as_2714_, lean_object* v_i_2715_, lean_object* v_k_2716_, lean_object* v_ilo_2717_, lean_object* v_ik_2718_, lean_object* v_w_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5_spec__10_spec__11(v_n_2709_, v_lo_2710_, v_hi_2711_, v_hhi_2712_, v_pivot_2713_, v_as_2714_, v_i_2715_, v_k_2716_, v_ilo_2717_, v_ik_2718_, v_w_2719_);
lean_dec(v_pivot_2713_);
lean_dec(v_hi_2711_);
lean_dec(v_lo_2710_);
lean_dec(v_n_2709_);
return v_res_2720_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0(lean_object* v_x_2721_){
_start:
{
uint8_t v___x_2722_; 
v___x_2722_ = 0;
return v___x_2722_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0___boxed(lean_object* v_x_2723_){
_start:
{
uint8_t v_res_2724_; lean_object* v_r_2725_; 
v_res_2724_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0(v_x_2723_);
lean_dec(v_x_2723_);
v_r_2725_ = lean_box(v_res_2724_);
return v_r_2725_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1(lean_object* v_fvarId_2726_, lean_object* v_x_2727_){
_start:
{
uint8_t v___x_2728_; 
v___x_2728_ = l_Lean_instBEqFVarId_beq(v_fvarId_2726_, v_x_2727_);
return v___x_2728_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1___boxed(lean_object* v_fvarId_2729_, lean_object* v_x_2730_){
_start:
{
uint8_t v_res_2731_; lean_object* v_r_2732_; 
v_res_2731_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1(v_fvarId_2729_, v_x_2730_);
lean_dec(v_x_2730_);
lean_dec(v_fvarId_2729_);
v_r_2732_ = lean_box(v_res_2731_);
return v_r_2732_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; 
v___x_2734_ = lean_box(0);
v___x_2735_ = lean_unsigned_to_nat(16u);
v___x_2736_ = lean_mk_array(v___x_2735_, v___x_2734_);
return v___x_2736_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; 
v___x_2737_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1, &l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1);
v___x_2738_ = lean_unsigned_to_nat(0u);
v___x_2739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2739_, 0, v___x_2738_);
lean_ctor_set(v___x_2739_, 1, v___x_2737_);
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg(lean_object* v_e_2740_, lean_object* v_fvarId_2741_, lean_object* v___y_2742_){
_start:
{
lean_object* v___f_2744_; lean_object* v___f_2745_; lean_object* v___x_2746_; uint8_t v_fst_2748_; lean_object* v_mctx_2749_; lean_object* v___y_2767_; lean_object* v_mctx_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; uint8_t v___x_2775_; 
v___f_2744_ = ((lean_object*)(l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__0));
v___f_2745_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2745_, 0, v_fvarId_2741_);
v___x_2746_ = lean_st_ref_get(v___y_2742_);
v_mctx_2772_ = lean_ctor_get(v___x_2746_, 0);
lean_inc_ref_n(v_mctx_2772_, 2);
lean_dec(v___x_2746_);
v___x_2773_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2, &l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2);
v___x_2774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2773_);
lean_ctor_set(v___x_2774_, 1, v_mctx_2772_);
v___x_2775_ = l_Lean_Expr_hasFVar(v_e_2740_);
if (v___x_2775_ == 0)
{
uint8_t v___x_2776_; 
v___x_2776_ = l_Lean_Expr_hasMVar(v_e_2740_);
if (v___x_2776_ == 0)
{
lean_dec_ref_known(v___x_2774_, 2);
lean_dec_ref(v___f_2745_);
lean_dec_ref(v_e_2740_);
v_fst_2748_ = v___x_2776_;
v_mctx_2749_ = v_mctx_2772_;
goto v___jp_2747_;
}
else
{
lean_object* v___x_2777_; 
lean_dec_ref(v_mctx_2772_);
v___x_2777_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2745_, v___f_2744_, v_e_2740_, v___x_2774_);
v___y_2767_ = v___x_2777_;
goto v___jp_2766_;
}
}
else
{
lean_object* v___x_2778_; 
lean_dec_ref(v_mctx_2772_);
v___x_2778_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2745_, v___f_2744_, v_e_2740_, v___x_2774_);
v___y_2767_ = v___x_2778_;
goto v___jp_2766_;
}
v___jp_2747_:
{
lean_object* v___x_2750_; lean_object* v_cache_2751_; lean_object* v_zetaDeltaFVarIds_2752_; lean_object* v_postponed_2753_; lean_object* v_diag_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2764_; 
v___x_2750_ = lean_st_ref_take(v___y_2742_);
v_cache_2751_ = lean_ctor_get(v___x_2750_, 1);
v_zetaDeltaFVarIds_2752_ = lean_ctor_get(v___x_2750_, 2);
v_postponed_2753_ = lean_ctor_get(v___x_2750_, 3);
v_diag_2754_ = lean_ctor_get(v___x_2750_, 4);
v_isSharedCheck_2764_ = !lean_is_exclusive(v___x_2750_);
if (v_isSharedCheck_2764_ == 0)
{
lean_object* v_unused_2765_; 
v_unused_2765_ = lean_ctor_get(v___x_2750_, 0);
lean_dec(v_unused_2765_);
v___x_2756_ = v___x_2750_;
v_isShared_2757_ = v_isSharedCheck_2764_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_diag_2754_);
lean_inc(v_postponed_2753_);
lean_inc(v_zetaDeltaFVarIds_2752_);
lean_inc(v_cache_2751_);
lean_dec(v___x_2750_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2764_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2759_; 
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 0, v_mctx_2749_);
v___x_2759_ = v___x_2756_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v_mctx_2749_);
lean_ctor_set(v_reuseFailAlloc_2763_, 1, v_cache_2751_);
lean_ctor_set(v_reuseFailAlloc_2763_, 2, v_zetaDeltaFVarIds_2752_);
lean_ctor_set(v_reuseFailAlloc_2763_, 3, v_postponed_2753_);
lean_ctor_set(v_reuseFailAlloc_2763_, 4, v_diag_2754_);
v___x_2759_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; 
v___x_2760_ = lean_st_ref_put(v___y_2742_, v___x_2759_);
v___x_2761_ = lean_box(v_fst_2748_);
v___x_2762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2762_, 0, v___x_2761_);
return v___x_2762_;
}
}
}
v___jp_2766_:
{
lean_object* v_snd_2768_; lean_object* v_fst_2769_; lean_object* v_mctx_2770_; uint8_t v___x_2771_; 
v_snd_2768_ = lean_ctor_get(v___y_2767_, 1);
lean_inc(v_snd_2768_);
v_fst_2769_ = lean_ctor_get(v___y_2767_, 0);
lean_inc(v_fst_2769_);
lean_dec_ref(v___y_2767_);
v_mctx_2770_ = lean_ctor_get(v_snd_2768_, 1);
lean_inc_ref(v_mctx_2770_);
lean_dec(v_snd_2768_);
v___x_2771_ = lean_unbox(v_fst_2769_);
lean_dec(v_fst_2769_);
v_fst_2748_ = v___x_2771_;
v_mctx_2749_ = v_mctx_2770_;
goto v___jp_2747_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___boxed(lean_object* v_e_2779_, lean_object* v_fvarId_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_){
_start:
{
lean_object* v_res_2783_; 
v_res_2783_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg(v_e_2779_, v_fvarId_2780_, v___y_2781_);
lean_dec(v___y_2781_);
return v_res_2783_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5(lean_object* v_e_2784_, lean_object* v_fvarId_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_){
_start:
{
lean_object* v___x_2791_; 
v___x_2791_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg(v_e_2784_, v_fvarId_2785_, v___y_2787_);
return v___x_2791_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___boxed(lean_object* v_e_2792_, lean_object* v_fvarId_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_){
_start:
{
lean_object* v_res_2799_; 
v_res_2799_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5(v_e_2792_, v_fvarId_2793_, v___y_2794_, v___y_2795_, v___y_2796_, v___y_2797_);
lean_dec(v___y_2797_);
lean_dec_ref(v___y_2796_);
lean_dec(v___y_2795_);
lean_dec_ref(v___y_2794_);
return v_res_2799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0(lean_object* v_k_2800_, lean_object* v_b_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_){
_start:
{
lean_object* v___x_2807_; 
lean_inc(v___y_2805_);
lean_inc_ref(v___y_2804_);
lean_inc(v___y_2803_);
lean_inc_ref(v___y_2802_);
v___x_2807_ = lean_apply_6(v_k_2800_, v_b_2801_, v___y_2802_, v___y_2803_, v___y_2804_, v___y_2805_, lean_box(0));
return v___x_2807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0___boxed(lean_object* v_k_2808_, lean_object* v_b_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_){
_start:
{
lean_object* v_res_2815_; 
v_res_2815_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0(v_k_2808_, v_b_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_);
lean_dec(v___y_2813_);
lean_dec_ref(v___y_2812_);
lean_dec(v___y_2811_);
lean_dec_ref(v___y_2810_);
return v_res_2815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg(lean_object* v_perm_2816_, lean_object* v_type_2817_, lean_object* v_k_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
lean_object* v___f_2824_; lean_object* v___x_2825_; 
v___f_2824_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2824_, 0, v_k_2818_);
v___x_2825_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_box(0), v_perm_2816_, v_type_2817_, v___f_2824_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_);
if (lean_obj_tag(v___x_2825_) == 0)
{
lean_object* v_a_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2833_; 
v_a_2826_ = lean_ctor_get(v___x_2825_, 0);
v_isSharedCheck_2833_ = !lean_is_exclusive(v___x_2825_);
if (v_isSharedCheck_2833_ == 0)
{
v___x_2828_ = v___x_2825_;
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
else
{
lean_inc(v_a_2826_);
lean_dec(v___x_2825_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v___x_2831_; 
if (v_isShared_2829_ == 0)
{
v___x_2831_ = v___x_2828_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_a_2826_);
v___x_2831_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
return v___x_2831_;
}
}
}
else
{
lean_object* v_a_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2841_; 
v_a_2834_ = lean_ctor_get(v___x_2825_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2825_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2836_ = v___x_2825_;
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_a_2834_);
lean_dec(v___x_2825_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2839_; 
if (v_isShared_2837_ == 0)
{
v___x_2839_ = v___x_2836_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_a_2834_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
return v___x_2839_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___boxed(lean_object* v_perm_2842_, lean_object* v_type_2843_, lean_object* v_k_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_){
_start:
{
lean_object* v_res_2850_; 
v_res_2850_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg(v_perm_2842_, v_type_2843_, v_k_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
lean_dec(v___y_2848_);
lean_dec_ref(v___y_2847_);
lean_dec(v___y_2846_);
lean_dec_ref(v___y_2845_);
return v_res_2850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13(lean_object* v_00_u03b1_2851_, lean_object* v_perm_2852_, lean_object* v_type_2853_, lean_object* v_k_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_){
_start:
{
lean_object* v___x_2860_; 
v___x_2860_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg(v_perm_2852_, v_type_2853_, v_k_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_);
return v___x_2860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___boxed(lean_object* v_00_u03b1_2861_, lean_object* v_perm_2862_, lean_object* v_type_2863_, lean_object* v_k_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13(v_00_u03b1_2861_, v_perm_2862_, v_type_2863_, v_k_2864_, v___y_2865_, v___y_2866_, v___y_2867_, v___y_2868_);
lean_dec(v___y_2868_);
lean_dec_ref(v___y_2867_);
lean_dec(v___y_2866_);
lean_dec_ref(v___y_2865_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1(lean_object* v_a_2871_, lean_object* v_fst_2872_, lean_object* v_fst_2873_, lean_object* v___x_2874_, lean_object* v___x_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_){
_start:
{
lean_object* v___x_2881_; 
lean_inc_ref(v_fst_2872_);
v___x_2881_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion(v_a_2871_, v_fst_2872_, v_fst_2873_, v___x_2874_, v___y_2876_, v___y_2877_, v___y_2878_, v___y_2879_);
if (lean_obj_tag(v___x_2881_) == 0)
{
lean_object* v_a_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2891_; 
v_a_2882_ = lean_ctor_get(v___x_2881_, 0);
v_isSharedCheck_2891_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_2891_ == 0)
{
v___x_2884_ = v___x_2881_;
v_isShared_2885_ = v_isSharedCheck_2891_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_a_2882_);
lean_dec(v___x_2881_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2891_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2889_; 
v___x_2886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2886_, 0, v_a_2882_);
lean_ctor_set(v___x_2886_, 1, v_fst_2872_);
v___x_2887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2875_);
lean_ctor_set(v___x_2887_, 1, v___x_2886_);
if (v_isShared_2885_ == 0)
{
lean_ctor_set(v___x_2884_, 0, v___x_2887_);
v___x_2889_ = v___x_2884_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v___x_2887_);
v___x_2889_ = v_reuseFailAlloc_2890_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
return v___x_2889_;
}
}
}
else
{
lean_object* v_a_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2899_; 
lean_dec(v___x_2875_);
lean_dec_ref(v_fst_2872_);
v_a_2892_ = lean_ctor_get(v___x_2881_, 0);
v_isSharedCheck_2899_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2894_ = v___x_2881_;
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_a_2892_);
lean_dec(v___x_2881_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v___x_2897_; 
if (v_isShared_2895_ == 0)
{
v___x_2897_ = v___x_2894_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v_a_2892_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
return v___x_2897_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___boxed(lean_object* v_a_2900_, lean_object* v_fst_2901_, lean_object* v_fst_2902_, lean_object* v___x_2903_, lean_object* v___x_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_){
_start:
{
lean_object* v_res_2910_; 
v_res_2910_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1(v_a_2900_, v_fst_2901_, v_fst_2902_, v___x_2903_, v___x_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_);
lean_dec(v___y_2908_);
lean_dec_ref(v___y_2907_);
lean_dec(v___y_2906_);
lean_dec_ref(v___y_2905_);
return v_res_2910_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3(size_t v_sz_2911_, size_t v_i_2912_, lean_object* v_bs_2913_){
_start:
{
uint8_t v___x_2914_; 
v___x_2914_ = lean_usize_dec_lt(v_i_2912_, v_sz_2911_);
if (v___x_2914_ == 0)
{
lean_object* v___x_2915_; 
v___x_2915_ = l_unsafeCast___redArg(v_bs_2913_);
lean_dec_ref(v_bs_2913_);
return v___x_2915_;
}
else
{
lean_object* v_v_2916_; lean_object* v___x_2917_; lean_object* v_bs_x27_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; size_t v___x_2921_; size_t v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; 
v_v_2916_ = lean_array_uget(v_bs_2913_, v_i_2912_);
v___x_2917_ = lean_unsigned_to_nat(0u);
v_bs_x27_2918_ = lean_array_uset(v_bs_2913_, v_i_2912_, v___x_2917_);
v___x_2919_ = l_unsafeCast___redArg(v_v_2916_);
lean_dec(v_v_2916_);
v___x_2920_ = l_Lean_Elab_Structural_RecArgInfo_indicesAndRecArgPos(v___x_2919_);
v___x_2921_ = ((size_t)1ULL);
v___x_2922_ = lean_usize_add(v_i_2912_, v___x_2921_);
v___x_2923_ = l_unsafeCast___redArg(v___x_2920_);
lean_dec_ref(v___x_2920_);
v___x_2924_ = lean_array_uset(v_bs_x27_2918_, v_i_2912_, v___x_2923_);
v_i_2912_ = v___x_2922_;
v_bs_2913_ = v___x_2924_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3___boxed(lean_object* v_sz_2926_, lean_object* v_i_2927_, lean_object* v_bs_2928_){
_start:
{
size_t v_sz_boxed_2929_; size_t v_i_boxed_2930_; lean_object* v_res_2931_; 
v_sz_boxed_2929_ = lean_unbox_usize(v_sz_2926_);
lean_dec(v_sz_2926_);
v_i_boxed_2930_ = lean_unbox_usize(v_i_2927_);
lean_dec(v_i_2927_);
v_res_2931_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3(v_sz_boxed_2929_, v_i_boxed_2930_, v_bs_2928_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(lean_object* v_lctx_2932_, lean_object* v_localInsts_2933_, lean_object* v_x_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_){
_start:
{
lean_object* v___x_2940_; 
v___x_2940_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_2932_, v_localInsts_2933_, v_x_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
if (lean_obj_tag(v___x_2940_) == 0)
{
lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2948_; 
v_a_2941_ = lean_ctor_get(v___x_2940_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2940_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2943_ = v___x_2940_;
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_dec(v___x_2940_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_a_2941_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
else
{
lean_object* v_a_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_2956_; 
v_a_2949_ = lean_ctor_get(v___x_2940_, 0);
v_isSharedCheck_2956_ = !lean_is_exclusive(v___x_2940_);
if (v_isSharedCheck_2956_ == 0)
{
v___x_2951_ = v___x_2940_;
v_isShared_2952_ = v_isSharedCheck_2956_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_a_2949_);
lean_dec(v___x_2940_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_2956_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v___x_2954_; 
if (v_isShared_2952_ == 0)
{
v___x_2954_ = v___x_2951_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2955_; 
v_reuseFailAlloc_2955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2955_, 0, v_a_2949_);
v___x_2954_ = v_reuseFailAlloc_2955_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
return v___x_2954_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg___boxed(lean_object* v_lctx_2957_, lean_object* v_localInsts_2958_, lean_object* v_x_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_){
_start:
{
lean_object* v_res_2965_; 
v_res_2965_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v_lctx_2957_, v_localInsts_2958_, v_x_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
lean_dec(v___y_2963_);
lean_dec_ref(v___y_2962_);
lean_dec(v___y_2961_);
lean_dec_ref(v___y_2960_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12(lean_object* v_as_2966_, size_t v_i_2967_, size_t v_stop_2968_, lean_object* v_b_2969_){
_start:
{
uint8_t v___x_2970_; 
v___x_2970_ = lean_usize_dec_eq(v_i_2967_, v_stop_2968_);
if (v___x_2970_ == 0)
{
lean_object* v___x_2971_; lean_object* v___x_2972_; size_t v___x_2973_; size_t v___x_2974_; 
v___x_2971_ = lean_array_uget_borrowed(v_as_2966_, v_i_2967_);
lean_inc(v___x_2971_);
v___x_2972_ = lean_local_ctx_erase(v_b_2969_, v___x_2971_);
v___x_2973_ = ((size_t)1ULL);
v___x_2974_ = lean_usize_add(v_i_2967_, v___x_2973_);
v_i_2967_ = v___x_2974_;
v_b_2969_ = v___x_2972_;
goto _start;
}
else
{
return v_b_2969_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12___boxed(lean_object* v_as_2976_, lean_object* v_i_2977_, lean_object* v_stop_2978_, lean_object* v_b_2979_){
_start:
{
size_t v_i_boxed_2980_; size_t v_stop_boxed_2981_; lean_object* v_res_2982_; 
v_i_boxed_2980_ = lean_unbox_usize(v_i_2977_);
lean_dec(v_i_2977_);
v_stop_boxed_2981_ = lean_unbox_usize(v_stop_2978_);
lean_dec(v_stop_2978_);
v_res_2982_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12(v_as_2976_, v_i_boxed_2980_, v_stop_boxed_2981_, v_b_2979_);
lean_dec_ref(v_as_2976_);
return v_res_2982_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11(lean_object* v_a_2983_, lean_object* v_as_2984_, size_t v_i_2985_, size_t v_stop_2986_){
_start:
{
uint8_t v___x_2987_; 
v___x_2987_ = lean_usize_dec_eq(v_i_2985_, v_stop_2986_);
if (v___x_2987_ == 0)
{
lean_object* v___x_2988_; uint8_t v___x_2989_; 
v___x_2988_ = lean_array_uget_borrowed(v_as_2984_, v_i_2985_);
v___x_2989_ = l_Lean_instBEqFVarId_beq(v_a_2983_, v___x_2988_);
if (v___x_2989_ == 0)
{
size_t v___x_2990_; size_t v___x_2991_; 
v___x_2990_ = ((size_t)1ULL);
v___x_2991_ = lean_usize_add(v_i_2985_, v___x_2990_);
v_i_2985_ = v___x_2991_;
goto _start;
}
else
{
return v___x_2989_;
}
}
else
{
uint8_t v___x_2993_; 
v___x_2993_ = 0;
return v___x_2993_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11___boxed(lean_object* v_a_2994_, lean_object* v_as_2995_, lean_object* v_i_2996_, lean_object* v_stop_2997_){
_start:
{
size_t v_i_boxed_2998_; size_t v_stop_boxed_2999_; uint8_t v_res_3000_; lean_object* v_r_3001_; 
v_i_boxed_2998_ = lean_unbox_usize(v_i_2996_);
lean_dec(v_i_2996_);
v_stop_boxed_2999_ = lean_unbox_usize(v_stop_2997_);
lean_dec(v_stop_2997_);
v_res_3000_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11(v_a_2994_, v_as_2995_, v_i_boxed_2998_, v_stop_boxed_2999_);
lean_dec_ref(v_as_2995_);
lean_dec(v_a_2994_);
v_r_3001_ = lean_box(v_res_3000_);
return v_r_3001_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9(lean_object* v_as_3002_, lean_object* v_a_3003_){
_start:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; uint8_t v___x_3006_; 
v___x_3004_ = lean_unsigned_to_nat(0u);
v___x_3005_ = lean_array_get_size(v_as_3002_);
v___x_3006_ = lean_nat_dec_lt(v___x_3004_, v___x_3005_);
if (v___x_3006_ == 0)
{
return v___x_3006_;
}
else
{
if (v___x_3006_ == 0)
{
return v___x_3006_;
}
else
{
size_t v___x_3007_; size_t v___x_3008_; uint8_t v___x_3009_; 
v___x_3007_ = ((size_t)0ULL);
v___x_3008_ = lean_usize_of_nat(v___x_3005_);
v___x_3009_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11(v_a_3003_, v_as_3002_, v___x_3007_, v___x_3008_);
return v___x_3009_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9___boxed(lean_object* v_as_3010_, lean_object* v_a_3011_){
_start:
{
uint8_t v_res_3012_; lean_object* v_r_3013_; 
v_res_3012_ = l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9(v_as_3010_, v_a_3011_);
lean_dec(v_a_3011_);
lean_dec_ref(v_as_3010_);
v_r_3013_ = lean_box(v_res_3012_);
return v_r_3013_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11(lean_object* v_fvarIds_3014_, lean_object* v_as_3015_, size_t v_i_3016_, size_t v_stop_3017_, lean_object* v_b_3018_){
_start:
{
lean_object* v___y_3020_; uint8_t v___x_3024_; 
v___x_3024_ = lean_usize_dec_eq(v_i_3016_, v_stop_3017_);
if (v___x_3024_ == 0)
{
lean_object* v___x_3025_; lean_object* v_fvar_3026_; lean_object* v___x_3027_; uint8_t v___x_3028_; 
v___x_3025_ = lean_array_uget_borrowed(v_as_3015_, v_i_3016_);
v_fvar_3026_ = lean_ctor_get(v___x_3025_, 1);
v___x_3027_ = l_Lean_Expr_fvarId_x21(v_fvar_3026_);
v___x_3028_ = l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9(v_fvarIds_3014_, v___x_3027_);
lean_dec(v___x_3027_);
if (v___x_3028_ == 0)
{
lean_object* v___x_3029_; 
lean_inc(v___x_3025_);
v___x_3029_ = lean_array_push(v_b_3018_, v___x_3025_);
v___y_3020_ = v___x_3029_;
goto v___jp_3019_;
}
else
{
v___y_3020_ = v_b_3018_;
goto v___jp_3019_;
}
}
else
{
return v_b_3018_;
}
v___jp_3019_:
{
size_t v___x_3021_; size_t v___x_3022_; 
v___x_3021_ = ((size_t)1ULL);
v___x_3022_ = lean_usize_add(v_i_3016_, v___x_3021_);
v_i_3016_ = v___x_3022_;
v_b_3018_ = v___y_3020_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11___boxed(lean_object* v_fvarIds_3030_, lean_object* v_as_3031_, lean_object* v_i_3032_, lean_object* v_stop_3033_, lean_object* v_b_3034_){
_start:
{
size_t v_i_boxed_3035_; size_t v_stop_boxed_3036_; lean_object* v_res_3037_; 
v_i_boxed_3035_ = lean_unbox_usize(v_i_3032_);
lean_dec(v_i_3032_);
v_stop_boxed_3036_ = lean_unbox_usize(v_stop_3033_);
lean_dec(v_stop_3033_);
v_res_3037_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11(v_fvarIds_3030_, v_as_3031_, v_i_boxed_3035_, v_stop_boxed_3036_, v_b_3034_);
lean_dec_ref(v_as_3031_);
lean_dec_ref(v_fvarIds_3030_);
return v_res_3037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(lean_object* v_fvarIds_3040_, lean_object* v_k_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_){
_start:
{
lean_object* v_lctx_3047_; lean_object* v_localInstances_3048_; lean_object* v___x_3049_; lean_object* v___y_3051_; lean_object* v___x_3060_; uint8_t v___x_3061_; 
v_lctx_3047_ = lean_ctor_get(v___y_3042_, 2);
v_localInstances_3048_ = lean_ctor_get(v___y_3042_, 3);
v___x_3049_ = lean_unsigned_to_nat(0u);
v___x_3060_ = lean_array_get_size(v_fvarIds_3040_);
v___x_3061_ = lean_nat_dec_lt(v___x_3049_, v___x_3060_);
if (v___x_3061_ == 0)
{
lean_inc_ref(v_lctx_3047_);
v___y_3051_ = v_lctx_3047_;
goto v___jp_3050_;
}
else
{
size_t v___x_3062_; size_t v___x_3063_; lean_object* v___x_3064_; 
v___x_3062_ = ((size_t)0ULL);
v___x_3063_ = lean_usize_of_nat(v___x_3060_);
lean_inc_ref(v_lctx_3047_);
v___x_3064_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12(v_fvarIds_3040_, v___x_3062_, v___x_3063_, v_lctx_3047_);
v___y_3051_ = v___x_3064_;
goto v___jp_3050_;
}
v___jp_3050_:
{
lean_object* v___x_3052_; lean_object* v___x_3053_; uint8_t v___x_3054_; 
v___x_3052_ = lean_array_get_size(v_localInstances_3048_);
v___x_3053_ = ((lean_object*)(l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg___closed__0));
v___x_3054_ = lean_nat_dec_lt(v___x_3049_, v___x_3052_);
if (v___x_3054_ == 0)
{
lean_object* v___x_3055_; 
v___x_3055_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v___y_3051_, v___x_3053_, v_k_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
return v___x_3055_;
}
else
{
size_t v___x_3056_; size_t v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3056_ = ((size_t)0ULL);
v___x_3057_ = lean_usize_of_nat(v___x_3052_);
v___x_3058_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11(v_fvarIds_3040_, v_localInstances_3048_, v___x_3056_, v___x_3057_, v___x_3053_);
v___x_3059_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v___y_3051_, v___x_3058_, v_k_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
return v___x_3059_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg___boxed(lean_object* v_fvarIds_3065_, lean_object* v_k_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_){
_start:
{
lean_object* v_res_3072_; 
v_res_3072_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(v_fvarIds_3065_, v_k_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_);
lean_dec(v___y_3070_);
lean_dec_ref(v___y_3069_);
lean_dec(v___y_3068_);
lean_dec_ref(v___y_3067_);
lean_dec_ref(v_fvarIds_3065_);
return v_res_3072_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17_spec__21(lean_object* v_x_3073_, lean_object* v_x_3074_, lean_object* v_x_3075_){
_start:
{
if (lean_obj_tag(v_x_3075_) == 0)
{
lean_dec(v_x_3073_);
return v_x_3074_;
}
else
{
lean_object* v_head_3076_; lean_object* v_tail_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3087_; 
v_head_3076_ = lean_ctor_get(v_x_3075_, 0);
v_tail_3077_ = lean_ctor_get(v_x_3075_, 1);
v_isSharedCheck_3087_ = !lean_is_exclusive(v_x_3075_);
if (v_isSharedCheck_3087_ == 0)
{
v___x_3079_ = v_x_3075_;
v_isShared_3080_ = v_isSharedCheck_3087_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_tail_3077_);
lean_inc(v_head_3076_);
lean_dec(v_x_3075_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3087_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v___x_3082_; 
lean_inc(v_x_3073_);
if (v_isShared_3080_ == 0)
{
lean_ctor_set_tag(v___x_3079_, 5);
lean_ctor_set(v___x_3079_, 1, v_x_3073_);
lean_ctor_set(v___x_3079_, 0, v_x_3074_);
v___x_3082_ = v___x_3079_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v_x_3074_);
lean_ctor_set(v_reuseFailAlloc_3086_, 1, v_x_3073_);
v___x_3082_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
lean_object* v___x_3083_; lean_object* v___x_3084_; 
v___x_3083_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_head_3076_);
v___x_3084_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3084_, 0, v___x_3082_);
lean_ctor_set(v___x_3084_, 1, v___x_3083_);
v_x_3074_ = v___x_3084_;
v_x_3075_ = v_tail_3077_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17(lean_object* v_x_3088_, lean_object* v_x_3089_, lean_object* v_x_3090_){
_start:
{
if (lean_obj_tag(v_x_3090_) == 0)
{
lean_dec(v_x_3088_);
return v_x_3089_;
}
else
{
lean_object* v_head_3091_; lean_object* v_tail_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3102_; 
v_head_3091_ = lean_ctor_get(v_x_3090_, 0);
v_tail_3092_ = lean_ctor_get(v_x_3090_, 1);
v_isSharedCheck_3102_ = !lean_is_exclusive(v_x_3090_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3094_ = v_x_3090_;
v_isShared_3095_ = v_isSharedCheck_3102_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_tail_3092_);
lean_inc(v_head_3091_);
lean_dec(v_x_3090_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3102_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
lean_inc(v_x_3088_);
if (v_isShared_3095_ == 0)
{
lean_ctor_set_tag(v___x_3094_, 5);
lean_ctor_set(v___x_3094_, 1, v_x_3088_);
lean_ctor_set(v___x_3094_, 0, v_x_3089_);
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_x_3089_);
lean_ctor_set(v_reuseFailAlloc_3101_, 1, v_x_3088_);
v___x_3097_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; 
v___x_3098_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_head_3091_);
v___x_3099_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3099_, 0, v___x_3097_);
lean_ctor_set(v___x_3099_, 1, v___x_3098_);
v___x_3100_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17_spec__21(v_x_3088_, v___x_3099_, v_tail_3092_);
return v___x_3100_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14(lean_object* v_x_3103_, lean_object* v_x_3104_){
_start:
{
if (lean_obj_tag(v_x_3103_) == 0)
{
lean_object* v___x_3105_; 
lean_dec(v_x_3104_);
v___x_3105_ = lean_box(0);
return v___x_3105_;
}
else
{
lean_object* v_tail_3106_; 
v_tail_3106_ = lean_ctor_get(v_x_3103_, 1);
if (lean_obj_tag(v_tail_3106_) == 0)
{
lean_object* v_head_3107_; lean_object* v___x_3108_; 
lean_dec(v_x_3104_);
v_head_3107_ = lean_ctor_get(v_x_3103_, 0);
lean_inc(v_head_3107_);
lean_dec_ref_known(v_x_3103_, 2);
v___x_3108_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_head_3107_);
return v___x_3108_;
}
else
{
lean_object* v_head_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
lean_inc(v_tail_3106_);
v_head_3109_ = lean_ctor_get(v_x_3103_, 0);
lean_inc(v_head_3109_);
lean_dec_ref_known(v_x_3103_, 2);
v___x_3110_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_head_3109_);
v___x_3111_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17(v_x_3104_, v___x_3110_, v_tail_3106_);
return v___x_3111_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5(void){
_start:
{
lean_object* v___x_3120_; lean_object* v___x_3121_; 
v___x_3120_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__0));
v___x_3121_ = lean_string_length(v___x_3120_);
return v___x_3121_;
}
}
static lean_object* _init_l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6(void){
_start:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3122_ = lean_obj_once(&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5, &l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5_once, _init_l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5);
v___x_3123_ = lean_nat_to_int(v___x_3122_);
return v___x_3123_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10(lean_object* v_xs_3131_){
_start:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; uint8_t v___x_3134_; 
v___x_3132_ = lean_array_get_size(v_xs_3131_);
v___x_3133_ = lean_unsigned_to_nat(0u);
v___x_3134_ = lean_nat_dec_eq(v___x_3132_, v___x_3133_);
if (v___x_3134_ == 0)
{
lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3135_ = lean_array_to_list(v_xs_3131_);
v___x_3136_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__3));
v___x_3137_ = l_Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14(v___x_3135_, v___x_3136_);
v___x_3138_ = lean_obj_once(&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6, &l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6_once, _init_l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6);
v___x_3139_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__7));
v___x_3140_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3139_);
lean_ctor_set(v___x_3140_, 1, v___x_3137_);
v___x_3141_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__8));
v___x_3142_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3140_);
lean_ctor_set(v___x_3142_, 1, v___x_3141_);
v___x_3143_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3143_, 0, v___x_3138_);
lean_ctor_set(v___x_3143_, 1, v___x_3142_);
v___x_3144_ = l_Std_Format_fill(v___x_3143_);
return v___x_3144_;
}
else
{
lean_object* v___x_3145_; 
lean_dec_ref(v_xs_3131_);
v___x_3145_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__10));
return v___x_3145_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11(size_t v_sz_3146_, size_t v_i_3147_, lean_object* v_bs_3148_){
_start:
{
uint8_t v___x_3149_; 
v___x_3149_ = lean_usize_dec_lt(v_i_3147_, v_sz_3146_);
if (v___x_3149_ == 0)
{
lean_object* v___x_3150_; 
v___x_3150_ = l_unsafeCast___redArg(v_bs_3148_);
lean_dec_ref(v_bs_3148_);
return v___x_3150_;
}
else
{
lean_object* v_v_3151_; lean_object* v___x_3152_; lean_object* v_bs_x27_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; size_t v___x_3156_; size_t v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; 
v_v_3151_ = lean_array_uget(v_bs_3148_, v_i_3147_);
v___x_3152_ = lean_unsigned_to_nat(0u);
v_bs_x27_3153_ = lean_array_uset(v_bs_3148_, v_i_3147_, v___x_3152_);
v___x_3154_ = l_unsafeCast___redArg(v_v_3151_);
lean_dec(v_v_3151_);
v___x_3155_ = l_Lean_mkFVar(v___x_3154_);
v___x_3156_ = ((size_t)1ULL);
v___x_3157_ = lean_usize_add(v_i_3147_, v___x_3156_);
v___x_3158_ = l_unsafeCast___redArg(v___x_3155_);
lean_dec_ref(v___x_3155_);
v___x_3159_ = lean_array_uset(v_bs_x27_3153_, v_i_3147_, v___x_3158_);
v_i_3147_ = v___x_3157_;
v_bs_3148_ = v___x_3159_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11___boxed(lean_object* v_sz_3161_, lean_object* v_i_3162_, lean_object* v_bs_3163_){
_start:
{
size_t v_sz_boxed_3164_; size_t v_i_boxed_3165_; lean_object* v_res_3166_; 
v_sz_boxed_3164_ = lean_unbox_usize(v_sz_3161_);
lean_dec(v_sz_3161_);
v_i_boxed_3165_ = lean_unbox_usize(v_i_3162_);
lean_dec(v_i_3162_);
v_res_3166_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11(v_sz_boxed_3164_, v_i_boxed_3165_, v_bs_3163_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2(size_t v_sz_3167_, size_t v_i_3168_, lean_object* v_bs_3169_){
_start:
{
uint8_t v___x_3170_; 
v___x_3170_ = lean_usize_dec_lt(v_i_3168_, v_sz_3167_);
if (v___x_3170_ == 0)
{
lean_object* v___x_3171_; 
v___x_3171_ = l_unsafeCast___redArg(v_bs_3169_);
lean_dec_ref(v_bs_3169_);
return v___x_3171_;
}
else
{
lean_object* v_v_3172_; lean_object* v___x_3173_; lean_object* v_recArgPos_3174_; lean_object* v___x_3175_; lean_object* v_bs_x27_3176_; size_t v___x_3177_; size_t v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; 
v_v_3172_ = lean_array_uget_borrowed(v_bs_3169_, v_i_3168_);
v___x_3173_ = l_unsafeCast___redArg(v_v_3172_);
v_recArgPos_3174_ = lean_ctor_get(v___x_3173_, 2);
lean_inc(v_recArgPos_3174_);
lean_dec(v___x_3173_);
v___x_3175_ = lean_unsigned_to_nat(0u);
v_bs_x27_3176_ = lean_array_uset(v_bs_3169_, v_i_3168_, v___x_3175_);
v___x_3177_ = ((size_t)1ULL);
v___x_3178_ = lean_usize_add(v_i_3168_, v___x_3177_);
v___x_3179_ = l_unsafeCast___redArg(v_recArgPos_3174_);
lean_dec(v_recArgPos_3174_);
v___x_3180_ = lean_array_uset(v_bs_x27_3176_, v_i_3168_, v___x_3179_);
v_i_3168_ = v___x_3178_;
v_bs_3169_ = v___x_3180_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2___boxed(lean_object* v_sz_3182_, lean_object* v_i_3183_, lean_object* v_bs_3184_){
_start:
{
size_t v_sz_boxed_3185_; size_t v_i_boxed_3186_; lean_object* v_res_3187_; 
v_sz_boxed_3185_ = lean_unbox_usize(v_sz_3182_);
lean_dec(v_sz_3182_);
v_i_boxed_3186_ = lean_unbox_usize(v_i_3183_);
lean_dec(v_i_3183_);
v_res_3187_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2(v_sz_boxed_3185_, v_i_boxed_3186_, v_bs_3184_);
return v_res_3187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg(lean_object* v_fst_3188_, size_t v_sz_3189_, size_t v_i_3190_, lean_object* v_bs_3191_){
_start:
{
uint8_t v___x_3192_; 
v___x_3192_ = lean_usize_dec_lt(v_i_3190_, v_sz_3189_);
if (v___x_3192_ == 0)
{
lean_object* v___x_3193_; 
v___x_3193_ = l_unsafeCast___redArg(v_bs_3191_);
lean_dec_ref(v_bs_3191_);
return v___x_3193_;
}
else
{
lean_object* v_v_3194_; lean_object* v___x_3195_; lean_object* v_fnName_3196_; lean_object* v_recArgPos_3197_; lean_object* v_indicesPos_3198_; lean_object* v_indGroupInst_3199_; lean_object* v_indIdx_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3218_; 
v_v_3194_ = lean_array_uget_borrowed(v_bs_3191_, v_i_3190_);
v___x_3195_ = l_unsafeCast___redArg(v_v_3194_);
v_fnName_3196_ = lean_ctor_get(v___x_3195_, 0);
v_recArgPos_3197_ = lean_ctor_get(v___x_3195_, 2);
v_indicesPos_3198_ = lean_ctor_get(v___x_3195_, 3);
v_indGroupInst_3199_ = lean_ctor_get(v___x_3195_, 4);
v_indIdx_3200_ = lean_ctor_get(v___x_3195_, 5);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3195_);
if (v_isSharedCheck_3218_ == 0)
{
lean_object* v_unused_3219_; 
v_unused_3219_ = lean_ctor_get(v___x_3195_, 1);
lean_dec(v_unused_3219_);
v___x_3202_ = v___x_3195_;
v_isShared_3203_ = v_isSharedCheck_3218_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_indIdx_3200_);
lean_inc(v_indGroupInst_3199_);
lean_inc(v_indicesPos_3198_);
lean_inc(v_recArgPos_3197_);
lean_inc(v_fnName_3196_);
lean_dec(v___x_3195_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3218_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v_perms_3204_; lean_object* v___x_3205_; lean_object* v_bs_x27_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3211_; 
v_perms_3204_ = lean_ctor_get(v_fst_3188_, 1);
v___x_3205_ = lean_unsigned_to_nat(0u);
v_bs_x27_3206_ = lean_array_uset(v_bs_3191_, v_i_3190_, v___x_3205_);
v___x_3207_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0);
v___x_3208_ = lean_usize_to_nat(v_i_3190_);
v___x_3209_ = lean_array_get_borrowed(v___x_3207_, v_perms_3204_, v___x_3208_);
lean_dec(v___x_3208_);
lean_inc(v___x_3209_);
if (v_isShared_3203_ == 0)
{
lean_ctor_set(v___x_3202_, 1, v___x_3209_);
v___x_3211_ = v___x_3202_;
goto v_reusejp_3210_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_fnName_3196_);
lean_ctor_set(v_reuseFailAlloc_3217_, 1, v___x_3209_);
lean_ctor_set(v_reuseFailAlloc_3217_, 2, v_recArgPos_3197_);
lean_ctor_set(v_reuseFailAlloc_3217_, 3, v_indicesPos_3198_);
lean_ctor_set(v_reuseFailAlloc_3217_, 4, v_indGroupInst_3199_);
lean_ctor_set(v_reuseFailAlloc_3217_, 5, v_indIdx_3200_);
v___x_3211_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3210_;
}
v_reusejp_3210_:
{
size_t v___x_3212_; size_t v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; 
v___x_3212_ = ((size_t)1ULL);
v___x_3213_ = lean_usize_add(v_i_3190_, v___x_3212_);
v___x_3214_ = l_unsafeCast___redArg(v___x_3211_);
lean_dec_ref(v___x_3211_);
v___x_3215_ = lean_array_uset(v_bs_x27_3206_, v_i_3190_, v___x_3214_);
v_i_3190_ = v___x_3213_;
v_bs_3191_ = v___x_3215_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg___boxed(lean_object* v_fst_3220_, lean_object* v_sz_3221_, lean_object* v_i_3222_, lean_object* v_bs_3223_){
_start:
{
size_t v_sz_boxed_3224_; size_t v_i_boxed_3225_; lean_object* v_res_3226_; 
v_sz_boxed_3224_ = lean_unbox_usize(v_sz_3221_);
lean_dec(v_sz_3221_);
v_i_boxed_3225_ = lean_unbox_usize(v_i_3222_);
lean_dec(v_i_3222_);
v_res_3226_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg(v_fst_3220_, v_sz_boxed_3224_, v_i_boxed_3225_, v_bs_3223_);
lean_dec_ref(v_fst_3220_);
return v_res_3226_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1(void){
_start:
{
lean_object* v___x_3228_; lean_object* v___x_3229_; 
v___x_3228_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__0));
v___x_3229_ = l_Lean_stringToMessageData(v___x_3228_);
return v___x_3229_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3(void){
_start:
{
lean_object* v___x_3231_; lean_object* v___x_3232_; 
v___x_3231_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__2));
v___x_3232_ = l_Lean_stringToMessageData(v___x_3231_);
return v___x_3232_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5(void){
_start:
{
lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3234_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__4));
v___x_3235_ = l_Lean_stringToMessageData(v___x_3234_);
return v___x_3235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6(lean_object* v_a_3236_, lean_object* v_as_3237_, size_t v_sz_3238_, size_t v_i_3239_, lean_object* v_b_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_){
_start:
{
lean_object* v_a_3247_; uint8_t v___x_3251_; 
v___x_3251_ = lean_usize_dec_lt(v_i_3239_, v_sz_3238_);
if (v___x_3251_ == 0)
{
lean_object* v___x_3252_; 
lean_dec_ref(v_a_3236_);
v___x_3252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3252_, 0, v_b_3240_);
return v___x_3252_;
}
else
{
lean_object* v___x_3253_; lean_object* v_a_3254_; lean_object* v___x_3255_; 
v___x_3253_ = lean_box(0);
v_a_3254_ = lean_array_uget_borrowed(v_as_3237_, v_i_3239_);
lean_inc(v_a_3254_);
lean_inc_ref(v_a_3236_);
v___x_3255_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg(v_a_3236_, v_a_3254_, v___y_3242_);
if (lean_obj_tag(v___x_3255_) == 0)
{
lean_object* v_a_3256_; uint8_t v___x_3257_; 
v_a_3256_ = lean_ctor_get(v___x_3255_, 0);
lean_inc(v_a_3256_);
lean_dec_ref_known(v___x_3255_, 1);
v___x_3257_ = lean_unbox(v_a_3256_);
lean_dec(v_a_3256_);
if (v___x_3257_ == 0)
{
v_a_3247_ = v___x_3253_;
goto v___jp_3246_;
}
else
{
uint8_t v___x_3258_; 
v___x_3258_ = l_Lean_Expr_isFVarOf(v_a_3236_, v_a_3254_);
if (v___x_3258_ == 0)
{
lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; 
v___x_3259_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1);
lean_inc_ref(v_a_3236_);
v___x_3260_ = l_Lean_indentExpr(v_a_3236_);
v___x_3261_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3261_, 0, v___x_3259_);
lean_ctor_set(v___x_3261_, 1, v___x_3260_);
v___x_3262_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3);
v___x_3263_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3261_);
lean_ctor_set(v___x_3263_, 1, v___x_3262_);
lean_inc(v_a_3254_);
v___x_3264_ = l_Lean_mkFVar(v_a_3254_);
v___x_3265_ = l_Lean_indentExpr(v___x_3264_);
v___x_3266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3263_);
lean_ctor_set(v___x_3266_, 1, v___x_3265_);
v___x_3267_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5);
v___x_3268_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3266_);
lean_ctor_set(v___x_3268_, 1, v___x_3267_);
v___x_3269_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v___x_3268_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_);
if (lean_obj_tag(v___x_3269_) == 0)
{
lean_dec_ref_known(v___x_3269_, 1);
v_a_3247_ = v___x_3253_;
goto v___jp_3246_;
}
else
{
lean_dec_ref(v_a_3236_);
return v___x_3269_;
}
}
else
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; 
v___x_3270_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1);
lean_inc_ref(v_a_3236_);
v___x_3271_ = l_Lean_indentExpr(v_a_3236_);
v___x_3272_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3270_);
lean_ctor_set(v___x_3272_, 1, v___x_3271_);
v___x_3273_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5);
v___x_3274_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3274_, 0, v___x_3272_);
lean_ctor_set(v___x_3274_, 1, v___x_3273_);
v___x_3275_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v___x_3274_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_);
if (lean_obj_tag(v___x_3275_) == 0)
{
lean_dec_ref_known(v___x_3275_, 1);
v_a_3247_ = v___x_3253_;
goto v___jp_3246_;
}
else
{
lean_dec_ref(v_a_3236_);
return v___x_3275_;
}
}
}
}
else
{
lean_object* v_a_3276_; lean_object* v___x_3278_; uint8_t v_isShared_3279_; uint8_t v_isSharedCheck_3283_; 
lean_dec_ref(v_a_3236_);
v_a_3276_ = lean_ctor_get(v___x_3255_, 0);
v_isSharedCheck_3283_ = !lean_is_exclusive(v___x_3255_);
if (v_isSharedCheck_3283_ == 0)
{
v___x_3278_ = v___x_3255_;
v_isShared_3279_ = v_isSharedCheck_3283_;
goto v_resetjp_3277_;
}
else
{
lean_inc(v_a_3276_);
lean_dec(v___x_3255_);
v___x_3278_ = lean_box(0);
v_isShared_3279_ = v_isSharedCheck_3283_;
goto v_resetjp_3277_;
}
v_resetjp_3277_:
{
lean_object* v___x_3281_; 
if (v_isShared_3279_ == 0)
{
v___x_3281_ = v___x_3278_;
goto v_reusejp_3280_;
}
else
{
lean_object* v_reuseFailAlloc_3282_; 
v_reuseFailAlloc_3282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3282_, 0, v_a_3276_);
v___x_3281_ = v_reuseFailAlloc_3282_;
goto v_reusejp_3280_;
}
v_reusejp_3280_:
{
return v___x_3281_;
}
}
}
}
v___jp_3246_:
{
size_t v___x_3248_; size_t v___x_3249_; 
v___x_3248_ = ((size_t)1ULL);
v___x_3249_ = lean_usize_add(v_i_3239_, v___x_3248_);
v_i_3239_ = v___x_3249_;
v_b_3240_ = v_a_3247_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___boxed(lean_object* v_a_3284_, lean_object* v_as_3285_, lean_object* v_sz_3286_, lean_object* v_i_3287_, lean_object* v_b_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_){
_start:
{
size_t v_sz_boxed_3294_; size_t v_i_boxed_3295_; lean_object* v_res_3296_; 
v_sz_boxed_3294_ = lean_unbox_usize(v_sz_3286_);
lean_dec(v_sz_3286_);
v_i_boxed_3295_ = lean_unbox_usize(v_i_3287_);
lean_dec(v_i_3287_);
v_res_3296_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6(v_a_3284_, v_as_3285_, v_sz_boxed_3294_, v_i_boxed_3295_, v_b_3288_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_);
lean_dec(v___y_3292_);
lean_dec_ref(v___y_3291_);
lean_dec(v___y_3290_);
lean_dec_ref(v___y_3289_);
lean_dec_ref(v_as_3285_);
return v_res_3296_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7(lean_object* v_snd_3297_, lean_object* v_as_3298_, size_t v_sz_3299_, size_t v_i_3300_, lean_object* v_b_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_){
_start:
{
uint8_t v___x_3307_; 
v___x_3307_ = lean_usize_dec_lt(v_i_3300_, v_sz_3299_);
if (v___x_3307_ == 0)
{
lean_object* v___x_3308_; 
v___x_3308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3308_, 0, v_b_3301_);
return v___x_3308_;
}
else
{
lean_object* v___x_3309_; lean_object* v_a_3310_; size_t v_sz_3311_; size_t v___x_3312_; lean_object* v___x_3313_; 
v___x_3309_ = lean_box(0);
v_a_3310_ = lean_array_uget_borrowed(v_as_3298_, v_i_3300_);
v_sz_3311_ = lean_array_size(v_snd_3297_);
v___x_3312_ = ((size_t)0ULL);
lean_inc(v_a_3310_);
v___x_3313_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6(v_a_3310_, v_snd_3297_, v_sz_3311_, v___x_3312_, v___x_3309_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_);
if (lean_obj_tag(v___x_3313_) == 0)
{
size_t v___x_3314_; size_t v___x_3315_; 
lean_dec_ref_known(v___x_3313_, 1);
v___x_3314_ = ((size_t)1ULL);
v___x_3315_ = lean_usize_add(v_i_3300_, v___x_3314_);
v_i_3300_ = v___x_3315_;
v_b_3301_ = v___x_3309_;
goto _start;
}
else
{
return v___x_3313_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7___boxed(lean_object* v_snd_3317_, lean_object* v_as_3318_, lean_object* v_sz_3319_, lean_object* v_i_3320_, lean_object* v_b_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_){
_start:
{
size_t v_sz_boxed_3327_; size_t v_i_boxed_3328_; lean_object* v_res_3329_; 
v_sz_boxed_3327_ = lean_unbox_usize(v_sz_3319_);
lean_dec(v_sz_3319_);
v_i_boxed_3328_ = lean_unbox_usize(v_i_3320_);
lean_dec(v_i_3320_);
v_res_3329_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7(v_snd_3317_, v_as_3318_, v_sz_boxed_3327_, v_i_boxed_3328_, v_b_3321_, v___y_3322_, v___y_3323_, v___y_3324_, v___y_3325_);
lean_dec(v___y_3325_);
lean_dec_ref(v___y_3324_);
lean_dec(v___y_3323_);
lean_dec_ref(v___y_3322_);
lean_dec_ref(v_as_3318_);
lean_dec_ref(v_snd_3317_);
return v_res_3329_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8(lean_object* v_snd_3330_, lean_object* v_as_3331_, size_t v_sz_3332_, size_t v_i_3333_, lean_object* v_b_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_){
_start:
{
uint8_t v___x_3340_; 
v___x_3340_ = lean_usize_dec_lt(v_i_3333_, v_sz_3332_);
if (v___x_3340_ == 0)
{
lean_object* v___x_3341_; 
v___x_3341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3341_, 0, v_b_3334_);
return v___x_3341_;
}
else
{
lean_object* v_a_3342_; lean_object* v_indGroupInst_3343_; lean_object* v_params_3344_; lean_object* v___x_3345_; size_t v_sz_3346_; size_t v___x_3347_; lean_object* v___x_3348_; 
v_a_3342_ = lean_array_uget_borrowed(v_as_3331_, v_i_3333_);
v_indGroupInst_3343_ = lean_ctor_get(v_a_3342_, 4);
v_params_3344_ = lean_ctor_get(v_indGroupInst_3343_, 2);
v___x_3345_ = lean_box(0);
v_sz_3346_ = lean_array_size(v_params_3344_);
v___x_3347_ = ((size_t)0ULL);
v___x_3348_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7(v_snd_3330_, v_params_3344_, v_sz_3346_, v___x_3347_, v___x_3345_, v___y_3335_, v___y_3336_, v___y_3337_, v___y_3338_);
if (lean_obj_tag(v___x_3348_) == 0)
{
size_t v___x_3349_; size_t v___x_3350_; 
lean_dec_ref_known(v___x_3348_, 1);
v___x_3349_ = ((size_t)1ULL);
v___x_3350_ = lean_usize_add(v_i_3333_, v___x_3349_);
v_i_3333_ = v___x_3350_;
v_b_3334_ = v___x_3345_;
goto _start;
}
else
{
return v___x_3348_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8___boxed(lean_object* v_snd_3352_, lean_object* v_as_3353_, lean_object* v_sz_3354_, lean_object* v_i_3355_, lean_object* v_b_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_){
_start:
{
size_t v_sz_boxed_3362_; size_t v_i_boxed_3363_; lean_object* v_res_3364_; 
v_sz_boxed_3362_ = lean_unbox_usize(v_sz_3354_);
lean_dec(v_sz_3354_);
v_i_boxed_3363_ = lean_unbox_usize(v_i_3355_);
lean_dec(v_i_3355_);
v_res_3364_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8(v_snd_3352_, v_as_3353_, v_sz_boxed_3362_, v_i_boxed_3363_, v_b_3356_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
lean_dec(v___y_3360_);
lean_dec_ref(v___y_3359_);
lean_dec(v___y_3358_);
lean_dec_ref(v___y_3357_);
lean_dec_ref(v_as_3353_);
lean_dec_ref(v_snd_3352_);
return v_res_3364_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; 
v___x_3365_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5));
v___x_3366_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__1));
v___x_3367_ = l_Lean_Name_append(v___x_3366_, v___x_3365_);
return v___x_3367_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3369_; lean_object* v___x_3370_; 
v___x_3369_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__1));
v___x_3370_ = l_Lean_stringToMessageData(v___x_3369_);
return v___x_3370_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3372_; lean_object* v___x_3373_; 
v___x_3372_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__3));
v___x_3373_ = l_Lean_stringToMessageData(v___x_3372_);
return v___x_3373_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__6(void){
_start:
{
lean_object* v___x_3375_; lean_object* v___x_3376_; 
v___x_3375_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__5));
v___x_3376_ = l_Lean_stringToMessageData(v___x_3375_);
return v___x_3376_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__8(void){
_start:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; 
v___x_3378_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__7));
v___x_3379_ = l_Lean_stringToMessageData(v___x_3378_);
return v___x_3379_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__10(void){
_start:
{
lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3381_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__9));
v___x_3382_ = l_Lean_stringToMessageData(v___x_3381_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0(size_t v___x_3383_, lean_object* v_a_3384_, lean_object* v_xs_3385_, lean_object* v_a_3386_, lean_object* v_recArgInfos_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_){
_start:
{
lean_object* v___y_3394_; lean_object* v___y_3395_; lean_object* v___y_3396_; lean_object* v___y_3397_; lean_object* v___y_3398_; lean_object* v___y_3399_; lean_object* v___y_3400_; size_t v_sz_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___y_3419_; lean_object* v___y_3420_; lean_object* v___y_3421_; lean_object* v___y_3422_; lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3425_; lean_object* v___x_3506_; lean_object* v_a_3507_; uint8_t v___x_3508_; 
v_sz_3413_ = lean_array_size(v_recArgInfos_3387_);
v___x_3414_ = l_unsafeCast___redArg(v_recArgInfos_3387_);
lean_inc(v___x_3414_);
v___x_3415_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2(v_sz_3413_, v___x_3383_, v___x_3414_);
v___x_3416_ = l_unsafeCast___redArg(v___x_3415_);
lean_dec_ref(v___x_3415_);
v___x_3417_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5));
v___x_3506_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1(v___x_3417_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_);
v_a_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_a_3507_);
lean_dec_ref(v___x_3506_);
v___x_3508_ = lean_unbox(v_a_3507_);
lean_dec(v_a_3507_);
if (v___x_3508_ == 0)
{
goto v___jp_3445_;
}
else
{
lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; 
v___x_3509_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__10);
lean_inc(v___x_3416_);
v___x_3510_ = lean_array_to_list(v___x_3416_);
v___x_3511_ = lean_box(0);
v___x_3512_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__0(v___x_3510_, v___x_3511_);
v___x_3513_ = l_Lean_MessageData_ofList(v___x_3512_);
v___x_3514_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3514_, 0, v___x_3509_);
lean_ctor_set(v___x_3514_, 1, v___x_3513_);
v___x_3515_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_3417_, v___x_3514_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_);
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_dec_ref_known(v___x_3515_, 1);
goto v___jp_3445_;
}
else
{
lean_object* v_a_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3523_; 
lean_dec(v___x_3416_);
lean_dec(v___x_3414_);
lean_dec_ref(v_a_3386_);
lean_dec_ref(v_xs_3385_);
lean_dec_ref(v_a_3384_);
v_a_3516_ = lean_ctor_get(v___x_3515_, 0);
v_isSharedCheck_3523_ = !lean_is_exclusive(v___x_3515_);
if (v_isSharedCheck_3523_ == 0)
{
v___x_3518_ = v___x_3515_;
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_a_3516_);
lean_dec(v___x_3515_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v___x_3521_; 
if (v_isShared_3519_ == 0)
{
v___x_3521_ = v___x_3518_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v_a_3516_);
v___x_3521_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
return v___x_3521_;
}
}
}
}
v___jp_3393_:
{
lean_object* v___x_3401_; size_t v_sz_3402_; lean_object* v___x_3403_; 
v___x_3401_ = lean_box(0);
v_sz_3402_ = lean_array_size(v___y_3394_);
v___x_3403_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8(v___y_3396_, v___y_3394_, v_sz_3402_, v___x_3383_, v___x_3401_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_);
lean_dec(v___y_3394_);
if (lean_obj_tag(v___x_3403_) == 0)
{
lean_object* v___x_3404_; 
lean_dec_ref_known(v___x_3403_, 1);
v___x_3404_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(v___y_3396_, v___y_3395_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_);
lean_dec_ref(v___y_3396_);
return v___x_3404_;
}
else
{
lean_object* v_a_3405_; lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3412_; 
lean_dec_ref(v___y_3396_);
lean_dec_ref(v___y_3395_);
v_a_3405_ = lean_ctor_get(v___x_3403_, 0);
v_isSharedCheck_3412_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3412_ == 0)
{
v___x_3407_ = v___x_3403_;
v_isShared_3408_ = v_isSharedCheck_3412_;
goto v_resetjp_3406_;
}
else
{
lean_inc(v_a_3405_);
lean_dec(v___x_3403_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3412_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
lean_object* v___x_3410_; 
if (v_isShared_3408_ == 0)
{
v___x_3410_ = v___x_3407_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v_a_3405_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
return v___x_3410_;
}
}
}
}
v___jp_3418_:
{
lean_object* v_toCold_3426_; lean_object* v_options_3427_; uint8_t v_hasTrace_3428_; 
v_toCold_3426_ = lean_ctor_get(v___y_3424_, 0);
v_options_3427_ = lean_ctor_get(v_toCold_3426_, 2);
v_hasTrace_3428_ = lean_ctor_get_uint8(v_options_3427_, sizeof(void*)*1);
if (v_hasTrace_3428_ == 0)
{
v___y_3394_ = v___y_3419_;
v___y_3395_ = v___y_3421_;
v___y_3396_ = v___y_3420_;
v___y_3397_ = v___y_3422_;
v___y_3398_ = v___y_3423_;
v___y_3399_ = v___y_3424_;
v___y_3400_ = v___y_3425_;
goto v___jp_3393_;
}
else
{
lean_object* v_inheritedTraceOptions_3429_; lean_object* v___x_3430_; uint8_t v___x_3431_; 
v_inheritedTraceOptions_3429_ = lean_ctor_get(v_toCold_3426_, 11);
v___x_3430_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__0);
v___x_3431_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3429_, v_options_3427_, v___x_3430_);
if (v___x_3431_ == 0)
{
v___y_3394_ = v___y_3419_;
v___y_3395_ = v___y_3421_;
v___y_3396_ = v___y_3420_;
v___y_3397_ = v___y_3422_;
v___y_3398_ = v___y_3423_;
v___y_3399_ = v___y_3424_;
v___y_3400_ = v___y_3425_;
goto v___jp_3393_;
}
else
{
lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; 
v___x_3432_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__2);
lean_inc(v___y_3419_);
v___x_3433_ = l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10(v___y_3419_);
v___x_3434_ = l_Lean_MessageData_ofFormat(v___x_3433_);
v___x_3435_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3435_, 0, v___x_3432_);
lean_ctor_set(v___x_3435_, 1, v___x_3434_);
v___x_3436_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_3417_, v___x_3435_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_);
if (lean_obj_tag(v___x_3436_) == 0)
{
lean_dec_ref_known(v___x_3436_, 1);
v___y_3394_ = v___y_3419_;
v___y_3395_ = v___y_3421_;
v___y_3396_ = v___y_3420_;
v___y_3397_ = v___y_3422_;
v___y_3398_ = v___y_3423_;
v___y_3399_ = v___y_3424_;
v___y_3400_ = v___y_3425_;
goto v___jp_3393_;
}
else
{
lean_object* v_a_3437_; lean_object* v___x_3439_; uint8_t v_isShared_3440_; uint8_t v_isSharedCheck_3444_; 
lean_dec_ref(v___y_3421_);
lean_dec_ref(v___y_3420_);
lean_dec(v___y_3419_);
v_a_3437_ = lean_ctor_get(v___x_3436_, 0);
v_isSharedCheck_3444_ = !lean_is_exclusive(v___x_3436_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3439_ = v___x_3436_;
v_isShared_3440_ = v_isSharedCheck_3444_;
goto v_resetjp_3438_;
}
else
{
lean_inc(v_a_3437_);
lean_dec(v___x_3436_);
v___x_3439_ = lean_box(0);
v_isShared_3440_ = v_isSharedCheck_3444_;
goto v_resetjp_3438_;
}
v_resetjp_3438_:
{
lean_object* v___x_3442_; 
if (v_isShared_3440_ == 0)
{
v___x_3442_ = v___x_3439_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v_a_3437_);
v___x_3442_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
return v___x_3442_;
}
}
}
}
}
}
v___jp_3445_:
{
lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v_snd_3449_; lean_object* v_fst_3450_; lean_object* v___x_3452_; uint8_t v_isShared_3453_; uint8_t v_isSharedCheck_3505_; 
lean_inc(v___x_3414_);
v___x_3446_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3(v_sz_3413_, v___x_3383_, v___x_3414_);
v___x_3447_ = l_unsafeCast___redArg(v___x_3446_);
lean_dec_ref(v___x_3446_);
lean_inc_ref(v_xs_3385_);
v___x_3448_ = l_Lean_Elab_FixedParamPerms_erase(v_a_3384_, v_xs_3385_, v___x_3447_);
v_snd_3449_ = lean_ctor_get(v___x_3448_, 1);
v_fst_3450_ = lean_ctor_get(v___x_3448_, 0);
v_isSharedCheck_3505_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3452_ = v___x_3448_;
v_isShared_3453_ = v_isSharedCheck_3505_;
goto v_resetjp_3451_;
}
else
{
lean_inc(v_snd_3449_);
lean_inc(v_fst_3450_);
lean_dec(v___x_3448_);
v___x_3452_ = lean_box(0);
v_isShared_3453_ = v_isSharedCheck_3505_;
goto v_resetjp_3451_;
}
v_resetjp_3451_:
{
lean_object* v_fst_3454_; lean_object* v_snd_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3504_; 
v_fst_3454_ = lean_ctor_get(v_snd_3449_, 0);
v_snd_3455_ = lean_ctor_get(v_snd_3449_, 1);
v_isSharedCheck_3504_ = !lean_is_exclusive(v_snd_3449_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3457_ = v_snd_3449_;
v_isShared_3458_ = v_isSharedCheck_3504_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_snd_3455_);
lean_inc(v_fst_3454_);
lean_dec(v_snd_3449_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3504_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___f_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; uint8_t v___x_3464_; 
v___x_3459_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg(v_fst_3450_, v_sz_3413_, v___x_3383_, v___x_3414_);
v___x_3460_ = l_unsafeCast___redArg(v___x_3459_);
lean_dec_ref(v___x_3459_);
lean_inc(v___x_3460_);
lean_inc(v_fst_3454_);
v___f_3461_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___boxed), 10, 5);
lean_closure_set(v___f_3461_, 0, v_a_3386_);
lean_closure_set(v___f_3461_, 1, v_fst_3450_);
lean_closure_set(v___f_3461_, 2, v_fst_3454_);
lean_closure_set(v___f_3461_, 3, v___x_3460_);
lean_closure_set(v___f_3461_, 4, v___x_3416_);
v___x_3462_ = lean_array_get_size(v_fst_3454_);
v___x_3463_ = lean_array_get_size(v_xs_3385_);
v___x_3464_ = lean_nat_dec_eq(v___x_3462_, v___x_3463_);
if (v___x_3464_ == 0)
{
lean_object* v___x_3465_; lean_object* v_a_3466_; uint8_t v___x_3467_; 
v___x_3465_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1(v___x_3417_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_);
v_a_3466_ = lean_ctor_get(v___x_3465_, 0);
lean_inc(v_a_3466_);
lean_dec_ref(v___x_3465_);
v___x_3467_ = lean_unbox(v_a_3466_);
lean_dec(v_a_3466_);
if (v___x_3467_ == 0)
{
lean_del_object(v___x_3457_);
lean_dec(v_fst_3454_);
lean_del_object(v___x_3452_);
lean_dec_ref(v_xs_3385_);
v___y_3419_ = v___x_3460_;
v___y_3420_ = v_snd_3455_;
v___y_3421_ = v___f_3461_;
v___y_3422_ = v___y_3388_;
v___y_3423_ = v___y_3389_;
v___y_3424_ = v___y_3390_;
v___y_3425_ = v___y_3391_;
goto v___jp_3418_;
}
else
{
lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3474_; 
v___x_3468_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__4);
v___x_3469_ = lean_array_to_list(v_xs_3385_);
v___x_3470_ = lean_box(0);
v___x_3471_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(v___x_3469_, v___x_3470_);
v___x_3472_ = l_Lean_MessageData_ofList(v___x_3471_);
if (v_isShared_3458_ == 0)
{
lean_ctor_set_tag(v___x_3457_, 7);
lean_ctor_set(v___x_3457_, 1, v___x_3472_);
lean_ctor_set(v___x_3457_, 0, v___x_3468_);
v___x_3474_ = v___x_3457_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v___x_3468_);
lean_ctor_set(v_reuseFailAlloc_3502_, 1, v___x_3472_);
v___x_3474_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
lean_object* v___x_3475_; lean_object* v___x_3477_; 
v___x_3475_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__6);
if (v_isShared_3453_ == 0)
{
lean_ctor_set_tag(v___x_3452_, 7);
lean_ctor_set(v___x_3452_, 1, v___x_3475_);
lean_ctor_set(v___x_3452_, 0, v___x_3474_);
v___x_3477_ = v___x_3452_;
goto v_reusejp_3476_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v___x_3474_);
lean_ctor_set(v_reuseFailAlloc_3501_, 1, v___x_3475_);
v___x_3477_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3476_;
}
v_reusejp_3476_:
{
lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; size_t v_sz_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
v___x_3478_ = lean_array_to_list(v_fst_3454_);
v___x_3479_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(v___x_3478_, v___x_3470_);
v___x_3480_ = l_Lean_MessageData_ofList(v___x_3479_);
v___x_3481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3481_, 0, v___x_3477_);
lean_ctor_set(v___x_3481_, 1, v___x_3480_);
v___x_3482_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___closed__8);
v___x_3483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3483_, 0, v___x_3481_);
lean_ctor_set(v___x_3483_, 1, v___x_3482_);
v_sz_3484_ = lean_array_size(v_snd_3455_);
v___x_3485_ = l_unsafeCast___redArg(v_snd_3455_);
v___x_3486_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11(v_sz_3484_, v___x_3383_, v___x_3485_);
v___x_3487_ = l_unsafeCast___redArg(v___x_3486_);
lean_dec_ref(v___x_3486_);
v___x_3488_ = lean_array_to_list(v___x_3487_);
v___x_3489_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(v___x_3488_, v___x_3470_);
v___x_3490_ = l_Lean_MessageData_ofList(v___x_3489_);
v___x_3491_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3491_, 0, v___x_3483_);
lean_ctor_set(v___x_3491_, 1, v___x_3490_);
v___x_3492_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_3417_, v___x_3491_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_);
if (lean_obj_tag(v___x_3492_) == 0)
{
lean_dec_ref_known(v___x_3492_, 1);
v___y_3419_ = v___x_3460_;
v___y_3420_ = v_snd_3455_;
v___y_3421_ = v___f_3461_;
v___y_3422_ = v___y_3388_;
v___y_3423_ = v___y_3389_;
v___y_3424_ = v___y_3390_;
v___y_3425_ = v___y_3391_;
goto v___jp_3418_;
}
else
{
lean_object* v_a_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3500_; 
lean_dec_ref(v___f_3461_);
lean_dec(v___x_3460_);
lean_dec(v_snd_3455_);
v_a_3493_ = lean_ctor_get(v___x_3492_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3492_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3495_ = v___x_3492_;
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_a_3493_);
lean_dec(v___x_3492_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
if (v_isShared_3496_ == 0)
{
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_a_3493_);
v___x_3498_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
return v___x_3498_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3503_; 
lean_dec(v___x_3460_);
lean_del_object(v___x_3457_);
lean_dec(v_fst_3454_);
lean_del_object(v___x_3452_);
lean_dec_ref(v_xs_3385_);
v___x_3503_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(v_snd_3455_, v___f_3461_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_);
lean_dec(v_snd_3455_);
return v___x_3503_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___boxed(lean_object* v___x_3524_, lean_object* v_a_3525_, lean_object* v_xs_3526_, lean_object* v_a_3527_, lean_object* v_recArgInfos_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_){
_start:
{
size_t v___x_13306__boxed_3534_; lean_object* v_res_3535_; 
v___x_13306__boxed_3534_ = lean_unbox_usize(v___x_3524_);
lean_dec(v___x_3524_);
v_res_3535_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0(v___x_13306__boxed_3534_, v_a_3525_, v_xs_3526_, v_a_3527_, v_recArgInfos_3528_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_);
lean_dec(v___y_3532_);
lean_dec_ref(v___y_3531_);
lean_dec(v___y_3530_);
lean_dec_ref(v___y_3529_);
lean_dec_ref(v_recArgInfos_3528_);
return v_res_3535_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg(lean_object* v___x_3536_, lean_object* v_xs_3537_, size_t v_sz_3538_, size_t v_i_3539_, lean_object* v_bs_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_, lean_object* v___y_3544_){
_start:
{
uint8_t v___x_3546_; 
v___x_3546_ = lean_usize_dec_lt(v_i_3539_, v_sz_3538_);
if (v___x_3546_ == 0)
{
lean_object* v___x_3547_; lean_object* v___x_3548_; 
lean_dec_ref(v_xs_3537_);
v___x_3547_ = l_unsafeCast___redArg(v_bs_3540_);
lean_dec_ref(v_bs_3540_);
v___x_3548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3548_, 0, v___x_3547_);
return v___x_3548_;
}
else
{
lean_object* v_v_3549_; lean_object* v___x_3550_; lean_object* v_value_3551_; lean_object* v___x_3552_; lean_object* v_bs_x27_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; 
v_v_3549_ = lean_array_uget_borrowed(v_bs_3540_, v_i_3539_);
v___x_3550_ = l_unsafeCast___redArg(v_v_3549_);
v_value_3551_ = lean_ctor_get(v___x_3550_, 7);
lean_inc_ref(v_value_3551_);
lean_dec(v___x_3550_);
v___x_3552_ = lean_unsigned_to_nat(0u);
v_bs_x27_3553_ = lean_array_uset(v_bs_3540_, v_i_3539_, v___x_3552_);
v___x_3554_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0);
v___x_3555_ = lean_usize_to_nat(v_i_3539_);
v___x_3556_ = lean_array_get_borrowed(v___x_3554_, v___x_3536_, v___x_3555_);
lean_dec(v___x_3555_);
lean_inc_ref(v_xs_3537_);
lean_inc(v___x_3556_);
v___x_3557_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v___x_3556_, v_value_3551_, v_xs_3537_, v___y_3541_, v___y_3542_, v___y_3543_, v___y_3544_);
if (lean_obj_tag(v___x_3557_) == 0)
{
lean_object* v_a_3558_; size_t v___x_3559_; size_t v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; 
v_a_3558_ = lean_ctor_get(v___x_3557_, 0);
lean_inc(v_a_3558_);
lean_dec_ref_known(v___x_3557_, 1);
v___x_3559_ = ((size_t)1ULL);
v___x_3560_ = lean_usize_add(v_i_3539_, v___x_3559_);
v___x_3561_ = l_unsafeCast___redArg(v_a_3558_);
lean_dec(v_a_3558_);
v___x_3562_ = lean_array_uset(v_bs_x27_3553_, v_i_3539_, v___x_3561_);
v_i_3539_ = v___x_3560_;
v_bs_3540_ = v___x_3562_;
goto _start;
}
else
{
lean_object* v_a_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3571_; 
lean_dec_ref(v_bs_x27_3553_);
lean_dec_ref(v_xs_3537_);
v_a_3564_ = lean_ctor_get(v___x_3557_, 0);
v_isSharedCheck_3571_ = !lean_is_exclusive(v___x_3557_);
if (v_isSharedCheck_3571_ == 0)
{
v___x_3566_ = v___x_3557_;
v_isShared_3567_ = v_isSharedCheck_3571_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_a_3564_);
lean_dec(v___x_3557_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3571_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v___x_3569_; 
if (v_isShared_3567_ == 0)
{
v___x_3569_ = v___x_3566_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3570_; 
v_reuseFailAlloc_3570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3570_, 0, v_a_3564_);
v___x_3569_ = v_reuseFailAlloc_3570_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
return v___x_3569_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg___boxed(lean_object* v___x_3572_, lean_object* v_xs_3573_, lean_object* v_sz_3574_, lean_object* v_i_3575_, lean_object* v_bs_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_){
_start:
{
size_t v_sz_boxed_3582_; size_t v_i_boxed_3583_; lean_object* v_res_3584_; 
v_sz_boxed_3582_ = lean_unbox_usize(v_sz_3574_);
lean_dec(v_sz_3574_);
v_i_boxed_3583_ = lean_unbox_usize(v_i_3575_);
lean_dec(v_i_3575_);
v_res_3584_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg(v___x_3572_, v_xs_3573_, v_sz_boxed_3582_, v_i_boxed_3583_, v_bs_3576_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
lean_dec(v___y_3580_);
lean_dec_ref(v___y_3579_);
lean_dec(v___y_3578_);
lean_dec_ref(v___y_3577_);
lean_dec_ref(v___x_3572_);
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12(lean_object* v___x_3585_, lean_object* v_xs_3586_, lean_object* v_as_3587_, size_t v_sz_3588_, size_t v_i_3589_, lean_object* v_bs_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_){
_start:
{
lean_object* v___x_3596_; 
v___x_3596_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg(v___x_3585_, v_xs_3586_, v_sz_3588_, v_i_3589_, v_bs_3590_, v___y_3591_, v___y_3592_, v___y_3593_, v___y_3594_);
return v___x_3596_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___boxed(lean_object* v___x_3597_, lean_object* v_xs_3598_, lean_object* v_as_3599_, lean_object* v_sz_3600_, lean_object* v_i_3601_, lean_object* v_bs_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_){
_start:
{
size_t v_sz_boxed_3608_; size_t v_i_boxed_3609_; lean_object* v_res_3610_; 
v_sz_boxed_3608_ = lean_unbox_usize(v_sz_3600_);
lean_dec(v_sz_3600_);
v_i_boxed_3609_ = lean_unbox_usize(v_i_3601_);
lean_dec(v_i_3601_);
v_res_3610_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12(v___x_3597_, v_xs_3598_, v_as_3599_, v_sz_boxed_3608_, v_i_boxed_3609_, v_bs_3602_, v___y_3603_, v___y_3604_, v___y_3605_, v___y_3606_);
lean_dec(v___y_3606_);
lean_dec_ref(v___y_3605_);
lean_dec(v___y_3604_);
lean_dec_ref(v___y_3603_);
lean_dec_ref(v_as_3599_);
lean_dec_ref(v___x_3597_);
return v_res_3610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2(size_t v___x_3611_, lean_object* v_a_3612_, lean_object* v_a_3613_, lean_object* v_perms_3614_, lean_object* v_fnNames_3615_, lean_object* v_termMeasure_x3fs_3616_, lean_object* v_xs_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_){
_start:
{
lean_object* v___x_3623_; lean_object* v___f_3624_; size_t v_sz_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_12355__overap_3630_; lean_object* v___x_3631_; 
v___x_3623_ = lean_box_usize(v___x_3611_);
lean_inc_ref_n(v_a_3613_, 2);
lean_inc_ref_n(v_xs_3617_, 2);
lean_inc_ref(v_a_3612_);
v___f_3624_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___boxed), 10, 4);
lean_closure_set(v___f_3624_, 0, v___x_3623_);
lean_closure_set(v___f_3624_, 1, v_a_3612_);
lean_closure_set(v___f_3624_, 2, v_xs_3617_);
lean_closure_set(v___f_3624_, 3, v_a_3613_);
v_sz_3625_ = lean_array_size(v_a_3613_);
v___x_3626_ = l_unsafeCast___redArg(v_a_3613_);
v___x_3627_ = lean_box_usize(v_sz_3625_);
v___x_3628_ = lean_box_usize(v___x_3611_);
v___x_3629_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___boxed), 11, 6);
lean_closure_set(v___x_3629_, 0, v_perms_3614_);
lean_closure_set(v___x_3629_, 1, v_xs_3617_);
lean_closure_set(v___x_3629_, 2, v_a_3613_);
lean_closure_set(v___x_3629_, 3, v___x_3627_);
lean_closure_set(v___x_3629_, 4, v___x_3628_);
lean_closure_set(v___x_3629_, 5, v___x_3626_);
v___x_12355__overap_3630_ = l_unsafeCast___redArg(v___x_3629_);
lean_dec_ref(v___x_3629_);
lean_inc(v___y_3621_);
lean_inc_ref(v___y_3620_);
lean_inc(v___y_3619_);
lean_inc_ref(v___y_3618_);
v___x_3631_ = lean_apply_5(v___x_12355__overap_3630_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_, lean_box(0));
if (lean_obj_tag(v___x_3631_) == 0)
{
lean_object* v_a_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; 
v_a_3632_ = lean_ctor_get(v___x_3631_, 0);
lean_inc_n(v_a_3632_, 2);
lean_dec_ref_known(v___x_3631_, 1);
lean_inc_ref(v_xs_3617_);
lean_inc(v_fnNames_3615_);
v___x_3633_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_findRecArgCandidates___boxed), 10, 5);
lean_closure_set(v___x_3633_, 0, v_fnNames_3615_);
lean_closure_set(v___x_3633_, 1, v_a_3612_);
lean_closure_set(v___x_3633_, 2, v_xs_3617_);
lean_closure_set(v___x_3633_, 3, v_a_3632_);
lean_closure_set(v___x_3633_, 4, v_termMeasure_x3fs_3616_);
v___x_3634_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg(v_a_3613_, v___x_3633_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
if (lean_obj_tag(v___x_3634_) == 0)
{
lean_object* v_a_3635_; lean_object* v___x_3636_; 
v_a_3635_ = lean_ctor_get(v___x_3634_, 0);
lean_inc(v_a_3635_);
lean_dec_ref_known(v___x_3634_, 1);
v___x_3636_ = l_Lean_Elab_Structural_tryCandidates___redArg(v_fnNames_3615_, v_xs_3617_, v_a_3632_, v_a_3635_, v___f_3624_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
lean_dec(v_fnNames_3615_);
return v___x_3636_;
}
else
{
lean_object* v_a_3637_; lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_3644_; 
lean_dec(v_a_3632_);
lean_dec_ref(v___f_3624_);
lean_dec_ref(v_xs_3617_);
lean_dec(v_fnNames_3615_);
v_a_3637_ = lean_ctor_get(v___x_3634_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___x_3634_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3639_ = v___x_3634_;
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
else
{
lean_inc(v_a_3637_);
lean_dec(v___x_3634_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
lean_object* v___x_3642_; 
if (v_isShared_3640_ == 0)
{
v___x_3642_ = v___x_3639_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_a_3637_);
v___x_3642_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
return v___x_3642_;
}
}
}
}
else
{
lean_object* v_a_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3652_; 
lean_dec_ref(v___f_3624_);
lean_dec_ref(v_xs_3617_);
lean_dec_ref(v_termMeasure_x3fs_3616_);
lean_dec(v_fnNames_3615_);
lean_dec_ref(v_a_3613_);
lean_dec_ref(v_a_3612_);
v_a_3645_ = lean_ctor_get(v___x_3631_, 0);
v_isSharedCheck_3652_ = !lean_is_exclusive(v___x_3631_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3647_ = v___x_3631_;
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_a_3645_);
lean_dec(v___x_3631_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3650_; 
if (v_isShared_3648_ == 0)
{
v___x_3650_ = v___x_3647_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v_a_3645_);
v___x_3650_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
return v___x_3650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2___boxed(lean_object* v___x_3653_, lean_object* v_a_3654_, lean_object* v_a_3655_, lean_object* v_perms_3656_, lean_object* v_fnNames_3657_, lean_object* v_termMeasure_x3fs_3658_, lean_object* v_xs_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_){
_start:
{
size_t v___x_13687__boxed_3665_; lean_object* v_res_3666_; 
v___x_13687__boxed_3665_ = lean_unbox_usize(v___x_3653_);
lean_dec(v___x_3653_);
v_res_3666_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2(v___x_13687__boxed_3665_, v_a_3654_, v_a_3655_, v_perms_3656_, v_fnNames_3657_, v_termMeasure_x3fs_3658_, v_xs_3659_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_);
lean_dec(v___y_3663_);
lean_dec_ref(v___y_3662_);
lean_dec(v___y_3661_);
lean_dec_ref(v___y_3660_);
return v_res_3666_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(size_t v_sz_3667_, size_t v_i_3668_, lean_object* v_bs_3669_){
_start:
{
uint8_t v___x_3670_; 
v___x_3670_ = lean_usize_dec_lt(v_i_3668_, v_sz_3667_);
if (v___x_3670_ == 0)
{
lean_object* v___x_3671_; 
v___x_3671_ = l_unsafeCast___redArg(v_bs_3669_);
lean_dec_ref(v_bs_3669_);
return v___x_3671_;
}
else
{
lean_object* v_v_3672_; lean_object* v___x_3673_; lean_object* v_declName_3674_; lean_object* v___x_3675_; lean_object* v_bs_x27_3676_; size_t v___x_3677_; size_t v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; 
v_v_3672_ = lean_array_uget_borrowed(v_bs_3669_, v_i_3668_);
v___x_3673_ = l_unsafeCast___redArg(v_v_3672_);
v_declName_3674_ = lean_ctor_get(v___x_3673_, 3);
lean_inc(v_declName_3674_);
lean_dec(v___x_3673_);
v___x_3675_ = lean_unsigned_to_nat(0u);
v_bs_x27_3676_ = lean_array_uset(v_bs_3669_, v_i_3668_, v___x_3675_);
v___x_3677_ = ((size_t)1ULL);
v___x_3678_ = lean_usize_add(v_i_3668_, v___x_3677_);
v___x_3679_ = l_unsafeCast___redArg(v_declName_3674_);
lean_dec(v_declName_3674_);
v___x_3680_ = lean_array_uset(v_bs_x27_3676_, v_i_3668_, v___x_3679_);
v_i_3668_ = v___x_3678_;
v_bs_3669_ = v___x_3680_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0___boxed(lean_object* v_sz_3682_, lean_object* v_i_3683_, lean_object* v_bs_3684_){
_start:
{
size_t v_sz_boxed_3685_; size_t v_i_boxed_3686_; lean_object* v_res_3687_; 
v_sz_boxed_3685_ = lean_unbox_usize(v_sz_3682_);
lean_dec(v_sz_3682_);
v_i_boxed_3686_ = lean_unbox_usize(v_i_3683_);
lean_dec(v_i_3683_);
v_res_3687_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(v_sz_boxed_3685_, v_i_boxed_3686_, v_bs_3684_);
return v_res_3687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg(lean_object* v_fnNames_3688_, lean_object* v_numSectionVars_3689_, size_t v_sz_3690_, size_t v_i_3691_, lean_object* v_bs_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_){
_start:
{
uint8_t v___x_3696_; 
v___x_3696_ = lean_usize_dec_lt(v_i_3691_, v_sz_3690_);
if (v___x_3696_ == 0)
{
lean_object* v___x_3697_; lean_object* v___x_3698_; 
lean_dec(v_numSectionVars_3689_);
lean_dec_ref(v_fnNames_3688_);
v___x_3697_ = l_unsafeCast___redArg(v_bs_3692_);
lean_dec_ref(v_bs_3692_);
v___x_3698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3698_, 0, v___x_3697_);
return v___x_3698_;
}
else
{
lean_object* v_v_3699_; lean_object* v___x_3700_; lean_object* v_ref_3701_; uint8_t v_kind_3702_; lean_object* v_levelParams_3703_; lean_object* v_modifiers_3704_; lean_object* v_declName_3705_; lean_object* v_binders_3706_; lean_object* v_numSectionVars_3707_; lean_object* v_type_3708_; lean_object* v_value_3709_; lean_object* v_termination_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3734_; 
v_v_3699_ = lean_array_uget_borrowed(v_bs_3692_, v_i_3691_);
v___x_3700_ = l_unsafeCast___redArg(v_v_3699_);
v_ref_3701_ = lean_ctor_get(v___x_3700_, 0);
v_kind_3702_ = lean_ctor_get_uint8(v___x_3700_, sizeof(void*)*9);
v_levelParams_3703_ = lean_ctor_get(v___x_3700_, 1);
v_modifiers_3704_ = lean_ctor_get(v___x_3700_, 2);
v_declName_3705_ = lean_ctor_get(v___x_3700_, 3);
v_binders_3706_ = lean_ctor_get(v___x_3700_, 4);
v_numSectionVars_3707_ = lean_ctor_get(v___x_3700_, 5);
v_type_3708_ = lean_ctor_get(v___x_3700_, 6);
v_value_3709_ = lean_ctor_get(v___x_3700_, 7);
v_termination_3710_ = lean_ctor_get(v___x_3700_, 8);
v_isSharedCheck_3734_ = !lean_is_exclusive(v___x_3700_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3712_ = v___x_3700_;
v_isShared_3713_ = v_isSharedCheck_3734_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_termination_3710_);
lean_inc(v_value_3709_);
lean_inc(v_type_3708_);
lean_inc(v_numSectionVars_3707_);
lean_inc(v_binders_3706_);
lean_inc(v_declName_3705_);
lean_inc(v_modifiers_3704_);
lean_inc(v_levelParams_3703_);
lean_inc(v_ref_3701_);
lean_dec(v___x_3700_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3734_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3714_; lean_object* v_bs_x27_3715_; lean_object* v___x_3716_; 
v___x_3714_ = lean_unsigned_to_nat(0u);
v_bs_x27_3715_ = lean_array_uset(v_bs_3692_, v_i_3691_, v___x_3714_);
lean_inc(v_numSectionVars_3689_);
lean_inc_ref(v_fnNames_3688_);
v___x_3716_ = l_Lean_Elab_Structural_preprocess(v_value_3709_, v_fnNames_3688_, v_numSectionVars_3689_, v___y_3693_, v___y_3694_);
if (lean_obj_tag(v___x_3716_) == 0)
{
lean_object* v_a_3717_; lean_object* v___x_3719_; 
v_a_3717_ = lean_ctor_get(v___x_3716_, 0);
lean_inc(v_a_3717_);
lean_dec_ref_known(v___x_3716_, 1);
if (v_isShared_3713_ == 0)
{
lean_ctor_set(v___x_3712_, 7, v_a_3717_);
v___x_3719_ = v___x_3712_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_ref_3701_);
lean_ctor_set(v_reuseFailAlloc_3725_, 1, v_levelParams_3703_);
lean_ctor_set(v_reuseFailAlloc_3725_, 2, v_modifiers_3704_);
lean_ctor_set(v_reuseFailAlloc_3725_, 3, v_declName_3705_);
lean_ctor_set(v_reuseFailAlloc_3725_, 4, v_binders_3706_);
lean_ctor_set(v_reuseFailAlloc_3725_, 5, v_numSectionVars_3707_);
lean_ctor_set(v_reuseFailAlloc_3725_, 6, v_type_3708_);
lean_ctor_set(v_reuseFailAlloc_3725_, 7, v_a_3717_);
lean_ctor_set(v_reuseFailAlloc_3725_, 8, v_termination_3710_);
lean_ctor_set_uint8(v_reuseFailAlloc_3725_, sizeof(void*)*9, v_kind_3702_);
v___x_3719_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
size_t v___x_3720_; size_t v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; 
v___x_3720_ = ((size_t)1ULL);
v___x_3721_ = lean_usize_add(v_i_3691_, v___x_3720_);
v___x_3722_ = l_unsafeCast___redArg(v___x_3719_);
lean_dec_ref(v___x_3719_);
v___x_3723_ = lean_array_uset(v_bs_x27_3715_, v_i_3691_, v___x_3722_);
v_i_3691_ = v___x_3721_;
v_bs_3692_ = v___x_3723_;
goto _start;
}
}
else
{
lean_object* v_a_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3733_; 
lean_dec_ref(v_bs_x27_3715_);
lean_del_object(v___x_3712_);
lean_dec_ref(v_termination_3710_);
lean_dec_ref(v_type_3708_);
lean_dec(v_numSectionVars_3707_);
lean_dec(v_binders_3706_);
lean_dec(v_declName_3705_);
lean_dec_ref(v_modifiers_3704_);
lean_dec(v_levelParams_3703_);
lean_dec(v_ref_3701_);
lean_dec(v_numSectionVars_3689_);
lean_dec_ref(v_fnNames_3688_);
v_a_3726_ = lean_ctor_get(v___x_3716_, 0);
v_isSharedCheck_3733_ = !lean_is_exclusive(v___x_3716_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3728_ = v___x_3716_;
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_a_3726_);
lean_dec(v___x_3716_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3731_; 
if (v_isShared_3729_ == 0)
{
v___x_3731_ = v___x_3728_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v_a_3726_);
v___x_3731_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
return v___x_3731_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg___boxed(lean_object* v_fnNames_3735_, lean_object* v_numSectionVars_3736_, lean_object* v_sz_3737_, lean_object* v_i_3738_, lean_object* v_bs_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_){
_start:
{
size_t v_sz_boxed_3743_; size_t v_i_boxed_3744_; lean_object* v_res_3745_; 
v_sz_boxed_3743_ = lean_unbox_usize(v_sz_3737_);
lean_dec(v_sz_3737_);
v_i_boxed_3744_ = lean_unbox_usize(v_i_3738_);
lean_dec(v_i_3738_);
v_res_3745_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg(v_fnNames_3735_, v_numSectionVars_3736_, v_sz_boxed_3743_, v_i_boxed_3744_, v_bs_3739_, v___y_3740_, v___y_3741_);
lean_dec(v___y_3741_);
lean_dec_ref(v___y_3740_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1(lean_object* v_fnNames_3746_, lean_object* v_numSectionVars_3747_, size_t v_sz_3748_, size_t v_i_3749_, lean_object* v_bs_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_){
_start:
{
lean_object* v___x_3756_; 
v___x_3756_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg(v_fnNames_3746_, v_numSectionVars_3747_, v_sz_3748_, v_i_3749_, v_bs_3750_, v___y_3753_, v___y_3754_);
return v___x_3756_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___boxed(lean_object* v_fnNames_3757_, lean_object* v_numSectionVars_3758_, lean_object* v_sz_3759_, lean_object* v_i_3760_, lean_object* v_bs_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_){
_start:
{
size_t v_sz_boxed_3767_; size_t v_i_boxed_3768_; lean_object* v_res_3769_; 
v_sz_boxed_3767_ = lean_unbox_usize(v_sz_3759_);
lean_dec(v_sz_3759_);
v_i_boxed_3768_ = lean_unbox_usize(v_i_3760_);
lean_dec(v_i_3760_);
v_res_3769_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1(v_fnNames_3757_, v_numSectionVars_3758_, v_sz_boxed_3767_, v_i_boxed_3768_, v_bs_3761_, v___y_3762_, v___y_3763_, v___y_3764_, v___y_3765_);
lean_dec(v___y_3765_);
lean_dec_ref(v___y_3764_);
lean_dec(v___y_3763_);
lean_dec_ref(v___y_3762_);
return v_res_3769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos(lean_object* v_preDefs_3770_, lean_object* v_termMeasure_x3fs_3771_, lean_object* v_a_3772_, lean_object* v_a_3773_, lean_object* v_a_3774_, lean_object* v_a_3775_){
_start:
{
lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v_numSectionVars_3780_; lean_object* v___x_3781_; size_t v_sz_3782_; size_t v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v_fnNames_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; 
v___x_3777_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_3778_ = lean_unsigned_to_nat(0u);
v___x_3779_ = lean_array_get_borrowed(v___x_3777_, v_preDefs_3770_, v___x_3778_);
v_numSectionVars_3780_ = lean_ctor_get(v___x_3779_, 5);
v___x_3781_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___redArg___closed__0);
v_sz_3782_ = lean_array_size(v_preDefs_3770_);
v___x_3783_ = ((size_t)0ULL);
v___x_3784_ = l_unsafeCast___redArg(v_preDefs_3770_);
lean_inc(v___x_3784_);
v___x_3785_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(v_sz_3782_, v___x_3783_, v___x_3784_);
v_fnNames_3786_ = l_unsafeCast___redArg(v___x_3785_);
lean_dec_ref(v___x_3785_);
v___x_3787_ = lean_box_usize(v_sz_3782_);
v___x_3788_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed__const__1));
lean_inc(v_numSectionVars_3780_);
lean_inc(v_fnNames_3786_);
v___x_3789_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___boxed), 10, 5);
lean_closure_set(v___x_3789_, 0, v_fnNames_3786_);
lean_closure_set(v___x_3789_, 1, v_numSectionVars_3780_);
lean_closure_set(v___x_3789_, 2, v___x_3787_);
lean_closure_set(v___x_3789_, 3, v___x_3788_);
lean_closure_set(v___x_3789_, 4, v___x_3784_);
v___x_3790_ = l_unsafeCast___redArg(v___x_3789_);
lean_dec_ref(v___x_3789_);
v___x_3791_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg(v_preDefs_3770_, v___x_3790_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_);
if (lean_obj_tag(v___x_3791_) == 0)
{
lean_object* v_a_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; 
v_a_3792_ = lean_ctor_get(v___x_3791_, 0);
lean_inc_n(v_a_3792_, 3);
lean_dec_ref_known(v___x_3791_, 1);
v___x_3793_ = lean_alloc_closure((void*)(l_Lean_Elab_getFixedParamPerms___boxed), 6, 1);
lean_closure_set(v___x_3793_, 0, v_a_3792_);
v___x_3794_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg(v_a_3792_, v___x_3793_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_);
if (lean_obj_tag(v___x_3794_) == 0)
{
lean_object* v_a_3795_; lean_object* v_perms_3796_; lean_object* v___x_3797_; lean_object* v_type_3798_; lean_object* v___x_3799_; lean_object* v___f_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v_a_3795_ = lean_ctor_get(v___x_3794_, 0);
lean_inc(v_a_3795_);
lean_dec_ref_known(v___x_3794_, 1);
v_perms_3796_ = lean_ctor_get(v_a_3795_, 1);
lean_inc_ref_n(v_perms_3796_, 2);
v___x_3797_ = lean_array_get_borrowed(v___x_3777_, v_a_3792_, v___x_3778_);
v_type_3798_ = lean_ctor_get(v___x_3797_, 6);
lean_inc_ref(v_type_3798_);
v___x_3799_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed__const__1));
v___f_3800_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2___boxed), 12, 6);
lean_closure_set(v___f_3800_, 0, v___x_3799_);
lean_closure_set(v___f_3800_, 1, v_a_3795_);
lean_closure_set(v___f_3800_, 2, v_a_3792_);
lean_closure_set(v___f_3800_, 3, v_perms_3796_);
lean_closure_set(v___f_3800_, 4, v_fnNames_3786_);
lean_closure_set(v___f_3800_, 5, v_termMeasure_x3fs_3771_);
v___x_3801_ = lean_array_get(v___x_3781_, v_perms_3796_, v___x_3778_);
lean_dec_ref(v_perms_3796_);
v___x_3802_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg(v___x_3801_, v_type_3798_, v___f_3800_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_);
return v___x_3802_;
}
else
{
lean_object* v_a_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3810_; 
lean_dec(v_a_3792_);
lean_dec(v_fnNames_3786_);
lean_dec_ref(v_termMeasure_x3fs_3771_);
v_a_3803_ = lean_ctor_get(v___x_3794_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v___x_3794_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3805_ = v___x_3794_;
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_a_3803_);
lean_dec(v___x_3794_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v___x_3808_; 
if (v_isShared_3806_ == 0)
{
v___x_3808_ = v___x_3805_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v_a_3803_);
v___x_3808_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
return v___x_3808_;
}
}
}
}
else
{
lean_object* v_a_3811_; lean_object* v___x_3813_; uint8_t v_isShared_3814_; uint8_t v_isSharedCheck_3818_; 
lean_dec(v_fnNames_3786_);
lean_dec_ref(v_termMeasure_x3fs_3771_);
v_a_3811_ = lean_ctor_get(v___x_3791_, 0);
v_isSharedCheck_3818_ = !lean_is_exclusive(v___x_3791_);
if (v_isSharedCheck_3818_ == 0)
{
v___x_3813_ = v___x_3791_;
v_isShared_3814_ = v_isSharedCheck_3818_;
goto v_resetjp_3812_;
}
else
{
lean_inc(v_a_3811_);
lean_dec(v___x_3791_);
v___x_3813_ = lean_box(0);
v_isShared_3814_ = v_isSharedCheck_3818_;
goto v_resetjp_3812_;
}
v_resetjp_3812_:
{
lean_object* v___x_3816_; 
if (v_isShared_3814_ == 0)
{
v___x_3816_ = v___x_3813_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v_a_3811_);
v___x_3816_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
return v___x_3816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___boxed(lean_object* v_preDefs_3819_, lean_object* v_termMeasure_x3fs_3820_, lean_object* v_a_3821_, lean_object* v_a_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_, lean_object* v_a_3825_){
_start:
{
lean_object* v_res_3826_; 
v_res_3826_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos(v_preDefs_3819_, v_termMeasure_x3fs_3820_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
lean_dec(v_a_3824_);
lean_dec_ref(v_a_3823_);
lean_dec(v_a_3822_);
lean_dec_ref(v_a_3821_);
return v_res_3826_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4(lean_object* v_fst_3827_, lean_object* v_as_3828_, size_t v_sz_3829_, size_t v_i_3830_, lean_object* v_bs_3831_){
_start:
{
lean_object* v___x_3832_; 
v___x_3832_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg(v_fst_3827_, v_sz_3829_, v_i_3830_, v_bs_3831_);
return v___x_3832_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___boxed(lean_object* v_fst_3833_, lean_object* v_as_3834_, lean_object* v_sz_3835_, lean_object* v_i_3836_, lean_object* v_bs_3837_){
_start:
{
size_t v_sz_boxed_3838_; size_t v_i_boxed_3839_; lean_object* v_res_3840_; 
v_sz_boxed_3838_ = lean_unbox_usize(v_sz_3835_);
lean_dec(v_sz_3835_);
v_i_boxed_3839_ = lean_unbox_usize(v_i_3836_);
lean_dec(v_i_3836_);
v_res_3840_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4(v_fst_3833_, v_as_3834_, v_sz_boxed_3838_, v_i_boxed_3839_, v_bs_3837_);
lean_dec_ref(v_as_3834_);
lean_dec_ref(v_fst_3833_);
return v_res_3840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10(lean_object* v_00_u03b1_3841_, lean_object* v_lctx_3842_, lean_object* v_localInsts_3843_, lean_object* v_x_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_){
_start:
{
lean_object* v___x_3850_; 
v___x_3850_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v_lctx_3842_, v_localInsts_3843_, v_x_3844_, v___y_3845_, v___y_3846_, v___y_3847_, v___y_3848_);
return v___x_3850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___boxed(lean_object* v_00_u03b1_3851_, lean_object* v_lctx_3852_, lean_object* v_localInsts_3853_, lean_object* v_x_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_){
_start:
{
lean_object* v_res_3860_; 
v_res_3860_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10(v_00_u03b1_3851_, v_lctx_3852_, v_localInsts_3853_, v_x_3854_, v___y_3855_, v___y_3856_, v___y_3857_, v___y_3858_);
lean_dec(v___y_3858_);
lean_dec_ref(v___y_3857_);
lean_dec(v___y_3856_);
lean_dec_ref(v___y_3855_);
return v_res_3860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9(lean_object* v_00_u03b1_3861_, lean_object* v_fvarIds_3862_, lean_object* v_k_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_){
_start:
{
lean_object* v___x_3869_; 
v___x_3869_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(v_fvarIds_3862_, v_k_3863_, v___y_3864_, v___y_3865_, v___y_3866_, v___y_3867_);
return v___x_3869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___boxed(lean_object* v_00_u03b1_3870_, lean_object* v_fvarIds_3871_, lean_object* v_k_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_){
_start:
{
lean_object* v_res_3878_; 
v_res_3878_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9(v_00_u03b1_3870_, v_fvarIds_3871_, v_k_3872_, v___y_3873_, v___y_3874_, v___y_3875_, v___y_3876_);
lean_dec(v___y_3876_);
lean_dec_ref(v___y_3875_);
lean_dec(v___y_3874_);
lean_dec_ref(v___y_3873_);
lean_dec_ref(v_fvarIds_3871_);
return v_res_3878_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__15(lean_object* v_a_3879_){
_start:
{
lean_object* v___x_3880_; 
v___x_3880_ = lean_nat_to_int(v_a_3879_);
return v___x_3880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__0(lean_object* v_xs_3881_, lean_object* v_x_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_){
_start:
{
lean_object* v___x_3888_; lean_object* v___x_3889_; 
v___x_3888_ = lean_array_get_size(v_xs_3881_);
v___x_3889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3888_);
return v___x_3889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__0___boxed(lean_object* v_xs_3890_, lean_object* v_x_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_){
_start:
{
lean_object* v_res_3897_; 
v_res_3897_ = l_Lean_Elab_Structural_reportTermMeasure___lam__0(v_xs_3890_, v_x_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
lean_dec(v___y_3895_);
lean_dec_ref(v___y_3894_);
lean_dec(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec_ref(v_x_3891_);
lean_dec_ref(v_xs_3890_);
return v_res_3897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__1(lean_object* v___x_3898_, lean_object* v_recArgPos_3899_, lean_object* v_xs_3900_, lean_object* v_x_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_){
_start:
{
lean_object* v___x_3907_; uint8_t v___x_3908_; uint8_t v___x_3909_; uint8_t v___x_3910_; lean_object* v___x_3911_; 
v___x_3907_ = lean_array_get(v___x_3898_, v_xs_3900_, v_recArgPos_3899_);
v___x_3908_ = 0;
v___x_3909_ = 1;
v___x_3910_ = 1;
v___x_3911_ = l_Lean_Meta_mkLambdaFVars(v_xs_3900_, v___x_3907_, v___x_3908_, v___x_3909_, v___x_3908_, v___x_3909_, v___x_3910_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_);
return v___x_3911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__1___boxed(lean_object* v___x_3912_, lean_object* v_recArgPos_3913_, lean_object* v_xs_3914_, lean_object* v_x_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_){
_start:
{
lean_object* v_res_3921_; 
v_res_3921_ = l_Lean_Elab_Structural_reportTermMeasure___lam__1(v___x_3912_, v_recArgPos_3913_, v_xs_3914_, v_x_3915_, v___y_3916_, v___y_3917_, v___y_3918_, v___y_3919_);
lean_dec(v___y_3919_);
lean_dec_ref(v___y_3918_);
lean_dec(v___y_3917_);
lean_dec_ref(v___y_3916_);
lean_dec_ref(v_x_3915_);
lean_dec(v_recArgPos_3913_);
lean_dec_ref(v___x_3912_);
return v_res_3921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure(lean_object* v_preDef_3933_, lean_object* v_recArgPos_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_){
_start:
{
lean_object* v_termination_3940_; lean_object* v_terminationBy_x3f_x3f_3941_; 
v_termination_3940_ = lean_ctor_get(v_preDef_3933_, 8);
lean_inc_ref(v_termination_3940_);
v_terminationBy_x3f_x3f_3941_ = lean_ctor_get(v_termination_3940_, 1);
lean_inc(v_terminationBy_x3f_x3f_3941_);
if (lean_obj_tag(v_terminationBy_x3f_x3f_3941_) == 1)
{
lean_object* v_value_3942_; lean_object* v_extraParams_3943_; lean_object* v_val_3944_; lean_object* v___f_3945_; lean_object* v___x_3946_; lean_object* v___f_3947_; uint8_t v___x_3948_; lean_object* v___x_3949_; 
v_value_3942_ = lean_ctor_get(v_preDef_3933_, 7);
lean_inc_ref_n(v_value_3942_, 2);
lean_dec_ref(v_preDef_3933_);
v_extraParams_3943_ = lean_ctor_get(v_termination_3940_, 5);
lean_inc(v_extraParams_3943_);
lean_dec_ref(v_termination_3940_);
v_val_3944_ = lean_ctor_get(v_terminationBy_x3f_x3f_3941_, 0);
lean_inc(v_val_3944_);
lean_dec_ref_known(v_terminationBy_x3f_x3f_3941_, 1);
v___f_3945_ = ((lean_object*)(l_Lean_Elab_Structural_reportTermMeasure___closed__0));
v___x_3946_ = l_Lean_instInhabitedExpr;
v___f_3947_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_reportTermMeasure___lam__1___boxed), 9, 2);
lean_closure_set(v___f_3947_, 0, v___x_3946_);
lean_closure_set(v___f_3947_, 1, v_recArgPos_3934_);
v___x_3948_ = 0;
v___x_3949_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(v_value_3942_, v___f_3947_, v___x_3948_, v_a_3935_, v_a_3936_, v_a_3937_, v_a_3938_);
if (lean_obj_tag(v___x_3949_) == 0)
{
lean_object* v_a_3950_; lean_object* v___x_3951_; uint8_t v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; 
v_a_3950_ = lean_ctor_get(v___x_3949_, 0);
lean_inc(v_a_3950_);
lean_dec_ref_known(v___x_3949_, 1);
v___x_3951_ = lean_box(0);
v___x_3952_ = 1;
v___x_3953_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3953_, 0, v___x_3951_);
lean_ctor_set(v___x_3953_, 1, v_a_3950_);
lean_ctor_set_uint8(v___x_3953_, sizeof(void*)*2, v___x_3952_);
v___x_3954_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(v_value_3942_, v___f_3945_, v___x_3948_, v_a_3935_, v_a_3936_, v_a_3937_, v_a_3938_);
if (lean_obj_tag(v___x_3954_) == 0)
{
lean_object* v_a_3955_; lean_object* v___x_3956_; 
v_a_3955_ = lean_ctor_get(v___x_3954_, 0);
lean_inc(v_a_3955_);
lean_dec_ref_known(v___x_3954_, 1);
v___x_3956_ = l_Lean_Elab_TerminationMeasure_delab(v_a_3955_, v_extraParams_3943_, v___x_3953_, v_a_3935_, v_a_3936_, v_a_3937_, v_a_3938_);
lean_dec(v_a_3955_);
if (lean_obj_tag(v___x_3956_) == 0)
{
lean_object* v_a_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; uint8_t v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; 
v_a_3957_ = lean_ctor_get(v___x_3956_, 0);
lean_inc(v_a_3957_);
lean_dec_ref_known(v___x_3956_, 1);
v___x_3958_ = ((lean_object*)(l_Lean_Elab_Structural_reportTermMeasure___closed__5));
v___x_3959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3958_);
lean_ctor_set(v___x_3959_, 1, v_a_3957_);
v___x_3960_ = lean_box(0);
v___x_3961_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3961_, 0, v___x_3959_);
lean_ctor_set(v___x_3961_, 1, v___x_3960_);
lean_ctor_set(v___x_3961_, 2, v___x_3960_);
lean_ctor_set(v___x_3961_, 3, v___x_3960_);
lean_ctor_set(v___x_3961_, 4, v___x_3960_);
lean_ctor_set(v___x_3961_, 5, v___x_3960_);
v___x_3962_ = ((lean_object*)(l_Lean_Elab_Structural_reportTermMeasure___closed__6));
v___x_3963_ = 4;
v___x_3964_ = l_Lean_MessageData_nil;
v___x_3965_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_val_3944_, v___x_3961_, v___x_3960_, v___x_3962_, v___x_3960_, v___x_3963_, v___x_3964_, v_a_3937_, v_a_3938_);
return v___x_3965_;
}
else
{
lean_object* v_a_3966_; lean_object* v___x_3968_; uint8_t v_isShared_3969_; uint8_t v_isSharedCheck_3973_; 
lean_dec(v_val_3944_);
v_a_3966_ = lean_ctor_get(v___x_3956_, 0);
v_isSharedCheck_3973_ = !lean_is_exclusive(v___x_3956_);
if (v_isSharedCheck_3973_ == 0)
{
v___x_3968_ = v___x_3956_;
v_isShared_3969_ = v_isSharedCheck_3973_;
goto v_resetjp_3967_;
}
else
{
lean_inc(v_a_3966_);
lean_dec(v___x_3956_);
v___x_3968_ = lean_box(0);
v_isShared_3969_ = v_isSharedCheck_3973_;
goto v_resetjp_3967_;
}
v_resetjp_3967_:
{
lean_object* v___x_3971_; 
if (v_isShared_3969_ == 0)
{
v___x_3971_ = v___x_3968_;
goto v_reusejp_3970_;
}
else
{
lean_object* v_reuseFailAlloc_3972_; 
v_reuseFailAlloc_3972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3972_, 0, v_a_3966_);
v___x_3971_ = v_reuseFailAlloc_3972_;
goto v_reusejp_3970_;
}
v_reusejp_3970_:
{
return v___x_3971_;
}
}
}
}
else
{
lean_object* v_a_3974_; lean_object* v___x_3976_; uint8_t v_isShared_3977_; uint8_t v_isSharedCheck_3981_; 
lean_dec_ref_known(v___x_3953_, 2);
lean_dec(v_val_3944_);
lean_dec(v_extraParams_3943_);
v_a_3974_ = lean_ctor_get(v___x_3954_, 0);
v_isSharedCheck_3981_ = !lean_is_exclusive(v___x_3954_);
if (v_isSharedCheck_3981_ == 0)
{
v___x_3976_ = v___x_3954_;
v_isShared_3977_ = v_isSharedCheck_3981_;
goto v_resetjp_3975_;
}
else
{
lean_inc(v_a_3974_);
lean_dec(v___x_3954_);
v___x_3976_ = lean_box(0);
v_isShared_3977_ = v_isSharedCheck_3981_;
goto v_resetjp_3975_;
}
v_resetjp_3975_:
{
lean_object* v___x_3979_; 
if (v_isShared_3977_ == 0)
{
v___x_3979_ = v___x_3976_;
goto v_reusejp_3978_;
}
else
{
lean_object* v_reuseFailAlloc_3980_; 
v_reuseFailAlloc_3980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3980_, 0, v_a_3974_);
v___x_3979_ = v_reuseFailAlloc_3980_;
goto v_reusejp_3978_;
}
v_reusejp_3978_:
{
return v___x_3979_;
}
}
}
}
else
{
lean_object* v_a_3982_; lean_object* v___x_3984_; uint8_t v_isShared_3985_; uint8_t v_isSharedCheck_3989_; 
lean_dec(v_val_3944_);
lean_dec(v_extraParams_3943_);
lean_dec_ref(v_value_3942_);
v_a_3982_ = lean_ctor_get(v___x_3949_, 0);
v_isSharedCheck_3989_ = !lean_is_exclusive(v___x_3949_);
if (v_isSharedCheck_3989_ == 0)
{
v___x_3984_ = v___x_3949_;
v_isShared_3985_ = v_isSharedCheck_3989_;
goto v_resetjp_3983_;
}
else
{
lean_inc(v_a_3982_);
lean_dec(v___x_3949_);
v___x_3984_ = lean_box(0);
v_isShared_3985_ = v_isSharedCheck_3989_;
goto v_resetjp_3983_;
}
v_resetjp_3983_:
{
lean_object* v___x_3987_; 
if (v_isShared_3985_ == 0)
{
v___x_3987_ = v___x_3984_;
goto v_reusejp_3986_;
}
else
{
lean_object* v_reuseFailAlloc_3988_; 
v_reuseFailAlloc_3988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3988_, 0, v_a_3982_);
v___x_3987_ = v_reuseFailAlloc_3988_;
goto v_reusejp_3986_;
}
v_reusejp_3986_:
{
return v___x_3987_;
}
}
}
}
else
{
lean_object* v___x_3990_; lean_object* v___x_3991_; 
lean_dec(v_terminationBy_x3f_x3f_3941_);
lean_dec_ref(v_termination_3940_);
lean_dec(v_recArgPos_3934_);
lean_dec_ref(v_preDef_3933_);
v___x_3990_ = lean_box(0);
v___x_3991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3991_, 0, v___x_3990_);
return v___x_3991_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___boxed(lean_object* v_preDef_3992_, lean_object* v_recArgPos_3993_, lean_object* v_a_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_, lean_object* v_a_3997_, lean_object* v_a_3998_){
_start:
{
lean_object* v_res_3999_; 
v_res_3999_ = l_Lean_Elab_Structural_reportTermMeasure(v_preDef_3992_, v_recArgPos_3993_, v_a_3994_, v_a_3995_, v_a_3996_, v_a_3997_);
lean_dec(v_a_3997_);
lean_dec_ref(v_a_3996_);
lean_dec(v_a_3995_);
lean_dec_ref(v_a_3994_);
return v_res_3999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg(lean_object* v_as_4000_, size_t v_sz_4001_, size_t v_i_4002_, lean_object* v_b_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_){
_start:
{
uint8_t v___x_4009_; 
v___x_4009_ = lean_usize_dec_lt(v_i_4002_, v_sz_4001_);
if (v___x_4009_ == 0)
{
lean_object* v___x_4010_; 
v___x_4010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4010_, 0, v_b_4003_);
return v___x_4010_;
}
else
{
lean_object* v_a_4011_; lean_object* v_declName_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; 
v_a_4011_ = lean_array_uget_borrowed(v_as_4000_, v_i_4002_);
v_declName_4012_ = lean_ctor_get(v_a_4011_, 3);
v___x_4013_ = lean_box(0);
lean_inc(v_declName_4012_);
v___x_4014_ = l_Lean_Meta_saveEqnAffectingOptions(v_declName_4012_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_);
if (lean_obj_tag(v___x_4014_) == 0)
{
size_t v___x_4015_; size_t v___x_4016_; 
lean_dec_ref_known(v___x_4014_, 1);
v___x_4015_ = ((size_t)1ULL);
v___x_4016_ = lean_usize_add(v_i_4002_, v___x_4015_);
v_i_4002_ = v___x_4016_;
v_b_4003_ = v___x_4013_;
goto _start;
}
else
{
return v___x_4014_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg___boxed(lean_object* v_as_4018_, lean_object* v_sz_4019_, lean_object* v_i_4020_, lean_object* v_b_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_){
_start:
{
size_t v_sz_boxed_4027_; size_t v_i_boxed_4028_; lean_object* v_res_4029_; 
v_sz_boxed_4027_ = lean_unbox_usize(v_sz_4019_);
lean_dec(v_sz_4019_);
v_i_boxed_4028_ = lean_unbox_usize(v_i_4020_);
lean_dec(v_i_4020_);
v_res_4029_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg(v_as_4018_, v_sz_boxed_4027_, v_i_boxed_4028_, v_b_4021_, v___y_4022_, v___y_4023_, v___y_4024_, v___y_4025_);
lean_dec(v___y_4025_);
lean_dec_ref(v___y_4024_);
lean_dec(v___y_4023_);
lean_dec_ref(v___y_4022_);
lean_dec_ref(v_as_4018_);
return v_res_4029_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1(lean_object* v_docCtx_4030_, lean_object* v_a_4031_, lean_object* v_snd_4032_, lean_object* v_as_4033_, size_t v_sz_4034_, size_t v_i_4035_, lean_object* v_b_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_){
_start:
{
uint8_t v___x_4044_; 
v___x_4044_ = lean_usize_dec_lt(v_i_4035_, v_sz_4034_);
if (v___x_4044_ == 0)
{
lean_object* v___x_4045_; 
lean_dec_ref(v_snd_4032_);
lean_dec_ref(v_docCtx_4030_);
v___x_4045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4045_, 0, v_b_4036_);
return v___x_4045_;
}
else
{
lean_object* v_array_4046_; lean_object* v_start_4047_; lean_object* v_stop_4048_; uint8_t v___x_4049_; 
v_array_4046_ = lean_ctor_get(v_b_4036_, 0);
v_start_4047_ = lean_ctor_get(v_b_4036_, 1);
v_stop_4048_ = lean_ctor_get(v_b_4036_, 2);
v___x_4049_ = lean_nat_dec_lt(v_start_4047_, v_stop_4048_);
if (v___x_4049_ == 0)
{
lean_object* v___x_4050_; 
lean_dec_ref(v_snd_4032_);
lean_dec_ref(v_docCtx_4030_);
v___x_4050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4050_, 0, v_b_4036_);
return v___x_4050_;
}
else
{
lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4119_; 
lean_inc(v_stop_4048_);
lean_inc(v_start_4047_);
lean_inc_ref(v_array_4046_);
v_isSharedCheck_4119_ = !lean_is_exclusive(v_b_4036_);
if (v_isSharedCheck_4119_ == 0)
{
lean_object* v_unused_4120_; lean_object* v_unused_4121_; lean_object* v_unused_4122_; 
v_unused_4120_ = lean_ctor_get(v_b_4036_, 2);
lean_dec(v_unused_4120_);
v_unused_4121_ = lean_ctor_get(v_b_4036_, 1);
lean_dec(v_unused_4121_);
v_unused_4122_ = lean_ctor_get(v_b_4036_, 0);
lean_dec(v_unused_4122_);
v___x_4052_ = v_b_4036_;
v_isShared_4053_ = v_isSharedCheck_4119_;
goto v_resetjp_4051_;
}
else
{
lean_dec(v_b_4036_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4119_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v_a_4054_; uint8_t v_kind_4055_; lean_object* v_type_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4061_; 
v_a_4054_ = lean_array_uget_borrowed(v_as_4033_, v_i_4035_);
v_kind_4055_ = lean_ctor_get_uint8(v_a_4054_, sizeof(void*)*9);
v_type_4056_ = lean_ctor_get(v_a_4054_, 6);
v___x_4057_ = lean_array_fget(v_array_4046_, v_start_4047_);
v___x_4058_ = lean_unsigned_to_nat(1u);
v___x_4059_ = lean_nat_add(v_start_4047_, v___x_4058_);
lean_dec(v_start_4047_);
if (v_isShared_4053_ == 0)
{
lean_ctor_set(v___x_4052_, 1, v___x_4059_);
v___x_4061_ = v___x_4052_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4118_; 
v_reuseFailAlloc_4118_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4118_, 0, v_array_4046_);
lean_ctor_set(v_reuseFailAlloc_4118_, 1, v___x_4059_);
lean_ctor_set(v_reuseFailAlloc_4118_, 2, v_stop_4048_);
v___x_4061_ = v_reuseFailAlloc_4118_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
lean_object* v_preDef_4063_; lean_object* v___y_4064_; lean_object* v___y_4065_; lean_object* v___y_4066_; lean_object* v___y_4067_; lean_object* v___y_4068_; lean_object* v___y_4069_; uint8_t v___x_4082_; 
v___x_4082_ = l_Lean_Elab_DefKind_isTheorem(v_kind_4055_);
if (v___x_4082_ == 0)
{
lean_object* v___x_4083_; 
lean_inc_ref(v_type_4056_);
v___x_4083_ = l_Lean_Meta_isProp(v_type_4056_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_);
if (lean_obj_tag(v___x_4083_) == 0)
{
lean_object* v_a_4084_; uint8_t v___x_4085_; 
v_a_4084_ = lean_ctor_get(v___x_4083_, 0);
lean_inc(v_a_4084_);
lean_dec_ref_known(v___x_4083_, 1);
v___x_4085_ = lean_unbox(v_a_4084_);
lean_dec(v_a_4084_);
if (v___x_4085_ == 0)
{
lean_object* v___x_4086_; 
lean_inc(v_a_4054_);
v___x_4086_ = l_Lean_Elab_abstractNestedProofs(v_a_4054_, v___x_4049_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_);
if (lean_obj_tag(v___x_4086_) == 0)
{
lean_object* v_a_4087_; size_t v_sz_4088_; size_t v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; 
v_a_4087_ = lean_ctor_get(v___x_4086_, 0);
lean_inc_n(v_a_4087_, 2);
lean_dec_ref_known(v___x_4086_, 1);
v_sz_4088_ = lean_array_size(v_a_4031_);
v___x_4089_ = ((size_t)0ULL);
v___x_4090_ = l_unsafeCast___redArg(v_a_4031_);
v___x_4091_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(v_sz_4088_, v___x_4089_, v___x_4090_);
v___x_4092_ = l_unsafeCast___redArg(v___x_4091_);
lean_dec_ref(v___x_4091_);
lean_inc_ref(v_snd_4032_);
lean_inc(v___x_4057_);
v___x_4093_ = l_Lean_Elab_Structural_registerEqnsInfo(v_a_4087_, v___x_4092_, v___x_4057_, v_snd_4032_, v___y_4041_, v___y_4042_);
if (lean_obj_tag(v___x_4093_) == 0)
{
lean_dec_ref_known(v___x_4093_, 1);
v_preDef_4063_ = v_a_4087_;
v___y_4064_ = v___y_4037_;
v___y_4065_ = v___y_4038_;
v___y_4066_ = v___y_4039_;
v___y_4067_ = v___y_4040_;
v___y_4068_ = v___y_4041_;
v___y_4069_ = v___y_4042_;
goto v___jp_4062_;
}
else
{
lean_object* v_a_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4101_; 
lean_dec(v_a_4087_);
lean_dec_ref(v___x_4061_);
lean_dec(v___x_4057_);
lean_dec_ref(v_snd_4032_);
lean_dec_ref(v_docCtx_4030_);
v_a_4094_ = lean_ctor_get(v___x_4093_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v___x_4093_);
if (v_isSharedCheck_4101_ == 0)
{
v___x_4096_ = v___x_4093_;
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_a_4094_);
lean_dec(v___x_4093_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
lean_object* v___x_4099_; 
if (v_isShared_4097_ == 0)
{
v___x_4099_ = v___x_4096_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v_a_4094_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
}
}
else
{
lean_object* v_a_4102_; lean_object* v___x_4104_; uint8_t v_isShared_4105_; uint8_t v_isSharedCheck_4109_; 
lean_dec_ref(v___x_4061_);
lean_dec(v___x_4057_);
lean_dec_ref(v_snd_4032_);
lean_dec_ref(v_docCtx_4030_);
v_a_4102_ = lean_ctor_get(v___x_4086_, 0);
v_isSharedCheck_4109_ = !lean_is_exclusive(v___x_4086_);
if (v_isSharedCheck_4109_ == 0)
{
v___x_4104_ = v___x_4086_;
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
else
{
lean_inc(v_a_4102_);
lean_dec(v___x_4086_);
v___x_4104_ = lean_box(0);
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
v_resetjp_4103_:
{
lean_object* v___x_4107_; 
if (v_isShared_4105_ == 0)
{
v___x_4107_ = v___x_4104_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v_a_4102_);
v___x_4107_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
return v___x_4107_;
}
}
}
}
else
{
lean_inc(v_a_4054_);
v_preDef_4063_ = v_a_4054_;
v___y_4064_ = v___y_4037_;
v___y_4065_ = v___y_4038_;
v___y_4066_ = v___y_4039_;
v___y_4067_ = v___y_4040_;
v___y_4068_ = v___y_4041_;
v___y_4069_ = v___y_4042_;
goto v___jp_4062_;
}
}
else
{
lean_object* v_a_4110_; lean_object* v___x_4112_; uint8_t v_isShared_4113_; uint8_t v_isSharedCheck_4117_; 
lean_dec_ref(v___x_4061_);
lean_dec(v___x_4057_);
lean_dec_ref(v_snd_4032_);
lean_dec_ref(v_docCtx_4030_);
v_a_4110_ = lean_ctor_get(v___x_4083_, 0);
v_isSharedCheck_4117_ = !lean_is_exclusive(v___x_4083_);
if (v_isSharedCheck_4117_ == 0)
{
v___x_4112_ = v___x_4083_;
v_isShared_4113_ = v_isSharedCheck_4117_;
goto v_resetjp_4111_;
}
else
{
lean_inc(v_a_4110_);
lean_dec(v___x_4083_);
v___x_4112_ = lean_box(0);
v_isShared_4113_ = v_isSharedCheck_4117_;
goto v_resetjp_4111_;
}
v_resetjp_4111_:
{
lean_object* v___x_4115_; 
if (v_isShared_4113_ == 0)
{
v___x_4115_ = v___x_4112_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v_a_4110_);
v___x_4115_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
return v___x_4115_;
}
}
}
}
else
{
lean_inc(v_a_4054_);
v_preDef_4063_ = v_a_4054_;
v___y_4064_ = v___y_4037_;
v___y_4065_ = v___y_4038_;
v___y_4066_ = v___y_4039_;
v___y_4067_ = v___y_4040_;
v___y_4068_ = v___y_4041_;
v___y_4069_ = v___y_4042_;
goto v___jp_4062_;
}
v___jp_4062_:
{
lean_object* v___x_4070_; 
lean_inc_ref(v_docCtx_4030_);
v___x_4070_ = l_Lean_Elab_Structural_addSmartUnfoldingDef(v_docCtx_4030_, v_preDef_4063_, v___x_4057_, v___y_4064_, v___y_4065_, v___y_4066_, v___y_4067_, v___y_4068_, v___y_4069_);
if (lean_obj_tag(v___x_4070_) == 0)
{
size_t v___x_4071_; size_t v___x_4072_; 
lean_dec_ref_known(v___x_4070_, 1);
v___x_4071_ = ((size_t)1ULL);
v___x_4072_ = lean_usize_add(v_i_4035_, v___x_4071_);
v_i_4035_ = v___x_4072_;
v_b_4036_ = v___x_4061_;
goto _start;
}
else
{
lean_object* v_a_4074_; lean_object* v___x_4076_; uint8_t v_isShared_4077_; uint8_t v_isSharedCheck_4081_; 
lean_dec_ref(v___x_4061_);
lean_dec_ref(v_snd_4032_);
lean_dec_ref(v_docCtx_4030_);
v_a_4074_ = lean_ctor_get(v___x_4070_, 0);
v_isSharedCheck_4081_ = !lean_is_exclusive(v___x_4070_);
if (v_isSharedCheck_4081_ == 0)
{
v___x_4076_ = v___x_4070_;
v_isShared_4077_ = v_isSharedCheck_4081_;
goto v_resetjp_4075_;
}
else
{
lean_inc(v_a_4074_);
lean_dec(v___x_4070_);
v___x_4076_ = lean_box(0);
v_isShared_4077_ = v_isSharedCheck_4081_;
goto v_resetjp_4075_;
}
v_resetjp_4075_:
{
lean_object* v___x_4079_; 
if (v_isShared_4077_ == 0)
{
v___x_4079_ = v___x_4076_;
goto v_reusejp_4078_;
}
else
{
lean_object* v_reuseFailAlloc_4080_; 
v_reuseFailAlloc_4080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4080_, 0, v_a_4074_);
v___x_4079_ = v_reuseFailAlloc_4080_;
goto v_reusejp_4078_;
}
v_reusejp_4078_:
{
return v___x_4079_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1___boxed(lean_object* v_docCtx_4123_, lean_object* v_a_4124_, lean_object* v_snd_4125_, lean_object* v_as_4126_, lean_object* v_sz_4127_, lean_object* v_i_4128_, lean_object* v_b_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_){
_start:
{
size_t v_sz_boxed_4137_; size_t v_i_boxed_4138_; lean_object* v_res_4139_; 
v_sz_boxed_4137_ = lean_unbox_usize(v_sz_4127_);
lean_dec(v_sz_4127_);
v_i_boxed_4138_ = lean_unbox_usize(v_i_4128_);
lean_dec(v_i_4128_);
v_res_4139_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1(v_docCtx_4123_, v_a_4124_, v_snd_4125_, v_as_4126_, v_sz_boxed_4137_, v_i_boxed_4138_, v_b_4129_, v___y_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_);
lean_dec(v___y_4135_);
lean_dec_ref(v___y_4134_);
lean_dec(v___y_4133_);
lean_dec_ref(v___y_4132_);
lean_dec(v___y_4131_);
lean_dec_ref(v___y_4130_);
lean_dec_ref(v_as_4126_);
lean_dec_ref(v_a_4124_);
return v_res_4139_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg(size_t v_sz_4140_, size_t v_i_4141_, lean_object* v_bs_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_){
_start:
{
uint8_t v___x_4146_; 
v___x_4146_ = lean_usize_dec_lt(v_i_4141_, v_sz_4140_);
if (v___x_4146_ == 0)
{
lean_object* v___x_4147_; lean_object* v___x_4148_; 
v___x_4147_ = l_unsafeCast___redArg(v_bs_4142_);
lean_dec_ref(v_bs_4142_);
v___x_4148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4148_, 0, v___x_4147_);
return v___x_4148_;
}
else
{
lean_object* v_v_4149_; lean_object* v___x_4150_; lean_object* v_bs_x27_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; 
v_v_4149_ = lean_array_uget(v_bs_4142_, v_i_4141_);
v___x_4150_ = lean_unsigned_to_nat(0u);
v_bs_x27_4151_ = lean_array_uset(v_bs_4142_, v_i_4141_, v___x_4150_);
v___x_4152_ = l_unsafeCast___redArg(v_v_4149_);
lean_dec(v_v_4149_);
v___x_4153_ = l_Lean_Elab_eraseRecAppSyntax(v___x_4152_, v___y_4143_, v___y_4144_);
if (lean_obj_tag(v___x_4153_) == 0)
{
lean_object* v_a_4154_; size_t v___x_4155_; size_t v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; 
v_a_4154_ = lean_ctor_get(v___x_4153_, 0);
lean_inc(v_a_4154_);
lean_dec_ref_known(v___x_4153_, 1);
v___x_4155_ = ((size_t)1ULL);
v___x_4156_ = lean_usize_add(v_i_4141_, v___x_4155_);
v___x_4157_ = l_unsafeCast___redArg(v_a_4154_);
lean_dec(v_a_4154_);
v___x_4158_ = lean_array_uset(v_bs_x27_4151_, v_i_4141_, v___x_4157_);
v_i_4141_ = v___x_4156_;
v_bs_4142_ = v___x_4158_;
goto _start;
}
else
{
lean_object* v_a_4160_; lean_object* v___x_4162_; uint8_t v_isShared_4163_; uint8_t v_isSharedCheck_4167_; 
lean_dec_ref(v_bs_x27_4151_);
v_a_4160_ = lean_ctor_get(v___x_4153_, 0);
v_isSharedCheck_4167_ = !lean_is_exclusive(v___x_4153_);
if (v_isSharedCheck_4167_ == 0)
{
v___x_4162_ = v___x_4153_;
v_isShared_4163_ = v_isSharedCheck_4167_;
goto v_resetjp_4161_;
}
else
{
lean_inc(v_a_4160_);
lean_dec(v___x_4153_);
v___x_4162_ = lean_box(0);
v_isShared_4163_ = v_isSharedCheck_4167_;
goto v_resetjp_4161_;
}
v_resetjp_4161_:
{
lean_object* v___x_4165_; 
if (v_isShared_4163_ == 0)
{
v___x_4165_ = v___x_4162_;
goto v_reusejp_4164_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v_a_4160_);
v___x_4165_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4164_;
}
v_reusejp_4164_:
{
return v___x_4165_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg___boxed(lean_object* v_sz_4168_, lean_object* v_i_4169_, lean_object* v_bs_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_){
_start:
{
size_t v_sz_boxed_4174_; size_t v_i_boxed_4175_; lean_object* v_res_4176_; 
v_sz_boxed_4174_ = lean_unbox_usize(v_sz_4168_);
lean_dec(v_sz_4168_);
v_i_boxed_4175_ = lean_unbox_usize(v_i_4169_);
lean_dec(v_i_4169_);
v_res_4176_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg(v_sz_boxed_4174_, v_i_boxed_4175_, v_bs_4170_, v___y_4171_, v___y_4172_);
lean_dec(v___y_4172_);
lean_dec_ref(v___y_4171_);
return v_res_4176_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0(size_t v_sz_4177_, size_t v_i_4178_, lean_object* v_bs_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_){
_start:
{
lean_object* v___x_4187_; 
v___x_4187_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg(v_sz_4177_, v_i_4178_, v_bs_4179_, v___y_4184_, v___y_4185_);
return v___x_4187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___boxed(lean_object* v_sz_4188_, lean_object* v_i_4189_, lean_object* v_bs_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_, lean_object* v___y_4197_){
_start:
{
size_t v_sz_boxed_4198_; size_t v_i_boxed_4199_; lean_object* v_res_4200_; 
v_sz_boxed_4198_ = lean_unbox_usize(v_sz_4188_);
lean_dec(v_sz_4188_);
v_i_boxed_4199_ = lean_unbox_usize(v_i_4189_);
lean_dec(v_i_4189_);
v_res_4200_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0(v_sz_boxed_4198_, v_i_boxed_4199_, v_bs_4190_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_);
lean_dec(v___y_4196_);
lean_dec_ref(v___y_4195_);
lean_dec(v___y_4194_);
lean_dec_ref(v___y_4193_);
lean_dec(v___y_4192_);
lean_dec_ref(v___y_4191_);
return v_res_4200_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___lam__0(lean_object* v___x_4201_, lean_object* v_e_4202_){
_start:
{
lean_object* v___x_4203_; lean_object* v___x_4204_; 
v___x_4203_ = l_Lean_indentD(v_e_4202_);
v___x_4204_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4204_, 0, v___x_4201_);
lean_ctor_set(v___x_4204_, 1, v___x_4203_);
return v___x_4204_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___lam__1(lean_object* v_docCtx_4205_, lean_object* v_a_4206_, uint8_t v___x_4207_, lean_object* v___x_4208_, uint8_t v___x_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_){
_start:
{
lean_object* v___x_4217_; 
v___x_4217_ = l_Lean_Elab_addNonRec(v_docCtx_4205_, v_a_4206_, v___x_4207_, v___x_4208_, v___x_4209_, v___x_4207_, v___x_4209_, v___y_4210_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_, v___y_4215_);
return v___x_4217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___lam__1___boxed(lean_object* v_docCtx_4218_, lean_object* v_a_4219_, lean_object* v___x_4220_, lean_object* v___x_4221_, lean_object* v___x_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_){
_start:
{
uint8_t v___x_9338__boxed_4230_; uint8_t v___x_9340__boxed_4231_; lean_object* v_res_4232_; 
v___x_9338__boxed_4230_ = lean_unbox(v___x_4220_);
v___x_9340__boxed_4231_ = lean_unbox(v___x_4222_);
v_res_4232_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___lam__1(v_docCtx_4218_, v_a_4219_, v___x_9338__boxed_4230_, v___x_4221_, v___x_9340__boxed_4231_, v___y_4223_, v___y_4224_, v___y_4225_, v___y_4226_, v___y_4227_, v___y_4228_);
lean_dec(v___y_4228_);
lean_dec_ref(v___y_4227_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
lean_dec(v___y_4224_);
lean_dec_ref(v___y_4223_);
return v_res_4232_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__1(void){
_start:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; 
v___x_4234_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__0));
v___x_4235_ = l_Lean_stringToMessageData(v___x_4234_);
return v___x_4235_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__2(void){
_start:
{
lean_object* v___x_4236_; lean_object* v___f_4237_; 
v___x_4236_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__1);
v___f_4237_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___lam__0), 2, 1);
lean_closure_set(v___f_4237_, 0, v___x_4236_);
return v___f_4237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5(lean_object* v_names_4238_, lean_object* v_docCtx_4239_, lean_object* v_as_4240_, size_t v_i_4241_, size_t v_stop_4242_, lean_object* v_b_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_){
_start:
{
uint8_t v___x_4251_; 
v___x_4251_ = lean_usize_dec_eq(v_i_4241_, v_stop_4242_);
if (v___x_4251_ == 0)
{
lean_object* v___x_4252_; lean_object* v___x_4253_; 
v___x_4252_ = lean_array_uget_borrowed(v_as_4240_, v_i_4241_);
lean_inc(v___x_4252_);
v___x_4253_ = l_Lean_Elab_eraseRecAppSyntax(v___x_4252_, v___y_4248_, v___y_4249_);
if (lean_obj_tag(v___x_4253_) == 0)
{
lean_object* v_a_4254_; lean_object* v___f_4255_; lean_object* v___x_4256_; uint8_t v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___f_4260_; lean_object* v___x_4261_; 
v_a_4254_ = lean_ctor_get(v___x_4253_, 0);
lean_inc(v_a_4254_);
lean_dec_ref_known(v___x_4253_, 1);
v___f_4255_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___closed__2);
lean_inc_ref(v_names_4238_);
v___x_4256_ = lean_array_to_list(v_names_4238_);
v___x_4257_ = 1;
v___x_4258_ = lean_box(v___x_4251_);
v___x_4259_ = lean_box(v___x_4257_);
lean_inc(v___y_4245_);
lean_inc_ref(v___y_4244_);
lean_inc_ref(v_docCtx_4239_);
v___f_4260_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___lam__1___boxed), 12, 7);
lean_closure_set(v___f_4260_, 0, v_docCtx_4239_);
lean_closure_set(v___f_4260_, 1, v_a_4254_);
lean_closure_set(v___f_4260_, 2, v___x_4258_);
lean_closure_set(v___f_4260_, 3, v___x_4256_);
lean_closure_set(v___f_4260_, 4, v___x_4259_);
lean_closure_set(v___f_4260_, 5, v___y_4244_);
lean_closure_set(v___f_4260_, 6, v___y_4245_);
v___x_4261_ = l_Lean_Meta_mapErrorImp___redArg(v___f_4260_, v___f_4255_, v___y_4246_, v___y_4247_, v___y_4248_, v___y_4249_);
if (lean_obj_tag(v___x_4261_) == 0)
{
if (lean_obj_tag(v___x_4261_) == 0)
{
lean_object* v_a_4262_; size_t v___x_4263_; size_t v___x_4264_; 
v_a_4262_ = lean_ctor_get(v___x_4261_, 0);
lean_inc(v_a_4262_);
lean_dec_ref_known(v___x_4261_, 1);
v___x_4263_ = ((size_t)1ULL);
v___x_4264_ = lean_usize_add(v_i_4241_, v___x_4263_);
v_i_4241_ = v___x_4264_;
v_b_4243_ = v_a_4262_;
goto _start;
}
else
{
lean_dec_ref(v_docCtx_4239_);
lean_dec_ref(v_names_4238_);
return v___x_4261_;
}
}
else
{
lean_object* v_a_4266_; lean_object* v___x_4268_; uint8_t v_isShared_4269_; uint8_t v_isSharedCheck_4273_; 
lean_dec_ref(v_docCtx_4239_);
lean_dec_ref(v_names_4238_);
v_a_4266_ = lean_ctor_get(v___x_4261_, 0);
v_isSharedCheck_4273_ = !lean_is_exclusive(v___x_4261_);
if (v_isSharedCheck_4273_ == 0)
{
v___x_4268_ = v___x_4261_;
v_isShared_4269_ = v_isSharedCheck_4273_;
goto v_resetjp_4267_;
}
else
{
lean_inc(v_a_4266_);
lean_dec(v___x_4261_);
v___x_4268_ = lean_box(0);
v_isShared_4269_ = v_isSharedCheck_4273_;
goto v_resetjp_4267_;
}
v_resetjp_4267_:
{
lean_object* v___x_4271_; 
if (v_isShared_4269_ == 0)
{
v___x_4271_ = v___x_4268_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4272_; 
v_reuseFailAlloc_4272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4272_, 0, v_a_4266_);
v___x_4271_ = v_reuseFailAlloc_4272_;
goto v_reusejp_4270_;
}
v_reusejp_4270_:
{
return v___x_4271_;
}
}
}
}
else
{
lean_object* v_a_4274_; lean_object* v___x_4276_; uint8_t v_isShared_4277_; uint8_t v_isSharedCheck_4281_; 
lean_dec_ref(v_docCtx_4239_);
lean_dec_ref(v_names_4238_);
v_a_4274_ = lean_ctor_get(v___x_4253_, 0);
v_isSharedCheck_4281_ = !lean_is_exclusive(v___x_4253_);
if (v_isSharedCheck_4281_ == 0)
{
v___x_4276_ = v___x_4253_;
v_isShared_4277_ = v_isSharedCheck_4281_;
goto v_resetjp_4275_;
}
else
{
lean_inc(v_a_4274_);
lean_dec(v___x_4253_);
v___x_4276_ = lean_box(0);
v_isShared_4277_ = v_isSharedCheck_4281_;
goto v_resetjp_4275_;
}
v_resetjp_4275_:
{
lean_object* v___x_4279_; 
if (v_isShared_4277_ == 0)
{
v___x_4279_ = v___x_4276_;
goto v_reusejp_4278_;
}
else
{
lean_object* v_reuseFailAlloc_4280_; 
v_reuseFailAlloc_4280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4280_, 0, v_a_4274_);
v___x_4279_ = v_reuseFailAlloc_4280_;
goto v_reusejp_4278_;
}
v_reusejp_4278_:
{
return v___x_4279_;
}
}
}
}
else
{
lean_object* v___x_4282_; 
lean_dec_ref(v_docCtx_4239_);
lean_dec_ref(v_names_4238_);
v___x_4282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4282_, 0, v_b_4243_);
return v___x_4282_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5___boxed(lean_object* v_names_4283_, lean_object* v_docCtx_4284_, lean_object* v_as_4285_, lean_object* v_i_4286_, lean_object* v_stop_4287_, lean_object* v_b_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_){
_start:
{
size_t v_i_boxed_4296_; size_t v_stop_boxed_4297_; lean_object* v_res_4298_; 
v_i_boxed_4296_ = lean_unbox_usize(v_i_4286_);
lean_dec(v_i_4286_);
v_stop_boxed_4297_ = lean_unbox_usize(v_stop_4287_);
lean_dec(v_stop_4287_);
v_res_4298_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5(v_names_4283_, v_docCtx_4284_, v_as_4285_, v_i_boxed_4296_, v_stop_boxed_4297_, v_b_4288_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_, v___y_4293_, v___y_4294_);
lean_dec(v___y_4294_);
lean_dec_ref(v___y_4293_);
lean_dec(v___y_4292_);
lean_dec_ref(v___y_4291_);
lean_dec(v___y_4290_);
lean_dec_ref(v___y_4289_);
lean_dec_ref(v_as_4285_);
return v_res_4298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__4___redArg(lean_object* v_as_4299_, size_t v_sz_4300_, size_t v_i_4301_, lean_object* v_b_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_){
_start:
{
uint8_t v___x_4308_; 
v___x_4308_ = lean_usize_dec_lt(v_i_4301_, v_sz_4300_);
if (v___x_4308_ == 0)
{
lean_object* v___x_4309_; 
v___x_4309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4309_, 0, v_b_4302_);
return v___x_4309_;
}
else
{
lean_object* v_array_4310_; lean_object* v_start_4311_; lean_object* v_stop_4312_; uint8_t v___x_4313_; 
v_array_4310_ = lean_ctor_get(v_b_4302_, 0);
v_start_4311_ = lean_ctor_get(v_b_4302_, 1);
v_stop_4312_ = lean_ctor_get(v_b_4302_, 2);
v___x_4313_ = lean_nat_dec_lt(v_start_4311_, v_stop_4312_);
if (v___x_4313_ == 0)
{
lean_object* v___x_4314_; 
v___x_4314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4314_, 0, v_b_4302_);
return v___x_4314_;
}
else
{
lean_object* v___x_4316_; uint8_t v_isShared_4317_; uint8_t v_isSharedCheck_4337_; 
lean_inc(v_stop_4312_);
lean_inc(v_start_4311_);
lean_inc_ref(v_array_4310_);
v_isSharedCheck_4337_ = !lean_is_exclusive(v_b_4302_);
if (v_isSharedCheck_4337_ == 0)
{
lean_object* v_unused_4338_; lean_object* v_unused_4339_; lean_object* v_unused_4340_; 
v_unused_4338_ = lean_ctor_get(v_b_4302_, 2);
lean_dec(v_unused_4338_);
v_unused_4339_ = lean_ctor_get(v_b_4302_, 1);
lean_dec(v_unused_4339_);
v_unused_4340_ = lean_ctor_get(v_b_4302_, 0);
lean_dec(v_unused_4340_);
v___x_4316_ = v_b_4302_;
v_isShared_4317_ = v_isSharedCheck_4337_;
goto v_resetjp_4315_;
}
else
{
lean_dec(v_b_4302_);
v___x_4316_ = lean_box(0);
v_isShared_4317_ = v_isSharedCheck_4337_;
goto v_resetjp_4315_;
}
v_resetjp_4315_:
{
lean_object* v_a_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4323_; 
v_a_4318_ = lean_array_uget_borrowed(v_as_4299_, v_i_4301_);
v___x_4319_ = lean_array_fget(v_array_4310_, v_start_4311_);
v___x_4320_ = lean_unsigned_to_nat(1u);
v___x_4321_ = lean_nat_add(v_start_4311_, v___x_4320_);
lean_dec(v_start_4311_);
if (v_isShared_4317_ == 0)
{
lean_ctor_set(v___x_4316_, 1, v___x_4321_);
v___x_4323_ = v___x_4316_;
goto v_reusejp_4322_;
}
else
{
lean_object* v_reuseFailAlloc_4336_; 
v_reuseFailAlloc_4336_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4336_, 0, v_array_4310_);
lean_ctor_set(v_reuseFailAlloc_4336_, 1, v___x_4321_);
lean_ctor_set(v_reuseFailAlloc_4336_, 2, v_stop_4312_);
v___x_4323_ = v_reuseFailAlloc_4336_;
goto v_reusejp_4322_;
}
v_reusejp_4322_:
{
lean_object* v___x_4324_; 
lean_inc(v_a_4318_);
v___x_4324_ = l_Lean_Elab_Structural_reportTermMeasure(v___x_4319_, v_a_4318_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_);
if (lean_obj_tag(v___x_4324_) == 0)
{
size_t v___x_4325_; size_t v___x_4326_; 
lean_dec_ref_known(v___x_4324_, 1);
v___x_4325_ = ((size_t)1ULL);
v___x_4326_ = lean_usize_add(v_i_4301_, v___x_4325_);
v_i_4301_ = v___x_4326_;
v_b_4302_ = v___x_4323_;
goto _start;
}
else
{
lean_object* v_a_4328_; lean_object* v___x_4330_; uint8_t v_isShared_4331_; uint8_t v_isSharedCheck_4335_; 
lean_dec_ref(v___x_4323_);
v_a_4328_ = lean_ctor_get(v___x_4324_, 0);
v_isSharedCheck_4335_ = !lean_is_exclusive(v___x_4324_);
if (v_isSharedCheck_4335_ == 0)
{
v___x_4330_ = v___x_4324_;
v_isShared_4331_ = v_isSharedCheck_4335_;
goto v_resetjp_4329_;
}
else
{
lean_inc(v_a_4328_);
lean_dec(v___x_4324_);
v___x_4330_ = lean_box(0);
v_isShared_4331_ = v_isSharedCheck_4335_;
goto v_resetjp_4329_;
}
v_resetjp_4329_:
{
lean_object* v___x_4333_; 
if (v_isShared_4331_ == 0)
{
v___x_4333_ = v___x_4330_;
goto v_reusejp_4332_;
}
else
{
lean_object* v_reuseFailAlloc_4334_; 
v_reuseFailAlloc_4334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4334_, 0, v_a_4328_);
v___x_4333_ = v_reuseFailAlloc_4334_;
goto v_reusejp_4332_;
}
v_reusejp_4332_:
{
return v___x_4333_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__4___redArg___boxed(lean_object* v_as_4341_, lean_object* v_sz_4342_, lean_object* v_i_4343_, lean_object* v_b_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_){
_start:
{
size_t v_sz_boxed_4350_; size_t v_i_boxed_4351_; lean_object* v_res_4352_; 
v_sz_boxed_4350_ = lean_unbox_usize(v_sz_4342_);
lean_dec(v_sz_4342_);
v_i_boxed_4351_ = lean_unbox_usize(v_i_4343_);
lean_dec(v_i_4343_);
v_res_4352_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__4___redArg(v_as_4341_, v_sz_boxed_4350_, v_i_boxed_4351_, v_b_4344_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_);
lean_dec(v___y_4348_);
lean_dec_ref(v___y_4347_);
lean_dec(v___y_4346_);
lean_dec_ref(v___y_4345_);
lean_dec_ref(v_as_4341_);
return v_res_4352_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg(lean_object* v_as_4353_, size_t v_sz_4354_, size_t v_i_4355_, lean_object* v_b_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_){
_start:
{
uint8_t v___x_4360_; 
v___x_4360_ = lean_usize_dec_lt(v_i_4355_, v_sz_4354_);
if (v___x_4360_ == 0)
{
lean_object* v___x_4361_; 
v___x_4361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4361_, 0, v_b_4356_);
return v___x_4361_;
}
else
{
lean_object* v_a_4362_; lean_object* v_declName_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; 
v_a_4362_ = lean_array_uget_borrowed(v_as_4353_, v_i_4355_);
v_declName_4363_ = lean_ctor_get(v_a_4362_, 3);
v___x_4364_ = lean_box(0);
lean_inc(v_declName_4363_);
v___x_4365_ = l_Lean_enableRealizationsForConst(v_declName_4363_, v___y_4357_, v___y_4358_);
if (lean_obj_tag(v___x_4365_) == 0)
{
size_t v___x_4366_; size_t v___x_4367_; 
lean_dec_ref_known(v___x_4365_, 1);
v___x_4366_ = ((size_t)1ULL);
v___x_4367_ = lean_usize_add(v_i_4355_, v___x_4366_);
v_i_4355_ = v___x_4367_;
v_b_4356_ = v___x_4364_;
goto _start;
}
else
{
return v___x_4365_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg___boxed(lean_object* v_as_4369_, lean_object* v_sz_4370_, lean_object* v_i_4371_, lean_object* v_b_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_){
_start:
{
size_t v_sz_boxed_4376_; size_t v_i_boxed_4377_; lean_object* v_res_4378_; 
v_sz_boxed_4376_ = lean_unbox_usize(v_sz_4370_);
lean_dec(v_sz_4370_);
v_i_boxed_4377_ = lean_unbox_usize(v_i_4371_);
lean_dec(v_i_4371_);
v_res_4378_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg(v_as_4369_, v_sz_boxed_4376_, v_i_boxed_4377_, v_b_4372_, v___y_4373_, v___y_4374_);
lean_dec(v___y_4374_);
lean_dec_ref(v___y_4373_);
lean_dec_ref(v_as_4369_);
return v_res_4378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_structuralRecursion(lean_object* v_docCtx_4379_, lean_object* v_preDefs_4380_, lean_object* v_termMeasure_x3fs_4381_, lean_object* v_a_4382_, lean_object* v_a_4383_, lean_object* v_a_4384_, lean_object* v_a_4385_, lean_object* v_a_4386_, lean_object* v_a_4387_){
_start:
{
size_t v_sz_4389_; size_t v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v_names_4393_; lean_object* v___x_4394_; 
v_sz_4389_ = lean_array_size(v_preDefs_4380_);
v___x_4390_ = ((size_t)0ULL);
v___x_4391_ = l_unsafeCast___redArg(v_preDefs_4380_);
lean_inc(v___x_4391_);
v___x_4392_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(v_sz_4389_, v___x_4390_, v___x_4391_);
v_names_4393_ = l_unsafeCast___redArg(v___x_4392_);
lean_dec_ref(v___x_4392_);
lean_inc_ref(v_preDefs_4380_);
v___x_4394_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos(v_preDefs_4380_, v_termMeasure_x3fs_4381_, v_a_4384_, v_a_4385_, v_a_4386_, v_a_4387_);
if (lean_obj_tag(v___x_4394_) == 0)
{
lean_object* v_a_4395_; lean_object* v_snd_4396_; lean_object* v_fst_4397_; lean_object* v_fst_4398_; lean_object* v_snd_4399_; lean_object* v___y_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; size_t v_sz_4439_; lean_object* v___x_4440_; 
v_a_4395_ = lean_ctor_get(v___x_4394_, 0);
lean_inc(v_a_4395_);
lean_dec_ref_known(v___x_4394_, 1);
v_snd_4396_ = lean_ctor_get(v_a_4395_, 1);
lean_inc(v_snd_4396_);
v_fst_4397_ = lean_ctor_get(v_a_4395_, 0);
lean_inc(v_fst_4397_);
lean_dec(v_a_4395_);
v_fst_4398_ = lean_ctor_get(v_snd_4396_, 0);
lean_inc(v_fst_4398_);
v_snd_4399_ = lean_ctor_get(v_snd_4396_, 1);
lean_inc(v_snd_4399_);
lean_dec(v_snd_4396_);
v___x_4436_ = lean_unsigned_to_nat(0u);
v___x_4437_ = lean_array_get_size(v_preDefs_4380_);
v___x_4438_ = l_Array_toSubarray___redArg(v_preDefs_4380_, v___x_4436_, v___x_4437_);
v_sz_4439_ = lean_array_size(v_fst_4397_);
v___x_4440_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__4___redArg(v_fst_4397_, v_sz_4439_, v___x_4390_, v___x_4438_, v_a_4384_, v_a_4385_, v_a_4386_, v_a_4387_);
if (lean_obj_tag(v___x_4440_) == 0)
{
lean_object* v___x_4441_; uint8_t v___x_4442_; 
lean_dec_ref_known(v___x_4440_, 1);
v___x_4441_ = lean_array_get_size(v_fst_4398_);
v___x_4442_ = lean_nat_dec_lt(v___x_4436_, v___x_4441_);
if (v___x_4442_ == 0)
{
lean_dec(v_names_4393_);
goto v___jp_4400_;
}
else
{
lean_object* v___x_4443_; uint8_t v___x_4444_; 
v___x_4443_ = lean_box(0);
v___x_4444_ = lean_nat_dec_le(v___x_4441_, v___x_4441_);
if (v___x_4444_ == 0)
{
if (v___x_4442_ == 0)
{
lean_dec(v_names_4393_);
goto v___jp_4400_;
}
else
{
size_t v___x_4445_; lean_object* v___x_4446_; 
v___x_4445_ = lean_usize_of_nat(v___x_4441_);
lean_inc_ref(v_docCtx_4379_);
v___x_4446_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5(v_names_4393_, v_docCtx_4379_, v_fst_4398_, v___x_4390_, v___x_4445_, v___x_4443_, v_a_4382_, v_a_4383_, v_a_4384_, v_a_4385_, v_a_4386_, v_a_4387_);
v___y_4435_ = v___x_4446_;
goto v___jp_4434_;
}
}
else
{
size_t v___x_4447_; lean_object* v___x_4448_; 
v___x_4447_ = lean_usize_of_nat(v___x_4441_);
lean_inc_ref(v_docCtx_4379_);
v___x_4448_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__5(v_names_4393_, v_docCtx_4379_, v_fst_4398_, v___x_4390_, v___x_4447_, v___x_4443_, v_a_4382_, v_a_4383_, v_a_4384_, v_a_4385_, v_a_4386_, v_a_4387_);
v___y_4435_ = v___x_4448_;
goto v___jp_4434_;
}
}
}
else
{
lean_object* v_a_4449_; lean_object* v___x_4451_; uint8_t v_isShared_4452_; uint8_t v_isSharedCheck_4456_; 
lean_dec(v_snd_4399_);
lean_dec(v_fst_4398_);
lean_dec(v_fst_4397_);
lean_dec(v_names_4393_);
lean_dec(v___x_4391_);
lean_dec_ref(v_docCtx_4379_);
v_a_4449_ = lean_ctor_get(v___x_4440_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v___x_4440_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4451_ = v___x_4440_;
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
else
{
lean_inc(v_a_4449_);
lean_dec(v___x_4440_);
v___x_4451_ = lean_box(0);
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
v_resetjp_4450_:
{
lean_object* v___x_4454_; 
if (v_isShared_4452_ == 0)
{
v___x_4454_ = v___x_4451_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v_a_4449_);
v___x_4454_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
return v___x_4454_;
}
}
}
v___jp_4400_:
{
lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_8996__overap_4404_; lean_object* v___x_4405_; 
v___x_4401_ = lean_box_usize(v_sz_4389_);
v___x_4402_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed__const__1));
v___x_4403_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___boxed), 10, 3);
lean_closure_set(v___x_4403_, 0, v___x_4401_);
lean_closure_set(v___x_4403_, 1, v___x_4402_);
lean_closure_set(v___x_4403_, 2, v___x_4391_);
v___x_8996__overap_4404_ = l_unsafeCast___redArg(v___x_4403_);
lean_dec_ref(v___x_4403_);
lean_inc(v_a_4387_);
lean_inc_ref(v_a_4386_);
lean_inc(v_a_4385_);
lean_inc_ref(v_a_4384_);
lean_inc(v_a_4383_);
lean_inc_ref(v_a_4382_);
v___x_4405_ = lean_apply_7(v___x_8996__overap_4404_, v_a_4382_, v_a_4383_, v_a_4384_, v_a_4385_, v_a_4386_, v_a_4387_, lean_box(0));
if (lean_obj_tag(v___x_4405_) == 0)
{
lean_object* v_a_4406_; lean_object* v___x_4407_; 
v_a_4406_ = lean_ctor_get(v___x_4405_, 0);
lean_inc_n(v_a_4406_, 2);
lean_dec_ref_known(v___x_4405_, 1);
lean_inc_ref(v_docCtx_4379_);
v___x_4407_ = l_Lean_Elab_addAndCompilePartialRec(v_docCtx_4379_, v_a_4406_, v_a_4382_, v_a_4383_, v_a_4384_, v_a_4385_, v_a_4386_, v_a_4387_);
if (lean_obj_tag(v___x_4407_) == 0)
{
lean_object* v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; size_t v_sz_4411_; lean_object* v___x_4412_; 
lean_dec_ref_known(v___x_4407_, 1);
v___x_4408_ = lean_unsigned_to_nat(0u);
v___x_4409_ = lean_array_get_size(v_fst_4397_);
v___x_4410_ = l_Array_toSubarray___redArg(v_fst_4397_, v___x_4408_, v___x_4409_);
v_sz_4411_ = lean_array_size(v_a_4406_);
v___x_4412_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1(v_docCtx_4379_, v_a_4406_, v_snd_4399_, v_a_4406_, v_sz_4411_, v___x_4390_, v___x_4410_, v_a_4382_, v_a_4383_, v_a_4384_, v_a_4385_, v_a_4386_, v_a_4387_);
if (lean_obj_tag(v___x_4412_) == 0)
{
lean_object* v___x_4413_; lean_object* v___x_4414_; 
lean_dec_ref_known(v___x_4412_, 1);
v___x_4413_ = lean_box(0);
v___x_4414_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg(v_a_4406_, v_sz_4411_, v___x_4390_, v___x_4413_, v_a_4384_, v_a_4385_, v_a_4386_, v_a_4387_);
if (lean_obj_tag(v___x_4414_) == 0)
{
lean_object* v___x_4415_; 
lean_dec_ref_known(v___x_4414_, 1);
v___x_4415_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg(v_a_4406_, v_sz_4411_, v___x_4390_, v___x_4413_, v_a_4386_, v_a_4387_);
lean_dec(v_a_4406_);
if (lean_obj_tag(v___x_4415_) == 0)
{
uint8_t v___x_4416_; lean_object* v___x_4417_; 
lean_dec_ref_known(v___x_4415_, 1);
v___x_4416_ = 1;
v___x_4417_ = l_Lean_Elab_applyAttributesOf(v_fst_4398_, v___x_4416_, v_a_4382_, v_a_4383_, v_a_4384_, v_a_4385_, v_a_4386_, v_a_4387_);
lean_dec(v_fst_4398_);
return v___x_4417_;
}
else
{
lean_dec(v_fst_4398_);
return v___x_4415_;
}
}
else
{
lean_dec(v_a_4406_);
lean_dec(v_fst_4398_);
return v___x_4414_;
}
}
else
{
lean_object* v_a_4418_; lean_object* v___x_4420_; uint8_t v_isShared_4421_; uint8_t v_isSharedCheck_4425_; 
lean_dec(v_a_4406_);
lean_dec(v_fst_4398_);
v_a_4418_ = lean_ctor_get(v___x_4412_, 0);
v_isSharedCheck_4425_ = !lean_is_exclusive(v___x_4412_);
if (v_isSharedCheck_4425_ == 0)
{
v___x_4420_ = v___x_4412_;
v_isShared_4421_ = v_isSharedCheck_4425_;
goto v_resetjp_4419_;
}
else
{
lean_inc(v_a_4418_);
lean_dec(v___x_4412_);
v___x_4420_ = lean_box(0);
v_isShared_4421_ = v_isSharedCheck_4425_;
goto v_resetjp_4419_;
}
v_resetjp_4419_:
{
lean_object* v___x_4423_; 
if (v_isShared_4421_ == 0)
{
v___x_4423_ = v___x_4420_;
goto v_reusejp_4422_;
}
else
{
lean_object* v_reuseFailAlloc_4424_; 
v_reuseFailAlloc_4424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4424_, 0, v_a_4418_);
v___x_4423_ = v_reuseFailAlloc_4424_;
goto v_reusejp_4422_;
}
v_reusejp_4422_:
{
return v___x_4423_;
}
}
}
}
else
{
lean_dec(v_a_4406_);
lean_dec(v_snd_4399_);
lean_dec(v_fst_4398_);
lean_dec(v_fst_4397_);
lean_dec_ref(v_docCtx_4379_);
return v___x_4407_;
}
}
else
{
lean_object* v_a_4426_; lean_object* v___x_4428_; uint8_t v_isShared_4429_; uint8_t v_isSharedCheck_4433_; 
lean_dec(v_snd_4399_);
lean_dec(v_fst_4398_);
lean_dec(v_fst_4397_);
lean_dec_ref(v_docCtx_4379_);
v_a_4426_ = lean_ctor_get(v___x_4405_, 0);
v_isSharedCheck_4433_ = !lean_is_exclusive(v___x_4405_);
if (v_isSharedCheck_4433_ == 0)
{
v___x_4428_ = v___x_4405_;
v_isShared_4429_ = v_isSharedCheck_4433_;
goto v_resetjp_4427_;
}
else
{
lean_inc(v_a_4426_);
lean_dec(v___x_4405_);
v___x_4428_ = lean_box(0);
v_isShared_4429_ = v_isSharedCheck_4433_;
goto v_resetjp_4427_;
}
v_resetjp_4427_:
{
lean_object* v___x_4431_; 
if (v_isShared_4429_ == 0)
{
v___x_4431_ = v___x_4428_;
goto v_reusejp_4430_;
}
else
{
lean_object* v_reuseFailAlloc_4432_; 
v_reuseFailAlloc_4432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4432_, 0, v_a_4426_);
v___x_4431_ = v_reuseFailAlloc_4432_;
goto v_reusejp_4430_;
}
v_reusejp_4430_:
{
return v___x_4431_;
}
}
}
}
v___jp_4434_:
{
if (lean_obj_tag(v___y_4435_) == 0)
{
lean_dec_ref_known(v___y_4435_, 1);
goto v___jp_4400_;
}
else
{
lean_dec(v_snd_4399_);
lean_dec(v_fst_4398_);
lean_dec(v_fst_4397_);
lean_dec(v___x_4391_);
lean_dec_ref(v_docCtx_4379_);
return v___y_4435_;
}
}
}
else
{
lean_object* v_a_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4464_; 
lean_dec(v_names_4393_);
lean_dec(v___x_4391_);
lean_dec_ref(v_preDefs_4380_);
lean_dec_ref(v_docCtx_4379_);
v_a_4457_ = lean_ctor_get(v___x_4394_, 0);
v_isSharedCheck_4464_ = !lean_is_exclusive(v___x_4394_);
if (v_isSharedCheck_4464_ == 0)
{
v___x_4459_ = v___x_4394_;
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_a_4457_);
lean_dec(v___x_4394_);
v___x_4459_ = lean_box(0);
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
v_resetjp_4458_:
{
lean_object* v___x_4462_; 
if (v_isShared_4460_ == 0)
{
v___x_4462_ = v___x_4459_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4463_; 
v_reuseFailAlloc_4463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4463_, 0, v_a_4457_);
v___x_4462_ = v_reuseFailAlloc_4463_;
goto v_reusejp_4461_;
}
v_reusejp_4461_:
{
return v___x_4462_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_structuralRecursion___boxed(lean_object* v_docCtx_4465_, lean_object* v_preDefs_4466_, lean_object* v_termMeasure_x3fs_4467_, lean_object* v_a_4468_, lean_object* v_a_4469_, lean_object* v_a_4470_, lean_object* v_a_4471_, lean_object* v_a_4472_, lean_object* v_a_4473_, lean_object* v_a_4474_){
_start:
{
lean_object* v_res_4475_; 
v_res_4475_ = l_Lean_Elab_Structural_structuralRecursion(v_docCtx_4465_, v_preDefs_4466_, v_termMeasure_x3fs_4467_, v_a_4468_, v_a_4469_, v_a_4470_, v_a_4471_, v_a_4472_, v_a_4473_);
lean_dec(v_a_4473_);
lean_dec_ref(v_a_4472_);
lean_dec(v_a_4471_);
lean_dec_ref(v_a_4470_);
lean_dec(v_a_4469_);
lean_dec_ref(v_a_4468_);
return v_res_4475_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2(lean_object* v_as_4476_, size_t v_sz_4477_, size_t v_i_4478_, lean_object* v_b_4479_, lean_object* v___y_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_){
_start:
{
lean_object* v___x_4487_; 
v___x_4487_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg(v_as_4476_, v_sz_4477_, v_i_4478_, v_b_4479_, v___y_4482_, v___y_4483_, v___y_4484_, v___y_4485_);
return v___x_4487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___boxed(lean_object* v_as_4488_, lean_object* v_sz_4489_, lean_object* v_i_4490_, lean_object* v_b_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_){
_start:
{
size_t v_sz_boxed_4499_; size_t v_i_boxed_4500_; lean_object* v_res_4501_; 
v_sz_boxed_4499_ = lean_unbox_usize(v_sz_4489_);
lean_dec(v_sz_4489_);
v_i_boxed_4500_ = lean_unbox_usize(v_i_4490_);
lean_dec(v_i_4490_);
v_res_4501_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2(v_as_4488_, v_sz_boxed_4499_, v_i_boxed_4500_, v_b_4491_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
lean_dec(v___y_4497_);
lean_dec_ref(v___y_4496_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4493_);
lean_dec_ref(v___y_4492_);
lean_dec_ref(v_as_4488_);
return v_res_4501_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3(lean_object* v_as_4502_, size_t v_sz_4503_, size_t v_i_4504_, lean_object* v_b_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_){
_start:
{
lean_object* v___x_4513_; 
v___x_4513_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg(v_as_4502_, v_sz_4503_, v_i_4504_, v_b_4505_, v___y_4510_, v___y_4511_);
return v___x_4513_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___boxed(lean_object* v_as_4514_, lean_object* v_sz_4515_, lean_object* v_i_4516_, lean_object* v_b_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_){
_start:
{
size_t v_sz_boxed_4525_; size_t v_i_boxed_4526_; lean_object* v_res_4527_; 
v_sz_boxed_4525_ = lean_unbox_usize(v_sz_4515_);
lean_dec(v_sz_4515_);
v_i_boxed_4526_ = lean_unbox_usize(v_i_4516_);
lean_dec(v_i_4516_);
v_res_4527_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3(v_as_4514_, v_sz_boxed_4525_, v_i_boxed_4526_, v_b_4517_, v___y_4518_, v___y_4519_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_);
lean_dec(v___y_4523_);
lean_dec_ref(v___y_4522_);
lean_dec(v___y_4521_);
lean_dec_ref(v___y_4520_);
lean_dec(v___y_4519_);
lean_dec_ref(v___y_4518_);
lean_dec_ref(v_as_4514_);
return v_res_4527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__4(lean_object* v_as_4528_, size_t v_sz_4529_, size_t v_i_4530_, lean_object* v_b_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_){
_start:
{
lean_object* v___x_4539_; 
v___x_4539_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__4___redArg(v_as_4528_, v_sz_4529_, v_i_4530_, v_b_4531_, v___y_4534_, v___y_4535_, v___y_4536_, v___y_4537_);
return v___x_4539_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__4___boxed(lean_object* v_as_4540_, lean_object* v_sz_4541_, lean_object* v_i_4542_, lean_object* v_b_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_){
_start:
{
size_t v_sz_boxed_4551_; size_t v_i_boxed_4552_; lean_object* v_res_4553_; 
v_sz_boxed_4551_ = lean_unbox_usize(v_sz_4541_);
lean_dec(v_sz_4541_);
v_i_boxed_4552_ = lean_unbox_usize(v_i_4542_);
lean_dec(v_i_4542_);
v_res_4553_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__4(v_as_4540_, v_sz_boxed_4551_, v_i_boxed_4552_, v_b_4543_, v___y_4544_, v___y_4545_, v___y_4546_, v___y_4547_, v___y_4548_, v___y_4549_);
lean_dec(v___y_4549_);
lean_dec_ref(v___y_4548_);
lean_dec(v___y_4547_);
lean_dec_ref(v___y_4546_);
lean_dec(v___y_4545_);
lean_dec_ref(v___y_4544_);
lean_dec_ref(v_as_4540_);
return v_res_4553_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Mutual(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Preprocess(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_IndPred(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_SmartUnfolding(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_Mutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_IndPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_SmartUnfolding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Structural_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_Mutual(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Preprocess(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_BRecOn(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_IndPred(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_SmartUnfolding(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_Mutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_BRecOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_IndPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_SmartUnfolding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Structural_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Structural_Main(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.BRecOn
// Imports: public import Lean.Util.HasConstCache public import Lean.Meta.PProdN public import Lean.Meta.Match.MatcherApp.Transform public import Lean.Elab.PreDefinition.Structural.Basic public import Lean.Elab.PreDefinition.Structural.RecArgInfo import Init.Data.Nat.Order import Init.Data.Order.Lemmas
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
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getRecAppSyntax_x3f(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_mkMData(lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getMotivePos(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedName;
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
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
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Elab_Structural_recArgHasLooseBVarsAt(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ensureNoRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_zetaReduce(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVars(lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfPure___redArg(lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclsD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_packLambdas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_Positions_numIndices(lean_object*);
lean_object* l_Lean_Expr_withAppAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_HasConstCache_containsUnsafe(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInfo_brecOnName(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_projM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_arrowDomainsN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
extern lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInfo_numMotives(lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "toBelow failed"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_searchPProd___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PProd"};
static const lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_searchPProd___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Structural_searchPProd___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Structural_searchPProd___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 14, 124, 134, 125, 191, 184, 142)}};
static const lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Structural_searchPProd___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PUnit"};
static const lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__4_value;
static const lean_string_object l_Lean_Elab_Structural_searchPProd___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "belowDict not an app:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "belowDict step 2:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "belowDict step 1:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structural"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 73, 239, 7, 229, 151, 237, 199)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_value)} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__4_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "belowDict start:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "\narg:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "C"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(118, 87, 66, 208, 34, 24, 101, 135)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_PProdN_packLambdas___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "not type correct!"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "initial belowDict for "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "numMotives: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unexpected 'below' type"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__10 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__10_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__11 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__11_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_value)} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "belowType: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__16 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__16_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_toBelow___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "searching IH for "};
static const lean_object* l_Lean_Elab_Structural_toBelow___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_toBelow___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_toBelow___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_toBelow___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_Structural_toBelow___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l_Lean_Elab_Structural_toBelow___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_toBelow___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Structural_toBelow___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_toBelow___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_toBelow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_toBelow___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_toBelow___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Elab_Structural_toBelow___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.Match.MatcherApp.Basic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Meta.matchMatcherApp\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected constructor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1;
static const lean_ctor_object l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2 = (const lean_object*)&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2_value;
static const lean_ctor_object l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___boxed__const__1 = (const lean_object*)&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "insufficient number of parameters at recursive application "};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "failed to eliminate recursive application"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0_value;
static const lean_string_object l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "unexpected matcher application alternative"};
static const lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__0 = (const lean_object*)&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__0_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__1;
static const lean_string_object l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\nat application"};
static const lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__2 = (const lean_object*)&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__2_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__3;
static const lean_string_object l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "altNumParams: "};
static const lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__4 = (const lean_object*)&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__4_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__5;
static const lean_string_object l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", xs: "};
static const lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__6 = (const lean_object*)&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__6_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__7;
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "`matcherApp.addArg\?` failed"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "below before matcherApp.addArg: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Elab.PreDefinition.Structural.Basic"};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Elab.Structural.Positions.mapMwith"};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "assertion violation: positions.size = ys.size\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "assertion violation: positions.numIndices = xs.size\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5;
static const lean_array_object l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_mkBRecOnConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_mkBRecOnConst___lam__2___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_mkBRecOnConst___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_mkBRecOnConst___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_mkBRecOnConst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_mkBRecOnConst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "brecOn is type incorrect"};
static const lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1;
static lean_once_cell_t l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2;
static lean_once_cell_t l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "mkBRecOnApp: Could not find "};
static const lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; lean_object* v___x_9_; lean_object* v_toCold_10_; lean_object* v_mctx_11_; lean_object* v_lctx_12_; lean_object* v_options_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = lean_st_ref_get(v___y_3_);
v_toCold_10_ = lean_ctor_get(v___y_4_, 0);
v_mctx_11_ = lean_ctor_get(v___x_9_, 0);
lean_inc_ref(v_mctx_11_);
lean_dec(v___x_9_);
v_lctx_12_ = lean_ctor_get(v___y_2_, 2);
v_options_13_ = lean_ctor_get(v_toCold_10_, 2);
lean_inc_ref(v_options_13_);
lean_inc_ref(v_lctx_12_);
v___x_14_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_14_, 0, v_env_8_);
lean_ctor_set(v___x_14_, 1, v_mctx_11_);
lean_ctor_set(v___x_14_, 2, v_lctx_12_);
lean_ctor_set(v___x_14_, 3, v_options_13_);
v___x_15_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v_msgData_1_);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0___boxed(lean_object* v_msgData_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msgData_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(lean_object* v_msg_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_ref_30_; lean_object* v___x_31_; lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_ref_30_ = lean_ctor_get(v___y_27_, 2);
v___x_31_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
v_a_32_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_40_ == 0)
{
v___x_34_ = v___x_31_;
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_36_; lean_object* v___x_38_; 
lean_inc(v_ref_30_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v_ref_30_);
lean_ctor_set(v___x_36_, 1, v_a_32_);
if (v_isShared_35_ == 0)
{
lean_ctor_set_tag(v___x_34_, 1);
lean_ctor_set(v___x_34_, 0, v___x_36_);
v___x_38_ = v___x_34_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v___x_36_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg___boxed(lean_object* v_msg_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(v_msg_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__0));
v___x_50_ = l_Lean_stringToMessageData(v___x_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1);
v___x_57_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(v___x_56_, v_a_51_, v_a_52_, v_a_53_, v_a_54_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___boxed(lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v_a_58_, v_a_59_, v_a_60_, v_a_61_);
lean_dec(v_a_61_);
lean_dec_ref(v_a_60_);
lean_dec(v_a_59_);
lean_dec_ref(v_a_58_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed(lean_object* v_00_u03b1_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v_a_65_, v_a_66_, v_a_67_, v_a_68_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___boxed(lean_object* v_00_u03b1_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_, lean_object* v_a_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed(v_00_u03b1_71_, v_a_72_, v_a_73_, v_a_74_, v_a_75_);
lean_dec(v_a_75_);
lean_dec_ref(v_a_74_);
lean_dec(v_a_73_);
lean_dec_ref(v_a_72_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0(lean_object* v_00_u03b1_78_, lean_object* v_msg_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(v_msg_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___boxed(lean_object* v_00_u03b1_86_, lean_object* v_msg_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0(v_00_u03b1_86_, v_msg_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___redArg(lean_object* v_e_102_, lean_object* v_F_103_, lean_object* v_k_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v___x_110_; 
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
lean_inc_ref(v_e_102_);
v___x_110_ = lean_whnf(v_e_102_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_111_; 
v_a_111_ = lean_ctor_get(v___x_110_, 0);
lean_inc(v_a_111_);
lean_dec_ref_known(v___x_110_, 1);
switch(lean_obj_tag(v_a_111_))
{
case 5:
{
lean_object* v_fn_112_; 
v_fn_112_ = lean_ctor_get(v_a_111_, 0);
lean_inc_ref(v_fn_112_);
if (lean_obj_tag(v_fn_112_) == 5)
{
lean_object* v_fn_113_; 
v_fn_113_ = lean_ctor_get(v_fn_112_, 0);
if (lean_obj_tag(v_fn_113_) == 4)
{
lean_object* v_declName_114_; 
v_declName_114_ = lean_ctor_get(v_fn_113_, 0);
lean_inc(v_declName_114_);
if (lean_obj_tag(v_declName_114_) == 1)
{
lean_object* v_pre_115_; 
v_pre_115_ = lean_ctor_get(v_declName_114_, 0);
if (lean_obj_tag(v_pre_115_) == 0)
{
lean_object* v_arg_116_; lean_object* v_arg_117_; lean_object* v_str_118_; lean_object* v___x_119_; uint8_t v___x_120_; 
v_arg_116_ = lean_ctor_get(v_a_111_, 1);
lean_inc_ref(v_arg_116_);
lean_dec_ref_known(v_a_111_, 2);
v_arg_117_ = lean_ctor_get(v_fn_112_, 1);
lean_inc_ref(v_arg_117_);
lean_dec_ref_known(v_fn_112_, 2);
v_str_118_ = lean_ctor_get(v_declName_114_, 1);
lean_inc_ref(v_str_118_);
lean_dec_ref_known(v_declName_114_, 2);
v___x_119_ = ((lean_object*)(l_Lean_Elab_Structural_searchPProd___redArg___closed__0));
v___x_120_ = lean_string_dec_eq(v_str_118_, v___x_119_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = ((lean_object*)(l_Lean_Elab_Structural_searchPProd___redArg___closed__1));
v___x_122_ = lean_string_dec_eq(v_str_118_, v___x_121_);
lean_dec_ref(v_str_118_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
lean_dec_ref(v_arg_117_);
lean_dec_ref(v_arg_116_);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_123_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_123_;
}
else
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
lean_dec_ref(v_e_102_);
v___x_124_ = ((lean_object*)(l_Lean_Elab_Structural_searchPProd___redArg___closed__2));
v___x_125_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_F_103_);
v___x_126_ = l_Lean_Expr_proj___override(v___x_124_, v___x_125_, v_F_103_);
v___x_127_ = l_Lean_Meta_saveState___redArg(v_a_106_, v_a_108_);
if (lean_obj_tag(v___x_127_) == 0)
{
lean_object* v_a_128_; lean_object* v___x_129_; 
v_a_128_ = lean_ctor_get(v___x_127_, 0);
lean_inc(v_a_128_);
lean_dec_ref_known(v___x_127_, 1);
lean_inc_ref(v_k_104_);
v___x_129_ = l_Lean_Elab_Structural_searchPProd___redArg(v_arg_117_, v___x_126_, v_k_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
if (lean_obj_tag(v___x_129_) == 0)
{
lean_dec(v_a_128_);
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
return v___x_129_;
}
else
{
lean_object* v_a_130_; uint8_t v___y_132_; uint8_t v___x_145_; 
v_a_130_ = lean_ctor_get(v___x_129_, 0);
lean_inc(v_a_130_);
v___x_145_ = l_Lean_Exception_isInterrupt(v_a_130_);
if (v___x_145_ == 0)
{
uint8_t v___x_146_; 
v___x_146_ = l_Lean_Exception_isRuntime(v_a_130_);
v___y_132_ = v___x_146_;
goto v___jp_131_;
}
else
{
lean_dec(v_a_130_);
v___y_132_ = v___x_145_;
goto v___jp_131_;
}
v___jp_131_:
{
if (v___y_132_ == 0)
{
lean_object* v___x_133_; 
lean_dec_ref_known(v___x_129_, 1);
v___x_133_ = l_Lean_Meta_SavedState_restore___redArg(v_a_128_, v_a_106_, v_a_108_);
lean_dec(v_a_128_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v___x_134_; lean_object* v___x_135_; 
lean_dec_ref_known(v___x_133_, 1);
v___x_134_ = lean_unsigned_to_nat(1u);
v___x_135_ = l_Lean_Expr_proj___override(v___x_124_, v___x_134_, v_F_103_);
v_e_102_ = v_arg_116_;
v_F_103_ = v___x_135_;
goto _start;
}
else
{
lean_object* v_a_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_144_; 
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
v_a_137_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_144_ == 0)
{
v___x_139_ = v___x_133_;
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_a_137_);
lean_dec(v___x_133_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_142_; 
if (v_isShared_140_ == 0)
{
v___x_142_ = v___x_139_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_a_137_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
return v___x_142_;
}
}
}
}
else
{
lean_dec(v_a_128_);
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
return v___x_129_;
}
}
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_154_; 
lean_dec_ref(v___x_126_);
lean_dec_ref(v_arg_117_);
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
v_a_147_ = lean_ctor_get(v___x_127_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_127_);
if (v_isSharedCheck_154_ == 0)
{
v___x_149_ = v___x_127_;
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v___x_127_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_a_147_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
}
else
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
lean_dec_ref(v_str_118_);
lean_dec_ref(v_e_102_);
v___x_155_ = ((lean_object*)(l_Lean_Elab_Structural_searchPProd___redArg___closed__3));
v___x_156_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_F_103_);
v___x_157_ = l_Lean_Expr_proj___override(v___x_155_, v___x_156_, v_F_103_);
v___x_158_ = l_Lean_Meta_saveState___redArg(v_a_106_, v_a_108_);
if (lean_obj_tag(v___x_158_) == 0)
{
lean_object* v_a_159_; lean_object* v___x_160_; 
v_a_159_ = lean_ctor_get(v___x_158_, 0);
lean_inc(v_a_159_);
lean_dec_ref_known(v___x_158_, 1);
lean_inc_ref(v_k_104_);
v___x_160_ = l_Lean_Elab_Structural_searchPProd___redArg(v_arg_117_, v___x_157_, v_k_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
if (lean_obj_tag(v___x_160_) == 0)
{
lean_dec(v_a_159_);
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
return v___x_160_;
}
else
{
lean_object* v_a_161_; uint8_t v___y_163_; uint8_t v___x_176_; 
v_a_161_ = lean_ctor_get(v___x_160_, 0);
lean_inc(v_a_161_);
v___x_176_ = l_Lean_Exception_isInterrupt(v_a_161_);
if (v___x_176_ == 0)
{
uint8_t v___x_177_; 
v___x_177_ = l_Lean_Exception_isRuntime(v_a_161_);
v___y_163_ = v___x_177_;
goto v___jp_162_;
}
else
{
lean_dec(v_a_161_);
v___y_163_ = v___x_176_;
goto v___jp_162_;
}
v___jp_162_:
{
if (v___y_163_ == 0)
{
lean_object* v___x_164_; 
lean_dec_ref_known(v___x_160_, 1);
v___x_164_ = l_Lean_Meta_SavedState_restore___redArg(v_a_159_, v_a_106_, v_a_108_);
lean_dec(v_a_159_);
if (lean_obj_tag(v___x_164_) == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; 
lean_dec_ref_known(v___x_164_, 1);
v___x_165_ = lean_unsigned_to_nat(1u);
v___x_166_ = l_Lean_Expr_proj___override(v___x_155_, v___x_165_, v_F_103_);
v_e_102_ = v_arg_116_;
v_F_103_ = v___x_166_;
goto _start;
}
else
{
lean_object* v_a_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_175_; 
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
v_a_168_ = lean_ctor_get(v___x_164_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_175_ == 0)
{
v___x_170_ = v___x_164_;
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_a_168_);
lean_dec(v___x_164_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_173_; 
if (v_isShared_171_ == 0)
{
v___x_173_ = v___x_170_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_a_168_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
else
{
lean_dec(v_a_159_);
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
return v___x_160_;
}
}
}
}
else
{
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_185_; 
lean_dec_ref(v___x_157_);
lean_dec_ref(v_arg_117_);
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
v_a_178_ = lean_ctor_get(v___x_158_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_158_);
if (v_isSharedCheck_185_ == 0)
{
v___x_180_ = v___x_158_;
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_158_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_183_; 
if (v_isShared_181_ == 0)
{
v___x_183_ = v___x_180_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_a_178_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
}
}
else
{
lean_object* v___x_186_; 
lean_dec_ref_known(v_declName_114_, 2);
lean_dec_ref_known(v_fn_112_, 2);
lean_dec_ref_known(v_a_111_, 2);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_186_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_186_;
}
}
else
{
lean_object* v___x_187_; 
lean_dec(v_declName_114_);
lean_dec_ref_known(v_fn_112_, 2);
lean_dec_ref_known(v_a_111_, 2);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_187_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_187_;
}
}
else
{
lean_object* v___x_188_; 
lean_dec_ref_known(v_fn_112_, 2);
lean_dec_ref_known(v_a_111_, 2);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_188_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_188_;
}
}
else
{
lean_object* v___x_189_; 
lean_dec_ref(v_fn_112_);
lean_dec_ref_known(v_a_111_, 2);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_189_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_189_;
}
}
case 4:
{
lean_object* v_declName_190_; 
v_declName_190_ = lean_ctor_get(v_a_111_, 0);
lean_inc(v_declName_190_);
lean_dec_ref_known(v_a_111_, 2);
if (lean_obj_tag(v_declName_190_) == 1)
{
lean_object* v_pre_191_; 
v_pre_191_ = lean_ctor_get(v_declName_190_, 0);
if (lean_obj_tag(v_pre_191_) == 0)
{
lean_object* v_str_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v_str_192_ = lean_ctor_get(v_declName_190_, 1);
lean_inc_ref(v_str_192_);
lean_dec_ref_known(v_declName_190_, 2);
v___x_193_ = ((lean_object*)(l_Lean_Elab_Structural_searchPProd___redArg___closed__4));
v___x_194_ = lean_string_dec_eq(v_str_192_, v___x_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_195_ = ((lean_object*)(l_Lean_Elab_Structural_searchPProd___redArg___closed__5));
v___x_196_ = lean_string_dec_eq(v_str_192_, v___x_195_);
lean_dec_ref(v_str_192_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; 
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_197_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_197_;
}
else
{
lean_object* v___x_198_; 
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
lean_dec_ref(v_e_102_);
v___x_198_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v_a_105_, v_a_106_, v_a_107_, v_a_108_);
return v___x_198_;
}
}
else
{
lean_object* v___x_199_; 
lean_dec_ref(v_str_192_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
lean_dec_ref(v_e_102_);
v___x_199_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v_a_105_, v_a_106_, v_a_107_, v_a_108_);
return v___x_199_;
}
}
else
{
lean_object* v___x_200_; 
lean_dec_ref_known(v_declName_190_, 2);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_200_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_200_;
}
}
else
{
lean_object* v___x_201_; 
lean_dec(v_declName_190_);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_201_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_201_;
}
}
default: 
{
lean_object* v___x_202_; 
lean_dec(v_a_111_);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_202_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_202_;
}
}
}
else
{
lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_210_; 
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
lean_dec_ref(v_e_102_);
v_a_203_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_210_ == 0)
{
v___x_205_ = v___x_110_;
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_dec(v___x_110_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_208_; 
if (v_isShared_206_ == 0)
{
v___x_208_ = v___x_205_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_a_203_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___redArg___boxed(lean_object* v_e_211_, lean_object* v_F_212_, lean_object* v_k_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_Elab_Structural_searchPProd___redArg(v_e_211_, v_F_212_, v_k_213_, v_a_214_, v_a_215_, v_a_216_, v_a_217_);
lean_dec(v_a_217_);
lean_dec_ref(v_a_216_);
lean_dec(v_a_215_);
lean_dec_ref(v_a_214_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd(lean_object* v_00_u03b1_220_, lean_object* v_e_221_, lean_object* v_F_222_, lean_object* v_k_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l_Lean_Elab_Structural_searchPProd___redArg(v_e_221_, v_F_222_, v_k_223_, v_a_224_, v_a_225_, v_a_226_, v_a_227_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___boxed(lean_object* v_00_u03b1_230_, lean_object* v_e_231_, lean_object* v_F_232_, lean_object* v_k_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_Elab_Structural_searchPProd(v_00_u03b1_230_, v_e_231_, v_F_232_, v_k_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_);
lean_dec(v_a_237_);
lean_dec_ref(v_a_236_);
lean_dec(v_a_235_);
lean_dec_ref(v_a_234_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0(lean_object* v_k_240_, lean_object* v_b_241_, lean_object* v_c_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
lean_object* v___x_248_; 
lean_inc(v___y_246_);
lean_inc_ref(v___y_245_);
lean_inc(v___y_244_);
lean_inc_ref(v___y_243_);
v___x_248_ = lean_apply_7(v_k_240_, v_b_241_, v_c_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_, lean_box(0));
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0___boxed(lean_object* v_k_249_, lean_object* v_b_250_, lean_object* v_c_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0(v_k_249_, v_b_250_, v_c_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_);
lean_dec(v___y_255_);
lean_dec_ref(v___y_254_);
lean_dec(v___y_253_);
lean_dec_ref(v___y_252_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg(lean_object* v_type_258_, lean_object* v_k_259_, uint8_t v_cleanupAnnotations_260_, uint8_t v_whnfType_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v___f_267_; lean_object* v___x_268_; 
v___f_267_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_267_, 0, v_k_259_);
v___x_268_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_258_, v___f_267_, v_cleanupAnnotations_260_, v_whnfType_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
v_a_269_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v___x_268_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_268_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_a_269_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_284_; 
v_a_277_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_284_ == 0)
{
v___x_279_ = v___x_268_;
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_268_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_a_277_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___boxed(lean_object* v_type_285_, lean_object* v_k_286_, lean_object* v_cleanupAnnotations_287_, lean_object* v_whnfType_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_294_; uint8_t v_whnfType_boxed_295_; lean_object* v_res_296_; 
v_cleanupAnnotations_boxed_294_ = lean_unbox(v_cleanupAnnotations_287_);
v_whnfType_boxed_295_ = lean_unbox(v_whnfType_288_);
v_res_296_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg(v_type_285_, v_k_286_, v_cleanupAnnotations_boxed_294_, v_whnfType_boxed_295_, v___y_289_, v___y_290_, v___y_291_, v___y_292_);
lean_dec(v___y_292_);
lean_dec_ref(v___y_291_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1(lean_object* v_00_u03b1_297_, lean_object* v_type_298_, lean_object* v_k_299_, uint8_t v_cleanupAnnotations_300_, uint8_t v_whnfType_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg(v_type_298_, v_k_299_, v_cleanupAnnotations_300_, v_whnfType_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___boxed(lean_object* v_00_u03b1_308_, lean_object* v_type_309_, lean_object* v_k_310_, lean_object* v_cleanupAnnotations_311_, lean_object* v_whnfType_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_318_; uint8_t v_whnfType_boxed_319_; lean_object* v_res_320_; 
v_cleanupAnnotations_boxed_318_ = lean_unbox(v_cleanupAnnotations_311_);
v_whnfType_boxed_319_ = lean_unbox(v_whnfType_312_);
v_res_320_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1(v_00_u03b1_308_, v_type_309_, v_k_310_, v_cleanupAnnotations_boxed_318_, v_whnfType_boxed_319_, v___y_313_, v___y_314_, v___y_315_, v___y_316_);
lean_dec(v___y_316_);
lean_dec_ref(v___y_315_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0(lean_object* v_cls_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
lean_object* v_toCold_330_; lean_object* v_options_331_; uint8_t v_hasTrace_332_; 
v_toCold_330_ = lean_ctor_get(v___y_327_, 0);
v_options_331_ = lean_ctor_get(v_toCold_330_, 2);
v_hasTrace_332_ = lean_ctor_get_uint8(v_options_331_, sizeof(void*)*1);
if (v_hasTrace_332_ == 0)
{
lean_object* v___x_333_; lean_object* v___x_334_; 
lean_dec(v_cls_324_);
v___x_333_ = lean_box(v_hasTrace_332_);
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
else
{
lean_object* v_inheritedTraceOptions_335_; lean_object* v___x_336_; lean_object* v___x_337_; uint8_t v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_inheritedTraceOptions_335_ = lean_ctor_get(v_toCold_330_, 11);
v___x_336_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1));
v___x_337_ = l_Lean_Name_append(v___x_336_, v_cls_324_);
v___x_338_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_335_, v_options_331_, v___x_337_);
lean_dec(v___x_337_);
v___x_339_ = lean_box(v___x_338_);
v___x_340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
return v___x_340_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___boxed(lean_object* v_cls_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0(v_cls_341_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
lean_dec(v___y_345_);
lean_dec_ref(v___y_344_);
lean_dec(v___y_343_);
lean_dec_ref(v___y_342_);
return v_res_347_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0(void){
_start:
{
lean_object* v___x_348_; double v___x_349_; 
v___x_348_ = lean_unsigned_to_nat(0u);
v___x_349_ = lean_float_of_nat(v___x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(lean_object* v_cls_353_, lean_object* v_msg_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v_ref_360_; lean_object* v___x_361_; lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_406_; 
v_ref_360_ = lean_ctor_get(v___y_357_, 2);
v___x_361_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_);
v_a_362_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_406_ == 0)
{
v___x_364_ = v___x_361_;
v_isShared_365_ = v_isSharedCheck_406_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_361_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_406_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_366_; lean_object* v_traceState_367_; lean_object* v_env_368_; lean_object* v_nextMacroScope_369_; lean_object* v_ngen_370_; lean_object* v_auxDeclNGen_371_; lean_object* v_cache_372_; lean_object* v_messages_373_; lean_object* v_infoState_374_; lean_object* v_snapshotTasks_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_405_; 
v___x_366_ = lean_st_ref_take(v___y_358_);
v_traceState_367_ = lean_ctor_get(v___x_366_, 4);
v_env_368_ = lean_ctor_get(v___x_366_, 0);
v_nextMacroScope_369_ = lean_ctor_get(v___x_366_, 1);
v_ngen_370_ = lean_ctor_get(v___x_366_, 2);
v_auxDeclNGen_371_ = lean_ctor_get(v___x_366_, 3);
v_cache_372_ = lean_ctor_get(v___x_366_, 5);
v_messages_373_ = lean_ctor_get(v___x_366_, 6);
v_infoState_374_ = lean_ctor_get(v___x_366_, 7);
v_snapshotTasks_375_ = lean_ctor_get(v___x_366_, 8);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_405_ == 0)
{
v___x_377_ = v___x_366_;
v_isShared_378_ = v_isSharedCheck_405_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_snapshotTasks_375_);
lean_inc(v_infoState_374_);
lean_inc(v_messages_373_);
lean_inc(v_cache_372_);
lean_inc(v_traceState_367_);
lean_inc(v_auxDeclNGen_371_);
lean_inc(v_ngen_370_);
lean_inc(v_nextMacroScope_369_);
lean_inc(v_env_368_);
lean_dec(v___x_366_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_405_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
uint64_t v_tid_379_; lean_object* v_traces_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_404_; 
v_tid_379_ = lean_ctor_get_uint64(v_traceState_367_, sizeof(void*)*1);
v_traces_380_ = lean_ctor_get(v_traceState_367_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v_traceState_367_);
if (v_isSharedCheck_404_ == 0)
{
v___x_382_ = v_traceState_367_;
v_isShared_383_ = v_isSharedCheck_404_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_traces_380_);
lean_dec(v_traceState_367_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_404_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_384_; lean_object* v___x_385_; double v___x_386_; uint8_t v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_395_; 
v___x_384_ = lean_box(0);
v___x_385_ = lean_box(0);
v___x_386_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0);
v___x_387_ = 0;
v___x_388_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1));
v___x_389_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_389_, 0, v_cls_353_);
lean_ctor_set(v___x_389_, 1, v___x_385_);
lean_ctor_set(v___x_389_, 2, v___x_388_);
lean_ctor_set_float(v___x_389_, sizeof(void*)*3, v___x_386_);
lean_ctor_set_float(v___x_389_, sizeof(void*)*3 + 8, v___x_386_);
lean_ctor_set_uint8(v___x_389_, sizeof(void*)*3 + 16, v___x_387_);
v___x_390_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__2));
v___x_391_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_391_, 0, v___x_389_);
lean_ctor_set(v___x_391_, 1, v_a_362_);
lean_ctor_set(v___x_391_, 2, v___x_390_);
lean_inc(v_ref_360_);
v___x_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_392_, 0, v_ref_360_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
v___x_393_ = l_Lean_PersistentArray_push___redArg(v_traces_380_, v___x_392_);
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 0, v___x_393_);
v___x_395_ = v___x_382_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v___x_393_);
lean_ctor_set_uint64(v_reuseFailAlloc_403_, sizeof(void*)*1, v_tid_379_);
v___x_395_ = v_reuseFailAlloc_403_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v___x_397_; 
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 4, v___x_395_);
v___x_397_ = v___x_377_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_env_368_);
lean_ctor_set(v_reuseFailAlloc_402_, 1, v_nextMacroScope_369_);
lean_ctor_set(v_reuseFailAlloc_402_, 2, v_ngen_370_);
lean_ctor_set(v_reuseFailAlloc_402_, 3, v_auxDeclNGen_371_);
lean_ctor_set(v_reuseFailAlloc_402_, 4, v___x_395_);
lean_ctor_set(v_reuseFailAlloc_402_, 5, v_cache_372_);
lean_ctor_set(v_reuseFailAlloc_402_, 6, v_messages_373_);
lean_ctor_set(v_reuseFailAlloc_402_, 7, v_infoState_374_);
lean_ctor_set(v_reuseFailAlloc_402_, 8, v_snapshotTasks_375_);
v___x_397_ = v_reuseFailAlloc_402_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
lean_object* v___x_398_; lean_object* v___x_400_; 
v___x_398_ = lean_st_ref_put(v___y_358_, v___x_397_);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v___x_384_);
v___x_400_ = v___x_364_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v___x_384_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___boxed(lean_object* v_cls_407_, lean_object* v_msg_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(v_cls_407_, v_msg_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
return v_res_414_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__1(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0));
v___x_417_ = l_Lean_stringToMessageData(v___x_416_);
return v___x_417_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__3(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__2));
v___x_420_ = l_Lean_stringToMessageData(v___x_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1(lean_object* v_a_421_, lean_object* v_C_422_, lean_object* v_cls_423_, lean_object* v___f_424_, lean_object* v_belowDict_425_, lean_object* v_F_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v___y_433_; lean_object* v___y_434_; lean_object* v___y_435_; lean_object* v___y_436_; lean_object* v___y_437_; lean_object* v___x_501_; 
lean_inc(v___y_430_);
lean_inc_ref(v___y_429_);
lean_inc(v___y_428_);
lean_inc_ref(v___y_427_);
v___x_501_ = lean_apply_5(v___f_424_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, lean_box(0));
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; uint8_t v___x_503_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___x_501_, 1);
v___x_503_ = lean_unbox(v_a_502_);
lean_dec(v_a_502_);
if (v___x_503_ == 0)
{
goto v___jp_465_;
}
else
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_504_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__3);
lean_inc_ref(v_belowDict_425_);
v___x_505_ = l_Lean_indentExpr(v_belowDict_425_);
v___x_506_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_504_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
lean_inc(v_cls_423_);
v___x_507_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(v_cls_423_, v___x_506_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
if (lean_obj_tag(v___x_507_) == 0)
{
lean_dec_ref_known(v___x_507_, 1);
goto v___jp_465_;
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_515_; 
lean_dec_ref(v_F_426_);
lean_dec_ref(v_belowDict_425_);
lean_dec(v_cls_423_);
lean_dec_ref(v_a_421_);
v_a_508_ = lean_ctor_get(v___x_507_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_515_ == 0)
{
v___x_510_ = v___x_507_;
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_507_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_a_508_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
}
}
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
lean_dec_ref(v_F_426_);
lean_dec_ref(v_belowDict_425_);
lean_dec(v_cls_423_);
lean_dec_ref(v_a_421_);
v_a_516_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_501_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_501_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
v___jp_432_:
{
lean_object* v___x_438_; 
v___x_438_ = l_Lean_Meta_isExprDefEq(v___y_433_, v_a_421_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_456_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_456_ == 0)
{
v___x_441_ = v___x_438_;
v_isShared_442_ = v_isSharedCheck_456_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_438_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_456_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
uint8_t v___x_443_; 
v___x_443_ = lean_unbox(v_a_439_);
lean_dec(v_a_439_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
lean_del_object(v___x_441_);
lean_dec_ref(v_F_426_);
v___x_444_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_434_, v___y_435_, v___y_436_, v___y_437_);
v_a_445_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_444_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
if (v_isShared_448_ == 0)
{
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_a_445_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
else
{
lean_object* v___x_454_; 
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 0, v_F_426_);
v___x_454_ = v___x_441_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_F_426_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
lean_dec_ref(v_F_426_);
v_a_457_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_438_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_438_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
v___jp_465_:
{
if (lean_obj_tag(v_belowDict_425_) == 5)
{
lean_object* v_fn_466_; lean_object* v_arg_467_; lean_object* v___x_468_; uint8_t v___x_469_; 
lean_dec(v_cls_423_);
v_fn_466_ = lean_ctor_get(v_belowDict_425_, 0);
lean_inc_ref(v_fn_466_);
v_arg_467_ = lean_ctor_get(v_belowDict_425_, 1);
lean_inc_ref(v_arg_467_);
lean_dec_ref_known(v_belowDict_425_, 2);
v___x_468_ = l_Lean_Expr_getAppFn(v_fn_466_);
lean_dec_ref(v_fn_466_);
v___x_469_ = lean_expr_eqv(v___x_468_, v_C_422_);
lean_dec_ref(v___x_468_);
if (v___x_469_ == 0)
{
lean_object* v___x_470_; lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
lean_dec_ref(v_arg_467_);
lean_dec_ref(v_F_426_);
lean_dec_ref(v_a_421_);
v___x_470_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_427_, v___y_428_, v___y_429_, v___y_430_);
v_a_471_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_478_ == 0)
{
v___x_473_ = v___x_470_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_470_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_a_471_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
else
{
v___y_433_ = v_arg_467_;
v___y_434_ = v___y_427_;
v___y_435_ = v___y_428_;
v___y_436_ = v___y_429_;
v___y_437_ = v___y_430_;
goto v___jp_432_;
}
}
else
{
lean_object* v_toCold_479_; lean_object* v_options_480_; uint8_t v_hasTrace_481_; 
lean_dec_ref(v_F_426_);
lean_dec_ref(v_a_421_);
v_toCold_479_ = lean_ctor_get(v___y_429_, 0);
v_options_480_ = lean_ctor_get(v_toCold_479_, 2);
v_hasTrace_481_ = lean_ctor_get_uint8(v_options_480_, sizeof(void*)*1);
if (v_hasTrace_481_ == 0)
{
lean_object* v___x_482_; 
lean_dec_ref(v_belowDict_425_);
lean_dec(v_cls_423_);
v___x_482_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_427_, v___y_428_, v___y_429_, v___y_430_);
return v___x_482_;
}
else
{
lean_object* v_inheritedTraceOptions_483_; lean_object* v___x_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v_inheritedTraceOptions_483_ = lean_ctor_get(v_toCold_479_, 11);
v___x_484_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1));
lean_inc(v_cls_423_);
v___x_485_ = l_Lean_Name_append(v___x_484_, v_cls_423_);
v___x_486_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_483_, v_options_480_, v___x_485_);
lean_dec(v___x_485_);
if (v___x_486_ == 0)
{
lean_object* v___x_487_; 
lean_dec_ref(v_belowDict_425_);
lean_dec(v_cls_423_);
v___x_487_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_427_, v___y_428_, v___y_429_, v___y_430_);
return v___x_487_;
}
else
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_488_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__1);
v___x_489_ = l_Lean_indentExpr(v_belowDict_425_);
v___x_490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_490_, 0, v___x_488_);
lean_ctor_set(v___x_490_, 1, v___x_489_);
v___x_491_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(v_cls_423_, v___x_490_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_object* v___x_492_; 
lean_dec_ref_known(v___x_491_, 1);
v___x_492_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_427_, v___y_428_, v___y_429_, v___y_430_);
return v___x_492_;
}
else
{
lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_500_; 
v_a_493_ = lean_ctor_get(v___x_491_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_500_ == 0)
{
v___x_495_ = v___x_491_;
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___x_491_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_498_; 
if (v_isShared_496_ == 0)
{
v___x_498_ = v___x_495_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_a_493_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___boxed(lean_object* v_a_524_, lean_object* v_C_525_, lean_object* v_cls_526_, lean_object* v___f_527_, lean_object* v_belowDict_528_, lean_object* v_F_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1(v_a_524_, v_C_525_, v_cls_526_, v___f_527_, v_belowDict_528_, v_F_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec_ref(v_C_525_);
return v_res_535_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = lean_box(0);
v___x_537_ = l_unsafeCast___redArg(v___x_536_);
return v___x_537_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1(void){
_start:
{
lean_object* v___x_538_; lean_object* v_dummy_539_; 
v___x_538_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0);
v_dummy_539_ = l_Lean_Expr_sort___override(v___x_538_);
return v_dummy_539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2(lean_object* v_arg_540_, lean_object* v_C_541_, lean_object* v_cls_542_, lean_object* v___f_543_, lean_object* v_F_544_, lean_object* v_xs_545_, lean_object* v_belowDict_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
uint8_t v___x_552_; lean_object* v___x_553_; 
v___x_552_ = 1;
v___x_553_ = l_Lean_Meta_zetaReduce(v_arg_540_, v___x_552_, v___x_552_, v___x_552_, v___y_547_, v___y_548_, v___y_549_, v___y_550_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; lean_object* v___f_555_; lean_object* v_dummy_556_; lean_object* v_nargs_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___y_563_; lean_object* v___y_564_; lean_object* v___y_565_; lean_object* v___y_566_; lean_object* v___x_574_; lean_object* v___x_575_; uint8_t v___x_576_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc_n(v_a_554_, 2);
lean_dec_ref_known(v___x_553_, 1);
v___f_555_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___boxed), 11, 4);
lean_closure_set(v___f_555_, 0, v_a_554_);
lean_closure_set(v___f_555_, 1, v_C_541_);
lean_closure_set(v___f_555_, 2, v_cls_542_);
lean_closure_set(v___f_555_, 3, v___f_543_);
v_dummy_556_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1);
v_nargs_557_ = l_Lean_Expr_getAppNumArgs(v_a_554_);
lean_inc(v_nargs_557_);
v___x_558_ = lean_mk_array(v_nargs_557_, v_dummy_556_);
v___x_559_ = lean_unsigned_to_nat(1u);
v___x_560_ = lean_nat_sub(v_nargs_557_, v___x_559_);
lean_dec(v_nargs_557_);
v___x_561_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_554_, v___x_558_, v___x_560_);
v___x_574_ = lean_array_get_size(v_xs_545_);
v___x_575_ = lean_array_get_size(v___x_561_);
v___x_576_ = lean_nat_dec_le(v___x_574_, v___x_575_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_585_; 
lean_dec_ref(v___x_561_);
lean_dec_ref(v___f_555_);
lean_dec_ref(v_F_544_);
v___x_577_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_547_, v___y_548_, v___y_549_, v___y_550_);
v_a_578_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_585_ == 0)
{
v___x_580_ = v___x_577_;
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_577_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_583_; 
if (v_isShared_581_ == 0)
{
v___x_583_ = v___x_580_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_578_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
else
{
v___y_563_ = v___y_547_;
v___y_564_ = v___y_548_;
v___y_565_ = v___y_549_;
v___y_566_ = v___y_550_;
goto v___jp_562_;
}
v___jp_562_:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_567_ = lean_array_get_size(v___x_561_);
v___x_568_ = lean_array_get_size(v_xs_545_);
v___x_569_ = lean_nat_sub(v___x_567_, v___x_568_);
v___x_570_ = l_Array_extract___redArg(v___x_561_, v___x_569_, v___x_567_);
lean_dec_ref(v___x_561_);
v___x_571_ = l_Lean_Expr_replaceFVars(v_belowDict_546_, v_xs_545_, v___x_570_);
v___x_572_ = l_Lean_mkAppN(v_F_544_, v___x_570_);
lean_dec_ref(v___x_570_);
v___x_573_ = l_Lean_Elab_Structural_searchPProd___redArg(v___x_571_, v___x_572_, v___f_555_, v___y_563_, v___y_564_, v___y_565_, v___y_566_);
return v___x_573_;
}
}
else
{
lean_dec_ref(v_F_544_);
lean_dec_ref(v___f_543_);
lean_dec(v_cls_542_);
lean_dec_ref(v_C_541_);
return v___x_553_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___boxed(lean_object* v_arg_586_, lean_object* v_C_587_, lean_object* v_cls_588_, lean_object* v___f_589_, lean_object* v_F_590_, lean_object* v_xs_591_, lean_object* v_belowDict_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2(v_arg_586_, v_C_587_, v_cls_588_, v___f_589_, v_F_590_, v_xs_591_, v_belowDict_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec_ref(v_belowDict_592_);
lean_dec_ref(v_xs_591_);
return v_res_598_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__1(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__0));
v___x_601_ = l_Lean_stringToMessageData(v___x_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3(lean_object* v_arg_602_, lean_object* v_C_603_, lean_object* v_cls_604_, lean_object* v___f_605_, lean_object* v_belowDict_606_, lean_object* v_F_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v___f_613_; lean_object* v___x_617_; 
lean_inc_ref(v___f_605_);
lean_inc(v_cls_604_);
v___f_613_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___boxed), 12, 5);
lean_closure_set(v___f_613_, 0, v_arg_602_);
lean_closure_set(v___f_613_, 1, v_C_603_);
lean_closure_set(v___f_613_, 2, v_cls_604_);
lean_closure_set(v___f_613_, 3, v___f_605_);
lean_closure_set(v___f_613_, 4, v_F_607_);
lean_inc(v___y_611_);
lean_inc_ref(v___y_610_);
lean_inc(v___y_609_);
lean_inc_ref(v___y_608_);
v___x_617_ = lean_apply_5(v___f_605_, v___y_608_, v___y_609_, v___y_610_, v___y_611_, lean_box(0));
if (lean_obj_tag(v___x_617_) == 0)
{
lean_object* v_a_618_; uint8_t v___x_619_; 
v_a_618_ = lean_ctor_get(v___x_617_, 0);
lean_inc(v_a_618_);
lean_dec_ref_known(v___x_617_, 1);
v___x_619_ = lean_unbox(v_a_618_);
lean_dec(v_a_618_);
if (v___x_619_ == 0)
{
lean_dec(v_cls_604_);
goto v___jp_614_;
}
else
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_620_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__1);
lean_inc_ref(v_belowDict_606_);
v___x_621_ = l_Lean_indentExpr(v_belowDict_606_);
v___x_622_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_620_);
lean_ctor_set(v___x_622_, 1, v___x_621_);
v___x_623_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(v_cls_604_, v___x_622_, v___y_608_, v___y_609_, v___y_610_, v___y_611_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_dec_ref_known(v___x_623_, 1);
goto v___jp_614_;
}
else
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_631_; 
lean_dec_ref(v___f_613_);
lean_dec_ref(v_belowDict_606_);
v_a_624_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_631_ == 0)
{
v___x_626_ = v___x_623_;
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_623_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_629_; 
if (v_isShared_627_ == 0)
{
v___x_629_ = v___x_626_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_a_624_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
}
else
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_639_; 
lean_dec_ref(v___f_613_);
lean_dec_ref(v_belowDict_606_);
lean_dec(v_cls_604_);
v_a_632_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_639_ == 0)
{
v___x_634_ = v___x_617_;
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_617_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_a_632_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
v___jp_614_:
{
uint8_t v___x_615_; lean_object* v___x_616_; 
v___x_615_ = 0;
v___x_616_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg(v_belowDict_606_, v___f_613_, v___x_615_, v___x_615_, v___y_608_, v___y_609_, v___y_610_, v___y_611_);
return v___x_616_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___boxed(lean_object* v_arg_640_, lean_object* v_C_641_, lean_object* v_cls_642_, lean_object* v___f_643_, lean_object* v_belowDict_644_, lean_object* v_F_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3(v_arg_640_, v_C_641_, v_cls_642_, v___f_643_, v_belowDict_644_, v_F_645_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec(v___y_647_);
lean_dec_ref(v___y_646_);
return v_res_651_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6(void){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5));
v___x_663_ = l_Lean_stringToMessageData(v___x_662_);
return v___x_663_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__8(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7));
v___x_666_ = l_Lean_stringToMessageData(v___x_665_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux(lean_object* v_C_667_, lean_object* v_belowDict_668_, lean_object* v_arg_669_, lean_object* v_F_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_){
_start:
{
lean_object* v_cls_676_; lean_object* v___f_677_; lean_object* v___f_678_; lean_object* v___x_679_; lean_object* v_a_680_; uint8_t v___x_681_; 
v_cls_676_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
v___f_677_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__4));
lean_inc_ref(v_arg_669_);
v___f_678_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___boxed), 11, 4);
lean_closure_set(v___f_678_, 0, v_arg_669_);
lean_closure_set(v___f_678_, 1, v_C_667_);
lean_closure_set(v___f_678_, 2, v_cls_676_);
lean_closure_set(v___f_678_, 3, v___f_677_);
v___x_679_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0(v_cls_676_, v_a_671_, v_a_672_, v_a_673_, v_a_674_);
v_a_680_ = lean_ctor_get(v___x_679_, 0);
lean_inc(v_a_680_);
lean_dec_ref(v___x_679_);
v___x_681_ = lean_unbox(v_a_680_);
lean_dec(v_a_680_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; 
lean_dec_ref(v_arg_669_);
v___x_682_ = l_Lean_Elab_Structural_searchPProd___redArg(v_belowDict_668_, v_F_670_, v___f_678_, v_a_671_, v_a_672_, v_a_673_, v_a_674_);
return v___x_682_;
}
else
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_683_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6);
lean_inc_ref(v_belowDict_668_);
v___x_684_ = l_Lean_indentExpr(v_belowDict_668_);
v___x_685_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_685_, 0, v___x_683_);
lean_ctor_set(v___x_685_, 1, v___x_684_);
v___x_686_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__8);
v___x_687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_687_, 0, v___x_685_);
lean_ctor_set(v___x_687_, 1, v___x_686_);
v___x_688_ = l_Lean_indentExpr(v_arg_669_);
v___x_689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_687_);
lean_ctor_set(v___x_689_, 1, v___x_688_);
v___x_690_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(v_cls_676_, v___x_689_, v_a_671_, v_a_672_, v_a_673_, v_a_674_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v___x_691_; 
lean_dec_ref_known(v___x_690_, 1);
v___x_691_ = l_Lean_Elab_Structural_searchPProd___redArg(v_belowDict_668_, v_F_670_, v___f_678_, v_a_671_, v_a_672_, v_a_673_, v_a_674_);
return v___x_691_;
}
else
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
lean_dec_ref(v___f_678_);
lean_dec_ref(v_F_670_);
lean_dec_ref(v_belowDict_668_);
v_a_692_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_699_ == 0)
{
v___x_694_ = v___x_690_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_690_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_a_692_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___boxed(lean_object* v_C_700_, lean_object* v_belowDict_701_, lean_object* v_arg_702_, lean_object* v_F_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux(v_C_700_, v_belowDict_701_, v_arg_702_, v_F_703_, v_a_704_, v_a_705_, v_a_706_, v_a_707_);
lean_dec(v_a_707_);
lean_dec_ref(v_a_706_);
lean_dec(v_a_705_);
lean_dec_ref(v_a_704_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0(lean_object* v_t_710_, lean_object* v_x_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_717_, 0, v_t_710_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0___boxed(lean_object* v_t_718_, lean_object* v_x_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0(v_t_718_, v_x_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec(v___y_721_);
lean_dec_ref(v___y_720_);
lean_dec_ref(v_x_719_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1(lean_object* v_t_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_){
_start:
{
lean_object* v___f_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___f_735_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_735_, 0, v_t_729_);
v___x_736_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__1));
v___x_737_ = l_Lean_Core_mkFreshUserName(v___x_736_, v___y_732_, v___y_733_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_746_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_746_ == 0)
{
v___x_740_ = v___x_737_;
v_isShared_741_ = v_isSharedCheck_746_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_737_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_746_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_742_; lean_object* v___x_744_; 
v___x_742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_742_, 0, v_a_738_);
lean_ctor_set(v___x_742_, 1, v___f_735_);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 0, v___x_742_);
v___x_744_ = v___x_740_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v___x_742_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
else
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_dec_ref(v___f_735_);
v_a_747_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_737_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_737_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___boxed(lean_object* v_t_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1(v_t_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2(lean_object* v___x_762_, lean_object* v_a_763_, lean_object* v_x_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_771_ = lean_array_set(v___y_765_, v_a_763_, v___x_762_);
v___x_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_772_, 0, v___x_771_);
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___boxed(lean_object* v___x_774_, lean_object* v_a_775_, lean_object* v_x_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2(v___x_774_, v_a_775_, v_x_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_);
lean_dec(v___y_781_);
lean_dec_ref(v___y_780_);
lean_dec(v___y_779_);
lean_dec_ref(v___y_778_);
lean_dec(v_a_775_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3(lean_object* v___x_784_, lean_object* v_a_785_, lean_object* v_x_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
lean_object* v_snd_793_; lean_object* v_fst_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_845_; 
v_snd_793_ = lean_ctor_get(v___y_787_, 1);
v_fst_794_ = lean_ctor_get(v___y_787_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___y_787_);
if (v_isSharedCheck_845_ == 0)
{
v___x_796_ = v___y_787_;
v_isShared_797_ = v_isSharedCheck_845_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_snd_793_);
lean_inc(v_fst_794_);
lean_dec(v___y_787_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_845_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v_array_798_; lean_object* v_start_799_; lean_object* v_stop_800_; uint8_t v___x_801_; 
v_array_798_ = lean_ctor_get(v_snd_793_, 0);
v_start_799_ = lean_ctor_get(v_snd_793_, 1);
v_stop_800_ = lean_ctor_get(v_snd_793_, 2);
v___x_801_ = lean_nat_dec_lt(v_start_799_, v_stop_800_);
if (v___x_801_ == 0)
{
lean_object* v___x_803_; 
lean_dec_ref(v_a_785_);
lean_dec_ref(v___x_784_);
if (v_isShared_797_ == 0)
{
v___x_803_ = v___x_796_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_fst_794_);
lean_ctor_set(v_reuseFailAlloc_806_, 1, v_snd_793_);
v___x_803_ = v_reuseFailAlloc_806_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_804_, 0, v___x_803_);
v___x_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
return v___x_805_;
}
}
else
{
lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_841_; 
lean_inc(v_stop_800_);
lean_inc(v_start_799_);
lean_inc_ref(v_array_798_);
v_isSharedCheck_841_ = !lean_is_exclusive(v_snd_793_);
if (v_isSharedCheck_841_ == 0)
{
lean_object* v_unused_842_; lean_object* v_unused_843_; lean_object* v_unused_844_; 
v_unused_842_ = lean_ctor_get(v_snd_793_, 2);
lean_dec(v_unused_842_);
v_unused_843_ = lean_ctor_get(v_snd_793_, 1);
lean_dec(v_unused_843_);
v_unused_844_ = lean_ctor_get(v_snd_793_, 0);
lean_dec(v_unused_844_);
v___x_808_ = v_snd_793_;
v_isShared_809_ = v_isSharedCheck_841_;
goto v_resetjp_807_;
}
else
{
lean_dec(v_snd_793_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_841_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_810_; lean_object* v___f_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_815_; 
v___x_810_ = lean_array_fget_borrowed(v_array_798_, v_start_799_);
lean_inc(v___x_810_);
v___f_811_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___boxed), 9, 1);
lean_closure_set(v___f_811_, 0, v___x_810_);
v___x_812_ = lean_unsigned_to_nat(1u);
v___x_813_ = lean_nat_add(v_start_799_, v___x_812_);
lean_dec(v_start_799_);
if (v_isShared_809_ == 0)
{
lean_ctor_set(v___x_808_, 1, v___x_813_);
v___x_815_ = v___x_808_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_array_798_);
lean_ctor_set(v_reuseFailAlloc_840_, 1, v___x_813_);
lean_ctor_set(v_reuseFailAlloc_840_, 2, v_stop_800_);
v___x_815_ = v_reuseFailAlloc_840_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
size_t v_sz_816_; size_t v___x_817_; lean_object* v___x_7269__overap_818_; lean_object* v___x_819_; 
v_sz_816_ = lean_array_size(v_a_785_);
v___x_817_ = ((size_t)0ULL);
v___x_7269__overap_818_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_784_, v_a_785_, v___f_811_, v_sz_816_, v___x_817_, v_fst_794_);
lean_inc(v___y_791_);
lean_inc_ref(v___y_790_);
lean_inc(v___y_789_);
lean_inc_ref(v___y_788_);
v___x_819_ = lean_apply_5(v___x_7269__overap_818_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, lean_box(0));
if (lean_obj_tag(v___x_819_) == 0)
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_831_; 
v_a_820_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_831_ == 0)
{
v___x_822_ = v___x_819_;
v_isShared_823_ = v_isSharedCheck_831_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___x_819_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_831_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_825_; 
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 1, v___x_815_);
lean_ctor_set(v___x_796_, 0, v_a_820_);
v___x_825_ = v___x_796_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_820_);
lean_ctor_set(v_reuseFailAlloc_830_, 1, v___x_815_);
v___x_825_ = v_reuseFailAlloc_830_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
lean_object* v___x_826_; lean_object* v___x_828_; 
v___x_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_826_, 0, v___x_825_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 0, v___x_826_);
v___x_828_ = v___x_822_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v___x_826_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
else
{
lean_object* v_a_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_839_; 
lean_dec_ref(v___x_815_);
lean_del_object(v___x_796_);
v_a_832_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_839_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_839_ == 0)
{
v___x_834_ = v___x_819_;
v_isShared_835_ = v_isSharedCheck_839_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_a_832_);
lean_dec(v___x_819_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_839_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v___x_837_; 
if (v_isShared_835_ == 0)
{
v___x_837_ = v___x_834_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v_a_832_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3___boxed(lean_object* v___x_846_, lean_object* v_a_847_, lean_object* v_x_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3(v___x_846_, v_a_847_, v_x_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4(lean_object* v___x_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_toCold_862_; lean_object* v_options_863_; uint8_t v_hasTrace_864_; 
v_toCold_862_ = lean_ctor_get(v___y_859_, 0);
v_options_863_ = lean_ctor_get(v_toCold_862_, 2);
v_hasTrace_864_ = lean_ctor_get_uint8(v_options_863_, sizeof(void*)*1);
if (v_hasTrace_864_ == 0)
{
lean_object* v___x_865_; lean_object* v___x_866_; 
lean_dec(v___x_856_);
v___x_865_ = lean_box(v_hasTrace_864_);
v___x_866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_866_, 0, v___x_865_);
return v___x_866_;
}
else
{
lean_object* v_inheritedTraceOptions_867_; lean_object* v___x_868_; lean_object* v___x_869_; uint8_t v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v_inheritedTraceOptions_867_ = lean_ctor_get(v_toCold_862_, 11);
v___x_868_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1));
v___x_869_ = l_Lean_Name_append(v___x_868_, v___x_856_);
v___x_870_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_867_, v_options_863_, v___x_869_);
lean_dec(v___x_869_);
v___x_871_ = lean_box(v___x_870_);
v___x_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_872_, 0, v___x_871_);
return v___x_872_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___boxed(lean_object* v___x_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4(v___x_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
lean_dec(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec(v___y_875_);
lean_dec_ref(v___y_874_);
return v_res_879_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2(void){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1));
v___x_883_ = l_Lean_stringToMessageData(v___x_882_);
return v___x_883_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4(void){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3));
v___x_886_ = l_Lean_stringToMessageData(v___x_885_);
return v___x_886_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__7(void){
_start:
{
lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_889_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__6));
v___x_890_ = l_Lean_stringToMessageData(v___x_889_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5(lean_object* v___x_891_, lean_object* v___x_892_, lean_object* v_positions_893_, lean_object* v_a_894_, lean_object* v___x_895_, lean_object* v___x_896_, lean_object* v_k_897_, lean_object* v___x_898_, lean_object* v___x_899_, lean_object* v_toMonadRef_900_, lean_object* v___x_901_, lean_object* v___f_902_, lean_object* v_Cs_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_){
_start:
{
lean_object* v___x_909_; lean_object* v___x_7305__overap_910_; lean_object* v___x_911_; 
v___x_909_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0));
lean_inc_ref(v_Cs_903_);
lean_inc_ref(v___x_891_);
v___x_7305__overap_910_ = l_Lean_Elab_Structural_Positions_mapMwith___redArg(v___x_891_, v___x_892_, v___x_909_, v_positions_893_, v_a_894_, v_Cs_903_);
lean_inc(v___y_907_);
lean_inc_ref(v___y_906_);
lean_inc(v___y_905_);
lean_inc_ref(v___y_904_);
v___x_911_ = lean_apply_5(v___x_7305__overap_910_, v___y_904_, v___y_905_, v___y_906_, v___y_907_, lean_box(0));
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___y_917_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v___y_920_; lean_object* v___x_954_; 
v_a_912_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_a_912_);
lean_dec_ref_known(v___x_911_, 1);
v___x_913_ = l_Lean_mkAppN(v___x_895_, v_a_912_);
lean_dec(v_a_912_);
v___x_914_ = l_Subarray_copy___redArg(v___x_896_);
v___x_915_ = l_Lean_mkAppN(v___x_913_, v___x_914_);
lean_dec_ref(v___x_914_);
lean_inc(v___y_907_);
lean_inc_ref(v___y_906_);
lean_inc(v___y_905_);
lean_inc_ref(v___y_904_);
v___x_954_ = lean_apply_5(v___f_902_, v___y_904_, v___y_905_, v___y_906_, v___y_907_, lean_box(0));
if (lean_obj_tag(v___x_954_) == 0)
{
lean_object* v_a_955_; uint8_t v___x_956_; 
v_a_955_ = lean_ctor_get(v___x_954_, 0);
lean_inc(v_a_955_);
lean_dec_ref_known(v___x_954_, 1);
v___x_956_ = lean_unbox(v_a_955_);
lean_dec(v_a_955_);
if (v___x_956_ == 0)
{
v___y_917_ = v___y_904_;
v___y_918_ = v___y_905_;
v___y_919_ = v___y_906_;
v___y_920_ = v___y_907_;
goto v___jp_916_;
}
else
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_7355__overap_968_; lean_object* v___x_969_; 
v___x_957_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4);
lean_inc_ref(v_Cs_903_);
v___x_958_ = lean_array_to_list(v_Cs_903_);
v___x_959_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5));
v___x_960_ = lean_box(0);
v___x_961_ = l_List_mapTR_loop___redArg(v___x_959_, v___x_958_, v___x_960_);
v___x_962_ = l_Lean_MessageData_ofList(v___x_961_);
v___x_963_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_957_);
lean_ctor_set(v___x_963_, 1, v___x_962_);
v___x_964_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__7, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__7);
v___x_965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_963_);
lean_ctor_set(v___x_965_, 1, v___x_964_);
lean_inc_ref(v___x_915_);
v___x_966_ = l_Lean_indentExpr(v___x_915_);
v___x_967_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_967_, 0, v___x_965_);
lean_ctor_set(v___x_967_, 1, v___x_966_);
lean_inc(v___x_898_);
lean_inc_ref(v___x_901_);
lean_inc_ref(v_toMonadRef_900_);
lean_inc_ref(v___x_899_);
lean_inc_ref(v___x_891_);
v___x_7355__overap_968_ = l_Lean_addTrace___redArg(v___x_891_, v___x_899_, v_toMonadRef_900_, v___x_901_, v___x_898_, v___x_967_);
lean_inc(v___y_907_);
lean_inc_ref(v___y_906_);
lean_inc(v___y_905_);
lean_inc_ref(v___y_904_);
v___x_969_ = lean_apply_5(v___x_7355__overap_968_, v___y_904_, v___y_905_, v___y_906_, v___y_907_, lean_box(0));
if (lean_obj_tag(v___x_969_) == 0)
{
lean_dec_ref_known(v___x_969_, 1);
v___y_917_ = v___y_904_;
v___y_918_ = v___y_905_;
v___y_919_ = v___y_906_;
v___y_920_ = v___y_907_;
goto v___jp_916_;
}
else
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
lean_dec_ref(v___x_915_);
lean_dec_ref(v_Cs_903_);
lean_dec_ref(v___x_901_);
lean_dec_ref(v_toMonadRef_900_);
lean_dec_ref(v___x_899_);
lean_dec(v___x_898_);
lean_dec_ref(v_k_897_);
lean_dec_ref(v___x_891_);
v_a_970_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_969_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_969_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_975_; 
if (v_isShared_973_ == 0)
{
v___x_975_ = v___x_972_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_a_970_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
}
else
{
lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_985_; 
lean_dec_ref(v___x_915_);
lean_dec_ref(v_Cs_903_);
lean_dec_ref(v___x_901_);
lean_dec_ref(v_toMonadRef_900_);
lean_dec_ref(v___x_899_);
lean_dec(v___x_898_);
lean_dec_ref(v_k_897_);
lean_dec_ref(v___x_891_);
v_a_978_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_985_ == 0)
{
v___x_980_ = v___x_954_;
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_954_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_983_; 
if (v_isShared_981_ == 0)
{
v___x_983_ = v___x_980_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_978_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
v___jp_916_:
{
lean_object* v___x_921_; 
lean_inc_ref(v___x_915_);
v___x_921_ = l_Lean_Meta_isTypeCorrect(v___x_915_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; uint8_t v___x_923_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_a_922_);
lean_dec_ref_known(v___x_921_, 1);
v___x_923_ = lean_unbox(v_a_922_);
lean_dec(v_a_922_);
if (v___x_923_ == 0)
{
lean_object* v_toCold_924_; lean_object* v_options_925_; uint8_t v_hasTrace_926_; 
v_toCold_924_ = lean_ctor_get(v___y_919_, 0);
v_options_925_ = lean_ctor_get(v_toCold_924_, 2);
v_hasTrace_926_ = lean_ctor_get_uint8(v_options_925_, sizeof(void*)*1);
if (v_hasTrace_926_ == 0)
{
lean_object* v___x_927_; 
lean_dec_ref(v___x_901_);
lean_dec_ref(v_toMonadRef_900_);
lean_dec_ref(v___x_899_);
lean_dec(v___x_898_);
lean_dec_ref(v___x_891_);
lean_inc(v___y_920_);
lean_inc_ref(v___y_919_);
lean_inc(v___y_918_);
lean_inc_ref(v___y_917_);
v___x_927_ = lean_apply_7(v_k_897_, v_Cs_903_, v___x_915_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, lean_box(0));
return v___x_927_;
}
else
{
lean_object* v_inheritedTraceOptions_928_; lean_object* v___x_929_; lean_object* v___x_930_; uint8_t v___x_931_; 
v_inheritedTraceOptions_928_ = lean_ctor_get(v_toCold_924_, 11);
v___x_929_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1));
lean_inc(v___x_898_);
v___x_930_ = l_Lean_Name_append(v___x_929_, v___x_898_);
v___x_931_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_928_, v_options_925_, v___x_930_);
lean_dec(v___x_930_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; 
lean_dec_ref(v___x_901_);
lean_dec_ref(v_toMonadRef_900_);
lean_dec_ref(v___x_899_);
lean_dec(v___x_898_);
lean_dec_ref(v___x_891_);
lean_inc(v___y_920_);
lean_inc_ref(v___y_919_);
lean_inc(v___y_918_);
lean_inc_ref(v___y_917_);
v___x_932_ = lean_apply_7(v_k_897_, v_Cs_903_, v___x_915_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, lean_box(0));
return v___x_932_;
}
else
{
lean_object* v___x_933_; lean_object* v___x_7328__overap_934_; lean_object* v___x_935_; 
v___x_933_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2);
v___x_7328__overap_934_ = l_Lean_addTrace___redArg(v___x_891_, v___x_899_, v_toMonadRef_900_, v___x_901_, v___x_898_, v___x_933_);
lean_inc(v___y_920_);
lean_inc_ref(v___y_919_);
lean_inc(v___y_918_);
lean_inc_ref(v___y_917_);
v___x_935_ = lean_apply_5(v___x_7328__overap_934_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, lean_box(0));
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v___x_936_; 
lean_dec_ref_known(v___x_935_, 1);
lean_inc(v___y_920_);
lean_inc_ref(v___y_919_);
lean_inc(v___y_918_);
lean_inc_ref(v___y_917_);
v___x_936_ = lean_apply_7(v_k_897_, v_Cs_903_, v___x_915_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, lean_box(0));
return v___x_936_;
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
lean_dec_ref(v___x_915_);
lean_dec_ref(v_Cs_903_);
lean_dec_ref(v_k_897_);
v_a_937_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v___x_935_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
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
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_937_);
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
}
else
{
lean_object* v___x_945_; 
lean_dec_ref(v___x_901_);
lean_dec_ref(v_toMonadRef_900_);
lean_dec_ref(v___x_899_);
lean_dec(v___x_898_);
lean_dec_ref(v___x_891_);
lean_inc(v___y_920_);
lean_inc_ref(v___y_919_);
lean_inc(v___y_918_);
lean_inc_ref(v___y_917_);
v___x_945_ = lean_apply_7(v_k_897_, v_Cs_903_, v___x_915_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, lean_box(0));
return v___x_945_;
}
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec_ref(v___x_915_);
lean_dec_ref(v_Cs_903_);
lean_dec_ref(v___x_901_);
lean_dec_ref(v_toMonadRef_900_);
lean_dec_ref(v___x_899_);
lean_dec(v___x_898_);
lean_dec_ref(v_k_897_);
lean_dec_ref(v___x_891_);
v_a_946_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_921_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_921_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
}
else
{
lean_object* v_a_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_993_; 
lean_dec_ref(v_Cs_903_);
lean_dec_ref(v___f_902_);
lean_dec_ref(v___x_901_);
lean_dec_ref(v_toMonadRef_900_);
lean_dec_ref(v___x_899_);
lean_dec(v___x_898_);
lean_dec_ref(v_k_897_);
lean_dec_ref(v___x_896_);
lean_dec_ref(v___x_895_);
lean_dec_ref(v___x_891_);
v_a_986_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_993_ == 0)
{
v___x_988_ = v___x_911_;
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_a_986_);
lean_dec(v___x_911_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_991_; 
if (v_isShared_989_ == 0)
{
v___x_991_ = v___x_988_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_a_986_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
return v___x_991_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___boxed(lean_object** _args){
lean_object* v___x_994_ = _args[0];
lean_object* v___x_995_ = _args[1];
lean_object* v_positions_996_ = _args[2];
lean_object* v_a_997_ = _args[3];
lean_object* v___x_998_ = _args[4];
lean_object* v___x_999_ = _args[5];
lean_object* v_k_1000_ = _args[6];
lean_object* v___x_1001_ = _args[7];
lean_object* v___x_1002_ = _args[8];
lean_object* v_toMonadRef_1003_ = _args[9];
lean_object* v___x_1004_ = _args[10];
lean_object* v___f_1005_ = _args[11];
lean_object* v_Cs_1006_ = _args[12];
lean_object* v___y_1007_ = _args[13];
lean_object* v___y_1008_ = _args[14];
lean_object* v___y_1009_ = _args[15];
lean_object* v___y_1010_ = _args[16];
lean_object* v___y_1011_ = _args[17];
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5(v___x_994_, v___x_995_, v_positions_996_, v_a_997_, v___x_998_, v___x_999_, v_k_1000_, v___x_1001_, v___x_1002_, v_toMonadRef_1003_, v___x_1004_, v___f_1005_, v_Cs_1006_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_);
lean_dec(v___y_1010_);
lean_dec_ref(v___y_1009_);
lean_dec(v___y_1008_);
lean_dec_ref(v___y_1007_);
return v_res_1012_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__0(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = lean_unsigned_to_nat(37u);
v___x_1014_ = l_Lean_Level_ofNat(v___x_1013_);
return v___x_1014_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__1(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__0);
v___x_1016_ = l_Lean_Expr_sort___override(v___x_1015_);
return v___x_1016_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__3(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__2));
v___x_1019_ = l_Lean_stringToMessageData(v___x_1018_);
return v___x_1019_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__5(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__4));
v___x_1022_ = l_Lean_stringToMessageData(v___x_1021_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6(lean_object* v_positions_1023_, lean_object* v___x_1024_, lean_object* v___f_1025_, lean_object* v___f_1026_, lean_object* v___x_1027_, lean_object* v_numTypeFormers_1028_, lean_object* v___x_1029_, lean_object* v_k_1030_, lean_object* v___x_1031_, lean_object* v___x_1032_, lean_object* v_toMonadRef_1033_, lean_object* v___x_1034_, lean_object* v___f_1035_, lean_object* v_numIndParams_1036_, lean_object* v_a_1037_, lean_object* v_f_1038_, lean_object* v_args_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_){
_start:
{
lean_object* v___y_1046_; lean_object* v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v___y_1053_; lean_object* v___y_1091_; lean_object* v___y_1092_; lean_object* v___y_1093_; lean_object* v___y_1094_; lean_object* v___y_1095_; lean_object* v___y_1096_; lean_object* v_lower_1097_; lean_object* v_upper_1098_; lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v___y_1143_; lean_object* v___y_1144_; lean_object* v___y_1151_; lean_object* v___y_1152_; lean_object* v___y_1153_; lean_object* v___y_1154_; lean_object* v___x_1164_; lean_object* v___x_1165_; uint8_t v___x_1166_; 
v___x_1164_ = lean_nat_add(v_numIndParams_1036_, v_numTypeFormers_1028_);
v___x_1165_ = lean_array_get_size(v_args_1039_);
v___x_1166_ = lean_nat_dec_lt(v___x_1164_, v___x_1165_);
lean_dec(v___x_1164_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; 
lean_dec_ref(v_args_1039_);
lean_dec_ref(v_f_1038_);
lean_dec(v_numIndParams_1036_);
lean_dec_ref(v_k_1030_);
lean_dec_ref(v___x_1029_);
lean_dec(v_numTypeFormers_1028_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v___f_1026_);
lean_dec_ref(v___f_1025_);
lean_dec_ref(v_positions_1023_);
lean_inc(v___y_1043_);
lean_inc_ref(v___y_1042_);
lean_inc(v___y_1041_);
lean_inc_ref(v___y_1040_);
v___x_1167_ = lean_apply_5(v___f_1035_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, lean_box(0));
if (lean_obj_tag(v___x_1167_) == 0)
{
lean_object* v_a_1168_; uint8_t v___x_1169_; 
v_a_1168_ = lean_ctor_get(v___x_1167_, 0);
lean_inc(v_a_1168_);
lean_dec_ref_known(v___x_1167_, 1);
v___x_1169_ = lean_unbox(v_a_1168_);
lean_dec(v_a_1168_);
if (v___x_1169_ == 0)
{
lean_dec_ref(v_a_1037_);
lean_dec_ref(v___x_1034_);
lean_dec_ref(v_toMonadRef_1033_);
lean_dec_ref(v___x_1032_);
lean_dec(v___x_1031_);
lean_dec_ref(v___x_1024_);
v___y_1151_ = v___y_1040_;
v___y_1152_ = v___y_1041_;
v___y_1153_ = v___y_1042_;
v___y_1154_ = v___y_1043_;
goto v___jp_1150_;
}
else
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_7486__overap_1173_; lean_object* v___x_1174_; 
v___x_1170_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__5);
v___x_1171_ = l_Lean_indentExpr(v_a_1037_);
v___x_1172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1170_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
v___x_7486__overap_1173_ = l_Lean_addTrace___redArg(v___x_1024_, v___x_1032_, v_toMonadRef_1033_, v___x_1034_, v___x_1031_, v___x_1172_);
lean_inc(v___y_1043_);
lean_inc_ref(v___y_1042_);
lean_inc(v___y_1041_);
lean_inc_ref(v___y_1040_);
v___x_1174_ = lean_apply_5(v___x_7486__overap_1173_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, lean_box(0));
if (lean_obj_tag(v___x_1174_) == 0)
{
lean_dec_ref_known(v___x_1174_, 1);
v___y_1151_ = v___y_1040_;
v___y_1152_ = v___y_1041_;
v___y_1153_ = v___y_1042_;
v___y_1154_ = v___y_1043_;
goto v___jp_1150_;
}
else
{
lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1182_; 
v_a_1175_ = lean_ctor_get(v___x_1174_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1174_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1177_ = v___x_1174_;
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1175_);
lean_dec(v___x_1174_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1180_; 
if (v_isShared_1178_ == 0)
{
v___x_1180_ = v___x_1177_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_a_1175_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
}
}
else
{
lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1190_; 
lean_dec_ref(v_a_1037_);
lean_dec_ref(v___x_1034_);
lean_dec_ref(v_toMonadRef_1033_);
lean_dec_ref(v___x_1032_);
lean_dec(v___x_1031_);
lean_dec_ref(v___x_1024_);
v_a_1183_ = lean_ctor_get(v___x_1167_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1185_ = v___x_1167_;
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___x_1167_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1188_; 
if (v_isShared_1186_ == 0)
{
v___x_1188_ = v___x_1185_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1183_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
}
else
{
lean_dec_ref(v_a_1037_);
v___y_1141_ = v___y_1040_;
v___y_1142_ = v___y_1041_;
v___y_1143_ = v___y_1042_;
v___y_1144_ = v___y_1043_;
goto v___jp_1140_;
}
v___jp_1045_:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; size_t v_sz_1059_; size_t v___x_1060_; lean_object* v___x_7400__overap_1061_; lean_object* v___x_1062_; 
v___x_1054_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__1);
v___x_1055_ = lean_mk_array(v___y_1047_, v___x_1054_);
v___x_1056_ = lean_array_get_size(v___y_1046_);
v___x_1057_ = l_Array_toSubarray___redArg(v___y_1046_, v___y_1048_, v___x_1056_);
v___x_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1055_);
lean_ctor_set(v___x_1058_, 1, v___x_1057_);
v_sz_1059_ = lean_array_size(v_positions_1023_);
v___x_1060_ = ((size_t)0ULL);
lean_inc_ref(v___x_1024_);
v___x_7400__overap_1061_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1024_, v_positions_1023_, v___f_1025_, v_sz_1059_, v___x_1060_, v___x_1058_);
lean_inc(v___y_1053_);
lean_inc_ref(v___y_1052_);
lean_inc(v___y_1051_);
lean_inc_ref(v___y_1050_);
v___x_1062_ = lean_apply_5(v___x_7400__overap_1061_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, lean_box(0));
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v_a_1063_; lean_object* v_fst_1064_; size_t v_sz_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_7405__overap_1068_; lean_object* v___x_1069_; 
v_a_1063_ = lean_ctor_get(v___x_1062_, 0);
lean_inc(v_a_1063_);
lean_dec_ref_known(v___x_1062_, 1);
v_fst_1064_ = lean_ctor_get(v_a_1063_, 0);
lean_inc(v_fst_1064_);
lean_dec(v_a_1063_);
v_sz_1065_ = lean_array_size(v_fst_1064_);
v___x_1066_ = l_unsafeCast___redArg(v_fst_1064_);
lean_dec(v_fst_1064_);
lean_inc_ref(v___x_1024_);
v___x_1067_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1024_, v___f_1026_, v_sz_1065_, v___x_1060_, v___x_1066_);
v___x_7405__overap_1068_ = l_unsafeCast___redArg(v___x_1067_);
lean_dec(v___x_1067_);
lean_inc(v___y_1053_);
lean_inc_ref(v___y_1052_);
lean_inc(v___y_1051_);
lean_inc_ref(v___y_1050_);
v___x_1069_ = lean_apply_5(v___x_7405__overap_1068_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, lean_box(0));
if (lean_obj_tag(v___x_1069_) == 0)
{
lean_object* v_a_1070_; uint8_t v___x_1071_; lean_object* v___x_7409__overap_1072_; lean_object* v___x_1073_; 
v_a_1070_ = lean_ctor_get(v___x_1069_, 0);
lean_inc(v_a_1070_);
lean_dec_ref_known(v___x_1069_, 1);
v___x_1071_ = 0;
v___x_7409__overap_1072_ = l_Lean_Meta_withLocalDeclsD___redArg(v___x_1027_, v___x_1024_, v_a_1070_, v___y_1049_, v___x_1071_);
lean_dec(v_a_1070_);
lean_inc(v___y_1053_);
lean_inc_ref(v___y_1052_);
lean_inc(v___y_1051_);
lean_inc_ref(v___y_1050_);
v___x_1073_ = lean_apply_5(v___x_7409__overap_1072_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, lean_box(0));
return v___x_1073_;
}
else
{
lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1081_; 
lean_dec_ref(v___y_1049_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v___x_1024_);
v_a_1074_ = lean_ctor_get(v___x_1069_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1069_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1076_ = v___x_1069_;
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v___x_1069_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_a_1074_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
}
else
{
lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1089_; 
lean_dec_ref(v___y_1049_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v___f_1026_);
lean_dec_ref(v___x_1024_);
v_a_1082_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1084_ = v___x_1062_;
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v___x_1062_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1087_; 
if (v_isShared_1085_ == 0)
{
v___x_1087_ = v___x_1084_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1082_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
v___jp_1090_:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1099_ = l_Array_toSubarray___redArg(v_args_1039_, v_lower_1097_, v_upper_1098_);
v___x_1100_ = l_Subarray_copy___redArg(v___y_1096_);
v___x_1101_ = l_Lean_mkAppN(v_f_1038_, v___x_1100_);
lean_dec_ref(v___x_1100_);
lean_inc_ref(v___x_1101_);
v___x_1102_ = l_Lean_Meta_inferArgumentTypesN(v_numTypeFormers_1028_, v___x_1101_, v___y_1094_, v___y_1091_, v___y_1092_, v___y_1093_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_a_1103_; lean_object* v___f_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
lean_inc_n(v_a_1103_, 2);
lean_dec_ref_known(v___x_1102_, 1);
lean_inc_ref(v___f_1035_);
lean_inc_ref(v___x_1034_);
lean_inc_ref(v_toMonadRef_1033_);
lean_inc_ref(v___x_1032_);
lean_inc(v___x_1031_);
lean_inc_ref(v_positions_1023_);
lean_inc_ref(v___x_1024_);
v___f_1104_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___boxed), 18, 12);
lean_closure_set(v___f_1104_, 0, v___x_1024_);
lean_closure_set(v___f_1104_, 1, v___x_1029_);
lean_closure_set(v___f_1104_, 2, v_positions_1023_);
lean_closure_set(v___f_1104_, 3, v_a_1103_);
lean_closure_set(v___f_1104_, 4, v___x_1101_);
lean_closure_set(v___f_1104_, 5, v___x_1099_);
lean_closure_set(v___f_1104_, 6, v_k_1030_);
lean_closure_set(v___f_1104_, 7, v___x_1031_);
lean_closure_set(v___f_1104_, 8, v___x_1032_);
lean_closure_set(v___f_1104_, 9, v_toMonadRef_1033_);
lean_closure_set(v___f_1104_, 10, v___x_1034_);
lean_closure_set(v___f_1104_, 11, v___f_1035_);
v___x_1105_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_1023_);
lean_inc(v___y_1093_);
lean_inc_ref(v___y_1092_);
lean_inc(v___y_1091_);
lean_inc_ref(v___y_1094_);
v___x_1106_ = lean_apply_5(v___f_1035_, v___y_1094_, v___y_1091_, v___y_1092_, v___y_1093_, lean_box(0));
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_object* v_a_1107_; uint8_t v___x_1108_; 
v_a_1107_ = lean_ctor_get(v___x_1106_, 0);
lean_inc(v_a_1107_);
lean_dec_ref_known(v___x_1106_, 1);
v___x_1108_ = lean_unbox(v_a_1107_);
lean_dec(v_a_1107_);
if (v___x_1108_ == 0)
{
lean_dec_ref(v___x_1034_);
lean_dec_ref(v_toMonadRef_1033_);
lean_dec_ref(v___x_1032_);
lean_dec(v___x_1031_);
v___y_1046_ = v_a_1103_;
v___y_1047_ = v___x_1105_;
v___y_1048_ = v___y_1095_;
v___y_1049_ = v___f_1104_;
v___y_1050_ = v___y_1094_;
v___y_1051_ = v___y_1091_;
v___y_1052_ = v___y_1092_;
v___y_1053_ = v___y_1093_;
goto v___jp_1045_;
}
else
{
lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_7441__overap_1114_; lean_object* v___x_1115_; 
v___x_1109_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__3);
lean_inc(v___x_1105_);
v___x_1110_ = l_Nat_reprFast(v___x_1105_);
v___x_1111_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1110_);
v___x_1112_ = l_Lean_MessageData_ofFormat(v___x_1111_);
v___x_1113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1109_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
lean_inc_ref(v___x_1024_);
v___x_7441__overap_1114_ = l_Lean_addTrace___redArg(v___x_1024_, v___x_1032_, v_toMonadRef_1033_, v___x_1034_, v___x_1031_, v___x_1113_);
lean_inc(v___y_1093_);
lean_inc_ref(v___y_1092_);
lean_inc(v___y_1091_);
lean_inc_ref(v___y_1094_);
v___x_1115_ = lean_apply_5(v___x_7441__overap_1114_, v___y_1094_, v___y_1091_, v___y_1092_, v___y_1093_, lean_box(0));
if (lean_obj_tag(v___x_1115_) == 0)
{
lean_dec_ref_known(v___x_1115_, 1);
v___y_1046_ = v_a_1103_;
v___y_1047_ = v___x_1105_;
v___y_1048_ = v___y_1095_;
v___y_1049_ = v___f_1104_;
v___y_1050_ = v___y_1094_;
v___y_1051_ = v___y_1091_;
v___y_1052_ = v___y_1092_;
v___y_1053_ = v___y_1093_;
goto v___jp_1045_;
}
else
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
lean_dec(v___x_1105_);
lean_dec_ref(v___f_1104_);
lean_dec(v_a_1103_);
lean_dec(v___y_1095_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v___f_1026_);
lean_dec_ref(v___f_1025_);
lean_dec_ref(v___x_1024_);
lean_dec_ref(v_positions_1023_);
v_a_1116_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1115_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1115_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
}
else
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
lean_dec(v___x_1105_);
lean_dec_ref(v___f_1104_);
lean_dec(v_a_1103_);
lean_dec(v___y_1095_);
lean_dec_ref(v___x_1034_);
lean_dec_ref(v_toMonadRef_1033_);
lean_dec_ref(v___x_1032_);
lean_dec(v___x_1031_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v___f_1026_);
lean_dec_ref(v___f_1025_);
lean_dec_ref(v___x_1024_);
lean_dec_ref(v_positions_1023_);
v_a_1124_ = lean_ctor_get(v___x_1106_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1106_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1106_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_a_1124_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
}
else
{
lean_object* v_a_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1139_; 
lean_dec_ref(v___x_1101_);
lean_dec_ref(v___x_1099_);
lean_dec(v___y_1095_);
lean_dec_ref(v___f_1035_);
lean_dec_ref(v___x_1034_);
lean_dec_ref(v_toMonadRef_1033_);
lean_dec_ref(v___x_1032_);
lean_dec(v___x_1031_);
lean_dec_ref(v_k_1030_);
lean_dec_ref(v___x_1029_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v___f_1026_);
lean_dec_ref(v___f_1025_);
lean_dec_ref(v___x_1024_);
lean_dec_ref(v_positions_1023_);
v_a_1132_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1134_ = v___x_1102_;
v_isShared_1135_ = v_isSharedCheck_1139_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_a_1132_);
lean_dec(v___x_1102_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1139_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1137_; 
if (v_isShared_1135_ == 0)
{
v___x_1137_ = v___x_1134_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v_a_1132_);
v___x_1137_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
return v___x_1137_;
}
}
}
}
v___jp_1140_:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; uint8_t v___x_1149_; 
v___x_1145_ = lean_unsigned_to_nat(0u);
lean_inc(v_numIndParams_1036_);
lean_inc_ref(v_args_1039_);
v___x_1146_ = l_Array_toSubarray___redArg(v_args_1039_, v___x_1145_, v_numIndParams_1036_);
v___x_1147_ = lean_nat_add(v_numIndParams_1036_, v_numTypeFormers_1028_);
lean_dec(v_numIndParams_1036_);
v___x_1148_ = lean_array_get_size(v_args_1039_);
v___x_1149_ = lean_nat_dec_le(v___x_1147_, v___x_1145_);
if (v___x_1149_ == 0)
{
v___y_1091_ = v___y_1142_;
v___y_1092_ = v___y_1143_;
v___y_1093_ = v___y_1144_;
v___y_1094_ = v___y_1141_;
v___y_1095_ = v___x_1145_;
v___y_1096_ = v___x_1146_;
v_lower_1097_ = v___x_1147_;
v_upper_1098_ = v___x_1148_;
goto v___jp_1090_;
}
else
{
lean_dec(v___x_1147_);
v___y_1091_ = v___y_1142_;
v___y_1092_ = v___y_1143_;
v___y_1093_ = v___y_1144_;
v___y_1094_ = v___y_1141_;
v___y_1095_ = v___x_1145_;
v___y_1096_ = v___x_1146_;
v_lower_1097_ = v___x_1145_;
v_upper_1098_ = v___x_1148_;
goto v___jp_1090_;
}
}
v___jp_1150_:
{
lean_object* v___x_1155_; lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1163_; 
v___x_1155_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_);
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1158_ = v___x_1155_;
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1155_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1161_; 
if (v_isShared_1159_ == 0)
{
v___x_1161_ = v___x_1158_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_a_1156_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_positions_1191_ = _args[0];
lean_object* v___x_1192_ = _args[1];
lean_object* v___f_1193_ = _args[2];
lean_object* v___f_1194_ = _args[3];
lean_object* v___x_1195_ = _args[4];
lean_object* v_numTypeFormers_1196_ = _args[5];
lean_object* v___x_1197_ = _args[6];
lean_object* v_k_1198_ = _args[7];
lean_object* v___x_1199_ = _args[8];
lean_object* v___x_1200_ = _args[9];
lean_object* v_toMonadRef_1201_ = _args[10];
lean_object* v___x_1202_ = _args[11];
lean_object* v___f_1203_ = _args[12];
lean_object* v_numIndParams_1204_ = _args[13];
lean_object* v_a_1205_ = _args[14];
lean_object* v_f_1206_ = _args[15];
lean_object* v_args_1207_ = _args[16];
lean_object* v___y_1208_ = _args[17];
lean_object* v___y_1209_ = _args[18];
lean_object* v___y_1210_ = _args[19];
lean_object* v___y_1211_ = _args[20];
lean_object* v___y_1212_ = _args[21];
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6(v_positions_1191_, v___x_1192_, v___f_1193_, v___f_1194_, v___x_1195_, v_numTypeFormers_1196_, v___x_1197_, v_k_1198_, v___x_1199_, v___x_1200_, v_toMonadRef_1201_, v___x_1202_, v___f_1203_, v_numIndParams_1204_, v_a_1205_, v_f_1206_, v_args_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
lean_dec(v___y_1211_);
lean_dec_ref(v___y_1210_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
return v_res_1213_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0(void){
_start:
{
lean_object* v___x_1214_; 
v___x_1214_ = l_instMonadEIO___redArg();
return v___x_1214_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1(void){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1215_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0);
v___x_1216_ = l_StateRefT_x27_instMonad___redArg(v___x_1215_);
return v___x_1216_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8(void){
_start:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1223_ = l_Lean_Core_instMonadTraceCoreM;
v___x_1224_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7));
v___x_1225_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_1224_, v___x_1223_);
return v___x_1225_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9(void){
_start:
{
lean_object* v___x_1226_; lean_object* v___f_1227_; lean_object* v___x_1228_; 
v___x_1226_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8);
v___f_1227_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6));
v___x_1228_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_1227_, v___x_1226_);
return v___x_1228_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12(void){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1231_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1232_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7));
v___x_1233_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__11));
v___x_1234_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1233_, v___x_1232_, v___x_1231_);
return v___x_1234_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13(void){
_start:
{
lean_object* v___x_1235_; lean_object* v___f_1236_; lean_object* v___f_1237_; lean_object* v___x_1238_; 
v___x_1235_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12);
v___f_1236_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6));
v___f_1237_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__10));
v___x_1238_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1237_, v___f_1236_, v___x_1235_);
return v___x_1238_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17(void){
_start:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1243_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__16));
v___x_1244_ = l_Lean_stringToMessageData(v___x_1243_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(lean_object* v_below_1245_, lean_object* v_numIndParams_1246_, lean_object* v_positions_1247_, lean_object* v_k_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_){
_start:
{
lean_object* v___x_1254_; lean_object* v_toApplicative_1255_; lean_object* v_toFunctor_1256_; lean_object* v_toSeq_1257_; lean_object* v_toSeqLeft_1258_; lean_object* v_toSeqRight_1259_; lean_object* v___f_1260_; lean_object* v___f_1261_; lean_object* v___f_1262_; lean_object* v___f_1263_; lean_object* v___x_1264_; lean_object* v___f_1265_; lean_object* v___f_1266_; lean_object* v___f_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v_toApplicative_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1393_; 
v___x_1254_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1);
v_toApplicative_1255_ = lean_ctor_get(v___x_1254_, 0);
v_toFunctor_1256_ = lean_ctor_get(v_toApplicative_1255_, 0);
v_toSeq_1257_ = lean_ctor_get(v_toApplicative_1255_, 2);
v_toSeqLeft_1258_ = lean_ctor_get(v_toApplicative_1255_, 3);
v_toSeqRight_1259_ = lean_ctor_get(v_toApplicative_1255_, 4);
v___f_1260_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2));
v___f_1261_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1256_, 2);
v___f_1262_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1262_, 0, v_toFunctor_1256_);
v___f_1263_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1263_, 0, v_toFunctor_1256_);
v___x_1264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___f_1262_);
lean_ctor_set(v___x_1264_, 1, v___f_1263_);
lean_inc(v_toSeqRight_1259_);
v___f_1265_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1265_, 0, v_toSeqRight_1259_);
lean_inc(v_toSeqLeft_1258_);
v___f_1266_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1266_, 0, v_toSeqLeft_1258_);
lean_inc(v_toSeq_1257_);
v___f_1267_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1267_, 0, v_toSeq_1257_);
v___x_1268_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1264_);
lean_ctor_set(v___x_1268_, 1, v___f_1260_);
lean_ctor_set(v___x_1268_, 2, v___f_1267_);
lean_ctor_set(v___x_1268_, 3, v___f_1266_);
lean_ctor_set(v___x_1268_, 4, v___f_1265_);
v___x_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
lean_ctor_set(v___x_1269_, 1, v___f_1261_);
v___x_1270_ = l_StateRefT_x27_instMonad___redArg(v___x_1269_);
v_toApplicative_1271_ = lean_ctor_get(v___x_1270_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1270_);
if (v_isSharedCheck_1393_ == 0)
{
lean_object* v_unused_1394_; 
v_unused_1394_ = lean_ctor_get(v___x_1270_, 1);
lean_dec(v_unused_1394_);
v___x_1273_ = v___x_1270_;
v_isShared_1274_ = v_isSharedCheck_1393_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_toApplicative_1271_);
lean_dec(v___x_1270_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1393_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v_toFunctor_1275_; lean_object* v_toSeq_1276_; lean_object* v_toSeqLeft_1277_; lean_object* v_toSeqRight_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1391_; 
v_toFunctor_1275_ = lean_ctor_get(v_toApplicative_1271_, 0);
v_toSeq_1276_ = lean_ctor_get(v_toApplicative_1271_, 2);
v_toSeqLeft_1277_ = lean_ctor_get(v_toApplicative_1271_, 3);
v_toSeqRight_1278_ = lean_ctor_get(v_toApplicative_1271_, 4);
v_isSharedCheck_1391_ = !lean_is_exclusive(v_toApplicative_1271_);
if (v_isSharedCheck_1391_ == 0)
{
lean_object* v_unused_1392_; 
v_unused_1392_ = lean_ctor_get(v_toApplicative_1271_, 1);
lean_dec(v_unused_1392_);
v___x_1280_ = v_toApplicative_1271_;
v_isShared_1281_ = v_isSharedCheck_1391_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_toSeqRight_1278_);
lean_inc(v_toSeqLeft_1277_);
lean_inc(v_toSeq_1276_);
lean_inc(v_toFunctor_1275_);
lean_dec(v_toApplicative_1271_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1391_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___f_1282_; lean_object* v___f_1283_; lean_object* v___f_1284_; lean_object* v___f_1285_; lean_object* v___x_1286_; lean_object* v___f_1287_; lean_object* v___f_1288_; lean_object* v___f_1289_; lean_object* v___x_1291_; 
v___f_1282_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4));
v___f_1283_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5));
lean_inc_ref(v_toFunctor_1275_);
v___f_1284_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1284_, 0, v_toFunctor_1275_);
v___f_1285_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1285_, 0, v_toFunctor_1275_);
v___x_1286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___f_1284_);
lean_ctor_set(v___x_1286_, 1, v___f_1285_);
v___f_1287_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1287_, 0, v_toSeqRight_1278_);
v___f_1288_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1288_, 0, v_toSeqLeft_1277_);
v___f_1289_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1289_, 0, v_toSeq_1276_);
if (v_isShared_1281_ == 0)
{
lean_ctor_set(v___x_1280_, 4, v___f_1287_);
lean_ctor_set(v___x_1280_, 3, v___f_1288_);
lean_ctor_set(v___x_1280_, 2, v___f_1289_);
lean_ctor_set(v___x_1280_, 1, v___f_1282_);
lean_ctor_set(v___x_1280_, 0, v___x_1286_);
v___x_1291_ = v___x_1280_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v___x_1286_);
lean_ctor_set(v_reuseFailAlloc_1390_, 1, v___f_1282_);
lean_ctor_set(v_reuseFailAlloc_1390_, 2, v___f_1289_);
lean_ctor_set(v_reuseFailAlloc_1390_, 3, v___f_1288_);
lean_ctor_set(v_reuseFailAlloc_1390_, 4, v___f_1287_);
v___x_1291_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
lean_object* v___x_1293_; 
if (v_isShared_1274_ == 0)
{
lean_ctor_set(v___x_1273_, 1, v___f_1283_);
lean_ctor_set(v___x_1273_, 0, v___x_1291_);
v___x_1293_ = v___x_1273_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v___x_1291_);
lean_ctor_set(v_reuseFailAlloc_1389_, 1, v___f_1283_);
v___x_1293_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
lean_object* v___x_1294_; lean_object* v_toApplicative_1295_; lean_object* v_toFunctor_1296_; lean_object* v_toSeq_1297_; lean_object* v_toSeqLeft_1298_; lean_object* v_toSeqRight_1299_; lean_object* v___f_1300_; lean_object* v___f_1301_; lean_object* v___x_1302_; lean_object* v___f_1303_; lean_object* v___f_1304_; lean_object* v___f_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v_toMonadRef_1312_; lean_object* v___f_1313_; lean_object* v___f_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v_numTypeFormers_1317_; lean_object* v___x_1318_; 
v___x_1294_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9);
v_toApplicative_1295_ = lean_ctor_get(v___x_1254_, 0);
v_toFunctor_1296_ = lean_ctor_get(v_toApplicative_1295_, 0);
v_toSeq_1297_ = lean_ctor_get(v_toApplicative_1295_, 2);
v_toSeqLeft_1298_ = lean_ctor_get(v_toApplicative_1295_, 3);
v_toSeqRight_1299_ = lean_ctor_get(v_toApplicative_1295_, 4);
lean_inc_ref_n(v_toFunctor_1296_, 2);
v___f_1300_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1300_, 0, v_toFunctor_1296_);
v___f_1301_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1301_, 0, v_toFunctor_1296_);
v___x_1302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___f_1300_);
lean_ctor_set(v___x_1302_, 1, v___f_1301_);
lean_inc(v_toSeqRight_1299_);
v___f_1303_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1303_, 0, v_toSeqRight_1299_);
lean_inc(v_toSeqLeft_1298_);
v___f_1304_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1304_, 0, v_toSeqLeft_1298_);
lean_inc(v_toSeq_1297_);
v___f_1305_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1305_, 0, v_toSeq_1297_);
v___x_1306_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1302_);
lean_ctor_set(v___x_1306_, 1, v___f_1260_);
lean_ctor_set(v___x_1306_, 2, v___f_1305_);
lean_ctor_set(v___x_1306_, 3, v___f_1304_);
lean_ctor_set(v___x_1306_, 4, v___f_1303_);
v___x_1307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
lean_ctor_set(v___x_1307_, 1, v___f_1261_);
v___x_1308_ = l_StateRefT_x27_instMonad___redArg(v___x_1307_);
v___x_1309_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1309_, 0, lean_box(0));
lean_closure_set(v___x_1309_, 1, lean_box(0));
lean_closure_set(v___x_1309_, 2, v___x_1308_);
v___x_1310_ = l_instMonadControlTOfPure___redArg(v___x_1309_);
v___x_1311_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13);
v_toMonadRef_1312_ = lean_ctor_get(v___x_1311_, 0);
v___f_1313_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14));
lean_inc_ref(v___x_1293_);
v___f_1314_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3___boxed), 9, 1);
lean_closure_set(v___f_1314_, 0, v___x_1293_);
v___x_1315_ = l_Lean_instInhabitedExpr;
v___x_1316_ = l_Lean_Meta_instAddMessageContextMetaM;
v_numTypeFormers_1317_ = lean_array_get_size(v_positions_1247_);
lean_inc(v_a_1252_);
lean_inc_ref(v_a_1251_);
lean_inc(v_a_1250_);
lean_inc_ref(v_a_1249_);
lean_inc_ref(v_below_1245_);
v___x_1318_ = lean_infer_type(v_below_1245_, v_a_1249_, v_a_1250_, v_a_1251_, v_a_1252_);
if (lean_obj_tag(v___x_1318_) == 0)
{
lean_object* v_a_1319_; lean_object* v___x_1320_; lean_object* v___f_1321_; lean_object* v___f_1322_; lean_object* v___y_1324_; lean_object* v___y_1325_; lean_object* v___y_1326_; lean_object* v___y_1327_; lean_object* v___y_1336_; lean_object* v___y_1337_; lean_object* v___y_1338_; lean_object* v___y_1339_; lean_object* v___x_1365_; lean_object* v_a_1366_; uint8_t v___x_1367_; 
v_a_1319_ = lean_ctor_get(v___x_1318_, 0);
lean_inc_n(v_a_1319_, 2);
lean_dec_ref_known(v___x_1318_, 1);
v___x_1320_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
v___f_1321_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15));
lean_inc_ref(v_toMonadRef_1312_);
lean_inc_ref(v___x_1293_);
v___f_1322_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___boxed), 22, 15);
lean_closure_set(v___f_1322_, 0, v_positions_1247_);
lean_closure_set(v___f_1322_, 1, v___x_1293_);
lean_closure_set(v___f_1322_, 2, v___f_1314_);
lean_closure_set(v___f_1322_, 3, v___f_1313_);
lean_closure_set(v___f_1322_, 4, v___x_1310_);
lean_closure_set(v___f_1322_, 5, v_numTypeFormers_1317_);
lean_closure_set(v___f_1322_, 6, v___x_1315_);
lean_closure_set(v___f_1322_, 7, v_k_1248_);
lean_closure_set(v___f_1322_, 8, v___x_1320_);
lean_closure_set(v___f_1322_, 9, v___x_1294_);
lean_closure_set(v___f_1322_, 10, v_toMonadRef_1312_);
lean_closure_set(v___f_1322_, 11, v___x_1316_);
lean_closure_set(v___f_1322_, 12, v___f_1321_);
lean_closure_set(v___f_1322_, 13, v_numIndParams_1246_);
lean_closure_set(v___f_1322_, 14, v_a_1319_);
v___x_1365_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4(v___x_1320_, v_a_1249_, v_a_1250_, v_a_1251_, v_a_1252_);
v_a_1366_ = lean_ctor_get(v___x_1365_, 0);
lean_inc(v_a_1366_);
lean_dec_ref(v___x_1365_);
v___x_1367_ = lean_unbox(v_a_1366_);
lean_dec(v_a_1366_);
if (v___x_1367_ == 0)
{
v___y_1336_ = v_a_1249_;
v___y_1337_ = v_a_1250_;
v___y_1338_ = v_a_1251_;
v___y_1339_ = v_a_1252_;
goto v___jp_1335_;
}
else
{
lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_7097__overap_1371_; lean_object* v___x_1372_; 
v___x_1368_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17);
lean_inc(v_a_1319_);
v___x_1369_ = l_Lean_MessageData_ofExpr(v_a_1319_);
v___x_1370_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1368_);
lean_ctor_set(v___x_1370_, 1, v___x_1369_);
lean_inc_ref(v_toMonadRef_1312_);
lean_inc_ref(v___x_1293_);
v___x_7097__overap_1371_ = l_Lean_addTrace___redArg(v___x_1293_, v___x_1294_, v_toMonadRef_1312_, v___x_1316_, v___x_1320_, v___x_1370_);
lean_inc(v_a_1252_);
lean_inc_ref(v_a_1251_);
lean_inc(v_a_1250_);
lean_inc_ref(v_a_1249_);
v___x_1372_ = lean_apply_5(v___x_7097__overap_1371_, v_a_1249_, v_a_1250_, v_a_1251_, v_a_1252_, lean_box(0));
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_dec_ref_known(v___x_1372_, 1);
v___y_1336_ = v_a_1249_;
v___y_1337_ = v_a_1250_;
v___y_1338_ = v_a_1251_;
v___y_1339_ = v_a_1252_;
goto v___jp_1335_;
}
else
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1380_; 
lean_dec_ref(v___f_1322_);
lean_dec(v_a_1319_);
lean_dec_ref(v___x_1293_);
lean_dec_ref(v_below_1245_);
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1375_ = v___x_1372_;
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1372_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1376_ == 0)
{
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_a_1373_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
}
}
v___jp_1323_:
{
lean_object* v_dummy_1328_; lean_object* v_nargs_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_7093__overap_1333_; lean_object* v___x_1334_; 
v_dummy_1328_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1);
v_nargs_1329_ = l_Lean_Expr_getAppNumArgs(v_a_1319_);
lean_inc(v_nargs_1329_);
v___x_1330_ = lean_mk_array(v_nargs_1329_, v_dummy_1328_);
v___x_1331_ = lean_unsigned_to_nat(1u);
v___x_1332_ = lean_nat_sub(v_nargs_1329_, v___x_1331_);
lean_dec(v_nargs_1329_);
v___x_7093__overap_1333_ = l_Lean_Expr_withAppAux___redArg(v___f_1322_, v_a_1319_, v___x_1330_, v___x_1332_);
lean_inc(v___y_1327_);
lean_inc_ref(v___y_1326_);
lean_inc(v___y_1325_);
lean_inc_ref(v___y_1324_);
v___x_1334_ = lean_apply_5(v___x_7093__overap_1333_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, lean_box(0));
return v___x_1334_;
}
v___jp_1335_:
{
lean_object* v___x_1340_; 
v___x_1340_ = l_Lean_Meta_isTypeCorrect(v_below_1245_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
if (lean_obj_tag(v___x_1340_) == 0)
{
lean_object* v_a_1341_; uint8_t v___x_1342_; 
v_a_1341_ = lean_ctor_get(v___x_1340_, 0);
lean_inc(v_a_1341_);
lean_dec_ref_known(v___x_1340_, 1);
v___x_1342_ = lean_unbox(v_a_1341_);
lean_dec(v_a_1341_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; lean_object* v_a_1344_; uint8_t v___x_1345_; 
v___x_1343_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4(v___x_1320_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
v_a_1344_ = lean_ctor_get(v___x_1343_, 0);
lean_inc(v_a_1344_);
lean_dec_ref(v___x_1343_);
v___x_1345_ = lean_unbox(v_a_1344_);
lean_dec(v_a_1344_);
if (v___x_1345_ == 0)
{
lean_dec_ref(v___x_1293_);
v___y_1324_ = v___y_1336_;
v___y_1325_ = v___y_1337_;
v___y_1326_ = v___y_1338_;
v___y_1327_ = v___y_1339_;
goto v___jp_1323_;
}
else
{
lean_object* v___x_1346_; lean_object* v___x_7095__overap_1347_; lean_object* v___x_1348_; 
v___x_1346_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2);
lean_inc_ref(v_toMonadRef_1312_);
v___x_7095__overap_1347_ = l_Lean_addTrace___redArg(v___x_1293_, v___x_1294_, v_toMonadRef_1312_, v___x_1316_, v___x_1320_, v___x_1346_);
lean_inc(v___y_1339_);
lean_inc_ref(v___y_1338_);
lean_inc(v___y_1337_);
lean_inc_ref(v___y_1336_);
v___x_1348_ = lean_apply_5(v___x_7095__overap_1347_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, lean_box(0));
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_dec_ref_known(v___x_1348_, 1);
v___y_1324_ = v___y_1336_;
v___y_1325_ = v___y_1337_;
v___y_1326_ = v___y_1338_;
v___y_1327_ = v___y_1339_;
goto v___jp_1323_;
}
else
{
lean_object* v_a_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1356_; 
lean_dec_ref(v___f_1322_);
lean_dec(v_a_1319_);
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1356_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1351_ = v___x_1348_;
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_a_1349_);
lean_dec(v___x_1348_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v___x_1354_; 
if (v_isShared_1352_ == 0)
{
v___x_1354_ = v___x_1351_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_a_1349_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
return v___x_1354_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1293_);
v___y_1324_ = v___y_1336_;
v___y_1325_ = v___y_1337_;
v___y_1326_ = v___y_1338_;
v___y_1327_ = v___y_1339_;
goto v___jp_1323_;
}
}
else
{
lean_object* v_a_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1364_; 
lean_dec_ref(v___f_1322_);
lean_dec(v_a_1319_);
lean_dec_ref(v___x_1293_);
v_a_1357_ = lean_ctor_get(v___x_1340_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1359_ = v___x_1340_;
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_a_1357_);
lean_dec(v___x_1340_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1362_; 
if (v_isShared_1360_ == 0)
{
v___x_1362_ = v___x_1359_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_a_1357_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_dec_ref(v___f_1314_);
lean_dec_ref(v___x_1310_);
lean_dec_ref(v___x_1293_);
lean_dec_ref(v_k_1248_);
lean_dec_ref(v_positions_1247_);
lean_dec(v_numIndParams_1246_);
lean_dec_ref(v_below_1245_);
v_a_1381_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1318_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1318_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___boxed(lean_object* v_below_1395_, lean_object* v_numIndParams_1396_, lean_object* v_positions_1397_, lean_object* v_k_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1395_, v_numIndParams_1396_, v_positions_1397_, v_k_1398_, v_a_1399_, v_a_1400_, v_a_1401_, v_a_1402_);
lean_dec(v_a_1402_);
lean_dec_ref(v_a_1401_);
lean_dec(v_a_1400_);
lean_dec_ref(v_a_1399_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict(lean_object* v_00_u03b1_1405_, lean_object* v_inst_1406_, lean_object* v_below_1407_, lean_object* v_numIndParams_1408_, lean_object* v_positions_1409_, lean_object* v_k_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_){
_start:
{
lean_object* v___x_1416_; 
v___x_1416_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1407_, v_numIndParams_1408_, v_positions_1409_, v_k_1410_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___boxed(lean_object* v_00_u03b1_1417_, lean_object* v_inst_1418_, lean_object* v_below_1419_, lean_object* v_numIndParams_1420_, lean_object* v_positions_1421_, lean_object* v_k_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict(v_00_u03b1_1417_, v_inst_1418_, v_below_1419_, v_numIndParams_1420_, v_positions_1421_, v_k_1422_, v_a_1423_, v_a_1424_, v_a_1425_, v_a_1426_);
lean_dec(v_a_1426_);
lean_dec_ref(v_a_1425_);
lean_dec(v_a_1424_);
lean_dec_ref(v_a_1423_);
lean_dec(v_inst_1418_);
return v_res_1428_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
v___x_1429_ = lean_unsigned_to_nat(32u);
v___x_1430_ = lean_mk_empty_array_with_capacity(v___x_1429_);
v___x_1431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
return v___x_1431_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1432_ = ((size_t)5ULL);
v___x_1433_ = lean_unsigned_to_nat(0u);
v___x_1434_ = lean_unsigned_to_nat(32u);
v___x_1435_ = lean_mk_empty_array_with_capacity(v___x_1434_);
v___x_1436_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0);
v___x_1437_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1437_, 0, v___x_1436_);
lean_ctor_set(v___x_1437_, 1, v___x_1435_);
lean_ctor_set(v___x_1437_, 2, v___x_1433_);
lean_ctor_set(v___x_1437_, 3, v___x_1433_);
lean_ctor_set_usize(v___x_1437_, 4, v___x_1432_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(lean_object* v___y_1438_){
_start:
{
lean_object* v___x_1440_; lean_object* v_traceState_1441_; lean_object* v_traces_1442_; lean_object* v___x_1443_; lean_object* v_traceState_1444_; lean_object* v_env_1445_; lean_object* v_nextMacroScope_1446_; lean_object* v_ngen_1447_; lean_object* v_auxDeclNGen_1448_; lean_object* v_cache_1449_; lean_object* v_messages_1450_; lean_object* v_infoState_1451_; lean_object* v_snapshotTasks_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1471_; 
v___x_1440_ = lean_st_ref_get(v___y_1438_);
v_traceState_1441_ = lean_ctor_get(v___x_1440_, 4);
lean_inc_ref(v_traceState_1441_);
lean_dec(v___x_1440_);
v_traces_1442_ = lean_ctor_get(v_traceState_1441_, 0);
lean_inc_ref(v_traces_1442_);
lean_dec_ref(v_traceState_1441_);
v___x_1443_ = lean_st_ref_take(v___y_1438_);
v_traceState_1444_ = lean_ctor_get(v___x_1443_, 4);
v_env_1445_ = lean_ctor_get(v___x_1443_, 0);
v_nextMacroScope_1446_ = lean_ctor_get(v___x_1443_, 1);
v_ngen_1447_ = lean_ctor_get(v___x_1443_, 2);
v_auxDeclNGen_1448_ = lean_ctor_get(v___x_1443_, 3);
v_cache_1449_ = lean_ctor_get(v___x_1443_, 5);
v_messages_1450_ = lean_ctor_get(v___x_1443_, 6);
v_infoState_1451_ = lean_ctor_get(v___x_1443_, 7);
v_snapshotTasks_1452_ = lean_ctor_get(v___x_1443_, 8);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1443_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1454_ = v___x_1443_;
v_isShared_1455_ = v_isSharedCheck_1471_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_snapshotTasks_1452_);
lean_inc(v_infoState_1451_);
lean_inc(v_messages_1450_);
lean_inc(v_cache_1449_);
lean_inc(v_traceState_1444_);
lean_inc(v_auxDeclNGen_1448_);
lean_inc(v_ngen_1447_);
lean_inc(v_nextMacroScope_1446_);
lean_inc(v_env_1445_);
lean_dec(v___x_1443_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1471_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
uint64_t v_tid_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1469_; 
v_tid_1456_ = lean_ctor_get_uint64(v_traceState_1444_, sizeof(void*)*1);
v_isSharedCheck_1469_ = !lean_is_exclusive(v_traceState_1444_);
if (v_isSharedCheck_1469_ == 0)
{
lean_object* v_unused_1470_; 
v_unused_1470_ = lean_ctor_get(v_traceState_1444_, 0);
lean_dec(v_unused_1470_);
v___x_1458_ = v_traceState_1444_;
v_isShared_1459_ = v_isSharedCheck_1469_;
goto v_resetjp_1457_;
}
else
{
lean_dec(v_traceState_1444_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1469_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1460_; lean_object* v___x_1462_; 
v___x_1460_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1);
if (v_isShared_1459_ == 0)
{
lean_ctor_set(v___x_1458_, 0, v___x_1460_);
v___x_1462_ = v___x_1458_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v___x_1460_);
lean_ctor_set_uint64(v_reuseFailAlloc_1468_, sizeof(void*)*1, v_tid_1456_);
v___x_1462_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
lean_object* v___x_1464_; 
if (v_isShared_1455_ == 0)
{
lean_ctor_set(v___x_1454_, 4, v___x_1462_);
v___x_1464_ = v___x_1454_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_env_1445_);
lean_ctor_set(v_reuseFailAlloc_1467_, 1, v_nextMacroScope_1446_);
lean_ctor_set(v_reuseFailAlloc_1467_, 2, v_ngen_1447_);
lean_ctor_set(v_reuseFailAlloc_1467_, 3, v_auxDeclNGen_1448_);
lean_ctor_set(v_reuseFailAlloc_1467_, 4, v___x_1462_);
lean_ctor_set(v_reuseFailAlloc_1467_, 5, v_cache_1449_);
lean_ctor_set(v_reuseFailAlloc_1467_, 6, v_messages_1450_);
lean_ctor_set(v_reuseFailAlloc_1467_, 7, v_infoState_1451_);
lean_ctor_set(v_reuseFailAlloc_1467_, 8, v_snapshotTasks_1452_);
v___x_1464_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1465_ = lean_st_ref_put(v___y_1438_, v___x_1464_);
v___x_1466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1466_, 0, v_traces_1442_);
return v___x_1466_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___boxed(lean_object* v___y_1472_, lean_object* v___y_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(v___y_1472_);
lean_dec(v___y_1472_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0(lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_){
_start:
{
lean_object* v___x_1480_; 
v___x_1480_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(v___y_1478_);
return v___x_1480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___boxed(lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_){
_start:
{
lean_object* v_res_1486_; 
v_res_1486_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0(v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
return v_res_1486_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(lean_object* v_opts_1487_, lean_object* v_opt_1488_){
_start:
{
lean_object* v_name_1489_; lean_object* v_defValue_1490_; lean_object* v_map_1491_; lean_object* v___x_1492_; 
v_name_1489_ = lean_ctor_get(v_opt_1488_, 0);
v_defValue_1490_ = lean_ctor_get(v_opt_1488_, 1);
v_map_1491_ = lean_ctor_get(v_opts_1487_, 0);
v___x_1492_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1491_, v_name_1489_);
if (lean_obj_tag(v___x_1492_) == 0)
{
uint8_t v___x_1493_; 
v___x_1493_ = lean_unbox(v_defValue_1490_);
return v___x_1493_;
}
else
{
lean_object* v_val_1494_; 
v_val_1494_ = lean_ctor_get(v___x_1492_, 0);
lean_inc(v_val_1494_);
lean_dec_ref_known(v___x_1492_, 1);
if (lean_obj_tag(v_val_1494_) == 1)
{
uint8_t v_v_1495_; 
v_v_1495_ = lean_ctor_get_uint8(v_val_1494_, 0);
lean_dec_ref_known(v_val_1494_, 0);
return v_v_1495_;
}
else
{
uint8_t v___x_1496_; 
lean_dec(v_val_1494_);
v___x_1496_ = lean_unbox(v_defValue_1490_);
return v___x_1496_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1___boxed(lean_object* v_opts_1497_, lean_object* v_opt_1498_){
_start:
{
uint8_t v_res_1499_; lean_object* v_r_1500_; 
v_res_1499_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_opts_1497_, v_opt_1498_);
lean_dec_ref(v_opt_1498_);
lean_dec_ref(v_opts_1497_);
v_r_1500_ = lean_box(v_res_1499_);
return v_r_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__0(lean_object* v___x_1501_, lean_object* v_fnIndex_1502_, lean_object* v_recArg_1503_, lean_object* v_below_1504_, lean_object* v_Cs_1505_, lean_object* v_belowDict_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = lean_array_get_borrowed(v___x_1501_, v_Cs_1505_, v_fnIndex_1502_);
lean_inc(v___x_1512_);
v___x_1513_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux(v___x_1512_, v_belowDict_1506_, v_recArg_1503_, v_below_1504_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__0___boxed(lean_object* v___x_1514_, lean_object* v_fnIndex_1515_, lean_object* v_recArg_1516_, lean_object* v_below_1517_, lean_object* v_Cs_1518_, lean_object* v_belowDict_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l_Lean_Elab_Structural_toBelow___lam__0(v___x_1514_, v_fnIndex_1515_, v_recArg_1516_, v_below_1517_, v_Cs_1518_, v_belowDict_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_);
lean_dec(v___y_1523_);
lean_dec_ref(v___y_1522_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec_ref(v_Cs_1518_);
lean_dec(v_fnIndex_1515_);
lean_dec_ref(v___x_1514_);
return v_res_1525_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = ((lean_object*)(l_Lean_Elab_Structural_toBelow___lam__1___closed__0));
v___x_1528_ = l_Lean_stringToMessageData(v___x_1527_);
return v___x_1528_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1530_ = ((lean_object*)(l_Lean_Elab_Structural_toBelow___lam__1___closed__2));
v___x_1531_ = l_Lean_stringToMessageData(v___x_1530_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__1(lean_object* v_below_1532_, lean_object* v_recArg_1533_, lean_object* v_x_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_){
_start:
{
lean_object* v___x_1540_; 
lean_inc(v___y_1538_);
lean_inc_ref(v___y_1537_);
lean_inc(v___y_1536_);
lean_inc_ref(v___y_1535_);
v___x_1540_ = lean_infer_type(v_below_1532_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1555_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1543_ = v___x_1540_;
v_isShared_1544_ = v_isSharedCheck_1555_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v___x_1540_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1555_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1553_; 
v___x_1545_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___lam__1___closed__1, &l_Lean_Elab_Structural_toBelow___lam__1___closed__1_once, _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__1);
v___x_1546_ = l_Lean_MessageData_ofExpr(v_recArg_1533_);
v___x_1547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1545_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
v___x_1548_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___lam__1___closed__3, &l_Lean_Elab_Structural_toBelow___lam__1___closed__3_once, _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__3);
v___x_1549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1547_);
lean_ctor_set(v___x_1549_, 1, v___x_1548_);
v___x_1550_ = l_Lean_MessageData_ofExpr(v_a_1541_);
v___x_1551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1549_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
if (v_isShared_1544_ == 0)
{
lean_ctor_set(v___x_1543_, 0, v___x_1551_);
v___x_1553_ = v___x_1543_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v___x_1551_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
else
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
lean_dec_ref(v_recArg_1533_);
v_a_1556_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1540_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1540_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_a_1556_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__1___boxed(lean_object* v_below_1564_, lean_object* v_recArg_1565_, lean_object* v_x_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_){
_start:
{
lean_object* v_res_1572_; 
v_res_1572_ = l_Lean_Elab_Structural_toBelow___lam__1(v_below_1564_, v_recArg_1565_, v_x_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
lean_dec(v___y_1568_);
lean_dec_ref(v___y_1567_);
lean_dec_ref(v_x_1566_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2_spec__3(size_t v_sz_1573_, size_t v_i_1574_, lean_object* v_bs_1575_){
_start:
{
uint8_t v___x_1576_; 
v___x_1576_ = lean_usize_dec_lt(v_i_1574_, v_sz_1573_);
if (v___x_1576_ == 0)
{
lean_object* v___x_1577_; 
v___x_1577_ = l_unsafeCast___redArg(v_bs_1575_);
lean_dec_ref(v_bs_1575_);
return v___x_1577_;
}
else
{
lean_object* v_v_1578_; lean_object* v___x_1579_; lean_object* v_msg_1580_; lean_object* v___x_1581_; lean_object* v_bs_x27_1582_; size_t v___x_1583_; size_t v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v_v_1578_ = lean_array_uget_borrowed(v_bs_1575_, v_i_1574_);
v___x_1579_ = l_unsafeCast___redArg(v_v_1578_);
v_msg_1580_ = lean_ctor_get(v___x_1579_, 1);
lean_inc_ref(v_msg_1580_);
lean_dec(v___x_1579_);
v___x_1581_ = lean_unsigned_to_nat(0u);
v_bs_x27_1582_ = lean_array_uset(v_bs_1575_, v_i_1574_, v___x_1581_);
v___x_1583_ = ((size_t)1ULL);
v___x_1584_ = lean_usize_add(v_i_1574_, v___x_1583_);
v___x_1585_ = l_unsafeCast___redArg(v_msg_1580_);
lean_dec_ref(v_msg_1580_);
v___x_1586_ = lean_array_uset(v_bs_x27_1582_, v_i_1574_, v___x_1585_);
v_i_1574_ = v___x_1584_;
v_bs_1575_ = v___x_1586_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2_spec__3___boxed(lean_object* v_sz_1588_, lean_object* v_i_1589_, lean_object* v_bs_1590_){
_start:
{
size_t v_sz_boxed_1591_; size_t v_i_boxed_1592_; lean_object* v_res_1593_; 
v_sz_boxed_1591_ = lean_unbox_usize(v_sz_1588_);
lean_dec(v_sz_1588_);
v_i_boxed_1592_ = lean_unbox_usize(v_i_1589_);
lean_dec(v_i_1589_);
v_res_1593_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2_spec__3(v_sz_boxed_1591_, v_i_boxed_1592_, v_bs_1590_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(lean_object* v_oldTraces_1594_, lean_object* v_data_1595_, lean_object* v_ref_1596_, lean_object* v_msg_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v_toCold_1603_; lean_object* v_currRecDepth_1604_; lean_object* v_ref_1605_; uint8_t v_diag_1606_; uint8_t v_suppressElabErrors_1607_; lean_object* v_ref_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v_traceState_1611_; lean_object* v_traces_1612_; lean_object* v___x_1613_; size_t v_sz_1614_; size_t v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v_msg_1619_; lean_object* v___x_1620_; lean_object* v_a_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1658_; 
v_toCold_1603_ = lean_ctor_get(v___y_1600_, 0);
v_currRecDepth_1604_ = lean_ctor_get(v___y_1600_, 1);
v_ref_1605_ = lean_ctor_get(v___y_1600_, 2);
v_diag_1606_ = lean_ctor_get_uint8(v___y_1600_, sizeof(void*)*3);
v_suppressElabErrors_1607_ = lean_ctor_get_uint8(v___y_1600_, sizeof(void*)*3 + 1);
v_ref_1608_ = l_Lean_replaceRef(v_ref_1596_, v_ref_1605_);
lean_inc(v_currRecDepth_1604_);
lean_inc_ref(v_toCold_1603_);
v___x_1609_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1609_, 0, v_toCold_1603_);
lean_ctor_set(v___x_1609_, 1, v_currRecDepth_1604_);
lean_ctor_set(v___x_1609_, 2, v_ref_1608_);
lean_ctor_set_uint8(v___x_1609_, sizeof(void*)*3, v_diag_1606_);
lean_ctor_set_uint8(v___x_1609_, sizeof(void*)*3 + 1, v_suppressElabErrors_1607_);
v___x_1610_ = lean_st_ref_get(v___y_1601_);
v_traceState_1611_ = lean_ctor_get(v___x_1610_, 4);
lean_inc_ref(v_traceState_1611_);
lean_dec(v___x_1610_);
v_traces_1612_ = lean_ctor_get(v_traceState_1611_, 0);
lean_inc_ref(v_traces_1612_);
lean_dec_ref(v_traceState_1611_);
v___x_1613_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1612_);
lean_dec_ref(v_traces_1612_);
v_sz_1614_ = lean_array_size(v___x_1613_);
v___x_1615_ = ((size_t)0ULL);
v___x_1616_ = l_unsafeCast___redArg(v___x_1613_);
lean_dec_ref(v___x_1613_);
v___x_1617_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2_spec__3(v_sz_1614_, v___x_1615_, v___x_1616_);
v___x_1618_ = l_unsafeCast___redArg(v___x_1617_);
lean_dec_ref(v___x_1617_);
v_msg_1619_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1619_, 0, v_data_1595_);
lean_ctor_set(v_msg_1619_, 1, v_msg_1597_);
lean_ctor_set(v_msg_1619_, 2, v___x_1618_);
v___x_1620_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_1619_, v___y_1598_, v___y_1599_, v___x_1609_, v___y_1601_);
lean_dec_ref_known(v___x_1609_, 3);
v_a_1621_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1623_ = v___x_1620_;
v_isShared_1624_ = v_isSharedCheck_1658_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_a_1621_);
lean_dec(v___x_1620_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1658_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v___x_1625_; lean_object* v_traceState_1626_; lean_object* v_env_1627_; lean_object* v_nextMacroScope_1628_; lean_object* v_ngen_1629_; lean_object* v_auxDeclNGen_1630_; lean_object* v_cache_1631_; lean_object* v_messages_1632_; lean_object* v_infoState_1633_; lean_object* v_snapshotTasks_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1657_; 
v___x_1625_ = lean_st_ref_take(v___y_1601_);
v_traceState_1626_ = lean_ctor_get(v___x_1625_, 4);
v_env_1627_ = lean_ctor_get(v___x_1625_, 0);
v_nextMacroScope_1628_ = lean_ctor_get(v___x_1625_, 1);
v_ngen_1629_ = lean_ctor_get(v___x_1625_, 2);
v_auxDeclNGen_1630_ = lean_ctor_get(v___x_1625_, 3);
v_cache_1631_ = lean_ctor_get(v___x_1625_, 5);
v_messages_1632_ = lean_ctor_get(v___x_1625_, 6);
v_infoState_1633_ = lean_ctor_get(v___x_1625_, 7);
v_snapshotTasks_1634_ = lean_ctor_get(v___x_1625_, 8);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1636_ = v___x_1625_;
v_isShared_1637_ = v_isSharedCheck_1657_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_snapshotTasks_1634_);
lean_inc(v_infoState_1633_);
lean_inc(v_messages_1632_);
lean_inc(v_cache_1631_);
lean_inc(v_traceState_1626_);
lean_inc(v_auxDeclNGen_1630_);
lean_inc(v_ngen_1629_);
lean_inc(v_nextMacroScope_1628_);
lean_inc(v_env_1627_);
lean_dec(v___x_1625_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1657_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
uint64_t v_tid_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1655_; 
v_tid_1638_ = lean_ctor_get_uint64(v_traceState_1626_, sizeof(void*)*1);
v_isSharedCheck_1655_ = !lean_is_exclusive(v_traceState_1626_);
if (v_isSharedCheck_1655_ == 0)
{
lean_object* v_unused_1656_; 
v_unused_1656_ = lean_ctor_get(v_traceState_1626_, 0);
lean_dec(v_unused_1656_);
v___x_1640_ = v_traceState_1626_;
v_isShared_1641_ = v_isSharedCheck_1655_;
goto v_resetjp_1639_;
}
else
{
lean_dec(v_traceState_1626_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1655_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1646_; 
v___x_1642_ = lean_box(0);
v___x_1643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1643_, 0, v_ref_1596_);
lean_ctor_set(v___x_1643_, 1, v_a_1621_);
v___x_1644_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1594_, v___x_1643_);
if (v_isShared_1641_ == 0)
{
lean_ctor_set(v___x_1640_, 0, v___x_1644_);
v___x_1646_ = v___x_1640_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v___x_1644_);
lean_ctor_set_uint64(v_reuseFailAlloc_1654_, sizeof(void*)*1, v_tid_1638_);
v___x_1646_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
lean_object* v___x_1648_; 
if (v_isShared_1637_ == 0)
{
lean_ctor_set(v___x_1636_, 4, v___x_1646_);
v___x_1648_ = v___x_1636_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_env_1627_);
lean_ctor_set(v_reuseFailAlloc_1653_, 1, v_nextMacroScope_1628_);
lean_ctor_set(v_reuseFailAlloc_1653_, 2, v_ngen_1629_);
lean_ctor_set(v_reuseFailAlloc_1653_, 3, v_auxDeclNGen_1630_);
lean_ctor_set(v_reuseFailAlloc_1653_, 4, v___x_1646_);
lean_ctor_set(v_reuseFailAlloc_1653_, 5, v_cache_1631_);
lean_ctor_set(v_reuseFailAlloc_1653_, 6, v_messages_1632_);
lean_ctor_set(v_reuseFailAlloc_1653_, 7, v_infoState_1633_);
lean_ctor_set(v_reuseFailAlloc_1653_, 8, v_snapshotTasks_1634_);
v___x_1648_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
lean_object* v___x_1649_; lean_object* v___x_1651_; 
v___x_1649_ = lean_st_ref_put(v___y_1601_, v___x_1648_);
if (v_isShared_1624_ == 0)
{
lean_ctor_set(v___x_1623_, 0, v___x_1642_);
v___x_1651_ = v___x_1623_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v___x_1642_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2___boxed(lean_object* v_oldTraces_1659_, lean_object* v_data_1660_, lean_object* v_ref_1661_, lean_object* v_msg_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(v_oldTraces_1659_, v_data_1660_, v_ref_1661_, v_msg_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
lean_dec(v___y_1666_);
lean_dec_ref(v___y_1665_);
lean_dec(v___y_1664_);
lean_dec_ref(v___y_1663_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(lean_object* v_opts_1669_, lean_object* v_opt_1670_){
_start:
{
lean_object* v_name_1671_; lean_object* v_defValue_1672_; lean_object* v_map_1673_; lean_object* v___x_1674_; 
v_name_1671_ = lean_ctor_get(v_opt_1670_, 0);
v_defValue_1672_ = lean_ctor_get(v_opt_1670_, 1);
v_map_1673_ = lean_ctor_get(v_opts_1669_, 0);
v___x_1674_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1673_, v_name_1671_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_inc(v_defValue_1672_);
return v_defValue_1672_;
}
else
{
lean_object* v_val_1675_; 
v_val_1675_ = lean_ctor_get(v___x_1674_, 0);
lean_inc(v_val_1675_);
lean_dec_ref_known(v___x_1674_, 1);
if (lean_obj_tag(v_val_1675_) == 3)
{
lean_object* v_v_1676_; 
v_v_1676_ = lean_ctor_get(v_val_1675_, 0);
lean_inc(v_v_1676_);
lean_dec_ref_known(v_val_1675_, 1);
return v_v_1676_;
}
else
{
lean_dec(v_val_1675_);
lean_inc(v_defValue_1672_);
return v_defValue_1672_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5___boxed(lean_object* v_opts_1677_, lean_object* v_opt_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(v_opts_1677_, v_opt_1678_);
lean_dec_ref(v_opt_1678_);
lean_dec_ref(v_opts_1677_);
return v_res_1679_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4(lean_object* v_e_1680_){
_start:
{
if (lean_obj_tag(v_e_1680_) == 0)
{
uint8_t v___x_1681_; 
v___x_1681_ = 2;
return v___x_1681_;
}
else
{
lean_object* v_a_1682_; uint8_t v___x_1683_; 
v_a_1682_ = lean_ctor_get(v_e_1680_, 0);
v___x_1683_ = l_Lean_Expr_hasSyntheticSorry(v_a_1682_);
if (v___x_1683_ == 0)
{
uint8_t v___x_1684_; 
v___x_1684_ = 0;
return v___x_1684_;
}
else
{
uint8_t v___x_1685_; 
v___x_1685_ = 1;
return v___x_1685_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___boxed(lean_object* v_e_1686_){
_start:
{
uint8_t v_res_1687_; lean_object* v_r_1688_; 
v_res_1687_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4(v_e_1686_);
lean_dec_ref(v_e_1686_);
v_r_1688_ = lean_box(v_res_1687_);
return v_r_1688_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___redArg(lean_object* v_x_1689_){
_start:
{
if (lean_obj_tag(v_x_1689_) == 0)
{
lean_object* v_a_1691_; lean_object* v___x_1693_; uint8_t v_isShared_1694_; uint8_t v_isSharedCheck_1698_; 
v_a_1691_ = lean_ctor_get(v_x_1689_, 0);
v_isSharedCheck_1698_ = !lean_is_exclusive(v_x_1689_);
if (v_isSharedCheck_1698_ == 0)
{
v___x_1693_ = v_x_1689_;
v_isShared_1694_ = v_isSharedCheck_1698_;
goto v_resetjp_1692_;
}
else
{
lean_inc(v_a_1691_);
lean_dec(v_x_1689_);
v___x_1693_ = lean_box(0);
v_isShared_1694_ = v_isSharedCheck_1698_;
goto v_resetjp_1692_;
}
v_resetjp_1692_:
{
lean_object* v___x_1696_; 
if (v_isShared_1694_ == 0)
{
lean_ctor_set_tag(v___x_1693_, 1);
v___x_1696_ = v___x_1693_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v_a_1691_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
return v___x_1696_;
}
}
}
else
{
lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1706_; 
v_a_1699_ = lean_ctor_get(v_x_1689_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v_x_1689_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1701_ = v_x_1689_;
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_dec(v_x_1689_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1704_; 
if (v_isShared_1702_ == 0)
{
lean_ctor_set_tag(v___x_1701_, 0);
v___x_1704_ = v___x_1701_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_a_1699_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___redArg___boxed(lean_object* v_x_1707_, lean_object* v___y_1708_){
_start:
{
lean_object* v_res_1709_; 
v_res_1709_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___redArg(v_x_1707_);
return v_res_1709_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1711_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0));
v___x_1712_ = l_Lean_stringToMessageData(v___x_1711_);
return v___x_1712_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1713_; double v___x_1714_; 
v___x_1713_ = lean_unsigned_to_nat(1000u);
v___x_1714_ = lean_float_of_nat(v___x_1713_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(lean_object* v_cls_1715_, uint8_t v_collapsed_1716_, lean_object* v_tag_1717_, lean_object* v_opts_1718_, uint8_t v_clsEnabled_1719_, lean_object* v_oldTraces_1720_, lean_object* v_msg_1721_, lean_object* v_resStartStop_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_){
_start:
{
lean_object* v_fst_1728_; lean_object* v_snd_1729_; lean_object* v___y_1731_; lean_object* v___y_1732_; lean_object* v_data_1733_; lean_object* v_fst_1744_; lean_object* v_snd_1745_; lean_object* v___x_1746_; uint8_t v___x_1747_; lean_object* v___y_1749_; lean_object* v_a_1750_; uint8_t v___y_1765_; double v___y_1796_; 
v_fst_1728_ = lean_ctor_get(v_resStartStop_1722_, 0);
lean_inc(v_fst_1728_);
v_snd_1729_ = lean_ctor_get(v_resStartStop_1722_, 1);
lean_inc(v_snd_1729_);
lean_dec_ref(v_resStartStop_1722_);
v_fst_1744_ = lean_ctor_get(v_snd_1729_, 0);
lean_inc(v_fst_1744_);
v_snd_1745_ = lean_ctor_get(v_snd_1729_, 1);
lean_inc(v_snd_1745_);
lean_dec(v_snd_1729_);
v___x_1746_ = l_Lean_trace_profiler;
v___x_1747_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_opts_1718_, v___x_1746_);
if (v___x_1747_ == 0)
{
v___y_1765_ = v___x_1747_;
goto v___jp_1764_;
}
else
{
lean_object* v___x_1801_; uint8_t v___x_1802_; 
v___x_1801_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1802_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_opts_1718_, v___x_1801_);
if (v___x_1802_ == 0)
{
lean_object* v___x_1803_; lean_object* v___x_1804_; double v___x_1805_; double v___x_1806_; double v___x_1807_; 
v___x_1803_ = l_Lean_trace_profiler_threshold;
v___x_1804_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(v_opts_1718_, v___x_1803_);
v___x_1805_ = lean_float_of_nat(v___x_1804_);
v___x_1806_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2);
v___x_1807_ = lean_float_div(v___x_1805_, v___x_1806_);
v___y_1796_ = v___x_1807_;
goto v___jp_1795_;
}
else
{
lean_object* v___x_1808_; lean_object* v___x_1809_; double v___x_1810_; 
v___x_1808_ = l_Lean_trace_profiler_threshold;
v___x_1809_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(v_opts_1718_, v___x_1808_);
v___x_1810_ = lean_float_of_nat(v___x_1809_);
v___y_1796_ = v___x_1810_;
goto v___jp_1795_;
}
}
v___jp_1730_:
{
lean_object* v___x_1734_; 
lean_inc(v___y_1731_);
v___x_1734_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(v_oldTraces_1720_, v_data_1733_, v___y_1731_, v___y_1732_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
if (lean_obj_tag(v___x_1734_) == 0)
{
lean_object* v___x_1735_; 
lean_dec_ref_known(v___x_1734_, 1);
v___x_1735_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___redArg(v_fst_1728_);
return v___x_1735_;
}
else
{
lean_object* v_a_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1743_; 
lean_dec(v_fst_1728_);
v_a_1736_ = lean_ctor_get(v___x_1734_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1734_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1738_ = v___x_1734_;
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_a_1736_);
lean_dec(v___x_1734_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1741_; 
if (v_isShared_1739_ == 0)
{
v___x_1741_ = v___x_1738_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_a_1736_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
}
v___jp_1748_:
{
uint8_t v_result_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; double v___x_1754_; lean_object* v_data_1755_; 
v_result_1751_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4(v_fst_1728_);
v___x_1752_ = lean_box(v_result_1751_);
v___x_1753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1752_);
v___x_1754_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0);
lean_inc_ref(v_tag_1717_);
lean_inc_ref(v___x_1753_);
lean_inc(v_cls_1715_);
v_data_1755_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1755_, 0, v_cls_1715_);
lean_ctor_set(v_data_1755_, 1, v___x_1753_);
lean_ctor_set(v_data_1755_, 2, v_tag_1717_);
lean_ctor_set_float(v_data_1755_, sizeof(void*)*3, v___x_1754_);
lean_ctor_set_float(v_data_1755_, sizeof(void*)*3 + 8, v___x_1754_);
lean_ctor_set_uint8(v_data_1755_, sizeof(void*)*3 + 16, v_collapsed_1716_);
if (v___x_1747_ == 0)
{
lean_dec_ref_known(v___x_1753_, 1);
lean_dec(v_snd_1745_);
lean_dec(v_fst_1744_);
lean_dec_ref(v_tag_1717_);
lean_dec(v_cls_1715_);
v___y_1731_ = v___y_1749_;
v___y_1732_ = v_a_1750_;
v_data_1733_ = v_data_1755_;
goto v___jp_1730_;
}
else
{
lean_object* v_data_1756_; double v___x_1757_; double v___x_1758_; 
lean_dec_ref_known(v_data_1755_, 3);
v_data_1756_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1756_, 0, v_cls_1715_);
lean_ctor_set(v_data_1756_, 1, v___x_1753_);
lean_ctor_set(v_data_1756_, 2, v_tag_1717_);
v___x_1757_ = lean_unbox_float(v_fst_1744_);
lean_dec(v_fst_1744_);
lean_ctor_set_float(v_data_1756_, sizeof(void*)*3, v___x_1757_);
v___x_1758_ = lean_unbox_float(v_snd_1745_);
lean_dec(v_snd_1745_);
lean_ctor_set_float(v_data_1756_, sizeof(void*)*3 + 8, v___x_1758_);
lean_ctor_set_uint8(v_data_1756_, sizeof(void*)*3 + 16, v_collapsed_1716_);
v___y_1731_ = v___y_1749_;
v___y_1732_ = v_a_1750_;
v_data_1733_ = v_data_1756_;
goto v___jp_1730_;
}
}
v___jp_1759_:
{
lean_object* v_ref_1760_; lean_object* v___x_1761_; 
v_ref_1760_ = lean_ctor_get(v___y_1725_, 2);
lean_inc(v___y_1726_);
lean_inc_ref(v___y_1725_);
lean_inc(v___y_1724_);
lean_inc_ref(v___y_1723_);
lean_inc(v_fst_1728_);
v___x_1761_ = lean_apply_6(v_msg_1721_, v_fst_1728_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, lean_box(0));
if (lean_obj_tag(v___x_1761_) == 0)
{
lean_object* v_a_1762_; 
v_a_1762_ = lean_ctor_get(v___x_1761_, 0);
lean_inc(v_a_1762_);
lean_dec_ref_known(v___x_1761_, 1);
v___y_1749_ = v_ref_1760_;
v_a_1750_ = v_a_1762_;
goto v___jp_1748_;
}
else
{
lean_object* v___x_1763_; 
lean_dec_ref_known(v___x_1761_, 1);
v___x_1763_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1);
v___y_1749_ = v_ref_1760_;
v_a_1750_ = v___x_1763_;
goto v___jp_1748_;
}
}
v___jp_1764_:
{
if (v_clsEnabled_1719_ == 0)
{
if (v___y_1765_ == 0)
{
lean_object* v___x_1766_; lean_object* v_traceState_1767_; lean_object* v_env_1768_; lean_object* v_nextMacroScope_1769_; lean_object* v_ngen_1770_; lean_object* v_auxDeclNGen_1771_; lean_object* v_cache_1772_; lean_object* v_messages_1773_; lean_object* v_infoState_1774_; lean_object* v_snapshotTasks_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1794_; 
lean_dec(v_snd_1745_);
lean_dec(v_fst_1744_);
lean_dec_ref(v_msg_1721_);
lean_dec_ref(v_tag_1717_);
lean_dec(v_cls_1715_);
v___x_1766_ = lean_st_ref_take(v___y_1726_);
v_traceState_1767_ = lean_ctor_get(v___x_1766_, 4);
v_env_1768_ = lean_ctor_get(v___x_1766_, 0);
v_nextMacroScope_1769_ = lean_ctor_get(v___x_1766_, 1);
v_ngen_1770_ = lean_ctor_get(v___x_1766_, 2);
v_auxDeclNGen_1771_ = lean_ctor_get(v___x_1766_, 3);
v_cache_1772_ = lean_ctor_get(v___x_1766_, 5);
v_messages_1773_ = lean_ctor_get(v___x_1766_, 6);
v_infoState_1774_ = lean_ctor_get(v___x_1766_, 7);
v_snapshotTasks_1775_ = lean_ctor_get(v___x_1766_, 8);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1777_ = v___x_1766_;
v_isShared_1778_ = v_isSharedCheck_1794_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_snapshotTasks_1775_);
lean_inc(v_infoState_1774_);
lean_inc(v_messages_1773_);
lean_inc(v_cache_1772_);
lean_inc(v_traceState_1767_);
lean_inc(v_auxDeclNGen_1771_);
lean_inc(v_ngen_1770_);
lean_inc(v_nextMacroScope_1769_);
lean_inc(v_env_1768_);
lean_dec(v___x_1766_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1794_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
uint64_t v_tid_1779_; lean_object* v_traces_1780_; lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1793_; 
v_tid_1779_ = lean_ctor_get_uint64(v_traceState_1767_, sizeof(void*)*1);
v_traces_1780_ = lean_ctor_get(v_traceState_1767_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v_traceState_1767_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1782_ = v_traceState_1767_;
v_isShared_1783_ = v_isSharedCheck_1793_;
goto v_resetjp_1781_;
}
else
{
lean_inc(v_traces_1780_);
lean_dec(v_traceState_1767_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1793_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
lean_object* v___x_1784_; lean_object* v___x_1786_; 
v___x_1784_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1720_, v_traces_1780_);
lean_dec_ref(v_traces_1780_);
if (v_isShared_1783_ == 0)
{
lean_ctor_set(v___x_1782_, 0, v___x_1784_);
v___x_1786_ = v___x_1782_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v___x_1784_);
lean_ctor_set_uint64(v_reuseFailAlloc_1792_, sizeof(void*)*1, v_tid_1779_);
v___x_1786_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
lean_object* v___x_1788_; 
if (v_isShared_1778_ == 0)
{
lean_ctor_set(v___x_1777_, 4, v___x_1786_);
v___x_1788_ = v___x_1777_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_env_1768_);
lean_ctor_set(v_reuseFailAlloc_1791_, 1, v_nextMacroScope_1769_);
lean_ctor_set(v_reuseFailAlloc_1791_, 2, v_ngen_1770_);
lean_ctor_set(v_reuseFailAlloc_1791_, 3, v_auxDeclNGen_1771_);
lean_ctor_set(v_reuseFailAlloc_1791_, 4, v___x_1786_);
lean_ctor_set(v_reuseFailAlloc_1791_, 5, v_cache_1772_);
lean_ctor_set(v_reuseFailAlloc_1791_, 6, v_messages_1773_);
lean_ctor_set(v_reuseFailAlloc_1791_, 7, v_infoState_1774_);
lean_ctor_set(v_reuseFailAlloc_1791_, 8, v_snapshotTasks_1775_);
v___x_1788_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1789_ = lean_st_ref_put(v___y_1726_, v___x_1788_);
v___x_1790_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___redArg(v_fst_1728_);
return v___x_1790_;
}
}
}
}
}
else
{
goto v___jp_1759_;
}
}
else
{
goto v___jp_1759_;
}
}
v___jp_1795_:
{
double v___x_1797_; double v___x_1798_; double v___x_1799_; uint8_t v___x_1800_; 
v___x_1797_ = lean_unbox_float(v_snd_1745_);
v___x_1798_ = lean_unbox_float(v_fst_1744_);
v___x_1799_ = lean_float_sub(v___x_1797_, v___x_1798_);
v___x_1800_ = lean_float_decLt(v___y_1796_, v___x_1799_);
v___y_1765_ = v___x_1800_;
goto v___jp_1764_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___boxed(lean_object* v_cls_1811_, lean_object* v_collapsed_1812_, lean_object* v_tag_1813_, lean_object* v_opts_1814_, lean_object* v_clsEnabled_1815_, lean_object* v_oldTraces_1816_, lean_object* v_msg_1817_, lean_object* v_resStartStop_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_){
_start:
{
uint8_t v_collapsed_boxed_1824_; uint8_t v_clsEnabled_boxed_1825_; lean_object* v_res_1826_; 
v_collapsed_boxed_1824_ = lean_unbox(v_collapsed_1812_);
v_clsEnabled_boxed_1825_ = lean_unbox(v_clsEnabled_1815_);
v_res_1826_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(v_cls_1811_, v_collapsed_boxed_1824_, v_tag_1813_, v_opts_1814_, v_clsEnabled_boxed_1825_, v_oldTraces_1816_, v_msg_1817_, v_resStartStop_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_);
lean_dec(v___y_1822_);
lean_dec_ref(v___y_1821_);
lean_dec(v___y_1820_);
lean_dec_ref(v___y_1819_);
lean_dec_ref(v_opts_1814_);
return v_res_1826_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_toBelow___closed__0(void){
_start:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1827_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
v___x_1828_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1));
v___x_1829_ = l_Lean_Name_append(v___x_1828_, v___x_1827_);
return v___x_1829_;
}
}
static double _init_l_Lean_Elab_Structural_toBelow___closed__1(void){
_start:
{
lean_object* v___x_1830_; double v___x_1831_; 
v___x_1830_ = lean_unsigned_to_nat(1000000000u);
v___x_1831_ = lean_float_of_nat(v___x_1830_);
return v___x_1831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow(lean_object* v_below_1832_, lean_object* v_numIndParams_1833_, lean_object* v_positions_1834_, lean_object* v_fnIndex_1835_, lean_object* v_recArg_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_){
_start:
{
lean_object* v_toCold_1842_; lean_object* v_options_1843_; lean_object* v_inheritedTraceOptions_1844_; uint8_t v_hasTrace_1845_; lean_object* v___x_1846_; lean_object* v___f_1847_; 
v_toCold_1842_ = lean_ctor_get(v_a_1839_, 0);
v_options_1843_ = lean_ctor_get(v_toCold_1842_, 2);
v_inheritedTraceOptions_1844_ = lean_ctor_get(v_toCold_1842_, 11);
v_hasTrace_1845_ = lean_ctor_get_uint8(v_options_1843_, sizeof(void*)*1);
v___x_1846_ = l_Lean_instInhabitedExpr;
lean_inc_ref(v_below_1832_);
lean_inc_ref(v_recArg_1836_);
v___f_1847_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_toBelow___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1847_, 0, v___x_1846_);
lean_closure_set(v___f_1847_, 1, v_fnIndex_1835_);
lean_closure_set(v___f_1847_, 2, v_recArg_1836_);
lean_closure_set(v___f_1847_, 3, v_below_1832_);
if (v_hasTrace_1845_ == 0)
{
lean_object* v___x_1848_; 
lean_dec_ref(v_recArg_1836_);
v___x_1848_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1832_, v_numIndParams_1833_, v_positions_1834_, v___f_1847_, v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_);
return v___x_1848_;
}
else
{
lean_object* v___f_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; uint8_t v___x_1853_; lean_object* v___y_1855_; lean_object* v___y_1856_; lean_object* v_a_1857_; lean_object* v___y_1870_; lean_object* v___y_1871_; lean_object* v_a_1872_; 
lean_inc_ref(v_below_1832_);
v___f_1849_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_toBelow___lam__1___boxed), 8, 2);
lean_closure_set(v___f_1849_, 0, v_below_1832_);
lean_closure_set(v___f_1849_, 1, v_recArg_1836_);
v___x_1850_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
v___x_1851_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1));
v___x_1852_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___closed__0, &l_Lean_Elab_Structural_toBelow___closed__0_once, _init_l_Lean_Elab_Structural_toBelow___closed__0);
v___x_1853_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1844_, v_options_1843_, v___x_1852_);
if (v___x_1853_ == 0)
{
lean_object* v___x_1922_; uint8_t v___x_1923_; 
v___x_1922_ = l_Lean_trace_profiler;
v___x_1923_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_options_1843_, v___x_1922_);
if (v___x_1923_ == 0)
{
lean_object* v___x_1924_; 
lean_dec_ref(v___f_1849_);
v___x_1924_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1832_, v_numIndParams_1833_, v_positions_1834_, v___f_1847_, v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_);
return v___x_1924_;
}
else
{
goto v___jp_1881_;
}
}
else
{
goto v___jp_1881_;
}
v___jp_1854_:
{
lean_object* v___x_1858_; double v___x_1859_; double v___x_1860_; double v___x_1861_; double v___x_1862_; double v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1858_ = lean_io_mono_nanos_now();
v___x_1859_ = lean_float_of_nat(v___y_1855_);
v___x_1860_ = lean_float_once(&l_Lean_Elab_Structural_toBelow___closed__1, &l_Lean_Elab_Structural_toBelow___closed__1_once, _init_l_Lean_Elab_Structural_toBelow___closed__1);
v___x_1861_ = lean_float_div(v___x_1859_, v___x_1860_);
v___x_1862_ = lean_float_of_nat(v___x_1858_);
v___x_1863_ = lean_float_div(v___x_1862_, v___x_1860_);
v___x_1864_ = lean_box_float(v___x_1861_);
v___x_1865_ = lean_box_float(v___x_1863_);
v___x_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1864_);
lean_ctor_set(v___x_1866_, 1, v___x_1865_);
v___x_1867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1867_, 0, v_a_1857_);
lean_ctor_set(v___x_1867_, 1, v___x_1866_);
v___x_1868_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(v___x_1850_, v_hasTrace_1845_, v___x_1851_, v_options_1843_, v___x_1853_, v___y_1856_, v___f_1849_, v___x_1867_, v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_);
return v___x_1868_;
}
v___jp_1869_:
{
lean_object* v___x_1873_; double v___x_1874_; double v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1873_ = lean_io_get_num_heartbeats();
v___x_1874_ = lean_float_of_nat(v___y_1870_);
v___x_1875_ = lean_float_of_nat(v___x_1873_);
v___x_1876_ = lean_box_float(v___x_1874_);
v___x_1877_ = lean_box_float(v___x_1875_);
v___x_1878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1876_);
lean_ctor_set(v___x_1878_, 1, v___x_1877_);
v___x_1879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1879_, 0, v_a_1872_);
lean_ctor_set(v___x_1879_, 1, v___x_1878_);
v___x_1880_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(v___x_1850_, v_hasTrace_1845_, v___x_1851_, v_options_1843_, v___x_1853_, v___y_1871_, v___f_1849_, v___x_1879_, v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_);
return v___x_1880_;
}
v___jp_1881_:
{
lean_object* v___x_1882_; lean_object* v_a_1883_; lean_object* v___x_1884_; uint8_t v___x_1885_; 
v___x_1882_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(v_a_1840_);
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
lean_inc(v_a_1883_);
lean_dec_ref(v___x_1882_);
v___x_1884_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1885_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_options_1843_, v___x_1884_);
if (v___x_1885_ == 0)
{
lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1886_ = lean_io_mono_nanos_now();
v___x_1887_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1832_, v_numIndParams_1833_, v_positions_1834_, v___f_1847_, v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_);
if (lean_obj_tag(v___x_1887_) == 0)
{
lean_object* v_a_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1895_; 
v_a_1888_ = lean_ctor_get(v___x_1887_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1890_ = v___x_1887_;
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_a_1888_);
lean_dec(v___x_1887_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1893_; 
if (v_isShared_1891_ == 0)
{
lean_ctor_set_tag(v___x_1890_, 1);
v___x_1893_ = v___x_1890_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_a_1888_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
v___y_1855_ = v___x_1886_;
v___y_1856_ = v_a_1883_;
v_a_1857_ = v___x_1893_;
goto v___jp_1854_;
}
}
}
else
{
lean_object* v_a_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1903_; 
v_a_1896_ = lean_ctor_get(v___x_1887_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1898_ = v___x_1887_;
v_isShared_1899_ = v_isSharedCheck_1903_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_a_1896_);
lean_dec(v___x_1887_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1903_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1901_; 
if (v_isShared_1899_ == 0)
{
lean_ctor_set_tag(v___x_1898_, 0);
v___x_1901_ = v___x_1898_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v_a_1896_);
v___x_1901_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
v___y_1855_ = v___x_1886_;
v___y_1856_ = v_a_1883_;
v_a_1857_ = v___x_1901_;
goto v___jp_1854_;
}
}
}
}
else
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = lean_io_get_num_heartbeats();
v___x_1905_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1832_, v_numIndParams_1833_, v_positions_1834_, v___f_1847_, v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1913_; 
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1908_ = v___x_1905_;
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1905_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1911_; 
if (v_isShared_1909_ == 0)
{
lean_ctor_set_tag(v___x_1908_, 1);
v___x_1911_ = v___x_1908_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1906_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
v___y_1870_ = v___x_1904_;
v___y_1871_ = v_a_1883_;
v_a_1872_ = v___x_1911_;
goto v___jp_1869_;
}
}
}
else
{
lean_object* v_a_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1921_; 
v_a_1914_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1916_ = v___x_1905_;
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_a_1914_);
lean_dec(v___x_1905_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1919_; 
if (v_isShared_1917_ == 0)
{
lean_ctor_set_tag(v___x_1916_, 0);
v___x_1919_ = v___x_1916_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v_a_1914_);
v___x_1919_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
v___y_1870_ = v___x_1904_;
v___y_1871_ = v_a_1883_;
v_a_1872_ = v___x_1919_;
goto v___jp_1869_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___boxed(lean_object* v_below_1925_, lean_object* v_numIndParams_1926_, lean_object* v_positions_1927_, lean_object* v_fnIndex_1928_, lean_object* v_recArg_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = l_Lean_Elab_Structural_toBelow(v_below_1925_, v_numIndParams_1926_, v_positions_1927_, v_fnIndex_1928_, v_recArg_1929_, v_a_1930_, v_a_1931_, v_a_1932_, v_a_1933_);
lean_dec(v_a_1933_);
lean_dec_ref(v_a_1932_);
lean_dec(v_a_1931_);
lean_dec_ref(v_a_1930_);
return v_res_1935_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3(lean_object* v_00_u03b1_1936_, lean_object* v_x_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v___x_1943_; 
v___x_1943_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___redArg(v_x_1937_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1944_, lean_object* v_x_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_){
_start:
{
lean_object* v_res_1951_; 
v_res_1951_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3(v_00_u03b1_1944_, v_x_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_);
lean_dec(v___y_1949_);
lean_dec_ref(v___y_1948_);
lean_dec(v___y_1947_);
lean_dec_ref(v___y_1946_);
return v_res_1951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0(lean_object* v_k_1952_, lean_object* v___y_1953_, lean_object* v_b_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_){
_start:
{
lean_object* v___x_1960_; 
lean_inc(v___y_1958_);
lean_inc_ref(v___y_1957_);
lean_inc(v___y_1956_);
lean_inc_ref(v___y_1955_);
lean_inc(v___y_1953_);
v___x_1960_ = lean_apply_7(v_k_1952_, v_b_1954_, v___y_1953_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, lean_box(0));
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed(lean_object* v_k_1961_, lean_object* v___y_1962_, lean_object* v_b_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_){
_start:
{
lean_object* v_res_1969_; 
v_res_1969_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0(v_k_1961_, v___y_1962_, v_b_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec(v___y_1962_);
return v_res_1969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(lean_object* v_name_1970_, uint8_t v_bi_1971_, lean_object* v_type_1972_, lean_object* v_k_1973_, uint8_t v_kind_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_){
_start:
{
lean_object* v___f_1981_; lean_object* v___x_1982_; 
lean_inc(v___y_1975_);
v___f_1981_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1981_, 0, v_k_1973_);
lean_closure_set(v___f_1981_, 1, v___y_1975_);
v___x_1982_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1970_, v_bi_1971_, v_type_1972_, v___f_1981_, v_kind_1974_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_);
if (lean_obj_tag(v___x_1982_) == 0)
{
return v___x_1982_;
}
else
{
lean_object* v_a_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1990_; 
v_a_1983_ = lean_ctor_get(v___x_1982_, 0);
v_isSharedCheck_1990_ = !lean_is_exclusive(v___x_1982_);
if (v_isSharedCheck_1990_ == 0)
{
v___x_1985_ = v___x_1982_;
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_a_1983_);
lean_dec(v___x_1982_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___x_1988_; 
if (v_isShared_1986_ == 0)
{
v___x_1988_ = v___x_1985_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v_a_1983_);
v___x_1988_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
return v___x_1988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___boxed(lean_object* v_name_1991_, lean_object* v_bi_1992_, lean_object* v_type_1993_, lean_object* v_k_1994_, lean_object* v_kind_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_){
_start:
{
uint8_t v_bi_boxed_2002_; uint8_t v_kind_boxed_2003_; lean_object* v_res_2004_; 
v_bi_boxed_2002_ = lean_unbox(v_bi_1992_);
v_kind_boxed_2003_ = lean_unbox(v_kind_1995_);
v_res_2004_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_name_1991_, v_bi_boxed_2002_, v_type_1993_, v_k_1994_, v_kind_boxed_2003_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
lean_dec(v___y_2000_);
lean_dec_ref(v___y_1999_);
lean_dec(v___y_1998_);
lean_dec_ref(v___y_1997_);
lean_dec(v___y_1996_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3(lean_object* v_00_u03b1_2005_, lean_object* v_name_2006_, uint8_t v_bi_2007_, lean_object* v_type_2008_, lean_object* v_k_2009_, uint8_t v_kind_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_){
_start:
{
lean_object* v___x_2017_; 
v___x_2017_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_name_2006_, v_bi_2007_, v_type_2008_, v_k_2009_, v_kind_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_, v___y_2015_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___boxed(lean_object* v_00_u03b1_2018_, lean_object* v_name_2019_, lean_object* v_bi_2020_, lean_object* v_type_2021_, lean_object* v_k_2022_, lean_object* v_kind_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_){
_start:
{
uint8_t v_bi_boxed_2030_; uint8_t v_kind_boxed_2031_; lean_object* v_res_2032_; 
v_bi_boxed_2030_ = lean_unbox(v_bi_2020_);
v_kind_boxed_2031_ = lean_unbox(v_kind_2023_);
v_res_2032_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3(v_00_u03b1_2018_, v_name_2019_, v_bi_boxed_2030_, v_type_2021_, v_k_2022_, v_kind_boxed_2031_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec(v___y_2026_);
lean_dec_ref(v___y_2025_);
lean_dec(v___y_2024_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___lam__0(lean_object* v_k_2033_, lean_object* v___y_2034_, lean_object* v_b_2035_, lean_object* v_c_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_){
_start:
{
lean_object* v___x_2042_; 
lean_inc(v___y_2040_);
lean_inc_ref(v___y_2039_);
lean_inc(v___y_2038_);
lean_inc_ref(v___y_2037_);
lean_inc(v___y_2034_);
v___x_2042_ = lean_apply_8(v_k_2033_, v_b_2035_, v_c_2036_, v___y_2034_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_, lean_box(0));
return v___x_2042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___lam__0___boxed(lean_object* v_k_2043_, lean_object* v___y_2044_, lean_object* v_b_2045_, lean_object* v_c_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_){
_start:
{
lean_object* v_res_2052_; 
v_res_2052_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___lam__0(v_k_2043_, v___y_2044_, v_b_2045_, v_c_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
lean_dec(v___y_2044_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(lean_object* v_e_2053_, lean_object* v_maxFVars_2054_, lean_object* v_k_2055_, uint8_t v_cleanupAnnotations_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_){
_start:
{
lean_object* v___f_2063_; uint8_t v___x_2064_; uint8_t v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
lean_inc(v___y_2057_);
v___f_2063_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2063_, 0, v_k_2055_);
lean_closure_set(v___f_2063_, 1, v___y_2057_);
v___x_2064_ = 1;
v___x_2065_ = 0;
v___x_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2066_, 0, v_maxFVars_2054_);
v___x_2067_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2053_, v___x_2064_, v___x_2065_, v___x_2064_, v___x_2065_, v___x_2066_, v___f_2063_, v_cleanupAnnotations_2056_, v___y_2058_, v___y_2059_, v___y_2060_, v___y_2061_);
lean_dec_ref_known(v___x_2066_, 1);
if (lean_obj_tag(v___x_2067_) == 0)
{
return v___x_2067_;
}
else
{
lean_object* v_a_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2075_; 
v_a_2068_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2075_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2070_ = v___x_2067_;
v_isShared_2071_ = v_isSharedCheck_2075_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_a_2068_);
lean_dec(v___x_2067_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2075_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v___x_2073_; 
if (v_isShared_2071_ == 0)
{
v___x_2073_ = v___x_2070_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_a_2068_);
v___x_2073_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
return v___x_2073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___boxed(lean_object* v_e_2076_, lean_object* v_maxFVars_2077_, lean_object* v_k_2078_, lean_object* v_cleanupAnnotations_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2086_; lean_object* v_res_2087_; 
v_cleanupAnnotations_boxed_2086_ = lean_unbox(v_cleanupAnnotations_2079_);
v_res_2087_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v_e_2076_, v_maxFVars_2077_, v_k_2078_, v_cleanupAnnotations_boxed_2086_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_);
lean_dec(v___y_2084_);
lean_dec_ref(v___y_2083_);
lean_dec(v___y_2082_);
lean_dec_ref(v___y_2081_);
lean_dec(v___y_2080_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9(lean_object* v_00_u03b1_2088_, lean_object* v_e_2089_, lean_object* v_maxFVars_2090_, lean_object* v_k_2091_, uint8_t v_cleanupAnnotations_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_){
_start:
{
lean_object* v___x_2099_; 
v___x_2099_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v_e_2089_, v_maxFVars_2090_, v_k_2091_, v_cleanupAnnotations_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_);
return v___x_2099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___boxed(lean_object* v_00_u03b1_2100_, lean_object* v_e_2101_, lean_object* v_maxFVars_2102_, lean_object* v_k_2103_, lean_object* v_cleanupAnnotations_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2111_; lean_object* v_res_2112_; 
v_cleanupAnnotations_boxed_2111_ = lean_unbox(v_cleanupAnnotations_2104_);
v_res_2112_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9(v_00_u03b1_2100_, v_e_2101_, v_maxFVars_2102_, v_k_2103_, v_cleanupAnnotations_boxed_2111_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec(v___y_2107_);
lean_dec_ref(v___y_2106_);
lean_dec(v___y_2105_);
return v_res_2112_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg(lean_object* v_cls_2113_, lean_object* v_msg_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_){
_start:
{
lean_object* v_ref_2120_; lean_object* v___x_2121_; lean_object* v_a_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2166_; 
v_ref_2120_ = lean_ctor_get(v___y_2117_, 2);
v___x_2121_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_2114_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_);
v_a_2122_ = lean_ctor_get(v___x_2121_, 0);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2121_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2124_ = v___x_2121_;
v_isShared_2125_ = v_isSharedCheck_2166_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_a_2122_);
lean_dec(v___x_2121_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2166_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2126_; lean_object* v_traceState_2127_; lean_object* v_env_2128_; lean_object* v_nextMacroScope_2129_; lean_object* v_ngen_2130_; lean_object* v_auxDeclNGen_2131_; lean_object* v_cache_2132_; lean_object* v_messages_2133_; lean_object* v_infoState_2134_; lean_object* v_snapshotTasks_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2165_; 
v___x_2126_ = lean_st_ref_take(v___y_2118_);
v_traceState_2127_ = lean_ctor_get(v___x_2126_, 4);
v_env_2128_ = lean_ctor_get(v___x_2126_, 0);
v_nextMacroScope_2129_ = lean_ctor_get(v___x_2126_, 1);
v_ngen_2130_ = lean_ctor_get(v___x_2126_, 2);
v_auxDeclNGen_2131_ = lean_ctor_get(v___x_2126_, 3);
v_cache_2132_ = lean_ctor_get(v___x_2126_, 5);
v_messages_2133_ = lean_ctor_get(v___x_2126_, 6);
v_infoState_2134_ = lean_ctor_get(v___x_2126_, 7);
v_snapshotTasks_2135_ = lean_ctor_get(v___x_2126_, 8);
v_isSharedCheck_2165_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2165_ == 0)
{
v___x_2137_ = v___x_2126_;
v_isShared_2138_ = v_isSharedCheck_2165_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_snapshotTasks_2135_);
lean_inc(v_infoState_2134_);
lean_inc(v_messages_2133_);
lean_inc(v_cache_2132_);
lean_inc(v_traceState_2127_);
lean_inc(v_auxDeclNGen_2131_);
lean_inc(v_ngen_2130_);
lean_inc(v_nextMacroScope_2129_);
lean_inc(v_env_2128_);
lean_dec(v___x_2126_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2165_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
uint64_t v_tid_2139_; lean_object* v_traces_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2164_; 
v_tid_2139_ = lean_ctor_get_uint64(v_traceState_2127_, sizeof(void*)*1);
v_traces_2140_ = lean_ctor_get(v_traceState_2127_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v_traceState_2127_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2142_ = v_traceState_2127_;
v_isShared_2143_ = v_isSharedCheck_2164_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_traces_2140_);
lean_dec(v_traceState_2127_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2164_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; double v___x_2146_; uint8_t v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2155_; 
v___x_2144_ = lean_box(0);
v___x_2145_ = lean_box(0);
v___x_2146_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0);
v___x_2147_ = 0;
v___x_2148_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1));
v___x_2149_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2149_, 0, v_cls_2113_);
lean_ctor_set(v___x_2149_, 1, v___x_2145_);
lean_ctor_set(v___x_2149_, 2, v___x_2148_);
lean_ctor_set_float(v___x_2149_, sizeof(void*)*3, v___x_2146_);
lean_ctor_set_float(v___x_2149_, sizeof(void*)*3 + 8, v___x_2146_);
lean_ctor_set_uint8(v___x_2149_, sizeof(void*)*3 + 16, v___x_2147_);
v___x_2150_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__2));
v___x_2151_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2149_);
lean_ctor_set(v___x_2151_, 1, v_a_2122_);
lean_ctor_set(v___x_2151_, 2, v___x_2150_);
lean_inc(v_ref_2120_);
v___x_2152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2152_, 0, v_ref_2120_);
lean_ctor_set(v___x_2152_, 1, v___x_2151_);
v___x_2153_ = l_Lean_PersistentArray_push___redArg(v_traces_2140_, v___x_2152_);
if (v_isShared_2143_ == 0)
{
lean_ctor_set(v___x_2142_, 0, v___x_2153_);
v___x_2155_ = v___x_2142_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v___x_2153_);
lean_ctor_set_uint64(v_reuseFailAlloc_2163_, sizeof(void*)*1, v_tid_2139_);
v___x_2155_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
lean_object* v___x_2157_; 
if (v_isShared_2138_ == 0)
{
lean_ctor_set(v___x_2137_, 4, v___x_2155_);
v___x_2157_ = v___x_2137_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_env_2128_);
lean_ctor_set(v_reuseFailAlloc_2162_, 1, v_nextMacroScope_2129_);
lean_ctor_set(v_reuseFailAlloc_2162_, 2, v_ngen_2130_);
lean_ctor_set(v_reuseFailAlloc_2162_, 3, v_auxDeclNGen_2131_);
lean_ctor_set(v_reuseFailAlloc_2162_, 4, v___x_2155_);
lean_ctor_set(v_reuseFailAlloc_2162_, 5, v_cache_2132_);
lean_ctor_set(v_reuseFailAlloc_2162_, 6, v_messages_2133_);
lean_ctor_set(v_reuseFailAlloc_2162_, 7, v_infoState_2134_);
lean_ctor_set(v_reuseFailAlloc_2162_, 8, v_snapshotTasks_2135_);
v___x_2157_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
lean_object* v___x_2158_; lean_object* v___x_2160_; 
v___x_2158_ = lean_st_ref_put(v___y_2118_, v___x_2157_);
if (v_isShared_2125_ == 0)
{
lean_ctor_set(v___x_2124_, 0, v___x_2144_);
v___x_2160_ = v___x_2124_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v___x_2144_);
v___x_2160_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
return v___x_2160_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg___boxed(lean_object* v_cls_2167_, lean_object* v_msg_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_){
_start:
{
lean_object* v_res_2174_; 
v_res_2174_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg(v_cls_2167_, v_msg_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_);
lean_dec(v___y_2172_);
lean_dec_ref(v___y_2171_);
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
return v_res_2174_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(lean_object* v_e_2175_, lean_object* v_as_2176_, size_t v_i_2177_, size_t v_stop_2178_){
_start:
{
uint8_t v___x_2183_; 
v___x_2183_ = lean_usize_dec_eq(v_i_2177_, v_stop_2178_);
if (v___x_2183_ == 0)
{
lean_object* v___x_2184_; lean_object* v_fnName_2185_; lean_object* v_recArgPos_2186_; uint8_t v___x_2187_; 
v___x_2184_ = lean_array_uget_borrowed(v_as_2176_, v_i_2177_);
v_fnName_2185_ = lean_ctor_get(v___x_2184_, 0);
v_recArgPos_2186_ = lean_ctor_get(v___x_2184_, 2);
lean_inc(v_recArgPos_2186_);
lean_inc(v_fnName_2185_);
v___x_2187_ = l_Lean_Elab_Structural_recArgHasLooseBVarsAt(v_fnName_2185_, v_recArgPos_2186_, v_e_2175_);
if (v___x_2187_ == 0)
{
goto v___jp_2179_;
}
else
{
if (v___x_2187_ == 0)
{
goto v___jp_2179_;
}
else
{
return v___x_2187_;
}
}
}
else
{
uint8_t v___x_2188_; 
v___x_2188_ = 0;
return v___x_2188_;
}
v___jp_2179_:
{
size_t v___x_2180_; size_t v___x_2181_; 
v___x_2180_ = ((size_t)1ULL);
v___x_2181_ = lean_usize_add(v_i_2177_, v___x_2180_);
v_i_2177_ = v___x_2181_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6___boxed(lean_object* v_e_2189_, lean_object* v_as_2190_, lean_object* v_i_2191_, lean_object* v_stop_2192_){
_start:
{
size_t v_i_boxed_2193_; size_t v_stop_boxed_2194_; uint8_t v_res_2195_; lean_object* v_r_2196_; 
v_i_boxed_2193_ = lean_unbox_usize(v_i_2191_);
lean_dec(v_i_2191_);
v_stop_boxed_2194_ = lean_unbox_usize(v_stop_2192_);
lean_dec(v_stop_2192_);
v_res_2195_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(v_e_2189_, v_as_2190_, v_i_boxed_2193_, v_stop_boxed_2194_);
lean_dec_ref(v_as_2190_);
lean_dec_ref(v_e_2189_);
v_r_2196_ = lean_box(v_res_2195_);
return v_r_2196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__3(lean_object* v___x_2197_, lean_object* v_____do__lift_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v_toCold_2205_; lean_object* v_options_2206_; uint8_t v_hasTrace_2207_; 
v_toCold_2205_ = lean_ctor_get(v___y_2202_, 0);
v_options_2206_ = lean_ctor_get(v_toCold_2205_, 2);
v_hasTrace_2207_ = lean_ctor_get_uint8(v_options_2206_, sizeof(void*)*1);
if (v_hasTrace_2207_ == 0)
{
lean_object* v___x_2208_; lean_object* v___x_2209_; 
lean_dec(v___x_2197_);
v___x_2208_ = lean_box(v_hasTrace_2207_);
v___x_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2208_);
return v___x_2209_;
}
else
{
lean_object* v___x_2210_; lean_object* v___x_2211_; uint8_t v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2210_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1));
v___x_2211_ = l_Lean_Name_append(v___x_2210_, v___x_2197_);
v___x_2212_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_2198_, v_options_2206_, v___x_2211_);
lean_dec(v___x_2211_);
v___x_2213_ = lean_box(v___x_2212_);
v___x_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2213_);
return v___x_2214_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__3___boxed(lean_object* v___x_2215_, lean_object* v_____do__lift_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_){
_start:
{
lean_object* v_res_2223_; 
v_res_2223_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__3(v___x_2215_, v_____do__lift_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
lean_dec(v___y_2219_);
lean_dec_ref(v___y_2218_);
lean_dec(v___y_2217_);
lean_dec_ref(v_____do__lift_2216_);
return v_res_2223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(lean_object* v_declName_2224_, lean_object* v___y_2225_){
_start:
{
lean_object* v___x_2227_; lean_object* v_env_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2227_ = lean_st_ref_get(v___y_2225_);
v_env_2228_ = lean_ctor_get(v___x_2227_, 0);
lean_inc_ref(v_env_2228_);
lean_dec(v___x_2227_);
v___x_2229_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_2228_, v_declName_2224_);
v___x_2230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2229_);
return v___x_2230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg___boxed(lean_object* v_declName_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(v_declName_2231_, v___y_2232_);
lean_dec(v___y_2232_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(lean_object* v_msg_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_){
_start:
{
lean_object* v___x_2242_; lean_object* v_toApplicative_2243_; lean_object* v_toFunctor_2244_; lean_object* v_toSeq_2245_; lean_object* v_toSeqLeft_2246_; lean_object* v_toSeqRight_2247_; lean_object* v___f_2248_; lean_object* v___f_2249_; lean_object* v___f_2250_; lean_object* v___f_2251_; lean_object* v___x_2252_; lean_object* v___f_2253_; lean_object* v___f_2254_; lean_object* v___f_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v_toApplicative_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2291_; 
v___x_2242_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1);
v_toApplicative_2243_ = lean_ctor_get(v___x_2242_, 0);
v_toFunctor_2244_ = lean_ctor_get(v_toApplicative_2243_, 0);
v_toSeq_2245_ = lean_ctor_get(v_toApplicative_2243_, 2);
v_toSeqLeft_2246_ = lean_ctor_get(v_toApplicative_2243_, 3);
v_toSeqRight_2247_ = lean_ctor_get(v_toApplicative_2243_, 4);
v___f_2248_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2));
v___f_2249_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2244_, 2);
v___f_2250_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2250_, 0, v_toFunctor_2244_);
v___f_2251_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2251_, 0, v_toFunctor_2244_);
v___x_2252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2252_, 0, v___f_2250_);
lean_ctor_set(v___x_2252_, 1, v___f_2251_);
lean_inc(v_toSeqRight_2247_);
v___f_2253_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2253_, 0, v_toSeqRight_2247_);
lean_inc(v_toSeqLeft_2246_);
v___f_2254_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2254_, 0, v_toSeqLeft_2246_);
lean_inc(v_toSeq_2245_);
v___f_2255_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2255_, 0, v_toSeq_2245_);
v___x_2256_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2252_);
lean_ctor_set(v___x_2256_, 1, v___f_2248_);
lean_ctor_set(v___x_2256_, 2, v___f_2255_);
lean_ctor_set(v___x_2256_, 3, v___f_2254_);
lean_ctor_set(v___x_2256_, 4, v___f_2253_);
v___x_2257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2256_);
lean_ctor_set(v___x_2257_, 1, v___f_2249_);
v___x_2258_ = l_StateRefT_x27_instMonad___redArg(v___x_2257_);
v_toApplicative_2259_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2291_ == 0)
{
lean_object* v_unused_2292_; 
v_unused_2292_ = lean_ctor_get(v___x_2258_, 1);
lean_dec(v_unused_2292_);
v___x_2261_ = v___x_2258_;
v_isShared_2262_ = v_isSharedCheck_2291_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_toApplicative_2259_);
lean_dec(v___x_2258_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2291_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v_toFunctor_2263_; lean_object* v_toSeq_2264_; lean_object* v_toSeqLeft_2265_; lean_object* v_toSeqRight_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2289_; 
v_toFunctor_2263_ = lean_ctor_get(v_toApplicative_2259_, 0);
v_toSeq_2264_ = lean_ctor_get(v_toApplicative_2259_, 2);
v_toSeqLeft_2265_ = lean_ctor_get(v_toApplicative_2259_, 3);
v_toSeqRight_2266_ = lean_ctor_get(v_toApplicative_2259_, 4);
v_isSharedCheck_2289_ = !lean_is_exclusive(v_toApplicative_2259_);
if (v_isSharedCheck_2289_ == 0)
{
lean_object* v_unused_2290_; 
v_unused_2290_ = lean_ctor_get(v_toApplicative_2259_, 1);
lean_dec(v_unused_2290_);
v___x_2268_ = v_toApplicative_2259_;
v_isShared_2269_ = v_isSharedCheck_2289_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_toSeqRight_2266_);
lean_inc(v_toSeqLeft_2265_);
lean_inc(v_toSeq_2264_);
lean_inc(v_toFunctor_2263_);
lean_dec(v_toApplicative_2259_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2289_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___f_2270_; lean_object* v___f_2271_; lean_object* v___f_2272_; lean_object* v___f_2273_; lean_object* v___x_2274_; lean_object* v___f_2275_; lean_object* v___f_2276_; lean_object* v___f_2277_; lean_object* v___x_2279_; 
v___f_2270_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4));
v___f_2271_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5));
lean_inc_ref(v_toFunctor_2263_);
v___f_2272_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2272_, 0, v_toFunctor_2263_);
v___f_2273_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2273_, 0, v_toFunctor_2263_);
v___x_2274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2274_, 0, v___f_2272_);
lean_ctor_set(v___x_2274_, 1, v___f_2273_);
v___f_2275_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2275_, 0, v_toSeqRight_2266_);
v___f_2276_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2276_, 0, v_toSeqLeft_2265_);
v___f_2277_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2277_, 0, v_toSeq_2264_);
if (v_isShared_2269_ == 0)
{
lean_ctor_set(v___x_2268_, 4, v___f_2275_);
lean_ctor_set(v___x_2268_, 3, v___f_2276_);
lean_ctor_set(v___x_2268_, 2, v___f_2277_);
lean_ctor_set(v___x_2268_, 1, v___f_2270_);
lean_ctor_set(v___x_2268_, 0, v___x_2274_);
v___x_2279_ = v___x_2268_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v___x_2274_);
lean_ctor_set(v_reuseFailAlloc_2288_, 1, v___f_2270_);
lean_ctor_set(v_reuseFailAlloc_2288_, 2, v___f_2277_);
lean_ctor_set(v_reuseFailAlloc_2288_, 3, v___f_2276_);
lean_ctor_set(v_reuseFailAlloc_2288_, 4, v___f_2275_);
v___x_2279_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
lean_object* v___x_2281_; 
if (v_isShared_2262_ == 0)
{
lean_ctor_set(v___x_2261_, 1, v___f_2271_);
lean_ctor_set(v___x_2261_, 0, v___x_2279_);
v___x_2281_ = v___x_2261_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v___x_2279_);
lean_ctor_set(v_reuseFailAlloc_2287_, 1, v___f_2271_);
v___x_2281_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_23519__overap_2285_; lean_object* v___x_2286_; 
v___x_2282_ = l_StateRefT_x27_instMonad___redArg(v___x_2281_);
v___x_2283_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_2284_ = l_instInhabitedOfMonad___redArg(v___x_2282_, v___x_2283_);
v___x_23519__overap_2285_ = lean_panic_fn_borrowed(v___x_2284_, v_msg_2235_);
lean_dec(v___x_2284_);
lean_inc(v___y_2240_);
lean_inc_ref(v___y_2239_);
lean_inc(v___y_2238_);
lean_inc_ref(v___y_2237_);
lean_inc(v___y_2236_);
v___x_2286_ = lean_apply_6(v___x_23519__overap_2285_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, lean_box(0));
return v___x_2286_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7___boxed(lean_object* v_msg_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(v_msg_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
lean_dec(v___y_2296_);
lean_dec_ref(v___y_2295_);
lean_dec(v___y_2294_);
return v_res_2300_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__0(void){
_start:
{
lean_object* v___x_2301_; 
v___x_2301_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2301_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1(void){
_start:
{
lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2302_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__0);
v___x_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2302_);
return v___x_2303_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__2(void){
_start:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; 
v___x_2304_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1);
v___x_2305_ = lean_unsigned_to_nat(0u);
v___x_2306_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2305_);
lean_ctor_set(v___x_2306_, 1, v___x_2305_);
lean_ctor_set(v___x_2306_, 2, v___x_2305_);
lean_ctor_set(v___x_2306_, 3, v___x_2305_);
lean_ctor_set(v___x_2306_, 4, v___x_2304_);
lean_ctor_set(v___x_2306_, 5, v___x_2304_);
lean_ctor_set(v___x_2306_, 6, v___x_2304_);
lean_ctor_set(v___x_2306_, 7, v___x_2304_);
lean_ctor_set(v___x_2306_, 8, v___x_2304_);
lean_ctor_set(v___x_2306_, 9, v___x_2304_);
lean_ctor_set(v___x_2306_, 10, v___x_2304_);
return v___x_2306_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__3(void){
_start:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2307_ = lean_unsigned_to_nat(32u);
v___x_2308_ = lean_mk_empty_array_with_capacity(v___x_2307_);
v___x_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2308_);
return v___x_2309_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__4(void){
_start:
{
size_t v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2310_ = ((size_t)5ULL);
v___x_2311_ = lean_unsigned_to_nat(0u);
v___x_2312_ = lean_unsigned_to_nat(32u);
v___x_2313_ = lean_mk_empty_array_with_capacity(v___x_2312_);
v___x_2314_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__3);
v___x_2315_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2315_, 0, v___x_2314_);
lean_ctor_set(v___x_2315_, 1, v___x_2313_);
lean_ctor_set(v___x_2315_, 2, v___x_2311_);
lean_ctor_set(v___x_2315_, 3, v___x_2311_);
lean_ctor_set_usize(v___x_2315_, 4, v___x_2310_);
return v___x_2315_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__5(void){
_start:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2316_ = lean_box(1);
v___x_2317_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__4);
v___x_2318_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1);
v___x_2319_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2318_);
lean_ctor_set(v___x_2319_, 1, v___x_2317_);
lean_ctor_set(v___x_2319_, 2, v___x_2316_);
return v___x_2319_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7(void){
_start:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2321_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__6));
v___x_2322_ = l_Lean_stringToMessageData(v___x_2321_);
return v___x_2322_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__9(void){
_start:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2324_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__8));
v___x_2325_ = l_Lean_stringToMessageData(v___x_2324_);
return v___x_2325_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__11(void){
_start:
{
lean_object* v___x_2327_; lean_object* v___x_2328_; 
v___x_2327_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__10));
v___x_2328_ = l_Lean_stringToMessageData(v___x_2327_);
return v___x_2328_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__13(void){
_start:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2330_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__12));
v___x_2331_ = l_Lean_stringToMessageData(v___x_2330_);
return v___x_2331_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__15(void){
_start:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2333_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__14));
v___x_2334_ = l_Lean_stringToMessageData(v___x_2333_);
return v___x_2334_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__17(void){
_start:
{
lean_object* v___x_2336_; lean_object* v___x_2337_; 
v___x_2336_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__16));
v___x_2337_ = l_Lean_stringToMessageData(v___x_2336_);
return v___x_2337_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__19(void){
_start:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2339_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__18));
v___x_2340_ = l_Lean_stringToMessageData(v___x_2339_);
return v___x_2340_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg(lean_object* v_msg_2341_, lean_object* v_declHint_2342_, lean_object* v___y_2343_){
_start:
{
lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v_env_2347_; uint8_t v___x_2348_; 
v___x_2345_ = l_Lean_instInhabitedName;
v___x_2346_ = lean_st_ref_get(v___y_2343_);
v_env_2347_ = lean_ctor_get(v___x_2346_, 0);
lean_inc_ref(v_env_2347_);
lean_dec(v___x_2346_);
v___x_2348_ = l_Lean_Name_isAnonymous(v_declHint_2342_);
if (v___x_2348_ == 0)
{
uint8_t v_isExporting_2349_; 
v_isExporting_2349_ = lean_ctor_get_uint8(v_env_2347_, sizeof(void*)*8);
if (v_isExporting_2349_ == 0)
{
lean_object* v___x_2350_; 
lean_dec_ref(v_env_2347_);
lean_dec(v_declHint_2342_);
v___x_2350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2350_, 0, v_msg_2341_);
return v___x_2350_;
}
else
{
lean_object* v___x_2351_; uint8_t v___x_2352_; 
lean_inc_ref(v_env_2347_);
v___x_2351_ = l_Lean_Environment_setExporting(v_env_2347_, v___x_2348_);
lean_inc(v_declHint_2342_);
lean_inc_ref(v___x_2351_);
v___x_2352_ = l_Lean_Environment_contains(v___x_2351_, v_declHint_2342_, v_isExporting_2349_);
if (v___x_2352_ == 0)
{
lean_object* v___x_2353_; 
lean_dec_ref(v___x_2351_);
lean_dec_ref(v_env_2347_);
lean_dec(v_declHint_2342_);
v___x_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2353_, 0, v_msg_2341_);
return v___x_2353_;
}
else
{
lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v_c_2359_; lean_object* v___x_2360_; 
v___x_2354_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__2);
v___x_2355_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__5);
v___x_2356_ = l_Lean_Options_empty;
v___x_2357_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2357_, 0, v___x_2351_);
lean_ctor_set(v___x_2357_, 1, v___x_2354_);
lean_ctor_set(v___x_2357_, 2, v___x_2355_);
lean_ctor_set(v___x_2357_, 3, v___x_2356_);
lean_inc(v_declHint_2342_);
v___x_2358_ = l_Lean_MessageData_ofConstName(v_declHint_2342_, v___x_2348_);
v_c_2359_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2359_, 0, v___x_2357_);
lean_ctor_set(v_c_2359_, 1, v___x_2358_);
v___x_2360_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2347_, v_declHint_2342_);
if (lean_obj_tag(v___x_2360_) == 0)
{
lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; 
lean_dec_ref(v_env_2347_);
lean_dec(v_declHint_2342_);
v___x_2361_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7);
v___x_2362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2361_);
lean_ctor_set(v___x_2362_, 1, v_c_2359_);
v___x_2363_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__9);
v___x_2364_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2364_, 0, v___x_2362_);
lean_ctor_set(v___x_2364_, 1, v___x_2363_);
v___x_2365_ = l_Lean_MessageData_note(v___x_2364_);
v___x_2366_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2366_, 0, v_msg_2341_);
lean_ctor_set(v___x_2366_, 1, v___x_2365_);
v___x_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2366_);
return v___x_2367_;
}
else
{
lean_object* v_val_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2402_; 
v_val_2368_ = lean_ctor_get(v___x_2360_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2370_ = v___x_2360_;
v_isShared_2371_ = v_isSharedCheck_2402_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_val_2368_);
lean_dec(v___x_2360_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2402_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v_mod_2374_; uint8_t v___x_2375_; 
v___x_2372_ = l_Lean_Environment_header(v_env_2347_);
lean_dec_ref(v_env_2347_);
v___x_2373_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2372_);
lean_dec_ref(v___x_2372_);
v_mod_2374_ = lean_array_get(v___x_2345_, v___x_2373_, v_val_2368_);
lean_dec(v_val_2368_);
lean_dec_ref(v___x_2373_);
v___x_2375_ = l_Lean_isPrivateName(v_declHint_2342_);
lean_dec(v_declHint_2342_);
if (v___x_2375_ == 0)
{
lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2387_; 
v___x_2376_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__11);
v___x_2377_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2376_);
lean_ctor_set(v___x_2377_, 1, v_c_2359_);
v___x_2378_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__13);
v___x_2379_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2379_, 0, v___x_2377_);
lean_ctor_set(v___x_2379_, 1, v___x_2378_);
v___x_2380_ = l_Lean_MessageData_ofName(v_mod_2374_);
v___x_2381_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2379_);
lean_ctor_set(v___x_2381_, 1, v___x_2380_);
v___x_2382_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__15);
v___x_2383_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2383_, 0, v___x_2381_);
lean_ctor_set(v___x_2383_, 1, v___x_2382_);
v___x_2384_ = l_Lean_MessageData_note(v___x_2383_);
v___x_2385_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2385_, 0, v_msg_2341_);
lean_ctor_set(v___x_2385_, 1, v___x_2384_);
if (v_isShared_2371_ == 0)
{
lean_ctor_set_tag(v___x_2370_, 0);
lean_ctor_set(v___x_2370_, 0, v___x_2385_);
v___x_2387_ = v___x_2370_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v___x_2385_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
else
{
lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2400_; 
v___x_2389_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7);
v___x_2390_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2390_, 0, v___x_2389_);
lean_ctor_set(v___x_2390_, 1, v_c_2359_);
v___x_2391_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__17);
v___x_2392_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2392_, 0, v___x_2390_);
lean_ctor_set(v___x_2392_, 1, v___x_2391_);
v___x_2393_ = l_Lean_MessageData_ofName(v_mod_2374_);
v___x_2394_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2392_);
lean_ctor_set(v___x_2394_, 1, v___x_2393_);
v___x_2395_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__19);
v___x_2396_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2394_);
lean_ctor_set(v___x_2396_, 1, v___x_2395_);
v___x_2397_ = l_Lean_MessageData_note(v___x_2396_);
v___x_2398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2398_, 0, v_msg_2341_);
lean_ctor_set(v___x_2398_, 1, v___x_2397_);
if (v_isShared_2371_ == 0)
{
lean_ctor_set_tag(v___x_2370_, 0);
lean_ctor_set(v___x_2370_, 0, v___x_2398_);
v___x_2400_ = v___x_2370_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v___x_2398_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
return v___x_2400_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2403_; 
lean_dec_ref(v_env_2347_);
lean_dec(v_declHint_2342_);
v___x_2403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2403_, 0, v_msg_2341_);
return v___x_2403_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___boxed(lean_object* v_msg_2404_, lean_object* v_declHint_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_){
_start:
{
lean_object* v_res_2408_; 
v_res_2408_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg(v_msg_2404_, v_declHint_2405_, v___y_2406_);
lean_dec(v___y_2406_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18(lean_object* v_msg_2409_, lean_object* v_declHint_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_){
_start:
{
lean_object* v___x_2417_; lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2427_; 
v___x_2417_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg(v_msg_2409_, v_declHint_2410_, v___y_2415_);
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2420_ = v___x_2417_;
v_isShared_2421_ = v_isSharedCheck_2427_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2417_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2427_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2425_; 
v___x_2422_ = l_Lean_unknownIdentifierMessageTag;
v___x_2423_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2422_);
lean_ctor_set(v___x_2423_, 1, v_a_2418_);
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 0, v___x_2423_);
v___x_2425_ = v___x_2420_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v___x_2423_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18___boxed(lean_object* v_msg_2428_, lean_object* v_declHint_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_){
_start:
{
lean_object* v_res_2436_; 
v_res_2436_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18(v_msg_2428_, v_declHint_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_);
lean_dec(v___y_2434_);
lean_dec_ref(v___y_2433_);
lean_dec(v___y_2432_);
lean_dec_ref(v___y_2431_);
lean_dec(v___y_2430_);
return v_res_2436_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(lean_object* v_msg_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_){
_start:
{
lean_object* v_ref_2443_; lean_object* v___x_2444_; lean_object* v_a_2445_; lean_object* v___x_2447_; uint8_t v_isShared_2448_; uint8_t v_isSharedCheck_2453_; 
v_ref_2443_ = lean_ctor_get(v___y_2440_, 2);
v___x_2444_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_);
v_a_2445_ = lean_ctor_get(v___x_2444_, 0);
v_isSharedCheck_2453_ = !lean_is_exclusive(v___x_2444_);
if (v_isSharedCheck_2453_ == 0)
{
v___x_2447_ = v___x_2444_;
v_isShared_2448_ = v_isSharedCheck_2453_;
goto v_resetjp_2446_;
}
else
{
lean_inc(v_a_2445_);
lean_dec(v___x_2444_);
v___x_2447_ = lean_box(0);
v_isShared_2448_ = v_isSharedCheck_2453_;
goto v_resetjp_2446_;
}
v_resetjp_2446_:
{
lean_object* v___x_2449_; lean_object* v___x_2451_; 
lean_inc(v_ref_2443_);
v___x_2449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2449_, 0, v_ref_2443_);
lean_ctor_set(v___x_2449_, 1, v_a_2445_);
if (v_isShared_2448_ == 0)
{
lean_ctor_set_tag(v___x_2447_, 1);
lean_ctor_set(v___x_2447_, 0, v___x_2449_);
v___x_2451_ = v___x_2447_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v___x_2449_);
v___x_2451_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
return v___x_2451_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg___boxed(lean_object* v_msg_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_){
_start:
{
lean_object* v_res_2460_; 
v_res_2460_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v_msg_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_);
lean_dec(v___y_2458_);
lean_dec_ref(v___y_2457_);
lean_dec(v___y_2456_);
lean_dec_ref(v___y_2455_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___redArg(lean_object* v_ref_2461_, lean_object* v_msg_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_){
_start:
{
lean_object* v_toCold_2469_; lean_object* v_currRecDepth_2470_; lean_object* v_ref_2471_; uint8_t v_diag_2472_; uint8_t v_suppressElabErrors_2473_; lean_object* v_ref_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; 
v_toCold_2469_ = lean_ctor_get(v___y_2466_, 0);
v_currRecDepth_2470_ = lean_ctor_get(v___y_2466_, 1);
v_ref_2471_ = lean_ctor_get(v___y_2466_, 2);
v_diag_2472_ = lean_ctor_get_uint8(v___y_2466_, sizeof(void*)*3);
v_suppressElabErrors_2473_ = lean_ctor_get_uint8(v___y_2466_, sizeof(void*)*3 + 1);
v_ref_2474_ = l_Lean_replaceRef(v_ref_2461_, v_ref_2471_);
lean_inc(v_currRecDepth_2470_);
lean_inc_ref(v_toCold_2469_);
v___x_2475_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2475_, 0, v_toCold_2469_);
lean_ctor_set(v___x_2475_, 1, v_currRecDepth_2470_);
lean_ctor_set(v___x_2475_, 2, v_ref_2474_);
lean_ctor_set_uint8(v___x_2475_, sizeof(void*)*3, v_diag_2472_);
lean_ctor_set_uint8(v___x_2475_, sizeof(void*)*3 + 1, v_suppressElabErrors_2473_);
v___x_2476_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v_msg_2462_, v___y_2464_, v___y_2465_, v___x_2475_, v___y_2467_);
lean_dec_ref_known(v___x_2475_, 3);
return v___x_2476_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___redArg___boxed(lean_object* v_ref_2477_, lean_object* v_msg_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_){
_start:
{
lean_object* v_res_2485_; 
v_res_2485_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___redArg(v_ref_2477_, v_msg_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_);
lean_dec(v___y_2483_);
lean_dec_ref(v___y_2482_);
lean_dec(v___y_2481_);
lean_dec_ref(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec(v_ref_2477_);
return v_res_2485_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___redArg(lean_object* v_ref_2486_, lean_object* v_msg_2487_, lean_object* v_declHint_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_){
_start:
{
lean_object* v___x_2495_; lean_object* v_a_2496_; lean_object* v___x_2497_; 
v___x_2495_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18(v_msg_2487_, v_declHint_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_);
v_a_2496_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_a_2496_);
lean_dec_ref(v___x_2495_);
v___x_2497_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___redArg(v_ref_2486_, v_a_2496_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_);
return v___x_2497_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___redArg___boxed(lean_object* v_ref_2498_, lean_object* v_msg_2499_, lean_object* v_declHint_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_){
_start:
{
lean_object* v_res_2507_; 
v_res_2507_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___redArg(v_ref_2498_, v_msg_2499_, v_declHint_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_);
lean_dec(v___y_2505_);
lean_dec_ref(v___y_2504_);
lean_dec(v___y_2503_);
lean_dec_ref(v___y_2502_);
lean_dec(v___y_2501_);
lean_dec(v_ref_2498_);
return v_res_2507_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__1(void){
_start:
{
lean_object* v___x_2509_; lean_object* v___x_2510_; 
v___x_2509_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__0));
v___x_2510_ = l_Lean_stringToMessageData(v___x_2509_);
return v___x_2510_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__3(void){
_start:
{
lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2512_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__2));
v___x_2513_ = l_Lean_stringToMessageData(v___x_2512_);
return v___x_2513_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg(lean_object* v_ref_2514_, lean_object* v_constName_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_){
_start:
{
lean_object* v___x_2522_; uint8_t v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2522_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__1);
v___x_2523_ = 0;
lean_inc(v_constName_2515_);
v___x_2524_ = l_Lean_MessageData_ofConstName(v_constName_2515_, v___x_2523_);
v___x_2525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2525_, 0, v___x_2522_);
lean_ctor_set(v___x_2525_, 1, v___x_2524_);
v___x_2526_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__3);
v___x_2527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2525_);
lean_ctor_set(v___x_2527_, 1, v___x_2526_);
v___x_2528_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___redArg(v_ref_2514_, v___x_2527_, v_constName_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_);
return v___x_2528_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___boxed(lean_object* v_ref_2529_, lean_object* v_constName_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_){
_start:
{
lean_object* v_res_2537_; 
v_res_2537_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg(v_ref_2529_, v_constName_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_);
lean_dec(v___y_2535_);
lean_dec_ref(v___y_2534_);
lean_dec(v___y_2533_);
lean_dec_ref(v___y_2532_);
lean_dec(v___y_2531_);
lean_dec(v_ref_2529_);
return v_res_2537_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___redArg(lean_object* v_constName_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_){
_start:
{
lean_object* v_ref_2545_; lean_object* v___x_2546_; 
v_ref_2545_ = lean_ctor_get(v___y_2542_, 2);
v___x_2546_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg(v_ref_2545_, v_constName_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
return v___x_2546_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___redArg___boxed(lean_object* v_constName_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___redArg(v_constName_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec(v___y_2550_);
lean_dec_ref(v___y_2549_);
lean_dec(v___y_2548_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(lean_object* v_constName_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_){
_start:
{
lean_object* v___x_2562_; lean_object* v_env_2563_; uint8_t v___x_2564_; lean_object* v___x_2565_; 
v___x_2562_ = lean_st_ref_get(v___y_2560_);
v_env_2563_ = lean_ctor_get(v___x_2562_, 0);
lean_inc_ref(v_env_2563_);
lean_dec(v___x_2562_);
v___x_2564_ = 0;
lean_inc(v_constName_2555_);
v___x_2565_ = l_Lean_Environment_find_x3f(v_env_2563_, v_constName_2555_, v___x_2564_);
if (lean_obj_tag(v___x_2565_) == 0)
{
lean_object* v___x_2566_; 
v___x_2566_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___redArg(v_constName_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_);
return v___x_2566_;
}
else
{
lean_object* v_val_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
lean_dec(v_constName_2555_);
v_val_2567_ = lean_ctor_get(v___x_2565_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2565_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___x_2565_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_val_2567_);
lean_dec(v___x_2565_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
lean_ctor_set_tag(v___x_2569_, 0);
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_val_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6___boxed(lean_object* v_constName_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_){
_start:
{
lean_object* v_res_2582_; 
v_res_2582_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(v_constName_2575_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_);
lean_dec(v___y_2580_);
lean_dec_ref(v___y_2579_);
lean_dec(v___y_2578_);
lean_dec_ref(v___y_2577_);
lean_dec(v___y_2576_);
return v_res_2582_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3(void){
_start:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; 
v___x_2586_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2));
v___x_2587_ = lean_unsigned_to_nat(53u);
v___x_2588_ = lean_unsigned_to_nat(62u);
v___x_2589_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1));
v___x_2590_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0));
v___x_2591_ = l_mkPanicMessageWithDecl(v___x_2590_, v___x_2589_, v___x_2588_, v___x_2587_, v___x_2586_);
return v___x_2591_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9(size_t v_sz_2592_, size_t v_i_2593_, lean_object* v_bs_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_){
_start:
{
uint8_t v___x_2601_; 
v___x_2601_ = lean_usize_dec_lt(v_i_2593_, v_sz_2592_);
if (v___x_2601_ == 0)
{
lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2602_ = l_unsafeCast___redArg(v_bs_2594_);
lean_dec_ref(v_bs_2594_);
v___x_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2603_, 0, v___x_2602_);
return v___x_2603_;
}
else
{
lean_object* v_v_2604_; lean_object* v___x_2605_; lean_object* v_bs_x27_2606_; lean_object* v_a_2608_; lean_object* v___x_2614_; lean_object* v___x_2615_; 
v_v_2604_ = lean_array_uget(v_bs_2594_, v_i_2593_);
v___x_2605_ = lean_unsigned_to_nat(0u);
v_bs_x27_2606_ = lean_array_uset(v_bs_2594_, v_i_2593_, v___x_2605_);
v___x_2614_ = l_unsafeCast___redArg(v_v_2604_);
lean_dec(v_v_2604_);
v___x_2615_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(v___x_2614_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_a_2616_);
lean_dec_ref_known(v___x_2615_, 1);
if (lean_obj_tag(v_a_2616_) == 6)
{
lean_object* v_val_2617_; lean_object* v_numFields_2618_; uint8_t v___x_2619_; lean_object* v___x_2620_; 
v_val_2617_ = lean_ctor_get(v_a_2616_, 0);
lean_inc_ref(v_val_2617_);
lean_dec_ref_known(v_a_2616_, 1);
v_numFields_2618_ = lean_ctor_get(v_val_2617_, 4);
lean_inc(v_numFields_2618_);
lean_dec_ref(v_val_2617_);
v___x_2619_ = 0;
v___x_2620_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2620_, 0, v_numFields_2618_);
lean_ctor_set(v___x_2620_, 1, v___x_2605_);
lean_ctor_set_uint8(v___x_2620_, sizeof(void*)*2, v___x_2619_);
v_a_2608_ = v___x_2620_;
goto v___jp_2607_;
}
else
{
lean_object* v___x_2621_; lean_object* v___x_2622_; 
lean_dec(v_a_2616_);
v___x_2621_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3);
v___x_2622_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(v___x_2621_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_);
if (lean_obj_tag(v___x_2622_) == 0)
{
lean_object* v_a_2623_; 
v_a_2623_ = lean_ctor_get(v___x_2622_, 0);
lean_inc(v_a_2623_);
lean_dec_ref_known(v___x_2622_, 1);
v_a_2608_ = v_a_2623_;
goto v___jp_2607_;
}
else
{
lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2631_; 
lean_dec_ref(v_bs_x27_2606_);
v_a_2624_ = lean_ctor_get(v___x_2622_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2622_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2626_ = v___x_2622_;
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_dec(v___x_2622_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2629_; 
if (v_isShared_2627_ == 0)
{
v___x_2629_ = v___x_2626_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_a_2624_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
}
}
}
else
{
lean_object* v_a_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2639_; 
lean_dec_ref(v_bs_x27_2606_);
v_a_2632_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2634_ = v___x_2615_;
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_a_2632_);
lean_dec(v___x_2615_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v___x_2637_; 
if (v_isShared_2635_ == 0)
{
v___x_2637_ = v___x_2634_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v_a_2632_);
v___x_2637_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
return v___x_2637_;
}
}
}
v___jp_2607_:
{
size_t v___x_2609_; size_t v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2609_ = ((size_t)1ULL);
v___x_2610_ = lean_usize_add(v_i_2593_, v___x_2609_);
v___x_2611_ = l_unsafeCast___redArg(v_a_2608_);
lean_dec_ref(v_a_2608_);
v___x_2612_ = lean_array_uset(v_bs_x27_2606_, v_i_2593_, v___x_2611_);
v_i_2593_ = v___x_2610_;
v_bs_2594_ = v___x_2612_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___boxed(lean_object* v_sz_2640_, lean_object* v_i_2641_, lean_object* v_bs_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_){
_start:
{
size_t v_sz_boxed_2649_; size_t v_i_boxed_2650_; lean_object* v_res_2651_; 
v_sz_boxed_2649_ = lean_unbox_usize(v_sz_2640_);
lean_dec(v_sz_2640_);
v_i_boxed_2650_ = lean_unbox_usize(v_i_2641_);
lean_dec(v_i_2641_);
v_res_2651_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9(v_sz_boxed_2649_, v_i_boxed_2650_, v_bs_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
lean_dec(v___y_2647_);
lean_dec_ref(v___y_2646_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
lean_dec(v___y_2643_);
return v_res_2651_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0(void){
_start:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; 
v___x_2652_ = lean_box(0);
v___x_2653_ = lean_unsigned_to_nat(16u);
v___x_2654_ = lean_mk_array(v___x_2653_, v___x_2652_);
return v___x_2654_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1(void){
_start:
{
lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2655_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0);
v___x_2656_ = lean_unsigned_to_nat(0u);
v___x_2657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2656_);
lean_ctor_set(v___x_2657_, 1, v___x_2655_);
return v___x_2657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(lean_object* v_e_2662_, uint8_t v_alsoCasesOn_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_){
_start:
{
uint8_t v___x_2673_; 
v___x_2673_ = l_Lean_Expr_isApp(v_e_2662_);
if (v___x_2673_ == 0)
{
lean_object* v___x_2674_; lean_object* v___x_2675_; 
lean_dec_ref(v_e_2662_);
v___x_2674_ = lean_box(0);
v___x_2675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2674_);
return v___x_2675_;
}
else
{
lean_object* v___x_2676_; 
v___x_2676_ = l_Lean_Expr_getAppFn(v_e_2662_);
if (lean_obj_tag(v___x_2676_) == 4)
{
lean_object* v_declName_2677_; lean_object* v_us_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v_a_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2837_; 
v_declName_2677_ = lean_ctor_get(v___x_2676_, 0);
lean_inc_n(v_declName_2677_, 2);
v_us_2678_ = lean_ctor_get(v___x_2676_, 1);
lean_inc(v_us_2678_);
lean_dec_ref_known(v___x_2676_, 2);
v___x_2679_ = l_Lean_instInhabitedExpr;
v___x_2680_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(v_declName_2677_, v___y_2668_);
v_a_2681_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2837_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2683_ = v___x_2680_;
v_isShared_2684_ = v_isSharedCheck_2837_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_a_2681_);
lean_dec(v___x_2680_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2837_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
if (lean_obj_tag(v_a_2681_) == 1)
{
lean_object* v_val_2685_; lean_object* v___x_2687_; uint8_t v_isShared_2688_; uint8_t v_isSharedCheck_2726_; 
v_val_2685_ = lean_ctor_get(v_a_2681_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v_a_2681_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2687_ = v_a_2681_;
v_isShared_2688_ = v_isSharedCheck_2726_;
goto v_resetjp_2686_;
}
else
{
lean_inc(v_val_2685_);
lean_dec(v_a_2681_);
v___x_2687_ = lean_box(0);
v_isShared_2688_ = v_isSharedCheck_2726_;
goto v_resetjp_2686_;
}
v_resetjp_2686_:
{
lean_object* v_dummy_2689_; lean_object* v_nargs_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v_args_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; uint8_t v___x_2697_; 
v_dummy_2689_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1);
v_nargs_2690_ = l_Lean_Expr_getAppNumArgs(v_e_2662_);
lean_inc(v_nargs_2690_);
v___x_2691_ = lean_mk_array(v_nargs_2690_, v_dummy_2689_);
v___x_2692_ = lean_unsigned_to_nat(1u);
v___x_2693_ = lean_nat_sub(v_nargs_2690_, v___x_2692_);
lean_dec(v_nargs_2690_);
v_args_2694_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2662_, v___x_2691_, v___x_2693_);
v___x_2695_ = lean_array_get_size(v_args_2694_);
v___x_2696_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_2685_);
v___x_2697_ = lean_nat_dec_lt(v___x_2695_, v___x_2696_);
lean_dec(v___x_2696_);
if (v___x_2697_ == 0)
{
lean_object* v_numParams_2698_; lean_object* v_numDiscrs_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2717_; 
v_numParams_2698_ = lean_ctor_get(v_val_2685_, 0);
v_numDiscrs_2699_ = lean_ctor_get(v_val_2685_, 1);
v___x_2700_ = lean_array_mk(v_us_2678_);
v___x_2701_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2698_);
v___x_2702_ = l_Array_extract___redArg(v_args_2694_, v___x_2701_, v_numParams_2698_);
v___x_2703_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_2685_);
v___x_2704_ = lean_array_get(v___x_2679_, v_args_2694_, v___x_2703_);
lean_dec(v___x_2703_);
v___x_2705_ = lean_nat_add(v_numParams_2698_, v___x_2692_);
v___x_2706_ = lean_nat_add(v___x_2705_, v_numDiscrs_2699_);
lean_inc(v___x_2706_);
lean_inc_ref_n(v_args_2694_, 2);
v___x_2707_ = l_Array_toSubarray___redArg(v_args_2694_, v___x_2705_, v___x_2706_);
v___x_2708_ = l_Subarray_copy___redArg(v___x_2707_);
v___x_2709_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_2685_);
v___x_2710_ = lean_nat_add(v___x_2706_, v___x_2709_);
lean_dec(v___x_2709_);
lean_inc(v___x_2710_);
v___x_2711_ = l_Array_toSubarray___redArg(v_args_2694_, v___x_2706_, v___x_2710_);
v___x_2712_ = l_Subarray_copy___redArg(v___x_2711_);
v___x_2713_ = l_Array_toSubarray___redArg(v_args_2694_, v___x_2710_, v___x_2695_);
v___x_2714_ = l_Subarray_copy___redArg(v___x_2713_);
v___x_2715_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2715_, 0, v_val_2685_);
lean_ctor_set(v___x_2715_, 1, v_declName_2677_);
lean_ctor_set(v___x_2715_, 2, v___x_2700_);
lean_ctor_set(v___x_2715_, 3, v___x_2702_);
lean_ctor_set(v___x_2715_, 4, v___x_2704_);
lean_ctor_set(v___x_2715_, 5, v___x_2708_);
lean_ctor_set(v___x_2715_, 6, v___x_2712_);
lean_ctor_set(v___x_2715_, 7, v___x_2714_);
if (v_isShared_2688_ == 0)
{
lean_ctor_set(v___x_2687_, 0, v___x_2715_);
v___x_2717_ = v___x_2687_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v___x_2715_);
v___x_2717_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
lean_object* v___x_2719_; 
if (v_isShared_2684_ == 0)
{
lean_ctor_set(v___x_2683_, 0, v___x_2717_);
v___x_2719_ = v___x_2683_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v___x_2717_);
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
lean_object* v___x_2722_; lean_object* v___x_2724_; 
lean_dec_ref(v_args_2694_);
lean_del_object(v___x_2687_);
lean_dec(v_val_2685_);
lean_dec(v_us_2678_);
lean_dec(v_declName_2677_);
v___x_2722_ = lean_box(0);
if (v_isShared_2684_ == 0)
{
lean_ctor_set(v___x_2683_, 0, v___x_2722_);
v___x_2724_ = v___x_2683_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v___x_2722_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
return v___x_2724_;
}
}
}
}
else
{
lean_object* v___x_2727_; 
lean_del_object(v___x_2683_);
lean_dec(v_a_2681_);
v___x_2727_ = lean_st_ref_get(v___y_2668_);
if (v_alsoCasesOn_2663_ == 0)
{
lean_dec(v___x_2727_);
lean_dec(v_us_2678_);
lean_dec(v_declName_2677_);
lean_dec_ref(v_e_2662_);
goto v___jp_2670_;
}
else
{
lean_object* v_env_2728_; uint8_t v___x_2729_; 
v_env_2728_ = lean_ctor_get(v___x_2727_, 0);
lean_inc_ref(v_env_2728_);
lean_dec(v___x_2727_);
lean_inc(v_declName_2677_);
v___x_2729_ = l_Lean_isCasesOnRecursor(v_env_2728_, v_declName_2677_);
if (v___x_2729_ == 0)
{
lean_dec(v_us_2678_);
lean_dec(v_declName_2677_);
lean_dec_ref(v_e_2662_);
goto v___jp_2670_;
}
else
{
lean_object* v_indName_2730_; lean_object* v___x_2731_; 
v_indName_2730_ = l_Lean_Name_getPrefix(v_declName_2677_);
v___x_2731_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(v_indName_2730_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_);
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2828_; 
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2828_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2828_ == 0)
{
v___x_2734_ = v___x_2731_;
v_isShared_2735_ = v_isSharedCheck_2828_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v___x_2731_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2828_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
if (lean_obj_tag(v_a_2732_) == 5)
{
lean_object* v_val_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2823_; 
v_val_2736_ = lean_ctor_get(v_a_2732_, 0);
v_isSharedCheck_2823_ = !lean_is_exclusive(v_a_2732_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2738_ = v_a_2732_;
v_isShared_2739_ = v_isSharedCheck_2823_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_val_2736_);
lean_dec(v_a_2732_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2823_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v_toConstantVal_2740_; lean_object* v_numParams_2741_; lean_object* v_numIndices_2742_; lean_object* v_ctors_2743_; lean_object* v_nargs_2744_; lean_object* v_dummy_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v_args_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; uint8_t v___x_2756_; 
v_toConstantVal_2740_ = lean_ctor_get(v_val_2736_, 0);
lean_inc_ref(v_toConstantVal_2740_);
v_numParams_2741_ = lean_ctor_get(v_val_2736_, 1);
lean_inc(v_numParams_2741_);
v_numIndices_2742_ = lean_ctor_get(v_val_2736_, 2);
lean_inc(v_numIndices_2742_);
v_ctors_2743_ = lean_ctor_get(v_val_2736_, 4);
lean_inc(v_ctors_2743_);
v_nargs_2744_ = l_Lean_Expr_getAppNumArgs(v_e_2662_);
v_dummy_2745_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1);
lean_inc(v_nargs_2744_);
v___x_2746_ = lean_mk_array(v_nargs_2744_, v_dummy_2745_);
v___x_2747_ = lean_unsigned_to_nat(1u);
v___x_2748_ = lean_nat_sub(v_nargs_2744_, v___x_2747_);
lean_dec(v_nargs_2744_);
v_args_2749_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2662_, v___x_2746_, v___x_2748_);
v___x_2750_ = lean_nat_add(v_numParams_2741_, v___x_2747_);
v___x_2751_ = lean_nat_add(v___x_2750_, v_numIndices_2742_);
v___x_2752_ = lean_nat_add(v___x_2751_, v___x_2747_);
lean_dec(v___x_2751_);
v___x_2753_ = l_Lean_InductiveVal_numCtors(v_val_2736_);
lean_dec_ref(v_val_2736_);
v___x_2754_ = lean_nat_add(v___x_2752_, v___x_2753_);
lean_dec(v___x_2753_);
v___x_2755_ = lean_array_get_size(v_args_2749_);
v___x_2756_ = lean_nat_dec_le(v___x_2754_, v___x_2755_);
if (v___x_2756_ == 0)
{
lean_object* v___x_2757_; lean_object* v___x_2759_; 
lean_dec(v___x_2754_);
lean_dec(v___x_2752_);
lean_dec(v___x_2750_);
lean_dec_ref(v_args_2749_);
lean_dec(v_ctors_2743_);
lean_dec(v_numIndices_2742_);
lean_dec(v_numParams_2741_);
lean_dec_ref(v_toConstantVal_2740_);
lean_del_object(v___x_2738_);
lean_dec(v_us_2678_);
lean_dec(v_declName_2677_);
v___x_2757_ = lean_box(0);
if (v_isShared_2735_ == 0)
{
lean_ctor_set(v___x_2734_, 0, v___x_2757_);
v___x_2759_ = v___x_2734_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v___x_2757_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
return v___x_2759_;
}
}
else
{
lean_object* v___x_2761_; lean_object* v_params_2762_; lean_object* v_motive_2763_; lean_object* v_discrs_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v_discrInfos_2767_; lean_object* v_alts_2768_; lean_object* v___y_2770_; lean_object* v___y_2771_; lean_object* v_lower_2814_; lean_object* v_upper_2815_; uint8_t v___x_2822_; 
lean_del_object(v___x_2734_);
v___x_2761_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2741_);
lean_inc_ref_n(v_args_2749_, 3);
v_params_2762_ = l_Array_toSubarray___redArg(v_args_2749_, v___x_2761_, v_numParams_2741_);
v_motive_2763_ = lean_array_get(v___x_2679_, v_args_2749_, v_numParams_2741_);
lean_dec(v_numParams_2741_);
lean_inc(v___x_2752_);
v_discrs_2764_ = l_Array_toSubarray___redArg(v_args_2749_, v___x_2750_, v___x_2752_);
v___x_2765_ = lean_nat_add(v_numIndices_2742_, v___x_2747_);
lean_dec(v_numIndices_2742_);
v___x_2766_ = lean_box(0);
v_discrInfos_2767_ = lean_mk_array(v___x_2765_, v___x_2766_);
lean_inc(v___x_2754_);
v_alts_2768_ = l_Array_toSubarray___redArg(v_args_2749_, v___x_2752_, v___x_2754_);
v___x_2822_ = lean_nat_dec_le(v___x_2754_, v___x_2761_);
if (v___x_2822_ == 0)
{
v_lower_2814_ = v___x_2754_;
v_upper_2815_ = v___x_2755_;
goto v___jp_2813_;
}
else
{
lean_dec(v___x_2754_);
v_lower_2814_ = v___x_2761_;
v_upper_2815_ = v___x_2755_;
goto v___jp_2813_;
}
v___jp_2769_:
{
lean_object* v___x_2772_; size_t v_sz_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_26691__overap_2778_; lean_object* v___x_2779_; 
v___x_2772_ = lean_array_mk(v_ctors_2743_);
v_sz_2773_ = lean_array_size(v___x_2772_);
v___x_2774_ = l_unsafeCast___redArg(v___x_2772_);
lean_dec_ref(v___x_2772_);
v___x_2775_ = lean_box_usize(v_sz_2773_);
v___x_2776_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___boxed__const__1));
v___x_2777_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___boxed), 9, 3);
lean_closure_set(v___x_2777_, 0, v___x_2775_);
lean_closure_set(v___x_2777_, 1, v___x_2776_);
lean_closure_set(v___x_2777_, 2, v___x_2774_);
v___x_26691__overap_2778_ = l_unsafeCast___redArg(v___x_2777_);
lean_dec_ref(v___x_2777_);
lean_inc(v___y_2668_);
lean_inc_ref(v___y_2667_);
lean_inc(v___y_2666_);
lean_inc_ref(v___y_2665_);
lean_inc(v___y_2664_);
v___x_2779_ = lean_apply_6(v___x_26691__overap_2778_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_, lean_box(0));
if (lean_obj_tag(v___x_2779_) == 0)
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2804_; 
v_a_2780_ = lean_ctor_get(v___x_2779_, 0);
v_isSharedCheck_2804_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2804_ == 0)
{
v___x_2782_ = v___x_2779_;
v_isShared_2783_ = v_isSharedCheck_2804_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2779_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2804_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v_start_2784_; lean_object* v_stop_2785_; lean_object* v_start_2786_; lean_object* v_stop_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2799_; 
v_start_2784_ = lean_ctor_get(v_params_2762_, 1);
lean_inc(v_start_2784_);
v_stop_2785_ = lean_ctor_get(v_params_2762_, 2);
lean_inc(v_stop_2785_);
v_start_2786_ = lean_ctor_get(v_discrs_2764_, 1);
lean_inc(v_start_2786_);
v_stop_2787_ = lean_ctor_get(v_discrs_2764_, 2);
lean_inc(v_stop_2787_);
v___x_2788_ = lean_nat_sub(v_stop_2785_, v_start_2784_);
lean_dec(v_start_2784_);
lean_dec(v_stop_2785_);
v___x_2789_ = lean_nat_sub(v_stop_2787_, v_start_2786_);
lean_dec(v_start_2786_);
lean_dec(v_stop_2787_);
v___x_2790_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1);
v___x_2791_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2788_);
lean_ctor_set(v___x_2791_, 1, v___x_2789_);
lean_ctor_set(v___x_2791_, 2, v_a_2780_);
lean_ctor_set(v___x_2791_, 3, v___y_2771_);
lean_ctor_set(v___x_2791_, 4, v_discrInfos_2767_);
lean_ctor_set(v___x_2791_, 5, v___x_2790_);
v___x_2792_ = lean_array_mk(v_us_2678_);
v___x_2793_ = l_Subarray_copy___redArg(v_params_2762_);
v___x_2794_ = l_Subarray_copy___redArg(v_discrs_2764_);
v___x_2795_ = l_Subarray_copy___redArg(v_alts_2768_);
v___x_2796_ = l_Subarray_copy___redArg(v___y_2770_);
v___x_2797_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2797_, 0, v___x_2791_);
lean_ctor_set(v___x_2797_, 1, v_declName_2677_);
lean_ctor_set(v___x_2797_, 2, v___x_2792_);
lean_ctor_set(v___x_2797_, 3, v___x_2793_);
lean_ctor_set(v___x_2797_, 4, v_motive_2763_);
lean_ctor_set(v___x_2797_, 5, v___x_2794_);
lean_ctor_set(v___x_2797_, 6, v___x_2795_);
lean_ctor_set(v___x_2797_, 7, v___x_2796_);
if (v_isShared_2739_ == 0)
{
lean_ctor_set_tag(v___x_2738_, 1);
lean_ctor_set(v___x_2738_, 0, v___x_2797_);
v___x_2799_ = v___x_2738_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2803_; 
v_reuseFailAlloc_2803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2803_, 0, v___x_2797_);
v___x_2799_ = v_reuseFailAlloc_2803_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
lean_object* v___x_2801_; 
if (v_isShared_2783_ == 0)
{
lean_ctor_set(v___x_2782_, 0, v___x_2799_);
v___x_2801_ = v___x_2782_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v___x_2799_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
}
else
{
lean_object* v_a_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2812_; 
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
lean_dec_ref(v_alts_2768_);
lean_dec_ref(v_discrInfos_2767_);
lean_dec_ref(v_discrs_2764_);
lean_dec(v_motive_2763_);
lean_dec_ref(v_params_2762_);
lean_del_object(v___x_2738_);
lean_dec(v_us_2678_);
lean_dec(v_declName_2677_);
v_a_2805_ = lean_ctor_get(v___x_2779_, 0);
v_isSharedCheck_2812_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2812_ == 0)
{
v___x_2807_ = v___x_2779_;
v_isShared_2808_ = v_isSharedCheck_2812_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_a_2805_);
lean_dec(v___x_2779_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2812_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
lean_object* v___x_2810_; 
if (v_isShared_2808_ == 0)
{
v___x_2810_ = v___x_2807_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2811_; 
v_reuseFailAlloc_2811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2811_, 0, v_a_2805_);
v___x_2810_ = v_reuseFailAlloc_2811_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
return v___x_2810_;
}
}
}
}
v___jp_2813_:
{
lean_object* v_levelParams_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; uint8_t v___x_2820_; 
v_levelParams_2816_ = lean_ctor_get(v_toConstantVal_2740_, 1);
lean_inc(v_levelParams_2816_);
lean_dec_ref(v_toConstantVal_2740_);
v___x_2817_ = l_Array_toSubarray___redArg(v_args_2749_, v_lower_2814_, v_upper_2815_);
v___x_2818_ = l_List_lengthTR___redArg(v_levelParams_2816_);
lean_dec(v_levelParams_2816_);
v___x_2819_ = l_List_lengthTR___redArg(v_us_2678_);
v___x_2820_ = lean_nat_dec_eq(v___x_2818_, v___x_2819_);
lean_dec(v___x_2819_);
lean_dec(v___x_2818_);
if (v___x_2820_ == 0)
{
lean_object* v___x_2821_; 
v___x_2821_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2));
v___y_2770_ = v___x_2817_;
v___y_2771_ = v___x_2821_;
goto v___jp_2769_;
}
else
{
v___y_2770_ = v___x_2817_;
v___y_2771_ = v___x_2766_;
goto v___jp_2769_;
}
}
}
}
}
else
{
lean_object* v___x_2824_; lean_object* v___x_2826_; 
lean_dec(v_a_2732_);
lean_dec(v_us_2678_);
lean_dec(v_declName_2677_);
lean_dec_ref(v_e_2662_);
v___x_2824_ = lean_box(0);
if (v_isShared_2735_ == 0)
{
lean_ctor_set(v___x_2734_, 0, v___x_2824_);
v___x_2826_ = v___x_2734_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v___x_2824_);
v___x_2826_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
return v___x_2826_;
}
}
}
}
else
{
lean_object* v_a_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2836_; 
lean_dec(v_us_2678_);
lean_dec(v_declName_2677_);
lean_dec_ref(v_e_2662_);
v_a_2829_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2836_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2836_ == 0)
{
v___x_2831_ = v___x_2731_;
v_isShared_2832_ = v_isSharedCheck_2836_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_a_2829_);
lean_dec(v___x_2731_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2836_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v___x_2834_; 
if (v_isShared_2832_ == 0)
{
v___x_2834_ = v___x_2831_;
goto v_reusejp_2833_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v_a_2829_);
v___x_2834_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2833_;
}
v_reusejp_2833_:
{
return v___x_2834_;
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
lean_dec_ref(v___x_2676_);
lean_dec_ref(v_e_2662_);
goto v___jp_2670_;
}
}
v___jp_2670_:
{
lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2671_ = lean_box(0);
v___x_2672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2671_);
return v___x_2672_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___boxed(lean_object* v_e_2838_, lean_object* v_alsoCasesOn_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_){
_start:
{
uint8_t v_alsoCasesOn_boxed_2846_; lean_object* v_res_2847_; 
v_alsoCasesOn_boxed_2846_ = lean_unbox(v_alsoCasesOn_2839_);
v_res_2847_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(v_e_2838_, v_alsoCasesOn_boxed_2846_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_);
lean_dec(v___y_2844_);
lean_dec_ref(v___y_2843_);
lean_dec(v___y_2842_);
lean_dec_ref(v___y_2841_);
lean_dec(v___y_2840_);
return v_res_2847_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7(lean_object* v_a_2848_, lean_object* v_a_2849_){
_start:
{
if (lean_obj_tag(v_a_2848_) == 0)
{
lean_object* v___x_2850_; 
v___x_2850_ = l_List_reverse___redArg(v_a_2849_);
return v___x_2850_;
}
else
{
lean_object* v_head_2851_; lean_object* v_tail_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2861_; 
v_head_2851_ = lean_ctor_get(v_a_2848_, 0);
v_tail_2852_ = lean_ctor_get(v_a_2848_, 1);
v_isSharedCheck_2861_ = !lean_is_exclusive(v_a_2848_);
if (v_isSharedCheck_2861_ == 0)
{
v___x_2854_ = v_a_2848_;
v_isShared_2855_ = v_isSharedCheck_2861_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_tail_2852_);
lean_inc(v_head_2851_);
lean_dec(v_a_2848_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2861_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v___x_2856_; lean_object* v___x_2858_; 
v___x_2856_ = l_Lean_MessageData_ofExpr(v_head_2851_);
if (v_isShared_2855_ == 0)
{
lean_ctor_set(v___x_2854_, 1, v_a_2849_);
lean_ctor_set(v___x_2854_, 0, v___x_2856_);
v___x_2858_ = v___x_2854_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v___x_2856_);
lean_ctor_set(v_reuseFailAlloc_2860_, 1, v_a_2849_);
v___x_2858_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
v_a_2848_ = v_tail_2852_;
v_a_2849_ = v___x_2858_;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0(lean_object* v_x_2862_, lean_object* v_x_2863_){
_start:
{
lean_object* v_fnName_2864_; uint8_t v___x_2865_; 
v_fnName_2864_ = lean_ctor_get(v_x_2863_, 0);
v___x_2865_ = l_Lean_Expr_isConstOf(v_x_2862_, v_fnName_2864_);
return v___x_2865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0___boxed(lean_object* v_x_2866_, lean_object* v_x_2867_){
_start:
{
uint8_t v_res_2868_; lean_object* v_r_2869_; 
v_res_2868_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0(v_x_2866_, v_x_2867_);
lean_dec_ref(v_x_2867_);
lean_dec_ref(v_x_2866_);
v_r_2869_ = lean_box(v_res_2868_);
return v_r_2869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object* v_name_2870_, lean_object* v_type_2871_, lean_object* v_val_2872_, lean_object* v_k_2873_, uint8_t v_nondep_2874_, uint8_t v_kind_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_){
_start:
{
lean_object* v___f_2882_; lean_object* v___x_2883_; 
lean_inc(v___y_2876_);
v___f_2882_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2882_, 0, v_k_2873_);
lean_closure_set(v___f_2882_, 1, v___y_2876_);
v___x_2883_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2870_, v_type_2871_, v_val_2872_, v___f_2882_, v_nondep_2874_, v_kind_2875_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_);
if (lean_obj_tag(v___x_2883_) == 0)
{
return v___x_2883_;
}
else
{
lean_object* v_a_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2891_; 
v_a_2884_ = lean_ctor_get(v___x_2883_, 0);
v_isSharedCheck_2891_ = !lean_is_exclusive(v___x_2883_);
if (v_isSharedCheck_2891_ == 0)
{
v___x_2886_ = v___x_2883_;
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_a_2884_);
lean_dec(v___x_2883_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
lean_object* v___x_2889_; 
if (v_isShared_2887_ == 0)
{
v___x_2889_ = v___x_2886_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v_a_2884_);
v___x_2889_ = v_reuseFailAlloc_2890_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
return v___x_2889_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object* v_name_2892_, lean_object* v_type_2893_, lean_object* v_val_2894_, lean_object* v_k_2895_, lean_object* v_nondep_2896_, lean_object* v_kind_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_){
_start:
{
uint8_t v_nondep_boxed_2904_; uint8_t v_kind_boxed_2905_; lean_object* v_res_2906_; 
v_nondep_boxed_2904_ = lean_unbox(v_nondep_2896_);
v_kind_boxed_2905_ = lean_unbox(v_kind_2897_);
v_res_2906_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(v_name_2892_, v_type_2893_, v_val_2894_, v_k_2895_, v_nondep_boxed_2904_, v_kind_boxed_2905_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_);
lean_dec(v___y_2902_);
lean_dec_ref(v___y_2901_);
lean_dec(v___y_2900_);
lean_dec_ref(v___y_2899_);
lean_dec(v___y_2898_);
return v_res_2906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0(lean_object* v_k_2907_, uint8_t v_usedLetOnly_2908_, lean_object* v_x_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_){
_start:
{
lean_object* v___x_2916_; 
lean_inc(v___y_2914_);
lean_inc_ref(v___y_2913_);
lean_inc(v___y_2912_);
lean_inc_ref(v___y_2911_);
lean_inc(v___y_2910_);
lean_inc_ref(v_x_2909_);
v___x_2916_ = lean_apply_7(v_k_2907_, v_x_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_, lean_box(0));
if (lean_obj_tag(v___x_2916_) == 0)
{
lean_object* v_a_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; uint8_t v___x_2921_; uint8_t v___x_2922_; lean_object* v___x_2923_; 
v_a_2917_ = lean_ctor_get(v___x_2916_, 0);
lean_inc(v_a_2917_);
lean_dec_ref_known(v___x_2916_, 1);
v___x_2918_ = lean_unsigned_to_nat(1u);
v___x_2919_ = lean_mk_empty_array_with_capacity(v___x_2918_);
v___x_2920_ = lean_array_push(v___x_2919_, v_x_2909_);
v___x_2921_ = 0;
v___x_2922_ = 1;
v___x_2923_ = l_Lean_Meta_mkLetFVars(v___x_2920_, v_a_2917_, v_usedLetOnly_2908_, v___x_2921_, v___x_2922_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_);
return v___x_2923_;
}
else
{
lean_dec_ref(v_x_2909_);
return v___x_2916_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0___boxed(lean_object* v_k_2924_, lean_object* v_usedLetOnly_2925_, lean_object* v_x_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_){
_start:
{
uint8_t v_usedLetOnly_boxed_2933_; lean_object* v_res_2934_; 
v_usedLetOnly_boxed_2933_ = lean_unbox(v_usedLetOnly_2925_);
v_res_2934_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0(v_k_2924_, v_usedLetOnly_boxed_2933_, v_x_2926_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_);
lean_dec(v___y_2931_);
lean_dec_ref(v___y_2930_);
lean_dec(v___y_2929_);
lean_dec_ref(v___y_2928_);
lean_dec(v___y_2927_);
return v_res_2934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(lean_object* v_name_2935_, lean_object* v_type_2936_, lean_object* v_val_2937_, lean_object* v_k_2938_, uint8_t v_nondep_2939_, uint8_t v_kind_2940_, uint8_t v_usedLetOnly_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_){
_start:
{
lean_object* v___x_2948_; lean_object* v___f_2949_; lean_object* v___x_2950_; 
v___x_2948_ = lean_box(v_usedLetOnly_2941_);
v___f_2949_ = lean_alloc_closure((void*)(l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2949_, 0, v_k_2938_);
lean_closure_set(v___f_2949_, 1, v___x_2948_);
v___x_2950_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(v_name_2935_, v_type_2936_, v_val_2937_, v___f_2949_, v_nondep_2939_, v_kind_2940_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_);
return v___x_2950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___boxed(lean_object* v_name_2951_, lean_object* v_type_2952_, lean_object* v_val_2953_, lean_object* v_k_2954_, lean_object* v_nondep_2955_, lean_object* v_kind_2956_, lean_object* v_usedLetOnly_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_){
_start:
{
uint8_t v_nondep_boxed_2964_; uint8_t v_kind_boxed_2965_; uint8_t v_usedLetOnly_boxed_2966_; lean_object* v_res_2967_; 
v_nondep_boxed_2964_ = lean_unbox(v_nondep_2955_);
v_kind_boxed_2965_ = lean_unbox(v_kind_2956_);
v_usedLetOnly_boxed_2966_ = lean_unbox(v_usedLetOnly_2957_);
v_res_2967_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(v_name_2951_, v_type_2952_, v_val_2953_, v_k_2954_, v_nondep_boxed_2964_, v_kind_boxed_2965_, v_usedLetOnly_boxed_2966_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_);
lean_dec(v___y_2962_);
lean_dec_ref(v___y_2961_);
lean_dec(v___y_2960_);
lean_dec_ref(v___y_2959_);
lean_dec(v___y_2958_);
return v_res_2967_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(lean_object* v_recArgInfos_2968_, lean_object* v_positions_2969_, lean_object* v_recFnNames_2970_, lean_object* v_containsRecFn_2971_, lean_object* v_below_2972_, size_t v_sz_2973_, size_t v_i_2974_, lean_object* v_bs_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_){
_start:
{
uint8_t v___x_2982_; 
v___x_2982_ = lean_usize_dec_lt(v_i_2974_, v_sz_2973_);
if (v___x_2982_ == 0)
{
lean_object* v___x_2983_; lean_object* v___x_2984_; 
lean_dec_ref(v_below_2972_);
lean_dec_ref(v_containsRecFn_2971_);
lean_dec_ref(v_recFnNames_2970_);
lean_dec_ref(v_positions_2969_);
lean_dec_ref(v_recArgInfos_2968_);
v___x_2983_ = l_unsafeCast___redArg(v_bs_2975_);
lean_dec_ref(v_bs_2975_);
v___x_2984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2983_);
return v___x_2984_;
}
else
{
lean_object* v_v_2985_; lean_object* v___x_2986_; lean_object* v_bs_x27_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; 
v_v_2985_ = lean_array_uget(v_bs_2975_, v_i_2974_);
v___x_2986_ = lean_unsigned_to_nat(0u);
v_bs_x27_2987_ = lean_array_uset(v_bs_2975_, v_i_2974_, v___x_2986_);
v___x_2988_ = l_unsafeCast___redArg(v_v_2985_);
lean_dec(v_v_2985_);
lean_inc_ref(v___y_2979_);
lean_inc_ref(v_below_2972_);
lean_inc_ref(v_containsRecFn_2971_);
lean_inc_ref(v_recFnNames_2970_);
lean_inc_ref(v_positions_2969_);
lean_inc_ref(v_recArgInfos_2968_);
v___x_2989_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_2968_, v_positions_2969_, v_recFnNames_2970_, v_containsRecFn_2971_, v_below_2972_, v___x_2988_, v___y_2976_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_);
if (lean_obj_tag(v___x_2989_) == 0)
{
lean_object* v_a_2990_; size_t v___x_2991_; size_t v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; 
v_a_2990_ = lean_ctor_get(v___x_2989_, 0);
lean_inc(v_a_2990_);
lean_dec_ref_known(v___x_2989_, 1);
v___x_2991_ = ((size_t)1ULL);
v___x_2992_ = lean_usize_add(v_i_2974_, v___x_2991_);
v___x_2993_ = l_unsafeCast___redArg(v_a_2990_);
lean_dec(v_a_2990_);
v___x_2994_ = lean_array_uset(v_bs_x27_2987_, v_i_2974_, v___x_2993_);
v_i_2974_ = v___x_2992_;
v_bs_2975_ = v___x_2994_;
goto _start;
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
lean_dec_ref(v_bs_x27_2987_);
lean_dec_ref(v_below_2972_);
lean_dec_ref(v_containsRecFn_2971_);
lean_dec_ref(v_recFnNames_2970_);
lean_dec_ref(v_positions_2969_);
lean_dec_ref(v_recArgInfos_2968_);
v_a_2996_ = lean_ctor_get(v___x_2989_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2989_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2998_ = v___x_2989_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2989_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2996_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0___boxed(lean_object* v_recArgInfos_3004_, lean_object* v_positions_3005_, lean_object* v_recFnNames_3006_, lean_object* v_containsRecFn_3007_, lean_object* v_below_3008_, lean_object* v_sz_3009_, lean_object* v_i_3010_, lean_object* v_bs_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_){
_start:
{
size_t v_sz_boxed_3018_; size_t v_i_boxed_3019_; lean_object* v_res_3020_; 
v_sz_boxed_3018_ = lean_unbox_usize(v_sz_3009_);
lean_dec(v_sz_3009_);
v_i_boxed_3019_ = lean_unbox_usize(v_i_3010_);
lean_dec(v_i_3010_);
v_res_3020_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(v_recArgInfos_3004_, v_positions_3005_, v_recFnNames_3006_, v_containsRecFn_3007_, v_below_3008_, v_sz_boxed_3018_, v_i_boxed_3019_, v_bs_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_);
lean_dec(v___y_3016_);
lean_dec_ref(v___y_3015_);
lean_dec(v___y_3014_);
lean_dec_ref(v___y_3013_);
lean_dec(v___y_3012_);
return v_res_3020_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3022_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0));
v___x_3023_ = l_Lean_stringToMessageData(v___x_3022_);
return v___x_3023_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3(void){
_start:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3025_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2));
v___x_3026_ = l_Lean_stringToMessageData(v___x_3025_);
return v___x_3026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(lean_object* v_recArgInfos_3027_, lean_object* v_positions_3028_, lean_object* v_recFnNames_3029_, lean_object* v_containsRecFn_3030_, lean_object* v_below_3031_, lean_object* v_e_3032_, lean_object* v_x_3033_, lean_object* v_x_3034_, lean_object* v_x_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_){
_start:
{
if (lean_obj_tag(v_x_3033_) == 5)
{
lean_object* v_fn_3042_; lean_object* v_arg_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v_fn_3042_ = lean_ctor_get(v_x_3033_, 0);
lean_inc_ref(v_fn_3042_);
v_arg_3043_ = lean_ctor_get(v_x_3033_, 1);
lean_inc_ref(v_arg_3043_);
lean_dec_ref_known(v_x_3033_, 2);
v___x_3044_ = lean_array_set(v_x_3034_, v_x_3035_, v_arg_3043_);
v___x_3045_ = lean_unsigned_to_nat(1u);
v___x_3046_ = lean_nat_sub(v_x_3035_, v___x_3045_);
lean_dec(v_x_3035_);
v_x_3033_ = v_fn_3042_;
v_x_3034_ = v___x_3044_;
v_x_3035_ = v___x_3046_;
goto _start;
}
else
{
lean_object* v___f_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; 
lean_dec(v_x_3035_);
lean_inc_ref(v_x_3033_);
v___f_3048_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3048_, 0, v_x_3033_);
v___x_3049_ = lean_unsigned_to_nat(0u);
v___x_3050_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_3048_, v_recArgInfos_3027_, v___x_3049_);
if (lean_obj_tag(v___x_3050_) == 1)
{
lean_object* v_val_3051_; lean_object* v___x_3052_; lean_object* v___y_3054_; lean_object* v_recArgPos_3084_; lean_object* v_indGroupInst_3085_; lean_object* v___x_3086_; uint8_t v___x_3087_; 
lean_dec_ref(v_x_3033_);
v_val_3051_ = lean_ctor_get(v___x_3050_, 0);
lean_inc(v_val_3051_);
lean_dec_ref_known(v___x_3050_, 1);
v___x_3052_ = lean_array_fget_borrowed(v_recArgInfos_3027_, v_val_3051_);
v_recArgPos_3084_ = lean_ctor_get(v___x_3052_, 2);
v_indGroupInst_3085_ = lean_ctor_get(v___x_3052_, 4);
v___x_3086_ = lean_array_get_size(v_x_3034_);
v___x_3087_ = lean_nat_dec_lt(v_recArgPos_3084_, v___x_3086_);
if (v___x_3087_ == 0)
{
lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; 
lean_dec(v_val_3051_);
lean_dec_ref(v_x_3034_);
lean_dec_ref(v_below_3031_);
lean_dec_ref(v_containsRecFn_3030_);
lean_dec_ref(v_recFnNames_3029_);
lean_dec_ref(v_positions_3028_);
lean_dec_ref(v_recArgInfos_3027_);
v___x_3088_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1);
v___x_3089_ = l_Lean_indentExpr(v_e_3032_);
v___x_3090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3088_);
lean_ctor_set(v___x_3090_, 1, v___x_3089_);
v___x_3091_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v___x_3090_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_);
return v___x_3091_;
}
else
{
lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3092_ = lean_array_fget_borrowed(v_x_3034_, v_recArgPos_3084_);
lean_inc_ref(v___y_3039_);
lean_inc(v___x_3092_);
lean_inc_ref(v_below_3031_);
lean_inc_ref(v_containsRecFn_3030_);
lean_inc_ref(v_recFnNames_3029_);
lean_inc_ref(v_positions_3028_);
lean_inc_ref(v_recArgInfos_3027_);
v___x_3093_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3027_, v_positions_3028_, v_recFnNames_3029_, v_containsRecFn_3030_, v_below_3031_, v___x_3092_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_);
if (lean_obj_tag(v___x_3093_) == 0)
{
lean_object* v_a_3094_; lean_object* v_params_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; 
v_a_3094_ = lean_ctor_get(v___x_3093_, 0);
lean_inc(v_a_3094_);
lean_dec_ref_known(v___x_3093_, 1);
v_params_3095_ = lean_ctor_get(v_indGroupInst_3085_, 2);
v___x_3096_ = lean_array_get_size(v_params_3095_);
lean_inc_ref(v_positions_3028_);
lean_inc_ref(v_below_3031_);
v___x_3097_ = l_Lean_Elab_Structural_toBelow(v_below_3031_, v___x_3096_, v_positions_3028_, v_val_3051_, v_a_3094_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_);
if (lean_obj_tag(v___x_3097_) == 0)
{
lean_dec_ref(v_e_3032_);
v___y_3054_ = v___x_3097_;
goto v___jp_3053_;
}
else
{
lean_object* v_a_3098_; uint8_t v___y_3100_; uint8_t v___x_3105_; 
v_a_3098_ = lean_ctor_get(v___x_3097_, 0);
lean_inc(v_a_3098_);
v___x_3105_ = l_Lean_Exception_isInterrupt(v_a_3098_);
if (v___x_3105_ == 0)
{
uint8_t v___x_3106_; 
v___x_3106_ = l_Lean_Exception_isRuntime(v_a_3098_);
v___y_3100_ = v___x_3106_;
goto v___jp_3099_;
}
else
{
lean_dec(v_a_3098_);
v___y_3100_ = v___x_3105_;
goto v___jp_3099_;
}
v___jp_3099_:
{
if (v___y_3100_ == 0)
{
lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
lean_dec_ref_known(v___x_3097_, 1);
v___x_3101_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3);
v___x_3102_ = l_Lean_indentExpr(v_e_3032_);
v___x_3103_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3103_, 0, v___x_3101_);
lean_ctor_set(v___x_3103_, 1, v___x_3102_);
v___x_3104_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v___x_3103_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_);
v___y_3054_ = v___x_3104_;
goto v___jp_3053_;
}
else
{
lean_dec_ref(v_e_3032_);
v___y_3054_ = v___x_3097_;
goto v___jp_3053_;
}
}
}
}
else
{
lean_dec(v_val_3051_);
lean_dec_ref(v_x_3034_);
lean_dec_ref(v_e_3032_);
lean_dec_ref(v_below_3031_);
lean_dec_ref(v_containsRecFn_3030_);
lean_dec_ref(v_recFnNames_3029_);
lean_dec_ref(v_positions_3028_);
lean_dec_ref(v_recArgInfos_3027_);
return v___x_3093_;
}
}
v___jp_3053_:
{
if (lean_obj_tag(v___y_3054_) == 0)
{
lean_object* v_a_3055_; lean_object* v_fixedParamPerm_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v_snd_3059_; size_t v_sz_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_26642__overap_3065_; lean_object* v___x_3066_; 
v_a_3055_ = lean_ctor_get(v___y_3054_, 0);
lean_inc(v_a_3055_);
lean_dec_ref_known(v___y_3054_, 1);
v_fixedParamPerm_3056_ = lean_ctor_get(v___x_3052_, 1);
v___x_3057_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_fixedParamPerm_3056_, v_x_3034_);
lean_dec_ref(v_x_3034_);
lean_inc(v___x_3052_);
v___x_3058_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v___x_3052_, v___x_3057_);
v_snd_3059_ = lean_ctor_get(v___x_3058_, 1);
lean_inc(v_snd_3059_);
lean_dec_ref(v___x_3058_);
v_sz_3060_ = lean_array_size(v_snd_3059_);
v___x_3061_ = l_unsafeCast___redArg(v_snd_3059_);
lean_dec(v_snd_3059_);
v___x_3062_ = lean_box_usize(v_sz_3060_);
v___x_3063_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___boxed__const__1));
v___x_3064_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0___boxed), 14, 8);
lean_closure_set(v___x_3064_, 0, v_recArgInfos_3027_);
lean_closure_set(v___x_3064_, 1, v_positions_3028_);
lean_closure_set(v___x_3064_, 2, v_recFnNames_3029_);
lean_closure_set(v___x_3064_, 3, v_containsRecFn_3030_);
lean_closure_set(v___x_3064_, 4, v_below_3031_);
lean_closure_set(v___x_3064_, 5, v___x_3062_);
lean_closure_set(v___x_3064_, 6, v___x_3063_);
lean_closure_set(v___x_3064_, 7, v___x_3061_);
v___x_26642__overap_3065_ = l_unsafeCast___redArg(v___x_3064_);
lean_dec_ref(v___x_3064_);
lean_inc(v___y_3040_);
lean_inc_ref(v___y_3039_);
lean_inc(v___y_3038_);
lean_inc_ref(v___y_3037_);
lean_inc(v___y_3036_);
v___x_3066_ = lean_apply_6(v___x_26642__overap_3065_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_, lean_box(0));
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v_a_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3075_; 
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
v_isSharedCheck_3075_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_3069_ = v___x_3066_;
v_isShared_3070_ = v_isSharedCheck_3075_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_a_3067_);
lean_dec(v___x_3066_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3075_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3071_; lean_object* v___x_3073_; 
v___x_3071_ = l_Lean_mkAppN(v_a_3055_, v_a_3067_);
lean_dec(v_a_3067_);
if (v_isShared_3070_ == 0)
{
lean_ctor_set(v___x_3069_, 0, v___x_3071_);
v___x_3073_ = v___x_3069_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v___x_3071_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
return v___x_3073_;
}
}
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3083_; 
lean_dec(v_a_3055_);
v_a_3076_ = lean_ctor_get(v___x_3066_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3078_ = v___x_3066_;
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_3066_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
}
else
{
lean_dec_ref(v_x_3034_);
lean_dec_ref(v_below_3031_);
lean_dec_ref(v_containsRecFn_3030_);
lean_dec_ref(v_recFnNames_3029_);
lean_dec_ref(v_positions_3028_);
lean_dec_ref(v_recArgInfos_3027_);
return v___y_3054_;
}
}
}
else
{
lean_object* v___x_3107_; 
lean_dec(v___x_3050_);
lean_dec_ref(v_e_3032_);
lean_inc_ref(v___y_3039_);
lean_inc_ref(v_below_3031_);
lean_inc_ref(v_containsRecFn_3030_);
lean_inc_ref(v_recFnNames_3029_);
lean_inc_ref(v_positions_3028_);
lean_inc_ref(v_recArgInfos_3027_);
v___x_3107_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3027_, v_positions_3028_, v_recFnNames_3029_, v_containsRecFn_3030_, v_below_3031_, v_x_3033_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_);
if (lean_obj_tag(v___x_3107_) == 0)
{
lean_object* v_a_3108_; size_t v_sz_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_26645__overap_3114_; lean_object* v___x_3115_; 
v_a_3108_ = lean_ctor_get(v___x_3107_, 0);
lean_inc(v_a_3108_);
lean_dec_ref_known(v___x_3107_, 1);
v_sz_3109_ = lean_array_size(v_x_3034_);
v___x_3110_ = l_unsafeCast___redArg(v_x_3034_);
lean_dec_ref(v_x_3034_);
v___x_3111_ = lean_box_usize(v_sz_3109_);
v___x_3112_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___boxed__const__1));
v___x_3113_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0___boxed), 14, 8);
lean_closure_set(v___x_3113_, 0, v_recArgInfos_3027_);
lean_closure_set(v___x_3113_, 1, v_positions_3028_);
lean_closure_set(v___x_3113_, 2, v_recFnNames_3029_);
lean_closure_set(v___x_3113_, 3, v_containsRecFn_3030_);
lean_closure_set(v___x_3113_, 4, v_below_3031_);
lean_closure_set(v___x_3113_, 5, v___x_3111_);
lean_closure_set(v___x_3113_, 6, v___x_3112_);
lean_closure_set(v___x_3113_, 7, v___x_3110_);
v___x_26645__overap_3114_ = l_unsafeCast___redArg(v___x_3113_);
lean_dec_ref(v___x_3113_);
lean_inc(v___y_3040_);
lean_inc_ref(v___y_3039_);
lean_inc(v___y_3038_);
lean_inc_ref(v___y_3037_);
lean_inc(v___y_3036_);
v___x_3115_ = lean_apply_6(v___x_26645__overap_3114_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_, lean_box(0));
if (lean_obj_tag(v___x_3115_) == 0)
{
lean_object* v_a_3116_; lean_object* v___x_3118_; uint8_t v_isShared_3119_; uint8_t v_isSharedCheck_3124_; 
v_a_3116_ = lean_ctor_get(v___x_3115_, 0);
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3115_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3118_ = v___x_3115_;
v_isShared_3119_ = v_isSharedCheck_3124_;
goto v_resetjp_3117_;
}
else
{
lean_inc(v_a_3116_);
lean_dec(v___x_3115_);
v___x_3118_ = lean_box(0);
v_isShared_3119_ = v_isSharedCheck_3124_;
goto v_resetjp_3117_;
}
v_resetjp_3117_:
{
lean_object* v___x_3120_; lean_object* v___x_3122_; 
v___x_3120_ = l_Lean_mkAppN(v_a_3108_, v_a_3116_);
lean_dec(v_a_3116_);
if (v_isShared_3119_ == 0)
{
lean_ctor_set(v___x_3118_, 0, v___x_3120_);
v___x_3122_ = v___x_3118_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v___x_3120_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
else
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3132_; 
lean_dec(v_a_3108_);
v_a_3125_ = lean_ctor_get(v___x_3115_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3115_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3127_ = v___x_3115_;
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3115_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3130_; 
if (v_isShared_3128_ == 0)
{
v___x_3130_ = v___x_3127_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_a_3125_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
}
else
{
lean_dec_ref(v_x_3034_);
lean_dec_ref(v_below_3031_);
lean_dec_ref(v_containsRecFn_3030_);
lean_dec_ref(v_recFnNames_3029_);
lean_dec_ref(v_positions_3028_);
lean_dec_ref(v_recArgInfos_3027_);
return v___x_3107_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0(lean_object* v_body_3133_, lean_object* v_recArgInfos_3134_, lean_object* v_positions_3135_, lean_object* v_recFnNames_3136_, lean_object* v_containsRecFn_3137_, lean_object* v_below_3138_, uint8_t v___x_3139_, uint8_t v_a_3140_, lean_object* v_x_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_){
_start:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3148_ = lean_expr_instantiate1(v_body_3133_, v_x_3141_);
lean_inc_ref(v___y_3145_);
v___x_3149_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3134_, v_positions_3135_, v_recFnNames_3136_, v_containsRecFn_3137_, v_below_3138_, v___x_3148_, v___y_3142_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_);
if (lean_obj_tag(v___x_3149_) == 0)
{
lean_object* v_a_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; uint8_t v___x_3154_; lean_object* v___x_3155_; 
v_a_3150_ = lean_ctor_get(v___x_3149_, 0);
lean_inc(v_a_3150_);
lean_dec_ref_known(v___x_3149_, 1);
v___x_3151_ = lean_unsigned_to_nat(1u);
v___x_3152_ = lean_mk_empty_array_with_capacity(v___x_3151_);
v___x_3153_ = lean_array_push(v___x_3152_, v_x_3141_);
v___x_3154_ = 1;
v___x_3155_ = l_Lean_Meta_mkLambdaFVars(v___x_3153_, v_a_3150_, v___x_3139_, v_a_3140_, v___x_3139_, v_a_3140_, v___x_3154_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_);
return v___x_3155_;
}
else
{
lean_dec_ref(v_x_3141_);
return v___x_3149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0___boxed(lean_object* v_body_3156_, lean_object* v_recArgInfos_3157_, lean_object* v_positions_3158_, lean_object* v_recFnNames_3159_, lean_object* v_containsRecFn_3160_, lean_object* v_below_3161_, lean_object* v___x_3162_, lean_object* v_a_3163_, lean_object* v_x_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_){
_start:
{
uint8_t v___x_28574__boxed_3171_; uint8_t v_a_28575__boxed_3172_; lean_object* v_res_3173_; 
v___x_28574__boxed_3171_ = lean_unbox(v___x_3162_);
v_a_28575__boxed_3172_ = lean_unbox(v_a_3163_);
v_res_3173_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0(v_body_3156_, v_recArgInfos_3157_, v_positions_3158_, v_recFnNames_3159_, v_containsRecFn_3160_, v_below_3161_, v___x_28574__boxed_3171_, v_a_28575__boxed_3172_, v_x_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_);
lean_dec(v___y_3169_);
lean_dec_ref(v___y_3168_);
lean_dec(v___y_3167_);
lean_dec_ref(v___y_3166_);
lean_dec(v___y_3165_);
lean_dec_ref(v_body_3156_);
return v_res_3173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1(lean_object* v_body_3174_, lean_object* v_recArgInfos_3175_, lean_object* v_positions_3176_, lean_object* v_recFnNames_3177_, lean_object* v_containsRecFn_3178_, lean_object* v_below_3179_, uint8_t v___x_3180_, uint8_t v_a_3181_, lean_object* v_x_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_){
_start:
{
lean_object* v___x_3189_; lean_object* v___x_3190_; 
v___x_3189_ = lean_expr_instantiate1(v_body_3174_, v_x_3182_);
lean_inc_ref(v___y_3186_);
v___x_3190_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3175_, v_positions_3176_, v_recFnNames_3177_, v_containsRecFn_3178_, v_below_3179_, v___x_3189_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_);
if (lean_obj_tag(v___x_3190_) == 0)
{
lean_object* v_a_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; uint8_t v___x_3195_; lean_object* v___x_3196_; 
v_a_3191_ = lean_ctor_get(v___x_3190_, 0);
lean_inc(v_a_3191_);
lean_dec_ref_known(v___x_3190_, 1);
v___x_3192_ = lean_unsigned_to_nat(1u);
v___x_3193_ = lean_mk_empty_array_with_capacity(v___x_3192_);
v___x_3194_ = lean_array_push(v___x_3193_, v_x_3182_);
v___x_3195_ = 1;
v___x_3196_ = l_Lean_Meta_mkForallFVars(v___x_3194_, v_a_3191_, v___x_3180_, v_a_3181_, v_a_3181_, v___x_3195_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_);
return v___x_3196_;
}
else
{
lean_dec_ref(v_x_3182_);
return v___x_3190_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1___boxed(lean_object* v_body_3197_, lean_object* v_recArgInfos_3198_, lean_object* v_positions_3199_, lean_object* v_recFnNames_3200_, lean_object* v_containsRecFn_3201_, lean_object* v_below_3202_, lean_object* v___x_3203_, lean_object* v_a_3204_, lean_object* v_x_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_){
_start:
{
uint8_t v___x_28592__boxed_3212_; uint8_t v_a_28593__boxed_3213_; lean_object* v_res_3214_; 
v___x_28592__boxed_3212_ = lean_unbox(v___x_3203_);
v_a_28593__boxed_3213_ = lean_unbox(v_a_3204_);
v_res_3214_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1(v_body_3197_, v_recArgInfos_3198_, v_positions_3199_, v_recFnNames_3200_, v_containsRecFn_3201_, v_below_3202_, v___x_28592__boxed_3212_, v_a_28593__boxed_3213_, v_x_3205_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_);
lean_dec(v___y_3210_);
lean_dec_ref(v___y_3209_);
lean_dec(v___y_3208_);
lean_dec_ref(v___y_3207_);
lean_dec(v___y_3206_);
lean_dec_ref(v_body_3197_);
return v_res_3214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2___boxed(lean_object* v_body_3215_, lean_object* v_recArgInfos_3216_, lean_object* v_positions_3217_, lean_object* v_recFnNames_3218_, lean_object* v_containsRecFn_3219_, lean_object* v_below_3220_, lean_object* v_x_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_){
_start:
{
lean_object* v_res_3228_; 
v_res_3228_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2(v_body_3215_, v_recArgInfos_3216_, v_positions_3217_, v_recFnNames_3218_, v_containsRecFn_3219_, v_below_3220_, v_x_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_);
lean_dec(v___y_3226_);
lean_dec_ref(v___y_3225_);
lean_dec(v___y_3224_);
lean_dec_ref(v___y_3223_);
lean_dec(v___y_3222_);
lean_dec_ref(v_x_3221_);
lean_dec_ref(v_body_3215_);
return v_res_3228_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3232_; lean_object* v___x_3233_; 
v___x_3232_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__0));
v___x_3233_ = l_Lean_stringToMessageData(v___x_3232_);
return v___x_3233_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3235_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__2));
v___x_3236_ = l_Lean_stringToMessageData(v___x_3235_);
return v___x_3236_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3238_; lean_object* v___x_3239_; 
v___x_3238_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__4));
v___x_3239_ = l_Lean_stringToMessageData(v___x_3238_);
return v___x_3239_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3241_; lean_object* v___x_3242_; 
v___x_3241_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__6));
v___x_3242_ = l_Lean_stringToMessageData(v___x_3241_);
return v___x_3242_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0(lean_object* v___x_3243_, lean_object* v_b_3244_, lean_object* v_recArgInfos_3245_, lean_object* v_positions_3246_, lean_object* v_recFnNames_3247_, lean_object* v_containsRecFn_3248_, uint8_t v___x_3249_, uint8_t v_a_3250_, lean_object* v___x_3251_, lean_object* v_a_3252_, lean_object* v_e_3253_, lean_object* v___x_3254_, lean_object* v_xs_3255_, lean_object* v_altBody_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_){
_start:
{
lean_object* v___y_3264_; lean_object* v___y_3265_; lean_object* v___y_3266_; lean_object* v___y_3267_; lean_object* v___y_3268_; lean_object* v___y_3275_; lean_object* v___y_3276_; lean_object* v___y_3277_; lean_object* v___y_3278_; lean_object* v___y_3279_; lean_object* v_toCold_3298_; lean_object* v_options_3299_; uint8_t v_hasTrace_3300_; 
v_toCold_3298_ = lean_ctor_get(v___y_3260_, 0);
v_options_3299_ = lean_ctor_get(v_toCold_3298_, 2);
v_hasTrace_3300_ = lean_ctor_get_uint8(v_options_3299_, sizeof(void*)*1);
if (v_hasTrace_3300_ == 0)
{
lean_dec(v___x_3254_);
v___y_3275_ = v___y_3257_;
v___y_3276_ = v___y_3258_;
v___y_3277_ = v___y_3259_;
v___y_3278_ = v___y_3260_;
v___y_3279_ = v___y_3261_;
goto v___jp_3274_;
}
else
{
lean_object* v_inheritedTraceOptions_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; uint8_t v___x_3304_; 
v_inheritedTraceOptions_3301_ = lean_ctor_get(v_toCold_3298_, 11);
v___x_3302_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1));
lean_inc(v___x_3254_);
v___x_3303_ = l_Lean_Name_append(v___x_3302_, v___x_3254_);
v___x_3304_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3301_, v_options_3299_, v___x_3303_);
lean_dec(v___x_3303_);
if (v___x_3304_ == 0)
{
lean_dec(v___x_3254_);
v___y_3275_ = v___y_3257_;
v___y_3276_ = v___y_3258_;
v___y_3277_ = v___y_3259_;
v___y_3278_ = v___y_3260_;
v___y_3279_ = v___y_3261_;
goto v___jp_3274_;
}
else
{
lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; 
v___x_3305_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__5, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__5_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__5);
lean_inc(v_b_3244_);
v___x_3306_ = l_Nat_reprFast(v_b_3244_);
v___x_3307_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3307_, 0, v___x_3306_);
v___x_3308_ = l_Lean_MessageData_ofFormat(v___x_3307_);
v___x_3309_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3309_, 0, v___x_3305_);
lean_ctor_set(v___x_3309_, 1, v___x_3308_);
v___x_3310_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__7, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__7_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__7);
v___x_3311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3311_, 0, v___x_3309_);
lean_ctor_set(v___x_3311_, 1, v___x_3310_);
lean_inc_ref(v_xs_3255_);
v___x_3312_ = lean_array_to_list(v_xs_3255_);
v___x_3313_ = lean_box(0);
v___x_3314_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7(v___x_3312_, v___x_3313_);
v___x_3315_ = l_Lean_MessageData_ofList(v___x_3314_);
v___x_3316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3311_);
lean_ctor_set(v___x_3316_, 1, v___x_3315_);
v___x_3317_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg(v___x_3254_, v___x_3316_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_);
if (lean_obj_tag(v___x_3317_) == 0)
{
lean_dec_ref_known(v___x_3317_, 1);
v___y_3275_ = v___y_3257_;
v___y_3276_ = v___y_3258_;
v___y_3277_ = v___y_3259_;
v___y_3278_ = v___y_3260_;
v___y_3279_ = v___y_3261_;
goto v___jp_3274_;
}
else
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3325_; 
lean_dec_ref(v_altBody_3256_);
lean_dec_ref(v_xs_3255_);
lean_dec_ref(v_e_3253_);
lean_dec_ref(v_a_3252_);
lean_dec_ref(v_containsRecFn_3248_);
lean_dec_ref(v_recFnNames_3247_);
lean_dec_ref(v_positions_3246_);
lean_dec_ref(v_recArgInfos_3245_);
lean_dec(v_b_3244_);
v_a_3318_ = lean_ctor_get(v___x_3317_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v___x_3317_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3320_ = v___x_3317_;
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v___x_3317_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3323_; 
if (v_isShared_3321_ == 0)
{
v___x_3323_ = v___x_3320_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3318_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
return v___x_3323_;
}
}
}
}
}
v___jp_3263_:
{
lean_object* v___x_3269_; lean_object* v___x_3270_; 
v___x_3269_ = lean_array_get_borrowed(v___x_3243_, v_xs_3255_, v_b_3244_);
lean_dec(v_b_3244_);
lean_inc_ref(v___y_3267_);
lean_inc(v___x_3269_);
v___x_3270_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3245_, v_positions_3246_, v_recFnNames_3247_, v_containsRecFn_3248_, v___x_3269_, v_altBody_3256_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v_a_3271_; uint8_t v___x_3272_; lean_object* v___x_3273_; 
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_a_3271_);
lean_dec_ref_known(v___x_3270_, 1);
v___x_3272_ = 1;
v___x_3273_ = l_Lean_Meta_mkLambdaFVars(v_xs_3255_, v_a_3271_, v___x_3249_, v_a_3250_, v___x_3249_, v_a_3250_, v___x_3272_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_);
return v___x_3273_;
}
else
{
lean_dec_ref(v_xs_3255_);
return v___x_3270_;
}
}
v___jp_3274_:
{
lean_object* v___x_3280_; uint8_t v___x_3281_; 
v___x_3280_ = lean_array_get_size(v_xs_3255_);
v___x_3281_ = lean_nat_dec_eq(v___x_3280_, v___x_3251_);
if (v___x_3281_ == 0)
{
lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v_a_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3297_; 
lean_dec_ref(v_altBody_3256_);
lean_dec_ref(v_xs_3255_);
lean_dec_ref(v_containsRecFn_3248_);
lean_dec_ref(v_recFnNames_3247_);
lean_dec_ref(v_positions_3246_);
lean_dec_ref(v_recArgInfos_3245_);
lean_dec(v_b_3244_);
v___x_3282_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__1, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__1_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__1);
v___x_3283_ = l_Lean_indentExpr(v_a_3252_);
v___x_3284_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3282_);
lean_ctor_set(v___x_3284_, 1, v___x_3283_);
v___x_3285_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__3, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__3_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__3);
v___x_3286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3284_);
lean_ctor_set(v___x_3286_, 1, v___x_3285_);
v___x_3287_ = l_Lean_indentExpr(v_e_3253_);
v___x_3288_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3288_, 0, v___x_3286_);
lean_ctor_set(v___x_3288_, 1, v___x_3287_);
v___x_3289_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v___x_3288_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_);
v_a_3290_ = lean_ctor_get(v___x_3289_, 0);
v_isSharedCheck_3297_ = !lean_is_exclusive(v___x_3289_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3292_ = v___x_3289_;
v_isShared_3293_ = v_isSharedCheck_3297_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_a_3290_);
lean_dec(v___x_3289_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3297_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
lean_object* v___x_3295_; 
if (v_isShared_3293_ == 0)
{
v___x_3295_ = v___x_3292_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v_a_3290_);
v___x_3295_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
return v___x_3295_;
}
}
}
else
{
lean_dec_ref(v_e_3253_);
lean_dec_ref(v_a_3252_);
v___y_3264_ = v___y_3275_;
v___y_3265_ = v___y_3276_;
v___y_3266_ = v___y_3277_;
v___y_3267_ = v___y_3278_;
v___y_3268_ = v___y_3279_;
goto v___jp_3263_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___boxed(lean_object** _args){
lean_object* v___x_3326_ = _args[0];
lean_object* v_b_3327_ = _args[1];
lean_object* v_recArgInfos_3328_ = _args[2];
lean_object* v_positions_3329_ = _args[3];
lean_object* v_recFnNames_3330_ = _args[4];
lean_object* v_containsRecFn_3331_ = _args[5];
lean_object* v___x_3332_ = _args[6];
lean_object* v_a_3333_ = _args[7];
lean_object* v___x_3334_ = _args[8];
lean_object* v_a_3335_ = _args[9];
lean_object* v_e_3336_ = _args[10];
lean_object* v___x_3337_ = _args[11];
lean_object* v_xs_3338_ = _args[12];
lean_object* v_altBody_3339_ = _args[13];
lean_object* v___y_3340_ = _args[14];
lean_object* v___y_3341_ = _args[15];
lean_object* v___y_3342_ = _args[16];
lean_object* v___y_3343_ = _args[17];
lean_object* v___y_3344_ = _args[18];
lean_object* v___y_3345_ = _args[19];
_start:
{
uint8_t v___x_28671__boxed_3346_; uint8_t v_a_28672__boxed_3347_; lean_object* v_res_3348_; 
v___x_28671__boxed_3346_ = lean_unbox(v___x_3332_);
v_a_28672__boxed_3347_ = lean_unbox(v_a_3333_);
v_res_3348_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0(v___x_3326_, v_b_3327_, v_recArgInfos_3328_, v_positions_3329_, v_recFnNames_3330_, v_containsRecFn_3331_, v___x_28671__boxed_3346_, v_a_28672__boxed_3347_, v___x_3334_, v_a_3335_, v_e_3336_, v___x_3337_, v_xs_3338_, v_altBody_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
lean_dec(v___y_3342_);
lean_dec_ref(v___y_3341_);
lean_dec(v___y_3340_);
lean_dec(v___x_3334_);
lean_dec_ref(v___x_3326_);
return v_res_3348_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10(lean_object* v_recArgInfos_3349_, lean_object* v_positions_3350_, lean_object* v_recFnNames_3351_, lean_object* v_containsRecFn_3352_, uint8_t v_a_3353_, lean_object* v_e_3354_, lean_object* v_as_3355_, lean_object* v_bs_3356_, lean_object* v_i_3357_, lean_object* v_cs_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_){
_start:
{
lean_object* v___x_3365_; uint8_t v___x_3366_; 
v___x_3365_ = lean_array_get_size(v_as_3355_);
v___x_3366_ = lean_nat_dec_lt(v_i_3357_, v___x_3365_);
if (v___x_3366_ == 0)
{
lean_object* v___x_3367_; 
lean_dec(v_i_3357_);
lean_dec_ref(v_e_3354_);
lean_dec_ref(v_containsRecFn_3352_);
lean_dec_ref(v_recFnNames_3351_);
lean_dec_ref(v_positions_3350_);
lean_dec_ref(v_recArgInfos_3349_);
v___x_3367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3367_, 0, v_cs_3358_);
return v___x_3367_;
}
else
{
lean_object* v___x_3368_; uint8_t v___x_3369_; 
v___x_3368_ = lean_array_get_size(v_bs_3356_);
v___x_3369_ = lean_nat_dec_lt(v_i_3357_, v___x_3368_);
if (v___x_3369_ == 0)
{
lean_object* v___x_3370_; 
lean_dec(v_i_3357_);
lean_dec_ref(v_e_3354_);
lean_dec_ref(v_containsRecFn_3352_);
lean_dec_ref(v_recFnNames_3351_);
lean_dec_ref(v_positions_3350_);
lean_dec_ref(v_recArgInfos_3349_);
v___x_3370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3370_, 0, v_cs_3358_);
return v___x_3370_;
}
else
{
lean_object* v___x_3371_; uint8_t v___x_3372_; lean_object* v___x_3373_; lean_object* v_a_3374_; lean_object* v_b_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___f_3380_; lean_object* v___x_3381_; 
v___x_3371_ = l_Lean_instInhabitedExpr;
v___x_3372_ = 0;
v___x_3373_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
v_a_3374_ = lean_array_fget_borrowed(v_as_3355_, v_i_3357_);
v_b_3375_ = lean_array_fget_borrowed(v_bs_3356_, v_i_3357_);
v___x_3376_ = lean_unsigned_to_nat(1u);
v___x_3377_ = lean_nat_add(v_b_3375_, v___x_3376_);
v___x_3378_ = lean_box(v___x_3372_);
v___x_3379_ = lean_box(v_a_3353_);
lean_inc_ref(v_e_3354_);
lean_inc_n(v_a_3374_, 2);
lean_inc(v___x_3377_);
lean_inc_ref(v_containsRecFn_3352_);
lean_inc_ref(v_recFnNames_3351_);
lean_inc_ref(v_positions_3350_);
lean_inc_ref(v_recArgInfos_3349_);
lean_inc(v_b_3375_);
v___f_3380_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___boxed), 20, 12);
lean_closure_set(v___f_3380_, 0, v___x_3371_);
lean_closure_set(v___f_3380_, 1, v_b_3375_);
lean_closure_set(v___f_3380_, 2, v_recArgInfos_3349_);
lean_closure_set(v___f_3380_, 3, v_positions_3350_);
lean_closure_set(v___f_3380_, 4, v_recFnNames_3351_);
lean_closure_set(v___f_3380_, 5, v_containsRecFn_3352_);
lean_closure_set(v___f_3380_, 6, v___x_3378_);
lean_closure_set(v___f_3380_, 7, v___x_3379_);
lean_closure_set(v___f_3380_, 8, v___x_3377_);
lean_closure_set(v___f_3380_, 9, v_a_3374_);
lean_closure_set(v___f_3380_, 10, v_e_3354_);
lean_closure_set(v___f_3380_, 11, v___x_3373_);
v___x_3381_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v_a_3374_, v___x_3377_, v___f_3380_, v___x_3372_, v___y_3359_, v___y_3360_, v___y_3361_, v___y_3362_, v___y_3363_);
if (lean_obj_tag(v___x_3381_) == 0)
{
lean_object* v_a_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v_a_3382_ = lean_ctor_get(v___x_3381_, 0);
lean_inc(v_a_3382_);
lean_dec_ref_known(v___x_3381_, 1);
v___x_3383_ = lean_nat_add(v_i_3357_, v___x_3376_);
lean_dec(v_i_3357_);
v___x_3384_ = lean_array_push(v_cs_3358_, v_a_3382_);
v_i_3357_ = v___x_3383_;
v_cs_3358_ = v___x_3384_;
goto _start;
}
else
{
lean_object* v_a_3386_; lean_object* v___x_3388_; uint8_t v_isShared_3389_; uint8_t v_isSharedCheck_3393_; 
lean_dec_ref(v_cs_3358_);
lean_dec(v_i_3357_);
lean_dec_ref(v_e_3354_);
lean_dec_ref(v_containsRecFn_3352_);
lean_dec_ref(v_recFnNames_3351_);
lean_dec_ref(v_positions_3350_);
lean_dec_ref(v_recArgInfos_3349_);
v_a_3386_ = lean_ctor_get(v___x_3381_, 0);
v_isSharedCheck_3393_ = !lean_is_exclusive(v___x_3381_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3388_ = v___x_3381_;
v_isShared_3389_ = v_isSharedCheck_3393_;
goto v_resetjp_3387_;
}
else
{
lean_inc(v_a_3386_);
lean_dec(v___x_3381_);
v___x_3388_ = lean_box(0);
v_isShared_3389_ = v_isSharedCheck_3393_;
goto v_resetjp_3387_;
}
v_resetjp_3387_:
{
lean_object* v___x_3391_; 
if (v_isShared_3389_ == 0)
{
v___x_3391_ = v___x_3388_;
goto v_reusejp_3390_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v_a_3386_);
v___x_3391_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3390_;
}
v_reusejp_3390_:
{
return v___x_3391_;
}
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2(void){
_start:
{
lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3395_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1));
v___x_3396_ = l_Lean_stringToMessageData(v___x_3395_);
return v___x_3396_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4(void){
_start:
{
lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3398_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3));
v___x_3399_ = l_Lean_stringToMessageData(v___x_3398_);
return v___x_3399_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6(void){
_start:
{
lean_object* v___x_3401_; lean_object* v___x_3402_; 
v___x_3401_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5));
v___x_3402_ = l_Lean_stringToMessageData(v___x_3401_);
return v___x_3402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(lean_object* v_recArgInfos_3403_, lean_object* v_positions_3404_, lean_object* v_recFnNames_3405_, lean_object* v_containsRecFn_3406_, lean_object* v_below_3407_, lean_object* v_e_3408_, lean_object* v_a_3409_, lean_object* v_a_3410_, lean_object* v_a_3411_, lean_object* v_a_3412_, lean_object* v_a_3413_){
_start:
{
lean_object* v_e_3416_; lean_object* v___y_3417_; lean_object* v___y_3418_; lean_object* v___y_3419_; lean_object* v___y_3420_; lean_object* v___y_3421_; lean_object* v___x_3428_; 
lean_inc_ref(v_containsRecFn_3406_);
lean_inc(v_a_3413_);
lean_inc_ref(v_a_3412_);
lean_inc(v_a_3411_);
lean_inc_ref(v_a_3410_);
lean_inc(v_a_3409_);
lean_inc_ref(v_e_3408_);
v___x_3428_ = lean_apply_7(v_containsRecFn_3406_, v_e_3408_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_, lean_box(0));
if (lean_obj_tag(v___x_3428_) == 0)
{
lean_object* v_a_3429_; lean_object* v___x_3431_; uint8_t v_isShared_3432_; uint8_t v_isSharedCheck_3656_; 
v_a_3429_ = lean_ctor_get(v___x_3428_, 0);
v_isSharedCheck_3656_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3656_ == 0)
{
v___x_3431_ = v___x_3428_;
v_isShared_3432_ = v_isSharedCheck_3656_;
goto v_resetjp_3430_;
}
else
{
lean_inc(v_a_3429_);
lean_dec(v___x_3428_);
v___x_3431_ = lean_box(0);
v_isShared_3432_ = v_isSharedCheck_3656_;
goto v_resetjp_3430_;
}
v_resetjp_3430_:
{
uint8_t v___x_3433_; 
v___x_3433_ = lean_unbox(v_a_3429_);
if (v___x_3433_ == 0)
{
lean_object* v___x_3435_; 
lean_dec(v_a_3429_);
lean_dec_ref(v_a_3412_);
lean_dec_ref(v_below_3407_);
lean_dec_ref(v_containsRecFn_3406_);
lean_dec_ref(v_recFnNames_3405_);
lean_dec_ref(v_positions_3404_);
lean_dec_ref(v_recArgInfos_3403_);
if (v_isShared_3432_ == 0)
{
lean_ctor_set(v___x_3431_, 0, v_e_3408_);
v___x_3435_ = v___x_3431_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v_e_3408_);
v___x_3435_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
return v___x_3435_;
}
}
else
{
uint8_t v___x_3437_; 
lean_del_object(v___x_3431_);
v___x_3437_ = 0;
switch(lean_obj_tag(v_e_3408_))
{
case 6:
{
lean_object* v_binderName_3438_; lean_object* v_binderType_3439_; lean_object* v_body_3440_; uint8_t v_binderInfo_3441_; lean_object* v___x_3442_; lean_object* v___f_3443_; lean_object* v___x_3444_; 
v_binderName_3438_ = lean_ctor_get(v_e_3408_, 0);
lean_inc(v_binderName_3438_);
v_binderType_3439_ = lean_ctor_get(v_e_3408_, 1);
lean_inc_ref(v_binderType_3439_);
v_body_3440_ = lean_ctor_get(v_e_3408_, 2);
lean_inc_ref(v_body_3440_);
v_binderInfo_3441_ = lean_ctor_get_uint8(v_e_3408_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_3408_, 3);
v___x_3442_ = lean_box(v___x_3437_);
lean_inc_ref(v_below_3407_);
lean_inc_ref(v_containsRecFn_3406_);
lean_inc_ref(v_recFnNames_3405_);
lean_inc_ref(v_positions_3404_);
lean_inc_ref(v_recArgInfos_3403_);
v___f_3443_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0___boxed), 15, 8);
lean_closure_set(v___f_3443_, 0, v_body_3440_);
lean_closure_set(v___f_3443_, 1, v_recArgInfos_3403_);
lean_closure_set(v___f_3443_, 2, v_positions_3404_);
lean_closure_set(v___f_3443_, 3, v_recFnNames_3405_);
lean_closure_set(v___f_3443_, 4, v_containsRecFn_3406_);
lean_closure_set(v___f_3443_, 5, v_below_3407_);
lean_closure_set(v___f_3443_, 6, v___x_3442_);
lean_closure_set(v___f_3443_, 7, v_a_3429_);
lean_inc_ref(v_a_3412_);
v___x_3444_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3403_, v_positions_3404_, v_recFnNames_3405_, v_containsRecFn_3406_, v_below_3407_, v_binderType_3439_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
if (lean_obj_tag(v___x_3444_) == 0)
{
lean_object* v_a_3445_; uint8_t v___x_3446_; lean_object* v___x_3447_; 
v_a_3445_ = lean_ctor_get(v___x_3444_, 0);
lean_inc(v_a_3445_);
lean_dec_ref_known(v___x_3444_, 1);
v___x_3446_ = 0;
v___x_3447_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_binderName_3438_, v_binderInfo_3441_, v_a_3445_, v___f_3443_, v___x_3446_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
lean_dec_ref(v_a_3412_);
return v___x_3447_;
}
else
{
lean_dec_ref(v___f_3443_);
lean_dec(v_binderName_3438_);
lean_dec_ref(v_a_3412_);
return v___x_3444_;
}
}
case 7:
{
lean_object* v_binderName_3448_; lean_object* v_binderType_3449_; lean_object* v_body_3450_; uint8_t v_binderInfo_3451_; lean_object* v___x_3452_; lean_object* v___f_3453_; lean_object* v___x_3454_; 
v_binderName_3448_ = lean_ctor_get(v_e_3408_, 0);
lean_inc(v_binderName_3448_);
v_binderType_3449_ = lean_ctor_get(v_e_3408_, 1);
lean_inc_ref(v_binderType_3449_);
v_body_3450_ = lean_ctor_get(v_e_3408_, 2);
lean_inc_ref(v_body_3450_);
v_binderInfo_3451_ = lean_ctor_get_uint8(v_e_3408_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_3408_, 3);
v___x_3452_ = lean_box(v___x_3437_);
lean_inc_ref(v_below_3407_);
lean_inc_ref(v_containsRecFn_3406_);
lean_inc_ref(v_recFnNames_3405_);
lean_inc_ref(v_positions_3404_);
lean_inc_ref(v_recArgInfos_3403_);
v___f_3453_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1___boxed), 15, 8);
lean_closure_set(v___f_3453_, 0, v_body_3450_);
lean_closure_set(v___f_3453_, 1, v_recArgInfos_3403_);
lean_closure_set(v___f_3453_, 2, v_positions_3404_);
lean_closure_set(v___f_3453_, 3, v_recFnNames_3405_);
lean_closure_set(v___f_3453_, 4, v_containsRecFn_3406_);
lean_closure_set(v___f_3453_, 5, v_below_3407_);
lean_closure_set(v___f_3453_, 6, v___x_3452_);
lean_closure_set(v___f_3453_, 7, v_a_3429_);
lean_inc_ref(v_a_3412_);
v___x_3454_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3403_, v_positions_3404_, v_recFnNames_3405_, v_containsRecFn_3406_, v_below_3407_, v_binderType_3449_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
if (lean_obj_tag(v___x_3454_) == 0)
{
lean_object* v_a_3455_; uint8_t v___x_3456_; lean_object* v___x_3457_; 
v_a_3455_ = lean_ctor_get(v___x_3454_, 0);
lean_inc(v_a_3455_);
lean_dec_ref_known(v___x_3454_, 1);
v___x_3456_ = 0;
v___x_3457_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_binderName_3448_, v_binderInfo_3451_, v_a_3455_, v___f_3453_, v___x_3456_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
lean_dec_ref(v_a_3412_);
return v___x_3457_;
}
else
{
lean_dec_ref(v___f_3453_);
lean_dec(v_binderName_3448_);
lean_dec_ref(v_a_3412_);
return v___x_3454_;
}
}
case 8:
{
lean_object* v_declName_3458_; lean_object* v_type_3459_; lean_object* v_value_3460_; lean_object* v_body_3461_; uint8_t v_nondep_3462_; lean_object* v___f_3463_; lean_object* v___x_3464_; 
lean_dec(v_a_3429_);
v_declName_3458_ = lean_ctor_get(v_e_3408_, 0);
lean_inc(v_declName_3458_);
v_type_3459_ = lean_ctor_get(v_e_3408_, 1);
lean_inc_ref(v_type_3459_);
v_value_3460_ = lean_ctor_get(v_e_3408_, 2);
lean_inc_ref(v_value_3460_);
v_body_3461_ = lean_ctor_get(v_e_3408_, 3);
lean_inc_ref(v_body_3461_);
v_nondep_3462_ = lean_ctor_get_uint8(v_e_3408_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_3408_, 4);
lean_inc_ref_n(v_below_3407_, 2);
lean_inc_ref_n(v_containsRecFn_3406_, 2);
lean_inc_ref_n(v_recFnNames_3405_, 2);
lean_inc_ref_n(v_positions_3404_, 2);
lean_inc_ref_n(v_recArgInfos_3403_, 2);
v___f_3463_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2___boxed), 13, 6);
lean_closure_set(v___f_3463_, 0, v_body_3461_);
lean_closure_set(v___f_3463_, 1, v_recArgInfos_3403_);
lean_closure_set(v___f_3463_, 2, v_positions_3404_);
lean_closure_set(v___f_3463_, 3, v_recFnNames_3405_);
lean_closure_set(v___f_3463_, 4, v_containsRecFn_3406_);
lean_closure_set(v___f_3463_, 5, v_below_3407_);
lean_inc_ref(v_a_3412_);
v___x_3464_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3403_, v_positions_3404_, v_recFnNames_3405_, v_containsRecFn_3406_, v_below_3407_, v_type_3459_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v_a_3465_; lean_object* v___x_3466_; 
v_a_3465_ = lean_ctor_get(v___x_3464_, 0);
lean_inc(v_a_3465_);
lean_dec_ref_known(v___x_3464_, 1);
lean_inc_ref(v_a_3412_);
v___x_3466_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3403_, v_positions_3404_, v_recFnNames_3405_, v_containsRecFn_3406_, v_below_3407_, v_value_3460_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
if (lean_obj_tag(v___x_3466_) == 0)
{
lean_object* v_a_3467_; uint8_t v___x_3468_; lean_object* v___x_3469_; 
v_a_3467_ = lean_ctor_get(v___x_3466_, 0);
lean_inc(v_a_3467_);
lean_dec_ref_known(v___x_3466_, 1);
v___x_3468_ = 0;
v___x_3469_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(v_declName_3458_, v_a_3465_, v_a_3467_, v___f_3463_, v_nondep_3462_, v___x_3468_, v___x_3437_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
lean_dec_ref(v_a_3412_);
return v___x_3469_;
}
else
{
lean_dec(v_a_3465_);
lean_dec_ref(v___f_3463_);
lean_dec(v_declName_3458_);
lean_dec_ref(v_a_3412_);
return v___x_3466_;
}
}
else
{
lean_dec_ref(v___f_3463_);
lean_dec_ref(v_value_3460_);
lean_dec(v_declName_3458_);
lean_dec_ref(v_a_3412_);
lean_dec_ref(v_below_3407_);
lean_dec_ref(v_containsRecFn_3406_);
lean_dec_ref(v_recFnNames_3405_);
lean_dec_ref(v_positions_3404_);
lean_dec_ref(v_recArgInfos_3403_);
return v___x_3464_;
}
}
case 10:
{
lean_object* v_data_3470_; lean_object* v_expr_3471_; lean_object* v___x_3472_; 
lean_dec(v_a_3429_);
v_data_3470_ = lean_ctor_get(v_e_3408_, 0);
lean_inc(v_data_3470_);
v_expr_3471_ = lean_ctor_get(v_e_3408_, 1);
lean_inc_ref(v_expr_3471_);
v___x_3472_ = l_Lean_getRecAppSyntax_x3f(v_e_3408_);
lean_dec_ref_known(v_e_3408_, 2);
if (lean_obj_tag(v___x_3472_) == 1)
{
lean_object* v_val_3473_; lean_object* v_toCold_3474_; lean_object* v_currRecDepth_3475_; lean_object* v_ref_3476_; uint8_t v_diag_3477_; uint8_t v_suppressElabErrors_3478_; lean_object* v_ref_3479_; lean_object* v___x_3480_; 
lean_dec(v_data_3470_);
v_val_3473_ = lean_ctor_get(v___x_3472_, 0);
lean_inc(v_val_3473_);
lean_dec_ref_known(v___x_3472_, 1);
v_toCold_3474_ = lean_ctor_get(v_a_3412_, 0);
lean_inc_ref(v_toCold_3474_);
v_currRecDepth_3475_ = lean_ctor_get(v_a_3412_, 1);
lean_inc(v_currRecDepth_3475_);
v_ref_3476_ = lean_ctor_get(v_a_3412_, 2);
lean_inc(v_ref_3476_);
v_diag_3477_ = lean_ctor_get_uint8(v_a_3412_, sizeof(void*)*3);
v_suppressElabErrors_3478_ = lean_ctor_get_uint8(v_a_3412_, sizeof(void*)*3 + 1);
lean_dec_ref(v_a_3412_);
v_ref_3479_ = l_Lean_replaceRef(v_val_3473_, v_ref_3476_);
lean_dec(v_ref_3476_);
lean_dec(v_val_3473_);
v___x_3480_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3480_, 0, v_toCold_3474_);
lean_ctor_set(v___x_3480_, 1, v_currRecDepth_3475_);
lean_ctor_set(v___x_3480_, 2, v_ref_3479_);
lean_ctor_set_uint8(v___x_3480_, sizeof(void*)*3, v_diag_3477_);
lean_ctor_set_uint8(v___x_3480_, sizeof(void*)*3 + 1, v_suppressElabErrors_3478_);
v_e_3408_ = v_expr_3471_;
v_a_3412_ = v___x_3480_;
goto _start;
}
else
{
lean_object* v___x_3482_; 
lean_dec(v___x_3472_);
v___x_3482_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3403_, v_positions_3404_, v_recFnNames_3405_, v_containsRecFn_3406_, v_below_3407_, v_expr_3471_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
if (lean_obj_tag(v___x_3482_) == 0)
{
lean_object* v_a_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3491_; 
v_a_3483_ = lean_ctor_get(v___x_3482_, 0);
v_isSharedCheck_3491_ = !lean_is_exclusive(v___x_3482_);
if (v_isSharedCheck_3491_ == 0)
{
v___x_3485_ = v___x_3482_;
v_isShared_3486_ = v_isSharedCheck_3491_;
goto v_resetjp_3484_;
}
else
{
lean_inc(v_a_3483_);
lean_dec(v___x_3482_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3491_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
lean_object* v___x_3487_; lean_object* v___x_3489_; 
v___x_3487_ = l_Lean_mkMData(v_data_3470_, v_a_3483_);
if (v_isShared_3486_ == 0)
{
lean_ctor_set(v___x_3485_, 0, v___x_3487_);
v___x_3489_ = v___x_3485_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v___x_3487_);
v___x_3489_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
return v___x_3489_;
}
}
}
else
{
lean_dec(v_data_3470_);
return v___x_3482_;
}
}
}
case 11:
{
lean_object* v_typeName_3492_; lean_object* v_idx_3493_; lean_object* v_struct_3494_; lean_object* v___x_3495_; 
lean_dec(v_a_3429_);
v_typeName_3492_ = lean_ctor_get(v_e_3408_, 0);
lean_inc(v_typeName_3492_);
v_idx_3493_ = lean_ctor_get(v_e_3408_, 1);
lean_inc(v_idx_3493_);
v_struct_3494_ = lean_ctor_get(v_e_3408_, 2);
lean_inc_ref(v_struct_3494_);
lean_dec_ref_known(v_e_3408_, 3);
v___x_3495_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3403_, v_positions_3404_, v_recFnNames_3405_, v_containsRecFn_3406_, v_below_3407_, v_struct_3494_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; lean_object* v___x_3498_; uint8_t v_isShared_3499_; uint8_t v_isSharedCheck_3504_; 
v_a_3496_ = lean_ctor_get(v___x_3495_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v___x_3495_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3498_ = v___x_3495_;
v_isShared_3499_ = v_isSharedCheck_3504_;
goto v_resetjp_3497_;
}
else
{
lean_inc(v_a_3496_);
lean_dec(v___x_3495_);
v___x_3498_ = lean_box(0);
v_isShared_3499_ = v_isSharedCheck_3504_;
goto v_resetjp_3497_;
}
v_resetjp_3497_:
{
lean_object* v___x_3500_; lean_object* v___x_3502_; 
v___x_3500_ = l_Lean_mkProj(v_typeName_3492_, v_idx_3493_, v_a_3496_);
if (v_isShared_3499_ == 0)
{
lean_ctor_set(v___x_3498_, 0, v___x_3500_);
v___x_3502_ = v___x_3498_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v___x_3500_);
v___x_3502_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
return v___x_3502_;
}
}
}
else
{
lean_dec(v_idx_3493_);
lean_dec(v_typeName_3492_);
return v___x_3495_;
}
}
case 5:
{
uint8_t v___x_3505_; lean_object* v___x_3506_; 
v___x_3505_ = lean_unbox(v_a_3429_);
lean_inc_ref(v_e_3408_);
v___x_3506_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(v_e_3408_, v___x_3505_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
if (lean_obj_tag(v___x_3506_) == 0)
{
lean_object* v_a_3507_; 
v_a_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_a_3507_);
lean_dec_ref_known(v___x_3506_, 1);
if (lean_obj_tag(v_a_3507_) == 0)
{
lean_dec(v_a_3429_);
v_e_3416_ = v_e_3408_;
v___y_3417_ = v_a_3409_;
v___y_3418_ = v_a_3410_;
v___y_3419_ = v_a_3411_;
v___y_3420_ = v_a_3412_;
v___y_3421_ = v_a_3413_;
goto v___jp_3415_;
}
else
{
lean_object* v_val_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; uint8_t v___x_3511_; 
v_val_3508_ = lean_ctor_get(v_a_3507_, 0);
lean_inc(v_val_3508_);
lean_dec_ref_known(v_a_3507_, 1);
v___x_3509_ = lean_unsigned_to_nat(0u);
v___x_3510_ = lean_array_get_size(v_recArgInfos_3403_);
v___x_3511_ = lean_nat_dec_lt(v___x_3509_, v___x_3510_);
if (v___x_3511_ == 0)
{
lean_dec(v_val_3508_);
lean_dec(v_a_3429_);
v_e_3416_ = v_e_3408_;
v___y_3417_ = v_a_3409_;
v___y_3418_ = v_a_3410_;
v___y_3419_ = v_a_3411_;
v___y_3420_ = v_a_3412_;
v___y_3421_ = v_a_3413_;
goto v___jp_3415_;
}
else
{
if (v___x_3511_ == 0)
{
lean_dec(v_val_3508_);
lean_dec(v_a_3429_);
v_e_3416_ = v_e_3408_;
v___y_3417_ = v_a_3409_;
v___y_3418_ = v_a_3410_;
v___y_3419_ = v_a_3411_;
v___y_3420_ = v_a_3412_;
v___y_3421_ = v_a_3413_;
goto v___jp_3415_;
}
else
{
size_t v___x_3512_; size_t v___x_3513_; uint8_t v___x_3514_; 
v___x_3512_ = ((size_t)0ULL);
v___x_3513_ = lean_usize_of_nat(v___x_3510_);
v___x_3514_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(v_e_3408_, v_recArgInfos_3403_, v___x_3512_, v___x_3513_);
if (v___x_3514_ == 0)
{
lean_dec(v_val_3508_);
lean_dec(v_a_3429_);
v_e_3416_ = v_e_3408_;
v___y_3417_ = v_a_3409_;
v___y_3418_ = v_a_3410_;
v___y_3419_ = v_a_3411_;
v___y_3420_ = v_a_3412_;
v___y_3421_ = v_a_3413_;
goto v___jp_3415_;
}
else
{
lean_object* v_toCold_3515_; lean_object* v_inheritedTraceOptions_3516_; lean_object* v___x_3517_; lean_object* v___y_3519_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3522_; lean_object* v___y_3523_; lean_object* v___x_3602_; 
v_toCold_3515_ = lean_ctor_get(v_a_3412_, 0);
v_inheritedTraceOptions_3516_ = lean_ctor_get(v_toCold_3515_, 11);
v___x_3517_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
v___x_3602_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__3(v___x_3517_, v_inheritedTraceOptions_3516_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
if (lean_obj_tag(v___x_3602_) == 0)
{
lean_object* v_a_3603_; uint8_t v___x_3604_; 
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
lean_inc(v_a_3603_);
lean_dec_ref_known(v___x_3602_, 1);
v___x_3604_ = lean_unbox(v_a_3603_);
lean_dec(v_a_3603_);
if (v___x_3604_ == 0)
{
v___y_3519_ = v_a_3409_;
v___y_3520_ = v_a_3410_;
v___y_3521_ = v_a_3411_;
v___y_3522_ = v_a_3412_;
v___y_3523_ = v_a_3413_;
goto v___jp_3518_;
}
else
{
lean_object* v___x_3605_; 
lean_inc(v_a_3413_);
lean_inc_ref(v_a_3412_);
lean_inc(v_a_3411_);
lean_inc_ref(v_a_3410_);
lean_inc_ref(v_below_3407_);
v___x_3605_ = lean_infer_type(v_below_3407_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
if (lean_obj_tag(v___x_3605_) == 0)
{
lean_object* v_a_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; 
v_a_3606_ = lean_ctor_get(v___x_3605_, 0);
lean_inc(v_a_3606_);
lean_dec_ref_known(v___x_3605_, 1);
v___x_3607_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4);
lean_inc_ref(v_below_3407_);
v___x_3608_ = l_Lean_MessageData_ofExpr(v_below_3407_);
v___x_3609_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3609_, 0, v___x_3607_);
lean_ctor_set(v___x_3609_, 1, v___x_3608_);
v___x_3610_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6);
v___x_3611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3609_);
lean_ctor_set(v___x_3611_, 1, v___x_3610_);
v___x_3612_ = l_Lean_MessageData_ofExpr(v_a_3606_);
v___x_3613_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3613_, 0, v___x_3611_);
lean_ctor_set(v___x_3613_, 1, v___x_3612_);
v___x_3614_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg(v___x_3517_, v___x_3613_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_dec_ref_known(v___x_3614_, 1);
v___y_3519_ = v_a_3409_;
v___y_3520_ = v_a_3410_;
v___y_3521_ = v_a_3411_;
v___y_3522_ = v_a_3412_;
v___y_3523_ = v_a_3413_;
goto v___jp_3518_;
}
else
{
lean_object* v_a_3615_; lean_object* v___x_3617_; uint8_t v_isShared_3618_; uint8_t v_isSharedCheck_3622_; 
lean_dec(v_val_3508_);
lean_dec_ref_known(v_e_3408_, 2);
lean_dec(v_a_3429_);
lean_dec_ref(v_a_3412_);
lean_dec_ref(v_below_3407_);
lean_dec_ref(v_containsRecFn_3406_);
lean_dec_ref(v_recFnNames_3405_);
lean_dec_ref(v_positions_3404_);
lean_dec_ref(v_recArgInfos_3403_);
v_a_3615_ = lean_ctor_get(v___x_3614_, 0);
v_isSharedCheck_3622_ = !lean_is_exclusive(v___x_3614_);
if (v_isSharedCheck_3622_ == 0)
{
v___x_3617_ = v___x_3614_;
v_isShared_3618_ = v_isSharedCheck_3622_;
goto v_resetjp_3616_;
}
else
{
lean_inc(v_a_3615_);
lean_dec(v___x_3614_);
v___x_3617_ = lean_box(0);
v_isShared_3618_ = v_isSharedCheck_3622_;
goto v_resetjp_3616_;
}
v_resetjp_3616_:
{
lean_object* v___x_3620_; 
if (v_isShared_3618_ == 0)
{
v___x_3620_ = v___x_3617_;
goto v_reusejp_3619_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v_a_3615_);
v___x_3620_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3619_;
}
v_reusejp_3619_:
{
return v___x_3620_;
}
}
}
}
else
{
lean_dec(v_val_3508_);
lean_dec_ref_known(v_e_3408_, 2);
lean_dec(v_a_3429_);
lean_dec_ref(v_a_3412_);
lean_dec_ref(v_below_3407_);
lean_dec_ref(v_containsRecFn_3406_);
lean_dec_ref(v_recFnNames_3405_);
lean_dec_ref(v_positions_3404_);
lean_dec_ref(v_recArgInfos_3403_);
return v___x_3605_;
}
}
}
else
{
lean_object* v_a_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3630_; 
lean_dec(v_val_3508_);
lean_dec_ref_known(v_e_3408_, 2);
lean_dec(v_a_3429_);
lean_dec_ref(v_a_3412_);
lean_dec_ref(v_below_3407_);
lean_dec_ref(v_containsRecFn_3406_);
lean_dec_ref(v_recFnNames_3405_);
lean_dec_ref(v_positions_3404_);
lean_dec_ref(v_recArgInfos_3403_);
v_a_3623_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3630_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3630_ == 0)
{
v___x_3625_ = v___x_3602_;
v_isShared_3626_ = v_isSharedCheck_3630_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_a_3623_);
lean_dec(v___x_3602_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3630_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v___x_3628_; 
if (v_isShared_3626_ == 0)
{
v___x_3628_ = v___x_3625_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v_a_3623_);
v___x_3628_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
return v___x_3628_;
}
}
}
v___jp_3518_:
{
lean_object* v___x_3524_; 
lean_inc_ref(v_below_3407_);
v___x_3524_ = l_Lean_Meta_MatcherApp_addArg_x3f(v_val_3508_, v_below_3407_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v_a_3525_; 
v_a_3525_ = lean_ctor_get(v___x_3524_, 0);
lean_inc(v_a_3525_);
lean_dec_ref_known(v___x_3524_, 1);
if (lean_obj_tag(v_a_3525_) == 1)
{
lean_object* v_val_3526_; lean_object* v_toMatcherInfo_3527_; lean_object* v_matcherName_3528_; lean_object* v_matcherLevels_3529_; lean_object* v_params_3530_; lean_object* v_motive_3531_; lean_object* v_discrs_3532_; lean_object* v_alts_3533_; lean_object* v_remaining_3534_; lean_object* v___x_3535_; lean_object* v___x_3537_; uint8_t v_isShared_3538_; uint8_t v_isSharedCheck_3562_; 
lean_dec_ref(v_below_3407_);
v_val_3526_ = lean_ctor_get(v_a_3525_, 0);
lean_inc(v_val_3526_);
lean_dec_ref_known(v_a_3525_, 1);
v_toMatcherInfo_3527_ = lean_ctor_get(v_val_3526_, 0);
lean_inc_ref(v_toMatcherInfo_3527_);
v_matcherName_3528_ = lean_ctor_get(v_val_3526_, 1);
lean_inc(v_matcherName_3528_);
v_matcherLevels_3529_ = lean_ctor_get(v_val_3526_, 2);
lean_inc_ref(v_matcherLevels_3529_);
v_params_3530_ = lean_ctor_get(v_val_3526_, 3);
lean_inc_ref(v_params_3530_);
v_motive_3531_ = lean_ctor_get(v_val_3526_, 4);
lean_inc_ref(v_motive_3531_);
v_discrs_3532_ = lean_ctor_get(v_val_3526_, 5);
lean_inc_ref(v_discrs_3532_);
v_alts_3533_ = lean_ctor_get(v_val_3526_, 6);
lean_inc_ref(v_alts_3533_);
v_remaining_3534_ = lean_ctor_get(v_val_3526_, 7);
lean_inc_ref(v_remaining_3534_);
v___x_3535_ = l_Lean_Meta_MatcherApp_altNumParams(v_val_3526_);
v_isSharedCheck_3562_ = !lean_is_exclusive(v_val_3526_);
if (v_isSharedCheck_3562_ == 0)
{
lean_object* v_unused_3563_; lean_object* v_unused_3564_; lean_object* v_unused_3565_; lean_object* v_unused_3566_; lean_object* v_unused_3567_; lean_object* v_unused_3568_; lean_object* v_unused_3569_; lean_object* v_unused_3570_; 
v_unused_3563_ = lean_ctor_get(v_val_3526_, 7);
lean_dec(v_unused_3563_);
v_unused_3564_ = lean_ctor_get(v_val_3526_, 6);
lean_dec(v_unused_3564_);
v_unused_3565_ = lean_ctor_get(v_val_3526_, 5);
lean_dec(v_unused_3565_);
v_unused_3566_ = lean_ctor_get(v_val_3526_, 4);
lean_dec(v_unused_3566_);
v_unused_3567_ = lean_ctor_get(v_val_3526_, 3);
lean_dec(v_unused_3567_);
v_unused_3568_ = lean_ctor_get(v_val_3526_, 2);
lean_dec(v_unused_3568_);
v_unused_3569_ = lean_ctor_get(v_val_3526_, 1);
lean_dec(v_unused_3569_);
v_unused_3570_ = lean_ctor_get(v_val_3526_, 0);
lean_dec(v_unused_3570_);
v___x_3537_ = v_val_3526_;
v_isShared_3538_ = v_isSharedCheck_3562_;
goto v_resetjp_3536_;
}
else
{
lean_dec(v_val_3526_);
v___x_3537_ = lean_box(0);
v_isShared_3538_ = v_isSharedCheck_3562_;
goto v_resetjp_3536_;
}
v_resetjp_3536_:
{
lean_object* v___x_3539_; uint8_t v___x_3540_; lean_object* v___x_3541_; 
v___x_3539_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0));
v___x_3540_ = lean_unbox(v_a_3429_);
lean_dec(v_a_3429_);
v___x_3541_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10(v_recArgInfos_3403_, v_positions_3404_, v_recFnNames_3405_, v_containsRecFn_3406_, v___x_3540_, v_e_3408_, v_alts_3533_, v___x_3535_, v___x_3509_, v___x_3539_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_);
lean_dec_ref(v___y_3522_);
lean_dec_ref(v___x_3535_);
lean_dec_ref(v_alts_3533_);
if (lean_obj_tag(v___x_3541_) == 0)
{
lean_object* v_a_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3553_; 
v_a_3542_ = lean_ctor_get(v___x_3541_, 0);
v_isSharedCheck_3553_ = !lean_is_exclusive(v___x_3541_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3544_ = v___x_3541_;
v_isShared_3545_ = v_isSharedCheck_3553_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_a_3542_);
lean_dec(v___x_3541_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3553_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
lean_object* v___x_3547_; 
if (v_isShared_3538_ == 0)
{
lean_ctor_set(v___x_3537_, 6, v_a_3542_);
v___x_3547_ = v___x_3537_;
goto v_reusejp_3546_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v_toMatcherInfo_3527_);
lean_ctor_set(v_reuseFailAlloc_3552_, 1, v_matcherName_3528_);
lean_ctor_set(v_reuseFailAlloc_3552_, 2, v_matcherLevels_3529_);
lean_ctor_set(v_reuseFailAlloc_3552_, 3, v_params_3530_);
lean_ctor_set(v_reuseFailAlloc_3552_, 4, v_motive_3531_);
lean_ctor_set(v_reuseFailAlloc_3552_, 5, v_discrs_3532_);
lean_ctor_set(v_reuseFailAlloc_3552_, 6, v_a_3542_);
lean_ctor_set(v_reuseFailAlloc_3552_, 7, v_remaining_3534_);
v___x_3547_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3546_;
}
v_reusejp_3546_:
{
lean_object* v___x_3548_; lean_object* v___x_3550_; 
v___x_3548_ = l_Lean_Meta_MatcherApp_toExpr(v___x_3547_);
if (v_isShared_3545_ == 0)
{
lean_ctor_set(v___x_3544_, 0, v___x_3548_);
v___x_3550_ = v___x_3544_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v___x_3548_);
v___x_3550_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
return v___x_3550_;
}
}
}
}
else
{
lean_object* v_a_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3561_; 
lean_del_object(v___x_3537_);
lean_dec_ref(v_remaining_3534_);
lean_dec_ref(v_discrs_3532_);
lean_dec_ref(v_motive_3531_);
lean_dec_ref(v_params_3530_);
lean_dec_ref(v_matcherLevels_3529_);
lean_dec(v_matcherName_3528_);
lean_dec_ref(v_toMatcherInfo_3527_);
v_a_3554_ = lean_ctor_get(v___x_3541_, 0);
v_isSharedCheck_3561_ = !lean_is_exclusive(v___x_3541_);
if (v_isSharedCheck_3561_ == 0)
{
v___x_3556_ = v___x_3541_;
v_isShared_3557_ = v_isSharedCheck_3561_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_a_3554_);
lean_dec(v___x_3541_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3561_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
lean_object* v___x_3559_; 
if (v_isShared_3557_ == 0)
{
v___x_3559_ = v___x_3556_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3560_; 
v_reuseFailAlloc_3560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3560_, 0, v_a_3554_);
v___x_3559_ = v_reuseFailAlloc_3560_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
return v___x_3559_;
}
}
}
}
}
else
{
lean_object* v_toCold_3571_; lean_object* v_inheritedTraceOptions_3572_; lean_object* v___x_3573_; 
lean_dec(v_a_3525_);
lean_dec(v_a_3429_);
v_toCold_3571_ = lean_ctor_get(v___y_3522_, 0);
v_inheritedTraceOptions_3572_ = lean_ctor_get(v_toCold_3571_, 11);
v___x_3573_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__3(v___x_3517_, v_inheritedTraceOptions_3572_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_);
if (lean_obj_tag(v___x_3573_) == 0)
{
lean_object* v_a_3574_; uint8_t v___x_3575_; 
v_a_3574_ = lean_ctor_get(v___x_3573_, 0);
lean_inc(v_a_3574_);
lean_dec_ref_known(v___x_3573_, 1);
v___x_3575_ = lean_unbox(v_a_3574_);
lean_dec(v_a_3574_);
if (v___x_3575_ == 0)
{
v_e_3416_ = v_e_3408_;
v___y_3417_ = v___y_3519_;
v___y_3418_ = v___y_3520_;
v___y_3419_ = v___y_3521_;
v___y_3420_ = v___y_3522_;
v___y_3421_ = v___y_3523_;
goto v___jp_3415_;
}
else
{
lean_object* v___x_3576_; lean_object* v___x_3577_; 
v___x_3576_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2);
v___x_3577_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg(v___x_3517_, v___x_3576_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_);
if (lean_obj_tag(v___x_3577_) == 0)
{
lean_dec_ref_known(v___x_3577_, 1);
v_e_3416_ = v_e_3408_;
v___y_3417_ = v___y_3519_;
v___y_3418_ = v___y_3520_;
v___y_3419_ = v___y_3521_;
v___y_3420_ = v___y_3522_;
v___y_3421_ = v___y_3523_;
goto v___jp_3415_;
}
else
{
lean_object* v_a_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3585_; 
lean_dec_ref(v___y_3522_);
lean_dec_ref_known(v_e_3408_, 2);
lean_dec_ref(v_below_3407_);
lean_dec_ref(v_containsRecFn_3406_);
lean_dec_ref(v_recFnNames_3405_);
lean_dec_ref(v_positions_3404_);
lean_dec_ref(v_recArgInfos_3403_);
v_a_3578_ = lean_ctor_get(v___x_3577_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3577_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3580_ = v___x_3577_;
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_a_3578_);
lean_dec(v___x_3577_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v___x_3583_; 
if (v_isShared_3581_ == 0)
{
v___x_3583_ = v___x_3580_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3578_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
}
}
else
{
lean_object* v_a_3586_; lean_object* v___x_3588_; uint8_t v_isShared_3589_; uint8_t v_isSharedCheck_3593_; 
lean_dec_ref(v___y_3522_);
lean_dec_ref_known(v_e_3408_, 2);
lean_dec_ref(v_below_3407_);
lean_dec_ref(v_containsRecFn_3406_);
lean_dec_ref(v_recFnNames_3405_);
lean_dec_ref(v_positions_3404_);
lean_dec_ref(v_recArgInfos_3403_);
v_a_3586_ = lean_ctor_get(v___x_3573_, 0);
v_isSharedCheck_3593_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3593_ == 0)
{
v___x_3588_ = v___x_3573_;
v_isShared_3589_ = v_isSharedCheck_3593_;
goto v_resetjp_3587_;
}
else
{
lean_inc(v_a_3586_);
lean_dec(v___x_3573_);
v___x_3588_ = lean_box(0);
v_isShared_3589_ = v_isSharedCheck_3593_;
goto v_resetjp_3587_;
}
v_resetjp_3587_:
{
lean_object* v___x_3591_; 
if (v_isShared_3589_ == 0)
{
v___x_3591_ = v___x_3588_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v_a_3586_);
v___x_3591_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
return v___x_3591_;
}
}
}
}
}
else
{
lean_object* v_a_3594_; lean_object* v___x_3596_; uint8_t v_isShared_3597_; uint8_t v_isSharedCheck_3601_; 
lean_dec_ref(v___y_3522_);
lean_dec_ref_known(v_e_3408_, 2);
lean_dec(v_a_3429_);
lean_dec_ref(v_below_3407_);
lean_dec_ref(v_containsRecFn_3406_);
lean_dec_ref(v_recFnNames_3405_);
lean_dec_ref(v_positions_3404_);
lean_dec_ref(v_recArgInfos_3403_);
v_a_3594_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3601_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3601_ == 0)
{
v___x_3596_ = v___x_3524_;
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
else
{
lean_inc(v_a_3594_);
lean_dec(v___x_3524_);
v___x_3596_ = lean_box(0);
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
v_resetjp_3595_:
{
lean_object* v___x_3599_; 
if (v_isShared_3597_ == 0)
{
v___x_3599_ = v___x_3596_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3600_; 
v_reuseFailAlloc_3600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3600_, 0, v_a_3594_);
v___x_3599_ = v_reuseFailAlloc_3600_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
return v___x_3599_;
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
lean_object* v_a_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3638_; 
lean_dec_ref_known(v_e_3408_, 2);
lean_dec(v_a_3429_);
lean_dec_ref(v_a_3412_);
lean_dec_ref(v_below_3407_);
lean_dec_ref(v_containsRecFn_3406_);
lean_dec_ref(v_recFnNames_3405_);
lean_dec_ref(v_positions_3404_);
lean_dec_ref(v_recArgInfos_3403_);
v_a_3631_ = lean_ctor_get(v___x_3506_, 0);
v_isSharedCheck_3638_ = !lean_is_exclusive(v___x_3506_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3633_ = v___x_3506_;
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_a_3631_);
lean_dec(v___x_3506_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v___x_3636_; 
if (v_isShared_3634_ == 0)
{
v___x_3636_ = v___x_3633_;
goto v_reusejp_3635_;
}
else
{
lean_object* v_reuseFailAlloc_3637_; 
v_reuseFailAlloc_3637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3637_, 0, v_a_3631_);
v___x_3636_ = v_reuseFailAlloc_3637_;
goto v_reusejp_3635_;
}
v_reusejp_3635_:
{
return v___x_3636_;
}
}
}
}
default: 
{
lean_object* v___x_3639_; 
lean_dec(v_a_3429_);
lean_dec_ref(v_below_3407_);
lean_dec_ref(v_containsRecFn_3406_);
lean_dec_ref(v_positions_3404_);
lean_dec_ref(v_recArgInfos_3403_);
lean_inc_ref(v_e_3408_);
v___x_3639_ = l_Lean_Elab_ensureNoRecFn(v_recFnNames_3405_, v_e_3408_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
lean_dec_ref(v_a_3412_);
if (lean_obj_tag(v___x_3639_) == 0)
{
lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3646_; 
v_isSharedCheck_3646_ = !lean_is_exclusive(v___x_3639_);
if (v_isSharedCheck_3646_ == 0)
{
lean_object* v_unused_3647_; 
v_unused_3647_ = lean_ctor_get(v___x_3639_, 0);
lean_dec(v_unused_3647_);
v___x_3641_ = v___x_3639_;
v_isShared_3642_ = v_isSharedCheck_3646_;
goto v_resetjp_3640_;
}
else
{
lean_dec(v___x_3639_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3646_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
lean_object* v___x_3644_; 
if (v_isShared_3642_ == 0)
{
lean_ctor_set(v___x_3641_, 0, v_e_3408_);
v___x_3644_ = v___x_3641_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3645_; 
v_reuseFailAlloc_3645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3645_, 0, v_e_3408_);
v___x_3644_ = v_reuseFailAlloc_3645_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
return v___x_3644_;
}
}
}
else
{
lean_object* v_a_3648_; lean_object* v___x_3650_; uint8_t v_isShared_3651_; uint8_t v_isSharedCheck_3655_; 
lean_dec_ref(v_e_3408_);
v_a_3648_ = lean_ctor_get(v___x_3639_, 0);
v_isSharedCheck_3655_ = !lean_is_exclusive(v___x_3639_);
if (v_isSharedCheck_3655_ == 0)
{
v___x_3650_ = v___x_3639_;
v_isShared_3651_ = v_isSharedCheck_3655_;
goto v_resetjp_3649_;
}
else
{
lean_inc(v_a_3648_);
lean_dec(v___x_3639_);
v___x_3650_ = lean_box(0);
v_isShared_3651_ = v_isSharedCheck_3655_;
goto v_resetjp_3649_;
}
v_resetjp_3649_:
{
lean_object* v___x_3653_; 
if (v_isShared_3651_ == 0)
{
v___x_3653_ = v___x_3650_;
goto v_reusejp_3652_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v_a_3648_);
v___x_3653_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3652_;
}
v_reusejp_3652_:
{
return v___x_3653_;
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
lean_object* v_a_3657_; lean_object* v___x_3659_; uint8_t v_isShared_3660_; uint8_t v_isSharedCheck_3664_; 
lean_dec_ref(v_a_3412_);
lean_dec_ref(v_e_3408_);
lean_dec_ref(v_below_3407_);
lean_dec_ref(v_containsRecFn_3406_);
lean_dec_ref(v_recFnNames_3405_);
lean_dec_ref(v_positions_3404_);
lean_dec_ref(v_recArgInfos_3403_);
v_a_3657_ = lean_ctor_get(v___x_3428_, 0);
v_isSharedCheck_3664_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3664_ == 0)
{
v___x_3659_ = v___x_3428_;
v_isShared_3660_ = v_isSharedCheck_3664_;
goto v_resetjp_3658_;
}
else
{
lean_inc(v_a_3657_);
lean_dec(v___x_3428_);
v___x_3659_ = lean_box(0);
v_isShared_3660_ = v_isSharedCheck_3664_;
goto v_resetjp_3658_;
}
v_resetjp_3658_:
{
lean_object* v___x_3662_; 
if (v_isShared_3660_ == 0)
{
v___x_3662_ = v___x_3659_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3663_; 
v_reuseFailAlloc_3663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3663_, 0, v_a_3657_);
v___x_3662_ = v_reuseFailAlloc_3663_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
return v___x_3662_;
}
}
}
v___jp_3415_:
{
lean_object* v_dummy_3422_; lean_object* v_nargs_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; 
v_dummy_3422_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1);
v_nargs_3423_ = l_Lean_Expr_getAppNumArgs(v_e_3416_);
lean_inc(v_nargs_3423_);
v___x_3424_ = lean_mk_array(v_nargs_3423_, v_dummy_3422_);
v___x_3425_ = lean_unsigned_to_nat(1u);
v___x_3426_ = lean_nat_sub(v_nargs_3423_, v___x_3425_);
lean_dec(v_nargs_3423_);
lean_inc_ref(v_e_3416_);
v___x_3427_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(v_recArgInfos_3403_, v_positions_3404_, v_recFnNames_3405_, v_containsRecFn_3406_, v_below_3407_, v_e_3416_, v_e_3416_, v___x_3424_, v___x_3426_, v___y_3417_, v___y_3418_, v___y_3419_, v___y_3420_, v___y_3421_);
lean_dec_ref(v___y_3420_);
return v___x_3427_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2(lean_object* v_body_3665_, lean_object* v_recArgInfos_3666_, lean_object* v_positions_3667_, lean_object* v_recFnNames_3668_, lean_object* v_containsRecFn_3669_, lean_object* v_below_3670_, lean_object* v_x_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_){
_start:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; 
v___x_3678_ = lean_expr_instantiate1(v_body_3665_, v_x_3671_);
lean_inc_ref(v___y_3675_);
v___x_3679_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3666_, v_positions_3667_, v_recFnNames_3668_, v_containsRecFn_3669_, v_below_3670_, v___x_3678_, v___y_3672_, v___y_3673_, v___y_3674_, v___y_3675_, v___y_3676_);
return v___x_3679_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___boxed(lean_object* v_recArgInfos_3680_, lean_object* v_positions_3681_, lean_object* v_recFnNames_3682_, lean_object* v_containsRecFn_3683_, lean_object* v_a_3684_, lean_object* v_e_3685_, lean_object* v_as_3686_, lean_object* v_bs_3687_, lean_object* v_i_3688_, lean_object* v_cs_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_){
_start:
{
uint8_t v_a_28629__boxed_3696_; lean_object* v_res_3697_; 
v_a_28629__boxed_3696_ = lean_unbox(v_a_3684_);
v_res_3697_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10(v_recArgInfos_3680_, v_positions_3681_, v_recFnNames_3682_, v_containsRecFn_3683_, v_a_28629__boxed_3696_, v_e_3685_, v_as_3686_, v_bs_3687_, v_i_3688_, v_cs_3689_, v___y_3690_, v___y_3691_, v___y_3692_, v___y_3693_, v___y_3694_);
lean_dec(v___y_3694_);
lean_dec_ref(v___y_3693_);
lean_dec(v___y_3692_);
lean_dec_ref(v___y_3691_);
lean_dec(v___y_3690_);
lean_dec_ref(v_bs_3687_);
lean_dec_ref(v_as_3686_);
return v_res_3697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___boxed(lean_object* v_recArgInfos_3698_, lean_object* v_positions_3699_, lean_object* v_recFnNames_3700_, lean_object* v_containsRecFn_3701_, lean_object* v_below_3702_, lean_object* v_e_3703_, lean_object* v_x_3704_, lean_object* v_x_3705_, lean_object* v_x_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_){
_start:
{
lean_object* v_res_3713_; 
v_res_3713_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(v_recArgInfos_3698_, v_positions_3699_, v_recFnNames_3700_, v_containsRecFn_3701_, v_below_3702_, v_e_3703_, v_x_3704_, v_x_3705_, v_x_3706_, v___y_3707_, v___y_3708_, v___y_3709_, v___y_3710_, v___y_3711_);
lean_dec(v___y_3711_);
lean_dec_ref(v___y_3710_);
lean_dec(v___y_3709_);
lean_dec_ref(v___y_3708_);
lean_dec(v___y_3707_);
return v_res_3713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___boxed(lean_object* v_recArgInfos_3714_, lean_object* v_positions_3715_, lean_object* v_recFnNames_3716_, lean_object* v_containsRecFn_3717_, lean_object* v_below_3718_, lean_object* v_e_3719_, lean_object* v_a_3720_, lean_object* v_a_3721_, lean_object* v_a_3722_, lean_object* v_a_3723_, lean_object* v_a_3724_, lean_object* v_a_3725_){
_start:
{
lean_object* v_res_3726_; 
v_res_3726_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3714_, v_positions_3715_, v_recFnNames_3716_, v_containsRecFn_3717_, v_below_3718_, v_e_3719_, v_a_3720_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_);
lean_dec(v_a_3724_);
lean_dec(v_a_3722_);
lean_dec_ref(v_a_3721_);
lean_dec(v_a_3720_);
return v_res_3726_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1(lean_object* v_00_u03b1_3727_, lean_object* v_msg_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_){
_start:
{
lean_object* v___x_3735_; 
v___x_3735_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v_msg_3728_, v___y_3730_, v___y_3731_, v___y_3732_, v___y_3733_);
return v___x_3735_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___boxed(lean_object* v_00_u03b1_3736_, lean_object* v_msg_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_){
_start:
{
lean_object* v_res_3744_; 
v_res_3744_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1(v_00_u03b1_3736_, v_msg_3737_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_, v___y_3742_);
lean_dec(v___y_3742_);
lean_dec_ref(v___y_3741_);
lean_dec(v___y_3740_);
lean_dec_ref(v___y_3739_);
lean_dec(v___y_3738_);
return v_res_3744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4(lean_object* v_00_u03b1_3745_, lean_object* v_name_3746_, lean_object* v_type_3747_, lean_object* v_val_3748_, lean_object* v_k_3749_, uint8_t v_nondep_3750_, uint8_t v_kind_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_){
_start:
{
lean_object* v___x_3758_; 
v___x_3758_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(v_name_3746_, v_type_3747_, v_val_3748_, v_k_3749_, v_nondep_3750_, v_kind_3751_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_, v___y_3756_);
return v___x_3758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object* v_00_u03b1_3759_, lean_object* v_name_3760_, lean_object* v_type_3761_, lean_object* v_val_3762_, lean_object* v_k_3763_, lean_object* v_nondep_3764_, lean_object* v_kind_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_){
_start:
{
uint8_t v_nondep_boxed_3772_; uint8_t v_kind_boxed_3773_; lean_object* v_res_3774_; 
v_nondep_boxed_3772_ = lean_unbox(v_nondep_3764_);
v_kind_boxed_3773_ = lean_unbox(v_kind_3765_);
v_res_3774_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4(v_00_u03b1_3759_, v_name_3760_, v_type_3761_, v_val_3762_, v_k_3763_, v_nondep_boxed_3772_, v_kind_boxed_3773_, v___y_3766_, v___y_3767_, v___y_3768_, v___y_3769_, v___y_3770_);
lean_dec(v___y_3770_);
lean_dec_ref(v___y_3769_);
lean_dec(v___y_3768_);
lean_dec_ref(v___y_3767_);
lean_dec(v___y_3766_);
return v_res_3774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8(lean_object* v_declName_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_){
_start:
{
lean_object* v___x_3782_; 
v___x_3782_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(v_declName_3775_, v___y_3780_);
return v___x_3782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___boxed(lean_object* v_declName_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_){
_start:
{
lean_object* v_res_3790_; 
v_res_3790_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8(v_declName_3783_, v___y_3784_, v___y_3785_, v___y_3786_, v___y_3787_, v___y_3788_);
lean_dec(v___y_3788_);
lean_dec_ref(v___y_3787_);
lean_dec(v___y_3786_);
lean_dec_ref(v___y_3785_);
lean_dec(v___y_3784_);
return v_res_3790_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8(lean_object* v_cls_3791_, lean_object* v_msg_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_){
_start:
{
lean_object* v___x_3799_; 
v___x_3799_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg(v_cls_3791_, v_msg_3792_, v___y_3794_, v___y_3795_, v___y_3796_, v___y_3797_);
return v___x_3799_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___boxed(lean_object* v_cls_3800_, lean_object* v_msg_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_){
_start:
{
lean_object* v_res_3808_; 
v_res_3808_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8(v_cls_3800_, v_msg_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_);
lean_dec(v___y_3806_);
lean_dec_ref(v___y_3805_);
lean_dec(v___y_3804_);
lean_dec_ref(v___y_3803_);
lean_dec(v___y_3802_);
return v_res_3808_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8(lean_object* v_00_u03b1_3809_, lean_object* v_constName_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_){
_start:
{
lean_object* v___x_3817_; 
v___x_3817_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___redArg(v_constName_3810_, v___y_3811_, v___y_3812_, v___y_3813_, v___y_3814_, v___y_3815_);
return v___x_3817_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___boxed(lean_object* v_00_u03b1_3818_, lean_object* v_constName_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_){
_start:
{
lean_object* v_res_3826_; 
v_res_3826_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8(v_00_u03b1_3818_, v_constName_3819_, v___y_3820_, v___y_3821_, v___y_3822_, v___y_3823_, v___y_3824_);
lean_dec(v___y_3824_);
lean_dec_ref(v___y_3823_);
lean_dec(v___y_3822_);
lean_dec_ref(v___y_3821_);
lean_dec(v___y_3820_);
return v_res_3826_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15(lean_object* v_00_u03b1_3827_, lean_object* v_ref_3828_, lean_object* v_constName_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_){
_start:
{
lean_object* v___x_3836_; 
v___x_3836_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg(v_ref_3828_, v_constName_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_);
return v___x_3836_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___boxed(lean_object* v_00_u03b1_3837_, lean_object* v_ref_3838_, lean_object* v_constName_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_){
_start:
{
lean_object* v_res_3846_; 
v_res_3846_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15(v_00_u03b1_3837_, v_ref_3838_, v_constName_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
lean_dec(v___y_3844_);
lean_dec_ref(v___y_3843_);
lean_dec(v___y_3842_);
lean_dec_ref(v___y_3841_);
lean_dec(v___y_3840_);
lean_dec(v_ref_3838_);
return v_res_3846_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17(lean_object* v_00_u03b1_3847_, lean_object* v_ref_3848_, lean_object* v_msg_3849_, lean_object* v_declHint_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_){
_start:
{
lean_object* v___x_3857_; 
v___x_3857_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___redArg(v_ref_3848_, v_msg_3849_, v_declHint_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_);
return v___x_3857_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___boxed(lean_object* v_00_u03b1_3858_, lean_object* v_ref_3859_, lean_object* v_msg_3860_, lean_object* v_declHint_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_){
_start:
{
lean_object* v_res_3868_; 
v_res_3868_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17(v_00_u03b1_3858_, v_ref_3859_, v_msg_3860_, v_declHint_3861_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_, v___y_3866_);
lean_dec(v___y_3866_);
lean_dec_ref(v___y_3865_);
lean_dec(v___y_3864_);
lean_dec_ref(v___y_3863_);
lean_dec(v___y_3862_);
lean_dec(v_ref_3859_);
return v_res_3868_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19(lean_object* v_msg_3869_, lean_object* v_declHint_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_){
_start:
{
lean_object* v___x_3877_; 
v___x_3877_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg(v_msg_3869_, v_declHint_3870_, v___y_3875_);
return v___x_3877_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___boxed(lean_object* v_msg_3878_, lean_object* v_declHint_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_){
_start:
{
lean_object* v_res_3886_; 
v_res_3886_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19(v_msg_3878_, v_declHint_3879_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_);
lean_dec(v___y_3884_);
lean_dec_ref(v___y_3883_);
lean_dec(v___y_3882_);
lean_dec_ref(v___y_3881_);
lean_dec(v___y_3880_);
return v_res_3886_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19(lean_object* v_00_u03b1_3887_, lean_object* v_ref_3888_, lean_object* v_msg_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_){
_start:
{
lean_object* v___x_3896_; 
v___x_3896_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___redArg(v_ref_3888_, v_msg_3889_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_, v___y_3894_);
return v___x_3896_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___boxed(lean_object* v_00_u03b1_3897_, lean_object* v_ref_3898_, lean_object* v_msg_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_){
_start:
{
lean_object* v_res_3906_; 
v_res_3906_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19(v_00_u03b1_3897_, v_ref_3898_, v_msg_3899_, v___y_3900_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_);
lean_dec(v___y_3904_);
lean_dec_ref(v___y_3903_);
lean_dec(v___y_3902_);
lean_dec_ref(v___y_3901_);
lean_dec(v___y_3900_);
lean_dec(v_ref_3898_);
return v_res_3906_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0(lean_object* v_recFnNames_3907_, lean_object* v_e_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_){
_start:
{
lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v_fst_3917_; lean_object* v_snd_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; 
v___x_3915_ = lean_st_ref_take(v___y_3909_);
v___x_3916_ = l_Lean_HasConstCache_containsUnsafe(v_recFnNames_3907_, v_e_3908_, v___x_3915_);
v_fst_3917_ = lean_ctor_get(v___x_3916_, 0);
lean_inc(v_fst_3917_);
v_snd_3918_ = lean_ctor_get(v___x_3916_, 1);
lean_inc(v_snd_3918_);
lean_dec_ref(v___x_3916_);
v___x_3919_ = lean_st_ref_put(v___y_3909_, v_snd_3918_);
v___x_3920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3920_, 0, v_fst_3917_);
return v___x_3920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0___boxed(lean_object* v_recFnNames_3921_, lean_object* v_e_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_){
_start:
{
lean_object* v_res_3929_; 
v_res_3929_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0(v_recFnNames_3921_, v_e_3922_, v___y_3923_, v___y_3924_, v___y_3925_, v___y_3926_, v___y_3927_);
lean_dec(v___y_3927_);
lean_dec_ref(v___y_3926_);
lean_dec(v___y_3925_);
lean_dec_ref(v___y_3924_);
lean_dec(v___y_3923_);
lean_dec(v_recFnNames_3921_);
return v_res_3929_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(size_t v_sz_3930_, size_t v_i_3931_, lean_object* v_bs_3932_){
_start:
{
uint8_t v___x_3933_; 
v___x_3933_ = lean_usize_dec_lt(v_i_3931_, v_sz_3930_);
if (v___x_3933_ == 0)
{
lean_object* v___x_3934_; 
v___x_3934_ = l_unsafeCast___redArg(v_bs_3932_);
lean_dec_ref(v_bs_3932_);
return v___x_3934_;
}
else
{
lean_object* v_v_3935_; lean_object* v___x_3936_; lean_object* v_fnName_3937_; lean_object* v___x_3938_; lean_object* v_bs_x27_3939_; size_t v___x_3940_; size_t v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; 
v_v_3935_ = lean_array_uget_borrowed(v_bs_3932_, v_i_3931_);
v___x_3936_ = l_unsafeCast___redArg(v_v_3935_);
v_fnName_3937_ = lean_ctor_get(v___x_3936_, 0);
lean_inc(v_fnName_3937_);
lean_dec(v___x_3936_);
v___x_3938_ = lean_unsigned_to_nat(0u);
v_bs_x27_3939_ = lean_array_uset(v_bs_3932_, v_i_3931_, v___x_3938_);
v___x_3940_ = ((size_t)1ULL);
v___x_3941_ = lean_usize_add(v_i_3931_, v___x_3940_);
v___x_3942_ = l_unsafeCast___redArg(v_fnName_3937_);
lean_dec(v_fnName_3937_);
v___x_3943_ = lean_array_uset(v_bs_x27_3939_, v_i_3931_, v___x_3942_);
v_i_3931_ = v___x_3941_;
v_bs_3932_ = v___x_3943_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0___boxed(lean_object* v_sz_3945_, lean_object* v_i_3946_, lean_object* v_bs_3947_){
_start:
{
size_t v_sz_boxed_3948_; size_t v_i_boxed_3949_; lean_object* v_res_3950_; 
v_sz_boxed_3948_ = lean_unbox_usize(v_sz_3945_);
lean_dec(v_sz_3945_);
v_i_boxed_3949_ = lean_unbox_usize(v_i_3946_);
lean_dec(v_i_3946_);
v_res_3950_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(v_sz_boxed_3948_, v_i_boxed_3949_, v_bs_3947_);
return v_res_3950_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0(void){
_start:
{
lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; 
v___x_3951_ = lean_box(0);
v___x_3952_ = lean_unsigned_to_nat(16u);
v___x_3953_ = lean_mk_array(v___x_3952_, v___x_3951_);
return v___x_3953_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1(void){
_start:
{
lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; 
v___x_3954_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0);
v___x_3955_ = lean_unsigned_to_nat(0u);
v___x_3956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3956_, 0, v___x_3955_);
lean_ctor_set(v___x_3956_, 1, v___x_3954_);
return v___x_3956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(lean_object* v_recArgInfos_3957_, lean_object* v_positions_3958_, lean_object* v_below_3959_, lean_object* v_e_3960_, lean_object* v_a_3961_, lean_object* v_a_3962_, lean_object* v_a_3963_, lean_object* v_a_3964_){
_start:
{
size_t v_sz_3966_; size_t v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v_recFnNames_3970_; lean_object* v_containsRecFn_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; 
v_sz_3966_ = lean_array_size(v_recArgInfos_3957_);
v___x_3967_ = ((size_t)0ULL);
v___x_3968_ = l_unsafeCast___redArg(v_recArgInfos_3957_);
v___x_3969_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(v_sz_3966_, v___x_3967_, v___x_3968_);
v_recFnNames_3970_ = l_unsafeCast___redArg(v___x_3969_);
lean_dec_ref(v___x_3969_);
lean_inc(v_recFnNames_3970_);
v_containsRecFn_3971_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0___boxed), 8, 1);
lean_closure_set(v_containsRecFn_3971_, 0, v_recFnNames_3970_);
v___x_3972_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1);
v___x_3973_ = lean_st_mk_ref(v___x_3972_);
lean_inc_ref(v_a_3963_);
v___x_3974_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3957_, v_positions_3958_, v_recFnNames_3970_, v_containsRecFn_3971_, v_below_3959_, v_e_3960_, v___x_3973_, v_a_3961_, v_a_3962_, v_a_3963_, v_a_3964_);
if (lean_obj_tag(v___x_3974_) == 0)
{
lean_object* v_a_3975_; lean_object* v___x_3977_; uint8_t v_isShared_3978_; uint8_t v_isSharedCheck_3983_; 
v_a_3975_ = lean_ctor_get(v___x_3974_, 0);
v_isSharedCheck_3983_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_3983_ == 0)
{
v___x_3977_ = v___x_3974_;
v_isShared_3978_ = v_isSharedCheck_3983_;
goto v_resetjp_3976_;
}
else
{
lean_inc(v_a_3975_);
lean_dec(v___x_3974_);
v___x_3977_ = lean_box(0);
v_isShared_3978_ = v_isSharedCheck_3983_;
goto v_resetjp_3976_;
}
v_resetjp_3976_:
{
lean_object* v___x_3979_; lean_object* v___x_3981_; 
v___x_3979_ = lean_st_ref_get(v___x_3973_);
lean_dec(v___x_3973_);
lean_dec(v___x_3979_);
if (v_isShared_3978_ == 0)
{
v___x_3981_ = v___x_3977_;
goto v_reusejp_3980_;
}
else
{
lean_object* v_reuseFailAlloc_3982_; 
v_reuseFailAlloc_3982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3982_, 0, v_a_3975_);
v___x_3981_ = v_reuseFailAlloc_3982_;
goto v_reusejp_3980_;
}
v_reusejp_3980_:
{
return v___x_3981_;
}
}
}
else
{
lean_dec(v___x_3973_);
return v___x_3974_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___boxed(lean_object* v_recArgInfos_3984_, lean_object* v_positions_3985_, lean_object* v_below_3986_, lean_object* v_e_3987_, lean_object* v_a_3988_, lean_object* v_a_3989_, lean_object* v_a_3990_, lean_object* v_a_3991_, lean_object* v_a_3992_){
_start:
{
lean_object* v_res_3993_; 
v_res_3993_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(v_recArgInfos_3984_, v_positions_3985_, v_below_3986_, v_e_3987_, v_a_3988_, v_a_3989_, v_a_3990_, v_a_3991_);
lean_dec(v_a_3991_);
lean_dec_ref(v_a_3990_);
lean_dec(v_a_3989_);
lean_dec_ref(v_a_3988_);
return v_res_3993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(lean_object* v_e_3994_, lean_object* v_k_3995_, uint8_t v_cleanupAnnotations_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_){
_start:
{
lean_object* v___f_4002_; uint8_t v___x_4003_; uint8_t v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; 
v___f_4002_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4002_, 0, v_k_3995_);
v___x_4003_ = 1;
v___x_4004_ = 0;
v___x_4005_ = lean_box(0);
v___x_4006_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_3994_, v___x_4003_, v___x_4004_, v___x_4003_, v___x_4004_, v___x_4005_, v___f_4002_, v_cleanupAnnotations_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_);
if (lean_obj_tag(v___x_4006_) == 0)
{
lean_object* v_a_4007_; lean_object* v___x_4009_; uint8_t v_isShared_4010_; uint8_t v_isSharedCheck_4014_; 
v_a_4007_ = lean_ctor_get(v___x_4006_, 0);
v_isSharedCheck_4014_ = !lean_is_exclusive(v___x_4006_);
if (v_isSharedCheck_4014_ == 0)
{
v___x_4009_ = v___x_4006_;
v_isShared_4010_ = v_isSharedCheck_4014_;
goto v_resetjp_4008_;
}
else
{
lean_inc(v_a_4007_);
lean_dec(v___x_4006_);
v___x_4009_ = lean_box(0);
v_isShared_4010_ = v_isSharedCheck_4014_;
goto v_resetjp_4008_;
}
v_resetjp_4008_:
{
lean_object* v___x_4012_; 
if (v_isShared_4010_ == 0)
{
v___x_4012_ = v___x_4009_;
goto v_reusejp_4011_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v_a_4007_);
v___x_4012_ = v_reuseFailAlloc_4013_;
goto v_reusejp_4011_;
}
v_reusejp_4011_:
{
return v___x_4012_;
}
}
}
else
{
lean_object* v_a_4015_; lean_object* v___x_4017_; uint8_t v_isShared_4018_; uint8_t v_isSharedCheck_4022_; 
v_a_4015_ = lean_ctor_get(v___x_4006_, 0);
v_isSharedCheck_4022_ = !lean_is_exclusive(v___x_4006_);
if (v_isSharedCheck_4022_ == 0)
{
v___x_4017_ = v___x_4006_;
v_isShared_4018_ = v_isSharedCheck_4022_;
goto v_resetjp_4016_;
}
else
{
lean_inc(v_a_4015_);
lean_dec(v___x_4006_);
v___x_4017_ = lean_box(0);
v_isShared_4018_ = v_isSharedCheck_4022_;
goto v_resetjp_4016_;
}
v_resetjp_4016_:
{
lean_object* v___x_4020_; 
if (v_isShared_4018_ == 0)
{
v___x_4020_ = v___x_4017_;
goto v_reusejp_4019_;
}
else
{
lean_object* v_reuseFailAlloc_4021_; 
v_reuseFailAlloc_4021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4021_, 0, v_a_4015_);
v___x_4020_ = v_reuseFailAlloc_4021_;
goto v_reusejp_4019_;
}
v_reusejp_4019_:
{
return v___x_4020_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg___boxed(lean_object* v_e_4023_, lean_object* v_k_4024_, lean_object* v_cleanupAnnotations_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4031_; lean_object* v_res_4032_; 
v_cleanupAnnotations_boxed_4031_ = lean_unbox(v_cleanupAnnotations_4025_);
v_res_4032_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_e_4023_, v_k_4024_, v_cleanupAnnotations_boxed_4031_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_);
lean_dec(v___y_4029_);
lean_dec_ref(v___y_4028_);
lean_dec(v___y_4027_);
lean_dec_ref(v___y_4026_);
return v_res_4032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0(lean_object* v_00_u03b1_4033_, lean_object* v_e_4034_, lean_object* v_k_4035_, uint8_t v_cleanupAnnotations_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_){
_start:
{
lean_object* v___x_4042_; 
v___x_4042_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_e_4034_, v_k_4035_, v_cleanupAnnotations_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_);
return v___x_4042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___boxed(lean_object* v_00_u03b1_4043_, lean_object* v_e_4044_, lean_object* v_k_4045_, lean_object* v_cleanupAnnotations_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4052_; lean_object* v_res_4053_; 
v_cleanupAnnotations_boxed_4052_ = lean_unbox(v_cleanupAnnotations_4046_);
v_res_4053_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0(v_00_u03b1_4043_, v_e_4044_, v_k_4045_, v_cleanupAnnotations_boxed_4052_, v___y_4047_, v___y_4048_, v___y_4049_, v___y_4050_);
lean_dec(v___y_4050_);
lean_dec_ref(v___y_4049_);
lean_dec(v___y_4048_);
lean_dec_ref(v___y_4047_);
return v_res_4053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___lam__0(lean_object* v_type_4054_, lean_object* v_recArgInfo_4055_, lean_object* v_xs_4056_, lean_object* v___value_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_){
_start:
{
lean_object* v___x_4063_; 
v___x_4063_ = l_Lean_Meta_instantiateForall(v_type_4054_, v_xs_4056_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_);
if (lean_obj_tag(v___x_4063_) == 0)
{
lean_object* v_a_4064_; lean_object* v___x_4065_; lean_object* v_fst_4066_; lean_object* v_snd_4067_; uint8_t v___x_4068_; uint8_t v___x_4069_; uint8_t v___x_4070_; lean_object* v___x_4071_; 
v_a_4064_ = lean_ctor_get(v___x_4063_, 0);
lean_inc(v_a_4064_);
lean_dec_ref_known(v___x_4063_, 1);
v___x_4065_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v_recArgInfo_4055_, v_xs_4056_);
v_fst_4066_ = lean_ctor_get(v___x_4065_, 0);
lean_inc(v_fst_4066_);
v_snd_4067_ = lean_ctor_get(v___x_4065_, 1);
lean_inc(v_snd_4067_);
lean_dec_ref(v___x_4065_);
v___x_4068_ = 0;
v___x_4069_ = 1;
v___x_4070_ = 1;
v___x_4071_ = l_Lean_Meta_mkForallFVars(v_snd_4067_, v_a_4064_, v___x_4068_, v___x_4069_, v___x_4069_, v___x_4070_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_);
if (lean_obj_tag(v___x_4071_) == 0)
{
lean_object* v_a_4072_; lean_object* v___x_4073_; 
v_a_4072_ = lean_ctor_get(v___x_4071_, 0);
lean_inc(v_a_4072_);
lean_dec_ref_known(v___x_4071_, 1);
v___x_4073_ = l_Lean_Meta_mkLambdaFVars(v_fst_4066_, v_a_4072_, v___x_4068_, v___x_4069_, v___x_4068_, v___x_4069_, v___x_4070_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_);
return v___x_4073_;
}
else
{
lean_dec(v_fst_4066_);
return v___x_4071_;
}
}
else
{
lean_dec_ref(v_xs_4056_);
lean_dec_ref(v_recArgInfo_4055_);
return v___x_4063_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___lam__0___boxed(lean_object* v_type_4074_, lean_object* v_recArgInfo_4075_, lean_object* v_xs_4076_, lean_object* v___value_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_){
_start:
{
lean_object* v_res_4083_; 
v_res_4083_ = l_Lean_Elab_Structural_mkBRecOnMotive___lam__0(v_type_4074_, v_recArgInfo_4075_, v_xs_4076_, v___value_4077_, v___y_4078_, v___y_4079_, v___y_4080_, v___y_4081_);
lean_dec(v___y_4081_);
lean_dec_ref(v___y_4080_);
lean_dec(v___y_4079_);
lean_dec_ref(v___y_4078_);
lean_dec_ref(v___value_4077_);
return v_res_4083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive(lean_object* v_recArgInfo_4084_, lean_object* v_value_4085_, lean_object* v_type_4086_, lean_object* v_a_4087_, lean_object* v_a_4088_, lean_object* v_a_4089_, lean_object* v_a_4090_){
_start:
{
lean_object* v___f_4092_; uint8_t v___x_4093_; lean_object* v___x_4094_; 
v___f_4092_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnMotive___lam__0___boxed), 9, 2);
lean_closure_set(v___f_4092_, 0, v_type_4086_);
lean_closure_set(v___f_4092_, 1, v_recArgInfo_4084_);
v___x_4093_ = 0;
v___x_4094_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_value_4085_, v___f_4092_, v___x_4093_, v_a_4087_, v_a_4088_, v_a_4089_, v_a_4090_);
return v___x_4094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___boxed(lean_object* v_recArgInfo_4095_, lean_object* v_value_4096_, lean_object* v_type_4097_, lean_object* v_a_4098_, lean_object* v_a_4099_, lean_object* v_a_4100_, lean_object* v_a_4101_, lean_object* v_a_4102_){
_start:
{
lean_object* v_res_4103_; 
v_res_4103_ = l_Lean_Elab_Structural_mkBRecOnMotive(v_recArgInfo_4095_, v_value_4096_, v_type_4097_, v_a_4098_, v_a_4099_, v_a_4100_, v_a_4101_);
lean_dec(v_a_4101_);
lean_dec_ref(v_a_4100_);
lean_dec(v_a_4099_);
lean_dec_ref(v_a_4098_);
return v_res_4103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(lean_object* v_type_4104_, lean_object* v_maxFVars_x3f_4105_, lean_object* v_k_4106_, uint8_t v_cleanupAnnotations_4107_, uint8_t v_whnfType_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_){
_start:
{
lean_object* v___f_4114_; lean_object* v___x_4115_; 
v___f_4114_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4114_, 0, v_k_4106_);
v___x_4115_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_4104_, v_maxFVars_x3f_4105_, v___f_4114_, v_cleanupAnnotations_4107_, v_whnfType_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_);
if (lean_obj_tag(v___x_4115_) == 0)
{
lean_object* v_a_4116_; lean_object* v___x_4118_; uint8_t v_isShared_4119_; uint8_t v_isSharedCheck_4123_; 
v_a_4116_ = lean_ctor_get(v___x_4115_, 0);
v_isSharedCheck_4123_ = !lean_is_exclusive(v___x_4115_);
if (v_isSharedCheck_4123_ == 0)
{
v___x_4118_ = v___x_4115_;
v_isShared_4119_ = v_isSharedCheck_4123_;
goto v_resetjp_4117_;
}
else
{
lean_inc(v_a_4116_);
lean_dec(v___x_4115_);
v___x_4118_ = lean_box(0);
v_isShared_4119_ = v_isSharedCheck_4123_;
goto v_resetjp_4117_;
}
v_resetjp_4117_:
{
lean_object* v___x_4121_; 
if (v_isShared_4119_ == 0)
{
v___x_4121_ = v___x_4118_;
goto v_reusejp_4120_;
}
else
{
lean_object* v_reuseFailAlloc_4122_; 
v_reuseFailAlloc_4122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4122_, 0, v_a_4116_);
v___x_4121_ = v_reuseFailAlloc_4122_;
goto v_reusejp_4120_;
}
v_reusejp_4120_:
{
return v___x_4121_;
}
}
}
else
{
lean_object* v_a_4124_; lean_object* v___x_4126_; uint8_t v_isShared_4127_; uint8_t v_isSharedCheck_4131_; 
v_a_4124_ = lean_ctor_get(v___x_4115_, 0);
v_isSharedCheck_4131_ = !lean_is_exclusive(v___x_4115_);
if (v_isSharedCheck_4131_ == 0)
{
v___x_4126_ = v___x_4115_;
v_isShared_4127_ = v_isSharedCheck_4131_;
goto v_resetjp_4125_;
}
else
{
lean_inc(v_a_4124_);
lean_dec(v___x_4115_);
v___x_4126_ = lean_box(0);
v_isShared_4127_ = v_isSharedCheck_4131_;
goto v_resetjp_4125_;
}
v_resetjp_4125_:
{
lean_object* v___x_4129_; 
if (v_isShared_4127_ == 0)
{
v___x_4129_ = v___x_4126_;
goto v_reusejp_4128_;
}
else
{
lean_object* v_reuseFailAlloc_4130_; 
v_reuseFailAlloc_4130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4130_, 0, v_a_4124_);
v___x_4129_ = v_reuseFailAlloc_4130_;
goto v_reusejp_4128_;
}
v_reusejp_4128_:
{
return v___x_4129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg___boxed(lean_object* v_type_4132_, lean_object* v_maxFVars_x3f_4133_, lean_object* v_k_4134_, lean_object* v_cleanupAnnotations_4135_, lean_object* v_whnfType_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4142_; uint8_t v_whnfType_boxed_4143_; lean_object* v_res_4144_; 
v_cleanupAnnotations_boxed_4142_ = lean_unbox(v_cleanupAnnotations_4135_);
v_whnfType_boxed_4143_ = lean_unbox(v_whnfType_4136_);
v_res_4144_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_type_4132_, v_maxFVars_x3f_4133_, v_k_4134_, v_cleanupAnnotations_boxed_4142_, v_whnfType_boxed_4143_, v___y_4137_, v___y_4138_, v___y_4139_, v___y_4140_);
lean_dec(v___y_4140_);
lean_dec_ref(v___y_4139_);
lean_dec(v___y_4138_);
lean_dec_ref(v___y_4137_);
return v_res_4144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0(lean_object* v_00_u03b1_4145_, lean_object* v_type_4146_, lean_object* v_maxFVars_x3f_4147_, lean_object* v_k_4148_, uint8_t v_cleanupAnnotations_4149_, uint8_t v_whnfType_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_){
_start:
{
lean_object* v___x_4156_; 
v___x_4156_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_type_4146_, v_maxFVars_x3f_4147_, v_k_4148_, v_cleanupAnnotations_4149_, v_whnfType_4150_, v___y_4151_, v___y_4152_, v___y_4153_, v___y_4154_);
return v___x_4156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___boxed(lean_object* v_00_u03b1_4157_, lean_object* v_type_4158_, lean_object* v_maxFVars_x3f_4159_, lean_object* v_k_4160_, lean_object* v_cleanupAnnotations_4161_, lean_object* v_whnfType_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4168_; uint8_t v_whnfType_boxed_4169_; lean_object* v_res_4170_; 
v_cleanupAnnotations_boxed_4168_ = lean_unbox(v_cleanupAnnotations_4161_);
v_whnfType_boxed_4169_ = lean_unbox(v_whnfType_4162_);
v_res_4170_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0(v_00_u03b1_4157_, v_type_4158_, v_maxFVars_x3f_4159_, v_k_4160_, v_cleanupAnnotations_boxed_4168_, v_whnfType_boxed_4169_, v___y_4163_, v___y_4164_, v___y_4165_, v___y_4166_);
lean_dec(v___y_4166_);
lean_dec_ref(v___y_4165_);
lean_dec(v___y_4164_);
lean_dec_ref(v___y_4163_);
return v_res_4170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__0(lean_object* v___x_4171_, lean_object* v_recArgInfos_4172_, lean_object* v_positions_4173_, lean_object* v_value_4174_, lean_object* v_fst_4175_, lean_object* v_snd_4176_, lean_object* v_below_4177_, lean_object* v_x_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_){
_start:
{
lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; 
v___x_4184_ = lean_unsigned_to_nat(0u);
v___x_4185_ = lean_array_get_borrowed(v___x_4171_, v_below_4177_, v___x_4184_);
lean_inc(v___x_4185_);
v___x_4186_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(v_recArgInfos_4172_, v_positions_4173_, v___x_4185_, v_value_4174_, v___y_4179_, v___y_4180_, v___y_4181_, v___y_4182_);
if (lean_obj_tag(v___x_4186_) == 0)
{
lean_object* v_a_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; uint8_t v___x_4193_; uint8_t v___x_4194_; uint8_t v___x_4195_; lean_object* v___x_4196_; 
v_a_4187_ = lean_ctor_get(v___x_4186_, 0);
lean_inc(v_a_4187_);
lean_dec_ref_known(v___x_4186_, 1);
v___x_4188_ = lean_unsigned_to_nat(1u);
v___x_4189_ = lean_mk_empty_array_with_capacity(v___x_4188_);
lean_inc(v___x_4185_);
v___x_4190_ = lean_array_push(v___x_4189_, v___x_4185_);
v___x_4191_ = l_Array_append___redArg(v_fst_4175_, v___x_4190_);
lean_dec_ref(v___x_4190_);
v___x_4192_ = l_Array_append___redArg(v___x_4191_, v_snd_4176_);
v___x_4193_ = 0;
v___x_4194_ = 1;
v___x_4195_ = 1;
v___x_4196_ = l_Lean_Meta_mkLambdaFVars(v___x_4192_, v_a_4187_, v___x_4193_, v___x_4194_, v___x_4193_, v___x_4194_, v___x_4195_, v___y_4179_, v___y_4180_, v___y_4181_, v___y_4182_);
return v___x_4196_;
}
else
{
lean_dec_ref(v_fst_4175_);
return v___x_4186_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__0___boxed(lean_object* v___x_4197_, lean_object* v_recArgInfos_4198_, lean_object* v_positions_4199_, lean_object* v_value_4200_, lean_object* v_fst_4201_, lean_object* v_snd_4202_, lean_object* v_below_4203_, lean_object* v_x_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_){
_start:
{
lean_object* v_res_4210_; 
v_res_4210_ = l_Lean_Elab_Structural_mkBRecOnF___lam__0(v___x_4197_, v_recArgInfos_4198_, v_positions_4199_, v_value_4200_, v_fst_4201_, v_snd_4202_, v_below_4203_, v_x_4204_, v___y_4205_, v___y_4206_, v___y_4207_, v___y_4208_);
lean_dec(v___y_4208_);
lean_dec_ref(v___y_4207_);
lean_dec(v___y_4206_);
lean_dec_ref(v___y_4205_);
lean_dec_ref(v_x_4204_);
lean_dec_ref(v_below_4203_);
lean_dec_ref(v_snd_4202_);
lean_dec_ref(v___x_4197_);
return v_res_4210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1(lean_object* v_recArgInfo_4213_, lean_object* v___x_4214_, lean_object* v_recArgInfos_4215_, lean_object* v_positions_4216_, lean_object* v_FType_4217_, lean_object* v_xs_4218_, lean_object* v_value_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_){
_start:
{
lean_object* v___x_4225_; lean_object* v_fst_4226_; lean_object* v_snd_4227_; lean_object* v___f_4228_; lean_object* v___x_4229_; 
v___x_4225_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v_recArgInfo_4213_, v_xs_4218_);
v_fst_4226_ = lean_ctor_get(v___x_4225_, 0);
lean_inc_n(v_fst_4226_, 2);
v_snd_4227_ = lean_ctor_get(v___x_4225_, 1);
lean_inc(v_snd_4227_);
lean_dec_ref(v___x_4225_);
v___f_4228_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnF___lam__0___boxed), 13, 6);
lean_closure_set(v___f_4228_, 0, v___x_4214_);
lean_closure_set(v___f_4228_, 1, v_recArgInfos_4215_);
lean_closure_set(v___f_4228_, 2, v_positions_4216_);
lean_closure_set(v___f_4228_, 3, v_value_4219_);
lean_closure_set(v___f_4228_, 4, v_fst_4226_);
lean_closure_set(v___f_4228_, 5, v_snd_4227_);
v___x_4229_ = l_Lean_Meta_instantiateForall(v_FType_4217_, v_fst_4226_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_);
lean_dec(v_fst_4226_);
if (lean_obj_tag(v___x_4229_) == 0)
{
lean_object* v_a_4230_; lean_object* v___x_4231_; uint8_t v___x_4232_; lean_object* v___x_4233_; 
v_a_4230_ = lean_ctor_get(v___x_4229_, 0);
lean_inc(v_a_4230_);
lean_dec_ref_known(v___x_4229_, 1);
v___x_4231_ = ((lean_object*)(l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0));
v___x_4232_ = 0;
v___x_4233_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_a_4230_, v___x_4231_, v___f_4228_, v___x_4232_, v___x_4232_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_);
return v___x_4233_;
}
else
{
lean_dec_ref(v___f_4228_);
return v___x_4229_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1___boxed(lean_object* v_recArgInfo_4234_, lean_object* v___x_4235_, lean_object* v_recArgInfos_4236_, lean_object* v_positions_4237_, lean_object* v_FType_4238_, lean_object* v_xs_4239_, lean_object* v_value_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_){
_start:
{
lean_object* v_res_4246_; 
v_res_4246_ = l_Lean_Elab_Structural_mkBRecOnF___lam__1(v_recArgInfo_4234_, v___x_4235_, v_recArgInfos_4236_, v_positions_4237_, v_FType_4238_, v_xs_4239_, v_value_4240_, v___y_4241_, v___y_4242_, v___y_4243_, v___y_4244_);
lean_dec(v___y_4244_);
lean_dec_ref(v___y_4243_);
lean_dec(v___y_4242_);
lean_dec_ref(v___y_4241_);
return v_res_4246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF(lean_object* v_recArgInfos_4247_, lean_object* v_positions_4248_, lean_object* v_recArgInfo_4249_, lean_object* v_value_4250_, lean_object* v_FType_4251_, lean_object* v_a_4252_, lean_object* v_a_4253_, lean_object* v_a_4254_, lean_object* v_a_4255_){
_start:
{
lean_object* v___x_4257_; lean_object* v___f_4258_; uint8_t v___x_4259_; lean_object* v___x_4260_; 
v___x_4257_ = l_Lean_instInhabitedExpr;
v___f_4258_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnF___lam__1___boxed), 12, 5);
lean_closure_set(v___f_4258_, 0, v_recArgInfo_4249_);
lean_closure_set(v___f_4258_, 1, v___x_4257_);
lean_closure_set(v___f_4258_, 2, v_recArgInfos_4247_);
lean_closure_set(v___f_4258_, 3, v_positions_4248_);
lean_closure_set(v___f_4258_, 4, v_FType_4251_);
v___x_4259_ = 0;
v___x_4260_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_value_4250_, v___f_4258_, v___x_4259_, v_a_4252_, v_a_4253_, v_a_4254_, v_a_4255_);
return v___x_4260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___boxed(lean_object* v_recArgInfos_4261_, lean_object* v_positions_4262_, lean_object* v_recArgInfo_4263_, lean_object* v_value_4264_, lean_object* v_FType_4265_, lean_object* v_a_4266_, lean_object* v_a_4267_, lean_object* v_a_4268_, lean_object* v_a_4269_, lean_object* v_a_4270_){
_start:
{
lean_object* v_res_4271_; 
v_res_4271_ = l_Lean_Elab_Structural_mkBRecOnF(v_recArgInfos_4261_, v_positions_4262_, v_recArgInfo_4263_, v_value_4264_, v_FType_4265_, v_a_4266_, v_a_4267_, v_a_4268_, v_a_4269_);
lean_dec(v_a_4269_);
lean_dec_ref(v_a_4268_);
lean_dec(v_a_4267_);
lean_dec_ref(v_a_4266_);
return v_res_4271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__0(lean_object* v_toIndGroupInfo_4272_, lean_object* v_params_4273_, uint8_t v_isIndPred_4274_, lean_object* v_brecOnUniv_4275_, lean_object* v_levels_4276_, lean_object* v_idx_4277_){
_start:
{
lean_object* v_n_4278_; lean_object* v___y_4280_; 
v_n_4278_ = l_Lean_Elab_Structural_IndGroupInfo_brecOnName(v_toIndGroupInfo_4272_, v_idx_4277_);
if (v_isIndPred_4274_ == 0)
{
lean_object* v___x_4283_; 
v___x_4283_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4283_, 0, v_brecOnUniv_4275_);
lean_ctor_set(v___x_4283_, 1, v_levels_4276_);
v___y_4280_ = v___x_4283_;
goto v___jp_4279_;
}
else
{
lean_dec(v_brecOnUniv_4275_);
v___y_4280_ = v_levels_4276_;
goto v___jp_4279_;
}
v___jp_4279_:
{
lean_object* v___x_4281_; lean_object* v___x_4282_; 
v___x_4281_ = l_Lean_Expr_const___override(v_n_4278_, v___y_4280_);
v___x_4282_ = l_Lean_mkAppN(v___x_4281_, v_params_4273_);
return v___x_4282_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__0___boxed(lean_object* v_toIndGroupInfo_4284_, lean_object* v_params_4285_, lean_object* v_isIndPred_4286_, lean_object* v_brecOnUniv_4287_, lean_object* v_levels_4288_, lean_object* v_idx_4289_){
_start:
{
uint8_t v_isIndPred_boxed_4290_; lean_object* v_res_4291_; 
v_isIndPred_boxed_4290_ = lean_unbox(v_isIndPred_4286_);
v_res_4291_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__0(v_toIndGroupInfo_4284_, v_params_4285_, v_isIndPred_boxed_4290_, v_brecOnUniv_4287_, v_levels_4288_, v_idx_4289_);
lean_dec(v_idx_4289_);
lean_dec_ref(v_params_4285_);
lean_dec_ref(v_toIndGroupInfo_4284_);
return v_res_4291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__1(lean_object* v_brecOnCons_4292_, lean_object* v_a_4293_, lean_object* v_n_4294_){
_start:
{
lean_object* v___x_4295_; lean_object* v___x_4296_; 
v___x_4295_ = lean_apply_1(v_brecOnCons_4292_, v_n_4294_);
v___x_4296_ = l_Lean_mkAppN(v___x_4295_, v_a_4293_);
return v___x_4296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__1___boxed(lean_object* v_brecOnCons_4297_, lean_object* v_a_4298_, lean_object* v_n_4299_){
_start:
{
lean_object* v_res_4300_; 
v_res_4300_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__1(v_brecOnCons_4297_, v_a_4298_, v_n_4299_);
lean_dec_ref(v_a_4298_);
return v_res_4300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__2(lean_object* v_x_4301_, lean_object* v_type_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_){
_start:
{
lean_object* v___x_4308_; 
v___x_4308_ = l_Lean_Meta_getLevel(v_type_4302_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_);
return v___x_4308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__2___boxed(lean_object* v_x_4309_, lean_object* v_type_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_){
_start:
{
lean_object* v_res_4316_; 
v_res_4316_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__2(v_x_4309_, v_type_4310_, v___y_4311_, v___y_4312_, v___y_4313_, v___y_4314_);
lean_dec(v___y_4314_);
lean_dec_ref(v___y_4313_);
lean_dec(v___y_4312_);
lean_dec_ref(v___y_4311_);
lean_dec_ref(v_x_4309_);
return v_res_4316_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0(lean_object* v_xs_4317_, size_t v_sz_4318_, size_t v_i_4319_, lean_object* v_bs_4320_){
_start:
{
uint8_t v___x_4321_; 
v___x_4321_ = lean_usize_dec_lt(v_i_4319_, v_sz_4318_);
if (v___x_4321_ == 0)
{
lean_object* v___x_4322_; 
v___x_4322_ = l_unsafeCast___redArg(v_bs_4320_);
lean_dec_ref(v_bs_4320_);
return v___x_4322_;
}
else
{
lean_object* v___x_4323_; lean_object* v_v_4324_; lean_object* v___x_4325_; lean_object* v_bs_x27_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; size_t v___x_4329_; size_t v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; 
v___x_4323_ = l_Lean_instInhabitedExpr;
v_v_4324_ = lean_array_uget(v_bs_4320_, v_i_4319_);
v___x_4325_ = lean_unsigned_to_nat(0u);
v_bs_x27_4326_ = lean_array_uset(v_bs_4320_, v_i_4319_, v___x_4325_);
v___x_4327_ = l_unsafeCast___redArg(v_v_4324_);
lean_dec(v_v_4324_);
v___x_4328_ = lean_array_get_borrowed(v___x_4323_, v_xs_4317_, v___x_4327_);
lean_dec(v___x_4327_);
v___x_4329_ = ((size_t)1ULL);
v___x_4330_ = lean_usize_add(v_i_4319_, v___x_4329_);
v___x_4331_ = l_unsafeCast___redArg(v___x_4328_);
v___x_4332_ = lean_array_uset(v_bs_x27_4326_, v_i_4319_, v___x_4331_);
v_i_4319_ = v___x_4330_;
v_bs_4320_ = v___x_4332_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___boxed(lean_object* v_xs_4334_, lean_object* v_sz_4335_, lean_object* v_i_4336_, lean_object* v_bs_4337_){
_start:
{
size_t v_sz_boxed_4338_; size_t v_i_boxed_4339_; lean_object* v_res_4340_; 
v_sz_boxed_4338_ = lean_unbox_usize(v_sz_4335_);
lean_dec(v_sz_4335_);
v_i_boxed_4339_ = lean_unbox_usize(v_i_4336_);
lean_dec(v_i_4336_);
v_res_4340_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0(v_xs_4334_, v_sz_boxed_4338_, v_i_boxed_4339_, v_bs_4337_);
lean_dec_ref(v_xs_4334_);
return v_res_4340_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(lean_object* v_xs_4341_, lean_object* v_f_4342_, lean_object* v_as_4343_, lean_object* v_bs_4344_, lean_object* v_i_4345_, lean_object* v_cs_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_){
_start:
{
lean_object* v___x_4352_; uint8_t v___x_4353_; 
v___x_4352_ = lean_array_get_size(v_as_4343_);
v___x_4353_ = lean_nat_dec_lt(v_i_4345_, v___x_4352_);
if (v___x_4353_ == 0)
{
lean_object* v___x_4354_; 
lean_dec(v_i_4345_);
lean_dec_ref(v_f_4342_);
v___x_4354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4354_, 0, v_cs_4346_);
return v___x_4354_;
}
else
{
lean_object* v___x_4355_; uint8_t v___x_4356_; 
v___x_4355_ = lean_array_get_size(v_bs_4344_);
v___x_4356_ = lean_nat_dec_lt(v_i_4345_, v___x_4355_);
if (v___x_4356_ == 0)
{
lean_object* v___x_4357_; 
lean_dec(v_i_4345_);
lean_dec_ref(v_f_4342_);
v___x_4357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4357_, 0, v_cs_4346_);
return v___x_4357_;
}
else
{
lean_object* v_a_4358_; lean_object* v_b_4359_; size_t v_sz_4360_; size_t v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; 
v_a_4358_ = lean_array_fget_borrowed(v_as_4343_, v_i_4345_);
v_b_4359_ = lean_array_fget_borrowed(v_bs_4344_, v_i_4345_);
v_sz_4360_ = lean_array_size(v_b_4359_);
v___x_4361_ = ((size_t)0ULL);
v___x_4362_ = l_unsafeCast___redArg(v_b_4359_);
v___x_4363_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0(v_xs_4341_, v_sz_4360_, v___x_4361_, v___x_4362_);
v___x_4364_ = l_unsafeCast___redArg(v___x_4363_);
lean_dec_ref(v___x_4363_);
lean_inc_ref(v_f_4342_);
lean_inc(v___y_4350_);
lean_inc_ref(v___y_4349_);
lean_inc(v___y_4348_);
lean_inc_ref(v___y_4347_);
lean_inc(v_a_4358_);
v___x_4365_ = lean_apply_7(v_f_4342_, v_a_4358_, v___x_4364_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_, lean_box(0));
if (lean_obj_tag(v___x_4365_) == 0)
{
lean_object* v_a_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; 
v_a_4366_ = lean_ctor_get(v___x_4365_, 0);
lean_inc(v_a_4366_);
lean_dec_ref_known(v___x_4365_, 1);
v___x_4367_ = lean_unsigned_to_nat(1u);
v___x_4368_ = lean_nat_add(v_i_4345_, v___x_4367_);
lean_dec(v_i_4345_);
v___x_4369_ = lean_array_push(v_cs_4346_, v_a_4366_);
v_i_4345_ = v___x_4368_;
v_cs_4346_ = v___x_4369_;
goto _start;
}
else
{
lean_object* v_a_4371_; lean_object* v___x_4373_; uint8_t v_isShared_4374_; uint8_t v_isSharedCheck_4378_; 
lean_dec_ref(v_cs_4346_);
lean_dec(v_i_4345_);
lean_dec_ref(v_f_4342_);
v_a_4371_ = lean_ctor_get(v___x_4365_, 0);
v_isSharedCheck_4378_ = !lean_is_exclusive(v___x_4365_);
if (v_isSharedCheck_4378_ == 0)
{
v___x_4373_ = v___x_4365_;
v_isShared_4374_ = v_isSharedCheck_4378_;
goto v_resetjp_4372_;
}
else
{
lean_inc(v_a_4371_);
lean_dec(v___x_4365_);
v___x_4373_ = lean_box(0);
v_isShared_4374_ = v_isSharedCheck_4378_;
goto v_resetjp_4372_;
}
v_resetjp_4372_:
{
lean_object* v___x_4376_; 
if (v_isShared_4374_ == 0)
{
v___x_4376_ = v___x_4373_;
goto v_reusejp_4375_;
}
else
{
lean_object* v_reuseFailAlloc_4377_; 
v_reuseFailAlloc_4377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4377_, 0, v_a_4371_);
v___x_4376_ = v_reuseFailAlloc_4377_;
goto v_reusejp_4375_;
}
v_reusejp_4375_:
{
return v___x_4376_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg___boxed(lean_object* v_xs_4379_, lean_object* v_f_4380_, lean_object* v_as_4381_, lean_object* v_bs_4382_, lean_object* v_i_4383_, lean_object* v_cs_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_){
_start:
{
lean_object* v_res_4390_; 
v_res_4390_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(v_xs_4379_, v_f_4380_, v_as_4381_, v_bs_4382_, v_i_4383_, v_cs_4384_, v___y_4385_, v___y_4386_, v___y_4387_, v___y_4388_);
lean_dec(v___y_4388_);
lean_dec_ref(v___y_4387_);
lean_dec(v___y_4386_);
lean_dec_ref(v___y_4385_);
lean_dec_ref(v_bs_4382_);
lean_dec_ref(v_as_4381_);
lean_dec_ref(v_xs_4379_);
return v_res_4390_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_4391_; 
v___x_4391_ = l_Array_instInhabited___redArg();
return v___x_4391_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(lean_object* v_msg_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_){
_start:
{
lean_object* v___x_4398_; lean_object* v_toApplicative_4399_; lean_object* v_toFunctor_4400_; lean_object* v_toSeq_4401_; lean_object* v_toSeqLeft_4402_; lean_object* v_toSeqRight_4403_; lean_object* v___f_4404_; lean_object* v___f_4405_; lean_object* v___f_4406_; lean_object* v___f_4407_; lean_object* v___x_4408_; lean_object* v___f_4409_; lean_object* v___f_4410_; lean_object* v___f_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v_toApplicative_4415_; lean_object* v___x_4417_; uint8_t v_isShared_4418_; uint8_t v_isSharedCheck_4446_; 
v___x_4398_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1);
v_toApplicative_4399_ = lean_ctor_get(v___x_4398_, 0);
v_toFunctor_4400_ = lean_ctor_get(v_toApplicative_4399_, 0);
v_toSeq_4401_ = lean_ctor_get(v_toApplicative_4399_, 2);
v_toSeqLeft_4402_ = lean_ctor_get(v_toApplicative_4399_, 3);
v_toSeqRight_4403_ = lean_ctor_get(v_toApplicative_4399_, 4);
v___f_4404_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2));
v___f_4405_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_4400_, 2);
v___f_4406_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4406_, 0, v_toFunctor_4400_);
v___f_4407_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4407_, 0, v_toFunctor_4400_);
v___x_4408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4408_, 0, v___f_4406_);
lean_ctor_set(v___x_4408_, 1, v___f_4407_);
lean_inc(v_toSeqRight_4403_);
v___f_4409_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4409_, 0, v_toSeqRight_4403_);
lean_inc(v_toSeqLeft_4402_);
v___f_4410_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4410_, 0, v_toSeqLeft_4402_);
lean_inc(v_toSeq_4401_);
v___f_4411_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4411_, 0, v_toSeq_4401_);
v___x_4412_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4412_, 0, v___x_4408_);
lean_ctor_set(v___x_4412_, 1, v___f_4404_);
lean_ctor_set(v___x_4412_, 2, v___f_4411_);
lean_ctor_set(v___x_4412_, 3, v___f_4410_);
lean_ctor_set(v___x_4412_, 4, v___f_4409_);
v___x_4413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4413_, 0, v___x_4412_);
lean_ctor_set(v___x_4413_, 1, v___f_4405_);
v___x_4414_ = l_StateRefT_x27_instMonad___redArg(v___x_4413_);
v_toApplicative_4415_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4446_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4446_ == 0)
{
lean_object* v_unused_4447_; 
v_unused_4447_ = lean_ctor_get(v___x_4414_, 1);
lean_dec(v_unused_4447_);
v___x_4417_ = v___x_4414_;
v_isShared_4418_ = v_isSharedCheck_4446_;
goto v_resetjp_4416_;
}
else
{
lean_inc(v_toApplicative_4415_);
lean_dec(v___x_4414_);
v___x_4417_ = lean_box(0);
v_isShared_4418_ = v_isSharedCheck_4446_;
goto v_resetjp_4416_;
}
v_resetjp_4416_:
{
lean_object* v_toFunctor_4419_; lean_object* v_toSeq_4420_; lean_object* v_toSeqLeft_4421_; lean_object* v_toSeqRight_4422_; lean_object* v___x_4424_; uint8_t v_isShared_4425_; uint8_t v_isSharedCheck_4444_; 
v_toFunctor_4419_ = lean_ctor_get(v_toApplicative_4415_, 0);
v_toSeq_4420_ = lean_ctor_get(v_toApplicative_4415_, 2);
v_toSeqLeft_4421_ = lean_ctor_get(v_toApplicative_4415_, 3);
v_toSeqRight_4422_ = lean_ctor_get(v_toApplicative_4415_, 4);
v_isSharedCheck_4444_ = !lean_is_exclusive(v_toApplicative_4415_);
if (v_isSharedCheck_4444_ == 0)
{
lean_object* v_unused_4445_; 
v_unused_4445_ = lean_ctor_get(v_toApplicative_4415_, 1);
lean_dec(v_unused_4445_);
v___x_4424_ = v_toApplicative_4415_;
v_isShared_4425_ = v_isSharedCheck_4444_;
goto v_resetjp_4423_;
}
else
{
lean_inc(v_toSeqRight_4422_);
lean_inc(v_toSeqLeft_4421_);
lean_inc(v_toSeq_4420_);
lean_inc(v_toFunctor_4419_);
lean_dec(v_toApplicative_4415_);
v___x_4424_ = lean_box(0);
v_isShared_4425_ = v_isSharedCheck_4444_;
goto v_resetjp_4423_;
}
v_resetjp_4423_:
{
lean_object* v___f_4426_; lean_object* v___f_4427_; lean_object* v___f_4428_; lean_object* v___f_4429_; lean_object* v___x_4430_; lean_object* v___f_4431_; lean_object* v___f_4432_; lean_object* v___f_4433_; lean_object* v___x_4435_; 
v___f_4426_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4));
v___f_4427_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5));
lean_inc_ref(v_toFunctor_4419_);
v___f_4428_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4428_, 0, v_toFunctor_4419_);
v___f_4429_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4429_, 0, v_toFunctor_4419_);
v___x_4430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4430_, 0, v___f_4428_);
lean_ctor_set(v___x_4430_, 1, v___f_4429_);
v___f_4431_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4431_, 0, v_toSeqRight_4422_);
v___f_4432_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4432_, 0, v_toSeqLeft_4421_);
v___f_4433_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4433_, 0, v_toSeq_4420_);
if (v_isShared_4425_ == 0)
{
lean_ctor_set(v___x_4424_, 4, v___f_4431_);
lean_ctor_set(v___x_4424_, 3, v___f_4432_);
lean_ctor_set(v___x_4424_, 2, v___f_4433_);
lean_ctor_set(v___x_4424_, 1, v___f_4426_);
lean_ctor_set(v___x_4424_, 0, v___x_4430_);
v___x_4435_ = v___x_4424_;
goto v_reusejp_4434_;
}
else
{
lean_object* v_reuseFailAlloc_4443_; 
v_reuseFailAlloc_4443_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4443_, 0, v___x_4430_);
lean_ctor_set(v_reuseFailAlloc_4443_, 1, v___f_4426_);
lean_ctor_set(v_reuseFailAlloc_4443_, 2, v___f_4433_);
lean_ctor_set(v_reuseFailAlloc_4443_, 3, v___f_4432_);
lean_ctor_set(v_reuseFailAlloc_4443_, 4, v___f_4431_);
v___x_4435_ = v_reuseFailAlloc_4443_;
goto v_reusejp_4434_;
}
v_reusejp_4434_:
{
lean_object* v___x_4437_; 
if (v_isShared_4418_ == 0)
{
lean_ctor_set(v___x_4417_, 1, v___f_4427_);
lean_ctor_set(v___x_4417_, 0, v___x_4435_);
v___x_4437_ = v___x_4417_;
goto v_reusejp_4436_;
}
else
{
lean_object* v_reuseFailAlloc_4442_; 
v_reuseFailAlloc_4442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4442_, 0, v___x_4435_);
lean_ctor_set(v_reuseFailAlloc_4442_, 1, v___f_4427_);
v___x_4437_ = v_reuseFailAlloc_4442_;
goto v_reusejp_4436_;
}
v_reusejp_4436_:
{
lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_866__overap_4440_; lean_object* v___x_4441_; 
v___x_4438_ = lean_obj_once(&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0, &l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0_once, _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0);
v___x_4439_ = l_instInhabitedOfMonad___redArg(v___x_4437_, v___x_4438_);
v___x_866__overap_4440_ = lean_panic_fn_borrowed(v___x_4439_, v_msg_4392_);
lean_dec(v___x_4439_);
lean_inc(v___y_4396_);
lean_inc_ref(v___y_4395_);
lean_inc(v___y_4394_);
lean_inc_ref(v___y_4393_);
v___x_4441_ = lean_apply_5(v___x_866__overap_4440_, v___y_4393_, v___y_4394_, v___y_4395_, v___y_4396_, lean_box(0));
return v___x_4441_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___boxed(lean_object* v_msg_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_){
_start:
{
lean_object* v_res_4454_; 
v_res_4454_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v_msg_4448_, v___y_4449_, v___y_4450_, v___y_4451_, v___y_4452_);
lean_dec(v___y_4452_);
lean_dec_ref(v___y_4451_);
lean_dec(v___y_4450_);
lean_dec_ref(v___y_4449_);
return v_res_4454_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; 
v___x_4458_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2));
v___x_4459_ = lean_unsigned_to_nat(2u);
v___x_4460_ = lean_unsigned_to_nat(73u);
v___x_4461_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1));
v___x_4462_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0));
v___x_4463_ = l_mkPanicMessageWithDecl(v___x_4462_, v___x_4461_, v___x_4460_, v___x_4459_, v___x_4458_);
return v___x_4463_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; 
v___x_4465_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4));
v___x_4466_ = lean_unsigned_to_nat(2u);
v___x_4467_ = lean_unsigned_to_nat(74u);
v___x_4468_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1));
v___x_4469_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0));
v___x_4470_ = l_mkPanicMessageWithDecl(v___x_4469_, v___x_4468_, v___x_4467_, v___x_4466_, v___x_4465_);
return v___x_4470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(lean_object* v_f_4473_, lean_object* v_positions_4474_, lean_object* v_ys_4475_, lean_object* v_xs_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_){
_start:
{
lean_object* v___x_4482_; lean_object* v___x_4483_; uint8_t v___x_4484_; 
v___x_4482_ = lean_array_get_size(v_positions_4474_);
v___x_4483_ = lean_array_get_size(v_ys_4475_);
v___x_4484_ = lean_nat_dec_eq(v___x_4482_, v___x_4483_);
if (v___x_4484_ == 0)
{
lean_object* v___x_4485_; lean_object* v___x_4486_; 
lean_dec_ref(v_f_4473_);
v___x_4485_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3);
v___x_4486_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v___x_4485_, v___y_4477_, v___y_4478_, v___y_4479_, v___y_4480_);
return v___x_4486_;
}
else
{
lean_object* v___x_4487_; lean_object* v___x_4488_; uint8_t v___x_4489_; 
v___x_4487_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_4474_);
v___x_4488_ = lean_array_get_size(v_xs_4476_);
v___x_4489_ = lean_nat_dec_eq(v___x_4487_, v___x_4488_);
lean_dec(v___x_4487_);
if (v___x_4489_ == 0)
{
lean_object* v___x_4490_; lean_object* v___x_4491_; 
lean_dec_ref(v_f_4473_);
v___x_4490_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5);
v___x_4491_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v___x_4490_, v___y_4477_, v___y_4478_, v___y_4479_, v___y_4480_);
return v___x_4491_;
}
else
{
lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; 
v___x_4492_ = lean_unsigned_to_nat(0u);
v___x_4493_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6));
v___x_4494_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(v_xs_4476_, v_f_4473_, v_ys_4475_, v_positions_4474_, v___x_4492_, v___x_4493_, v___y_4477_, v___y_4478_, v___y_4479_, v___y_4480_);
return v___x_4494_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___boxed(lean_object* v_f_4495_, lean_object* v_positions_4496_, lean_object* v_ys_4497_, lean_object* v_xs_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_){
_start:
{
lean_object* v_res_4504_; 
v_res_4504_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(v_f_4495_, v_positions_4496_, v_ys_4497_, v_xs_4498_, v___y_4499_, v___y_4500_, v___y_4501_, v___y_4502_);
lean_dec(v___y_4502_);
lean_dec_ref(v___y_4501_);
lean_dec(v___y_4500_);
lean_dec_ref(v___y_4499_);
lean_dec_ref(v_xs_4498_);
lean_dec_ref(v_ys_4497_);
lean_dec_ref(v_positions_4496_);
return v_res_4504_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_mkBRecOnConst___closed__1(void){
_start:
{
lean_object* v___x_4506_; lean_object* v___x_4507_; 
v___x_4506_ = lean_unsigned_to_nat(0u);
v___x_4507_ = l_Lean_Level_ofNat(v___x_4506_);
return v___x_4507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst(lean_object* v_recArgInfos_4508_, lean_object* v_positions_4509_, lean_object* v_motives_4510_, uint8_t v_isIndPred_4511_, lean_object* v_a_4512_, lean_object* v_a_4513_, lean_object* v_a_4514_, lean_object* v_a_4515_){
_start:
{
lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v_indGroupInst_4520_; lean_object* v_brecOnUniv_4522_; lean_object* v___y_4523_; lean_object* v___y_4524_; lean_object* v___y_4525_; lean_object* v___y_4526_; 
v___x_4517_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_4518_ = lean_unsigned_to_nat(0u);
v___x_4519_ = lean_array_get_borrowed(v___x_4517_, v_recArgInfos_4508_, v___x_4518_);
v_indGroupInst_4520_ = lean_ctor_get(v___x_4519_, 4);
if (v_isIndPred_4511_ == 0)
{
lean_object* v___f_4563_; lean_object* v___x_4564_; lean_object* v_motive_4565_; lean_object* v___x_4566_; 
v___f_4563_ = ((lean_object*)(l_Lean_Elab_Structural_mkBRecOnConst___closed__0));
v___x_4564_ = l_Lean_instInhabitedExpr;
v_motive_4565_ = lean_array_get_borrowed(v___x_4564_, v_motives_4510_, v___x_4518_);
lean_inc(v_motive_4565_);
v___x_4566_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_motive_4565_, v___f_4563_, v_isIndPred_4511_, v_a_4512_, v_a_4513_, v_a_4514_, v_a_4515_);
if (lean_obj_tag(v___x_4566_) == 0)
{
lean_object* v_a_4567_; 
v_a_4567_ = lean_ctor_get(v___x_4566_, 0);
lean_inc(v_a_4567_);
lean_dec_ref_known(v___x_4566_, 1);
v_brecOnUniv_4522_ = v_a_4567_;
v___y_4523_ = v_a_4512_;
v___y_4524_ = v_a_4513_;
v___y_4525_ = v_a_4514_;
v___y_4526_ = v_a_4515_;
goto v___jp_4521_;
}
else
{
lean_object* v_a_4568_; lean_object* v___x_4570_; uint8_t v_isShared_4571_; uint8_t v_isSharedCheck_4575_; 
v_a_4568_ = lean_ctor_get(v___x_4566_, 0);
v_isSharedCheck_4575_ = !lean_is_exclusive(v___x_4566_);
if (v_isSharedCheck_4575_ == 0)
{
v___x_4570_ = v___x_4566_;
v_isShared_4571_ = v_isSharedCheck_4575_;
goto v_resetjp_4569_;
}
else
{
lean_inc(v_a_4568_);
lean_dec(v___x_4566_);
v___x_4570_ = lean_box(0);
v_isShared_4571_ = v_isSharedCheck_4575_;
goto v_resetjp_4569_;
}
v_resetjp_4569_:
{
lean_object* v___x_4573_; 
if (v_isShared_4571_ == 0)
{
v___x_4573_ = v___x_4570_;
goto v_reusejp_4572_;
}
else
{
lean_object* v_reuseFailAlloc_4574_; 
v_reuseFailAlloc_4574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4574_, 0, v_a_4568_);
v___x_4573_ = v_reuseFailAlloc_4574_;
goto v_reusejp_4572_;
}
v_reusejp_4572_:
{
return v___x_4573_;
}
}
}
}
else
{
lean_object* v___x_4576_; 
v___x_4576_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnConst___closed__1, &l_Lean_Elab_Structural_mkBRecOnConst___closed__1_once, _init_l_Lean_Elab_Structural_mkBRecOnConst___closed__1);
v_brecOnUniv_4522_ = v___x_4576_;
v___y_4523_ = v_a_4512_;
v___y_4524_ = v_a_4513_;
v___y_4525_ = v_a_4514_;
v___y_4526_ = v_a_4515_;
goto v___jp_4521_;
}
v___jp_4521_:
{
lean_object* v_toIndGroupInfo_4527_; lean_object* v_levels_4528_; lean_object* v_params_4529_; lean_object* v___x_4530_; lean_object* v_brecOnCons_4531_; lean_object* v_brecOnAux_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; 
v_toIndGroupInfo_4527_ = lean_ctor_get(v_indGroupInst_4520_, 0);
v_levels_4528_ = lean_ctor_get(v_indGroupInst_4520_, 1);
v_params_4529_ = lean_ctor_get(v_indGroupInst_4520_, 2);
v___x_4530_ = lean_box(v_isIndPred_4511_);
lean_inc_n(v_levels_4528_, 2);
lean_inc(v_brecOnUniv_4522_);
lean_inc_ref(v_params_4529_);
lean_inc_ref(v_toIndGroupInfo_4527_);
v_brecOnCons_4531_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnConst___lam__0___boxed), 6, 5);
lean_closure_set(v_brecOnCons_4531_, 0, v_toIndGroupInfo_4527_);
lean_closure_set(v_brecOnCons_4531_, 1, v_params_4529_);
lean_closure_set(v_brecOnCons_4531_, 2, v___x_4530_);
lean_closure_set(v_brecOnCons_4531_, 3, v_brecOnUniv_4522_);
lean_closure_set(v_brecOnCons_4531_, 4, v_levels_4528_);
v_brecOnAux_4532_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__0(v_toIndGroupInfo_4527_, v_params_4529_, v_isIndPred_4511_, v_brecOnUniv_4522_, v_levels_4528_, v___x_4518_);
v___x_4533_ = l_Lean_Elab_Structural_IndGroupInfo_numMotives(v_toIndGroupInfo_4527_);
v___x_4534_ = l_Lean_Meta_inferArgumentTypesN(v___x_4533_, v_brecOnAux_4532_, v___y_4523_, v___y_4524_, v___y_4525_, v___y_4526_);
if (lean_obj_tag(v___x_4534_) == 0)
{
lean_object* v_a_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; 
v_a_4535_ = lean_ctor_get(v___x_4534_, 0);
lean_inc(v_a_4535_);
lean_dec_ref_known(v___x_4534_, 1);
v___x_4536_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0));
v___x_4537_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(v___x_4536_, v_positions_4509_, v_a_4535_, v_motives_4510_, v___y_4523_, v___y_4524_, v___y_4525_, v___y_4526_);
lean_dec(v_a_4535_);
if (lean_obj_tag(v___x_4537_) == 0)
{
lean_object* v_a_4538_; lean_object* v___x_4540_; uint8_t v_isShared_4541_; uint8_t v_isSharedCheck_4546_; 
v_a_4538_ = lean_ctor_get(v___x_4537_, 0);
v_isSharedCheck_4546_ = !lean_is_exclusive(v___x_4537_);
if (v_isSharedCheck_4546_ == 0)
{
v___x_4540_ = v___x_4537_;
v_isShared_4541_ = v_isSharedCheck_4546_;
goto v_resetjp_4539_;
}
else
{
lean_inc(v_a_4538_);
lean_dec(v___x_4537_);
v___x_4540_ = lean_box(0);
v_isShared_4541_ = v_isSharedCheck_4546_;
goto v_resetjp_4539_;
}
v_resetjp_4539_:
{
lean_object* v___f_4542_; lean_object* v___x_4544_; 
v___f_4542_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnConst___lam__1___boxed), 3, 2);
lean_closure_set(v___f_4542_, 0, v_brecOnCons_4531_);
lean_closure_set(v___f_4542_, 1, v_a_4538_);
if (v_isShared_4541_ == 0)
{
lean_ctor_set(v___x_4540_, 0, v___f_4542_);
v___x_4544_ = v___x_4540_;
goto v_reusejp_4543_;
}
else
{
lean_object* v_reuseFailAlloc_4545_; 
v_reuseFailAlloc_4545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4545_, 0, v___f_4542_);
v___x_4544_ = v_reuseFailAlloc_4545_;
goto v_reusejp_4543_;
}
v_reusejp_4543_:
{
return v___x_4544_;
}
}
}
else
{
lean_object* v_a_4547_; lean_object* v___x_4549_; uint8_t v_isShared_4550_; uint8_t v_isSharedCheck_4554_; 
lean_dec_ref(v_brecOnCons_4531_);
v_a_4547_ = lean_ctor_get(v___x_4537_, 0);
v_isSharedCheck_4554_ = !lean_is_exclusive(v___x_4537_);
if (v_isSharedCheck_4554_ == 0)
{
v___x_4549_ = v___x_4537_;
v_isShared_4550_ = v_isSharedCheck_4554_;
goto v_resetjp_4548_;
}
else
{
lean_inc(v_a_4547_);
lean_dec(v___x_4537_);
v___x_4549_ = lean_box(0);
v_isShared_4550_ = v_isSharedCheck_4554_;
goto v_resetjp_4548_;
}
v_resetjp_4548_:
{
lean_object* v___x_4552_; 
if (v_isShared_4550_ == 0)
{
v___x_4552_ = v___x_4549_;
goto v_reusejp_4551_;
}
else
{
lean_object* v_reuseFailAlloc_4553_; 
v_reuseFailAlloc_4553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4553_, 0, v_a_4547_);
v___x_4552_ = v_reuseFailAlloc_4553_;
goto v_reusejp_4551_;
}
v_reusejp_4551_:
{
return v___x_4552_;
}
}
}
}
else
{
lean_object* v_a_4555_; lean_object* v___x_4557_; uint8_t v_isShared_4558_; uint8_t v_isSharedCheck_4562_; 
lean_dec_ref(v_brecOnCons_4531_);
v_a_4555_ = lean_ctor_get(v___x_4534_, 0);
v_isSharedCheck_4562_ = !lean_is_exclusive(v___x_4534_);
if (v_isSharedCheck_4562_ == 0)
{
v___x_4557_ = v___x_4534_;
v_isShared_4558_ = v_isSharedCheck_4562_;
goto v_resetjp_4556_;
}
else
{
lean_inc(v_a_4555_);
lean_dec(v___x_4534_);
v___x_4557_ = lean_box(0);
v_isShared_4558_ = v_isSharedCheck_4562_;
goto v_resetjp_4556_;
}
v_resetjp_4556_:
{
lean_object* v___x_4560_; 
if (v_isShared_4558_ == 0)
{
v___x_4560_ = v___x_4557_;
goto v_reusejp_4559_;
}
else
{
lean_object* v_reuseFailAlloc_4561_; 
v_reuseFailAlloc_4561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4561_, 0, v_a_4555_);
v___x_4560_ = v_reuseFailAlloc_4561_;
goto v_reusejp_4559_;
}
v_reusejp_4559_:
{
return v___x_4560_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___boxed(lean_object* v_recArgInfos_4577_, lean_object* v_positions_4578_, lean_object* v_motives_4579_, lean_object* v_isIndPred_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_, lean_object* v_a_4584_, lean_object* v_a_4585_){
_start:
{
uint8_t v_isIndPred_boxed_4586_; lean_object* v_res_4587_; 
v_isIndPred_boxed_4586_ = lean_unbox(v_isIndPred_4580_);
v_res_4587_ = l_Lean_Elab_Structural_mkBRecOnConst(v_recArgInfos_4577_, v_positions_4578_, v_motives_4579_, v_isIndPred_boxed_4586_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
lean_dec(v_a_4584_);
lean_dec_ref(v_a_4583_);
lean_dec(v_a_4582_);
lean_dec_ref(v_a_4581_);
lean_dec_ref(v_motives_4579_);
lean_dec_ref(v_positions_4578_);
lean_dec_ref(v_recArgInfos_4577_);
return v_res_4587_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1(lean_object* v_00_u03b3_4588_, lean_object* v_msg_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_){
_start:
{
lean_object* v___x_4595_; 
v___x_4595_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v_msg_4589_, v___y_4590_, v___y_4591_, v___y_4592_, v___y_4593_);
return v___x_4595_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___boxed(lean_object* v_00_u03b3_4596_, lean_object* v_msg_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_){
_start:
{
lean_object* v_res_4603_; 
v_res_4603_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1(v_00_u03b3_4596_, v_msg_4597_, v___y_4598_, v___y_4599_, v___y_4600_, v___y_4601_);
lean_dec(v___y_4601_);
lean_dec_ref(v___y_4600_);
lean_dec(v___y_4599_);
lean_dec_ref(v___y_4598_);
return v_res_4603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0(lean_object* v_00_u03b3_4604_, lean_object* v_00_u03b1_4605_, lean_object* v_f_4606_, lean_object* v_positions_4607_, lean_object* v_ys_4608_, lean_object* v_xs_4609_, lean_object* v___y_4610_, lean_object* v___y_4611_, lean_object* v___y_4612_, lean_object* v___y_4613_){
_start:
{
lean_object* v___x_4615_; 
v___x_4615_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(v_f_4606_, v_positions_4607_, v_ys_4608_, v_xs_4609_, v___y_4610_, v___y_4611_, v___y_4612_, v___y_4613_);
return v___x_4615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___boxed(lean_object* v_00_u03b3_4616_, lean_object* v_00_u03b1_4617_, lean_object* v_f_4618_, lean_object* v_positions_4619_, lean_object* v_ys_4620_, lean_object* v_xs_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_){
_start:
{
lean_object* v_res_4627_; 
v_res_4627_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0(v_00_u03b3_4616_, v_00_u03b1_4617_, v_f_4618_, v_positions_4619_, v_ys_4620_, v_xs_4621_, v___y_4622_, v___y_4623_, v___y_4624_, v___y_4625_);
lean_dec(v___y_4625_);
lean_dec_ref(v___y_4624_);
lean_dec(v___y_4623_);
lean_dec_ref(v___y_4622_);
lean_dec_ref(v_xs_4621_);
lean_dec_ref(v_ys_4620_);
lean_dec_ref(v_positions_4619_);
return v_res_4627_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2(lean_object* v_00_u03b1_4628_, lean_object* v_00_u03b3_4629_, lean_object* v_xs_4630_, lean_object* v_f_4631_, lean_object* v_as_4632_, lean_object* v_bs_4633_, lean_object* v_i_4634_, lean_object* v_cs_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_, lean_object* v___y_4639_){
_start:
{
lean_object* v___x_4641_; 
v___x_4641_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(v_xs_4630_, v_f_4631_, v_as_4632_, v_bs_4633_, v_i_4634_, v_cs_4635_, v___y_4636_, v___y_4637_, v___y_4638_, v___y_4639_);
return v___x_4641_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___boxed(lean_object* v_00_u03b1_4642_, lean_object* v_00_u03b3_4643_, lean_object* v_xs_4644_, lean_object* v_f_4645_, lean_object* v_as_4646_, lean_object* v_bs_4647_, lean_object* v_i_4648_, lean_object* v_cs_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_, lean_object* v___y_4652_, lean_object* v___y_4653_, lean_object* v___y_4654_){
_start:
{
lean_object* v_res_4655_; 
v_res_4655_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2(v_00_u03b1_4642_, v_00_u03b3_4643_, v_xs_4644_, v_f_4645_, v_as_4646_, v_bs_4647_, v_i_4648_, v_cs_4649_, v___y_4650_, v___y_4651_, v___y_4652_, v___y_4653_);
lean_dec(v___y_4653_);
lean_dec_ref(v___y_4652_);
lean_dec(v___y_4651_);
lean_dec_ref(v___y_4650_);
lean_dec_ref(v_bs_4647_);
lean_dec_ref(v_as_4646_);
lean_dec_ref(v_xs_4644_);
return v_res_4655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__0(lean_object* v_numTypeFormers_4656_, lean_object* v_x_4657_, lean_object* v_brecOnType_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_){
_start:
{
lean_object* v___x_4664_; 
v___x_4664_ = l_Lean_Meta_arrowDomainsN(v_numTypeFormers_4656_, v_brecOnType_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_);
return v___x_4664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__0___boxed(lean_object* v_numTypeFormers_4665_, lean_object* v_x_4666_, lean_object* v_brecOnType_4667_, lean_object* v___y_4668_, lean_object* v___y_4669_, lean_object* v___y_4670_, lean_object* v___y_4671_, lean_object* v___y_4672_){
_start:
{
lean_object* v_res_4673_; 
v_res_4673_ = l_Lean_Elab_Structural_inferBRecOnFTypes___lam__0(v_numTypeFormers_4665_, v_x_4666_, v_brecOnType_4667_, v___y_4668_, v___y_4669_, v___y_4670_, v___y_4671_);
lean_dec(v___y_4671_);
lean_dec_ref(v___y_4670_);
lean_dec(v___y_4669_);
lean_dec_ref(v___y_4668_);
lean_dec_ref(v_x_4666_);
return v_res_4673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1(lean_object* v___x_4674_, lean_object* v_e_4675_){
_start:
{
lean_object* v___x_4676_; lean_object* v___x_4677_; 
v___x_4676_ = l_Lean_indentD(v_e_4675_);
v___x_4677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4677_, 0, v___x_4674_);
lean_ctor_set(v___x_4677_, 1, v___x_4676_);
return v___x_4677_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(lean_object* v_a_4678_, lean_object* v_as_4679_, size_t v_sz_4680_, size_t v_i_4681_, lean_object* v_b_4682_){
_start:
{
uint8_t v___x_4684_; 
v___x_4684_ = lean_usize_dec_lt(v_i_4681_, v_sz_4680_);
if (v___x_4684_ == 0)
{
lean_object* v___x_4685_; 
lean_dec_ref(v_a_4678_);
v___x_4685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4685_, 0, v_b_4682_);
return v___x_4685_;
}
else
{
lean_object* v_a_4686_; lean_object* v___x_4687_; size_t v___x_4688_; size_t v___x_4689_; 
v_a_4686_ = lean_array_uget_borrowed(v_as_4679_, v_i_4681_);
lean_inc_ref(v_a_4678_);
v___x_4687_ = lean_array_set(v_b_4682_, v_a_4686_, v_a_4678_);
v___x_4688_ = ((size_t)1ULL);
v___x_4689_ = lean_usize_add(v_i_4681_, v___x_4688_);
v_i_4681_ = v___x_4689_;
v_b_4682_ = v___x_4687_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg___boxed(lean_object* v_a_4691_, lean_object* v_as_4692_, lean_object* v_sz_4693_, lean_object* v_i_4694_, lean_object* v_b_4695_, lean_object* v___y_4696_){
_start:
{
size_t v_sz_boxed_4697_; size_t v_i_boxed_4698_; lean_object* v_res_4699_; 
v_sz_boxed_4697_ = lean_unbox_usize(v_sz_4693_);
lean_dec(v_sz_4693_);
v_i_boxed_4698_ = lean_unbox_usize(v_i_4694_);
lean_dec(v_i_4694_);
v_res_4699_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(v_a_4691_, v_as_4692_, v_sz_boxed_4697_, v_i_boxed_4698_, v_b_4695_);
lean_dec_ref(v_as_4692_);
return v_res_4699_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(lean_object* v_as_4700_, size_t v_sz_4701_, size_t v_i_4702_, lean_object* v_b_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_){
_start:
{
uint8_t v___x_4709_; 
v___x_4709_ = lean_usize_dec_lt(v_i_4702_, v_sz_4701_);
if (v___x_4709_ == 0)
{
lean_object* v___x_4710_; 
v___x_4710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4710_, 0, v_b_4703_);
return v___x_4710_;
}
else
{
lean_object* v_snd_4711_; lean_object* v_fst_4712_; lean_object* v___x_4714_; uint8_t v_isShared_4715_; uint8_t v_isSharedCheck_4756_; 
v_snd_4711_ = lean_ctor_get(v_b_4703_, 1);
v_fst_4712_ = lean_ctor_get(v_b_4703_, 0);
v_isSharedCheck_4756_ = !lean_is_exclusive(v_b_4703_);
if (v_isSharedCheck_4756_ == 0)
{
v___x_4714_ = v_b_4703_;
v_isShared_4715_ = v_isSharedCheck_4756_;
goto v_resetjp_4713_;
}
else
{
lean_inc(v_snd_4711_);
lean_inc(v_fst_4712_);
lean_dec(v_b_4703_);
v___x_4714_ = lean_box(0);
v_isShared_4715_ = v_isSharedCheck_4756_;
goto v_resetjp_4713_;
}
v_resetjp_4713_:
{
lean_object* v_array_4716_; lean_object* v_start_4717_; lean_object* v_stop_4718_; uint8_t v___x_4719_; 
v_array_4716_ = lean_ctor_get(v_snd_4711_, 0);
v_start_4717_ = lean_ctor_get(v_snd_4711_, 1);
v_stop_4718_ = lean_ctor_get(v_snd_4711_, 2);
v___x_4719_ = lean_nat_dec_lt(v_start_4717_, v_stop_4718_);
if (v___x_4719_ == 0)
{
lean_object* v___x_4721_; 
if (v_isShared_4715_ == 0)
{
v___x_4721_ = v___x_4714_;
goto v_reusejp_4720_;
}
else
{
lean_object* v_reuseFailAlloc_4723_; 
v_reuseFailAlloc_4723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4723_, 0, v_fst_4712_);
lean_ctor_set(v_reuseFailAlloc_4723_, 1, v_snd_4711_);
v___x_4721_ = v_reuseFailAlloc_4723_;
goto v_reusejp_4720_;
}
v_reusejp_4720_:
{
lean_object* v___x_4722_; 
v___x_4722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4722_, 0, v___x_4721_);
return v___x_4722_;
}
}
else
{
lean_object* v___x_4725_; uint8_t v_isShared_4726_; uint8_t v_isSharedCheck_4752_; 
lean_inc(v_stop_4718_);
lean_inc(v_start_4717_);
lean_inc_ref(v_array_4716_);
v_isSharedCheck_4752_ = !lean_is_exclusive(v_snd_4711_);
if (v_isSharedCheck_4752_ == 0)
{
lean_object* v_unused_4753_; lean_object* v_unused_4754_; lean_object* v_unused_4755_; 
v_unused_4753_ = lean_ctor_get(v_snd_4711_, 2);
lean_dec(v_unused_4753_);
v_unused_4754_ = lean_ctor_get(v_snd_4711_, 1);
lean_dec(v_unused_4754_);
v_unused_4755_ = lean_ctor_get(v_snd_4711_, 0);
lean_dec(v_unused_4755_);
v___x_4725_ = v_snd_4711_;
v_isShared_4726_ = v_isSharedCheck_4752_;
goto v_resetjp_4724_;
}
else
{
lean_dec(v_snd_4711_);
v___x_4725_ = lean_box(0);
v_isShared_4726_ = v_isSharedCheck_4752_;
goto v_resetjp_4724_;
}
v_resetjp_4724_:
{
lean_object* v_a_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4732_; 
v_a_4727_ = lean_array_uget_borrowed(v_as_4700_, v_i_4702_);
v___x_4728_ = lean_array_fget(v_array_4716_, v_start_4717_);
v___x_4729_ = lean_unsigned_to_nat(1u);
v___x_4730_ = lean_nat_add(v_start_4717_, v___x_4729_);
lean_dec(v_start_4717_);
if (v_isShared_4726_ == 0)
{
lean_ctor_set(v___x_4725_, 1, v___x_4730_);
v___x_4732_ = v___x_4725_;
goto v_reusejp_4731_;
}
else
{
lean_object* v_reuseFailAlloc_4751_; 
v_reuseFailAlloc_4751_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4751_, 0, v_array_4716_);
lean_ctor_set(v_reuseFailAlloc_4751_, 1, v___x_4730_);
lean_ctor_set(v_reuseFailAlloc_4751_, 2, v_stop_4718_);
v___x_4732_ = v_reuseFailAlloc_4751_;
goto v_reusejp_4731_;
}
v_reusejp_4731_:
{
size_t v_sz_4733_; size_t v___x_4734_; lean_object* v___x_4735_; 
v_sz_4733_ = lean_array_size(v___x_4728_);
v___x_4734_ = ((size_t)0ULL);
lean_inc(v_a_4727_);
v___x_4735_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(v_a_4727_, v___x_4728_, v_sz_4733_, v___x_4734_, v_fst_4712_);
lean_dec(v___x_4728_);
if (lean_obj_tag(v___x_4735_) == 0)
{
lean_object* v_a_4736_; lean_object* v___x_4738_; 
v_a_4736_ = lean_ctor_get(v___x_4735_, 0);
lean_inc(v_a_4736_);
lean_dec_ref_known(v___x_4735_, 1);
if (v_isShared_4715_ == 0)
{
lean_ctor_set(v___x_4714_, 1, v___x_4732_);
lean_ctor_set(v___x_4714_, 0, v_a_4736_);
v___x_4738_ = v___x_4714_;
goto v_reusejp_4737_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v_a_4736_);
lean_ctor_set(v_reuseFailAlloc_4742_, 1, v___x_4732_);
v___x_4738_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4737_;
}
v_reusejp_4737_:
{
size_t v___x_4739_; size_t v___x_4740_; 
v___x_4739_ = ((size_t)1ULL);
v___x_4740_ = lean_usize_add(v_i_4702_, v___x_4739_);
v_i_4702_ = v___x_4740_;
v_b_4703_ = v___x_4738_;
goto _start;
}
}
else
{
lean_object* v_a_4743_; lean_object* v___x_4745_; uint8_t v_isShared_4746_; uint8_t v_isSharedCheck_4750_; 
lean_dec_ref(v___x_4732_);
lean_del_object(v___x_4714_);
v_a_4743_ = lean_ctor_get(v___x_4735_, 0);
v_isSharedCheck_4750_ = !lean_is_exclusive(v___x_4735_);
if (v_isSharedCheck_4750_ == 0)
{
v___x_4745_ = v___x_4735_;
v_isShared_4746_ = v_isSharedCheck_4750_;
goto v_resetjp_4744_;
}
else
{
lean_inc(v_a_4743_);
lean_dec(v___x_4735_);
v___x_4745_ = lean_box(0);
v_isShared_4746_ = v_isSharedCheck_4750_;
goto v_resetjp_4744_;
}
v_resetjp_4744_:
{
lean_object* v___x_4748_; 
if (v_isShared_4746_ == 0)
{
v___x_4748_ = v___x_4745_;
goto v_reusejp_4747_;
}
else
{
lean_object* v_reuseFailAlloc_4749_; 
v_reuseFailAlloc_4749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4749_, 0, v_a_4743_);
v___x_4748_ = v_reuseFailAlloc_4749_;
goto v_reusejp_4747_;
}
v_reusejp_4747_:
{
return v___x_4748_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1___boxed(lean_object* v_as_4757_, lean_object* v_sz_4758_, lean_object* v_i_4759_, lean_object* v_b_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_, lean_object* v___y_4763_, lean_object* v___y_4764_, lean_object* v___y_4765_){
_start:
{
size_t v_sz_boxed_4766_; size_t v_i_boxed_4767_; lean_object* v_res_4768_; 
v_sz_boxed_4766_ = lean_unbox_usize(v_sz_4758_);
lean_dec(v_sz_4758_);
v_i_boxed_4767_ = lean_unbox_usize(v_i_4759_);
lean_dec(v_i_4759_);
v_res_4768_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(v_as_4757_, v_sz_boxed_4766_, v_i_boxed_4767_, v_b_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_);
lean_dec(v___y_4764_);
lean_dec_ref(v___y_4763_);
lean_dec(v___y_4762_);
lean_dec_ref(v___y_4761_);
lean_dec_ref(v_as_4757_);
return v_res_4768_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1(void){
_start:
{
lean_object* v___x_4770_; lean_object* v___x_4771_; 
v___x_4770_ = ((lean_object*)(l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0));
v___x_4771_ = l_Lean_stringToMessageData(v___x_4770_);
return v___x_4771_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2(void){
_start:
{
lean_object* v___x_4772_; lean_object* v___f_4773_; 
v___x_4772_ = lean_obj_once(&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1, &l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1_once, _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1);
v___f_4773_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1), 2, 1);
lean_closure_set(v___f_4773_, 0, v___x_4772_);
return v___f_4773_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3(void){
_start:
{
lean_object* v___x_4774_; lean_object* v___x_4775_; 
v___x_4774_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnConst___closed__1, &l_Lean_Elab_Structural_mkBRecOnConst___closed__1_once, _init_l_Lean_Elab_Structural_mkBRecOnConst___closed__1);
v___x_4775_ = l_Lean_Expr_sort___override(v___x_4774_);
return v___x_4775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes(lean_object* v_recArgInfos_4776_, lean_object* v_positions_4777_, lean_object* v_brecOnConst_4778_, lean_object* v_a_4779_, lean_object* v_a_4780_, lean_object* v_a_4781_, lean_object* v_a_4782_){
_start:
{
lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v_recArgInfo_4786_; lean_object* v_indicesPos_4787_; lean_object* v_indIdx_4788_; lean_object* v_numTypeFormers_4789_; lean_object* v___f_4790_; lean_object* v_brecOn_4791_; lean_object* v___f_4792_; uint8_t v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; 
v___x_4784_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_4785_ = lean_unsigned_to_nat(0u);
v_recArgInfo_4786_ = lean_array_get_borrowed(v___x_4784_, v_recArgInfos_4776_, v___x_4785_);
v_indicesPos_4787_ = lean_ctor_get(v_recArgInfo_4786_, 3);
v_indIdx_4788_ = lean_ctor_get(v_recArgInfo_4786_, 5);
v_numTypeFormers_4789_ = lean_array_get_size(v_positions_4777_);
v___f_4790_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_inferBRecOnFTypes___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4790_, 0, v_numTypeFormers_4789_);
lean_inc(v_indIdx_4788_);
v_brecOn_4791_ = lean_apply_1(v_brecOnConst_4778_, v_indIdx_4788_);
v___f_4792_ = lean_obj_once(&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2, &l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2_once, _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2);
v___x_4793_ = 0;
v___x_4794_ = lean_box(v___x_4793_);
lean_inc_ref(v_brecOn_4791_);
v___x_4795_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_4795_, 0, v_brecOn_4791_);
lean_closure_set(v___x_4795_, 1, v___x_4794_);
v___x_4796_ = l_Lean_Meta_mapErrorImp___redArg(v___x_4795_, v___f_4792_, v_a_4779_, v_a_4780_, v_a_4781_, v_a_4782_);
if (lean_obj_tag(v___x_4796_) == 0)
{
lean_object* v___x_4797_; 
lean_dec_ref_known(v___x_4796_, 1);
lean_inc(v_a_4782_);
lean_inc_ref(v_a_4781_);
lean_inc(v_a_4780_);
lean_inc_ref(v_a_4779_);
v___x_4797_ = lean_infer_type(v_brecOn_4791_, v_a_4779_, v_a_4780_, v_a_4781_, v_a_4782_);
if (lean_obj_tag(v___x_4797_) == 0)
{
lean_object* v_a_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; uint8_t v___x_4803_; lean_object* v___x_4804_; 
v_a_4798_ = lean_ctor_get(v___x_4797_, 0);
lean_inc(v_a_4798_);
lean_dec_ref_known(v___x_4797_, 1);
v___x_4799_ = lean_array_get_size(v_indicesPos_4787_);
v___x_4800_ = lean_unsigned_to_nat(1u);
v___x_4801_ = lean_nat_add(v___x_4799_, v___x_4800_);
v___x_4802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4802_, 0, v___x_4801_);
v___x_4803_ = 0;
v___x_4804_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_a_4798_, v___x_4802_, v___f_4790_, v___x_4803_, v___x_4803_, v_a_4779_, v_a_4780_, v_a_4781_, v_a_4782_);
if (lean_obj_tag(v___x_4804_) == 0)
{
lean_object* v_a_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; size_t v_sz_4811_; size_t v___x_4812_; lean_object* v___x_4813_; 
v_a_4805_ = lean_ctor_get(v___x_4804_, 0);
lean_inc(v_a_4805_);
lean_dec_ref_known(v___x_4804_, 1);
v___x_4806_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_4777_);
v___x_4807_ = lean_obj_once(&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3, &l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3_once, _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3);
v___x_4808_ = lean_mk_array(v___x_4806_, v___x_4807_);
v___x_4809_ = l_Array_toSubarray___redArg(v_positions_4777_, v___x_4785_, v_numTypeFormers_4789_);
v___x_4810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4810_, 0, v___x_4808_);
lean_ctor_set(v___x_4810_, 1, v___x_4809_);
v_sz_4811_ = lean_array_size(v_a_4805_);
v___x_4812_ = ((size_t)0ULL);
v___x_4813_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(v_a_4805_, v_sz_4811_, v___x_4812_, v___x_4810_, v_a_4779_, v_a_4780_, v_a_4781_, v_a_4782_);
lean_dec(v_a_4805_);
if (lean_obj_tag(v___x_4813_) == 0)
{
lean_object* v_a_4814_; lean_object* v___x_4816_; uint8_t v_isShared_4817_; uint8_t v_isSharedCheck_4822_; 
v_a_4814_ = lean_ctor_get(v___x_4813_, 0);
v_isSharedCheck_4822_ = !lean_is_exclusive(v___x_4813_);
if (v_isSharedCheck_4822_ == 0)
{
v___x_4816_ = v___x_4813_;
v_isShared_4817_ = v_isSharedCheck_4822_;
goto v_resetjp_4815_;
}
else
{
lean_inc(v_a_4814_);
lean_dec(v___x_4813_);
v___x_4816_ = lean_box(0);
v_isShared_4817_ = v_isSharedCheck_4822_;
goto v_resetjp_4815_;
}
v_resetjp_4815_:
{
lean_object* v_fst_4818_; lean_object* v___x_4820_; 
v_fst_4818_ = lean_ctor_get(v_a_4814_, 0);
lean_inc(v_fst_4818_);
lean_dec(v_a_4814_);
if (v_isShared_4817_ == 0)
{
lean_ctor_set(v___x_4816_, 0, v_fst_4818_);
v___x_4820_ = v___x_4816_;
goto v_reusejp_4819_;
}
else
{
lean_object* v_reuseFailAlloc_4821_; 
v_reuseFailAlloc_4821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4821_, 0, v_fst_4818_);
v___x_4820_ = v_reuseFailAlloc_4821_;
goto v_reusejp_4819_;
}
v_reusejp_4819_:
{
return v___x_4820_;
}
}
}
else
{
lean_object* v_a_4823_; lean_object* v___x_4825_; uint8_t v_isShared_4826_; uint8_t v_isSharedCheck_4830_; 
v_a_4823_ = lean_ctor_get(v___x_4813_, 0);
v_isSharedCheck_4830_ = !lean_is_exclusive(v___x_4813_);
if (v_isSharedCheck_4830_ == 0)
{
v___x_4825_ = v___x_4813_;
v_isShared_4826_ = v_isSharedCheck_4830_;
goto v_resetjp_4824_;
}
else
{
lean_inc(v_a_4823_);
lean_dec(v___x_4813_);
v___x_4825_ = lean_box(0);
v_isShared_4826_ = v_isSharedCheck_4830_;
goto v_resetjp_4824_;
}
v_resetjp_4824_:
{
lean_object* v___x_4828_; 
if (v_isShared_4826_ == 0)
{
v___x_4828_ = v___x_4825_;
goto v_reusejp_4827_;
}
else
{
lean_object* v_reuseFailAlloc_4829_; 
v_reuseFailAlloc_4829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4829_, 0, v_a_4823_);
v___x_4828_ = v_reuseFailAlloc_4829_;
goto v_reusejp_4827_;
}
v_reusejp_4827_:
{
return v___x_4828_;
}
}
}
}
else
{
lean_dec_ref(v_positions_4777_);
return v___x_4804_;
}
}
else
{
lean_object* v_a_4831_; lean_object* v___x_4833_; uint8_t v_isShared_4834_; uint8_t v_isSharedCheck_4838_; 
lean_dec_ref(v___f_4790_);
lean_dec_ref(v_positions_4777_);
v_a_4831_ = lean_ctor_get(v___x_4797_, 0);
v_isSharedCheck_4838_ = !lean_is_exclusive(v___x_4797_);
if (v_isSharedCheck_4838_ == 0)
{
v___x_4833_ = v___x_4797_;
v_isShared_4834_ = v_isSharedCheck_4838_;
goto v_resetjp_4832_;
}
else
{
lean_inc(v_a_4831_);
lean_dec(v___x_4797_);
v___x_4833_ = lean_box(0);
v_isShared_4834_ = v_isSharedCheck_4838_;
goto v_resetjp_4832_;
}
v_resetjp_4832_:
{
lean_object* v___x_4836_; 
if (v_isShared_4834_ == 0)
{
v___x_4836_ = v___x_4833_;
goto v_reusejp_4835_;
}
else
{
lean_object* v_reuseFailAlloc_4837_; 
v_reuseFailAlloc_4837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4837_, 0, v_a_4831_);
v___x_4836_ = v_reuseFailAlloc_4837_;
goto v_reusejp_4835_;
}
v_reusejp_4835_:
{
return v___x_4836_;
}
}
}
}
else
{
lean_object* v_a_4839_; lean_object* v___x_4841_; uint8_t v_isShared_4842_; uint8_t v_isSharedCheck_4846_; 
lean_dec_ref(v_brecOn_4791_);
lean_dec_ref(v___f_4790_);
lean_dec_ref(v_positions_4777_);
v_a_4839_ = lean_ctor_get(v___x_4796_, 0);
v_isSharedCheck_4846_ = !lean_is_exclusive(v___x_4796_);
if (v_isSharedCheck_4846_ == 0)
{
v___x_4841_ = v___x_4796_;
v_isShared_4842_ = v_isSharedCheck_4846_;
goto v_resetjp_4840_;
}
else
{
lean_inc(v_a_4839_);
lean_dec(v___x_4796_);
v___x_4841_ = lean_box(0);
v_isShared_4842_ = v_isSharedCheck_4846_;
goto v_resetjp_4840_;
}
v_resetjp_4840_:
{
lean_object* v___x_4844_; 
if (v_isShared_4842_ == 0)
{
v___x_4844_ = v___x_4841_;
goto v_reusejp_4843_;
}
else
{
lean_object* v_reuseFailAlloc_4845_; 
v_reuseFailAlloc_4845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4845_, 0, v_a_4839_);
v___x_4844_ = v_reuseFailAlloc_4845_;
goto v_reusejp_4843_;
}
v_reusejp_4843_:
{
return v___x_4844_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___boxed(lean_object* v_recArgInfos_4847_, lean_object* v_positions_4848_, lean_object* v_brecOnConst_4849_, lean_object* v_a_4850_, lean_object* v_a_4851_, lean_object* v_a_4852_, lean_object* v_a_4853_, lean_object* v_a_4854_){
_start:
{
lean_object* v_res_4855_; 
v_res_4855_ = l_Lean_Elab_Structural_inferBRecOnFTypes(v_recArgInfos_4847_, v_positions_4848_, v_brecOnConst_4849_, v_a_4850_, v_a_4851_, v_a_4852_, v_a_4853_);
lean_dec(v_a_4853_);
lean_dec_ref(v_a_4852_);
lean_dec(v_a_4851_);
lean_dec_ref(v_a_4850_);
lean_dec_ref(v_recArgInfos_4847_);
return v_res_4855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0(lean_object* v_a_4856_, lean_object* v_as_4857_, size_t v_sz_4858_, size_t v_i_4859_, lean_object* v_b_4860_, lean_object* v___y_4861_, lean_object* v___y_4862_, lean_object* v___y_4863_, lean_object* v___y_4864_){
_start:
{
lean_object* v___x_4866_; 
v___x_4866_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(v_a_4856_, v_as_4857_, v_sz_4858_, v_i_4859_, v_b_4860_);
return v___x_4866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___boxed(lean_object* v_a_4867_, lean_object* v_as_4868_, lean_object* v_sz_4869_, lean_object* v_i_4870_, lean_object* v_b_4871_, lean_object* v___y_4872_, lean_object* v___y_4873_, lean_object* v___y_4874_, lean_object* v___y_4875_, lean_object* v___y_4876_){
_start:
{
size_t v_sz_boxed_4877_; size_t v_i_boxed_4878_; lean_object* v_res_4879_; 
v_sz_boxed_4877_ = lean_unbox_usize(v_sz_4869_);
lean_dec(v_sz_4869_);
v_i_boxed_4878_ = lean_unbox_usize(v_i_4870_);
lean_dec(v_i_4870_);
v_res_4879_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0(v_a_4867_, v_as_4868_, v_sz_boxed_4877_, v_i_boxed_4878_, v_b_4871_, v___y_4872_, v___y_4873_, v___y_4874_, v___y_4875_);
lean_dec(v___y_4875_);
lean_dec_ref(v___y_4874_);
lean_dec(v___y_4873_);
lean_dec_ref(v___y_4872_);
lean_dec_ref(v_as_4868_);
return v_res_4879_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__0(lean_object* v_a_4880_, lean_object* v_a_4881_){
_start:
{
if (lean_obj_tag(v_a_4880_) == 0)
{
lean_object* v___x_4882_; 
v___x_4882_ = l_List_reverse___redArg(v_a_4881_);
return v___x_4882_;
}
else
{
lean_object* v_head_4883_; lean_object* v_tail_4884_; lean_object* v___x_4886_; uint8_t v_isShared_4887_; uint8_t v_isSharedCheck_4895_; 
v_head_4883_ = lean_ctor_get(v_a_4880_, 0);
v_tail_4884_ = lean_ctor_get(v_a_4880_, 1);
v_isSharedCheck_4895_ = !lean_is_exclusive(v_a_4880_);
if (v_isSharedCheck_4895_ == 0)
{
v___x_4886_ = v_a_4880_;
v_isShared_4887_ = v_isSharedCheck_4895_;
goto v_resetjp_4885_;
}
else
{
lean_inc(v_tail_4884_);
lean_inc(v_head_4883_);
lean_dec(v_a_4880_);
v___x_4886_ = lean_box(0);
v_isShared_4887_ = v_isSharedCheck_4895_;
goto v_resetjp_4885_;
}
v_resetjp_4885_:
{
lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4892_; 
v___x_4888_ = l_Nat_reprFast(v_head_4883_);
v___x_4889_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4889_, 0, v___x_4888_);
v___x_4890_ = l_Lean_MessageData_ofFormat(v___x_4889_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 1, v_a_4881_);
lean_ctor_set(v___x_4886_, 0, v___x_4890_);
v___x_4892_ = v___x_4886_;
goto v_reusejp_4891_;
}
else
{
lean_object* v_reuseFailAlloc_4894_; 
v_reuseFailAlloc_4894_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4894_, 0, v___x_4890_);
lean_ctor_set(v_reuseFailAlloc_4894_, 1, v_a_4881_);
v___x_4892_ = v_reuseFailAlloc_4894_;
goto v_reusejp_4891_;
}
v_reusejp_4891_:
{
v_a_4880_ = v_tail_4884_;
v_a_4881_ = v___x_4892_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__1(lean_object* v_a_4896_, lean_object* v_a_4897_){
_start:
{
if (lean_obj_tag(v_a_4896_) == 0)
{
lean_object* v___x_4898_; 
v___x_4898_ = l_List_reverse___redArg(v_a_4897_);
return v___x_4898_;
}
else
{
lean_object* v_head_4899_; lean_object* v_tail_4900_; lean_object* v___x_4902_; uint8_t v_isShared_4903_; uint8_t v_isSharedCheck_4912_; 
v_head_4899_ = lean_ctor_get(v_a_4896_, 0);
v_tail_4900_ = lean_ctor_get(v_a_4896_, 1);
v_isSharedCheck_4912_ = !lean_is_exclusive(v_a_4896_);
if (v_isSharedCheck_4912_ == 0)
{
v___x_4902_ = v_a_4896_;
v_isShared_4903_ = v_isSharedCheck_4912_;
goto v_resetjp_4901_;
}
else
{
lean_inc(v_tail_4900_);
lean_inc(v_head_4899_);
lean_dec(v_a_4896_);
v___x_4902_ = lean_box(0);
v_isShared_4903_ = v_isSharedCheck_4912_;
goto v_resetjp_4901_;
}
v_resetjp_4901_:
{
lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4909_; 
v___x_4904_ = lean_array_to_list(v_head_4899_);
v___x_4905_ = lean_box(0);
v___x_4906_ = l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__0(v___x_4904_, v___x_4905_);
v___x_4907_ = l_Lean_MessageData_ofList(v___x_4906_);
if (v_isShared_4903_ == 0)
{
lean_ctor_set(v___x_4902_, 1, v_a_4897_);
lean_ctor_set(v___x_4902_, 0, v___x_4907_);
v___x_4909_ = v___x_4902_;
goto v_reusejp_4908_;
}
else
{
lean_object* v_reuseFailAlloc_4911_; 
v_reuseFailAlloc_4911_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4911_, 0, v___x_4907_);
lean_ctor_set(v_reuseFailAlloc_4911_, 1, v_a_4897_);
v___x_4909_ = v_reuseFailAlloc_4911_;
goto v_reusejp_4908_;
}
v_reusejp_4908_:
{
v_a_4896_ = v_tail_4900_;
v_a_4897_ = v___x_4909_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(lean_object* v_xs_4913_, lean_object* v_v_4914_, lean_object* v_i_4915_){
_start:
{
lean_object* v___x_4916_; uint8_t v___x_4917_; 
v___x_4916_ = lean_array_get_size(v_xs_4913_);
v___x_4917_ = lean_nat_dec_lt(v_i_4915_, v___x_4916_);
if (v___x_4917_ == 0)
{
lean_object* v___x_4918_; 
lean_dec(v_i_4915_);
v___x_4918_ = lean_box(0);
return v___x_4918_;
}
else
{
lean_object* v___x_4919_; uint8_t v___x_4920_; 
v___x_4919_ = lean_array_fget_borrowed(v_xs_4913_, v_i_4915_);
v___x_4920_ = lean_nat_dec_eq(v___x_4919_, v_v_4914_);
if (v___x_4920_ == 0)
{
lean_object* v___x_4921_; lean_object* v___x_4922_; 
v___x_4921_ = lean_unsigned_to_nat(1u);
v___x_4922_ = lean_nat_add(v_i_4915_, v___x_4921_);
lean_dec(v_i_4915_);
v_i_4915_ = v___x_4922_;
goto _start;
}
else
{
lean_object* v___x_4924_; 
v___x_4924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4924_, 0, v_i_4915_);
return v___x_4924_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2___boxed(lean_object* v_xs_4925_, lean_object* v_v_4926_, lean_object* v_i_4927_){
_start:
{
lean_object* v_res_4928_; 
v_res_4928_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(v_xs_4925_, v_v_4926_, v_i_4927_);
lean_dec(v_v_4926_);
lean_dec_ref(v_xs_4925_);
return v_res_4928_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(lean_object* v_xs_4929_, lean_object* v_v_4930_){
_start:
{
lean_object* v___x_4931_; lean_object* v___x_4932_; 
v___x_4931_ = lean_unsigned_to_nat(0u);
v___x_4932_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(v_xs_4929_, v_v_4930_, v___x_4931_);
return v___x_4932_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2___boxed(lean_object* v_xs_4933_, lean_object* v_v_4934_){
_start:
{
lean_object* v_res_4935_; 
v_res_4935_ = l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(v_xs_4933_, v_v_4934_);
lean_dec(v_v_4934_);
lean_dec_ref(v_xs_4933_);
return v_res_4935_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(lean_object* v_fnIdx_4939_, lean_object* v_as_4940_, size_t v_sz_4941_, size_t v_i_4942_, lean_object* v_b_4943_){
_start:
{
uint8_t v___x_4944_; 
v___x_4944_ = lean_usize_dec_lt(v_i_4942_, v_sz_4941_);
if (v___x_4944_ == 0)
{
lean_inc_ref(v_b_4943_);
return v_b_4943_;
}
else
{
lean_object* v___x_4945_; lean_object* v_a_4946_; lean_object* v___x_4947_; 
v___x_4945_ = lean_box(0);
v_a_4946_ = lean_array_uget_borrowed(v_as_4940_, v_i_4942_);
v___x_4947_ = l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(v_a_4946_, v_fnIdx_4939_);
if (lean_obj_tag(v___x_4947_) == 0)
{
lean_object* v___x_4948_; size_t v___x_4949_; size_t v___x_4950_; 
v___x_4948_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0));
v___x_4949_ = ((size_t)1ULL);
v___x_4950_ = lean_usize_add(v_i_4942_, v___x_4949_);
v_i_4942_ = v___x_4950_;
v_b_4943_ = v___x_4948_;
goto _start;
}
else
{
lean_object* v_val_4952_; lean_object* v___x_4954_; uint8_t v_isShared_4955_; uint8_t v_isSharedCheck_4963_; 
v_val_4952_ = lean_ctor_get(v___x_4947_, 0);
v_isSharedCheck_4963_ = !lean_is_exclusive(v___x_4947_);
if (v_isSharedCheck_4963_ == 0)
{
v___x_4954_ = v___x_4947_;
v_isShared_4955_ = v_isSharedCheck_4963_;
goto v_resetjp_4953_;
}
else
{
lean_inc(v_val_4952_);
lean_dec(v___x_4947_);
v___x_4954_ = lean_box(0);
v_isShared_4955_ = v_isSharedCheck_4963_;
goto v_resetjp_4953_;
}
v_resetjp_4953_:
{
lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4959_; 
v___x_4956_ = lean_array_get_size(v_a_4946_);
v___x_4957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4957_, 0, v___x_4956_);
lean_ctor_set(v___x_4957_, 1, v_val_4952_);
if (v_isShared_4955_ == 0)
{
lean_ctor_set(v___x_4954_, 0, v___x_4957_);
v___x_4959_ = v___x_4954_;
goto v_reusejp_4958_;
}
else
{
lean_object* v_reuseFailAlloc_4962_; 
v_reuseFailAlloc_4962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4962_, 0, v___x_4957_);
v___x_4959_ = v_reuseFailAlloc_4962_;
goto v_reusejp_4958_;
}
v_reusejp_4958_:
{
lean_object* v___x_4960_; lean_object* v___x_4961_; 
v___x_4960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4960_, 0, v___x_4959_);
v___x_4961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4961_, 0, v___x_4960_);
lean_ctor_set(v___x_4961_, 1, v___x_4945_);
return v___x_4961_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___boxed(lean_object* v_fnIdx_4964_, lean_object* v_as_4965_, lean_object* v_sz_4966_, lean_object* v_i_4967_, lean_object* v_b_4968_){
_start:
{
size_t v_sz_boxed_4969_; size_t v_i_boxed_4970_; lean_object* v_res_4971_; 
v_sz_boxed_4969_ = lean_unbox_usize(v_sz_4966_);
lean_dec(v_sz_4966_);
v_i_boxed_4970_ = lean_unbox_usize(v_i_4967_);
lean_dec(v_i_4967_);
v_res_4971_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(v_fnIdx_4964_, v_as_4965_, v_sz_boxed_4969_, v_i_boxed_4970_, v_b_4968_);
lean_dec_ref(v_b_4968_);
lean_dec_ref(v_as_4965_);
lean_dec(v_fnIdx_4964_);
return v_res_4971_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4973_; lean_object* v___x_4974_; 
v___x_4973_ = ((lean_object*)(l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0));
v___x_4974_ = l_Lean_stringToMessageData(v___x_4973_);
return v___x_4974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0(lean_object* v_recArgInfo_4975_, lean_object* v_positions_4976_, lean_object* v_fnIdx_4977_, lean_object* v_brecOnConst_4978_, lean_object* v_packedFArgs_4979_, lean_object* v_funTypes_4980_, lean_object* v_ys_4981_, lean_object* v___value_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_){
_start:
{
lean_object* v___x_5002_; lean_object* v_fst_5003_; lean_object* v_snd_5004_; lean_object* v___x_5005_; size_t v_sz_5006_; size_t v___x_5007_; lean_object* v___x_5008_; lean_object* v_fst_5009_; 
lean_inc_ref(v_ys_4981_);
lean_inc_ref(v_recArgInfo_4975_);
v___x_5002_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v_recArgInfo_4975_, v_ys_4981_);
v_fst_5003_ = lean_ctor_get(v___x_5002_, 0);
lean_inc(v_fst_5003_);
v_snd_5004_ = lean_ctor_get(v___x_5002_, 1);
lean_inc(v_snd_5004_);
lean_dec_ref(v___x_5002_);
v___x_5005_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0));
v_sz_5006_ = lean_array_size(v_positions_4976_);
v___x_5007_ = ((size_t)0ULL);
v___x_5008_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(v_fnIdx_4977_, v_positions_4976_, v_sz_5006_, v___x_5007_, v___x_5005_);
v_fst_5009_ = lean_ctor_get(v___x_5008_, 0);
lean_inc(v_fst_5009_);
lean_dec_ref(v___x_5008_);
if (lean_obj_tag(v_fst_5009_) == 0)
{
lean_dec(v_snd_5004_);
lean_dec(v_fst_5003_);
lean_dec_ref(v_ys_4981_);
lean_dec_ref(v_funTypes_4980_);
lean_dec_ref(v_brecOnConst_4978_);
lean_dec_ref(v_recArgInfo_4975_);
goto v___jp_4988_;
}
else
{
lean_object* v_val_5010_; 
v_val_5010_ = lean_ctor_get(v_fst_5009_, 0);
lean_inc(v_val_5010_);
lean_dec_ref_known(v_fst_5009_, 1);
if (lean_obj_tag(v_val_5010_) == 1)
{
lean_object* v_val_5011_; lean_object* v_fst_5012_; lean_object* v_snd_5013_; lean_object* v_indIdx_5014_; lean_object* v_brecOn_5015_; lean_object* v_brecOn_5016_; lean_object* v_brecOn_5017_; lean_object* v___x_5018_; 
lean_dec(v_fnIdx_4977_);
lean_dec_ref(v_positions_4976_);
v_val_5011_ = lean_ctor_get(v_val_5010_, 0);
lean_inc(v_val_5011_);
lean_dec_ref_known(v_val_5010_, 1);
v_fst_5012_ = lean_ctor_get(v_val_5011_, 0);
lean_inc(v_fst_5012_);
v_snd_5013_ = lean_ctor_get(v_val_5011_, 1);
lean_inc(v_snd_5013_);
lean_dec(v_val_5011_);
v_indIdx_5014_ = lean_ctor_get(v_recArgInfo_4975_, 5);
lean_inc(v_indIdx_5014_);
lean_dec_ref(v_recArgInfo_4975_);
v_brecOn_5015_ = lean_apply_1(v_brecOnConst_4978_, v_indIdx_5014_);
v_brecOn_5016_ = l_Lean_mkAppN(v_brecOn_5015_, v_fst_5003_);
lean_dec(v_fst_5003_);
v_brecOn_5017_ = l_Lean_mkAppN(v_brecOn_5016_, v_packedFArgs_4979_);
v___x_5018_ = l_Lean_Meta_PProdN_projM(v_fst_5012_, v_snd_5013_, v_brecOn_5017_, v___y_4983_, v___y_4984_, v___y_4985_, v___y_4986_);
lean_dec(v_snd_5013_);
lean_dec(v_fst_5012_);
if (lean_obj_tag(v___x_5018_) == 0)
{
lean_object* v_a_5019_; lean_object* v___x_5020_; uint8_t v___x_5021_; uint8_t v___x_5022_; lean_object* v___x_5023_; 
v_a_5019_ = lean_ctor_get(v___x_5018_, 0);
lean_inc(v_a_5019_);
lean_dec_ref_known(v___x_5018_, 1);
v___x_5020_ = l_Lean_mkAppN(v_a_5019_, v_snd_5004_);
lean_dec(v_snd_5004_);
v___x_5021_ = 1;
v___x_5022_ = 1;
v___x_5023_ = l_Lean_Meta_mkLetFVars(v_funTypes_4980_, v___x_5020_, v___x_5021_, v___x_5021_, v___x_5022_, v___y_4983_, v___y_4984_, v___y_4985_, v___y_4986_);
if (lean_obj_tag(v___x_5023_) == 0)
{
lean_object* v_a_5024_; uint8_t v___x_5025_; lean_object* v___x_5026_; 
v_a_5024_ = lean_ctor_get(v___x_5023_, 0);
lean_inc(v_a_5024_);
lean_dec_ref_known(v___x_5023_, 1);
v___x_5025_ = 0;
v___x_5026_ = l_Lean_Meta_mkLambdaFVars(v_ys_4981_, v_a_5024_, v___x_5025_, v___x_5021_, v___x_5025_, v___x_5021_, v___x_5022_, v___y_4983_, v___y_4984_, v___y_4985_, v___y_4986_);
return v___x_5026_;
}
else
{
lean_dec_ref(v_ys_4981_);
return v___x_5023_;
}
}
else
{
lean_dec(v_snd_5004_);
lean_dec_ref(v_ys_4981_);
lean_dec_ref(v_funTypes_4980_);
return v___x_5018_;
}
}
else
{
lean_dec(v_val_5010_);
lean_dec(v_snd_5004_);
lean_dec(v_fst_5003_);
lean_dec_ref(v_ys_4981_);
lean_dec_ref(v_funTypes_4980_);
lean_dec_ref(v_brecOnConst_4978_);
lean_dec_ref(v_recArgInfo_4975_);
goto v___jp_4988_;
}
}
v___jp_4988_:
{
lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; 
v___x_4989_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1, &l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1_once, _init_l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1);
v___x_4990_ = l_Nat_reprFast(v_fnIdx_4977_);
v___x_4991_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4991_, 0, v___x_4990_);
v___x_4992_ = l_Lean_MessageData_ofFormat(v___x_4991_);
v___x_4993_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4993_, 0, v___x_4989_);
lean_ctor_set(v___x_4993_, 1, v___x_4992_);
v___x_4994_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___lam__1___closed__3, &l_Lean_Elab_Structural_toBelow___lam__1___closed__3_once, _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__3);
v___x_4995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4995_, 0, v___x_4993_);
lean_ctor_set(v___x_4995_, 1, v___x_4994_);
v___x_4996_ = lean_array_to_list(v_positions_4976_);
v___x_4997_ = lean_box(0);
v___x_4998_ = l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__1(v___x_4996_, v___x_4997_);
v___x_4999_ = l_Lean_MessageData_ofList(v___x_4998_);
v___x_5000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5000_, 0, v___x_4995_);
lean_ctor_set(v___x_5000_, 1, v___x_4999_);
v___x_5001_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(v___x_5000_, v___y_4983_, v___y_4984_, v___y_4985_, v___y_4986_);
return v___x_5001_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0___boxed(lean_object* v_recArgInfo_5027_, lean_object* v_positions_5028_, lean_object* v_fnIdx_5029_, lean_object* v_brecOnConst_5030_, lean_object* v_packedFArgs_5031_, lean_object* v_funTypes_5032_, lean_object* v_ys_5033_, lean_object* v___value_5034_, lean_object* v___y_5035_, lean_object* v___y_5036_, lean_object* v___y_5037_, lean_object* v___y_5038_, lean_object* v___y_5039_){
_start:
{
lean_object* v_res_5040_; 
v_res_5040_ = l_Lean_Elab_Structural_mkBRecOnApp___lam__0(v_recArgInfo_5027_, v_positions_5028_, v_fnIdx_5029_, v_brecOnConst_5030_, v_packedFArgs_5031_, v_funTypes_5032_, v_ys_5033_, v___value_5034_, v___y_5035_, v___y_5036_, v___y_5037_, v___y_5038_);
lean_dec(v___y_5038_);
lean_dec_ref(v___y_5037_);
lean_dec(v___y_5036_);
lean_dec_ref(v___y_5035_);
lean_dec_ref(v___value_5034_);
lean_dec_ref(v_packedFArgs_5031_);
return v_res_5040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp(lean_object* v_positions_5041_, lean_object* v_fnIdx_5042_, lean_object* v_brecOnConst_5043_, lean_object* v_packedFArgs_5044_, lean_object* v_funTypes_5045_, lean_object* v_recArgInfo_5046_, lean_object* v_value_5047_, lean_object* v_a_5048_, lean_object* v_a_5049_, lean_object* v_a_5050_, lean_object* v_a_5051_){
_start:
{
lean_object* v___f_5053_; uint8_t v___x_5054_; lean_object* v___x_5055_; 
v___f_5053_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnApp___lam__0___boxed), 13, 6);
lean_closure_set(v___f_5053_, 0, v_recArgInfo_5046_);
lean_closure_set(v___f_5053_, 1, v_positions_5041_);
lean_closure_set(v___f_5053_, 2, v_fnIdx_5042_);
lean_closure_set(v___f_5053_, 3, v_brecOnConst_5043_);
lean_closure_set(v___f_5053_, 4, v_packedFArgs_5044_);
lean_closure_set(v___f_5053_, 5, v_funTypes_5045_);
v___x_5054_ = 0;
v___x_5055_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_value_5047_, v___f_5053_, v___x_5054_, v_a_5048_, v_a_5049_, v_a_5050_, v_a_5051_);
return v___x_5055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___boxed(lean_object* v_positions_5056_, lean_object* v_fnIdx_5057_, lean_object* v_brecOnConst_5058_, lean_object* v_packedFArgs_5059_, lean_object* v_funTypes_5060_, lean_object* v_recArgInfo_5061_, lean_object* v_value_5062_, lean_object* v_a_5063_, lean_object* v_a_5064_, lean_object* v_a_5065_, lean_object* v_a_5066_, lean_object* v_a_5067_){
_start:
{
lean_object* v_res_5068_; 
v_res_5068_ = l_Lean_Elab_Structural_mkBRecOnApp(v_positions_5056_, v_fnIdx_5057_, v_brecOnConst_5058_, v_packedFArgs_5059_, v_funTypes_5060_, v_recArgInfo_5061_, v_value_5062_, v_a_5063_, v_a_5064_, v_a_5065_, v_a_5066_);
lean_dec(v_a_5066_);
lean_dec_ref(v_a_5065_);
lean_dec(v_a_5064_);
lean_dec_ref(v_a_5063_);
return v_res_5068_;
}
}
lean_object* runtime_initialize_Lean_Util_HasConstCache(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Order(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Order_Lemmas(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Util_HasConstCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Order_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_HasConstCache(uint8_t builtin);
lean_object* initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Order(uint8_t builtin);
lean_object* initialize_Init_Data_Order_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_HasConstCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Order_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Structural_BRecOn(builtin);
}
#ifdef __cplusplus
}
#endif

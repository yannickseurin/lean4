// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.Eqns
// Imports: public import Lean.Elab.PreDefinition.FixedParams import Lean.Elab.PreDefinition.EqnsUtils import Lean.Meta.Tactic.CasesOnStuckLHS import Lean.Meta.Tactic.Delta import Lean.Meta.Tactic.Simp.Main import Lean.Meta.Tactic.Delta import Lean.Meta.Tactic.CasesOnStuckLHS import Lean.Meta.Tactic.Split
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
lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint8_t l_Lean_Environment_hasExposedBody(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Meta_delta_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t l_Lean_isBRecOnRecursor(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_define(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_inlineExpr(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_Eqns_tryURefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Eqns_tryContradiction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Eqns_whnfReducibleLHS_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Eqns_simpMatch_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Eqns_simpIf_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpTargetStar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_casesOnStuckLHS_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_splitTarget_x3f(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_io_mono_nanos_now();
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedName;
extern lean_object* l_Lean_Meta_unfoldThmSuffix;
lean_object* l_Lean_Meta_mkEqLikeNameFor(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Eqns_deltaLHS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_inferDefEqAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_tactic_hygienic;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_Meta_withEqnOptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default;
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_registerGetUnfoldEqnFn(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0;
static const lean_string_object l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__3;
static const lean_array_object l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo;
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__1;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "could not find `.brecOn` application in"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__1;
static const lean_closure_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__2_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__3 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "goal not an equality"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "step:\n"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__5_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__7___boxed(lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__5;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__7;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__9;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "no progress at goal\n"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__11 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__11_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eqns"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__16 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__16_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structural"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__14 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__14_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__14_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15_value),LEAN_SCALAR_PTR_LITERAL(117, 73, 239, 7, 229, 151, 237, 199)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17_value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__16_value),LEAN_SCALAR_PTR_LITERAL(83, 150, 182, 177, 14, 34, 156, 192)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__18 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__18_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__19 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__19_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "whnfReducibleLHS succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__22 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__22_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "simpMatch\? succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__24 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__24_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "simpIf\? succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__26 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__26_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "simpTargetStar closed the goal"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__28 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__28_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "deltaRHS\? succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__30 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__30_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "casesOnStuckLHS\? succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__32 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__32_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "splitTarget\? succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__34 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__34_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "simpTargetStar modified the goal"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__36 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__36_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "tryContadiction succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__39;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tryURefl succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__40 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__40_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__41;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "r"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(201, 206, 29, 183, 206, 15, 98, 41)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "theorem `"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__4;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` is not an equality\n"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__6;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "abstracting"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__8;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " from"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__9_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__10;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "no theorem `"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__11_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__12;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`\n"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__13_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "goUnfold:\n"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "proving:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "failed to generate equational theorem for `"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Structural"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "eqnInfoExt"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(14, 221, 148, 2, 30, 47, 242, 74)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(119, 216, 81, 142, 241, 75, 113, 77)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_eqnInfoExt;
static lean_once_cell_t l_Lean_Elab_Structural_registerEqnsInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_registerEqnsInfo___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_registerEqnsInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_registerEqnsInfo___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_registerEqnsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_registerEqnsInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2_spec__3(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getUnfoldFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getUnfoldFor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_get_structural_rec_arg_pos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getUnfoldFor_x3f___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PreDefinition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Eqns"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_unsafeCast___redArg(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__3(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_6_ = lean_box(0);
v___x_7_ = ((lean_object*)(l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__2));
v___x_8_ = l_Lean_Expr_const___override(v___x_7_, v___x_6_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__5(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_11_ = l_Lean_Elab_instInhabitedFixedParamPerms_default;
v___x_12_ = ((lean_object*)(l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__4));
v___x_13_ = lean_unsigned_to_nat(0u);
v___x_14_ = lean_obj_once(&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__3, &l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__3_once, _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__3);
v___x_15_ = lean_box(0);
v___x_16_ = lean_obj_once(&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0, &l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0_once, _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0);
v___x_17_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
lean_ctor_set(v___x_17_, 1, v___x_15_);
lean_ctor_set(v___x_17_, 2, v___x_14_);
lean_ctor_set(v___x_17_, 3, v___x_14_);
lean_ctor_set(v___x_17_, 4, v___x_13_);
lean_ctor_set(v___x_17_, 5, v___x_12_);
lean_ctor_set(v___x_17_, 6, v___x_11_);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_obj_once(&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__5, &l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__5_once, _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__5);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedEqnInfo(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Elab_Structural_instInhabitedEqnInfo_default;
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___lam__0(lean_object* v_k_20_, lean_object* v_b_21_, lean_object* v_c_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v___x_28_; 
lean_inc(v___y_26_);
lean_inc_ref(v___y_25_);
lean_inc(v___y_24_);
lean_inc_ref(v___y_23_);
v___x_28_ = lean_apply_7(v_k_20_, v_b_21_, v_c_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, lean_box(0));
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___lam__0___boxed(lean_object* v_k_29_, lean_object* v_b_30_, lean_object* v_c_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___lam__0(v_k_29_, v_b_30_, v_c_31_, v___y_32_, v___y_33_, v___y_34_, v___y_35_);
lean_dec(v___y_35_);
lean_dec_ref(v___y_34_);
lean_dec(v___y_33_);
lean_dec_ref(v___y_32_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg(lean_object* v_type_38_, lean_object* v_k_39_, uint8_t v_cleanupAnnotations_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_){
_start:
{
lean_object* v___f_46_; uint8_t v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___f_46_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_46_, 0, v_k_39_);
v___x_47_ = 0;
v___x_48_ = lean_box(0);
v___x_49_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_47_, v___x_48_, v_type_38_, v___f_46_, v_cleanupAnnotations_40_, v___x_47_, v___y_41_, v___y_42_, v___y_43_, v___y_44_);
if (lean_obj_tag(v___x_49_) == 0)
{
lean_object* v_a_50_; lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_57_; 
v_a_50_ = lean_ctor_get(v___x_49_, 0);
v_isSharedCheck_57_ = !lean_is_exclusive(v___x_49_);
if (v_isSharedCheck_57_ == 0)
{
v___x_52_ = v___x_49_;
v_isShared_53_ = v_isSharedCheck_57_;
goto v_resetjp_51_;
}
else
{
lean_inc(v_a_50_);
lean_dec(v___x_49_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_57_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
lean_object* v___x_55_; 
if (v_isShared_53_ == 0)
{
v___x_55_ = v___x_52_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_a_50_);
v___x_55_ = v_reuseFailAlloc_56_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
return v___x_55_;
}
}
}
else
{
lean_object* v_a_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_65_; 
v_a_58_ = lean_ctor_get(v___x_49_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_49_);
if (v_isSharedCheck_65_ == 0)
{
v___x_60_ = v___x_49_;
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_a_58_);
lean_dec(v___x_49_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_63_; 
if (v_isShared_61_ == 0)
{
v___x_63_ = v___x_60_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_a_58_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
return v___x_63_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___boxed(lean_object* v_type_66_, lean_object* v_k_67_, lean_object* v_cleanupAnnotations_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_74_; lean_object* v_res_75_; 
v_cleanupAnnotations_boxed_74_ = lean_unbox(v_cleanupAnnotations_68_);
v_res_75_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg(v_type_66_, v_k_67_, v_cleanupAnnotations_boxed_74_, v___y_69_, v___y_70_, v___y_71_, v___y_72_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
lean_dec(v___y_70_);
lean_dec_ref(v___y_69_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1(lean_object* v_00_u03b1_76_, lean_object* v_type_77_, lean_object* v_k_78_, uint8_t v_cleanupAnnotations_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg(v_type_77_, v_k_78_, v_cleanupAnnotations_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___boxed(lean_object* v_00_u03b1_86_, lean_object* v_type_87_, lean_object* v_k_88_, lean_object* v_cleanupAnnotations_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_95_; lean_object* v_res_96_; 
v_cleanupAnnotations_boxed_95_ = lean_unbox(v_cleanupAnnotations_89_);
v_res_96_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1(v_00_u03b1_86_, v_type_87_, v_k_88_, v_cleanupAnnotations_boxed_95_, v___y_90_, v___y_91_, v___y_92_, v___y_93_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__2(lean_object* v___x_97_, lean_object* v_k_98_, lean_object* v___x_99_, lean_object* v_x_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_106_ = l_Subarray_copy___redArg(v___x_97_);
lean_inc_ref(v_x_100_);
v___x_107_ = l_Lean_mkAppN(v_x_100_, v___x_106_);
lean_dec_ref(v___x_106_);
lean_inc(v___y_104_);
lean_inc_ref(v___y_103_);
lean_inc(v___y_102_);
lean_inc_ref(v___y_101_);
v___x_108_ = lean_apply_8(v_k_98_, v___x_99_, v_x_100_, v___x_107_, v___y_101_, v___y_102_, v___y_103_, v___y_104_, lean_box(0));
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__2___boxed(lean_object* v___x_109_, lean_object* v_k_110_, lean_object* v___x_111_, lean_object* v_x_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__2(v___x_109_, v_k_110_, v___x_111_, v_x_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__0(lean_object* v_typeName_119_, lean_object* v_idx_120_, lean_object* v_x_121_, lean_object* v_k_122_, lean_object* v_brecOnApp_123_, lean_object* v_x_124_, lean_object* v_c_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_131_ = l_Lean_mkProj(v_typeName_119_, v_idx_120_, v_c_125_);
v___x_132_ = l_Lean_mkAppN(v___x_131_, v_x_121_);
lean_inc(v___y_129_);
lean_inc_ref(v___y_128_);
lean_inc(v___y_127_);
lean_inc_ref(v___y_126_);
v___x_133_ = lean_apply_8(v_k_122_, v_brecOnApp_123_, v_x_124_, v___x_132_, v___y_126_, v___y_127_, v___y_128_, v___y_129_, lean_box(0));
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__0___boxed(lean_object* v_typeName_134_, lean_object* v_idx_135_, lean_object* v_x_136_, lean_object* v_k_137_, lean_object* v_brecOnApp_138_, lean_object* v_x_139_, lean_object* v_c_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__0(v_typeName_134_, v_idx_135_, v_x_136_, v_k_137_, v_brecOnApp_138_, v_x_139_, v_c_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec_ref(v_x_136_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___lam__0(lean_object* v_k_147_, lean_object* v_b_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
lean_object* v___x_154_; 
lean_inc(v___y_152_);
lean_inc_ref(v___y_151_);
lean_inc(v___y_150_);
lean_inc_ref(v___y_149_);
v___x_154_ = lean_apply_6(v_k_147_, v_b_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_, lean_box(0));
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___lam__0___boxed(lean_object* v_k_155_, lean_object* v_b_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___lam__0(v_k_155_, v_b_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
lean_dec(v___y_158_);
lean_dec_ref(v___y_157_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg(lean_object* v_name_163_, uint8_t v_bi_164_, lean_object* v_type_165_, lean_object* v_k_166_, uint8_t v_kind_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
lean_object* v___f_173_; lean_object* v___x_174_; 
v___f_173_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_173_, 0, v_k_166_);
v___x_174_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_163_, v_bi_164_, v_type_165_, v___f_173_, v_kind_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_);
if (lean_obj_tag(v___x_174_) == 0)
{
lean_object* v_a_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_182_; 
v_a_175_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_182_ == 0)
{
v___x_177_ = v___x_174_;
v_isShared_178_ = v_isSharedCheck_182_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_a_175_);
lean_dec(v___x_174_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_182_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_180_; 
if (v_isShared_178_ == 0)
{
v___x_180_ = v___x_177_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_a_175_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
else
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_190_; 
v_a_183_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_190_ == 0)
{
v___x_185_ = v___x_174_;
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_174_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_183_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___boxed(lean_object* v_name_191_, lean_object* v_bi_192_, lean_object* v_type_193_, lean_object* v_k_194_, lean_object* v_kind_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
uint8_t v_bi_boxed_201_; uint8_t v_kind_boxed_202_; lean_object* v_res_203_; 
v_bi_boxed_201_ = lean_unbox(v_bi_192_);
v_kind_boxed_202_ = lean_unbox(v_kind_195_);
v_res_203_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg(v_name_191_, v_bi_boxed_201_, v_type_193_, v_k_194_, v_kind_boxed_202_, v___y_196_, v___y_197_, v___y_198_, v___y_199_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___redArg(lean_object* v_name_204_, lean_object* v_type_205_, lean_object* v_k_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
uint8_t v___x_212_; uint8_t v___x_213_; lean_object* v___x_214_; 
v___x_212_ = 0;
v___x_213_ = 0;
v___x_214_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg(v_name_204_, v___x_212_, v_type_205_, v_k_206_, v___x_213_, v___y_207_, v___y_208_, v___y_209_, v___y_210_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___redArg___boxed(lean_object* v_name_215_, lean_object* v_type_216_, lean_object* v_k_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___redArg(v_name_215_, v_type_216_, v_k_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
lean_dec(v___y_219_);
lean_dec_ref(v___y_218_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0(lean_object* v_msgData_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_){
_start:
{
lean_object* v___x_230_; lean_object* v_env_231_; lean_object* v___x_232_; lean_object* v_toCold_233_; lean_object* v_mctx_234_; lean_object* v_lctx_235_; lean_object* v_options_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_230_ = lean_st_ref_get(v___y_228_);
v_env_231_ = lean_ctor_get(v___x_230_, 0);
lean_inc_ref(v_env_231_);
lean_dec(v___x_230_);
v___x_232_ = lean_st_ref_get(v___y_226_);
v_toCold_233_ = lean_ctor_get(v___y_227_, 0);
v_mctx_234_ = lean_ctor_get(v___x_232_, 0);
lean_inc_ref(v_mctx_234_);
lean_dec(v___x_232_);
v_lctx_235_ = lean_ctor_get(v___y_225_, 2);
v_options_236_ = lean_ctor_get(v_toCold_233_, 2);
lean_inc_ref(v_options_236_);
lean_inc_ref(v_lctx_235_);
v___x_237_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_237_, 0, v_env_231_);
lean_ctor_set(v___x_237_, 1, v_mctx_234_);
lean_ctor_set(v___x_237_, 2, v_lctx_235_);
lean_ctor_set(v___x_237_, 3, v_options_236_);
v___x_238_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
lean_ctor_set(v___x_238_, 1, v_msgData_224_);
v___x_239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0___boxed(lean_object* v_msgData_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0(v_msgData_240_, v___y_241_, v___y_242_, v___y_243_, v___y_244_);
lean_dec(v___y_244_);
lean_dec_ref(v___y_243_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(lean_object* v_msg_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_ref_253_; lean_object* v___x_254_; lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_263_; 
v_ref_253_ = lean_ctor_get(v___y_250_, 2);
v___x_254_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0(v_msg_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
v_a_255_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_263_ == 0)
{
v___x_257_ = v___x_254_;
v_isShared_258_ = v_isSharedCheck_263_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_254_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_263_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_259_; lean_object* v___x_261_; 
lean_inc(v_ref_253_);
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v_ref_253_);
lean_ctor_set(v___x_259_, 1, v_a_255_);
if (v_isShared_258_ == 0)
{
lean_ctor_set_tag(v___x_257_, 1);
lean_ctor_set(v___x_257_, 0, v___x_259_);
v___x_261_ = v___x_257_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_259_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg___boxed(lean_object* v_msg_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v_msg_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__1(lean_object* v_xs_271_, lean_object* v_x_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lean_array_get_size(v_xs_271_);
v___x_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__1___boxed(lean_object* v_xs_280_, lean_object* v_x_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__1(v_xs_280_, v_x_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
lean_dec(v___y_285_);
lean_dec_ref(v___y_284_);
lean_dec(v___y_283_);
lean_dec_ref(v___y_282_);
lean_dec_ref(v_x_281_);
lean_dec_ref(v_xs_280_);
return v_res_287_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = lean_box(0);
v___x_289_ = l_unsafeCast___redArg(v___x_288_);
return v___x_289_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__1(void){
_start:
{
lean_object* v___x_290_; lean_object* v_dummy_291_; 
v___x_290_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0);
v_dummy_291_ = l_Lean_Expr_sort___override(v___x_290_);
return v_dummy_291_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__0));
v___x_294_ = l_Lean_stringToMessageData(v___x_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg(lean_object* v_e_299_, lean_object* v_k_300_, lean_object* v_x_301_, lean_object* v_x_302_, lean_object* v_x_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_){
_start:
{
lean_object* v___y_310_; lean_object* v___y_311_; lean_object* v___y_312_; lean_object* v___y_313_; 
if (lean_obj_tag(v_x_301_) == 5)
{
lean_object* v_fn_318_; lean_object* v_arg_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v_fn_318_ = lean_ctor_get(v_x_301_, 0);
lean_inc_ref(v_fn_318_);
v_arg_319_ = lean_ctor_get(v_x_301_, 1);
lean_inc_ref(v_arg_319_);
lean_dec_ref_known(v_x_301_, 2);
v___x_320_ = lean_array_set(v_x_302_, v_x_303_, v_arg_319_);
v___x_321_ = lean_unsigned_to_nat(1u);
v___x_322_ = lean_nat_sub(v_x_303_, v___x_321_);
lean_dec(v_x_303_);
v_x_301_ = v_fn_318_;
v_x_302_ = v___x_320_;
v_x_303_ = v___x_322_;
goto _start;
}
else
{
lean_dec(v_x_303_);
if (lean_obj_tag(v_x_301_) == 11)
{
lean_object* v_typeName_324_; lean_object* v_idx_325_; lean_object* v_struct_326_; lean_object* v___f_327_; lean_object* v___x_328_; 
lean_dec_ref(v_e_299_);
v_typeName_324_ = lean_ctor_get(v_x_301_, 0);
lean_inc(v_typeName_324_);
v_idx_325_ = lean_ctor_get(v_x_301_, 1);
lean_inc(v_idx_325_);
v_struct_326_ = lean_ctor_get(v_x_301_, 2);
lean_inc_ref(v_struct_326_);
lean_dec_ref_known(v_x_301_, 3);
v___f_327_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__0___boxed), 12, 4);
lean_closure_set(v___f_327_, 0, v_typeName_324_);
lean_closure_set(v___f_327_, 1, v_idx_325_);
lean_closure_set(v___f_327_, 2, v_x_302_);
lean_closure_set(v___f_327_, 3, v_k_300_);
v___x_328_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg(v_struct_326_, v___f_327_, v___y_304_, v___y_305_, v___y_306_, v___y_307_);
return v___x_328_;
}
else
{
if (lean_obj_tag(v_x_301_) == 4)
{
lean_object* v_declName_329_; lean_object* v___f_330_; lean_object* v___x_331_; lean_object* v_env_332_; uint8_t v___x_333_; 
v_declName_329_ = lean_ctor_get(v_x_301_, 0);
v___f_330_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__2));
v___x_331_ = lean_st_ref_get(v___y_307_);
v_env_332_ = lean_ctor_get(v___x_331_, 0);
lean_inc_ref(v_env_332_);
lean_dec(v___x_331_);
lean_inc(v_declName_329_);
v___x_333_ = l_Lean_isBRecOnRecursor(v_env_332_, v_declName_329_);
if (v___x_333_ == 0)
{
lean_dec_ref_known(v_x_301_, 2);
lean_dec_ref(v_x_302_);
lean_dec_ref(v_k_300_);
v___y_310_ = v___y_304_;
v___y_311_ = v___y_305_;
v___y_312_ = v___y_306_;
v___y_313_ = v___y_307_;
goto v___jp_309_;
}
else
{
lean_object* v___x_334_; 
lean_inc(v___y_307_);
lean_inc_ref(v___y_306_);
lean_inc(v___y_305_);
lean_inc_ref(v___y_304_);
lean_inc_ref(v_x_301_);
v___x_334_ = lean_infer_type(v_x_301_, v___y_304_, v___y_305_, v___y_306_, v___y_307_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; uint8_t v___x_336_; lean_object* v___x_337_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_a_335_);
lean_dec_ref_known(v___x_334_, 1);
v___x_336_ = 0;
v___x_337_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg(v_a_335_, v___f_330_, v___x_336_, v___y_304_, v___y_305_, v___y_306_, v___y_307_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_339_; uint8_t v___x_340_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
lean_inc(v_a_338_);
lean_dec_ref_known(v___x_337_, 1);
v___x_339_ = lean_array_get_size(v_x_302_);
v___x_340_ = lean_nat_dec_le(v_a_338_, v___x_339_);
if (v___x_340_ == 0)
{
lean_dec(v_a_338_);
lean_dec_ref_known(v_x_301_, 2);
lean_dec_ref(v_x_302_);
lean_dec_ref(v_k_300_);
v___y_310_ = v___y_304_;
v___y_311_ = v___y_305_;
v___y_312_ = v___y_306_;
v___y_313_ = v___y_307_;
goto v___jp_309_;
}
else
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___f_346_; lean_object* v___x_347_; 
lean_dec_ref(v_e_299_);
v___x_341_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_338_);
lean_inc_ref(v_x_302_);
v___x_342_ = l_Array_toSubarray___redArg(v_x_302_, v___x_341_, v_a_338_);
v___x_343_ = l_Subarray_copy___redArg(v___x_342_);
v___x_344_ = l_Lean_mkAppN(v_x_301_, v___x_343_);
lean_dec_ref(v___x_343_);
v___x_345_ = l_Array_toSubarray___redArg(v_x_302_, v_a_338_, v___x_339_);
lean_inc_ref(v___x_344_);
v___f_346_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__2___boxed), 9, 3);
lean_closure_set(v___f_346_, 0, v___x_345_);
lean_closure_set(v___f_346_, 1, v_k_300_);
lean_closure_set(v___f_346_, 2, v___x_344_);
lean_inc(v___y_307_);
lean_inc_ref(v___y_306_);
lean_inc(v___y_305_);
lean_inc_ref(v___y_304_);
v___x_347_ = lean_infer_type(v___x_344_, v___y_304_, v___y_305_, v___y_306_, v___y_307_);
if (lean_obj_tag(v___x_347_) == 0)
{
lean_object* v_a_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_a_348_ = lean_ctor_get(v___x_347_, 0);
lean_inc(v_a_348_);
lean_dec_ref_known(v___x_347_, 1);
v___x_349_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__4));
v___x_350_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___redArg(v___x_349_, v_a_348_, v___f_346_, v___y_304_, v___y_305_, v___y_306_, v___y_307_);
return v___x_350_;
}
else
{
lean_object* v_a_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_358_; 
lean_dec_ref(v___f_346_);
v_a_351_ = lean_ctor_get(v___x_347_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_358_ == 0)
{
v___x_353_ = v___x_347_;
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_a_351_);
lean_dec(v___x_347_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_356_; 
if (v_isShared_354_ == 0)
{
v___x_356_ = v___x_353_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v_a_351_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
}
}
else
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_366_; 
lean_dec_ref_known(v_x_301_, 2);
lean_dec_ref(v_x_302_);
lean_dec_ref(v_k_300_);
lean_dec_ref(v_e_299_);
v_a_359_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_366_ == 0)
{
v___x_361_ = v___x_337_;
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_337_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
if (v_isShared_362_ == 0)
{
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_359_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
else
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_374_; 
lean_dec_ref_known(v_x_301_, 2);
lean_dec_ref(v_x_302_);
lean_dec_ref(v_k_300_);
lean_dec_ref(v_e_299_);
v_a_367_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_374_ == 0)
{
v___x_369_ = v___x_334_;
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_334_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_372_; 
if (v_isShared_370_ == 0)
{
v___x_372_ = v___x_369_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_a_367_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
}
else
{
lean_dec_ref(v_x_302_);
lean_dec_ref(v_x_301_);
lean_dec_ref(v_k_300_);
v___y_310_ = v___y_304_;
v___y_311_ = v___y_305_;
v___y_312_ = v___y_306_;
v___y_313_ = v___y_307_;
goto v___jp_309_;
}
}
}
v___jp_309_:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_314_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__1, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__1);
v___x_315_ = l_Lean_indentExpr(v_e_299_);
v___x_316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_314_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
v___x_317_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_316_, v___y_310_, v___y_311_, v___y_312_, v___y_313_);
return v___x_317_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg(lean_object* v_e_375_, lean_object* v_k_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_){
_start:
{
lean_object* v_dummy_382_; lean_object* v_nargs_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v_dummy_382_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__1);
v_nargs_383_ = l_Lean_Expr_getAppNumArgs(v_e_375_);
lean_inc(v_nargs_383_);
v___x_384_ = lean_mk_array(v_nargs_383_, v_dummy_382_);
v___x_385_ = lean_unsigned_to_nat(1u);
v___x_386_ = lean_nat_sub(v_nargs_383_, v___x_385_);
lean_dec(v_nargs_383_);
lean_inc_ref(v_e_375_);
v___x_387_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg(v_e_375_, v_k_376_, v_e_375_, v___x_384_, v___x_386_, v_a_377_, v_a_378_, v_a_379_, v_a_380_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___boxed(lean_object* v_e_388_, lean_object* v_k_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg(v_e_388_, v_k_389_, v_a_390_, v_a_391_, v_a_392_, v_a_393_);
lean_dec(v_a_393_);
lean_dec_ref(v_a_392_);
lean_dec(v_a_391_);
lean_dec_ref(v_a_390_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___boxed(lean_object* v_e_396_, lean_object* v_k_397_, lean_object* v_x_398_, lean_object* v_x_399_, lean_object* v_x_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg(v_e_396_, v_k_397_, v_x_398_, v_x_399_, v_x_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go(lean_object* v_00_u03b1_407_, lean_object* v_e_408_, lean_object* v_k_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg(v_e_408_, v_k_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___boxed(lean_object* v_00_u03b1_416_, lean_object* v_e_417_, lean_object* v_k_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go(v_00_u03b1_416_, v_e_417_, v_k_418_, v_a_419_, v_a_420_, v_a_421_, v_a_422_);
lean_dec(v_a_422_);
lean_dec_ref(v_a_421_);
lean_dec(v_a_420_);
lean_dec_ref(v_a_419_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0(lean_object* v_00_u03b1_425_, lean_object* v_msg_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v_msg_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___boxed(lean_object* v_00_u03b1_433_, lean_object* v_msg_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0(v_00_u03b1_433_, v_msg_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3(lean_object* v_00_u03b1_441_, lean_object* v_name_442_, uint8_t v_bi_443_, lean_object* v_type_444_, lean_object* v_k_445_, uint8_t v_kind_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_){
_start:
{
lean_object* v___x_452_; 
v___x_452_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg(v_name_442_, v_bi_443_, v_type_444_, v_k_445_, v_kind_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___boxed(lean_object* v_00_u03b1_453_, lean_object* v_name_454_, lean_object* v_bi_455_, lean_object* v_type_456_, lean_object* v_k_457_, lean_object* v_kind_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
uint8_t v_bi_boxed_464_; uint8_t v_kind_boxed_465_; lean_object* v_res_466_; 
v_bi_boxed_464_ = lean_unbox(v_bi_455_);
v_kind_boxed_465_ = lean_unbox(v_kind_458_);
v_res_466_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3(v_00_u03b1_453_, v_name_454_, v_bi_boxed_464_, v_type_456_, v_k_457_, v_kind_boxed_465_, v___y_459_, v___y_460_, v___y_461_, v___y_462_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2(lean_object* v_00_u03b1_467_, lean_object* v_name_468_, lean_object* v_type_469_, lean_object* v_k_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_){
_start:
{
lean_object* v___x_476_; 
v___x_476_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___redArg(v_name_468_, v_type_469_, v_k_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___boxed(lean_object* v_00_u03b1_477_, lean_object* v_name_478_, lean_object* v_type_479_, lean_object* v_k_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2(v_00_u03b1_477_, v_name_478_, v_type_479_, v_k_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3(lean_object* v_00_u03b1_487_, lean_object* v_e_488_, lean_object* v_k_489_, lean_object* v_x_490_, lean_object* v_x_491_, lean_object* v_x_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg(v_e_488_, v_k_489_, v_x_490_, v_x_491_, v_x_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___boxed(lean_object* v_00_u03b1_499_, lean_object* v_e_500_, lean_object* v_k_501_, lean_object* v_x_502_, lean_object* v_x_503_, lean_object* v_x_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3(v_00_u03b1_499_, v_e_500_, v_k_501_, v_x_502_, v_x_503_, v_x_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_);
lean_dec(v___y_508_);
lean_dec_ref(v___y_507_);
lean_dec(v___y_506_);
lean_dec_ref(v___y_505_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___lam__0(lean_object* v___x_511_, uint8_t v___x_512_, lean_object* v_brecOnApp_513_, lean_object* v_x_514_, lean_object* v_c_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = l_Lean_Meta_mkEq(v_c_515_, v___x_511_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; uint8_t v___x_526_; uint8_t v___x_527_; lean_object* v___x_528_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_a_522_);
lean_dec_ref_known(v___x_521_, 1);
v___x_523_ = lean_unsigned_to_nat(1u);
v___x_524_ = lean_mk_empty_array_with_capacity(v___x_523_);
v___x_525_ = lean_array_push(v___x_524_, v_x_514_);
v___x_526_ = 0;
v___x_527_ = 1;
v___x_528_ = l_Lean_Meta_mkLambdaFVars(v___x_525_, v_a_522_, v___x_526_, v___x_512_, v___x_526_, v___x_512_, v___x_527_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_528_) == 0)
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_537_; 
v_a_529_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_537_ == 0)
{
v___x_531_ = v___x_528_;
v_isShared_532_ = v_isSharedCheck_537_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_528_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_537_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_533_; lean_object* v___x_535_; 
v___x_533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_533_, 0, v_brecOnApp_513_);
lean_ctor_set(v___x_533_, 1, v_a_529_);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 0, v___x_533_);
v___x_535_ = v___x_531_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v___x_533_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
}
else
{
lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_545_; 
lean_dec_ref(v_brecOnApp_513_);
v_a_538_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_545_ == 0)
{
v___x_540_ = v___x_528_;
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_dec(v___x_528_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_543_; 
if (v_isShared_541_ == 0)
{
v___x_543_ = v___x_540_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_a_538_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
else
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_553_; 
lean_dec_ref(v_x_514_);
lean_dec_ref(v_brecOnApp_513_);
v_a_546_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_553_ == 0)
{
v___x_548_ = v___x_521_;
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_521_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_551_; 
if (v_isShared_549_ == 0)
{
v___x_551_ = v___x_548_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_a_546_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___lam__0___boxed(lean_object* v___x_554_, lean_object* v___x_555_, lean_object* v_brecOnApp_556_, lean_object* v_x_557_, lean_object* v_c_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
uint8_t v___x_647__boxed_564_; lean_object* v_res_565_; 
v___x_647__boxed_564_ = lean_unbox(v___x_555_);
v_res_565_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___lam__0(v___x_554_, v___x_647__boxed_564_, v_brecOnApp_556_, v_x_557_, v_c_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
return v_res_565_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__3(void){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__2));
v___x_571_ = l_Lean_stringToMessageData(v___x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS(lean_object* v_goal_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_578_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__1));
v___x_579_ = lean_unsigned_to_nat(3u);
v___x_580_ = l_Lean_Expr_isAppOfArity(v_goal_572_, v___x_578_, v___x_579_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_581_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__3);
v___x_582_ = l_Lean_indentExpr(v_goal_572_);
v___x_583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_581_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_583_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
return v___x_584_;
}
else
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___f_589_; lean_object* v___x_590_; 
v___x_585_ = l_Lean_Expr_appFn_x21(v_goal_572_);
v___x_586_ = l_Lean_Expr_appArg_x21(v___x_585_);
lean_dec_ref(v___x_585_);
v___x_587_ = l_Lean_Expr_appArg_x21(v_goal_572_);
lean_dec_ref(v_goal_572_);
v___x_588_ = lean_box(v___x_580_);
v___f_589_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___lam__0___boxed), 10, 2);
lean_closure_set(v___f_589_, 0, v___x_587_);
lean_closure_set(v___f_589_, 1, v___x_588_);
v___x_590_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg(v___x_586_, v___f_589_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
return v___x_590_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___boxed(lean_object* v_goal_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS(v_goal_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_);
lean_dec(v_a_595_);
lean_dec_ref(v_a_594_);
lean_dec(v_a_593_);
lean_dec_ref(v_a_592_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(lean_object* v_mvarId_598_, lean_object* v_x_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_598_, v_x_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_);
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_613_; 
v_a_606_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_613_ == 0)
{
v___x_608_ = v___x_605_;
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_605_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_611_; 
if (v_isShared_609_ == 0)
{
v___x_611_ = v___x_608_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_a_606_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
}
else
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_621_; 
v_a_614_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_621_ == 0)
{
v___x_616_ = v___x_605_;
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_605_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_614_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg___boxed(lean_object* v_mvarId_622_, lean_object* v_x_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_mvarId_622_, v_x_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_);
lean_dec(v___y_627_);
lean_dec_ref(v___y_626_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0(lean_object* v_00_u03b1_630_, lean_object* v_mvarId_631_, lean_object* v_x_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_){
_start:
{
lean_object* v___x_638_; 
v___x_638_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_mvarId_631_, v_x_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___boxed(lean_object* v_00_u03b1_639_, lean_object* v_mvarId_640_, lean_object* v_x_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0(v_00_u03b1_639_, v_mvarId_640_, v_x_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
lean_dec(v___y_645_);
lean_dec_ref(v___y_644_);
lean_dec(v___y_643_);
lean_dec_ref(v___y_642_);
return v_res_647_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__0(lean_object* v_declName_648_, lean_object* v_x_649_){
_start:
{
uint8_t v___x_650_; 
v___x_650_ = lean_name_eq(v_x_649_, v_declName_648_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__0___boxed(lean_object* v_declName_651_, lean_object* v_x_652_){
_start:
{
uint8_t v_res_653_; lean_object* v_r_654_; 
v_res_653_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__0(v_declName_651_, v_x_652_);
lean_dec(v_x_652_);
lean_dec(v_declName_651_);
v_r_654_ = lean_box(v_res_653_);
return v_r_654_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__1(lean_object* v_mvarId_655_, lean_object* v___f_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
lean_object* v___x_662_; 
lean_inc(v_mvarId_655_);
v___x_662_ = l_Lean_MVarId_getType_x27(v_mvarId_655_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_732_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_732_ == 0)
{
v___x_665_ = v___x_662_;
v_isShared_666_ = v_isSharedCheck_732_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_662_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_732_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_667_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__1));
v___x_668_ = lean_unsigned_to_nat(3u);
v___x_669_ = l_Lean_Expr_isAppOfArity(v_a_663_, v___x_667_, v___x_668_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; lean_object* v___x_672_; 
lean_dec(v_a_663_);
lean_dec_ref(v___f_656_);
lean_dec(v_mvarId_655_);
v___x_670_ = lean_box(0);
if (v_isShared_666_ == 0)
{
lean_ctor_set(v___x_665_, 0, v___x_670_);
v___x_672_ = v___x_665_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v___x_670_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
else
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; uint8_t v___x_678_; lean_object* v___x_679_; 
lean_del_object(v___x_665_);
v___x_674_ = l_Lean_Expr_appFn_x21(v_a_663_);
v___x_675_ = l_Lean_Expr_appArg_x21(v___x_674_);
lean_dec_ref(v___x_674_);
v___x_676_ = l_Lean_Expr_appArg_x21(v_a_663_);
lean_dec(v_a_663_);
v___x_677_ = l_Lean_Expr_consumeMData(v___x_676_);
lean_dec_ref(v___x_676_);
v___x_678_ = 0;
v___x_679_ = l_Lean_Meta_delta_x3f(v___x_677_, v___f_656_, v___x_678_, v___y_659_, v___y_660_);
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_723_; 
v_a_680_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_723_ == 0)
{
v___x_682_ = v___x_679_;
v_isShared_683_ = v_isSharedCheck_723_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_679_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_723_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
if (lean_obj_tag(v_a_680_) == 1)
{
lean_object* v_val_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_718_; 
lean_del_object(v___x_682_);
v_val_684_ = lean_ctor_get(v_a_680_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v_a_680_);
if (v_isSharedCheck_718_ == 0)
{
v___x_686_ = v_a_680_;
v_isShared_687_ = v_isSharedCheck_718_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_val_684_);
lean_dec(v_a_680_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_718_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; 
v___x_688_ = l_Lean_Meta_mkEq(v___x_675_, v_val_684_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
if (lean_obj_tag(v___x_688_) == 0)
{
lean_object* v_a_689_; lean_object* v___x_690_; 
v_a_689_ = lean_ctor_get(v___x_688_, 0);
lean_inc(v_a_689_);
lean_dec_ref_known(v___x_688_, 1);
v___x_690_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_655_, v_a_689_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_701_; 
v_a_691_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_701_ == 0)
{
v___x_693_ = v___x_690_;
v_isShared_694_ = v_isSharedCheck_701_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_a_691_);
lean_dec(v___x_690_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_701_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v___x_696_; 
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 0, v_a_691_);
v___x_696_ = v___x_686_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_a_691_);
v___x_696_ = v_reuseFailAlloc_700_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
lean_object* v___x_698_; 
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 0, v___x_696_);
v___x_698_ = v___x_693_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v___x_696_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
else
{
lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_709_; 
lean_del_object(v___x_686_);
v_a_702_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_709_ == 0)
{
v___x_704_ = v___x_690_;
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_690_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_707_; 
if (v_isShared_705_ == 0)
{
v___x_707_ = v___x_704_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_a_702_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
}
else
{
lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_717_; 
lean_del_object(v___x_686_);
lean_dec(v_mvarId_655_);
v_a_710_ = lean_ctor_get(v___x_688_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_688_);
if (v_isSharedCheck_717_ == 0)
{
v___x_712_ = v___x_688_;
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_688_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_715_; 
if (v_isShared_713_ == 0)
{
v___x_715_ = v___x_712_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_a_710_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
}
else
{
lean_object* v___x_719_; lean_object* v___x_721_; 
lean_dec(v_a_680_);
lean_dec_ref(v___x_675_);
lean_dec(v_mvarId_655_);
v___x_719_ = lean_box(0);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 0, v___x_719_);
v___x_721_ = v___x_682_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v___x_719_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
}
else
{
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_731_; 
lean_dec_ref(v___x_675_);
lean_dec(v_mvarId_655_);
v_a_724_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_731_ == 0)
{
v___x_726_ = v___x_679_;
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v___x_679_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_729_; 
if (v_isShared_727_ == 0)
{
v___x_729_ = v___x_726_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_a_724_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
}
}
}
else
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
lean_dec_ref(v___f_656_);
lean_dec(v_mvarId_655_);
v_a_733_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___x_662_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_662_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__1___boxed(lean_object* v_mvarId_741_, lean_object* v___f_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__1(v_mvarId_741_, v___f_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
lean_dec(v___y_746_);
lean_dec_ref(v___y_745_);
lean_dec(v___y_744_);
lean_dec_ref(v___y_743_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f(lean_object* v_mvarId_749_, lean_object* v_declName_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_){
_start:
{
lean_object* v___f_756_; lean_object* v___f_757_; lean_object* v___x_758_; 
v___f_756_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__0___boxed), 2, 1);
lean_closure_set(v___f_756_, 0, v_declName_750_);
lean_inc(v_mvarId_749_);
v___f_757_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__1___boxed), 7, 2);
lean_closure_set(v___f_757_, 0, v_mvarId_749_);
lean_closure_set(v___f_757_, 1, v___f_756_);
v___x_758_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_mvarId_749_, v___f_757_, v_a_751_, v_a_752_, v_a_753_, v_a_754_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___boxed(lean_object* v_mvarId_759_, lean_object* v_declName_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_, lean_object* v_a_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f(v_mvarId_759_, v_declName_760_, v_a_761_, v_a_762_, v_a_763_, v_a_764_);
lean_dec(v_a_764_);
lean_dec_ref(v_a_763_);
lean_dec(v_a_762_);
lean_dec_ref(v_a_761_);
return v_res_766_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_767_ = lean_unsigned_to_nat(32u);
v___x_768_ = lean_mk_empty_array_with_capacity(v___x_767_);
v___x_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
return v___x_769_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg___closed__1(void){
_start:
{
size_t v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_770_ = ((size_t)5ULL);
v___x_771_ = lean_unsigned_to_nat(0u);
v___x_772_ = lean_unsigned_to_nat(32u);
v___x_773_ = lean_mk_empty_array_with_capacity(v___x_772_);
v___x_774_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg___closed__0);
v___x_775_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_775_, 0, v___x_774_);
lean_ctor_set(v___x_775_, 1, v___x_773_);
lean_ctor_set(v___x_775_, 2, v___x_771_);
lean_ctor_set(v___x_775_, 3, v___x_771_);
lean_ctor_set_usize(v___x_775_, 4, v___x_770_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg(lean_object* v___y_776_){
_start:
{
lean_object* v___x_778_; lean_object* v_traceState_779_; lean_object* v_traces_780_; lean_object* v___x_781_; lean_object* v_traceState_782_; lean_object* v_env_783_; lean_object* v_nextMacroScope_784_; lean_object* v_ngen_785_; lean_object* v_auxDeclNGen_786_; lean_object* v_cache_787_; lean_object* v_messages_788_; lean_object* v_infoState_789_; lean_object* v_snapshotTasks_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_809_; 
v___x_778_ = lean_st_ref_get(v___y_776_);
v_traceState_779_ = lean_ctor_get(v___x_778_, 4);
lean_inc_ref(v_traceState_779_);
lean_dec(v___x_778_);
v_traces_780_ = lean_ctor_get(v_traceState_779_, 0);
lean_inc_ref(v_traces_780_);
lean_dec_ref(v_traceState_779_);
v___x_781_ = lean_st_ref_take(v___y_776_);
v_traceState_782_ = lean_ctor_get(v___x_781_, 4);
v_env_783_ = lean_ctor_get(v___x_781_, 0);
v_nextMacroScope_784_ = lean_ctor_get(v___x_781_, 1);
v_ngen_785_ = lean_ctor_get(v___x_781_, 2);
v_auxDeclNGen_786_ = lean_ctor_get(v___x_781_, 3);
v_cache_787_ = lean_ctor_get(v___x_781_, 5);
v_messages_788_ = lean_ctor_get(v___x_781_, 6);
v_infoState_789_ = lean_ctor_get(v___x_781_, 7);
v_snapshotTasks_790_ = lean_ctor_get(v___x_781_, 8);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_809_ == 0)
{
v___x_792_ = v___x_781_;
v_isShared_793_ = v_isSharedCheck_809_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_snapshotTasks_790_);
lean_inc(v_infoState_789_);
lean_inc(v_messages_788_);
lean_inc(v_cache_787_);
lean_inc(v_traceState_782_);
lean_inc(v_auxDeclNGen_786_);
lean_inc(v_ngen_785_);
lean_inc(v_nextMacroScope_784_);
lean_inc(v_env_783_);
lean_dec(v___x_781_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_809_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
uint64_t v_tid_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_807_; 
v_tid_794_ = lean_ctor_get_uint64(v_traceState_782_, sizeof(void*)*1);
v_isSharedCheck_807_ = !lean_is_exclusive(v_traceState_782_);
if (v_isSharedCheck_807_ == 0)
{
lean_object* v_unused_808_; 
v_unused_808_ = lean_ctor_get(v_traceState_782_, 0);
lean_dec(v_unused_808_);
v___x_796_ = v_traceState_782_;
v_isShared_797_ = v_isSharedCheck_807_;
goto v_resetjp_795_;
}
else
{
lean_dec(v_traceState_782_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_807_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_798_; lean_object* v___x_800_; 
v___x_798_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg___closed__1);
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 0, v___x_798_);
v___x_800_ = v___x_796_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v___x_798_);
lean_ctor_set_uint64(v_reuseFailAlloc_806_, sizeof(void*)*1, v_tid_794_);
v___x_800_ = v_reuseFailAlloc_806_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
lean_object* v___x_802_; 
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 4, v___x_800_);
v___x_802_ = v___x_792_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_env_783_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_nextMacroScope_784_);
lean_ctor_set(v_reuseFailAlloc_805_, 2, v_ngen_785_);
lean_ctor_set(v_reuseFailAlloc_805_, 3, v_auxDeclNGen_786_);
lean_ctor_set(v_reuseFailAlloc_805_, 4, v___x_800_);
lean_ctor_set(v_reuseFailAlloc_805_, 5, v_cache_787_);
lean_ctor_set(v_reuseFailAlloc_805_, 6, v_messages_788_);
lean_ctor_set(v_reuseFailAlloc_805_, 7, v_infoState_789_);
lean_ctor_set(v_reuseFailAlloc_805_, 8, v_snapshotTasks_790_);
v___x_802_ = v_reuseFailAlloc_805_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_803_ = lean_st_ref_put(v___y_776_, v___x_802_);
v___x_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_804_, 0, v_traces_780_);
return v___x_804_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg___boxed(lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg(v___y_810_);
lean_dec(v___y_810_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3(lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg(v___y_816_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___boxed(lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3(v___y_819_, v___y_820_, v___y_821_, v___y_822_);
lean_dec(v___y_822_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
return v_res_824_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(lean_object* v_opts_825_, lean_object* v_opt_826_){
_start:
{
lean_object* v_name_827_; lean_object* v_defValue_828_; lean_object* v_map_829_; lean_object* v___x_830_; 
v_name_827_ = lean_ctor_get(v_opt_826_, 0);
v_defValue_828_ = lean_ctor_get(v_opt_826_, 1);
v_map_829_ = lean_ctor_get(v_opts_825_, 0);
v___x_830_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_829_, v_name_827_);
if (lean_obj_tag(v___x_830_) == 0)
{
uint8_t v___x_831_; 
v___x_831_ = lean_unbox(v_defValue_828_);
return v___x_831_;
}
else
{
lean_object* v_val_832_; 
v_val_832_ = lean_ctor_get(v___x_830_, 0);
lean_inc(v_val_832_);
lean_dec_ref_known(v___x_830_, 1);
if (lean_obj_tag(v_val_832_) == 1)
{
uint8_t v_v_833_; 
v_v_833_ = lean_ctor_get_uint8(v_val_832_, 0);
lean_dec_ref_known(v_val_832_, 0);
return v_v_833_;
}
else
{
uint8_t v___x_834_; 
lean_dec(v_val_832_);
v___x_834_ = lean_unbox(v_defValue_828_);
return v___x_834_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___boxed(lean_object* v_opts_835_, lean_object* v_opt_836_){
_start:
{
uint8_t v_res_837_; lean_object* v_r_838_; 
v_res_837_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(v_opts_835_, v_opt_836_);
lean_dec_ref(v_opt_836_);
lean_dec_ref(v_opts_835_);
v_r_838_ = lean_box(v_res_837_);
return v_r_838_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__1(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__0));
v___x_841_ = l_Lean_stringToMessageData(v___x_840_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0(lean_object* v_mvarId_842_, lean_object* v_x_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_849_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__1);
v___x_850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_850_, 0, v_mvarId_842_);
v___x_851_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_851_, 0, v___x_849_);
lean_ctor_set(v___x_851_, 1, v___x_850_);
v___x_852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_852_, 0, v___x_851_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___boxed(lean_object* v_mvarId_853_, lean_object* v_x_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0(v_mvarId_853_, v_x_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec_ref(v_x_854_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(lean_object* v_____r_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_867_ = lean_box(0);
v___x_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_868_, 0, v___x_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1___boxed(lean_object* v_____r_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v_____r_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_);
lean_dec(v___y_873_);
lean_dec_ref(v___y_872_);
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
return v_res_875_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_876_; double v___x_877_; 
v___x_876_ = lean_unsigned_to_nat(0u);
v___x_877_ = lean_float_of_nat(v___x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(lean_object* v_cls_881_, lean_object* v_msg_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_){
_start:
{
lean_object* v_ref_888_; lean_object* v___x_889_; lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_934_; 
v_ref_888_ = lean_ctor_get(v___y_885_, 2);
v___x_889_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0(v_msg_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_);
v_a_890_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_934_ == 0)
{
v___x_892_ = v___x_889_;
v_isShared_893_ = v_isSharedCheck_934_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_889_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_934_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_894_; lean_object* v_traceState_895_; lean_object* v_env_896_; lean_object* v_nextMacroScope_897_; lean_object* v_ngen_898_; lean_object* v_auxDeclNGen_899_; lean_object* v_cache_900_; lean_object* v_messages_901_; lean_object* v_infoState_902_; lean_object* v_snapshotTasks_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_933_; 
v___x_894_ = lean_st_ref_take(v___y_886_);
v_traceState_895_ = lean_ctor_get(v___x_894_, 4);
v_env_896_ = lean_ctor_get(v___x_894_, 0);
v_nextMacroScope_897_ = lean_ctor_get(v___x_894_, 1);
v_ngen_898_ = lean_ctor_get(v___x_894_, 2);
v_auxDeclNGen_899_ = lean_ctor_get(v___x_894_, 3);
v_cache_900_ = lean_ctor_get(v___x_894_, 5);
v_messages_901_ = lean_ctor_get(v___x_894_, 6);
v_infoState_902_ = lean_ctor_get(v___x_894_, 7);
v_snapshotTasks_903_ = lean_ctor_get(v___x_894_, 8);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_933_ == 0)
{
v___x_905_ = v___x_894_;
v_isShared_906_ = v_isSharedCheck_933_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_snapshotTasks_903_);
lean_inc(v_infoState_902_);
lean_inc(v_messages_901_);
lean_inc(v_cache_900_);
lean_inc(v_traceState_895_);
lean_inc(v_auxDeclNGen_899_);
lean_inc(v_ngen_898_);
lean_inc(v_nextMacroScope_897_);
lean_inc(v_env_896_);
lean_dec(v___x_894_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_933_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
uint64_t v_tid_907_; lean_object* v_traces_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_932_; 
v_tid_907_ = lean_ctor_get_uint64(v_traceState_895_, sizeof(void*)*1);
v_traces_908_ = lean_ctor_get(v_traceState_895_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v_traceState_895_);
if (v_isSharedCheck_932_ == 0)
{
v___x_910_ = v_traceState_895_;
v_isShared_911_ = v_isSharedCheck_932_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_traces_908_);
lean_dec(v_traceState_895_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_932_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_912_; lean_object* v___x_913_; double v___x_914_; uint8_t v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_923_; 
v___x_912_ = lean_box(0);
v___x_913_ = lean_box(0);
v___x_914_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__0);
v___x_915_ = 0;
v___x_916_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__1));
v___x_917_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_917_, 0, v_cls_881_);
lean_ctor_set(v___x_917_, 1, v___x_913_);
lean_ctor_set(v___x_917_, 2, v___x_916_);
lean_ctor_set_float(v___x_917_, sizeof(void*)*3, v___x_914_);
lean_ctor_set_float(v___x_917_, sizeof(void*)*3 + 8, v___x_914_);
lean_ctor_set_uint8(v___x_917_, sizeof(void*)*3 + 16, v___x_915_);
v___x_918_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__2));
v___x_919_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_919_, 0, v___x_917_);
lean_ctor_set(v___x_919_, 1, v_a_890_);
lean_ctor_set(v___x_919_, 2, v___x_918_);
lean_inc(v_ref_888_);
v___x_920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_920_, 0, v_ref_888_);
lean_ctor_set(v___x_920_, 1, v___x_919_);
v___x_921_ = l_Lean_PersistentArray_push___redArg(v_traces_908_, v___x_920_);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 0, v___x_921_);
v___x_923_ = v___x_910_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v___x_921_);
lean_ctor_set_uint64(v_reuseFailAlloc_931_, sizeof(void*)*1, v_tid_907_);
v___x_923_ = v_reuseFailAlloc_931_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
lean_object* v___x_925_; 
if (v_isShared_906_ == 0)
{
lean_ctor_set(v___x_905_, 4, v___x_923_);
v___x_925_ = v___x_905_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_env_896_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v_nextMacroScope_897_);
lean_ctor_set(v_reuseFailAlloc_930_, 2, v_ngen_898_);
lean_ctor_set(v_reuseFailAlloc_930_, 3, v_auxDeclNGen_899_);
lean_ctor_set(v_reuseFailAlloc_930_, 4, v___x_923_);
lean_ctor_set(v_reuseFailAlloc_930_, 5, v_cache_900_);
lean_ctor_set(v_reuseFailAlloc_930_, 6, v_messages_901_);
lean_ctor_set(v_reuseFailAlloc_930_, 7, v_infoState_902_);
lean_ctor_set(v_reuseFailAlloc_930_, 8, v_snapshotTasks_903_);
v___x_925_ = v_reuseFailAlloc_930_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
lean_object* v___x_926_; lean_object* v___x_928_; 
v___x_926_ = lean_st_ref_put(v___y_886_, v___x_925_);
if (v_isShared_893_ == 0)
{
lean_ctor_set(v___x_892_, 0, v___x_912_);
v___x_928_ = v___x_892_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_912_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___boxed(lean_object* v_cls_935_, lean_object* v_msg_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_935_, v_msg_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
lean_dec(v___y_938_);
lean_dec_ref(v___y_937_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__8(lean_object* v_opts_943_, lean_object* v_opt_944_){
_start:
{
lean_object* v_name_945_; lean_object* v_defValue_946_; lean_object* v_map_947_; lean_object* v___x_948_; 
v_name_945_ = lean_ctor_get(v_opt_944_, 0);
v_defValue_946_ = lean_ctor_get(v_opt_944_, 1);
v_map_947_ = lean_ctor_get(v_opts_943_, 0);
v___x_948_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_947_, v_name_945_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_inc(v_defValue_946_);
return v_defValue_946_;
}
else
{
lean_object* v_val_949_; 
v_val_949_ = lean_ctor_get(v___x_948_, 0);
lean_inc(v_val_949_);
lean_dec_ref_known(v___x_948_, 1);
if (lean_obj_tag(v_val_949_) == 3)
{
lean_object* v_v_950_; 
v_v_950_ = lean_ctor_get(v_val_949_, 0);
lean_inc(v_v_950_);
lean_dec_ref_known(v_val_949_, 1);
return v_v_950_;
}
else
{
lean_dec(v_val_949_);
lean_inc(v_defValue_946_);
return v_defValue_946_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__8___boxed(lean_object* v_opts_951_, lean_object* v_opt_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__8(v_opts_951_, v_opt_952_);
lean_dec_ref(v_opt_952_);
lean_dec_ref(v_opts_951_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__5_spec__6(size_t v_sz_954_, size_t v_i_955_, lean_object* v_bs_956_){
_start:
{
uint8_t v___x_957_; 
v___x_957_ = lean_usize_dec_lt(v_i_955_, v_sz_954_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; 
v___x_958_ = l_unsafeCast___redArg(v_bs_956_);
lean_dec_ref(v_bs_956_);
return v___x_958_;
}
else
{
lean_object* v_v_959_; lean_object* v___x_960_; lean_object* v_msg_961_; lean_object* v___x_962_; lean_object* v_bs_x27_963_; size_t v___x_964_; size_t v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
v_v_959_ = lean_array_uget_borrowed(v_bs_956_, v_i_955_);
v___x_960_ = l_unsafeCast___redArg(v_v_959_);
v_msg_961_ = lean_ctor_get(v___x_960_, 1);
lean_inc_ref(v_msg_961_);
lean_dec(v___x_960_);
v___x_962_ = lean_unsigned_to_nat(0u);
v_bs_x27_963_ = lean_array_uset(v_bs_956_, v_i_955_, v___x_962_);
v___x_964_ = ((size_t)1ULL);
v___x_965_ = lean_usize_add(v_i_955_, v___x_964_);
v___x_966_ = l_unsafeCast___redArg(v_msg_961_);
lean_dec_ref(v_msg_961_);
v___x_967_ = lean_array_uset(v_bs_x27_963_, v_i_955_, v___x_966_);
v_i_955_ = v___x_965_;
v_bs_956_ = v___x_967_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__5_spec__6___boxed(lean_object* v_sz_969_, lean_object* v_i_970_, lean_object* v_bs_971_){
_start:
{
size_t v_sz_boxed_972_; size_t v_i_boxed_973_; lean_object* v_res_974_; 
v_sz_boxed_972_ = lean_unbox_usize(v_sz_969_);
lean_dec(v_sz_969_);
v_i_boxed_973_ = lean_unbox_usize(v_i_970_);
lean_dec(v_i_970_);
v_res_974_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__5_spec__6(v_sz_boxed_972_, v_i_boxed_973_, v_bs_971_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__5(lean_object* v_oldTraces_975_, lean_object* v_data_976_, lean_object* v_ref_977_, lean_object* v_msg_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_){
_start:
{
lean_object* v_toCold_984_; lean_object* v_currRecDepth_985_; lean_object* v_ref_986_; uint8_t v_diag_987_; uint8_t v_suppressElabErrors_988_; lean_object* v_ref_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v_traceState_992_; lean_object* v_traces_993_; lean_object* v___x_994_; size_t v_sz_995_; size_t v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v_msg_1000_; lean_object* v___x_1001_; lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1039_; 
v_toCold_984_ = lean_ctor_get(v___y_981_, 0);
v_currRecDepth_985_ = lean_ctor_get(v___y_981_, 1);
v_ref_986_ = lean_ctor_get(v___y_981_, 2);
v_diag_987_ = lean_ctor_get_uint8(v___y_981_, sizeof(void*)*3);
v_suppressElabErrors_988_ = lean_ctor_get_uint8(v___y_981_, sizeof(void*)*3 + 1);
v_ref_989_ = l_Lean_replaceRef(v_ref_977_, v_ref_986_);
lean_inc(v_currRecDepth_985_);
lean_inc_ref(v_toCold_984_);
v___x_990_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_990_, 0, v_toCold_984_);
lean_ctor_set(v___x_990_, 1, v_currRecDepth_985_);
lean_ctor_set(v___x_990_, 2, v_ref_989_);
lean_ctor_set_uint8(v___x_990_, sizeof(void*)*3, v_diag_987_);
lean_ctor_set_uint8(v___x_990_, sizeof(void*)*3 + 1, v_suppressElabErrors_988_);
v___x_991_ = lean_st_ref_get(v___y_982_);
v_traceState_992_ = lean_ctor_get(v___x_991_, 4);
lean_inc_ref(v_traceState_992_);
lean_dec(v___x_991_);
v_traces_993_ = lean_ctor_get(v_traceState_992_, 0);
lean_inc_ref(v_traces_993_);
lean_dec_ref(v_traceState_992_);
v___x_994_ = l_Lean_PersistentArray_toArray___redArg(v_traces_993_);
lean_dec_ref(v_traces_993_);
v_sz_995_ = lean_array_size(v___x_994_);
v___x_996_ = ((size_t)0ULL);
v___x_997_ = l_unsafeCast___redArg(v___x_994_);
lean_dec_ref(v___x_994_);
v___x_998_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__5_spec__6(v_sz_995_, v___x_996_, v___x_997_);
v___x_999_ = l_unsafeCast___redArg(v___x_998_);
lean_dec_ref(v___x_998_);
v_msg_1000_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1000_, 0, v_data_976_);
lean_ctor_set(v_msg_1000_, 1, v_msg_978_);
lean_ctor_set(v_msg_1000_, 2, v___x_999_);
v___x_1001_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0(v_msg_1000_, v___y_979_, v___y_980_, v___x_990_, v___y_982_);
lean_dec_ref_known(v___x_990_, 3);
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1004_ = v___x_1001_;
v_isShared_1005_ = v_isSharedCheck_1039_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_1001_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1039_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1006_; lean_object* v_traceState_1007_; lean_object* v_env_1008_; lean_object* v_nextMacroScope_1009_; lean_object* v_ngen_1010_; lean_object* v_auxDeclNGen_1011_; lean_object* v_cache_1012_; lean_object* v_messages_1013_; lean_object* v_infoState_1014_; lean_object* v_snapshotTasks_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1038_; 
v___x_1006_ = lean_st_ref_take(v___y_982_);
v_traceState_1007_ = lean_ctor_get(v___x_1006_, 4);
v_env_1008_ = lean_ctor_get(v___x_1006_, 0);
v_nextMacroScope_1009_ = lean_ctor_get(v___x_1006_, 1);
v_ngen_1010_ = lean_ctor_get(v___x_1006_, 2);
v_auxDeclNGen_1011_ = lean_ctor_get(v___x_1006_, 3);
v_cache_1012_ = lean_ctor_get(v___x_1006_, 5);
v_messages_1013_ = lean_ctor_get(v___x_1006_, 6);
v_infoState_1014_ = lean_ctor_get(v___x_1006_, 7);
v_snapshotTasks_1015_ = lean_ctor_get(v___x_1006_, 8);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1017_ = v___x_1006_;
v_isShared_1018_ = v_isSharedCheck_1038_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_snapshotTasks_1015_);
lean_inc(v_infoState_1014_);
lean_inc(v_messages_1013_);
lean_inc(v_cache_1012_);
lean_inc(v_traceState_1007_);
lean_inc(v_auxDeclNGen_1011_);
lean_inc(v_ngen_1010_);
lean_inc(v_nextMacroScope_1009_);
lean_inc(v_env_1008_);
lean_dec(v___x_1006_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1038_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
uint64_t v_tid_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1036_; 
v_tid_1019_ = lean_ctor_get_uint64(v_traceState_1007_, sizeof(void*)*1);
v_isSharedCheck_1036_ = !lean_is_exclusive(v_traceState_1007_);
if (v_isSharedCheck_1036_ == 0)
{
lean_object* v_unused_1037_; 
v_unused_1037_ = lean_ctor_get(v_traceState_1007_, 0);
lean_dec(v_unused_1037_);
v___x_1021_ = v_traceState_1007_;
v_isShared_1022_ = v_isSharedCheck_1036_;
goto v_resetjp_1020_;
}
else
{
lean_dec(v_traceState_1007_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1036_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1027_; 
v___x_1023_ = lean_box(0);
v___x_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1024_, 0, v_ref_977_);
lean_ctor_set(v___x_1024_, 1, v_a_1002_);
v___x_1025_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_975_, v___x_1024_);
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 0, v___x_1025_);
v___x_1027_ = v___x_1021_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v___x_1025_);
lean_ctor_set_uint64(v_reuseFailAlloc_1035_, sizeof(void*)*1, v_tid_1019_);
v___x_1027_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
lean_object* v___x_1029_; 
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 4, v___x_1027_);
v___x_1029_ = v___x_1017_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_env_1008_);
lean_ctor_set(v_reuseFailAlloc_1034_, 1, v_nextMacroScope_1009_);
lean_ctor_set(v_reuseFailAlloc_1034_, 2, v_ngen_1010_);
lean_ctor_set(v_reuseFailAlloc_1034_, 3, v_auxDeclNGen_1011_);
lean_ctor_set(v_reuseFailAlloc_1034_, 4, v___x_1027_);
lean_ctor_set(v_reuseFailAlloc_1034_, 5, v_cache_1012_);
lean_ctor_set(v_reuseFailAlloc_1034_, 6, v_messages_1013_);
lean_ctor_set(v_reuseFailAlloc_1034_, 7, v_infoState_1014_);
lean_ctor_set(v_reuseFailAlloc_1034_, 8, v_snapshotTasks_1015_);
v___x_1029_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
lean_object* v___x_1030_; lean_object* v___x_1032_; 
v___x_1030_ = lean_st_ref_put(v___y_982_, v___x_1029_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 0, v___x_1023_);
v___x_1032_ = v___x_1004_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___x_1023_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__5___boxed(lean_object* v_oldTraces_1040_, lean_object* v_data_1041_, lean_object* v_ref_1042_, lean_object* v_msg_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__5(v_oldTraces_1040_, v_data_1041_, v_ref_1042_, v_msg_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6___redArg(lean_object* v_x_1050_){
_start:
{
if (lean_obj_tag(v_x_1050_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1059_; 
v_a_1052_ = lean_ctor_get(v_x_1050_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v_x_1050_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1054_ = v_x_1050_;
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v_x_1050_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1057_; 
if (v_isShared_1055_ == 0)
{
lean_ctor_set_tag(v___x_1054_, 1);
v___x_1057_ = v___x_1054_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v_a_1052_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
else
{
lean_object* v_a_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
v_a_1060_ = lean_ctor_get(v_x_1050_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v_x_1050_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1062_ = v_x_1050_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_a_1060_);
lean_dec(v_x_1050_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
lean_ctor_set_tag(v___x_1062_, 0);
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1060_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6___redArg___boxed(lean_object* v_x_1068_, lean_object* v___y_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6___redArg(v_x_1068_);
return v_res_1070_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__7(lean_object* v_e_1071_){
_start:
{
if (lean_obj_tag(v_e_1071_) == 0)
{
uint8_t v___x_1072_; 
v___x_1072_ = 2;
return v___x_1072_;
}
else
{
uint8_t v___x_1073_; 
v___x_1073_ = 0;
return v___x_1073_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__7___boxed(lean_object* v_e_1074_){
_start:
{
uint8_t v_res_1075_; lean_object* v_r_1076_; 
v_res_1075_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__7(v_e_1074_);
lean_dec_ref(v_e_1074_);
v_r_1076_ = lean_box(v_res_1075_);
return v_r_1076_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__1(void){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__0));
v___x_1079_ = l_Lean_stringToMessageData(v___x_1078_);
return v___x_1079_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__2(void){
_start:
{
lean_object* v___x_1080_; double v___x_1081_; 
v___x_1080_ = lean_unsigned_to_nat(1000u);
v___x_1081_ = lean_float_of_nat(v___x_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(lean_object* v_cls_1082_, uint8_t v_collapsed_1083_, lean_object* v_tag_1084_, lean_object* v_opts_1085_, uint8_t v_clsEnabled_1086_, lean_object* v_oldTraces_1087_, lean_object* v_msg_1088_, lean_object* v_resStartStop_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v_fst_1095_; lean_object* v_snd_1096_; lean_object* v___y_1098_; lean_object* v___y_1099_; lean_object* v_data_1100_; lean_object* v_fst_1103_; lean_object* v_snd_1104_; lean_object* v___x_1105_; uint8_t v___x_1106_; lean_object* v___y_1108_; lean_object* v_a_1109_; uint8_t v___y_1124_; double v___y_1155_; 
v_fst_1095_ = lean_ctor_get(v_resStartStop_1089_, 0);
lean_inc(v_fst_1095_);
v_snd_1096_ = lean_ctor_get(v_resStartStop_1089_, 1);
lean_inc(v_snd_1096_);
lean_dec_ref(v_resStartStop_1089_);
v_fst_1103_ = lean_ctor_get(v_snd_1096_, 0);
lean_inc(v_fst_1103_);
v_snd_1104_ = lean_ctor_get(v_snd_1096_, 1);
lean_inc(v_snd_1104_);
lean_dec(v_snd_1096_);
v___x_1105_ = l_Lean_trace_profiler;
v___x_1106_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(v_opts_1085_, v___x_1105_);
if (v___x_1106_ == 0)
{
v___y_1124_ = v___x_1106_;
goto v___jp_1123_;
}
else
{
lean_object* v___x_1160_; uint8_t v___x_1161_; 
v___x_1160_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1161_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(v_opts_1085_, v___x_1160_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; lean_object* v___x_1163_; double v___x_1164_; double v___x_1165_; double v___x_1166_; 
v___x_1162_ = l_Lean_trace_profiler_threshold;
v___x_1163_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__8(v_opts_1085_, v___x_1162_);
v___x_1164_ = lean_float_of_nat(v___x_1163_);
v___x_1165_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__2);
v___x_1166_ = lean_float_div(v___x_1164_, v___x_1165_);
v___y_1155_ = v___x_1166_;
goto v___jp_1154_;
}
else
{
lean_object* v___x_1167_; lean_object* v___x_1168_; double v___x_1169_; 
v___x_1167_ = l_Lean_trace_profiler_threshold;
v___x_1168_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__8(v_opts_1085_, v___x_1167_);
v___x_1169_ = lean_float_of_nat(v___x_1168_);
v___y_1155_ = v___x_1169_;
goto v___jp_1154_;
}
}
v___jp_1097_:
{
lean_object* v___x_1101_; 
lean_inc(v___y_1099_);
v___x_1101_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__5(v_oldTraces_1087_, v_data_1100_, v___y_1099_, v___y_1098_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_object* v___x_1102_; 
lean_dec_ref_known(v___x_1101_, 1);
v___x_1102_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6___redArg(v_fst_1095_);
return v___x_1102_;
}
else
{
lean_dec(v_fst_1095_);
return v___x_1101_;
}
}
v___jp_1107_:
{
uint8_t v_result_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; double v___x_1113_; lean_object* v_data_1114_; 
v_result_1110_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__7(v_fst_1095_);
v___x_1111_ = lean_box(v_result_1110_);
v___x_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
v___x_1113_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__0);
lean_inc_ref(v_tag_1084_);
lean_inc_ref(v___x_1112_);
lean_inc(v_cls_1082_);
v_data_1114_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1114_, 0, v_cls_1082_);
lean_ctor_set(v_data_1114_, 1, v___x_1112_);
lean_ctor_set(v_data_1114_, 2, v_tag_1084_);
lean_ctor_set_float(v_data_1114_, sizeof(void*)*3, v___x_1113_);
lean_ctor_set_float(v_data_1114_, sizeof(void*)*3 + 8, v___x_1113_);
lean_ctor_set_uint8(v_data_1114_, sizeof(void*)*3 + 16, v_collapsed_1083_);
if (v___x_1106_ == 0)
{
lean_dec_ref_known(v___x_1112_, 1);
lean_dec(v_snd_1104_);
lean_dec(v_fst_1103_);
lean_dec_ref(v_tag_1084_);
lean_dec(v_cls_1082_);
v___y_1098_ = v_a_1109_;
v___y_1099_ = v___y_1108_;
v_data_1100_ = v_data_1114_;
goto v___jp_1097_;
}
else
{
lean_object* v_data_1115_; double v___x_1116_; double v___x_1117_; 
lean_dec_ref_known(v_data_1114_, 3);
v_data_1115_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1115_, 0, v_cls_1082_);
lean_ctor_set(v_data_1115_, 1, v___x_1112_);
lean_ctor_set(v_data_1115_, 2, v_tag_1084_);
v___x_1116_ = lean_unbox_float(v_fst_1103_);
lean_dec(v_fst_1103_);
lean_ctor_set_float(v_data_1115_, sizeof(void*)*3, v___x_1116_);
v___x_1117_ = lean_unbox_float(v_snd_1104_);
lean_dec(v_snd_1104_);
lean_ctor_set_float(v_data_1115_, sizeof(void*)*3 + 8, v___x_1117_);
lean_ctor_set_uint8(v_data_1115_, sizeof(void*)*3 + 16, v_collapsed_1083_);
v___y_1098_ = v_a_1109_;
v___y_1099_ = v___y_1108_;
v_data_1100_ = v_data_1115_;
goto v___jp_1097_;
}
}
v___jp_1118_:
{
lean_object* v_ref_1119_; lean_object* v___x_1120_; 
v_ref_1119_ = lean_ctor_get(v___y_1092_, 2);
lean_inc(v___y_1093_);
lean_inc_ref(v___y_1092_);
lean_inc(v___y_1091_);
lean_inc_ref(v___y_1090_);
lean_inc(v_fst_1095_);
v___x_1120_ = lean_apply_6(v_msg_1088_, v_fst_1095_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, lean_box(0));
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_object* v_a_1121_; 
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
lean_inc(v_a_1121_);
lean_dec_ref_known(v___x_1120_, 1);
v___y_1108_ = v_ref_1119_;
v_a_1109_ = v_a_1121_;
goto v___jp_1107_;
}
else
{
lean_object* v___x_1122_; 
lean_dec_ref_known(v___x_1120_, 1);
v___x_1122_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__1);
v___y_1108_ = v_ref_1119_;
v_a_1109_ = v___x_1122_;
goto v___jp_1107_;
}
}
v___jp_1123_:
{
if (v_clsEnabled_1086_ == 0)
{
if (v___y_1124_ == 0)
{
lean_object* v___x_1125_; lean_object* v_traceState_1126_; lean_object* v_env_1127_; lean_object* v_nextMacroScope_1128_; lean_object* v_ngen_1129_; lean_object* v_auxDeclNGen_1130_; lean_object* v_cache_1131_; lean_object* v_messages_1132_; lean_object* v_infoState_1133_; lean_object* v_snapshotTasks_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1153_; 
lean_dec(v_snd_1104_);
lean_dec(v_fst_1103_);
lean_dec_ref(v_msg_1088_);
lean_dec_ref(v_tag_1084_);
lean_dec(v_cls_1082_);
v___x_1125_ = lean_st_ref_take(v___y_1093_);
v_traceState_1126_ = lean_ctor_get(v___x_1125_, 4);
v_env_1127_ = lean_ctor_get(v___x_1125_, 0);
v_nextMacroScope_1128_ = lean_ctor_get(v___x_1125_, 1);
v_ngen_1129_ = lean_ctor_get(v___x_1125_, 2);
v_auxDeclNGen_1130_ = lean_ctor_get(v___x_1125_, 3);
v_cache_1131_ = lean_ctor_get(v___x_1125_, 5);
v_messages_1132_ = lean_ctor_get(v___x_1125_, 6);
v_infoState_1133_ = lean_ctor_get(v___x_1125_, 7);
v_snapshotTasks_1134_ = lean_ctor_get(v___x_1125_, 8);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1125_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1136_ = v___x_1125_;
v_isShared_1137_ = v_isSharedCheck_1153_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_snapshotTasks_1134_);
lean_inc(v_infoState_1133_);
lean_inc(v_messages_1132_);
lean_inc(v_cache_1131_);
lean_inc(v_traceState_1126_);
lean_inc(v_auxDeclNGen_1130_);
lean_inc(v_ngen_1129_);
lean_inc(v_nextMacroScope_1128_);
lean_inc(v_env_1127_);
lean_dec(v___x_1125_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1153_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
uint64_t v_tid_1138_; lean_object* v_traces_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1152_; 
v_tid_1138_ = lean_ctor_get_uint64(v_traceState_1126_, sizeof(void*)*1);
v_traces_1139_ = lean_ctor_get(v_traceState_1126_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v_traceState_1126_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1141_ = v_traceState_1126_;
v_isShared_1142_ = v_isSharedCheck_1152_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_traces_1139_);
lean_dec(v_traceState_1126_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1152_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1143_; lean_object* v___x_1145_; 
v___x_1143_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1087_, v_traces_1139_);
lean_dec_ref(v_traces_1139_);
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 0, v___x_1143_);
v___x_1145_ = v___x_1141_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v___x_1143_);
lean_ctor_set_uint64(v_reuseFailAlloc_1151_, sizeof(void*)*1, v_tid_1138_);
v___x_1145_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
lean_object* v___x_1147_; 
if (v_isShared_1137_ == 0)
{
lean_ctor_set(v___x_1136_, 4, v___x_1145_);
v___x_1147_ = v___x_1136_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_env_1127_);
lean_ctor_set(v_reuseFailAlloc_1150_, 1, v_nextMacroScope_1128_);
lean_ctor_set(v_reuseFailAlloc_1150_, 2, v_ngen_1129_);
lean_ctor_set(v_reuseFailAlloc_1150_, 3, v_auxDeclNGen_1130_);
lean_ctor_set(v_reuseFailAlloc_1150_, 4, v___x_1145_);
lean_ctor_set(v_reuseFailAlloc_1150_, 5, v_cache_1131_);
lean_ctor_set(v_reuseFailAlloc_1150_, 6, v_messages_1132_);
lean_ctor_set(v_reuseFailAlloc_1150_, 7, v_infoState_1133_);
lean_ctor_set(v_reuseFailAlloc_1150_, 8, v_snapshotTasks_1134_);
v___x_1147_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1148_ = lean_st_ref_put(v___y_1093_, v___x_1147_);
v___x_1149_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6___redArg(v_fst_1095_);
return v___x_1149_;
}
}
}
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
v___jp_1154_:
{
double v___x_1156_; double v___x_1157_; double v___x_1158_; uint8_t v___x_1159_; 
v___x_1156_ = lean_unbox_float(v_snd_1104_);
v___x_1157_ = lean_unbox_float(v_fst_1103_);
v___x_1158_ = lean_float_sub(v___x_1156_, v___x_1157_);
v___x_1159_ = lean_float_decLt(v___y_1155_, v___x_1158_);
v___y_1124_ = v___x_1159_;
goto v___jp_1123_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___boxed(lean_object* v_cls_1170_, lean_object* v_collapsed_1171_, lean_object* v_tag_1172_, lean_object* v_opts_1173_, lean_object* v_clsEnabled_1174_, lean_object* v_oldTraces_1175_, lean_object* v_msg_1176_, lean_object* v_resStartStop_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
uint8_t v_collapsed_boxed_1183_; uint8_t v_clsEnabled_boxed_1184_; lean_object* v_res_1185_; 
v_collapsed_boxed_1183_ = lean_unbox(v_collapsed_1171_);
v_clsEnabled_boxed_1184_ = lean_unbox(v_clsEnabled_1174_);
v_res_1185_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_cls_1170_, v_collapsed_boxed_1183_, v_tag_1172_, v_opts_1173_, v_clsEnabled_boxed_1184_, v_oldTraces_1175_, v_msg_1176_, v_resStartStop_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
lean_dec_ref(v_opts_1173_);
return v_res_1185_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__3(void){
_start:
{
lean_object* v___x_1188_; 
v___x_1188_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1188_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4(void){
_start:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1189_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__3);
v___x_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
return v___x_1190_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__1(void){
_start:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1191_ = lean_box(0);
v___x_1192_ = lean_unsigned_to_nat(16u);
v___x_1193_ = lean_mk_array(v___x_1192_, v___x_1191_);
return v___x_1193_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2(void){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1194_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__1);
v___x_1195_ = lean_unsigned_to_nat(0u);
v___x_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1195_);
lean_ctor_set(v___x_1196_, 1, v___x_1194_);
return v___x_1196_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__5(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; uint8_t v___x_1199_; lean_object* v___x_1200_; 
v___x_1197_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4);
v___x_1198_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2);
v___x_1199_ = 1;
v___x_1200_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1200_, 0, v___x_1198_);
lean_ctor_set(v___x_1200_, 1, v___x_1197_);
lean_ctor_set_uint8(v___x_1200_, sizeof(void*)*2, v___x_1199_);
return v___x_1200_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__7(void){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1201_ = lean_unsigned_to_nat(32u);
v___x_1202_ = lean_mk_empty_array_with_capacity(v___x_1201_);
v___x_1203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1202_);
return v___x_1203_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8(void){
_start:
{
size_t v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1204_ = ((size_t)5ULL);
v___x_1205_ = lean_unsigned_to_nat(0u);
v___x_1206_ = lean_unsigned_to_nat(32u);
v___x_1207_ = lean_mk_empty_array_with_capacity(v___x_1206_);
v___x_1208_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__7, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__7);
v___x_1209_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1209_, 0, v___x_1208_);
lean_ctor_set(v___x_1209_, 1, v___x_1207_);
lean_ctor_set(v___x_1209_, 2, v___x_1205_);
lean_ctor_set(v___x_1209_, 3, v___x_1205_);
lean_ctor_set_usize(v___x_1209_, 4, v___x_1204_);
return v___x_1209_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__9(void){
_start:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1210_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8);
v___x_1211_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4);
v___x_1212_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1211_);
lean_ctor_set(v___x_1212_, 1, v___x_1211_);
lean_ctor_set(v___x_1212_, 2, v___x_1211_);
lean_ctor_set(v___x_1212_, 3, v___x_1210_);
return v___x_1212_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6(void){
_start:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1213_ = lean_unsigned_to_nat(0u);
v___x_1214_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4);
v___x_1215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1214_);
lean_ctor_set(v___x_1215_, 1, v___x_1213_);
return v___x_1215_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10(void){
_start:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1216_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__9, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__9);
v___x_1217_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6);
v___x_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
lean_ctor_set(v___x_1218_, 1, v___x_1216_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(lean_object* v_declName_1219_, lean_object* v_as_1220_, size_t v_i_1221_, size_t v_stop_1222_, lean_object* v_b_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_){
_start:
{
uint8_t v___x_1229_; 
v___x_1229_ = lean_usize_dec_eq(v_i_1221_, v_stop_1222_);
if (v___x_1229_ == 0)
{
lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1230_ = lean_array_uget_borrowed(v_as_1220_, v_i_1221_);
lean_inc(v___x_1230_);
lean_inc(v_declName_1219_);
v___x_1231_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1219_, v___x_1230_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v_a_1232_; size_t v___x_1233_; size_t v___x_1234_; 
v_a_1232_ = lean_ctor_get(v___x_1231_, 0);
lean_inc(v_a_1232_);
lean_dec_ref_known(v___x_1231_, 1);
v___x_1233_ = ((size_t)1ULL);
v___x_1234_ = lean_usize_add(v_i_1221_, v___x_1233_);
v_i_1221_ = v___x_1234_;
v_b_1223_ = v_a_1232_;
goto _start;
}
else
{
lean_dec(v_declName_1219_);
return v___x_1231_;
}
}
else
{
lean_object* v___x_1236_; 
lean_dec(v_declName_1219_);
v___x_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1236_, 0, v_b_1223_);
return v___x_1236_;
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12(void){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1238_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__11));
v___x_1239_ = l_Lean_stringToMessageData(v___x_1238_);
return v___x_1239_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20(void){
_start:
{
lean_object* v_cls_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; 
v_cls_1252_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17));
v___x_1253_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__19));
v___x_1254_ = l_Lean_Name_append(v___x_1253_, v_cls_1252_);
return v___x_1254_;
}
}
static double _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21(void){
_start:
{
lean_object* v___x_1255_; double v___x_1256_; 
v___x_1255_ = lean_unsigned_to_nat(1000000000u);
v___x_1256_ = lean_float_of_nat(v___x_1255_);
return v___x_1256_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23(void){
_start:
{
lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1258_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__22));
v___x_1259_ = l_Lean_stringToMessageData(v___x_1258_);
return v___x_1259_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25(void){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1261_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__24));
v___x_1262_ = l_Lean_stringToMessageData(v___x_1261_);
return v___x_1262_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27(void){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1264_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__26));
v___x_1265_ = l_Lean_stringToMessageData(v___x_1264_);
return v___x_1265_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29(void){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1267_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__28));
v___x_1268_ = l_Lean_stringToMessageData(v___x_1267_);
return v___x_1268_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31(void){
_start:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1270_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__30));
v___x_1271_ = l_Lean_stringToMessageData(v___x_1270_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5(lean_object* v_val_1272_, lean_object* v___x_1273_, lean_object* v_declName_1274_, lean_object* v_____r_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; uint8_t v___x_1283_; 
v___x_1281_ = lean_array_get_size(v_val_1272_);
v___x_1282_ = lean_box(0);
v___x_1283_ = lean_nat_dec_lt(v___x_1273_, v___x_1281_);
if (v___x_1283_ == 0)
{
lean_object* v___x_1284_; 
lean_dec(v_declName_1274_);
v___x_1284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1284_, 0, v___x_1282_);
return v___x_1284_;
}
else
{
uint8_t v___x_1285_; 
v___x_1285_ = lean_nat_dec_le(v___x_1281_, v___x_1281_);
if (v___x_1285_ == 0)
{
if (v___x_1283_ == 0)
{
lean_object* v___x_1286_; 
lean_dec(v_declName_1274_);
v___x_1286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1282_);
return v___x_1286_;
}
else
{
size_t v___x_1287_; size_t v___x_1288_; lean_object* v___x_1289_; 
v___x_1287_ = ((size_t)0ULL);
v___x_1288_ = lean_usize_of_nat(v___x_1281_);
v___x_1289_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_declName_1274_, v_val_1272_, v___x_1287_, v___x_1288_, v___x_1282_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
return v___x_1289_;
}
}
else
{
size_t v___x_1290_; size_t v___x_1291_; lean_object* v___x_1292_; 
v___x_1290_ = ((size_t)0ULL);
v___x_1291_ = lean_usize_of_nat(v___x_1281_);
v___x_1292_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_declName_1274_, v_val_1272_, v___x_1290_, v___x_1291_, v___x_1282_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
return v___x_1292_;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1294_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__32));
v___x_1295_ = l_Lean_stringToMessageData(v___x_1294_);
return v___x_1295_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35(void){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1297_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__34));
v___x_1298_ = l_Lean_stringToMessageData(v___x_1297_);
return v___x_1298_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37(void){
_start:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1300_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__36));
v___x_1301_ = l_Lean_stringToMessageData(v___x_1300_);
return v___x_1301_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__39(void){
_start:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1303_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38));
v___x_1304_ = l_Lean_stringToMessageData(v___x_1303_);
return v___x_1304_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__41(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__40));
v___x_1307_ = l_Lean_stringToMessageData(v___x_1306_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(lean_object* v_declName_1308_, lean_object* v_mvarId_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_){
_start:
{
lean_object* v_toCold_1321_; lean_object* v_options_1322_; uint8_t v_hasTrace_1323_; 
v_toCold_1321_ = lean_ctor_get(v_a_1312_, 0);
v_options_1322_ = lean_ctor_get(v_toCold_1321_, 2);
v_hasTrace_1323_ = lean_ctor_get_uint8(v_options_1322_, sizeof(void*)*1);
if (v_hasTrace_1323_ == 0)
{
lean_object* v___x_1324_; 
lean_inc(v_mvarId_1309_);
v___x_1324_ = l_Lean_Elab_Eqns_tryURefl(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1324_) == 0)
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1508_; 
v_a_1325_ = lean_ctor_get(v___x_1324_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1324_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1327_ = v___x_1324_;
v_isShared_1328_ = v_isSharedCheck_1508_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1324_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1508_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
uint8_t v___x_1329_; 
v___x_1329_ = lean_unbox(v_a_1325_);
lean_dec(v_a_1325_);
if (v___x_1329_ == 0)
{
uint8_t v___x_1330_; lean_object* v___x_1331_; 
lean_del_object(v___x_1327_);
v___x_1330_ = 1;
lean_inc(v_mvarId_1309_);
v___x_1331_ = l_Lean_Elab_Eqns_tryContradiction(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1495_; 
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1334_ = v___x_1331_;
v_isShared_1335_ = v_isSharedCheck_1495_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v___x_1331_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1495_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
uint8_t v___x_1336_; 
v___x_1336_ = lean_unbox(v_a_1332_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1337_; 
lean_del_object(v___x_1334_);
lean_inc(v_mvarId_1309_);
v___x_1337_ = l_Lean_Elab_Eqns_whnfReducibleLHS_x3f(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
lean_inc(v_a_1338_);
lean_dec_ref_known(v___x_1337_, 1);
if (lean_obj_tag(v_a_1338_) == 1)
{
lean_object* v_val_1339_; 
lean_dec(v_a_1332_);
lean_dec(v_mvarId_1309_);
v_val_1339_ = lean_ctor_get(v_a_1338_, 0);
lean_inc(v_val_1339_);
lean_dec_ref_known(v_a_1338_, 1);
v_mvarId_1309_ = v_val_1339_;
goto _start;
}
else
{
lean_object* v___x_1341_; 
lean_dec(v_a_1338_);
lean_inc(v_mvarId_1309_);
v___x_1341_ = l_Lean_Elab_Eqns_simpMatch_x3f(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
lean_inc(v_a_1342_);
lean_dec_ref_known(v___x_1341_, 1);
if (lean_obj_tag(v_a_1342_) == 1)
{
lean_object* v_val_1343_; 
lean_dec(v_a_1332_);
lean_dec(v_mvarId_1309_);
v_val_1343_ = lean_ctor_get(v_a_1342_, 0);
lean_inc(v_val_1343_);
lean_dec_ref_known(v_a_1342_, 1);
v_mvarId_1309_ = v_val_1343_;
goto _start;
}
else
{
lean_object* v___x_1345_; 
lean_dec(v_a_1342_);
lean_inc(v_mvarId_1309_);
v___x_1345_ = l_Lean_Elab_Eqns_simpIf_x3f(v_mvarId_1309_, v___x_1330_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1345_) == 0)
{
lean_object* v_a_1346_; 
v_a_1346_ = lean_ctor_get(v___x_1345_, 0);
lean_inc(v_a_1346_);
lean_dec_ref_known(v___x_1345_, 1);
if (lean_obj_tag(v_a_1346_) == 1)
{
lean_object* v_val_1347_; 
lean_dec(v_a_1332_);
lean_dec(v_mvarId_1309_);
v_val_1347_ = lean_ctor_get(v_a_1346_, 0);
lean_inc(v_val_1347_);
lean_dec_ref_known(v_a_1346_, 1);
v_mvarId_1309_ = v_val_1347_;
goto _start;
}
else
{
lean_object* v___x_1349_; lean_object* v___x_1350_; uint8_t v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; uint8_t v___x_1354_; uint8_t v___x_1355_; uint8_t v___x_1356_; uint8_t v___x_1357_; uint8_t v___x_1358_; uint8_t v___x_1359_; uint8_t v___x_1360_; uint8_t v___x_1361_; uint8_t v___x_1362_; uint8_t v___x_1363_; uint8_t v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
lean_dec(v_a_1346_);
v___x_1349_ = lean_unsigned_to_nat(100000u);
v___x_1350_ = lean_unsigned_to_nat(2u);
v___x_1351_ = 0;
v___x_1352_ = lean_box(0);
v___x_1353_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_1353_, 0, v___x_1349_);
lean_ctor_set(v___x_1353_, 1, v___x_1350_);
lean_ctor_set(v___x_1353_, 2, v___x_1352_);
v___x_1354_ = lean_unbox(v_a_1332_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3, v___x_1354_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 1, v___x_1330_);
v___x_1355_ = lean_unbox(v_a_1332_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 2, v___x_1355_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 3, v___x_1330_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 4, v___x_1330_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 5, v___x_1330_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 6, v___x_1351_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 7, v___x_1330_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 8, v___x_1330_);
v___x_1356_ = lean_unbox(v_a_1332_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 9, v___x_1356_);
v___x_1357_ = lean_unbox(v_a_1332_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 10, v___x_1357_);
v___x_1358_ = lean_unbox(v_a_1332_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 11, v___x_1358_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 12, v___x_1330_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 13, v___x_1330_);
v___x_1359_ = lean_unbox(v_a_1332_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 14, v___x_1359_);
v___x_1360_ = lean_unbox(v_a_1332_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 15, v___x_1360_);
v___x_1361_ = lean_unbox(v_a_1332_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 16, v___x_1361_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 17, v___x_1330_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 18, v___x_1330_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 19, v___x_1330_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 20, v___x_1330_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 21, v___x_1330_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 22, v___x_1330_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 23, v___x_1330_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 24, v___x_1330_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 25, v___x_1330_);
v___x_1362_ = lean_unbox(v_a_1332_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 26, v___x_1362_);
v___x_1363_ = lean_unbox(v_a_1332_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 27, v___x_1363_);
v___x_1364_ = lean_unbox(v_a_1332_);
lean_dec(v_a_1332_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*3 + 28, v___x_1364_);
v___x_1365_ = lean_unsigned_to_nat(0u);
v___x_1366_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0));
v___x_1367_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__5);
v___x_1368_ = l_Lean_Options_empty;
v___x_1369_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_1353_, v___x_1366_, v___x_1367_, v___x_1368_, v_a_1310_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1369_) == 0)
{
lean_object* v_a_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; 
v_a_1370_ = lean_ctor_get(v___x_1369_, 0);
lean_inc(v_a_1370_);
lean_dec_ref_known(v___x_1369_, 1);
v___x_1371_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10);
lean_inc(v_mvarId_1309_);
v___x_1372_ = l_Lean_Meta_simpTargetStar(v_mvarId_1309_, v_a_1370_, v___x_1366_, v___x_1352_, v___x_1371_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1450_; 
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1375_ = v___x_1372_;
v_isShared_1376_ = v_isSharedCheck_1450_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1372_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1450_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v_fst_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1448_; 
v_fst_1377_ = lean_ctor_get(v_a_1373_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v_a_1373_);
if (v_isSharedCheck_1448_ == 0)
{
lean_object* v_unused_1449_; 
v_unused_1449_ = lean_ctor_get(v_a_1373_, 1);
lean_dec(v_unused_1449_);
v___x_1379_ = v_a_1373_;
v_isShared_1380_ = v_isSharedCheck_1448_;
goto v_resetjp_1378_;
}
else
{
lean_inc(v_fst_1377_);
lean_dec(v_a_1373_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1448_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
switch(lean_obj_tag(v_fst_1377_))
{
case 0:
{
lean_object* v___x_1381_; lean_object* v___x_1383_; 
lean_del_object(v___x_1379_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v___x_1381_ = lean_box(0);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1381_);
v___x_1383_ = v___x_1375_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1381_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
case 1:
{
lean_object* v___x_1385_; 
lean_del_object(v___x_1375_);
lean_inc(v_declName_1308_);
lean_inc(v_mvarId_1309_);
v___x_1385_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f(v_mvarId_1309_, v_declName_1308_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v_a_1386_; 
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
lean_inc(v_a_1386_);
lean_dec_ref_known(v___x_1385_, 1);
if (lean_obj_tag(v_a_1386_) == 1)
{
lean_object* v_val_1387_; 
lean_del_object(v___x_1379_);
lean_dec(v_mvarId_1309_);
v_val_1387_ = lean_ctor_get(v_a_1386_, 0);
lean_inc(v_val_1387_);
lean_dec_ref_known(v_a_1386_, 1);
v_mvarId_1309_ = v_val_1387_;
goto _start;
}
else
{
lean_object* v___x_1389_; 
lean_dec(v_a_1386_);
lean_inc(v_mvarId_1309_);
v___x_1389_ = l_Lean_Meta_casesOnStuckLHS_x3f(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1389_) == 0)
{
lean_object* v_a_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1429_; 
v_a_1390_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1392_ = v___x_1389_;
v_isShared_1393_ = v_isSharedCheck_1429_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_a_1390_);
lean_dec(v___x_1389_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1429_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
if (lean_obj_tag(v_a_1390_) == 1)
{
lean_object* v_val_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; uint8_t v___x_1397_; 
lean_del_object(v___x_1379_);
lean_dec(v_mvarId_1309_);
v_val_1394_ = lean_ctor_get(v_a_1390_, 0);
lean_inc(v_val_1394_);
lean_dec_ref_known(v_a_1390_, 1);
v___x_1395_ = lean_array_get_size(v_val_1394_);
v___x_1396_ = lean_box(0);
v___x_1397_ = lean_nat_dec_lt(v___x_1365_, v___x_1395_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1399_; 
lean_dec(v_val_1394_);
lean_dec(v_declName_1308_);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 0, v___x_1396_);
v___x_1399_ = v___x_1392_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v___x_1396_);
v___x_1399_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
return v___x_1399_;
}
}
else
{
uint8_t v___x_1401_; 
v___x_1401_ = lean_nat_dec_le(v___x_1395_, v___x_1395_);
if (v___x_1401_ == 0)
{
if (v___x_1397_ == 0)
{
lean_object* v___x_1403_; 
lean_dec(v_val_1394_);
lean_dec(v_declName_1308_);
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 0, v___x_1396_);
v___x_1403_ = v___x_1392_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1396_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
else
{
size_t v___x_1405_; size_t v___x_1406_; lean_object* v___x_1407_; 
lean_del_object(v___x_1392_);
v___x_1405_ = ((size_t)0ULL);
v___x_1406_ = lean_usize_of_nat(v___x_1395_);
v___x_1407_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_declName_1308_, v_val_1394_, v___x_1405_, v___x_1406_, v___x_1396_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
lean_dec(v_val_1394_);
return v___x_1407_;
}
}
else
{
size_t v___x_1408_; size_t v___x_1409_; lean_object* v___x_1410_; 
lean_del_object(v___x_1392_);
v___x_1408_ = ((size_t)0ULL);
v___x_1409_ = lean_usize_of_nat(v___x_1395_);
v___x_1410_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_declName_1308_, v_val_1394_, v___x_1408_, v___x_1409_, v___x_1396_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
lean_dec(v_val_1394_);
return v___x_1410_;
}
}
}
else
{
lean_object* v___x_1411_; 
lean_del_object(v___x_1392_);
lean_dec(v_a_1390_);
lean_inc(v_mvarId_1309_);
v___x_1411_ = l_Lean_Meta_splitTarget_x3f(v_mvarId_1309_, v___x_1330_, v___x_1330_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1411_) == 0)
{
lean_object* v_a_1412_; 
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
lean_inc(v_a_1412_);
lean_dec_ref_known(v___x_1411_, 1);
if (lean_obj_tag(v_a_1412_) == 1)
{
lean_object* v_val_1413_; lean_object* v___x_1414_; 
lean_del_object(v___x_1379_);
lean_dec(v_mvarId_1309_);
v_val_1413_ = lean_ctor_get(v_a_1412_, 0);
lean_inc(v_val_1413_);
lean_dec_ref_known(v_a_1412_, 1);
v___x_1414_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_1308_, v_val_1413_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
return v___x_1414_;
}
else
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1418_; 
lean_dec(v_a_1412_);
lean_dec(v_declName_1308_);
v___x_1415_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12);
v___x_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1416_, 0, v_mvarId_1309_);
if (v_isShared_1380_ == 0)
{
lean_ctor_set_tag(v___x_1379_, 7);
lean_ctor_set(v___x_1379_, 1, v___x_1416_);
lean_ctor_set(v___x_1379_, 0, v___x_1415_);
v___x_1418_ = v___x_1379_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v___x_1415_);
lean_ctor_set(v_reuseFailAlloc_1420_, 1, v___x_1416_);
v___x_1418_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
lean_object* v___x_1419_; 
v___x_1419_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_1418_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
return v___x_1419_;
}
}
}
else
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
lean_del_object(v___x_1379_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1421_ = lean_ctor_get(v___x_1411_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1411_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1411_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
}
}
else
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
lean_del_object(v___x_1379_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1430_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1432_ = v___x_1389_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1389_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1430_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_del_object(v___x_1379_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1438_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1385_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1385_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
default: 
{
lean_object* v_mvarId_1446_; 
lean_del_object(v___x_1379_);
lean_del_object(v___x_1375_);
lean_dec(v_mvarId_1309_);
v_mvarId_1446_ = lean_ctor_get(v_fst_1377_, 0);
lean_inc(v_mvarId_1446_);
lean_dec_ref_known(v_fst_1377_, 1);
v_mvarId_1309_ = v_mvarId_1446_;
goto _start;
}
}
}
}
}
else
{
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1458_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1451_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1453_ = v___x_1372_;
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1372_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1456_; 
if (v_isShared_1454_ == 0)
{
v___x_1456_ = v___x_1453_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_a_1451_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
}
else
{
lean_object* v_a_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1466_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1459_ = lean_ctor_get(v___x_1369_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1461_ = v___x_1369_;
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_dec(v___x_1369_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v___x_1464_; 
if (v_isShared_1462_ == 0)
{
v___x_1464_ = v___x_1461_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_a_1459_);
v___x_1464_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
return v___x_1464_;
}
}
}
}
}
else
{
lean_object* v_a_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1474_; 
lean_dec(v_a_1332_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1467_ = lean_ctor_get(v___x_1345_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1469_ = v___x_1345_;
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_a_1467_);
lean_dec(v___x_1345_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1472_; 
if (v_isShared_1470_ == 0)
{
v___x_1472_ = v___x_1469_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_a_1467_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
}
}
}
else
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1482_; 
lean_dec(v_a_1332_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1475_ = lean_ctor_get(v___x_1341_, 0);
v_isSharedCheck_1482_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1477_ = v___x_1341_;
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___x_1341_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1480_; 
if (v_isShared_1478_ == 0)
{
v___x_1480_ = v___x_1477_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v_a_1475_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
}
}
}
else
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1490_; 
lean_dec(v_a_1332_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1483_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1485_ = v___x_1337_;
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1337_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1488_; 
if (v_isShared_1486_ == 0)
{
v___x_1488_ = v___x_1485_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_a_1483_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
else
{
lean_object* v___x_1491_; lean_object* v___x_1493_; 
lean_dec(v_a_1332_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v___x_1491_ = lean_box(0);
if (v_isShared_1335_ == 0)
{
lean_ctor_set(v___x_1334_, 0, v___x_1491_);
v___x_1493_ = v___x_1334_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v___x_1491_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
}
else
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1496_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1498_ = v___x_1331_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1331_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_a_1496_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
}
else
{
lean_object* v___x_1504_; lean_object* v___x_1506_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v___x_1504_ = lean_box(0);
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 0, v___x_1504_);
v___x_1506_ = v___x_1327_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v___x_1504_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
}
else
{
lean_object* v_a_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1516_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1509_ = lean_ctor_get(v___x_1324_, 0);
v_isSharedCheck_1516_ = !lean_is_exclusive(v___x_1324_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1511_ = v___x_1324_;
v_isShared_1512_ = v_isSharedCheck_1516_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_a_1509_);
lean_dec(v___x_1324_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1516_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
lean_object* v___x_1514_; 
if (v_isShared_1512_ == 0)
{
v___x_1514_ = v___x_1511_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v_a_1509_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
return v___x_1514_;
}
}
}
}
else
{
lean_object* v_inheritedTraceOptions_1517_; lean_object* v___f_1518_; lean_object* v_cls_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; uint8_t v___x_1522_; lean_object* v___y_1524_; lean_object* v___y_1525_; lean_object* v_a_1526_; lean_object* v___y_1536_; lean_object* v___y_1537_; lean_object* v_a_1538_; lean_object* v___y_1541_; lean_object* v___y_1542_; lean_object* v_a_1543_; lean_object* v___y_1546_; lean_object* v___y_1547_; lean_object* v___y_1548_; lean_object* v___y_1552_; lean_object* v___y_1553_; lean_object* v_a_1554_; lean_object* v___y_1567_; lean_object* v___y_1568_; lean_object* v_a_1569_; lean_object* v___y_1572_; lean_object* v___y_1573_; lean_object* v_a_1574_; lean_object* v___y_1577_; lean_object* v___y_1578_; lean_object* v___y_1579_; 
v_inheritedTraceOptions_1517_ = lean_ctor_get(v_toCold_1321_, 11);
lean_inc(v_mvarId_1309_);
v___f_1518_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1518_, 0, v_mvarId_1309_);
v_cls_1519_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17));
v___x_1520_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__1));
v___x_1521_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20);
v___x_1522_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1517_, v_options_1322_, v___x_1521_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1861_; uint8_t v___x_1862_; 
v___x_1861_ = l_Lean_trace_profiler;
v___x_1862_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(v_options_1322_, v___x_1861_);
if (v___x_1862_ == 0)
{
lean_object* v___x_1863_; 
lean_dec_ref(v___f_1518_);
lean_inc(v_mvarId_1309_);
v___x_1863_ = l_Lean_Elab_Eqns_tryURefl(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1863_) == 0)
{
lean_object* v_a_1864_; uint8_t v___x_1865_; 
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
lean_inc(v_a_1864_);
lean_dec_ref_known(v___x_1863_, 1);
v___x_1865_ = lean_unbox(v_a_1864_);
lean_dec(v_a_1864_);
if (v___x_1865_ == 0)
{
lean_object* v___x_1866_; 
lean_inc(v_mvarId_1309_);
v___x_1866_ = l_Lean_Elab_Eqns_tryContradiction(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1866_) == 0)
{
lean_object* v_a_1867_; uint8_t v___x_1868_; 
v_a_1867_ = lean_ctor_get(v___x_1866_, 0);
lean_inc(v_a_1867_);
lean_dec_ref_known(v___x_1866_, 1);
v___x_1868_ = lean_unbox(v_a_1867_);
if (v___x_1868_ == 0)
{
lean_object* v___x_1869_; 
lean_inc(v_mvarId_1309_);
v___x_1869_ = l_Lean_Elab_Eqns_whnfReducibleLHS_x3f(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1869_) == 0)
{
lean_object* v_a_1870_; 
v_a_1870_ = lean_ctor_get(v___x_1869_, 0);
lean_inc(v_a_1870_);
lean_dec_ref_known(v___x_1869_, 1);
if (lean_obj_tag(v_a_1870_) == 1)
{
lean_dec(v_a_1867_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1871_; 
v_val_1871_ = lean_ctor_get(v_a_1870_, 0);
lean_inc(v_val_1871_);
lean_dec_ref_known(v_a_1870_, 1);
v_mvarId_1309_ = v_val_1871_;
goto _start;
}
else
{
lean_object* v_val_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v_val_1873_ = lean_ctor_get(v_a_1870_, 0);
lean_inc(v_val_1873_);
lean_dec_ref_known(v_a_1870_, 1);
v___x_1874_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23);
v___x_1875_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1874_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1875_) == 0)
{
lean_dec_ref_known(v___x_1875_, 1);
v_mvarId_1309_ = v_val_1873_;
goto _start;
}
else
{
lean_dec(v_val_1873_);
lean_dec(v_declName_1308_);
return v___x_1875_;
}
}
}
else
{
lean_object* v___x_1877_; 
lean_dec(v_a_1870_);
lean_inc(v_mvarId_1309_);
v___x_1877_ = l_Lean_Elab_Eqns_simpMatch_x3f(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_object* v_a_1878_; 
v_a_1878_ = lean_ctor_get(v___x_1877_, 0);
lean_inc(v_a_1878_);
lean_dec_ref_known(v___x_1877_, 1);
if (lean_obj_tag(v_a_1878_) == 1)
{
lean_dec(v_a_1867_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1879_; 
v_val_1879_ = lean_ctor_get(v_a_1878_, 0);
lean_inc(v_val_1879_);
lean_dec_ref_known(v_a_1878_, 1);
v_mvarId_1309_ = v_val_1879_;
goto _start;
}
else
{
lean_object* v_val_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v_val_1881_ = lean_ctor_get(v_a_1878_, 0);
lean_inc(v_val_1881_);
lean_dec_ref_known(v_a_1878_, 1);
v___x_1882_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25);
v___x_1883_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1882_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_dec_ref_known(v___x_1883_, 1);
v_mvarId_1309_ = v_val_1881_;
goto _start;
}
else
{
lean_dec(v_val_1881_);
lean_dec(v_declName_1308_);
return v___x_1883_;
}
}
}
else
{
lean_object* v___x_1885_; 
lean_dec(v_a_1878_);
lean_inc(v_mvarId_1309_);
v___x_1885_ = l_Lean_Elab_Eqns_simpIf_x3f(v_mvarId_1309_, v_hasTrace_1323_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1885_) == 0)
{
lean_object* v_a_1886_; 
v_a_1886_ = lean_ctor_get(v___x_1885_, 0);
lean_inc(v_a_1886_);
lean_dec_ref_known(v___x_1885_, 1);
if (lean_obj_tag(v_a_1886_) == 1)
{
lean_dec(v_a_1867_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1887_; 
v_val_1887_ = lean_ctor_get(v_a_1886_, 0);
lean_inc(v_val_1887_);
lean_dec_ref_known(v_a_1886_, 1);
v_mvarId_1309_ = v_val_1887_;
goto _start;
}
else
{
lean_object* v_val_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
v_val_1889_ = lean_ctor_get(v_a_1886_, 0);
lean_inc(v_val_1889_);
lean_dec_ref_known(v_a_1886_, 1);
v___x_1890_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27);
v___x_1891_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1890_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1891_) == 0)
{
lean_dec_ref_known(v___x_1891_, 1);
v_mvarId_1309_ = v_val_1889_;
goto _start;
}
else
{
lean_dec(v_val_1889_);
lean_dec(v_declName_1308_);
return v___x_1891_;
}
}
}
else
{
lean_object* v___x_1893_; lean_object* v___x_1894_; uint8_t v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; uint8_t v___x_1898_; uint8_t v___x_1899_; uint8_t v___x_1900_; uint8_t v___x_1901_; uint8_t v___x_1902_; uint8_t v___x_1903_; uint8_t v___x_1904_; uint8_t v___x_1905_; uint8_t v___x_1906_; uint8_t v___x_1907_; uint8_t v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
lean_dec(v_a_1886_);
v___x_1893_ = lean_unsigned_to_nat(100000u);
v___x_1894_ = lean_unsigned_to_nat(2u);
v___x_1895_ = 0;
v___x_1896_ = lean_box(0);
v___x_1897_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_1897_, 0, v___x_1893_);
lean_ctor_set(v___x_1897_, 1, v___x_1894_);
lean_ctor_set(v___x_1897_, 2, v___x_1896_);
v___x_1898_ = lean_unbox(v_a_1867_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3, v___x_1898_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 1, v_hasTrace_1323_);
v___x_1899_ = lean_unbox(v_a_1867_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 2, v___x_1899_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 3, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 4, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 5, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 6, v___x_1895_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 7, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 8, v_hasTrace_1323_);
v___x_1900_ = lean_unbox(v_a_1867_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 9, v___x_1900_);
v___x_1901_ = lean_unbox(v_a_1867_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 10, v___x_1901_);
v___x_1902_ = lean_unbox(v_a_1867_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 11, v___x_1902_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 12, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 13, v_hasTrace_1323_);
v___x_1903_ = lean_unbox(v_a_1867_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 14, v___x_1903_);
v___x_1904_ = lean_unbox(v_a_1867_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 15, v___x_1904_);
v___x_1905_ = lean_unbox(v_a_1867_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 16, v___x_1905_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 17, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 18, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 19, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 20, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 21, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 22, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 23, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 24, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 25, v_hasTrace_1323_);
v___x_1906_ = lean_unbox(v_a_1867_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 26, v___x_1906_);
v___x_1907_ = lean_unbox(v_a_1867_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 27, v___x_1907_);
v___x_1908_ = lean_unbox(v_a_1867_);
lean_dec(v_a_1867_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 28, v___x_1908_);
v___x_1909_ = lean_unsigned_to_nat(0u);
v___x_1910_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0));
v___x_1911_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2);
v___x_1912_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4);
v___x_1913_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1913_, 0, v___x_1911_);
lean_ctor_set(v___x_1913_, 1, v___x_1912_);
lean_ctor_set_uint8(v___x_1913_, sizeof(void*)*2, v_hasTrace_1323_);
v___x_1914_ = l_Lean_Options_empty;
v___x_1915_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_1897_, v___x_1910_, v___x_1913_, v___x_1914_, v_a_1310_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_a_1916_);
lean_dec_ref_known(v___x_1915_, 1);
v___x_1917_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10);
lean_inc(v_mvarId_1309_);
v___x_1918_ = l_Lean_Meta_simpTargetStar(v_mvarId_1309_, v_a_1916_, v___x_1910_, v___x_1896_, v___x_1917_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1918_) == 0)
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_2017_; 
v_a_1919_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_2017_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_1921_ = v___x_1918_;
v_isShared_1922_ = v_isSharedCheck_2017_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1918_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_2017_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v_fst_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_2015_; 
v_fst_1923_ = lean_ctor_get(v_a_1919_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v_a_1919_);
if (v_isSharedCheck_2015_ == 0)
{
lean_object* v_unused_2016_; 
v_unused_2016_ = lean_ctor_get(v_a_1919_, 1);
lean_dec(v_unused_2016_);
v___x_1925_ = v_a_1919_;
v_isShared_1926_ = v_isSharedCheck_2015_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_fst_1923_);
lean_dec(v_a_1919_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_2015_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
switch(lean_obj_tag(v_fst_1923_))
{
case 0:
{
lean_del_object(v___x_1925_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1927_; lean_object* v___x_1929_; 
v___x_1927_ = lean_box(0);
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 0, v___x_1927_);
v___x_1929_ = v___x_1921_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v___x_1927_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
else
{
lean_object* v___x_1931_; lean_object* v___x_1932_; 
lean_del_object(v___x_1921_);
v___x_1931_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29);
v___x_1932_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1931_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
return v___x_1932_;
}
}
case 1:
{
lean_object* v___x_1933_; 
lean_del_object(v___x_1921_);
lean_inc(v_declName_1308_);
lean_inc(v_mvarId_1309_);
v___x_1933_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f(v_mvarId_1309_, v_declName_1308_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v_a_1934_; 
v_a_1934_ = lean_ctor_get(v___x_1933_, 0);
lean_inc(v_a_1934_);
lean_dec_ref_known(v___x_1933_, 1);
if (lean_obj_tag(v_a_1934_) == 1)
{
lean_del_object(v___x_1925_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1935_; 
v_val_1935_ = lean_ctor_get(v_a_1934_, 0);
lean_inc(v_val_1935_);
lean_dec_ref_known(v_a_1934_, 1);
v_mvarId_1309_ = v_val_1935_;
goto _start;
}
else
{
lean_object* v_val_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v_val_1937_ = lean_ctor_get(v_a_1934_, 0);
lean_inc(v_val_1937_);
lean_dec_ref_known(v_a_1934_, 1);
v___x_1938_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31);
v___x_1939_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1938_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_dec_ref_known(v___x_1939_, 1);
v_mvarId_1309_ = v_val_1937_;
goto _start;
}
else
{
lean_dec(v_val_1937_);
lean_dec(v_declName_1308_);
return v___x_1939_;
}
}
}
else
{
lean_object* v___x_1941_; 
lean_dec(v_a_1934_);
lean_inc(v_mvarId_1309_);
v___x_1941_ = l_Lean_Meta_casesOnStuckLHS_x3f(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1992_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1944_ = v___x_1941_;
v_isShared_1945_ = v_isSharedCheck_1992_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1941_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1992_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
if (lean_obj_tag(v_a_1942_) == 1)
{
lean_object* v_val_1946_; lean_object* v___y_1948_; lean_object* v___y_1949_; lean_object* v___y_1950_; lean_object* v___y_1951_; 
lean_del_object(v___x_1925_);
lean_dec(v_mvarId_1309_);
v_val_1946_ = lean_ctor_get(v_a_1942_, 0);
lean_inc(v_val_1946_);
lean_dec_ref_known(v_a_1942_, 1);
if (v___x_1522_ == 0)
{
v___y_1948_ = v_a_1310_;
v___y_1949_ = v_a_1311_;
v___y_1950_ = v_a_1312_;
v___y_1951_ = v_a_1313_;
goto v___jp_1947_;
}
else
{
lean_object* v___x_1968_; lean_object* v___x_1969_; 
v___x_1968_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33);
v___x_1969_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1968_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1969_) == 0)
{
lean_dec_ref_known(v___x_1969_, 1);
v___y_1948_ = v_a_1310_;
v___y_1949_ = v_a_1311_;
v___y_1950_ = v_a_1312_;
v___y_1951_ = v_a_1313_;
goto v___jp_1947_;
}
else
{
lean_dec(v_val_1946_);
lean_del_object(v___x_1944_);
lean_dec(v_declName_1308_);
return v___x_1969_;
}
}
v___jp_1947_:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; uint8_t v___x_1954_; 
v___x_1952_ = lean_array_get_size(v_val_1946_);
v___x_1953_ = lean_box(0);
v___x_1954_ = lean_nat_dec_lt(v___x_1909_, v___x_1952_);
if (v___x_1954_ == 0)
{
lean_object* v___x_1956_; 
lean_dec(v_val_1946_);
lean_dec(v_declName_1308_);
if (v_isShared_1945_ == 0)
{
lean_ctor_set(v___x_1944_, 0, v___x_1953_);
v___x_1956_ = v___x_1944_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v___x_1953_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
else
{
uint8_t v___x_1958_; 
v___x_1958_ = lean_nat_dec_le(v___x_1952_, v___x_1952_);
if (v___x_1958_ == 0)
{
if (v___x_1954_ == 0)
{
lean_object* v___x_1960_; 
lean_dec(v_val_1946_);
lean_dec(v_declName_1308_);
if (v_isShared_1945_ == 0)
{
lean_ctor_set(v___x_1944_, 0, v___x_1953_);
v___x_1960_ = v___x_1944_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v___x_1953_);
v___x_1960_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
return v___x_1960_;
}
}
else
{
size_t v___x_1962_; size_t v___x_1963_; lean_object* v___x_1964_; 
lean_del_object(v___x_1944_);
v___x_1962_ = ((size_t)0ULL);
v___x_1963_ = lean_usize_of_nat(v___x_1952_);
v___x_1964_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_declName_1308_, v_val_1946_, v___x_1962_, v___x_1963_, v___x_1953_, v___y_1948_, v___y_1949_, v___y_1950_, v___y_1951_);
lean_dec(v_val_1946_);
return v___x_1964_;
}
}
else
{
size_t v___x_1965_; size_t v___x_1966_; lean_object* v___x_1967_; 
lean_del_object(v___x_1944_);
v___x_1965_ = ((size_t)0ULL);
v___x_1966_ = lean_usize_of_nat(v___x_1952_);
v___x_1967_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_declName_1308_, v_val_1946_, v___x_1965_, v___x_1966_, v___x_1953_, v___y_1948_, v___y_1949_, v___y_1950_, v___y_1951_);
lean_dec(v_val_1946_);
return v___x_1967_;
}
}
}
}
else
{
lean_object* v___x_1970_; 
lean_del_object(v___x_1944_);
lean_dec(v_a_1942_);
lean_inc(v_mvarId_1309_);
v___x_1970_ = l_Lean_Meta_splitTarget_x3f(v_mvarId_1309_, v_hasTrace_1323_, v_hasTrace_1323_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v_a_1971_; 
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc(v_a_1971_);
lean_dec_ref_known(v___x_1970_, 1);
if (lean_obj_tag(v_a_1971_) == 1)
{
lean_del_object(v___x_1925_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1972_; lean_object* v___x_1973_; 
v_val_1972_ = lean_ctor_get(v_a_1971_, 0);
lean_inc(v_val_1972_);
lean_dec_ref_known(v_a_1971_, 1);
v___x_1973_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_1308_, v_val_1972_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
return v___x_1973_;
}
else
{
lean_object* v_val_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
v_val_1974_ = lean_ctor_get(v_a_1971_, 0);
lean_inc(v_val_1974_);
lean_dec_ref_known(v_a_1971_, 1);
v___x_1975_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35);
v___x_1976_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1975_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1976_) == 0)
{
lean_object* v___x_1977_; 
lean_dec_ref_known(v___x_1976_, 1);
v___x_1977_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_1308_, v_val_1974_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
return v___x_1977_;
}
else
{
lean_dec(v_val_1974_);
lean_dec(v_declName_1308_);
return v___x_1976_;
}
}
}
else
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1981_; 
lean_dec(v_a_1971_);
lean_dec(v_declName_1308_);
v___x_1978_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12);
v___x_1979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1979_, 0, v_mvarId_1309_);
if (v_isShared_1926_ == 0)
{
lean_ctor_set_tag(v___x_1925_, 7);
lean_ctor_set(v___x_1925_, 1, v___x_1979_);
lean_ctor_set(v___x_1925_, 0, v___x_1978_);
v___x_1981_ = v___x_1925_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v___x_1978_);
lean_ctor_set(v_reuseFailAlloc_1983_, 1, v___x_1979_);
v___x_1981_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
lean_object* v___x_1982_; 
v___x_1982_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_1981_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
return v___x_1982_;
}
}
}
else
{
lean_object* v_a_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1991_; 
lean_del_object(v___x_1925_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1984_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1986_ = v___x_1970_;
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_a_1984_);
lean_dec(v___x_1970_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1989_; 
if (v_isShared_1987_ == 0)
{
v___x_1989_ = v___x_1986_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_a_1984_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
}
}
}
else
{
lean_object* v_a_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2000_; 
lean_del_object(v___x_1925_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1993_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_2000_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_2000_ == 0)
{
v___x_1995_ = v___x_1941_;
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_a_1993_);
lean_dec(v___x_1941_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1998_; 
if (v_isShared_1996_ == 0)
{
v___x_1998_ = v___x_1995_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v_a_1993_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
}
}
else
{
lean_object* v_a_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2008_; 
lean_del_object(v___x_1925_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_2001_ = lean_ctor_get(v___x_1933_, 0);
v_isSharedCheck_2008_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_2008_ == 0)
{
v___x_2003_ = v___x_1933_;
v_isShared_2004_ = v_isSharedCheck_2008_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_a_2001_);
lean_dec(v___x_1933_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2008_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2006_; 
if (v_isShared_2004_ == 0)
{
v___x_2006_ = v___x_2003_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v_a_2001_);
v___x_2006_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
return v___x_2006_;
}
}
}
}
default: 
{
lean_del_object(v___x_1925_);
lean_del_object(v___x_1921_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_mvarId_2009_; 
v_mvarId_2009_ = lean_ctor_get(v_fst_1923_, 0);
lean_inc(v_mvarId_2009_);
lean_dec_ref_known(v_fst_1923_, 1);
v_mvarId_1309_ = v_mvarId_2009_;
goto _start;
}
else
{
lean_object* v_mvarId_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v_mvarId_2011_ = lean_ctor_get(v_fst_1923_, 0);
lean_inc(v_mvarId_2011_);
lean_dec_ref_known(v_fst_1923_, 1);
v___x_2012_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37);
v___x_2013_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_2012_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_dec_ref_known(v___x_2013_, 1);
v_mvarId_1309_ = v_mvarId_2011_;
goto _start;
}
else
{
lean_dec(v_mvarId_2011_);
lean_dec(v_declName_1308_);
return v___x_2013_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2025_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_2018_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_2025_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_2020_ = v___x_1918_;
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_a_2018_);
lean_dec(v___x_1918_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2023_; 
if (v_isShared_2021_ == 0)
{
v___x_2023_ = v___x_2020_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v_a_2018_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
return v___x_2023_;
}
}
}
}
else
{
lean_object* v_a_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2033_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_2026_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2028_ = v___x_1915_;
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_a_2026_);
lean_dec(v___x_1915_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2031_; 
if (v_isShared_2029_ == 0)
{
v___x_2031_ = v___x_2028_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v_a_2026_);
v___x_2031_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
return v___x_2031_;
}
}
}
}
}
else
{
lean_object* v_a_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2041_; 
lean_dec(v_a_1867_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_2034_ = lean_ctor_get(v___x_1885_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v___x_1885_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2036_ = v___x_1885_;
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_a_2034_);
lean_dec(v___x_1885_);
v___x_2036_ = lean_box(0);
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
v_resetjp_2035_:
{
lean_object* v___x_2039_; 
if (v_isShared_2037_ == 0)
{
v___x_2039_ = v___x_2036_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v_a_2034_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
}
}
}
}
}
else
{
lean_object* v_a_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2049_; 
lean_dec(v_a_1867_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_2042_ = lean_ctor_get(v___x_1877_, 0);
v_isSharedCheck_2049_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_2049_ == 0)
{
v___x_2044_ = v___x_1877_;
v_isShared_2045_ = v_isSharedCheck_2049_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_a_2042_);
lean_dec(v___x_1877_);
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
}
else
{
lean_object* v_a_2050_; lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2057_; 
lean_dec(v_a_1867_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_2050_ = lean_ctor_get(v___x_1869_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v___x_1869_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2052_ = v___x_1869_;
v_isShared_2053_ = v_isSharedCheck_2057_;
goto v_resetjp_2051_;
}
else
{
lean_inc(v_a_2050_);
lean_dec(v___x_1869_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2057_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
lean_object* v___x_2055_; 
if (v_isShared_2053_ == 0)
{
v___x_2055_ = v___x_2052_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v_a_2050_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
}
}
else
{
lean_dec(v_a_1867_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
if (v___x_1522_ == 0)
{
goto v___jp_1318_;
}
else
{
lean_object* v___x_2058_; lean_object* v___x_2059_; 
v___x_2058_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__39, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__39_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__39);
v___x_2059_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_2058_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_dec_ref_known(v___x_2059_, 1);
goto v___jp_1318_;
}
else
{
return v___x_2059_;
}
}
}
}
else
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_2060_ = lean_ctor_get(v___x_1866_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2062_ = v___x_1866_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_1866_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_a_2060_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
else
{
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
if (v___x_1522_ == 0)
{
goto v___jp_1315_;
}
else
{
lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2068_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__41, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__41_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__41);
v___x_2069_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_2068_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_2069_) == 0)
{
lean_dec_ref_known(v___x_2069_, 1);
goto v___jp_1315_;
}
else
{
return v___x_2069_;
}
}
}
}
else
{
lean_object* v_a_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2077_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_2070_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2072_ = v___x_1863_;
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_a_2070_);
lean_dec(v___x_1863_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2075_; 
if (v_isShared_2073_ == 0)
{
v___x_2075_ = v___x_2072_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_a_2070_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
else
{
goto v___jp_1582_;
}
}
else
{
goto v___jp_1582_;
}
v___jp_1523_:
{
lean_object* v___x_1527_; double v___x_1528_; double v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1527_ = lean_io_get_num_heartbeats();
v___x_1528_ = lean_float_of_nat(v___y_1525_);
v___x_1529_ = lean_float_of_nat(v___x_1527_);
v___x_1530_ = lean_box_float(v___x_1528_);
v___x_1531_ = lean_box_float(v___x_1529_);
v___x_1532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1530_);
lean_ctor_set(v___x_1532_, 1, v___x_1531_);
v___x_1533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1533_, 0, v_a_1526_);
lean_ctor_set(v___x_1533_, 1, v___x_1532_);
v___x_1534_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_cls_1519_, v_hasTrace_1323_, v___x_1520_, v_options_1322_, v___x_1522_, v___y_1524_, v___f_1518_, v___x_1533_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
return v___x_1534_;
}
v___jp_1535_:
{
lean_object* v___x_1539_; 
v___x_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1539_, 0, v_a_1538_);
v___y_1524_ = v___y_1536_;
v___y_1525_ = v___y_1537_;
v_a_1526_ = v___x_1539_;
goto v___jp_1523_;
}
v___jp_1540_:
{
lean_object* v___x_1544_; 
v___x_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1544_, 0, v_a_1543_);
v___y_1524_ = v___y_1541_;
v___y_1525_ = v___y_1542_;
v_a_1526_ = v___x_1544_;
goto v___jp_1523_;
}
v___jp_1545_:
{
if (lean_obj_tag(v___y_1548_) == 0)
{
lean_object* v_a_1549_; 
v_a_1549_ = lean_ctor_get(v___y_1548_, 0);
lean_inc(v_a_1549_);
lean_dec_ref_known(v___y_1548_, 1);
v___y_1541_ = v___y_1546_;
v___y_1542_ = v___y_1547_;
v_a_1543_ = v_a_1549_;
goto v___jp_1540_;
}
else
{
lean_object* v_a_1550_; 
v_a_1550_ = lean_ctor_get(v___y_1548_, 0);
lean_inc(v_a_1550_);
lean_dec_ref_known(v___y_1548_, 1);
v___y_1536_ = v___y_1546_;
v___y_1537_ = v___y_1547_;
v_a_1538_ = v_a_1550_;
goto v___jp_1535_;
}
}
v___jp_1551_:
{
lean_object* v___x_1555_; double v___x_1556_; double v___x_1557_; double v___x_1558_; double v___x_1559_; double v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1555_ = lean_io_mono_nanos_now();
v___x_1556_ = lean_float_of_nat(v___y_1553_);
v___x_1557_ = lean_float_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21);
v___x_1558_ = lean_float_div(v___x_1556_, v___x_1557_);
v___x_1559_ = lean_float_of_nat(v___x_1555_);
v___x_1560_ = lean_float_div(v___x_1559_, v___x_1557_);
v___x_1561_ = lean_box_float(v___x_1558_);
v___x_1562_ = lean_box_float(v___x_1560_);
v___x_1563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1561_);
lean_ctor_set(v___x_1563_, 1, v___x_1562_);
v___x_1564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1564_, 0, v_a_1554_);
lean_ctor_set(v___x_1564_, 1, v___x_1563_);
v___x_1565_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_cls_1519_, v_hasTrace_1323_, v___x_1520_, v_options_1322_, v___x_1522_, v___y_1552_, v___f_1518_, v___x_1564_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
return v___x_1565_;
}
v___jp_1566_:
{
lean_object* v___x_1570_; 
v___x_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1570_, 0, v_a_1569_);
v___y_1552_ = v___y_1567_;
v___y_1553_ = v___y_1568_;
v_a_1554_ = v___x_1570_;
goto v___jp_1551_;
}
v___jp_1571_:
{
lean_object* v___x_1575_; 
v___x_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1575_, 0, v_a_1574_);
v___y_1552_ = v___y_1572_;
v___y_1553_ = v___y_1573_;
v_a_1554_ = v___x_1575_;
goto v___jp_1551_;
}
v___jp_1576_:
{
if (lean_obj_tag(v___y_1579_) == 0)
{
lean_object* v_a_1580_; 
v_a_1580_ = lean_ctor_get(v___y_1579_, 0);
lean_inc(v_a_1580_);
lean_dec_ref_known(v___y_1579_, 1);
v___y_1567_ = v___y_1577_;
v___y_1568_ = v___y_1578_;
v_a_1569_ = v_a_1580_;
goto v___jp_1566_;
}
else
{
lean_object* v_a_1581_; 
v_a_1581_ = lean_ctor_get(v___y_1579_, 0);
lean_inc(v_a_1581_);
lean_dec_ref_known(v___y_1579_, 1);
v___y_1572_ = v___y_1577_;
v___y_1573_ = v___y_1578_;
v_a_1574_ = v_a_1581_;
goto v___jp_1571_;
}
}
v___jp_1582_:
{
lean_object* v___x_1583_; 
v___x_1583_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg(v_a_1313_);
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v_a_1584_; lean_object* v___x_1585_; uint8_t v___x_1586_; 
v_a_1584_ = lean_ctor_get(v___x_1583_, 0);
lean_inc(v_a_1584_);
lean_dec_ref_known(v___x_1583_, 1);
v___x_1585_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1586_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(v_options_1322_, v___x_1585_);
if (v___x_1586_ == 0)
{
lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1587_ = lean_io_mono_nanos_now();
lean_inc(v_mvarId_1309_);
v___x_1588_ = l_Lean_Elab_Eqns_tryURefl(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v_a_1589_; uint8_t v___x_1590_; 
v_a_1589_ = lean_ctor_get(v___x_1588_, 0);
lean_inc(v_a_1589_);
lean_dec_ref_known(v___x_1588_, 1);
v___x_1590_ = lean_unbox(v_a_1589_);
lean_dec(v_a_1589_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; 
lean_inc(v_mvarId_1309_);
v___x_1591_ = l_Lean_Elab_Eqns_tryContradiction(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1591_) == 0)
{
lean_object* v_a_1592_; uint8_t v___x_1593_; 
v_a_1592_ = lean_ctor_get(v___x_1591_, 0);
lean_inc(v_a_1592_);
lean_dec_ref_known(v___x_1591_, 1);
v___x_1593_ = lean_unbox(v_a_1592_);
if (v___x_1593_ == 0)
{
lean_object* v___x_1594_; 
lean_inc(v_mvarId_1309_);
v___x_1594_ = l_Lean_Elab_Eqns_whnfReducibleLHS_x3f(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1594_) == 0)
{
lean_object* v_a_1595_; 
v_a_1595_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_a_1595_);
lean_dec_ref_known(v___x_1594_, 1);
if (lean_obj_tag(v_a_1595_) == 1)
{
lean_dec(v_a_1592_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1596_; lean_object* v___x_1597_; 
v_val_1596_ = lean_ctor_get(v_a_1595_, 0);
lean_inc(v_val_1596_);
lean_dec_ref_known(v_a_1595_, 1);
v___x_1597_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1596_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1597_;
goto v___jp_1576_;
}
else
{
lean_object* v_val_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v_val_1598_ = lean_ctor_get(v_a_1595_, 0);
lean_inc(v_val_1598_);
lean_dec_ref_known(v_a_1595_, 1);
v___x_1599_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23);
v___x_1600_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1599_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1600_) == 0)
{
lean_object* v___x_1601_; 
lean_dec_ref_known(v___x_1600_, 1);
v___x_1601_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1598_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1601_;
goto v___jp_1576_;
}
else
{
lean_dec(v_val_1598_);
lean_dec(v_declName_1308_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1600_;
goto v___jp_1576_;
}
}
}
else
{
lean_object* v___x_1602_; 
lean_dec(v_a_1595_);
lean_inc(v_mvarId_1309_);
v___x_1602_ = l_Lean_Elab_Eqns_simpMatch_x3f(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1603_);
lean_dec_ref_known(v___x_1602_, 1);
if (lean_obj_tag(v_a_1603_) == 1)
{
lean_dec(v_a_1592_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1604_; lean_object* v___x_1605_; 
v_val_1604_ = lean_ctor_get(v_a_1603_, 0);
lean_inc(v_val_1604_);
lean_dec_ref_known(v_a_1603_, 1);
v___x_1605_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1604_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1605_;
goto v___jp_1576_;
}
else
{
lean_object* v_val_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v_val_1606_ = lean_ctor_get(v_a_1603_, 0);
lean_inc(v_val_1606_);
lean_dec_ref_known(v_a_1603_, 1);
v___x_1607_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25);
v___x_1608_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1607_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1608_) == 0)
{
lean_object* v___x_1609_; 
lean_dec_ref_known(v___x_1608_, 1);
v___x_1609_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1606_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1609_;
goto v___jp_1576_;
}
else
{
lean_dec(v_val_1606_);
lean_dec(v_declName_1308_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1608_;
goto v___jp_1576_;
}
}
}
else
{
lean_object* v___x_1610_; 
lean_dec(v_a_1603_);
lean_inc(v_mvarId_1309_);
v___x_1610_ = l_Lean_Elab_Eqns_simpIf_x3f(v_mvarId_1309_, v_hasTrace_1323_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_object* v_a_1611_; 
v_a_1611_ = lean_ctor_get(v___x_1610_, 0);
lean_inc(v_a_1611_);
lean_dec_ref_known(v___x_1610_, 1);
if (lean_obj_tag(v_a_1611_) == 1)
{
lean_dec(v_a_1592_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1612_; lean_object* v___x_1613_; 
v_val_1612_ = lean_ctor_get(v_a_1611_, 0);
lean_inc(v_val_1612_);
lean_dec_ref_known(v_a_1611_, 1);
v___x_1613_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1612_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1613_;
goto v___jp_1576_;
}
else
{
lean_object* v_val_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
v_val_1614_ = lean_ctor_get(v_a_1611_, 0);
lean_inc(v_val_1614_);
lean_dec_ref_known(v_a_1611_, 1);
v___x_1615_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27);
v___x_1616_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1615_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1616_) == 0)
{
lean_object* v___x_1617_; 
lean_dec_ref_known(v___x_1616_, 1);
v___x_1617_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1614_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1617_;
goto v___jp_1576_;
}
else
{
lean_dec(v_val_1614_);
lean_dec(v_declName_1308_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1616_;
goto v___jp_1576_;
}
}
}
else
{
lean_object* v___x_1618_; lean_object* v___x_1619_; uint8_t v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; uint8_t v___x_1623_; uint8_t v___x_1624_; uint8_t v___x_1625_; uint8_t v___x_1626_; uint8_t v___x_1627_; uint8_t v___x_1628_; uint8_t v___x_1629_; uint8_t v___x_1630_; uint8_t v___x_1631_; uint8_t v___x_1632_; uint8_t v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; 
lean_dec(v_a_1611_);
v___x_1618_ = lean_unsigned_to_nat(100000u);
v___x_1619_ = lean_unsigned_to_nat(2u);
v___x_1620_ = 0;
v___x_1621_ = lean_box(0);
v___x_1622_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_1622_, 0, v___x_1618_);
lean_ctor_set(v___x_1622_, 1, v___x_1619_);
lean_ctor_set(v___x_1622_, 2, v___x_1621_);
v___x_1623_ = lean_unbox(v_a_1592_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3, v___x_1623_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 1, v_hasTrace_1323_);
v___x_1624_ = lean_unbox(v_a_1592_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 2, v___x_1624_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 3, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 4, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 5, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 6, v___x_1620_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 7, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 8, v_hasTrace_1323_);
v___x_1625_ = lean_unbox(v_a_1592_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 9, v___x_1625_);
v___x_1626_ = lean_unbox(v_a_1592_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 10, v___x_1626_);
v___x_1627_ = lean_unbox(v_a_1592_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 11, v___x_1627_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 12, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 13, v_hasTrace_1323_);
v___x_1628_ = lean_unbox(v_a_1592_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 14, v___x_1628_);
v___x_1629_ = lean_unbox(v_a_1592_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 15, v___x_1629_);
v___x_1630_ = lean_unbox(v_a_1592_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 16, v___x_1630_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 17, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 18, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 19, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 20, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 21, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 22, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 23, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 24, v_hasTrace_1323_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 25, v_hasTrace_1323_);
v___x_1631_ = lean_unbox(v_a_1592_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 26, v___x_1631_);
v___x_1632_ = lean_unbox(v_a_1592_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 27, v___x_1632_);
v___x_1633_ = lean_unbox(v_a_1592_);
lean_dec(v_a_1592_);
lean_ctor_set_uint8(v___x_1622_, sizeof(void*)*3 + 28, v___x_1633_);
v___x_1634_ = lean_unsigned_to_nat(0u);
v___x_1635_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0));
v___x_1636_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2);
v___x_1637_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4);
v___x_1638_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1638_, 0, v___x_1636_);
lean_ctor_set(v___x_1638_, 1, v___x_1637_);
lean_ctor_set_uint8(v___x_1638_, sizeof(void*)*2, v_hasTrace_1323_);
v___x_1639_ = l_Lean_Options_empty;
v___x_1640_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_1622_, v___x_1635_, v___x_1638_, v___x_1639_, v_a_1310_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v_a_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v_a_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v___x_1640_, 1);
v___x_1642_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10);
lean_inc(v_mvarId_1309_);
v___x_1643_ = l_Lean_Meta_simpTargetStar(v_mvarId_1309_, v_a_1641_, v___x_1635_, v___x_1621_, v___x_1642_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1643_) == 0)
{
lean_object* v_a_1644_; lean_object* v_fst_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1699_; 
v_a_1644_ = lean_ctor_get(v___x_1643_, 0);
lean_inc(v_a_1644_);
lean_dec_ref_known(v___x_1643_, 1);
v_fst_1645_ = lean_ctor_get(v_a_1644_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v_a_1644_);
if (v_isSharedCheck_1699_ == 0)
{
lean_object* v_unused_1700_; 
v_unused_1700_ = lean_ctor_get(v_a_1644_, 1);
lean_dec(v_unused_1700_);
v___x_1647_ = v_a_1644_;
v_isShared_1648_ = v_isSharedCheck_1699_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_fst_1645_);
lean_dec(v_a_1644_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1699_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
switch(lean_obj_tag(v_fst_1645_))
{
case 0:
{
lean_del_object(v___x_1647_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1649_; 
v___x_1649_ = lean_box(0);
v___y_1567_ = v_a_1584_;
v___y_1568_ = v___x_1587_;
v_a_1569_ = v___x_1649_;
goto v___jp_1566_;
}
else
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29);
v___x_1651_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1650_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1651_;
goto v___jp_1576_;
}
}
case 1:
{
lean_object* v___x_1652_; 
lean_inc(v_declName_1308_);
lean_inc(v_mvarId_1309_);
v___x_1652_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f(v_mvarId_1309_, v_declName_1308_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; 
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1653_);
lean_dec_ref_known(v___x_1652_, 1);
if (lean_obj_tag(v_a_1653_) == 1)
{
lean_del_object(v___x_1647_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1654_; lean_object* v___x_1655_; 
v_val_1654_ = lean_ctor_get(v_a_1653_, 0);
lean_inc(v_val_1654_);
lean_dec_ref_known(v_a_1653_, 1);
v___x_1655_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1654_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1655_;
goto v___jp_1576_;
}
else
{
lean_object* v_val_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v_val_1656_ = lean_ctor_get(v_a_1653_, 0);
lean_inc(v_val_1656_);
lean_dec_ref_known(v_a_1653_, 1);
v___x_1657_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31);
v___x_1658_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1657_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v___x_1659_; 
lean_dec_ref_known(v___x_1658_, 1);
v___x_1659_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1656_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1659_;
goto v___jp_1576_;
}
else
{
lean_dec(v_val_1656_);
lean_dec(v_declName_1308_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1658_;
goto v___jp_1576_;
}
}
}
else
{
lean_object* v___x_1660_; 
lean_dec(v_a_1653_);
lean_inc(v_mvarId_1309_);
v___x_1660_ = l_Lean_Meta_casesOnStuckLHS_x3f(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1660_) == 0)
{
lean_object* v_a_1661_; 
v_a_1661_ = lean_ctor_get(v___x_1660_, 0);
lean_inc(v_a_1661_);
lean_dec_ref_known(v___x_1660_, 1);
if (lean_obj_tag(v_a_1661_) == 1)
{
lean_del_object(v___x_1647_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v_val_1662_ = lean_ctor_get(v_a_1661_, 0);
lean_inc(v_val_1662_);
lean_dec_ref_known(v_a_1661_, 1);
v___x_1663_ = lean_box(0);
v___x_1664_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5(v_val_1662_, v___x_1634_, v_declName_1308_, v___x_1663_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
lean_dec(v_val_1662_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1664_;
goto v___jp_1576_;
}
else
{
lean_object* v_val_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v_val_1665_ = lean_ctor_get(v_a_1661_, 0);
lean_inc(v_val_1665_);
lean_dec_ref_known(v_a_1661_, 1);
v___x_1666_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33);
v___x_1667_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1666_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1667_) == 0)
{
lean_object* v_a_1668_; lean_object* v___x_1669_; 
v_a_1668_ = lean_ctor_get(v___x_1667_, 0);
lean_inc(v_a_1668_);
lean_dec_ref_known(v___x_1667_, 1);
v___x_1669_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5(v_val_1665_, v___x_1634_, v_declName_1308_, v_a_1668_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
lean_dec(v_val_1665_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1669_;
goto v___jp_1576_;
}
else
{
lean_dec(v_val_1665_);
lean_dec(v_declName_1308_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1667_;
goto v___jp_1576_;
}
}
}
else
{
lean_object* v___x_1670_; 
lean_dec(v_a_1661_);
lean_inc(v_mvarId_1309_);
v___x_1670_ = l_Lean_Meta_splitTarget_x3f(v_mvarId_1309_, v_hasTrace_1323_, v_hasTrace_1323_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v_a_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1689_; 
v_a_1671_ = lean_ctor_get(v___x_1670_, 0);
v_isSharedCheck_1689_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1673_ = v___x_1670_;
v_isShared_1674_ = v_isSharedCheck_1689_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_a_1671_);
lean_dec(v___x_1670_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1689_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
if (lean_obj_tag(v_a_1671_) == 1)
{
lean_del_object(v___x_1673_);
lean_del_object(v___x_1647_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1675_; lean_object* v___x_1676_; 
v_val_1675_ = lean_ctor_get(v_a_1671_, 0);
lean_inc(v_val_1675_);
lean_dec_ref_known(v_a_1671_, 1);
v___x_1676_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_1308_, v_val_1675_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1676_;
goto v___jp_1576_;
}
else
{
lean_object* v_val_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
v_val_1677_ = lean_ctor_get(v_a_1671_, 0);
lean_inc(v_val_1677_);
lean_dec_ref_known(v_a_1671_, 1);
v___x_1678_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35);
v___x_1679_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1678_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1679_) == 0)
{
lean_object* v___x_1680_; 
lean_dec_ref_known(v___x_1679_, 1);
v___x_1680_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_1308_, v_val_1677_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1680_;
goto v___jp_1576_;
}
else
{
lean_dec(v_val_1677_);
lean_dec(v_declName_1308_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1679_;
goto v___jp_1576_;
}
}
}
else
{
lean_object* v___x_1681_; lean_object* v___x_1683_; 
lean_dec(v_a_1671_);
lean_dec(v_declName_1308_);
v___x_1681_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12);
if (v_isShared_1674_ == 0)
{
lean_ctor_set_tag(v___x_1673_, 1);
lean_ctor_set(v___x_1673_, 0, v_mvarId_1309_);
v___x_1683_ = v___x_1673_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v_mvarId_1309_);
v___x_1683_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
lean_object* v___x_1685_; 
if (v_isShared_1648_ == 0)
{
lean_ctor_set_tag(v___x_1647_, 7);
lean_ctor_set(v___x_1647_, 1, v___x_1683_);
lean_ctor_set(v___x_1647_, 0, v___x_1681_);
v___x_1685_ = v___x_1647_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___x_1681_);
lean_ctor_set(v_reuseFailAlloc_1687_, 1, v___x_1683_);
v___x_1685_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
lean_object* v___x_1686_; 
v___x_1686_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_1685_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1686_;
goto v___jp_1576_;
}
}
}
}
}
else
{
lean_object* v_a_1690_; 
lean_del_object(v___x_1647_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1690_ = lean_ctor_get(v___x_1670_, 0);
lean_inc(v_a_1690_);
lean_dec_ref_known(v___x_1670_, 1);
v___y_1572_ = v_a_1584_;
v___y_1573_ = v___x_1587_;
v_a_1574_ = v_a_1690_;
goto v___jp_1571_;
}
}
}
else
{
lean_object* v_a_1691_; 
lean_del_object(v___x_1647_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1691_ = lean_ctor_get(v___x_1660_, 0);
lean_inc(v_a_1691_);
lean_dec_ref_known(v___x_1660_, 1);
v___y_1572_ = v_a_1584_;
v___y_1573_ = v___x_1587_;
v_a_1574_ = v_a_1691_;
goto v___jp_1571_;
}
}
}
else
{
lean_object* v_a_1692_; 
lean_del_object(v___x_1647_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1692_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1692_);
lean_dec_ref_known(v___x_1652_, 1);
v___y_1572_ = v_a_1584_;
v___y_1573_ = v___x_1587_;
v_a_1574_ = v_a_1692_;
goto v___jp_1571_;
}
}
default: 
{
lean_del_object(v___x_1647_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_mvarId_1693_; lean_object* v___x_1694_; 
v_mvarId_1693_ = lean_ctor_get(v_fst_1645_, 0);
lean_inc(v_mvarId_1693_);
lean_dec_ref_known(v_fst_1645_, 1);
v___x_1694_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_mvarId_1693_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1694_;
goto v___jp_1576_;
}
else
{
lean_object* v_mvarId_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
v_mvarId_1695_ = lean_ctor_get(v_fst_1645_, 0);
lean_inc(v_mvarId_1695_);
lean_dec_ref_known(v_fst_1645_, 1);
v___x_1696_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37);
v___x_1697_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1696_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v___x_1698_; 
lean_dec_ref_known(v___x_1697_, 1);
v___x_1698_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_mvarId_1695_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1698_;
goto v___jp_1576_;
}
else
{
lean_dec(v_mvarId_1695_);
lean_dec(v_declName_1308_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1697_;
goto v___jp_1576_;
}
}
}
}
}
}
else
{
lean_object* v_a_1701_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1701_ = lean_ctor_get(v___x_1643_, 0);
lean_inc(v_a_1701_);
lean_dec_ref_known(v___x_1643_, 1);
v___y_1572_ = v_a_1584_;
v___y_1573_ = v___x_1587_;
v_a_1574_ = v_a_1701_;
goto v___jp_1571_;
}
}
else
{
lean_object* v_a_1702_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1702_ = lean_ctor_get(v___x_1640_, 0);
lean_inc(v_a_1702_);
lean_dec_ref_known(v___x_1640_, 1);
v___y_1572_ = v_a_1584_;
v___y_1573_ = v___x_1587_;
v_a_1574_ = v_a_1702_;
goto v___jp_1571_;
}
}
}
else
{
lean_object* v_a_1703_; 
lean_dec(v_a_1592_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1703_ = lean_ctor_get(v___x_1610_, 0);
lean_inc(v_a_1703_);
lean_dec_ref_known(v___x_1610_, 1);
v___y_1572_ = v_a_1584_;
v___y_1573_ = v___x_1587_;
v_a_1574_ = v_a_1703_;
goto v___jp_1571_;
}
}
}
else
{
lean_object* v_a_1704_; 
lean_dec(v_a_1592_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1704_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1704_);
lean_dec_ref_known(v___x_1602_, 1);
v___y_1572_ = v_a_1584_;
v___y_1573_ = v___x_1587_;
v_a_1574_ = v_a_1704_;
goto v___jp_1571_;
}
}
}
else
{
lean_object* v_a_1705_; 
lean_dec(v_a_1592_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1705_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_a_1705_);
lean_dec_ref_known(v___x_1594_, 1);
v___y_1572_ = v_a_1584_;
v___y_1573_ = v___x_1587_;
v_a_1574_ = v_a_1705_;
goto v___jp_1571_;
}
}
else
{
lean_dec(v_a_1592_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1706_ = lean_box(0);
v___x_1707_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v___x_1706_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1707_;
goto v___jp_1576_;
}
else
{
lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1708_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__39, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__39_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__39);
v___x_1709_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1708_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v_a_1710_; lean_object* v___x_1711_; 
v_a_1710_ = lean_ctor_get(v___x_1709_, 0);
lean_inc(v_a_1710_);
lean_dec_ref_known(v___x_1709_, 1);
v___x_1711_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v_a_1710_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1711_;
goto v___jp_1576_;
}
else
{
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1709_;
goto v___jp_1576_;
}
}
}
}
else
{
lean_object* v_a_1712_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1712_ = lean_ctor_get(v___x_1591_, 0);
lean_inc(v_a_1712_);
lean_dec_ref_known(v___x_1591_, 1);
v___y_1572_ = v_a_1584_;
v___y_1573_ = v___x_1587_;
v_a_1574_ = v_a_1712_;
goto v___jp_1571_;
}
}
else
{
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1713_ = lean_box(0);
v___x_1714_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v___x_1713_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1714_;
goto v___jp_1576_;
}
else
{
lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1715_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__41, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__41_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__41);
v___x_1716_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1715_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1716_) == 0)
{
lean_object* v_a_1717_; lean_object* v___x_1718_; 
v_a_1717_ = lean_ctor_get(v___x_1716_, 0);
lean_inc(v_a_1717_);
lean_dec_ref_known(v___x_1716_, 1);
v___x_1718_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v_a_1717_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1718_;
goto v___jp_1576_;
}
else
{
v___y_1577_ = v_a_1584_;
v___y_1578_ = v___x_1587_;
v___y_1579_ = v___x_1716_;
goto v___jp_1576_;
}
}
}
}
else
{
lean_object* v_a_1719_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1719_ = lean_ctor_get(v___x_1588_, 0);
lean_inc(v_a_1719_);
lean_dec_ref_known(v___x_1588_, 1);
v___y_1572_ = v_a_1584_;
v___y_1573_ = v___x_1587_;
v_a_1574_ = v_a_1719_;
goto v___jp_1571_;
}
}
else
{
lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1720_ = lean_io_get_num_heartbeats();
lean_inc(v_mvarId_1309_);
v___x_1721_ = l_Lean_Elab_Eqns_tryURefl(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1721_) == 0)
{
lean_object* v_a_1722_; uint8_t v___x_1723_; 
v_a_1722_ = lean_ctor_get(v___x_1721_, 0);
lean_inc(v_a_1722_);
lean_dec_ref_known(v___x_1721_, 1);
v___x_1723_ = lean_unbox(v_a_1722_);
lean_dec(v_a_1722_);
if (v___x_1723_ == 0)
{
lean_object* v___x_1724_; 
lean_inc(v_mvarId_1309_);
v___x_1724_ = l_Lean_Elab_Eqns_tryContradiction(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1724_) == 0)
{
lean_object* v_a_1725_; uint8_t v___x_1726_; 
v_a_1725_ = lean_ctor_get(v___x_1724_, 0);
lean_inc(v_a_1725_);
lean_dec_ref_known(v___x_1724_, 1);
v___x_1726_ = lean_unbox(v_a_1725_);
if (v___x_1726_ == 0)
{
lean_object* v___x_1727_; 
lean_inc(v_mvarId_1309_);
v___x_1727_ = l_Lean_Elab_Eqns_whnfReducibleLHS_x3f(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_object* v_a_1728_; 
v_a_1728_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_a_1728_);
lean_dec_ref_known(v___x_1727_, 1);
if (lean_obj_tag(v_a_1728_) == 1)
{
lean_dec(v_a_1725_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1729_; lean_object* v___x_1730_; 
v_val_1729_ = lean_ctor_get(v_a_1728_, 0);
lean_inc(v_val_1729_);
lean_dec_ref_known(v_a_1728_, 1);
v___x_1730_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1729_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1730_;
goto v___jp_1545_;
}
else
{
lean_object* v_val_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v_val_1731_ = lean_ctor_get(v_a_1728_, 0);
lean_inc(v_val_1731_);
lean_dec_ref_known(v_a_1728_, 1);
v___x_1732_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23);
v___x_1733_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1732_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_object* v___x_1734_; 
lean_dec_ref_known(v___x_1733_, 1);
v___x_1734_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1731_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1734_;
goto v___jp_1545_;
}
else
{
lean_dec(v_val_1731_);
lean_dec(v_declName_1308_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1733_;
goto v___jp_1545_;
}
}
}
else
{
lean_object* v___x_1735_; 
lean_dec(v_a_1728_);
lean_inc(v_mvarId_1309_);
v___x_1735_ = l_Lean_Elab_Eqns_simpMatch_x3f(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1736_);
lean_dec_ref_known(v___x_1735_, 1);
if (lean_obj_tag(v_a_1736_) == 1)
{
lean_dec(v_a_1725_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1737_; lean_object* v___x_1738_; 
v_val_1737_ = lean_ctor_get(v_a_1736_, 0);
lean_inc(v_val_1737_);
lean_dec_ref_known(v_a_1736_, 1);
v___x_1738_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1737_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1738_;
goto v___jp_1545_;
}
else
{
lean_object* v_val_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; 
v_val_1739_ = lean_ctor_get(v_a_1736_, 0);
lean_inc(v_val_1739_);
lean_dec_ref_known(v_a_1736_, 1);
v___x_1740_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25);
v___x_1741_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1740_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v___x_1742_; 
lean_dec_ref_known(v___x_1741_, 1);
v___x_1742_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1739_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1742_;
goto v___jp_1545_;
}
else
{
lean_dec(v_val_1739_);
lean_dec(v_declName_1308_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1741_;
goto v___jp_1545_;
}
}
}
else
{
lean_object* v___x_1743_; 
lean_dec(v_a_1736_);
lean_inc(v_mvarId_1309_);
v___x_1743_ = l_Lean_Elab_Eqns_simpIf_x3f(v_mvarId_1309_, v___x_1586_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1743_) == 0)
{
lean_object* v_a_1744_; 
v_a_1744_ = lean_ctor_get(v___x_1743_, 0);
lean_inc(v_a_1744_);
lean_dec_ref_known(v___x_1743_, 1);
if (lean_obj_tag(v_a_1744_) == 1)
{
lean_dec(v_a_1725_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1745_; lean_object* v___x_1746_; 
v_val_1745_ = lean_ctor_get(v_a_1744_, 0);
lean_inc(v_val_1745_);
lean_dec_ref_known(v_a_1744_, 1);
v___x_1746_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1745_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1746_;
goto v___jp_1545_;
}
else
{
lean_object* v_val_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
v_val_1747_ = lean_ctor_get(v_a_1744_, 0);
lean_inc(v_val_1747_);
lean_dec_ref_known(v_a_1744_, 1);
v___x_1748_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27);
v___x_1749_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1748_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1749_) == 0)
{
lean_object* v___x_1750_; 
lean_dec_ref_known(v___x_1749_, 1);
v___x_1750_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1747_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1750_;
goto v___jp_1545_;
}
else
{
lean_dec(v_val_1747_);
lean_dec(v_declName_1308_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1749_;
goto v___jp_1545_;
}
}
}
else
{
lean_object* v___x_1751_; lean_object* v___x_1752_; uint8_t v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; uint8_t v___x_1756_; uint8_t v___x_1757_; uint8_t v___x_1758_; uint8_t v___x_1759_; uint8_t v___x_1760_; uint8_t v___x_1761_; uint8_t v___x_1762_; uint8_t v___x_1763_; uint8_t v___x_1764_; uint8_t v___x_1765_; uint8_t v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
lean_dec(v_a_1744_);
v___x_1751_ = lean_unsigned_to_nat(100000u);
v___x_1752_ = lean_unsigned_to_nat(2u);
v___x_1753_ = 0;
v___x_1754_ = lean_box(0);
v___x_1755_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_1755_, 0, v___x_1751_);
lean_ctor_set(v___x_1755_, 1, v___x_1752_);
lean_ctor_set(v___x_1755_, 2, v___x_1754_);
v___x_1756_ = lean_unbox(v_a_1725_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3, v___x_1756_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 1, v___x_1586_);
v___x_1757_ = lean_unbox(v_a_1725_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 2, v___x_1757_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 3, v___x_1586_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 4, v___x_1586_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 5, v___x_1586_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 6, v___x_1753_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 7, v___x_1586_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 8, v___x_1586_);
v___x_1758_ = lean_unbox(v_a_1725_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 9, v___x_1758_);
v___x_1759_ = lean_unbox(v_a_1725_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 10, v___x_1759_);
v___x_1760_ = lean_unbox(v_a_1725_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 11, v___x_1760_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 12, v___x_1586_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 13, v___x_1586_);
v___x_1761_ = lean_unbox(v_a_1725_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 14, v___x_1761_);
v___x_1762_ = lean_unbox(v_a_1725_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 15, v___x_1762_);
v___x_1763_ = lean_unbox(v_a_1725_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 16, v___x_1763_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 17, v___x_1586_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 18, v___x_1586_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 19, v___x_1586_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 20, v___x_1586_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 21, v___x_1586_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 22, v___x_1586_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 23, v___x_1586_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 24, v___x_1586_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 25, v___x_1586_);
v___x_1764_ = lean_unbox(v_a_1725_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 26, v___x_1764_);
v___x_1765_ = lean_unbox(v_a_1725_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 27, v___x_1765_);
v___x_1766_ = lean_unbox(v_a_1725_);
lean_dec(v_a_1725_);
lean_ctor_set_uint8(v___x_1755_, sizeof(void*)*3 + 28, v___x_1766_);
v___x_1767_ = lean_unsigned_to_nat(0u);
v___x_1768_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0));
v___x_1769_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2);
v___x_1770_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4);
v___x_1771_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1771_, 0, v___x_1769_);
lean_ctor_set(v___x_1771_, 1, v___x_1770_);
lean_ctor_set_uint8(v___x_1771_, sizeof(void*)*2, v___x_1586_);
v___x_1772_ = l_Lean_Options_empty;
v___x_1773_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_1755_, v___x_1768_, v___x_1771_, v___x_1772_, v_a_1310_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1773_) == 0)
{
lean_object* v_a_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v_a_1774_ = lean_ctor_get(v___x_1773_, 0);
lean_inc(v_a_1774_);
lean_dec_ref_known(v___x_1773_, 1);
v___x_1775_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10);
lean_inc(v_mvarId_1309_);
v___x_1776_ = l_Lean_Meta_simpTargetStar(v_mvarId_1309_, v_a_1774_, v___x_1768_, v___x_1754_, v___x_1775_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v_a_1777_; lean_object* v_fst_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1832_; 
v_a_1777_ = lean_ctor_get(v___x_1776_, 0);
lean_inc(v_a_1777_);
lean_dec_ref_known(v___x_1776_, 1);
v_fst_1778_ = lean_ctor_get(v_a_1777_, 0);
v_isSharedCheck_1832_ = !lean_is_exclusive(v_a_1777_);
if (v_isSharedCheck_1832_ == 0)
{
lean_object* v_unused_1833_; 
v_unused_1833_ = lean_ctor_get(v_a_1777_, 1);
lean_dec(v_unused_1833_);
v___x_1780_ = v_a_1777_;
v_isShared_1781_ = v_isSharedCheck_1832_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_fst_1778_);
lean_dec(v_a_1777_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1832_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
switch(lean_obj_tag(v_fst_1778_))
{
case 0:
{
lean_del_object(v___x_1780_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1782_; 
v___x_1782_ = lean_box(0);
v___y_1541_ = v_a_1584_;
v___y_1542_ = v___x_1720_;
v_a_1543_ = v___x_1782_;
goto v___jp_1540_;
}
else
{
lean_object* v___x_1783_; lean_object* v___x_1784_; 
v___x_1783_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29);
v___x_1784_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1783_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1784_;
goto v___jp_1545_;
}
}
case 1:
{
lean_object* v___x_1785_; 
lean_inc(v_declName_1308_);
lean_inc(v_mvarId_1309_);
v___x_1785_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f(v_mvarId_1309_, v_declName_1308_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1785_) == 0)
{
lean_object* v_a_1786_; 
v_a_1786_ = lean_ctor_get(v___x_1785_, 0);
lean_inc(v_a_1786_);
lean_dec_ref_known(v___x_1785_, 1);
if (lean_obj_tag(v_a_1786_) == 1)
{
lean_del_object(v___x_1780_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1787_; lean_object* v___x_1788_; 
v_val_1787_ = lean_ctor_get(v_a_1786_, 0);
lean_inc(v_val_1787_);
lean_dec_ref_known(v_a_1786_, 1);
v___x_1788_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1787_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1788_;
goto v___jp_1545_;
}
else
{
lean_object* v_val_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v_val_1789_ = lean_ctor_get(v_a_1786_, 0);
lean_inc(v_val_1789_);
lean_dec_ref_known(v_a_1786_, 1);
v___x_1790_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31);
v___x_1791_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1790_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v___x_1792_; 
lean_dec_ref_known(v___x_1791_, 1);
v___x_1792_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_val_1789_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1792_;
goto v___jp_1545_;
}
else
{
lean_dec(v_val_1789_);
lean_dec(v_declName_1308_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1791_;
goto v___jp_1545_;
}
}
}
else
{
lean_object* v___x_1793_; 
lean_dec(v_a_1786_);
lean_inc(v_mvarId_1309_);
v___x_1793_ = l_Lean_Meta_casesOnStuckLHS_x3f(v_mvarId_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v_a_1794_; 
v_a_1794_ = lean_ctor_get(v___x_1793_, 0);
lean_inc(v_a_1794_);
lean_dec_ref_known(v___x_1793_, 1);
if (lean_obj_tag(v_a_1794_) == 1)
{
lean_del_object(v___x_1780_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v_val_1795_ = lean_ctor_get(v_a_1794_, 0);
lean_inc(v_val_1795_);
lean_dec_ref_known(v_a_1794_, 1);
v___x_1796_ = lean_box(0);
v___x_1797_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5(v_val_1795_, v___x_1767_, v_declName_1308_, v___x_1796_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
lean_dec(v_val_1795_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1797_;
goto v___jp_1545_;
}
else
{
lean_object* v_val_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v_val_1798_ = lean_ctor_get(v_a_1794_, 0);
lean_inc(v_val_1798_);
lean_dec_ref_known(v_a_1794_, 1);
v___x_1799_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33);
v___x_1800_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1799_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1800_) == 0)
{
lean_object* v_a_1801_; lean_object* v___x_1802_; 
v_a_1801_ = lean_ctor_get(v___x_1800_, 0);
lean_inc(v_a_1801_);
lean_dec_ref_known(v___x_1800_, 1);
v___x_1802_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5(v_val_1798_, v___x_1767_, v_declName_1308_, v_a_1801_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
lean_dec(v_val_1798_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1802_;
goto v___jp_1545_;
}
else
{
lean_dec(v_val_1798_);
lean_dec(v_declName_1308_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1800_;
goto v___jp_1545_;
}
}
}
else
{
lean_object* v___x_1803_; 
lean_dec(v_a_1794_);
lean_inc(v_mvarId_1309_);
v___x_1803_ = l_Lean_Meta_splitTarget_x3f(v_mvarId_1309_, v___x_1586_, v___x_1586_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1822_; 
v_a_1804_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1822_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1822_ == 0)
{
v___x_1806_ = v___x_1803_;
v_isShared_1807_ = v_isSharedCheck_1822_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1803_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1822_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
if (lean_obj_tag(v_a_1804_) == 1)
{
lean_del_object(v___x_1806_);
lean_del_object(v___x_1780_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_val_1808_; lean_object* v___x_1809_; 
v_val_1808_ = lean_ctor_get(v_a_1804_, 0);
lean_inc(v_val_1808_);
lean_dec_ref_known(v_a_1804_, 1);
v___x_1809_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_1308_, v_val_1808_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1809_;
goto v___jp_1545_;
}
else
{
lean_object* v_val_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
v_val_1810_ = lean_ctor_get(v_a_1804_, 0);
lean_inc(v_val_1810_);
lean_dec_ref_known(v_a_1804_, 1);
v___x_1811_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35);
v___x_1812_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1811_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1812_) == 0)
{
lean_object* v___x_1813_; 
lean_dec_ref_known(v___x_1812_, 1);
v___x_1813_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_1308_, v_val_1810_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1813_;
goto v___jp_1545_;
}
else
{
lean_dec(v_val_1810_);
lean_dec(v_declName_1308_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1812_;
goto v___jp_1545_;
}
}
}
else
{
lean_object* v___x_1814_; lean_object* v___x_1816_; 
lean_dec(v_a_1804_);
lean_dec(v_declName_1308_);
v___x_1814_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12);
if (v_isShared_1807_ == 0)
{
lean_ctor_set_tag(v___x_1806_, 1);
lean_ctor_set(v___x_1806_, 0, v_mvarId_1309_);
v___x_1816_ = v___x_1806_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v_mvarId_1309_);
v___x_1816_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
lean_object* v___x_1818_; 
if (v_isShared_1781_ == 0)
{
lean_ctor_set_tag(v___x_1780_, 7);
lean_ctor_set(v___x_1780_, 1, v___x_1816_);
lean_ctor_set(v___x_1780_, 0, v___x_1814_);
v___x_1818_ = v___x_1780_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v___x_1814_);
lean_ctor_set(v_reuseFailAlloc_1820_, 1, v___x_1816_);
v___x_1818_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
lean_object* v___x_1819_; 
v___x_1819_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_1818_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1819_;
goto v___jp_1545_;
}
}
}
}
}
else
{
lean_object* v_a_1823_; 
lean_del_object(v___x_1780_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1823_ = lean_ctor_get(v___x_1803_, 0);
lean_inc(v_a_1823_);
lean_dec_ref_known(v___x_1803_, 1);
v___y_1536_ = v_a_1584_;
v___y_1537_ = v___x_1720_;
v_a_1538_ = v_a_1823_;
goto v___jp_1535_;
}
}
}
else
{
lean_object* v_a_1824_; 
lean_del_object(v___x_1780_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1824_ = lean_ctor_get(v___x_1793_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1793_, 1);
v___y_1536_ = v_a_1584_;
v___y_1537_ = v___x_1720_;
v_a_1538_ = v_a_1824_;
goto v___jp_1535_;
}
}
}
else
{
lean_object* v_a_1825_; 
lean_del_object(v___x_1780_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1825_ = lean_ctor_get(v___x_1785_, 0);
lean_inc(v_a_1825_);
lean_dec_ref_known(v___x_1785_, 1);
v___y_1536_ = v_a_1584_;
v___y_1537_ = v___x_1720_;
v_a_1538_ = v_a_1825_;
goto v___jp_1535_;
}
}
default: 
{
lean_del_object(v___x_1780_);
lean_dec(v_mvarId_1309_);
if (v___x_1522_ == 0)
{
lean_object* v_mvarId_1826_; lean_object* v___x_1827_; 
v_mvarId_1826_ = lean_ctor_get(v_fst_1778_, 0);
lean_inc(v_mvarId_1826_);
lean_dec_ref_known(v_fst_1778_, 1);
v___x_1827_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_mvarId_1826_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1827_;
goto v___jp_1545_;
}
else
{
lean_object* v_mvarId_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
v_mvarId_1828_ = lean_ctor_get(v_fst_1778_, 0);
lean_inc(v_mvarId_1828_);
lean_dec_ref_known(v_fst_1778_, 1);
v___x_1829_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37);
v___x_1830_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1829_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v___x_1831_; 
lean_dec_ref_known(v___x_1830_, 1);
v___x_1831_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1308_, v_mvarId_1828_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1831_;
goto v___jp_1545_;
}
else
{
lean_dec(v_mvarId_1828_);
lean_dec(v_declName_1308_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1830_;
goto v___jp_1545_;
}
}
}
}
}
}
else
{
lean_object* v_a_1834_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1834_ = lean_ctor_get(v___x_1776_, 0);
lean_inc(v_a_1834_);
lean_dec_ref_known(v___x_1776_, 1);
v___y_1536_ = v_a_1584_;
v___y_1537_ = v___x_1720_;
v_a_1538_ = v_a_1834_;
goto v___jp_1535_;
}
}
else
{
lean_object* v_a_1835_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1835_ = lean_ctor_get(v___x_1773_, 0);
lean_inc(v_a_1835_);
lean_dec_ref_known(v___x_1773_, 1);
v___y_1536_ = v_a_1584_;
v___y_1537_ = v___x_1720_;
v_a_1538_ = v_a_1835_;
goto v___jp_1535_;
}
}
}
else
{
lean_object* v_a_1836_; 
lean_dec(v_a_1725_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1836_ = lean_ctor_get(v___x_1743_, 0);
lean_inc(v_a_1836_);
lean_dec_ref_known(v___x_1743_, 1);
v___y_1536_ = v_a_1584_;
v___y_1537_ = v___x_1720_;
v_a_1538_ = v_a_1836_;
goto v___jp_1535_;
}
}
}
else
{
lean_object* v_a_1837_; 
lean_dec(v_a_1725_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1837_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1837_);
lean_dec_ref_known(v___x_1735_, 1);
v___y_1536_ = v_a_1584_;
v___y_1537_ = v___x_1720_;
v_a_1538_ = v_a_1837_;
goto v___jp_1535_;
}
}
}
else
{
lean_object* v_a_1838_; 
lean_dec(v_a_1725_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1838_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_a_1838_);
lean_dec_ref_known(v___x_1727_, 1);
v___y_1536_ = v_a_1584_;
v___y_1537_ = v___x_1720_;
v_a_1538_ = v_a_1838_;
goto v___jp_1535_;
}
}
else
{
lean_dec(v_a_1725_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1839_ = lean_box(0);
v___x_1840_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v___x_1839_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1840_;
goto v___jp_1545_;
}
else
{
lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1841_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__39, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__39_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__39);
v___x_1842_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1841_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v_a_1843_; lean_object* v___x_1844_; 
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
lean_inc(v_a_1843_);
lean_dec_ref_known(v___x_1842_, 1);
v___x_1844_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v_a_1843_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1844_;
goto v___jp_1545_;
}
else
{
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1842_;
goto v___jp_1545_;
}
}
}
}
else
{
lean_object* v_a_1845_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1845_ = lean_ctor_get(v___x_1724_, 0);
lean_inc(v_a_1845_);
lean_dec_ref_known(v___x_1724_, 1);
v___y_1536_ = v_a_1584_;
v___y_1537_ = v___x_1720_;
v_a_1538_ = v_a_1845_;
goto v___jp_1535_;
}
}
else
{
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1846_ = lean_box(0);
v___x_1847_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v___x_1846_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1847_;
goto v___jp_1545_;
}
else
{
lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1848_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__41, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__41_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__41);
v___x_1849_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_1519_, v___x_1848_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v_a_1850_; lean_object* v___x_1851_; 
v_a_1850_ = lean_ctor_get(v___x_1849_, 0);
lean_inc(v_a_1850_);
lean_dec_ref_known(v___x_1849_, 1);
v___x_1851_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v_a_1850_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1851_;
goto v___jp_1545_;
}
else
{
v___y_1546_ = v_a_1584_;
v___y_1547_ = v___x_1720_;
v___y_1548_ = v___x_1849_;
goto v___jp_1545_;
}
}
}
}
else
{
lean_object* v_a_1852_; 
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1852_ = lean_ctor_get(v___x_1721_, 0);
lean_inc(v_a_1852_);
lean_dec_ref_known(v___x_1721_, 1);
v___y_1536_ = v_a_1584_;
v___y_1537_ = v___x_1720_;
v_a_1538_ = v_a_1852_;
goto v___jp_1535_;
}
}
}
else
{
lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1860_; 
lean_dec_ref(v___f_1518_);
lean_dec(v_mvarId_1309_);
lean_dec(v_declName_1308_);
v_a_1853_ = lean_ctor_get(v___x_1583_, 0);
v_isSharedCheck_1860_ = !lean_is_exclusive(v___x_1583_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1855_ = v___x_1583_;
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1583_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1858_; 
if (v_isShared_1856_ == 0)
{
v___x_1858_ = v___x_1855_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v_a_1853_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
}
}
}
}
}
v___jp_1315_:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1316_ = lean_box(0);
v___x_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
return v___x_1317_;
}
v___jp_1318_:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = lean_box(0);
v___x_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1319_);
return v___x_1320_;
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(lean_object* v_declName_2078_, lean_object* v_as_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_){
_start:
{
if (lean_obj_tag(v_as_2079_) == 0)
{
lean_object* v___x_2085_; lean_object* v___x_2086_; 
lean_dec(v_declName_2078_);
v___x_2085_ = lean_box(0);
v___x_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2085_);
return v___x_2086_;
}
else
{
lean_object* v_head_2087_; lean_object* v_tail_2088_; lean_object* v___x_2089_; 
v_head_2087_ = lean_ctor_get(v_as_2079_, 0);
lean_inc(v_head_2087_);
v_tail_2088_ = lean_ctor_get(v_as_2079_, 1);
lean_inc(v_tail_2088_);
lean_dec_ref_known(v_as_2079_, 2);
lean_inc(v_declName_2078_);
v___x_2089_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_2078_, v_head_2087_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_dec_ref_known(v___x_2089_, 1);
v_as_2079_ = v_tail_2088_;
goto _start;
}
else
{
lean_dec(v_tail_2088_);
lean_dec(v_declName_2078_);
return v___x_2089_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2___boxed(lean_object* v_declName_2091_, lean_object* v_as_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_){
_start:
{
lean_object* v_res_2098_; 
v_res_2098_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_2091_, v_as_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_);
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v___y_2094_);
lean_dec_ref(v___y_2093_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___boxed(lean_object* v_declName_2099_, lean_object* v_as_2100_, lean_object* v_i_2101_, lean_object* v_stop_2102_, lean_object* v_b_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_){
_start:
{
size_t v_i_boxed_2109_; size_t v_stop_boxed_2110_; lean_object* v_res_2111_; 
v_i_boxed_2109_ = lean_unbox_usize(v_i_2101_);
lean_dec(v_i_2101_);
v_stop_boxed_2110_ = lean_unbox_usize(v_stop_2102_);
lean_dec(v_stop_2102_);
v_res_2111_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_declName_2099_, v_as_2100_, v_i_boxed_2109_, v_stop_boxed_2110_, v_b_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_);
lean_dec(v___y_2107_);
lean_dec_ref(v___y_2106_);
lean_dec(v___y_2105_);
lean_dec_ref(v___y_2104_);
lean_dec_ref(v_as_2100_);
return v_res_2111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5___boxed(lean_object* v_val_2112_, lean_object* v___x_2113_, lean_object* v_declName_2114_, lean_object* v_____r_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_){
_start:
{
lean_object* v_res_2121_; 
v_res_2121_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5(v_val_2112_, v___x_2113_, v_declName_2114_, v_____r_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_);
lean_dec(v___y_2119_);
lean_dec_ref(v___y_2118_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___x_2113_);
lean_dec_ref(v_val_2112_);
return v_res_2121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___boxed(lean_object* v_declName_2122_, lean_object* v_mvarId_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_){
_start:
{
lean_object* v_res_2129_; 
v_res_2129_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_2122_, v_mvarId_2123_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_);
lean_dec(v_a_2127_);
lean_dec_ref(v_a_2126_);
lean_dec(v_a_2125_);
lean_dec_ref(v_a_2124_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6(lean_object* v_00_u03b1_2130_, lean_object* v_x_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
lean_object* v___x_2137_; 
v___x_2137_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6___redArg(v_x_2131_);
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6___boxed(lean_object* v_00_u03b1_2138_, lean_object* v_x_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6(v_00_u03b1_2138_, v_x_2139_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_);
lean_dec(v___y_2143_);
lean_dec_ref(v___y_2142_);
lean_dec(v___y_2141_);
lean_dec_ref(v___y_2140_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___redArg(lean_object* v_constName_2146_, uint8_t v_skipRealize_2147_, lean_object* v___y_2148_){
_start:
{
lean_object* v___x_2150_; lean_object* v_env_2151_; uint8_t v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2150_ = lean_st_ref_get(v___y_2148_);
v_env_2151_ = lean_ctor_get(v___x_2150_, 0);
lean_inc_ref(v_env_2151_);
lean_dec(v___x_2150_);
v___x_2152_ = l_Lean_Environment_contains(v_env_2151_, v_constName_2146_, v_skipRealize_2147_);
v___x_2153_ = lean_box(v___x_2152_);
v___x_2154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2153_);
return v___x_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___redArg___boxed(lean_object* v_constName_2155_, lean_object* v_skipRealize_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
uint8_t v_skipRealize_boxed_2159_; lean_object* v_res_2160_; 
v_skipRealize_boxed_2159_ = lean_unbox(v_skipRealize_2156_);
v_res_2160_ = l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___redArg(v_constName_2155_, v_skipRealize_boxed_2159_, v___y_2157_);
lean_dec(v___y_2157_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0(lean_object* v_constName_2161_, uint8_t v_skipRealize_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_){
_start:
{
lean_object* v___x_2168_; 
v___x_2168_ = l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___redArg(v_constName_2161_, v_skipRealize_2162_, v___y_2166_);
return v___x_2168_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___boxed(lean_object* v_constName_2169_, lean_object* v_skipRealize_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_){
_start:
{
uint8_t v_skipRealize_boxed_2176_; lean_object* v_res_2177_; 
v_skipRealize_boxed_2176_ = lean_unbox(v_skipRealize_2170_);
v_res_2177_ = l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0(v_constName_2169_, v_skipRealize_boxed_2176_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_);
lean_dec(v___y_2174_);
lean_dec_ref(v___y_2173_);
lean_dec(v___y_2172_);
lean_dec_ref(v___y_2171_);
return v_res_2177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__0(lean_object* v_snd_2178_, lean_object* v___x_2179_, lean_object* v___x_2180_, lean_object* v_snd_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_){
_start:
{
lean_object* v___x_2187_; 
lean_inc_ref(v_snd_2178_);
v___x_2187_ = l_Lean_Meta_mkCongrArg(v_snd_2178_, v___x_2179_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_);
if (lean_obj_tag(v___x_2187_) == 0)
{
lean_object* v_a_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; 
v_a_2188_ = lean_ctor_get(v___x_2187_, 0);
lean_inc(v_a_2188_);
lean_dec_ref_known(v___x_2187_, 1);
v___x_2189_ = l_Lean_Expr_app___override(v_snd_2178_, v___x_2180_);
v___x_2190_ = l_Lean_MVarId_replaceTargetEq(v_snd_2181_, v___x_2189_, v_a_2188_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_);
return v___x_2190_;
}
else
{
lean_object* v_a_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2198_; 
lean_dec(v_snd_2181_);
lean_dec_ref(v___x_2180_);
lean_dec_ref(v_snd_2178_);
v_a_2191_ = lean_ctor_get(v___x_2187_, 0);
v_isSharedCheck_2198_ = !lean_is_exclusive(v___x_2187_);
if (v_isSharedCheck_2198_ == 0)
{
v___x_2193_ = v___x_2187_;
v_isShared_2194_ = v_isSharedCheck_2198_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_a_2191_);
lean_dec(v___x_2187_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2198_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2196_; 
if (v_isShared_2194_ == 0)
{
v___x_2196_ = v___x_2193_;
goto v_reusejp_2195_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v_a_2191_);
v___x_2196_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2195_;
}
v_reusejp_2195_:
{
return v___x_2196_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__0___boxed(lean_object* v_snd_2199_, lean_object* v___x_2200_, lean_object* v___x_2201_, lean_object* v_snd_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_){
_start:
{
lean_object* v_res_2208_; 
v_res_2208_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__0(v_snd_2199_, v___x_2200_, v___x_2201_, v_snd_2202_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_);
lean_dec(v___y_2206_);
lean_dec_ref(v___y_2205_);
lean_dec(v___y_2204_);
lean_dec_ref(v___y_2203_);
return v_res_2208_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__4(void){
_start:
{
lean_object* v___x_2214_; lean_object* v___x_2215_; 
v___x_2214_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__3));
v___x_2215_ = l_Lean_stringToMessageData(v___x_2214_);
return v___x_2215_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__6(void){
_start:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; 
v___x_2217_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__5));
v___x_2218_ = l_Lean_stringToMessageData(v___x_2217_);
return v___x_2218_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__8(void){
_start:
{
lean_object* v___x_2220_; lean_object* v___x_2221_; 
v___x_2220_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__7));
v___x_2221_ = l_Lean_stringToMessageData(v___x_2220_);
return v___x_2221_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__10(void){
_start:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2223_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__9));
v___x_2224_ = l_Lean_stringToMessageData(v___x_2223_);
return v___x_2224_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__12(void){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2226_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__11));
v___x_2227_ = l_Lean_stringToMessageData(v___x_2226_);
return v___x_2227_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__14(void){
_start:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2229_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__13));
v___x_2230_ = l_Lean_stringToMessageData(v___x_2229_);
return v___x_2230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1(lean_object* v_mvarId_2231_, lean_object* v___x_2232_, lean_object* v_cls_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_){
_start:
{
lean_object* v___x_2239_; 
lean_inc(v_mvarId_2231_);
v___x_2239_ = l_Lean_MVarId_getType(v_mvarId_2231_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_);
if (lean_obj_tag(v___x_2239_) == 0)
{
lean_object* v_a_2240_; lean_object* v___x_2241_; 
v_a_2240_ = lean_ctor_get(v___x_2239_, 0);
lean_inc(v_a_2240_);
lean_dec_ref_known(v___x_2239_, 1);
v___x_2241_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS(v_a_2240_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_);
if (lean_obj_tag(v___x_2241_) == 0)
{
lean_object* v_a_2242_; lean_object* v_fst_2243_; lean_object* v_snd_2244_; lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2398_; 
v_a_2242_ = lean_ctor_get(v___x_2241_, 0);
lean_inc(v_a_2242_);
lean_dec_ref_known(v___x_2241_, 1);
v_fst_2243_ = lean_ctor_get(v_a_2242_, 0);
v_snd_2244_ = lean_ctor_get(v_a_2242_, 1);
v_isSharedCheck_2398_ = !lean_is_exclusive(v_a_2242_);
if (v_isSharedCheck_2398_ == 0)
{
v___x_2246_ = v_a_2242_;
v_isShared_2247_ = v_isSharedCheck_2398_;
goto v_resetjp_2245_;
}
else
{
lean_inc(v_snd_2244_);
lean_inc(v_fst_2243_);
lean_dec(v_a_2242_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2398_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v_dummy_2253_; lean_object* v_nargs_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___y_2260_; lean_object* v___y_2261_; lean_object* v___y_2262_; uint8_t v___y_2263_; lean_object* v___y_2264_; lean_object* v___y_2265_; lean_object* v___y_2266_; lean_object* v___y_2267_; lean_object* v___y_2300_; lean_object* v___y_2301_; lean_object* v___y_2302_; lean_object* v___y_2303_; uint8_t v___x_2372_; lean_object* v___x_2373_; lean_object* v_a_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2397_; 
v___x_2248_ = l_Lean_Expr_getAppFn(v_fst_2243_);
v___x_2249_ = l_Lean_Expr_constName_x21(v___x_2248_);
v___x_2250_ = l_Lean_Expr_constLevels_x21(v___x_2248_);
lean_dec_ref(v___x_2248_);
v___x_2251_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__0));
v___x_2252_ = l_Lean_Name_str___override(v___x_2249_, v___x_2251_);
v_dummy_2253_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__1);
v_nargs_2254_ = l_Lean_Expr_getAppNumArgs(v_fst_2243_);
lean_inc(v_nargs_2254_);
v___x_2255_ = lean_mk_array(v_nargs_2254_, v_dummy_2253_);
v___x_2256_ = lean_unsigned_to_nat(1u);
v___x_2257_ = lean_nat_sub(v_nargs_2254_, v___x_2256_);
lean_dec(v_nargs_2254_);
v___x_2258_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_fst_2243_, v___x_2255_, v___x_2257_);
v___x_2372_ = 1;
lean_inc(v___x_2252_);
v___x_2373_ = l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___redArg(v___x_2252_, v___x_2372_, v___y_2237_);
v_a_2374_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2376_ = v___x_2373_;
v_isShared_2377_ = v_isSharedCheck_2397_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_a_2374_);
lean_dec(v___x_2373_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2397_;
goto v_resetjp_2375_;
}
v___jp_2259_:
{
lean_object* v___x_2268_; 
lean_inc(v___y_2267_);
lean_inc_ref(v___y_2266_);
lean_inc(v___y_2265_);
lean_inc_ref(v___y_2264_);
lean_inc_ref(v___y_2262_);
v___x_2268_ = lean_infer_type(v___y_2262_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
if (lean_obj_tag(v___x_2268_) == 0)
{
lean_object* v_a_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v_a_2269_ = lean_ctor_get(v___x_2268_, 0);
lean_inc(v_a_2269_);
lean_dec_ref_known(v___x_2268_, 1);
v___x_2270_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__2));
v___x_2271_ = l_Lean_MVarId_define(v_mvarId_2231_, v___x_2270_, v_a_2269_, v___y_2262_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; lean_object* v___x_2273_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2271_, 1);
v___x_2273_ = l_Lean_Meta_intro1Core(v_a_2272_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v_a_2274_; lean_object* v_fst_2275_; lean_object* v_snd_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___f_2281_; lean_object* v___x_2282_; 
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_a_2274_);
lean_dec_ref_known(v___x_2273_, 1);
v_fst_2275_ = lean_ctor_get(v_a_2274_, 0);
lean_inc(v_fst_2275_);
v_snd_2276_ = lean_ctor_get(v_a_2274_, 1);
lean_inc_n(v_snd_2276_, 2);
lean_dec(v_a_2274_);
v___x_2277_ = l_Lean_Expr_appFn_x21(v___y_2261_);
lean_dec_ref(v___y_2261_);
v___x_2278_ = l_Lean_mkFVar(v_fst_2275_);
v___x_2279_ = l_Lean_Expr_app___override(v___x_2277_, v___x_2278_);
v___x_2280_ = l_Lean_mkAppN(v___y_2260_, v___x_2258_);
lean_dec_ref(v___x_2258_);
v___f_2281_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2281_, 0, v_snd_2244_);
lean_closure_set(v___f_2281_, 1, v___x_2280_);
lean_closure_set(v___f_2281_, 2, v___x_2279_);
lean_closure_set(v___f_2281_, 3, v_snd_2276_);
v___x_2282_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_snd_2276_, v___f_2281_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
lean_dec(v___y_2267_);
lean_dec_ref(v___y_2266_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
return v___x_2282_;
}
else
{
lean_object* v_a_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2290_; 
lean_dec(v___y_2267_);
lean_dec_ref(v___y_2266_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
lean_dec_ref(v___y_2261_);
lean_dec_ref(v___y_2260_);
lean_dec_ref(v___x_2258_);
lean_dec(v_snd_2244_);
v_a_2283_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2285_ = v___x_2273_;
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_a_2283_);
lean_dec(v___x_2273_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2288_; 
if (v_isShared_2286_ == 0)
{
v___x_2288_ = v___x_2285_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_a_2283_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
}
}
else
{
lean_dec(v___y_2267_);
lean_dec_ref(v___y_2266_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
lean_dec_ref(v___y_2261_);
lean_dec_ref(v___y_2260_);
lean_dec_ref(v___x_2258_);
lean_dec(v_snd_2244_);
return v___x_2271_;
}
}
else
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2298_; 
lean_dec(v___y_2267_);
lean_dec_ref(v___y_2266_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
lean_dec_ref(v___y_2262_);
lean_dec_ref(v___y_2261_);
lean_dec_ref(v___y_2260_);
lean_dec_ref(v___x_2258_);
lean_dec(v_snd_2244_);
lean_dec(v_mvarId_2231_);
v_a_2291_ = lean_ctor_get(v___x_2268_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2293_ = v___x_2268_;
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v___x_2268_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_a_2291_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
}
}
v___jp_2299_:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; 
lean_inc(v___x_2252_);
v___x_2304_ = l_Lean_mkConst(v___x_2252_, v___x_2250_);
lean_inc(v___y_2303_);
lean_inc_ref(v___y_2302_);
lean_inc(v___y_2301_);
lean_inc_ref(v___y_2300_);
lean_inc_ref(v___x_2304_);
v___x_2305_ = lean_infer_type(v___x_2304_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
if (lean_obj_tag(v___x_2305_) == 0)
{
lean_object* v_a_2306_; lean_object* v___x_2307_; 
v_a_2306_ = lean_ctor_get(v___x_2305_, 0);
lean_inc(v_a_2306_);
lean_dec_ref_known(v___x_2305_, 1);
v___x_2307_ = l_Lean_Meta_instantiateForall(v_a_2306_, v___x_2258_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
if (lean_obj_tag(v___x_2307_) == 0)
{
lean_object* v_a_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; uint8_t v___x_2311_; 
v_a_2308_ = lean_ctor_get(v___x_2307_, 0);
lean_inc(v_a_2308_);
lean_dec_ref_known(v___x_2307_, 1);
v___x_2309_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__1));
v___x_2310_ = lean_unsigned_to_nat(3u);
v___x_2311_ = l_Lean_Expr_isAppOfArity(v_a_2308_, v___x_2309_, v___x_2310_);
if (v___x_2311_ == 0)
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2315_; 
lean_dec(v_a_2308_);
lean_dec_ref(v___x_2304_);
lean_dec_ref(v___x_2258_);
lean_dec(v_snd_2244_);
lean_dec(v_cls_2233_);
v___x_2312_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__4);
v___x_2313_ = l_Lean_MessageData_ofName(v___x_2252_);
if (v_isShared_2247_ == 0)
{
lean_ctor_set_tag(v___x_2246_, 7);
lean_ctor_set(v___x_2246_, 1, v___x_2313_);
lean_ctor_set(v___x_2246_, 0, v___x_2312_);
v___x_2315_ = v___x_2246_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v___x_2312_);
lean_ctor_set(v_reuseFailAlloc_2321_, 1, v___x_2313_);
v___x_2315_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2316_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__6);
v___x_2317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2315_);
lean_ctor_set(v___x_2317_, 1, v___x_2316_);
v___x_2318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2318_, 0, v_mvarId_2231_);
v___x_2319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2317_);
lean_ctor_set(v___x_2319_, 1, v___x_2318_);
v___x_2320_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_2319_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
lean_dec(v___y_2303_);
lean_dec_ref(v___y_2302_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
return v___x_2320_;
}
}
else
{
lean_object* v_toCold_2322_; lean_object* v_options_2323_; lean_object* v_inheritedTraceOptions_2324_; uint8_t v_hasTrace_2325_; lean_object* v___x_2326_; lean_object* v_nargs_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; 
lean_dec(v___x_2252_);
v_toCold_2322_ = lean_ctor_get(v___y_2302_, 0);
v_options_2323_ = lean_ctor_get(v_toCold_2322_, 2);
v_inheritedTraceOptions_2324_ = lean_ctor_get(v_toCold_2322_, 11);
v_hasTrace_2325_ = lean_ctor_get_uint8(v_options_2323_, sizeof(void*)*1);
v___x_2326_ = l_Lean_Expr_appArg_x21(v_a_2308_);
lean_dec(v_a_2308_);
v_nargs_2327_ = l_Lean_Expr_getAppNumArgs(v___x_2326_);
lean_inc(v_nargs_2327_);
v___x_2328_ = lean_mk_array(v_nargs_2327_, v_dummy_2253_);
v___x_2329_ = lean_nat_sub(v_nargs_2327_, v___x_2256_);
lean_dec(v_nargs_2327_);
lean_inc_ref(v___x_2326_);
v___x_2330_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_2326_, v___x_2328_, v___x_2329_);
v___x_2331_ = lean_array_get_size(v___x_2330_);
v___x_2332_ = lean_nat_sub(v___x_2331_, v___x_2256_);
v___x_2333_ = lean_array_get(v___x_2232_, v___x_2330_, v___x_2332_);
lean_dec(v___x_2332_);
lean_dec_ref(v___x_2330_);
if (v_hasTrace_2325_ == 0)
{
lean_del_object(v___x_2246_);
lean_dec(v_cls_2233_);
v___y_2260_ = v___x_2304_;
v___y_2261_ = v___x_2326_;
v___y_2262_ = v___x_2333_;
v___y_2263_ = v___x_2311_;
v___y_2264_ = v___y_2300_;
v___y_2265_ = v___y_2301_;
v___y_2266_ = v___y_2302_;
v___y_2267_ = v___y_2303_;
goto v___jp_2259_;
}
else
{
lean_object* v___x_2334_; lean_object* v___x_2335_; uint8_t v___x_2336_; 
v___x_2334_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__19));
lean_inc(v_cls_2233_);
v___x_2335_ = l_Lean_Name_append(v___x_2334_, v_cls_2233_);
v___x_2336_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2324_, v_options_2323_, v___x_2335_);
lean_dec(v___x_2335_);
if (v___x_2336_ == 0)
{
lean_del_object(v___x_2246_);
lean_dec(v_cls_2233_);
v___y_2260_ = v___x_2304_;
v___y_2261_ = v___x_2326_;
v___y_2262_ = v___x_2333_;
v___y_2263_ = v___x_2311_;
v___y_2264_ = v___y_2300_;
v___y_2265_ = v___y_2301_;
v___y_2266_ = v___y_2302_;
v___y_2267_ = v___y_2303_;
goto v___jp_2259_;
}
else
{
lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2341_; 
v___x_2337_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__8);
v___x_2338_ = lean_unsigned_to_nat(30u);
lean_inc(v___x_2333_);
v___x_2339_ = l_Lean_inlineExpr(v___x_2333_, v___x_2338_);
if (v_isShared_2247_ == 0)
{
lean_ctor_set_tag(v___x_2246_, 7);
lean_ctor_set(v___x_2246_, 1, v___x_2339_);
lean_ctor_set(v___x_2246_, 0, v___x_2337_);
v___x_2341_ = v___x_2246_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v___x_2337_);
lean_ctor_set(v_reuseFailAlloc_2355_, 1, v___x_2339_);
v___x_2341_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; 
v___x_2342_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__10);
v___x_2343_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2343_, 0, v___x_2341_);
lean_ctor_set(v___x_2343_, 1, v___x_2342_);
lean_inc_ref(v___x_2326_);
v___x_2344_ = l_Lean_indentExpr(v___x_2326_);
v___x_2345_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2343_);
lean_ctor_set(v___x_2345_, 1, v___x_2344_);
v___x_2346_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_2233_, v___x_2345_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_dec_ref_known(v___x_2346_, 1);
v___y_2260_ = v___x_2304_;
v___y_2261_ = v___x_2326_;
v___y_2262_ = v___x_2333_;
v___y_2263_ = v___x_2311_;
v___y_2264_ = v___y_2300_;
v___y_2265_ = v___y_2301_;
v___y_2266_ = v___y_2302_;
v___y_2267_ = v___y_2303_;
goto v___jp_2259_;
}
else
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2354_; 
lean_dec(v___x_2333_);
lean_dec_ref(v___x_2326_);
lean_dec_ref(v___x_2304_);
lean_dec(v___y_2303_);
lean_dec_ref(v___y_2302_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec_ref(v___x_2258_);
lean_dec(v_snd_2244_);
lean_dec(v_mvarId_2231_);
v_a_2347_ = lean_ctor_get(v___x_2346_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2349_ = v___x_2346_;
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v___x_2346_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_a_2347_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
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
lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2363_; 
lean_dec_ref(v___x_2304_);
lean_dec(v___y_2303_);
lean_dec_ref(v___y_2302_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec_ref(v___x_2258_);
lean_dec(v___x_2252_);
lean_del_object(v___x_2246_);
lean_dec(v_snd_2244_);
lean_dec(v_cls_2233_);
lean_dec(v_mvarId_2231_);
v_a_2356_ = lean_ctor_get(v___x_2307_, 0);
v_isSharedCheck_2363_ = !lean_is_exclusive(v___x_2307_);
if (v_isSharedCheck_2363_ == 0)
{
v___x_2358_ = v___x_2307_;
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v___x_2307_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2361_; 
if (v_isShared_2359_ == 0)
{
v___x_2361_ = v___x_2358_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v_a_2356_);
v___x_2361_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
return v___x_2361_;
}
}
}
}
else
{
lean_object* v_a_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2371_; 
lean_dec_ref(v___x_2304_);
lean_dec(v___y_2303_);
lean_dec_ref(v___y_2302_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec_ref(v___x_2258_);
lean_dec(v___x_2252_);
lean_del_object(v___x_2246_);
lean_dec(v_snd_2244_);
lean_dec(v_cls_2233_);
lean_dec(v_mvarId_2231_);
v_a_2364_ = lean_ctor_get(v___x_2305_, 0);
v_isSharedCheck_2371_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2366_ = v___x_2305_;
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_a_2364_);
lean_dec(v___x_2305_);
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
v_resetjp_2375_:
{
uint8_t v___x_2378_; 
v___x_2378_ = lean_unbox(v_a_2374_);
lean_dec(v_a_2374_);
if (v___x_2378_ == 0)
{
lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2385_; 
lean_dec_ref(v___x_2258_);
lean_dec(v___x_2250_);
lean_del_object(v___x_2246_);
lean_dec(v_snd_2244_);
lean_dec(v_cls_2233_);
v___x_2379_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__12, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__12_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__12);
v___x_2380_ = l_Lean_MessageData_ofName(v___x_2252_);
v___x_2381_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2379_);
lean_ctor_set(v___x_2381_, 1, v___x_2380_);
v___x_2382_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__14, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__14_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__14);
v___x_2383_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2383_, 0, v___x_2381_);
lean_ctor_set(v___x_2383_, 1, v___x_2382_);
if (v_isShared_2377_ == 0)
{
lean_ctor_set_tag(v___x_2376_, 1);
lean_ctor_set(v___x_2376_, 0, v_mvarId_2231_);
v___x_2385_ = v___x_2376_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_mvarId_2231_);
v___x_2385_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v_a_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2395_; 
v___x_2386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2383_);
lean_ctor_set(v___x_2386_, 1, v___x_2385_);
v___x_2387_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_2386_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_);
lean_dec(v___y_2237_);
lean_dec_ref(v___y_2236_);
lean_dec(v___y_2235_);
lean_dec_ref(v___y_2234_);
v_a_2388_ = lean_ctor_get(v___x_2387_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v___x_2387_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2390_ = v___x_2387_;
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_a_2388_);
lean_dec(v___x_2387_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2393_; 
if (v_isShared_2391_ == 0)
{
v___x_2393_ = v___x_2390_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_a_2388_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
return v___x_2393_;
}
}
}
}
else
{
lean_del_object(v___x_2376_);
v___y_2300_ = v___y_2234_;
v___y_2301_ = v___y_2235_;
v___y_2302_ = v___y_2236_;
v___y_2303_ = v___y_2237_;
goto v___jp_2299_;
}
}
}
}
else
{
lean_object* v_a_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2406_; 
lean_dec(v___y_2237_);
lean_dec_ref(v___y_2236_);
lean_dec(v___y_2235_);
lean_dec_ref(v___y_2234_);
lean_dec(v_cls_2233_);
lean_dec(v_mvarId_2231_);
v_a_2399_ = lean_ctor_get(v___x_2241_, 0);
v_isSharedCheck_2406_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2401_ = v___x_2241_;
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_a_2399_);
lean_dec(v___x_2241_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2406_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
lean_object* v___x_2404_; 
if (v_isShared_2402_ == 0)
{
v___x_2404_ = v___x_2401_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v_a_2399_);
v___x_2404_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
return v___x_2404_;
}
}
}
}
else
{
lean_object* v_a_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2414_; 
lean_dec(v___y_2237_);
lean_dec_ref(v___y_2236_);
lean_dec(v___y_2235_);
lean_dec_ref(v___y_2234_);
lean_dec(v_cls_2233_);
lean_dec(v_mvarId_2231_);
v_a_2407_ = lean_ctor_get(v___x_2239_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2239_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2409_ = v___x_2239_;
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_a_2407_);
lean_dec(v___x_2239_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v___x_2412_; 
if (v_isShared_2410_ == 0)
{
v___x_2412_ = v___x_2409_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v_a_2407_);
v___x_2412_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
return v___x_2412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___boxed(lean_object* v_mvarId_2415_, lean_object* v___x_2416_, lean_object* v_cls_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1(v_mvarId_2415_, v___x_2416_, v_cls_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_);
lean_dec_ref(v___x_2416_);
return v_res_2423_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2425_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__0));
v___x_2426_ = l_Lean_stringToMessageData(v___x_2425_);
return v___x_2426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2(lean_object* v_mvarId_2427_, lean_object* v_x_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_){
_start:
{
lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; 
v___x_2434_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__1);
v___x_2435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2435_, 0, v_mvarId_2427_);
v___x_2436_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2434_);
lean_ctor_set(v___x_2436_, 1, v___x_2435_);
v___x_2437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2437_, 0, v___x_2436_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___boxed(lean_object* v_mvarId_2438_, lean_object* v_x_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_){
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2(v_mvarId_2438_, v_x_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_);
lean_dec(v___y_2443_);
lean_dec_ref(v___y_2442_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
lean_dec_ref(v_x_2439_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold(lean_object* v_declName_2446_, lean_object* v_mvarId_2447_, lean_object* v_a_2448_, lean_object* v_a_2449_, lean_object* v_a_2450_, lean_object* v_a_2451_){
_start:
{
lean_object* v_toCold_2453_; lean_object* v_options_2454_; lean_object* v_inheritedTraceOptions_2455_; uint8_t v_hasTrace_2456_; lean_object* v___x_2457_; lean_object* v_cls_2458_; lean_object* v___f_2459_; 
v_toCold_2453_ = lean_ctor_get(v_a_2450_, 0);
v_options_2454_ = lean_ctor_get(v_toCold_2453_, 2);
v_inheritedTraceOptions_2455_ = lean_ctor_get(v_toCold_2453_, 11);
v_hasTrace_2456_ = lean_ctor_get_uint8(v_options_2454_, sizeof(void*)*1);
v___x_2457_ = l_Lean_instInhabitedExpr;
v_cls_2458_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17));
lean_inc(v_mvarId_2447_);
v___f_2459_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___boxed), 8, 3);
lean_closure_set(v___f_2459_, 0, v_mvarId_2447_);
lean_closure_set(v___f_2459_, 1, v___x_2457_);
lean_closure_set(v___f_2459_, 2, v_cls_2458_);
if (v_hasTrace_2456_ == 0)
{
lean_object* v___x_2460_; 
v___x_2460_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_mvarId_2447_, v___f_2459_, v_a_2448_, v_a_2449_, v_a_2450_, v_a_2451_);
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; lean_object* v___x_2462_; 
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
lean_inc(v_a_2461_);
lean_dec_ref_known(v___x_2460_, 1);
v___x_2462_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_2446_, v_a_2461_, v_a_2448_, v_a_2449_, v_a_2450_, v_a_2451_);
return v___x_2462_;
}
else
{
lean_object* v_a_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2470_; 
lean_dec(v_declName_2446_);
v_a_2463_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2470_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2470_ == 0)
{
v___x_2465_ = v___x_2460_;
v_isShared_2466_ = v_isSharedCheck_2470_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_a_2463_);
lean_dec(v___x_2460_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2470_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
lean_object* v___x_2468_; 
if (v_isShared_2466_ == 0)
{
v___x_2468_ = v___x_2465_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v_a_2463_);
v___x_2468_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
return v___x_2468_;
}
}
}
}
else
{
lean_object* v___f_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; uint8_t v___x_2474_; lean_object* v___y_2476_; lean_object* v___y_2477_; lean_object* v_a_2478_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v_a_2493_; lean_object* v___y_2496_; lean_object* v___y_2497_; lean_object* v_a_2498_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v_a_2510_; 
lean_inc(v_mvarId_2447_);
v___f_2471_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___boxed), 7, 1);
lean_closure_set(v___f_2471_, 0, v_mvarId_2447_);
v___x_2472_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__1));
v___x_2473_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20);
v___x_2474_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2455_, v_options_2454_, v___x_2473_);
if (v___x_2474_ == 0)
{
lean_object* v___x_2545_; uint8_t v___x_2546_; 
v___x_2545_ = l_Lean_trace_profiler;
v___x_2546_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(v_options_2454_, v___x_2545_);
if (v___x_2546_ == 0)
{
lean_object* v___x_2547_; 
lean_dec_ref(v___f_2471_);
v___x_2547_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_mvarId_2447_, v___f_2459_, v_a_2448_, v_a_2449_, v_a_2450_, v_a_2451_);
if (lean_obj_tag(v___x_2547_) == 0)
{
lean_object* v_a_2548_; lean_object* v___x_2549_; 
v_a_2548_ = lean_ctor_get(v___x_2547_, 0);
lean_inc(v_a_2548_);
lean_dec_ref_known(v___x_2547_, 1);
v___x_2549_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_2446_, v_a_2548_, v_a_2448_, v_a_2449_, v_a_2450_, v_a_2451_);
return v___x_2549_;
}
else
{
lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2557_; 
lean_dec(v_declName_2446_);
v_a_2550_ = lean_ctor_get(v___x_2547_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2552_ = v___x_2547_;
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v___x_2547_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v___x_2555_; 
if (v_isShared_2553_ == 0)
{
v___x_2555_ = v___x_2552_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v_a_2550_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
return v___x_2555_;
}
}
}
}
else
{
goto v___jp_2512_;
}
}
else
{
goto v___jp_2512_;
}
v___jp_2475_:
{
lean_object* v___x_2479_; double v___x_2480_; double v___x_2481_; double v___x_2482_; double v___x_2483_; double v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2479_ = lean_io_mono_nanos_now();
v___x_2480_ = lean_float_of_nat(v___y_2476_);
v___x_2481_ = lean_float_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21);
v___x_2482_ = lean_float_div(v___x_2480_, v___x_2481_);
v___x_2483_ = lean_float_of_nat(v___x_2479_);
v___x_2484_ = lean_float_div(v___x_2483_, v___x_2481_);
v___x_2485_ = lean_box_float(v___x_2482_);
v___x_2486_ = lean_box_float(v___x_2484_);
v___x_2487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2487_, 0, v___x_2485_);
lean_ctor_set(v___x_2487_, 1, v___x_2486_);
v___x_2488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2488_, 0, v_a_2478_);
lean_ctor_set(v___x_2488_, 1, v___x_2487_);
v___x_2489_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_cls_2458_, v_hasTrace_2456_, v___x_2472_, v_options_2454_, v___x_2474_, v___y_2477_, v___f_2471_, v___x_2488_, v_a_2448_, v_a_2449_, v_a_2450_, v_a_2451_);
return v___x_2489_;
}
v___jp_2490_:
{
lean_object* v___x_2494_; 
v___x_2494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2494_, 0, v_a_2493_);
v___y_2476_ = v___y_2491_;
v___y_2477_ = v___y_2492_;
v_a_2478_ = v___x_2494_;
goto v___jp_2475_;
}
v___jp_2495_:
{
lean_object* v___x_2499_; double v___x_2500_; double v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; 
v___x_2499_ = lean_io_get_num_heartbeats();
v___x_2500_ = lean_float_of_nat(v___y_2496_);
v___x_2501_ = lean_float_of_nat(v___x_2499_);
v___x_2502_ = lean_box_float(v___x_2500_);
v___x_2503_ = lean_box_float(v___x_2501_);
v___x_2504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2502_);
lean_ctor_set(v___x_2504_, 1, v___x_2503_);
v___x_2505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2505_, 0, v_a_2498_);
lean_ctor_set(v___x_2505_, 1, v___x_2504_);
v___x_2506_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_cls_2458_, v_hasTrace_2456_, v___x_2472_, v_options_2454_, v___x_2474_, v___y_2497_, v___f_2471_, v___x_2505_, v_a_2448_, v_a_2449_, v_a_2450_, v_a_2451_);
return v___x_2506_;
}
v___jp_2507_:
{
lean_object* v___x_2511_; 
v___x_2511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2511_, 0, v_a_2510_);
v___y_2496_ = v___y_2508_;
v___y_2497_ = v___y_2509_;
v_a_2498_ = v___x_2511_;
goto v___jp_2495_;
}
v___jp_2512_:
{
lean_object* v___x_2513_; lean_object* v_a_2514_; lean_object* v___x_2515_; uint8_t v___x_2516_; 
v___x_2513_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg(v_a_2451_);
v_a_2514_ = lean_ctor_get(v___x_2513_, 0);
lean_inc(v_a_2514_);
lean_dec_ref(v___x_2513_);
v___x_2515_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2516_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(v_options_2454_, v___x_2515_);
if (v___x_2516_ == 0)
{
lean_object* v___x_2517_; lean_object* v___x_2518_; 
v___x_2517_ = lean_io_mono_nanos_now();
v___x_2518_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_mvarId_2447_, v___f_2459_, v_a_2448_, v_a_2449_, v_a_2450_, v_a_2451_);
if (lean_obj_tag(v___x_2518_) == 0)
{
lean_object* v_a_2519_; lean_object* v___x_2520_; 
v_a_2519_ = lean_ctor_get(v___x_2518_, 0);
lean_inc(v_a_2519_);
lean_dec_ref_known(v___x_2518_, 1);
v___x_2520_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_2446_, v_a_2519_, v_a_2448_, v_a_2449_, v_a_2450_, v_a_2451_);
if (lean_obj_tag(v___x_2520_) == 0)
{
lean_object* v_a_2521_; lean_object* v___x_2523_; uint8_t v_isShared_2524_; uint8_t v_isSharedCheck_2528_; 
v_a_2521_ = lean_ctor_get(v___x_2520_, 0);
v_isSharedCheck_2528_ = !lean_is_exclusive(v___x_2520_);
if (v_isSharedCheck_2528_ == 0)
{
v___x_2523_ = v___x_2520_;
v_isShared_2524_ = v_isSharedCheck_2528_;
goto v_resetjp_2522_;
}
else
{
lean_inc(v_a_2521_);
lean_dec(v___x_2520_);
v___x_2523_ = lean_box(0);
v_isShared_2524_ = v_isSharedCheck_2528_;
goto v_resetjp_2522_;
}
v_resetjp_2522_:
{
lean_object* v___x_2526_; 
if (v_isShared_2524_ == 0)
{
lean_ctor_set_tag(v___x_2523_, 1);
v___x_2526_ = v___x_2523_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v_a_2521_);
v___x_2526_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
v___y_2476_ = v___x_2517_;
v___y_2477_ = v_a_2514_;
v_a_2478_ = v___x_2526_;
goto v___jp_2475_;
}
}
}
else
{
lean_object* v_a_2529_; 
v_a_2529_ = lean_ctor_get(v___x_2520_, 0);
lean_inc(v_a_2529_);
lean_dec_ref_known(v___x_2520_, 1);
v___y_2491_ = v___x_2517_;
v___y_2492_ = v_a_2514_;
v_a_2493_ = v_a_2529_;
goto v___jp_2490_;
}
}
else
{
lean_object* v_a_2530_; 
lean_dec(v_declName_2446_);
v_a_2530_ = lean_ctor_get(v___x_2518_, 0);
lean_inc(v_a_2530_);
lean_dec_ref_known(v___x_2518_, 1);
v___y_2491_ = v___x_2517_;
v___y_2492_ = v_a_2514_;
v_a_2493_ = v_a_2530_;
goto v___jp_2490_;
}
}
else
{
lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2531_ = lean_io_get_num_heartbeats();
v___x_2532_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_mvarId_2447_, v___f_2459_, v_a_2448_, v_a_2449_, v_a_2450_, v_a_2451_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v___x_2534_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2532_, 1);
v___x_2534_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_2446_, v_a_2533_, v_a_2448_, v_a_2449_, v_a_2450_, v_a_2451_);
if (lean_obj_tag(v___x_2534_) == 0)
{
lean_object* v_a_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2542_; 
v_a_2535_ = lean_ctor_get(v___x_2534_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___x_2534_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2537_ = v___x_2534_;
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_a_2535_);
lean_dec(v___x_2534_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2540_; 
if (v_isShared_2538_ == 0)
{
lean_ctor_set_tag(v___x_2537_, 1);
v___x_2540_ = v___x_2537_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_a_2535_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
v___y_2496_ = v___x_2531_;
v___y_2497_ = v_a_2514_;
v_a_2498_ = v___x_2540_;
goto v___jp_2495_;
}
}
}
else
{
lean_object* v_a_2543_; 
v_a_2543_ = lean_ctor_get(v___x_2534_, 0);
lean_inc(v_a_2543_);
lean_dec_ref_known(v___x_2534_, 1);
v___y_2508_ = v___x_2531_;
v___y_2509_ = v_a_2514_;
v_a_2510_ = v_a_2543_;
goto v___jp_2507_;
}
}
else
{
lean_object* v_a_2544_; 
lean_dec(v_declName_2446_);
v_a_2544_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2544_);
lean_dec_ref_known(v___x_2532_, 1);
v___y_2508_ = v___x_2531_;
v___y_2509_ = v_a_2514_;
v_a_2510_ = v_a_2544_;
goto v___jp_2507_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___boxed(lean_object* v_declName_2558_, lean_object* v_mvarId_2559_, lean_object* v_a_2560_, lean_object* v_a_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_){
_start:
{
lean_object* v_res_2565_; 
v_res_2565_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold(v_declName_2558_, v_mvarId_2559_, v_a_2560_, v_a_2561_, v_a_2562_, v_a_2563_);
lean_dec(v_a_2563_);
lean_dec_ref(v_a_2562_);
lean_dec(v_a_2561_);
lean_dec_ref(v_a_2560_);
return v_res_2565_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg(lean_object* v_e_2566_, lean_object* v___y_2567_){
_start:
{
uint8_t v___x_2569_; 
v___x_2569_ = l_Lean_Expr_hasMVar(v_e_2566_);
if (v___x_2569_ == 0)
{
lean_object* v___x_2570_; 
v___x_2570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2570_, 0, v_e_2566_);
return v___x_2570_;
}
else
{
lean_object* v___x_2571_; lean_object* v_mctx_2572_; lean_object* v___x_2573_; lean_object* v_fst_2574_; lean_object* v_snd_2575_; lean_object* v___x_2576_; lean_object* v_cache_2577_; lean_object* v_zetaDeltaFVarIds_2578_; lean_object* v_postponed_2579_; lean_object* v_diag_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2589_; 
v___x_2571_ = lean_st_ref_get(v___y_2567_);
v_mctx_2572_ = lean_ctor_get(v___x_2571_, 0);
lean_inc_ref(v_mctx_2572_);
lean_dec(v___x_2571_);
v___x_2573_ = l_Lean_instantiateMVarsCore(v_mctx_2572_, v_e_2566_);
v_fst_2574_ = lean_ctor_get(v___x_2573_, 0);
lean_inc(v_fst_2574_);
v_snd_2575_ = lean_ctor_get(v___x_2573_, 1);
lean_inc(v_snd_2575_);
lean_dec_ref(v___x_2573_);
v___x_2576_ = lean_st_ref_take(v___y_2567_);
v_cache_2577_ = lean_ctor_get(v___x_2576_, 1);
v_zetaDeltaFVarIds_2578_ = lean_ctor_get(v___x_2576_, 2);
v_postponed_2579_ = lean_ctor_get(v___x_2576_, 3);
v_diag_2580_ = lean_ctor_get(v___x_2576_, 4);
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2576_);
if (v_isSharedCheck_2589_ == 0)
{
lean_object* v_unused_2590_; 
v_unused_2590_ = lean_ctor_get(v___x_2576_, 0);
lean_dec(v_unused_2590_);
v___x_2582_ = v___x_2576_;
v_isShared_2583_ = v_isSharedCheck_2589_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_diag_2580_);
lean_inc(v_postponed_2579_);
lean_inc(v_zetaDeltaFVarIds_2578_);
lean_inc(v_cache_2577_);
lean_dec(v___x_2576_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2589_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2585_; 
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 0, v_snd_2575_);
v___x_2585_ = v___x_2582_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v_snd_2575_);
lean_ctor_set(v_reuseFailAlloc_2588_, 1, v_cache_2577_);
lean_ctor_set(v_reuseFailAlloc_2588_, 2, v_zetaDeltaFVarIds_2578_);
lean_ctor_set(v_reuseFailAlloc_2588_, 3, v_postponed_2579_);
lean_ctor_set(v_reuseFailAlloc_2588_, 4, v_diag_2580_);
v___x_2585_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; 
v___x_2586_ = lean_st_ref_put(v___y_2567_, v___x_2585_);
v___x_2587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2587_, 0, v_fst_2574_);
return v___x_2587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg___boxed(lean_object* v_e_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_){
_start:
{
lean_object* v_res_2594_; 
v_res_2594_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg(v_e_2591_, v___y_2592_);
lean_dec(v___y_2592_);
return v_res_2594_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0(lean_object* v_e_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_){
_start:
{
lean_object* v___x_2601_; 
v___x_2601_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg(v_e_2595_, v___y_2597_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___boxed(lean_object* v_e_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_){
_start:
{
lean_object* v_res_2608_; 
v_res_2608_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0(v_e_2602_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
lean_dec(v___y_2604_);
lean_dec_ref(v___y_2603_);
return v_res_2608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___redArg(lean_object* v_k_2609_, uint8_t v_allowLevelAssignments_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_){
_start:
{
lean_object* v___x_2616_; 
v___x_2616_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_2610_, v_k_2609_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
if (lean_obj_tag(v___x_2616_) == 0)
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
v_a_2617_ = lean_ctor_get(v___x_2616_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___x_2616_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2616_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2622_; 
if (v_isShared_2620_ == 0)
{
v___x_2622_ = v___x_2619_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_a_2617_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
}
else
{
lean_object* v_a_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2632_; 
v_a_2625_ = lean_ctor_get(v___x_2616_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2627_ = v___x_2616_;
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_a_2625_);
lean_dec(v___x_2616_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2630_; 
if (v_isShared_2628_ == 0)
{
v___x_2630_ = v___x_2627_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_a_2625_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
return v___x_2630_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___redArg___boxed(lean_object* v_k_2633_, lean_object* v_allowLevelAssignments_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2640_; lean_object* v_res_2641_; 
v_allowLevelAssignments_boxed_2640_ = lean_unbox(v_allowLevelAssignments_2634_);
v_res_2641_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___redArg(v_k_2633_, v_allowLevelAssignments_boxed_2640_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
lean_dec(v___y_2638_);
lean_dec_ref(v___y_2637_);
lean_dec(v___y_2636_);
lean_dec_ref(v___y_2635_);
return v_res_2641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1(lean_object* v_00_u03b1_2642_, lean_object* v_k_2643_, uint8_t v_allowLevelAssignments_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_){
_start:
{
lean_object* v___x_2650_; 
v___x_2650_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___redArg(v_k_2643_, v_allowLevelAssignments_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___boxed(lean_object* v_00_u03b1_2651_, lean_object* v_k_2652_, lean_object* v_allowLevelAssignments_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2659_; lean_object* v_res_2660_; 
v_allowLevelAssignments_boxed_2659_ = lean_unbox(v_allowLevelAssignments_2653_);
v_res_2660_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1(v_00_u03b1_2651_, v_k_2652_, v_allowLevelAssignments_boxed_2659_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
lean_dec(v___y_2657_);
lean_dec_ref(v___y_2656_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2654_);
return v_res_2660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__0(lean_object* v___x_2661_, lean_object* v_e_2662_){
_start:
{
lean_object* v___x_2663_; lean_object* v___x_2664_; 
v___x_2663_ = l_Lean_indentD(v_e_2662_);
v___x_2664_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2661_);
lean_ctor_set(v___x_2664_, 1, v___x_2663_);
return v___x_2664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__1(lean_object* v_type_2665_, lean_object* v___x_2666_, lean_object* v_declName_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_){
_start:
{
lean_object* v___x_2673_; 
v___x_2673_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_type_2665_, v___x_2666_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_);
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v_a_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v_a_2674_ = lean_ctor_get(v___x_2673_, 0);
lean_inc(v_a_2674_);
lean_dec_ref_known(v___x_2673_, 1);
v___x_2675_ = l_Lean_Expr_mvarId_x21(v_a_2674_);
v___x_2676_ = l_Lean_MVarId_intros(v___x_2675_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_);
if (lean_obj_tag(v___x_2676_) == 0)
{
lean_object* v_a_2677_; lean_object* v_snd_2678_; lean_object* v___x_2679_; 
v_a_2677_ = lean_ctor_get(v___x_2676_, 0);
lean_inc(v_a_2677_);
lean_dec_ref_known(v___x_2676_, 1);
v_snd_2678_ = lean_ctor_get(v_a_2677_, 1);
lean_inc_n(v_snd_2678_, 2);
lean_dec(v_a_2677_);
v___x_2679_ = l_Lean_Elab_Eqns_tryURefl(v_snd_2678_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v_a_2680_; uint8_t v___x_2681_; 
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
lean_inc(v_a_2680_);
lean_dec_ref_known(v___x_2679_, 1);
v___x_2681_ = lean_unbox(v_a_2680_);
lean_dec(v_a_2680_);
if (v___x_2681_ == 0)
{
lean_object* v___x_2682_; 
v___x_2682_ = l_Lean_Elab_Eqns_deltaLHS(v_snd_2678_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v___x_2684_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2682_, 1);
v___x_2684_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold(v_declName_2667_, v_a_2683_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_);
if (lean_obj_tag(v___x_2684_) == 0)
{
lean_object* v___x_2685_; 
lean_dec_ref_known(v___x_2684_, 1);
v___x_2685_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg(v_a_2674_, v___y_2669_);
return v___x_2685_;
}
else
{
lean_object* v_a_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2693_; 
lean_dec(v_a_2674_);
v_a_2686_ = lean_ctor_get(v___x_2684_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2684_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2688_ = v___x_2684_;
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_a_2686_);
lean_dec(v___x_2684_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2691_; 
if (v_isShared_2689_ == 0)
{
v___x_2691_ = v___x_2688_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2686_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
}
}
else
{
lean_object* v_a_2694_; lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2701_; 
lean_dec(v_a_2674_);
lean_dec(v_declName_2667_);
v_a_2694_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2696_ = v___x_2682_;
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
else
{
lean_inc(v_a_2694_);
lean_dec(v___x_2682_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
lean_object* v___x_2699_; 
if (v_isShared_2697_ == 0)
{
v___x_2699_ = v___x_2696_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v_a_2694_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
}
}
else
{
lean_object* v___x_2702_; 
lean_dec(v_snd_2678_);
lean_dec(v_declName_2667_);
v___x_2702_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg(v_a_2674_, v___y_2669_);
return v___x_2702_;
}
}
else
{
lean_object* v_a_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2710_; 
lean_dec(v_snd_2678_);
lean_dec(v_a_2674_);
lean_dec(v_declName_2667_);
v_a_2703_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2705_ = v___x_2679_;
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_a_2703_);
lean_dec(v___x_2679_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2708_; 
if (v_isShared_2706_ == 0)
{
v___x_2708_ = v___x_2705_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v_a_2703_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
return v___x_2708_;
}
}
}
}
else
{
lean_object* v_a_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2718_; 
lean_dec(v_a_2674_);
lean_dec(v_declName_2667_);
v_a_2711_ = lean_ctor_get(v___x_2676_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2676_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2713_ = v___x_2676_;
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_a_2711_);
lean_dec(v___x_2676_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2716_; 
if (v_isShared_2714_ == 0)
{
v___x_2716_ = v___x_2713_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v_a_2711_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
}
}
else
{
lean_dec(v_declName_2667_);
return v___x_2673_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__1___boxed(lean_object* v_type_2719_, lean_object* v___x_2720_, lean_object* v_declName_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__1(v_type_2719_, v___x_2720_, v_declName_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
return v_res_2727_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2729_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__0));
v___x_2730_ = l_Lean_stringToMessageData(v___x_2729_);
return v___x_2730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2(lean_object* v_type_2731_, lean_object* v_x_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_){
_start:
{
lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; 
v___x_2738_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__1);
v___x_2739_ = l_Lean_indentExpr(v_type_2731_);
v___x_2740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2738_);
lean_ctor_set(v___x_2740_, 1, v___x_2739_);
v___x_2741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2741_, 0, v___x_2740_);
return v___x_2741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___boxed(lean_object* v_type_2742_, lean_object* v_x_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_){
_start:
{
lean_object* v_res_2749_; 
v_res_2749_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2(v_type_2742_, v_x_2743_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_);
lean_dec(v___y_2747_);
lean_dec_ref(v___y_2746_);
lean_dec(v___y_2745_);
lean_dec_ref(v___y_2744_);
lean_dec_ref(v_x_2743_);
return v_res_2749_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2_spec__2(lean_object* v_e_2750_){
_start:
{
if (lean_obj_tag(v_e_2750_) == 0)
{
uint8_t v___x_2751_; 
v___x_2751_ = 2;
return v___x_2751_;
}
else
{
lean_object* v_a_2752_; uint8_t v___x_2753_; 
v_a_2752_ = lean_ctor_get(v_e_2750_, 0);
v___x_2753_ = l_Lean_Expr_hasSyntheticSorry(v_a_2752_);
if (v___x_2753_ == 0)
{
uint8_t v___x_2754_; 
v___x_2754_ = 0;
return v___x_2754_;
}
else
{
uint8_t v___x_2755_; 
v___x_2755_ = 1;
return v___x_2755_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2_spec__2___boxed(lean_object* v_e_2756_){
_start:
{
uint8_t v_res_2757_; lean_object* v_r_2758_; 
v_res_2757_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2_spec__2(v_e_2756_);
lean_dec_ref(v_e_2756_);
v_r_2758_ = lean_box(v_res_2757_);
return v_r_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2(lean_object* v_cls_2759_, uint8_t v_collapsed_2760_, lean_object* v_tag_2761_, lean_object* v_opts_2762_, uint8_t v_clsEnabled_2763_, lean_object* v_oldTraces_2764_, lean_object* v_msg_2765_, lean_object* v_resStartStop_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_){
_start:
{
lean_object* v_fst_2772_; lean_object* v_snd_2773_; lean_object* v___y_2775_; lean_object* v___y_2776_; lean_object* v_data_2777_; lean_object* v_fst_2788_; lean_object* v_snd_2789_; lean_object* v___x_2790_; uint8_t v___x_2791_; lean_object* v___y_2793_; lean_object* v_a_2794_; uint8_t v___y_2809_; double v___y_2840_; 
v_fst_2772_ = lean_ctor_get(v_resStartStop_2766_, 0);
lean_inc(v_fst_2772_);
v_snd_2773_ = lean_ctor_get(v_resStartStop_2766_, 1);
lean_inc(v_snd_2773_);
lean_dec_ref(v_resStartStop_2766_);
v_fst_2788_ = lean_ctor_get(v_snd_2773_, 0);
lean_inc(v_fst_2788_);
v_snd_2789_ = lean_ctor_get(v_snd_2773_, 1);
lean_inc(v_snd_2789_);
lean_dec(v_snd_2773_);
v___x_2790_ = l_Lean_trace_profiler;
v___x_2791_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(v_opts_2762_, v___x_2790_);
if (v___x_2791_ == 0)
{
v___y_2809_ = v___x_2791_;
goto v___jp_2808_;
}
else
{
lean_object* v___x_2845_; uint8_t v___x_2846_; 
v___x_2845_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2846_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(v_opts_2762_, v___x_2845_);
if (v___x_2846_ == 0)
{
lean_object* v___x_2847_; lean_object* v___x_2848_; double v___x_2849_; double v___x_2850_; double v___x_2851_; 
v___x_2847_ = l_Lean_trace_profiler_threshold;
v___x_2848_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__8(v_opts_2762_, v___x_2847_);
v___x_2849_ = lean_float_of_nat(v___x_2848_);
v___x_2850_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__2);
v___x_2851_ = lean_float_div(v___x_2849_, v___x_2850_);
v___y_2840_ = v___x_2851_;
goto v___jp_2839_;
}
else
{
lean_object* v___x_2852_; lean_object* v___x_2853_; double v___x_2854_; 
v___x_2852_ = l_Lean_trace_profiler_threshold;
v___x_2853_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__8(v_opts_2762_, v___x_2852_);
v___x_2854_ = lean_float_of_nat(v___x_2853_);
v___y_2840_ = v___x_2854_;
goto v___jp_2839_;
}
}
v___jp_2774_:
{
lean_object* v___x_2778_; 
lean_inc(v___y_2776_);
v___x_2778_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__5(v_oldTraces_2764_, v_data_2777_, v___y_2776_, v___y_2775_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_);
if (lean_obj_tag(v___x_2778_) == 0)
{
lean_object* v___x_2779_; 
lean_dec_ref_known(v___x_2778_, 1);
v___x_2779_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6___redArg(v_fst_2772_);
return v___x_2779_;
}
else
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2787_; 
lean_dec(v_fst_2772_);
v_a_2780_ = lean_ctor_get(v___x_2778_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2778_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2782_ = v___x_2778_;
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2778_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2785_; 
if (v_isShared_2783_ == 0)
{
v___x_2785_ = v___x_2782_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_a_2780_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
}
v___jp_2792_:
{
uint8_t v_result_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; double v___x_2798_; lean_object* v_data_2799_; 
v_result_2795_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2_spec__2(v_fst_2772_);
v___x_2796_ = lean_box(v_result_2795_);
v___x_2797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2797_, 0, v___x_2796_);
v___x_2798_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__0);
lean_inc_ref(v_tag_2761_);
lean_inc_ref(v___x_2797_);
lean_inc(v_cls_2759_);
v_data_2799_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2799_, 0, v_cls_2759_);
lean_ctor_set(v_data_2799_, 1, v___x_2797_);
lean_ctor_set(v_data_2799_, 2, v_tag_2761_);
lean_ctor_set_float(v_data_2799_, sizeof(void*)*3, v___x_2798_);
lean_ctor_set_float(v_data_2799_, sizeof(void*)*3 + 8, v___x_2798_);
lean_ctor_set_uint8(v_data_2799_, sizeof(void*)*3 + 16, v_collapsed_2760_);
if (v___x_2791_ == 0)
{
lean_dec_ref_known(v___x_2797_, 1);
lean_dec(v_snd_2789_);
lean_dec(v_fst_2788_);
lean_dec_ref(v_tag_2761_);
lean_dec(v_cls_2759_);
v___y_2775_ = v_a_2794_;
v___y_2776_ = v___y_2793_;
v_data_2777_ = v_data_2799_;
goto v___jp_2774_;
}
else
{
lean_object* v_data_2800_; double v___x_2801_; double v___x_2802_; 
lean_dec_ref_known(v_data_2799_, 3);
v_data_2800_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2800_, 0, v_cls_2759_);
lean_ctor_set(v_data_2800_, 1, v___x_2797_);
lean_ctor_set(v_data_2800_, 2, v_tag_2761_);
v___x_2801_ = lean_unbox_float(v_fst_2788_);
lean_dec(v_fst_2788_);
lean_ctor_set_float(v_data_2800_, sizeof(void*)*3, v___x_2801_);
v___x_2802_ = lean_unbox_float(v_snd_2789_);
lean_dec(v_snd_2789_);
lean_ctor_set_float(v_data_2800_, sizeof(void*)*3 + 8, v___x_2802_);
lean_ctor_set_uint8(v_data_2800_, sizeof(void*)*3 + 16, v_collapsed_2760_);
v___y_2775_ = v_a_2794_;
v___y_2776_ = v___y_2793_;
v_data_2777_ = v_data_2800_;
goto v___jp_2774_;
}
}
v___jp_2803_:
{
lean_object* v_ref_2804_; lean_object* v___x_2805_; 
v_ref_2804_ = lean_ctor_get(v___y_2769_, 2);
lean_inc(v___y_2770_);
lean_inc_ref(v___y_2769_);
lean_inc(v___y_2768_);
lean_inc_ref(v___y_2767_);
lean_inc(v_fst_2772_);
v___x_2805_ = lean_apply_6(v_msg_2765_, v_fst_2772_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_, lean_box(0));
if (lean_obj_tag(v___x_2805_) == 0)
{
lean_object* v_a_2806_; 
v_a_2806_ = lean_ctor_get(v___x_2805_, 0);
lean_inc(v_a_2806_);
lean_dec_ref_known(v___x_2805_, 1);
v___y_2793_ = v_ref_2804_;
v_a_2794_ = v_a_2806_;
goto v___jp_2792_;
}
else
{
lean_object* v___x_2807_; 
lean_dec_ref_known(v___x_2805_, 1);
v___x_2807_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___closed__1);
v___y_2793_ = v_ref_2804_;
v_a_2794_ = v___x_2807_;
goto v___jp_2792_;
}
}
v___jp_2808_:
{
if (v_clsEnabled_2763_ == 0)
{
if (v___y_2809_ == 0)
{
lean_object* v___x_2810_; lean_object* v_traceState_2811_; lean_object* v_env_2812_; lean_object* v_nextMacroScope_2813_; lean_object* v_ngen_2814_; lean_object* v_auxDeclNGen_2815_; lean_object* v_cache_2816_; lean_object* v_messages_2817_; lean_object* v_infoState_2818_; lean_object* v_snapshotTasks_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2838_; 
lean_dec(v_snd_2789_);
lean_dec(v_fst_2788_);
lean_dec_ref(v_msg_2765_);
lean_dec_ref(v_tag_2761_);
lean_dec(v_cls_2759_);
v___x_2810_ = lean_st_ref_take(v___y_2770_);
v_traceState_2811_ = lean_ctor_get(v___x_2810_, 4);
v_env_2812_ = lean_ctor_get(v___x_2810_, 0);
v_nextMacroScope_2813_ = lean_ctor_get(v___x_2810_, 1);
v_ngen_2814_ = lean_ctor_get(v___x_2810_, 2);
v_auxDeclNGen_2815_ = lean_ctor_get(v___x_2810_, 3);
v_cache_2816_ = lean_ctor_get(v___x_2810_, 5);
v_messages_2817_ = lean_ctor_get(v___x_2810_, 6);
v_infoState_2818_ = lean_ctor_get(v___x_2810_, 7);
v_snapshotTasks_2819_ = lean_ctor_get(v___x_2810_, 8);
v_isSharedCheck_2838_ = !lean_is_exclusive(v___x_2810_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2821_ = v___x_2810_;
v_isShared_2822_ = v_isSharedCheck_2838_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_snapshotTasks_2819_);
lean_inc(v_infoState_2818_);
lean_inc(v_messages_2817_);
lean_inc(v_cache_2816_);
lean_inc(v_traceState_2811_);
lean_inc(v_auxDeclNGen_2815_);
lean_inc(v_ngen_2814_);
lean_inc(v_nextMacroScope_2813_);
lean_inc(v_env_2812_);
lean_dec(v___x_2810_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2838_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
uint64_t v_tid_2823_; lean_object* v_traces_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2837_; 
v_tid_2823_ = lean_ctor_get_uint64(v_traceState_2811_, sizeof(void*)*1);
v_traces_2824_ = lean_ctor_get(v_traceState_2811_, 0);
v_isSharedCheck_2837_ = !lean_is_exclusive(v_traceState_2811_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2826_ = v_traceState_2811_;
v_isShared_2827_ = v_isSharedCheck_2837_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_traces_2824_);
lean_dec(v_traceState_2811_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2837_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2828_; lean_object* v___x_2830_; 
v___x_2828_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2764_, v_traces_2824_);
lean_dec_ref(v_traces_2824_);
if (v_isShared_2827_ == 0)
{
lean_ctor_set(v___x_2826_, 0, v___x_2828_);
v___x_2830_ = v___x_2826_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v___x_2828_);
lean_ctor_set_uint64(v_reuseFailAlloc_2836_, sizeof(void*)*1, v_tid_2823_);
v___x_2830_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
lean_object* v___x_2832_; 
if (v_isShared_2822_ == 0)
{
lean_ctor_set(v___x_2821_, 4, v___x_2830_);
v___x_2832_ = v___x_2821_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v_env_2812_);
lean_ctor_set(v_reuseFailAlloc_2835_, 1, v_nextMacroScope_2813_);
lean_ctor_set(v_reuseFailAlloc_2835_, 2, v_ngen_2814_);
lean_ctor_set(v_reuseFailAlloc_2835_, 3, v_auxDeclNGen_2815_);
lean_ctor_set(v_reuseFailAlloc_2835_, 4, v___x_2830_);
lean_ctor_set(v_reuseFailAlloc_2835_, 5, v_cache_2816_);
lean_ctor_set(v_reuseFailAlloc_2835_, 6, v_messages_2817_);
lean_ctor_set(v_reuseFailAlloc_2835_, 7, v_infoState_2818_);
lean_ctor_set(v_reuseFailAlloc_2835_, 8, v_snapshotTasks_2819_);
v___x_2832_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
lean_object* v___x_2833_; lean_object* v___x_2834_; 
v___x_2833_ = lean_st_ref_put(v___y_2770_, v___x_2832_);
v___x_2834_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__6___redArg(v_fst_2772_);
return v___x_2834_;
}
}
}
}
}
else
{
goto v___jp_2803_;
}
}
else
{
goto v___jp_2803_;
}
}
v___jp_2839_:
{
double v___x_2841_; double v___x_2842_; double v___x_2843_; uint8_t v___x_2844_; 
v___x_2841_ = lean_unbox_float(v_snd_2789_);
v___x_2842_ = lean_unbox_float(v_fst_2788_);
v___x_2843_ = lean_float_sub(v___x_2841_, v___x_2842_);
v___x_2844_ = lean_float_decLt(v___y_2840_, v___x_2843_);
v___y_2809_ = v___x_2844_;
goto v___jp_2808_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2___boxed(lean_object* v_cls_2855_, lean_object* v_collapsed_2856_, lean_object* v_tag_2857_, lean_object* v_opts_2858_, lean_object* v_clsEnabled_2859_, lean_object* v_oldTraces_2860_, lean_object* v_msg_2861_, lean_object* v_resStartStop_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_){
_start:
{
uint8_t v_collapsed_boxed_2868_; uint8_t v_clsEnabled_boxed_2869_; lean_object* v_res_2870_; 
v_collapsed_boxed_2868_ = lean_unbox(v_collapsed_2856_);
v_clsEnabled_boxed_2869_ = lean_unbox(v_clsEnabled_2859_);
v_res_2870_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2(v_cls_2855_, v_collapsed_boxed_2868_, v_tag_2857_, v_opts_2858_, v_clsEnabled_boxed_2869_, v_oldTraces_2860_, v_msg_2861_, v_resStartStop_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_);
lean_dec(v___y_2866_);
lean_dec_ref(v___y_2865_);
lean_dec(v___y_2864_);
lean_dec_ref(v___y_2863_);
lean_dec_ref(v_opts_2858_);
return v_res_2870_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__1(void){
_start:
{
lean_object* v___x_2872_; lean_object* v___x_2873_; 
v___x_2872_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__0));
v___x_2873_ = l_Lean_stringToMessageData(v___x_2872_);
return v___x_2873_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__3(void){
_start:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2875_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__2));
v___x_2876_ = l_Lean_stringToMessageData(v___x_2875_);
return v___x_2876_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof(lean_object* v_declName_2877_, lean_object* v_type_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_, lean_object* v_a_2881_, lean_object* v_a_2882_){
_start:
{
lean_object* v_toCold_2884_; lean_object* v_options_2885_; lean_object* v_inheritedTraceOptions_2886_; uint8_t v_hasTrace_2887_; uint8_t v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___f_2894_; lean_object* v___x_2895_; lean_object* v___f_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; 
v_toCold_2884_ = lean_ctor_get(v_a_2881_, 0);
v_options_2885_ = lean_ctor_get(v_toCold_2884_, 2);
v_inheritedTraceOptions_2886_ = lean_ctor_get(v_toCold_2884_, 11);
v_hasTrace_2887_ = lean_ctor_get_uint8(v_options_2885_, sizeof(void*)*1);
v___x_2888_ = 0;
lean_inc(v_declName_2877_);
v___x_2889_ = l_Lean_MessageData_ofConstName(v_declName_2877_, v___x_2888_);
v___x_2890_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__1);
v___x_2891_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2890_);
lean_ctor_set(v___x_2891_, 1, v___x_2889_);
v___x_2892_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__3);
v___x_2893_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2891_);
lean_ctor_set(v___x_2893_, 1, v___x_2892_);
v___f_2894_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__0), 2, 1);
lean_closure_set(v___f_2894_, 0, v___x_2893_);
v___x_2895_ = lean_obj_once(&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0, &l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0_once, _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0);
lean_inc_ref(v_type_2878_);
v___f_2896_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__1___boxed), 8, 3);
lean_closure_set(v___f_2896_, 0, v_type_2878_);
lean_closure_set(v___f_2896_, 1, v___x_2895_);
lean_closure_set(v___f_2896_, 2, v_declName_2877_);
v___x_2897_ = lean_box(v___x_2888_);
v___x_2898_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___boxed), 8, 3);
lean_closure_set(v___x_2898_, 0, lean_box(0));
lean_closure_set(v___x_2898_, 1, v___f_2896_);
lean_closure_set(v___x_2898_, 2, v___x_2897_);
if (v_hasTrace_2887_ == 0)
{
lean_object* v___x_2899_; 
lean_dec_ref(v_type_2878_);
v___x_2899_ = l_Lean_Meta_mapErrorImp___redArg(v___x_2898_, v___f_2894_, v_a_2879_, v_a_2880_, v_a_2881_, v_a_2882_);
if (lean_obj_tag(v___x_2899_) == 0)
{
lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2907_; 
v_a_2900_ = lean_ctor_get(v___x_2899_, 0);
v_isSharedCheck_2907_ = !lean_is_exclusive(v___x_2899_);
if (v_isSharedCheck_2907_ == 0)
{
v___x_2902_ = v___x_2899_;
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v___x_2899_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2905_; 
if (v_isShared_2903_ == 0)
{
v___x_2905_ = v___x_2902_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v_a_2900_);
v___x_2905_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
return v___x_2905_;
}
}
}
else
{
lean_object* v_a_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2915_; 
v_a_2908_ = lean_ctor_get(v___x_2899_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2899_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2910_ = v___x_2899_;
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_a_2908_);
lean_dec(v___x_2899_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2913_; 
if (v_isShared_2911_ == 0)
{
v___x_2913_ = v___x_2910_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v_a_2908_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
}
else
{
lean_object* v___f_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; uint8_t v___x_2920_; lean_object* v___y_2922_; lean_object* v___y_2923_; lean_object* v_a_2924_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v_a_2939_; 
v___f_2916_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___boxed), 7, 1);
lean_closure_set(v___f_2916_, 0, v_type_2878_);
v___x_2917_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17));
v___x_2918_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___closed__1));
v___x_2919_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20);
v___x_2920_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2886_, v_options_2885_, v___x_2919_);
if (v___x_2920_ == 0)
{
lean_object* v___x_2989_; uint8_t v___x_2990_; 
v___x_2989_ = l_Lean_trace_profiler;
v___x_2990_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(v_options_2885_, v___x_2989_);
if (v___x_2990_ == 0)
{
lean_object* v___x_2991_; 
lean_dec_ref(v___f_2916_);
v___x_2991_ = l_Lean_Meta_mapErrorImp___redArg(v___x_2898_, v___f_2894_, v_a_2879_, v_a_2880_, v_a_2881_, v_a_2882_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_2999_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_2999_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_2999_ == 0)
{
v___x_2994_ = v___x_2991_;
v_isShared_2995_ = v_isSharedCheck_2999_;
goto v_resetjp_2993_;
}
else
{
lean_inc(v_a_2992_);
lean_dec(v___x_2991_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_2999_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
lean_object* v___x_2997_; 
if (v_isShared_2995_ == 0)
{
v___x_2997_ = v___x_2994_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v_a_2992_);
v___x_2997_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
return v___x_2997_;
}
}
}
else
{
lean_object* v_a_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3007_; 
v_a_3000_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_3002_ = v___x_2991_;
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_a_3000_);
lean_dec(v___x_2991_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3005_; 
if (v_isShared_3003_ == 0)
{
v___x_3005_ = v___x_3002_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_a_3000_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
}
}
else
{
goto v___jp_2948_;
}
}
else
{
goto v___jp_2948_;
}
v___jp_2921_:
{
lean_object* v___x_2925_; double v___x_2926_; double v___x_2927_; double v___x_2928_; double v___x_2929_; double v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; 
v___x_2925_ = lean_io_mono_nanos_now();
v___x_2926_ = lean_float_of_nat(v___y_2922_);
v___x_2927_ = lean_float_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21);
v___x_2928_ = lean_float_div(v___x_2926_, v___x_2927_);
v___x_2929_ = lean_float_of_nat(v___x_2925_);
v___x_2930_ = lean_float_div(v___x_2929_, v___x_2927_);
v___x_2931_ = lean_box_float(v___x_2928_);
v___x_2932_ = lean_box_float(v___x_2930_);
v___x_2933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2933_, 0, v___x_2931_);
lean_ctor_set(v___x_2933_, 1, v___x_2932_);
v___x_2934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2934_, 0, v_a_2924_);
lean_ctor_set(v___x_2934_, 1, v___x_2933_);
v___x_2935_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2(v___x_2917_, v_hasTrace_2887_, v___x_2918_, v_options_2885_, v___x_2920_, v___y_2923_, v___f_2916_, v___x_2934_, v_a_2879_, v_a_2880_, v_a_2881_, v_a_2882_);
return v___x_2935_;
}
v___jp_2936_:
{
lean_object* v___x_2940_; double v___x_2941_; double v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; 
v___x_2940_ = lean_io_get_num_heartbeats();
v___x_2941_ = lean_float_of_nat(v___y_2937_);
v___x_2942_ = lean_float_of_nat(v___x_2940_);
v___x_2943_ = lean_box_float(v___x_2941_);
v___x_2944_ = lean_box_float(v___x_2942_);
v___x_2945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2945_, 0, v___x_2943_);
lean_ctor_set(v___x_2945_, 1, v___x_2944_);
v___x_2946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2946_, 0, v_a_2939_);
lean_ctor_set(v___x_2946_, 1, v___x_2945_);
v___x_2947_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2(v___x_2917_, v_hasTrace_2887_, v___x_2918_, v_options_2885_, v___x_2920_, v___y_2938_, v___f_2916_, v___x_2946_, v_a_2879_, v_a_2880_, v_a_2881_, v_a_2882_);
return v___x_2947_;
}
v___jp_2948_:
{
lean_object* v___x_2949_; lean_object* v_a_2950_; lean_object* v___x_2951_; uint8_t v___x_2952_; 
v___x_2949_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___redArg(v_a_2882_);
v_a_2950_ = lean_ctor_get(v___x_2949_, 0);
lean_inc(v_a_2950_);
lean_dec_ref(v___x_2949_);
v___x_2951_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2952_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(v_options_2885_, v___x_2951_);
if (v___x_2952_ == 0)
{
lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2953_ = lean_io_mono_nanos_now();
v___x_2954_ = l_Lean_Meta_mapErrorImp___redArg(v___x_2898_, v___f_2894_, v_a_2879_, v_a_2880_, v_a_2881_, v_a_2882_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_a_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_2962_; 
v_a_2955_ = lean_ctor_get(v___x_2954_, 0);
v_isSharedCheck_2962_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_2962_ == 0)
{
v___x_2957_ = v___x_2954_;
v_isShared_2958_ = v_isSharedCheck_2962_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_a_2955_);
lean_dec(v___x_2954_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_2962_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v___x_2960_; 
if (v_isShared_2958_ == 0)
{
lean_ctor_set_tag(v___x_2957_, 1);
v___x_2960_ = v___x_2957_;
goto v_reusejp_2959_;
}
else
{
lean_object* v_reuseFailAlloc_2961_; 
v_reuseFailAlloc_2961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2961_, 0, v_a_2955_);
v___x_2960_ = v_reuseFailAlloc_2961_;
goto v_reusejp_2959_;
}
v_reusejp_2959_:
{
v___y_2922_ = v___x_2953_;
v___y_2923_ = v_a_2950_;
v_a_2924_ = v___x_2960_;
goto v___jp_2921_;
}
}
}
else
{
lean_object* v_a_2963_; lean_object* v___x_2965_; uint8_t v_isShared_2966_; uint8_t v_isSharedCheck_2970_; 
v_a_2963_ = lean_ctor_get(v___x_2954_, 0);
v_isSharedCheck_2970_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_2970_ == 0)
{
v___x_2965_ = v___x_2954_;
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
else
{
lean_inc(v_a_2963_);
lean_dec(v___x_2954_);
v___x_2965_ = lean_box(0);
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
v_resetjp_2964_:
{
lean_object* v___x_2968_; 
if (v_isShared_2966_ == 0)
{
lean_ctor_set_tag(v___x_2965_, 0);
v___x_2968_ = v___x_2965_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v_a_2963_);
v___x_2968_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
v___y_2922_ = v___x_2953_;
v___y_2923_ = v_a_2950_;
v_a_2924_ = v___x_2968_;
goto v___jp_2921_;
}
}
}
}
else
{
lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2971_ = lean_io_get_num_heartbeats();
v___x_2972_ = l_Lean_Meta_mapErrorImp___redArg(v___x_2898_, v___f_2894_, v_a_2879_, v_a_2880_, v_a_2881_, v_a_2882_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; lean_object* v___x_2975_; uint8_t v_isShared_2976_; uint8_t v_isSharedCheck_2980_; 
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_2980_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_2980_ == 0)
{
v___x_2975_ = v___x_2972_;
v_isShared_2976_ = v_isSharedCheck_2980_;
goto v_resetjp_2974_;
}
else
{
lean_inc(v_a_2973_);
lean_dec(v___x_2972_);
v___x_2975_ = lean_box(0);
v_isShared_2976_ = v_isSharedCheck_2980_;
goto v_resetjp_2974_;
}
v_resetjp_2974_:
{
lean_object* v___x_2978_; 
if (v_isShared_2976_ == 0)
{
lean_ctor_set_tag(v___x_2975_, 1);
v___x_2978_ = v___x_2975_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v_a_2973_);
v___x_2978_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
v___y_2937_ = v___x_2971_;
v___y_2938_ = v_a_2950_;
v_a_2939_ = v___x_2978_;
goto v___jp_2936_;
}
}
}
else
{
lean_object* v_a_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_2988_; 
v_a_2981_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2983_ = v___x_2972_;
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_a_2981_);
lean_dec(v___x_2972_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2986_; 
if (v_isShared_2984_ == 0)
{
lean_ctor_set_tag(v___x_2983_, 0);
v___x_2986_ = v___x_2983_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_a_2981_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
v___y_2937_ = v___x_2971_;
v___y_2938_ = v_a_2950_;
v_a_2939_ = v___x_2986_;
goto v___jp_2936_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___boxed(lean_object* v_declName_3008_, lean_object* v_type_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_, lean_object* v_a_3014_){
_start:
{
lean_object* v_res_3015_; 
v_res_3015_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof(v_declName_3008_, v_type_3009_, v_a_3010_, v_a_3011_, v_a_3012_, v_a_3013_);
lean_dec(v_a_3013_);
lean_dec_ref(v_a_3012_);
lean_dec(v_a_3011_);
lean_dec_ref(v_a_3010_);
return v_res_3015_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_(lean_object* v_env_3016_, lean_object* v_n_3017_, lean_object* v_x_3018_){
_start:
{
uint8_t v___x_3019_; 
v___x_3019_ = l_Lean_Environment_hasExposedBody(v_env_3016_, v_n_3017_);
return v___x_3019_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2____boxed(lean_object* v_env_3020_, lean_object* v_n_3021_, lean_object* v_x_3022_){
_start:
{
uint8_t v_res_3023_; lean_object* v_r_3024_; 
v_res_3023_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_(v_env_3020_, v_n_3021_, v_x_3022_);
lean_dec_ref(v_x_3022_);
v_r_3024_ = lean_box(v_res_3023_);
return v_r_3024_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_3025_, lean_object* v_x_3026_){
_start:
{
if (lean_obj_tag(v_x_3026_) == 0)
{
lean_object* v_k_3027_; lean_object* v_v_3028_; lean_object* v_l_3029_; lean_object* v_r_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; 
v_k_3027_ = lean_ctor_get(v_x_3026_, 1);
v_v_3028_ = lean_ctor_get(v_x_3026_, 2);
v_l_3029_ = lean_ctor_get(v_x_3026_, 3);
v_r_3030_ = lean_ctor_get(v_x_3026_, 4);
v___x_3031_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__spec__0_spec__0(v_init_3025_, v_l_3029_);
lean_inc(v_v_3028_);
lean_inc(v_k_3027_);
v___x_3032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3032_, 0, v_k_3027_);
lean_ctor_set(v___x_3032_, 1, v_v_3028_);
v___x_3033_ = lean_array_push(v___x_3031_, v___x_3032_);
v_init_3025_ = v___x_3033_;
v_x_3026_ = v_r_3030_;
goto _start;
}
else
{
return v_init_3025_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_3035_, lean_object* v_x_3036_){
_start:
{
lean_object* v_res_3037_; 
v_res_3037_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__spec__0_spec__0(v_init_3035_, v_x_3036_);
lean_dec(v_x_3036_);
return v_res_3037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_(lean_object* v_env_3040_, lean_object* v_s_3041_){
_start:
{
lean_object* v___f_3042_; lean_object* v___x_3043_; lean_object* v_all_3044_; lean_object* v___x_3045_; lean_object* v_exported_3046_; lean_object* v___x_3047_; 
v___f_3042_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2____boxed), 3, 1);
lean_closure_set(v___f_3042_, 0, v_env_3040_);
v___x_3043_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_));
v_all_3044_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__spec__0_spec__0(v___x_3043_, v_s_3041_);
v___x_3045_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(v___f_3042_, v_s_3041_);
v_exported_3046_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__spec__0_spec__0(v___x_3043_, v___x_3045_);
lean_dec(v___x_3045_);
lean_inc_ref(v_exported_3046_);
v___x_3047_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3047_, 0, v_exported_3046_);
lean_ctor_set(v___x_3047_, 1, v_exported_3046_);
lean_ctor_set(v___x_3047_, 2, v_all_3044_);
return v___x_3047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___f_3060_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_));
v___x_3061_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_));
v___x_3062_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_));
v___x_3063_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_3061_, v___x_3062_, v___f_3060_);
return v___x_3063_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2____boxed(lean_object* v_a_3064_){
_start:
{
lean_object* v_res_3065_; 
v_res_3065_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_();
return v_res_3065_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__spec__0(lean_object* v_init_3066_, lean_object* v_t_3067_){
_start:
{
lean_object* v___x_3068_; 
v___x_3068_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__spec__0_spec__0(v_init_3066_, v_t_3067_);
return v___x_3068_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_3069_, lean_object* v_t_3070_){
_start:
{
lean_object* v_res_3071_; 
v_res_3071_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2__spec__0(v_init_3069_, v_t_3070_);
lean_dec(v_t_3070_);
return v_res_3071_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__0(void){
_start:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___x_3072_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__3);
v___x_3073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3072_);
return v___x_3073_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__1(void){
_start:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3074_ = lean_obj_once(&l_Lean_Elab_Structural_registerEqnsInfo___closed__0, &l_Lean_Elab_Structural_registerEqnsInfo___closed__0_once, _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__0);
v___x_3075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3074_);
lean_ctor_set(v___x_3075_, 1, v___x_3074_);
return v___x_3075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_registerEqnsInfo(lean_object* v_preDef_3076_, lean_object* v_declNames_3077_, lean_object* v_recArgPos_3078_, lean_object* v_fixedParamPerms_3079_, lean_object* v_a_3080_, lean_object* v_a_3081_){
_start:
{
lean_object* v_levelParams_3083_; lean_object* v_declName_3084_; lean_object* v_type_3085_; lean_object* v_value_3086_; lean_object* v___x_3087_; 
v_levelParams_3083_ = lean_ctor_get(v_preDef_3076_, 1);
lean_inc(v_levelParams_3083_);
v_declName_3084_ = lean_ctor_get(v_preDef_3076_, 3);
lean_inc_n(v_declName_3084_, 2);
v_type_3085_ = lean_ctor_get(v_preDef_3076_, 6);
lean_inc_ref(v_type_3085_);
v_value_3086_ = lean_ctor_get(v_preDef_3076_, 7);
lean_inc_ref(v_value_3086_);
lean_dec_ref(v_preDef_3076_);
v___x_3087_ = l_Lean_Meta_ensureEqnReservedNamesAvailable(v_declName_3084_, v_a_3080_, v_a_3081_);
if (lean_obj_tag(v___x_3087_) == 0)
{
lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3117_; 
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_3087_);
if (v_isSharedCheck_3117_ == 0)
{
lean_object* v_unused_3118_; 
v_unused_3118_ = lean_ctor_get(v___x_3087_, 0);
lean_dec(v_unused_3118_);
v___x_3089_ = v___x_3087_;
v_isShared_3090_ = v_isSharedCheck_3117_;
goto v_resetjp_3088_;
}
else
{
lean_dec(v___x_3087_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3117_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v___x_3091_; lean_object* v_env_3092_; lean_object* v_nextMacroScope_3093_; lean_object* v_ngen_3094_; lean_object* v_auxDeclNGen_3095_; lean_object* v_traceState_3096_; lean_object* v_messages_3097_; lean_object* v_infoState_3098_; lean_object* v_snapshotTasks_3099_; lean_object* v___x_3101_; uint8_t v_isShared_3102_; uint8_t v_isSharedCheck_3115_; 
v___x_3091_ = lean_st_ref_take(v_a_3081_);
v_env_3092_ = lean_ctor_get(v___x_3091_, 0);
v_nextMacroScope_3093_ = lean_ctor_get(v___x_3091_, 1);
v_ngen_3094_ = lean_ctor_get(v___x_3091_, 2);
v_auxDeclNGen_3095_ = lean_ctor_get(v___x_3091_, 3);
v_traceState_3096_ = lean_ctor_get(v___x_3091_, 4);
v_messages_3097_ = lean_ctor_get(v___x_3091_, 6);
v_infoState_3098_ = lean_ctor_get(v___x_3091_, 7);
v_snapshotTasks_3099_ = lean_ctor_get(v___x_3091_, 8);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3091_);
if (v_isSharedCheck_3115_ == 0)
{
lean_object* v_unused_3116_; 
v_unused_3116_ = lean_ctor_get(v___x_3091_, 5);
lean_dec(v_unused_3116_);
v___x_3101_ = v___x_3091_;
v_isShared_3102_ = v_isSharedCheck_3115_;
goto v_resetjp_3100_;
}
else
{
lean_inc(v_snapshotTasks_3099_);
lean_inc(v_infoState_3098_);
lean_inc(v_messages_3097_);
lean_inc(v_traceState_3096_);
lean_inc(v_auxDeclNGen_3095_);
lean_inc(v_ngen_3094_);
lean_inc(v_nextMacroScope_3093_);
lean_inc(v_env_3092_);
lean_dec(v___x_3091_);
v___x_3101_ = lean_box(0);
v_isShared_3102_ = v_isSharedCheck_3115_;
goto v_resetjp_3100_;
}
v_resetjp_3100_:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3109_; 
v___x_3103_ = lean_box(0);
v___x_3104_ = l_Lean_Elab_Structural_eqnInfoExt;
lean_inc(v_declName_3084_);
v___x_3105_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_3105_, 0, v_declName_3084_);
lean_ctor_set(v___x_3105_, 1, v_levelParams_3083_);
lean_ctor_set(v___x_3105_, 2, v_type_3085_);
lean_ctor_set(v___x_3105_, 3, v_value_3086_);
lean_ctor_set(v___x_3105_, 4, v_recArgPos_3078_);
lean_ctor_set(v___x_3105_, 5, v_declNames_3077_);
lean_ctor_set(v___x_3105_, 6, v_fixedParamPerms_3079_);
v___x_3106_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_3104_, v_env_3092_, v_declName_3084_, v___x_3105_);
v___x_3107_ = lean_obj_once(&l_Lean_Elab_Structural_registerEqnsInfo___closed__1, &l_Lean_Elab_Structural_registerEqnsInfo___closed__1_once, _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__1);
if (v_isShared_3102_ == 0)
{
lean_ctor_set(v___x_3101_, 5, v___x_3107_);
lean_ctor_set(v___x_3101_, 0, v___x_3106_);
v___x_3109_ = v___x_3101_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v___x_3106_);
lean_ctor_set(v_reuseFailAlloc_3114_, 1, v_nextMacroScope_3093_);
lean_ctor_set(v_reuseFailAlloc_3114_, 2, v_ngen_3094_);
lean_ctor_set(v_reuseFailAlloc_3114_, 3, v_auxDeclNGen_3095_);
lean_ctor_set(v_reuseFailAlloc_3114_, 4, v_traceState_3096_);
lean_ctor_set(v_reuseFailAlloc_3114_, 5, v___x_3107_);
lean_ctor_set(v_reuseFailAlloc_3114_, 6, v_messages_3097_);
lean_ctor_set(v_reuseFailAlloc_3114_, 7, v_infoState_3098_);
lean_ctor_set(v_reuseFailAlloc_3114_, 8, v_snapshotTasks_3099_);
v___x_3109_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
lean_object* v___x_3110_; lean_object* v___x_3112_; 
v___x_3110_ = lean_st_ref_put(v_a_3081_, v___x_3109_);
if (v_isShared_3090_ == 0)
{
lean_ctor_set(v___x_3089_, 0, v___x_3103_);
v___x_3112_ = v___x_3089_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v___x_3103_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
return v___x_3112_;
}
}
}
}
}
else
{
lean_dec_ref(v_value_3086_);
lean_dec_ref(v_type_3085_);
lean_dec(v_declName_3084_);
lean_dec(v_levelParams_3083_);
lean_dec_ref(v_fixedParamPerms_3079_);
lean_dec(v_recArgPos_3078_);
lean_dec_ref(v_declNames_3077_);
return v___x_3087_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_registerEqnsInfo___boxed(lean_object* v_preDef_3119_, lean_object* v_declNames_3120_, lean_object* v_recArgPos_3121_, lean_object* v_fixedParamPerms_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_){
_start:
{
lean_object* v_res_3126_; 
v_res_3126_ = l_Lean_Elab_Structural_registerEqnsInfo(v_preDef_3119_, v_declNames_3120_, v_recArgPos_3121_, v_fixedParamPerms_3122_, v_a_3123_, v_a_3124_);
lean_dec(v_a_3124_);
lean_dec_ref(v_a_3123_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___redArg(lean_object* v_e_3127_, lean_object* v_k_3128_, uint8_t v_cleanupAnnotations_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_){
_start:
{
lean_object* v___f_3135_; uint8_t v___x_3136_; uint8_t v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v___f_3135_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3135_, 0, v_k_3128_);
v___x_3136_ = 1;
v___x_3137_ = 0;
v___x_3138_ = lean_box(0);
v___x_3139_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_3127_, v___x_3136_, v___x_3137_, v___x_3136_, v___x_3137_, v___x_3138_, v___f_3135_, v_cleanupAnnotations_3129_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_);
if (lean_obj_tag(v___x_3139_) == 0)
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3147_; 
v_a_3140_ = lean_ctor_get(v___x_3139_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v___x_3139_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3142_ = v___x_3139_;
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3139_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3145_; 
if (v_isShared_3143_ == 0)
{
v___x_3145_ = v___x_3142_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_a_3140_);
v___x_3145_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
return v___x_3145_;
}
}
}
else
{
lean_object* v_a_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3155_; 
v_a_3148_ = lean_ctor_get(v___x_3139_, 0);
v_isSharedCheck_3155_ = !lean_is_exclusive(v___x_3139_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3150_ = v___x_3139_;
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_a_3148_);
lean_dec(v___x_3139_);
v___x_3150_ = lean_box(0);
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
v_resetjp_3149_:
{
lean_object* v___x_3153_; 
if (v_isShared_3151_ == 0)
{
v___x_3153_ = v___x_3150_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v_a_3148_);
v___x_3153_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
return v___x_3153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___redArg___boxed(lean_object* v_e_3156_, lean_object* v_k_3157_, lean_object* v_cleanupAnnotations_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3164_; lean_object* v_res_3165_; 
v_cleanupAnnotations_boxed_3164_ = lean_unbox(v_cleanupAnnotations_3158_);
v_res_3165_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___redArg(v_e_3156_, v_k_3157_, v_cleanupAnnotations_boxed_3164_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_);
lean_dec(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec(v___y_3160_);
lean_dec_ref(v___y_3159_);
return v_res_3165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3(lean_object* v_00_u03b1_3166_, lean_object* v_e_3167_, lean_object* v_k_3168_, uint8_t v_cleanupAnnotations_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_){
_start:
{
lean_object* v___x_3175_; 
v___x_3175_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___redArg(v_e_3167_, v_k_3168_, v_cleanupAnnotations_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_);
return v___x_3175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___boxed(lean_object* v_00_u03b1_3176_, lean_object* v_e_3177_, lean_object* v_k_3178_, lean_object* v_cleanupAnnotations_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3185_; lean_object* v_res_3186_; 
v_cleanupAnnotations_boxed_3185_ = lean_unbox(v_cleanupAnnotations_3179_);
v_res_3186_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3(v_00_u03b1_3176_, v_e_3177_, v_k_3178_, v_cleanupAnnotations_boxed_3185_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_);
lean_dec(v___y_3183_);
lean_dec_ref(v___y_3182_);
lean_dec(v___y_3181_);
lean_dec_ref(v___y_3180_);
return v_res_3186_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___lam__0(lean_object* v___y_3187_, uint8_t v_isExporting_3188_, lean_object* v___x_3189_, lean_object* v___y_3190_, lean_object* v___x_3191_, lean_object* v_a_x3f_3192_){
_start:
{
lean_object* v___x_3194_; lean_object* v_env_3195_; lean_object* v_nextMacroScope_3196_; lean_object* v_ngen_3197_; lean_object* v_auxDeclNGen_3198_; lean_object* v_traceState_3199_; lean_object* v_messages_3200_; lean_object* v_infoState_3201_; lean_object* v_snapshotTasks_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3227_; 
v___x_3194_ = lean_st_ref_take(v___y_3187_);
v_env_3195_ = lean_ctor_get(v___x_3194_, 0);
v_nextMacroScope_3196_ = lean_ctor_get(v___x_3194_, 1);
v_ngen_3197_ = lean_ctor_get(v___x_3194_, 2);
v_auxDeclNGen_3198_ = lean_ctor_get(v___x_3194_, 3);
v_traceState_3199_ = lean_ctor_get(v___x_3194_, 4);
v_messages_3200_ = lean_ctor_get(v___x_3194_, 6);
v_infoState_3201_ = lean_ctor_get(v___x_3194_, 7);
v_snapshotTasks_3202_ = lean_ctor_get(v___x_3194_, 8);
v_isSharedCheck_3227_ = !lean_is_exclusive(v___x_3194_);
if (v_isSharedCheck_3227_ == 0)
{
lean_object* v_unused_3228_; 
v_unused_3228_ = lean_ctor_get(v___x_3194_, 5);
lean_dec(v_unused_3228_);
v___x_3204_ = v___x_3194_;
v_isShared_3205_ = v_isSharedCheck_3227_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_snapshotTasks_3202_);
lean_inc(v_infoState_3201_);
lean_inc(v_messages_3200_);
lean_inc(v_traceState_3199_);
lean_inc(v_auxDeclNGen_3198_);
lean_inc(v_ngen_3197_);
lean_inc(v_nextMacroScope_3196_);
lean_inc(v_env_3195_);
lean_dec(v___x_3194_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3227_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___x_3206_; lean_object* v___x_3208_; 
v___x_3206_ = l_Lean_Environment_setExporting(v_env_3195_, v_isExporting_3188_);
if (v_isShared_3205_ == 0)
{
lean_ctor_set(v___x_3204_, 5, v___x_3189_);
lean_ctor_set(v___x_3204_, 0, v___x_3206_);
v___x_3208_ = v___x_3204_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v___x_3206_);
lean_ctor_set(v_reuseFailAlloc_3226_, 1, v_nextMacroScope_3196_);
lean_ctor_set(v_reuseFailAlloc_3226_, 2, v_ngen_3197_);
lean_ctor_set(v_reuseFailAlloc_3226_, 3, v_auxDeclNGen_3198_);
lean_ctor_set(v_reuseFailAlloc_3226_, 4, v_traceState_3199_);
lean_ctor_set(v_reuseFailAlloc_3226_, 5, v___x_3189_);
lean_ctor_set(v_reuseFailAlloc_3226_, 6, v_messages_3200_);
lean_ctor_set(v_reuseFailAlloc_3226_, 7, v_infoState_3201_);
lean_ctor_set(v_reuseFailAlloc_3226_, 8, v_snapshotTasks_3202_);
v___x_3208_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v_mctx_3211_; lean_object* v_zetaDeltaFVarIds_3212_; lean_object* v_postponed_3213_; lean_object* v_diag_3214_; lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3224_; 
v___x_3209_ = lean_st_ref_put(v___y_3187_, v___x_3208_);
v___x_3210_ = lean_st_ref_take(v___y_3190_);
v_mctx_3211_ = lean_ctor_get(v___x_3210_, 0);
v_zetaDeltaFVarIds_3212_ = lean_ctor_get(v___x_3210_, 2);
v_postponed_3213_ = lean_ctor_get(v___x_3210_, 3);
v_diag_3214_ = lean_ctor_get(v___x_3210_, 4);
v_isSharedCheck_3224_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3224_ == 0)
{
lean_object* v_unused_3225_; 
v_unused_3225_ = lean_ctor_get(v___x_3210_, 1);
lean_dec(v_unused_3225_);
v___x_3216_ = v___x_3210_;
v_isShared_3217_ = v_isSharedCheck_3224_;
goto v_resetjp_3215_;
}
else
{
lean_inc(v_diag_3214_);
lean_inc(v_postponed_3213_);
lean_inc(v_zetaDeltaFVarIds_3212_);
lean_inc(v_mctx_3211_);
lean_dec(v___x_3210_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3224_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
lean_object* v___x_3218_; lean_object* v___x_3220_; 
v___x_3218_ = lean_box(0);
if (v_isShared_3217_ == 0)
{
lean_ctor_set(v___x_3216_, 1, v___x_3191_);
v___x_3220_ = v___x_3216_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v_mctx_3211_);
lean_ctor_set(v_reuseFailAlloc_3223_, 1, v___x_3191_);
lean_ctor_set(v_reuseFailAlloc_3223_, 2, v_zetaDeltaFVarIds_3212_);
lean_ctor_set(v_reuseFailAlloc_3223_, 3, v_postponed_3213_);
lean_ctor_set(v_reuseFailAlloc_3223_, 4, v_diag_3214_);
v___x_3220_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3221_ = lean_st_ref_put(v___y_3190_, v___x_3220_);
v___x_3222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3218_);
return v___x_3222_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v___y_3229_, lean_object* v_isExporting_3230_, lean_object* v___x_3231_, lean_object* v___y_3232_, lean_object* v___x_3233_, lean_object* v_a_x3f_3234_, lean_object* v___y_3235_){
_start:
{
uint8_t v_isExporting_boxed_3236_; lean_object* v_res_3237_; 
v_isExporting_boxed_3236_ = lean_unbox(v_isExporting_3230_);
v_res_3237_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___lam__0(v___y_3229_, v_isExporting_boxed_3236_, v___x_3231_, v___y_3232_, v___x_3233_, v_a_x3f_3234_);
lean_dec(v_a_x3f_3234_);
lean_dec(v___y_3232_);
lean_dec(v___y_3229_);
return v_res_3237_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_3238_; lean_object* v___x_3239_; 
v___x_3238_ = lean_obj_once(&l_Lean_Elab_Structural_registerEqnsInfo___closed__0, &l_Lean_Elab_Structural_registerEqnsInfo___closed__0_once, _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__0);
v___x_3239_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3239_, 0, v___x_3238_);
lean_ctor_set(v___x_3239_, 1, v___x_3238_);
lean_ctor_set(v___x_3239_, 2, v___x_3238_);
lean_ctor_set(v___x_3239_, 3, v___x_3238_);
lean_ctor_set(v___x_3239_, 4, v___x_3238_);
lean_ctor_set(v___x_3239_, 5, v___x_3238_);
return v___x_3239_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg(lean_object* v_x_3240_, uint8_t v_isExporting_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_){
_start:
{
lean_object* v___x_3247_; lean_object* v_env_3248_; lean_object* v___x_3249_; uint8_t v_isModule_3250_; 
v___x_3247_ = lean_st_ref_get(v___y_3245_);
v_env_3248_ = lean_ctor_get(v___x_3247_, 0);
lean_inc_ref(v_env_3248_);
lean_dec(v___x_3247_);
v___x_3249_ = l_Lean_Environment_header(v_env_3248_);
v_isModule_3250_ = lean_ctor_get_uint8(v___x_3249_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_3249_);
if (v_isModule_3250_ == 0)
{
lean_object* v___x_3251_; 
lean_dec_ref(v_env_3248_);
lean_inc(v___y_3245_);
lean_inc_ref(v___y_3244_);
lean_inc(v___y_3243_);
lean_inc_ref(v___y_3242_);
v___x_3251_ = lean_apply_5(v_x_3240_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_, lean_box(0));
return v___x_3251_;
}
else
{
uint8_t v_isExporting_3252_; 
v_isExporting_3252_ = lean_ctor_get_uint8(v_env_3248_, sizeof(void*)*8);
lean_dec_ref(v_env_3248_);
if (v_isExporting_3241_ == 0)
{
if (v_isExporting_3252_ == 0)
{
lean_object* v___x_3318_; 
lean_inc(v___y_3245_);
lean_inc_ref(v___y_3244_);
lean_inc(v___y_3243_);
lean_inc_ref(v___y_3242_);
v___x_3318_ = lean_apply_5(v_x_3240_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_, lean_box(0));
return v___x_3318_;
}
else
{
goto v___jp_3253_;
}
}
else
{
if (v_isExporting_3252_ == 0)
{
goto v___jp_3253_;
}
else
{
lean_object* v___x_3319_; 
lean_inc(v___y_3245_);
lean_inc_ref(v___y_3244_);
lean_inc(v___y_3243_);
lean_inc_ref(v___y_3242_);
v___x_3319_ = lean_apply_5(v_x_3240_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_, lean_box(0));
return v___x_3319_;
}
}
v___jp_3253_:
{
lean_object* v___x_3254_; lean_object* v_env_3255_; lean_object* v_nextMacroScope_3256_; lean_object* v_ngen_3257_; lean_object* v_auxDeclNGen_3258_; lean_object* v_traceState_3259_; lean_object* v_messages_3260_; lean_object* v_infoState_3261_; lean_object* v_snapshotTasks_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3316_; 
v___x_3254_ = lean_st_ref_take(v___y_3245_);
v_env_3255_ = lean_ctor_get(v___x_3254_, 0);
v_nextMacroScope_3256_ = lean_ctor_get(v___x_3254_, 1);
v_ngen_3257_ = lean_ctor_get(v___x_3254_, 2);
v_auxDeclNGen_3258_ = lean_ctor_get(v___x_3254_, 3);
v_traceState_3259_ = lean_ctor_get(v___x_3254_, 4);
v_messages_3260_ = lean_ctor_get(v___x_3254_, 6);
v_infoState_3261_ = lean_ctor_get(v___x_3254_, 7);
v_snapshotTasks_3262_ = lean_ctor_get(v___x_3254_, 8);
v_isSharedCheck_3316_ = !lean_is_exclusive(v___x_3254_);
if (v_isSharedCheck_3316_ == 0)
{
lean_object* v_unused_3317_; 
v_unused_3317_ = lean_ctor_get(v___x_3254_, 5);
lean_dec(v_unused_3317_);
v___x_3264_ = v___x_3254_;
v_isShared_3265_ = v_isSharedCheck_3316_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_snapshotTasks_3262_);
lean_inc(v_infoState_3261_);
lean_inc(v_messages_3260_);
lean_inc(v_traceState_3259_);
lean_inc(v_auxDeclNGen_3258_);
lean_inc(v_ngen_3257_);
lean_inc(v_nextMacroScope_3256_);
lean_inc(v_env_3255_);
lean_dec(v___x_3254_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3316_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3269_; 
v___x_3266_ = l_Lean_Environment_setExporting(v_env_3255_, v_isExporting_3241_);
v___x_3267_ = lean_obj_once(&l_Lean_Elab_Structural_registerEqnsInfo___closed__1, &l_Lean_Elab_Structural_registerEqnsInfo___closed__1_once, _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__1);
if (v_isShared_3265_ == 0)
{
lean_ctor_set(v___x_3264_, 5, v___x_3267_);
lean_ctor_set(v___x_3264_, 0, v___x_3266_);
v___x_3269_ = v___x_3264_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v___x_3266_);
lean_ctor_set(v_reuseFailAlloc_3315_, 1, v_nextMacroScope_3256_);
lean_ctor_set(v_reuseFailAlloc_3315_, 2, v_ngen_3257_);
lean_ctor_set(v_reuseFailAlloc_3315_, 3, v_auxDeclNGen_3258_);
lean_ctor_set(v_reuseFailAlloc_3315_, 4, v_traceState_3259_);
lean_ctor_set(v_reuseFailAlloc_3315_, 5, v___x_3267_);
lean_ctor_set(v_reuseFailAlloc_3315_, 6, v_messages_3260_);
lean_ctor_set(v_reuseFailAlloc_3315_, 7, v_infoState_3261_);
lean_ctor_set(v_reuseFailAlloc_3315_, 8, v_snapshotTasks_3262_);
v___x_3269_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v_mctx_3272_; lean_object* v_zetaDeltaFVarIds_3273_; lean_object* v_postponed_3274_; lean_object* v_diag_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3313_; 
v___x_3270_ = lean_st_ref_put(v___y_3245_, v___x_3269_);
v___x_3271_ = lean_st_ref_take(v___y_3243_);
v_mctx_3272_ = lean_ctor_get(v___x_3271_, 0);
v_zetaDeltaFVarIds_3273_ = lean_ctor_get(v___x_3271_, 2);
v_postponed_3274_ = lean_ctor_get(v___x_3271_, 3);
v_diag_3275_ = lean_ctor_get(v___x_3271_, 4);
v_isSharedCheck_3313_ = !lean_is_exclusive(v___x_3271_);
if (v_isSharedCheck_3313_ == 0)
{
lean_object* v_unused_3314_; 
v_unused_3314_ = lean_ctor_get(v___x_3271_, 1);
lean_dec(v_unused_3314_);
v___x_3277_ = v___x_3271_;
v_isShared_3278_ = v_isSharedCheck_3313_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_diag_3275_);
lean_inc(v_postponed_3274_);
lean_inc(v_zetaDeltaFVarIds_3273_);
lean_inc(v_mctx_3272_);
lean_dec(v___x_3271_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3313_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
lean_object* v___x_3279_; lean_object* v___x_3281_; 
v___x_3279_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___closed__0);
if (v_isShared_3278_ == 0)
{
lean_ctor_set(v___x_3277_, 1, v___x_3279_);
v___x_3281_ = v___x_3277_;
goto v_reusejp_3280_;
}
else
{
lean_object* v_reuseFailAlloc_3312_; 
v_reuseFailAlloc_3312_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3312_, 0, v_mctx_3272_);
lean_ctor_set(v_reuseFailAlloc_3312_, 1, v___x_3279_);
lean_ctor_set(v_reuseFailAlloc_3312_, 2, v_zetaDeltaFVarIds_3273_);
lean_ctor_set(v_reuseFailAlloc_3312_, 3, v_postponed_3274_);
lean_ctor_set(v_reuseFailAlloc_3312_, 4, v_diag_3275_);
v___x_3281_ = v_reuseFailAlloc_3312_;
goto v_reusejp_3280_;
}
v_reusejp_3280_:
{
lean_object* v___x_3282_; lean_object* v_r_3283_; 
v___x_3282_ = lean_st_ref_put(v___y_3243_, v___x_3281_);
lean_inc(v___y_3245_);
lean_inc_ref(v___y_3244_);
lean_inc(v___y_3243_);
lean_inc_ref(v___y_3242_);
v_r_3283_ = lean_apply_5(v_x_3240_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_, lean_box(0));
if (lean_obj_tag(v_r_3283_) == 0)
{
lean_object* v_a_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3300_; 
v_a_3284_ = lean_ctor_get(v_r_3283_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v_r_3283_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3286_ = v_r_3283_;
v_isShared_3287_ = v_isSharedCheck_3300_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_a_3284_);
lean_dec(v_r_3283_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3300_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___x_3289_; 
lean_inc(v_a_3284_);
if (v_isShared_3287_ == 0)
{
lean_ctor_set_tag(v___x_3286_, 1);
v___x_3289_ = v___x_3286_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v_a_3284_);
v___x_3289_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
lean_object* v___x_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3297_; 
v___x_3290_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___lam__0(v___y_3245_, v_isExporting_3252_, v___x_3267_, v___y_3243_, v___x_3279_, v___x_3289_);
lean_dec_ref(v___x_3289_);
v_isSharedCheck_3297_ = !lean_is_exclusive(v___x_3290_);
if (v_isSharedCheck_3297_ == 0)
{
lean_object* v_unused_3298_; 
v_unused_3298_ = lean_ctor_get(v___x_3290_, 0);
lean_dec(v_unused_3298_);
v___x_3292_ = v___x_3290_;
v_isShared_3293_ = v_isSharedCheck_3297_;
goto v_resetjp_3291_;
}
else
{
lean_dec(v___x_3290_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3297_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
lean_object* v___x_3295_; 
if (v_isShared_3293_ == 0)
{
lean_ctor_set(v___x_3292_, 0, v_a_3284_);
v___x_3295_ = v___x_3292_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v_a_3284_);
v___x_3295_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
return v___x_3295_;
}
}
}
}
}
else
{
lean_object* v_a_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3305_; uint8_t v_isShared_3306_; uint8_t v_isSharedCheck_3310_; 
v_a_3301_ = lean_ctor_get(v_r_3283_, 0);
lean_inc(v_a_3301_);
lean_dec_ref_known(v_r_3283_, 1);
v___x_3302_ = lean_box(0);
v___x_3303_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___lam__0(v___y_3245_, v_isExporting_3252_, v___x_3267_, v___y_3243_, v___x_3279_, v___x_3302_);
v_isSharedCheck_3310_ = !lean_is_exclusive(v___x_3303_);
if (v_isSharedCheck_3310_ == 0)
{
lean_object* v_unused_3311_; 
v_unused_3311_ = lean_ctor_get(v___x_3303_, 0);
lean_dec(v_unused_3311_);
v___x_3305_ = v___x_3303_;
v_isShared_3306_ = v_isSharedCheck_3310_;
goto v_resetjp_3304_;
}
else
{
lean_dec(v___x_3303_);
v___x_3305_ = lean_box(0);
v_isShared_3306_ = v_isSharedCheck_3310_;
goto v_resetjp_3304_;
}
v_resetjp_3304_:
{
lean_object* v___x_3308_; 
if (v_isShared_3306_ == 0)
{
lean_ctor_set_tag(v___x_3305_, 1);
lean_ctor_set(v___x_3305_, 0, v_a_3301_);
v___x_3308_ = v___x_3305_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v_a_3301_);
v___x_3308_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
return v___x_3308_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___boxed(lean_object* v_x_3320_, lean_object* v_isExporting_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_){
_start:
{
uint8_t v_isExporting_boxed_3327_; lean_object* v_res_3328_; 
v_isExporting_boxed_3327_ = lean_unbox(v_isExporting_3321_);
v_res_3328_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg(v_x_3320_, v_isExporting_boxed_3327_, v___y_3322_, v___y_3323_, v___y_3324_, v___y_3325_);
lean_dec(v___y_3325_);
lean_dec_ref(v___y_3324_);
lean_dec(v___y_3323_);
lean_dec_ref(v___y_3322_);
return v_res_3328_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___redArg(lean_object* v_x_3329_, uint8_t v_when_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_){
_start:
{
if (v_when_3330_ == 0)
{
lean_object* v___x_3336_; 
lean_inc(v___y_3334_);
lean_inc_ref(v___y_3333_);
lean_inc(v___y_3332_);
lean_inc_ref(v___y_3331_);
v___x_3336_ = lean_apply_5(v_x_3329_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_, lean_box(0));
return v___x_3336_;
}
else
{
uint8_t v___x_3337_; lean_object* v___x_3338_; 
v___x_3337_ = 0;
v___x_3338_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg(v_x_3329_, v___x_3337_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
return v___x_3338_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___redArg___boxed(lean_object* v_x_3339_, lean_object* v_when_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_){
_start:
{
uint8_t v_when_boxed_3346_; lean_object* v_res_3347_; 
v_when_boxed_3346_ = lean_unbox(v_when_3340_);
v_res_3347_ = l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___redArg(v_x_3339_, v_when_boxed_3346_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
lean_dec(v___y_3342_);
lean_dec_ref(v___y_3341_);
return v_res_3347_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__0(lean_object* v_a_3348_, lean_object* v_a_3349_){
_start:
{
if (lean_obj_tag(v_a_3348_) == 0)
{
lean_object* v___x_3350_; 
v___x_3350_ = l_List_reverse___redArg(v_a_3349_);
return v___x_3350_;
}
else
{
lean_object* v_head_3351_; lean_object* v_tail_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3361_; 
v_head_3351_ = lean_ctor_get(v_a_3348_, 0);
v_tail_3352_ = lean_ctor_get(v_a_3348_, 1);
v_isSharedCheck_3361_ = !lean_is_exclusive(v_a_3348_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3354_ = v_a_3348_;
v_isShared_3355_ = v_isSharedCheck_3361_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_tail_3352_);
lean_inc(v_head_3351_);
lean_dec(v_a_3348_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3361_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3356_; lean_object* v___x_3358_; 
v___x_3356_ = l_Lean_mkLevelParam(v_head_3351_);
if (v_isShared_3355_ == 0)
{
lean_ctor_set(v___x_3354_, 1, v_a_3349_);
lean_ctor_set(v___x_3354_, 0, v___x_3356_);
v___x_3358_ = v___x_3354_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v___x_3356_);
lean_ctor_set(v_reuseFailAlloc_3360_, 1, v_a_3349_);
v___x_3358_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
v_a_3348_ = v_tail_3352_;
v_a_3349_ = v___x_3358_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___lam__0(lean_object* v_levelParams_3362_, lean_object* v_declName_3363_, lean_object* v_name_3364_, lean_object* v_xs_3365_, lean_object* v_body_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_){
_start:
{
lean_object* v___x_3372_; lean_object* v_us_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; 
v___x_3372_ = lean_box(0);
lean_inc(v_levelParams_3362_);
v_us_3373_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__0(v_levelParams_3362_, v___x_3372_);
lean_inc(v_declName_3363_);
v___x_3374_ = l_Lean_mkConst(v_declName_3363_, v_us_3373_);
v___x_3375_ = l_Lean_mkAppN(v___x_3374_, v_xs_3365_);
v___x_3376_ = l_Lean_Meta_mkEq(v___x_3375_, v_body_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_);
if (lean_obj_tag(v___x_3376_) == 0)
{
lean_object* v_a_3377_; lean_object* v___x_3378_; uint8_t v___x_3379_; lean_object* v___x_3380_; 
v_a_3377_ = lean_ctor_get(v___x_3376_, 0);
lean_inc_n(v_a_3377_, 2);
lean_dec_ref_known(v___x_3376_, 1);
v___x_3378_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___boxed), 7, 2);
lean_closure_set(v___x_3378_, 0, v_declName_3363_);
lean_closure_set(v___x_3378_, 1, v_a_3377_);
v___x_3379_ = 1;
v___x_3380_ = l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___redArg(v___x_3378_, v___x_3379_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_object* v_a_3381_; uint8_t v___x_3382_; uint8_t v___x_3383_; lean_object* v___x_3384_; 
v_a_3381_ = lean_ctor_get(v___x_3380_, 0);
lean_inc(v_a_3381_);
lean_dec_ref_known(v___x_3380_, 1);
v___x_3382_ = 0;
v___x_3383_ = 1;
lean_inc_ref(v_xs_3365_);
v___x_3384_ = l_Lean_Meta_mkForallFVars(v_xs_3365_, v_a_3377_, v___x_3382_, v___x_3379_, v___x_3379_, v___x_3383_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_);
if (lean_obj_tag(v___x_3384_) == 0)
{
lean_object* v_a_3385_; lean_object* v___x_3386_; 
v_a_3385_ = lean_ctor_get(v___x_3384_, 0);
lean_inc(v_a_3385_);
lean_dec_ref_known(v___x_3384_, 1);
v___x_3386_ = l_Lean_Meta_letToHave(v_a_3385_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_object* v_a_3387_; lean_object* v___x_3388_; 
v_a_3387_ = lean_ctor_get(v___x_3386_, 0);
lean_inc(v_a_3387_);
lean_dec_ref_known(v___x_3386_, 1);
v___x_3388_ = l_Lean_Meta_mkLambdaFVars(v_xs_3365_, v_a_3381_, v___x_3382_, v___x_3379_, v___x_3382_, v___x_3379_, v___x_3383_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_);
if (lean_obj_tag(v___x_3388_) == 0)
{
lean_object* v_a_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; 
v_a_3389_ = lean_ctor_get(v___x_3388_, 0);
lean_inc(v_a_3389_);
lean_dec_ref_known(v___x_3388_, 1);
lean_inc_n(v_name_3364_, 2);
v___x_3390_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3390_, 0, v_name_3364_);
lean_ctor_set(v___x_3390_, 1, v_levelParams_3362_);
lean_ctor_set(v___x_3390_, 2, v_a_3387_);
v___x_3391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3391_, 0, v_name_3364_);
lean_ctor_set(v___x_3391_, 1, v___x_3372_);
v___x_3392_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3392_, 0, v___x_3390_);
lean_ctor_set(v___x_3392_, 1, v_a_3389_);
lean_ctor_set(v___x_3392_, 2, v___x_3391_);
v___x_3393_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3393_, 0, v___x_3392_);
v___x_3394_ = l_Lean_addDecl(v___x_3393_, v___x_3382_, v___y_3369_, v___y_3370_);
if (lean_obj_tag(v___x_3394_) == 0)
{
lean_object* v___x_3395_; 
lean_dec_ref_known(v___x_3394_, 1);
v___x_3395_ = l_Lean_inferDefEqAttr(v_name_3364_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_);
return v___x_3395_;
}
else
{
lean_dec(v_name_3364_);
return v___x_3394_;
}
}
else
{
lean_object* v_a_3396_; lean_object* v___x_3398_; uint8_t v_isShared_3399_; uint8_t v_isSharedCheck_3403_; 
lean_dec(v_a_3387_);
lean_dec(v_name_3364_);
lean_dec(v_levelParams_3362_);
v_a_3396_ = lean_ctor_get(v___x_3388_, 0);
v_isSharedCheck_3403_ = !lean_is_exclusive(v___x_3388_);
if (v_isSharedCheck_3403_ == 0)
{
v___x_3398_ = v___x_3388_;
v_isShared_3399_ = v_isSharedCheck_3403_;
goto v_resetjp_3397_;
}
else
{
lean_inc(v_a_3396_);
lean_dec(v___x_3388_);
v___x_3398_ = lean_box(0);
v_isShared_3399_ = v_isSharedCheck_3403_;
goto v_resetjp_3397_;
}
v_resetjp_3397_:
{
lean_object* v___x_3401_; 
if (v_isShared_3399_ == 0)
{
v___x_3401_ = v___x_3398_;
goto v_reusejp_3400_;
}
else
{
lean_object* v_reuseFailAlloc_3402_; 
v_reuseFailAlloc_3402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3402_, 0, v_a_3396_);
v___x_3401_ = v_reuseFailAlloc_3402_;
goto v_reusejp_3400_;
}
v_reusejp_3400_:
{
return v___x_3401_;
}
}
}
}
else
{
lean_object* v_a_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3411_; 
lean_dec(v_a_3381_);
lean_dec_ref(v_xs_3365_);
lean_dec(v_name_3364_);
lean_dec(v_levelParams_3362_);
v_a_3404_ = lean_ctor_get(v___x_3386_, 0);
v_isSharedCheck_3411_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3411_ == 0)
{
v___x_3406_ = v___x_3386_;
v_isShared_3407_ = v_isSharedCheck_3411_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_a_3404_);
lean_dec(v___x_3386_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3411_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
lean_object* v___x_3409_; 
if (v_isShared_3407_ == 0)
{
v___x_3409_ = v___x_3406_;
goto v_reusejp_3408_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v_a_3404_);
v___x_3409_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3408_;
}
v_reusejp_3408_:
{
return v___x_3409_;
}
}
}
}
else
{
lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3419_; 
lean_dec(v_a_3381_);
lean_dec_ref(v_xs_3365_);
lean_dec(v_name_3364_);
lean_dec(v_levelParams_3362_);
v_a_3412_ = lean_ctor_get(v___x_3384_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3384_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3414_ = v___x_3384_;
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_dec(v___x_3384_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3417_; 
if (v_isShared_3415_ == 0)
{
v___x_3417_ = v___x_3414_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v_a_3412_);
v___x_3417_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
return v___x_3417_;
}
}
}
}
else
{
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3427_; 
lean_dec(v_a_3377_);
lean_dec_ref(v_xs_3365_);
lean_dec(v_name_3364_);
lean_dec(v_levelParams_3362_);
v_a_3420_ = lean_ctor_get(v___x_3380_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3380_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3422_ = v___x_3380_;
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3380_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3425_; 
if (v_isShared_3423_ == 0)
{
v___x_3425_ = v___x_3422_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_a_3420_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
}
}
else
{
lean_object* v_a_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3435_; 
lean_dec_ref(v_xs_3365_);
lean_dec(v_name_3364_);
lean_dec(v_declName_3363_);
lean_dec(v_levelParams_3362_);
v_a_3428_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3430_ = v___x_3376_;
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_a_3428_);
lean_dec(v___x_3376_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3433_; 
if (v_isShared_3431_ == 0)
{
v___x_3433_ = v___x_3430_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v_a_3428_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___lam__0___boxed(lean_object* v_levelParams_3436_, lean_object* v_declName_3437_, lean_object* v_name_3438_, lean_object* v_xs_3439_, lean_object* v_body_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_){
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___lam__0(v_levelParams_3436_, v_declName_3437_, v_name_3438_, v_xs_3439_, v_body_3440_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
lean_dec(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3442_);
lean_dec_ref(v___y_3441_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2_spec__3(lean_object* v_o_3447_, lean_object* v_k_3448_, uint8_t v_v_3449_){
_start:
{
lean_object* v_map_3450_; uint8_t v_hasTrace_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3465_; 
v_map_3450_ = lean_ctor_get(v_o_3447_, 0);
v_hasTrace_3451_ = lean_ctor_get_uint8(v_o_3447_, sizeof(void*)*1);
v_isSharedCheck_3465_ = !lean_is_exclusive(v_o_3447_);
if (v_isSharedCheck_3465_ == 0)
{
v___x_3453_ = v_o_3447_;
v_isShared_3454_ = v_isSharedCheck_3465_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_map_3450_);
lean_dec(v_o_3447_);
v___x_3453_ = lean_box(0);
v_isShared_3454_ = v_isSharedCheck_3465_;
goto v_resetjp_3452_;
}
v_resetjp_3452_:
{
lean_object* v___x_3455_; lean_object* v___x_3456_; 
v___x_3455_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3455_, 0, v_v_3449_);
lean_inc(v_k_3448_);
v___x_3456_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_3448_, v___x_3455_, v_map_3450_);
if (v_hasTrace_3451_ == 0)
{
lean_object* v___x_3457_; uint8_t v___x_3458_; lean_object* v___x_3460_; 
v___x_3457_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__19));
v___x_3458_ = l_Lean_Name_isPrefixOf(v___x_3457_, v_k_3448_);
lean_dec(v_k_3448_);
if (v_isShared_3454_ == 0)
{
lean_ctor_set(v___x_3453_, 0, v___x_3456_);
v___x_3460_ = v___x_3453_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v___x_3456_);
v___x_3460_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
lean_ctor_set_uint8(v___x_3460_, sizeof(void*)*1, v___x_3458_);
return v___x_3460_;
}
}
else
{
lean_object* v___x_3463_; 
lean_dec(v_k_3448_);
if (v_isShared_3454_ == 0)
{
lean_ctor_set(v___x_3453_, 0, v___x_3456_);
v___x_3463_ = v___x_3453_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v___x_3456_);
lean_ctor_set_uint8(v_reuseFailAlloc_3464_, sizeof(void*)*1, v_hasTrace_3451_);
v___x_3463_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
return v___x_3463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2_spec__3___boxed(lean_object* v_o_3466_, lean_object* v_k_3467_, lean_object* v_v_3468_){
_start:
{
uint8_t v_v_boxed_3469_; lean_object* v_res_3470_; 
v_v_boxed_3469_ = lean_unbox(v_v_3468_);
v_res_3470_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2_spec__3(v_o_3466_, v_k_3467_, v_v_boxed_3469_);
return v_res_3470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2(lean_object* v_opts_3471_, lean_object* v_opt_3472_, uint8_t v_val_3473_){
_start:
{
lean_object* v_name_3474_; lean_object* v___x_3475_; 
v_name_3474_ = lean_ctor_get(v_opt_3472_, 0);
lean_inc(v_name_3474_);
lean_dec_ref(v_opt_3472_);
v___x_3475_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2_spec__3(v_opts_3471_, v_name_3474_, v_val_3473_);
return v___x_3475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2___boxed(lean_object* v_opts_3476_, lean_object* v_opt_3477_, lean_object* v_val_3478_){
_start:
{
uint8_t v_val_boxed_3479_; lean_object* v_res_3480_; 
v_val_boxed_3479_ = lean_unbox(v_val_3478_);
v_res_3480_ = l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2(v_opts_3476_, v_opt_3477_, v_val_boxed_3479_);
return v_res_3480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize(lean_object* v_declName_3481_, lean_object* v_info_3482_, lean_object* v_name_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_){
_start:
{
lean_object* v_toCold_3489_; lean_object* v_levelParams_3490_; lean_object* v_value_3491_; lean_object* v_currRecDepth_3492_; lean_object* v_ref_3493_; uint8_t v_suppressElabErrors_3494_; lean_object* v_fileName_3495_; lean_object* v_fileMap_3496_; lean_object* v_options_3497_; lean_object* v_currNamespace_3498_; lean_object* v_openDecls_3499_; lean_object* v_initHeartbeats_3500_; lean_object* v_maxHeartbeats_3501_; lean_object* v_quotContext_3502_; lean_object* v_currMacroScope_3503_; lean_object* v_cancelTk_x3f_3504_; lean_object* v_inheritedTraceOptions_3505_; lean_object* v___f_3506_; uint8_t v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; uint8_t v___x_3511_; lean_object* v_fileName_3513_; lean_object* v_fileMap_3514_; lean_object* v_currNamespace_3515_; lean_object* v_openDecls_3516_; lean_object* v_initHeartbeats_3517_; lean_object* v_maxHeartbeats_3518_; lean_object* v_quotContext_3519_; lean_object* v_currMacroScope_3520_; lean_object* v_cancelTk_x3f_3521_; lean_object* v_inheritedTraceOptions_3522_; lean_object* v_currRecDepth_3523_; lean_object* v_ref_3524_; uint8_t v_suppressElabErrors_3525_; lean_object* v___y_3526_; lean_object* v___x_3532_; uint8_t v___y_3534_; lean_object* v_env_3555_; uint8_t v___x_3556_; 
v_toCold_3489_ = lean_ctor_get(v_a_3486_, 0);
v_levelParams_3490_ = lean_ctor_get(v_info_3482_, 1);
lean_inc(v_levelParams_3490_);
v_value_3491_ = lean_ctor_get(v_info_3482_, 3);
lean_inc_ref(v_value_3491_);
lean_dec_ref(v_info_3482_);
v_currRecDepth_3492_ = lean_ctor_get(v_a_3486_, 1);
v_ref_3493_ = lean_ctor_get(v_a_3486_, 2);
v_suppressElabErrors_3494_ = lean_ctor_get_uint8(v_a_3486_, sizeof(void*)*3 + 1);
v_fileName_3495_ = lean_ctor_get(v_toCold_3489_, 0);
v_fileMap_3496_ = lean_ctor_get(v_toCold_3489_, 1);
v_options_3497_ = lean_ctor_get(v_toCold_3489_, 2);
v_currNamespace_3498_ = lean_ctor_get(v_toCold_3489_, 4);
v_openDecls_3499_ = lean_ctor_get(v_toCold_3489_, 5);
v_initHeartbeats_3500_ = lean_ctor_get(v_toCold_3489_, 6);
v_maxHeartbeats_3501_ = lean_ctor_get(v_toCold_3489_, 7);
v_quotContext_3502_ = lean_ctor_get(v_toCold_3489_, 8);
v_currMacroScope_3503_ = lean_ctor_get(v_toCold_3489_, 9);
v_cancelTk_x3f_3504_ = lean_ctor_get(v_toCold_3489_, 10);
v_inheritedTraceOptions_3505_ = lean_ctor_get(v_toCold_3489_, 11);
v___f_3506_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3506_, 0, v_levelParams_3490_);
lean_closure_set(v___f_3506_, 1, v_declName_3481_);
lean_closure_set(v___f_3506_, 2, v_name_3483_);
v___x_3507_ = 0;
v___x_3508_ = l_Lean_Meta_tactic_hygienic;
lean_inc_ref(v_options_3497_);
v___x_3509_ = l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2(v_options_3497_, v___x_3508_, v___x_3507_);
v___x_3510_ = l_Lean_diagnostics;
v___x_3511_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(v___x_3509_, v___x_3510_);
v___x_3532_ = lean_st_ref_get(v_a_3487_);
v_env_3555_ = lean_ctor_get(v___x_3532_, 0);
lean_inc_ref(v_env_3555_);
lean_dec(v___x_3532_);
v___x_3556_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3555_);
lean_dec_ref(v_env_3555_);
if (v___x_3511_ == 0)
{
if (v___x_3556_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_3505_);
lean_inc(v_cancelTk_x3f_3504_);
lean_inc(v_currMacroScope_3503_);
lean_inc(v_quotContext_3502_);
lean_inc(v_maxHeartbeats_3501_);
lean_inc(v_initHeartbeats_3500_);
lean_inc(v_openDecls_3499_);
lean_inc(v_currNamespace_3498_);
lean_inc_ref(v_fileMap_3496_);
lean_inc_ref(v_fileName_3495_);
v_fileName_3513_ = v_fileName_3495_;
v_fileMap_3514_ = v_fileMap_3496_;
v_currNamespace_3515_ = v_currNamespace_3498_;
v_openDecls_3516_ = v_openDecls_3499_;
v_initHeartbeats_3517_ = v_initHeartbeats_3500_;
v_maxHeartbeats_3518_ = v_maxHeartbeats_3501_;
v_quotContext_3519_ = v_quotContext_3502_;
v_currMacroScope_3520_ = v_currMacroScope_3503_;
v_cancelTk_x3f_3521_ = v_cancelTk_x3f_3504_;
v_inheritedTraceOptions_3522_ = v_inheritedTraceOptions_3505_;
v_currRecDepth_3523_ = v_currRecDepth_3492_;
v_ref_3524_ = v_ref_3493_;
v_suppressElabErrors_3525_ = v_suppressElabErrors_3494_;
v___y_3526_ = v_a_3487_;
goto v___jp_3512_;
}
else
{
v___y_3534_ = v___x_3511_;
goto v___jp_3533_;
}
}
else
{
v___y_3534_ = v___x_3556_;
goto v___jp_3533_;
}
v___jp_3512_:
{
lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; 
v___x_3527_ = l_Lean_maxRecDepth;
v___x_3528_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5_spec__8(v___x_3509_, v___x_3527_);
v___x_3529_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3529_, 0, v_fileName_3513_);
lean_ctor_set(v___x_3529_, 1, v_fileMap_3514_);
lean_ctor_set(v___x_3529_, 2, v___x_3509_);
lean_ctor_set(v___x_3529_, 3, v___x_3528_);
lean_ctor_set(v___x_3529_, 4, v_currNamespace_3515_);
lean_ctor_set(v___x_3529_, 5, v_openDecls_3516_);
lean_ctor_set(v___x_3529_, 6, v_initHeartbeats_3517_);
lean_ctor_set(v___x_3529_, 7, v_maxHeartbeats_3518_);
lean_ctor_set(v___x_3529_, 8, v_quotContext_3519_);
lean_ctor_set(v___x_3529_, 9, v_currMacroScope_3520_);
lean_ctor_set(v___x_3529_, 10, v_cancelTk_x3f_3521_);
lean_ctor_set(v___x_3529_, 11, v_inheritedTraceOptions_3522_);
lean_inc(v_ref_3524_);
lean_inc(v_currRecDepth_3523_);
v___x_3530_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3530_, 0, v___x_3529_);
lean_ctor_set(v___x_3530_, 1, v_currRecDepth_3523_);
lean_ctor_set(v___x_3530_, 2, v_ref_3524_);
lean_ctor_set_uint8(v___x_3530_, sizeof(void*)*3, v___x_3511_);
lean_ctor_set_uint8(v___x_3530_, sizeof(void*)*3 + 1, v_suppressElabErrors_3525_);
v___x_3531_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___redArg(v_value_3491_, v___f_3506_, v___x_3507_, v_a_3484_, v_a_3485_, v___x_3530_, v___y_3526_);
lean_dec_ref_known(v___x_3530_, 3);
return v___x_3531_;
}
v___jp_3533_:
{
if (v___y_3534_ == 0)
{
lean_object* v___x_3535_; lean_object* v_env_3536_; lean_object* v_nextMacroScope_3537_; lean_object* v_ngen_3538_; lean_object* v_auxDeclNGen_3539_; lean_object* v_traceState_3540_; lean_object* v_messages_3541_; lean_object* v_infoState_3542_; lean_object* v_snapshotTasks_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3553_; 
v___x_3535_ = lean_st_ref_take(v_a_3487_);
v_env_3536_ = lean_ctor_get(v___x_3535_, 0);
v_nextMacroScope_3537_ = lean_ctor_get(v___x_3535_, 1);
v_ngen_3538_ = lean_ctor_get(v___x_3535_, 2);
v_auxDeclNGen_3539_ = lean_ctor_get(v___x_3535_, 3);
v_traceState_3540_ = lean_ctor_get(v___x_3535_, 4);
v_messages_3541_ = lean_ctor_get(v___x_3535_, 6);
v_infoState_3542_ = lean_ctor_get(v___x_3535_, 7);
v_snapshotTasks_3543_ = lean_ctor_get(v___x_3535_, 8);
v_isSharedCheck_3553_ = !lean_is_exclusive(v___x_3535_);
if (v_isSharedCheck_3553_ == 0)
{
lean_object* v_unused_3554_; 
v_unused_3554_ = lean_ctor_get(v___x_3535_, 5);
lean_dec(v_unused_3554_);
v___x_3545_ = v___x_3535_;
v_isShared_3546_ = v_isSharedCheck_3553_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_snapshotTasks_3543_);
lean_inc(v_infoState_3542_);
lean_inc(v_messages_3541_);
lean_inc(v_traceState_3540_);
lean_inc(v_auxDeclNGen_3539_);
lean_inc(v_ngen_3538_);
lean_inc(v_nextMacroScope_3537_);
lean_inc(v_env_3536_);
lean_dec(v___x_3535_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3553_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3550_; 
v___x_3547_ = l_Lean_Kernel_enableDiag(v_env_3536_, v___x_3511_);
v___x_3548_ = lean_obj_once(&l_Lean_Elab_Structural_registerEqnsInfo___closed__1, &l_Lean_Elab_Structural_registerEqnsInfo___closed__1_once, _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__1);
if (v_isShared_3546_ == 0)
{
lean_ctor_set(v___x_3545_, 5, v___x_3548_);
lean_ctor_set(v___x_3545_, 0, v___x_3547_);
v___x_3550_ = v___x_3545_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v___x_3547_);
lean_ctor_set(v_reuseFailAlloc_3552_, 1, v_nextMacroScope_3537_);
lean_ctor_set(v_reuseFailAlloc_3552_, 2, v_ngen_3538_);
lean_ctor_set(v_reuseFailAlloc_3552_, 3, v_auxDeclNGen_3539_);
lean_ctor_set(v_reuseFailAlloc_3552_, 4, v_traceState_3540_);
lean_ctor_set(v_reuseFailAlloc_3552_, 5, v___x_3548_);
lean_ctor_set(v_reuseFailAlloc_3552_, 6, v_messages_3541_);
lean_ctor_set(v_reuseFailAlloc_3552_, 7, v_infoState_3542_);
lean_ctor_set(v_reuseFailAlloc_3552_, 8, v_snapshotTasks_3543_);
v___x_3550_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
lean_object* v___x_3551_; 
v___x_3551_ = lean_st_ref_put(v_a_3487_, v___x_3550_);
lean_inc_ref(v_inheritedTraceOptions_3505_);
lean_inc(v_cancelTk_x3f_3504_);
lean_inc(v_currMacroScope_3503_);
lean_inc(v_quotContext_3502_);
lean_inc(v_maxHeartbeats_3501_);
lean_inc(v_initHeartbeats_3500_);
lean_inc(v_openDecls_3499_);
lean_inc(v_currNamespace_3498_);
lean_inc_ref(v_fileMap_3496_);
lean_inc_ref(v_fileName_3495_);
v_fileName_3513_ = v_fileName_3495_;
v_fileMap_3514_ = v_fileMap_3496_;
v_currNamespace_3515_ = v_currNamespace_3498_;
v_openDecls_3516_ = v_openDecls_3499_;
v_initHeartbeats_3517_ = v_initHeartbeats_3500_;
v_maxHeartbeats_3518_ = v_maxHeartbeats_3501_;
v_quotContext_3519_ = v_quotContext_3502_;
v_currMacroScope_3520_ = v_currMacroScope_3503_;
v_cancelTk_x3f_3521_ = v_cancelTk_x3f_3504_;
v_inheritedTraceOptions_3522_ = v_inheritedTraceOptions_3505_;
v_currRecDepth_3523_ = v_currRecDepth_3492_;
v_ref_3524_ = v_ref_3493_;
v_suppressElabErrors_3525_ = v_suppressElabErrors_3494_;
v___y_3526_ = v_a_3487_;
goto v___jp_3512_;
}
}
}
else
{
lean_inc_ref(v_inheritedTraceOptions_3505_);
lean_inc(v_cancelTk_x3f_3504_);
lean_inc(v_currMacroScope_3503_);
lean_inc(v_quotContext_3502_);
lean_inc(v_maxHeartbeats_3501_);
lean_inc(v_initHeartbeats_3500_);
lean_inc(v_openDecls_3499_);
lean_inc(v_currNamespace_3498_);
lean_inc_ref(v_fileMap_3496_);
lean_inc_ref(v_fileName_3495_);
v_fileName_3513_ = v_fileName_3495_;
v_fileMap_3514_ = v_fileMap_3496_;
v_currNamespace_3515_ = v_currNamespace_3498_;
v_openDecls_3516_ = v_openDecls_3499_;
v_initHeartbeats_3517_ = v_initHeartbeats_3500_;
v_maxHeartbeats_3518_ = v_maxHeartbeats_3501_;
v_quotContext_3519_ = v_quotContext_3502_;
v_currMacroScope_3520_ = v_currMacroScope_3503_;
v_cancelTk_x3f_3521_ = v_cancelTk_x3f_3504_;
v_inheritedTraceOptions_3522_ = v_inheritedTraceOptions_3505_;
v_currRecDepth_3523_ = v_currRecDepth_3492_;
v_ref_3524_ = v_ref_3493_;
v_suppressElabErrors_3525_ = v_suppressElabErrors_3494_;
v___y_3526_ = v_a_3487_;
goto v___jp_3512_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___boxed(lean_object* v_declName_3557_, lean_object* v_info_3558_, lean_object* v_name_3559_, lean_object* v_a_3560_, lean_object* v_a_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_, lean_object* v_a_3564_){
_start:
{
lean_object* v_res_3565_; 
v_res_3565_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize(v_declName_3557_, v_info_3558_, v_name_3559_, v_a_3560_, v_a_3561_, v_a_3562_, v_a_3563_);
lean_dec(v_a_3563_);
lean_dec_ref(v_a_3562_);
lean_dec(v_a_3561_);
lean_dec_ref(v_a_3560_);
return v_res_3565_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1(lean_object* v_00_u03b1_3566_, lean_object* v_x_3567_, uint8_t v_isExporting_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_){
_start:
{
lean_object* v___x_3574_; 
v___x_3574_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg(v_x_3567_, v_isExporting_3568_, v___y_3569_, v___y_3570_, v___y_3571_, v___y_3572_);
return v___x_3574_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___boxed(lean_object* v_00_u03b1_3575_, lean_object* v_x_3576_, lean_object* v_isExporting_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_){
_start:
{
uint8_t v_isExporting_boxed_3583_; lean_object* v_res_3584_; 
v_isExporting_boxed_3583_ = lean_unbox(v_isExporting_3577_);
v_res_3584_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1(v_00_u03b1_3575_, v_x_3576_, v_isExporting_boxed_3583_, v___y_3578_, v___y_3579_, v___y_3580_, v___y_3581_);
lean_dec(v___y_3581_);
lean_dec_ref(v___y_3580_);
lean_dec(v___y_3579_);
lean_dec_ref(v___y_3578_);
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1(lean_object* v_00_u03b1_3585_, lean_object* v_x_3586_, uint8_t v_when_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_){
_start:
{
lean_object* v___x_3593_; 
v___x_3593_ = l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___redArg(v_x_3586_, v_when_3587_, v___y_3588_, v___y_3589_, v___y_3590_, v___y_3591_);
return v___x_3593_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___boxed(lean_object* v_00_u03b1_3594_, lean_object* v_x_3595_, lean_object* v_when_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_){
_start:
{
uint8_t v_when_boxed_3602_; lean_object* v_res_3603_; 
v_when_boxed_3602_ = lean_unbox(v_when_3596_);
v_res_3603_ = l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1(v_00_u03b1_3594_, v_x_3595_, v_when_boxed_3602_, v___y_3597_, v___y_3598_, v___y_3599_, v___y_3600_);
lean_dec(v___y_3600_);
lean_dec_ref(v___y_3599_);
lean_dec(v___y_3598_);
lean_dec_ref(v___y_3597_);
return v_res_3603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq(lean_object* v_declName_3604_, lean_object* v_info_3605_, lean_object* v_a_3606_, lean_object* v_a_3607_, lean_object* v_a_3608_, lean_object* v_a_3609_){
_start:
{
lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v_env_3613_; lean_object* v_declName_3614_; lean_object* v_declNames_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; 
v___x_3611_ = l_Lean_instInhabitedName;
v___x_3612_ = lean_st_ref_get(v_a_3609_);
v_env_3613_ = lean_ctor_get(v___x_3612_, 0);
lean_inc_ref(v_env_3613_);
lean_dec(v___x_3612_);
v_declName_3614_ = lean_ctor_get(v_info_3605_, 0);
v_declNames_3615_ = lean_ctor_get(v_info_3605_, 5);
v___x_3616_ = l_Lean_Meta_unfoldThmSuffix;
lean_inc(v_declName_3614_);
v___x_3617_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3613_, v_declName_3614_, v___x_3616_);
v___x_3618_ = lean_unsigned_to_nat(0u);
v___x_3619_ = lean_array_get(v___x_3611_, v_declNames_3615_, v___x_3618_);
lean_inc_n(v___x_3617_, 2);
lean_inc(v_declName_3604_);
v___x_3620_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___boxed), 8, 3);
lean_closure_set(v___x_3620_, 0, v_declName_3604_);
lean_closure_set(v___x_3620_, 1, v_info_3605_);
lean_closure_set(v___x_3620_, 2, v___x_3617_);
v___x_3621_ = lean_alloc_closure((void*)(l_Lean_Meta_withEqnOptions___boxed), 8, 3);
lean_closure_set(v___x_3621_, 0, lean_box(0));
lean_closure_set(v___x_3621_, 1, v_declName_3604_);
lean_closure_set(v___x_3621_, 2, v___x_3620_);
v___x_3622_ = l_Lean_Meta_realizeConst(v___x_3619_, v___x_3617_, v___x_3621_, v_a_3606_, v_a_3607_, v_a_3608_, v_a_3609_);
if (lean_obj_tag(v___x_3622_) == 0)
{
lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3629_; 
v_isSharedCheck_3629_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3629_ == 0)
{
lean_object* v_unused_3630_; 
v_unused_3630_ = lean_ctor_get(v___x_3622_, 0);
lean_dec(v_unused_3630_);
v___x_3624_ = v___x_3622_;
v_isShared_3625_ = v_isSharedCheck_3629_;
goto v_resetjp_3623_;
}
else
{
lean_dec(v___x_3622_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3629_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v___x_3627_; 
if (v_isShared_3625_ == 0)
{
lean_ctor_set(v___x_3624_, 0, v___x_3617_);
v___x_3627_ = v___x_3624_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v___x_3617_);
v___x_3627_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
return v___x_3627_;
}
}
}
else
{
lean_object* v_a_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3638_; 
lean_dec(v___x_3617_);
v_a_3631_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3638_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3633_ = v___x_3622_;
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_a_3631_);
lean_dec(v___x_3622_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq___boxed(lean_object* v_declName_3639_, lean_object* v_info_3640_, lean_object* v_a_3641_, lean_object* v_a_3642_, lean_object* v_a_3643_, lean_object* v_a_3644_, lean_object* v_a_3645_){
_start:
{
lean_object* v_res_3646_; 
v_res_3646_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq(v_declName_3639_, v_info_3640_, v_a_3641_, v_a_3642_, v_a_3643_, v_a_3644_);
lean_dec(v_a_3644_);
lean_dec_ref(v_a_3643_);
lean_dec(v_a_3642_);
lean_dec_ref(v_a_3641_);
return v_res_3646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getUnfoldFor_x3f(lean_object* v_declName_3647_, lean_object* v_a_3648_, lean_object* v_a_3649_, lean_object* v_a_3650_, lean_object* v_a_3651_){
_start:
{
lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v_env_3655_; lean_object* v___x_3656_; lean_object* v_toEnvExtension_3657_; lean_object* v_asyncMode_3658_; uint8_t v___x_3659_; lean_object* v___x_3660_; 
v___x_3653_ = l_Lean_Elab_Structural_instInhabitedEqnInfo_default;
v___x_3654_ = lean_st_ref_get(v_a_3651_);
v_env_3655_ = lean_ctor_get(v___x_3654_, 0);
lean_inc_ref(v_env_3655_);
lean_dec(v___x_3654_);
v___x_3656_ = l_Lean_Elab_Structural_eqnInfoExt;
v_toEnvExtension_3657_ = lean_ctor_get(v___x_3656_, 0);
v_asyncMode_3658_ = lean_ctor_get(v_toEnvExtension_3657_, 2);
v___x_3659_ = 0;
lean_inc(v_declName_3647_);
v___x_3660_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_3653_, v___x_3656_, v_env_3655_, v_declName_3647_, v_asyncMode_3658_, v___x_3659_);
if (lean_obj_tag(v___x_3660_) == 1)
{
lean_object* v_val_3661_; lean_object* v___x_3663_; uint8_t v_isShared_3664_; uint8_t v_isSharedCheck_3685_; 
v_val_3661_ = lean_ctor_get(v___x_3660_, 0);
v_isSharedCheck_3685_ = !lean_is_exclusive(v___x_3660_);
if (v_isSharedCheck_3685_ == 0)
{
v___x_3663_ = v___x_3660_;
v_isShared_3664_ = v_isSharedCheck_3685_;
goto v_resetjp_3662_;
}
else
{
lean_inc(v_val_3661_);
lean_dec(v___x_3660_);
v___x_3663_ = lean_box(0);
v_isShared_3664_ = v_isSharedCheck_3685_;
goto v_resetjp_3662_;
}
v_resetjp_3662_:
{
lean_object* v___x_3665_; 
v___x_3665_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq(v_declName_3647_, v_val_3661_, v_a_3648_, v_a_3649_, v_a_3650_, v_a_3651_);
if (lean_obj_tag(v___x_3665_) == 0)
{
lean_object* v_a_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3676_; 
v_a_3666_ = lean_ctor_get(v___x_3665_, 0);
v_isSharedCheck_3676_ = !lean_is_exclusive(v___x_3665_);
if (v_isSharedCheck_3676_ == 0)
{
v___x_3668_ = v___x_3665_;
v_isShared_3669_ = v_isSharedCheck_3676_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_a_3666_);
lean_dec(v___x_3665_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3676_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v___x_3671_; 
if (v_isShared_3664_ == 0)
{
lean_ctor_set(v___x_3663_, 0, v_a_3666_);
v___x_3671_ = v___x_3663_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3675_; 
v_reuseFailAlloc_3675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3675_, 0, v_a_3666_);
v___x_3671_ = v_reuseFailAlloc_3675_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
lean_object* v___x_3673_; 
if (v_isShared_3669_ == 0)
{
lean_ctor_set(v___x_3668_, 0, v___x_3671_);
v___x_3673_ = v___x_3668_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v___x_3671_);
v___x_3673_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
return v___x_3673_;
}
}
}
}
else
{
lean_object* v_a_3677_; lean_object* v___x_3679_; uint8_t v_isShared_3680_; uint8_t v_isSharedCheck_3684_; 
lean_del_object(v___x_3663_);
v_a_3677_ = lean_ctor_get(v___x_3665_, 0);
v_isSharedCheck_3684_ = !lean_is_exclusive(v___x_3665_);
if (v_isSharedCheck_3684_ == 0)
{
v___x_3679_ = v___x_3665_;
v_isShared_3680_ = v_isSharedCheck_3684_;
goto v_resetjp_3678_;
}
else
{
lean_inc(v_a_3677_);
lean_dec(v___x_3665_);
v___x_3679_ = lean_box(0);
v_isShared_3680_ = v_isSharedCheck_3684_;
goto v_resetjp_3678_;
}
v_resetjp_3678_:
{
lean_object* v___x_3682_; 
if (v_isShared_3680_ == 0)
{
v___x_3682_ = v___x_3679_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3683_; 
v_reuseFailAlloc_3683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3683_, 0, v_a_3677_);
v___x_3682_ = v_reuseFailAlloc_3683_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
return v___x_3682_;
}
}
}
}
}
else
{
lean_object* v___x_3686_; lean_object* v___x_3687_; 
lean_dec(v___x_3660_);
lean_dec(v_declName_3647_);
v___x_3686_ = lean_box(0);
v___x_3687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3687_, 0, v___x_3686_);
return v___x_3687_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getUnfoldFor_x3f___boxed(lean_object* v_declName_3688_, lean_object* v_a_3689_, lean_object* v_a_3690_, lean_object* v_a_3691_, lean_object* v_a_3692_, lean_object* v_a_3693_){
_start:
{
lean_object* v_res_3694_; 
v_res_3694_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getUnfoldFor_x3f(v_declName_3688_, v_a_3689_, v_a_3690_, v_a_3691_, v_a_3692_);
lean_dec(v_a_3692_);
lean_dec_ref(v_a_3691_);
lean_dec(v_a_3690_);
lean_dec_ref(v_a_3689_);
return v_res_3694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___redArg(lean_object* v_declName_3695_, lean_object* v_a_3696_){
_start:
{
lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v_env_3700_; lean_object* v___x_3701_; lean_object* v_toEnvExtension_3702_; lean_object* v_asyncMode_3703_; uint8_t v___x_3704_; lean_object* v___x_3705_; 
v___x_3698_ = l_Lean_Elab_Structural_instInhabitedEqnInfo_default;
v___x_3699_ = lean_st_ref_get(v_a_3696_);
v_env_3700_ = lean_ctor_get(v___x_3699_, 0);
lean_inc_ref(v_env_3700_);
lean_dec(v___x_3699_);
v___x_3701_ = l_Lean_Elab_Structural_eqnInfoExt;
v_toEnvExtension_3702_ = lean_ctor_get(v___x_3701_, 0);
v_asyncMode_3703_ = lean_ctor_get(v_toEnvExtension_3702_, 2);
v___x_3704_ = 0;
v___x_3705_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_3698_, v___x_3701_, v_env_3700_, v_declName_3695_, v_asyncMode_3703_, v___x_3704_);
if (lean_obj_tag(v___x_3705_) == 1)
{
lean_object* v_val_3706_; lean_object* v___x_3708_; uint8_t v_isShared_3709_; uint8_t v_isSharedCheck_3715_; 
v_val_3706_ = lean_ctor_get(v___x_3705_, 0);
v_isSharedCheck_3715_ = !lean_is_exclusive(v___x_3705_);
if (v_isSharedCheck_3715_ == 0)
{
v___x_3708_ = v___x_3705_;
v_isShared_3709_ = v_isSharedCheck_3715_;
goto v_resetjp_3707_;
}
else
{
lean_inc(v_val_3706_);
lean_dec(v___x_3705_);
v___x_3708_ = lean_box(0);
v_isShared_3709_ = v_isSharedCheck_3715_;
goto v_resetjp_3707_;
}
v_resetjp_3707_:
{
lean_object* v_recArgPos_3710_; lean_object* v___x_3712_; 
v_recArgPos_3710_ = lean_ctor_get(v_val_3706_, 4);
lean_inc(v_recArgPos_3710_);
lean_dec(v_val_3706_);
if (v_isShared_3709_ == 0)
{
lean_ctor_set(v___x_3708_, 0, v_recArgPos_3710_);
v___x_3712_ = v___x_3708_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3714_; 
v_reuseFailAlloc_3714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3714_, 0, v_recArgPos_3710_);
v___x_3712_ = v_reuseFailAlloc_3714_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
lean_object* v___x_3713_; 
v___x_3713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3713_, 0, v___x_3712_);
return v___x_3713_;
}
}
}
else
{
lean_object* v___x_3716_; lean_object* v___x_3717_; 
lean_dec(v___x_3705_);
v___x_3716_ = lean_box(0);
v___x_3717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3716_);
return v___x_3717_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___redArg___boxed(lean_object* v_declName_3718_, lean_object* v_a_3719_, lean_object* v_a_3720_){
_start:
{
lean_object* v_res_3721_; 
v_res_3721_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___redArg(v_declName_3718_, v_a_3719_);
lean_dec(v_a_3719_);
return v_res_3721_;
}
}
LEAN_EXPORT lean_object* lean_get_structural_rec_arg_pos(lean_object* v_declName_3722_, lean_object* v_a_3723_, lean_object* v_a_3724_){
_start:
{
lean_object* v___x_3726_; 
lean_dec_ref(v_a_3723_);
v___x_3726_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___redArg(v_declName_3722_, v_a_3724_);
lean_dec(v_a_3724_);
return v___x_3726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___boxed(lean_object* v_declName_3727_, lean_object* v_a_3728_, lean_object* v_a_3729_, lean_object* v_a_3730_){
_start:
{
lean_object* v_res_3731_; 
v_res_3731_ = lean_get_structural_rec_arg_pos(v_declName_3727_, v_a_3728_, v_a_3729_);
return v_res_3731_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; 
v___x_3734_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_));
v___x_3735_ = lean_obj_once(&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0, &l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0_once, _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0);
v___x_3736_ = l_Lean_Name_str___override(v___x_3735_, v___x_3734_);
return v___x_3736_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; 
v___x_3737_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_));
v___x_3738_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3739_ = l_Lean_Name_str___override(v___x_3738_, v___x_3737_);
return v___x_3739_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; 
v___x_3740_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13));
v___x_3741_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3742_ = l_Lean_Name_str___override(v___x_3741_, v___x_3740_);
return v___x_3742_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; 
v___x_3744_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_));
v___x_3745_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3746_ = l_Lean_Name_str___override(v___x_3745_, v___x_3744_);
return v___x_3746_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; 
v___x_3747_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_));
v___x_3748_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3749_ = l_Lean_Name_str___override(v___x_3748_, v___x_3747_);
return v___x_3749_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; 
v___x_3751_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_));
v___x_3752_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3753_ = l_Lean_Name_str___override(v___x_3752_, v___x_3751_);
return v___x_3753_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; 
v___x_3754_ = lean_unsigned_to_nat(0u);
v___x_3755_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3756_ = l_Lean_Name_num___override(v___x_3755_, v___x_3754_);
return v___x_3756_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; 
v___x_3757_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_));
v___x_3758_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3759_ = l_Lean_Name_str___override(v___x_3758_, v___x_3757_);
return v___x_3759_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; 
v___x_3760_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13));
v___x_3761_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3762_ = l_Lean_Name_str___override(v___x_3761_, v___x_3760_);
return v___x_3762_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; 
v___x_3763_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_));
v___x_3764_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3765_ = l_Lean_Name_str___override(v___x_3764_, v___x_3763_);
return v___x_3765_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; 
v___x_3767_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_));
v___x_3768_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3769_ = l_Lean_Name_str___override(v___x_3768_, v___x_3767_);
return v___x_3769_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3771_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_));
v___x_3772_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3773_ = l_Lean_Name_str___override(v___x_3772_, v___x_3771_);
return v___x_3773_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; 
v___x_3774_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_));
v___x_3775_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3776_ = l_Lean_Name_str___override(v___x_3775_, v___x_3774_);
return v___x_3776_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; 
v___x_3777_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13));
v___x_3778_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3779_ = l_Lean_Name_str___override(v___x_3778_, v___x_3777_);
return v___x_3779_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; 
v___x_3780_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_));
v___x_3781_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3782_ = l_Lean_Name_str___override(v___x_3781_, v___x_3780_);
return v___x_3782_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; 
v___x_3783_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_));
v___x_3784_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3785_ = l_Lean_Name_str___override(v___x_3784_, v___x_3783_);
return v___x_3785_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; 
v___x_3786_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_));
v___x_3787_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3788_ = l_Lean_Name_str___override(v___x_3787_, v___x_3786_);
return v___x_3788_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; 
v___x_3789_ = lean_unsigned_to_nat(2295916746u);
v___x_3790_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3791_ = l_Lean_Name_num___override(v___x_3790_, v___x_3789_);
return v___x_3791_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; 
v___x_3793_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_));
v___x_3794_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3795_ = l_Lean_Name_str___override(v___x_3794_, v___x_3793_);
return v___x_3795_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; 
v___x_3797_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_));
v___x_3798_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3799_ = l_Lean_Name_str___override(v___x_3798_, v___x_3797_);
return v___x_3799_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v___x_3800_ = lean_unsigned_to_nat(2u);
v___x_3801_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3802_ = l_Lean_Name_num___override(v___x_3801_, v___x_3800_);
return v___x_3802_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3804_; lean_object* v___x_3805_; 
v___x_3804_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_));
v___x_3805_ = l_Lean_Meta_registerGetUnfoldEqnFn(v___x_3804_);
if (lean_obj_tag(v___x_3805_) == 0)
{
lean_object* v___x_3806_; uint8_t v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; 
lean_dec_ref_known(v___x_3805_, 1);
v___x_3806_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17));
v___x_3807_ = 0;
v___x_3808_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_3809_ = l_Lean_registerTraceClass(v___x_3806_, v___x_3807_, v___x_3808_);
return v___x_3809_;
}
else
{
return v___x_3805_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2____boxed(lean_object* v_a_3810_){
_start:
{
lean_object* v_res_3811_; 
v_res_3811_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_();
return v_res_3811_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_EqnsUtils(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_EqnsUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Structural_instInhabitedEqnInfo_default = _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default();
lean_mark_persistent(l_Lean_Elab_Structural_instInhabitedEqnInfo_default);
l_Lean_Elab_Structural_instInhabitedEqnInfo = _init_l_Lean_Elab_Structural_instInhabitedEqnInfo();
lean_mark_persistent(l_Lean_Elab_Structural_instInhabitedEqnInfo);
res = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_3225328890____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Structural_eqnInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Structural_eqnInfoExt);
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_EqnsUtils(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_EqnsUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
}
#ifdef __cplusplus
}
#endif

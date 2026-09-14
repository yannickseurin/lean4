// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize.CollectHyps
// Imports: public import Lean.Meta.Tactic.BVDecide.Normalize.Basic import Lean.Elab.Tactic.FalseOrByContra import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Sym.InstantiateMVarsS import Lean.Meta.Sym.InferType import Lean.Meta.Sym.LitValues import Lean.Meta.Sym.Util import Lean.Meta.Sym.Grind import Lean.Meta.Tactic.Grind.Util import Lean.Meta.Sym.Intro import Lean.Meta.Tactic.Grind.Simp
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
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getENode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_ENode_isRoot(lean_object*);
lean_object* l_Lean_Meta_Sym_getInt64Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getEqc(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_Sym_getUInt64Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn_x27(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_isPotentialTypeAnalysisType(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isConstructorApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getBitVecValue_x3f(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_getNatValue_x3f(lean_object*);
lean_object* l_Lean_Meta_Grind_isEqBoolTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqBoolFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_getUInt8Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getUInt16Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getUInt32Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getInt8Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getInt16Value_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_getInt32Value_x3f(lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_hasSameType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_preprocessLight___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Sym_getTrueExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getExprs___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_exfalso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_preprocessMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* l_Lean_MVarId_byContra_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_introN(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_intros(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getPropHyps(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateMVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_io_get_num_heartbeats();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordHyp___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordHyp___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordHyp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_withFixedInt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_withFixedInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_withFixedInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_withFixedInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "System"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Platform"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "numBits"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 7, 92, 194, 164, 177, 167, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(128, 236, 129, 7, 244, 3, 115, 42)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(195, 13, 33, 186, 170, 198, 65, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findM_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findM_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_getInt64Value_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_getUInt64Value_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_getBitVecValue_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ISize"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__3_value),LEAN_SCALAR_PTR_LITERAL(110, 52, 237, 35, 121, 142, 86, 222)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "USize"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__5_value),LEAN_SCALAR_PTR_LITERAL(109, 217, 26, 131, 232, 198, 207, 245)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Int64"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__7_value),LEAN_SCALAR_PTR_LITERAL(67, 100, 38, 50, 157, 43, 83, 90)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Int32"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__9_value),LEAN_SCALAR_PTR_LITERAL(202, 24, 245, 188, 10, 96, 206, 241)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Int16"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__11_value),LEAN_SCALAR_PTR_LITERAL(61, 121, 89, 120, 57, 100, 28, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Int8"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__13_value),LEAN_SCALAR_PTR_LITERAL(17, 171, 155, 218, 43, 77, 1, 67)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt64"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__15_value),LEAN_SCALAR_PTR_LITERAL(58, 113, 45, 150, 103, 228, 0, 41)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt32"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__17_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__19_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__20_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__21_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__21_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__22_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__23_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__23_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__24 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__24_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__25_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__26_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_getUInt8Value_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__27 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__27_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_getUInt16Value_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__28_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_getUInt32Value_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__29 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__29_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_getInt8Value_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__30 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__30_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_getInt16Value_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__31 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__31_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_getInt32Value_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__32 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__32_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findM_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findM_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2_spec__5___boxed(lean_object**);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3_spec__4___boxed(lean_object**);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordLocalHyp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordLocalHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "`bv_decide` failed to introduce the negated goal"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lean.Meta.Tactic.BVDecide.Normalize.CollectHyps"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 114, .m_capacity = 114, .m_length = 113, .m_data = "_private.Lean.Meta.Tactic.BVDecide.Normalize.CollectHyps.0.Lean.Meta.Tactic.BVDecide.Normalize.symByContradiction"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupGrindTarget___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupGrindTarget___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupGrindTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupGrindTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__2___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__1___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__1___boxed__const__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__1___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__1___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Collected initial hypotheses"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__7___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___boxed(lean_object**);
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg___closed__0_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__6;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordHyp___redArg(lean_object* v_hyp_1_, lean_object* v_a_2_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_4_ = lean_st_ref_take(v_a_2_);
v___x_5_ = lean_box(0);
v___x_6_ = lean_array_push(v___x_4_, v_hyp_1_);
v___x_7_ = lean_st_ref_put(v_a_2_, v___x_6_);
v___x_8_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_5_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordHyp___redArg___boxed(lean_object* v_hyp_9_, lean_object* v_a_10_, lean_object* v_a_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordHyp___redArg(v_hyp_9_, v_a_10_);
lean_dec(v_a_10_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordHyp(lean_object* v_hyp_13_, lean_object* v_a_14_, lean_object* v_a_15_, lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_27_ = lean_st_ref_take(v_a_15_);
v___x_28_ = lean_box(0);
v___x_29_ = lean_array_push(v___x_27_, v_hyp_13_);
v___x_30_ = lean_st_ref_put(v_a_15_, v___x_29_);
v___x_31_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_28_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordHyp___boxed(lean_object* v_hyp_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordHyp(v_hyp_32_, v_a_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_);
lean_dec(v_a_44_);
lean_dec_ref(v_a_43_);
lean_dec(v_a_42_);
lean_dec_ref(v_a_41_);
lean_dec(v_a_40_);
lean_dec_ref(v_a_39_);
lean_dec(v_a_38_);
lean_dec_ref(v_a_37_);
lean_dec(v_a_36_);
lean_dec(v_a_35_);
lean_dec(v_a_34_);
lean_dec_ref(v_a_33_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_withFixedInt___redArg(lean_object* v_x_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_){
_start:
{
uint8_t v_fixedInt_61_; 
v_fixedInt_61_ = lean_ctor_get_uint8(v_a_48_, sizeof(void*)*2 + 6);
if (v_fixedInt_61_ == 0)
{
lean_object* v___x_62_; lean_object* v___x_63_; 
lean_dec_ref(v_x_47_);
v___x_62_ = lean_box(0);
v___x_63_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
return v___x_63_;
}
else
{
lean_object* v___x_64_; 
lean_inc(v_a_59_);
lean_inc_ref(v_a_58_);
lean_inc(v_a_57_);
lean_inc_ref(v_a_56_);
lean_inc(v_a_55_);
lean_inc_ref(v_a_54_);
lean_inc(v_a_53_);
lean_inc_ref(v_a_52_);
lean_inc(v_a_51_);
lean_inc(v_a_50_);
lean_inc(v_a_49_);
lean_inc_ref(v_a_48_);
v___x_64_ = lean_apply_13(v_x_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_, v_a_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, lean_box(0));
return v___x_64_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_withFixedInt___redArg___boxed(lean_object* v_x_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_withFixedInt___redArg(v_x_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_, v_a_74_, v_a_75_, v_a_76_, v_a_77_);
lean_dec(v_a_77_);
lean_dec_ref(v_a_76_);
lean_dec(v_a_75_);
lean_dec_ref(v_a_74_);
lean_dec(v_a_73_);
lean_dec_ref(v_a_72_);
lean_dec(v_a_71_);
lean_dec_ref(v_a_70_);
lean_dec(v_a_69_);
lean_dec(v_a_68_);
lean_dec(v_a_67_);
lean_dec_ref(v_a_66_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_withFixedInt(lean_object* v_00_u03b1_80_, lean_object* v_x_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_){
_start:
{
uint8_t v_fixedInt_95_; 
v_fixedInt_95_ = lean_ctor_get_uint8(v_a_82_, sizeof(void*)*2 + 6);
if (v_fixedInt_95_ == 0)
{
lean_object* v___x_96_; lean_object* v___x_97_; 
lean_dec_ref(v_x_81_);
v___x_96_ = lean_box(0);
v___x_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
return v___x_97_;
}
else
{
lean_object* v___x_98_; 
lean_inc(v_a_93_);
lean_inc_ref(v_a_92_);
lean_inc(v_a_91_);
lean_inc_ref(v_a_90_);
lean_inc(v_a_89_);
lean_inc_ref(v_a_88_);
lean_inc(v_a_87_);
lean_inc_ref(v_a_86_);
lean_inc(v_a_85_);
lean_inc(v_a_84_);
lean_inc(v_a_83_);
lean_inc_ref(v_a_82_);
v___x_98_ = lean_apply_13(v_x_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_, v_a_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_, lean_box(0));
return v___x_98_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_withFixedInt___boxed(lean_object* v_00_u03b1_99_, lean_object* v_x_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_withFixedInt(v_00_u03b1_99_, v_x_100_, v_a_101_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
lean_dec(v_a_112_);
lean_dec_ref(v_a_111_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec(v_a_106_);
lean_dec_ref(v_a_105_);
lean_dec(v_a_104_);
lean_dec(v_a_103_);
lean_dec(v_a_102_);
lean_dec_ref(v_a_101_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits_spec__0(uint8_t v___x_115_, lean_object* v_x_116_){
_start:
{
if (lean_obj_tag(v_x_116_) == 0)
{
lean_object* v___x_117_; 
v___x_117_ = lean_box(0);
return v___x_117_;
}
else
{
lean_object* v_head_118_; lean_object* v_tail_119_; lean_object* v___x_120_; 
v_head_118_ = lean_ctor_get(v_x_116_, 0);
lean_inc_n(v_head_118_, 2);
v_tail_119_ = lean_ctor_get(v_x_116_, 1);
lean_inc(v_tail_119_);
lean_dec_ref_known(v_x_116_, 2);
v___x_120_ = l_Lean_Meta_Sym_getNatValue_x3f(v_head_118_);
if (lean_obj_tag(v___x_120_) == 0)
{
if (v___x_115_ == 0)
{
lean_dec(v_head_118_);
v_x_116_ = v_tail_119_;
goto _start;
}
else
{
lean_object* v___x_122_; 
lean_dec(v_tail_119_);
v___x_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_122_, 0, v_head_118_);
return v___x_122_;
}
}
else
{
lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
lean_dec(v_tail_119_);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_129_ == 0)
{
lean_object* v_unused_130_; 
v_unused_130_ = lean_ctor_get(v___x_120_, 0);
lean_dec(v_unused_130_);
v___x_124_ = v___x_120_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_dec(v___x_120_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v_head_118_);
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_head_118_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits_spec__0___boxed(lean_object* v___x_131_, lean_object* v_x_132_){
_start:
{
uint8_t v___x_10251__boxed_133_; lean_object* v_res_134_; 
v___x_10251__boxed_133_ = lean_unbox(v___x_131_);
v_res_134_ = l_List_find_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits_spec__0(v___x_10251__boxed_133_, v_x_132_);
return v_res_134_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__4(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_142_ = lean_box(0);
v___x_143_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__3));
v___x_144_ = l_Lean_mkConst(v___x_143_, v___x_142_);
return v___x_144_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = lean_box(0);
v___x_146_ = l_unsafeCast___redArg(v___x_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg(lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__4, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__4_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__4);
v___x_160_ = l_Lean_Meta_Sym_shareCommonInc(v___x_159_, v_a_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
if (lean_obj_tag(v___x_160_) == 0)
{
lean_object* v_a_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_223_; 
v_a_161_ = lean_ctor_get(v___x_160_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_160_);
if (v_isSharedCheck_223_ == 0)
{
v___x_163_ = v___x_160_;
v_isShared_164_ = v_isSharedCheck_223_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_a_161_);
lean_dec(v___x_160_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_223_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
uint8_t v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_165_ = 0;
v___x_166_ = lean_st_ref_get(v_a_148_);
lean_inc(v_a_161_);
v___x_167_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_166_, v_a_161_, v___x_165_);
lean_dec(v___x_166_);
v___x_168_ = l_List_isEmpty___redArg(v___x_167_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; 
v___x_169_ = l_List_find_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits_spec__0(v___x_168_, v___x_167_);
if (lean_obj_tag(v___x_169_) == 1)
{
lean_object* v_val_170_; lean_object* v___x_171_; 
lean_del_object(v___x_163_);
v_val_170_ = lean_ctor_get(v___x_169_, 0);
lean_inc_n(v_val_170_, 2);
lean_dec_ref_known(v___x_169_, 1);
lean_inc(v_a_161_);
v___x_171_ = l_Lean_Meta_mkEq(v_a_161_, v_val_170_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
if (lean_obj_tag(v___x_171_) == 0)
{
lean_object* v_a_172_; lean_object* v___x_173_; 
v_a_172_ = lean_ctor_get(v___x_171_, 0);
lean_inc(v_a_172_);
lean_dec_ref_known(v___x_171_, 1);
v___x_173_ = l_Lean_Meta_Sym_shareCommonInc(v_a_172_, v_a_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
if (lean_obj_tag(v___x_173_) == 0)
{
lean_object* v_a_174_; lean_object* v___x_175_; 
v_a_174_ = lean_ctor_get(v___x_173_, 0);
lean_inc(v_a_174_);
lean_dec_ref_known(v___x_173_, 1);
lean_inc(v_a_157_);
lean_inc_ref(v_a_156_);
lean_inc(v_a_155_);
lean_inc_ref(v_a_154_);
lean_inc(v_a_153_);
lean_inc_ref(v_a_152_);
lean_inc(v_a_151_);
lean_inc_ref(v_a_150_);
lean_inc(v_a_149_);
lean_inc(v_a_148_);
v___x_175_ = lean_grind_mk_eq_proof(v_a_161_, v_val_170_, v_a_148_, v_a_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
if (lean_obj_tag(v___x_175_) == 0)
{
lean_object* v_a_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_190_; 
v_a_176_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_190_ == 0)
{
v___x_178_ = v___x_175_;
v_isShared_179_ = v_isSharedCheck_190_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_a_176_);
lean_dec(v___x_175_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_190_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_180_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5);
v___x_181_ = lean_box(4);
v___x_182_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_182_, 0, v___x_180_);
lean_ctor_set(v___x_182_, 1, v_a_174_);
lean_ctor_set(v___x_182_, 2, v_a_176_);
lean_ctor_set(v___x_182_, 3, v___x_181_);
v___x_183_ = lean_st_ref_take(v_a_147_);
v___x_184_ = lean_box(0);
v___x_185_ = lean_array_push(v___x_183_, v___x_182_);
v___x_186_ = lean_st_ref_put(v_a_147_, v___x_185_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 0, v___x_184_);
v___x_188_ = v___x_178_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_184_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
else
{
lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_198_; 
lean_dec(v_a_174_);
v_a_191_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_198_ == 0)
{
v___x_193_ = v___x_175_;
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_dec(v___x_175_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_191_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
else
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
lean_dec(v_val_170_);
lean_dec(v_a_161_);
v_a_199_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_206_ == 0)
{
v___x_201_ = v___x_173_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_173_);
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
lean_dec(v_val_170_);
lean_dec(v_a_161_);
v_a_207_ = lean_ctor_get(v___x_171_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_214_ == 0)
{
v___x_209_ = v___x_171_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_dec(v___x_171_);
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
lean_object* v___x_215_; lean_object* v___x_217_; 
lean_dec(v___x_169_);
lean_dec(v_a_161_);
v___x_215_ = lean_box(0);
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 0, v___x_215_);
v___x_217_ = v___x_163_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v___x_215_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
}
else
{
lean_object* v___x_219_; lean_object* v___x_221_; 
lean_dec(v___x_167_);
lean_dec(v_a_161_);
v___x_219_ = lean_box(0);
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 0, v___x_219_);
v___x_221_ = v___x_163_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_219_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
else
{
lean_object* v_a_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_231_; 
v_a_224_ = lean_ctor_get(v___x_160_, 0);
v_isSharedCheck_231_ = !lean_is_exclusive(v___x_160_);
if (v_isSharedCheck_231_ == 0)
{
v___x_226_ = v___x_160_;
v_isShared_227_ = v_isSharedCheck_231_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_a_224_);
lean_dec(v___x_160_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_231_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_229_; 
if (v_isShared_227_ == 0)
{
v___x_229_ = v___x_226_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_a_224_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___boxed(lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg(v_a_232_, v_a_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_, v_a_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_);
lean_dec(v_a_242_);
lean_dec_ref(v_a_241_);
lean_dec(v_a_240_);
lean_dec_ref(v_a_239_);
lean_dec(v_a_238_);
lean_dec_ref(v_a_237_);
lean_dec(v_a_236_);
lean_dec_ref(v_a_235_);
lean_dec(v_a_234_);
lean_dec(v_a_233_);
lean_dec(v_a_232_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits(lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg(v_a_246_, v_a_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___boxed(lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits(v_a_259_, v_a_260_, v_a_261_, v_a_262_, v_a_263_, v_a_264_, v_a_265_, v_a_266_, v_a_267_, v_a_268_, v_a_269_, v_a_270_);
lean_dec(v_a_270_);
lean_dec_ref(v_a_269_);
lean_dec(v_a_268_);
lean_dec_ref(v_a_267_);
lean_dec(v_a_266_);
lean_dec_ref(v_a_265_);
lean_dec(v_a_264_);
lean_dec_ref(v_a_263_);
lean_dec(v_a_262_);
lean_dec(v_a_261_);
lean_dec(v_a_260_);
lean_dec_ref(v_a_259_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType_spec__0___redArg(lean_object* v_getConst_273_, lean_object* v_x_274_){
_start:
{
if (lean_obj_tag(v_x_274_) == 0)
{
lean_object* v___x_275_; 
lean_dec_ref(v_getConst_273_);
v___x_275_ = lean_box(0);
return v___x_275_;
}
else
{
lean_object* v_head_276_; lean_object* v_tail_277_; lean_object* v___x_278_; 
v_head_276_ = lean_ctor_get(v_x_274_, 0);
lean_inc_n(v_head_276_, 2);
v_tail_277_ = lean_ctor_get(v_x_274_, 1);
lean_inc(v_tail_277_);
lean_dec_ref_known(v_x_274_, 2);
lean_inc_ref(v_getConst_273_);
v___x_278_ = lean_apply_1(v_getConst_273_, v_head_276_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_dec(v_head_276_);
v_x_274_ = v_tail_277_;
goto _start;
}
else
{
lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
lean_dec(v_tail_277_);
lean_dec_ref(v_getConst_273_);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_286_ == 0)
{
lean_object* v_unused_287_; 
v_unused_287_ = lean_ctor_get(v___x_278_, 0);
lean_dec(v_unused_287_);
v___x_281_ = v___x_278_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_dec(v___x_278_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 0, v_head_276_);
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_head_276_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg(lean_object* v_default_288_, lean_object* v_getConst_289_, lean_object* v_a_290_){
_start:
{
uint8_t v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_292_ = 0;
v___x_293_ = lean_st_ref_get(v_a_290_);
lean_inc_ref(v_default_288_);
v___x_294_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_293_, v_default_288_, v___x_292_);
lean_dec(v___x_293_);
v___x_295_ = l_List_find_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType_spec__0___redArg(v_getConst_289_, v___x_294_);
if (lean_obj_tag(v___x_295_) == 1)
{
lean_object* v___x_296_; 
lean_dec_ref(v_default_288_);
v___x_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
return v___x_296_;
}
else
{
lean_object* v___x_297_; lean_object* v___x_298_; 
lean_dec(v___x_295_);
v___x_297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_297_, 0, v_default_288_);
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg___boxed(lean_object* v_default_299_, lean_object* v_getConst_300_, lean_object* v_a_301_, lean_object* v_a_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg(v_default_299_, v_getConst_300_, v_a_301_);
lean_dec(v_a_301_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType(lean_object* v_00_u03b1_304_, lean_object* v_default_305_, lean_object* v_getConst_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg(v_default_305_, v_getConst_306_, v_a_309_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___boxed(lean_object* v_00_u03b1_321_, lean_object* v_default_322_, lean_object* v_getConst_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType(v_00_u03b1_321_, v_default_322_, v_getConst_323_, v_a_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_);
lean_dec(v_a_335_);
lean_dec_ref(v_a_334_);
lean_dec(v_a_333_);
lean_dec_ref(v_a_332_);
lean_dec(v_a_331_);
lean_dec_ref(v_a_330_);
lean_dec(v_a_329_);
lean_dec_ref(v_a_328_);
lean_dec(v_a_327_);
lean_dec(v_a_326_);
lean_dec(v_a_325_);
lean_dec_ref(v_a_324_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType_spec__0(lean_object* v_00_u03b1_338_, lean_object* v_getConst_339_, lean_object* v_x_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l_List_find_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType_spec__0___redArg(v_getConst_339_, v_x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_List_findM_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass_spec__0___redArg(lean_object* v_x_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_){
_start:
{
if (lean_obj_tag(v_x_342_) == 0)
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_box(0);
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
else
{
lean_object* v_head_350_; lean_object* v_tail_351_; lean_object* v___x_352_; 
v_head_350_ = lean_ctor_get(v_x_342_, 0);
lean_inc_n(v_head_350_, 2);
v_tail_351_ = lean_ctor_get(v_x_342_, 1);
lean_inc(v_tail_351_);
lean_dec_ref_known(v_x_342_, 2);
v___x_352_ = l_Lean_Meta_isConstructorApp(v_head_350_, v___y_343_, v___y_344_, v___y_345_, v___y_346_);
if (lean_obj_tag(v___x_352_) == 0)
{
lean_object* v_a_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_363_; 
v_a_353_ = lean_ctor_get(v___x_352_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_363_ == 0)
{
v___x_355_ = v___x_352_;
v_isShared_356_ = v_isSharedCheck_363_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_a_353_);
lean_dec(v___x_352_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_363_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
uint8_t v___x_357_; 
v___x_357_ = lean_unbox(v_a_353_);
lean_dec(v_a_353_);
if (v___x_357_ == 0)
{
lean_del_object(v___x_355_);
lean_dec(v_head_350_);
v_x_342_ = v_tail_351_;
goto _start;
}
else
{
lean_object* v___x_359_; lean_object* v___x_361_; 
lean_dec(v_tail_351_);
v___x_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_359_, 0, v_head_350_);
if (v_isShared_356_ == 0)
{
lean_ctor_set(v___x_355_, 0, v___x_359_);
v___x_361_ = v___x_355_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_359_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
else
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
lean_dec(v_tail_351_);
lean_dec(v_head_350_);
v_a_364_ = lean_ctor_get(v___x_352_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_352_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_352_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_findM_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass_spec__0___redArg___boxed(lean_object* v_x_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_List_findM_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass_spec__0___redArg(v_x_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass(lean_object* v_root_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_){
_start:
{
lean_object* v___y_439_; lean_object* v___y_440_; lean_object* v___y_447_; lean_object* v___y_448_; lean_object* v___x_454_; 
lean_inc_ref(v_root_424_);
v___x_454_ = l_Lean_Meta_Sym_inferType(v_root_424_, v_a_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_658_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_658_ == 0)
{
v___x_457_ = v___x_454_;
v_isShared_458_ = v_isSharedCheck_658_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v___x_454_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_658_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___y_460_; lean_object* v___y_461_; lean_object* v___y_462_; lean_object* v___y_463_; lean_object* v___y_464_; lean_object* v___y_465_; lean_object* v___y_466_; lean_object* v___y_467_; lean_object* v___y_468_; lean_object* v___y_469_; lean_object* v___y_470_; lean_object* v___y_471_; lean_object* v___x_511_; 
lean_inc(v_a_455_);
v___x_511_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_455_, v_a_434_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_649_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_649_ == 0)
{
v___x_514_ = v___x_511_;
v_isShared_515_ = v_isSharedCheck_649_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_511_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_649_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
uint8_t v___y_517_; lean_object* v___x_524_; lean_object* v___x_525_; uint8_t v___x_526_; 
v___x_524_ = l_Lean_Expr_cleanupAnnotations(v_a_512_);
v___x_525_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__4));
v___x_526_ = l_Lean_Expr_isConstOf(v___x_524_, v___x_525_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; uint8_t v___x_528_; 
v___x_527_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__6));
v___x_528_ = l_Lean_Expr_isConstOf(v___x_524_, v___x_527_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; uint8_t v___x_530_; 
v___x_529_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__8));
v___x_530_ = l_Lean_Expr_isConstOf(v___x_524_, v___x_529_);
if (v___x_530_ == 0)
{
lean_object* v___x_531_; uint8_t v___x_532_; 
v___x_531_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__10));
v___x_532_ = l_Lean_Expr_isConstOf(v___x_524_, v___x_531_);
if (v___x_532_ == 0)
{
lean_object* v___x_533_; uint8_t v___x_534_; 
v___x_533_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__12));
v___x_534_ = l_Lean_Expr_isConstOf(v___x_524_, v___x_533_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; uint8_t v___x_536_; 
v___x_535_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__14));
v___x_536_ = l_Lean_Expr_isConstOf(v___x_524_, v___x_535_);
if (v___x_536_ == 0)
{
lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_537_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__16));
v___x_538_ = l_Lean_Expr_isConstOf(v___x_524_, v___x_537_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; uint8_t v___x_540_; 
v___x_539_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__18));
v___x_540_ = l_Lean_Expr_isConstOf(v___x_524_, v___x_539_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_541_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__20));
v___x_542_ = l_Lean_Expr_isConstOf(v___x_524_, v___x_541_);
if (v___x_542_ == 0)
{
lean_object* v___x_543_; uint8_t v___x_544_; 
v___x_543_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__22));
v___x_544_ = l_Lean_Expr_isConstOf(v___x_524_, v___x_543_);
if (v___x_544_ == 0)
{
lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_545_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__24));
v___x_546_ = l_Lean_Expr_isConstOf(v___x_524_, v___x_545_);
if (v___x_546_ == 0)
{
uint8_t v___x_547_; 
v___x_547_ = l_Lean_Expr_isApp(v___x_524_);
if (v___x_547_ == 0)
{
lean_dec_ref(v___x_524_);
lean_del_object(v___x_514_);
v___y_460_ = v_a_425_;
v___y_461_ = v_a_426_;
v___y_462_ = v_a_427_;
v___y_463_ = v_a_428_;
v___y_464_ = v_a_429_;
v___y_465_ = v_a_430_;
v___y_466_ = v_a_431_;
v___y_467_ = v_a_432_;
v___y_468_ = v_a_433_;
v___y_469_ = v_a_434_;
v___y_470_ = v_a_435_;
v___y_471_ = v_a_436_;
goto v___jp_459_;
}
else
{
lean_object* v_arg_548_; lean_object* v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v_arg_548_ = lean_ctor_get(v___x_524_, 1);
lean_inc_ref(v_arg_548_);
v___x_549_ = l_Lean_Expr_appFnCleanup___redArg(v___x_524_);
v___x_550_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__26));
v___x_551_ = l_Lean_Expr_isConstOf(v___x_549_, v___x_550_);
lean_dec_ref(v___x_549_);
if (v___x_551_ == 0)
{
lean_dec_ref(v_arg_548_);
lean_del_object(v___x_514_);
v___y_460_ = v_a_425_;
v___y_461_ = v_a_426_;
v___y_462_ = v_a_427_;
v___y_463_ = v_a_428_;
v___y_464_ = v_a_429_;
v___y_465_ = v_a_430_;
v___y_466_ = v_a_431_;
v___y_467_ = v_a_432_;
v___y_468_ = v_a_433_;
v___y_469_ = v_a_434_;
v___y_470_ = v_a_435_;
v___y_471_ = v_a_436_;
goto v___jp_459_;
}
else
{
lean_object* v___x_552_; 
lean_del_object(v___x_457_);
lean_dec(v_a_455_);
v___x_552_ = l_Lean_Meta_Sym_getNatValue_x3f(v_arg_548_);
if (lean_obj_tag(v___x_552_) == 0)
{
v___y_517_ = v___x_546_;
goto v___jp_516_;
}
else
{
lean_dec_ref_known(v___x_552_, 1);
v___y_517_ = v___x_551_;
goto v___jp_516_;
}
}
}
}
else
{
lean_object* v___x_553_; 
lean_dec_ref(v___x_524_);
lean_del_object(v___x_514_);
lean_del_object(v___x_457_);
lean_dec(v_a_455_);
lean_inc_ref(v_root_424_);
v___x_553_ = l_Lean_Meta_Grind_isEqBoolTrue___redArg(v_root_424_, v_a_427_, v_a_431_, v_a_433_, v_a_434_, v_a_435_, v_a_436_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; uint8_t v___x_555_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc(v_a_554_);
lean_dec_ref_known(v___x_553_, 1);
v___x_555_ = lean_unbox(v_a_554_);
lean_dec(v_a_554_);
if (v___x_555_ == 0)
{
lean_object* v___x_556_; 
lean_inc_ref(v_root_424_);
v___x_556_ = l_Lean_Meta_Grind_isEqBoolFalse___redArg(v_root_424_, v_a_427_, v_a_431_, v_a_433_, v_a_434_, v_a_435_, v_a_436_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_584_; 
v_a_557_ = lean_ctor_get(v___x_556_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_584_ == 0)
{
v___x_559_ = v___x_556_;
v_isShared_560_ = v_isSharedCheck_584_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_556_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_584_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
uint8_t v___x_561_; 
v___x_561_ = lean_unbox(v_a_557_);
lean_dec(v_a_557_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; lean_object* v___x_564_; 
v___x_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_562_, 0, v_root_424_);
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 0, v___x_562_);
v___x_564_ = v___x_559_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
else
{
lean_object* v___x_566_; 
lean_del_object(v___x_559_);
lean_dec_ref(v_root_424_);
v___x_566_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_431_);
if (lean_obj_tag(v___x_566_) == 0)
{
lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_575_; 
v_a_567_ = lean_ctor_get(v___x_566_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_575_ == 0)
{
v___x_569_ = v___x_566_;
v_isShared_570_ = v_isSharedCheck_575_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_dec(v___x_566_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_575_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_571_, 0, v_a_567_);
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 0, v___x_571_);
v___x_573_ = v___x_569_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_571_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
else
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_583_; 
v_a_576_ = lean_ctor_get(v___x_566_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_583_ == 0)
{
v___x_578_ = v___x_566_;
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_566_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_576_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
}
}
}
else
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
lean_dec_ref(v_root_424_);
v_a_585_ = lean_ctor_get(v___x_556_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_592_ == 0)
{
v___x_587_ = v___x_556_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_556_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
else
{
lean_object* v___x_593_; 
lean_dec_ref(v_root_424_);
v___x_593_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_431_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_602_; 
v_a_594_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_602_ == 0)
{
v___x_596_ = v___x_593_;
v_isShared_597_ = v_isSharedCheck_602_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_593_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_602_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_598_; lean_object* v___x_600_; 
v___x_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_598_, 0, v_a_594_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 0, v___x_598_);
v___x_600_ = v___x_596_;
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
}
else
{
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_610_; 
v_a_603_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_610_ == 0)
{
v___x_605_ = v___x_593_;
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_593_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_608_; 
if (v_isShared_606_ == 0)
{
v___x_608_ = v___x_605_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_603_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
}
else
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
lean_dec_ref(v_root_424_);
v_a_611_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_618_ == 0)
{
v___x_613_ = v___x_553_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_553_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_a_611_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
}
}
else
{
uint8_t v_fixedInt_619_; 
lean_dec_ref(v___x_524_);
lean_del_object(v___x_514_);
lean_del_object(v___x_457_);
lean_dec(v_a_455_);
v_fixedInt_619_ = lean_ctor_get_uint8(v_a_425_, sizeof(void*)*2 + 6);
if (v_fixedInt_619_ == 0)
{
lean_object* v___x_620_; lean_object* v___x_621_; 
lean_dec_ref(v_root_424_);
v___x_620_ = lean_box(0);
v___x_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
return v___x_621_;
}
else
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__27));
v___x_623_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg(v_root_424_, v___x_622_, v_a_427_);
return v___x_623_;
}
}
}
else
{
uint8_t v_fixedInt_624_; 
lean_dec_ref(v___x_524_);
lean_del_object(v___x_514_);
lean_del_object(v___x_457_);
lean_dec(v_a_455_);
v_fixedInt_624_ = lean_ctor_get_uint8(v_a_425_, sizeof(void*)*2 + 6);
if (v_fixedInt_624_ == 0)
{
lean_object* v___x_625_; lean_object* v___x_626_; 
lean_dec_ref(v_root_424_);
v___x_625_ = lean_box(0);
v___x_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
return v___x_626_;
}
else
{
lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_627_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__28));
v___x_628_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg(v_root_424_, v___x_627_, v_a_427_);
return v___x_628_;
}
}
}
else
{
uint8_t v_fixedInt_629_; 
lean_dec_ref(v___x_524_);
lean_del_object(v___x_514_);
lean_del_object(v___x_457_);
lean_dec(v_a_455_);
v_fixedInt_629_ = lean_ctor_get_uint8(v_a_425_, sizeof(void*)*2 + 6);
if (v_fixedInt_629_ == 0)
{
lean_object* v___x_630_; lean_object* v___x_631_; 
lean_dec_ref(v_root_424_);
v___x_630_ = lean_box(0);
v___x_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
return v___x_631_;
}
else
{
lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_632_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__29));
v___x_633_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg(v_root_424_, v___x_632_, v_a_427_);
return v___x_633_;
}
}
}
else
{
lean_dec_ref(v___x_524_);
lean_del_object(v___x_514_);
lean_del_object(v___x_457_);
lean_dec(v_a_455_);
v___y_447_ = v_a_425_;
v___y_448_ = v_a_427_;
goto v___jp_446_;
}
}
else
{
uint8_t v_fixedInt_634_; 
lean_dec_ref(v___x_524_);
lean_del_object(v___x_514_);
lean_del_object(v___x_457_);
lean_dec(v_a_455_);
v_fixedInt_634_ = lean_ctor_get_uint8(v_a_425_, sizeof(void*)*2 + 6);
if (v_fixedInt_634_ == 0)
{
lean_object* v___x_635_; lean_object* v___x_636_; 
lean_dec_ref(v_root_424_);
v___x_635_ = lean_box(0);
v___x_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
return v___x_636_;
}
else
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__30));
v___x_638_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg(v_root_424_, v___x_637_, v_a_427_);
return v___x_638_;
}
}
}
else
{
uint8_t v_fixedInt_639_; 
lean_dec_ref(v___x_524_);
lean_del_object(v___x_514_);
lean_del_object(v___x_457_);
lean_dec(v_a_455_);
v_fixedInt_639_ = lean_ctor_get_uint8(v_a_425_, sizeof(void*)*2 + 6);
if (v_fixedInt_639_ == 0)
{
lean_object* v___x_640_; lean_object* v___x_641_; 
lean_dec_ref(v_root_424_);
v___x_640_ = lean_box(0);
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
return v___x_641_;
}
else
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__31));
v___x_643_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg(v_root_424_, v___x_642_, v_a_427_);
return v___x_643_;
}
}
}
else
{
uint8_t v_fixedInt_644_; 
lean_dec_ref(v___x_524_);
lean_del_object(v___x_514_);
lean_del_object(v___x_457_);
lean_dec(v_a_455_);
v_fixedInt_644_ = lean_ctor_get_uint8(v_a_425_, sizeof(void*)*2 + 6);
if (v_fixedInt_644_ == 0)
{
lean_object* v___x_645_; lean_object* v___x_646_; 
lean_dec_ref(v_root_424_);
v___x_645_ = lean_box(0);
v___x_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
return v___x_646_;
}
else
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__32));
v___x_648_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg(v_root_424_, v___x_647_, v_a_427_);
return v___x_648_;
}
}
}
else
{
lean_dec_ref(v___x_524_);
lean_del_object(v___x_514_);
lean_del_object(v___x_457_);
lean_dec(v_a_455_);
v___y_439_ = v_a_425_;
v___y_440_ = v_a_427_;
goto v___jp_438_;
}
}
else
{
lean_dec_ref(v___x_524_);
lean_del_object(v___x_514_);
lean_del_object(v___x_457_);
lean_dec(v_a_455_);
v___y_447_ = v_a_425_;
v___y_448_ = v_a_427_;
goto v___jp_446_;
}
}
else
{
lean_dec_ref(v___x_524_);
lean_del_object(v___x_514_);
lean_del_object(v___x_457_);
lean_dec(v_a_455_);
v___y_439_ = v_a_425_;
v___y_440_ = v_a_427_;
goto v___jp_438_;
}
v___jp_516_:
{
if (v___y_517_ == 0)
{
lean_object* v___x_518_; lean_object* v___x_520_; 
lean_dec_ref(v_root_424_);
v___x_518_ = lean_box(0);
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 0, v___x_518_);
v___x_520_ = v___x_514_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_518_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
else
{
lean_object* v___x_522_; lean_object* v___x_523_; 
lean_del_object(v___x_514_);
v___x_522_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__2));
v___x_523_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg(v_root_424_, v___x_522_, v_a_427_);
return v___x_523_;
}
}
}
}
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_del_object(v___x_457_);
lean_dec(v_a_455_);
lean_dec_ref(v_root_424_);
v_a_650_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_511_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_511_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
v___jp_459_:
{
lean_object* v___x_472_; 
v___x_472_ = l_Lean_Expr_getAppFn_x27(v_a_455_);
lean_dec(v_a_455_);
if (lean_obj_tag(v___x_472_) == 4)
{
lean_object* v_declName_473_; lean_object* v___x_474_; 
lean_del_object(v___x_457_);
v_declName_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_declName_473_);
lean_dec_ref_known(v___x_472_, 2);
v___x_474_ = l_Lean_Meta_Tactic_BVDecide_isPotentialTypeAnalysisType(v___y_460_, v_declName_473_, v___y_470_, v___y_471_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_498_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_498_ == 0)
{
v___x_477_ = v___x_474_;
v_isShared_478_ = v_isSharedCheck_498_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_474_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_498_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
uint8_t v___x_479_; 
v___x_479_ = lean_unbox(v_a_475_);
lean_dec(v_a_475_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; lean_object* v___x_482_; 
lean_dec_ref(v_root_424_);
v___x_480_ = lean_box(0);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 0, v___x_480_);
v___x_482_ = v___x_477_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_480_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
else
{
uint8_t v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
lean_del_object(v___x_477_);
v___x_484_ = 0;
v___x_485_ = lean_st_ref_get(v___y_462_);
lean_inc_ref(v_root_424_);
v___x_486_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_485_, v_root_424_, v___x_484_);
lean_dec(v___x_485_);
v___x_487_ = l_List_findM_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass_spec__0___redArg(v___x_486_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v_a_488_; 
v_a_488_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_a_488_);
if (lean_obj_tag(v_a_488_) == 1)
{
lean_dec_ref_known(v_a_488_, 1);
lean_dec_ref(v_root_424_);
return v___x_487_;
}
else
{
lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_496_; 
lean_dec(v_a_488_);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_496_ == 0)
{
lean_object* v_unused_497_; 
v_unused_497_ = lean_ctor_get(v___x_487_, 0);
lean_dec(v_unused_497_);
v___x_490_ = v___x_487_;
v_isShared_491_ = v_isSharedCheck_496_;
goto v_resetjp_489_;
}
else
{
lean_dec(v___x_487_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_496_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_492_; lean_object* v___x_494_; 
v___x_492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_492_, 0, v_root_424_);
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 0, v___x_492_);
v___x_494_ = v___x_490_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_492_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
else
{
lean_dec_ref(v_root_424_);
return v___x_487_;
}
}
}
}
else
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_506_; 
lean_dec_ref(v_root_424_);
v_a_499_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_506_ == 0)
{
v___x_501_ = v___x_474_;
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_474_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_502_ == 0)
{
v___x_504_ = v___x_501_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_499_);
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
else
{
lean_object* v___x_507_; lean_object* v___x_509_; 
lean_dec_ref(v___x_472_);
lean_dec_ref(v_root_424_);
v___x_507_ = lean_box(0);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 0, v___x_507_);
v___x_509_ = v___x_457_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_507_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
}
}
else
{
lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_666_; 
lean_dec_ref(v_root_424_);
v_a_659_ = lean_ctor_get(v___x_454_, 0);
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_666_ == 0)
{
v___x_661_ = v___x_454_;
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v___x_454_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_664_; 
if (v_isShared_662_ == 0)
{
v___x_664_ = v___x_661_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_a_659_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
}
v___jp_438_:
{
uint8_t v_fixedInt_441_; 
v_fixedInt_441_ = lean_ctor_get_uint8(v___y_439_, sizeof(void*)*2 + 6);
if (v_fixedInt_441_ == 0)
{
lean_object* v___x_442_; lean_object* v___x_443_; 
lean_dec_ref(v_root_424_);
v___x_442_ = lean_box(0);
v___x_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
return v___x_443_;
}
else
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__0));
v___x_445_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg(v_root_424_, v___x_444_, v___y_440_);
return v___x_445_;
}
}
v___jp_446_:
{
uint8_t v_fixedInt_449_; 
v_fixedInt_449_ = lean_ctor_get_uint8(v___y_447_, sizeof(void*)*2 + 6);
if (v_fixedInt_449_ == 0)
{
lean_object* v___x_450_; lean_object* v___x_451_; 
lean_dec_ref(v_root_424_);
v___x_450_ = lean_box(0);
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
else
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___closed__1));
v___x_453_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_handleEqcWithConstType___redArg(v_root_424_, v___x_452_, v___y_448_);
return v___x_453_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass___boxed(lean_object* v_root_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass(v_root_667_, v_a_668_, v_a_669_, v_a_670_, v_a_671_, v_a_672_, v_a_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_, v_a_678_, v_a_679_);
lean_dec(v_a_679_);
lean_dec_ref(v_a_678_);
lean_dec(v_a_677_);
lean_dec_ref(v_a_676_);
lean_dec(v_a_675_);
lean_dec_ref(v_a_674_);
lean_dec(v_a_673_);
lean_dec_ref(v_a_672_);
lean_dec(v_a_671_);
lean_dec(v_a_670_);
lean_dec(v_a_669_);
lean_dec_ref(v_a_668_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_List_findM_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass_spec__0(lean_object* v_x_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
lean_object* v___x_696_; 
v___x_696_ = l_List_findM_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass_spec__0___redArg(v_x_682_, v___y_691_, v___y_692_, v___y_693_, v___y_694_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l_List_findM_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass_spec__0___boxed(lean_object* v_x_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_List_findM_x3f___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass_spec__0(v_x_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec(v___y_707_);
lean_dec_ref(v___y_706_);
lean_dec(v___y_705_);
lean_dec_ref(v___y_704_);
lean_dec(v___y_703_);
lean_dec_ref(v___y_702_);
lean_dec(v___y_701_);
lean_dec(v___y_700_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0___redArg(lean_object* v_val_712_, uint8_t v___y_713_, lean_object* v_as_x27_714_, lean_object* v_b_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
if (lean_obj_tag(v_as_x27_714_) == 0)
{
lean_object* v___x_728_; 
lean_dec_ref(v_val_712_);
v___x_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_728_, 0, v_b_715_);
return v___x_728_;
}
else
{
lean_object* v_head_729_; lean_object* v_tail_730_; lean_object* v___x_731_; lean_object* v___y_733_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_743_; uint8_t v___x_781_; 
v_head_729_ = lean_ctor_get(v_as_x27_714_, 0);
v_tail_730_ = lean_ctor_get(v_as_x27_714_, 1);
v___x_731_ = lean_box(0);
v___x_781_ = lean_expr_eqv(v_head_729_, v_val_712_);
if (v___x_781_ == 0)
{
if (v___y_713_ == 0)
{
lean_object* v___x_782_; 
lean_inc_ref(v_val_712_);
lean_inc(v_head_729_);
v___x_782_ = l_Lean_Meta_Grind_hasSameType(v_head_729_, v_val_712_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v_a_783_; uint8_t v___x_784_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_a_783_);
lean_dec_ref_known(v___x_782_, 1);
v___x_784_ = lean_unbox(v_a_783_);
lean_dec(v_a_783_);
if (v___x_784_ == 0)
{
v_as_x27_714_ = v_tail_730_;
v_b_715_ = v___x_731_;
goto _start;
}
else
{
v___y_733_ = v___y_716_;
v___y_734_ = v___y_717_;
v___y_735_ = v___y_718_;
v___y_736_ = v___y_719_;
v___y_737_ = v___y_720_;
v___y_738_ = v___y_721_;
v___y_739_ = v___y_722_;
v___y_740_ = v___y_723_;
v___y_741_ = v___y_724_;
v___y_742_ = v___y_725_;
v___y_743_ = v___y_726_;
goto v___jp_732_;
}
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
lean_dec_ref(v_val_712_);
v_a_786_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_782_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_782_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_786_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
else
{
v___y_733_ = v___y_716_;
v___y_734_ = v___y_717_;
v___y_735_ = v___y_718_;
v___y_736_ = v___y_719_;
v___y_737_ = v___y_720_;
v___y_738_ = v___y_721_;
v___y_739_ = v___y_722_;
v___y_740_ = v___y_723_;
v___y_741_ = v___y_724_;
v___y_742_ = v___y_725_;
v___y_743_ = v___y_726_;
goto v___jp_732_;
}
}
else
{
v_as_x27_714_ = v_tail_730_;
v_b_715_ = v___x_731_;
goto _start;
}
v___jp_732_:
{
lean_object* v___x_744_; 
lean_inc_ref(v_val_712_);
lean_inc(v_head_729_);
v___x_744_ = l_Lean_Meta_mkEq(v_head_729_, v_val_712_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v___x_746_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
lean_dec_ref_known(v___x_744_, 1);
v___x_746_ = l_Lean_Meta_Sym_shareCommonInc(v_a_745_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_748_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_747_);
lean_dec_ref_known(v___x_746_, 1);
lean_inc(v___y_743_);
lean_inc_ref(v___y_742_);
lean_inc(v___y_741_);
lean_inc_ref(v___y_740_);
lean_inc(v___y_739_);
lean_inc_ref(v___y_738_);
lean_inc(v___y_737_);
lean_inc_ref(v___y_736_);
lean_inc(v___y_735_);
lean_inc(v___y_734_);
lean_inc_ref(v_val_712_);
lean_inc(v_head_729_);
v___x_748_ = lean_grind_mk_eq_proof(v_head_729_, v_val_712_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_748_, 1);
v___x_750_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5);
v___x_751_ = lean_box(4);
v___x_752_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_752_, 0, v___x_750_);
lean_ctor_set(v___x_752_, 1, v_a_747_);
lean_ctor_set(v___x_752_, 2, v_a_749_);
lean_ctor_set(v___x_752_, 3, v___x_751_);
v___x_753_ = lean_st_ref_take(v___y_733_);
v___x_754_ = lean_array_push(v___x_753_, v___x_752_);
v___x_755_ = lean_st_ref_put(v___y_733_, v___x_754_);
v_as_x27_714_ = v_tail_730_;
v_b_715_ = v___x_731_;
goto _start;
}
else
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_764_; 
lean_dec(v_a_747_);
lean_dec_ref(v_val_712_);
v_a_757_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_764_ == 0)
{
v___x_759_ = v___x_748_;
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_748_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_757_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
else
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
lean_dec_ref(v_val_712_);
v_a_765_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v___x_746_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___x_746_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_765_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
else
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_780_; 
lean_dec_ref(v_val_712_);
v_a_773_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_780_ == 0)
{
v___x_775_ = v___x_744_;
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v___x_744_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_a_773_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0___redArg___boxed(lean_object* v_val_795_, lean_object* v___y_796_, lean_object* v_as_x27_797_, lean_object* v_b_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_){
_start:
{
uint8_t v___y_46586__boxed_811_; lean_object* v_res_812_; 
v___y_46586__boxed_811_ = lean_unbox(v___y_796_);
v_res_812_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0___redArg(v_val_795_, v___y_46586__boxed_811_, v_as_x27_797_, v_b_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec(v___y_807_);
lean_dec_ref(v___y_806_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
lean_dec(v___y_803_);
lean_dec_ref(v___y_802_);
lean_dec(v___y_801_);
lean_dec(v___y_800_);
lean_dec(v___y_799_);
lean_dec(v_as_x27_797_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2_spec__5(lean_object* v_as_813_, size_t v_sz_814_, size_t v_i_815_, lean_object* v_b_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
uint8_t v___x_830_; 
v___x_830_ = lean_usize_dec_lt(v_i_815_, v_sz_814_);
if (v___x_830_ == 0)
{
lean_object* v___x_831_; 
v___x_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_831_, 0, v_b_816_);
return v___x_831_;
}
else
{
lean_object* v___x_832_; lean_object* v_a_834_; lean_object* v___x_839_; lean_object* v_a_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
lean_dec_ref(v_b_816_);
v___x_832_ = lean_box(0);
v___x_839_ = lean_box(0);
v_a_840_ = lean_array_uget_borrowed(v_as_813_, v_i_815_);
v___x_841_ = lean_st_ref_get(v___y_819_);
lean_inc(v_a_840_);
v___x_842_ = l_Lean_Meta_Grind_Goal_getENode(v___x_841_, v_a_840_, v___y_825_, v___y_826_, v___y_827_, v___y_828_);
lean_dec(v___x_841_);
if (lean_obj_tag(v___x_842_) == 0)
{
lean_object* v_a_843_; uint8_t v___x_844_; 
v_a_843_ = lean_ctor_get(v___x_842_, 0);
lean_inc(v_a_843_);
lean_dec_ref_known(v___x_842_, 1);
v___x_844_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_843_);
if (v___x_844_ == 0)
{
lean_dec(v_a_843_);
v_a_834_ = v___x_839_;
goto v___jp_833_;
}
else
{
lean_object* v___x_845_; 
lean_inc(v_a_840_);
v___x_845_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass(v_a_840_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v_a_846_; 
v_a_846_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_a_846_);
lean_dec_ref_known(v___x_845_, 1);
if (lean_obj_tag(v_a_846_) == 1)
{
lean_object* v_val_847_; uint8_t v___y_849_; uint8_t v_heqProofs_862_; 
v_val_847_ = lean_ctor_get(v_a_846_, 0);
lean_inc(v_val_847_);
lean_dec_ref_known(v_a_846_, 1);
v_heqProofs_862_ = lean_ctor_get_uint8(v_a_843_, sizeof(void*)*12 + 4);
lean_dec(v_a_843_);
if (v_heqProofs_862_ == 0)
{
v___y_849_ = v___x_844_;
goto v___jp_848_;
}
else
{
uint8_t v___x_863_; 
v___x_863_ = 0;
v___y_849_ = v___x_863_;
goto v___jp_848_;
}
v___jp_848_:
{
uint8_t v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_850_ = 0;
v___x_851_ = lean_st_ref_get(v___y_819_);
lean_inc(v_a_840_);
v___x_852_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_851_, v_a_840_, v___x_850_);
lean_dec(v___x_851_);
v___x_853_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0___redArg(v_val_847_, v___y_849_, v___x_852_, v___x_839_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_);
lean_dec(v___x_852_);
if (lean_obj_tag(v___x_853_) == 0)
{
lean_dec_ref_known(v___x_853_, 1);
v_a_834_ = v___x_839_;
goto v___jp_833_;
}
else
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
v_reuseFailAlloc_860_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_dec(v_a_846_);
lean_dec(v_a_843_);
v_a_834_ = v___x_839_;
goto v___jp_833_;
}
}
else
{
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_871_; 
lean_dec(v_a_843_);
v_a_864_ = lean_ctor_get(v___x_845_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_871_ == 0)
{
v___x_866_ = v___x_845_;
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v___x_845_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_869_; 
if (v_isShared_867_ == 0)
{
v___x_869_ = v___x_866_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_a_864_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
}
}
else
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_879_; 
v_a_872_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_879_ == 0)
{
v___x_874_ = v___x_842_;
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v___x_842_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_877_; 
if (v_isShared_875_ == 0)
{
v___x_877_ = v___x_874_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_a_872_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
v___jp_833_:
{
lean_object* v___x_835_; size_t v___x_836_; size_t v___x_837_; 
v___x_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_832_);
lean_ctor_set(v___x_835_, 1, v_a_834_);
v___x_836_ = ((size_t)1ULL);
v___x_837_ = lean_usize_add(v_i_815_, v___x_836_);
v_i_815_ = v___x_837_;
v_b_816_ = v___x_835_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2_spec__5___boxed(lean_object** _args){
lean_object* v_as_880_ = _args[0];
lean_object* v_sz_881_ = _args[1];
lean_object* v_i_882_ = _args[2];
lean_object* v_b_883_ = _args[3];
lean_object* v___y_884_ = _args[4];
lean_object* v___y_885_ = _args[5];
lean_object* v___y_886_ = _args[6];
lean_object* v___y_887_ = _args[7];
lean_object* v___y_888_ = _args[8];
lean_object* v___y_889_ = _args[9];
lean_object* v___y_890_ = _args[10];
lean_object* v___y_891_ = _args[11];
lean_object* v___y_892_ = _args[12];
lean_object* v___y_893_ = _args[13];
lean_object* v___y_894_ = _args[14];
lean_object* v___y_895_ = _args[15];
lean_object* v___y_896_ = _args[16];
_start:
{
size_t v_sz_boxed_897_; size_t v_i_boxed_898_; lean_object* v_res_899_; 
v_sz_boxed_897_ = lean_unbox_usize(v_sz_881_);
lean_dec(v_sz_881_);
v_i_boxed_898_ = lean_unbox_usize(v_i_882_);
lean_dec(v_i_882_);
v_res_899_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2_spec__5(v_as_880_, v_sz_boxed_897_, v_i_boxed_898_, v_b_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec(v___y_891_);
lean_dec_ref(v___y_890_);
lean_dec(v___y_889_);
lean_dec_ref(v___y_888_);
lean_dec(v___y_887_);
lean_dec(v___y_886_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec_ref(v_as_880_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2(lean_object* v_as_903_, size_t v_sz_904_, size_t v_i_905_, lean_object* v_b_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
uint8_t v___x_920_; 
v___x_920_ = lean_usize_dec_lt(v_i_905_, v_sz_904_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; 
v___x_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_921_, 0, v_b_906_);
return v___x_921_;
}
else
{
lean_object* v___x_922_; lean_object* v_a_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
lean_dec_ref(v_b_906_);
v___x_922_ = lean_box(0);
v_a_928_ = lean_array_uget_borrowed(v_as_903_, v_i_905_);
v___x_929_ = lean_st_ref_get(v___y_909_);
lean_inc(v_a_928_);
v___x_930_ = l_Lean_Meta_Grind_Goal_getENode(v___x_929_, v_a_928_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
lean_dec(v___x_929_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_a_931_; uint8_t v___x_932_; 
v_a_931_ = lean_ctor_get(v___x_930_, 0);
lean_inc(v_a_931_);
lean_dec_ref_known(v___x_930_, 1);
v___x_932_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_931_);
if (v___x_932_ == 0)
{
lean_dec(v_a_931_);
goto v___jp_923_;
}
else
{
lean_object* v___x_933_; 
lean_inc(v_a_928_);
v___x_933_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass(v_a_928_, v___y_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; 
v_a_934_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_a_934_);
lean_dec_ref_known(v___x_933_, 1);
if (lean_obj_tag(v_a_934_) == 1)
{
lean_object* v_val_935_; uint8_t v___y_937_; uint8_t v_heqProofs_950_; 
v_val_935_ = lean_ctor_get(v_a_934_, 0);
lean_inc(v_val_935_);
lean_dec_ref_known(v_a_934_, 1);
v_heqProofs_950_ = lean_ctor_get_uint8(v_a_931_, sizeof(void*)*12 + 4);
lean_dec(v_a_931_);
if (v_heqProofs_950_ == 0)
{
v___y_937_ = v___x_932_;
goto v___jp_936_;
}
else
{
uint8_t v___x_951_; 
v___x_951_ = 0;
v___y_937_ = v___x_951_;
goto v___jp_936_;
}
v___jp_936_:
{
uint8_t v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_938_ = 0;
v___x_939_ = lean_st_ref_get(v___y_909_);
lean_inc(v_a_928_);
v___x_940_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_939_, v_a_928_, v___x_938_);
lean_dec(v___x_939_);
v___x_941_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0___redArg(v_val_935_, v___y_937_, v___x_940_, v___x_922_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
lean_dec(v___x_940_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_dec_ref_known(v___x_941_, 1);
goto v___jp_923_;
}
else
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
v_a_942_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v___x_941_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_941_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
}
else
{
lean_dec(v_a_934_);
lean_dec(v_a_931_);
goto v___jp_923_;
}
}
else
{
lean_object* v_a_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_959_; 
lean_dec(v_a_931_);
v_a_952_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_959_ == 0)
{
v___x_954_ = v___x_933_;
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_a_952_);
lean_dec(v___x_933_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_957_; 
if (v_isShared_955_ == 0)
{
v___x_957_ = v___x_954_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_a_952_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
}
}
else
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_967_; 
v_a_960_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_967_ == 0)
{
v___x_962_ = v___x_930_;
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_930_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_965_; 
if (v_isShared_963_ == 0)
{
v___x_965_ = v___x_962_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_a_960_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
v___jp_923_:
{
lean_object* v___x_924_; size_t v___x_925_; size_t v___x_926_; lean_object* v___x_927_; 
v___x_924_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2___closed__0));
v___x_925_ = ((size_t)1ULL);
v___x_926_ = lean_usize_add(v_i_905_, v___x_925_);
v___x_927_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2_spec__5(v_as_903_, v_sz_904_, v___x_926_, v___x_924_, v___y_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
return v___x_927_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2___boxed(lean_object** _args){
lean_object* v_as_968_ = _args[0];
lean_object* v_sz_969_ = _args[1];
lean_object* v_i_970_ = _args[2];
lean_object* v_b_971_ = _args[3];
lean_object* v___y_972_ = _args[4];
lean_object* v___y_973_ = _args[5];
lean_object* v___y_974_ = _args[6];
lean_object* v___y_975_ = _args[7];
lean_object* v___y_976_ = _args[8];
lean_object* v___y_977_ = _args[9];
lean_object* v___y_978_ = _args[10];
lean_object* v___y_979_ = _args[11];
lean_object* v___y_980_ = _args[12];
lean_object* v___y_981_ = _args[13];
lean_object* v___y_982_ = _args[14];
lean_object* v___y_983_ = _args[15];
lean_object* v___y_984_ = _args[16];
_start:
{
size_t v_sz_boxed_985_; size_t v_i_boxed_986_; lean_object* v_res_987_; 
v_sz_boxed_985_ = lean_unbox_usize(v_sz_969_);
lean_dec(v_sz_969_);
v_i_boxed_986_ = lean_unbox_usize(v_i_970_);
lean_dec(v_i_970_);
v_res_987_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2(v_as_968_, v_sz_boxed_985_, v_i_boxed_986_, v_b_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_);
lean_dec(v___y_983_);
lean_dec_ref(v___y_982_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
lean_dec(v___y_977_);
lean_dec_ref(v___y_976_);
lean_dec(v___y_975_);
lean_dec(v___y_974_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
lean_dec_ref(v_as_968_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3_spec__4(lean_object* v_as_988_, size_t v_sz_989_, size_t v_i_990_, lean_object* v_b_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
uint8_t v___x_1005_; 
v___x_1005_ = lean_usize_dec_lt(v_i_990_, v_sz_989_);
if (v___x_1005_ == 0)
{
lean_object* v___x_1006_; 
v___x_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1006_, 0, v_b_991_);
return v___x_1006_;
}
else
{
lean_object* v___x_1007_; lean_object* v_a_1009_; lean_object* v___x_1014_; lean_object* v_a_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
lean_dec_ref(v_b_991_);
v___x_1007_ = lean_box(0);
v___x_1014_ = lean_box(0);
v_a_1015_ = lean_array_uget_borrowed(v_as_988_, v_i_990_);
v___x_1016_ = lean_st_ref_get(v___y_994_);
lean_inc(v_a_1015_);
v___x_1017_ = l_Lean_Meta_Grind_Goal_getENode(v___x_1016_, v_a_1015_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
lean_dec(v___x_1016_);
if (lean_obj_tag(v___x_1017_) == 0)
{
lean_object* v_a_1018_; uint8_t v___x_1019_; 
v_a_1018_ = lean_ctor_get(v___x_1017_, 0);
lean_inc(v_a_1018_);
lean_dec_ref_known(v___x_1017_, 1);
v___x_1019_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_1018_);
if (v___x_1019_ == 0)
{
lean_dec(v_a_1018_);
v_a_1009_ = v___x_1014_;
goto v___jp_1008_;
}
else
{
lean_object* v___x_1020_; 
lean_inc(v_a_1015_);
v___x_1020_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass(v_a_1015_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v_a_1021_; 
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
lean_inc(v_a_1021_);
lean_dec_ref_known(v___x_1020_, 1);
if (lean_obj_tag(v_a_1021_) == 1)
{
lean_object* v_val_1022_; uint8_t v___y_1024_; uint8_t v_heqProofs_1037_; 
v_val_1022_ = lean_ctor_get(v_a_1021_, 0);
lean_inc(v_val_1022_);
lean_dec_ref_known(v_a_1021_, 1);
v_heqProofs_1037_ = lean_ctor_get_uint8(v_a_1018_, sizeof(void*)*12 + 4);
lean_dec(v_a_1018_);
if (v_heqProofs_1037_ == 0)
{
v___y_1024_ = v___x_1019_;
goto v___jp_1023_;
}
else
{
uint8_t v___x_1038_; 
v___x_1038_ = 0;
v___y_1024_ = v___x_1038_;
goto v___jp_1023_;
}
v___jp_1023_:
{
uint8_t v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1025_ = 0;
v___x_1026_ = lean_st_ref_get(v___y_994_);
lean_inc(v_a_1015_);
v___x_1027_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_1026_, v_a_1015_, v___x_1025_);
lean_dec(v___x_1026_);
v___x_1028_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0___redArg(v_val_1022_, v___y_1024_, v___x_1027_, v___x_1014_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
lean_dec(v___x_1027_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_dec_ref_known(v___x_1028_, 1);
v_a_1009_ = v___x_1014_;
goto v___jp_1008_;
}
else
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1036_; 
v_a_1029_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1031_ = v___x_1028_;
v_isShared_1032_ = v_isSharedCheck_1036_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_1028_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1036_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1034_; 
if (v_isShared_1032_ == 0)
{
v___x_1034_ = v___x_1031_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v_a_1029_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
}
}
}
else
{
lean_dec(v_a_1021_);
lean_dec(v_a_1018_);
v_a_1009_ = v___x_1014_;
goto v___jp_1008_;
}
}
else
{
lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1046_; 
lean_dec(v_a_1018_);
v_a_1039_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_1020_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_1020_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
}
else
{
lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1054_; 
v_a_1047_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1049_ = v___x_1017_;
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1017_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1052_; 
if (v_isShared_1050_ == 0)
{
v___x_1052_ = v___x_1049_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_a_1047_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
v___jp_1008_:
{
lean_object* v___x_1010_; size_t v___x_1011_; size_t v___x_1012_; 
v___x_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1007_);
lean_ctor_set(v___x_1010_, 1, v_a_1009_);
v___x_1011_ = ((size_t)1ULL);
v___x_1012_ = lean_usize_add(v_i_990_, v___x_1011_);
v_i_990_ = v___x_1012_;
v_b_991_ = v___x_1010_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3_spec__4___boxed(lean_object** _args){
lean_object* v_as_1055_ = _args[0];
lean_object* v_sz_1056_ = _args[1];
lean_object* v_i_1057_ = _args[2];
lean_object* v_b_1058_ = _args[3];
lean_object* v___y_1059_ = _args[4];
lean_object* v___y_1060_ = _args[5];
lean_object* v___y_1061_ = _args[6];
lean_object* v___y_1062_ = _args[7];
lean_object* v___y_1063_ = _args[8];
lean_object* v___y_1064_ = _args[9];
lean_object* v___y_1065_ = _args[10];
lean_object* v___y_1066_ = _args[11];
lean_object* v___y_1067_ = _args[12];
lean_object* v___y_1068_ = _args[13];
lean_object* v___y_1069_ = _args[14];
lean_object* v___y_1070_ = _args[15];
lean_object* v___y_1071_ = _args[16];
_start:
{
size_t v_sz_boxed_1072_; size_t v_i_boxed_1073_; lean_object* v_res_1074_; 
v_sz_boxed_1072_ = lean_unbox_usize(v_sz_1056_);
lean_dec(v_sz_1056_);
v_i_boxed_1073_ = lean_unbox_usize(v_i_1057_);
lean_dec(v_i_1057_);
v_res_1074_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3_spec__4(v_as_1055_, v_sz_boxed_1072_, v_i_boxed_1073_, v_b_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec_ref(v_as_1055_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3(lean_object* v_as_1078_, size_t v_sz_1079_, size_t v_i_1080_, lean_object* v_b_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
uint8_t v___x_1095_; 
v___x_1095_ = lean_usize_dec_lt(v_i_1080_, v_sz_1079_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; 
v___x_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1096_, 0, v_b_1081_);
return v___x_1096_;
}
else
{
lean_object* v___x_1097_; lean_object* v_a_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
lean_dec_ref(v_b_1081_);
v___x_1097_ = lean_box(0);
v_a_1103_ = lean_array_uget_borrowed(v_as_1078_, v_i_1080_);
v___x_1104_ = lean_st_ref_get(v___y_1084_);
lean_inc(v_a_1103_);
v___x_1105_ = l_Lean_Meta_Grind_Goal_getENode(v___x_1104_, v_a_1103_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_);
lean_dec(v___x_1104_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v_a_1106_; uint8_t v___x_1107_; 
v_a_1106_ = lean_ctor_get(v___x_1105_, 0);
lean_inc(v_a_1106_);
lean_dec_ref_known(v___x_1105_, 1);
v___x_1107_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_1106_);
if (v___x_1107_ == 0)
{
lean_dec(v_a_1106_);
goto v___jp_1098_;
}
else
{
lean_object* v___x_1108_; 
lean_inc(v_a_1103_);
v___x_1108_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_analyzeClass(v_a_1103_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_);
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_object* v_a_1109_; 
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
lean_inc(v_a_1109_);
lean_dec_ref_known(v___x_1108_, 1);
if (lean_obj_tag(v_a_1109_) == 1)
{
lean_object* v_val_1110_; uint8_t v___y_1112_; uint8_t v_heqProofs_1125_; 
v_val_1110_ = lean_ctor_get(v_a_1109_, 0);
lean_inc(v_val_1110_);
lean_dec_ref_known(v_a_1109_, 1);
v_heqProofs_1125_ = lean_ctor_get_uint8(v_a_1106_, sizeof(void*)*12 + 4);
lean_dec(v_a_1106_);
if (v_heqProofs_1125_ == 0)
{
v___y_1112_ = v___x_1107_;
goto v___jp_1111_;
}
else
{
uint8_t v___x_1126_; 
v___x_1126_ = 0;
v___y_1112_ = v___x_1126_;
goto v___jp_1111_;
}
v___jp_1111_:
{
uint8_t v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1113_ = 0;
v___x_1114_ = lean_st_ref_get(v___y_1084_);
lean_inc(v_a_1103_);
v___x_1115_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_1114_, v_a_1103_, v___x_1113_);
lean_dec(v___x_1114_);
v___x_1116_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0___redArg(v_val_1110_, v___y_1112_, v___x_1115_, v___x_1097_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_);
lean_dec(v___x_1115_);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_dec_ref_known(v___x_1116_, 1);
goto v___jp_1098_;
}
else
{
lean_object* v_a_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1124_; 
v_a_1117_ = lean_ctor_get(v___x_1116_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1116_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1119_ = v___x_1116_;
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_a_1117_);
lean_dec(v___x_1116_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1122_; 
if (v_isShared_1120_ == 0)
{
v___x_1122_ = v___x_1119_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_a_1117_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
}
else
{
lean_dec(v_a_1109_);
lean_dec(v_a_1106_);
goto v___jp_1098_;
}
}
else
{
lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1134_; 
lean_dec(v_a_1106_);
v_a_1127_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1129_ = v___x_1108_;
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_dec(v___x_1108_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1132_; 
if (v_isShared_1130_ == 0)
{
v___x_1132_ = v___x_1129_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_a_1127_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
}
}
else
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
v_a_1135_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1105_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1105_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
v___jp_1098_:
{
lean_object* v___x_1099_; size_t v___x_1100_; size_t v___x_1101_; lean_object* v___x_1102_; 
v___x_1099_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3___closed__0));
v___x_1100_ = ((size_t)1ULL);
v___x_1101_ = lean_usize_add(v_i_1080_, v___x_1100_);
v___x_1102_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3_spec__4(v_as_1078_, v_sz_1079_, v___x_1101_, v___x_1099_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_);
return v___x_1102_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3___boxed(lean_object** _args){
lean_object* v_as_1143_ = _args[0];
lean_object* v_sz_1144_ = _args[1];
lean_object* v_i_1145_ = _args[2];
lean_object* v_b_1146_ = _args[3];
lean_object* v___y_1147_ = _args[4];
lean_object* v___y_1148_ = _args[5];
lean_object* v___y_1149_ = _args[6];
lean_object* v___y_1150_ = _args[7];
lean_object* v___y_1151_ = _args[8];
lean_object* v___y_1152_ = _args[9];
lean_object* v___y_1153_ = _args[10];
lean_object* v___y_1154_ = _args[11];
lean_object* v___y_1155_ = _args[12];
lean_object* v___y_1156_ = _args[13];
lean_object* v___y_1157_ = _args[14];
lean_object* v___y_1158_ = _args[15];
lean_object* v___y_1159_ = _args[16];
_start:
{
size_t v_sz_boxed_1160_; size_t v_i_boxed_1161_; lean_object* v_res_1162_; 
v_sz_boxed_1160_ = lean_unbox_usize(v_sz_1144_);
lean_dec(v_sz_1144_);
v_i_boxed_1161_ = lean_unbox_usize(v_i_1145_);
lean_dec(v_i_1145_);
v_res_1162_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3(v_as_1143_, v_sz_boxed_1160_, v_i_boxed_1161_, v_b_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1157_);
lean_dec(v___y_1156_);
lean_dec_ref(v___y_1155_);
lean_dec(v___y_1154_);
lean_dec_ref(v___y_1153_);
lean_dec(v___y_1152_);
lean_dec_ref(v___y_1151_);
lean_dec(v___y_1150_);
lean_dec(v___y_1149_);
lean_dec(v___y_1148_);
lean_dec_ref(v___y_1147_);
lean_dec_ref(v_as_1143_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1(lean_object* v_init_1163_, lean_object* v_n_1164_, lean_object* v_b_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
if (lean_obj_tag(v_n_1164_) == 0)
{
lean_object* v_cs_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; size_t v_sz_1182_; size_t v___x_1183_; lean_object* v___x_1184_; 
v_cs_1179_ = lean_ctor_get(v_n_1164_, 0);
v___x_1180_ = lean_box(0);
v___x_1181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1180_);
lean_ctor_set(v___x_1181_, 1, v_b_1165_);
v_sz_1182_ = lean_array_size(v_cs_1179_);
v___x_1183_ = ((size_t)0ULL);
v___x_1184_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__2(v_init_1163_, v_cs_1179_, v_sz_1182_, v___x_1183_, v___x_1181_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1199_; 
v_a_1185_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1187_ = v___x_1184_;
v_isShared_1188_ = v_isSharedCheck_1199_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1184_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1199_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v_fst_1189_; 
v_fst_1189_ = lean_ctor_get(v_a_1185_, 0);
if (lean_obj_tag(v_fst_1189_) == 0)
{
lean_object* v_snd_1190_; lean_object* v___x_1191_; lean_object* v___x_1193_; 
v_snd_1190_ = lean_ctor_get(v_a_1185_, 1);
lean_inc(v_snd_1190_);
lean_dec(v_a_1185_);
v___x_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1191_, 0, v_snd_1190_);
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 0, v___x_1191_);
v___x_1193_ = v___x_1187_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v___x_1191_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
else
{
lean_object* v_val_1195_; lean_object* v___x_1197_; 
lean_inc_ref(v_fst_1189_);
lean_dec(v_a_1185_);
v_val_1195_ = lean_ctor_get(v_fst_1189_, 0);
lean_inc(v_val_1195_);
lean_dec_ref_known(v_fst_1189_, 1);
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 0, v_val_1195_);
v___x_1197_ = v___x_1187_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_val_1195_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
else
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1207_; 
v_a_1200_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1202_ = v___x_1184_;
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1184_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1205_; 
if (v_isShared_1203_ == 0)
{
v___x_1205_ = v___x_1202_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_a_1200_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
else
{
lean_object* v_vs_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; size_t v_sz_1211_; size_t v___x_1212_; lean_object* v___x_1213_; 
v_vs_1208_ = lean_ctor_get(v_n_1164_, 0);
v___x_1209_ = lean_box(0);
v___x_1210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
lean_ctor_set(v___x_1210_, 1, v_b_1165_);
v_sz_1211_ = lean_array_size(v_vs_1208_);
v___x_1212_ = ((size_t)0ULL);
v___x_1213_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__3(v_vs_1208_, v_sz_1211_, v___x_1212_, v___x_1210_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
if (lean_obj_tag(v___x_1213_) == 0)
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1228_; 
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1216_ = v___x_1213_;
v_isShared_1217_ = v_isSharedCheck_1228_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1213_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1228_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v_fst_1218_; 
v_fst_1218_ = lean_ctor_get(v_a_1214_, 0);
if (lean_obj_tag(v_fst_1218_) == 0)
{
lean_object* v_snd_1219_; lean_object* v___x_1220_; lean_object* v___x_1222_; 
v_snd_1219_ = lean_ctor_get(v_a_1214_, 1);
lean_inc(v_snd_1219_);
lean_dec(v_a_1214_);
v___x_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1220_, 0, v_snd_1219_);
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 0, v___x_1220_);
v___x_1222_ = v___x_1216_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v___x_1220_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
else
{
lean_object* v_val_1224_; lean_object* v___x_1226_; 
lean_inc_ref(v_fst_1218_);
lean_dec(v_a_1214_);
v_val_1224_ = lean_ctor_get(v_fst_1218_, 0);
lean_inc(v_val_1224_);
lean_dec_ref_known(v_fst_1218_, 1);
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 0, v_val_1224_);
v___x_1226_ = v___x_1216_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_val_1224_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
}
else
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1236_; 
v_a_1229_ = lean_ctor_get(v___x_1213_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1231_ = v___x_1213_;
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1213_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1234_; 
if (v_isShared_1232_ == 0)
{
v___x_1234_ = v___x_1231_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_a_1229_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__2(lean_object* v_init_1237_, lean_object* v_as_1238_, size_t v_sz_1239_, size_t v_i_1240_, lean_object* v_b_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
uint8_t v___x_1255_; 
v___x_1255_ = lean_usize_dec_lt(v_i_1240_, v_sz_1239_);
if (v___x_1255_ == 0)
{
lean_object* v___x_1256_; 
v___x_1256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1256_, 0, v_b_1241_);
return v___x_1256_;
}
else
{
lean_object* v_snd_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1291_; 
v_snd_1257_ = lean_ctor_get(v_b_1241_, 1);
v_isSharedCheck_1291_ = !lean_is_exclusive(v_b_1241_);
if (v_isSharedCheck_1291_ == 0)
{
lean_object* v_unused_1292_; 
v_unused_1292_ = lean_ctor_get(v_b_1241_, 0);
lean_dec(v_unused_1292_);
v___x_1259_ = v_b_1241_;
v_isShared_1260_ = v_isSharedCheck_1291_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_snd_1257_);
lean_dec(v_b_1241_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1291_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1261_; lean_object* v_a_1262_; lean_object* v___x_1263_; 
v___x_1261_ = lean_box(0);
v_a_1262_ = lean_array_uget_borrowed(v_as_1238_, v_i_1240_);
lean_inc(v_snd_1257_);
v___x_1263_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1(v_init_1237_, v_a_1262_, v_snd_1257_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_);
if (lean_obj_tag(v___x_1263_) == 0)
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1282_; 
v_a_1264_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1266_ = v___x_1263_;
v_isShared_1267_ = v_isSharedCheck_1282_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1263_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1282_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
if (lean_obj_tag(v_a_1264_) == 0)
{
lean_object* v___x_1268_; lean_object* v___x_1270_; 
v___x_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1268_, 0, v_a_1264_);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 0, v___x_1268_);
v___x_1270_ = v___x_1259_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v___x_1268_);
lean_ctor_set(v_reuseFailAlloc_1274_, 1, v_snd_1257_);
v___x_1270_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
lean_object* v___x_1272_; 
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 0, v___x_1270_);
v___x_1272_ = v___x_1266_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1270_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
else
{
lean_object* v_a_1275_; lean_object* v___x_1277_; 
lean_del_object(v___x_1266_);
lean_dec(v_snd_1257_);
v_a_1275_ = lean_ctor_get(v_a_1264_, 0);
lean_inc(v_a_1275_);
lean_dec_ref_known(v_a_1264_, 1);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 1, v_a_1275_);
lean_ctor_set(v___x_1259_, 0, v___x_1261_);
v___x_1277_ = v___x_1259_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1261_);
lean_ctor_set(v_reuseFailAlloc_1281_, 1, v_a_1275_);
v___x_1277_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
size_t v___x_1278_; size_t v___x_1279_; 
v___x_1278_ = ((size_t)1ULL);
v___x_1279_ = lean_usize_add(v_i_1240_, v___x_1278_);
v_i_1240_ = v___x_1279_;
v_b_1241_ = v___x_1277_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
lean_del_object(v___x_1259_);
lean_dec(v_snd_1257_);
v_a_1283_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1285_ = v___x_1263_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1263_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__2___boxed(lean_object** _args){
lean_object* v_init_1293_ = _args[0];
lean_object* v_as_1294_ = _args[1];
lean_object* v_sz_1295_ = _args[2];
lean_object* v_i_1296_ = _args[3];
lean_object* v_b_1297_ = _args[4];
lean_object* v___y_1298_ = _args[5];
lean_object* v___y_1299_ = _args[6];
lean_object* v___y_1300_ = _args[7];
lean_object* v___y_1301_ = _args[8];
lean_object* v___y_1302_ = _args[9];
lean_object* v___y_1303_ = _args[10];
lean_object* v___y_1304_ = _args[11];
lean_object* v___y_1305_ = _args[12];
lean_object* v___y_1306_ = _args[13];
lean_object* v___y_1307_ = _args[14];
lean_object* v___y_1308_ = _args[15];
lean_object* v___y_1309_ = _args[16];
lean_object* v___y_1310_ = _args[17];
_start:
{
size_t v_sz_boxed_1311_; size_t v_i_boxed_1312_; lean_object* v_res_1313_; 
v_sz_boxed_1311_ = lean_unbox_usize(v_sz_1295_);
lean_dec(v_sz_1295_);
v_i_boxed_1312_ = lean_unbox_usize(v_i_1296_);
lean_dec(v_i_1296_);
v_res_1313_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1_spec__2(v_init_1293_, v_as_1294_, v_sz_boxed_1311_, v_i_boxed_1312_, v_b_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec(v___y_1305_);
lean_dec_ref(v___y_1304_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
lean_dec_ref(v_as_1294_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1___boxed(lean_object* v_init_1314_, lean_object* v_n_1315_, lean_object* v_b_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_){
_start:
{
lean_object* v_res_1330_; 
v_res_1330_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1(v_init_1314_, v_n_1315_, v_b_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
lean_dec(v___y_1320_);
lean_dec(v___y_1319_);
lean_dec(v___y_1318_);
lean_dec_ref(v___y_1317_);
lean_dec_ref(v_n_1315_);
return v_res_1330_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1(lean_object* v_t_1331_, lean_object* v_init_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_){
_start:
{
lean_object* v_root_1346_; lean_object* v_tail_1347_; lean_object* v___x_1348_; 
v_root_1346_ = lean_ctor_get(v_t_1331_, 0);
v_tail_1347_ = lean_ctor_get(v_t_1331_, 1);
v___x_1348_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__1(v_init_1332_, v_root_1346_, v_init_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1385_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1385_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1351_ = v___x_1348_;
v_isShared_1352_ = v_isSharedCheck_1385_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_a_1349_);
lean_dec(v___x_1348_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1385_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
if (lean_obj_tag(v_a_1349_) == 0)
{
lean_object* v_a_1353_; lean_object* v___x_1355_; 
v_a_1353_ = lean_ctor_get(v_a_1349_, 0);
lean_inc(v_a_1353_);
lean_dec_ref_known(v_a_1349_, 1);
if (v_isShared_1352_ == 0)
{
lean_ctor_set(v___x_1351_, 0, v_a_1353_);
v___x_1355_ = v___x_1351_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v_a_1353_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
else
{
lean_object* v_a_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; size_t v_sz_1360_; size_t v___x_1361_; lean_object* v___x_1362_; 
lean_del_object(v___x_1351_);
v_a_1357_ = lean_ctor_get(v_a_1349_, 0);
lean_inc(v_a_1357_);
lean_dec_ref_known(v_a_1349_, 1);
v___x_1358_ = lean_box(0);
v___x_1359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1358_);
lean_ctor_set(v___x_1359_, 1, v_a_1357_);
v_sz_1360_ = lean_array_size(v_tail_1347_);
v___x_1361_ = ((size_t)0ULL);
v___x_1362_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1_spec__2(v_tail_1347_, v_sz_1360_, v___x_1361_, v___x_1359_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1376_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1376_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1376_ == 0)
{
v___x_1365_ = v___x_1362_;
v_isShared_1366_ = v_isSharedCheck_1376_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1362_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1376_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v_fst_1367_; 
v_fst_1367_ = lean_ctor_get(v_a_1363_, 0);
if (lean_obj_tag(v_fst_1367_) == 0)
{
lean_object* v_snd_1368_; lean_object* v___x_1370_; 
v_snd_1368_ = lean_ctor_get(v_a_1363_, 1);
lean_inc(v_snd_1368_);
lean_dec(v_a_1363_);
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 0, v_snd_1368_);
v___x_1370_ = v___x_1365_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_snd_1368_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
else
{
lean_object* v_val_1372_; lean_object* v___x_1374_; 
lean_inc_ref(v_fst_1367_);
lean_dec(v_a_1363_);
v_val_1372_ = lean_ctor_get(v_fst_1367_, 0);
lean_inc(v_val_1372_);
lean_dec_ref_known(v_fst_1367_, 1);
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 0, v_val_1372_);
v___x_1374_ = v___x_1365_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v_val_1372_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
}
}
else
{
lean_object* v_a_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1384_; 
v_a_1377_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1384_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1384_ == 0)
{
v___x_1379_ = v___x_1362_;
v_isShared_1380_ = v_isSharedCheck_1384_;
goto v_resetjp_1378_;
}
else
{
lean_inc(v_a_1377_);
lean_dec(v___x_1362_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1384_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
lean_object* v___x_1382_; 
if (v_isShared_1380_ == 0)
{
v___x_1382_ = v___x_1379_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v_a_1377_);
v___x_1382_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
return v___x_1382_;
}
}
}
}
}
}
else
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1393_; 
v_a_1386_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1388_ = v___x_1348_;
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1348_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1391_; 
if (v_isShared_1389_ == 0)
{
v___x_1391_ = v___x_1388_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_a_1386_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1___boxed(lean_object* v_t_1394_, lean_object* v_init_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v_res_1409_; 
v_res_1409_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1(v_t_1394_, v_init_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
lean_dec(v___y_1401_);
lean_dec_ref(v___y_1400_);
lean_dec(v___y_1399_);
lean_dec(v___y_1398_);
lean_dec(v___y_1397_);
lean_dec_ref(v___y_1396_);
lean_dec_ref(v_t_1394_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities(lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_){
_start:
{
lean_object* v___x_1423_; 
v___x_1423_ = l_Lean_Meta_Grind_getExprs___redArg(v_a_1412_);
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v_a_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
lean_inc(v_a_1424_);
lean_dec_ref_known(v___x_1423_, 1);
v___x_1425_ = lean_box(0);
v___x_1426_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__1(v_a_1424_, v___x_1425_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_, v_a_1419_, v_a_1420_, v_a_1421_);
lean_dec(v_a_1424_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1433_; 
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1433_ == 0)
{
lean_object* v_unused_1434_; 
v_unused_1434_ = lean_ctor_get(v___x_1426_, 0);
lean_dec(v_unused_1434_);
v___x_1428_ = v___x_1426_;
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
else
{
lean_dec(v___x_1426_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1431_; 
if (v_isShared_1429_ == 0)
{
lean_ctor_set(v___x_1428_, 0, v___x_1425_);
v___x_1431_ = v___x_1428_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v___x_1425_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
else
{
return v___x_1426_;
}
}
else
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
v_a_1435_ = lean_ctor_get(v___x_1423_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1437_ = v___x_1423_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1423_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities___boxed(lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_){
_start:
{
lean_object* v_res_1456_; 
v_res_1456_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities(v_a_1443_, v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_, v_a_1453_, v_a_1454_);
lean_dec(v_a_1454_);
lean_dec_ref(v_a_1453_);
lean_dec(v_a_1452_);
lean_dec_ref(v_a_1451_);
lean_dec(v_a_1450_);
lean_dec_ref(v_a_1449_);
lean_dec(v_a_1448_);
lean_dec_ref(v_a_1447_);
lean_dec(v_a_1446_);
lean_dec(v_a_1445_);
lean_dec(v_a_1444_);
lean_dec_ref(v_a_1443_);
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0(lean_object* v_val_1457_, uint8_t v___y_1458_, lean_object* v_as_1459_, lean_object* v_as_x27_1460_, lean_object* v_b_1461_, lean_object* v_a_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v___x_1476_; 
v___x_1476_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0___redArg(v_val_1457_, v___y_1458_, v_as_x27_1460_, v_b_1461_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0___boxed(lean_object** _args){
lean_object* v_val_1477_ = _args[0];
lean_object* v___y_1478_ = _args[1];
lean_object* v_as_1479_ = _args[2];
lean_object* v_as_x27_1480_ = _args[3];
lean_object* v_b_1481_ = _args[4];
lean_object* v_a_1482_ = _args[5];
lean_object* v___y_1483_ = _args[6];
lean_object* v___y_1484_ = _args[7];
lean_object* v___y_1485_ = _args[8];
lean_object* v___y_1486_ = _args[9];
lean_object* v___y_1487_ = _args[10];
lean_object* v___y_1488_ = _args[11];
lean_object* v___y_1489_ = _args[12];
lean_object* v___y_1490_ = _args[13];
lean_object* v___y_1491_ = _args[14];
lean_object* v___y_1492_ = _args[15];
lean_object* v___y_1493_ = _args[16];
lean_object* v___y_1494_ = _args[17];
lean_object* v___y_1495_ = _args[18];
_start:
{
uint8_t v___y_47742__boxed_1496_; lean_object* v_res_1497_; 
v___y_47742__boxed_1496_ = lean_unbox(v___y_1478_);
v_res_1497_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities_spec__0(v_val_1477_, v___y_47742__boxed_1496_, v_as_1479_, v_as_x27_1480_, v_b_1481_, v_a_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
lean_dec(v___y_1488_);
lean_dec_ref(v___y_1487_);
lean_dec(v___y_1486_);
lean_dec(v___y_1485_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
lean_dec(v_as_x27_1480_);
lean_dec(v_as_1479_);
return v_res_1497_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse_spec__0___redArg(lean_object* v_a_1498_, lean_object* v_as_x27_1499_, lean_object* v_b_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
if (lean_obj_tag(v_as_x27_1499_) == 0)
{
lean_object* v___x_1513_; 
v___x_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1513_, 0, v_b_1500_);
return v___x_1513_;
}
else
{
lean_object* v_head_1514_; lean_object* v_tail_1515_; lean_object* v___x_1516_; uint8_t v___x_1517_; 
v_head_1514_ = lean_ctor_get(v_as_x27_1499_, 0);
v_tail_1515_ = lean_ctor_get(v_as_x27_1499_, 1);
v___x_1516_ = lean_box(0);
v___x_1517_ = lean_expr_eqv(v_head_1514_, v_a_1498_);
if (v___x_1517_ == 0)
{
lean_object* v___x_1518_; lean_object* v___x_1519_; 
lean_inc(v_head_1514_);
v___x_1518_ = l_Lean_mkNot(v_head_1514_);
v___x_1519_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1518_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v_a_1520_; lean_object* v___x_1521_; 
v_a_1520_ = lean_ctor_get(v___x_1519_, 0);
lean_inc(v_a_1520_);
lean_dec_ref_known(v___x_1519_, 1);
lean_inc(v_head_1514_);
v___x_1521_ = l_Lean_Meta_Grind_mkEqFalseProof(v_head_1514_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v_a_1522_; lean_object* v___x_1523_; 
v_a_1522_ = lean_ctor_get(v___x_1521_, 0);
lean_inc(v_a_1522_);
lean_dec_ref_known(v___x_1521_, 1);
v___x_1523_ = l_Lean_Meta_mkOfEqFalse(v_a_1522_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v_a_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
v_a_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1524_);
lean_dec_ref_known(v___x_1523_, 1);
v___x_1525_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5);
v___x_1526_ = lean_box(4);
v___x_1527_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1525_);
lean_ctor_set(v___x_1527_, 1, v_a_1520_);
lean_ctor_set(v___x_1527_, 2, v_a_1524_);
lean_ctor_set(v___x_1527_, 3, v___x_1526_);
v___x_1528_ = lean_st_ref_take(v___y_1501_);
v___x_1529_ = lean_array_push(v___x_1528_, v___x_1527_);
v___x_1530_ = lean_st_ref_put(v___y_1501_, v___x_1529_);
v_as_x27_1499_ = v_tail_1515_;
v_b_1500_ = v___x_1516_;
goto _start;
}
else
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
lean_dec(v_a_1520_);
v_a_1532_ = lean_ctor_get(v___x_1523_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1534_ = v___x_1523_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1523_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1532_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
else
{
lean_object* v_a_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1547_; 
lean_dec(v_a_1520_);
v_a_1540_ = lean_ctor_get(v___x_1521_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1542_ = v___x_1521_;
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_a_1540_);
lean_dec(v___x_1521_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1545_; 
if (v_isShared_1543_ == 0)
{
v___x_1545_ = v___x_1542_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_a_1540_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
}
}
}
}
else
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1555_; 
v_a_1548_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1550_ = v___x_1519_;
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1519_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1553_; 
if (v_isShared_1551_ == 0)
{
v___x_1553_ = v___x_1550_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_a_1548_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
}
else
{
v_as_x27_1499_ = v_tail_1515_;
v_b_1500_ = v___x_1516_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse_spec__0___redArg___boxed(lean_object* v_a_1557_, lean_object* v_as_x27_1558_, lean_object* v_b_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_){
_start:
{
lean_object* v_res_1572_; 
v_res_1572_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse_spec__0___redArg(v_a_1557_, v_as_x27_1558_, v_b_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
lean_dec(v___y_1568_);
lean_dec_ref(v___y_1567_);
lean_dec(v___y_1566_);
lean_dec_ref(v___y_1565_);
lean_dec(v___y_1564_);
lean_dec_ref(v___y_1563_);
lean_dec(v___y_1562_);
lean_dec(v___y_1561_);
lean_dec(v___y_1560_);
lean_dec(v_as_x27_1558_);
lean_dec_ref(v_a_1557_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse(lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_){
_start:
{
lean_object* v___x_1586_; 
v___x_1586_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_1579_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v_a_1587_; uint8_t v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
v_a_1587_ = lean_ctor_get(v___x_1586_, 0);
lean_inc_n(v_a_1587_, 2);
lean_dec_ref_known(v___x_1586_, 1);
v___x_1588_ = 0;
v___x_1589_ = lean_st_ref_get(v_a_1575_);
v___x_1590_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_1589_, v_a_1587_, v___x_1588_);
lean_dec(v___x_1589_);
v___x_1591_ = lean_box(0);
v___x_1592_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse_spec__0___redArg(v_a_1587_, v___x_1590_, v___x_1591_, v_a_1574_, v_a_1575_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_, v_a_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_);
lean_dec(v___x_1590_);
lean_dec(v_a_1587_);
if (lean_obj_tag(v___x_1592_) == 0)
{
lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1592_);
if (v_isSharedCheck_1599_ == 0)
{
lean_object* v_unused_1600_; 
v_unused_1600_ = lean_ctor_get(v___x_1592_, 0);
lean_dec(v_unused_1600_);
v___x_1594_ = v___x_1592_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_dec(v___x_1592_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1597_; 
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 0, v___x_1591_);
v___x_1597_ = v___x_1594_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v___x_1591_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
else
{
return v___x_1592_;
}
}
else
{
lean_object* v_a_1601_; lean_object* v___x_1603_; uint8_t v_isShared_1604_; uint8_t v_isSharedCheck_1608_; 
v_a_1601_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1608_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1603_ = v___x_1586_;
v_isShared_1604_ = v_isSharedCheck_1608_;
goto v_resetjp_1602_;
}
else
{
lean_inc(v_a_1601_);
lean_dec(v___x_1586_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse___boxed(lean_object* v_a_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse(v_a_1609_, v_a_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_, v_a_1620_);
lean_dec(v_a_1620_);
lean_dec_ref(v_a_1619_);
lean_dec(v_a_1618_);
lean_dec_ref(v_a_1617_);
lean_dec(v_a_1616_);
lean_dec_ref(v_a_1615_);
lean_dec(v_a_1614_);
lean_dec_ref(v_a_1613_);
lean_dec(v_a_1612_);
lean_dec(v_a_1611_);
lean_dec(v_a_1610_);
lean_dec_ref(v_a_1609_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse_spec__0(lean_object* v_a_1623_, lean_object* v_as_1624_, lean_object* v_as_x27_1625_, lean_object* v_b_1626_, lean_object* v_a_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_){
_start:
{
lean_object* v___x_1641_; 
v___x_1641_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse_spec__0___redArg(v_a_1623_, v_as_x27_1625_, v_b_1626_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_);
return v___x_1641_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse_spec__0___boxed(lean_object** _args){
lean_object* v_a_1642_ = _args[0];
lean_object* v_as_1643_ = _args[1];
lean_object* v_as_x27_1644_ = _args[2];
lean_object* v_b_1645_ = _args[3];
lean_object* v_a_1646_ = _args[4];
lean_object* v___y_1647_ = _args[5];
lean_object* v___y_1648_ = _args[6];
lean_object* v___y_1649_ = _args[7];
lean_object* v___y_1650_ = _args[8];
lean_object* v___y_1651_ = _args[9];
lean_object* v___y_1652_ = _args[10];
lean_object* v___y_1653_ = _args[11];
lean_object* v___y_1654_ = _args[12];
lean_object* v___y_1655_ = _args[13];
lean_object* v___y_1656_ = _args[14];
lean_object* v___y_1657_ = _args[15];
lean_object* v___y_1658_ = _args[16];
lean_object* v___y_1659_ = _args[17];
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse_spec__0(v_a_1642_, v_as_1643_, v_as_x27_1644_, v_b_1645_, v_a_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
lean_dec(v___y_1658_);
lean_dec_ref(v___y_1657_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1653_);
lean_dec(v___y_1652_);
lean_dec_ref(v___y_1651_);
lean_dec(v___y_1650_);
lean_dec(v___y_1649_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
lean_dec(v_as_x27_1644_);
lean_dec(v_as_1643_);
lean_dec_ref(v_a_1642_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue_spec__0___redArg(lean_object* v_a_1661_, lean_object* v_as_x27_1662_, lean_object* v_b_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_){
_start:
{
if (lean_obj_tag(v_as_x27_1662_) == 0)
{
lean_object* v___x_1676_; 
v___x_1676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1676_, 0, v_b_1663_);
return v___x_1676_;
}
else
{
lean_object* v_head_1677_; lean_object* v_tail_1678_; lean_object* v___x_1679_; uint8_t v___x_1680_; 
v_head_1677_ = lean_ctor_get(v_as_x27_1662_, 0);
v_tail_1678_ = lean_ctor_get(v_as_x27_1662_, 1);
v___x_1679_ = lean_box(0);
v___x_1680_ = lean_expr_eqv(v_head_1677_, v_a_1661_);
if (v___x_1680_ == 0)
{
lean_object* v___x_1681_; 
lean_inc(v_head_1677_);
v___x_1681_ = l_Lean_Meta_Grind_mkEqTrueProof(v_head_1677_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_);
if (lean_obj_tag(v___x_1681_) == 0)
{
lean_object* v_a_1682_; lean_object* v___x_1683_; 
v_a_1682_ = lean_ctor_get(v___x_1681_, 0);
lean_inc(v_a_1682_);
lean_dec_ref_known(v___x_1681_, 1);
v___x_1683_ = l_Lean_Meta_mkOfEqTrue(v_a_1682_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v_a_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_a_1684_);
lean_dec_ref_known(v___x_1683_, 1);
v___x_1685_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg___closed__5);
v___x_1686_ = lean_box(4);
lean_inc(v_head_1677_);
v___x_1687_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1685_);
lean_ctor_set(v___x_1687_, 1, v_head_1677_);
lean_ctor_set(v___x_1687_, 2, v_a_1684_);
lean_ctor_set(v___x_1687_, 3, v___x_1686_);
v___x_1688_ = lean_st_ref_take(v___y_1664_);
v___x_1689_ = lean_array_push(v___x_1688_, v___x_1687_);
v___x_1690_ = lean_st_ref_put(v___y_1664_, v___x_1689_);
v_as_x27_1662_ = v_tail_1678_;
v_b_1663_ = v___x_1679_;
goto _start;
}
else
{
lean_object* v_a_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1699_; 
v_a_1692_ = lean_ctor_get(v___x_1683_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1694_ = v___x_1683_;
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
else
{
lean_inc(v_a_1692_);
lean_dec(v___x_1683_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1697_; 
if (v_isShared_1695_ == 0)
{
v___x_1697_ = v___x_1694_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v_a_1692_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
}
}
else
{
lean_object* v_a_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1707_; 
v_a_1700_ = lean_ctor_get(v___x_1681_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1702_ = v___x_1681_;
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_a_1700_);
lean_dec(v___x_1681_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1705_; 
if (v_isShared_1703_ == 0)
{
v___x_1705_ = v___x_1702_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_a_1700_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
}
}
else
{
v_as_x27_1662_ = v_tail_1678_;
v_b_1663_ = v___x_1679_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue_spec__0___redArg___boxed(lean_object* v_a_1709_, lean_object* v_as_x27_1710_, lean_object* v_b_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue_spec__0___redArg(v_a_1709_, v_as_x27_1710_, v_b_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
lean_dec(v___y_1722_);
lean_dec_ref(v___y_1721_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
lean_dec(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec(v___y_1712_);
lean_dec(v_as_x27_1710_);
lean_dec_ref(v_a_1709_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue(lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_){
_start:
{
lean_object* v___x_1738_; 
v___x_1738_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_1731_);
if (lean_obj_tag(v___x_1738_) == 0)
{
lean_object* v_a_1739_; uint8_t v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v_a_1739_ = lean_ctor_get(v___x_1738_, 0);
lean_inc_n(v_a_1739_, 2);
lean_dec_ref_known(v___x_1738_, 1);
v___x_1740_ = 0;
v___x_1741_ = lean_st_ref_get(v_a_1727_);
v___x_1742_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_1741_, v_a_1739_, v___x_1740_);
lean_dec(v___x_1741_);
v___x_1743_ = lean_box(0);
v___x_1744_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue_spec__0___redArg(v_a_1739_, v___x_1742_, v___x_1743_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_);
lean_dec(v___x_1742_);
lean_dec(v_a_1739_);
if (lean_obj_tag(v___x_1744_) == 0)
{
lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1751_; 
v_isSharedCheck_1751_ = !lean_is_exclusive(v___x_1744_);
if (v_isSharedCheck_1751_ == 0)
{
lean_object* v_unused_1752_; 
v_unused_1752_ = lean_ctor_get(v___x_1744_, 0);
lean_dec(v_unused_1752_);
v___x_1746_ = v___x_1744_;
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
else
{
lean_dec(v___x_1744_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1749_; 
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 0, v___x_1743_);
v___x_1749_ = v___x_1746_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v___x_1743_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
}
else
{
return v___x_1744_;
}
}
else
{
lean_object* v_a_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1760_; 
v_a_1753_ = lean_ctor_get(v___x_1738_, 0);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1738_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1755_ = v___x_1738_;
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_a_1753_);
lean_dec(v___x_1738_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1758_; 
if (v_isShared_1756_ == 0)
{
v___x_1758_ = v___x_1755_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_a_1753_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue___boxed(lean_object* v_a_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_){
_start:
{
lean_object* v_res_1774_; 
v_res_1774_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue(v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_, v_a_1766_, v_a_1767_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_, v_a_1772_);
lean_dec(v_a_1772_);
lean_dec_ref(v_a_1771_);
lean_dec(v_a_1770_);
lean_dec_ref(v_a_1769_);
lean_dec(v_a_1768_);
lean_dec_ref(v_a_1767_);
lean_dec(v_a_1766_);
lean_dec_ref(v_a_1765_);
lean_dec(v_a_1764_);
lean_dec(v_a_1763_);
lean_dec(v_a_1762_);
lean_dec_ref(v_a_1761_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue_spec__0(lean_object* v_a_1775_, lean_object* v_as_1776_, lean_object* v_as_x27_1777_, lean_object* v_b_1778_, lean_object* v_a_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_){
_start:
{
lean_object* v___x_1793_; 
v___x_1793_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue_spec__0___redArg(v_a_1775_, v_as_x27_1777_, v_b_1778_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue_spec__0___boxed(lean_object** _args){
lean_object* v_a_1794_ = _args[0];
lean_object* v_as_1795_ = _args[1];
lean_object* v_as_x27_1796_ = _args[2];
lean_object* v_b_1797_ = _args[3];
lean_object* v_a_1798_ = _args[4];
lean_object* v___y_1799_ = _args[5];
lean_object* v___y_1800_ = _args[6];
lean_object* v___y_1801_ = _args[7];
lean_object* v___y_1802_ = _args[8];
lean_object* v___y_1803_ = _args[9];
lean_object* v___y_1804_ = _args[10];
lean_object* v___y_1805_ = _args[11];
lean_object* v___y_1806_ = _args[12];
lean_object* v___y_1807_ = _args[13];
lean_object* v___y_1808_ = _args[14];
lean_object* v___y_1809_ = _args[15];
lean_object* v___y_1810_ = _args[16];
lean_object* v___y_1811_ = _args[17];
_start:
{
lean_object* v_res_1812_; 
v_res_1812_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue_spec__0(v_a_1794_, v_as_1795_, v_as_x27_1796_, v_b_1797_, v_a_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
lean_dec(v___y_1808_);
lean_dec_ref(v___y_1807_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec(v___y_1800_);
lean_dec_ref(v___y_1799_);
lean_dec(v_as_x27_1796_);
lean_dec(v_as_1795_);
lean_dec_ref(v_a_1794_);
return v_res_1812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_go(lean_object* v_a_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_, lean_object* v_a_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_){
_start:
{
lean_object* v___x_1826_; 
v___x_1826_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectTrue(v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_, v_a_1821_, v_a_1822_, v_a_1823_, v_a_1824_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v___x_1827_; 
lean_dec_ref_known(v___x_1826_, 1);
v___x_1827_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectFalse(v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_, v_a_1821_, v_a_1822_, v_a_1823_, v_a_1824_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v___x_1828_; 
lean_dec_ref_known(v___x_1827_, 1);
v___x_1828_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectRelevantEqualities(v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_, v_a_1821_, v_a_1822_, v_a_1823_, v_a_1824_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v___x_1829_; 
lean_dec_ref_known(v___x_1828_, 1);
v___x_1829_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_collectNumBits___redArg(v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_, v_a_1821_, v_a_1822_, v_a_1823_, v_a_1824_);
return v___x_1829_;
}
else
{
return v___x_1828_;
}
}
else
{
return v___x_1827_;
}
}
else
{
return v___x_1826_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_go___boxed(lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_){
_start:
{
lean_object* v_res_1843_; 
v_res_1843_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_go(v_a_1830_, v_a_1831_, v_a_1832_, v_a_1833_, v_a_1834_, v_a_1835_, v_a_1836_, v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_, v_a_1841_);
lean_dec(v_a_1841_);
lean_dec_ref(v_a_1840_);
lean_dec(v_a_1839_);
lean_dec_ref(v_a_1838_);
lean_dec(v_a_1837_);
lean_dec_ref(v_a_1836_);
lean_dec(v_a_1835_);
lean_dec_ref(v_a_1834_);
lean_dec(v_a_1833_);
lean_dec(v_a_1832_);
lean_dec(v_a_1831_);
lean_dec_ref(v_a_1830_);
return v_res_1843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps(lean_object* v_cfg_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_){
_start:
{
lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1858_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps___closed__0));
v___x_1859_ = lean_st_mk_ref(v___x_1858_);
v___x_1860_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps_go(v_cfg_1846_, v___x_1859_, v_a_1847_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_, v_a_1856_);
if (lean_obj_tag(v___x_1860_) == 0)
{
lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1868_; 
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1868_ == 0)
{
lean_object* v_unused_1869_; 
v_unused_1869_ = lean_ctor_get(v___x_1860_, 0);
lean_dec(v_unused_1869_);
v___x_1862_ = v___x_1860_;
v_isShared_1863_ = v_isSharedCheck_1868_;
goto v_resetjp_1861_;
}
else
{
lean_dec(v___x_1860_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1868_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1864_; lean_object* v___x_1866_; 
v___x_1864_ = lean_st_ref_get(v___x_1859_);
lean_dec(v___x_1859_);
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 0, v___x_1864_);
v___x_1866_ = v___x_1862_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v___x_1864_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
}
else
{
lean_object* v_a_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1877_; 
lean_dec(v___x_1859_);
v_a_1870_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1872_ = v___x_1860_;
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_a_1870_);
lean_dec(v___x_1860_);
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
v_reuseFailAlloc_1876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_a_1870_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps___boxed(lean_object* v_cfg_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_, lean_object* v_a_1889_){
_start:
{
lean_object* v_res_1890_; 
v_res_1890_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps(v_cfg_1878_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_, v_a_1883_, v_a_1884_, v_a_1885_, v_a_1886_, v_a_1887_, v_a_1888_);
lean_dec(v_a_1888_);
lean_dec_ref(v_a_1887_);
lean_dec(v_a_1886_);
lean_dec_ref(v_a_1885_);
lean_dec(v_a_1884_);
lean_dec_ref(v_a_1883_);
lean_dec(v_a_1882_);
lean_dec_ref(v_a_1881_);
lean_dec(v_a_1880_);
lean_dec(v_a_1879_);
lean_dec_ref(v_cfg_1878_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordLocalHyp(lean_object* v_fvarId_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_){
_start:
{
lean_object* v___x_1899_; 
lean_inc(v_fvarId_1891_);
v___x_1899_ = l_Lean_FVarId_getUserName___redArg(v_fvarId_1891_, v_a_1894_, v_a_1896_, v_a_1897_);
if (lean_obj_tag(v___x_1899_) == 0)
{
lean_object* v_a_1900_; lean_object* v___x_1901_; 
v_a_1900_ = lean_ctor_get(v___x_1899_, 0);
lean_inc(v_a_1900_);
lean_dec_ref_known(v___x_1899_, 1);
lean_inc(v_fvarId_1891_);
v___x_1901_ = l_Lean_FVarId_getType___redArg(v_fvarId_1891_, v_a_1894_, v_a_1896_, v_a_1897_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v_a_1902_; lean_object* v___x_1903_; 
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
lean_inc(v_a_1902_);
lean_dec_ref_known(v___x_1901_, 1);
v___x_1903_ = l_Lean_Meta_Sym_instantiateMVarsS(v_a_1902_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_1896_, v_a_1897_);
if (lean_obj_tag(v___x_1903_) == 0)
{
lean_object* v_a_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1914_; 
v_a_1904_ = lean_ctor_get(v___x_1903_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1906_ = v___x_1903_;
v_isShared_1907_ = v_isSharedCheck_1914_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_a_1904_);
lean_dec(v___x_1903_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1914_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1912_; 
lean_inc(v_fvarId_1891_);
v___x_1908_ = l_Lean_mkFVar(v_fvarId_1891_);
v___x_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1909_, 0, v_fvarId_1891_);
v___x_1910_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1910_, 0, v_a_1900_);
lean_ctor_set(v___x_1910_, 1, v_a_1904_);
lean_ctor_set(v___x_1910_, 2, v___x_1908_);
lean_ctor_set(v___x_1910_, 3, v___x_1909_);
if (v_isShared_1907_ == 0)
{
lean_ctor_set(v___x_1906_, 0, v___x_1910_);
v___x_1912_ = v___x_1906_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v___x_1910_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
else
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1922_; 
lean_dec(v_a_1900_);
lean_dec(v_fvarId_1891_);
v_a_1915_ = lean_ctor_get(v___x_1903_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1917_ = v___x_1903_;
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v___x_1903_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1918_ == 0)
{
v___x_1920_ = v___x_1917_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_a_1915_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
}
}
else
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1930_; 
lean_dec(v_a_1900_);
lean_dec(v_fvarId_1891_);
v_a_1923_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1930_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1930_ == 0)
{
v___x_1925_ = v___x_1901_;
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v___x_1901_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1928_; 
if (v_isShared_1926_ == 0)
{
v___x_1928_ = v___x_1925_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v_a_1923_);
v___x_1928_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
return v___x_1928_;
}
}
}
}
else
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1938_; 
lean_dec(v_fvarId_1891_);
v_a_1931_ = lean_ctor_get(v___x_1899_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1933_ = v___x_1899_;
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1899_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1936_; 
if (v_isShared_1934_ == 0)
{
v___x_1936_ = v___x_1933_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_a_1931_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
return v___x_1936_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordLocalHyp___boxed(lean_object* v_fvarId_1939_, lean_object* v_a_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_recordLocalHyp(v_fvarId_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_);
lean_dec(v_a_1945_);
lean_dec_ref(v_a_1944_);
lean_dec(v_a_1943_);
lean_dec_ref(v_a_1942_);
lean_dec(v_a_1941_);
lean_dec_ref(v_a_1940_);
return v_res_1947_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1948_; 
v___x_1948_ = l_Lean_Meta_Sym_instInhabitedSymM___redArg();
return v___x_1948_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__1(lean_object* v_msg_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v___x_1957_; lean_object* v___x_6181__overap_1958_; lean_object* v___x_1959_; 
v___x_1957_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__1___closed__0);
v___x_6181__overap_1958_ = lean_panic_fn_borrowed(v___x_1957_, v_msg_1949_);
lean_inc(v___y_1955_);
lean_inc_ref(v___y_1954_);
lean_inc(v___y_1953_);
lean_inc_ref(v___y_1952_);
lean_inc(v___y_1951_);
lean_inc_ref(v___y_1950_);
v___x_1959_ = lean_apply_7(v___x_6181__overap_1958_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_, lean_box(0));
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__1___boxed(lean_object* v_msg_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_){
_start:
{
lean_object* v_res_1968_; 
v_res_1968_ = l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__1(v_msg_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_);
lean_dec(v___y_1966_);
lean_dec_ref(v___y_1965_);
lean_dec(v___y_1964_);
lean_dec_ref(v___y_1963_);
lean_dec(v___y_1962_);
lean_dec_ref(v___y_1961_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___redArg___lam__0(lean_object* v_x_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_){
_start:
{
lean_object* v___x_1977_; 
lean_inc(v___y_1971_);
lean_inc_ref(v___y_1970_);
v___x_1977_ = lean_apply_7(v_x_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_, lean_box(0));
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___redArg___lam__0___boxed(lean_object* v_x_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_){
_start:
{
lean_object* v_res_1986_; 
v_res_1986_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___redArg___lam__0(v_x_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
lean_dec(v___y_1980_);
lean_dec_ref(v___y_1979_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___redArg(lean_object* v_mvarId_1987_, lean_object* v_x_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_){
_start:
{
lean_object* v___f_1996_; lean_object* v___x_1997_; 
lean_inc(v___y_1990_);
lean_inc_ref(v___y_1989_);
v___f_1996_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1996_, 0, v_x_1988_);
lean_closure_set(v___f_1996_, 1, v___y_1989_);
lean_closure_set(v___f_1996_, 2, v___y_1990_);
v___x_1997_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1987_, v___f_1996_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_);
if (lean_obj_tag(v___x_1997_) == 0)
{
return v___x_1997_;
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1997_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1997_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___redArg___boxed(lean_object* v_mvarId_2006_, lean_object* v_x_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_){
_start:
{
lean_object* v_res_2015_; 
v_res_2015_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___redArg(v_mvarId_2006_, v_x_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2(lean_object* v_00_u03b1_2016_, lean_object* v_mvarId_2017_, lean_object* v_x_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_){
_start:
{
lean_object* v___x_2026_; 
v___x_2026_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___redArg(v_mvarId_2017_, v_x_2018_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_);
return v___x_2026_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___boxed(lean_object* v_00_u03b1_2027_, lean_object* v_mvarId_2028_, lean_object* v_x_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2(v_00_u03b1_2027_, v_mvarId_2028_, v_x_2029_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_);
lean_dec(v___y_2035_);
lean_dec_ref(v___y_2034_);
lean_dec(v___y_2033_);
lean_dec_ref(v___y_2032_);
lean_dec(v___y_2031_);
lean_dec_ref(v___y_2030_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0_spec__0(lean_object* v_msgData_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_){
_start:
{
lean_object* v___x_2044_; lean_object* v_env_2045_; lean_object* v___x_2046_; lean_object* v_toCold_2047_; lean_object* v_mctx_2048_; lean_object* v_lctx_2049_; lean_object* v_options_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2044_ = lean_st_ref_get(v___y_2042_);
v_env_2045_ = lean_ctor_get(v___x_2044_, 0);
lean_inc_ref(v_env_2045_);
lean_dec(v___x_2044_);
v___x_2046_ = lean_st_ref_get(v___y_2040_);
v_toCold_2047_ = lean_ctor_get(v___y_2041_, 0);
v_mctx_2048_ = lean_ctor_get(v___x_2046_, 0);
lean_inc_ref(v_mctx_2048_);
lean_dec(v___x_2046_);
v_lctx_2049_ = lean_ctor_get(v___y_2039_, 2);
v_options_2050_ = lean_ctor_get(v_toCold_2047_, 2);
lean_inc_ref(v_options_2050_);
lean_inc_ref(v_lctx_2049_);
v___x_2051_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2051_, 0, v_env_2045_);
lean_ctor_set(v___x_2051_, 1, v_mctx_2048_);
lean_ctor_set(v___x_2051_, 2, v_lctx_2049_);
lean_ctor_set(v___x_2051_, 3, v_options_2050_);
v___x_2052_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2051_);
lean_ctor_set(v___x_2052_, 1, v_msgData_2038_);
v___x_2053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2052_);
return v___x_2053_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0_spec__0___boxed(lean_object* v_msgData_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_){
_start:
{
lean_object* v_res_2060_; 
v_res_2060_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0_spec__0(v_msgData_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_);
lean_dec(v___y_2058_);
lean_dec_ref(v___y_2057_);
lean_dec(v___y_2056_);
lean_dec_ref(v___y_2055_);
return v_res_2060_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0___redArg(lean_object* v_msg_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_){
_start:
{
lean_object* v_ref_2067_; lean_object* v___x_2068_; lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2077_; 
v_ref_2067_ = lean_ctor_get(v___y_2064_, 2);
v___x_2068_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0_spec__0(v_msg_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_);
v_a_2069_ = lean_ctor_get(v___x_2068_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2068_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2071_ = v___x_2068_;
v_isShared_2072_ = v_isSharedCheck_2077_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2068_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2077_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2073_; lean_object* v___x_2075_; 
lean_inc(v_ref_2067_);
v___x_2073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2073_, 0, v_ref_2067_);
lean_ctor_set(v___x_2073_, 1, v_a_2069_);
if (v_isShared_2072_ == 0)
{
lean_ctor_set_tag(v___x_2071_, 1);
lean_ctor_set(v___x_2071_, 0, v___x_2073_);
v___x_2075_ = v___x_2071_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v___x_2073_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0___redArg___boxed(lean_object* v_msg_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_){
_start:
{
lean_object* v_res_2084_; 
v_res_2084_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0___redArg(v_msg_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
lean_dec(v___y_2082_);
lean_dec_ref(v___y_2081_);
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
return v_res_2084_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; 
v___x_2086_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__0));
v___x_2087_ = l_Lean_stringToMessageData(v___x_2086_);
return v___x_2087_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2091_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__4));
v___x_2092_ = lean_unsigned_to_nat(37u);
v___x_2093_ = lean_unsigned_to_nat(200u);
v___x_2094_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__3));
v___x_2095_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__2));
v___x_2096_ = l_mkPanicMessageWithDecl(v___x_2095_, v___x_2094_, v___x_2093_, v___x_2092_, v___x_2091_);
return v___x_2096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0(lean_object* v_snd_2097_, lean_object* v_fst_2098_, uint8_t v___x_2099_, lean_object* v_____x_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_){
_start:
{
lean_object* v___x_2108_; 
lean_inc(v_snd_2097_);
v___x_2108_ = l_Lean_MVarId_getType(v_snd_2097_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v_a_2109_; lean_object* v___x_2110_; 
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
lean_inc_n(v_a_2109_, 2);
lean_dec_ref_known(v___x_2108_, 1);
v___x_2110_ = l_Lean_Meta_isProp(v_a_2109_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
if (lean_obj_tag(v___x_2110_) == 0)
{
lean_object* v_a_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2201_; 
v_a_2111_ = lean_ctor_get(v___x_2110_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2110_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2113_ = v___x_2110_;
v_isShared_2114_ = v_isSharedCheck_2201_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_a_2111_);
lean_dec(v___x_2110_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2201_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
uint8_t v___x_2115_; 
v___x_2115_ = lean_unbox(v_a_2111_);
lean_dec(v_a_2111_);
if (v___x_2115_ == 0)
{
lean_object* v___x_2116_; 
lean_del_object(v___x_2113_);
lean_dec(v_a_2109_);
lean_dec_ref(v_____x_2100_);
v___x_2116_ = l_Lean_MVarId_exfalso(v_snd_2097_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v_a_2117_; lean_object* v___x_2118_; 
v_a_2117_ = lean_ctor_get(v___x_2116_, 0);
lean_inc(v_a_2117_);
lean_dec_ref_known(v___x_2116_, 1);
v___x_2118_ = l_Lean_Meta_Sym_preprocessMVar(v_a_2117_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2127_; 
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2127_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2121_ = v___x_2118_;
v_isShared_2122_ = v_isSharedCheck_2127_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2118_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2127_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2123_; lean_object* v___x_2125_; 
v___x_2123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2123_, 0, v_fst_2098_);
lean_ctor_set(v___x_2123_, 1, v_a_2119_);
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 0, v___x_2123_);
v___x_2125_ = v___x_2121_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v___x_2123_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
else
{
lean_object* v_a_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2135_; 
lean_dec_ref(v_fst_2098_);
v_a_2128_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2130_ = v___x_2118_;
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
else
{
lean_inc(v_a_2128_);
lean_dec(v___x_2118_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v___x_2133_; 
if (v_isShared_2131_ == 0)
{
v___x_2133_ = v___x_2130_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_a_2128_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
}
else
{
lean_object* v_a_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2143_; 
lean_dec_ref(v_fst_2098_);
v_a_2136_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2143_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2138_ = v___x_2116_;
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_a_2136_);
lean_dec(v___x_2116_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2141_; 
if (v_isShared_2139_ == 0)
{
v___x_2141_ = v___x_2138_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v_a_2136_);
v___x_2141_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
return v___x_2141_;
}
}
}
}
else
{
uint8_t v___x_2144_; 
v___x_2144_ = l_Lean_Expr_isFalse(v_a_2109_);
if (v___x_2144_ == 0)
{
lean_object* v___x_2145_; 
lean_del_object(v___x_2113_);
lean_dec_ref(v_____x_2100_);
v___x_2145_ = l_Lean_MVarId_byContra_x3f(v_snd_2097_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; 
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
lean_inc(v_a_2146_);
lean_dec_ref_known(v___x_2145_, 1);
if (lean_obj_tag(v_a_2146_) == 1)
{
lean_object* v_val_2147_; lean_object* v___x_2148_; 
v_val_2147_ = lean_ctor_get(v_a_2146_, 0);
lean_inc(v_val_2147_);
lean_dec_ref_known(v_a_2146_, 1);
v___x_2148_ = l_Lean_Meta_Sym_preprocessMVar(v_val_2147_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_a_2149_);
lean_dec_ref_known(v___x_2148_, 1);
v___x_2150_ = lean_unsigned_to_nat(1u);
v___x_2151_ = l_Lean_Meta_Sym_introN(v_a_2149_, v___x_2150_, v___x_2099_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v_a_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2171_; 
v_a_2152_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2154_ = v___x_2151_;
v_isShared_2155_ = v_isSharedCheck_2171_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_a_2152_);
lean_dec(v___x_2151_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2171_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
if (lean_obj_tag(v_a_2152_) == 1)
{
lean_object* v_newDecls_2156_; lean_object* v_mvarId_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2168_; 
v_newDecls_2156_ = lean_ctor_get(v_a_2152_, 0);
v_mvarId_2157_ = lean_ctor_get(v_a_2152_, 1);
v_isSharedCheck_2168_ = !lean_is_exclusive(v_a_2152_);
if (v_isSharedCheck_2168_ == 0)
{
v___x_2159_ = v_a_2152_;
v_isShared_2160_ = v_isSharedCheck_2168_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_mvarId_2157_);
lean_inc(v_newDecls_2156_);
lean_dec(v_a_2152_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2168_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2161_; lean_object* v___x_2163_; 
v___x_2161_ = l_Array_append___redArg(v_fst_2098_, v_newDecls_2156_);
lean_dec_ref(v_newDecls_2156_);
if (v_isShared_2160_ == 0)
{
lean_ctor_set_tag(v___x_2159_, 0);
lean_ctor_set(v___x_2159_, 0, v___x_2161_);
v___x_2163_ = v___x_2159_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2161_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v_mvarId_2157_);
v___x_2163_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
lean_object* v___x_2165_; 
if (v_isShared_2155_ == 0)
{
lean_ctor_set(v___x_2154_, 0, v___x_2163_);
v___x_2165_ = v___x_2154_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v___x_2163_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
}
}
else
{
lean_object* v___x_2169_; lean_object* v___x_2170_; 
lean_del_object(v___x_2154_);
lean_dec(v_a_2152_);
lean_dec_ref(v_fst_2098_);
v___x_2169_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__1, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__1);
v___x_2170_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0___redArg(v___x_2169_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
return v___x_2170_;
}
}
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
lean_dec_ref(v_fst_2098_);
v_a_2172_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2151_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2151_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
}
else
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2187_; 
lean_dec_ref(v_fst_2098_);
v_a_2180_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2182_ = v___x_2148_;
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2148_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
if (v_isShared_2183_ == 0)
{
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_a_2180_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
}
else
{
lean_object* v___x_2188_; lean_object* v___x_2189_; 
lean_dec(v_a_2146_);
lean_dec_ref(v_fst_2098_);
v___x_2188_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__5, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__5_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___closed__5);
v___x_2189_ = l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__1(v___x_2188_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
return v___x_2189_;
}
}
else
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
lean_dec_ref(v_fst_2098_);
v_a_2190_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2145_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2145_);
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
lean_object* v___x_2199_; 
lean_dec_ref(v_fst_2098_);
lean_dec(v_snd_2097_);
if (v_isShared_2114_ == 0)
{
lean_ctor_set(v___x_2113_, 0, v_____x_2100_);
v___x_2199_ = v___x_2113_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_____x_2100_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
}
}
}
else
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2209_; 
lean_dec(v_a_2109_);
lean_dec_ref(v_____x_2100_);
lean_dec_ref(v_fst_2098_);
lean_dec(v_snd_2097_);
v_a_2202_ = lean_ctor_get(v___x_2110_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2110_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2204_ = v___x_2110_;
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v___x_2110_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2207_; 
if (v_isShared_2205_ == 0)
{
v___x_2207_ = v___x_2204_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_a_2202_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
else
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2217_; 
lean_dec_ref(v_____x_2100_);
lean_dec_ref(v_fst_2098_);
lean_dec(v_snd_2097_);
v_a_2210_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2217_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2217_ == 0)
{
v___x_2212_ = v___x_2108_;
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2108_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2215_; 
if (v_isShared_2213_ == 0)
{
v___x_2215_ = v___x_2212_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v_a_2210_);
v___x_2215_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
return v___x_2215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___boxed(lean_object* v_snd_2218_, lean_object* v_fst_2219_, lean_object* v___x_2220_, lean_object* v_____x_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_){
_start:
{
uint8_t v___x_7876__boxed_2229_; lean_object* v_res_2230_; 
v___x_7876__boxed_2229_ = lean_unbox(v___x_2220_);
v_res_2230_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0(v_snd_2218_, v_fst_2219_, v___x_7876__boxed_2229_, v_____x_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_, v___y_2227_);
lean_dec(v___y_2227_);
lean_dec_ref(v___y_2226_);
lean_dec(v___y_2225_);
lean_dec_ref(v___y_2224_);
lean_dec(v___y_2223_);
lean_dec_ref(v___y_2222_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction(lean_object* v_goal_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_){
_start:
{
lean_object* v___x_2241_; uint8_t v___x_2242_; lean_object* v_____x_2244_; lean_object* v_fst_2245_; lean_object* v_snd_2246_; lean_object* v___y_2247_; lean_object* v___y_2248_; lean_object* v___y_2249_; lean_object* v___y_2250_; lean_object* v___y_2251_; lean_object* v___y_2252_; lean_object* v___x_2256_; 
v___x_2241_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___closed__0));
v___x_2242_ = 1;
lean_inc(v_goal_2233_);
v___x_2256_ = l_Lean_Meta_Sym_intros(v_goal_2233_, v___x_2241_, v___x_2242_, v_a_2234_, v_a_2235_, v_a_2236_, v_a_2237_, v_a_2238_, v_a_2239_);
if (lean_obj_tag(v___x_2256_) == 0)
{
lean_object* v_a_2257_; 
v_a_2257_ = lean_ctor_get(v___x_2256_, 0);
lean_inc(v_a_2257_);
lean_dec_ref_known(v___x_2256_, 1);
if (lean_obj_tag(v_a_2257_) == 0)
{
lean_object* v___x_2258_; 
lean_inc(v_goal_2233_);
v___x_2258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2258_, 0, v___x_2241_);
lean_ctor_set(v___x_2258_, 1, v_goal_2233_);
v_____x_2244_ = v___x_2258_;
v_fst_2245_ = v___x_2241_;
v_snd_2246_ = v_goal_2233_;
v___y_2247_ = v_a_2234_;
v___y_2248_ = v_a_2235_;
v___y_2249_ = v_a_2236_;
v___y_2250_ = v_a_2237_;
v___y_2251_ = v_a_2238_;
v___y_2252_ = v_a_2239_;
goto v___jp_2243_;
}
else
{
lean_object* v_newDecls_2259_; lean_object* v_mvarId_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2267_; 
lean_dec(v_goal_2233_);
v_newDecls_2259_ = lean_ctor_get(v_a_2257_, 0);
v_mvarId_2260_ = lean_ctor_get(v_a_2257_, 1);
v_isSharedCheck_2267_ = !lean_is_exclusive(v_a_2257_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2262_ = v_a_2257_;
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_mvarId_2260_);
lean_inc(v_newDecls_2259_);
lean_dec(v_a_2257_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2265_; 
lean_inc(v_mvarId_2260_);
lean_inc_ref(v_newDecls_2259_);
if (v_isShared_2263_ == 0)
{
lean_ctor_set_tag(v___x_2262_, 0);
v___x_2265_ = v___x_2262_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v_newDecls_2259_);
lean_ctor_set(v_reuseFailAlloc_2266_, 1, v_mvarId_2260_);
v___x_2265_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
v_____x_2244_ = v___x_2265_;
v_fst_2245_ = v_newDecls_2259_;
v_snd_2246_ = v_mvarId_2260_;
v___y_2247_ = v_a_2234_;
v___y_2248_ = v_a_2235_;
v___y_2249_ = v_a_2236_;
v___y_2250_ = v_a_2237_;
v___y_2251_ = v_a_2238_;
v___y_2252_ = v_a_2239_;
goto v___jp_2243_;
}
}
}
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
lean_dec(v_goal_2233_);
v_a_2268_ = lean_ctor_get(v___x_2256_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2256_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2270_ = v___x_2256_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2256_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2273_; 
if (v_isShared_2271_ == 0)
{
v___x_2273_ = v___x_2270_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_a_2268_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
v___jp_2243_:
{
lean_object* v___x_2253_; lean_object* v___f_2254_; lean_object* v___x_2255_; 
v___x_2253_ = lean_box(v___x_2242_);
lean_inc(v_snd_2246_);
v___f_2254_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___lam__0___boxed), 11, 4);
lean_closure_set(v___f_2254_, 0, v_snd_2246_);
lean_closure_set(v___f_2254_, 1, v_fst_2245_);
lean_closure_set(v___f_2254_, 2, v___x_2253_);
lean_closure_set(v___f_2254_, 3, v_____x_2244_);
v___x_2255_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__2___redArg(v_snd_2246_, v___f_2254_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_);
return v___x_2255_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___boxed(lean_object* v_goal_2276_, lean_object* v_a_2277_, lean_object* v_a_2278_, lean_object* v_a_2279_, lean_object* v_a_2280_, lean_object* v_a_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_){
_start:
{
lean_object* v_res_2284_; 
v_res_2284_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction(v_goal_2276_, v_a_2277_, v_a_2278_, v_a_2279_, v_a_2280_, v_a_2281_, v_a_2282_);
lean_dec(v_a_2282_);
lean_dec_ref(v_a_2281_);
lean_dec(v_a_2280_);
lean_dec_ref(v_a_2279_);
lean_dec(v_a_2278_);
lean_dec_ref(v_a_2277_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0(lean_object* v_00_u03b1_2285_, lean_object* v_msg_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_){
_start:
{
lean_object* v___x_2294_; 
v___x_2294_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0___redArg(v_msg_2286_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0___boxed(lean_object* v_00_u03b1_2295_, lean_object* v_msg_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v_res_2304_; 
v_res_2304_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0(v_00_u03b1_2295_, v_msg_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_);
lean_dec(v___y_2302_);
lean_dec_ref(v___y_2301_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
return v_res_2304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupGrindTarget___redArg(lean_object* v_goal_2305_, lean_object* v_a_2306_, lean_object* v_a_2307_, lean_object* v_a_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_){
_start:
{
lean_object* v_toGoalState_2313_; lean_object* v_mvarId_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2347_; 
v_toGoalState_2313_ = lean_ctor_get(v_goal_2305_, 0);
v_mvarId_2314_ = lean_ctor_get(v_goal_2305_, 1);
v_isSharedCheck_2347_ = !lean_is_exclusive(v_goal_2305_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2316_ = v_goal_2305_;
v_isShared_2317_ = v_isSharedCheck_2347_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_mvarId_2314_);
lean_inc(v_toGoalState_2313_);
lean_dec(v_goal_2305_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2347_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2318_; 
v___x_2318_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction(v_mvarId_2314_, v_a_2306_, v_a_2307_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2338_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2321_ = v___x_2318_;
v_isShared_2322_ = v_isSharedCheck_2338_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_a_2319_);
lean_dec(v___x_2318_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2338_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v_fst_2323_; lean_object* v_snd_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2337_; 
v_fst_2323_ = lean_ctor_get(v_a_2319_, 0);
v_snd_2324_ = lean_ctor_get(v_a_2319_, 1);
v_isSharedCheck_2337_ = !lean_is_exclusive(v_a_2319_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2326_ = v_a_2319_;
v_isShared_2327_ = v_isSharedCheck_2337_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_snd_2324_);
lean_inc(v_fst_2323_);
lean_dec(v_a_2319_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2337_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2329_; 
if (v_isShared_2317_ == 0)
{
lean_ctor_set(v___x_2316_, 1, v_snd_2324_);
v___x_2329_ = v___x_2316_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_toGoalState_2313_);
lean_ctor_set(v_reuseFailAlloc_2336_, 1, v_snd_2324_);
v___x_2329_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
lean_object* v___x_2331_; 
if (v_isShared_2327_ == 0)
{
lean_ctor_set(v___x_2326_, 1, v___x_2329_);
v___x_2331_ = v___x_2326_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_fst_2323_);
lean_ctor_set(v_reuseFailAlloc_2335_, 1, v___x_2329_);
v___x_2331_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
lean_object* v___x_2333_; 
if (v_isShared_2322_ == 0)
{
lean_ctor_set(v___x_2321_, 0, v___x_2331_);
v___x_2333_ = v___x_2321_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v___x_2331_);
v___x_2333_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
return v___x_2333_;
}
}
}
}
}
}
else
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2346_; 
lean_del_object(v___x_2316_);
lean_dec_ref(v_toGoalState_2313_);
v_a_2339_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2341_ = v___x_2318_;
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v___x_2318_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2344_; 
if (v_isShared_2342_ == 0)
{
v___x_2344_ = v___x_2341_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_a_2339_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
return v___x_2344_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupGrindTarget___redArg___boxed(lean_object* v_goal_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_){
_start:
{
lean_object* v_res_2356_; 
v_res_2356_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupGrindTarget___redArg(v_goal_2348_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_, v_a_2354_);
lean_dec(v_a_2354_);
lean_dec_ref(v_a_2353_);
lean_dec(v_a_2352_);
lean_dec_ref(v_a_2351_);
lean_dec(v_a_2350_);
lean_dec_ref(v_a_2349_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupGrindTarget(lean_object* v_goal_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_){
_start:
{
lean_object* v___x_2368_; 
v___x_2368_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupGrindTarget___redArg(v_goal_2357_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
return v___x_2368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupGrindTarget___boxed(lean_object* v_goal_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_){
_start:
{
lean_object* v_res_2380_; 
v_res_2380_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupGrindTarget(v_goal_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2377_, v_a_2378_);
lean_dec(v_a_2378_);
lean_dec_ref(v_a_2377_);
lean_dec(v_a_2376_);
lean_dec_ref(v_a_2375_);
lean_dec(v_a_2374_);
lean_dec_ref(v_a_2373_);
lean_dec(v_a_2372_);
lean_dec_ref(v_a_2371_);
lean_dec(v_a_2370_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___redArg___lam__0(lean_object* v_x_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_){
_start:
{
lean_object* v___x_2392_; 
lean_inc(v___y_2386_);
lean_inc_ref(v___y_2385_);
lean_inc(v___y_2384_);
lean_inc_ref(v___y_2383_);
lean_inc(v___y_2382_);
v___x_2392_ = lean_apply_10(v_x_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, lean_box(0));
return v___x_2392_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___redArg___lam__0___boxed(lean_object* v_x_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___redArg___lam__0(v_x_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
lean_dec(v___y_2394_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___redArg(lean_object* v_mvarId_2405_, lean_object* v_x_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_){
_start:
{
lean_object* v___f_2417_; lean_object* v___x_2418_; 
lean_inc(v___y_2411_);
lean_inc_ref(v___y_2410_);
lean_inc(v___y_2409_);
lean_inc_ref(v___y_2408_);
lean_inc(v___y_2407_);
v___f_2417_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_2417_, 0, v_x_2406_);
lean_closure_set(v___f_2417_, 1, v___y_2407_);
lean_closure_set(v___f_2417_, 2, v___y_2408_);
lean_closure_set(v___f_2417_, 3, v___y_2409_);
lean_closure_set(v___f_2417_, 4, v___y_2410_);
lean_closure_set(v___f_2417_, 5, v___y_2411_);
v___x_2418_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2405_, v___f_2417_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_);
if (lean_obj_tag(v___x_2418_) == 0)
{
return v___x_2418_;
}
else
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2426_; 
v_a_2419_ = lean_ctor_get(v___x_2418_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v___x_2418_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2421_ = v___x_2418_;
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v___x_2418_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2424_; 
if (v_isShared_2422_ == 0)
{
v___x_2424_ = v___x_2421_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_a_2419_);
v___x_2424_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
return v___x_2424_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___redArg___boxed(lean_object* v_mvarId_2427_, lean_object* v_x_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_){
_start:
{
lean_object* v_res_2439_; 
v_res_2439_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___redArg(v_mvarId_2427_, v_x_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v___y_2429_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1(lean_object* v_00_u03b1_2440_, lean_object* v_mvarId_2441_, lean_object* v_x_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___redArg(v_mvarId_2441_, v_x_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___boxed(lean_object* v_00_u03b1_2454_, lean_object* v_mvarId_2455_, lean_object* v_x_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_){
_start:
{
lean_object* v_res_2467_; 
v_res_2467_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1(v_00_u03b1_2454_, v_mvarId_2455_, v_x_2456_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_);
lean_dec(v___y_2465_);
lean_dec_ref(v___y_2464_);
lean_dec(v___y_2463_);
lean_dec_ref(v___y_2462_);
lean_dec(v___y_2461_);
lean_dec_ref(v___y_2460_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
return v_res_2467_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___redArg___lam__0(lean_object* v_x_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_){
_start:
{
lean_object* v___x_2481_; 
lean_inc(v___y_2475_);
lean_inc_ref(v___y_2474_);
lean_inc(v___y_2473_);
lean_inc_ref(v___y_2472_);
lean_inc(v___y_2471_);
lean_inc(v___y_2470_);
lean_inc_ref(v___y_2469_);
v___x_2481_ = lean_apply_12(v_x_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, lean_box(0));
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___redArg___lam__0___boxed(lean_object* v_x_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___redArg___lam__0(v_x_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
lean_dec(v___y_2487_);
lean_dec_ref(v___y_2486_);
lean_dec(v___y_2485_);
lean_dec(v___y_2484_);
lean_dec_ref(v___y_2483_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___redArg(lean_object* v_mvarId_2496_, lean_object* v_x_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
lean_object* v___f_2510_; lean_object* v___x_2511_; 
lean_inc(v___y_2504_);
lean_inc_ref(v___y_2503_);
lean_inc(v___y_2502_);
lean_inc_ref(v___y_2501_);
lean_inc(v___y_2500_);
lean_inc(v___y_2499_);
lean_inc_ref(v___y_2498_);
v___f_2510_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_2510_, 0, v_x_2497_);
lean_closure_set(v___f_2510_, 1, v___y_2498_);
lean_closure_set(v___f_2510_, 2, v___y_2499_);
lean_closure_set(v___f_2510_, 3, v___y_2500_);
lean_closure_set(v___f_2510_, 4, v___y_2501_);
lean_closure_set(v___f_2510_, 5, v___y_2502_);
lean_closure_set(v___f_2510_, 6, v___y_2503_);
lean_closure_set(v___f_2510_, 7, v___y_2504_);
v___x_2511_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2496_, v___f_2510_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
if (lean_obj_tag(v___x_2511_) == 0)
{
return v___x_2511_;
}
else
{
lean_object* v_a_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2519_; 
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2514_ = v___x_2511_;
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_a_2512_);
lean_dec(v___x_2511_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v___x_2517_; 
if (v_isShared_2515_ == 0)
{
v___x_2517_ = v___x_2514_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v_a_2512_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___redArg___boxed(lean_object* v_mvarId_2520_, lean_object* v_x_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_){
_start:
{
lean_object* v_res_2534_; 
v_res_2534_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___redArg(v_mvarId_2520_, v_x_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec(v___y_2526_);
lean_dec_ref(v___y_2525_);
lean_dec(v___y_2524_);
lean_dec(v___y_2523_);
lean_dec_ref(v___y_2522_);
return v_res_2534_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3(lean_object* v_00_u03b1_2535_, lean_object* v_mvarId_2536_, lean_object* v_x_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v___x_2550_; 
v___x_2550_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___redArg(v_mvarId_2536_, v_x_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_);
return v___x_2550_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___boxed(lean_object* v_00_u03b1_2551_, lean_object* v_mvarId_2552_, lean_object* v_x_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_){
_start:
{
lean_object* v_res_2566_; 
v_res_2566_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3(v_00_u03b1_2551_, v_mvarId_2552_, v_x_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_);
lean_dec(v___y_2564_);
lean_dec_ref(v___y_2563_);
lean_dec(v___y_2562_);
lean_dec_ref(v___y_2561_);
lean_dec(v___y_2560_);
lean_dec_ref(v___y_2559_);
lean_dec(v___y_2558_);
lean_dec_ref(v___y_2557_);
lean_dec(v___y_2556_);
lean_dec(v___y_2555_);
lean_dec_ref(v___y_2554_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0_spec__0___redArg(lean_object* v_as_2567_, size_t v_i_2568_, size_t v_stop_2569_, lean_object* v_b_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_){
_start:
{
lean_object* v_a_2582_; uint8_t v___x_2586_; 
v___x_2586_ = lean_usize_dec_eq(v_i_2568_, v_stop_2569_);
if (v___x_2586_ == 0)
{
lean_object* v___x_2587_; lean_object* v___x_2588_; 
v___x_2587_ = lean_array_uget_borrowed(v_as_2567_, v_i_2568_);
lean_inc(v___x_2587_);
v___x_2588_ = l_Lean_FVarId_getType___redArg(v___x_2587_, v___y_2576_, v___y_2578_, v___y_2579_);
if (lean_obj_tag(v___x_2588_) == 0)
{
lean_object* v_a_2589_; lean_object* v___x_2590_; 
v_a_2589_ = lean_ctor_get(v___x_2588_, 0);
lean_inc(v_a_2589_);
lean_dec_ref_known(v___x_2588_, 1);
v___x_2590_ = l_Lean_Meta_isProp(v_a_2589_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_);
if (lean_obj_tag(v___x_2590_) == 0)
{
lean_object* v_a_2591_; uint8_t v___x_2592_; 
v_a_2591_ = lean_ctor_get(v___x_2590_, 0);
lean_inc(v_a_2591_);
lean_dec_ref_known(v___x_2590_, 1);
v___x_2592_ = lean_unbox(v_a_2591_);
lean_dec(v_a_2591_);
if (v___x_2592_ == 0)
{
v_a_2582_ = v_b_2570_;
goto v___jp_2581_;
}
else
{
lean_object* v___x_2593_; 
lean_inc(v___x_2587_);
v___x_2593_ = l_Lean_FVarId_getUserName___redArg(v___x_2587_, v___y_2576_, v___y_2578_, v___y_2579_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v_a_2594_; lean_object* v___x_2595_; 
v_a_2594_ = lean_ctor_get(v___x_2593_, 0);
lean_inc(v_a_2594_);
lean_dec_ref_known(v___x_2593_, 1);
lean_inc(v___x_2587_);
v___x_2595_ = l_Lean_FVarId_getType___redArg(v___x_2587_, v___y_2576_, v___y_2578_, v___y_2579_);
if (lean_obj_tag(v___x_2595_) == 0)
{
lean_object* v_a_2596_; lean_object* v___x_2597_; 
v_a_2596_ = lean_ctor_get(v___x_2595_, 0);
lean_inc(v_a_2596_);
lean_dec_ref_known(v___x_2595_, 1);
v___x_2597_ = l_Lean_Meta_Grind_preprocessLight___redArg(v_a_2596_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_);
if (lean_obj_tag(v___x_2597_) == 0)
{
lean_object* v_a_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; 
v_a_2598_ = lean_ctor_get(v___x_2597_, 0);
lean_inc(v_a_2598_);
lean_dec_ref_known(v___x_2597_, 1);
lean_inc_n(v___x_2587_, 2);
v___x_2599_ = l_Lean_mkFVar(v___x_2587_);
v___x_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2587_);
v___x_2601_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2601_, 0, v_a_2594_);
lean_ctor_set(v___x_2601_, 1, v_a_2598_);
lean_ctor_set(v___x_2601_, 2, v___x_2599_);
lean_ctor_set(v___x_2601_, 3, v___x_2600_);
v___x_2602_ = lean_array_push(v_b_2570_, v___x_2601_);
v_a_2582_ = v___x_2602_;
goto v___jp_2581_;
}
else
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2610_; 
lean_dec(v_a_2594_);
lean_dec_ref(v_b_2570_);
v_a_2603_ = lean_ctor_get(v___x_2597_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2605_ = v___x_2597_;
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2597_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2608_; 
if (v_isShared_2606_ == 0)
{
v___x_2608_ = v___x_2605_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_a_2603_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
}
else
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
lean_dec(v_a_2594_);
lean_dec_ref(v_b_2570_);
v_a_2611_ = lean_ctor_get(v___x_2595_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2595_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2595_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2595_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
else
{
lean_object* v_a_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2626_; 
lean_dec_ref(v_b_2570_);
v_a_2619_ = lean_ctor_get(v___x_2593_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2621_ = v___x_2593_;
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_a_2619_);
lean_dec(v___x_2593_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v___x_2624_; 
if (v_isShared_2622_ == 0)
{
v___x_2624_ = v___x_2621_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_a_2619_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
}
}
else
{
lean_object* v_a_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2634_; 
lean_dec_ref(v_b_2570_);
v_a_2627_ = lean_ctor_get(v___x_2590_, 0);
v_isSharedCheck_2634_ = !lean_is_exclusive(v___x_2590_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2629_ = v___x_2590_;
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_a_2627_);
lean_dec(v___x_2590_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
lean_object* v___x_2632_; 
if (v_isShared_2630_ == 0)
{
v___x_2632_ = v___x_2629_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v_a_2627_);
v___x_2632_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
return v___x_2632_;
}
}
}
}
else
{
lean_object* v_a_2635_; lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2642_; 
lean_dec_ref(v_b_2570_);
v_a_2635_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2642_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2642_ == 0)
{
v___x_2637_ = v___x_2588_;
v_isShared_2638_ = v_isSharedCheck_2642_;
goto v_resetjp_2636_;
}
else
{
lean_inc(v_a_2635_);
lean_dec(v___x_2588_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2642_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2640_; 
if (v_isShared_2638_ == 0)
{
v___x_2640_ = v___x_2637_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v_a_2635_);
v___x_2640_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
return v___x_2640_;
}
}
}
}
else
{
lean_object* v___x_2643_; 
v___x_2643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2643_, 0, v_b_2570_);
return v___x_2643_;
}
v___jp_2581_:
{
size_t v___x_2583_; size_t v___x_2584_; 
v___x_2583_ = ((size_t)1ULL);
v___x_2584_ = lean_usize_add(v_i_2568_, v___x_2583_);
v_i_2568_ = v___x_2584_;
v_b_2570_ = v_a_2582_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0_spec__0___redArg___boxed(lean_object* v_as_2644_, lean_object* v_i_2645_, lean_object* v_stop_2646_, lean_object* v_b_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_){
_start:
{
size_t v_i_boxed_2658_; size_t v_stop_boxed_2659_; lean_object* v_res_2660_; 
v_i_boxed_2658_ = lean_unbox_usize(v_i_2645_);
lean_dec(v_i_2645_);
v_stop_boxed_2659_ = lean_unbox_usize(v_stop_2646_);
lean_dec(v_stop_2646_);
v_res_2660_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0_spec__0___redArg(v_as_2644_, v_i_boxed_2658_, v_stop_boxed_2659_, v_b_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
lean_dec(v___y_2656_);
lean_dec_ref(v___y_2655_);
lean_dec(v___y_2654_);
lean_dec_ref(v___y_2653_);
lean_dec(v___y_2652_);
lean_dec_ref(v___y_2651_);
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec_ref(v_as_2644_);
return v_res_2660_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0(lean_object* v_as_2661_, lean_object* v_start_2662_, lean_object* v_stop_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
lean_object* v___x_2675_; uint8_t v___x_2676_; 
v___x_2675_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps___closed__0));
v___x_2676_ = lean_nat_dec_lt(v_start_2662_, v_stop_2663_);
if (v___x_2676_ == 0)
{
lean_object* v___x_2677_; 
v___x_2677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2677_, 0, v___x_2675_);
return v___x_2677_;
}
else
{
lean_object* v___x_2678_; uint8_t v___x_2679_; 
v___x_2678_ = lean_array_get_size(v_as_2661_);
v___x_2679_ = lean_nat_dec_le(v_stop_2663_, v___x_2678_);
if (v___x_2679_ == 0)
{
uint8_t v___x_2680_; 
v___x_2680_ = lean_nat_dec_lt(v_start_2662_, v___x_2678_);
if (v___x_2680_ == 0)
{
lean_object* v___x_2681_; 
v___x_2681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2675_);
return v___x_2681_;
}
else
{
size_t v___x_2682_; size_t v___x_2683_; lean_object* v___x_2684_; 
v___x_2682_ = lean_usize_of_nat(v_start_2662_);
v___x_2683_ = lean_usize_of_nat(v___x_2678_);
v___x_2684_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0_spec__0___redArg(v_as_2661_, v___x_2682_, v___x_2683_, v___x_2675_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
return v___x_2684_;
}
}
else
{
size_t v___x_2685_; size_t v___x_2686_; lean_object* v___x_2687_; 
v___x_2685_ = lean_usize_of_nat(v_start_2662_);
v___x_2686_ = lean_usize_of_nat(v_stop_2663_);
v___x_2687_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0_spec__0___redArg(v_as_2661_, v___x_2685_, v___x_2686_, v___x_2675_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
return v___x_2687_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0___boxed(lean_object* v_as_2688_, lean_object* v_start_2689_, lean_object* v_stop_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_){
_start:
{
lean_object* v_res_2702_; 
v_res_2702_ = l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0(v_as_2688_, v_start_2689_, v_stop_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_);
lean_dec(v___y_2700_);
lean_dec_ref(v___y_2699_);
lean_dec(v___y_2698_);
lean_dec_ref(v___y_2697_);
lean_dec(v___y_2696_);
lean_dec_ref(v___y_2695_);
lean_dec(v___y_2694_);
lean_dec_ref(v___y_2693_);
lean_dec(v___y_2692_);
lean_dec(v___y_2691_);
lean_dec(v_stop_2690_);
lean_dec(v_start_2689_);
lean_dec_ref(v_as_2688_);
return v_res_2702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__0(lean_object* v_snd_2703_, lean_object* v_config_2704_, lean_object* v_fst_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_){
_start:
{
lean_object* v___x_2716_; lean_object* v_a_2718_; lean_object* v___y_2723_; lean_object* v___x_2733_; 
v___x_2716_ = lean_st_mk_ref(v_snd_2703_);
v___x_2733_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_collectGoalHyps(v_config_2704_, v___x_2716_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_);
if (lean_obj_tag(v___x_2733_) == 0)
{
lean_object* v_a_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; 
v_a_2734_ = lean_ctor_get(v___x_2733_, 0);
lean_inc(v_a_2734_);
lean_dec_ref_known(v___x_2733_, 1);
v___x_2735_ = lean_unsigned_to_nat(0u);
v___x_2736_ = lean_array_get_size(v_fst_2705_);
v___x_2737_ = l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0(v_fst_2705_, v___x_2735_, v___x_2736_, v___x_2716_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_);
if (lean_obj_tag(v___x_2737_) == 0)
{
lean_object* v_a_2738_; lean_object* v___x_2739_; 
v_a_2738_ = lean_ctor_get(v___x_2737_, 0);
lean_inc(v_a_2738_);
lean_dec_ref_known(v___x_2737_, 1);
v___x_2739_ = l_Array_append___redArg(v_a_2734_, v_a_2738_);
lean_dec(v_a_2738_);
v_a_2718_ = v___x_2739_;
goto v___jp_2717_;
}
else
{
lean_dec(v_a_2734_);
v___y_2723_ = v___x_2737_;
goto v___jp_2722_;
}
}
else
{
v___y_2723_ = v___x_2733_;
goto v___jp_2722_;
}
v___jp_2717_:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; 
v___x_2719_ = lean_st_ref_get(v___x_2716_);
lean_dec(v___x_2716_);
v___x_2720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2720_, 0, v_a_2718_);
lean_ctor_set(v___x_2720_, 1, v___x_2719_);
v___x_2721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2721_, 0, v___x_2720_);
return v___x_2721_;
}
v___jp_2722_:
{
if (lean_obj_tag(v___y_2723_) == 0)
{
lean_object* v_a_2724_; 
v_a_2724_ = lean_ctor_get(v___y_2723_, 0);
lean_inc(v_a_2724_);
lean_dec_ref_known(v___y_2723_, 1);
v_a_2718_ = v_a_2724_;
goto v___jp_2717_;
}
else
{
lean_object* v_a_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2732_; 
lean_dec(v___x_2716_);
v_a_2725_ = lean_ctor_get(v___y_2723_, 0);
v_isSharedCheck_2732_ = !lean_is_exclusive(v___y_2723_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2727_ = v___y_2723_;
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_a_2725_);
lean_dec(v___y_2723_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2730_; 
if (v_isShared_2728_ == 0)
{
v___x_2730_ = v___x_2727_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v_a_2725_);
v___x_2730_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
return v___x_2730_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__0___boxed(lean_object* v_snd_2740_, lean_object* v_config_2741_, lean_object* v_fst_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_){
_start:
{
lean_object* v_res_2753_; 
v_res_2753_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__0(v_snd_2740_, v_config_2741_, v_fst_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_);
lean_dec(v___y_2751_);
lean_dec_ref(v___y_2750_);
lean_dec(v___y_2749_);
lean_dec_ref(v___y_2748_);
lean_dec(v___y_2747_);
lean_dec_ref(v___y_2746_);
lean_dec(v___y_2745_);
lean_dec_ref(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec_ref(v_fst_2742_);
lean_dec_ref(v_config_2741_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__2___redArg(size_t v_sz_2754_, size_t v_i_2755_, lean_object* v_bs_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_){
_start:
{
uint8_t v___x_2764_; 
v___x_2764_ = lean_usize_dec_lt(v_i_2755_, v_sz_2754_);
if (v___x_2764_ == 0)
{
lean_object* v___x_2765_; lean_object* v___x_2766_; 
v___x_2765_ = l_unsafeCast___redArg(v_bs_2756_);
lean_dec_ref(v_bs_2756_);
v___x_2766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2766_, 0, v___x_2765_);
return v___x_2766_;
}
else
{
lean_object* v_v_2767_; lean_object* v___x_2768_; lean_object* v_bs_x27_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
v_v_2767_ = lean_array_uget(v_bs_2756_, v_i_2755_);
v___x_2768_ = lean_unsigned_to_nat(0u);
v_bs_x27_2769_ = lean_array_uset(v_bs_2756_, v_i_2755_, v___x_2768_);
v___x_2770_ = l_unsafeCast___redArg(v_v_2767_);
lean_dec(v_v_2767_);
lean_inc(v___x_2770_);
v___x_2771_ = l_Lean_FVarId_getUserName___redArg(v___x_2770_, v___y_2759_, v___y_2761_, v___y_2762_);
if (lean_obj_tag(v___x_2771_) == 0)
{
lean_object* v_a_2772_; lean_object* v___x_2773_; 
v_a_2772_ = lean_ctor_get(v___x_2771_, 0);
lean_inc(v_a_2772_);
lean_dec_ref_known(v___x_2771_, 1);
lean_inc(v___x_2770_);
v___x_2773_ = l_Lean_FVarId_getType___redArg(v___x_2770_, v___y_2759_, v___y_2761_, v___y_2762_);
if (lean_obj_tag(v___x_2773_) == 0)
{
lean_object* v_a_2774_; lean_object* v___x_2775_; 
v_a_2774_ = lean_ctor_get(v___x_2773_, 0);
lean_inc(v_a_2774_);
lean_dec_ref_known(v___x_2773_, 1);
v___x_2775_ = l_Lean_Meta_Sym_instantiateMVarsS(v_a_2774_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, v___y_2761_, v___y_2762_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_object* v_a_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; size_t v___x_2780_; size_t v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; 
v_a_2776_ = lean_ctor_get(v___x_2775_, 0);
lean_inc(v_a_2776_);
lean_dec_ref_known(v___x_2775_, 1);
lean_inc(v___x_2770_);
v___x_2777_ = l_Lean_mkFVar(v___x_2770_);
v___x_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2770_);
v___x_2779_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2779_, 0, v_a_2772_);
lean_ctor_set(v___x_2779_, 1, v_a_2776_);
lean_ctor_set(v___x_2779_, 2, v___x_2777_);
lean_ctor_set(v___x_2779_, 3, v___x_2778_);
v___x_2780_ = ((size_t)1ULL);
v___x_2781_ = lean_usize_add(v_i_2755_, v___x_2780_);
v___x_2782_ = l_unsafeCast___redArg(v___x_2779_);
lean_dec_ref_known(v___x_2779_, 4);
v___x_2783_ = lean_array_uset(v_bs_x27_2769_, v_i_2755_, v___x_2782_);
v_i_2755_ = v___x_2781_;
v_bs_2756_ = v___x_2783_;
goto _start;
}
else
{
lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2792_; 
lean_dec(v_a_2772_);
lean_dec(v___x_2770_);
lean_dec_ref(v_bs_x27_2769_);
v_a_2785_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2787_ = v___x_2775_;
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v___x_2775_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2790_; 
if (v_isShared_2788_ == 0)
{
v___x_2790_ = v___x_2787_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_a_2785_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
}
else
{
lean_object* v_a_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2800_; 
lean_dec(v_a_2772_);
lean_dec(v___x_2770_);
lean_dec_ref(v_bs_x27_2769_);
v_a_2793_ = lean_ctor_get(v___x_2773_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v___x_2773_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2795_ = v___x_2773_;
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_a_2793_);
lean_dec(v___x_2773_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
lean_object* v___x_2798_; 
if (v_isShared_2796_ == 0)
{
v___x_2798_ = v___x_2795_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v_a_2793_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
}
}
else
{
lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2808_; 
lean_dec(v___x_2770_);
lean_dec_ref(v_bs_x27_2769_);
v_a_2801_ = lean_ctor_get(v___x_2771_, 0);
v_isSharedCheck_2808_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2803_ = v___x_2771_;
v_isShared_2804_ = v_isSharedCheck_2808_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v___x_2771_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2808_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2806_; 
if (v_isShared_2804_ == 0)
{
v___x_2806_ = v___x_2803_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v_a_2801_);
v___x_2806_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
return v___x_2806_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__2___redArg___boxed(lean_object* v_sz_2809_, lean_object* v_i_2810_, lean_object* v_bs_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_){
_start:
{
size_t v_sz_boxed_2819_; size_t v_i_boxed_2820_; lean_object* v_res_2821_; 
v_sz_boxed_2819_ = lean_unbox_usize(v_sz_2809_);
lean_dec(v_sz_2809_);
v_i_boxed_2820_ = lean_unbox_usize(v_i_2810_);
lean_dec(v_i_2810_);
v_res_2821_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__2___redArg(v_sz_boxed_2819_, v_i_boxed_2820_, v_bs_2811_, v___y_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_);
lean_dec(v___y_2817_);
lean_dec_ref(v___y_2816_);
lean_dec(v___y_2815_);
lean_dec_ref(v___y_2814_);
lean_dec(v___y_2813_);
lean_dec_ref(v___y_2812_);
return v_res_2821_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__2(size_t v_sz_2822_, size_t v_i_2823_, lean_object* v_bs_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_){
_start:
{
lean_object* v___x_2837_; 
v___x_2837_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__2___redArg(v_sz_2822_, v_i_2823_, v_bs_2824_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_);
return v___x_2837_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__2___boxed(lean_object* v_sz_2838_, lean_object* v_i_2839_, lean_object* v_bs_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_){
_start:
{
size_t v_sz_boxed_2853_; size_t v_i_boxed_2854_; lean_object* v_res_2855_; 
v_sz_boxed_2853_ = lean_unbox_usize(v_sz_2838_);
lean_dec(v_sz_2838_);
v_i_boxed_2854_ = lean_unbox_usize(v_i_2839_);
lean_dec(v_i_2839_);
v_res_2855_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__2(v_sz_boxed_2853_, v_i_boxed_2854_, v_bs_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec_ref(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2846_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
lean_dec(v___y_2843_);
lean_dec(v___y_2842_);
lean_dec_ref(v___y_2841_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__1(lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_){
_start:
{
lean_object* v___x_2870_; 
v___x_2870_ = l_Lean_Meta_getPropHyps(v___y_2865_, v___y_2866_, v___y_2867_, v___y_2868_);
if (lean_obj_tag(v___x_2870_) == 0)
{
lean_object* v_a_2871_; size_t v_sz_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_53152__overap_2877_; lean_object* v___x_2878_; 
v_a_2871_ = lean_ctor_get(v___x_2870_, 0);
lean_inc(v_a_2871_);
lean_dec_ref_known(v___x_2870_, 1);
v_sz_2872_ = lean_array_size(v_a_2871_);
v___x_2873_ = l_unsafeCast___redArg(v_a_2871_);
lean_dec(v_a_2871_);
v___x_2874_ = lean_box_usize(v_sz_2872_);
v___x_2875_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__1___boxed__const__1));
v___x_2876_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__2___boxed), 15, 3);
lean_closure_set(v___x_2876_, 0, v___x_2874_);
lean_closure_set(v___x_2876_, 1, v___x_2875_);
lean_closure_set(v___x_2876_, 2, v___x_2873_);
v___x_53152__overap_2877_ = l_unsafeCast___redArg(v___x_2876_);
lean_dec_ref(v___x_2876_);
lean_inc(v___y_2868_);
lean_inc_ref(v___y_2867_);
lean_inc(v___y_2866_);
lean_inc_ref(v___y_2865_);
lean_inc(v___y_2864_);
lean_inc_ref(v___y_2863_);
lean_inc(v___y_2862_);
lean_inc_ref(v___y_2861_);
lean_inc(v___y_2860_);
lean_inc(v___y_2859_);
lean_inc_ref(v___y_2858_);
v___x_2878_ = lean_apply_12(v___x_53152__overap_2877_, v___y_2858_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_, v___y_2868_, lean_box(0));
if (lean_obj_tag(v___x_2878_) == 0)
{
lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2887_; 
v_a_2879_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2887_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2887_ == 0)
{
v___x_2881_ = v___x_2878_;
v_isShared_2882_ = v_isSharedCheck_2887_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_dec(v___x_2878_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2887_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___x_2883_; lean_object* v___x_2885_; 
v___x_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2883_, 0, v_a_2879_);
if (v_isShared_2882_ == 0)
{
lean_ctor_set(v___x_2881_, 0, v___x_2883_);
v___x_2885_ = v___x_2881_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v___x_2883_);
v___x_2885_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
return v___x_2885_;
}
}
}
else
{
lean_object* v_a_2888_; lean_object* v___x_2890_; uint8_t v_isShared_2891_; uint8_t v_isSharedCheck_2895_; 
v_a_2888_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2895_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2895_ == 0)
{
v___x_2890_ = v___x_2878_;
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
else
{
lean_inc(v_a_2888_);
lean_dec(v___x_2878_);
v___x_2890_ = lean_box(0);
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
v_resetjp_2889_:
{
lean_object* v___x_2893_; 
if (v_isShared_2891_ == 0)
{
v___x_2893_ = v___x_2890_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v_a_2888_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
return v___x_2893_;
}
}
}
}
else
{
lean_object* v_a_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2903_; 
v_a_2896_ = lean_ctor_get(v___x_2870_, 0);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2870_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2898_ = v___x_2870_;
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_a_2896_);
lean_dec(v___x_2870_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2901_; 
if (v_isShared_2899_ == 0)
{
v___x_2901_ = v___x_2898_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v_a_2896_);
v___x_2901_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
return v___x_2901_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__1___boxed(lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_){
_start:
{
lean_object* v_res_2916_; 
v_res_2916_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__1(v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_);
lean_dec(v___y_2914_);
lean_dec_ref(v___y_2913_);
lean_dec(v___y_2912_);
lean_dec_ref(v___y_2911_);
lean_dec(v___y_2910_);
lean_dec_ref(v___y_2909_);
lean_dec(v___y_2908_);
lean_dec_ref(v___y_2907_);
lean_dec(v___y_2906_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget(lean_object* v_a_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_, lean_object* v_a_2921_, lean_object* v_a_2922_, lean_object* v_a_2923_, lean_object* v_a_2924_, lean_object* v_a_2925_, lean_object* v_a_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_){
_start:
{
lean_object* v_fst_2931_; lean_object* v_snd_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2935_; lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v___y_2939_; lean_object* v___y_2940_; lean_object* v___y_2941_; lean_object* v___y_2942_; lean_object* v___y_2943_; lean_object* v___f_2986_; lean_object* v___x_2987_; lean_object* v_target_2988_; 
v___f_2986_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___closed__0));
v___x_2987_ = lean_st_ref_get(v_a_2919_);
v_target_2988_ = lean_ctor_get(v___x_2987_, 2);
lean_inc_ref(v_target_2988_);
lean_dec(v___x_2987_);
if (lean_obj_tag(v_target_2988_) == 0)
{
lean_object* v_mvar_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_3032_; 
v_mvar_2989_ = lean_ctor_get(v_target_2988_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v_target_2988_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_2991_ = v_target_2988_;
v_isShared_2992_ = v_isSharedCheck_3032_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_mvar_2989_);
lean_dec(v_target_2988_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_3032_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2993_; 
v___x_2993_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction(v_mvar_2989_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_, v_a_2927_, v_a_2928_);
if (lean_obj_tag(v___x_2993_) == 0)
{
lean_object* v_a_2994_; lean_object* v_snd_2995_; lean_object* v___x_2996_; 
v_a_2994_ = lean_ctor_get(v___x_2993_, 0);
lean_inc(v_a_2994_);
lean_dec_ref_known(v___x_2993_, 1);
v_snd_2995_ = lean_ctor_get(v_a_2994_, 1);
lean_inc(v_snd_2995_);
lean_dec(v_a_2994_);
v___x_2996_ = l_Lean_Meta_Sym_preprocessMVar(v_snd_2995_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_, v_a_2927_, v_a_2928_);
if (lean_obj_tag(v___x_2996_) == 0)
{
lean_object* v_a_2997_; lean_object* v___x_2999_; 
v_a_2997_ = lean_ctor_get(v___x_2996_, 0);
lean_inc_n(v_a_2997_, 2);
lean_dec_ref_known(v___x_2996_, 1);
if (v_isShared_2992_ == 0)
{
lean_ctor_set(v___x_2991_, 0, v_a_2997_);
v___x_2999_ = v___x_2991_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v_a_2997_);
v___x_2999_ = v_reuseFailAlloc_3015_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
lean_object* v___x_3000_; lean_object* v_caches_3001_; lean_object* v_typeAnalysis_3002_; lean_object* v_hypotheses_3003_; uint8_t v_didChange_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3013_; 
v___x_3000_ = lean_st_ref_take(v_a_2919_);
v_caches_3001_ = lean_ctor_get(v___x_3000_, 0);
v_typeAnalysis_3002_ = lean_ctor_get(v___x_3000_, 1);
v_hypotheses_3003_ = lean_ctor_get(v___x_3000_, 3);
v_didChange_3004_ = lean_ctor_get_uint8(v___x_3000_, sizeof(void*)*4);
v_isSharedCheck_3013_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3013_ == 0)
{
lean_object* v_unused_3014_; 
v_unused_3014_ = lean_ctor_get(v___x_3000_, 2);
lean_dec(v_unused_3014_);
v___x_3006_ = v___x_3000_;
v_isShared_3007_ = v_isSharedCheck_3013_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_hypotheses_3003_);
lean_inc(v_typeAnalysis_3002_);
lean_inc(v_caches_3001_);
lean_dec(v___x_3000_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3013_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3009_; 
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 2, v___x_2999_);
v___x_3009_ = v___x_3006_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3012_; 
v_reuseFailAlloc_3012_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3012_, 0, v_caches_3001_);
lean_ctor_set(v_reuseFailAlloc_3012_, 1, v_typeAnalysis_3002_);
lean_ctor_set(v_reuseFailAlloc_3012_, 2, v___x_2999_);
lean_ctor_set(v_reuseFailAlloc_3012_, 3, v_hypotheses_3003_);
lean_ctor_set_uint8(v_reuseFailAlloc_3012_, sizeof(void*)*4, v_didChange_3004_);
v___x_3009_ = v_reuseFailAlloc_3012_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
lean_object* v___x_3010_; lean_object* v___x_3011_; 
v___x_3010_ = lean_st_ref_put(v_a_2919_, v___x_3009_);
v___x_3011_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__3___redArg(v_a_2997_, v___f_2986_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_, v_a_2922_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_, v_a_2927_, v_a_2928_);
return v___x_3011_;
}
}
}
}
else
{
lean_object* v_a_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3023_; 
lean_del_object(v___x_2991_);
v_a_3016_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3018_ = v___x_2996_;
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_a_3016_);
lean_dec(v___x_2996_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v___x_3021_; 
if (v_isShared_3019_ == 0)
{
v___x_3021_ = v___x_3018_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_a_3016_);
v___x_3021_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
return v___x_3021_;
}
}
}
}
else
{
lean_object* v_a_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3031_; 
lean_del_object(v___x_2991_);
v_a_3024_ = lean_ctor_get(v___x_2993_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3026_ = v___x_2993_;
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_a_3024_);
lean_dec(v___x_2993_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v___x_3029_; 
if (v_isShared_3027_ == 0)
{
v___x_3029_ = v___x_3026_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_a_3024_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
}
}
}
}
}
else
{
lean_object* v_goal_3033_; lean_object* v_mode_3034_; uint8_t v___x_3035_; 
v_goal_3033_ = lean_ctor_get(v_target_2988_, 0);
lean_inc_ref(v_goal_3033_);
lean_dec_ref_known(v_target_2988_, 1);
v_mode_3034_ = lean_ctor_get(v_a_2918_, 1);
v___x_3035_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(v_mode_3034_);
if (v___x_3035_ == 0)
{
lean_object* v___x_3036_; 
v___x_3036_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupGrindTarget___redArg(v_goal_3033_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_, v_a_2927_, v_a_2928_);
if (lean_obj_tag(v___x_3036_) == 0)
{
lean_object* v_a_3037_; lean_object* v_fst_3038_; lean_object* v_snd_3039_; 
v_a_3037_ = lean_ctor_get(v___x_3036_, 0);
lean_inc(v_a_3037_);
lean_dec_ref_known(v___x_3036_, 1);
v_fst_3038_ = lean_ctor_get(v_a_3037_, 0);
lean_inc(v_fst_3038_);
v_snd_3039_ = lean_ctor_get(v_a_3037_, 1);
lean_inc(v_snd_3039_);
lean_dec(v_a_3037_);
v_fst_2931_ = v_fst_3038_;
v_snd_2932_ = v_snd_3039_;
v___y_2933_ = v_a_2918_;
v___y_2934_ = v_a_2919_;
v___y_2935_ = v_a_2920_;
v___y_2936_ = v_a_2921_;
v___y_2937_ = v_a_2922_;
v___y_2938_ = v_a_2923_;
v___y_2939_ = v_a_2924_;
v___y_2940_ = v_a_2925_;
v___y_2941_ = v_a_2926_;
v___y_2942_ = v_a_2927_;
v___y_2943_ = v_a_2928_;
goto v___jp_2930_;
}
else
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3047_; 
v_a_3040_ = lean_ctor_get(v___x_3036_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v___x_3036_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3042_ = v___x_3036_;
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v___x_3036_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3045_; 
if (v_isShared_3043_ == 0)
{
v___x_3045_ = v___x_3042_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v_a_3040_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
}
}
else
{
lean_object* v___x_3048_; 
v___x_3048_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction___closed__0));
v_fst_2931_ = v___x_3048_;
v_snd_2932_ = v_goal_3033_;
v___y_2933_ = v_a_2918_;
v___y_2934_ = v_a_2919_;
v___y_2935_ = v_a_2920_;
v___y_2936_ = v_a_2921_;
v___y_2937_ = v_a_2922_;
v___y_2938_ = v_a_2923_;
v___y_2939_ = v_a_2924_;
v___y_2940_ = v_a_2925_;
v___y_2941_ = v_a_2926_;
v___y_2942_ = v_a_2927_;
v___y_2943_ = v_a_2928_;
goto v___jp_2930_;
}
}
v___jp_2930_:
{
lean_object* v_toGoalState_2944_; uint8_t v_inconsistent_2945_; 
v_toGoalState_2944_ = lean_ctor_get(v_snd_2932_, 0);
v_inconsistent_2945_ = lean_ctor_get_uint8(v_toGoalState_2944_, sizeof(void*)*17);
if (v_inconsistent_2945_ == 0)
{
lean_object* v_mvarId_2946_; lean_object* v_config_2947_; lean_object* v___f_2948_; lean_object* v___x_2949_; 
v_mvarId_2946_ = lean_ctor_get(v_snd_2932_, 1);
lean_inc(v_mvarId_2946_);
v_config_2947_ = lean_ctor_get(v___y_2933_, 0);
lean_inc_ref(v_config_2947_);
v___f_2948_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___lam__0___boxed), 13, 3);
lean_closure_set(v___f_2948_, 0, v_snd_2932_);
lean_closure_set(v___f_2948_, 1, v_config_2947_);
lean_closure_set(v___f_2948_, 2, v_fst_2931_);
v___x_2949_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__1___redArg(v_mvarId_2946_, v___f_2948_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_, v___y_2943_);
if (lean_obj_tag(v___x_2949_) == 0)
{
lean_object* v_a_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2975_; 
v_a_2950_ = lean_ctor_get(v___x_2949_, 0);
v_isSharedCheck_2975_ = !lean_is_exclusive(v___x_2949_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2952_ = v___x_2949_;
v_isShared_2953_ = v_isSharedCheck_2975_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_a_2950_);
lean_dec(v___x_2949_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2975_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v_fst_2954_; lean_object* v_snd_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v_caches_2958_; lean_object* v_typeAnalysis_2959_; lean_object* v_hypotheses_2960_; uint8_t v_didChange_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_2973_; 
v_fst_2954_ = lean_ctor_get(v_a_2950_, 0);
lean_inc(v_fst_2954_);
v_snd_2955_ = lean_ctor_get(v_a_2950_, 1);
lean_inc(v_snd_2955_);
lean_dec(v_a_2950_);
v___x_2956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2956_, 0, v_snd_2955_);
v___x_2957_ = lean_st_ref_take(v___y_2934_);
v_caches_2958_ = lean_ctor_get(v___x_2957_, 0);
v_typeAnalysis_2959_ = lean_ctor_get(v___x_2957_, 1);
v_hypotheses_2960_ = lean_ctor_get(v___x_2957_, 3);
v_didChange_2961_ = lean_ctor_get_uint8(v___x_2957_, sizeof(void*)*4);
v_isSharedCheck_2973_ = !lean_is_exclusive(v___x_2957_);
if (v_isSharedCheck_2973_ == 0)
{
lean_object* v_unused_2974_; 
v_unused_2974_ = lean_ctor_get(v___x_2957_, 2);
lean_dec(v_unused_2974_);
v___x_2963_ = v___x_2957_;
v_isShared_2964_ = v_isSharedCheck_2973_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_hypotheses_2960_);
lean_inc(v_typeAnalysis_2959_);
lean_inc(v_caches_2958_);
lean_dec(v___x_2957_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_2973_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v___x_2966_; 
if (v_isShared_2964_ == 0)
{
lean_ctor_set(v___x_2963_, 2, v___x_2956_);
v___x_2966_ = v___x_2963_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v_caches_2958_);
lean_ctor_set(v_reuseFailAlloc_2972_, 1, v_typeAnalysis_2959_);
lean_ctor_set(v_reuseFailAlloc_2972_, 2, v___x_2956_);
lean_ctor_set(v_reuseFailAlloc_2972_, 3, v_hypotheses_2960_);
lean_ctor_set_uint8(v_reuseFailAlloc_2972_, sizeof(void*)*4, v_didChange_2961_);
v___x_2966_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2970_; 
v___x_2967_ = lean_st_ref_put(v___y_2934_, v___x_2966_);
v___x_2968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2968_, 0, v_fst_2954_);
if (v_isShared_2953_ == 0)
{
lean_ctor_set(v___x_2952_, 0, v___x_2968_);
v___x_2970_ = v___x_2952_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v___x_2968_);
v___x_2970_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
return v___x_2970_;
}
}
}
}
}
else
{
lean_object* v_a_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_2983_; 
v_a_2976_ = lean_ctor_get(v___x_2949_, 0);
v_isSharedCheck_2983_ = !lean_is_exclusive(v___x_2949_);
if (v_isSharedCheck_2983_ == 0)
{
v___x_2978_ = v___x_2949_;
v_isShared_2979_ = v_isSharedCheck_2983_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_a_2976_);
lean_dec(v___x_2949_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_2983_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v___x_2981_; 
if (v_isShared_2979_ == 0)
{
v___x_2981_ = v___x_2978_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v_a_2976_);
v___x_2981_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
return v___x_2981_;
}
}
}
}
else
{
lean_object* v___x_2984_; lean_object* v___x_2985_; 
lean_dec_ref(v_snd_2932_);
lean_dec_ref(v_fst_2931_);
v___x_2984_ = lean_box(0);
v___x_2985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2985_, 0, v___x_2984_);
return v___x_2985_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget___boxed(lean_object* v_a_3049_, lean_object* v_a_3050_, lean_object* v_a_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_, lean_object* v_a_3055_, lean_object* v_a_3056_, lean_object* v_a_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_, lean_object* v_a_3060_){
_start:
{
lean_object* v_res_3061_; 
v_res_3061_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget(v_a_3049_, v_a_3050_, v_a_3051_, v_a_3052_, v_a_3053_, v_a_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_, v_a_3059_);
lean_dec(v_a_3059_);
lean_dec_ref(v_a_3058_);
lean_dec(v_a_3057_);
lean_dec_ref(v_a_3056_);
lean_dec(v_a_3055_);
lean_dec_ref(v_a_3054_);
lean_dec(v_a_3053_);
lean_dec_ref(v_a_3052_);
lean_dec(v_a_3051_);
lean_dec(v_a_3050_);
lean_dec_ref(v_a_3049_);
return v_res_3061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0_spec__0(lean_object* v_as_3062_, size_t v_i_3063_, size_t v_stop_3064_, lean_object* v_b_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_){
_start:
{
lean_object* v___x_3077_; 
v___x_3077_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0_spec__0___redArg(v_as_3062_, v_i_3063_, v_stop_3064_, v_b_3065_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
return v___x_3077_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0_spec__0___boxed(lean_object* v_as_3078_, lean_object* v_i_3079_, lean_object* v_stop_3080_, lean_object* v_b_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_){
_start:
{
size_t v_i_boxed_3093_; size_t v_stop_boxed_3094_; lean_object* v_res_3095_; 
v_i_boxed_3093_ = lean_unbox_usize(v_i_3079_);
lean_dec(v_i_3079_);
v_stop_boxed_3094_ = lean_unbox_usize(v_stop_3080_);
lean_dec(v_stop_3080_);
v_res_3095_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget_spec__0_spec__0(v_as_3078_, v_i_boxed_3093_, v_stop_boxed_3094_, v_b_3081_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_);
lean_dec(v___y_3091_);
lean_dec_ref(v___y_3090_);
lean_dec(v___y_3089_);
lean_dec_ref(v___y_3088_);
lean_dec(v___y_3087_);
lean_dec_ref(v___y_3086_);
lean_dec(v___y_3085_);
lean_dec_ref(v___y_3084_);
lean_dec(v___y_3083_);
lean_dec(v___y_3082_);
lean_dec_ref(v_as_3078_);
return v_res_3095_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___x_3096_ = lean_unsigned_to_nat(32u);
v___x_3097_ = lean_mk_empty_array_with_capacity(v___x_3096_);
v___x_3098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3098_, 0, v___x_3097_);
return v___x_3098_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
v___x_3099_ = ((size_t)5ULL);
v___x_3100_ = lean_unsigned_to_nat(0u);
v___x_3101_ = lean_unsigned_to_nat(32u);
v___x_3102_ = lean_mk_empty_array_with_capacity(v___x_3101_);
v___x_3103_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg___closed__0);
v___x_3104_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3104_, 0, v___x_3103_);
lean_ctor_set(v___x_3104_, 1, v___x_3102_);
lean_ctor_set(v___x_3104_, 2, v___x_3100_);
lean_ctor_set(v___x_3104_, 3, v___x_3100_);
lean_ctor_set_usize(v___x_3104_, 4, v___x_3099_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg(lean_object* v___y_3105_){
_start:
{
lean_object* v___x_3107_; lean_object* v_traceState_3108_; lean_object* v_traces_3109_; lean_object* v___x_3110_; lean_object* v_traceState_3111_; lean_object* v_env_3112_; lean_object* v_nextMacroScope_3113_; lean_object* v_ngen_3114_; lean_object* v_auxDeclNGen_3115_; lean_object* v_cache_3116_; lean_object* v_messages_3117_; lean_object* v_infoState_3118_; lean_object* v_snapshotTasks_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3138_; 
v___x_3107_ = lean_st_ref_get(v___y_3105_);
v_traceState_3108_ = lean_ctor_get(v___x_3107_, 4);
lean_inc_ref(v_traceState_3108_);
lean_dec(v___x_3107_);
v_traces_3109_ = lean_ctor_get(v_traceState_3108_, 0);
lean_inc_ref(v_traces_3109_);
lean_dec_ref(v_traceState_3108_);
v___x_3110_ = lean_st_ref_take(v___y_3105_);
v_traceState_3111_ = lean_ctor_get(v___x_3110_, 4);
v_env_3112_ = lean_ctor_get(v___x_3110_, 0);
v_nextMacroScope_3113_ = lean_ctor_get(v___x_3110_, 1);
v_ngen_3114_ = lean_ctor_get(v___x_3110_, 2);
v_auxDeclNGen_3115_ = lean_ctor_get(v___x_3110_, 3);
v_cache_3116_ = lean_ctor_get(v___x_3110_, 5);
v_messages_3117_ = lean_ctor_get(v___x_3110_, 6);
v_infoState_3118_ = lean_ctor_get(v___x_3110_, 7);
v_snapshotTasks_3119_ = lean_ctor_get(v___x_3110_, 8);
v_isSharedCheck_3138_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3138_ == 0)
{
v___x_3121_ = v___x_3110_;
v_isShared_3122_ = v_isSharedCheck_3138_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_snapshotTasks_3119_);
lean_inc(v_infoState_3118_);
lean_inc(v_messages_3117_);
lean_inc(v_cache_3116_);
lean_inc(v_traceState_3111_);
lean_inc(v_auxDeclNGen_3115_);
lean_inc(v_ngen_3114_);
lean_inc(v_nextMacroScope_3113_);
lean_inc(v_env_3112_);
lean_dec(v___x_3110_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3138_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
uint64_t v_tid_3123_; lean_object* v___x_3125_; uint8_t v_isShared_3126_; uint8_t v_isSharedCheck_3136_; 
v_tid_3123_ = lean_ctor_get_uint64(v_traceState_3111_, sizeof(void*)*1);
v_isSharedCheck_3136_ = !lean_is_exclusive(v_traceState_3111_);
if (v_isSharedCheck_3136_ == 0)
{
lean_object* v_unused_3137_; 
v_unused_3137_ = lean_ctor_get(v_traceState_3111_, 0);
lean_dec(v_unused_3137_);
v___x_3125_ = v_traceState_3111_;
v_isShared_3126_ = v_isSharedCheck_3136_;
goto v_resetjp_3124_;
}
else
{
lean_dec(v_traceState_3111_);
v___x_3125_ = lean_box(0);
v_isShared_3126_ = v_isSharedCheck_3136_;
goto v_resetjp_3124_;
}
v_resetjp_3124_:
{
lean_object* v___x_3127_; lean_object* v___x_3129_; 
v___x_3127_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg___closed__1);
if (v_isShared_3126_ == 0)
{
lean_ctor_set(v___x_3125_, 0, v___x_3127_);
v___x_3129_ = v___x_3125_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v___x_3127_);
lean_ctor_set_uint64(v_reuseFailAlloc_3135_, sizeof(void*)*1, v_tid_3123_);
v___x_3129_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
lean_object* v___x_3131_; 
if (v_isShared_3122_ == 0)
{
lean_ctor_set(v___x_3121_, 4, v___x_3129_);
v___x_3131_ = v___x_3121_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_env_3112_);
lean_ctor_set(v_reuseFailAlloc_3134_, 1, v_nextMacroScope_3113_);
lean_ctor_set(v_reuseFailAlloc_3134_, 2, v_ngen_3114_);
lean_ctor_set(v_reuseFailAlloc_3134_, 3, v_auxDeclNGen_3115_);
lean_ctor_set(v_reuseFailAlloc_3134_, 4, v___x_3129_);
lean_ctor_set(v_reuseFailAlloc_3134_, 5, v_cache_3116_);
lean_ctor_set(v_reuseFailAlloc_3134_, 6, v_messages_3117_);
lean_ctor_set(v_reuseFailAlloc_3134_, 7, v_infoState_3118_);
lean_ctor_set(v_reuseFailAlloc_3134_, 8, v_snapshotTasks_3119_);
v___x_3131_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; 
v___x_3132_ = lean_st_ref_put(v___y_3105_, v___x_3131_);
v___x_3133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3133_, 0, v_traces_3109_);
return v___x_3133_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg___boxed(lean_object* v___y_3139_, lean_object* v___y_3140_){
_start:
{
lean_object* v_res_3141_; 
v_res_3141_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg(v___y_3139_);
lean_dec(v___y_3139_);
return v_res_3141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2(lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_){
_start:
{
lean_object* v___x_3154_; 
v___x_3154_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg(v___y_3152_);
return v___x_3154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___boxed(lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_){
_start:
{
lean_object* v_res_3167_; 
v_res_3167_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2(v___y_3155_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_);
lean_dec(v___y_3165_);
lean_dec_ref(v___y_3164_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec(v___y_3156_);
lean_dec_ref(v___y_3155_);
return v_res_3167_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__3(lean_object* v_opts_3168_, lean_object* v_opt_3169_){
_start:
{
lean_object* v_name_3170_; lean_object* v_defValue_3171_; lean_object* v_map_3172_; lean_object* v___x_3173_; 
v_name_3170_ = lean_ctor_get(v_opt_3169_, 0);
v_defValue_3171_ = lean_ctor_get(v_opt_3169_, 1);
v_map_3172_ = lean_ctor_get(v_opts_3168_, 0);
v___x_3173_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3172_, v_name_3170_);
if (lean_obj_tag(v___x_3173_) == 0)
{
uint8_t v___x_3174_; 
v___x_3174_ = lean_unbox(v_defValue_3171_);
return v___x_3174_;
}
else
{
lean_object* v_val_3175_; 
v_val_3175_ = lean_ctor_get(v___x_3173_, 0);
lean_inc(v_val_3175_);
lean_dec_ref_known(v___x_3173_, 1);
if (lean_obj_tag(v_val_3175_) == 1)
{
uint8_t v_v_3176_; 
v_v_3176_ = lean_ctor_get_uint8(v_val_3175_, 0);
lean_dec_ref_known(v_val_3175_, 0);
return v_v_3176_;
}
else
{
uint8_t v___x_3177_; 
lean_dec(v_val_3175_);
v___x_3177_ = lean_unbox(v_defValue_3171_);
return v___x_3177_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__3___boxed(lean_object* v_opts_3178_, lean_object* v_opt_3179_){
_start:
{
uint8_t v_res_3180_; lean_object* v_r_3181_; 
v_res_3180_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__3(v_opts_3178_, v_opt_3179_);
lean_dec_ref(v_opt_3179_);
lean_dec_ref(v_opts_3178_);
v_r_3181_ = lean_box(v_res_3180_);
return v_r_3181_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3183_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0___closed__0));
v___x_3184_ = l_Lean_stringToMessageData(v___x_3183_);
return v___x_3184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0(lean_object* v_x_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_){
_start:
{
lean_object* v___x_3198_; lean_object* v___x_3199_; 
v___x_3198_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0___closed__1);
v___x_3199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3198_);
return v___x_3199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0___boxed(lean_object* v_x_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_){
_start:
{
lean_object* v_res_3213_; 
v_res_3213_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___lam__0(v_x_3200_, v___y_3201_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_);
lean_dec(v___y_3211_);
lean_dec_ref(v___y_3210_);
lean_dec(v___y_3209_);
lean_dec_ref(v___y_3208_);
lean_dec(v___y_3207_);
lean_dec_ref(v___y_3206_);
lean_dec(v___y_3205_);
lean_dec_ref(v___y_3204_);
lean_dec(v___y_3203_);
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec_ref(v_x_3200_);
return v_res_3213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__8(lean_object* v_opts_3214_, lean_object* v_opt_3215_){
_start:
{
lean_object* v_name_3216_; lean_object* v_defValue_3217_; lean_object* v_map_3218_; lean_object* v___x_3219_; 
v_name_3216_ = lean_ctor_get(v_opt_3215_, 0);
v_defValue_3217_ = lean_ctor_get(v_opt_3215_, 1);
v_map_3218_ = lean_ctor_get(v_opts_3214_, 0);
v___x_3219_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3218_, v_name_3216_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_inc(v_defValue_3217_);
return v_defValue_3217_;
}
else
{
lean_object* v_val_3220_; 
v_val_3220_ = lean_ctor_get(v___x_3219_, 0);
lean_inc(v_val_3220_);
lean_dec_ref_known(v___x_3219_, 1);
if (lean_obj_tag(v_val_3220_) == 3)
{
lean_object* v_v_3221_; 
v_v_3221_ = lean_ctor_get(v_val_3220_, 0);
lean_inc(v_v_3221_);
lean_dec_ref_known(v_val_3220_, 1);
return v_v_3221_;
}
else
{
lean_dec(v_val_3220_);
lean_inc(v_defValue_3217_);
return v_defValue_3217_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__8___boxed(lean_object* v_opts_3222_, lean_object* v_opt_3223_){
_start:
{
lean_object* v_res_3224_; 
v_res_3224_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__8(v_opts_3222_, v_opt_3223_);
lean_dec_ref(v_opt_3223_);
lean_dec_ref(v_opts_3222_);
return v_res_3224_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__7(lean_object* v_e_3225_){
_start:
{
if (lean_obj_tag(v_e_3225_) == 0)
{
uint8_t v___x_3226_; 
v___x_3226_ = 2;
return v___x_3226_;
}
else
{
uint8_t v___x_3227_; 
v___x_3227_ = 0;
return v___x_3227_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__7___boxed(lean_object* v_e_3228_){
_start:
{
uint8_t v_res_3229_; lean_object* v_r_3230_; 
v_res_3229_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__7(v_e_3228_);
lean_dec_ref(v_e_3228_);
v_r_3230_ = lean_box(v_res_3229_);
return v_r_3230_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5_spec__6(size_t v_sz_3231_, size_t v_i_3232_, lean_object* v_bs_3233_){
_start:
{
uint8_t v___x_3234_; 
v___x_3234_ = lean_usize_dec_lt(v_i_3232_, v_sz_3231_);
if (v___x_3234_ == 0)
{
lean_object* v___x_3235_; 
v___x_3235_ = l_unsafeCast___redArg(v_bs_3233_);
lean_dec_ref(v_bs_3233_);
return v___x_3235_;
}
else
{
lean_object* v_v_3236_; lean_object* v___x_3237_; lean_object* v_msg_3238_; lean_object* v___x_3239_; lean_object* v_bs_x27_3240_; size_t v___x_3241_; size_t v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; 
v_v_3236_ = lean_array_uget_borrowed(v_bs_3233_, v_i_3232_);
v___x_3237_ = l_unsafeCast___redArg(v_v_3236_);
v_msg_3238_ = lean_ctor_get(v___x_3237_, 1);
lean_inc_ref(v_msg_3238_);
lean_dec(v___x_3237_);
v___x_3239_ = lean_unsigned_to_nat(0u);
v_bs_x27_3240_ = lean_array_uset(v_bs_3233_, v_i_3232_, v___x_3239_);
v___x_3241_ = ((size_t)1ULL);
v___x_3242_ = lean_usize_add(v_i_3232_, v___x_3241_);
v___x_3243_ = l_unsafeCast___redArg(v_msg_3238_);
lean_dec_ref(v_msg_3238_);
v___x_3244_ = lean_array_uset(v_bs_x27_3240_, v_i_3232_, v___x_3243_);
v_i_3232_ = v___x_3242_;
v_bs_3233_ = v___x_3244_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5_spec__6___boxed(lean_object* v_sz_3246_, lean_object* v_i_3247_, lean_object* v_bs_3248_){
_start:
{
size_t v_sz_boxed_3249_; size_t v_i_boxed_3250_; lean_object* v_res_3251_; 
v_sz_boxed_3249_ = lean_unbox_usize(v_sz_3246_);
lean_dec(v_sz_3246_);
v_i_boxed_3250_ = lean_unbox_usize(v_i_3247_);
lean_dec(v_i_3247_);
v_res_3251_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5_spec__6(v_sz_boxed_3249_, v_i_boxed_3250_, v_bs_3248_);
return v_res_3251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5___redArg(lean_object* v_oldTraces_3252_, lean_object* v_data_3253_, lean_object* v_ref_3254_, lean_object* v_msg_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_){
_start:
{
lean_object* v_toCold_3261_; lean_object* v_currRecDepth_3262_; lean_object* v_ref_3263_; uint8_t v_diag_3264_; uint8_t v_suppressElabErrors_3265_; lean_object* v_ref_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v_traceState_3269_; lean_object* v_traces_3270_; lean_object* v___x_3271_; size_t v_sz_3272_; size_t v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v_msg_3277_; lean_object* v___x_3278_; lean_object* v_a_3279_; lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3316_; 
v_toCold_3261_ = lean_ctor_get(v___y_3258_, 0);
v_currRecDepth_3262_ = lean_ctor_get(v___y_3258_, 1);
v_ref_3263_ = lean_ctor_get(v___y_3258_, 2);
v_diag_3264_ = lean_ctor_get_uint8(v___y_3258_, sizeof(void*)*3);
v_suppressElabErrors_3265_ = lean_ctor_get_uint8(v___y_3258_, sizeof(void*)*3 + 1);
v_ref_3266_ = l_Lean_replaceRef(v_ref_3254_, v_ref_3263_);
lean_inc(v_currRecDepth_3262_);
lean_inc_ref(v_toCold_3261_);
v___x_3267_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3267_, 0, v_toCold_3261_);
lean_ctor_set(v___x_3267_, 1, v_currRecDepth_3262_);
lean_ctor_set(v___x_3267_, 2, v_ref_3266_);
lean_ctor_set_uint8(v___x_3267_, sizeof(void*)*3, v_diag_3264_);
lean_ctor_set_uint8(v___x_3267_, sizeof(void*)*3 + 1, v_suppressElabErrors_3265_);
v___x_3268_ = lean_st_ref_get(v___y_3259_);
v_traceState_3269_ = lean_ctor_get(v___x_3268_, 4);
lean_inc_ref(v_traceState_3269_);
lean_dec(v___x_3268_);
v_traces_3270_ = lean_ctor_get(v_traceState_3269_, 0);
lean_inc_ref(v_traces_3270_);
lean_dec_ref(v_traceState_3269_);
v___x_3271_ = l_Lean_PersistentArray_toArray___redArg(v_traces_3270_);
lean_dec_ref(v_traces_3270_);
v_sz_3272_ = lean_array_size(v___x_3271_);
v___x_3273_ = ((size_t)0ULL);
v___x_3274_ = l_unsafeCast___redArg(v___x_3271_);
lean_dec_ref(v___x_3271_);
v___x_3275_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5_spec__6(v_sz_3272_, v___x_3273_, v___x_3274_);
v___x_3276_ = l_unsafeCast___redArg(v___x_3275_);
lean_dec_ref(v___x_3275_);
v_msg_3277_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_3277_, 0, v_data_3253_);
lean_ctor_set(v_msg_3277_, 1, v_msg_3255_);
lean_ctor_set(v_msg_3277_, 2, v___x_3276_);
v___x_3278_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0_spec__0(v_msg_3277_, v___y_3256_, v___y_3257_, v___x_3267_, v___y_3259_);
lean_dec_ref_known(v___x_3267_, 3);
v_a_3279_ = lean_ctor_get(v___x_3278_, 0);
v_isSharedCheck_3316_ = !lean_is_exclusive(v___x_3278_);
if (v_isSharedCheck_3316_ == 0)
{
v___x_3281_ = v___x_3278_;
v_isShared_3282_ = v_isSharedCheck_3316_;
goto v_resetjp_3280_;
}
else
{
lean_inc(v_a_3279_);
lean_dec(v___x_3278_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3316_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v___x_3283_; lean_object* v_traceState_3284_; lean_object* v_env_3285_; lean_object* v_nextMacroScope_3286_; lean_object* v_ngen_3287_; lean_object* v_auxDeclNGen_3288_; lean_object* v_cache_3289_; lean_object* v_messages_3290_; lean_object* v_infoState_3291_; lean_object* v_snapshotTasks_3292_; lean_object* v___x_3294_; uint8_t v_isShared_3295_; uint8_t v_isSharedCheck_3315_; 
v___x_3283_ = lean_st_ref_take(v___y_3259_);
v_traceState_3284_ = lean_ctor_get(v___x_3283_, 4);
v_env_3285_ = lean_ctor_get(v___x_3283_, 0);
v_nextMacroScope_3286_ = lean_ctor_get(v___x_3283_, 1);
v_ngen_3287_ = lean_ctor_get(v___x_3283_, 2);
v_auxDeclNGen_3288_ = lean_ctor_get(v___x_3283_, 3);
v_cache_3289_ = lean_ctor_get(v___x_3283_, 5);
v_messages_3290_ = lean_ctor_get(v___x_3283_, 6);
v_infoState_3291_ = lean_ctor_get(v___x_3283_, 7);
v_snapshotTasks_3292_ = lean_ctor_get(v___x_3283_, 8);
v_isSharedCheck_3315_ = !lean_is_exclusive(v___x_3283_);
if (v_isSharedCheck_3315_ == 0)
{
v___x_3294_ = v___x_3283_;
v_isShared_3295_ = v_isSharedCheck_3315_;
goto v_resetjp_3293_;
}
else
{
lean_inc(v_snapshotTasks_3292_);
lean_inc(v_infoState_3291_);
lean_inc(v_messages_3290_);
lean_inc(v_cache_3289_);
lean_inc(v_traceState_3284_);
lean_inc(v_auxDeclNGen_3288_);
lean_inc(v_ngen_3287_);
lean_inc(v_nextMacroScope_3286_);
lean_inc(v_env_3285_);
lean_dec(v___x_3283_);
v___x_3294_ = lean_box(0);
v_isShared_3295_ = v_isSharedCheck_3315_;
goto v_resetjp_3293_;
}
v_resetjp_3293_:
{
uint64_t v_tid_3296_; lean_object* v___x_3298_; uint8_t v_isShared_3299_; uint8_t v_isSharedCheck_3313_; 
v_tid_3296_ = lean_ctor_get_uint64(v_traceState_3284_, sizeof(void*)*1);
v_isSharedCheck_3313_ = !lean_is_exclusive(v_traceState_3284_);
if (v_isSharedCheck_3313_ == 0)
{
lean_object* v_unused_3314_; 
v_unused_3314_ = lean_ctor_get(v_traceState_3284_, 0);
lean_dec(v_unused_3314_);
v___x_3298_ = v_traceState_3284_;
v_isShared_3299_ = v_isSharedCheck_3313_;
goto v_resetjp_3297_;
}
else
{
lean_dec(v_traceState_3284_);
v___x_3298_ = lean_box(0);
v_isShared_3299_ = v_isSharedCheck_3313_;
goto v_resetjp_3297_;
}
v_resetjp_3297_:
{
lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3304_; 
v___x_3300_ = lean_box(0);
v___x_3301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3301_, 0, v_ref_3254_);
lean_ctor_set(v___x_3301_, 1, v_a_3279_);
v___x_3302_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_3252_, v___x_3301_);
if (v_isShared_3299_ == 0)
{
lean_ctor_set(v___x_3298_, 0, v___x_3302_);
v___x_3304_ = v___x_3298_;
goto v_reusejp_3303_;
}
else
{
lean_object* v_reuseFailAlloc_3312_; 
v_reuseFailAlloc_3312_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3312_, 0, v___x_3302_);
lean_ctor_set_uint64(v_reuseFailAlloc_3312_, sizeof(void*)*1, v_tid_3296_);
v___x_3304_ = v_reuseFailAlloc_3312_;
goto v_reusejp_3303_;
}
v_reusejp_3303_:
{
lean_object* v___x_3306_; 
if (v_isShared_3295_ == 0)
{
lean_ctor_set(v___x_3294_, 4, v___x_3304_);
v___x_3306_ = v___x_3294_;
goto v_reusejp_3305_;
}
else
{
lean_object* v_reuseFailAlloc_3311_; 
v_reuseFailAlloc_3311_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3311_, 0, v_env_3285_);
lean_ctor_set(v_reuseFailAlloc_3311_, 1, v_nextMacroScope_3286_);
lean_ctor_set(v_reuseFailAlloc_3311_, 2, v_ngen_3287_);
lean_ctor_set(v_reuseFailAlloc_3311_, 3, v_auxDeclNGen_3288_);
lean_ctor_set(v_reuseFailAlloc_3311_, 4, v___x_3304_);
lean_ctor_set(v_reuseFailAlloc_3311_, 5, v_cache_3289_);
lean_ctor_set(v_reuseFailAlloc_3311_, 6, v_messages_3290_);
lean_ctor_set(v_reuseFailAlloc_3311_, 7, v_infoState_3291_);
lean_ctor_set(v_reuseFailAlloc_3311_, 8, v_snapshotTasks_3292_);
v___x_3306_ = v_reuseFailAlloc_3311_;
goto v_reusejp_3305_;
}
v_reusejp_3305_:
{
lean_object* v___x_3307_; lean_object* v___x_3309_; 
v___x_3307_ = lean_st_ref_put(v___y_3259_, v___x_3306_);
if (v_isShared_3282_ == 0)
{
lean_ctor_set(v___x_3281_, 0, v___x_3300_);
v___x_3309_ = v___x_3281_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v___x_3300_);
v___x_3309_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
return v___x_3309_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5___redArg___boxed(lean_object* v_oldTraces_3317_, lean_object* v_data_3318_, lean_object* v_ref_3319_, lean_object* v_msg_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_){
_start:
{
lean_object* v_res_3326_; 
v_res_3326_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5___redArg(v_oldTraces_3317_, v_data_3318_, v_ref_3319_, v_msg_3320_, v___y_3321_, v___y_3322_, v___y_3323_, v___y_3324_);
lean_dec(v___y_3324_);
lean_dec_ref(v___y_3323_);
lean_dec(v___y_3322_);
lean_dec_ref(v___y_3321_);
return v_res_3326_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__6___redArg(lean_object* v_x_3327_){
_start:
{
if (lean_obj_tag(v_x_3327_) == 0)
{
lean_object* v_a_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3336_; 
v_a_3329_ = lean_ctor_get(v_x_3327_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v_x_3327_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3331_ = v_x_3327_;
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_a_3329_);
lean_dec(v_x_3327_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___x_3334_; 
if (v_isShared_3332_ == 0)
{
lean_ctor_set_tag(v___x_3331_, 1);
v___x_3334_ = v___x_3331_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_a_3329_);
v___x_3334_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
return v___x_3334_;
}
}
}
else
{
lean_object* v_a_3337_; lean_object* v___x_3339_; uint8_t v_isShared_3340_; uint8_t v_isSharedCheck_3344_; 
v_a_3337_ = lean_ctor_get(v_x_3327_, 0);
v_isSharedCheck_3344_ = !lean_is_exclusive(v_x_3327_);
if (v_isSharedCheck_3344_ == 0)
{
v___x_3339_ = v_x_3327_;
v_isShared_3340_ = v_isSharedCheck_3344_;
goto v_resetjp_3338_;
}
else
{
lean_inc(v_a_3337_);
lean_dec(v_x_3327_);
v___x_3339_ = lean_box(0);
v_isShared_3340_ = v_isSharedCheck_3344_;
goto v_resetjp_3338_;
}
v_resetjp_3338_:
{
lean_object* v___x_3342_; 
if (v_isShared_3340_ == 0)
{
lean_ctor_set_tag(v___x_3339_, 0);
v___x_3342_ = v___x_3339_;
goto v_reusejp_3341_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v_a_3337_);
v___x_3342_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3341_;
}
v_reusejp_3341_:
{
return v___x_3342_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__6___redArg___boxed(lean_object* v_x_3345_, lean_object* v___y_3346_){
_start:
{
lean_object* v_res_3347_; 
v_res_3347_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__6___redArg(v_x_3345_);
return v_res_3347_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__0(void){
_start:
{
lean_object* v___x_3348_; double v___x_3349_; 
v___x_3348_ = lean_unsigned_to_nat(0u);
v___x_3349_ = lean_float_of_nat(v___x_3348_);
return v___x_3349_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__2(void){
_start:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; 
v___x_3351_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__1));
v___x_3352_ = l_Lean_stringToMessageData(v___x_3351_);
return v___x_3352_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__3(void){
_start:
{
lean_object* v___x_3353_; double v___x_3354_; 
v___x_3353_ = lean_unsigned_to_nat(1000u);
v___x_3354_ = lean_float_of_nat(v___x_3353_);
return v___x_3354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4(lean_object* v_cls_3355_, uint8_t v_collapsed_3356_, lean_object* v_tag_3357_, lean_object* v_opts_3358_, uint8_t v_clsEnabled_3359_, lean_object* v_oldTraces_3360_, lean_object* v_msg_3361_, lean_object* v_resStartStop_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_){
_start:
{
lean_object* v_fst_3375_; lean_object* v_snd_3376_; lean_object* v___y_3378_; lean_object* v___y_3379_; lean_object* v_data_3380_; lean_object* v_fst_3383_; lean_object* v_snd_3384_; lean_object* v___x_3385_; uint8_t v___x_3386_; lean_object* v___y_3388_; lean_object* v_a_3389_; uint8_t v___y_3404_; double v___y_3435_; 
v_fst_3375_ = lean_ctor_get(v_resStartStop_3362_, 0);
lean_inc(v_fst_3375_);
v_snd_3376_ = lean_ctor_get(v_resStartStop_3362_, 1);
lean_inc(v_snd_3376_);
lean_dec_ref(v_resStartStop_3362_);
v_fst_3383_ = lean_ctor_get(v_snd_3376_, 0);
lean_inc(v_fst_3383_);
v_snd_3384_ = lean_ctor_get(v_snd_3376_, 1);
lean_inc(v_snd_3384_);
lean_dec(v_snd_3376_);
v___x_3385_ = l_Lean_trace_profiler;
v___x_3386_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__3(v_opts_3358_, v___x_3385_);
if (v___x_3386_ == 0)
{
v___y_3404_ = v___x_3386_;
goto v___jp_3403_;
}
else
{
lean_object* v___x_3440_; uint8_t v___x_3441_; 
v___x_3440_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3441_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__3(v_opts_3358_, v___x_3440_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3442_; lean_object* v___x_3443_; double v___x_3444_; double v___x_3445_; double v___x_3446_; 
v___x_3442_ = l_Lean_trace_profiler_threshold;
v___x_3443_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__8(v_opts_3358_, v___x_3442_);
v___x_3444_ = lean_float_of_nat(v___x_3443_);
v___x_3445_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__3);
v___x_3446_ = lean_float_div(v___x_3444_, v___x_3445_);
v___y_3435_ = v___x_3446_;
goto v___jp_3434_;
}
else
{
lean_object* v___x_3447_; lean_object* v___x_3448_; double v___x_3449_; 
v___x_3447_ = l_Lean_trace_profiler_threshold;
v___x_3448_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__8(v_opts_3358_, v___x_3447_);
v___x_3449_ = lean_float_of_nat(v___x_3448_);
v___y_3435_ = v___x_3449_;
goto v___jp_3434_;
}
}
v___jp_3377_:
{
lean_object* v___x_3381_; 
lean_inc(v___y_3378_);
v___x_3381_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5___redArg(v_oldTraces_3360_, v_data_3380_, v___y_3378_, v___y_3379_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_);
if (lean_obj_tag(v___x_3381_) == 0)
{
lean_object* v___x_3382_; 
lean_dec_ref_known(v___x_3381_, 1);
v___x_3382_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__6___redArg(v_fst_3375_);
return v___x_3382_;
}
else
{
lean_dec(v_fst_3375_);
return v___x_3381_;
}
}
v___jp_3387_:
{
uint8_t v_result_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; double v___x_3393_; lean_object* v_data_3394_; 
v_result_3390_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__7(v_fst_3375_);
v___x_3391_ = lean_box(v_result_3390_);
v___x_3392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3392_, 0, v___x_3391_);
v___x_3393_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__0);
lean_inc_ref(v_tag_3357_);
lean_inc_ref(v___x_3392_);
lean_inc(v_cls_3355_);
v_data_3394_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3394_, 0, v_cls_3355_);
lean_ctor_set(v_data_3394_, 1, v___x_3392_);
lean_ctor_set(v_data_3394_, 2, v_tag_3357_);
lean_ctor_set_float(v_data_3394_, sizeof(void*)*3, v___x_3393_);
lean_ctor_set_float(v_data_3394_, sizeof(void*)*3 + 8, v___x_3393_);
lean_ctor_set_uint8(v_data_3394_, sizeof(void*)*3 + 16, v_collapsed_3356_);
if (v___x_3386_ == 0)
{
lean_dec_ref_known(v___x_3392_, 1);
lean_dec(v_snd_3384_);
lean_dec(v_fst_3383_);
lean_dec_ref(v_tag_3357_);
lean_dec(v_cls_3355_);
v___y_3378_ = v___y_3388_;
v___y_3379_ = v_a_3389_;
v_data_3380_ = v_data_3394_;
goto v___jp_3377_;
}
else
{
lean_object* v_data_3395_; double v___x_3396_; double v___x_3397_; 
lean_dec_ref_known(v_data_3394_, 3);
v_data_3395_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3395_, 0, v_cls_3355_);
lean_ctor_set(v_data_3395_, 1, v___x_3392_);
lean_ctor_set(v_data_3395_, 2, v_tag_3357_);
v___x_3396_ = lean_unbox_float(v_fst_3383_);
lean_dec(v_fst_3383_);
lean_ctor_set_float(v_data_3395_, sizeof(void*)*3, v___x_3396_);
v___x_3397_ = lean_unbox_float(v_snd_3384_);
lean_dec(v_snd_3384_);
lean_ctor_set_float(v_data_3395_, sizeof(void*)*3 + 8, v___x_3397_);
lean_ctor_set_uint8(v_data_3395_, sizeof(void*)*3 + 16, v_collapsed_3356_);
v___y_3378_ = v___y_3388_;
v___y_3379_ = v_a_3389_;
v_data_3380_ = v_data_3395_;
goto v___jp_3377_;
}
}
v___jp_3398_:
{
lean_object* v_ref_3399_; lean_object* v___x_3400_; 
v_ref_3399_ = lean_ctor_get(v___y_3372_, 2);
lean_inc(v___y_3373_);
lean_inc_ref(v___y_3372_);
lean_inc(v___y_3371_);
lean_inc_ref(v___y_3370_);
lean_inc(v___y_3369_);
lean_inc_ref(v___y_3368_);
lean_inc(v___y_3367_);
lean_inc_ref(v___y_3366_);
lean_inc(v___y_3365_);
lean_inc(v___y_3364_);
lean_inc_ref(v___y_3363_);
lean_inc(v_fst_3375_);
v___x_3400_ = lean_apply_13(v_msg_3361_, v_fst_3375_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, lean_box(0));
if (lean_obj_tag(v___x_3400_) == 0)
{
lean_object* v_a_3401_; 
v_a_3401_ = lean_ctor_get(v___x_3400_, 0);
lean_inc(v_a_3401_);
lean_dec_ref_known(v___x_3400_, 1);
v___y_3388_ = v_ref_3399_;
v_a_3389_ = v_a_3401_;
goto v___jp_3387_;
}
else
{
lean_object* v___x_3402_; 
lean_dec_ref_known(v___x_3400_, 1);
v___x_3402_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__2);
v___y_3388_ = v_ref_3399_;
v_a_3389_ = v___x_3402_;
goto v___jp_3387_;
}
}
v___jp_3403_:
{
if (v_clsEnabled_3359_ == 0)
{
if (v___y_3404_ == 0)
{
lean_object* v___x_3405_; lean_object* v_traceState_3406_; lean_object* v_env_3407_; lean_object* v_nextMacroScope_3408_; lean_object* v_ngen_3409_; lean_object* v_auxDeclNGen_3410_; lean_object* v_cache_3411_; lean_object* v_messages_3412_; lean_object* v_infoState_3413_; lean_object* v_snapshotTasks_3414_; lean_object* v___x_3416_; uint8_t v_isShared_3417_; uint8_t v_isSharedCheck_3433_; 
lean_dec(v_snd_3384_);
lean_dec(v_fst_3383_);
lean_dec_ref(v_msg_3361_);
lean_dec_ref(v_tag_3357_);
lean_dec(v_cls_3355_);
v___x_3405_ = lean_st_ref_take(v___y_3373_);
v_traceState_3406_ = lean_ctor_get(v___x_3405_, 4);
v_env_3407_ = lean_ctor_get(v___x_3405_, 0);
v_nextMacroScope_3408_ = lean_ctor_get(v___x_3405_, 1);
v_ngen_3409_ = lean_ctor_get(v___x_3405_, 2);
v_auxDeclNGen_3410_ = lean_ctor_get(v___x_3405_, 3);
v_cache_3411_ = lean_ctor_get(v___x_3405_, 5);
v_messages_3412_ = lean_ctor_get(v___x_3405_, 6);
v_infoState_3413_ = lean_ctor_get(v___x_3405_, 7);
v_snapshotTasks_3414_ = lean_ctor_get(v___x_3405_, 8);
v_isSharedCheck_3433_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3433_ == 0)
{
v___x_3416_ = v___x_3405_;
v_isShared_3417_ = v_isSharedCheck_3433_;
goto v_resetjp_3415_;
}
else
{
lean_inc(v_snapshotTasks_3414_);
lean_inc(v_infoState_3413_);
lean_inc(v_messages_3412_);
lean_inc(v_cache_3411_);
lean_inc(v_traceState_3406_);
lean_inc(v_auxDeclNGen_3410_);
lean_inc(v_ngen_3409_);
lean_inc(v_nextMacroScope_3408_);
lean_inc(v_env_3407_);
lean_dec(v___x_3405_);
v___x_3416_ = lean_box(0);
v_isShared_3417_ = v_isSharedCheck_3433_;
goto v_resetjp_3415_;
}
v_resetjp_3415_:
{
uint64_t v_tid_3418_; lean_object* v_traces_3419_; lean_object* v___x_3421_; uint8_t v_isShared_3422_; uint8_t v_isSharedCheck_3432_; 
v_tid_3418_ = lean_ctor_get_uint64(v_traceState_3406_, sizeof(void*)*1);
v_traces_3419_ = lean_ctor_get(v_traceState_3406_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v_traceState_3406_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3421_ = v_traceState_3406_;
v_isShared_3422_ = v_isSharedCheck_3432_;
goto v_resetjp_3420_;
}
else
{
lean_inc(v_traces_3419_);
lean_dec(v_traceState_3406_);
v___x_3421_ = lean_box(0);
v_isShared_3422_ = v_isSharedCheck_3432_;
goto v_resetjp_3420_;
}
v_resetjp_3420_:
{
lean_object* v___x_3423_; lean_object* v___x_3425_; 
v___x_3423_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_3360_, v_traces_3419_);
lean_dec_ref(v_traces_3419_);
if (v_isShared_3422_ == 0)
{
lean_ctor_set(v___x_3421_, 0, v___x_3423_);
v___x_3425_ = v___x_3421_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v___x_3423_);
lean_ctor_set_uint64(v_reuseFailAlloc_3431_, sizeof(void*)*1, v_tid_3418_);
v___x_3425_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
lean_object* v___x_3427_; 
if (v_isShared_3417_ == 0)
{
lean_ctor_set(v___x_3416_, 4, v___x_3425_);
v___x_3427_ = v___x_3416_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3430_; 
v_reuseFailAlloc_3430_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3430_, 0, v_env_3407_);
lean_ctor_set(v_reuseFailAlloc_3430_, 1, v_nextMacroScope_3408_);
lean_ctor_set(v_reuseFailAlloc_3430_, 2, v_ngen_3409_);
lean_ctor_set(v_reuseFailAlloc_3430_, 3, v_auxDeclNGen_3410_);
lean_ctor_set(v_reuseFailAlloc_3430_, 4, v___x_3425_);
lean_ctor_set(v_reuseFailAlloc_3430_, 5, v_cache_3411_);
lean_ctor_set(v_reuseFailAlloc_3430_, 6, v_messages_3412_);
lean_ctor_set(v_reuseFailAlloc_3430_, 7, v_infoState_3413_);
lean_ctor_set(v_reuseFailAlloc_3430_, 8, v_snapshotTasks_3414_);
v___x_3427_ = v_reuseFailAlloc_3430_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___x_3428_ = lean_st_ref_put(v___y_3373_, v___x_3427_);
v___x_3429_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__6___redArg(v_fst_3375_);
return v___x_3429_;
}
}
}
}
}
else
{
goto v___jp_3398_;
}
}
else
{
goto v___jp_3398_;
}
}
v___jp_3434_:
{
double v___x_3436_; double v___x_3437_; double v___x_3438_; uint8_t v___x_3439_; 
v___x_3436_ = lean_unbox_float(v_snd_3384_);
v___x_3437_ = lean_unbox_float(v_fst_3383_);
v___x_3438_ = lean_float_sub(v___x_3436_, v___x_3437_);
v___x_3439_ = lean_float_decLt(v___y_3435_, v___x_3438_);
v___y_3404_ = v___x_3439_;
goto v___jp_3403_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___boxed(lean_object** _args){
lean_object* v_cls_3450_ = _args[0];
lean_object* v_collapsed_3451_ = _args[1];
lean_object* v_tag_3452_ = _args[2];
lean_object* v_opts_3453_ = _args[3];
lean_object* v_clsEnabled_3454_ = _args[4];
lean_object* v_oldTraces_3455_ = _args[5];
lean_object* v_msg_3456_ = _args[6];
lean_object* v_resStartStop_3457_ = _args[7];
lean_object* v___y_3458_ = _args[8];
lean_object* v___y_3459_ = _args[9];
lean_object* v___y_3460_ = _args[10];
lean_object* v___y_3461_ = _args[11];
lean_object* v___y_3462_ = _args[12];
lean_object* v___y_3463_ = _args[13];
lean_object* v___y_3464_ = _args[14];
lean_object* v___y_3465_ = _args[15];
lean_object* v___y_3466_ = _args[16];
lean_object* v___y_3467_ = _args[17];
lean_object* v___y_3468_ = _args[18];
lean_object* v___y_3469_ = _args[19];
_start:
{
uint8_t v_collapsed_boxed_3470_; uint8_t v_clsEnabled_boxed_3471_; lean_object* v_res_3472_; 
v_collapsed_boxed_3470_ = lean_unbox(v_collapsed_3451_);
v_clsEnabled_boxed_3471_ = lean_unbox(v_clsEnabled_3454_);
v_res_3472_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4(v_cls_3450_, v_collapsed_boxed_3470_, v_tag_3452_, v_opts_3453_, v_clsEnabled_boxed_3471_, v_oldTraces_3455_, v_msg_3456_, v_resStartStop_3457_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_);
lean_dec(v___y_3468_);
lean_dec_ref(v___y_3467_);
lean_dec(v___y_3466_);
lean_dec_ref(v___y_3465_);
lean_dec(v___y_3464_);
lean_dec_ref(v___y_3463_);
lean_dec(v___y_3462_);
lean_dec_ref(v___y_3461_);
lean_dec(v___y_3460_);
lean_dec(v___y_3459_);
lean_dec_ref(v___y_3458_);
lean_dec_ref(v_opts_3453_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg(lean_object* v_cls_3476_, lean_object* v_msg_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_){
_start:
{
lean_object* v_ref_3483_; lean_object* v___x_3484_; lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3529_; 
v_ref_3483_ = lean_ctor_get(v___y_3480_, 2);
v___x_3484_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_symByContradiction_spec__0_spec__0(v_msg_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_);
v_a_3485_ = lean_ctor_get(v___x_3484_, 0);
v_isSharedCheck_3529_ = !lean_is_exclusive(v___x_3484_);
if (v_isSharedCheck_3529_ == 0)
{
v___x_3487_ = v___x_3484_;
v_isShared_3488_ = v_isSharedCheck_3529_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_dec(v___x_3484_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3529_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3489_; lean_object* v_traceState_3490_; lean_object* v_env_3491_; lean_object* v_nextMacroScope_3492_; lean_object* v_ngen_3493_; lean_object* v_auxDeclNGen_3494_; lean_object* v_cache_3495_; lean_object* v_messages_3496_; lean_object* v_infoState_3497_; lean_object* v_snapshotTasks_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3528_; 
v___x_3489_ = lean_st_ref_take(v___y_3481_);
v_traceState_3490_ = lean_ctor_get(v___x_3489_, 4);
v_env_3491_ = lean_ctor_get(v___x_3489_, 0);
v_nextMacroScope_3492_ = lean_ctor_get(v___x_3489_, 1);
v_ngen_3493_ = lean_ctor_get(v___x_3489_, 2);
v_auxDeclNGen_3494_ = lean_ctor_get(v___x_3489_, 3);
v_cache_3495_ = lean_ctor_get(v___x_3489_, 5);
v_messages_3496_ = lean_ctor_get(v___x_3489_, 6);
v_infoState_3497_ = lean_ctor_get(v___x_3489_, 7);
v_snapshotTasks_3498_ = lean_ctor_get(v___x_3489_, 8);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3500_ = v___x_3489_;
v_isShared_3501_ = v_isSharedCheck_3528_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_snapshotTasks_3498_);
lean_inc(v_infoState_3497_);
lean_inc(v_messages_3496_);
lean_inc(v_cache_3495_);
lean_inc(v_traceState_3490_);
lean_inc(v_auxDeclNGen_3494_);
lean_inc(v_ngen_3493_);
lean_inc(v_nextMacroScope_3492_);
lean_inc(v_env_3491_);
lean_dec(v___x_3489_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3528_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
uint64_t v_tid_3502_; lean_object* v_traces_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3527_; 
v_tid_3502_ = lean_ctor_get_uint64(v_traceState_3490_, sizeof(void*)*1);
v_traces_3503_ = lean_ctor_get(v_traceState_3490_, 0);
v_isSharedCheck_3527_ = !lean_is_exclusive(v_traceState_3490_);
if (v_isSharedCheck_3527_ == 0)
{
v___x_3505_ = v_traceState_3490_;
v_isShared_3506_ = v_isSharedCheck_3527_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_traces_3503_);
lean_dec(v_traceState_3490_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3527_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; double v___x_3509_; uint8_t v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3518_; 
v___x_3507_ = lean_box(0);
v___x_3508_ = lean_box(0);
v___x_3509_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4___closed__0);
v___x_3510_ = 0;
v___x_3511_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg___closed__0));
v___x_3512_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3512_, 0, v_cls_3476_);
lean_ctor_set(v___x_3512_, 1, v___x_3508_);
lean_ctor_set(v___x_3512_, 2, v___x_3511_);
lean_ctor_set_float(v___x_3512_, sizeof(void*)*3, v___x_3509_);
lean_ctor_set_float(v___x_3512_, sizeof(void*)*3 + 8, v___x_3509_);
lean_ctor_set_uint8(v___x_3512_, sizeof(void*)*3 + 16, v___x_3510_);
v___x_3513_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg___closed__1));
v___x_3514_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3514_, 0, v___x_3512_);
lean_ctor_set(v___x_3514_, 1, v_a_3485_);
lean_ctor_set(v___x_3514_, 2, v___x_3513_);
lean_inc(v_ref_3483_);
v___x_3515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3515_, 0, v_ref_3483_);
lean_ctor_set(v___x_3515_, 1, v___x_3514_);
v___x_3516_ = l_Lean_PersistentArray_push___redArg(v_traces_3503_, v___x_3515_);
if (v_isShared_3506_ == 0)
{
lean_ctor_set(v___x_3505_, 0, v___x_3516_);
v___x_3518_ = v___x_3505_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v___x_3516_);
lean_ctor_set_uint64(v_reuseFailAlloc_3526_, sizeof(void*)*1, v_tid_3502_);
v___x_3518_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
lean_object* v___x_3520_; 
if (v_isShared_3501_ == 0)
{
lean_ctor_set(v___x_3500_, 4, v___x_3518_);
v___x_3520_ = v___x_3500_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v_env_3491_);
lean_ctor_set(v_reuseFailAlloc_3525_, 1, v_nextMacroScope_3492_);
lean_ctor_set(v_reuseFailAlloc_3525_, 2, v_ngen_3493_);
lean_ctor_set(v_reuseFailAlloc_3525_, 3, v_auxDeclNGen_3494_);
lean_ctor_set(v_reuseFailAlloc_3525_, 4, v___x_3518_);
lean_ctor_set(v_reuseFailAlloc_3525_, 5, v_cache_3495_);
lean_ctor_set(v_reuseFailAlloc_3525_, 6, v_messages_3496_);
lean_ctor_set(v_reuseFailAlloc_3525_, 7, v_infoState_3497_);
lean_ctor_set(v_reuseFailAlloc_3525_, 8, v_snapshotTasks_3498_);
v___x_3520_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
lean_object* v___x_3521_; lean_object* v___x_3523_; 
v___x_3521_ = lean_st_ref_put(v___y_3481_, v___x_3520_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 0, v___x_3507_);
v___x_3523_ = v___x_3487_;
goto v_reusejp_3522_;
}
else
{
lean_object* v_reuseFailAlloc_3524_; 
v_reuseFailAlloc_3524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3524_, 0, v___x_3507_);
v___x_3523_ = v_reuseFailAlloc_3524_;
goto v_reusejp_3522_;
}
v_reusejp_3522_:
{
return v___x_3523_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg___boxed(lean_object* v_cls_3530_, lean_object* v_msg_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_){
_start:
{
lean_object* v_res_3537_; 
v_res_3537_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg(v_cls_3530_, v_msg_3531_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_);
lean_dec(v___y_3535_);
lean_dec_ref(v___y_3534_);
lean_dec(v___y_3533_);
lean_dec_ref(v___y_3532_);
return v_res_3537_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__6(void){
_start:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3548_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__3));
v___x_3549_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__5));
v___x_3550_ = l_Lean_Name_append(v___x_3549_, v___x_3548_);
return v___x_3550_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1(lean_object* v_as_3551_, size_t v_i_3552_, size_t v_stop_3553_, lean_object* v_b_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_){
_start:
{
lean_object* v_a_3568_; uint8_t v___x_3574_; 
v___x_3574_ = lean_usize_dec_eq(v_i_3552_, v_stop_3553_);
if (v___x_3574_ == 0)
{
lean_object* v_toCold_3575_; lean_object* v_options_3576_; uint8_t v_hasTrace_3577_; 
v_toCold_3575_ = lean_ctor_get(v___y_3564_, 0);
v_options_3576_ = lean_ctor_get(v_toCold_3575_, 2);
v_hasTrace_3577_ = lean_ctor_get_uint8(v_options_3576_, sizeof(void*)*1);
if (v_hasTrace_3577_ == 0)
{
goto v___jp_3572_;
}
else
{
lean_object* v_inheritedTraceOptions_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; uint8_t v___x_3581_; 
v_inheritedTraceOptions_3578_ = lean_ctor_get(v_toCold_3575_, 11);
v___x_3579_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__3));
v___x_3580_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__6);
v___x_3581_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3578_, v_options_3576_, v___x_3580_);
if (v___x_3581_ == 0)
{
goto v___jp_3572_;
}
else
{
lean_object* v___x_3582_; lean_object* v_type_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3582_ = lean_array_uget_borrowed(v_as_3551_, v_i_3552_);
v_type_3583_ = lean_ctor_get(v___x_3582_, 1);
lean_inc_ref(v_type_3583_);
v___x_3584_ = l_Lean_MessageData_ofExpr(v_type_3583_);
v___x_3585_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg(v___x_3579_, v___x_3584_, v___y_3562_, v___y_3563_, v___y_3564_, v___y_3565_);
if (lean_obj_tag(v___x_3585_) == 0)
{
lean_object* v_a_3586_; 
v_a_3586_ = lean_ctor_get(v___x_3585_, 0);
lean_inc(v_a_3586_);
lean_dec_ref_known(v___x_3585_, 1);
v_a_3568_ = v_a_3586_;
goto v___jp_3567_;
}
else
{
return v___x_3585_;
}
}
}
}
else
{
lean_object* v___x_3587_; 
v___x_3587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3587_, 0, v_b_3554_);
return v___x_3587_;
}
v___jp_3567_:
{
size_t v___x_3569_; size_t v___x_3570_; 
v___x_3569_ = ((size_t)1ULL);
v___x_3570_ = lean_usize_add(v_i_3552_, v___x_3569_);
v_i_3552_ = v___x_3570_;
v_b_3554_ = v_a_3568_;
goto _start;
}
v___jp_3572_:
{
lean_object* v___x_3573_; 
v___x_3573_ = lean_box(0);
v_a_3568_ = v___x_3573_;
goto v___jp_3567_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___boxed(lean_object* v_as_3588_, lean_object* v_i_3589_, lean_object* v_stop_3590_, lean_object* v_b_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_){
_start:
{
size_t v_i_boxed_3604_; size_t v_stop_boxed_3605_; lean_object* v_res_3606_; 
v_i_boxed_3604_ = lean_unbox_usize(v_i_3589_);
lean_dec(v_i_3589_);
v_stop_boxed_3605_ = lean_unbox_usize(v_stop_3590_);
lean_dec(v_stop_3590_);
v_res_3606_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1(v_as_3588_, v_i_boxed_3604_, v_stop_boxed_3605_, v_b_3591_, v___y_3592_, v___y_3593_, v___y_3594_, v___y_3595_, v___y_3596_, v___y_3597_, v___y_3598_, v___y_3599_, v___y_3600_, v___y_3601_, v___y_3602_);
lean_dec(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec(v___y_3600_);
lean_dec_ref(v___y_3599_);
lean_dec(v___y_3598_);
lean_dec_ref(v___y_3597_);
lean_dec(v___y_3596_);
lean_dec_ref(v___y_3595_);
lean_dec(v___y_3594_);
lean_dec(v___y_3593_);
lean_dec_ref(v___y_3592_);
lean_dec_ref(v_as_3588_);
return v_res_3606_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1(lean_object* v_as_3607_, size_t v_i_3608_, size_t v_stop_3609_, lean_object* v_b_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_){
_start:
{
lean_object* v_a_3624_; uint8_t v___x_3630_; 
v___x_3630_ = lean_usize_dec_eq(v_i_3608_, v_stop_3609_);
if (v___x_3630_ == 0)
{
lean_object* v_toCold_3631_; lean_object* v_options_3632_; uint8_t v_hasTrace_3633_; 
v_toCold_3631_ = lean_ctor_get(v___y_3620_, 0);
v_options_3632_ = lean_ctor_get(v_toCold_3631_, 2);
v_hasTrace_3633_ = lean_ctor_get_uint8(v_options_3632_, sizeof(void*)*1);
if (v_hasTrace_3633_ == 0)
{
goto v___jp_3628_;
}
else
{
lean_object* v_inheritedTraceOptions_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; uint8_t v___x_3637_; 
v_inheritedTraceOptions_3634_ = lean_ctor_get(v_toCold_3631_, 11);
v___x_3635_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__3));
v___x_3636_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__6);
v___x_3637_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3634_, v_options_3632_, v___x_3636_);
if (v___x_3637_ == 0)
{
goto v___jp_3628_;
}
else
{
lean_object* v___x_3638_; lean_object* v_type_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; 
v___x_3638_ = lean_array_uget_borrowed(v_as_3607_, v_i_3608_);
v_type_3639_ = lean_ctor_get(v___x_3638_, 1);
lean_inc_ref(v_type_3639_);
v___x_3640_ = l_Lean_MessageData_ofExpr(v_type_3639_);
v___x_3641_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg(v___x_3635_, v___x_3640_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
if (lean_obj_tag(v___x_3641_) == 0)
{
lean_object* v_a_3642_; 
v_a_3642_ = lean_ctor_get(v___x_3641_, 0);
lean_inc(v_a_3642_);
lean_dec_ref_known(v___x_3641_, 1);
v_a_3624_ = v_a_3642_;
goto v___jp_3623_;
}
else
{
return v___x_3641_;
}
}
}
}
else
{
lean_object* v___x_3643_; 
v___x_3643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3643_, 0, v_b_3610_);
return v___x_3643_;
}
v___jp_3623_:
{
size_t v___x_3625_; size_t v___x_3626_; lean_object* v___x_3627_; 
v___x_3625_ = ((size_t)1ULL);
v___x_3626_ = lean_usize_add(v_i_3608_, v___x_3625_);
v___x_3627_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1(v_as_3607_, v___x_3626_, v_stop_3609_, v_a_3624_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
return v___x_3627_;
}
v___jp_3628_:
{
lean_object* v___x_3629_; 
v___x_3629_ = lean_box(0);
v_a_3624_ = v___x_3629_;
goto v___jp_3623_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1___boxed(lean_object* v_as_3644_, lean_object* v_i_3645_, lean_object* v_stop_3646_, lean_object* v_b_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_){
_start:
{
size_t v_i_boxed_3660_; size_t v_stop_boxed_3661_; lean_object* v_res_3662_; 
v_i_boxed_3660_ = lean_unbox_usize(v_i_3645_);
lean_dec(v_i_3645_);
v_stop_boxed_3661_ = lean_unbox_usize(v_stop_3646_);
lean_dec(v_stop_3646_);
v_res_3662_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1(v_as_3644_, v_i_boxed_3660_, v_stop_boxed_3661_, v_b_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_, v___y_3653_, v___y_3654_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_);
lean_dec(v___y_3658_);
lean_dec_ref(v___y_3657_);
lean_dec(v___y_3656_);
lean_dec_ref(v___y_3655_);
lean_dec(v___y_3654_);
lean_dec_ref(v___y_3653_);
lean_dec(v___y_3652_);
lean_dec_ref(v___y_3651_);
lean_dec(v___y_3650_);
lean_dec(v___y_3649_);
lean_dec_ref(v___y_3648_);
lean_dec_ref(v_as_3644_);
return v_res_3662_;
}
}
static double _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___closed__1(void){
_start:
{
lean_object* v___x_3664_; double v___x_3665_; 
v___x_3664_ = lean_unsigned_to_nat(1000000000u);
v___x_3665_ = lean_float_of_nat(v___x_3664_);
return v___x_3665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps(lean_object* v_a_3666_, lean_object* v_a_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_){
_start:
{
lean_object* v___f_3678_; lean_object* v___x_3679_; 
v___f_3678_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___closed__0));
v___x_3679_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps_0__Lean_Meta_Tactic_BVDecide_Normalize_setupTarget(v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
if (lean_obj_tag(v___x_3679_) == 0)
{
lean_object* v_a_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3844_; 
v_a_3680_ = lean_ctor_get(v___x_3679_, 0);
v_isSharedCheck_3844_ = !lean_is_exclusive(v___x_3679_);
if (v_isSharedCheck_3844_ == 0)
{
v___x_3682_ = v___x_3679_;
v_isShared_3683_ = v_isSharedCheck_3844_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_a_3680_);
lean_dec(v___x_3679_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3844_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
if (lean_obj_tag(v_a_3680_) == 1)
{
lean_object* v_val_3684_; lean_object* v___x_3686_; uint8_t v_isShared_3687_; uint8_t v_isSharedCheck_3838_; 
v_val_3684_ = lean_ctor_get(v_a_3680_, 0);
v_isSharedCheck_3838_ = !lean_is_exclusive(v_a_3680_);
if (v_isSharedCheck_3838_ == 0)
{
v___x_3686_ = v_a_3680_;
v_isShared_3687_ = v_isSharedCheck_3838_;
goto v_resetjp_3685_;
}
else
{
lean_inc(v_val_3684_);
lean_dec(v_a_3680_);
v___x_3686_ = lean_box(0);
v_isShared_3687_ = v_isSharedCheck_3838_;
goto v_resetjp_3685_;
}
v_resetjp_3685_:
{
lean_object* v___y_3709_; lean_object* v_toCold_3718_; lean_object* v_options_3719_; lean_object* v_inheritedTraceOptions_3720_; uint8_t v_hasTrace_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; 
v_toCold_3718_ = lean_ctor_get(v_a_3675_, 0);
v_options_3719_ = lean_ctor_get(v_toCold_3718_, 2);
v_inheritedTraceOptions_3720_ = lean_ctor_get(v_toCold_3718_, 11);
v_hasTrace_3721_ = lean_ctor_get_uint8(v_options_3719_, sizeof(void*)*1);
v___x_3722_ = lean_unsigned_to_nat(0u);
v___x_3723_ = lean_array_get_size(v_val_3684_);
if (v_hasTrace_3721_ == 0)
{
uint8_t v___x_3724_; 
lean_del_object(v___x_3686_);
v___x_3724_ = lean_nat_dec_lt(v___x_3722_, v___x_3723_);
if (v___x_3724_ == 0)
{
goto v___jp_3688_;
}
else
{
lean_object* v___x_3725_; uint8_t v___x_3726_; 
v___x_3725_ = lean_box(0);
v___x_3726_ = lean_nat_dec_le(v___x_3723_, v___x_3723_);
if (v___x_3726_ == 0)
{
if (v___x_3724_ == 0)
{
goto v___jp_3688_;
}
else
{
size_t v___x_3727_; size_t v___x_3728_; lean_object* v___x_3729_; 
v___x_3727_ = ((size_t)0ULL);
v___x_3728_ = lean_usize_of_nat(v___x_3723_);
v___x_3729_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1(v_val_3684_, v___x_3727_, v___x_3728_, v___x_3725_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
v___y_3709_ = v___x_3729_;
goto v___jp_3708_;
}
}
else
{
size_t v___x_3730_; size_t v___x_3731_; lean_object* v___x_3732_; 
v___x_3730_ = ((size_t)0ULL);
v___x_3731_ = lean_usize_of_nat(v___x_3723_);
v___x_3732_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1(v_val_3684_, v___x_3730_, v___x_3731_, v___x_3725_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
v___y_3709_ = v___x_3732_;
goto v___jp_3708_;
}
}
}
else
{
lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; uint8_t v___x_3736_; lean_object* v___y_3738_; lean_object* v___y_3739_; lean_object* v_a_3740_; lean_object* v___y_3753_; lean_object* v___y_3754_; lean_object* v_a_3755_; lean_object* v___y_3760_; lean_object* v___y_3761_; lean_object* v___y_3762_; lean_object* v___y_3773_; lean_object* v___y_3774_; lean_object* v_a_3775_; lean_object* v___y_3785_; lean_object* v___y_3786_; lean_object* v_a_3787_; lean_object* v___y_3790_; lean_object* v___y_3791_; lean_object* v___y_3792_; 
v___x_3733_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__3));
v___x_3734_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg___closed__0));
v___x_3735_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1_spec__1___closed__6);
v___x_3736_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3720_, v_options_3719_, v___x_3735_);
if (v___x_3736_ == 0)
{
lean_object* v___x_3827_; uint8_t v___x_3828_; 
v___x_3827_ = l_Lean_trace_profiler;
v___x_3828_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__3(v_options_3719_, v___x_3827_);
if (v___x_3828_ == 0)
{
uint8_t v___x_3829_; 
lean_del_object(v___x_3686_);
v___x_3829_ = lean_nat_dec_lt(v___x_3722_, v___x_3723_);
if (v___x_3829_ == 0)
{
goto v___jp_3688_;
}
else
{
lean_object* v___x_3830_; uint8_t v___x_3831_; 
v___x_3830_ = lean_box(0);
v___x_3831_ = lean_nat_dec_le(v___x_3723_, v___x_3723_);
if (v___x_3831_ == 0)
{
if (v___x_3829_ == 0)
{
goto v___jp_3688_;
}
else
{
size_t v___x_3832_; size_t v___x_3833_; lean_object* v___x_3834_; 
v___x_3832_ = ((size_t)0ULL);
v___x_3833_ = lean_usize_of_nat(v___x_3723_);
v___x_3834_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1(v_val_3684_, v___x_3832_, v___x_3833_, v___x_3830_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
v___y_3709_ = v___x_3834_;
goto v___jp_3708_;
}
}
else
{
size_t v___x_3835_; size_t v___x_3836_; lean_object* v___x_3837_; 
v___x_3835_ = ((size_t)0ULL);
v___x_3836_ = lean_usize_of_nat(v___x_3723_);
v___x_3837_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1(v_val_3684_, v___x_3835_, v___x_3836_, v___x_3830_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
v___y_3709_ = v___x_3837_;
goto v___jp_3708_;
}
}
}
else
{
goto v___jp_3802_;
}
}
else
{
goto v___jp_3802_;
}
v___jp_3737_:
{
lean_object* v___x_3741_; double v___x_3742_; double v___x_3743_; double v___x_3744_; double v___x_3745_; double v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; 
v___x_3741_ = lean_io_mono_nanos_now();
v___x_3742_ = lean_float_of_nat(v___y_3739_);
v___x_3743_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___closed__1);
v___x_3744_ = lean_float_div(v___x_3742_, v___x_3743_);
v___x_3745_ = lean_float_of_nat(v___x_3741_);
v___x_3746_ = lean_float_div(v___x_3745_, v___x_3743_);
v___x_3747_ = lean_box_float(v___x_3744_);
v___x_3748_ = lean_box_float(v___x_3746_);
v___x_3749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3749_, 0, v___x_3747_);
lean_ctor_set(v___x_3749_, 1, v___x_3748_);
v___x_3750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3750_, 0, v_a_3740_);
lean_ctor_set(v___x_3750_, 1, v___x_3749_);
v___x_3751_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4(v___x_3733_, v_hasTrace_3721_, v___x_3734_, v_options_3719_, v___x_3736_, v___y_3738_, v___f_3678_, v___x_3750_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
v___y_3709_ = v___x_3751_;
goto v___jp_3708_;
}
v___jp_3752_:
{
lean_object* v___x_3757_; 
if (v_isShared_3687_ == 0)
{
lean_ctor_set(v___x_3686_, 0, v_a_3755_);
v___x_3757_ = v___x_3686_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v_a_3755_);
v___x_3757_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
v___y_3738_ = v___y_3753_;
v___y_3739_ = v___y_3754_;
v_a_3740_ = v___x_3757_;
goto v___jp_3737_;
}
}
v___jp_3759_:
{
if (lean_obj_tag(v___y_3762_) == 0)
{
lean_object* v_a_3763_; 
v_a_3763_ = lean_ctor_get(v___y_3762_, 0);
lean_inc(v_a_3763_);
lean_dec_ref_known(v___y_3762_, 1);
v___y_3753_ = v___y_3760_;
v___y_3754_ = v___y_3761_;
v_a_3755_ = v_a_3763_;
goto v___jp_3752_;
}
else
{
lean_object* v_a_3764_; lean_object* v___x_3766_; uint8_t v_isShared_3767_; uint8_t v_isSharedCheck_3771_; 
lean_del_object(v___x_3686_);
v_a_3764_ = lean_ctor_get(v___y_3762_, 0);
v_isSharedCheck_3771_ = !lean_is_exclusive(v___y_3762_);
if (v_isSharedCheck_3771_ == 0)
{
v___x_3766_ = v___y_3762_;
v_isShared_3767_ = v_isSharedCheck_3771_;
goto v_resetjp_3765_;
}
else
{
lean_inc(v_a_3764_);
lean_dec(v___y_3762_);
v___x_3766_ = lean_box(0);
v_isShared_3767_ = v_isSharedCheck_3771_;
goto v_resetjp_3765_;
}
v_resetjp_3765_:
{
lean_object* v___x_3769_; 
if (v_isShared_3767_ == 0)
{
lean_ctor_set_tag(v___x_3766_, 0);
v___x_3769_ = v___x_3766_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v_a_3764_);
v___x_3769_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
v___y_3738_ = v___y_3760_;
v___y_3739_ = v___y_3761_;
v_a_3740_ = v___x_3769_;
goto v___jp_3737_;
}
}
}
}
v___jp_3772_:
{
lean_object* v___x_3776_; double v___x_3777_; double v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; 
v___x_3776_ = lean_io_get_num_heartbeats();
v___x_3777_ = lean_float_of_nat(v___y_3774_);
v___x_3778_ = lean_float_of_nat(v___x_3776_);
v___x_3779_ = lean_box_float(v___x_3777_);
v___x_3780_ = lean_box_float(v___x_3778_);
v___x_3781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3781_, 0, v___x_3779_);
lean_ctor_set(v___x_3781_, 1, v___x_3780_);
v___x_3782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3782_, 0, v_a_3775_);
lean_ctor_set(v___x_3782_, 1, v___x_3781_);
v___x_3783_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4(v___x_3733_, v_hasTrace_3721_, v___x_3734_, v_options_3719_, v___x_3736_, v___y_3773_, v___f_3678_, v___x_3782_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
v___y_3709_ = v___x_3783_;
goto v___jp_3708_;
}
v___jp_3784_:
{
lean_object* v___x_3788_; 
v___x_3788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3788_, 0, v_a_3787_);
v___y_3773_ = v___y_3785_;
v___y_3774_ = v___y_3786_;
v_a_3775_ = v___x_3788_;
goto v___jp_3772_;
}
v___jp_3789_:
{
if (lean_obj_tag(v___y_3792_) == 0)
{
lean_object* v_a_3793_; 
v_a_3793_ = lean_ctor_get(v___y_3792_, 0);
lean_inc(v_a_3793_);
lean_dec_ref_known(v___y_3792_, 1);
v___y_3785_ = v___y_3790_;
v___y_3786_ = v___y_3791_;
v_a_3787_ = v_a_3793_;
goto v___jp_3784_;
}
else
{
lean_object* v_a_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3801_; 
v_a_3794_ = lean_ctor_get(v___y_3792_, 0);
v_isSharedCheck_3801_ = !lean_is_exclusive(v___y_3792_);
if (v_isSharedCheck_3801_ == 0)
{
v___x_3796_ = v___y_3792_;
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_a_3794_);
lean_dec(v___y_3792_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v___x_3799_; 
if (v_isShared_3797_ == 0)
{
lean_ctor_set_tag(v___x_3796_, 0);
v___x_3799_ = v___x_3796_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3800_; 
v_reuseFailAlloc_3800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3800_, 0, v_a_3794_);
v___x_3799_ = v_reuseFailAlloc_3800_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
v___y_3773_ = v___y_3790_;
v___y_3774_ = v___y_3791_;
v_a_3775_ = v___x_3799_;
goto v___jp_3772_;
}
}
}
}
v___jp_3802_:
{
lean_object* v___x_3803_; lean_object* v_a_3804_; lean_object* v___x_3805_; uint8_t v___x_3806_; 
v___x_3803_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__2___redArg(v_a_3676_);
v_a_3804_ = lean_ctor_get(v___x_3803_, 0);
lean_inc(v_a_3804_);
lean_dec_ref(v___x_3803_);
v___x_3805_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3806_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__3(v_options_3719_, v___x_3805_);
if (v___x_3806_ == 0)
{
lean_object* v___x_3807_; lean_object* v___x_3808_; uint8_t v___x_3809_; 
v___x_3807_ = lean_io_mono_nanos_now();
v___x_3808_ = lean_box(0);
v___x_3809_ = lean_nat_dec_lt(v___x_3722_, v___x_3723_);
if (v___x_3809_ == 0)
{
v___y_3753_ = v_a_3804_;
v___y_3754_ = v___x_3807_;
v_a_3755_ = v___x_3808_;
goto v___jp_3752_;
}
else
{
uint8_t v___x_3810_; 
v___x_3810_ = lean_nat_dec_le(v___x_3723_, v___x_3723_);
if (v___x_3810_ == 0)
{
if (v___x_3809_ == 0)
{
v___y_3753_ = v_a_3804_;
v___y_3754_ = v___x_3807_;
v_a_3755_ = v___x_3808_;
goto v___jp_3752_;
}
else
{
size_t v___x_3811_; size_t v___x_3812_; lean_object* v___x_3813_; 
v___x_3811_ = ((size_t)0ULL);
v___x_3812_ = lean_usize_of_nat(v___x_3723_);
v___x_3813_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1(v_val_3684_, v___x_3811_, v___x_3812_, v___x_3808_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
v___y_3760_ = v_a_3804_;
v___y_3761_ = v___x_3807_;
v___y_3762_ = v___x_3813_;
goto v___jp_3759_;
}
}
else
{
size_t v___x_3814_; size_t v___x_3815_; lean_object* v___x_3816_; 
v___x_3814_ = ((size_t)0ULL);
v___x_3815_ = lean_usize_of_nat(v___x_3723_);
v___x_3816_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1(v_val_3684_, v___x_3814_, v___x_3815_, v___x_3808_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
v___y_3760_ = v_a_3804_;
v___y_3761_ = v___x_3807_;
v___y_3762_ = v___x_3816_;
goto v___jp_3759_;
}
}
}
else
{
lean_object* v___x_3817_; lean_object* v___x_3818_; uint8_t v___x_3819_; 
lean_del_object(v___x_3686_);
v___x_3817_ = lean_io_get_num_heartbeats();
v___x_3818_ = lean_box(0);
v___x_3819_ = lean_nat_dec_lt(v___x_3722_, v___x_3723_);
if (v___x_3819_ == 0)
{
v___y_3785_ = v_a_3804_;
v___y_3786_ = v___x_3817_;
v_a_3787_ = v___x_3818_;
goto v___jp_3784_;
}
else
{
uint8_t v___x_3820_; 
v___x_3820_ = lean_nat_dec_le(v___x_3723_, v___x_3723_);
if (v___x_3820_ == 0)
{
if (v___x_3819_ == 0)
{
v___y_3785_ = v_a_3804_;
v___y_3786_ = v___x_3817_;
v_a_3787_ = v___x_3818_;
goto v___jp_3784_;
}
else
{
size_t v___x_3821_; size_t v___x_3822_; lean_object* v___x_3823_; 
v___x_3821_ = ((size_t)0ULL);
v___x_3822_ = lean_usize_of_nat(v___x_3723_);
v___x_3823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1(v_val_3684_, v___x_3821_, v___x_3822_, v___x_3818_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
v___y_3790_ = v_a_3804_;
v___y_3791_ = v___x_3817_;
v___y_3792_ = v___x_3823_;
goto v___jp_3789_;
}
}
else
{
size_t v___x_3824_; size_t v___x_3825_; lean_object* v___x_3826_; 
v___x_3824_ = ((size_t)0ULL);
v___x_3825_ = lean_usize_of_nat(v___x_3723_);
v___x_3826_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__1(v_val_3684_, v___x_3824_, v___x_3825_, v___x_3818_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
v___y_3790_ = v_a_3804_;
v___y_3791_ = v___x_3817_;
v___y_3792_ = v___x_3826_;
goto v___jp_3789_;
}
}
}
}
}
v___jp_3688_:
{
lean_object* v___x_3689_; lean_object* v_caches_3690_; lean_object* v_typeAnalysis_3691_; lean_object* v_target_3692_; uint8_t v_didChange_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3706_; 
v___x_3689_ = lean_st_ref_take(v_a_3667_);
v_caches_3690_ = lean_ctor_get(v___x_3689_, 0);
v_typeAnalysis_3691_ = lean_ctor_get(v___x_3689_, 1);
v_target_3692_ = lean_ctor_get(v___x_3689_, 2);
v_didChange_3693_ = lean_ctor_get_uint8(v___x_3689_, sizeof(void*)*4);
v_isSharedCheck_3706_ = !lean_is_exclusive(v___x_3689_);
if (v_isSharedCheck_3706_ == 0)
{
lean_object* v_unused_3707_; 
v_unused_3707_ = lean_ctor_get(v___x_3689_, 3);
lean_dec(v_unused_3707_);
v___x_3695_ = v___x_3689_;
v_isShared_3696_ = v_isSharedCheck_3706_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_target_3692_);
lean_inc(v_typeAnalysis_3691_);
lean_inc(v_caches_3690_);
lean_dec(v___x_3689_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3706_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3698_; 
if (v_isShared_3696_ == 0)
{
lean_ctor_set(v___x_3695_, 3, v_val_3684_);
v___x_3698_ = v___x_3695_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v_caches_3690_);
lean_ctor_set(v_reuseFailAlloc_3705_, 1, v_typeAnalysis_3691_);
lean_ctor_set(v_reuseFailAlloc_3705_, 2, v_target_3692_);
lean_ctor_set(v_reuseFailAlloc_3705_, 3, v_val_3684_);
lean_ctor_set_uint8(v_reuseFailAlloc_3705_, sizeof(void*)*4, v_didChange_3693_);
v___x_3698_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
lean_object* v___x_3699_; uint8_t v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3703_; 
v___x_3699_ = lean_st_ref_put(v_a_3667_, v___x_3698_);
v___x_3700_ = 0;
v___x_3701_ = lean_box(v___x_3700_);
if (v_isShared_3683_ == 0)
{
lean_ctor_set(v___x_3682_, 0, v___x_3701_);
v___x_3703_ = v___x_3682_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3704_; 
v_reuseFailAlloc_3704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3704_, 0, v___x_3701_);
v___x_3703_ = v_reuseFailAlloc_3704_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
return v___x_3703_;
}
}
}
}
v___jp_3708_:
{
if (lean_obj_tag(v___y_3709_) == 0)
{
lean_dec_ref_known(v___y_3709_, 1);
goto v___jp_3688_;
}
else
{
lean_object* v_a_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3717_; 
lean_dec(v_val_3684_);
lean_del_object(v___x_3682_);
v_a_3710_ = lean_ctor_get(v___y_3709_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___y_3709_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3712_ = v___y_3709_;
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_a_3710_);
lean_dec(v___y_3709_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3715_; 
if (v_isShared_3713_ == 0)
{
v___x_3715_ = v___x_3712_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_a_3710_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
return v___x_3715_;
}
}
}
}
}
}
else
{
uint8_t v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3842_; 
lean_dec(v_a_3680_);
v___x_3839_ = 1;
v___x_3840_ = lean_box(v___x_3839_);
if (v_isShared_3683_ == 0)
{
lean_ctor_set(v___x_3682_, 0, v___x_3840_);
v___x_3842_ = v___x_3682_;
goto v_reusejp_3841_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v___x_3840_);
v___x_3842_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3841_;
}
v_reusejp_3841_:
{
return v___x_3842_;
}
}
}
}
else
{
lean_object* v_a_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3852_; 
v_a_3845_ = lean_ctor_get(v___x_3679_, 0);
v_isSharedCheck_3852_ = !lean_is_exclusive(v___x_3679_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3847_ = v___x_3679_;
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_a_3845_);
lean_dec(v___x_3679_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3850_; 
if (v_isShared_3848_ == 0)
{
v___x_3850_ = v___x_3847_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v_a_3845_);
v___x_3850_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
return v___x_3850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps___boxed(lean_object* v_a_3853_, lean_object* v_a_3854_, lean_object* v_a_3855_, lean_object* v_a_3856_, lean_object* v_a_3857_, lean_object* v_a_3858_, lean_object* v_a_3859_, lean_object* v_a_3860_, lean_object* v_a_3861_, lean_object* v_a_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_){
_start:
{
lean_object* v_res_3865_; 
v_res_3865_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps(v_a_3853_, v_a_3854_, v_a_3855_, v_a_3856_, v_a_3857_, v_a_3858_, v_a_3859_, v_a_3860_, v_a_3861_, v_a_3862_, v_a_3863_);
lean_dec(v_a_3863_);
lean_dec_ref(v_a_3862_);
lean_dec(v_a_3861_);
lean_dec_ref(v_a_3860_);
lean_dec(v_a_3859_);
lean_dec_ref(v_a_3858_);
lean_dec(v_a_3857_);
lean_dec_ref(v_a_3856_);
lean_dec(v_a_3855_);
lean_dec(v_a_3854_);
lean_dec_ref(v_a_3853_);
return v_res_3865_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0(lean_object* v_cls_3866_, lean_object* v_msg_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_){
_start:
{
lean_object* v___x_3880_; 
v___x_3880_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___redArg(v_cls_3866_, v_msg_3867_, v___y_3875_, v___y_3876_, v___y_3877_, v___y_3878_);
return v___x_3880_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0___boxed(lean_object* v_cls_3881_, lean_object* v_msg_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_){
_start:
{
lean_object* v_res_3895_; 
v_res_3895_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__0(v_cls_3881_, v_msg_3882_, v___y_3883_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_);
lean_dec(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec(v___y_3891_);
lean_dec_ref(v___y_3890_);
lean_dec(v___y_3889_);
lean_dec_ref(v___y_3888_);
lean_dec(v___y_3887_);
lean_dec_ref(v___y_3886_);
lean_dec(v___y_3885_);
lean_dec(v___y_3884_);
lean_dec_ref(v___y_3883_);
return v_res_3895_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__6(lean_object* v_00_u03b1_3896_, lean_object* v_x_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_){
_start:
{
lean_object* v___x_3910_; 
v___x_3910_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__6___redArg(v_x_3897_);
return v___x_3910_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__6___boxed(lean_object* v_00_u03b1_3911_, lean_object* v_x_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_){
_start:
{
lean_object* v_res_3925_; 
v_res_3925_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__6(v_00_u03b1_3911_, v_x_3912_, v___y_3913_, v___y_3914_, v___y_3915_, v___y_3916_, v___y_3917_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_, v___y_3922_, v___y_3923_);
lean_dec(v___y_3923_);
lean_dec_ref(v___y_3922_);
lean_dec(v___y_3921_);
lean_dec_ref(v___y_3920_);
lean_dec(v___y_3919_);
lean_dec_ref(v___y_3918_);
lean_dec(v___y_3917_);
lean_dec_ref(v___y_3916_);
lean_dec(v___y_3915_);
lean_dec(v___y_3914_);
lean_dec_ref(v___y_3913_);
return v_res_3925_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5(lean_object* v_oldTraces_3926_, lean_object* v_data_3927_, lean_object* v_ref_3928_, lean_object* v_msg_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_){
_start:
{
lean_object* v___x_3942_; 
v___x_3942_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5___redArg(v_oldTraces_3926_, v_data_3927_, v_ref_3928_, v_msg_3929_, v___y_3937_, v___y_3938_, v___y_3939_, v___y_3940_);
return v___x_3942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5___boxed(lean_object* v_oldTraces_3943_, lean_object* v_data_3944_, lean_object* v_ref_3945_, lean_object* v_msg_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_){
_start:
{
lean_object* v_res_3959_; 
v_res_3959_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_collectTargetHyps_spec__4_spec__5(v_oldTraces_3943_, v_data_3944_, v_ref_3945_, v_msg_3946_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_, v___y_3957_);
lean_dec(v___y_3957_);
lean_dec_ref(v___y_3956_);
lean_dec(v___y_3955_);
lean_dec_ref(v___y_3954_);
lean_dec(v___y_3953_);
lean_dec_ref(v___y_3952_);
lean_dec(v___y_3951_);
lean_dec_ref(v___y_3950_);
lean_dec(v___y_3949_);
lean_dec(v___y_3948_);
lean_dec_ref(v___y_3947_);
return v_res_3959_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_FalseOrByContra(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_LitValues(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Grind(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Intro(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_FalseOrByContra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_FalseOrByContra(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_LitValues(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Grind(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Intro(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_FalseOrByContra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize_CollectHyps(builtin);
}
#ifdef __cplusplus
}
#endif

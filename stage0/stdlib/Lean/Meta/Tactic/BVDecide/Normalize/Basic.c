// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize.Basic
// Imports: public import Lean.Meta.Tactic.BVDecide.Attr public import Std.Tactic.BVDecide.Syntax public import Lean.Meta.Sym.ExprPtr public import Lean.Meta.Sym.SymM public import Lean.Meta.Sym.Simp.SimpM public import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.InferType import Lean.Meta.Sym.InstantiateMVarsS public import Lean.Meta.Sym.DSimp.DSimpM import Lean.Meta.Sym.DSimp.Result public import Lean.Meta.Tactic.Grind.Types public import Lean.Meta.Tactic.Grind.BVDecide.Types
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
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_Sym_DSimp_dsimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_Result_getResultExpr(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assignFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Grind_closeGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadExceptOfEIO___redArg();
lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(lean_object*);
lean_object* l_Lean_instMonadAlwaysExceptReaderT___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
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
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getLevel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_io_get_num_heartbeats();
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedFVarId_default;
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedMVarId_default;
lean_object* l_instMonadControlReaderT___redArg();
lean_object* l_instMonadControlStateRefT_x27___redArg();
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfPure___redArg(lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_GoalM_runCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_withContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Lean_instExceptToTraceResultBool___redArg___lam__0___boxed(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarIdTarget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarIdTarget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_grindTarget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_grindTarget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_lctx_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_lctx_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_enumDomain_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_enumDomain_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_structureProjection_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_structureProjection_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_andFlattened_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_andFlattened_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_grind_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_grind_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___closed__0;
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "assumption "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "enum domain size lemma for "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "structure lemma projection: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "and flattening from "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grind state"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp;
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_solve_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_solve_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_push_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_push_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessContext_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(183, 66, 254, 161, 210, 133, 94, 78)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2;
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__22_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__23_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__24_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__26_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Learned hypothesis: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__36 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__36_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "  ==>  "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Running pass: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instExceptToTraceResultBool___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___boxed(lean_object**);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Fixpoint iteration solved the goal"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bv_decide"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Pipeline reached a fixpoint"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Rerunning pipeline"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg___lam__0(lean_object* v_toPure_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v_contextDependent_3_; lean_object* v___x_5_; uint8_t v_isShared_6_; uint8_t v_isSharedCheck_12_; 
v_contextDependent_3_ = lean_ctor_get_uint8(v_x_2_, 1);
v_isSharedCheck_12_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_12_ == 0)
{
v___x_5_ = v_x_2_;
v_isShared_6_ = v_isSharedCheck_12_;
goto v_resetjp_4_;
}
else
{
lean_dec(v_x_2_);
v___x_5_ = lean_box(0);
v_isShared_6_ = v_isSharedCheck_12_;
goto v_resetjp_4_;
}
v_resetjp_4_:
{
uint8_t v___x_7_; lean_object* v___x_9_; 
v___x_7_ = 1;
if (v_isShared_6_ == 0)
{
v___x_9_ = v___x_5_;
goto v_reusejp_8_;
}
else
{
lean_object* v_reuseFailAlloc_11_; 
v_reuseFailAlloc_11_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v_reuseFailAlloc_11_, 1, v_contextDependent_3_);
v___x_9_ = v_reuseFailAlloc_11_;
goto v_reusejp_8_;
}
v_reusejp_8_:
{
lean_object* v___x_10_; 
lean_ctor_set_uint8(v___x_9_, 0, v___x_7_);
v___x_10_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_9_);
return v___x_10_;
}
}
}
else
{
lean_object* v_e_x27_13_; lean_object* v_proof_14_; uint8_t v_contextDependent_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v_e_x27_13_ = lean_ctor_get(v_x_2_, 0);
v_proof_14_ = lean_ctor_get(v_x_2_, 1);
v_contextDependent_15_ = lean_ctor_get_uint8(v_x_2_, sizeof(void*)*2 + 1);
v_isSharedCheck_24_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_24_ == 0)
{
v___x_17_ = v_x_2_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_proof_14_);
lean_inc(v_e_x27_13_);
lean_dec(v_x_2_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
uint8_t v___x_19_; lean_object* v___x_21_; 
v___x_19_ = 1;
if (v_isShared_18_ == 0)
{
v___x_21_ = v___x_17_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_e_x27_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_proof_14_);
lean_ctor_set_uint8(v_reuseFailAlloc_23_, sizeof(void*)*2 + 1, v_contextDependent_15_);
v___x_21_ = v_reuseFailAlloc_23_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_22_; 
lean_ctor_set_uint8(v___x_21_, sizeof(void*)*2, v___x_19_);
v___x_22_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_21_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg(lean_object* v_inst_25_, lean_object* v_x_26_){
_start:
{
lean_object* v_toApplicative_27_; lean_object* v_toBind_28_; lean_object* v_toPure_29_; lean_object* v___f_30_; lean_object* v___x_31_; 
v_toApplicative_27_ = lean_ctor_get(v_inst_25_, 0);
lean_inc_ref(v_toApplicative_27_);
v_toBind_28_ = lean_ctor_get(v_inst_25_, 1);
lean_inc(v_toBind_28_);
lean_dec_ref(v_inst_25_);
v_toPure_29_ = lean_ctor_get(v_toApplicative_27_, 1);
lean_inc(v_toPure_29_);
lean_dec_ref(v_toApplicative_27_);
v___f_30_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg___lam__0), 2, 1);
lean_closure_set(v___f_30_, 0, v_toPure_29_);
v___x_31_ = lean_apply_4(v_toBind_28_, lean_box(0), lean_box(0), v_x_26_, v___f_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult(lean_object* v_m_32_, lean_object* v_inst_33_, lean_object* v_x_34_){
_start:
{
lean_object* v_toApplicative_35_; lean_object* v_toBind_36_; lean_object* v_toPure_37_; lean_object* v___f_38_; lean_object* v___x_39_; 
v_toApplicative_35_ = lean_ctor_get(v_inst_33_, 0);
lean_inc_ref(v_toApplicative_35_);
v_toBind_36_ = lean_ctor_get(v_inst_33_, 1);
lean_inc(v_toBind_36_);
lean_dec_ref(v_inst_33_);
v_toPure_37_ = lean_ctor_get(v_toApplicative_35_, 1);
lean_inc(v_toPure_37_);
lean_dec_ref(v_toApplicative_35_);
v___f_38_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_withDoneResult___redArg___lam__0), 2, 1);
lean_closure_set(v___f_38_, 0, v_toPure_37_);
v___x_39_ = lean_apply_4(v_toBind_36_, lean_box(0), lean_box(0), v_x_34_, v___f_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx(lean_object* v_x_40_){
_start:
{
if (lean_obj_tag(v_x_40_) == 0)
{
lean_object* v___x_41_; 
v___x_41_ = lean_unsigned_to_nat(0u);
return v___x_41_;
}
else
{
lean_object* v___x_42_; 
v___x_42_ = lean_unsigned_to_nat(1u);
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx___boxed(lean_object* v_x_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorIdx(v_x_43_);
lean_dec_ref(v_x_43_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(lean_object* v_t_45_, lean_object* v_k_46_){
_start:
{
if (lean_obj_tag(v_t_45_) == 0)
{
lean_object* v_mvar_47_; lean_object* v___x_48_; 
v_mvar_47_ = lean_ctor_get(v_t_45_, 0);
lean_inc(v_mvar_47_);
lean_dec_ref_known(v_t_45_, 1);
v___x_48_ = lean_apply_1(v_k_46_, v_mvar_47_);
return v___x_48_;
}
else
{
lean_object* v_goal_49_; lean_object* v___x_50_; 
v_goal_49_ = lean_ctor_get(v_t_45_, 0);
lean_inc_ref(v_goal_49_);
lean_dec_ref_known(v_t_45_, 1);
v___x_50_ = lean_apply_1(v_k_46_, v_goal_49_);
return v___x_50_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim(lean_object* v_motive_51_, lean_object* v_ctorIdx_52_, lean_object* v_t_53_, lean_object* v_h_54_, lean_object* v_k_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_53_, v_k_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___boxed(lean_object* v_motive_57_, lean_object* v_ctorIdx_58_, lean_object* v_t_59_, lean_object* v_h_60_, lean_object* v_k_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim(v_motive_57_, v_ctorIdx_58_, v_t_59_, v_h_60_, v_k_61_);
lean_dec(v_ctorIdx_58_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarIdTarget_elim___redArg(lean_object* v_t_63_, lean_object* v_mvarIdTarget_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_63_, v_mvarIdTarget_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarIdTarget_elim(lean_object* v_motive_66_, lean_object* v_t_67_, lean_object* v_h_68_, lean_object* v_mvarIdTarget_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_67_, v_mvarIdTarget_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_grindTarget_elim___redArg(lean_object* v_t_71_, lean_object* v_grindTarget_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_71_, v_grindTarget_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_grindTarget_elim(lean_object* v_motive_74_, lean_object* v_t_75_, lean_object* v_h_76_, lean_object* v_grindTarget_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_ctorElim___redArg(v_t_75_, v_grindTarget_77_);
return v___x_78_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = l_Lean_instInhabitedMVarId_default;
v___x_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default(void){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default___closed__0);
return v___x_81_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget(void){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default;
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(lean_object* v_x_83_){
_start:
{
if (lean_obj_tag(v_x_83_) == 0)
{
lean_object* v_mvar_84_; 
v_mvar_84_ = lean_ctor_get(v_x_83_, 0);
lean_inc(v_mvar_84_);
return v_mvar_84_;
}
else
{
lean_object* v_goal_85_; lean_object* v_mvarId_86_; 
v_goal_85_ = lean_ctor_get(v_x_83_, 0);
v_mvarId_86_ = lean_ctor_get(v_goal_85_, 1);
lean_inc(v_mvarId_86_);
return v_mvarId_86_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId___boxed(lean_object* v_x_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(v_x_87_);
lean_dec_ref(v_x_87_);
return v_res_88_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind(lean_object* v_x_89_){
_start:
{
if (lean_obj_tag(v_x_89_) == 0)
{
uint8_t v___x_90_; 
v___x_90_ = 0;
return v___x_90_;
}
else
{
uint8_t v___x_91_; 
v___x_91_ = 1;
return v___x_91_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind___boxed(lean_object* v_x_92_){
_start:
{
uint8_t v_res_93_; lean_object* v_r_94_; 
v_res_93_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isGrind(v_x_92_);
lean_dec_ref(v_x_92_);
v_r_94_ = lean_box(v_res_93_);
return v_r_94_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar(lean_object* v_x_95_){
_start:
{
if (lean_obj_tag(v_x_95_) == 0)
{
uint8_t v___x_96_; 
v___x_96_ = 1;
return v___x_96_;
}
else
{
uint8_t v___x_97_; 
v___x_97_ = 0;
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar___boxed(lean_object* v_x_98_){
_start:
{
uint8_t v_res_99_; lean_object* v_r_100_; 
v_res_99_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_isMVar(v_x_98_);
lean_dec_ref(v_x_98_);
v_r_100_ = lean_box(v_res_99_);
return v_r_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx(lean_object* v_x_101_){
_start:
{
if (lean_obj_tag(v_x_101_) == 0)
{
lean_object* v___x_102_; 
v___x_102_ = lean_unsigned_to_nat(0u);
return v___x_102_;
}
else
{
lean_object* v___x_103_; 
v___x_103_ = lean_unsigned_to_nat(1u);
return v___x_103_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx___boxed(lean_object* v_x_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorIdx(v_x_104_);
lean_dec_ref(v_x_104_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(lean_object* v_t_106_, lean_object* v_k_107_){
_start:
{
lean_object* v_info_108_; lean_object* v_ctors_109_; lean_object* v___x_110_; 
v_info_108_ = lean_ctor_get(v_t_106_, 0);
lean_inc_ref(v_info_108_);
v_ctors_109_ = lean_ctor_get(v_t_106_, 1);
lean_inc_ref(v_ctors_109_);
lean_dec_ref(v_t_106_);
v___x_110_ = lean_apply_2(v_k_107_, v_info_108_, v_ctors_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim(lean_object* v_motive_111_, lean_object* v_ctorIdx_112_, lean_object* v_t_113_, lean_object* v_h_114_, lean_object* v_k_115_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_113_, v_k_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___boxed(lean_object* v_motive_117_, lean_object* v_ctorIdx_118_, lean_object* v_t_119_, lean_object* v_h_120_, lean_object* v_k_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim(v_motive_117_, v_ctorIdx_118_, v_t_119_, v_h_120_, v_k_121_);
lean_dec(v_ctorIdx_118_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim___redArg(lean_object* v_t_123_, lean_object* v_simpleEnum_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_123_, v_simpleEnum_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_simpleEnum_elim(lean_object* v_motive_126_, lean_object* v_t_127_, lean_object* v_h_128_, lean_object* v_simpleEnum_129_){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_127_, v_simpleEnum_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim___redArg(lean_object* v_t_131_, lean_object* v_enumWithDefault_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_131_, v_enumWithDefault_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_enumWithDefault_elim(lean_object* v_motive_134_, lean_object* v_t_135_, lean_object* v_h_136_, lean_object* v_enumWithDefault_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_ctorElim___redArg(v_t_135_, v_enumWithDefault_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo(lean_object* v_x_139_){
_start:
{
lean_object* v_info_140_; 
v_info_140_ = lean_ctor_get(v_x_139_, 0);
lean_inc_ref(v_info_140_);
return v_info_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo___boxed(lean_object* v_x_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_Meta_Tactic_BVDecide_Normalize_MatchKind_getEnumInfo(v_x_141_);
lean_dec_ref(v_x_141_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx(lean_object* v_x_143_){
_start:
{
switch(lean_obj_tag(v_x_143_))
{
case 0:
{
lean_object* v___x_144_; 
v___x_144_ = lean_unsigned_to_nat(0u);
return v___x_144_;
}
case 1:
{
lean_object* v___x_145_; 
v___x_145_ = lean_unsigned_to_nat(1u);
return v___x_145_;
}
case 2:
{
lean_object* v___x_146_; 
v___x_146_ = lean_unsigned_to_nat(2u);
return v___x_146_;
}
case 3:
{
lean_object* v___x_147_; 
v___x_147_ = lean_unsigned_to_nat(3u);
return v___x_147_;
}
default: 
{
lean_object* v___x_148_; 
v___x_148_ = lean_unsigned_to_nat(4u);
return v___x_148_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx___boxed(lean_object* v_x_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorIdx(v_x_149_);
lean_dec(v_x_149_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(lean_object* v_t_151_, lean_object* v_k_152_){
_start:
{
switch(lean_obj_tag(v_t_151_))
{
case 2:
{
lean_object* v_e_153_; lean_object* v___x_154_; 
v_e_153_ = lean_ctor_get(v_t_151_, 0);
lean_inc_ref(v_e_153_);
lean_dec_ref_known(v_t_151_, 1);
v___x_154_ = lean_apply_1(v_k_152_, v_e_153_);
return v___x_154_;
}
case 4:
{
return v_k_152_;
}
default: 
{
lean_object* v_fvar_155_; lean_object* v___x_156_; 
v_fvar_155_ = lean_ctor_get(v_t_151_, 0);
lean_inc(v_fvar_155_);
lean_dec(v_t_151_);
v___x_156_ = lean_apply_1(v_k_152_, v_fvar_155_);
return v___x_156_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim(lean_object* v_motive_157_, lean_object* v_ctorIdx_158_, lean_object* v_t_159_, lean_object* v_h_160_, lean_object* v_k_161_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_159_, v_k_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___boxed(lean_object* v_motive_163_, lean_object* v_ctorIdx_164_, lean_object* v_t_165_, lean_object* v_h_166_, lean_object* v_k_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim(v_motive_163_, v_ctorIdx_164_, v_t_165_, v_h_166_, v_k_167_);
lean_dec(v_ctorIdx_164_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_lctx_elim___redArg(lean_object* v_t_169_, lean_object* v_lctx_170_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_169_, v_lctx_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_lctx_elim(lean_object* v_motive_172_, lean_object* v_t_173_, lean_object* v_h_174_, lean_object* v_lctx_175_){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_173_, v_lctx_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_enumDomain_elim___redArg(lean_object* v_t_177_, lean_object* v_enumDomain_178_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_177_, v_enumDomain_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_enumDomain_elim(lean_object* v_motive_180_, lean_object* v_t_181_, lean_object* v_h_182_, lean_object* v_enumDomain_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_181_, v_enumDomain_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_structureProjection_elim___redArg(lean_object* v_t_185_, lean_object* v_structureProjection_186_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_185_, v_structureProjection_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_structureProjection_elim(lean_object* v_motive_188_, lean_object* v_t_189_, lean_object* v_h_190_, lean_object* v_structureProjection_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_189_, v_structureProjection_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_andFlattened_elim___redArg(lean_object* v_t_193_, lean_object* v_andFlattened_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_193_, v_andFlattened_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_andFlattened_elim(lean_object* v_motive_196_, lean_object* v_t_197_, lean_object* v_h_198_, lean_object* v_andFlattened_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_197_, v_andFlattened_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_grind_elim___redArg(lean_object* v_t_201_, lean_object* v_grind_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_201_, v_grind_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_grind_elim(lean_object* v_motive_204_, lean_object* v_t_205_, lean_object* v_h_206_, lean_object* v_grind_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lean_Meta_Tactic_BVDecide_Normalize_HypSource_ctorElim___redArg(v_t_205_, v_grind_207_);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = l_Lean_instInhabitedFVarId_default;
v___x_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
return v___x_210_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default(void){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default___closed__0);
return v___x_211_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource(void){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default;
return v___x_212_;
}
}
static uint64_t _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___closed__0(void){
_start:
{
uint64_t v___x_213_; uint64_t v___x_214_; uint64_t v___x_215_; 
v___x_213_ = 1723ULL;
v___x_214_ = 1ULL;
v___x_215_ = lean_uint64_mix_hash(v___x_214_, v___x_213_);
return v___x_215_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash(lean_object* v_x_216_){
_start:
{
switch(lean_obj_tag(v_x_216_))
{
case 0:
{
lean_object* v_fvar_217_; uint64_t v___x_218_; uint64_t v___x_219_; uint64_t v___x_220_; 
v_fvar_217_ = lean_ctor_get(v_x_216_, 0);
v___x_218_ = 0ULL;
v___x_219_ = l_Lean_instHashableFVarId_hash(v_fvar_217_);
v___x_220_ = lean_uint64_mix_hash(v___x_218_, v___x_219_);
return v___x_220_;
}
case 1:
{
lean_object* v_n_221_; uint64_t v___x_222_; lean_object* v___x_223_; 
v_n_221_ = lean_ctor_get(v_x_216_, 0);
v___x_222_ = 1ULL;
v___x_223_ = l_unsafeCast___redArg(v_n_221_);
if (lean_obj_tag(v___x_223_) == 0)
{
uint64_t v___x_224_; 
v___x_224_ = lean_uint64_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___closed__0);
return v___x_224_;
}
else
{
uint64_t v_hash_225_; uint64_t v___x_226_; 
v_hash_225_ = lean_ctor_get_uint64(v___x_223_, sizeof(void*)*2);
lean_dec(v___x_223_);
v___x_226_ = lean_uint64_mix_hash(v___x_222_, v_hash_225_);
return v___x_226_;
}
}
case 2:
{
lean_object* v_e_227_; uint64_t v___x_228_; uint64_t v___x_229_; uint64_t v___x_230_; 
v_e_227_ = lean_ctor_get(v_x_216_, 0);
v___x_228_ = 2ULL;
v___x_229_ = l_Lean_Expr_hash(v_e_227_);
v___x_230_ = lean_uint64_mix_hash(v___x_228_, v___x_229_);
return v___x_230_;
}
case 3:
{
lean_object* v_s_231_; uint64_t v___x_232_; uint64_t v___x_233_; uint64_t v___x_234_; 
v_s_231_ = lean_ctor_get(v_x_216_, 0);
v___x_232_ = 3ULL;
v___x_233_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash(v_s_231_);
v___x_234_ = lean_uint64_mix_hash(v___x_232_, v___x_233_);
return v___x_234_;
}
default: 
{
uint64_t v___x_235_; 
v___x_235_ = 4ULL;
return v___x_235_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash___boxed(lean_object* v_x_236_){
_start:
{
uint64_t v_res_237_; lean_object* v_r_238_; 
v_res_237_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHypSource_hash(v_x_236_);
lean_dec(v_x_236_);
v_r_238_ = lean_box_uint64(v_res_237_);
return v_r_238_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq(lean_object* v_x_241_, lean_object* v_x_242_){
_start:
{
switch(lean_obj_tag(v_x_241_))
{
case 0:
{
if (lean_obj_tag(v_x_242_) == 0)
{
lean_object* v_fvar_243_; lean_object* v_fvar_244_; uint8_t v___x_245_; 
v_fvar_243_ = lean_ctor_get(v_x_241_, 0);
v_fvar_244_ = lean_ctor_get(v_x_242_, 0);
v___x_245_ = l_Lean_instBEqFVarId_beq(v_fvar_243_, v_fvar_244_);
return v___x_245_;
}
else
{
uint8_t v___x_246_; 
v___x_246_ = 0;
return v___x_246_;
}
}
case 1:
{
if (lean_obj_tag(v_x_242_) == 1)
{
lean_object* v_n_247_; lean_object* v_n_248_; uint8_t v___x_249_; 
v_n_247_ = lean_ctor_get(v_x_241_, 0);
v_n_248_ = lean_ctor_get(v_x_242_, 0);
v___x_249_ = lean_name_eq(v_n_247_, v_n_248_);
return v___x_249_;
}
else
{
uint8_t v___x_250_; 
v___x_250_ = 0;
return v___x_250_;
}
}
case 2:
{
if (lean_obj_tag(v_x_242_) == 2)
{
lean_object* v_e_251_; lean_object* v_e_252_; uint8_t v___x_253_; 
v_e_251_ = lean_ctor_get(v_x_241_, 0);
v_e_252_ = lean_ctor_get(v_x_242_, 0);
v___x_253_ = lean_expr_eqv(v_e_251_, v_e_252_);
return v___x_253_;
}
else
{
uint8_t v___x_254_; 
v___x_254_ = 0;
return v___x_254_;
}
}
case 3:
{
if (lean_obj_tag(v_x_242_) == 3)
{
lean_object* v_s_255_; lean_object* v_s_256_; 
v_s_255_ = lean_ctor_get(v_x_241_, 0);
v_s_256_ = lean_ctor_get(v_x_242_, 0);
v_x_241_ = v_s_255_;
v_x_242_ = v_s_256_;
goto _start;
}
else
{
uint8_t v___x_258_; 
v___x_258_ = 0;
return v___x_258_;
}
}
default: 
{
if (lean_obj_tag(v_x_242_) == 4)
{
uint8_t v___x_259_; 
v___x_259_ = 1;
return v___x_259_;
}
else
{
uint8_t v___x_260_; 
v___x_260_ = 0;
return v___x_260_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq___boxed(lean_object* v_x_261_, lean_object* v_x_262_){
_start:
{
uint8_t v_res_263_; lean_object* v_r_264_; 
v_res_263_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHypSource_beq(v_x_261_, v_x_262_);
lean_dec(v_x_262_);
lean_dec(v_x_261_);
v_r_264_ = lean_box(v_res_263_);
return v_r_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten(lean_object* v_s_267_){
_start:
{
if (lean_obj_tag(v_s_267_) == 3)
{
lean_object* v_s_268_; 
v_s_268_ = lean_ctor_get(v_s_267_, 0);
v_s_267_ = v_s_268_;
goto _start;
}
else
{
lean_inc(v_s_267_);
return v_s_267_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten___boxed(lean_object* v_s_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten(v_s_270_);
lean_dec(v_s_270_);
return v_res_271_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__0));
v___x_274_ = l_Lean_stringToMessageData(v___x_273_);
return v___x_274_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_276_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__2));
v___x_277_ = l_Lean_stringToMessageData(v___x_276_);
return v___x_277_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__4));
v___x_280_ = l_Lean_stringToMessageData(v___x_279_);
return v___x_280_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7(void){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__6));
v___x_283_ = l_Lean_stringToMessageData(v___x_282_);
return v___x_283_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9(void){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__8));
v___x_286_ = l_Lean_stringToMessageData(v___x_285_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go(lean_object* v_s_287_){
_start:
{
switch(lean_obj_tag(v_s_287_))
{
case 0:
{
lean_object* v_fvar_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v_fvar_288_ = lean_ctor_get(v_s_287_, 0);
lean_inc(v_fvar_288_);
lean_dec_ref_known(v_s_287_, 1);
v___x_289_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__1);
v___x_290_ = l_Lean_mkFVar(v_fvar_288_);
v___x_291_ = l_Lean_MessageData_ofExpr(v___x_290_);
v___x_292_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_289_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
return v___x_292_;
}
case 1:
{
lean_object* v_n_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v_n_293_ = lean_ctor_get(v_s_287_, 0);
lean_inc(v_n_293_);
lean_dec_ref_known(v_s_287_, 1);
v___x_294_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__3);
v___x_295_ = l_Lean_MessageData_ofName(v_n_293_);
v___x_296_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_294_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
return v___x_296_;
}
case 2:
{
lean_object* v_e_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v_e_297_ = lean_ctor_get(v_s_287_, 0);
lean_inc_ref(v_e_297_);
lean_dec_ref_known(v_s_287_, 1);
v___x_298_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__5);
v___x_299_ = l_Lean_MessageData_ofExpr(v_e_297_);
v___x_300_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_298_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
return v___x_300_;
}
case 3:
{
lean_object* v_s_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v_s_301_ = lean_ctor_get(v_s_287_, 0);
lean_inc(v_s_301_);
lean_dec_ref_known(v_s_287_, 1);
v___x_302_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__7);
v___x_303_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_stripFlatten(v_s_301_);
lean_dec(v_s_301_);
v___x_304_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go(v___x_303_);
v___x_305_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_302_);
lean_ctor_set(v___x_305_, 1, v___x_304_);
return v___x_305_;
}
default: 
{
lean_object* v___x_306_; 
v___x_306_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9, &l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHypSource_go___closed__9);
return v___x_306_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = lean_box(0);
v___x_310_ = l_unsafeCast___redArg(v___x_309_);
return v___x_310_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_314_ = lean_box(0);
v___x_315_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__2));
v___x_316_ = l_Lean_Expr_const___override(v___x_315_, v___x_314_);
return v___x_316_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__4(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_317_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default;
v___x_318_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__3);
v___x_319_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__0);
v___x_320_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
lean_ctor_set(v___x_320_, 1, v___x_318_);
lean_ctor_set(v___x_320_, 2, v___x_318_);
lean_ctor_set(v___x_320_, 3, v___x_317_);
return v___x_320_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default(void){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default___closed__4);
return v___x_321_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp(void){
_start:
{
lean_object* v___x_322_; 
v___x_322_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default;
return v___x_322_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0(lean_object* v_lhs_323_, lean_object* v_rhs_324_){
_start:
{
lean_object* v_type_325_; lean_object* v_type_326_; uint8_t v___x_327_; 
v_type_325_ = lean_ctor_get(v_lhs_323_, 1);
v_type_326_ = lean_ctor_get(v_rhs_324_, 1);
v___x_327_ = lean_expr_eqv(v_type_325_, v_type_326_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0___boxed(lean_object* v_lhs_328_, lean_object* v_rhs_329_){
_start:
{
uint8_t v_res_330_; lean_object* v_r_331_; 
v_res_330_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqHyp___lam__0(v_lhs_328_, v_rhs_329_);
lean_dec_ref(v_rhs_329_);
lean_dec_ref(v_lhs_328_);
v_r_331_ = lean_box(v_res_330_);
return v_r_331_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0(lean_object* v_hyp_334_){
_start:
{
lean_object* v_type_335_; uint64_t v___x_336_; 
v_type_335_ = lean_ctor_get(v_hyp_334_, 1);
v___x_336_ = l_Lean_Expr_hash(v_type_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0___boxed(lean_object* v_hyp_337_){
_start:
{
uint64_t v_res_338_; lean_object* v_r_339_; 
v_res_338_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instHashableHyp___lam__0(v_hyp_337_);
lean_dec_ref(v_hyp_337_);
v_r_339_ = lean_box_uint64(v_res_338_);
return v_r_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instToMessageDataHyp___lam__0(lean_object* v_hyp_342_){
_start:
{
lean_object* v_type_343_; lean_object* v___x_344_; 
v_type_343_ = lean_ctor_get(v_hyp_342_, 1);
lean_inc_ref(v_type_343_);
lean_dec_ref(v_hyp_342_);
v___x_344_ = l_Lean_MessageData_ofExpr(v_type_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx(lean_object* v_x_347_){
_start:
{
if (lean_obj_tag(v_x_347_) == 0)
{
lean_object* v___x_348_; 
v___x_348_ = lean_unsigned_to_nat(0u);
return v___x_348_;
}
else
{
lean_object* v___x_349_; 
v___x_349_ = lean_unsigned_to_nat(1u);
return v___x_349_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx___boxed(lean_object* v_x_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorIdx(v_x_350_);
lean_dec(v_x_350_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(lean_object* v_t_352_, lean_object* v_k_353_){
_start:
{
if (lean_obj_tag(v_t_352_) == 0)
{
lean_object* v_restrictedTypes_354_; lean_object* v___x_355_; 
v_restrictedTypes_354_ = lean_ctor_get(v_t_352_, 0);
lean_inc(v_restrictedTypes_354_);
lean_dec_ref_known(v_t_352_, 1);
v___x_355_ = lean_apply_1(v_k_353_, v_restrictedTypes_354_);
return v___x_355_;
}
else
{
return v_k_353_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim(lean_object* v_motive_356_, lean_object* v_ctorIdx_357_, lean_object* v_t_358_, lean_object* v_h_359_, lean_object* v_k_360_){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_358_, v_k_360_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___boxed(lean_object* v_motive_362_, lean_object* v_ctorIdx_363_, lean_object* v_t_364_, lean_object* v_h_365_, lean_object* v_k_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim(v_motive_362_, v_ctorIdx_363_, v_t_364_, v_h_365_, v_k_366_);
lean_dec(v_ctorIdx_363_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_solve_elim___redArg(lean_object* v_t_368_, lean_object* v_solve_369_){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_368_, v_solve_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_solve_elim(lean_object* v_motive_371_, lean_object* v_t_372_, lean_object* v_h_373_, lean_object* v_solve_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_372_, v_solve_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_push_elim___redArg(lean_object* v_t_376_, lean_object* v_push_377_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_376_, v_push_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_push_elim(lean_object* v_motive_379_, lean_object* v_t_380_, lean_object* v_h_381_, lean_object* v_push_382_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_ctorElim___redArg(v_t_380_, v_push_382_);
return v___x_383_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(lean_object* v_x_384_){
_start:
{
if (lean_obj_tag(v_x_384_) == 0)
{
uint8_t v___x_385_; 
v___x_385_ = 0;
return v___x_385_;
}
else
{
uint8_t v___x_386_; 
v___x_386_ = 1;
return v___x_386_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush___boxed(lean_object* v_x_387_){
_start:
{
uint8_t v_res_388_; lean_object* v_r_389_; 
v_res_388_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(v_x_387_);
lean_dec(v_x_387_);
v_r_389_ = lean_box(v_res_388_);
return v_r_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(lean_object* v_x_390_){
_start:
{
if (lean_obj_tag(v_x_390_) == 0)
{
lean_object* v_restrictedTypes_391_; 
v_restrictedTypes_391_ = lean_ctor_get(v_x_390_, 0);
lean_inc(v_restrictedTypes_391_);
return v_restrictedTypes_391_;
}
else
{
lean_object* v___x_392_; 
v___x_392_ = lean_box(0);
return v___x_392_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes___boxed(lean_object* v_x_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(v_x_393_);
lean_dec(v_x_393_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig(lean_object* v_mode_395_, lean_object* v_config_396_){
_start:
{
if (lean_obj_tag(v_mode_395_) == 0)
{
return v_config_396_;
}
else
{
lean_object* v_timeout_397_; uint8_t v_trimProofs_398_; uint8_t v_binaryProofs_399_; uint8_t v_acNf_400_; uint8_t v_graphviz_401_; lean_object* v_maxSteps_402_; uint8_t v_shortCircuit_403_; uint8_t v_solverMode_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_412_; 
v_timeout_397_ = lean_ctor_get(v_config_396_, 0);
v_trimProofs_398_ = lean_ctor_get_uint8(v_config_396_, sizeof(void*)*2);
v_binaryProofs_399_ = lean_ctor_get_uint8(v_config_396_, sizeof(void*)*2 + 1);
v_acNf_400_ = lean_ctor_get_uint8(v_config_396_, sizeof(void*)*2 + 2);
v_graphviz_401_ = lean_ctor_get_uint8(v_config_396_, sizeof(void*)*2 + 8);
v_maxSteps_402_ = lean_ctor_get(v_config_396_, 1);
v_shortCircuit_403_ = lean_ctor_get_uint8(v_config_396_, sizeof(void*)*2 + 9);
v_solverMode_404_ = lean_ctor_get_uint8(v_config_396_, sizeof(void*)*2 + 10);
v_isSharedCheck_412_ = !lean_is_exclusive(v_config_396_);
if (v_isSharedCheck_412_ == 0)
{
v___x_406_ = v_config_396_;
v_isShared_407_ = v_isSharedCheck_412_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_maxSteps_402_);
lean_inc(v_timeout_397_);
lean_dec(v_config_396_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_412_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
uint8_t v___x_408_; lean_object* v___x_410_; 
v___x_408_ = 0;
if (v_isShared_407_ == 0)
{
v___x_410_ = v___x_406_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 2, 11);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_timeout_397_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v_maxSteps_402_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, sizeof(void*)*2, v_trimProofs_398_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, sizeof(void*)*2 + 1, v_binaryProofs_399_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, sizeof(void*)*2 + 2, v_acNf_400_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, sizeof(void*)*2 + 8, v_graphviz_401_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, sizeof(void*)*2 + 9, v_shortCircuit_403_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, sizeof(void*)*2 + 10, v_solverMode_404_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
lean_ctor_set_uint8(v___x_410_, sizeof(void*)*2 + 3, v___x_408_);
lean_ctor_set_uint8(v___x_410_, sizeof(void*)*2 + 4, v___x_408_);
lean_ctor_set_uint8(v___x_410_, sizeof(void*)*2 + 5, v___x_408_);
lean_ctor_set_uint8(v___x_410_, sizeof(void*)*2 + 6, v___x_408_);
lean_ctor_set_uint8(v___x_410_, sizeof(void*)*2 + 7, v___x_408_);
return v___x_410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig___boxed(lean_object* v_mode_413_, lean_object* v_config_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig(v_mode_413_, v_config_414_);
lean_dec(v_mode_413_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessContext_new(lean_object* v_mode_416_, lean_object* v_config_417_){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_adjustConfig(v_mode_416_, v_config_417_);
v___x_419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_419_, 0, v___x_418_);
lean_ctor_set(v___x_419_, 1, v_mode_416_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx(uint8_t v_x_420_){
_start:
{
if (v_x_420_ == 0)
{
lean_object* v___x_421_; 
v___x_421_ = lean_unsigned_to_nat(0u);
return v___x_421_;
}
else
{
lean_object* v___x_422_; 
v___x_422_ = lean_unsigned_to_nat(1u);
return v___x_422_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx___boxed(lean_object* v_x_423_){
_start:
{
uint8_t v_x_boxed_424_; lean_object* v_res_425_; 
v_x_boxed_424_ = lean_unbox(v_x_423_);
v_res_425_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorIdx(v_x_boxed_424_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg(lean_object* v_k_426_){
_start:
{
lean_inc(v_k_426_);
return v_k_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg___boxed(lean_object* v_k_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___redArg(v_k_427_);
lean_dec(v_k_427_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim(lean_object* v_motive_429_, lean_object* v_ctorIdx_430_, uint8_t v_t_431_, lean_object* v_h_432_, lean_object* v_k_433_){
_start:
{
lean_inc(v_k_433_);
return v_k_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim___boxed(lean_object* v_motive_434_, lean_object* v_ctorIdx_435_, lean_object* v_t_436_, lean_object* v_h_437_, lean_object* v_k_438_){
_start:
{
uint8_t v_t_boxed_439_; lean_object* v_res_440_; 
v_t_boxed_439_ = lean_unbox(v_t_436_);
v_res_440_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ctorElim(v_motive_434_, v_ctorIdx_435_, v_t_boxed_439_, v_h_437_, v_k_438_);
lean_dec(v_k_438_);
lean_dec(v_ctorIdx_435_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg(lean_object* v_rewrite_441_){
_start:
{
lean_inc(v_rewrite_441_);
return v_rewrite_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg___boxed(lean_object* v_rewrite_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___redArg(v_rewrite_442_);
lean_dec(v_rewrite_442_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim(lean_object* v_motive_444_, uint8_t v_t_445_, lean_object* v_h_446_, lean_object* v_rewrite_447_){
_start:
{
lean_inc(v_rewrite_447_);
return v_rewrite_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim___boxed(lean_object* v_motive_448_, lean_object* v_t_449_, lean_object* v_h_450_, lean_object* v_rewrite_451_){
_start:
{
uint8_t v_t_boxed_452_; lean_object* v_res_453_; 
v_t_boxed_452_ = lean_unbox(v_t_449_);
v_res_453_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_rewrite_elim(v_motive_448_, v_t_boxed_452_, v_h_450_, v_rewrite_451_);
lean_dec(v_rewrite_451_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg(lean_object* v_ac_454_){
_start:
{
lean_inc(v_ac_454_);
return v_ac_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg___boxed(lean_object* v_ac_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___redArg(v_ac_455_);
lean_dec(v_ac_455_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim(lean_object* v_motive_457_, uint8_t v_t_458_, lean_object* v_h_459_, lean_object* v_ac_460_){
_start:
{
lean_inc(v_ac_460_);
return v_ac_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim___boxed(lean_object* v_motive_461_, lean_object* v_t_462_, lean_object* v_h_463_, lean_object* v_ac_464_){
_start:
{
uint8_t v_t_boxed_465_; lean_object* v_res_466_; 
v_t_boxed_465_ = lean_unbox(v_t_462_);
v_res_466_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_ac_elim(v_motive_461_, v_t_boxed_465_, v_h_463_, v_ac_464_);
lean_dec(v_ac_464_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx(uint8_t v_x_467_){
_start:
{
if (v_x_467_ == 0)
{
lean_object* v___x_468_; 
v___x_468_ = lean_unsigned_to_nat(0u);
return v___x_468_;
}
else
{
lean_object* v___x_469_; 
v___x_469_ = lean_unsigned_to_nat(1u);
return v___x_469_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx___boxed(lean_object* v_x_470_){
_start:
{
uint8_t v_x_boxed_471_; lean_object* v_res_472_; 
v_x_boxed_471_ = lean_unbox(v_x_470_);
v_res_472_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorIdx(v_x_boxed_471_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg(lean_object* v_k_473_){
_start:
{
lean_inc(v_k_473_);
return v_k_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg___boxed(lean_object* v_k_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___redArg(v_k_474_);
lean_dec(v_k_474_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim(lean_object* v_motive_476_, lean_object* v_ctorIdx_477_, uint8_t v_t_478_, lean_object* v_h_479_, lean_object* v_k_480_){
_start:
{
lean_inc(v_k_480_);
return v_k_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim___boxed(lean_object* v_motive_481_, lean_object* v_ctorIdx_482_, lean_object* v_t_483_, lean_object* v_h_484_, lean_object* v_k_485_){
_start:
{
uint8_t v_t_boxed_486_; lean_object* v_res_487_; 
v_t_boxed_486_ = lean_unbox(v_t_483_);
v_res_487_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_ctorElim(v_motive_481_, v_ctorIdx_482_, v_t_boxed_486_, v_h_484_, v_k_485_);
lean_dec(v_k_485_);
lean_dec(v_ctorIdx_482_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg(lean_object* v_rewrite_488_){
_start:
{
lean_inc(v_rewrite_488_);
return v_rewrite_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg___boxed(lean_object* v_rewrite_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___redArg(v_rewrite_489_);
lean_dec(v_rewrite_489_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim(lean_object* v_motive_491_, uint8_t v_t_492_, lean_object* v_h_493_, lean_object* v_rewrite_494_){
_start:
{
lean_inc(v_rewrite_494_);
return v_rewrite_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim___boxed(lean_object* v_motive_495_, lean_object* v_t_496_, lean_object* v_h_497_, lean_object* v_rewrite_498_){
_start:
{
uint8_t v_t_boxed_499_; lean_object* v_res_500_; 
v_t_boxed_499_ = lean_unbox(v_t_496_);
v_res_500_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_rewrite_elim(v_motive_495_, v_t_boxed_499_, v_h_497_, v_rewrite_498_);
lean_dec(v_rewrite_498_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg(lean_object* v_reduction_501_){
_start:
{
lean_inc(v_reduction_501_);
return v_reduction_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg___boxed(lean_object* v_reduction_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___redArg(v_reduction_502_);
lean_dec(v_reduction_502_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim(lean_object* v_motive_504_, uint8_t v_t_505_, lean_object* v_h_506_, lean_object* v_reduction_507_){
_start:
{
lean_inc(v_reduction_507_);
return v_reduction_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim___boxed(lean_object* v_motive_508_, lean_object* v_t_509_, lean_object* v_h_510_, lean_object* v_reduction_511_){
_start:
{
uint8_t v_t_boxed_512_; lean_object* v_res_513_; 
v_t_boxed_512_ = lean_unbox(v_t_509_);
v_res_513_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_reduction_elim(v_motive_508_, v_t_boxed_512_, v_h_510_, v_reduction_511_);
lean_dec(v_reduction_511_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get(uint8_t v_x_514_, lean_object* v_x_515_){
_start:
{
if (v_x_514_ == 0)
{
lean_object* v_rewriteSimp_516_; 
v_rewriteSimp_516_ = lean_ctor_get(v_x_515_, 1);
lean_inc_ref(v_rewriteSimp_516_);
return v_rewriteSimp_516_;
}
else
{
lean_object* v_ac_517_; 
v_ac_517_ = lean_ctor_get(v_x_515_, 3);
lean_inc_ref(v_ac_517_);
return v_ac_517_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get___boxed(lean_object* v_x_518_, lean_object* v_x_519_){
_start:
{
uint8_t v_x_15__boxed_520_; lean_object* v_res_521_; 
v_x_15__boxed_520_ = lean_unbox(v_x_518_);
v_res_521_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get(v_x_15__boxed_520_, v_x_519_);
lean_dec_ref(v_x_519_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(uint8_t v_x_522_, lean_object* v_x_523_, lean_object* v_x_524_){
_start:
{
if (v_x_522_ == 0)
{
lean_object* v_reduction_525_; lean_object* v_rewriteDSimp_526_; lean_object* v_ac_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
v_reduction_525_ = lean_ctor_get(v_x_524_, 0);
v_rewriteDSimp_526_ = lean_ctor_get(v_x_524_, 2);
v_ac_527_ = lean_ctor_get(v_x_524_, 3);
v_isSharedCheck_534_ = !lean_is_exclusive(v_x_524_);
if (v_isSharedCheck_534_ == 0)
{
lean_object* v_unused_535_; 
v_unused_535_ = lean_ctor_get(v_x_524_, 1);
lean_dec(v_unused_535_);
v___x_529_ = v_x_524_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_ac_527_);
lean_inc(v_rewriteDSimp_526_);
lean_inc(v_reduction_525_);
lean_dec(v_x_524_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 1, v_x_523_);
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_reduction_525_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v_x_523_);
lean_ctor_set(v_reuseFailAlloc_533_, 2, v_rewriteDSimp_526_);
lean_ctor_set(v_reuseFailAlloc_533_, 3, v_ac_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
else
{
lean_object* v_reduction_536_; lean_object* v_rewriteSimp_537_; lean_object* v_rewriteDSimp_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_545_; 
v_reduction_536_ = lean_ctor_get(v_x_524_, 0);
v_rewriteSimp_537_ = lean_ctor_get(v_x_524_, 1);
v_rewriteDSimp_538_ = lean_ctor_get(v_x_524_, 2);
v_isSharedCheck_545_ = !lean_is_exclusive(v_x_524_);
if (v_isSharedCheck_545_ == 0)
{
lean_object* v_unused_546_; 
v_unused_546_ = lean_ctor_get(v_x_524_, 3);
lean_dec(v_unused_546_);
v___x_540_ = v_x_524_;
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_rewriteDSimp_538_);
lean_inc(v_rewriteSimp_537_);
lean_inc(v_reduction_536_);
lean_dec(v_x_524_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_543_; 
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 3, v_x_523_);
v___x_543_ = v___x_540_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_reduction_536_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_rewriteSimp_537_);
lean_ctor_set(v_reuseFailAlloc_544_, 2, v_rewriteDSimp_538_);
lean_ctor_set(v_reuseFailAlloc_544_, 3, v_x_523_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set___boxed(lean_object* v_x_547_, lean_object* v_x_548_, lean_object* v_x_549_){
_start:
{
uint8_t v_x_28__boxed_550_; lean_object* v_res_551_; 
v_x_28__boxed_550_ = lean_unbox(v_x_547_);
v_res_551_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(v_x_28__boxed_550_, v_x_548_, v_x_549_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get(uint8_t v_x_552_, lean_object* v_x_553_){
_start:
{
if (v_x_552_ == 0)
{
lean_object* v_rewriteDSimp_554_; 
v_rewriteDSimp_554_ = lean_ctor_get(v_x_553_, 2);
lean_inc_ref(v_rewriteDSimp_554_);
return v_rewriteDSimp_554_;
}
else
{
lean_object* v_reduction_555_; 
v_reduction_555_ = lean_ctor_get(v_x_553_, 0);
lean_inc_ref(v_reduction_555_);
return v_reduction_555_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get___boxed(lean_object* v_x_556_, lean_object* v_x_557_){
_start:
{
uint8_t v_x_15__boxed_558_; lean_object* v_res_559_; 
v_x_15__boxed_558_ = lean_unbox(v_x_556_);
v_res_559_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get(v_x_15__boxed_558_, v_x_557_);
lean_dec_ref(v_x_557_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(uint8_t v_x_560_, lean_object* v_x_561_, lean_object* v_x_562_){
_start:
{
if (v_x_560_ == 0)
{
lean_object* v_reduction_563_; lean_object* v_rewriteSimp_564_; lean_object* v_ac_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
v_reduction_563_ = lean_ctor_get(v_x_562_, 0);
v_rewriteSimp_564_ = lean_ctor_get(v_x_562_, 1);
v_ac_565_ = lean_ctor_get(v_x_562_, 3);
v_isSharedCheck_572_ = !lean_is_exclusive(v_x_562_);
if (v_isSharedCheck_572_ == 0)
{
lean_object* v_unused_573_; 
v_unused_573_ = lean_ctor_get(v_x_562_, 2);
lean_dec(v_unused_573_);
v___x_567_ = v_x_562_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_ac_565_);
lean_inc(v_rewriteSimp_564_);
lean_inc(v_reduction_563_);
lean_dec(v_x_562_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 2, v_x_561_);
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_reduction_563_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v_rewriteSimp_564_);
lean_ctor_set(v_reuseFailAlloc_571_, 2, v_x_561_);
lean_ctor_set(v_reuseFailAlloc_571_, 3, v_ac_565_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
else
{
lean_object* v_rewriteSimp_574_; lean_object* v_rewriteDSimp_575_; lean_object* v_ac_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_583_; 
v_rewriteSimp_574_ = lean_ctor_get(v_x_562_, 1);
v_rewriteDSimp_575_ = lean_ctor_get(v_x_562_, 2);
v_ac_576_ = lean_ctor_get(v_x_562_, 3);
v_isSharedCheck_583_ = !lean_is_exclusive(v_x_562_);
if (v_isSharedCheck_583_ == 0)
{
lean_object* v_unused_584_; 
v_unused_584_ = lean_ctor_get(v_x_562_, 0);
lean_dec(v_unused_584_);
v___x_578_ = v_x_562_;
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_ac_576_);
lean_inc(v_rewriteDSimp_575_);
lean_inc(v_rewriteSimp_574_);
lean_dec(v_x_562_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v_x_561_);
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_x_561_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v_rewriteSimp_574_);
lean_ctor_set(v_reuseFailAlloc_582_, 2, v_rewriteDSimp_575_);
lean_ctor_set(v_reuseFailAlloc_582_, 3, v_ac_576_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set___boxed(lean_object* v_x_585_, lean_object* v_x_586_, lean_object* v_x_587_){
_start:
{
uint8_t v_x_28__boxed_588_; lean_object* v_res_589_; 
v_x_28__boxed_588_ = lean_unbox(v_x_585_);
v_res_589_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(v_x_28__boxed_588_, v_x_586_, v_x_587_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(lean_object* v_hyp_595_, lean_object* v_result_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_){
_start:
{
if (lean_obj_tag(v_result_596_) == 0)
{
lean_object* v___x_603_; 
lean_dec_ref_known(v_result_596_, 0);
v___x_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_603_, 0, v_hyp_595_);
return v___x_603_;
}
else
{
lean_object* v_e_x27_604_; lean_object* v_proof_605_; lean_object* v_name_606_; lean_object* v_type_607_; lean_object* v_value_608_; lean_object* v_source_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_638_; 
v_e_x27_604_ = lean_ctor_get(v_result_596_, 0);
lean_inc_ref(v_e_x27_604_);
v_proof_605_ = lean_ctor_get(v_result_596_, 1);
lean_inc_ref(v_proof_605_);
lean_dec_ref_known(v_result_596_, 2);
v_name_606_ = lean_ctor_get(v_hyp_595_, 0);
v_type_607_ = lean_ctor_get(v_hyp_595_, 1);
v_value_608_ = lean_ctor_get(v_hyp_595_, 2);
v_source_609_ = lean_ctor_get(v_hyp_595_, 3);
v_isSharedCheck_638_ = !lean_is_exclusive(v_hyp_595_);
if (v_isSharedCheck_638_ == 0)
{
v___x_611_ = v_hyp_595_;
v_isShared_612_ = v_isSharedCheck_638_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_source_609_);
lean_inc(v_value_608_);
lean_inc(v_type_607_);
lean_inc(v_name_606_);
lean_dec(v_hyp_595_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_638_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_613_; 
lean_inc_ref(v_type_607_);
v___x_613_ = l_Lean_Meta_Sym_getLevel___redArg(v_type_607_, v_a_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_629_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_629_ == 0)
{
v___x_616_ = v___x_613_;
v_isShared_617_ = v_isSharedCheck_629_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_613_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_629_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_624_; 
v___x_618_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___closed__2));
v___x_619_ = lean_box(0);
v___x_620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_620_, 0, v_a_614_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
v___x_621_ = l_Lean_mkConst(v___x_618_, v___x_620_);
lean_inc_ref(v_e_x27_604_);
v___x_622_ = l_Lean_mkApp4(v___x_621_, v_type_607_, v_e_x27_604_, v_proof_605_, v_value_608_);
if (v_isShared_612_ == 0)
{
lean_ctor_set(v___x_611_, 2, v___x_622_);
lean_ctor_set(v___x_611_, 1, v_e_x27_604_);
v___x_624_ = v___x_611_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_name_606_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v_e_x27_604_);
lean_ctor_set(v_reuseFailAlloc_628_, 2, v___x_622_);
lean_ctor_set(v_reuseFailAlloc_628_, 3, v_source_609_);
v___x_624_ = v_reuseFailAlloc_628_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
lean_object* v___x_626_; 
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v___x_624_);
v___x_626_ = v___x_616_;
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
}
else
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_637_; 
lean_del_object(v___x_611_);
lean_dec(v_source_609_);
lean_dec_ref(v_value_608_);
lean_dec_ref(v_type_607_);
lean_dec(v_name_606_);
lean_dec_ref(v_proof_605_);
lean_dec_ref(v_e_x27_604_);
v_a_630_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_637_ == 0)
{
v___x_632_ = v___x_613_;
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_613_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_a_630_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg___boxed(lean_object* v_hyp_639_, lean_object* v_result_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v_hyp_639_, v_result_640_, v_a_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_);
lean_dec(v_a_645_);
lean_dec_ref(v_a_644_);
lean_dec(v_a_643_);
lean_dec_ref(v_a_642_);
lean_dec(v_a_641_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult(lean_object* v_hyp_648_, lean_object* v_result_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v_hyp_648_, v_result_649_, v_a_651_, v_a_652_, v_a_653_, v_a_654_, v_a_655_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___boxed(lean_object* v_hyp_658_, lean_object* v_result_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult(v_hyp_658_, v_result_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_);
lean_dec(v_a_665_);
lean_dec_ref(v_a_664_);
lean_dec(v_a_663_);
lean_dec_ref(v_a_662_);
lean_dec(v_a_661_);
lean_dec_ref(v_a_660_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(lean_object* v_hyp_668_, lean_object* v_result_669_){
_start:
{
lean_object* v_name_671_; lean_object* v_type_672_; lean_object* v_value_673_; lean_object* v_source_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_683_; 
v_name_671_ = lean_ctor_get(v_hyp_668_, 0);
v_type_672_ = lean_ctor_get(v_hyp_668_, 1);
v_value_673_ = lean_ctor_get(v_hyp_668_, 2);
v_source_674_ = lean_ctor_get(v_hyp_668_, 3);
v_isSharedCheck_683_ = !lean_is_exclusive(v_hyp_668_);
if (v_isSharedCheck_683_ == 0)
{
v___x_676_ = v_hyp_668_;
v_isShared_677_ = v_isSharedCheck_683_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_source_674_);
lean_inc(v_value_673_);
lean_inc(v_type_672_);
lean_inc(v_name_671_);
lean_dec(v_hyp_668_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_683_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_678_; lean_object* v___x_680_; 
v___x_678_ = l_Lean_Meta_Sym_DSimp_Result_getResultExpr(v_type_672_, v_result_669_);
lean_dec_ref(v_type_672_);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 1, v___x_678_);
v___x_680_ = v___x_676_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_name_671_);
lean_ctor_set(v_reuseFailAlloc_682_, 1, v___x_678_);
lean_ctor_set(v_reuseFailAlloc_682_, 2, v_value_673_);
lean_ctor_set(v_reuseFailAlloc_682_, 3, v_source_674_);
v___x_680_ = v_reuseFailAlloc_682_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
lean_object* v___x_681_; 
v___x_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
return v___x_681_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg___boxed(lean_object* v_hyp_684_, lean_object* v_result_685_, lean_object* v_a_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(v_hyp_684_, v_result_685_);
lean_dec_ref(v_result_685_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult(lean_object* v_hyp_688_, lean_object* v_result_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(v_hyp_688_, v_result_689_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___boxed(lean_object* v_hyp_698_, lean_object* v_result_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult(v_hyp_698_, v_result_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_);
lean_dec(v_a_705_);
lean_dec_ref(v_a_704_);
lean_dec(v_a_703_);
lean_dec_ref(v_a_702_);
lean_dec(v_a_701_);
lean_dec_ref(v_a_700_);
lean_dec_ref(v_result_699_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg(lean_object* v_a_708_){
_start:
{
lean_object* v_config_710_; lean_object* v___x_711_; 
v_config_710_ = lean_ctor_get(v_a_708_, 0);
lean_inc_ref(v_config_710_);
v___x_711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_711_, 0, v_config_710_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg___boxed(lean_object* v_a_712_, lean_object* v_a_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___redArg(v_a_712_);
lean_dec_ref(v_a_712_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig(lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_){
_start:
{
lean_object* v_config_727_; lean_object* v___x_728_; 
v_config_727_ = lean_ctor_get(v_a_715_, 0);
lean_inc_ref(v_config_727_);
v___x_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_728_, 0, v_config_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig___boxed(lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getConfig(v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_, v_a_737_, v_a_738_, v_a_739_);
lean_dec(v_a_739_);
lean_dec_ref(v_a_738_);
lean_dec(v_a_737_);
lean_dec_ref(v_a_736_);
lean_dec(v_a_735_);
lean_dec_ref(v_a_734_);
lean_dec(v_a_733_);
lean_dec_ref(v_a_732_);
lean_dec(v_a_731_);
lean_dec(v_a_730_);
lean_dec_ref(v_a_729_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg(lean_object* v_a_742_){
_start:
{
lean_object* v_mode_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v_mode_744_ = lean_ctor_get(v_a_742_, 1);
v___x_745_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(v_mode_744_);
v___x_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg___boxed(lean_object* v_a_747_, lean_object* v_a_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___redArg(v_a_747_);
lean_dec_ref(v_a_747_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes(lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_){
_start:
{
lean_object* v_mode_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v_mode_762_ = lean_ctor_get(v_a_750_, 1);
v___x_763_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_restrictedTypes(v_mode_762_);
v___x_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_764_, 0, v___x_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes___boxed(lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getRestrictedTypes(v_a_765_, v_a_766_, v_a_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_, v_a_775_);
lean_dec(v_a_775_);
lean_dec_ref(v_a_774_);
lean_dec(v_a_773_);
lean_dec_ref(v_a_772_);
lean_dec(v_a_771_);
lean_dec_ref(v_a_770_);
lean_dec(v_a_769_);
lean_dec_ref(v_a_768_);
lean_dec(v_a_767_);
lean_dec(v_a_766_);
lean_dec_ref(v_a_765_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg(lean_object* v_a_778_){
_start:
{
lean_object* v_mode_780_; uint8_t v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v_mode_780_ = lean_ctor_get(v_a_778_, 1);
v___x_781_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(v_mode_780_);
v___x_782_ = lean_box(v___x_781_);
v___x_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_783_, 0, v___x_782_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg___boxed(lean_object* v_a_784_, lean_object* v_a_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___redArg(v_a_784_);
lean_dec_ref(v_a_784_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode(lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_){
_start:
{
lean_object* v_mode_799_; uint8_t v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v_mode_799_ = lean_ctor_get(v_a_787_, 1);
v___x_800_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(v_mode_799_);
v___x_801_ = lean_box(v___x_800_);
v___x_802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode___boxed(lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_isPushMode(v_a_803_, v_a_804_, v_a_805_, v_a_806_, v_a_807_, v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_);
lean_dec(v_a_813_);
lean_dec_ref(v_a_812_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_a_807_);
lean_dec_ref(v_a_806_);
lean_dec(v_a_805_);
lean_dec(v_a_804_);
lean_dec_ref(v_a_803_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg(lean_object* v_a_816_){
_start:
{
lean_object* v___x_818_; lean_object* v_target_819_; lean_object* v___x_820_; 
v___x_818_ = lean_st_ref_get(v_a_816_);
v_target_819_ = lean_ctor_get(v___x_818_, 2);
lean_inc_ref(v_target_819_);
lean_dec(v___x_818_);
v___x_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_820_, 0, v_target_819_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg___boxed(lean_object* v_a_821_, lean_object* v_a_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___redArg(v_a_821_);
lean_dec(v_a_821_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget(lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_){
_start:
{
lean_object* v___x_836_; lean_object* v_target_837_; lean_object* v___x_838_; 
v___x_836_ = lean_st_ref_get(v_a_825_);
v_target_837_ = lean_ctor_get(v___x_836_, 2);
lean_inc_ref(v_target_837_);
lean_dec(v___x_836_);
v___x_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_838_, 0, v_target_837_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget___boxed(lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTarget(v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_);
lean_dec(v_a_849_);
lean_dec_ref(v_a_848_);
lean_dec(v_a_847_);
lean_dec_ref(v_a_846_);
lean_dec(v_a_845_);
lean_dec_ref(v_a_844_);
lean_dec(v_a_843_);
lean_dec_ref(v_a_842_);
lean_dec(v_a_841_);
lean_dec(v_a_840_);
lean_dec_ref(v_a_839_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg(lean_object* v_a_852_){
_start:
{
lean_object* v___x_854_; lean_object* v_target_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_854_ = lean_st_ref_get(v_a_852_);
v_target_855_ = lean_ctor_get(v___x_854_, 2);
lean_inc_ref(v_target_855_);
lean_dec(v___x_854_);
v___x_856_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(v_target_855_);
lean_dec_ref(v_target_855_);
v___x_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg___boxed(lean_object* v_a_858_, lean_object* v_a_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___redArg(v_a_858_);
lean_dec(v_a_858_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId(lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_){
_start:
{
lean_object* v___x_873_; lean_object* v_target_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_873_ = lean_st_ref_get(v_a_862_);
v_target_874_ = lean_ctor_get(v___x_873_, 2);
lean_inc_ref(v_target_874_);
lean_dec(v___x_873_);
v___x_875_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(v_target_874_);
lean_dec_ref(v_target_874_);
v___x_876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId___boxed(lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTargetMVarId(v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_, v_a_884_, v_a_885_, v_a_886_, v_a_887_);
lean_dec(v_a_887_);
lean_dec_ref(v_a_886_);
lean_dec(v_a_885_);
lean_dec_ref(v_a_884_);
lean_dec(v_a_883_);
lean_dec_ref(v_a_882_);
lean_dec(v_a_881_);
lean_dec_ref(v_a_880_);
lean_dec(v_a_879_);
lean_dec(v_a_878_);
lean_dec_ref(v_a_877_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg(lean_object* v_target_890_, lean_object* v_a_891_){
_start:
{
lean_object* v___x_893_; lean_object* v_caches_894_; lean_object* v_typeAnalysis_895_; lean_object* v_hypotheses_896_; uint8_t v_didChange_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_907_; 
v___x_893_ = lean_st_ref_take(v_a_891_);
v_caches_894_ = lean_ctor_get(v___x_893_, 0);
v_typeAnalysis_895_ = lean_ctor_get(v___x_893_, 1);
v_hypotheses_896_ = lean_ctor_get(v___x_893_, 3);
v_didChange_897_ = lean_ctor_get_uint8(v___x_893_, sizeof(void*)*4);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_907_ == 0)
{
lean_object* v_unused_908_; 
v_unused_908_ = lean_ctor_get(v___x_893_, 2);
lean_dec(v_unused_908_);
v___x_899_ = v___x_893_;
v_isShared_900_ = v_isSharedCheck_907_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_hypotheses_896_);
lean_inc(v_typeAnalysis_895_);
lean_inc(v_caches_894_);
lean_dec(v___x_893_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_907_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_901_; lean_object* v___x_903_; 
v___x_901_ = lean_box(0);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 2, v_target_890_);
v___x_903_ = v___x_899_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_caches_894_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_typeAnalysis_895_);
lean_ctor_set(v_reuseFailAlloc_906_, 2, v_target_890_);
lean_ctor_set(v_reuseFailAlloc_906_, 3, v_hypotheses_896_);
lean_ctor_set_uint8(v_reuseFailAlloc_906_, sizeof(void*)*4, v_didChange_897_);
v___x_903_ = v_reuseFailAlloc_906_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = lean_st_ref_put(v_a_891_, v___x_903_);
v___x_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_901_);
return v___x_905_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg___boxed(lean_object* v_target_909_, lean_object* v_a_910_, lean_object* v_a_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___redArg(v_target_909_, v_a_910_);
lean_dec(v_a_910_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget(lean_object* v_target_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_){
_start:
{
lean_object* v___x_926_; lean_object* v_caches_927_; lean_object* v_typeAnalysis_928_; lean_object* v_hypotheses_929_; uint8_t v_didChange_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_940_; 
v___x_926_ = lean_st_ref_take(v_a_915_);
v_caches_927_ = lean_ctor_get(v___x_926_, 0);
v_typeAnalysis_928_ = lean_ctor_get(v___x_926_, 1);
v_hypotheses_929_ = lean_ctor_get(v___x_926_, 3);
v_didChange_930_ = lean_ctor_get_uint8(v___x_926_, sizeof(void*)*4);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_940_ == 0)
{
lean_object* v_unused_941_; 
v_unused_941_ = lean_ctor_get(v___x_926_, 2);
lean_dec(v_unused_941_);
v___x_932_ = v___x_926_;
v_isShared_933_ = v_isSharedCheck_940_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_hypotheses_929_);
lean_inc(v_typeAnalysis_928_);
lean_inc(v_caches_927_);
lean_dec(v___x_926_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_940_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_934_; lean_object* v___x_936_; 
v___x_934_ = lean_box(0);
if (v_isShared_933_ == 0)
{
lean_ctor_set(v___x_932_, 2, v_target_913_);
v___x_936_ = v___x_932_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_caches_927_);
lean_ctor_set(v_reuseFailAlloc_939_, 1, v_typeAnalysis_928_);
lean_ctor_set(v_reuseFailAlloc_939_, 2, v_target_913_);
lean_ctor_set(v_reuseFailAlloc_939_, 3, v_hypotheses_929_);
lean_ctor_set_uint8(v_reuseFailAlloc_939_, sizeof(void*)*4, v_didChange_930_);
v___x_936_ = v_reuseFailAlloc_939_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_937_ = lean_st_ref_put(v_a_915_, v___x_936_);
v___x_938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_938_, 0, v___x_934_);
return v___x_938_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget___boxed(lean_object* v_target_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setTarget(v_target_942_, v_a_943_, v_a_944_, v_a_945_, v_a_946_, v_a_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_);
lean_dec(v_a_953_);
lean_dec_ref(v_a_952_);
lean_dec(v_a_951_);
lean_dec_ref(v_a_950_);
lean_dec(v_a_949_);
lean_dec_ref(v_a_948_);
lean_dec(v_a_947_);
lean_dec_ref(v_a_946_);
lean_dec(v_a_945_);
lean_dec(v_a_944_);
lean_dec_ref(v_a_943_);
return v_res_955_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0(void){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = l_instMonadControlReaderT___redArg();
return v___x_956_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1(void){
_start:
{
lean_object* v___x_957_; 
v___x_957_ = l_instMonadControlStateRefT_x27___redArg();
return v___x_957_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2(void){
_start:
{
lean_object* v___x_958_; 
v___x_958_ = l_instMonadEIO___redArg();
return v___x_958_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3(void){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_959_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__2);
v___x_960_ = l_StateRefT_x27_instMonad___redArg(v___x_959_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg(lean_object* v_x_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_, lean_object* v_a_975_){
_start:
{
lean_object* v___x_977_; lean_object* v_target_978_; 
v___x_977_ = lean_st_ref_get(v_a_966_);
v_target_978_ = lean_ctor_get(v___x_977_, 2);
lean_inc_ref(v_target_978_);
lean_dec(v___x_977_);
if (lean_obj_tag(v_target_978_) == 1)
{
lean_object* v_goal_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_1107_; 
v_goal_979_ = lean_ctor_get(v_target_978_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v_target_978_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_981_ = v_target_978_;
v_isShared_982_ = v_isSharedCheck_1107_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_goal_979_);
lean_dec(v_target_978_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_1107_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v_toApplicative_986_; lean_object* v_toFunctor_987_; lean_object* v_toSeq_988_; lean_object* v_toSeqLeft_989_; lean_object* v_toSeqRight_990_; lean_object* v___f_991_; lean_object* v___f_992_; lean_object* v___f_993_; lean_object* v___f_994_; lean_object* v___x_995_; lean_object* v___f_996_; lean_object* v___f_997_; lean_object* v___f_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___f_1004_; lean_object* v___f_1005_; lean_object* v___x_1006_; lean_object* v___f_1007_; lean_object* v___f_1008_; lean_object* v___x_1009_; lean_object* v___f_1010_; lean_object* v___f_1011_; lean_object* v___x_1012_; lean_object* v___f_1013_; lean_object* v___f_1014_; lean_object* v___x_1015_; lean_object* v___f_1016_; lean_object* v___f_1017_; lean_object* v___x_1018_; lean_object* v_toApplicative_1019_; lean_object* v_toFunctor_1020_; lean_object* v_toSeq_1021_; lean_object* v_toSeqLeft_1022_; lean_object* v_toSeqRight_1023_; lean_object* v___f_1024_; lean_object* v___f_1025_; lean_object* v___x_1026_; lean_object* v___f_1027_; lean_object* v___f_1028_; lean_object* v___f_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v_toApplicative_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1105_; 
v___x_983_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0);
v___x_984_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1);
v___x_985_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3);
v_toApplicative_986_ = lean_ctor_get(v___x_985_, 0);
v_toFunctor_987_ = lean_ctor_get(v_toApplicative_986_, 0);
v_toSeq_988_ = lean_ctor_get(v_toApplicative_986_, 2);
v_toSeqLeft_989_ = lean_ctor_get(v_toApplicative_986_, 3);
v_toSeqRight_990_ = lean_ctor_get(v_toApplicative_986_, 4);
v___f_991_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4));
v___f_992_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5));
lean_inc_ref_n(v_toFunctor_987_, 2);
v___f_993_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_993_, 0, v_toFunctor_987_);
v___f_994_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_994_, 0, v_toFunctor_987_);
v___x_995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_995_, 0, v___f_993_);
lean_ctor_set(v___x_995_, 1, v___f_994_);
lean_inc(v_toSeqRight_990_);
v___f_996_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_996_, 0, v_toSeqRight_990_);
lean_inc(v_toSeqLeft_989_);
v___f_997_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_997_, 0, v_toSeqLeft_989_);
lean_inc(v_toSeq_988_);
v___f_998_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_998_, 0, v_toSeq_988_);
v___x_999_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_999_, 0, v___x_995_);
lean_ctor_set(v___x_999_, 1, v___f_991_);
lean_ctor_set(v___x_999_, 2, v___f_998_);
lean_ctor_set(v___x_999_, 3, v___f_997_);
lean_ctor_set(v___x_999_, 4, v___f_996_);
v___x_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
lean_ctor_set(v___x_1000_, 1, v___f_992_);
v___x_1001_ = l_StateRefT_x27_instMonad___redArg(v___x_1000_);
v___x_1002_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1002_, 0, lean_box(0));
lean_closure_set(v___x_1002_, 1, lean_box(0));
lean_closure_set(v___x_1002_, 2, v___x_1001_);
v___x_1003_ = l_instMonadControlTOfPure___redArg(v___x_1002_);
lean_inc_ref(v___x_1003_);
v___f_1004_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1004_, 0, v___x_984_);
lean_closure_set(v___f_1004_, 1, v___x_1003_);
v___f_1005_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1005_, 0, v___x_984_);
lean_closure_set(v___f_1005_, 1, v___x_1003_);
v___x_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___f_1004_);
lean_ctor_set(v___x_1006_, 1, v___f_1005_);
lean_inc_ref(v___x_1006_);
v___f_1007_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1007_, 0, v___x_983_);
lean_closure_set(v___f_1007_, 1, v___x_1006_);
v___f_1008_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1008_, 0, v___x_983_);
lean_closure_set(v___f_1008_, 1, v___x_1006_);
v___x_1009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___f_1007_);
lean_ctor_set(v___x_1009_, 1, v___f_1008_);
lean_inc_ref(v___x_1009_);
v___f_1010_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1010_, 0, v___x_984_);
lean_closure_set(v___f_1010_, 1, v___x_1009_);
v___f_1011_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1011_, 0, v___x_984_);
lean_closure_set(v___f_1011_, 1, v___x_1009_);
v___x_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___f_1010_);
lean_ctor_set(v___x_1012_, 1, v___f_1011_);
lean_inc_ref(v___x_1012_);
v___f_1013_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1013_, 0, v___x_983_);
lean_closure_set(v___f_1013_, 1, v___x_1012_);
v___f_1014_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1014_, 0, v___x_983_);
lean_closure_set(v___f_1014_, 1, v___x_1012_);
v___x_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___f_1013_);
lean_ctor_set(v___x_1015_, 1, v___f_1014_);
lean_inc_ref(v___x_1015_);
v___f_1016_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1016_, 0, v___x_983_);
lean_closure_set(v___f_1016_, 1, v___x_1015_);
v___f_1017_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1017_, 0, v___x_983_);
lean_closure_set(v___f_1017_, 1, v___x_1015_);
v___x_1018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___f_1016_);
lean_ctor_set(v___x_1018_, 1, v___f_1017_);
v_toApplicative_1019_ = lean_ctor_get(v___x_985_, 0);
v_toFunctor_1020_ = lean_ctor_get(v_toApplicative_1019_, 0);
v_toSeq_1021_ = lean_ctor_get(v_toApplicative_1019_, 2);
v_toSeqLeft_1022_ = lean_ctor_get(v_toApplicative_1019_, 3);
v_toSeqRight_1023_ = lean_ctor_get(v_toApplicative_1019_, 4);
lean_inc_ref_n(v_toFunctor_1020_, 2);
v___f_1024_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1024_, 0, v_toFunctor_1020_);
v___f_1025_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1025_, 0, v_toFunctor_1020_);
v___x_1026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___f_1024_);
lean_ctor_set(v___x_1026_, 1, v___f_1025_);
lean_inc(v_toSeqRight_1023_);
v___f_1027_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1027_, 0, v_toSeqRight_1023_);
lean_inc(v_toSeqLeft_1022_);
v___f_1028_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1028_, 0, v_toSeqLeft_1022_);
lean_inc(v_toSeq_1021_);
v___f_1029_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1029_, 0, v_toSeq_1021_);
v___x_1030_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1026_);
lean_ctor_set(v___x_1030_, 1, v___f_991_);
lean_ctor_set(v___x_1030_, 2, v___f_1029_);
lean_ctor_set(v___x_1030_, 3, v___f_1028_);
lean_ctor_set(v___x_1030_, 4, v___f_1027_);
v___x_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
lean_ctor_set(v___x_1031_, 1, v___f_992_);
v___x_1032_ = l_StateRefT_x27_instMonad___redArg(v___x_1031_);
v_toApplicative_1033_ = lean_ctor_get(v___x_1032_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1105_ == 0)
{
lean_object* v_unused_1106_; 
v_unused_1106_ = lean_ctor_get(v___x_1032_, 1);
lean_dec(v_unused_1106_);
v___x_1035_ = v___x_1032_;
v_isShared_1036_ = v_isSharedCheck_1105_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_toApplicative_1033_);
lean_dec(v___x_1032_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1105_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v_toFunctor_1037_; lean_object* v_toSeq_1038_; lean_object* v_toSeqLeft_1039_; lean_object* v_toSeqRight_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1103_; 
v_toFunctor_1037_ = lean_ctor_get(v_toApplicative_1033_, 0);
v_toSeq_1038_ = lean_ctor_get(v_toApplicative_1033_, 2);
v_toSeqLeft_1039_ = lean_ctor_get(v_toApplicative_1033_, 3);
v_toSeqRight_1040_ = lean_ctor_get(v_toApplicative_1033_, 4);
v_isSharedCheck_1103_ = !lean_is_exclusive(v_toApplicative_1033_);
if (v_isSharedCheck_1103_ == 0)
{
lean_object* v_unused_1104_; 
v_unused_1104_ = lean_ctor_get(v_toApplicative_1033_, 1);
lean_dec(v_unused_1104_);
v___x_1042_ = v_toApplicative_1033_;
v_isShared_1043_ = v_isSharedCheck_1103_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_toSeqRight_1040_);
lean_inc(v_toSeqLeft_1039_);
lean_inc(v_toSeq_1038_);
lean_inc(v_toFunctor_1037_);
lean_dec(v_toApplicative_1033_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1103_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___f_1044_; lean_object* v___f_1045_; lean_object* v___f_1046_; lean_object* v___f_1047_; lean_object* v___x_1048_; lean_object* v___f_1049_; lean_object* v___f_1050_; lean_object* v___f_1051_; lean_object* v___x_1053_; 
v___f_1044_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6));
v___f_1045_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7));
lean_inc_ref(v_toFunctor_1037_);
v___f_1046_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1046_, 0, v_toFunctor_1037_);
v___f_1047_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1047_, 0, v_toFunctor_1037_);
v___x_1048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___f_1046_);
lean_ctor_set(v___x_1048_, 1, v___f_1047_);
v___f_1049_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1049_, 0, v_toSeqRight_1040_);
v___f_1050_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1050_, 0, v_toSeqLeft_1039_);
v___f_1051_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1051_, 0, v_toSeq_1038_);
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 4, v___f_1049_);
lean_ctor_set(v___x_1042_, 3, v___f_1050_);
lean_ctor_set(v___x_1042_, 2, v___f_1051_);
lean_ctor_set(v___x_1042_, 1, v___f_1044_);
lean_ctor_set(v___x_1042_, 0, v___x_1048_);
v___x_1053_ = v___x_1042_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v___x_1048_);
lean_ctor_set(v_reuseFailAlloc_1102_, 1, v___f_1044_);
lean_ctor_set(v_reuseFailAlloc_1102_, 2, v___f_1051_);
lean_ctor_set(v_reuseFailAlloc_1102_, 3, v___f_1050_);
lean_ctor_set(v_reuseFailAlloc_1102_, 4, v___f_1049_);
v___x_1053_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
lean_object* v___x_1055_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 1, v___f_1045_);
lean_ctor_set(v___x_1035_, 0, v___x_1053_);
v___x_1055_ = v___x_1035_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v___x_1053_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v___f_1045_);
v___x_1055_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v_mvarId_1061_; lean_object* v___x_1062_; lean_object* v___x_5100__overap_1063_; lean_object* v___x_1064_; 
v___x_1056_ = l_StateRefT_x27_instMonad___redArg(v___x_1055_);
v___x_1057_ = l_ReaderT_instMonad___redArg(v___x_1056_);
v___x_1058_ = l_StateRefT_x27_instMonad___redArg(v___x_1057_);
v___x_1059_ = l_ReaderT_instMonad___redArg(v___x_1058_);
v___x_1060_ = l_ReaderT_instMonad___redArg(v___x_1059_);
v_mvarId_1061_ = lean_ctor_get(v_goal_979_, 1);
lean_inc(v_mvarId_1061_);
v___x_1062_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_GoalM_runCore___boxed), 13, 3);
lean_closure_set(v___x_1062_, 0, lean_box(0));
lean_closure_set(v___x_1062_, 1, v_goal_979_);
lean_closure_set(v___x_1062_, 2, v_x_965_);
v___x_5100__overap_1063_ = l_Lean_MVarId_withContext___redArg(v___x_1018_, v___x_1060_, v_mvarId_1061_, v___x_1062_);
lean_inc(v_a_975_);
lean_inc_ref(v_a_974_);
lean_inc(v_a_973_);
lean_inc_ref(v_a_972_);
lean_inc(v_a_971_);
lean_inc_ref(v_a_970_);
lean_inc(v_a_969_);
lean_inc_ref(v_a_968_);
lean_inc(v_a_967_);
v___x_1064_ = lean_apply_10(v___x_5100__overap_1063_, v_a_967_, v_a_968_, v_a_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, v_a_975_, lean_box(0));
if (lean_obj_tag(v___x_1064_) == 0)
{
lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1092_; 
v_a_1065_ = lean_ctor_get(v___x_1064_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_1064_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1067_ = v___x_1064_;
v_isShared_1068_ = v_isSharedCheck_1092_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_dec(v___x_1064_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1092_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v_fst_1069_; lean_object* v_snd_1070_; lean_object* v___x_1072_; 
v_fst_1069_ = lean_ctor_get(v_a_1065_, 0);
lean_inc(v_fst_1069_);
v_snd_1070_ = lean_ctor_get(v_a_1065_, 1);
lean_inc(v_snd_1070_);
lean_dec(v_a_1065_);
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 0, v_snd_1070_);
v___x_1072_ = v___x_981_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_snd_1070_);
v___x_1072_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
lean_object* v___x_1073_; lean_object* v_caches_1074_; lean_object* v_typeAnalysis_1075_; lean_object* v_hypotheses_1076_; uint8_t v_didChange_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1089_; 
v___x_1073_ = lean_st_ref_take(v_a_966_);
v_caches_1074_ = lean_ctor_get(v___x_1073_, 0);
v_typeAnalysis_1075_ = lean_ctor_get(v___x_1073_, 1);
v_hypotheses_1076_ = lean_ctor_get(v___x_1073_, 3);
v_didChange_1077_ = lean_ctor_get_uint8(v___x_1073_, sizeof(void*)*4);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_1089_ == 0)
{
lean_object* v_unused_1090_; 
v_unused_1090_ = lean_ctor_get(v___x_1073_, 2);
lean_dec(v_unused_1090_);
v___x_1079_ = v___x_1073_;
v_isShared_1080_ = v_isSharedCheck_1089_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_hypotheses_1076_);
lean_inc(v_typeAnalysis_1075_);
lean_inc(v_caches_1074_);
lean_dec(v___x_1073_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1089_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1082_; 
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 2, v___x_1072_);
v___x_1082_ = v___x_1079_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_caches_1074_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_typeAnalysis_1075_);
lean_ctor_set(v_reuseFailAlloc_1088_, 2, v___x_1072_);
lean_ctor_set(v_reuseFailAlloc_1088_, 3, v_hypotheses_1076_);
lean_ctor_set_uint8(v_reuseFailAlloc_1088_, sizeof(void*)*4, v_didChange_1077_);
v___x_1082_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1086_; 
v___x_1083_ = lean_st_ref_put(v_a_966_, v___x_1082_);
v___x_1084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1084_, 0, v_fst_1069_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 0, v___x_1084_);
v___x_1086_ = v___x_1067_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
}
}
else
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1100_; 
lean_del_object(v___x_981_);
v_a_1093_ = lean_ctor_get(v___x_1064_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_1064_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1095_ = v___x_1064_;
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1064_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1098_; 
if (v_isShared_1096_ == 0)
{
v___x_1098_ = v___x_1095_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_a_1093_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
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
lean_object* v___x_1108_; lean_object* v___x_1109_; 
lean_dec_ref(v_target_978_);
lean_dec_ref(v_x_965_);
v___x_1108_ = lean_box(0);
v___x_1109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1108_);
return v___x_1109_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___boxed(lean_object* v_x_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg(v_x_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_);
lean_dec(v_a_1120_);
lean_dec_ref(v_a_1119_);
lean_dec(v_a_1118_);
lean_dec_ref(v_a_1117_);
lean_dec(v_a_1116_);
lean_dec_ref(v_a_1115_);
lean_dec(v_a_1114_);
lean_dec_ref(v_a_1113_);
lean_dec(v_a_1112_);
lean_dec(v_a_1111_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal(lean_object* v_00_u03b1_1123_, lean_object* v_x_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_){
_start:
{
lean_object* v___x_1137_; lean_object* v_target_1138_; 
v___x_1137_ = lean_st_ref_get(v_a_1126_);
v_target_1138_ = lean_ctor_get(v___x_1137_, 2);
lean_inc_ref(v_target_1138_);
lean_dec(v___x_1137_);
if (lean_obj_tag(v_target_1138_) == 1)
{
lean_object* v_goal_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1267_; 
v_goal_1139_ = lean_ctor_get(v_target_1138_, 0);
v_isSharedCheck_1267_ = !lean_is_exclusive(v_target_1138_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1141_ = v_target_1138_;
v_isShared_1142_ = v_isSharedCheck_1267_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_goal_1139_);
lean_dec(v_target_1138_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1267_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v_toApplicative_1146_; lean_object* v_toFunctor_1147_; lean_object* v_toSeq_1148_; lean_object* v_toSeqLeft_1149_; lean_object* v_toSeqRight_1150_; lean_object* v___f_1151_; lean_object* v___f_1152_; lean_object* v___f_1153_; lean_object* v___f_1154_; lean_object* v___x_1155_; lean_object* v___f_1156_; lean_object* v___f_1157_; lean_object* v___f_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___f_1164_; lean_object* v___f_1165_; lean_object* v___x_1166_; lean_object* v___f_1167_; lean_object* v___f_1168_; lean_object* v___x_1169_; lean_object* v___f_1170_; lean_object* v___f_1171_; lean_object* v___x_1172_; lean_object* v___f_1173_; lean_object* v___f_1174_; lean_object* v___x_1175_; lean_object* v___f_1176_; lean_object* v___f_1177_; lean_object* v___x_1178_; lean_object* v_toApplicative_1179_; lean_object* v_toFunctor_1180_; lean_object* v_toSeq_1181_; lean_object* v_toSeqLeft_1182_; lean_object* v_toSeqRight_1183_; lean_object* v___f_1184_; lean_object* v___f_1185_; lean_object* v___x_1186_; lean_object* v___f_1187_; lean_object* v___f_1188_; lean_object* v___f_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v_toApplicative_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1265_; 
v___x_1143_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__0);
v___x_1144_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__1);
v___x_1145_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3);
v_toApplicative_1146_ = lean_ctor_get(v___x_1145_, 0);
v_toFunctor_1147_ = lean_ctor_get(v_toApplicative_1146_, 0);
v_toSeq_1148_ = lean_ctor_get(v_toApplicative_1146_, 2);
v_toSeqLeft_1149_ = lean_ctor_get(v_toApplicative_1146_, 3);
v_toSeqRight_1150_ = lean_ctor_get(v_toApplicative_1146_, 4);
v___f_1151_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4));
v___f_1152_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5));
lean_inc_ref_n(v_toFunctor_1147_, 2);
v___f_1153_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1153_, 0, v_toFunctor_1147_);
v___f_1154_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1154_, 0, v_toFunctor_1147_);
v___x_1155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1155_, 0, v___f_1153_);
lean_ctor_set(v___x_1155_, 1, v___f_1154_);
lean_inc(v_toSeqRight_1150_);
v___f_1156_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1156_, 0, v_toSeqRight_1150_);
lean_inc(v_toSeqLeft_1149_);
v___f_1157_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1157_, 0, v_toSeqLeft_1149_);
lean_inc(v_toSeq_1148_);
v___f_1158_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1158_, 0, v_toSeq_1148_);
v___x_1159_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1155_);
lean_ctor_set(v___x_1159_, 1, v___f_1151_);
lean_ctor_set(v___x_1159_, 2, v___f_1158_);
lean_ctor_set(v___x_1159_, 3, v___f_1157_);
lean_ctor_set(v___x_1159_, 4, v___f_1156_);
v___x_1160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1159_);
lean_ctor_set(v___x_1160_, 1, v___f_1152_);
v___x_1161_ = l_StateRefT_x27_instMonad___redArg(v___x_1160_);
v___x_1162_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1162_, 0, lean_box(0));
lean_closure_set(v___x_1162_, 1, lean_box(0));
lean_closure_set(v___x_1162_, 2, v___x_1161_);
v___x_1163_ = l_instMonadControlTOfPure___redArg(v___x_1162_);
lean_inc_ref(v___x_1163_);
v___f_1164_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1164_, 0, v___x_1144_);
lean_closure_set(v___f_1164_, 1, v___x_1163_);
v___f_1165_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1165_, 0, v___x_1144_);
lean_closure_set(v___f_1165_, 1, v___x_1163_);
v___x_1166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1166_, 0, v___f_1164_);
lean_ctor_set(v___x_1166_, 1, v___f_1165_);
lean_inc_ref(v___x_1166_);
v___f_1167_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1167_, 0, v___x_1143_);
lean_closure_set(v___f_1167_, 1, v___x_1166_);
v___f_1168_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1168_, 0, v___x_1143_);
lean_closure_set(v___f_1168_, 1, v___x_1166_);
v___x_1169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1169_, 0, v___f_1167_);
lean_ctor_set(v___x_1169_, 1, v___f_1168_);
lean_inc_ref(v___x_1169_);
v___f_1170_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1170_, 0, v___x_1144_);
lean_closure_set(v___f_1170_, 1, v___x_1169_);
v___f_1171_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1171_, 0, v___x_1144_);
lean_closure_set(v___f_1171_, 1, v___x_1169_);
v___x_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___f_1170_);
lean_ctor_set(v___x_1172_, 1, v___f_1171_);
lean_inc_ref(v___x_1172_);
v___f_1173_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1173_, 0, v___x_1143_);
lean_closure_set(v___f_1173_, 1, v___x_1172_);
v___f_1174_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1174_, 0, v___x_1143_);
lean_closure_set(v___f_1174_, 1, v___x_1172_);
v___x_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___f_1173_);
lean_ctor_set(v___x_1175_, 1, v___f_1174_);
lean_inc_ref(v___x_1175_);
v___f_1176_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_1176_, 0, v___x_1143_);
lean_closure_set(v___f_1176_, 1, v___x_1175_);
v___f_1177_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_1177_, 0, v___x_1143_);
lean_closure_set(v___f_1177_, 1, v___x_1175_);
v___x_1178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___f_1176_);
lean_ctor_set(v___x_1178_, 1, v___f_1177_);
v_toApplicative_1179_ = lean_ctor_get(v___x_1145_, 0);
v_toFunctor_1180_ = lean_ctor_get(v_toApplicative_1179_, 0);
v_toSeq_1181_ = lean_ctor_get(v_toApplicative_1179_, 2);
v_toSeqLeft_1182_ = lean_ctor_get(v_toApplicative_1179_, 3);
v_toSeqRight_1183_ = lean_ctor_get(v_toApplicative_1179_, 4);
lean_inc_ref_n(v_toFunctor_1180_, 2);
v___f_1184_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1184_, 0, v_toFunctor_1180_);
v___f_1185_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1185_, 0, v_toFunctor_1180_);
v___x_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___f_1184_);
lean_ctor_set(v___x_1186_, 1, v___f_1185_);
lean_inc(v_toSeqRight_1183_);
v___f_1187_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1187_, 0, v_toSeqRight_1183_);
lean_inc(v_toSeqLeft_1182_);
v___f_1188_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1188_, 0, v_toSeqLeft_1182_);
lean_inc(v_toSeq_1181_);
v___f_1189_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1189_, 0, v_toSeq_1181_);
v___x_1190_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1186_);
lean_ctor_set(v___x_1190_, 1, v___f_1151_);
lean_ctor_set(v___x_1190_, 2, v___f_1189_);
lean_ctor_set(v___x_1190_, 3, v___f_1188_);
lean_ctor_set(v___x_1190_, 4, v___f_1187_);
v___x_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1190_);
lean_ctor_set(v___x_1191_, 1, v___f_1152_);
v___x_1192_ = l_StateRefT_x27_instMonad___redArg(v___x_1191_);
v_toApplicative_1193_ = lean_ctor_get(v___x_1192_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1192_);
if (v_isSharedCheck_1265_ == 0)
{
lean_object* v_unused_1266_; 
v_unused_1266_ = lean_ctor_get(v___x_1192_, 1);
lean_dec(v_unused_1266_);
v___x_1195_ = v___x_1192_;
v_isShared_1196_ = v_isSharedCheck_1265_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_toApplicative_1193_);
lean_dec(v___x_1192_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1265_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v_toFunctor_1197_; lean_object* v_toSeq_1198_; lean_object* v_toSeqLeft_1199_; lean_object* v_toSeqRight_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1263_; 
v_toFunctor_1197_ = lean_ctor_get(v_toApplicative_1193_, 0);
v_toSeq_1198_ = lean_ctor_get(v_toApplicative_1193_, 2);
v_toSeqLeft_1199_ = lean_ctor_get(v_toApplicative_1193_, 3);
v_toSeqRight_1200_ = lean_ctor_get(v_toApplicative_1193_, 4);
v_isSharedCheck_1263_ = !lean_is_exclusive(v_toApplicative_1193_);
if (v_isSharedCheck_1263_ == 0)
{
lean_object* v_unused_1264_; 
v_unused_1264_ = lean_ctor_get(v_toApplicative_1193_, 1);
lean_dec(v_unused_1264_);
v___x_1202_ = v_toApplicative_1193_;
v_isShared_1203_ = v_isSharedCheck_1263_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_toSeqRight_1200_);
lean_inc(v_toSeqLeft_1199_);
lean_inc(v_toSeq_1198_);
lean_inc(v_toFunctor_1197_);
lean_dec(v_toApplicative_1193_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1263_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___f_1204_; lean_object* v___f_1205_; lean_object* v___f_1206_; lean_object* v___f_1207_; lean_object* v___x_1208_; lean_object* v___f_1209_; lean_object* v___f_1210_; lean_object* v___f_1211_; lean_object* v___x_1213_; 
v___f_1204_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6));
v___f_1205_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7));
lean_inc_ref(v_toFunctor_1197_);
v___f_1206_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1206_, 0, v_toFunctor_1197_);
v___f_1207_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1207_, 0, v_toFunctor_1197_);
v___x_1208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1208_, 0, v___f_1206_);
lean_ctor_set(v___x_1208_, 1, v___f_1207_);
v___f_1209_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1209_, 0, v_toSeqRight_1200_);
v___f_1210_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1210_, 0, v_toSeqLeft_1199_);
v___f_1211_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1211_, 0, v_toSeq_1198_);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 4, v___f_1209_);
lean_ctor_set(v___x_1202_, 3, v___f_1210_);
lean_ctor_set(v___x_1202_, 2, v___f_1211_);
lean_ctor_set(v___x_1202_, 1, v___f_1204_);
lean_ctor_set(v___x_1202_, 0, v___x_1208_);
v___x_1213_ = v___x_1202_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v___x_1208_);
lean_ctor_set(v_reuseFailAlloc_1262_, 1, v___f_1204_);
lean_ctor_set(v_reuseFailAlloc_1262_, 2, v___f_1211_);
lean_ctor_set(v_reuseFailAlloc_1262_, 3, v___f_1210_);
lean_ctor_set(v_reuseFailAlloc_1262_, 4, v___f_1209_);
v___x_1213_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
lean_object* v___x_1215_; 
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 1, v___f_1205_);
lean_ctor_set(v___x_1195_, 0, v___x_1213_);
v___x_1215_ = v___x_1195_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v___x_1213_);
lean_ctor_set(v_reuseFailAlloc_1261_, 1, v___f_1205_);
v___x_1215_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v_mvarId_1221_; lean_object* v___x_1222_; lean_object* v___x_5171__overap_1223_; lean_object* v___x_1224_; 
v___x_1216_ = l_StateRefT_x27_instMonad___redArg(v___x_1215_);
v___x_1217_ = l_ReaderT_instMonad___redArg(v___x_1216_);
v___x_1218_ = l_StateRefT_x27_instMonad___redArg(v___x_1217_);
v___x_1219_ = l_ReaderT_instMonad___redArg(v___x_1218_);
v___x_1220_ = l_ReaderT_instMonad___redArg(v___x_1219_);
v_mvarId_1221_ = lean_ctor_get(v_goal_1139_, 1);
lean_inc(v_mvarId_1221_);
v___x_1222_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_GoalM_runCore___boxed), 13, 3);
lean_closure_set(v___x_1222_, 0, lean_box(0));
lean_closure_set(v___x_1222_, 1, v_goal_1139_);
lean_closure_set(v___x_1222_, 2, v_x_1124_);
v___x_5171__overap_1223_ = l_Lean_MVarId_withContext___redArg(v___x_1178_, v___x_1220_, v_mvarId_1221_, v___x_1222_);
lean_inc(v_a_1135_);
lean_inc_ref(v_a_1134_);
lean_inc(v_a_1133_);
lean_inc_ref(v_a_1132_);
lean_inc(v_a_1131_);
lean_inc_ref(v_a_1130_);
lean_inc(v_a_1129_);
lean_inc_ref(v_a_1128_);
lean_inc(v_a_1127_);
v___x_1224_ = lean_apply_10(v___x_5171__overap_1223_, v_a_1127_, v_a_1128_, v_a_1129_, v_a_1130_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_, lean_box(0));
if (lean_obj_tag(v___x_1224_) == 0)
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1252_; 
v_a_1225_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1227_ = v___x_1224_;
v_isShared_1228_ = v_isSharedCheck_1252_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1224_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1252_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v_fst_1229_; lean_object* v_snd_1230_; lean_object* v___x_1232_; 
v_fst_1229_ = lean_ctor_get(v_a_1225_, 0);
lean_inc(v_fst_1229_);
v_snd_1230_ = lean_ctor_get(v_a_1225_, 1);
lean_inc(v_snd_1230_);
lean_dec(v_a_1225_);
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 0, v_snd_1230_);
v___x_1232_ = v___x_1141_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_snd_1230_);
v___x_1232_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
lean_object* v___x_1233_; lean_object* v_caches_1234_; lean_object* v_typeAnalysis_1235_; lean_object* v_hypotheses_1236_; uint8_t v_didChange_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1249_; 
v___x_1233_ = lean_st_ref_take(v_a_1126_);
v_caches_1234_ = lean_ctor_get(v___x_1233_, 0);
v_typeAnalysis_1235_ = lean_ctor_get(v___x_1233_, 1);
v_hypotheses_1236_ = lean_ctor_get(v___x_1233_, 3);
v_didChange_1237_ = lean_ctor_get_uint8(v___x_1233_, sizeof(void*)*4);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1249_ == 0)
{
lean_object* v_unused_1250_; 
v_unused_1250_ = lean_ctor_get(v___x_1233_, 2);
lean_dec(v_unused_1250_);
v___x_1239_ = v___x_1233_;
v_isShared_1240_ = v_isSharedCheck_1249_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_hypotheses_1236_);
lean_inc(v_typeAnalysis_1235_);
lean_inc(v_caches_1234_);
lean_dec(v___x_1233_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1249_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 2, v___x_1232_);
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_caches_1234_);
lean_ctor_set(v_reuseFailAlloc_1248_, 1, v_typeAnalysis_1235_);
lean_ctor_set(v_reuseFailAlloc_1248_, 2, v___x_1232_);
lean_ctor_set(v_reuseFailAlloc_1248_, 3, v_hypotheses_1236_);
lean_ctor_set_uint8(v_reuseFailAlloc_1248_, sizeof(void*)*4, v_didChange_1237_);
v___x_1242_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1246_; 
v___x_1243_ = lean_st_ref_put(v_a_1126_, v___x_1242_);
v___x_1244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1244_, 0, v_fst_1229_);
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 0, v___x_1244_);
v___x_1246_ = v___x_1227_;
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
}
}
else
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1260_; 
lean_del_object(v___x_1141_);
v_a_1253_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1255_ = v___x_1224_;
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v___x_1224_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1256_ == 0)
{
v___x_1258_ = v___x_1255_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
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
lean_object* v___x_1268_; lean_object* v___x_1269_; 
lean_dec_ref(v_target_1138_);
lean_dec_ref(v_x_1124_);
v___x_1268_ = lean_box(0);
v___x_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
return v___x_1269_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___boxed(lean_object* v_00_u03b1_1270_, lean_object* v_x_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal(v_00_u03b1_1270_, v_x_1271_, v_a_1272_, v_a_1273_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_, v_a_1282_);
lean_dec(v_a_1282_);
lean_dec_ref(v_a_1281_);
lean_dec(v_a_1280_);
lean_dec_ref(v_a_1279_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec(v_a_1274_);
lean_dec(v_a_1273_);
lean_dec_ref(v_a_1272_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0(lean_object* v_x_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_){
_start:
{
lean_object* v___x_1296_; 
lean_inc(v___y_1290_);
lean_inc_ref(v___y_1289_);
lean_inc(v___y_1288_);
lean_inc_ref(v___y_1287_);
lean_inc(v___y_1286_);
v___x_1296_ = lean_apply_10(v_x_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, lean_box(0));
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0___boxed(lean_object* v_x_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0(v_x_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v___y_1298_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(lean_object* v_mvarId_1309_, lean_object* v_x_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_){
_start:
{
lean_object* v___f_1321_; lean_object* v___x_1322_; 
lean_inc(v___y_1315_);
lean_inc_ref(v___y_1314_);
lean_inc(v___y_1313_);
lean_inc_ref(v___y_1312_);
lean_inc(v___y_1311_);
v___f_1321_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_1321_, 0, v_x_1310_);
lean_closure_set(v___f_1321_, 1, v___y_1311_);
lean_closure_set(v___f_1321_, 2, v___y_1312_);
lean_closure_set(v___f_1321_, 3, v___y_1313_);
lean_closure_set(v___f_1321_, 4, v___y_1314_);
lean_closure_set(v___f_1321_, 5, v___y_1315_);
v___x_1322_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1309_, v___f_1321_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_);
if (lean_obj_tag(v___x_1322_) == 0)
{
return v___x_1322_;
}
else
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1330_; 
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1325_ = v___x_1322_;
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1322_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1328_; 
if (v_isShared_1326_ == 0)
{
v___x_1328_ = v___x_1325_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_a_1323_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg___boxed(lean_object* v_mvarId_1331_, lean_object* v_x_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(v_mvarId_1331_, v_x_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v___y_1333_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0(lean_object* v_00_u03b1_1344_, lean_object* v_mvarId_1345_, lean_object* v_x_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v___x_1357_; 
v___x_1357_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(v_mvarId_1345_, v_x_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___boxed(lean_object* v_00_u03b1_1358_, lean_object* v_mvarId_1359_, lean_object* v_x_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
lean_object* v_res_1371_; 
v_res_1371_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0(v_00_u03b1_1358_, v_mvarId_1359_, v_x_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
lean_dec(v___y_1363_);
lean_dec_ref(v___y_1362_);
lean_dec(v___y_1361_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0(lean_object* v_goal_1372_, lean_object* v_falseProof_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1384_ = lean_st_mk_ref(v_goal_1372_);
v___x_1385_ = l_Lean_Meta_Grind_closeGoal(v_falseProof_1373_, v___x_1384_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1395_; 
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1395_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1388_ = v___x_1385_;
v_isShared_1389_ = v_isSharedCheck_1395_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1385_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1395_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1393_; 
v___x_1390_ = lean_st_ref_get(v___x_1384_);
lean_dec(v___x_1384_);
v___x_1391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1391_, 0, v_a_1386_);
lean_ctor_set(v___x_1391_, 1, v___x_1390_);
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 0, v___x_1391_);
v___x_1393_ = v___x_1388_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v___x_1391_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
else
{
lean_object* v_a_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1403_; 
lean_dec(v___x_1384_);
v_a_1396_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1403_ == 0)
{
v___x_1398_ = v___x_1385_;
v_isShared_1399_ = v_isSharedCheck_1403_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_a_1396_);
lean_dec(v___x_1385_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1403_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1401_; 
if (v_isShared_1399_ == 0)
{
v___x_1401_ = v___x_1398_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_a_1396_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0___boxed(lean_object* v_goal_1404_, lean_object* v_falseProof_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_){
_start:
{
lean_object* v_res_1416_; 
v_res_1416_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0(v_goal_1404_, v_falseProof_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
lean_dec(v___y_1414_);
lean_dec_ref(v___y_1413_);
lean_dec(v___y_1412_);
lean_dec_ref(v___y_1411_);
lean_dec(v___y_1410_);
lean_dec_ref(v___y_1409_);
lean_dec(v___y_1408_);
lean_dec_ref(v___y_1407_);
lean_dec(v___y_1406_);
return v_res_1416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(lean_object* v_falseProof_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_){
_start:
{
lean_object* v___x_1429_; lean_object* v_target_1430_; 
v___x_1429_ = lean_st_ref_get(v_a_1418_);
v_target_1430_ = lean_ctor_get(v___x_1429_, 2);
lean_inc_ref(v_target_1430_);
lean_dec(v___x_1429_);
if (lean_obj_tag(v_target_1430_) == 0)
{
lean_object* v_mvar_1431_; lean_object* v___x_1432_; 
v_mvar_1431_ = lean_ctor_get(v_target_1430_, 0);
lean_inc(v_mvar_1431_);
lean_dec_ref_known(v_target_1430_, 1);
v___x_1432_ = l_Lean_MVarId_assignFalseProof(v_mvar_1431_, v_falseProof_1417_, v_a_1424_, v_a_1425_, v_a_1426_, v_a_1427_);
return v___x_1432_;
}
else
{
lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1484_; 
v_isSharedCheck_1484_ = !lean_is_exclusive(v_target_1430_);
if (v_isSharedCheck_1484_ == 0)
{
lean_object* v_unused_1485_; 
v_unused_1485_ = lean_ctor_get(v_target_1430_, 0);
lean_dec(v_unused_1485_);
v___x_1434_ = v_target_1430_;
v_isShared_1435_ = v_isSharedCheck_1484_;
goto v_resetjp_1433_;
}
else
{
lean_dec(v_target_1430_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1484_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v_target_1438_; 
v___x_1436_ = lean_box(0);
v___x_1437_ = lean_st_ref_get(v_a_1418_);
v_target_1438_ = lean_ctor_get(v___x_1437_, 2);
lean_inc_ref(v_target_1438_);
lean_dec(v___x_1437_);
if (lean_obj_tag(v_target_1438_) == 1)
{
lean_object* v_goal_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1480_; 
lean_del_object(v___x_1434_);
v_goal_1439_ = lean_ctor_get(v_target_1438_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v_target_1438_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1441_ = v_target_1438_;
v_isShared_1442_ = v_isSharedCheck_1480_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_goal_1439_);
lean_dec(v_target_1438_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1480_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v_mvarId_1443_; lean_object* v___f_1444_; lean_object* v___x_1445_; 
v_mvarId_1443_ = lean_ctor_get(v_goal_1439_, 1);
lean_inc(v_mvarId_1443_);
v___f_1444_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___lam__0___boxed), 12, 2);
lean_closure_set(v___f_1444_, 0, v_goal_1439_);
lean_closure_set(v___f_1444_, 1, v_falseProof_1417_);
v___x_1445_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget_spec__0___redArg(v_mvarId_1443_, v___f_1444_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_, v_a_1425_, v_a_1426_, v_a_1427_);
if (lean_obj_tag(v___x_1445_) == 0)
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1471_; 
v_a_1446_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1448_ = v___x_1445_;
v_isShared_1449_ = v_isSharedCheck_1471_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1445_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1471_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v_snd_1450_; lean_object* v___x_1452_; 
v_snd_1450_ = lean_ctor_get(v_a_1446_, 1);
lean_inc(v_snd_1450_);
lean_dec(v_a_1446_);
if (v_isShared_1442_ == 0)
{
lean_ctor_set(v___x_1441_, 0, v_snd_1450_);
v___x_1452_ = v___x_1441_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v_snd_1450_);
v___x_1452_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
lean_object* v___x_1453_; lean_object* v_caches_1454_; lean_object* v_typeAnalysis_1455_; lean_object* v_hypotheses_1456_; uint8_t v_didChange_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1468_; 
v___x_1453_ = lean_st_ref_take(v_a_1418_);
v_caches_1454_ = lean_ctor_get(v___x_1453_, 0);
v_typeAnalysis_1455_ = lean_ctor_get(v___x_1453_, 1);
v_hypotheses_1456_ = lean_ctor_get(v___x_1453_, 3);
v_didChange_1457_ = lean_ctor_get_uint8(v___x_1453_, sizeof(void*)*4);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1468_ == 0)
{
lean_object* v_unused_1469_; 
v_unused_1469_ = lean_ctor_get(v___x_1453_, 2);
lean_dec(v_unused_1469_);
v___x_1459_ = v___x_1453_;
v_isShared_1460_ = v_isSharedCheck_1468_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_hypotheses_1456_);
lean_inc(v_typeAnalysis_1455_);
lean_inc(v_caches_1454_);
lean_dec(v___x_1453_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1468_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 2, v___x_1452_);
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_caches_1454_);
lean_ctor_set(v_reuseFailAlloc_1467_, 1, v_typeAnalysis_1455_);
lean_ctor_set(v_reuseFailAlloc_1467_, 2, v___x_1452_);
lean_ctor_set(v_reuseFailAlloc_1467_, 3, v_hypotheses_1456_);
lean_ctor_set_uint8(v_reuseFailAlloc_1467_, sizeof(void*)*4, v_didChange_1457_);
v___x_1462_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
lean_object* v___x_1463_; lean_object* v___x_1465_; 
v___x_1463_ = lean_st_ref_put(v_a_1418_, v___x_1462_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 0, v___x_1436_);
v___x_1465_ = v___x_1448_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v___x_1436_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
return v___x_1465_;
}
}
}
}
}
}
else
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
lean_del_object(v___x_1441_);
v_a_1472_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1445_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1445_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
}
else
{
lean_object* v___x_1482_; 
lean_dec_ref(v_target_1438_);
lean_dec_ref(v_falseProof_1417_);
if (v_isShared_1435_ == 0)
{
lean_ctor_set_tag(v___x_1434_, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1436_);
v___x_1482_ = v___x_1434_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v___x_1436_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg___boxed(lean_object* v_falseProof_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_){
_start:
{
lean_object* v_res_1498_; 
v_res_1498_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_falseProof_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_);
lean_dec(v_a_1496_);
lean_dec_ref(v_a_1495_);
lean_dec(v_a_1494_);
lean_dec_ref(v_a_1493_);
lean_dec(v_a_1492_);
lean_dec_ref(v_a_1491_);
lean_dec(v_a_1490_);
lean_dec_ref(v_a_1489_);
lean_dec(v_a_1488_);
lean_dec(v_a_1487_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget(lean_object* v_falseProof_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_falseProof_1499_, v_a_1501_, v_a_1502_, v_a_1503_, v_a_1504_, v_a_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_, v_a_1510_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___boxed(lean_object* v_falseProof_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget(v_falseProof_1513_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_);
lean_dec(v_a_1524_);
lean_dec_ref(v_a_1523_);
lean_dec(v_a_1522_);
lean_dec_ref(v_a_1521_);
lean_dec(v_a_1520_);
lean_dec_ref(v_a_1519_);
lean_dec(v_a_1518_);
lean_dec_ref(v_a_1517_);
lean_dec(v_a_1516_);
lean_dec(v_a_1515_);
lean_dec_ref(v_a_1514_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg(lean_object* v_a_1527_){
_start:
{
lean_object* v___x_1529_; uint8_t v_didChange_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1529_ = lean_st_ref_get(v_a_1527_);
v_didChange_1530_ = lean_ctor_get_uint8(v___x_1529_, sizeof(void*)*4);
lean_dec(v___x_1529_);
v___x_1531_ = lean_box(v_didChange_1530_);
v___x_1532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1531_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg___boxed(lean_object* v_a_1533_, lean_object* v_a_1534_){
_start:
{
lean_object* v_res_1535_; 
v_res_1535_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___redArg(v_a_1533_);
lean_dec(v_a_1533_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange(lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_){
_start:
{
lean_object* v___x_1548_; uint8_t v_didChange_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1548_ = lean_st_ref_get(v_a_1537_);
v_didChange_1549_ = lean_ctor_get_uint8(v___x_1548_, sizeof(void*)*4);
lean_dec(v___x_1548_);
v___x_1550_ = lean_box(v_didChange_1549_);
v___x_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1550_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange___boxed(lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_didChange(v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
lean_dec(v_a_1562_);
lean_dec_ref(v_a_1561_);
lean_dec(v_a_1560_);
lean_dec_ref(v_a_1559_);
lean_dec(v_a_1558_);
lean_dec_ref(v_a_1557_);
lean_dec(v_a_1556_);
lean_dec_ref(v_a_1555_);
lean_dec(v_a_1554_);
lean_dec(v_a_1553_);
lean_dec_ref(v_a_1552_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg(lean_object* v_a_1565_){
_start:
{
lean_object* v___x_1567_; lean_object* v_caches_1568_; lean_object* v_typeAnalysis_1569_; lean_object* v_target_1570_; lean_object* v_hypotheses_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1582_; 
v___x_1567_ = lean_st_ref_take(v_a_1565_);
v_caches_1568_ = lean_ctor_get(v___x_1567_, 0);
v_typeAnalysis_1569_ = lean_ctor_get(v___x_1567_, 1);
v_target_1570_ = lean_ctor_get(v___x_1567_, 2);
v_hypotheses_1571_ = lean_ctor_get(v___x_1567_, 3);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1567_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1573_ = v___x_1567_;
v_isShared_1574_ = v_isSharedCheck_1582_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_hypotheses_1571_);
lean_inc(v_target_1570_);
lean_inc(v_typeAnalysis_1569_);
lean_inc(v_caches_1568_);
lean_dec(v___x_1567_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1582_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1575_; uint8_t v___x_1576_; lean_object* v___x_1578_; 
v___x_1575_ = lean_box(0);
v___x_1576_ = 0;
if (v_isShared_1574_ == 0)
{
v___x_1578_ = v___x_1573_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_caches_1568_);
lean_ctor_set(v_reuseFailAlloc_1581_, 1, v_typeAnalysis_1569_);
lean_ctor_set(v_reuseFailAlloc_1581_, 2, v_target_1570_);
lean_ctor_set(v_reuseFailAlloc_1581_, 3, v_hypotheses_1571_);
v___x_1578_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; 
lean_ctor_set_uint8(v___x_1578_, sizeof(void*)*4, v___x_1576_);
v___x_1579_ = lean_st_ref_put(v_a_1565_, v___x_1578_);
v___x_1580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1575_);
return v___x_1580_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg___boxed(lean_object* v_a_1583_, lean_object* v_a_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___redArg(v_a_1583_);
lean_dec(v_a_1583_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange(lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_){
_start:
{
lean_object* v___x_1598_; lean_object* v_caches_1599_; lean_object* v_typeAnalysis_1600_; lean_object* v_target_1601_; lean_object* v_hypotheses_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1613_; 
v___x_1598_ = lean_st_ref_take(v_a_1587_);
v_caches_1599_ = lean_ctor_get(v___x_1598_, 0);
v_typeAnalysis_1600_ = lean_ctor_get(v___x_1598_, 1);
v_target_1601_ = lean_ctor_get(v___x_1598_, 2);
v_hypotheses_1602_ = lean_ctor_get(v___x_1598_, 3);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1604_ = v___x_1598_;
v_isShared_1605_ = v_isSharedCheck_1613_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_hypotheses_1602_);
lean_inc(v_target_1601_);
lean_inc(v_typeAnalysis_1600_);
lean_inc(v_caches_1599_);
lean_dec(v___x_1598_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1613_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1606_; uint8_t v___x_1607_; lean_object* v___x_1609_; 
v___x_1606_ = lean_box(0);
v___x_1607_ = 0;
if (v_isShared_1605_ == 0)
{
v___x_1609_ = v___x_1604_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_caches_1599_);
lean_ctor_set(v_reuseFailAlloc_1612_, 1, v_typeAnalysis_1600_);
lean_ctor_set(v_reuseFailAlloc_1612_, 2, v_target_1601_);
lean_ctor_set(v_reuseFailAlloc_1612_, 3, v_hypotheses_1602_);
v___x_1609_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
lean_ctor_set_uint8(v___x_1609_, sizeof(void*)*4, v___x_1607_);
v___x_1610_ = lean_st_ref_put(v_a_1587_, v___x_1609_);
v___x_1611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1606_);
return v___x_1611_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange___boxed(lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_){
_start:
{
lean_object* v_res_1626_; 
v_res_1626_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_resetDidChange(v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_, v_a_1623_, v_a_1624_);
lean_dec(v_a_1624_);
lean_dec_ref(v_a_1623_);
lean_dec(v_a_1622_);
lean_dec_ref(v_a_1621_);
lean_dec(v_a_1620_);
lean_dec_ref(v_a_1619_);
lean_dec(v_a_1618_);
lean_dec_ref(v_a_1617_);
lean_dec(v_a_1616_);
lean_dec(v_a_1615_);
lean_dec_ref(v_a_1614_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg(lean_object* v_a_1627_){
_start:
{
lean_object* v___x_1629_; lean_object* v_caches_1630_; lean_object* v_typeAnalysis_1631_; lean_object* v_target_1632_; lean_object* v_hypotheses_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1644_; 
v___x_1629_ = lean_st_ref_take(v_a_1627_);
v_caches_1630_ = lean_ctor_get(v___x_1629_, 0);
v_typeAnalysis_1631_ = lean_ctor_get(v___x_1629_, 1);
v_target_1632_ = lean_ctor_get(v___x_1629_, 2);
v_hypotheses_1633_ = lean_ctor_get(v___x_1629_, 3);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1629_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1635_ = v___x_1629_;
v_isShared_1636_ = v_isSharedCheck_1644_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_hypotheses_1633_);
lean_inc(v_target_1632_);
lean_inc(v_typeAnalysis_1631_);
lean_inc(v_caches_1630_);
lean_dec(v___x_1629_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1644_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1637_; uint8_t v___x_1638_; lean_object* v___x_1640_; 
v___x_1637_ = lean_box(0);
v___x_1638_ = 1;
if (v_isShared_1636_ == 0)
{
v___x_1640_ = v___x_1635_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v_caches_1630_);
lean_ctor_set(v_reuseFailAlloc_1643_, 1, v_typeAnalysis_1631_);
lean_ctor_set(v_reuseFailAlloc_1643_, 2, v_target_1632_);
lean_ctor_set(v_reuseFailAlloc_1643_, 3, v_hypotheses_1633_);
v___x_1640_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
lean_object* v___x_1641_; lean_object* v___x_1642_; 
lean_ctor_set_uint8(v___x_1640_, sizeof(void*)*4, v___x_1638_);
v___x_1641_ = lean_st_ref_put(v_a_1627_, v___x_1640_);
v___x_1642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1637_);
return v___x_1642_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg___boxed(lean_object* v_a_1645_, lean_object* v_a_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___redArg(v_a_1645_);
lean_dec(v_a_1645_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange(lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_){
_start:
{
lean_object* v___x_1660_; lean_object* v_caches_1661_; lean_object* v_typeAnalysis_1662_; lean_object* v_target_1663_; lean_object* v_hypotheses_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1675_; 
v___x_1660_ = lean_st_ref_take(v_a_1649_);
v_caches_1661_ = lean_ctor_get(v___x_1660_, 0);
v_typeAnalysis_1662_ = lean_ctor_get(v___x_1660_, 1);
v_target_1663_ = lean_ctor_get(v___x_1660_, 2);
v_hypotheses_1664_ = lean_ctor_get(v___x_1660_, 3);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1660_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1666_ = v___x_1660_;
v_isShared_1667_ = v_isSharedCheck_1675_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_hypotheses_1664_);
lean_inc(v_target_1663_);
lean_inc(v_typeAnalysis_1662_);
lean_inc(v_caches_1661_);
lean_dec(v___x_1660_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1675_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1668_; uint8_t v___x_1669_; lean_object* v___x_1671_; 
v___x_1668_ = lean_box(0);
v___x_1669_ = 1;
if (v_isShared_1667_ == 0)
{
v___x_1671_ = v___x_1666_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_caches_1661_);
lean_ctor_set(v_reuseFailAlloc_1674_, 1, v_typeAnalysis_1662_);
lean_ctor_set(v_reuseFailAlloc_1674_, 2, v_target_1663_);
lean_ctor_set(v_reuseFailAlloc_1674_, 3, v_hypotheses_1664_);
v___x_1671_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
lean_ctor_set_uint8(v___x_1671_, sizeof(void*)*4, v___x_1669_);
v___x_1672_ = lean_st_ref_put(v_a_1649_, v___x_1671_);
v___x_1673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1668_);
return v___x_1673_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___boxed(lean_object* v_a_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_){
_start:
{
lean_object* v_res_1688_; 
v_res_1688_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange(v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_, v_a_1685_, v_a_1686_);
lean_dec(v_a_1686_);
lean_dec_ref(v_a_1685_);
lean_dec(v_a_1684_);
lean_dec_ref(v_a_1683_);
lean_dec(v_a_1682_);
lean_dec_ref(v_a_1681_);
lean_dec(v_a_1680_);
lean_dec_ref(v_a_1679_);
lean_dec(v_a_1678_);
lean_dec(v_a_1677_);
lean_dec_ref(v_a_1676_);
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg(lean_object* v_a_1689_){
_start:
{
lean_object* v___x_1691_; lean_object* v_caches_1692_; lean_object* v___x_1693_; 
v___x_1691_ = lean_st_ref_get(v_a_1689_);
v_caches_1692_ = lean_ctor_get(v___x_1691_, 0);
lean_inc_ref(v_caches_1692_);
lean_dec(v___x_1691_);
v___x_1693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1693_, 0, v_caches_1692_);
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg___boxed(lean_object* v_a_1694_, lean_object* v_a_1695_){
_start:
{
lean_object* v_res_1696_; 
v_res_1696_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___redArg(v_a_1694_);
lean_dec(v_a_1694_);
return v_res_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches(lean_object* v_a_1697_, lean_object* v_a_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_){
_start:
{
lean_object* v___x_1709_; lean_object* v_caches_1710_; lean_object* v___x_1711_; 
v___x_1709_ = lean_st_ref_get(v_a_1698_);
v_caches_1710_ = lean_ctor_get(v___x_1709_, 0);
lean_inc_ref(v_caches_1710_);
lean_dec(v___x_1709_);
v___x_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1711_, 0, v_caches_1710_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches___boxed(lean_object* v_a_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getCaches(v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v_a_1717_, v_a_1718_, v_a_1719_, v_a_1720_, v_a_1721_, v_a_1722_);
lean_dec(v_a_1722_);
lean_dec_ref(v_a_1721_);
lean_dec(v_a_1720_);
lean_dec_ref(v_a_1719_);
lean_dec(v_a_1718_);
lean_dec_ref(v_a_1717_);
lean_dec(v_a_1716_);
lean_dec_ref(v_a_1715_);
lean_dec(v_a_1714_);
lean_dec(v_a_1713_);
lean_dec_ref(v_a_1712_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg(lean_object* v_caches_1725_, lean_object* v_a_1726_){
_start:
{
lean_object* v___x_1728_; lean_object* v_typeAnalysis_1729_; lean_object* v_target_1730_; lean_object* v_hypotheses_1731_; uint8_t v_didChange_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1742_; 
v___x_1728_ = lean_st_ref_take(v_a_1726_);
v_typeAnalysis_1729_ = lean_ctor_get(v___x_1728_, 1);
v_target_1730_ = lean_ctor_get(v___x_1728_, 2);
v_hypotheses_1731_ = lean_ctor_get(v___x_1728_, 3);
v_didChange_1732_ = lean_ctor_get_uint8(v___x_1728_, sizeof(void*)*4);
v_isSharedCheck_1742_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1742_ == 0)
{
lean_object* v_unused_1743_; 
v_unused_1743_ = lean_ctor_get(v___x_1728_, 0);
lean_dec(v_unused_1743_);
v___x_1734_ = v___x_1728_;
v_isShared_1735_ = v_isSharedCheck_1742_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_hypotheses_1731_);
lean_inc(v_target_1730_);
lean_inc(v_typeAnalysis_1729_);
lean_dec(v___x_1728_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1742_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1736_; lean_object* v___x_1738_; 
v___x_1736_ = lean_box(0);
if (v_isShared_1735_ == 0)
{
lean_ctor_set(v___x_1734_, 0, v_caches_1725_);
v___x_1738_ = v___x_1734_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v_caches_1725_);
lean_ctor_set(v_reuseFailAlloc_1741_, 1, v_typeAnalysis_1729_);
lean_ctor_set(v_reuseFailAlloc_1741_, 2, v_target_1730_);
lean_ctor_set(v_reuseFailAlloc_1741_, 3, v_hypotheses_1731_);
lean_ctor_set_uint8(v_reuseFailAlloc_1741_, sizeof(void*)*4, v_didChange_1732_);
v___x_1738_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1739_ = lean_st_ref_put(v_a_1726_, v___x_1738_);
v___x_1740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1740_, 0, v___x_1736_);
return v___x_1740_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg___boxed(lean_object* v_caches_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___redArg(v_caches_1744_, v_a_1745_);
lean_dec(v_a_1745_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches(lean_object* v_caches_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_){
_start:
{
lean_object* v___x_1761_; lean_object* v_typeAnalysis_1762_; lean_object* v_target_1763_; lean_object* v_hypotheses_1764_; uint8_t v_didChange_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1775_; 
v___x_1761_ = lean_st_ref_take(v_a_1750_);
v_typeAnalysis_1762_ = lean_ctor_get(v___x_1761_, 1);
v_target_1763_ = lean_ctor_get(v___x_1761_, 2);
v_hypotheses_1764_ = lean_ctor_get(v___x_1761_, 3);
v_didChange_1765_ = lean_ctor_get_uint8(v___x_1761_, sizeof(void*)*4);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1761_);
if (v_isSharedCheck_1775_ == 0)
{
lean_object* v_unused_1776_; 
v_unused_1776_ = lean_ctor_get(v___x_1761_, 0);
lean_dec(v_unused_1776_);
v___x_1767_ = v___x_1761_;
v_isShared_1768_ = v_isSharedCheck_1775_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_hypotheses_1764_);
lean_inc(v_target_1763_);
lean_inc(v_typeAnalysis_1762_);
lean_dec(v___x_1761_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1775_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1769_; lean_object* v___x_1771_; 
v___x_1769_ = lean_box(0);
if (v_isShared_1768_ == 0)
{
lean_ctor_set(v___x_1767_, 0, v_caches_1748_);
v___x_1771_ = v___x_1767_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_caches_1748_);
lean_ctor_set(v_reuseFailAlloc_1774_, 1, v_typeAnalysis_1762_);
lean_ctor_set(v_reuseFailAlloc_1774_, 2, v_target_1763_);
lean_ctor_set(v_reuseFailAlloc_1774_, 3, v_hypotheses_1764_);
lean_ctor_set_uint8(v_reuseFailAlloc_1774_, sizeof(void*)*4, v_didChange_1765_);
v___x_1771_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1772_ = lean_st_ref_put(v_a_1750_, v___x_1771_);
v___x_1773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1769_);
return v___x_1773_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches___boxed(lean_object* v_caches_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setCaches(v_caches_1777_, v_a_1778_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_, v_a_1783_, v_a_1784_, v_a_1785_, v_a_1786_, v_a_1787_, v_a_1788_);
lean_dec(v_a_1788_);
lean_dec_ref(v_a_1787_);
lean_dec(v_a_1786_);
lean_dec_ref(v_a_1785_);
lean_dec(v_a_1784_);
lean_dec_ref(v_a_1783_);
lean_dec(v_a_1782_);
lean_dec_ref(v_a_1781_);
lean_dec(v_a_1780_);
lean_dec(v_a_1779_);
lean_dec_ref(v_a_1778_);
return v_res_1790_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0(void){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1791_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1(void){
_start:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1792_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0);
v___x_1793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1793_, 0, v___x_1792_);
return v___x_1793_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2(void){
_start:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1794_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1);
v___x_1795_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1794_);
lean_ctor_set(v___x_1795_, 1, v___x_1794_);
lean_ctor_set(v___x_1795_, 2, v___x_1794_);
lean_ctor_set(v___x_1795_, 3, v___x_1794_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(lean_object* v_a_1796_, lean_object* v_a_1797_){
_start:
{
lean_object* v_mode_1799_; uint8_t v___x_1800_; 
v_mode_1799_ = lean_ctor_get(v_a_1796_, 1);
v___x_1800_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Mode_isPush(v_mode_1799_);
if (v___x_1800_ == 0)
{
lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v_typeAnalysis_1803_; lean_object* v_target_1804_; lean_object* v_hypotheses_1805_; uint8_t v_didChange_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1816_; 
v___x_1801_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_1802_ = lean_st_ref_take(v_a_1797_);
v_typeAnalysis_1803_ = lean_ctor_get(v___x_1802_, 1);
v_target_1804_ = lean_ctor_get(v___x_1802_, 2);
v_hypotheses_1805_ = lean_ctor_get(v___x_1802_, 3);
v_didChange_1806_ = lean_ctor_get_uint8(v___x_1802_, sizeof(void*)*4);
v_isSharedCheck_1816_ = !lean_is_exclusive(v___x_1802_);
if (v_isSharedCheck_1816_ == 0)
{
lean_object* v_unused_1817_; 
v_unused_1817_ = lean_ctor_get(v___x_1802_, 0);
lean_dec(v_unused_1817_);
v___x_1808_ = v___x_1802_;
v_isShared_1809_ = v_isSharedCheck_1816_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_hypotheses_1805_);
lean_inc(v_target_1804_);
lean_inc(v_typeAnalysis_1803_);
lean_dec(v___x_1802_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1816_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1810_; lean_object* v___x_1812_; 
v___x_1810_ = lean_box(0);
if (v_isShared_1809_ == 0)
{
lean_ctor_set(v___x_1808_, 0, v___x_1801_);
v___x_1812_ = v___x_1808_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v___x_1801_);
lean_ctor_set(v_reuseFailAlloc_1815_, 1, v_typeAnalysis_1803_);
lean_ctor_set(v_reuseFailAlloc_1815_, 2, v_target_1804_);
lean_ctor_set(v_reuseFailAlloc_1815_, 3, v_hypotheses_1805_);
lean_ctor_set_uint8(v_reuseFailAlloc_1815_, sizeof(void*)*4, v_didChange_1806_);
v___x_1812_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1813_ = lean_st_ref_put(v_a_1797_, v___x_1812_);
v___x_1814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1810_);
return v___x_1814_;
}
}
}
else
{
lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1818_ = lean_box(0);
v___x_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1818_);
return v___x_1819_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___boxed(lean_object* v_a_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(v_a_1820_, v_a_1821_);
lean_dec(v_a_1821_);
lean_dec_ref(v_a_1820_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches(lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_){
_start:
{
lean_object* v___x_1836_; 
v___x_1836_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(v_a_1824_, v_a_1825_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___boxed(lean_object* v_a_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches(v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
lean_dec(v_a_1847_);
lean_dec_ref(v_a_1846_);
lean_dec(v_a_1845_);
lean_dec_ref(v_a_1844_);
lean_dec(v_a_1843_);
lean_dec_ref(v_a_1842_);
lean_dec(v_a_1841_);
lean_dec_ref(v_a_1840_);
lean_dec(v_a_1839_);
lean_dec(v_a_1838_);
lean_dec_ref(v_a_1837_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg(lean_object* v_a_1850_){
_start:
{
lean_object* v___x_1852_; lean_object* v_typeAnalysis_1853_; lean_object* v___x_1854_; 
v___x_1852_ = lean_st_ref_get(v_a_1850_);
v_typeAnalysis_1853_ = lean_ctor_get(v___x_1852_, 1);
lean_inc_ref(v_typeAnalysis_1853_);
lean_dec(v___x_1852_);
v___x_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1854_, 0, v_typeAnalysis_1853_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg___boxed(lean_object* v_a_1855_, lean_object* v_a_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___redArg(v_a_1855_);
lean_dec(v_a_1855_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis(lean_object* v_a_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_){
_start:
{
lean_object* v___x_1870_; lean_object* v_typeAnalysis_1871_; lean_object* v___x_1872_; 
v___x_1870_ = lean_st_ref_get(v_a_1859_);
v_typeAnalysis_1871_ = lean_ctor_get(v___x_1870_, 1);
lean_inc_ref(v_typeAnalysis_1871_);
lean_dec(v___x_1870_);
v___x_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1872_, 0, v_typeAnalysis_1871_);
return v___x_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis___boxed(lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_){
_start:
{
lean_object* v_res_1885_; 
v_res_1885_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getTypeAnalysis(v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_, v_a_1883_);
lean_dec(v_a_1883_);
lean_dec_ref(v_a_1882_);
lean_dec(v_a_1881_);
lean_dec_ref(v_a_1880_);
lean_dec(v_a_1879_);
lean_dec_ref(v_a_1878_);
lean_dec(v_a_1877_);
lean_dec_ref(v_a_1876_);
lean_dec(v_a_1875_);
lean_dec(v_a_1874_);
lean_dec_ref(v_a_1873_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg(lean_object* v_n_1891_, lean_object* v_a_1892_){
_start:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v_typeAnalysis_1897_; lean_object* v_interestingStructures_1898_; lean_object* v_uninteresting_1899_; uint8_t v___x_1900_; 
v___x_1894_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_1895_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_1896_ = lean_st_ref_get(v_a_1892_);
v_typeAnalysis_1897_ = lean_ctor_get(v___x_1896_, 1);
lean_inc_ref(v_typeAnalysis_1897_);
lean_dec(v___x_1896_);
v_interestingStructures_1898_ = lean_ctor_get(v_typeAnalysis_1897_, 0);
lean_inc_ref(v_interestingStructures_1898_);
v_uninteresting_1899_ = lean_ctor_get(v_typeAnalysis_1897_, 3);
lean_inc_ref(v_uninteresting_1899_);
lean_dec_ref(v_typeAnalysis_1897_);
lean_inc(v_n_1891_);
v___x_1900_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1894_, v___x_1895_, v_uninteresting_1899_, v_n_1891_);
lean_dec_ref(v_uninteresting_1899_);
if (v___x_1900_ == 0)
{
uint8_t v___x_1901_; 
v___x_1901_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1894_, v___x_1895_, v_interestingStructures_1898_, v_n_1891_);
lean_dec_ref(v_interestingStructures_1898_);
if (v___x_1901_ == 0)
{
lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1902_ = lean_box(0);
v___x_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
return v___x_1903_;
}
else
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
v___x_1904_ = lean_box(v___x_1901_);
v___x_1905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1905_, 0, v___x_1904_);
v___x_1906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1906_, 0, v___x_1905_);
return v___x_1906_;
}
}
else
{
lean_object* v___x_1907_; lean_object* v___x_1908_; 
lean_dec_ref(v_interestingStructures_1898_);
lean_dec(v_n_1891_);
v___x_1907_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2));
v___x_1908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1907_);
return v___x_1908_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___boxed(lean_object* v_n_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg(v_n_1909_, v_a_1910_);
lean_dec(v_a_1910_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure(lean_object* v_n_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_, lean_object* v_a_1922_, lean_object* v_a_1923_, lean_object* v_a_1924_){
_start:
{
lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v_typeAnalysis_1929_; lean_object* v_interestingStructures_1930_; lean_object* v_uninteresting_1931_; uint8_t v___x_1932_; 
v___x_1926_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_1927_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_1928_ = lean_st_ref_get(v_a_1915_);
v_typeAnalysis_1929_ = lean_ctor_get(v___x_1928_, 1);
lean_inc_ref(v_typeAnalysis_1929_);
lean_dec(v___x_1928_);
v_interestingStructures_1930_ = lean_ctor_get(v_typeAnalysis_1929_, 0);
lean_inc_ref(v_interestingStructures_1930_);
v_uninteresting_1931_ = lean_ctor_get(v_typeAnalysis_1929_, 3);
lean_inc_ref(v_uninteresting_1931_);
lean_dec_ref(v_typeAnalysis_1929_);
lean_inc(v_n_1913_);
v___x_1932_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1926_, v___x_1927_, v_uninteresting_1931_, v_n_1913_);
lean_dec_ref(v_uninteresting_1931_);
if (v___x_1932_ == 0)
{
uint8_t v___x_1933_; 
v___x_1933_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1926_, v___x_1927_, v_interestingStructures_1930_, v_n_1913_);
lean_dec_ref(v_interestingStructures_1930_);
if (v___x_1933_ == 0)
{
lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1934_ = lean_box(0);
v___x_1935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1935_, 0, v___x_1934_);
return v___x_1935_;
}
else
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1936_ = lean_box(v___x_1933_);
v___x_1937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1937_, 0, v___x_1936_);
v___x_1938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1937_);
return v___x_1938_;
}
}
else
{
lean_object* v___x_1939_; lean_object* v___x_1940_; 
lean_dec_ref(v_interestingStructures_1930_);
lean_dec(v_n_1913_);
v___x_1939_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__2));
v___x_1940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1940_, 0, v___x_1939_);
return v___x_1940_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___boxed(lean_object* v_n_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_){
_start:
{
lean_object* v_res_1954_; 
v_res_1954_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure(v_n_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, v_a_1950_, v_a_1951_, v_a_1952_);
lean_dec(v_a_1952_);
lean_dec_ref(v_a_1951_);
lean_dec(v_a_1950_);
lean_dec_ref(v_a_1949_);
lean_dec(v_a_1948_);
lean_dec_ref(v_a_1947_);
lean_dec(v_a_1946_);
lean_dec_ref(v_a_1945_);
lean_dec(v_a_1944_);
lean_dec(v_a_1943_);
lean_dec_ref(v_a_1942_);
return v_res_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg(lean_object* v_f_1955_, lean_object* v_a_1956_){
_start:
{
lean_object* v___x_1958_; lean_object* v_caches_1959_; lean_object* v_typeAnalysis_1960_; lean_object* v_target_1961_; lean_object* v_hypotheses_1962_; uint8_t v_didChange_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1974_; 
v___x_1958_ = lean_st_ref_take(v_a_1956_);
v_caches_1959_ = lean_ctor_get(v___x_1958_, 0);
v_typeAnalysis_1960_ = lean_ctor_get(v___x_1958_, 1);
v_target_1961_ = lean_ctor_get(v___x_1958_, 2);
v_hypotheses_1962_ = lean_ctor_get(v___x_1958_, 3);
v_didChange_1963_ = lean_ctor_get_uint8(v___x_1958_, sizeof(void*)*4);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1965_ = v___x_1958_;
v_isShared_1966_ = v_isSharedCheck_1974_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_hypotheses_1962_);
lean_inc(v_target_1961_);
lean_inc(v_typeAnalysis_1960_);
lean_inc(v_caches_1959_);
lean_dec(v___x_1958_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1974_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1970_; 
v___x_1967_ = lean_box(0);
v___x_1968_ = lean_apply_1(v_f_1955_, v_typeAnalysis_1960_);
if (v_isShared_1966_ == 0)
{
lean_ctor_set(v___x_1965_, 1, v___x_1968_);
v___x_1970_ = v___x_1965_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_caches_1959_);
lean_ctor_set(v_reuseFailAlloc_1973_, 1, v___x_1968_);
lean_ctor_set(v_reuseFailAlloc_1973_, 2, v_target_1961_);
lean_ctor_set(v_reuseFailAlloc_1973_, 3, v_hypotheses_1962_);
lean_ctor_set_uint8(v_reuseFailAlloc_1973_, sizeof(void*)*4, v_didChange_1963_);
v___x_1970_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1971_ = lean_st_ref_put(v_a_1956_, v___x_1970_);
v___x_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1972_, 0, v___x_1967_);
return v___x_1972_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg___boxed(lean_object* v_f_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_){
_start:
{
lean_object* v_res_1978_; 
v_res_1978_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___redArg(v_f_1975_, v_a_1976_);
lean_dec(v_a_1976_);
return v_res_1978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis(lean_object* v_f_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_, lean_object* v_a_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_){
_start:
{
lean_object* v___x_1992_; lean_object* v_caches_1993_; lean_object* v_typeAnalysis_1994_; lean_object* v_target_1995_; lean_object* v_hypotheses_1996_; uint8_t v_didChange_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2008_; 
v___x_1992_ = lean_st_ref_take(v_a_1981_);
v_caches_1993_ = lean_ctor_get(v___x_1992_, 0);
v_typeAnalysis_1994_ = lean_ctor_get(v___x_1992_, 1);
v_target_1995_ = lean_ctor_get(v___x_1992_, 2);
v_hypotheses_1996_ = lean_ctor_get(v___x_1992_, 3);
v_didChange_1997_ = lean_ctor_get_uint8(v___x_1992_, sizeof(void*)*4);
v_isSharedCheck_2008_ = !lean_is_exclusive(v___x_1992_);
if (v_isSharedCheck_2008_ == 0)
{
v___x_1999_ = v___x_1992_;
v_isShared_2000_ = v_isSharedCheck_2008_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_hypotheses_1996_);
lean_inc(v_target_1995_);
lean_inc(v_typeAnalysis_1994_);
lean_inc(v_caches_1993_);
lean_dec(v___x_1992_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2008_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2004_; 
v___x_2001_ = lean_box(0);
v___x_2002_ = lean_apply_1(v_f_1979_, v_typeAnalysis_1994_);
if (v_isShared_2000_ == 0)
{
lean_ctor_set(v___x_1999_, 1, v___x_2002_);
v___x_2004_ = v___x_1999_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v_caches_1993_);
lean_ctor_set(v_reuseFailAlloc_2007_, 1, v___x_2002_);
lean_ctor_set(v_reuseFailAlloc_2007_, 2, v_target_1995_);
lean_ctor_set(v_reuseFailAlloc_2007_, 3, v_hypotheses_1996_);
lean_ctor_set_uint8(v_reuseFailAlloc_2007_, sizeof(void*)*4, v_didChange_1997_);
v___x_2004_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; 
v___x_2005_ = lean_st_ref_put(v_a_1981_, v___x_2004_);
v___x_2006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2006_, 0, v___x_2001_);
return v___x_2006_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis___boxed(lean_object* v_f_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v_res_2022_; 
v_res_2022_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_modifyTypeAnalysis(v_f_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_);
lean_dec(v_a_2020_);
lean_dec_ref(v_a_2019_);
lean_dec(v_a_2018_);
lean_dec_ref(v_a_2017_);
lean_dec(v_a_2016_);
lean_dec_ref(v_a_2015_);
lean_dec(v_a_2014_);
lean_dec_ref(v_a_2013_);
lean_dec(v_a_2012_);
lean_dec(v_a_2011_);
lean_dec_ref(v_a_2010_);
return v_res_2022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg(lean_object* v_n_2023_, lean_object* v_a_2024_){
_start:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v_typeAnalysis_2029_; lean_object* v_caches_2030_; lean_object* v_target_2031_; lean_object* v_hypotheses_2032_; uint8_t v_didChange_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2055_; 
v___x_2026_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2027_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2028_ = lean_st_ref_take(v_a_2024_);
v_typeAnalysis_2029_ = lean_ctor_get(v___x_2028_, 1);
v_caches_2030_ = lean_ctor_get(v___x_2028_, 0);
v_target_2031_ = lean_ctor_get(v___x_2028_, 2);
v_hypotheses_2032_ = lean_ctor_get(v___x_2028_, 3);
v_didChange_2033_ = lean_ctor_get_uint8(v___x_2028_, sizeof(void*)*4);
v_isSharedCheck_2055_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2035_ = v___x_2028_;
v_isShared_2036_ = v_isSharedCheck_2055_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_hypotheses_2032_);
lean_inc(v_target_2031_);
lean_inc(v_typeAnalysis_2029_);
lean_inc(v_caches_2030_);
lean_dec(v___x_2028_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2055_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v_interestingStructures_2037_; lean_object* v_interestingEnums_2038_; lean_object* v_interestingMatchers_2039_; lean_object* v_uninteresting_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2054_; 
v_interestingStructures_2037_ = lean_ctor_get(v_typeAnalysis_2029_, 0);
v_interestingEnums_2038_ = lean_ctor_get(v_typeAnalysis_2029_, 1);
v_interestingMatchers_2039_ = lean_ctor_get(v_typeAnalysis_2029_, 2);
v_uninteresting_2040_ = lean_ctor_get(v_typeAnalysis_2029_, 3);
v_isSharedCheck_2054_ = !lean_is_exclusive(v_typeAnalysis_2029_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2042_ = v_typeAnalysis_2029_;
v_isShared_2043_ = v_isSharedCheck_2054_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_uninteresting_2040_);
lean_inc(v_interestingMatchers_2039_);
lean_inc(v_interestingEnums_2038_);
lean_inc(v_interestingStructures_2037_);
lean_dec(v_typeAnalysis_2029_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2054_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2047_; 
v___x_2044_ = lean_box(0);
v___x_2045_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2026_, v___x_2027_, v_interestingStructures_2037_, v_n_2023_, v___x_2044_);
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 0, v___x_2045_);
v___x_2047_ = v___x_2042_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v___x_2045_);
lean_ctor_set(v_reuseFailAlloc_2053_, 1, v_interestingEnums_2038_);
lean_ctor_set(v_reuseFailAlloc_2053_, 2, v_interestingMatchers_2039_);
lean_ctor_set(v_reuseFailAlloc_2053_, 3, v_uninteresting_2040_);
v___x_2047_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
lean_object* v___x_2049_; 
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 1, v___x_2047_);
v___x_2049_ = v___x_2035_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v_caches_2030_);
lean_ctor_set(v_reuseFailAlloc_2052_, 1, v___x_2047_);
lean_ctor_set(v_reuseFailAlloc_2052_, 2, v_target_2031_);
lean_ctor_set(v_reuseFailAlloc_2052_, 3, v_hypotheses_2032_);
lean_ctor_set_uint8(v_reuseFailAlloc_2052_, sizeof(void*)*4, v_didChange_2033_);
v___x_2049_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___x_2050_ = lean_st_ref_put(v_a_2024_, v___x_2049_);
v___x_2051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2044_);
return v___x_2051_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg___boxed(lean_object* v_n_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_){
_start:
{
lean_object* v_res_2059_; 
v_res_2059_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___redArg(v_n_2056_, v_a_2057_);
lean_dec(v_a_2057_);
return v_res_2059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure(lean_object* v_n_2060_, lean_object* v_a_2061_, lean_object* v_a_2062_, lean_object* v_a_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_, lean_object* v_a_2071_){
_start:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v_typeAnalysis_2076_; lean_object* v_caches_2077_; lean_object* v_target_2078_; lean_object* v_hypotheses_2079_; uint8_t v_didChange_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2102_; 
v___x_2073_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2074_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2075_ = lean_st_ref_take(v_a_2062_);
v_typeAnalysis_2076_ = lean_ctor_get(v___x_2075_, 1);
v_caches_2077_ = lean_ctor_get(v___x_2075_, 0);
v_target_2078_ = lean_ctor_get(v___x_2075_, 2);
v_hypotheses_2079_ = lean_ctor_get(v___x_2075_, 3);
v_didChange_2080_ = lean_ctor_get_uint8(v___x_2075_, sizeof(void*)*4);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2075_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2082_ = v___x_2075_;
v_isShared_2083_ = v_isSharedCheck_2102_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_hypotheses_2079_);
lean_inc(v_target_2078_);
lean_inc(v_typeAnalysis_2076_);
lean_inc(v_caches_2077_);
lean_dec(v___x_2075_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2102_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v_interestingStructures_2084_; lean_object* v_interestingEnums_2085_; lean_object* v_interestingMatchers_2086_; lean_object* v_uninteresting_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2101_; 
v_interestingStructures_2084_ = lean_ctor_get(v_typeAnalysis_2076_, 0);
v_interestingEnums_2085_ = lean_ctor_get(v_typeAnalysis_2076_, 1);
v_interestingMatchers_2086_ = lean_ctor_get(v_typeAnalysis_2076_, 2);
v_uninteresting_2087_ = lean_ctor_get(v_typeAnalysis_2076_, 3);
v_isSharedCheck_2101_ = !lean_is_exclusive(v_typeAnalysis_2076_);
if (v_isSharedCheck_2101_ == 0)
{
v___x_2089_ = v_typeAnalysis_2076_;
v_isShared_2090_ = v_isSharedCheck_2101_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_uninteresting_2087_);
lean_inc(v_interestingMatchers_2086_);
lean_inc(v_interestingEnums_2085_);
lean_inc(v_interestingStructures_2084_);
lean_dec(v_typeAnalysis_2076_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2101_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2094_; 
v___x_2091_ = lean_box(0);
v___x_2092_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2073_, v___x_2074_, v_interestingStructures_2084_, v_n_2060_, v___x_2091_);
if (v_isShared_2090_ == 0)
{
lean_ctor_set(v___x_2089_, 0, v___x_2092_);
v___x_2094_ = v___x_2089_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v___x_2092_);
lean_ctor_set(v_reuseFailAlloc_2100_, 1, v_interestingEnums_2085_);
lean_ctor_set(v_reuseFailAlloc_2100_, 2, v_interestingMatchers_2086_);
lean_ctor_set(v_reuseFailAlloc_2100_, 3, v_uninteresting_2087_);
v___x_2094_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
lean_object* v___x_2096_; 
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 1, v___x_2094_);
v___x_2096_ = v___x_2082_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_caches_2077_);
lean_ctor_set(v_reuseFailAlloc_2099_, 1, v___x_2094_);
lean_ctor_set(v_reuseFailAlloc_2099_, 2, v_target_2078_);
lean_ctor_set(v_reuseFailAlloc_2099_, 3, v_hypotheses_2079_);
lean_ctor_set_uint8(v_reuseFailAlloc_2099_, sizeof(void*)*4, v_didChange_2080_);
v___x_2096_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2097_ = lean_st_ref_put(v_a_2062_, v___x_2096_);
v___x_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2091_);
return v___x_2098_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure___boxed(lean_object* v_n_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_){
_start:
{
lean_object* v_res_2116_; 
v_res_2116_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingStructure(v_n_2103_, v_a_2104_, v_a_2105_, v_a_2106_, v_a_2107_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_, v_a_2114_);
lean_dec(v_a_2114_);
lean_dec_ref(v_a_2113_);
lean_dec(v_a_2112_);
lean_dec_ref(v_a_2111_);
lean_dec(v_a_2110_);
lean_dec_ref(v_a_2109_);
lean_dec(v_a_2108_);
lean_dec_ref(v_a_2107_);
lean_dec(v_a_2106_);
lean_dec(v_a_2105_);
lean_dec_ref(v_a_2104_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg(lean_object* v_n_2117_, lean_object* v_a_2118_){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v_typeAnalysis_2123_; lean_object* v_caches_2124_; lean_object* v_target_2125_; lean_object* v_hypotheses_2126_; uint8_t v_didChange_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2149_; 
v___x_2120_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2121_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2122_ = lean_st_ref_take(v_a_2118_);
v_typeAnalysis_2123_ = lean_ctor_get(v___x_2122_, 1);
v_caches_2124_ = lean_ctor_get(v___x_2122_, 0);
v_target_2125_ = lean_ctor_get(v___x_2122_, 2);
v_hypotheses_2126_ = lean_ctor_get(v___x_2122_, 3);
v_didChange_2127_ = lean_ctor_get_uint8(v___x_2122_, sizeof(void*)*4);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2129_ = v___x_2122_;
v_isShared_2130_ = v_isSharedCheck_2149_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_hypotheses_2126_);
lean_inc(v_target_2125_);
lean_inc(v_typeAnalysis_2123_);
lean_inc(v_caches_2124_);
lean_dec(v___x_2122_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2149_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v_interestingStructures_2131_; lean_object* v_interestingEnums_2132_; lean_object* v_interestingMatchers_2133_; lean_object* v_uninteresting_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2148_; 
v_interestingStructures_2131_ = lean_ctor_get(v_typeAnalysis_2123_, 0);
v_interestingEnums_2132_ = lean_ctor_get(v_typeAnalysis_2123_, 1);
v_interestingMatchers_2133_ = lean_ctor_get(v_typeAnalysis_2123_, 2);
v_uninteresting_2134_ = lean_ctor_get(v_typeAnalysis_2123_, 3);
v_isSharedCheck_2148_ = !lean_is_exclusive(v_typeAnalysis_2123_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2136_ = v_typeAnalysis_2123_;
v_isShared_2137_ = v_isSharedCheck_2148_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_uninteresting_2134_);
lean_inc(v_interestingMatchers_2133_);
lean_inc(v_interestingEnums_2132_);
lean_inc(v_interestingStructures_2131_);
lean_dec(v_typeAnalysis_2123_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2148_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2141_; 
v___x_2138_ = lean_box(0);
v___x_2139_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2120_, v___x_2121_, v_interestingEnums_2132_, v_n_2117_, v___x_2138_);
if (v_isShared_2137_ == 0)
{
lean_ctor_set(v___x_2136_, 1, v___x_2139_);
v___x_2141_ = v___x_2136_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v_interestingStructures_2131_);
lean_ctor_set(v_reuseFailAlloc_2147_, 1, v___x_2139_);
lean_ctor_set(v_reuseFailAlloc_2147_, 2, v_interestingMatchers_2133_);
lean_ctor_set(v_reuseFailAlloc_2147_, 3, v_uninteresting_2134_);
v___x_2141_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
lean_object* v___x_2143_; 
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 1, v___x_2141_);
v___x_2143_ = v___x_2129_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v_caches_2124_);
lean_ctor_set(v_reuseFailAlloc_2146_, 1, v___x_2141_);
lean_ctor_set(v_reuseFailAlloc_2146_, 2, v_target_2125_);
lean_ctor_set(v_reuseFailAlloc_2146_, 3, v_hypotheses_2126_);
lean_ctor_set_uint8(v_reuseFailAlloc_2146_, sizeof(void*)*4, v_didChange_2127_);
v___x_2143_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2144_ = lean_st_ref_put(v_a_2118_, v___x_2143_);
v___x_2145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2138_);
return v___x_2145_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg___boxed(lean_object* v_n_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_){
_start:
{
lean_object* v_res_2153_; 
v_res_2153_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___redArg(v_n_2150_, v_a_2151_);
lean_dec(v_a_2151_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum(lean_object* v_n_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_){
_start:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v_typeAnalysis_2170_; lean_object* v_caches_2171_; lean_object* v_target_2172_; lean_object* v_hypotheses_2173_; uint8_t v_didChange_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2196_; 
v___x_2167_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2168_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2169_ = lean_st_ref_take(v_a_2156_);
v_typeAnalysis_2170_ = lean_ctor_get(v___x_2169_, 1);
v_caches_2171_ = lean_ctor_get(v___x_2169_, 0);
v_target_2172_ = lean_ctor_get(v___x_2169_, 2);
v_hypotheses_2173_ = lean_ctor_get(v___x_2169_, 3);
v_didChange_2174_ = lean_ctor_get_uint8(v___x_2169_, sizeof(void*)*4);
v_isSharedCheck_2196_ = !lean_is_exclusive(v___x_2169_);
if (v_isSharedCheck_2196_ == 0)
{
v___x_2176_ = v___x_2169_;
v_isShared_2177_ = v_isSharedCheck_2196_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_hypotheses_2173_);
lean_inc(v_target_2172_);
lean_inc(v_typeAnalysis_2170_);
lean_inc(v_caches_2171_);
lean_dec(v___x_2169_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2196_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v_interestingStructures_2178_; lean_object* v_interestingEnums_2179_; lean_object* v_interestingMatchers_2180_; lean_object* v_uninteresting_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2195_; 
v_interestingStructures_2178_ = lean_ctor_get(v_typeAnalysis_2170_, 0);
v_interestingEnums_2179_ = lean_ctor_get(v_typeAnalysis_2170_, 1);
v_interestingMatchers_2180_ = lean_ctor_get(v_typeAnalysis_2170_, 2);
v_uninteresting_2181_ = lean_ctor_get(v_typeAnalysis_2170_, 3);
v_isSharedCheck_2195_ = !lean_is_exclusive(v_typeAnalysis_2170_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2183_ = v_typeAnalysis_2170_;
v_isShared_2184_ = v_isSharedCheck_2195_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_uninteresting_2181_);
lean_inc(v_interestingMatchers_2180_);
lean_inc(v_interestingEnums_2179_);
lean_inc(v_interestingStructures_2178_);
lean_dec(v_typeAnalysis_2170_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2195_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2188_; 
v___x_2185_ = lean_box(0);
v___x_2186_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2167_, v___x_2168_, v_interestingEnums_2179_, v_n_2154_, v___x_2185_);
if (v_isShared_2184_ == 0)
{
lean_ctor_set(v___x_2183_, 1, v___x_2186_);
v___x_2188_ = v___x_2183_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v_interestingStructures_2178_);
lean_ctor_set(v_reuseFailAlloc_2194_, 1, v___x_2186_);
lean_ctor_set(v_reuseFailAlloc_2194_, 2, v_interestingMatchers_2180_);
lean_ctor_set(v_reuseFailAlloc_2194_, 3, v_uninteresting_2181_);
v___x_2188_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
lean_object* v___x_2190_; 
if (v_isShared_2177_ == 0)
{
lean_ctor_set(v___x_2176_, 1, v___x_2188_);
v___x_2190_ = v___x_2176_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_caches_2171_);
lean_ctor_set(v_reuseFailAlloc_2193_, 1, v___x_2188_);
lean_ctor_set(v_reuseFailAlloc_2193_, 2, v_target_2172_);
lean_ctor_set(v_reuseFailAlloc_2193_, 3, v_hypotheses_2173_);
lean_ctor_set_uint8(v_reuseFailAlloc_2193_, sizeof(void*)*4, v_didChange_2174_);
v___x_2190_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2191_ = lean_st_ref_put(v_a_2156_, v___x_2190_);
v___x_2192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2185_);
return v___x_2192_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum___boxed(lean_object* v_n_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_){
_start:
{
lean_object* v_res_2210_; 
v_res_2210_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingEnum(v_n_2197_, v_a_2198_, v_a_2199_, v_a_2200_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_, v_a_2205_, v_a_2206_, v_a_2207_, v_a_2208_);
lean_dec(v_a_2208_);
lean_dec_ref(v_a_2207_);
lean_dec(v_a_2206_);
lean_dec_ref(v_a_2205_);
lean_dec(v_a_2204_);
lean_dec_ref(v_a_2203_);
lean_dec(v_a_2202_);
lean_dec_ref(v_a_2201_);
lean_dec(v_a_2200_);
lean_dec(v_a_2199_);
lean_dec_ref(v_a_2198_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg(lean_object* v_n_2211_, lean_object* v_k_2212_, lean_object* v_a_2213_){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v_typeAnalysis_2218_; lean_object* v_caches_2219_; lean_object* v_target_2220_; lean_object* v_hypotheses_2221_; uint8_t v_didChange_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2244_; 
v___x_2215_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2216_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2217_ = lean_st_ref_take(v_a_2213_);
v_typeAnalysis_2218_ = lean_ctor_get(v___x_2217_, 1);
v_caches_2219_ = lean_ctor_get(v___x_2217_, 0);
v_target_2220_ = lean_ctor_get(v___x_2217_, 2);
v_hypotheses_2221_ = lean_ctor_get(v___x_2217_, 3);
v_didChange_2222_ = lean_ctor_get_uint8(v___x_2217_, sizeof(void*)*4);
v_isSharedCheck_2244_ = !lean_is_exclusive(v___x_2217_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2224_ = v___x_2217_;
v_isShared_2225_ = v_isSharedCheck_2244_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_hypotheses_2221_);
lean_inc(v_target_2220_);
lean_inc(v_typeAnalysis_2218_);
lean_inc(v_caches_2219_);
lean_dec(v___x_2217_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2244_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v_interestingStructures_2226_; lean_object* v_interestingEnums_2227_; lean_object* v_interestingMatchers_2228_; lean_object* v_uninteresting_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2243_; 
v_interestingStructures_2226_ = lean_ctor_get(v_typeAnalysis_2218_, 0);
v_interestingEnums_2227_ = lean_ctor_get(v_typeAnalysis_2218_, 1);
v_interestingMatchers_2228_ = lean_ctor_get(v_typeAnalysis_2218_, 2);
v_uninteresting_2229_ = lean_ctor_get(v_typeAnalysis_2218_, 3);
v_isSharedCheck_2243_ = !lean_is_exclusive(v_typeAnalysis_2218_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2231_ = v_typeAnalysis_2218_;
v_isShared_2232_ = v_isSharedCheck_2243_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_uninteresting_2229_);
lean_inc(v_interestingMatchers_2228_);
lean_inc(v_interestingEnums_2227_);
lean_inc(v_interestingStructures_2226_);
lean_dec(v_typeAnalysis_2218_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2243_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2236_; 
v___x_2233_ = lean_box(0);
v___x_2234_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_2215_, v___x_2216_, v_interestingMatchers_2228_, v_n_2211_, v_k_2212_);
if (v_isShared_2232_ == 0)
{
lean_ctor_set(v___x_2231_, 2, v___x_2234_);
v___x_2236_ = v___x_2231_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v_interestingStructures_2226_);
lean_ctor_set(v_reuseFailAlloc_2242_, 1, v_interestingEnums_2227_);
lean_ctor_set(v_reuseFailAlloc_2242_, 2, v___x_2234_);
lean_ctor_set(v_reuseFailAlloc_2242_, 3, v_uninteresting_2229_);
v___x_2236_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
lean_object* v___x_2238_; 
if (v_isShared_2225_ == 0)
{
lean_ctor_set(v___x_2224_, 1, v___x_2236_);
v___x_2238_ = v___x_2224_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_caches_2219_);
lean_ctor_set(v_reuseFailAlloc_2241_, 1, v___x_2236_);
lean_ctor_set(v_reuseFailAlloc_2241_, 2, v_target_2220_);
lean_ctor_set(v_reuseFailAlloc_2241_, 3, v_hypotheses_2221_);
lean_ctor_set_uint8(v_reuseFailAlloc_2241_, sizeof(void*)*4, v_didChange_2222_);
v___x_2238_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2239_ = lean_st_ref_put(v_a_2213_, v___x_2238_);
v___x_2240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2240_, 0, v___x_2233_);
return v___x_2240_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg___boxed(lean_object* v_n_2245_, lean_object* v_k_2246_, lean_object* v_a_2247_, lean_object* v_a_2248_){
_start:
{
lean_object* v_res_2249_; 
v_res_2249_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___redArg(v_n_2245_, v_k_2246_, v_a_2247_);
lean_dec(v_a_2247_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher(lean_object* v_n_2250_, lean_object* v_k_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v_typeAnalysis_2267_; lean_object* v_caches_2268_; lean_object* v_target_2269_; lean_object* v_hypotheses_2270_; uint8_t v_didChange_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2293_; 
v___x_2264_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2265_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2266_ = lean_st_ref_take(v_a_2253_);
v_typeAnalysis_2267_ = lean_ctor_get(v___x_2266_, 1);
v_caches_2268_ = lean_ctor_get(v___x_2266_, 0);
v_target_2269_ = lean_ctor_get(v___x_2266_, 2);
v_hypotheses_2270_ = lean_ctor_get(v___x_2266_, 3);
v_didChange_2271_ = lean_ctor_get_uint8(v___x_2266_, sizeof(void*)*4);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2273_ = v___x_2266_;
v_isShared_2274_ = v_isSharedCheck_2293_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_hypotheses_2270_);
lean_inc(v_target_2269_);
lean_inc(v_typeAnalysis_2267_);
lean_inc(v_caches_2268_);
lean_dec(v___x_2266_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2293_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v_interestingStructures_2275_; lean_object* v_interestingEnums_2276_; lean_object* v_interestingMatchers_2277_; lean_object* v_uninteresting_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2292_; 
v_interestingStructures_2275_ = lean_ctor_get(v_typeAnalysis_2267_, 0);
v_interestingEnums_2276_ = lean_ctor_get(v_typeAnalysis_2267_, 1);
v_interestingMatchers_2277_ = lean_ctor_get(v_typeAnalysis_2267_, 2);
v_uninteresting_2278_ = lean_ctor_get(v_typeAnalysis_2267_, 3);
v_isSharedCheck_2292_ = !lean_is_exclusive(v_typeAnalysis_2267_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2280_ = v_typeAnalysis_2267_;
v_isShared_2281_ = v_isSharedCheck_2292_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_uninteresting_2278_);
lean_inc(v_interestingMatchers_2277_);
lean_inc(v_interestingEnums_2276_);
lean_inc(v_interestingStructures_2275_);
lean_dec(v_typeAnalysis_2267_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2292_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2285_; 
v___x_2282_ = lean_box(0);
v___x_2283_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_2264_, v___x_2265_, v_interestingMatchers_2277_, v_n_2250_, v_k_2251_);
if (v_isShared_2281_ == 0)
{
lean_ctor_set(v___x_2280_, 2, v___x_2283_);
v___x_2285_ = v___x_2280_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_interestingStructures_2275_);
lean_ctor_set(v_reuseFailAlloc_2291_, 1, v_interestingEnums_2276_);
lean_ctor_set(v_reuseFailAlloc_2291_, 2, v___x_2283_);
lean_ctor_set(v_reuseFailAlloc_2291_, 3, v_uninteresting_2278_);
v___x_2285_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
lean_object* v___x_2287_; 
if (v_isShared_2274_ == 0)
{
lean_ctor_set(v___x_2273_, 1, v___x_2285_);
v___x_2287_ = v___x_2273_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v_caches_2268_);
lean_ctor_set(v_reuseFailAlloc_2290_, 1, v___x_2285_);
lean_ctor_set(v_reuseFailAlloc_2290_, 2, v_target_2269_);
lean_ctor_set(v_reuseFailAlloc_2290_, 3, v_hypotheses_2270_);
lean_ctor_set_uint8(v_reuseFailAlloc_2290_, sizeof(void*)*4, v_didChange_2271_);
v___x_2287_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2288_ = lean_st_ref_put(v_a_2253_, v___x_2287_);
v___x_2289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2289_, 0, v___x_2282_);
return v___x_2289_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher___boxed(lean_object* v_n_2294_, lean_object* v_k_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_, lean_object* v_a_2299_, lean_object* v_a_2300_, lean_object* v_a_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_, lean_object* v_a_2306_, lean_object* v_a_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markInterestingMatcher(v_n_2294_, v_k_2295_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_, v_a_2302_, v_a_2303_, v_a_2304_, v_a_2305_, v_a_2306_);
lean_dec(v_a_2306_);
lean_dec_ref(v_a_2305_);
lean_dec(v_a_2304_);
lean_dec_ref(v_a_2303_);
lean_dec(v_a_2302_);
lean_dec_ref(v_a_2301_);
lean_dec(v_a_2300_);
lean_dec_ref(v_a_2299_);
lean_dec(v_a_2298_);
lean_dec(v_a_2297_);
lean_dec_ref(v_a_2296_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg(lean_object* v_n_2309_, lean_object* v_a_2310_){
_start:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v_typeAnalysis_2315_; lean_object* v_caches_2316_; lean_object* v_target_2317_; lean_object* v_hypotheses_2318_; uint8_t v_didChange_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2341_; 
v___x_2312_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2313_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2314_ = lean_st_ref_take(v_a_2310_);
v_typeAnalysis_2315_ = lean_ctor_get(v___x_2314_, 1);
v_caches_2316_ = lean_ctor_get(v___x_2314_, 0);
v_target_2317_ = lean_ctor_get(v___x_2314_, 2);
v_hypotheses_2318_ = lean_ctor_get(v___x_2314_, 3);
v_didChange_2319_ = lean_ctor_get_uint8(v___x_2314_, sizeof(void*)*4);
v_isSharedCheck_2341_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2341_ == 0)
{
v___x_2321_ = v___x_2314_;
v_isShared_2322_ = v_isSharedCheck_2341_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_hypotheses_2318_);
lean_inc(v_target_2317_);
lean_inc(v_typeAnalysis_2315_);
lean_inc(v_caches_2316_);
lean_dec(v___x_2314_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2341_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v_interestingStructures_2323_; lean_object* v_interestingEnums_2324_; lean_object* v_interestingMatchers_2325_; lean_object* v_uninteresting_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2340_; 
v_interestingStructures_2323_ = lean_ctor_get(v_typeAnalysis_2315_, 0);
v_interestingEnums_2324_ = lean_ctor_get(v_typeAnalysis_2315_, 1);
v_interestingMatchers_2325_ = lean_ctor_get(v_typeAnalysis_2315_, 2);
v_uninteresting_2326_ = lean_ctor_get(v_typeAnalysis_2315_, 3);
v_isSharedCheck_2340_ = !lean_is_exclusive(v_typeAnalysis_2315_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2328_ = v_typeAnalysis_2315_;
v_isShared_2329_ = v_isSharedCheck_2340_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_uninteresting_2326_);
lean_inc(v_interestingMatchers_2325_);
lean_inc(v_interestingEnums_2324_);
lean_inc(v_interestingStructures_2323_);
lean_dec(v_typeAnalysis_2315_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2340_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2333_; 
v___x_2330_ = lean_box(0);
v___x_2331_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2312_, v___x_2313_, v_uninteresting_2326_, v_n_2309_, v___x_2330_);
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 3, v___x_2331_);
v___x_2333_ = v___x_2328_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v_interestingStructures_2323_);
lean_ctor_set(v_reuseFailAlloc_2339_, 1, v_interestingEnums_2324_);
lean_ctor_set(v_reuseFailAlloc_2339_, 2, v_interestingMatchers_2325_);
lean_ctor_set(v_reuseFailAlloc_2339_, 3, v___x_2331_);
v___x_2333_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
lean_object* v___x_2335_; 
if (v_isShared_2322_ == 0)
{
lean_ctor_set(v___x_2321_, 1, v___x_2333_);
v___x_2335_ = v___x_2321_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_caches_2316_);
lean_ctor_set(v_reuseFailAlloc_2338_, 1, v___x_2333_);
lean_ctor_set(v_reuseFailAlloc_2338_, 2, v_target_2317_);
lean_ctor_set(v_reuseFailAlloc_2338_, 3, v_hypotheses_2318_);
lean_ctor_set_uint8(v_reuseFailAlloc_2338_, sizeof(void*)*4, v_didChange_2319_);
v___x_2335_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
lean_object* v___x_2336_; lean_object* v___x_2337_; 
v___x_2336_ = lean_st_ref_put(v_a_2310_, v___x_2335_);
v___x_2337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2337_, 0, v___x_2330_);
return v___x_2337_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg___boxed(lean_object* v_n_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_){
_start:
{
lean_object* v_res_2345_; 
v_res_2345_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___redArg(v_n_2342_, v_a_2343_);
lean_dec(v_a_2343_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst(lean_object* v_n_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_){
_start:
{
lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v_typeAnalysis_2362_; lean_object* v_caches_2363_; lean_object* v_target_2364_; lean_object* v_hypotheses_2365_; uint8_t v_didChange_2366_; lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2388_; 
v___x_2359_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__0));
v___x_2360_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_lookupInterestingStructure___redArg___closed__1));
v___x_2361_ = lean_st_ref_take(v_a_2348_);
v_typeAnalysis_2362_ = lean_ctor_get(v___x_2361_, 1);
v_caches_2363_ = lean_ctor_get(v___x_2361_, 0);
v_target_2364_ = lean_ctor_get(v___x_2361_, 2);
v_hypotheses_2365_ = lean_ctor_get(v___x_2361_, 3);
v_didChange_2366_ = lean_ctor_get_uint8(v___x_2361_, sizeof(void*)*4);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2368_ = v___x_2361_;
v_isShared_2369_ = v_isSharedCheck_2388_;
goto v_resetjp_2367_;
}
else
{
lean_inc(v_hypotheses_2365_);
lean_inc(v_target_2364_);
lean_inc(v_typeAnalysis_2362_);
lean_inc(v_caches_2363_);
lean_dec(v___x_2361_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2388_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v_interestingStructures_2370_; lean_object* v_interestingEnums_2371_; lean_object* v_interestingMatchers_2372_; lean_object* v_uninteresting_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2387_; 
v_interestingStructures_2370_ = lean_ctor_get(v_typeAnalysis_2362_, 0);
v_interestingEnums_2371_ = lean_ctor_get(v_typeAnalysis_2362_, 1);
v_interestingMatchers_2372_ = lean_ctor_get(v_typeAnalysis_2362_, 2);
v_uninteresting_2373_ = lean_ctor_get(v_typeAnalysis_2362_, 3);
v_isSharedCheck_2387_ = !lean_is_exclusive(v_typeAnalysis_2362_);
if (v_isSharedCheck_2387_ == 0)
{
v___x_2375_ = v_typeAnalysis_2362_;
v_isShared_2376_ = v_isSharedCheck_2387_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_uninteresting_2373_);
lean_inc(v_interestingMatchers_2372_);
lean_inc(v_interestingEnums_2371_);
lean_inc(v_interestingStructures_2370_);
lean_dec(v_typeAnalysis_2362_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2387_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2380_; 
v___x_2377_ = lean_box(0);
v___x_2378_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2359_, v___x_2360_, v_uninteresting_2373_, v_n_2346_, v___x_2377_);
if (v_isShared_2376_ == 0)
{
lean_ctor_set(v___x_2375_, 3, v___x_2378_);
v___x_2380_ = v___x_2375_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v_interestingStructures_2370_);
lean_ctor_set(v_reuseFailAlloc_2386_, 1, v_interestingEnums_2371_);
lean_ctor_set(v_reuseFailAlloc_2386_, 2, v_interestingMatchers_2372_);
lean_ctor_set(v_reuseFailAlloc_2386_, 3, v___x_2378_);
v___x_2380_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
lean_object* v___x_2382_; 
if (v_isShared_2369_ == 0)
{
lean_ctor_set(v___x_2368_, 1, v___x_2380_);
v___x_2382_ = v___x_2368_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v_caches_2363_);
lean_ctor_set(v_reuseFailAlloc_2385_, 1, v___x_2380_);
lean_ctor_set(v_reuseFailAlloc_2385_, 2, v_target_2364_);
lean_ctor_set(v_reuseFailAlloc_2385_, 3, v_hypotheses_2365_);
lean_ctor_set_uint8(v_reuseFailAlloc_2385_, sizeof(void*)*4, v_didChange_2366_);
v___x_2382_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
lean_object* v___x_2383_; lean_object* v___x_2384_; 
v___x_2383_ = lean_st_ref_put(v_a_2348_, v___x_2382_);
v___x_2384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2377_);
return v___x_2384_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst___boxed(lean_object* v_n_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_){
_start:
{
lean_object* v_res_2402_; 
v_res_2402_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_markUninterestingConst(v_n_2389_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_, v_a_2400_);
lean_dec(v_a_2400_);
lean_dec_ref(v_a_2399_);
lean_dec(v_a_2398_);
lean_dec_ref(v_a_2397_);
lean_dec(v_a_2396_);
lean_dec_ref(v_a_2395_);
lean_dec(v_a_2394_);
lean_dec_ref(v_a_2393_);
lean_dec(v_a_2392_);
lean_dec(v_a_2391_);
lean_dec_ref(v_a_2390_);
return v_res_2402_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2403_ = lean_box(0);
v___x_2404_ = lean_unsigned_to_nat(16u);
v___x_2405_ = lean_mk_array(v___x_2404_, v___x_2403_);
return v___x_2405_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2406_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__0);
v___x_2407_ = lean_unsigned_to_nat(0u);
v___x_2408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2407_);
lean_ctor_set(v___x_2408_, 1, v___x_2406_);
return v___x_2408_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___x_2409_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__1);
v___x_2410_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2410_, 0, v___x_2409_);
lean_ctor_set(v___x_2410_, 1, v___x_2409_);
lean_ctor_set(v___x_2410_, 2, v___x_2409_);
lean_ctor_set(v___x_2410_, 3, v___x_2409_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg(lean_object* v_ctx_2413_, lean_object* v_target_2414_, lean_object* v_x_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_, lean_object* v_a_2424_){
_start:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; uint8_t v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2426_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_2427_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2);
v___x_2428_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
v___x_2429_ = 0;
v___x_2430_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2430_, 0, v___x_2426_);
lean_ctor_set(v___x_2430_, 1, v___x_2427_);
lean_ctor_set(v___x_2430_, 2, v_target_2414_);
lean_ctor_set(v___x_2430_, 3, v___x_2428_);
lean_ctor_set_uint8(v___x_2430_, sizeof(void*)*4, v___x_2429_);
v___x_2431_ = lean_st_mk_ref(v___x_2430_);
lean_inc(v_a_2424_);
lean_inc_ref(v_a_2423_);
lean_inc(v_a_2422_);
lean_inc_ref(v_a_2421_);
lean_inc(v_a_2420_);
lean_inc_ref(v_a_2419_);
lean_inc(v_a_2418_);
lean_inc_ref(v_a_2417_);
lean_inc(v_a_2416_);
lean_inc(v___x_2431_);
v___x_2432_ = lean_apply_12(v_x_2415_, v_ctx_2413_, v___x_2431_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_, v_a_2422_, v_a_2423_, v_a_2424_, lean_box(0));
if (lean_obj_tag(v___x_2432_) == 0)
{
lean_object* v_a_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2442_; 
v_a_2433_ = lean_ctor_get(v___x_2432_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2435_ = v___x_2432_;
v_isShared_2436_ = v_isSharedCheck_2442_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_a_2433_);
lean_dec(v___x_2432_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2442_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2440_; 
v___x_2437_ = lean_st_ref_get(v___x_2431_);
lean_dec(v___x_2431_);
v___x_2438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2438_, 0, v_a_2433_);
lean_ctor_set(v___x_2438_, 1, v___x_2437_);
if (v_isShared_2436_ == 0)
{
lean_ctor_set(v___x_2435_, 0, v___x_2438_);
v___x_2440_ = v___x_2435_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v___x_2438_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
}
}
}
else
{
lean_object* v_a_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2450_; 
lean_dec(v___x_2431_);
v_a_2443_ = lean_ctor_get(v___x_2432_, 0);
v_isSharedCheck_2450_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2450_ == 0)
{
v___x_2445_ = v___x_2432_;
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v___x_2432_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v___x_2448_; 
if (v_isShared_2446_ == 0)
{
v___x_2448_ = v___x_2445_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v_a_2443_);
v___x_2448_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
return v___x_2448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___boxed(lean_object* v_ctx_2451_, lean_object* v_target_2452_, lean_object* v_x_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_){
_start:
{
lean_object* v_res_2464_; 
v_res_2464_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg(v_ctx_2451_, v_target_2452_, v_x_2453_, v_a_2454_, v_a_2455_, v_a_2456_, v_a_2457_, v_a_2458_, v_a_2459_, v_a_2460_, v_a_2461_, v_a_2462_);
lean_dec(v_a_2462_);
lean_dec_ref(v_a_2461_);
lean_dec(v_a_2460_);
lean_dec_ref(v_a_2459_);
lean_dec(v_a_2458_);
lean_dec_ref(v_a_2457_);
lean_dec(v_a_2456_);
lean_dec_ref(v_a_2455_);
lean_dec(v_a_2454_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run(lean_object* v_00_u03b1_2465_, lean_object* v_ctx_2466_, lean_object* v_target_2467_, lean_object* v_x_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_){
_start:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; uint8_t v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2479_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_2480_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2);
v___x_2481_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
v___x_2482_ = 0;
v___x_2483_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2483_, 0, v___x_2479_);
lean_ctor_set(v___x_2483_, 1, v___x_2480_);
lean_ctor_set(v___x_2483_, 2, v_target_2467_);
lean_ctor_set(v___x_2483_, 3, v___x_2481_);
lean_ctor_set_uint8(v___x_2483_, sizeof(void*)*4, v___x_2482_);
v___x_2484_ = lean_st_mk_ref(v___x_2483_);
lean_inc(v_a_2477_);
lean_inc_ref(v_a_2476_);
lean_inc(v_a_2475_);
lean_inc_ref(v_a_2474_);
lean_inc(v_a_2473_);
lean_inc_ref(v_a_2472_);
lean_inc(v_a_2471_);
lean_inc_ref(v_a_2470_);
lean_inc(v_a_2469_);
lean_inc(v___x_2484_);
v___x_2485_ = lean_apply_12(v_x_2468_, v_ctx_2466_, v___x_2484_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_, lean_box(0));
if (lean_obj_tag(v___x_2485_) == 0)
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2495_; 
v_a_2486_ = lean_ctor_get(v___x_2485_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2488_ = v___x_2485_;
v_isShared_2489_ = v_isSharedCheck_2495_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2485_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2495_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2493_; 
v___x_2490_ = lean_st_ref_get(v___x_2484_);
lean_dec(v___x_2484_);
v___x_2491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2491_, 0, v_a_2486_);
lean_ctor_set(v___x_2491_, 1, v___x_2490_);
if (v_isShared_2489_ == 0)
{
lean_ctor_set(v___x_2488_, 0, v___x_2491_);
v___x_2493_ = v___x_2488_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v___x_2491_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
return v___x_2493_;
}
}
}
else
{
lean_object* v_a_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2503_; 
lean_dec(v___x_2484_);
v_a_2496_ = lean_ctor_get(v___x_2485_, 0);
v_isSharedCheck_2503_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2503_ == 0)
{
v___x_2498_ = v___x_2485_;
v_isShared_2499_ = v_isSharedCheck_2503_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_a_2496_);
lean_dec(v___x_2485_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2503_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2501_; 
if (v_isShared_2499_ == 0)
{
v___x_2501_ = v___x_2498_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2502_; 
v_reuseFailAlloc_2502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2502_, 0, v_a_2496_);
v___x_2501_ = v_reuseFailAlloc_2502_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
return v___x_2501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___boxed(lean_object* v_00_u03b1_2504_, lean_object* v_ctx_2505_, lean_object* v_target_2506_, lean_object* v_x_2507_, lean_object* v_a_2508_, lean_object* v_a_2509_, lean_object* v_a_2510_, lean_object* v_a_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_, lean_object* v_a_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run(v_00_u03b1_2504_, v_ctx_2505_, v_target_2506_, v_x_2507_, v_a_2508_, v_a_2509_, v_a_2510_, v_a_2511_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_, v_a_2516_);
lean_dec(v_a_2516_);
lean_dec_ref(v_a_2515_);
lean_dec(v_a_2514_);
lean_dec_ref(v_a_2513_);
lean_dec(v_a_2512_);
lean_dec_ref(v_a_2511_);
lean_dec(v_a_2510_);
lean_dec_ref(v_a_2509_);
lean_dec(v_a_2508_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg(lean_object* v_ctx_2519_, lean_object* v_target_2520_, lean_object* v_x_2521_, lean_object* v_a_2522_, lean_object* v_a_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_){
_start:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; uint8_t v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; 
v___x_2532_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_2533_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2);
v___x_2534_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
v___x_2535_ = 0;
v___x_2536_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2536_, 0, v___x_2532_);
lean_ctor_set(v___x_2536_, 1, v___x_2533_);
lean_ctor_set(v___x_2536_, 2, v_target_2520_);
lean_ctor_set(v___x_2536_, 3, v___x_2534_);
lean_ctor_set_uint8(v___x_2536_, sizeof(void*)*4, v___x_2535_);
v___x_2537_ = lean_st_mk_ref(v___x_2536_);
lean_inc(v_a_2530_);
lean_inc_ref(v_a_2529_);
lean_inc(v_a_2528_);
lean_inc_ref(v_a_2527_);
lean_inc(v_a_2526_);
lean_inc_ref(v_a_2525_);
lean_inc(v_a_2524_);
lean_inc_ref(v_a_2523_);
lean_inc(v_a_2522_);
lean_inc(v___x_2537_);
v___x_2538_ = lean_apply_12(v_x_2521_, v_ctx_2519_, v___x_2537_, v_a_2522_, v_a_2523_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_, v_a_2530_, lean_box(0));
if (lean_obj_tag(v___x_2538_) == 0)
{
lean_object* v_a_2539_; lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2547_; 
v_a_2539_ = lean_ctor_get(v___x_2538_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2541_ = v___x_2538_;
v_isShared_2542_ = v_isSharedCheck_2547_;
goto v_resetjp_2540_;
}
else
{
lean_inc(v_a_2539_);
lean_dec(v___x_2538_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2547_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
lean_object* v___x_2543_; lean_object* v___x_2545_; 
v___x_2543_ = lean_st_ref_get(v___x_2537_);
lean_dec(v___x_2537_);
lean_dec(v___x_2543_);
if (v_isShared_2542_ == 0)
{
v___x_2545_ = v___x_2541_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_a_2539_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
else
{
lean_dec(v___x_2537_);
return v___x_2538_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg___boxed(lean_object* v_ctx_2548_, lean_object* v_target_2549_, lean_object* v_x_2550_, lean_object* v_a_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_, lean_object* v_a_2560_){
_start:
{
lean_object* v_res_2561_; 
v_res_2561_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___redArg(v_ctx_2548_, v_target_2549_, v_x_2550_, v_a_2551_, v_a_2552_, v_a_2553_, v_a_2554_, v_a_2555_, v_a_2556_, v_a_2557_, v_a_2558_, v_a_2559_);
lean_dec(v_a_2559_);
lean_dec_ref(v_a_2558_);
lean_dec(v_a_2557_);
lean_dec_ref(v_a_2556_);
lean_dec(v_a_2555_);
lean_dec_ref(v_a_2554_);
lean_dec(v_a_2553_);
lean_dec_ref(v_a_2552_);
lean_dec(v_a_2551_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27(lean_object* v_00_u03b1_2562_, lean_object* v_ctx_2563_, lean_object* v_target_2564_, lean_object* v_x_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_, lean_object* v_a_2568_, lean_object* v_a_2569_, lean_object* v_a_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_){
_start:
{
lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; uint8_t v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2576_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__2);
v___x_2577_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__2);
v___x_2578_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
v___x_2579_ = 0;
v___x_2580_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2580_, 0, v___x_2576_);
lean_ctor_set(v___x_2580_, 1, v___x_2577_);
lean_ctor_set(v___x_2580_, 2, v_target_2564_);
lean_ctor_set(v___x_2580_, 3, v___x_2578_);
lean_ctor_set_uint8(v___x_2580_, sizeof(void*)*4, v___x_2579_);
v___x_2581_ = lean_st_mk_ref(v___x_2580_);
lean_inc(v_a_2574_);
lean_inc_ref(v_a_2573_);
lean_inc(v_a_2572_);
lean_inc_ref(v_a_2571_);
lean_inc(v_a_2570_);
lean_inc_ref(v_a_2569_);
lean_inc(v_a_2568_);
lean_inc_ref(v_a_2567_);
lean_inc(v_a_2566_);
lean_inc(v___x_2581_);
v___x_2582_ = lean_apply_12(v_x_2565_, v_ctx_2563_, v___x_2581_, v_a_2566_, v_a_2567_, v_a_2568_, v_a_2569_, v_a_2570_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_, lean_box(0));
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2591_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2591_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2585_ = v___x_2582_;
v_isShared_2586_ = v_isSharedCheck_2591_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_a_2583_);
lean_dec(v___x_2582_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2591_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v___x_2587_; lean_object* v___x_2589_; 
v___x_2587_ = lean_st_ref_get(v___x_2581_);
lean_dec(v___x_2581_);
lean_dec(v___x_2587_);
if (v_isShared_2586_ == 0)
{
v___x_2589_ = v___x_2585_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v_a_2583_);
v___x_2589_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
return v___x_2589_;
}
}
}
else
{
lean_dec(v___x_2581_);
return v___x_2582_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27___boxed(lean_object* v_00_u03b1_2592_, lean_object* v_ctx_2593_, lean_object* v_target_2594_, lean_object* v_x_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_){
_start:
{
lean_object* v_res_2606_; 
v_res_2606_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run_x27(v_00_u03b1_2592_, v_ctx_2593_, v_target_2594_, v_x_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_);
lean_dec(v_a_2604_);
lean_dec_ref(v_a_2603_);
lean_dec(v_a_2602_);
lean_dec_ref(v_a_2601_);
lean_dec(v_a_2600_);
lean_dec_ref(v_a_2599_);
lean_dec(v_a_2598_);
lean_dec_ref(v_a_2597_);
lean_dec(v_a_2596_);
return v_res_2606_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2(void){
_start:
{
lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2609_ = l_Lean_Core_instMonadTraceCoreM;
v___x_2610_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2611_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2610_, v___x_2609_);
return v___x_2611_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3(void){
_start:
{
lean_object* v___x_2612_; lean_object* v___f_2613_; lean_object* v___x_2614_; 
v___x_2612_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__2);
v___f_2613_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2614_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2613_, v___x_2612_);
return v___x_2614_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4(void){
_start:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; 
v___x_2615_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__3);
v___x_2616_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2617_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2616_, v___x_2615_);
return v___x_2617_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5(void){
_start:
{
lean_object* v___x_2618_; lean_object* v___f_2619_; lean_object* v___x_2620_; 
v___x_2618_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__4);
v___f_2619_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2620_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2619_, v___x_2618_);
return v___x_2620_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6(void){
_start:
{
lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2621_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__5);
v___x_2622_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2623_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2622_, v___x_2621_);
return v___x_2623_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7(void){
_start:
{
lean_object* v___x_2624_; lean_object* v___f_2625_; lean_object* v___x_2626_; 
v___x_2624_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__6);
v___f_2625_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2626_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2625_, v___x_2624_);
return v___x_2626_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8(void){
_start:
{
lean_object* v___x_2627_; lean_object* v___f_2628_; lean_object* v___x_2629_; 
v___x_2627_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__7);
v___f_2628_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2629_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2628_, v___x_2627_);
return v___x_2629_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9(void){
_start:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2630_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__8);
v___x_2631_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2632_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_2631_, v___x_2630_);
return v___x_2632_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10(void){
_start:
{
lean_object* v___x_2633_; lean_object* v___f_2634_; lean_object* v___x_2635_; 
v___x_2633_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__9);
v___f_2634_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___x_2635_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_2634_, v___x_2633_);
return v___x_2635_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13(void){
_start:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2638_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_2639_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2640_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12));
v___x_2641_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2640_, v___x_2639_, v___x_2638_);
return v___x_2641_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14(void){
_start:
{
lean_object* v___x_2642_; lean_object* v___f_2643_; lean_object* v___f_2644_; lean_object* v___x_2645_; 
v___x_2642_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__13);
v___f_2643_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2644_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2645_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2644_, v___f_2643_, v___x_2642_);
return v___x_2645_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15(void){
_start:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; 
v___x_2646_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__14);
v___x_2647_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2648_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12));
v___x_2649_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2648_, v___x_2647_, v___x_2646_);
return v___x_2649_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16(void){
_start:
{
lean_object* v___x_2650_; lean_object* v___f_2651_; lean_object* v___f_2652_; lean_object* v___x_2653_; 
v___x_2650_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__15);
v___f_2651_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2652_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2653_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2652_, v___f_2651_, v___x_2650_);
return v___x_2653_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17(void){
_start:
{
lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2654_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__16);
v___x_2655_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2656_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12));
v___x_2657_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2656_, v___x_2655_, v___x_2654_);
return v___x_2657_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18(void){
_start:
{
lean_object* v___x_2658_; lean_object* v___f_2659_; lean_object* v___f_2660_; lean_object* v___x_2661_; 
v___x_2658_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__17);
v___f_2659_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2660_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2661_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2660_, v___f_2659_, v___x_2658_);
return v___x_2661_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19(void){
_start:
{
lean_object* v___x_2662_; lean_object* v___f_2663_; lean_object* v___f_2664_; lean_object* v___x_2665_; 
v___x_2662_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__18);
v___f_2663_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2664_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2665_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2664_, v___f_2663_, v___x_2662_);
return v___x_2665_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20(void){
_start:
{
lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; 
v___x_2666_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__19);
v___x_2667_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2668_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__12));
v___x_2669_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_2668_, v___x_2667_, v___x_2666_);
return v___x_2669_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21(void){
_start:
{
lean_object* v___x_2670_; lean_object* v___f_2671_; lean_object* v___f_2672_; lean_object* v___x_2673_; 
v___x_2670_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__20);
v___f_2671_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2672_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__11));
v___x_2673_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_2672_, v___f_2671_, v___x_2670_);
return v___x_2673_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28(void){
_start:
{
lean_object* v_cls_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; 
v_cls_2684_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_2685_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27));
v___x_2686_ = l_Lean_Name_append(v___x_2685_, v_cls_2684_);
return v___x_2686_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29(void){
_start:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___f_2689_; 
v___x_2687_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___x_2688_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_2689_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2689_, 0, v___x_2688_);
lean_closure_set(v___f_2689_, 1, v___x_2687_);
return v___f_2689_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30(void){
_start:
{
lean_object* v___f_2690_; lean_object* v___f_2691_; lean_object* v___f_2692_; 
v___f_2690_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2691_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__29);
v___f_2692_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2692_, 0, v___f_2691_);
lean_closure_set(v___f_2692_, 1, v___f_2690_);
return v___f_2692_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31(void){
_start:
{
lean_object* v___x_2693_; lean_object* v___f_2694_; lean_object* v___f_2695_; 
v___x_2693_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___f_2694_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__30);
v___f_2695_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2695_, 0, v___f_2694_);
lean_closure_set(v___f_2695_, 1, v___x_2693_);
return v___f_2695_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32(void){
_start:
{
lean_object* v___f_2696_; lean_object* v___f_2697_; lean_object* v___f_2698_; 
v___f_2696_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2697_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__31);
v___f_2698_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2698_, 0, v___f_2697_);
lean_closure_set(v___f_2698_, 1, v___f_2696_);
return v___f_2698_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33(void){
_start:
{
lean_object* v___f_2699_; lean_object* v___f_2700_; lean_object* v___f_2701_; 
v___f_2699_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2700_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__32);
v___f_2701_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2701_, 0, v___f_2700_);
lean_closure_set(v___f_2701_, 1, v___f_2699_);
return v___f_2701_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34(void){
_start:
{
lean_object* v___x_2702_; lean_object* v___f_2703_; lean_object* v___f_2704_; 
v___x_2702_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__1));
v___f_2703_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__33);
v___f_2704_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2704_, 0, v___f_2703_);
lean_closure_set(v___f_2704_, 1, v___x_2702_);
return v___f_2704_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35(void){
_start:
{
lean_object* v___f_2705_; lean_object* v___f_2706_; lean_object* v___f_2707_; 
v___f_2705_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__0));
v___f_2706_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__34);
v___f_2707_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2707_, 0, v___f_2706_);
lean_closure_set(v___f_2707_, 1, v___f_2705_);
return v___f_2707_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37(void){
_start:
{
lean_object* v___x_2709_; lean_object* v___x_2710_; 
v___x_2709_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__36));
v___x_2710_ = l_Lean_stringToMessageData(v___x_2709_);
return v___x_2710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp(lean_object* v_hyp_2711_, lean_object* v_a_2712_, lean_object* v_a_2713_, lean_object* v_a_2714_, lean_object* v_a_2715_, lean_object* v_a_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_, lean_object* v_a_2722_){
_start:
{
lean_object* v___y_2725_; lean_object* v___x_2743_; lean_object* v_toApplicative_2744_; lean_object* v_toFunctor_2745_; lean_object* v_toSeq_2746_; lean_object* v_toSeqLeft_2747_; lean_object* v_toSeqRight_2748_; lean_object* v___f_2749_; lean_object* v___f_2750_; lean_object* v___f_2751_; lean_object* v___f_2752_; lean_object* v___x_2753_; lean_object* v___f_2754_; lean_object* v___f_2755_; lean_object* v___f_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v_toApplicative_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2811_; 
v___x_2743_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3);
v_toApplicative_2744_ = lean_ctor_get(v___x_2743_, 0);
v_toFunctor_2745_ = lean_ctor_get(v_toApplicative_2744_, 0);
v_toSeq_2746_ = lean_ctor_get(v_toApplicative_2744_, 2);
v_toSeqLeft_2747_ = lean_ctor_get(v_toApplicative_2744_, 3);
v_toSeqRight_2748_ = lean_ctor_get(v_toApplicative_2744_, 4);
v___f_2749_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4));
v___f_2750_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5));
lean_inc_ref_n(v_toFunctor_2745_, 2);
v___f_2751_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2751_, 0, v_toFunctor_2745_);
v___f_2752_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2752_, 0, v_toFunctor_2745_);
v___x_2753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___f_2751_);
lean_ctor_set(v___x_2753_, 1, v___f_2752_);
lean_inc(v_toSeqRight_2748_);
v___f_2754_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2754_, 0, v_toSeqRight_2748_);
lean_inc(v_toSeqLeft_2747_);
v___f_2755_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2755_, 0, v_toSeqLeft_2747_);
lean_inc(v_toSeq_2746_);
v___f_2756_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2756_, 0, v_toSeq_2746_);
v___x_2757_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2753_);
lean_ctor_set(v___x_2757_, 1, v___f_2749_);
lean_ctor_set(v___x_2757_, 2, v___f_2756_);
lean_ctor_set(v___x_2757_, 3, v___f_2755_);
lean_ctor_set(v___x_2757_, 4, v___f_2754_);
v___x_2758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2757_);
lean_ctor_set(v___x_2758_, 1, v___f_2750_);
v___x_2759_ = l_StateRefT_x27_instMonad___redArg(v___x_2758_);
v_toApplicative_2760_ = lean_ctor_get(v___x_2759_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2759_);
if (v_isSharedCheck_2811_ == 0)
{
lean_object* v_unused_2812_; 
v_unused_2812_ = lean_ctor_get(v___x_2759_, 1);
lean_dec(v_unused_2812_);
v___x_2762_ = v___x_2759_;
v_isShared_2763_ = v_isSharedCheck_2811_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_toApplicative_2760_);
lean_dec(v___x_2759_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2811_;
goto v_resetjp_2761_;
}
v___jp_2724_:
{
lean_object* v___x_2726_; lean_object* v_caches_2727_; lean_object* v_typeAnalysis_2728_; lean_object* v_target_2729_; lean_object* v_hypotheses_2730_; uint8_t v_didChange_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2742_; 
v___x_2726_ = lean_st_ref_take(v___y_2725_);
v_caches_2727_ = lean_ctor_get(v___x_2726_, 0);
v_typeAnalysis_2728_ = lean_ctor_get(v___x_2726_, 1);
v_target_2729_ = lean_ctor_get(v___x_2726_, 2);
v_hypotheses_2730_ = lean_ctor_get(v___x_2726_, 3);
v_didChange_2731_ = lean_ctor_get_uint8(v___x_2726_, sizeof(void*)*4);
v_isSharedCheck_2742_ = !lean_is_exclusive(v___x_2726_);
if (v_isSharedCheck_2742_ == 0)
{
v___x_2733_ = v___x_2726_;
v_isShared_2734_ = v_isSharedCheck_2742_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_hypotheses_2730_);
lean_inc(v_target_2729_);
lean_inc(v_typeAnalysis_2728_);
lean_inc(v_caches_2727_);
lean_dec(v___x_2726_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2742_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2738_; 
v___x_2735_ = lean_box(0);
v___x_2736_ = lean_array_push(v_hypotheses_2730_, v_hyp_2711_);
if (v_isShared_2734_ == 0)
{
lean_ctor_set(v___x_2733_, 3, v___x_2736_);
v___x_2738_ = v___x_2733_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v_caches_2727_);
lean_ctor_set(v_reuseFailAlloc_2741_, 1, v_typeAnalysis_2728_);
lean_ctor_set(v_reuseFailAlloc_2741_, 2, v_target_2729_);
lean_ctor_set(v_reuseFailAlloc_2741_, 3, v___x_2736_);
lean_ctor_set_uint8(v_reuseFailAlloc_2741_, sizeof(void*)*4, v_didChange_2731_);
v___x_2738_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
lean_object* v___x_2739_; lean_object* v___x_2740_; 
v___x_2739_ = lean_st_ref_put(v___y_2725_, v___x_2738_);
v___x_2740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2735_);
return v___x_2740_;
}
}
}
v_resetjp_2761_:
{
lean_object* v_toFunctor_2764_; lean_object* v_toSeq_2765_; lean_object* v_toSeqLeft_2766_; lean_object* v_toSeqRight_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2809_; 
v_toFunctor_2764_ = lean_ctor_get(v_toApplicative_2760_, 0);
v_toSeq_2765_ = lean_ctor_get(v_toApplicative_2760_, 2);
v_toSeqLeft_2766_ = lean_ctor_get(v_toApplicative_2760_, 3);
v_toSeqRight_2767_ = lean_ctor_get(v_toApplicative_2760_, 4);
v_isSharedCheck_2809_ = !lean_is_exclusive(v_toApplicative_2760_);
if (v_isSharedCheck_2809_ == 0)
{
lean_object* v_unused_2810_; 
v_unused_2810_ = lean_ctor_get(v_toApplicative_2760_, 1);
lean_dec(v_unused_2810_);
v___x_2769_ = v_toApplicative_2760_;
v_isShared_2770_ = v_isSharedCheck_2809_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_toSeqRight_2767_);
lean_inc(v_toSeqLeft_2766_);
lean_inc(v_toSeq_2765_);
lean_inc(v_toFunctor_2764_);
lean_dec(v_toApplicative_2760_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2809_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v___f_2771_; lean_object* v___f_2772_; lean_object* v___f_2773_; lean_object* v___f_2774_; lean_object* v___x_2775_; lean_object* v___f_2776_; lean_object* v___f_2777_; lean_object* v___f_2778_; lean_object* v___x_2780_; 
v___f_2771_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6));
v___f_2772_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7));
lean_inc_ref(v_toFunctor_2764_);
v___f_2773_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2773_, 0, v_toFunctor_2764_);
v___f_2774_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2774_, 0, v_toFunctor_2764_);
v___x_2775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2775_, 0, v___f_2773_);
lean_ctor_set(v___x_2775_, 1, v___f_2774_);
v___f_2776_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2776_, 0, v_toSeqRight_2767_);
v___f_2777_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2777_, 0, v_toSeqLeft_2766_);
v___f_2778_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2778_, 0, v_toSeq_2765_);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 4, v___f_2776_);
lean_ctor_set(v___x_2769_, 3, v___f_2777_);
lean_ctor_set(v___x_2769_, 2, v___f_2778_);
lean_ctor_set(v___x_2769_, 1, v___f_2771_);
lean_ctor_set(v___x_2769_, 0, v___x_2775_);
v___x_2780_ = v___x_2769_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v___x_2775_);
lean_ctor_set(v_reuseFailAlloc_2808_, 1, v___f_2771_);
lean_ctor_set(v_reuseFailAlloc_2808_, 2, v___f_2778_);
lean_ctor_set(v_reuseFailAlloc_2808_, 3, v___f_2777_);
lean_ctor_set(v_reuseFailAlloc_2808_, 4, v___f_2776_);
v___x_2780_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
lean_object* v___x_2782_; 
if (v_isShared_2763_ == 0)
{
lean_ctor_set(v___x_2762_, 1, v___f_2772_);
lean_ctor_set(v___x_2762_, 0, v___x_2780_);
v___x_2782_ = v___x_2762_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v___x_2780_);
lean_ctor_set(v_reuseFailAlloc_2807_, 1, v___f_2772_);
v___x_2782_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v_toCold_2792_; lean_object* v_options_2793_; uint8_t v_hasTrace_2794_; 
v___x_2783_ = l_StateRefT_x27_instMonad___redArg(v___x_2782_);
v___x_2784_ = l_ReaderT_instMonad___redArg(v___x_2783_);
v___x_2785_ = l_StateRefT_x27_instMonad___redArg(v___x_2784_);
v___x_2786_ = l_ReaderT_instMonad___redArg(v___x_2785_);
v___x_2787_ = l_ReaderT_instMonad___redArg(v___x_2786_);
v___x_2788_ = l_StateRefT_x27_instMonad___redArg(v___x_2787_);
v___x_2789_ = l_ReaderT_instMonad___redArg(v___x_2788_);
v___x_2790_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_2791_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toCold_2792_ = lean_ctor_get(v_a_2721_, 0);
v_options_2793_ = lean_ctor_get(v_toCold_2792_, 2);
v_hasTrace_2794_ = lean_ctor_get_uint8(v_options_2793_, sizeof(void*)*1);
if (v_hasTrace_2794_ == 0)
{
lean_dec_ref(v___x_2789_);
v___y_2725_ = v_a_2713_;
goto v___jp_2724_;
}
else
{
lean_object* v_toMonadRef_2795_; lean_object* v_inheritedTraceOptions_2796_; lean_object* v_cls_2797_; lean_object* v___x_2798_; uint8_t v___x_2799_; 
v_toMonadRef_2795_ = lean_ctor_get(v___x_2791_, 0);
v_inheritedTraceOptions_2796_ = lean_ctor_get(v_toCold_2792_, 11);
v_cls_2797_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_2798_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_2799_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2796_, v_options_2793_, v___x_2798_);
if (v___x_2799_ == 0)
{
lean_dec_ref(v___x_2789_);
v___y_2725_ = v_a_2713_;
goto v___jp_2724_;
}
else
{
lean_object* v_type_2800_; lean_object* v___f_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_5353__overap_2805_; lean_object* v___x_2806_; 
v_type_2800_ = lean_ctor_get(v_hyp_2711_, 1);
v___f_2801_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
v___x_2802_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37);
lean_inc_ref(v_type_2800_);
v___x_2803_ = l_Lean_MessageData_ofExpr(v_type_2800_);
v___x_2804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2804_, 0, v___x_2802_);
lean_ctor_set(v___x_2804_, 1, v___x_2803_);
lean_inc_ref(v_toMonadRef_2795_);
v___x_5353__overap_2805_ = l_Lean_addTrace___redArg(v___x_2789_, v___x_2790_, v_toMonadRef_2795_, v___f_2801_, v_cls_2797_, v___x_2804_);
lean_inc(v_a_2722_);
lean_inc_ref(v_a_2721_);
lean_inc(v_a_2720_);
lean_inc_ref(v_a_2719_);
lean_inc(v_a_2718_);
lean_inc_ref(v_a_2717_);
lean_inc(v_a_2716_);
lean_inc_ref(v_a_2715_);
lean_inc(v_a_2714_);
lean_inc(v_a_2713_);
lean_inc_ref(v_a_2712_);
v___x_2806_ = lean_apply_12(v___x_5353__overap_2805_, v_a_2712_, v_a_2713_, v_a_2714_, v_a_2715_, v_a_2716_, v_a_2717_, v_a_2718_, v_a_2719_, v_a_2720_, v_a_2721_, v_a_2722_, lean_box(0));
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_dec_ref_known(v___x_2806_, 1);
v___y_2725_ = v_a_2713_;
goto v___jp_2724_;
}
else
{
lean_dec_ref(v_hyp_2711_);
return v___x_2806_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___boxed(lean_object* v_hyp_2813_, lean_object* v_a_2814_, lean_object* v_a_2815_, lean_object* v_a_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_){
_start:
{
lean_object* v_res_2826_; 
v_res_2826_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp(v_hyp_2813_, v_a_2814_, v_a_2815_, v_a_2816_, v_a_2817_, v_a_2818_, v_a_2819_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_, v_a_2824_);
lean_dec(v_a_2824_);
lean_dec_ref(v_a_2823_);
lean_dec(v_a_2822_);
lean_dec_ref(v_a_2821_);
lean_dec(v_a_2820_);
lean_dec_ref(v_a_2819_);
lean_dec(v_a_2818_);
lean_dec_ref(v_a_2817_);
lean_dec(v_a_2816_);
lean_dec(v_a_2815_);
lean_dec_ref(v_a_2814_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0(lean_object* v___x_2827_, lean_object* v___x_2828_, lean_object* v_toMonadRef_2829_, lean_object* v___f_2830_, lean_object* v_x_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_){
_start:
{
lean_object* v_toCold_2848_; lean_object* v_options_2849_; uint8_t v_hasTrace_2850_; 
v_toCold_2848_ = lean_ctor_get(v___y_2842_, 0);
v_options_2849_ = lean_ctor_get(v_toCold_2848_, 2);
v_hasTrace_2850_ = lean_ctor_get_uint8(v_options_2849_, sizeof(void*)*1);
if (v_hasTrace_2850_ == 0)
{
lean_dec_ref(v___y_2832_);
lean_dec(v___f_2830_);
lean_dec_ref(v_toMonadRef_2829_);
lean_dec_ref(v___x_2828_);
lean_dec_ref(v___x_2827_);
goto v___jp_2845_;
}
else
{
lean_object* v_inheritedTraceOptions_2851_; lean_object* v_cls_2852_; lean_object* v___x_2853_; uint8_t v___x_2854_; 
v_inheritedTraceOptions_2851_ = lean_ctor_get(v_toCold_2848_, 11);
v_cls_2852_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_2853_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_2854_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2851_, v_options_2849_, v___x_2853_);
if (v___x_2854_ == 0)
{
lean_dec_ref(v___y_2832_);
lean_dec(v___f_2830_);
lean_dec_ref(v_toMonadRef_2829_);
lean_dec_ref(v___x_2828_);
lean_dec_ref(v___x_2827_);
goto v___jp_2845_;
}
else
{
lean_object* v_type_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_6344__overap_2859_; lean_object* v___x_2860_; 
v_type_2855_ = lean_ctor_get(v___y_2832_, 1);
lean_inc_ref(v_type_2855_);
lean_dec_ref(v___y_2832_);
v___x_2856_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__37);
v___x_2857_ = l_Lean_MessageData_ofExpr(v_type_2855_);
v___x_2858_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2856_);
lean_ctor_set(v___x_2858_, 1, v___x_2857_);
v___x_6344__overap_2859_ = l_Lean_addTrace___redArg(v___x_2827_, v___x_2828_, v_toMonadRef_2829_, v___f_2830_, v_cls_2852_, v___x_2858_);
lean_inc(v___y_2843_);
lean_inc_ref(v___y_2842_);
lean_inc(v___y_2841_);
lean_inc_ref(v___y_2840_);
lean_inc(v___y_2839_);
lean_inc_ref(v___y_2838_);
lean_inc(v___y_2837_);
lean_inc_ref(v___y_2836_);
lean_inc(v___y_2835_);
lean_inc(v___y_2834_);
lean_inc_ref(v___y_2833_);
v___x_2860_ = lean_apply_12(v___x_6344__overap_2859_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, lean_box(0));
return v___x_2860_;
}
}
v___jp_2845_:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; 
v___x_2846_ = lean_box(0);
v___x_2847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2847_, 0, v___x_2846_);
return v___x_2847_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0___boxed(lean_object** _args){
lean_object* v___x_2861_ = _args[0];
lean_object* v___x_2862_ = _args[1];
lean_object* v_toMonadRef_2863_ = _args[2];
lean_object* v___f_2864_ = _args[3];
lean_object* v_x_2865_ = _args[4];
lean_object* v___y_2866_ = _args[5];
lean_object* v___y_2867_ = _args[6];
lean_object* v___y_2868_ = _args[7];
lean_object* v___y_2869_ = _args[8];
lean_object* v___y_2870_ = _args[9];
lean_object* v___y_2871_ = _args[10];
lean_object* v___y_2872_ = _args[11];
lean_object* v___y_2873_ = _args[12];
lean_object* v___y_2874_ = _args[13];
lean_object* v___y_2875_ = _args[14];
lean_object* v___y_2876_ = _args[15];
lean_object* v___y_2877_ = _args[16];
lean_object* v___y_2878_ = _args[17];
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0(v___x_2861_, v___x_2862_, v_toMonadRef_2863_, v___f_2864_, v_x_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_);
lean_dec(v___y_2877_);
lean_dec_ref(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec_ref(v___y_2870_);
lean_dec(v___y_2869_);
lean_dec(v___y_2868_);
lean_dec_ref(v___y_2867_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps(lean_object* v_hyps_2880_, lean_object* v_a_2881_, lean_object* v_a_2882_, lean_object* v_a_2883_, lean_object* v_a_2884_, lean_object* v_a_2885_, lean_object* v_a_2886_, lean_object* v_a_2887_, lean_object* v_a_2888_, lean_object* v_a_2889_, lean_object* v_a_2890_, lean_object* v_a_2891_){
_start:
{
lean_object* v___y_2912_; lean_object* v___x_2913_; lean_object* v_toApplicative_2914_; lean_object* v_toFunctor_2915_; lean_object* v_toSeq_2916_; lean_object* v_toSeqLeft_2917_; lean_object* v_toSeqRight_2918_; lean_object* v___f_2919_; lean_object* v___f_2920_; lean_object* v___f_2921_; lean_object* v___f_2922_; lean_object* v___x_2923_; lean_object* v___f_2924_; lean_object* v___f_2925_; lean_object* v___f_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v_toApplicative_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2982_; 
v___x_2913_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3);
v_toApplicative_2914_ = lean_ctor_get(v___x_2913_, 0);
v_toFunctor_2915_ = lean_ctor_get(v_toApplicative_2914_, 0);
v_toSeq_2916_ = lean_ctor_get(v_toApplicative_2914_, 2);
v_toSeqLeft_2917_ = lean_ctor_get(v_toApplicative_2914_, 3);
v_toSeqRight_2918_ = lean_ctor_get(v_toApplicative_2914_, 4);
v___f_2919_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4));
v___f_2920_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5));
lean_inc_ref_n(v_toFunctor_2915_, 2);
v___f_2921_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2921_, 0, v_toFunctor_2915_);
v___f_2922_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2922_, 0, v_toFunctor_2915_);
v___x_2923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2923_, 0, v___f_2921_);
lean_ctor_set(v___x_2923_, 1, v___f_2922_);
lean_inc(v_toSeqRight_2918_);
v___f_2924_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2924_, 0, v_toSeqRight_2918_);
lean_inc(v_toSeqLeft_2917_);
v___f_2925_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2925_, 0, v_toSeqLeft_2917_);
lean_inc(v_toSeq_2916_);
v___f_2926_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2926_, 0, v_toSeq_2916_);
v___x_2927_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2923_);
lean_ctor_set(v___x_2927_, 1, v___f_2919_);
lean_ctor_set(v___x_2927_, 2, v___f_2926_);
lean_ctor_set(v___x_2927_, 3, v___f_2925_);
lean_ctor_set(v___x_2927_, 4, v___f_2924_);
v___x_2928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2927_);
lean_ctor_set(v___x_2928_, 1, v___f_2920_);
v___x_2929_ = l_StateRefT_x27_instMonad___redArg(v___x_2928_);
v_toApplicative_2930_ = lean_ctor_get(v___x_2929_, 0);
v_isSharedCheck_2982_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_2982_ == 0)
{
lean_object* v_unused_2983_; 
v_unused_2983_ = lean_ctor_get(v___x_2929_, 1);
lean_dec(v_unused_2983_);
v___x_2932_ = v___x_2929_;
v_isShared_2933_ = v_isSharedCheck_2982_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_toApplicative_2930_);
lean_dec(v___x_2929_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2982_;
goto v_resetjp_2931_;
}
v___jp_2893_:
{
lean_object* v___x_2894_; lean_object* v_caches_2895_; lean_object* v_typeAnalysis_2896_; lean_object* v_target_2897_; lean_object* v_hypotheses_2898_; uint8_t v_didChange_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2910_; 
v___x_2894_ = lean_st_ref_take(v_a_2882_);
v_caches_2895_ = lean_ctor_get(v___x_2894_, 0);
v_typeAnalysis_2896_ = lean_ctor_get(v___x_2894_, 1);
v_target_2897_ = lean_ctor_get(v___x_2894_, 2);
v_hypotheses_2898_ = lean_ctor_get(v___x_2894_, 3);
v_didChange_2899_ = lean_ctor_get_uint8(v___x_2894_, sizeof(void*)*4);
v_isSharedCheck_2910_ = !lean_is_exclusive(v___x_2894_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2901_ = v___x_2894_;
v_isShared_2902_ = v_isSharedCheck_2910_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_hypotheses_2898_);
lean_inc(v_target_2897_);
lean_inc(v_typeAnalysis_2896_);
lean_inc(v_caches_2895_);
lean_dec(v___x_2894_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2910_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2906_; 
v___x_2903_ = lean_box(0);
v___x_2904_ = l_Array_append___redArg(v_hypotheses_2898_, v_hyps_2880_);
lean_dec_ref(v_hyps_2880_);
if (v_isShared_2902_ == 0)
{
lean_ctor_set(v___x_2901_, 3, v___x_2904_);
v___x_2906_ = v___x_2901_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v_caches_2895_);
lean_ctor_set(v_reuseFailAlloc_2909_, 1, v_typeAnalysis_2896_);
lean_ctor_set(v_reuseFailAlloc_2909_, 2, v_target_2897_);
lean_ctor_set(v_reuseFailAlloc_2909_, 3, v___x_2904_);
lean_ctor_set_uint8(v_reuseFailAlloc_2909_, sizeof(void*)*4, v_didChange_2899_);
v___x_2906_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___x_2907_ = lean_st_ref_put(v_a_2882_, v___x_2906_);
v___x_2908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2903_);
return v___x_2908_;
}
}
}
v___jp_2911_:
{
if (lean_obj_tag(v___y_2912_) == 0)
{
lean_dec_ref_known(v___y_2912_, 1);
goto v___jp_2893_;
}
else
{
lean_dec_ref(v_hyps_2880_);
return v___y_2912_;
}
}
v_resetjp_2931_:
{
lean_object* v_toFunctor_2934_; lean_object* v_toSeq_2935_; lean_object* v_toSeqLeft_2936_; lean_object* v_toSeqRight_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2980_; 
v_toFunctor_2934_ = lean_ctor_get(v_toApplicative_2930_, 0);
v_toSeq_2935_ = lean_ctor_get(v_toApplicative_2930_, 2);
v_toSeqLeft_2936_ = lean_ctor_get(v_toApplicative_2930_, 3);
v_toSeqRight_2937_ = lean_ctor_get(v_toApplicative_2930_, 4);
v_isSharedCheck_2980_ = !lean_is_exclusive(v_toApplicative_2930_);
if (v_isSharedCheck_2980_ == 0)
{
lean_object* v_unused_2981_; 
v_unused_2981_ = lean_ctor_get(v_toApplicative_2930_, 1);
lean_dec(v_unused_2981_);
v___x_2939_ = v_toApplicative_2930_;
v_isShared_2940_ = v_isSharedCheck_2980_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_toSeqRight_2937_);
lean_inc(v_toSeqLeft_2936_);
lean_inc(v_toSeq_2935_);
lean_inc(v_toFunctor_2934_);
lean_dec(v_toApplicative_2930_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2980_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___f_2941_; lean_object* v___f_2942_; lean_object* v___f_2943_; lean_object* v___f_2944_; lean_object* v___x_2945_; lean_object* v___f_2946_; lean_object* v___f_2947_; lean_object* v___f_2948_; lean_object* v___x_2950_; 
v___f_2941_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6));
v___f_2942_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7));
lean_inc_ref(v_toFunctor_2934_);
v___f_2943_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2943_, 0, v_toFunctor_2934_);
v___f_2944_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2944_, 0, v_toFunctor_2934_);
v___x_2945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2945_, 0, v___f_2943_);
lean_ctor_set(v___x_2945_, 1, v___f_2944_);
v___f_2946_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2946_, 0, v_toSeqRight_2937_);
v___f_2947_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2947_, 0, v_toSeqLeft_2936_);
v___f_2948_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2948_, 0, v_toSeq_2935_);
if (v_isShared_2940_ == 0)
{
lean_ctor_set(v___x_2939_, 4, v___f_2946_);
lean_ctor_set(v___x_2939_, 3, v___f_2947_);
lean_ctor_set(v___x_2939_, 2, v___f_2948_);
lean_ctor_set(v___x_2939_, 1, v___f_2941_);
lean_ctor_set(v___x_2939_, 0, v___x_2945_);
v___x_2950_ = v___x_2939_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v___x_2945_);
lean_ctor_set(v_reuseFailAlloc_2979_, 1, v___f_2941_);
lean_ctor_set(v_reuseFailAlloc_2979_, 2, v___f_2948_);
lean_ctor_set(v_reuseFailAlloc_2979_, 3, v___f_2947_);
lean_ctor_set(v_reuseFailAlloc_2979_, 4, v___f_2946_);
v___x_2950_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
lean_object* v___x_2952_; 
if (v_isShared_2933_ == 0)
{
lean_ctor_set(v___x_2932_, 1, v___f_2942_);
lean_ctor_set(v___x_2932_, 0, v___x_2950_);
v___x_2952_ = v___x_2932_;
goto v_reusejp_2951_;
}
else
{
lean_object* v_reuseFailAlloc_2978_; 
v_reuseFailAlloc_2978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2978_, 0, v___x_2950_);
lean_ctor_set(v_reuseFailAlloc_2978_, 1, v___f_2942_);
v___x_2952_ = v_reuseFailAlloc_2978_;
goto v_reusejp_2951_;
}
v_reusejp_2951_:
{
lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v_toMonadRef_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; uint8_t v___x_2965_; 
v___x_2953_ = l_StateRefT_x27_instMonad___redArg(v___x_2952_);
v___x_2954_ = l_ReaderT_instMonad___redArg(v___x_2953_);
v___x_2955_ = l_StateRefT_x27_instMonad___redArg(v___x_2954_);
v___x_2956_ = l_ReaderT_instMonad___redArg(v___x_2955_);
v___x_2957_ = l_ReaderT_instMonad___redArg(v___x_2956_);
v___x_2958_ = l_StateRefT_x27_instMonad___redArg(v___x_2957_);
v___x_2959_ = l_ReaderT_instMonad___redArg(v___x_2958_);
v___x_2960_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_2961_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toMonadRef_2962_ = lean_ctor_get(v___x_2961_, 0);
v___x_2963_ = lean_unsigned_to_nat(0u);
v___x_2964_ = lean_array_get_size(v_hyps_2880_);
v___x_2965_ = lean_nat_dec_lt(v___x_2963_, v___x_2964_);
if (v___x_2965_ == 0)
{
lean_dec_ref(v___x_2959_);
goto v___jp_2893_;
}
else
{
lean_object* v___f_2966_; lean_object* v___f_2967_; lean_object* v___x_2968_; uint8_t v___x_2969_; 
v___f_2966_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
lean_inc_ref(v_toMonadRef_2962_);
lean_inc_ref(v___x_2959_);
v___f_2967_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___lam__0___boxed), 18, 4);
lean_closure_set(v___f_2967_, 0, v___x_2959_);
lean_closure_set(v___f_2967_, 1, v___x_2960_);
lean_closure_set(v___f_2967_, 2, v_toMonadRef_2962_);
lean_closure_set(v___f_2967_, 3, v___f_2966_);
v___x_2968_ = lean_box(0);
v___x_2969_ = lean_nat_dec_le(v___x_2964_, v___x_2964_);
if (v___x_2969_ == 0)
{
if (v___x_2965_ == 0)
{
lean_dec_ref(v___f_2967_);
lean_dec_ref(v___x_2959_);
goto v___jp_2893_;
}
else
{
size_t v___x_2970_; size_t v___x_2971_; lean_object* v___x_5997__overap_2972_; lean_object* v___x_2973_; 
v___x_2970_ = ((size_t)0ULL);
v___x_2971_ = lean_usize_of_nat(v___x_2964_);
lean_inc_ref(v_hyps_2880_);
v___x_5997__overap_2972_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2959_, v___f_2967_, v_hyps_2880_, v___x_2970_, v___x_2971_, v___x_2968_);
lean_inc(v_a_2891_);
lean_inc_ref(v_a_2890_);
lean_inc(v_a_2889_);
lean_inc_ref(v_a_2888_);
lean_inc(v_a_2887_);
lean_inc_ref(v_a_2886_);
lean_inc(v_a_2885_);
lean_inc_ref(v_a_2884_);
lean_inc(v_a_2883_);
lean_inc(v_a_2882_);
lean_inc_ref(v_a_2881_);
v___x_2973_ = lean_apply_12(v___x_5997__overap_2972_, v_a_2881_, v_a_2882_, v_a_2883_, v_a_2884_, v_a_2885_, v_a_2886_, v_a_2887_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, lean_box(0));
v___y_2912_ = v___x_2973_;
goto v___jp_2911_;
}
}
else
{
size_t v___x_2974_; size_t v___x_2975_; lean_object* v___x_6000__overap_2976_; lean_object* v___x_2977_; 
v___x_2974_ = ((size_t)0ULL);
v___x_2975_ = lean_usize_of_nat(v___x_2964_);
lean_inc_ref(v_hyps_2880_);
v___x_6000__overap_2976_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2959_, v___f_2967_, v_hyps_2880_, v___x_2974_, v___x_2975_, v___x_2968_);
lean_inc(v_a_2891_);
lean_inc_ref(v_a_2890_);
lean_inc(v_a_2889_);
lean_inc_ref(v_a_2888_);
lean_inc(v_a_2887_);
lean_inc_ref(v_a_2886_);
lean_inc(v_a_2885_);
lean_inc_ref(v_a_2884_);
lean_inc(v_a_2883_);
lean_inc(v_a_2882_);
lean_inc_ref(v_a_2881_);
v___x_2977_ = lean_apply_12(v___x_6000__overap_2976_, v_a_2881_, v_a_2882_, v_a_2883_, v_a_2884_, v_a_2885_, v_a_2886_, v_a_2887_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, lean_box(0));
v___y_2912_ = v___x_2977_;
goto v___jp_2911_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps___boxed(lean_object* v_hyps_2984_, lean_object* v_a_2985_, lean_object* v_a_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_, lean_object* v_a_2991_, lean_object* v_a_2992_, lean_object* v_a_2993_, lean_object* v_a_2994_, lean_object* v_a_2995_, lean_object* v_a_2996_){
_start:
{
lean_object* v_res_2997_; 
v_res_2997_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_addHyps(v_hyps_2984_, v_a_2985_, v_a_2986_, v_a_2987_, v_a_2988_, v_a_2989_, v_a_2990_, v_a_2991_, v_a_2992_, v_a_2993_, v_a_2994_, v_a_2995_);
lean_dec(v_a_2995_);
lean_dec_ref(v_a_2994_);
lean_dec(v_a_2993_);
lean_dec_ref(v_a_2992_);
lean_dec(v_a_2991_);
lean_dec_ref(v_a_2990_);
lean_dec(v_a_2989_);
lean_dec_ref(v_a_2988_);
lean_dec(v_a_2987_);
lean_dec(v_a_2986_);
lean_dec_ref(v_a_2985_);
return v_res_2997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg(lean_object* v_a_2998_){
_start:
{
lean_object* v___x_3000_; lean_object* v_hypotheses_3001_; lean_object* v___x_3002_; 
v___x_3000_ = lean_st_ref_get(v_a_2998_);
v_hypotheses_3001_ = lean_ctor_get(v___x_3000_, 3);
lean_inc_ref(v_hypotheses_3001_);
lean_dec(v___x_3000_);
v___x_3002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3002_, 0, v_hypotheses_3001_);
return v___x_3002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg___boxed(lean_object* v_a_3003_, lean_object* v_a_3004_){
_start:
{
lean_object* v_res_3005_; 
v_res_3005_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___redArg(v_a_3003_);
lean_dec(v_a_3003_);
return v_res_3005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps(lean_object* v_a_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_){
_start:
{
lean_object* v___x_3018_; lean_object* v_hypotheses_3019_; lean_object* v___x_3020_; 
v___x_3018_ = lean_st_ref_get(v_a_3007_);
v_hypotheses_3019_ = lean_ctor_get(v___x_3018_, 3);
lean_inc_ref(v_hypotheses_3019_);
lean_dec(v___x_3018_);
v___x_3020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3020_, 0, v_hypotheses_3019_);
return v___x_3020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed(lean_object* v_a_3021_, lean_object* v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_, lean_object* v_a_3029_, lean_object* v_a_3030_, lean_object* v_a_3031_, lean_object* v_a_3032_){
_start:
{
lean_object* v_res_3033_; 
v_res_3033_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps(v_a_3021_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_);
lean_dec(v_a_3031_);
lean_dec_ref(v_a_3030_);
lean_dec(v_a_3029_);
lean_dec_ref(v_a_3028_);
lean_dec(v_a_3027_);
lean_dec_ref(v_a_3026_);
lean_dec(v_a_3025_);
lean_dec_ref(v_a_3024_);
lean_dec(v_a_3023_);
lean_dec(v_a_3022_);
lean_dec_ref(v_a_3021_);
return v_res_3033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0(lean_object* v_hyps_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_){
_start:
{
lean_object* v___x_3047_; lean_object* v_caches_3048_; lean_object* v_typeAnalysis_3049_; lean_object* v_target_3050_; uint8_t v_didChange_3051_; lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3061_; 
v___x_3047_ = lean_st_ref_take(v___y_3036_);
v_caches_3048_ = lean_ctor_get(v___x_3047_, 0);
v_typeAnalysis_3049_ = lean_ctor_get(v___x_3047_, 1);
v_target_3050_ = lean_ctor_get(v___x_3047_, 2);
v_didChange_3051_ = lean_ctor_get_uint8(v___x_3047_, sizeof(void*)*4);
v_isSharedCheck_3061_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3061_ == 0)
{
lean_object* v_unused_3062_; 
v_unused_3062_ = lean_ctor_get(v___x_3047_, 3);
lean_dec(v_unused_3062_);
v___x_3053_ = v___x_3047_;
v_isShared_3054_ = v_isSharedCheck_3061_;
goto v_resetjp_3052_;
}
else
{
lean_inc(v_target_3050_);
lean_inc(v_typeAnalysis_3049_);
lean_inc(v_caches_3048_);
lean_dec(v___x_3047_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3061_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v___x_3055_; lean_object* v___x_3057_; 
v___x_3055_ = lean_box(0);
if (v_isShared_3054_ == 0)
{
lean_ctor_set(v___x_3053_, 3, v_hyps_3034_);
v___x_3057_ = v___x_3053_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v_caches_3048_);
lean_ctor_set(v_reuseFailAlloc_3060_, 1, v_typeAnalysis_3049_);
lean_ctor_set(v_reuseFailAlloc_3060_, 2, v_target_3050_);
lean_ctor_set(v_reuseFailAlloc_3060_, 3, v_hyps_3034_);
lean_ctor_set_uint8(v_reuseFailAlloc_3060_, sizeof(void*)*4, v_didChange_3051_);
v___x_3057_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3058_ = lean_st_ref_put(v___y_3036_, v___x_3057_);
v___x_3059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3059_, 0, v___x_3055_);
return v___x_3059_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0___boxed(lean_object* v_hyps_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_){
_start:
{
lean_object* v_res_3076_; 
v_res_3076_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0(v_hyps_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_);
lean_dec(v___y_3074_);
lean_dec_ref(v___y_3073_);
lean_dec(v___y_3072_);
lean_dec_ref(v___y_3071_);
lean_dec(v___y_3070_);
lean_dec_ref(v___y_3069_);
lean_dec(v___y_3068_);
lean_dec_ref(v___y_3067_);
lean_dec(v___y_3066_);
lean_dec(v___y_3065_);
lean_dec_ref(v___y_3064_);
return v_res_3076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1(lean_object* v_inst_3077_, lean_object* v_hyps_3078_){
_start:
{
lean_object* v___f_3079_; lean_object* v___x_3080_; 
v___f_3079_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__0___boxed), 13, 1);
lean_closure_set(v___f_3079_, 0, v_hyps_3078_);
v___x_3080_ = lean_apply_2(v_inst_3077_, lean_box(0), v___f_3079_);
return v___x_3080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2(lean_object* v___y_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_){
_start:
{
lean_object* v___x_3093_; lean_object* v_caches_3094_; lean_object* v_typeAnalysis_3095_; lean_object* v_target_3096_; uint8_t v_didChange_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3108_; 
v___x_3093_ = lean_st_ref_take(v___y_3082_);
v_caches_3094_ = lean_ctor_get(v___x_3093_, 0);
v_typeAnalysis_3095_ = lean_ctor_get(v___x_3093_, 1);
v_target_3096_ = lean_ctor_get(v___x_3093_, 2);
v_didChange_3097_ = lean_ctor_get_uint8(v___x_3093_, sizeof(void*)*4);
v_isSharedCheck_3108_ = !lean_is_exclusive(v___x_3093_);
if (v_isSharedCheck_3108_ == 0)
{
lean_object* v_unused_3109_; 
v_unused_3109_ = lean_ctor_get(v___x_3093_, 3);
lean_dec(v_unused_3109_);
v___x_3099_ = v___x_3093_;
v_isShared_3100_ = v_isSharedCheck_3108_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_target_3096_);
lean_inc(v_typeAnalysis_3095_);
lean_inc(v_caches_3094_);
lean_dec(v___x_3093_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3108_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3104_; 
v___x_3101_ = lean_box(0);
v___x_3102_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_run___redArg___closed__3));
if (v_isShared_3100_ == 0)
{
lean_ctor_set(v___x_3099_, 3, v___x_3102_);
v___x_3104_ = v___x_3099_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v_caches_3094_);
lean_ctor_set(v_reuseFailAlloc_3107_, 1, v_typeAnalysis_3095_);
lean_ctor_set(v_reuseFailAlloc_3107_, 2, v_target_3096_);
lean_ctor_set(v_reuseFailAlloc_3107_, 3, v___x_3102_);
lean_ctor_set_uint8(v_reuseFailAlloc_3107_, sizeof(void*)*4, v_didChange_3097_);
v___x_3104_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; 
v___x_3105_ = lean_st_ref_put(v___y_3082_, v___x_3104_);
v___x_3106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3106_, 0, v___x_3101_);
return v___x_3106_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2___boxed(lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_){
_start:
{
lean_object* v_res_3122_; 
v_res_3122_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__2(v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_, v___y_3120_);
lean_dec(v___y_3120_);
lean_dec_ref(v___y_3119_);
lean_dec(v___y_3118_);
lean_dec_ref(v___y_3117_);
lean_dec(v___y_3116_);
lean_dec_ref(v___y_3115_);
lean_dec(v___y_3114_);
lean_dec_ref(v___y_3113_);
lean_dec(v___y_3112_);
lean_dec(v___y_3111_);
lean_dec_ref(v___y_3110_);
return v_res_3122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3(lean_object* v_toPure_3123_, lean_object* v_cls_3124_, lean_object* v_____do__lift_3125_, lean_object* v_____do__lift_3126_){
_start:
{
uint8_t v_hasTrace_3127_; 
v_hasTrace_3127_ = lean_ctor_get_uint8(v_____do__lift_3126_, sizeof(void*)*1);
if (v_hasTrace_3127_ == 0)
{
lean_object* v___x_3128_; lean_object* v___x_3129_; 
lean_dec(v_cls_3124_);
v___x_3128_ = lean_box(v_hasTrace_3127_);
v___x_3129_ = lean_apply_2(v_toPure_3123_, lean_box(0), v___x_3128_);
return v___x_3129_;
}
else
{
lean_object* v___x_3130_; lean_object* v___x_3131_; uint8_t v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; 
v___x_3130_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27));
v___x_3131_ = l_Lean_Name_append(v___x_3130_, v_cls_3124_);
v___x_3132_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_3125_, v_____do__lift_3126_, v___x_3131_);
lean_dec(v___x_3131_);
v___x_3133_ = lean_box(v___x_3132_);
v___x_3134_ = lean_apply_2(v_toPure_3123_, lean_box(0), v___x_3133_);
return v___x_3134_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3___boxed(lean_object* v_toPure_3135_, lean_object* v_cls_3136_, lean_object* v_____do__lift_3137_, lean_object* v_____do__lift_3138_){
_start:
{
lean_object* v_res_3139_; 
v_res_3139_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3(v_toPure_3135_, v_cls_3136_, v_____do__lift_3137_, v_____do__lift_3138_);
lean_dec_ref(v_____do__lift_3138_);
lean_dec_ref(v_____do__lift_3137_);
return v_res_3139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4(lean_object* v_toPure_3140_, lean_object* v_cls_3141_, lean_object* v_toBind_3142_, lean_object* v_inst_3143_, lean_object* v_____do__lift_3144_){
_start:
{
lean_object* v___f_3145_; lean_object* v___x_3146_; 
v___f_3145_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_3145_, 0, v_toPure_3140_);
lean_closure_set(v___f_3145_, 1, v_cls_3141_);
lean_closure_set(v___f_3145_, 2, v_____do__lift_3144_);
v___x_3146_ = lean_apply_4(v_toBind_3142_, lean_box(0), lean_box(0), v_inst_3143_, v___f_3145_);
return v___x_3146_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3148_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__0));
v___x_3149_ = l_Lean_stringToMessageData(v___x_3148_);
return v___x_3149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5(lean_object* v_toPure_3150_, lean_object* v_a_3151_, lean_object* v___y_3152_, lean_object* v_inst_3153_, lean_object* v_inst_3154_, lean_object* v_inst_3155_, lean_object* v_inst_3156_, lean_object* v_cls_3157_, uint8_t v_____do__lift_3158_){
_start:
{
if (v_____do__lift_3158_ == 0)
{
lean_object* v___x_3159_; lean_object* v___x_3160_; 
lean_dec(v_cls_3157_);
lean_dec(v_inst_3156_);
lean_dec_ref(v_inst_3155_);
lean_dec_ref(v_inst_3154_);
lean_dec_ref(v_inst_3153_);
lean_dec_ref(v___y_3152_);
lean_dec_ref(v_a_3151_);
v___x_3159_ = lean_box(0);
v___x_3160_ = lean_apply_2(v_toPure_3150_, lean_box(0), v___x_3159_);
return v___x_3160_;
}
else
{
lean_object* v_type_3161_; lean_object* v_type_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
lean_dec(v_toPure_3150_);
v_type_3161_ = lean_ctor_get(v_a_3151_, 1);
lean_inc_ref(v_type_3161_);
lean_dec_ref(v_a_3151_);
v_type_3162_ = lean_ctor_get(v___y_3152_, 1);
lean_inc_ref(v_type_3162_);
lean_dec_ref(v___y_3152_);
v___x_3163_ = l_Lean_MessageData_ofExpr(v_type_3161_);
v___x_3164_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_3165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3165_, 0, v___x_3163_);
lean_ctor_set(v___x_3165_, 1, v___x_3164_);
v___x_3166_ = l_Lean_MessageData_ofExpr(v_type_3162_);
v___x_3167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3165_);
lean_ctor_set(v___x_3167_, 1, v___x_3166_);
v___x_3168_ = l_Lean_addTrace___redArg(v_inst_3153_, v_inst_3154_, v_inst_3155_, v_inst_3156_, v_cls_3157_, v___x_3167_);
return v___x_3168_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___boxed(lean_object* v_toPure_3169_, lean_object* v_a_3170_, lean_object* v___y_3171_, lean_object* v_inst_3172_, lean_object* v_inst_3173_, lean_object* v_inst_3174_, lean_object* v_inst_3175_, lean_object* v_cls_3176_, lean_object* v_____do__lift_3177_){
_start:
{
uint8_t v_____do__lift_3040__boxed_3178_; lean_object* v_res_3179_; 
v_____do__lift_3040__boxed_3178_ = lean_unbox(v_____do__lift_3177_);
v_res_3179_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5(v_toPure_3169_, v_a_3170_, v___y_3171_, v_inst_3172_, v_inst_3173_, v_inst_3174_, v_inst_3175_, v_cls_3176_, v_____do__lift_3040__boxed_3178_);
return v_res_3179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__6(lean_object* v_inst_3180_, lean_object* v_toPure_3181_, lean_object* v_toBind_3182_, lean_object* v_inst_3183_, lean_object* v_a_3184_, lean_object* v_inst_3185_, lean_object* v_inst_3186_, lean_object* v_inst_3187_, lean_object* v_x_3188_, lean_object* v___y_3189_){
_start:
{
lean_object* v_getInheritedTraceOptions_3190_; lean_object* v_cls_3191_; lean_object* v___f_3192_; lean_object* v___f_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; 
v_getInheritedTraceOptions_3190_ = lean_ctor_get(v_inst_3180_, 2);
lean_inc(v_getInheritedTraceOptions_3190_);
v_cls_3191_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
lean_inc_n(v_toBind_3182_, 2);
lean_inc(v_toPure_3181_);
v___f_3192_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4), 5, 4);
lean_closure_set(v___f_3192_, 0, v_toPure_3181_);
lean_closure_set(v___f_3192_, 1, v_cls_3191_);
lean_closure_set(v___f_3192_, 2, v_toBind_3182_);
lean_closure_set(v___f_3192_, 3, v_inst_3183_);
v___f_3193_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___boxed), 9, 8);
lean_closure_set(v___f_3193_, 0, v_toPure_3181_);
lean_closure_set(v___f_3193_, 1, v_a_3184_);
lean_closure_set(v___f_3193_, 2, v___y_3189_);
lean_closure_set(v___f_3193_, 3, v_inst_3185_);
lean_closure_set(v___f_3193_, 4, v_inst_3180_);
lean_closure_set(v___f_3193_, 5, v_inst_3186_);
lean_closure_set(v___f_3193_, 6, v_inst_3187_);
lean_closure_set(v___f_3193_, 7, v_cls_3191_);
v___x_3194_ = lean_apply_4(v_toBind_3182_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3190_, v___f_3192_);
v___x_3195_ = lean_apply_4(v_toBind_3182_, lean_box(0), lean_box(0), v___x_3194_, v___f_3193_);
return v___x_3195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11(lean_object* v_toPure_3196_, lean_object* v_res_3197_, lean_object* v_____r_3198_){
_start:
{
lean_object* v___x_3199_; 
v___x_3199_ = lean_apply_2(v_toPure_3196_, lean_box(0), v_res_3197_);
return v___x_3199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7(lean_object* v_inst_3200_, lean_object* v_toBind_3201_, lean_object* v___f_3202_, lean_object* v_____r_3203_){
_start:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3204_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_setDidChange___boxed), 12, 0);
v___x_3205_ = lean_apply_2(v_inst_3200_, lean_box(0), v___x_3204_);
v___x_3206_ = lean_apply_4(v_toBind_3201_, lean_box(0), lean_box(0), v___x_3205_, v___f_3202_);
return v___x_3206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10(lean_object* v___f_3207_, lean_object* v_____r_3208_){
_start:
{
lean_object* v___x_3209_; 
v___x_3209_ = lean_apply_1(v___f_3207_, v_____r_3208_);
return v___x_3209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12(lean_object* v___f_3210_, lean_object* v_type_3211_, lean_object* v_type_3212_, lean_object* v_inst_3213_, lean_object* v_inst_3214_, lean_object* v_inst_3215_, lean_object* v_inst_3216_, lean_object* v_cls_3217_, lean_object* v_toBind_3218_, lean_object* v___f_3219_, uint8_t v_____do__lift_3220_){
_start:
{
if (v_____do__lift_3220_ == 0)
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
lean_dec(v___f_3219_);
lean_dec(v_toBind_3218_);
lean_dec(v_cls_3217_);
lean_dec(v_inst_3216_);
lean_dec_ref(v_inst_3215_);
lean_dec_ref(v_inst_3214_);
lean_dec_ref(v_inst_3213_);
lean_dec_ref(v_type_3212_);
lean_dec_ref(v_type_3211_);
v___x_3221_ = lean_box(0);
v___x_3222_ = lean_apply_1(v___f_3210_, v___x_3221_);
return v___x_3222_;
}
else
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; 
lean_dec(v___f_3210_);
v___x_3223_ = l_Lean_MessageData_ofExpr(v_type_3211_);
v___x_3224_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_3225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3225_, 0, v___x_3223_);
lean_ctor_set(v___x_3225_, 1, v___x_3224_);
v___x_3226_ = l_Lean_MessageData_ofExpr(v_type_3212_);
v___x_3227_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3227_, 0, v___x_3225_);
lean_ctor_set(v___x_3227_, 1, v___x_3226_);
v___x_3228_ = l_Lean_addTrace___redArg(v_inst_3213_, v_inst_3214_, v_inst_3215_, v_inst_3216_, v_cls_3217_, v___x_3227_);
v___x_3229_ = lean_apply_4(v_toBind_3218_, lean_box(0), lean_box(0), v___x_3228_, v___f_3219_);
return v___x_3229_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12___boxed(lean_object* v___f_3230_, lean_object* v_type_3231_, lean_object* v_type_3232_, lean_object* v_inst_3233_, lean_object* v_inst_3234_, lean_object* v_inst_3235_, lean_object* v_inst_3236_, lean_object* v_cls_3237_, lean_object* v_toBind_3238_, lean_object* v___f_3239_, lean_object* v_____do__lift_3240_){
_start:
{
uint8_t v_____do__lift_3140__boxed_3241_; lean_object* v_res_3242_; 
v_____do__lift_3140__boxed_3241_ = lean_unbox(v_____do__lift_3240_);
v_res_3242_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12(v___f_3230_, v_type_3231_, v_type_3232_, v_inst_3233_, v_inst_3234_, v_inst_3235_, v_inst_3236_, v_cls_3237_, v_toBind_3238_, v___f_3239_, v_____do__lift_3140__boxed_3241_);
return v_res_3242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__13(lean_object* v_toPure_3243_, lean_object* v_inst_3244_, lean_object* v_toBind_3245_, lean_object* v_inst_3246_, lean_object* v___f_3247_, lean_object* v_a_3248_, lean_object* v_inst_3249_, lean_object* v_inst_3250_, lean_object* v_inst_3251_, lean_object* v_inst_3252_, lean_object* v___f_3253_, lean_object* v_res_3254_){
_start:
{
lean_object* v___x_3255_; lean_object* v_zero_3256_; uint8_t v_isZero_3257_; 
v___x_3255_ = lean_array_get_size(v_res_3254_);
v_zero_3256_ = lean_unsigned_to_nat(0u);
v_isZero_3257_ = lean_nat_dec_eq(v___x_3255_, v_zero_3256_);
if (v_isZero_3257_ == 1)
{
lean_object* v___f_3258_; lean_object* v___f_3259_; lean_object* v___x_3260_; uint8_t v___x_3261_; 
lean_dec(v___f_3253_);
lean_dec(v_inst_3252_);
lean_dec_ref(v_inst_3251_);
lean_dec(v_inst_3250_);
lean_dec_ref(v_inst_3249_);
lean_dec_ref(v_a_3248_);
lean_inc_ref(v_res_3254_);
lean_inc(v_toPure_3243_);
v___f_3258_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11), 3, 2);
lean_closure_set(v___f_3258_, 0, v_toPure_3243_);
lean_closure_set(v___f_3258_, 1, v_res_3254_);
lean_inc(v_toBind_3245_);
v___f_3259_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3259_, 0, v_inst_3244_);
lean_closure_set(v___f_3259_, 1, v_toBind_3245_);
lean_closure_set(v___f_3259_, 2, v___f_3258_);
v___x_3260_ = lean_box(0);
v___x_3261_ = lean_nat_dec_lt(v_zero_3256_, v___x_3255_);
if (v___x_3261_ == 0)
{
lean_object* v___x_3262_; lean_object* v___x_3263_; 
lean_dec_ref(v_res_3254_);
lean_dec(v___f_3247_);
lean_dec_ref(v_inst_3246_);
v___x_3262_ = lean_apply_2(v_toPure_3243_, lean_box(0), v___x_3260_);
v___x_3263_ = lean_apply_4(v_toBind_3245_, lean_box(0), lean_box(0), v___x_3262_, v___f_3259_);
return v___x_3263_;
}
else
{
uint8_t v___x_3264_; 
v___x_3264_ = lean_nat_dec_le(v___x_3255_, v___x_3255_);
if (v___x_3264_ == 0)
{
if (v___x_3261_ == 0)
{
lean_object* v___x_3265_; lean_object* v___x_3266_; 
lean_dec_ref(v_res_3254_);
lean_dec(v___f_3247_);
lean_dec_ref(v_inst_3246_);
v___x_3265_ = lean_apply_2(v_toPure_3243_, lean_box(0), v___x_3260_);
v___x_3266_ = lean_apply_4(v_toBind_3245_, lean_box(0), lean_box(0), v___x_3265_, v___f_3259_);
return v___x_3266_;
}
else
{
size_t v___x_3267_; size_t v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; 
lean_dec(v_toPure_3243_);
v___x_3267_ = ((size_t)0ULL);
v___x_3268_ = lean_usize_of_nat(v___x_3255_);
v___x_3269_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3246_, v___f_3247_, v_res_3254_, v___x_3267_, v___x_3268_, v___x_3260_);
v___x_3270_ = lean_apply_4(v_toBind_3245_, lean_box(0), lean_box(0), v___x_3269_, v___f_3259_);
return v___x_3270_;
}
}
else
{
size_t v___x_3271_; size_t v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
lean_dec(v_toPure_3243_);
v___x_3271_ = ((size_t)0ULL);
v___x_3272_ = lean_usize_of_nat(v___x_3255_);
v___x_3273_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3246_, v___f_3247_, v_res_3254_, v___x_3271_, v___x_3272_, v___x_3260_);
v___x_3274_ = lean_apply_4(v_toBind_3245_, lean_box(0), lean_box(0), v___x_3273_, v___f_3259_);
return v___x_3274_;
}
}
}
else
{
lean_object* v_one_3275_; lean_object* v_n_3276_; uint8_t v_isZero_3277_; 
lean_dec(v___f_3247_);
v_one_3275_ = lean_unsigned_to_nat(1u);
v_n_3276_ = lean_nat_sub(v___x_3255_, v_one_3275_);
v_isZero_3277_ = lean_nat_dec_eq(v_n_3276_, v_zero_3256_);
lean_dec(v_n_3276_);
if (v_isZero_3277_ == 1)
{
lean_object* v_newHyp_3278_; lean_object* v_type_3279_; lean_object* v_type_3280_; uint8_t v___x_3281_; 
lean_dec(v___f_3253_);
v_newHyp_3278_ = lean_array_fget_borrowed(v_res_3254_, v_zero_3256_);
v_type_3279_ = lean_ctor_get(v_newHyp_3278_, 1);
v_type_3280_ = lean_ctor_get(v_a_3248_, 1);
lean_inc_ref(v_type_3280_);
lean_dec_ref(v_a_3248_);
v___x_3281_ = lean_expr_eqv(v_type_3279_, v_type_3280_);
if (v___x_3281_ == 0)
{
lean_object* v_getInheritedTraceOptions_3282_; lean_object* v___f_3283_; lean_object* v___f_3284_; lean_object* v___f_3285_; lean_object* v_cls_3286_; lean_object* v___f_3287_; lean_object* v___f_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; 
lean_inc_ref(v_type_3279_);
v_getInheritedTraceOptions_3282_ = lean_ctor_get(v_inst_3249_, 2);
lean_inc(v_getInheritedTraceOptions_3282_);
lean_inc(v_toPure_3243_);
v___f_3283_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11), 3, 2);
lean_closure_set(v___f_3283_, 0, v_toPure_3243_);
lean_closure_set(v___f_3283_, 1, v_res_3254_);
lean_inc_n(v_toBind_3245_, 4);
v___f_3284_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3284_, 0, v_inst_3244_);
lean_closure_set(v___f_3284_, 1, v_toBind_3245_);
lean_closure_set(v___f_3284_, 2, v___f_3283_);
lean_inc_ref(v___f_3284_);
v___f_3285_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3285_, 0, v___f_3284_);
v_cls_3286_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___f_3287_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__4), 5, 4);
lean_closure_set(v___f_3287_, 0, v_toPure_3243_);
lean_closure_set(v___f_3287_, 1, v_cls_3286_);
lean_closure_set(v___f_3287_, 2, v_toBind_3245_);
lean_closure_set(v___f_3287_, 3, v_inst_3250_);
v___f_3288_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__12___boxed), 11, 10);
lean_closure_set(v___f_3288_, 0, v___f_3284_);
lean_closure_set(v___f_3288_, 1, v_type_3280_);
lean_closure_set(v___f_3288_, 2, v_type_3279_);
lean_closure_set(v___f_3288_, 3, v_inst_3246_);
lean_closure_set(v___f_3288_, 4, v_inst_3249_);
lean_closure_set(v___f_3288_, 5, v_inst_3251_);
lean_closure_set(v___f_3288_, 6, v_inst_3252_);
lean_closure_set(v___f_3288_, 7, v_cls_3286_);
lean_closure_set(v___f_3288_, 8, v_toBind_3245_);
lean_closure_set(v___f_3288_, 9, v___f_3285_);
v___x_3289_ = lean_apply_4(v_toBind_3245_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3282_, v___f_3287_);
v___x_3290_ = lean_apply_4(v_toBind_3245_, lean_box(0), lean_box(0), v___x_3289_, v___f_3288_);
return v___x_3290_;
}
else
{
lean_object* v___x_3291_; 
lean_dec_ref(v_type_3280_);
lean_dec(v_inst_3252_);
lean_dec_ref(v_inst_3251_);
lean_dec(v_inst_3250_);
lean_dec_ref(v_inst_3249_);
lean_dec_ref(v_inst_3246_);
lean_dec(v_toBind_3245_);
lean_dec(v_inst_3244_);
v___x_3291_ = lean_apply_2(v_toPure_3243_, lean_box(0), v_res_3254_);
return v___x_3291_;
}
}
else
{
lean_object* v___f_3292_; lean_object* v___f_3293_; lean_object* v___x_3294_; uint8_t v___x_3295_; 
lean_dec(v_inst_3252_);
lean_dec_ref(v_inst_3251_);
lean_dec(v_inst_3250_);
lean_dec_ref(v_inst_3249_);
lean_dec_ref(v_a_3248_);
lean_inc_ref(v_res_3254_);
lean_inc(v_toPure_3243_);
v___f_3292_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__11), 3, 2);
lean_closure_set(v___f_3292_, 0, v_toPure_3243_);
lean_closure_set(v___f_3292_, 1, v_res_3254_);
lean_inc(v_toBind_3245_);
v___f_3293_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3293_, 0, v_inst_3244_);
lean_closure_set(v___f_3293_, 1, v_toBind_3245_);
lean_closure_set(v___f_3293_, 2, v___f_3292_);
v___x_3294_ = lean_box(0);
v___x_3295_ = lean_nat_dec_lt(v_zero_3256_, v___x_3255_);
if (v___x_3295_ == 0)
{
lean_object* v___x_3296_; lean_object* v___x_3297_; 
lean_dec_ref(v_res_3254_);
lean_dec(v___f_3253_);
lean_dec_ref(v_inst_3246_);
v___x_3296_ = lean_apply_2(v_toPure_3243_, lean_box(0), v___x_3294_);
v___x_3297_ = lean_apply_4(v_toBind_3245_, lean_box(0), lean_box(0), v___x_3296_, v___f_3293_);
return v___x_3297_;
}
else
{
uint8_t v___x_3298_; 
v___x_3298_ = lean_nat_dec_le(v___x_3255_, v___x_3255_);
if (v___x_3298_ == 0)
{
if (v___x_3295_ == 0)
{
lean_object* v___x_3299_; lean_object* v___x_3300_; 
lean_dec_ref(v_res_3254_);
lean_dec(v___f_3253_);
lean_dec_ref(v_inst_3246_);
v___x_3299_ = lean_apply_2(v_toPure_3243_, lean_box(0), v___x_3294_);
v___x_3300_ = lean_apply_4(v_toBind_3245_, lean_box(0), lean_box(0), v___x_3299_, v___f_3293_);
return v___x_3300_;
}
else
{
size_t v___x_3301_; size_t v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; 
lean_dec(v_toPure_3243_);
v___x_3301_ = ((size_t)0ULL);
v___x_3302_ = lean_usize_of_nat(v___x_3255_);
v___x_3303_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3246_, v___f_3253_, v_res_3254_, v___x_3301_, v___x_3302_, v___x_3294_);
v___x_3304_ = lean_apply_4(v_toBind_3245_, lean_box(0), lean_box(0), v___x_3303_, v___f_3293_);
return v___x_3304_;
}
}
else
{
size_t v___x_3305_; size_t v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; 
lean_dec(v_toPure_3243_);
v___x_3305_ = ((size_t)0ULL);
v___x_3306_ = lean_usize_of_nat(v___x_3255_);
v___x_3307_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3246_, v___f_3253_, v_res_3254_, v___x_3305_, v___x_3306_, v___x_3294_);
v___x_3308_ = lean_apply_4(v_toBind_3245_, lean_box(0), lean_box(0), v___x_3307_, v___f_3293_);
return v___x_3308_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8(lean_object* v_bs_3309_, lean_object* v_toPure_3310_, lean_object* v_____do__lift_3311_){
_start:
{
lean_object* v___x_3312_; lean_object* v___x_3313_; 
v___x_3312_ = l_Array_append___redArg(v_bs_3309_, v_____do__lift_3311_);
v___x_3313_ = lean_apply_2(v_toPure_3310_, lean_box(0), v___x_3312_);
return v___x_3313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8___boxed(lean_object* v_bs_3314_, lean_object* v_toPure_3315_, lean_object* v_____do__lift_3316_){
_start:
{
lean_object* v_res_3317_; 
v_res_3317_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8(v_bs_3314_, v_toPure_3315_, v_____do__lift_3316_);
lean_dec_ref(v_____do__lift_3316_);
return v_res_3317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9(lean_object* v_inst_3318_, lean_object* v_toPure_3319_, lean_object* v_toBind_3320_, lean_object* v_inst_3321_, lean_object* v_inst_3322_, lean_object* v_inst_3323_, lean_object* v_inst_3324_, lean_object* v_inst_3325_, lean_object* v_f_3326_, lean_object* v_bs_3327_, lean_object* v_a_3328_){
_start:
{
lean_object* v___f_3329_; lean_object* v___f_3330_; lean_object* v___f_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; 
lean_inc(v_inst_3324_);
lean_inc_ref(v_inst_3323_);
lean_inc_ref(v_inst_3322_);
lean_inc_ref_n(v_a_3328_, 2);
lean_inc(v_inst_3321_);
lean_inc_n(v_toBind_3320_, 3);
lean_inc_n(v_toPure_3319_, 2);
lean_inc_ref(v_inst_3318_);
v___f_3329_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__6), 10, 8);
lean_closure_set(v___f_3329_, 0, v_inst_3318_);
lean_closure_set(v___f_3329_, 1, v_toPure_3319_);
lean_closure_set(v___f_3329_, 2, v_toBind_3320_);
lean_closure_set(v___f_3329_, 3, v_inst_3321_);
lean_closure_set(v___f_3329_, 4, v_a_3328_);
lean_closure_set(v___f_3329_, 5, v_inst_3322_);
lean_closure_set(v___f_3329_, 6, v_inst_3323_);
lean_closure_set(v___f_3329_, 7, v_inst_3324_);
lean_inc_ref(v___f_3329_);
v___f_3330_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__13), 12, 11);
lean_closure_set(v___f_3330_, 0, v_toPure_3319_);
lean_closure_set(v___f_3330_, 1, v_inst_3325_);
lean_closure_set(v___f_3330_, 2, v_toBind_3320_);
lean_closure_set(v___f_3330_, 3, v_inst_3322_);
lean_closure_set(v___f_3330_, 4, v___f_3329_);
lean_closure_set(v___f_3330_, 5, v_a_3328_);
lean_closure_set(v___f_3330_, 6, v_inst_3318_);
lean_closure_set(v___f_3330_, 7, v_inst_3321_);
lean_closure_set(v___f_3330_, 8, v_inst_3323_);
lean_closure_set(v___f_3330_, 9, v_inst_3324_);
lean_closure_set(v___f_3330_, 10, v___f_3329_);
v___f_3331_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__8___boxed), 3, 2);
lean_closure_set(v___f_3331_, 0, v_bs_3327_);
lean_closure_set(v___f_3331_, 1, v_toPure_3319_);
v___x_3332_ = lean_apply_1(v_f_3326_, v_a_3328_);
v___x_3333_ = lean_apply_4(v_toBind_3320_, lean_box(0), lean_box(0), v___x_3332_, v___f_3330_);
v___x_3334_ = lean_apply_4(v_toBind_3320_, lean_box(0), lean_box(0), v___x_3333_, v___f_3331_);
return v___x_3334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14(lean_object* v_hyps_3337_, lean_object* v_toPure_3338_, lean_object* v_toBind_3339_, lean_object* v___f_3340_, lean_object* v_inst_3341_, lean_object* v___f_3342_, lean_object* v_____r_3343_){
_start:
{
lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; uint8_t v___x_3347_; 
v___x_3344_ = lean_unsigned_to_nat(0u);
v___x_3345_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14___closed__0));
v___x_3346_ = lean_array_get_size(v_hyps_3337_);
v___x_3347_ = lean_nat_dec_lt(v___x_3344_, v___x_3346_);
if (v___x_3347_ == 0)
{
lean_object* v___x_3348_; lean_object* v___x_3349_; 
lean_dec(v___f_3342_);
lean_dec_ref(v_inst_3341_);
lean_dec_ref(v_hyps_3337_);
v___x_3348_ = lean_apply_2(v_toPure_3338_, lean_box(0), v___x_3345_);
v___x_3349_ = lean_apply_4(v_toBind_3339_, lean_box(0), lean_box(0), v___x_3348_, v___f_3340_);
return v___x_3349_;
}
else
{
size_t v___x_3350_; size_t v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
lean_dec(v_toPure_3338_);
v___x_3350_ = ((size_t)0ULL);
v___x_3351_ = lean_usize_of_nat(v___x_3346_);
v___x_3352_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3341_, v___f_3342_, v_hyps_3337_, v___x_3350_, v___x_3351_, v___x_3345_);
v___x_3353_ = lean_apply_4(v_toBind_3339_, lean_box(0), lean_box(0), v___x_3352_, v___f_3340_);
return v___x_3353_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15(lean_object* v_toPure_3354_, lean_object* v_toBind_3355_, lean_object* v___f_3356_, lean_object* v_inst_3357_, lean_object* v___f_3358_, lean_object* v_inst_3359_, lean_object* v___f_3360_, lean_object* v_hyps_3361_){
_start:
{
lean_object* v___f_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; 
lean_inc(v_toBind_3355_);
v___f_3362_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__14), 7, 6);
lean_closure_set(v___f_3362_, 0, v_hyps_3361_);
lean_closure_set(v___f_3362_, 1, v_toPure_3354_);
lean_closure_set(v___f_3362_, 2, v_toBind_3355_);
lean_closure_set(v___f_3362_, 3, v___f_3356_);
lean_closure_set(v___f_3362_, 4, v_inst_3357_);
lean_closure_set(v___f_3362_, 5, v___f_3358_);
v___x_3363_ = lean_apply_2(v_inst_3359_, lean_box(0), v___f_3360_);
v___x_3364_ = lean_apply_4(v_toBind_3355_, lean_box(0), lean_box(0), v___x_3363_, v___f_3362_);
return v___x_3364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg(lean_object* v_inst_3366_, lean_object* v_inst_3367_, lean_object* v_inst_3368_, lean_object* v_inst_3369_, lean_object* v_inst_3370_, lean_object* v_inst_3371_, lean_object* v_f_3372_){
_start:
{
lean_object* v_toApplicative_3373_; lean_object* v_toBind_3374_; lean_object* v_toPure_3375_; lean_object* v___f_3376_; lean_object* v___f_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___f_3380_; lean_object* v___f_3381_; lean_object* v___x_3382_; 
v_toApplicative_3373_ = lean_ctor_get(v_inst_3366_, 0);
v_toBind_3374_ = lean_ctor_get(v_inst_3366_, 1);
lean_inc_n(v_toBind_3374_, 3);
v_toPure_3375_ = lean_ctor_get(v_toApplicative_3373_, 1);
lean_inc_n(v_toPure_3375_, 2);
lean_inc_n(v_inst_3371_, 3);
v___f_3376_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3376_, 0, v_inst_3371_);
v___f_3377_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0));
v___x_3378_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
v___x_3379_ = lean_apply_2(v_inst_3371_, lean_box(0), v___x_3378_);
lean_inc_ref(v_inst_3366_);
v___f_3380_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9), 11, 9);
lean_closure_set(v___f_3380_, 0, v_inst_3367_);
lean_closure_set(v___f_3380_, 1, v_toPure_3375_);
lean_closure_set(v___f_3380_, 2, v_toBind_3374_);
lean_closure_set(v___f_3380_, 3, v_inst_3368_);
lean_closure_set(v___f_3380_, 4, v_inst_3366_);
lean_closure_set(v___f_3380_, 5, v_inst_3370_);
lean_closure_set(v___f_3380_, 6, v_inst_3369_);
lean_closure_set(v___f_3380_, 7, v_inst_3371_);
lean_closure_set(v___f_3380_, 8, v_f_3372_);
v___f_3381_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15), 8, 7);
lean_closure_set(v___f_3381_, 0, v_toPure_3375_);
lean_closure_set(v___f_3381_, 1, v_toBind_3374_);
lean_closure_set(v___f_3381_, 2, v___f_3376_);
lean_closure_set(v___f_3381_, 3, v_inst_3366_);
lean_closure_set(v___f_3381_, 4, v___f_3380_);
lean_closure_set(v___f_3381_, 5, v_inst_3371_);
lean_closure_set(v___f_3381_, 6, v___f_3377_);
v___x_3382_ = lean_apply_4(v_toBind_3374_, lean_box(0), lean_box(0), v___x_3379_, v___f_3381_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps(lean_object* v_m_3383_, lean_object* v_inst_3384_, lean_object* v_inst_3385_, lean_object* v_inst_3386_, lean_object* v_inst_3387_, lean_object* v_inst_3388_, lean_object* v_inst_3389_, lean_object* v_f_3390_){
_start:
{
lean_object* v_toApplicative_3391_; lean_object* v_toBind_3392_; lean_object* v_toPure_3393_; lean_object* v___f_3394_; lean_object* v___f_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___f_3398_; lean_object* v___f_3399_; lean_object* v___x_3400_; 
v_toApplicative_3391_ = lean_ctor_get(v_inst_3384_, 0);
v_toBind_3392_ = lean_ctor_get(v_inst_3384_, 1);
lean_inc_n(v_toBind_3392_, 3);
v_toPure_3393_ = lean_ctor_get(v_toApplicative_3391_, 1);
lean_inc_n(v_toPure_3393_, 2);
lean_inc_n(v_inst_3389_, 3);
v___f_3394_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3394_, 0, v_inst_3389_);
v___f_3395_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___closed__0));
v___x_3396_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
v___x_3397_ = lean_apply_2(v_inst_3389_, lean_box(0), v___x_3396_);
lean_inc_ref(v_inst_3384_);
v___f_3398_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__9), 11, 9);
lean_closure_set(v___f_3398_, 0, v_inst_3385_);
lean_closure_set(v___f_3398_, 1, v_toPure_3393_);
lean_closure_set(v___f_3398_, 2, v_toBind_3392_);
lean_closure_set(v___f_3398_, 3, v_inst_3386_);
lean_closure_set(v___f_3398_, 4, v_inst_3384_);
lean_closure_set(v___f_3398_, 5, v_inst_3388_);
lean_closure_set(v___f_3398_, 6, v_inst_3387_);
lean_closure_set(v___f_3398_, 7, v_inst_3389_);
lean_closure_set(v___f_3398_, 8, v_f_3390_);
v___f_3399_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__15), 8, 7);
lean_closure_set(v___f_3399_, 0, v_toPure_3393_);
lean_closure_set(v___f_3399_, 1, v_toBind_3392_);
lean_closure_set(v___f_3399_, 2, v___f_3394_);
lean_closure_set(v___f_3399_, 3, v_inst_3384_);
lean_closure_set(v___f_3399_, 4, v___f_3398_);
lean_closure_set(v___f_3399_, 5, v_inst_3389_);
lean_closure_set(v___f_3399_, 6, v___f_3395_);
v___x_3400_ = lean_apply_4(v_toBind_3392_, lean_box(0), lean_box(0), v___x_3397_, v___f_3399_);
return v___x_3400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0(lean_object* v_toPure_3401_, lean_object* v_____r_3402_){
_start:
{
uint8_t v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3403_ = 0;
v___x_3404_ = lean_box(v___x_3403_);
v___x_3405_ = lean_apply_2(v_toPure_3401_, lean_box(0), v___x_3404_);
return v___x_3405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1(lean_object* v_snd_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_){
_start:
{
lean_object* v___x_3419_; lean_object* v_caches_3420_; lean_object* v_typeAnalysis_3421_; lean_object* v_target_3422_; uint8_t v_didChange_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3433_; 
v___x_3419_ = lean_st_ref_take(v___y_3408_);
v_caches_3420_ = lean_ctor_get(v___x_3419_, 0);
v_typeAnalysis_3421_ = lean_ctor_get(v___x_3419_, 1);
v_target_3422_ = lean_ctor_get(v___x_3419_, 2);
v_didChange_3423_ = lean_ctor_get_uint8(v___x_3419_, sizeof(void*)*4);
v_isSharedCheck_3433_ = !lean_is_exclusive(v___x_3419_);
if (v_isSharedCheck_3433_ == 0)
{
lean_object* v_unused_3434_; 
v_unused_3434_ = lean_ctor_get(v___x_3419_, 3);
lean_dec(v_unused_3434_);
v___x_3425_ = v___x_3419_;
v_isShared_3426_ = v_isSharedCheck_3433_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_target_3422_);
lean_inc(v_typeAnalysis_3421_);
lean_inc(v_caches_3420_);
lean_dec(v___x_3419_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3433_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v___x_3427_; lean_object* v___x_3429_; 
v___x_3427_ = lean_box(0);
if (v_isShared_3426_ == 0)
{
lean_ctor_set(v___x_3425_, 3, v_snd_3406_);
v___x_3429_ = v___x_3425_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3432_; 
v_reuseFailAlloc_3432_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3432_, 0, v_caches_3420_);
lean_ctor_set(v_reuseFailAlloc_3432_, 1, v_typeAnalysis_3421_);
lean_ctor_set(v_reuseFailAlloc_3432_, 2, v_target_3422_);
lean_ctor_set(v_reuseFailAlloc_3432_, 3, v_snd_3406_);
lean_ctor_set_uint8(v_reuseFailAlloc_3432_, sizeof(void*)*4, v_didChange_3423_);
v___x_3429_ = v_reuseFailAlloc_3432_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; 
v___x_3430_ = lean_st_ref_put(v___y_3408_, v___x_3429_);
v___x_3431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3431_, 0, v___x_3427_);
return v___x_3431_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1___boxed(lean_object* v_snd_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_){
_start:
{
lean_object* v_res_3448_; 
v_res_3448_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1(v_snd_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_);
lean_dec(v___y_3446_);
lean_dec_ref(v___y_3445_);
lean_dec(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3442_);
lean_dec_ref(v___y_3441_);
lean_dec(v___y_3440_);
lean_dec_ref(v___y_3439_);
lean_dec(v___y_3438_);
lean_dec(v___y_3437_);
lean_dec_ref(v___y_3436_);
return v_res_3448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2(lean_object* v_inst_3449_, lean_object* v_toBind_3450_, lean_object* v___f_3451_, lean_object* v_toPure_3452_, lean_object* v_____s_3453_){
_start:
{
lean_object* v_fst_3454_; 
v_fst_3454_ = lean_ctor_get(v_____s_3453_, 0);
if (lean_obj_tag(v_fst_3454_) == 0)
{
lean_object* v_snd_3455_; lean_object* v___f_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; 
lean_dec(v_toPure_3452_);
v_snd_3455_ = lean_ctor_get(v_____s_3453_, 1);
lean_inc(v_snd_3455_);
lean_dec_ref(v_____s_3453_);
v___f_3456_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__1___boxed), 13, 1);
lean_closure_set(v___f_3456_, 0, v_snd_3455_);
v___x_3457_ = lean_apply_2(v_inst_3449_, lean_box(0), v___f_3456_);
v___x_3458_ = lean_apply_4(v_toBind_3450_, lean_box(0), lean_box(0), v___x_3457_, v___f_3451_);
return v___x_3458_;
}
else
{
lean_object* v_val_3459_; lean_object* v___x_3460_; 
lean_inc_ref(v_fst_3454_);
lean_dec_ref(v_____s_3453_);
lean_dec(v___f_3451_);
lean_dec(v_toBind_3450_);
lean_dec(v_inst_3449_);
v_val_3459_ = lean_ctor_get(v_fst_3454_, 0);
lean_inc(v_val_3459_);
lean_dec_ref_known(v_fst_3454_, 1);
v___x_3460_ = lean_apply_2(v_toPure_3452_, lean_box(0), v_val_3459_);
return v___x_3460_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3(lean_object* v_toPure_3461_, lean_object* v_____do__lift_3462_){
_start:
{
lean_object* v___x_3463_; 
v___x_3463_ = lean_apply_2(v_toPure_3461_, lean_box(0), v_____do__lift_3462_);
return v___x_3463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4(lean_object* v_toPure_3464_, lean_object* v_next_3465_, lean_object* v_G_3466_, lean_object* v_____do__lift_3467_){
_start:
{
if (lean_obj_tag(v_____do__lift_3467_) == 0)
{
lean_object* v_a_3468_; lean_object* v___x_3469_; 
lean_dec(v_G_3466_);
v_a_3468_ = lean_ctor_get(v_____do__lift_3467_, 0);
lean_inc(v_a_3468_);
lean_dec_ref_known(v_____do__lift_3467_, 1);
v___x_3469_ = lean_apply_2(v_toPure_3464_, lean_box(0), v_a_3468_);
return v___x_3469_;
}
else
{
lean_object* v_a_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; 
lean_dec(v_toPure_3464_);
v_a_3470_ = lean_ctor_get(v_____do__lift_3467_, 0);
lean_inc(v_a_3470_);
lean_dec_ref_known(v_____do__lift_3467_, 1);
v___x_3471_ = lean_unsigned_to_nat(1u);
v___x_3472_ = lean_nat_add(v_next_3465_, v___x_3471_);
v___x_3473_ = lean_apply_4(v_G_3466_, v___x_3472_, v_a_3470_, lean_box(0), lean_box(0));
return v___x_3473_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed(lean_object* v_toPure_3474_, lean_object* v_next_3475_, lean_object* v_G_3476_, lean_object* v_____do__lift_3477_){
_start:
{
lean_object* v_res_3478_; 
v_res_3478_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4(v_toPure_3474_, v_next_3475_, v_G_3476_, v_____do__lift_3477_);
lean_dec(v_next_3475_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5(uint8_t v___x_3479_, lean_object* v_snd_3480_, lean_object* v_toPure_3481_, lean_object* v_____r_3482_){
_start:
{
lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; 
v___x_3483_ = lean_box(v___x_3479_);
v___x_3484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3484_, 0, v___x_3483_);
v___x_3485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3485_, 0, v___x_3484_);
lean_ctor_set(v___x_3485_, 1, v_snd_3480_);
v___x_3486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3486_, 0, v___x_3485_);
v___x_3487_ = lean_apply_2(v_toPure_3481_, lean_box(0), v___x_3486_);
return v___x_3487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5___boxed(lean_object* v___x_3488_, lean_object* v_snd_3489_, lean_object* v_toPure_3490_, lean_object* v_____r_3491_){
_start:
{
uint8_t v___x_1675__boxed_3492_; lean_object* v_res_3493_; 
v___x_1675__boxed_3492_ = lean_unbox(v___x_3488_);
v_res_3493_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5(v___x_1675__boxed_3492_, v_snd_3489_, v_toPure_3490_, v_____r_3491_);
return v_res_3493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6(lean_object* v_snd_3494_, lean_object* v_newHyp_3495_, lean_object* v___x_3496_, lean_object* v_toPure_3497_, lean_object* v_____r_3498_){
_start:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; 
v___x_3499_ = lean_array_push(v_snd_3494_, v_newHyp_3495_);
v___x_3500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3500_, 0, v___x_3496_);
lean_ctor_set(v___x_3500_, 1, v___x_3499_);
v___x_3501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3501_, 0, v___x_3500_);
v___x_3502_ = lean_apply_2(v_toPure_3497_, lean_box(0), v___x_3501_);
return v___x_3502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10(lean_object* v_toPure_3503_, lean_object* v___x_3504_, lean_object* v_____do__lift_3505_, lean_object* v_____do__lift_3506_){
_start:
{
uint8_t v_hasTrace_3507_; 
v_hasTrace_3507_ = lean_ctor_get_uint8(v_____do__lift_3506_, sizeof(void*)*1);
if (v_hasTrace_3507_ == 0)
{
lean_object* v___x_3508_; lean_object* v___x_3509_; 
lean_dec(v___x_3504_);
v___x_3508_ = lean_box(v_hasTrace_3507_);
v___x_3509_ = lean_apply_2(v_toPure_3503_, lean_box(0), v___x_3508_);
return v___x_3509_;
}
else
{
lean_object* v___x_3510_; lean_object* v___x_3511_; uint8_t v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; 
v___x_3510_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__27));
v___x_3511_ = l_Lean_Name_append(v___x_3510_, v___x_3504_);
v___x_3512_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_3505_, v_____do__lift_3506_, v___x_3511_);
lean_dec(v___x_3511_);
v___x_3513_ = lean_box(v___x_3512_);
v___x_3514_ = lean_apply_2(v_toPure_3503_, lean_box(0), v___x_3513_);
return v___x_3514_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10___boxed(lean_object* v_toPure_3515_, lean_object* v___x_3516_, lean_object* v_____do__lift_3517_, lean_object* v_____do__lift_3518_){
_start:
{
lean_object* v_res_3519_; 
v_res_3519_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10(v_toPure_3515_, v___x_3516_, v_____do__lift_3517_, v_____do__lift_3518_);
lean_dec_ref(v_____do__lift_3518_);
lean_dec_ref(v_____do__lift_3517_);
return v_res_3519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7(lean_object* v_toPure_3520_, lean_object* v___x_3521_, lean_object* v_toBind_3522_, lean_object* v_inst_3523_, lean_object* v_____do__lift_3524_){
_start:
{
lean_object* v___f_3525_; lean_object* v___x_3526_; 
v___f_3525_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__10___boxed), 4, 3);
lean_closure_set(v___f_3525_, 0, v_toPure_3520_);
lean_closure_set(v___f_3525_, 1, v___x_3521_);
lean_closure_set(v___f_3525_, 2, v_____do__lift_3524_);
v___x_3526_ = lean_apply_4(v_toBind_3522_, lean_box(0), lean_box(0), v_inst_3523_, v___f_3525_);
return v___x_3526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8(lean_object* v___f_3527_, lean_object* v___x_3528_, lean_object* v_type_3529_, lean_object* v_inst_3530_, lean_object* v_inst_3531_, lean_object* v_toMonadRef_3532_, lean_object* v_inst_3533_, lean_object* v___x_3534_, lean_object* v_toBind_3535_, lean_object* v___f_3536_, uint8_t v_____do__lift_3537_){
_start:
{
if (v_____do__lift_3537_ == 0)
{
lean_object* v___x_3538_; lean_object* v___x_3539_; 
lean_dec(v___f_3536_);
lean_dec(v_toBind_3535_);
lean_dec(v___x_3534_);
lean_dec(v_inst_3533_);
lean_dec_ref(v_toMonadRef_3532_);
lean_dec_ref(v_inst_3531_);
lean_dec_ref(v_inst_3530_);
lean_dec_ref(v_type_3529_);
lean_dec_ref(v___x_3528_);
v___x_3538_ = lean_box(0);
v___x_3539_ = lean_apply_1(v___f_3527_, v___x_3538_);
return v___x_3539_;
}
else
{
lean_object* v_type_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
lean_dec(v___f_3527_);
v_type_3540_ = lean_ctor_get(v___x_3528_, 1);
lean_inc_ref(v_type_3540_);
lean_dec_ref(v___x_3528_);
v___x_3541_ = l_Lean_MessageData_ofExpr(v_type_3540_);
v___x_3542_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_3543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3543_, 0, v___x_3541_);
lean_ctor_set(v___x_3543_, 1, v___x_3542_);
v___x_3544_ = l_Lean_MessageData_ofExpr(v_type_3529_);
v___x_3545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3543_);
lean_ctor_set(v___x_3545_, 1, v___x_3544_);
v___x_3546_ = l_Lean_addTrace___redArg(v_inst_3530_, v_inst_3531_, v_toMonadRef_3532_, v_inst_3533_, v___x_3534_, v___x_3545_);
v___x_3547_ = lean_apply_4(v_toBind_3535_, lean_box(0), lean_box(0), v___x_3546_, v___f_3536_);
return v___x_3547_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed(lean_object* v___f_3548_, lean_object* v___x_3549_, lean_object* v_type_3550_, lean_object* v_inst_3551_, lean_object* v_inst_3552_, lean_object* v_toMonadRef_3553_, lean_object* v_inst_3554_, lean_object* v___x_3555_, lean_object* v_toBind_3556_, lean_object* v___f_3557_, lean_object* v_____do__lift_3558_){
_start:
{
uint8_t v_____do__lift_1750__boxed_3559_; lean_object* v_res_3560_; 
v_____do__lift_1750__boxed_3559_ = lean_unbox(v_____do__lift_3558_);
v_res_3560_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8(v___f_3548_, v___x_3549_, v_type_3550_, v_inst_3551_, v_inst_3552_, v_toMonadRef_3553_, v_inst_3554_, v___x_3555_, v_toBind_3556_, v___f_3557_, v_____do__lift_1750__boxed_3559_);
return v_res_3560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9(lean_object* v___x_3561_, lean_object* v_snd_3562_, lean_object* v___x_3563_, lean_object* v_toPure_3564_, lean_object* v_inst_3565_, lean_object* v_toBind_3566_, lean_object* v_inst_3567_, lean_object* v_inst_3568_, lean_object* v_inst_3569_, lean_object* v_toMonadRef_3570_, lean_object* v_inst_3571_, lean_object* v___f_3572_, lean_object* v_newHyp_3573_){
_start:
{
lean_object* v_type_3574_; lean_object* v_value_3575_; uint8_t v___x_3576_; 
v_type_3574_ = lean_ctor_get(v_newHyp_3573_, 1);
v_value_3575_ = lean_ctor_get(v_newHyp_3573_, 2);
lean_inc_ref(v_type_3574_);
v___x_3576_ = l_Lean_Expr_isFalse(v_type_3574_);
if (v___x_3576_ == 0)
{
lean_object* v_type_3577_; lean_object* v___f_3578_; lean_object* v___f_3579_; lean_object* v___f_3580_; lean_object* v___f_3581_; uint8_t v___x_3589_; 
lean_dec(v___f_3572_);
v_type_3577_ = lean_ctor_get(v___x_3561_, 1);
lean_inc(v_toPure_3564_);
lean_inc(v___x_3563_);
lean_inc_ref(v_newHyp_3573_);
lean_inc(v_snd_3562_);
v___f_3578_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6), 5, 4);
lean_closure_set(v___f_3578_, 0, v_snd_3562_);
lean_closure_set(v___f_3578_, 1, v_newHyp_3573_);
lean_closure_set(v___f_3578_, 2, v___x_3563_);
lean_closure_set(v___f_3578_, 3, v_toPure_3564_);
v___f_3579_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3579_, 0, v___f_3578_);
lean_inc(v_toBind_3566_);
v___f_3580_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3580_, 0, v_inst_3565_);
lean_closure_set(v___f_3580_, 1, v_toBind_3566_);
lean_closure_set(v___f_3580_, 2, v___f_3579_);
lean_inc_ref(v___f_3580_);
v___f_3581_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3581_, 0, v___f_3580_);
v___x_3589_ = lean_expr_eqv(v_type_3577_, v_type_3574_);
if (v___x_3589_ == 0)
{
lean_inc_ref(v_type_3574_);
lean_dec_ref(v_newHyp_3573_);
lean_dec(v___x_3563_);
lean_dec(v_snd_3562_);
goto v___jp_3582_;
}
else
{
if (v___x_3576_ == 0)
{
lean_object* v___x_3590_; lean_object* v___x_3591_; 
lean_dec_ref(v___f_3581_);
lean_dec_ref(v___f_3580_);
lean_dec(v_inst_3571_);
lean_dec_ref(v_toMonadRef_3570_);
lean_dec_ref(v_inst_3569_);
lean_dec(v_inst_3568_);
lean_dec_ref(v_inst_3567_);
lean_dec(v_toBind_3566_);
lean_dec_ref(v___x_3561_);
v___x_3590_ = lean_box(0);
v___x_3591_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6(v_snd_3562_, v_newHyp_3573_, v___x_3563_, v_toPure_3564_, v___x_3590_);
return v___x_3591_;
}
else
{
lean_inc_ref(v_type_3574_);
lean_dec_ref(v_newHyp_3573_);
lean_dec(v___x_3563_);
lean_dec(v_snd_3562_);
goto v___jp_3582_;
}
}
v___jp_3582_:
{
lean_object* v_getInheritedTraceOptions_3583_; lean_object* v___x_3584_; lean_object* v___f_3585_; lean_object* v___f_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v_getInheritedTraceOptions_3583_ = lean_ctor_get(v_inst_3567_, 2);
lean_inc(v_getInheritedTraceOptions_3583_);
v___x_3584_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
lean_inc_n(v_toBind_3566_, 3);
v___f_3585_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7), 5, 4);
lean_closure_set(v___f_3585_, 0, v_toPure_3564_);
lean_closure_set(v___f_3585_, 1, v___x_3584_);
lean_closure_set(v___f_3585_, 2, v_toBind_3566_);
lean_closure_set(v___f_3585_, 3, v_inst_3568_);
v___f_3586_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed), 11, 10);
lean_closure_set(v___f_3586_, 0, v___f_3580_);
lean_closure_set(v___f_3586_, 1, v___x_3561_);
lean_closure_set(v___f_3586_, 2, v_type_3574_);
lean_closure_set(v___f_3586_, 3, v_inst_3569_);
lean_closure_set(v___f_3586_, 4, v_inst_3567_);
lean_closure_set(v___f_3586_, 5, v_toMonadRef_3570_);
lean_closure_set(v___f_3586_, 6, v_inst_3571_);
lean_closure_set(v___f_3586_, 7, v___x_3584_);
lean_closure_set(v___f_3586_, 8, v_toBind_3566_);
lean_closure_set(v___f_3586_, 9, v___f_3581_);
v___x_3587_ = lean_apply_4(v_toBind_3566_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3583_, v___f_3585_);
v___x_3588_ = lean_apply_4(v_toBind_3566_, lean_box(0), lean_box(0), v___x_3587_, v___f_3586_);
return v___x_3588_;
}
}
else
{
lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; 
lean_inc_ref(v_value_3575_);
lean_dec_ref(v_newHyp_3573_);
lean_dec(v_inst_3571_);
lean_dec_ref(v_toMonadRef_3570_);
lean_dec_ref(v_inst_3569_);
lean_dec(v_inst_3568_);
lean_dec_ref(v_inst_3567_);
lean_dec(v_toPure_3564_);
lean_dec(v___x_3563_);
lean_dec(v_snd_3562_);
lean_dec_ref(v___x_3561_);
v___x_3592_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___boxed), 13, 1);
lean_closure_set(v___x_3592_, 0, v_value_3575_);
v___x_3593_ = lean_apply_2(v_inst_3565_, lean_box(0), v___x_3592_);
v___x_3594_ = lean_apply_4(v_toBind_3566_, lean_box(0), lean_box(0), v___x_3593_, v___f_3572_);
return v___x_3594_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11(lean_object* v___x_3595_, lean_object* v_toPure_3596_, lean_object* v_hyps_3597_, lean_object* v___x_3598_, lean_object* v_inst_3599_, lean_object* v_toBind_3600_, lean_object* v_inst_3601_, lean_object* v_inst_3602_, lean_object* v_inst_3603_, lean_object* v_toMonadRef_3604_, lean_object* v_inst_3605_, lean_object* v_f_3606_, lean_object* v___f_3607_, lean_object* v_next_3608_, lean_object* v_acc_3609_, lean_object* v_h_3610_, lean_object* v_G_3611_){
_start:
{
uint8_t v___x_3612_; 
v___x_3612_ = lean_nat_dec_lt(v_next_3608_, v___x_3595_);
if (v___x_3612_ == 0)
{
lean_object* v___x_3613_; 
lean_dec(v_G_3611_);
lean_dec(v_next_3608_);
lean_dec(v___f_3607_);
lean_dec(v_f_3606_);
lean_dec(v_inst_3605_);
lean_dec_ref(v_toMonadRef_3604_);
lean_dec_ref(v_inst_3603_);
lean_dec(v_inst_3602_);
lean_dec_ref(v_inst_3601_);
lean_dec(v_toBind_3600_);
lean_dec(v_inst_3599_);
lean_dec(v___x_3598_);
v___x_3613_ = lean_apply_2(v_toPure_3596_, lean_box(0), v_acc_3609_);
return v___x_3613_;
}
else
{
lean_object* v_snd_3614_; lean_object* v___f_3615_; lean_object* v___x_3616_; lean_object* v___f_3617_; lean_object* v___x_3618_; lean_object* v___f_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; 
v_snd_3614_ = lean_ctor_get(v_acc_3609_, 1);
lean_inc_n(v_snd_3614_, 2);
lean_dec_ref(v_acc_3609_);
lean_inc(v_next_3608_);
lean_inc_n(v_toPure_3596_, 2);
v___f_3615_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_3615_, 0, v_toPure_3596_);
lean_closure_set(v___f_3615_, 1, v_next_3608_);
lean_closure_set(v___f_3615_, 2, v_G_3611_);
v___x_3616_ = lean_box(v___x_3612_);
v___f_3617_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5___boxed), 4, 3);
lean_closure_set(v___f_3617_, 0, v___x_3616_);
lean_closure_set(v___f_3617_, 1, v_snd_3614_);
lean_closure_set(v___f_3617_, 2, v_toPure_3596_);
v___x_3618_ = lean_array_fget_borrowed(v_hyps_3597_, v_next_3608_);
lean_inc_n(v_toBind_3600_, 3);
lean_inc_n(v___x_3618_, 2);
v___f_3619_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__9), 13, 12);
lean_closure_set(v___f_3619_, 0, v___x_3618_);
lean_closure_set(v___f_3619_, 1, v_snd_3614_);
lean_closure_set(v___f_3619_, 2, v___x_3598_);
lean_closure_set(v___f_3619_, 3, v_toPure_3596_);
lean_closure_set(v___f_3619_, 4, v_inst_3599_);
lean_closure_set(v___f_3619_, 5, v_toBind_3600_);
lean_closure_set(v___f_3619_, 6, v_inst_3601_);
lean_closure_set(v___f_3619_, 7, v_inst_3602_);
lean_closure_set(v___f_3619_, 8, v_inst_3603_);
lean_closure_set(v___f_3619_, 9, v_toMonadRef_3604_);
lean_closure_set(v___f_3619_, 10, v_inst_3605_);
lean_closure_set(v___f_3619_, 11, v___f_3617_);
v___x_3620_ = lean_apply_2(v_f_3606_, v_next_3608_, v___x_3618_);
v___x_3621_ = lean_apply_4(v_toBind_3600_, lean_box(0), lean_box(0), v___x_3620_, v___f_3619_);
v___x_3622_ = lean_apply_4(v_toBind_3600_, lean_box(0), lean_box(0), v___x_3621_, v___f_3607_);
v___x_3623_ = lean_apply_4(v_toBind_3600_, lean_box(0), lean_box(0), v___x_3622_, v___f_3615_);
return v___x_3623_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11___boxed(lean_object** _args){
lean_object* v___x_3624_ = _args[0];
lean_object* v_toPure_3625_ = _args[1];
lean_object* v_hyps_3626_ = _args[2];
lean_object* v___x_3627_ = _args[3];
lean_object* v_inst_3628_ = _args[4];
lean_object* v_toBind_3629_ = _args[5];
lean_object* v_inst_3630_ = _args[6];
lean_object* v_inst_3631_ = _args[7];
lean_object* v_inst_3632_ = _args[8];
lean_object* v_toMonadRef_3633_ = _args[9];
lean_object* v_inst_3634_ = _args[10];
lean_object* v_f_3635_ = _args[11];
lean_object* v___f_3636_ = _args[12];
lean_object* v_next_3637_ = _args[13];
lean_object* v_acc_3638_ = _args[14];
lean_object* v_h_3639_ = _args[15];
lean_object* v_G_3640_ = _args[16];
_start:
{
lean_object* v_res_3641_; 
v_res_3641_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11(v___x_3624_, v_toPure_3625_, v_hyps_3626_, v___x_3627_, v_inst_3628_, v_toBind_3629_, v_inst_3630_, v_inst_3631_, v_inst_3632_, v_toMonadRef_3633_, v_inst_3634_, v_f_3635_, v___f_3636_, v_next_3637_, v_acc_3638_, v_h_3639_, v_G_3640_);
lean_dec_ref(v_hyps_3626_);
lean_dec(v___x_3624_);
return v_res_3641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12(lean_object* v_toPure_3642_, lean_object* v_inst_3643_, lean_object* v_toBind_3644_, lean_object* v_inst_3645_, lean_object* v_inst_3646_, lean_object* v_inst_3647_, lean_object* v_toMonadRef_3648_, lean_object* v_inst_3649_, lean_object* v_f_3650_, lean_object* v___f_3651_, lean_object* v___f_3652_, lean_object* v_hyps_3653_){
_start:
{
lean_object* v___x_3654_; lean_object* v_newHyps_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___f_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; 
v___x_3654_ = lean_array_get_size(v_hyps_3653_);
v_newHyps_3655_ = lean_mk_empty_array_with_capacity(v___x_3654_);
v___x_3656_ = lean_unsigned_to_nat(0u);
v___x_3657_ = lean_box(0);
lean_inc(v_toBind_3644_);
v___f_3658_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__11___boxed), 17, 13);
lean_closure_set(v___f_3658_, 0, v___x_3654_);
lean_closure_set(v___f_3658_, 1, v_toPure_3642_);
lean_closure_set(v___f_3658_, 2, v_hyps_3653_);
lean_closure_set(v___f_3658_, 3, v___x_3657_);
lean_closure_set(v___f_3658_, 4, v_inst_3643_);
lean_closure_set(v___f_3658_, 5, v_toBind_3644_);
lean_closure_set(v___f_3658_, 6, v_inst_3645_);
lean_closure_set(v___f_3658_, 7, v_inst_3646_);
lean_closure_set(v___f_3658_, 8, v_inst_3647_);
lean_closure_set(v___f_3658_, 9, v_toMonadRef_3648_);
lean_closure_set(v___f_3658_, 10, v_inst_3649_);
lean_closure_set(v___f_3658_, 11, v_f_3650_);
lean_closure_set(v___f_3658_, 12, v___f_3651_);
v___x_3659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3659_, 0, v___x_3657_);
lean_ctor_set(v___x_3659_, 1, v_newHyps_3655_);
v___x_3660_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_3658_, v___x_3656_, v___x_3659_, lean_box(0));
v___x_3661_ = lean_apply_4(v_toBind_3644_, lean_box(0), lean_box(0), v___x_3660_, v___f_3652_);
return v___x_3661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg(lean_object* v_inst_3662_, lean_object* v_inst_3663_, lean_object* v_inst_3664_, lean_object* v_inst_3665_, lean_object* v_inst_3666_, lean_object* v_inst_3667_, lean_object* v_f_3668_){
_start:
{
lean_object* v_toApplicative_3669_; lean_object* v_toBind_3670_; lean_object* v_toPure_3671_; lean_object* v_toMonadRef_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___f_3675_; lean_object* v___f_3676_; lean_object* v___f_3677_; lean_object* v___f_3678_; lean_object* v___x_3679_; 
v_toApplicative_3669_ = lean_ctor_get(v_inst_3662_, 0);
v_toBind_3670_ = lean_ctor_get(v_inst_3662_, 1);
lean_inc_n(v_toBind_3670_, 3);
v_toPure_3671_ = lean_ctor_get(v_toApplicative_3669_, 1);
lean_inc_n(v_toPure_3671_, 4);
v_toMonadRef_3672_ = lean_ctor_get(v_inst_3664_, 1);
lean_inc_ref(v_toMonadRef_3672_);
lean_dec_ref(v_inst_3664_);
v___x_3673_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
lean_inc_n(v_inst_3663_, 2);
v___x_3674_ = lean_apply_2(v_inst_3663_, lean_box(0), v___x_3673_);
v___f_3675_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3675_, 0, v_toPure_3671_);
v___f_3676_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3676_, 0, v_inst_3663_);
lean_closure_set(v___f_3676_, 1, v_toBind_3670_);
lean_closure_set(v___f_3676_, 2, v___f_3675_);
lean_closure_set(v___f_3676_, 3, v_toPure_3671_);
v___f_3677_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3677_, 0, v_toPure_3671_);
v___f_3678_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12), 12, 11);
lean_closure_set(v___f_3678_, 0, v_toPure_3671_);
lean_closure_set(v___f_3678_, 1, v_inst_3663_);
lean_closure_set(v___f_3678_, 2, v_toBind_3670_);
lean_closure_set(v___f_3678_, 3, v_inst_3665_);
lean_closure_set(v___f_3678_, 4, v_inst_3666_);
lean_closure_set(v___f_3678_, 5, v_inst_3662_);
lean_closure_set(v___f_3678_, 6, v_toMonadRef_3672_);
lean_closure_set(v___f_3678_, 7, v_inst_3667_);
lean_closure_set(v___f_3678_, 8, v_f_3668_);
lean_closure_set(v___f_3678_, 9, v___f_3677_);
lean_closure_set(v___f_3678_, 10, v___f_3676_);
v___x_3679_ = lean_apply_4(v_toBind_3670_, lean_box(0), lean_box(0), v___x_3674_, v___f_3678_);
return v___x_3679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps(lean_object* v_m_3680_, lean_object* v_inst_3681_, lean_object* v_inst_3682_, lean_object* v_inst_3683_, lean_object* v_inst_3684_, lean_object* v_inst_3685_, lean_object* v_inst_3686_, lean_object* v_inst_3687_, lean_object* v_inst_3688_, lean_object* v_f_3689_){
_start:
{
lean_object* v_toApplicative_3690_; lean_object* v_toBind_3691_; lean_object* v_toPure_3692_; lean_object* v_toMonadRef_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___f_3696_; lean_object* v___f_3697_; lean_object* v___f_3698_; lean_object* v___f_3699_; lean_object* v___x_3700_; 
v_toApplicative_3690_ = lean_ctor_get(v_inst_3681_, 0);
v_toBind_3691_ = lean_ctor_get(v_inst_3681_, 1);
lean_inc_n(v_toBind_3691_, 3);
v_toPure_3692_ = lean_ctor_get(v_toApplicative_3690_, 1);
lean_inc_n(v_toPure_3692_, 4);
v_toMonadRef_3693_ = lean_ctor_get(v_inst_3683_, 1);
lean_inc_ref(v_toMonadRef_3693_);
lean_dec_ref(v_inst_3683_);
v___x_3694_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
lean_inc_n(v_inst_3682_, 2);
v___x_3695_ = lean_apply_2(v_inst_3682_, lean_box(0), v___x_3694_);
v___f_3696_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3696_, 0, v_toPure_3692_);
v___f_3697_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3697_, 0, v_inst_3682_);
lean_closure_set(v___f_3697_, 1, v_toBind_3691_);
lean_closure_set(v___f_3697_, 2, v___f_3696_);
lean_closure_set(v___f_3697_, 3, v_toPure_3692_);
v___f_3698_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3698_, 0, v_toPure_3692_);
v___f_3699_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__12), 12, 11);
lean_closure_set(v___f_3699_, 0, v_toPure_3692_);
lean_closure_set(v___f_3699_, 1, v_inst_3682_);
lean_closure_set(v___f_3699_, 2, v_toBind_3691_);
lean_closure_set(v___f_3699_, 3, v_inst_3685_);
lean_closure_set(v___f_3699_, 4, v_inst_3686_);
lean_closure_set(v___f_3699_, 5, v_inst_3681_);
lean_closure_set(v___f_3699_, 6, v_toMonadRef_3693_);
lean_closure_set(v___f_3699_, 7, v_inst_3687_);
lean_closure_set(v___f_3699_, 8, v_f_3689_);
lean_closure_set(v___f_3699_, 9, v___f_3698_);
lean_closure_set(v___f_3699_, 10, v___f_3697_);
v___x_3700_ = lean_apply_4(v_toBind_3691_, lean_box(0), lean_box(0), v___x_3695_, v___f_3699_);
return v___x_3700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___boxed(lean_object* v_m_3701_, lean_object* v_inst_3702_, lean_object* v_inst_3703_, lean_object* v_inst_3704_, lean_object* v_inst_3705_, lean_object* v_inst_3706_, lean_object* v_inst_3707_, lean_object* v_inst_3708_, lean_object* v_inst_3709_, lean_object* v_f_3710_){
_start:
{
lean_object* v_res_3711_; 
v_res_3711_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps(v_m_3701_, v_inst_3702_, v_inst_3703_, v_inst_3704_, v_inst_3705_, v_inst_3706_, v_inst_3707_, v_inst_3708_, v_inst_3709_, v_f_3710_);
lean_dec_ref(v_inst_3709_);
lean_dec_ref(v_inst_3705_);
return v_res_3711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__13(lean_object* v___x_3712_, lean_object* v_snd_3713_, lean_object* v___x_3714_, lean_object* v_toPure_3715_, lean_object* v_inst_3716_, lean_object* v_toBind_3717_, lean_object* v_inst_3718_, lean_object* v_inst_3719_, lean_object* v_toMonadRef_3720_, lean_object* v_inst_3721_, lean_object* v_inst_3722_, lean_object* v___f_3723_, lean_object* v_newHyp_3724_){
_start:
{
lean_object* v_type_3725_; lean_object* v_value_3726_; uint8_t v___x_3727_; 
v_type_3725_ = lean_ctor_get(v_newHyp_3724_, 1);
v_value_3726_ = lean_ctor_get(v_newHyp_3724_, 2);
lean_inc_ref(v_type_3725_);
v___x_3727_ = l_Lean_Expr_isFalse(v_type_3725_);
if (v___x_3727_ == 0)
{
lean_object* v_type_3728_; lean_object* v___f_3729_; lean_object* v___f_3730_; lean_object* v___f_3731_; lean_object* v___f_3732_; uint8_t v___x_3740_; 
lean_dec(v___f_3723_);
v_type_3728_ = lean_ctor_get(v___x_3712_, 1);
lean_inc(v_toPure_3715_);
lean_inc(v___x_3714_);
lean_inc_ref(v_newHyp_3724_);
lean_inc(v_snd_3713_);
v___f_3729_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6), 5, 4);
lean_closure_set(v___f_3729_, 0, v_snd_3713_);
lean_closure_set(v___f_3729_, 1, v_newHyp_3724_);
lean_closure_set(v___f_3729_, 2, v___x_3714_);
lean_closure_set(v___f_3729_, 3, v_toPure_3715_);
v___f_3730_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3730_, 0, v___f_3729_);
lean_inc(v_toBind_3717_);
v___f_3731_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__7), 4, 3);
lean_closure_set(v___f_3731_, 0, v_inst_3716_);
lean_closure_set(v___f_3731_, 1, v_toBind_3717_);
lean_closure_set(v___f_3731_, 2, v___f_3730_);
lean_inc_ref(v___f_3731_);
v___f_3732_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__10), 2, 1);
lean_closure_set(v___f_3732_, 0, v___f_3731_);
v___x_3740_ = lean_expr_eqv(v_type_3728_, v_type_3725_);
if (v___x_3740_ == 0)
{
lean_inc_ref(v_type_3725_);
lean_dec_ref(v_newHyp_3724_);
lean_dec(v___x_3714_);
lean_dec(v_snd_3713_);
goto v___jp_3733_;
}
else
{
if (v___x_3727_ == 0)
{
lean_object* v___x_3741_; lean_object* v___x_3742_; 
lean_dec_ref(v___f_3732_);
lean_dec_ref(v___f_3731_);
lean_dec(v_inst_3722_);
lean_dec(v_inst_3721_);
lean_dec_ref(v_toMonadRef_3720_);
lean_dec_ref(v_inst_3719_);
lean_dec_ref(v_inst_3718_);
lean_dec(v_toBind_3717_);
lean_dec_ref(v___x_3712_);
v___x_3741_ = lean_box(0);
v___x_3742_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__6(v_snd_3713_, v_newHyp_3724_, v___x_3714_, v_toPure_3715_, v___x_3741_);
return v___x_3742_;
}
else
{
lean_inc_ref(v_type_3725_);
lean_dec_ref(v_newHyp_3724_);
lean_dec(v___x_3714_);
lean_dec(v_snd_3713_);
goto v___jp_3733_;
}
}
v___jp_3733_:
{
lean_object* v_getInheritedTraceOptions_3734_; lean_object* v___x_3735_; lean_object* v___f_3736_; lean_object* v___f_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; 
v_getInheritedTraceOptions_3734_ = lean_ctor_get(v_inst_3718_, 2);
lean_inc(v_getInheritedTraceOptions_3734_);
v___x_3735_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
lean_inc_n(v_toBind_3717_, 3);
v___f_3736_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__8___boxed), 11, 10);
lean_closure_set(v___f_3736_, 0, v___f_3731_);
lean_closure_set(v___f_3736_, 1, v___x_3712_);
lean_closure_set(v___f_3736_, 2, v_type_3725_);
lean_closure_set(v___f_3736_, 3, v_inst_3719_);
lean_closure_set(v___f_3736_, 4, v_inst_3718_);
lean_closure_set(v___f_3736_, 5, v_toMonadRef_3720_);
lean_closure_set(v___f_3736_, 6, v_inst_3721_);
lean_closure_set(v___f_3736_, 7, v___x_3735_);
lean_closure_set(v___f_3736_, 8, v_toBind_3717_);
lean_closure_set(v___f_3736_, 9, v___f_3732_);
v___f_3737_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__7), 5, 4);
lean_closure_set(v___f_3737_, 0, v_toPure_3715_);
lean_closure_set(v___f_3737_, 1, v___x_3735_);
lean_closure_set(v___f_3737_, 2, v_toBind_3717_);
lean_closure_set(v___f_3737_, 3, v_inst_3722_);
v___x_3738_ = lean_apply_4(v_toBind_3717_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3734_, v___f_3737_);
v___x_3739_ = lean_apply_4(v_toBind_3717_, lean_box(0), lean_box(0), v___x_3738_, v___f_3736_);
return v___x_3739_;
}
}
else
{
lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
lean_inc_ref(v_value_3726_);
lean_dec_ref(v_newHyp_3724_);
lean_dec(v_inst_3722_);
lean_dec(v_inst_3721_);
lean_dec_ref(v_toMonadRef_3720_);
lean_dec_ref(v_inst_3719_);
lean_dec_ref(v_inst_3718_);
lean_dec(v_toPure_3715_);
lean_dec(v___x_3714_);
lean_dec(v_snd_3713_);
lean_dec_ref(v___x_3712_);
v___x_3743_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___boxed), 13, 1);
lean_closure_set(v___x_3743_, 0, v_value_3726_);
v___x_3744_ = lean_apply_2(v_inst_3716_, lean_box(0), v___x_3743_);
v___x_3745_ = lean_apply_4(v_toBind_3717_, lean_box(0), lean_box(0), v___x_3744_, v___f_3723_);
return v___x_3745_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0(lean_object* v___x_3746_, lean_object* v_toPure_3747_, lean_object* v_hyps_3748_, lean_object* v___x_3749_, lean_object* v_inst_3750_, lean_object* v_toBind_3751_, lean_object* v_inst_3752_, lean_object* v_inst_3753_, lean_object* v_toMonadRef_3754_, lean_object* v_inst_3755_, lean_object* v_inst_3756_, lean_object* v_f_3757_, lean_object* v___f_3758_, lean_object* v_next_3759_, lean_object* v_acc_3760_, lean_object* v_h_3761_, lean_object* v_G_3762_){
_start:
{
uint8_t v___x_3763_; 
v___x_3763_ = lean_nat_dec_lt(v_next_3759_, v___x_3746_);
if (v___x_3763_ == 0)
{
lean_object* v___x_3764_; 
lean_dec(v_G_3762_);
lean_dec(v_next_3759_);
lean_dec(v___f_3758_);
lean_dec(v_f_3757_);
lean_dec(v_inst_3756_);
lean_dec(v_inst_3755_);
lean_dec_ref(v_toMonadRef_3754_);
lean_dec_ref(v_inst_3753_);
lean_dec_ref(v_inst_3752_);
lean_dec(v_toBind_3751_);
lean_dec(v_inst_3750_);
lean_dec(v___x_3749_);
v___x_3764_ = lean_apply_2(v_toPure_3747_, lean_box(0), v_acc_3760_);
return v___x_3764_;
}
else
{
lean_object* v_snd_3765_; lean_object* v___f_3766_; lean_object* v___x_3767_; lean_object* v___f_3768_; lean_object* v___x_3769_; lean_object* v___f_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; 
v_snd_3765_ = lean_ctor_get(v_acc_3760_, 1);
lean_inc_n(v_snd_3765_, 2);
lean_dec_ref(v_acc_3760_);
lean_inc(v_next_3759_);
lean_inc_n(v_toPure_3747_, 2);
v___f_3766_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_3766_, 0, v_toPure_3747_);
lean_closure_set(v___f_3766_, 1, v_next_3759_);
lean_closure_set(v___f_3766_, 2, v_G_3762_);
v___x_3767_ = lean_box(v___x_3763_);
v___f_3768_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__5___boxed), 4, 3);
lean_closure_set(v___f_3768_, 0, v___x_3767_);
lean_closure_set(v___f_3768_, 1, v_snd_3765_);
lean_closure_set(v___f_3768_, 2, v_toPure_3747_);
v___x_3769_ = lean_array_fget_borrowed(v_hyps_3748_, v_next_3759_);
lean_dec(v_next_3759_);
lean_inc_n(v_toBind_3751_, 3);
lean_inc_n(v___x_3769_, 2);
v___f_3770_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__13), 13, 12);
lean_closure_set(v___f_3770_, 0, v___x_3769_);
lean_closure_set(v___f_3770_, 1, v_snd_3765_);
lean_closure_set(v___f_3770_, 2, v___x_3749_);
lean_closure_set(v___f_3770_, 3, v_toPure_3747_);
lean_closure_set(v___f_3770_, 4, v_inst_3750_);
lean_closure_set(v___f_3770_, 5, v_toBind_3751_);
lean_closure_set(v___f_3770_, 6, v_inst_3752_);
lean_closure_set(v___f_3770_, 7, v_inst_3753_);
lean_closure_set(v___f_3770_, 8, v_toMonadRef_3754_);
lean_closure_set(v___f_3770_, 9, v_inst_3755_);
lean_closure_set(v___f_3770_, 10, v_inst_3756_);
lean_closure_set(v___f_3770_, 11, v___f_3768_);
v___x_3771_ = lean_apply_1(v_f_3757_, v___x_3769_);
v___x_3772_ = lean_apply_4(v_toBind_3751_, lean_box(0), lean_box(0), v___x_3771_, v___f_3770_);
v___x_3773_ = lean_apply_4(v_toBind_3751_, lean_box(0), lean_box(0), v___x_3772_, v___f_3758_);
v___x_3774_ = lean_apply_4(v_toBind_3751_, lean_box(0), lean_box(0), v___x_3773_, v___f_3766_);
return v___x_3774_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_3775_ = _args[0];
lean_object* v_toPure_3776_ = _args[1];
lean_object* v_hyps_3777_ = _args[2];
lean_object* v___x_3778_ = _args[3];
lean_object* v_inst_3779_ = _args[4];
lean_object* v_toBind_3780_ = _args[5];
lean_object* v_inst_3781_ = _args[6];
lean_object* v_inst_3782_ = _args[7];
lean_object* v_toMonadRef_3783_ = _args[8];
lean_object* v_inst_3784_ = _args[9];
lean_object* v_inst_3785_ = _args[10];
lean_object* v_f_3786_ = _args[11];
lean_object* v___f_3787_ = _args[12];
lean_object* v_next_3788_ = _args[13];
lean_object* v_acc_3789_ = _args[14];
lean_object* v_h_3790_ = _args[15];
lean_object* v_G_3791_ = _args[16];
_start:
{
lean_object* v_res_3792_; 
v_res_3792_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0(v___x_3775_, v_toPure_3776_, v_hyps_3777_, v___x_3778_, v_inst_3779_, v_toBind_3780_, v_inst_3781_, v_inst_3782_, v_toMonadRef_3783_, v_inst_3784_, v_inst_3785_, v_f_3786_, v___f_3787_, v_next_3788_, v_acc_3789_, v_h_3790_, v_G_3791_);
lean_dec_ref(v_hyps_3777_);
lean_dec(v___x_3775_);
return v_res_3792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1(lean_object* v_toPure_3793_, lean_object* v_inst_3794_, lean_object* v_toBind_3795_, lean_object* v_inst_3796_, lean_object* v_inst_3797_, lean_object* v_toMonadRef_3798_, lean_object* v_inst_3799_, lean_object* v_inst_3800_, lean_object* v_f_3801_, lean_object* v___f_3802_, lean_object* v___f_3803_, lean_object* v_hyps_3804_){
_start:
{
lean_object* v___x_3805_; lean_object* v_newHyps_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___f_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; 
v___x_3805_ = lean_array_get_size(v_hyps_3804_);
v_newHyps_3806_ = lean_mk_empty_array_with_capacity(v___x_3805_);
v___x_3807_ = lean_unsigned_to_nat(0u);
v___x_3808_ = lean_box(0);
lean_inc(v_toBind_3795_);
v___f_3809_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__0___boxed), 17, 13);
lean_closure_set(v___f_3809_, 0, v___x_3805_);
lean_closure_set(v___f_3809_, 1, v_toPure_3793_);
lean_closure_set(v___f_3809_, 2, v_hyps_3804_);
lean_closure_set(v___f_3809_, 3, v___x_3808_);
lean_closure_set(v___f_3809_, 4, v_inst_3794_);
lean_closure_set(v___f_3809_, 5, v_toBind_3795_);
lean_closure_set(v___f_3809_, 6, v_inst_3796_);
lean_closure_set(v___f_3809_, 7, v_inst_3797_);
lean_closure_set(v___f_3809_, 8, v_toMonadRef_3798_);
lean_closure_set(v___f_3809_, 9, v_inst_3799_);
lean_closure_set(v___f_3809_, 10, v_inst_3800_);
lean_closure_set(v___f_3809_, 11, v_f_3801_);
lean_closure_set(v___f_3809_, 12, v___f_3802_);
v___x_3810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3810_, 0, v___x_3808_);
lean_ctor_set(v___x_3810_, 1, v_newHyps_3806_);
v___x_3811_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_3809_, v___x_3807_, v___x_3810_, lean_box(0));
v___x_3812_ = lean_apply_4(v_toBind_3795_, lean_box(0), lean_box(0), v___x_3811_, v___f_3803_);
return v___x_3812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg(lean_object* v_inst_3813_, lean_object* v_inst_3814_, lean_object* v_inst_3815_, lean_object* v_inst_3816_, lean_object* v_inst_3817_, lean_object* v_inst_3818_, lean_object* v_f_3819_){
_start:
{
lean_object* v_toApplicative_3820_; lean_object* v_toBind_3821_; lean_object* v_toPure_3822_; lean_object* v_toMonadRef_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___f_3826_; lean_object* v___f_3827_; lean_object* v___f_3828_; lean_object* v___f_3829_; lean_object* v___x_3830_; 
v_toApplicative_3820_ = lean_ctor_get(v_inst_3813_, 0);
v_toBind_3821_ = lean_ctor_get(v_inst_3813_, 1);
lean_inc_n(v_toBind_3821_, 3);
v_toPure_3822_ = lean_ctor_get(v_toApplicative_3820_, 1);
lean_inc_n(v_toPure_3822_, 4);
v_toMonadRef_3823_ = lean_ctor_get(v_inst_3815_, 1);
lean_inc_ref(v_toMonadRef_3823_);
lean_dec_ref(v_inst_3815_);
v___x_3824_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
lean_inc_n(v_inst_3814_, 2);
v___x_3825_ = lean_apply_2(v_inst_3814_, lean_box(0), v___x_3824_);
v___f_3826_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3826_, 0, v_toPure_3822_);
v___f_3827_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3827_, 0, v_inst_3814_);
lean_closure_set(v___f_3827_, 1, v_toBind_3821_);
lean_closure_set(v___f_3827_, 2, v___f_3826_);
lean_closure_set(v___f_3827_, 3, v_toPure_3822_);
v___f_3828_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3828_, 0, v_toPure_3822_);
v___f_3829_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1), 12, 11);
lean_closure_set(v___f_3829_, 0, v_toPure_3822_);
lean_closure_set(v___f_3829_, 1, v_inst_3814_);
lean_closure_set(v___f_3829_, 2, v_toBind_3821_);
lean_closure_set(v___f_3829_, 3, v_inst_3816_);
lean_closure_set(v___f_3829_, 4, v_inst_3813_);
lean_closure_set(v___f_3829_, 5, v_toMonadRef_3823_);
lean_closure_set(v___f_3829_, 6, v_inst_3818_);
lean_closure_set(v___f_3829_, 7, v_inst_3817_);
lean_closure_set(v___f_3829_, 8, v_f_3819_);
lean_closure_set(v___f_3829_, 9, v___f_3828_);
lean_closure_set(v___f_3829_, 10, v___f_3827_);
v___x_3830_ = lean_apply_4(v_toBind_3821_, lean_box(0), lean_box(0), v___x_3825_, v___f_3829_);
return v___x_3830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps(lean_object* v_m_3831_, lean_object* v_inst_3832_, lean_object* v_inst_3833_, lean_object* v_inst_3834_, lean_object* v_inst_3835_, lean_object* v_inst_3836_, lean_object* v_inst_3837_, lean_object* v_inst_3838_, lean_object* v_inst_3839_, lean_object* v_f_3840_){
_start:
{
lean_object* v_toApplicative_3841_; lean_object* v_toBind_3842_; lean_object* v_toPure_3843_; lean_object* v_toMonadRef_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___f_3847_; lean_object* v___f_3848_; lean_object* v___f_3849_; lean_object* v___f_3850_; lean_object* v___x_3851_; 
v_toApplicative_3841_ = lean_ctor_get(v_inst_3832_, 0);
v_toBind_3842_ = lean_ctor_get(v_inst_3832_, 1);
lean_inc_n(v_toBind_3842_, 3);
v_toPure_3843_ = lean_ctor_get(v_toApplicative_3841_, 1);
lean_inc_n(v_toPure_3843_, 4);
v_toMonadRef_3844_ = lean_ctor_get(v_inst_3834_, 1);
lean_inc_ref(v_toMonadRef_3844_);
lean_dec_ref(v_inst_3834_);
v___x_3845_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
lean_inc_n(v_inst_3833_, 2);
v___x_3846_ = lean_apply_2(v_inst_3833_, lean_box(0), v___x_3845_);
v___f_3847_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3847_, 0, v_toPure_3843_);
v___f_3848_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3848_, 0, v_inst_3833_);
lean_closure_set(v___f_3848_, 1, v_toBind_3842_);
lean_closure_set(v___f_3848_, 2, v___f_3847_);
lean_closure_set(v___f_3848_, 3, v_toPure_3843_);
v___f_3849_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapIdxHyps___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3849_, 0, v_toPure_3843_);
v___f_3850_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___redArg___lam__1), 12, 11);
lean_closure_set(v___f_3850_, 0, v_toPure_3843_);
lean_closure_set(v___f_3850_, 1, v_inst_3833_);
lean_closure_set(v___f_3850_, 2, v_toBind_3842_);
lean_closure_set(v___f_3850_, 3, v_inst_3836_);
lean_closure_set(v___f_3850_, 4, v_inst_3832_);
lean_closure_set(v___f_3850_, 5, v_toMonadRef_3844_);
lean_closure_set(v___f_3850_, 6, v_inst_3838_);
lean_closure_set(v___f_3850_, 7, v_inst_3837_);
lean_closure_set(v___f_3850_, 8, v_f_3840_);
lean_closure_set(v___f_3850_, 9, v___f_3849_);
lean_closure_set(v___f_3850_, 10, v___f_3848_);
v___x_3851_ = lean_apply_4(v_toBind_3842_, lean_box(0), lean_box(0), v___x_3846_, v___f_3850_);
return v___x_3851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps___boxed(lean_object* v_m_3852_, lean_object* v_inst_3853_, lean_object* v_inst_3854_, lean_object* v_inst_3855_, lean_object* v_inst_3856_, lean_object* v_inst_3857_, lean_object* v_inst_3858_, lean_object* v_inst_3859_, lean_object* v_inst_3860_, lean_object* v_f_3861_){
_start:
{
lean_object* v_res_3862_; 
v_res_3862_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapHyps(v_m_3852_, v_inst_3853_, v_inst_3854_, v_inst_3855_, v_inst_3856_, v_inst_3857_, v_inst_3858_, v_inst_3859_, v_inst_3860_, v_f_3861_);
lean_dec_ref(v_inst_3860_);
lean_dec_ref(v_inst_3856_);
return v_res_3862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0(lean_object* v_f_3863_, lean_object* v_x_3864_, lean_object* v___y_3865_){
_start:
{
lean_object* v___x_3866_; 
v___x_3866_ = lean_apply_1(v_f_3863_, v___y_3865_);
return v___x_3866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1(lean_object* v_toApplicative_3867_, lean_object* v_inst_3868_, lean_object* v___f_3869_, lean_object* v_hyps_3870_){
_start:
{
lean_object* v_toPure_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; uint8_t v___x_3875_; 
v_toPure_3871_ = lean_ctor_get(v_toApplicative_3867_, 1);
lean_inc(v_toPure_3871_);
lean_dec_ref(v_toApplicative_3867_);
v___x_3872_ = lean_unsigned_to_nat(0u);
v___x_3873_ = lean_array_get_size(v_hyps_3870_);
v___x_3874_ = lean_box(0);
v___x_3875_ = lean_nat_dec_lt(v___x_3872_, v___x_3873_);
if (v___x_3875_ == 0)
{
lean_object* v___x_3876_; 
lean_dec_ref(v_hyps_3870_);
lean_dec(v___f_3869_);
lean_dec_ref(v_inst_3868_);
v___x_3876_ = lean_apply_2(v_toPure_3871_, lean_box(0), v___x_3874_);
return v___x_3876_;
}
else
{
uint8_t v___x_3877_; 
v___x_3877_ = lean_nat_dec_le(v___x_3873_, v___x_3873_);
if (v___x_3877_ == 0)
{
if (v___x_3875_ == 0)
{
lean_object* v___x_3878_; 
lean_dec_ref(v_hyps_3870_);
lean_dec(v___f_3869_);
lean_dec_ref(v_inst_3868_);
v___x_3878_ = lean_apply_2(v_toPure_3871_, lean_box(0), v___x_3874_);
return v___x_3878_;
}
else
{
size_t v___x_3879_; size_t v___x_3880_; lean_object* v___x_3881_; 
lean_dec(v_toPure_3871_);
v___x_3879_ = ((size_t)0ULL);
v___x_3880_ = lean_usize_of_nat(v___x_3873_);
v___x_3881_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3868_, v___f_3869_, v_hyps_3870_, v___x_3879_, v___x_3880_, v___x_3874_);
return v___x_3881_;
}
}
else
{
size_t v___x_3882_; size_t v___x_3883_; lean_object* v___x_3884_; 
lean_dec(v_toPure_3871_);
v___x_3882_ = ((size_t)0ULL);
v___x_3883_ = lean_usize_of_nat(v___x_3873_);
v___x_3884_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3868_, v___f_3869_, v_hyps_3870_, v___x_3882_, v___x_3883_, v___x_3874_);
return v___x_3884_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg(lean_object* v_inst_3885_, lean_object* v_inst_3886_, lean_object* v_f_3887_){
_start:
{
lean_object* v_toApplicative_3888_; lean_object* v_toBind_3889_; lean_object* v___f_3890_; lean_object* v___f_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; 
v_toApplicative_3888_ = lean_ctor_get(v_inst_3885_, 0);
lean_inc_ref(v_toApplicative_3888_);
v_toBind_3889_ = lean_ctor_get(v_inst_3885_, 1);
lean_inc(v_toBind_3889_);
v___f_3890_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3890_, 0, v_f_3887_);
v___f_3891_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3891_, 0, v_toApplicative_3888_);
lean_closure_set(v___f_3891_, 1, v_inst_3885_);
lean_closure_set(v___f_3891_, 2, v___f_3890_);
v___x_3892_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
v___x_3893_ = lean_apply_2(v_inst_3886_, lean_box(0), v___x_3892_);
v___x_3894_ = lean_apply_4(v_toBind_3889_, lean_box(0), lean_box(0), v___x_3893_, v___f_3891_);
return v___x_3894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps(lean_object* v_m_3895_, lean_object* v_inst_3896_, lean_object* v_inst_3897_, lean_object* v_inst_3898_, lean_object* v_f_3899_){
_start:
{
lean_object* v_toApplicative_3900_; lean_object* v_toBind_3901_; lean_object* v___f_3902_; lean_object* v___f_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; 
v_toApplicative_3900_ = lean_ctor_get(v_inst_3896_, 0);
lean_inc_ref(v_toApplicative_3900_);
v_toBind_3901_ = lean_ctor_get(v_inst_3896_, 1);
lean_inc(v_toBind_3901_);
v___f_3902_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3902_, 0, v_f_3899_);
v___f_3903_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3903_, 0, v_toApplicative_3900_);
lean_closure_set(v___f_3903_, 1, v_inst_3896_);
lean_closure_set(v___f_3903_, 2, v___f_3902_);
v___x_3904_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_getHyps___boxed), 12, 0);
v___x_3905_ = lean_apply_2(v_inst_3897_, lean_box(0), v___x_3904_);
v___x_3906_ = lean_apply_4(v_toBind_3901_, lean_box(0), lean_box(0), v___x_3905_, v___f_3903_);
return v___x_3906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps___boxed(lean_object* v_m_3907_, lean_object* v_inst_3908_, lean_object* v_inst_3909_, lean_object* v_inst_3910_, lean_object* v_f_3911_){
_start:
{
lean_object* v_res_3912_; 
v_res_3912_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_forHyps(v_m_3907_, v_inst_3908_, v_inst_3909_, v_inst_3910_, v_f_3911_);
lean_dec_ref(v_inst_3910_);
return v_res_3912_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0(void){
_start:
{
lean_object* v___x_3913_; lean_object* v___x_3914_; 
v___x_3913_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__0);
v___x_3914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3914_, 0, v___x_3913_);
return v___x_3914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(uint8_t v_cacheId_3915_, lean_object* v_methods_3916_, lean_object* v_config_3917_, lean_object* v_hyp_3918_, lean_object* v_a_3919_, lean_object* v_a_3920_, lean_object* v_a_3921_, lean_object* v_a_3922_, lean_object* v_a_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_){
_start:
{
lean_object* v___x_3927_; lean_object* v_caches_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v_typeAnalysis_3935_; lean_object* v_target_3936_; lean_object* v_hypotheses_3937_; uint8_t v_didChange_3938_; lean_object* v___x_3940_; uint8_t v_isShared_3941_; uint8_t v_isSharedCheck_3979_; 
v___x_3927_ = lean_st_ref_get(v_a_3919_);
v_caches_3928_ = lean_ctor_get(v___x_3927_, 0);
lean_inc_ref(v_caches_3928_);
lean_dec(v___x_3927_);
v___x_3929_ = lean_unsigned_to_nat(0u);
v___x_3930_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_get(v_cacheId_3915_, v_caches_3928_);
v___x_3931_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0);
v___x_3932_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3932_, 0, v___x_3929_);
lean_ctor_set(v___x_3932_, 1, v___x_3930_);
lean_ctor_set(v___x_3932_, 2, v___x_3931_);
lean_ctor_set(v___x_3932_, 3, v___x_3931_);
v___x_3933_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(v_cacheId_3915_, v___x_3931_, v_caches_3928_);
v___x_3934_ = lean_st_ref_take(v_a_3919_);
v_typeAnalysis_3935_ = lean_ctor_get(v___x_3934_, 1);
v_target_3936_ = lean_ctor_get(v___x_3934_, 2);
v_hypotheses_3937_ = lean_ctor_get(v___x_3934_, 3);
v_didChange_3938_ = lean_ctor_get_uint8(v___x_3934_, sizeof(void*)*4);
v_isSharedCheck_3979_ = !lean_is_exclusive(v___x_3934_);
if (v_isSharedCheck_3979_ == 0)
{
lean_object* v_unused_3980_; 
v_unused_3980_ = lean_ctor_get(v___x_3934_, 0);
lean_dec(v_unused_3980_);
v___x_3940_ = v___x_3934_;
v_isShared_3941_ = v_isSharedCheck_3979_;
goto v_resetjp_3939_;
}
else
{
lean_inc(v_hypotheses_3937_);
lean_inc(v_target_3936_);
lean_inc(v_typeAnalysis_3935_);
lean_dec(v___x_3934_);
v___x_3940_ = lean_box(0);
v_isShared_3941_ = v_isSharedCheck_3979_;
goto v_resetjp_3939_;
}
v_resetjp_3939_:
{
lean_object* v___x_3943_; 
if (v_isShared_3941_ == 0)
{
lean_ctor_set(v___x_3940_, 0, v___x_3933_);
v___x_3943_ = v___x_3940_;
goto v_reusejp_3942_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v___x_3933_);
lean_ctor_set(v_reuseFailAlloc_3978_, 1, v_typeAnalysis_3935_);
lean_ctor_set(v_reuseFailAlloc_3978_, 2, v_target_3936_);
lean_ctor_set(v_reuseFailAlloc_3978_, 3, v_hypotheses_3937_);
lean_ctor_set_uint8(v_reuseFailAlloc_3978_, sizeof(void*)*4, v_didChange_3938_);
v___x_3943_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3942_;
}
v_reusejp_3942_:
{
lean_object* v___x_3944_; lean_object* v_type_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; 
v___x_3944_ = lean_st_ref_put(v_a_3919_, v___x_3943_);
v_type_3945_ = lean_ctor_get(v_hyp_3918_, 1);
lean_inc_ref(v_type_3945_);
v___x_3946_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_3946_, 0, v_type_3945_);
v___x_3947_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v___x_3946_, v_methods_3916_, v_config_3917_, v___x_3932_, v_a_3920_, v_a_3921_, v_a_3922_, v_a_3923_, v_a_3924_, v_a_3925_);
if (lean_obj_tag(v___x_3947_) == 0)
{
lean_object* v_a_3948_; lean_object* v_fst_3949_; lean_object* v_snd_3950_; lean_object* v___x_3951_; lean_object* v_caches_3952_; lean_object* v_persistentCache_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v_typeAnalysis_3956_; lean_object* v_target_3957_; lean_object* v_hypotheses_3958_; uint8_t v_didChange_3959_; lean_object* v___x_3961_; uint8_t v_isShared_3962_; uint8_t v_isSharedCheck_3968_; 
v_a_3948_ = lean_ctor_get(v___x_3947_, 0);
lean_inc(v_a_3948_);
lean_dec_ref_known(v___x_3947_, 1);
v_fst_3949_ = lean_ctor_get(v_a_3948_, 0);
lean_inc(v_fst_3949_);
v_snd_3950_ = lean_ctor_get(v_a_3948_, 1);
lean_inc(v_snd_3950_);
lean_dec(v_a_3948_);
v___x_3951_ = lean_st_ref_get(v_a_3919_);
v_caches_3952_ = lean_ctor_get(v___x_3951_, 0);
lean_inc_ref(v_caches_3952_);
lean_dec(v___x_3951_);
v_persistentCache_3953_ = lean_ctor_get(v_snd_3950_, 1);
lean_inc_ref(v_persistentCache_3953_);
lean_dec(v_snd_3950_);
v___x_3954_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SimpCacheId_set(v_cacheId_3915_, v_persistentCache_3953_, v_caches_3952_);
v___x_3955_ = lean_st_ref_take(v_a_3919_);
v_typeAnalysis_3956_ = lean_ctor_get(v___x_3955_, 1);
v_target_3957_ = lean_ctor_get(v___x_3955_, 2);
v_hypotheses_3958_ = lean_ctor_get(v___x_3955_, 3);
v_didChange_3959_ = lean_ctor_get_uint8(v___x_3955_, sizeof(void*)*4);
v_isSharedCheck_3968_ = !lean_is_exclusive(v___x_3955_);
if (v_isSharedCheck_3968_ == 0)
{
lean_object* v_unused_3969_; 
v_unused_3969_ = lean_ctor_get(v___x_3955_, 0);
lean_dec(v_unused_3969_);
v___x_3961_ = v___x_3955_;
v_isShared_3962_ = v_isSharedCheck_3968_;
goto v_resetjp_3960_;
}
else
{
lean_inc(v_hypotheses_3958_);
lean_inc(v_target_3957_);
lean_inc(v_typeAnalysis_3956_);
lean_dec(v___x_3955_);
v___x_3961_ = lean_box(0);
v_isShared_3962_ = v_isSharedCheck_3968_;
goto v_resetjp_3960_;
}
v_resetjp_3960_:
{
lean_object* v___x_3964_; 
if (v_isShared_3962_ == 0)
{
lean_ctor_set(v___x_3961_, 0, v___x_3954_);
v___x_3964_ = v___x_3961_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v___x_3954_);
lean_ctor_set(v_reuseFailAlloc_3967_, 1, v_typeAnalysis_3956_);
lean_ctor_set(v_reuseFailAlloc_3967_, 2, v_target_3957_);
lean_ctor_set(v_reuseFailAlloc_3967_, 3, v_hypotheses_3958_);
lean_ctor_set_uint8(v_reuseFailAlloc_3967_, sizeof(void*)*4, v_didChange_3959_);
v___x_3964_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
lean_object* v___x_3965_; lean_object* v___x_3966_; 
v___x_3965_ = lean_st_ref_put(v_a_3919_, v___x_3964_);
v___x_3966_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v_hyp_3918_, v_fst_3949_, v_a_3921_, v_a_3922_, v_a_3923_, v_a_3924_, v_a_3925_);
return v___x_3966_;
}
}
}
else
{
lean_object* v_a_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3977_; 
lean_dec_ref(v_hyp_3918_);
v_a_3970_ = lean_ctor_get(v___x_3947_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3947_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3972_ = v___x_3947_;
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_a_3970_);
lean_dec(v___x_3947_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_a_3970_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___boxed(lean_object* v_cacheId_3981_, lean_object* v_methods_3982_, lean_object* v_config_3983_, lean_object* v_hyp_3984_, lean_object* v_a_3985_, lean_object* v_a_3986_, lean_object* v_a_3987_, lean_object* v_a_3988_, lean_object* v_a_3989_, lean_object* v_a_3990_, lean_object* v_a_3991_, lean_object* v_a_3992_){
_start:
{
uint8_t v_cacheId_boxed_3993_; lean_object* v_res_3994_; 
v_cacheId_boxed_3993_ = lean_unbox(v_cacheId_3981_);
v_res_3994_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(v_cacheId_boxed_3993_, v_methods_3982_, v_config_3983_, v_hyp_3984_, v_a_3985_, v_a_3986_, v_a_3987_, v_a_3988_, v_a_3989_, v_a_3990_, v_a_3991_);
lean_dec(v_a_3991_);
lean_dec_ref(v_a_3990_);
lean_dec(v_a_3989_);
lean_dec_ref(v_a_3988_);
lean_dec(v_a_3987_);
lean_dec_ref(v_a_3986_);
lean_dec(v_a_3985_);
lean_dec_ref(v_methods_3982_);
return v_res_3994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp(uint8_t v_cacheId_3995_, lean_object* v_methods_3996_, lean_object* v_config_3997_, lean_object* v_hyp_3998_, lean_object* v_a_3999_, lean_object* v_a_4000_, lean_object* v_a_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_){
_start:
{
lean_object* v___x_4011_; 
v___x_4011_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(v_cacheId_3995_, v_methods_3996_, v_config_3997_, v_hyp_3998_, v_a_4000_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
return v___x_4011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___boxed(lean_object* v_cacheId_4012_, lean_object* v_methods_4013_, lean_object* v_config_4014_, lean_object* v_hyp_4015_, lean_object* v_a_4016_, lean_object* v_a_4017_, lean_object* v_a_4018_, lean_object* v_a_4019_, lean_object* v_a_4020_, lean_object* v_a_4021_, lean_object* v_a_4022_, lean_object* v_a_4023_, lean_object* v_a_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_, lean_object* v_a_4027_){
_start:
{
uint8_t v_cacheId_boxed_4028_; lean_object* v_res_4029_; 
v_cacheId_boxed_4028_ = lean_unbox(v_cacheId_4012_);
v_res_4029_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp(v_cacheId_boxed_4028_, v_methods_4013_, v_config_4014_, v_hyp_4015_, v_a_4016_, v_a_4017_, v_a_4018_, v_a_4019_, v_a_4020_, v_a_4021_, v_a_4022_, v_a_4023_, v_a_4024_, v_a_4025_, v_a_4026_);
lean_dec(v_a_4026_);
lean_dec_ref(v_a_4025_);
lean_dec(v_a_4024_);
lean_dec_ref(v_a_4023_);
lean_dec(v_a_4022_);
lean_dec_ref(v_a_4021_);
lean_dec(v_a_4020_);
lean_dec_ref(v_a_4019_);
lean_dec(v_a_4018_);
lean_dec(v_a_4017_);
lean_dec_ref(v_a_4016_);
lean_dec_ref(v_methods_4013_);
return v_res_4029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(uint8_t v_cacheId_4030_, lean_object* v_methods_4031_, lean_object* v_config_4032_, lean_object* v_hyp_4033_, lean_object* v_a_4034_, lean_object* v_a_4035_, lean_object* v_a_4036_, lean_object* v_a_4037_, lean_object* v_a_4038_, lean_object* v_a_4039_, lean_object* v_a_4040_){
_start:
{
lean_object* v___x_4042_; lean_object* v_caches_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v_typeAnalysis_4050_; lean_object* v_target_4051_; lean_object* v_hypotheses_4052_; uint8_t v_didChange_4053_; lean_object* v___x_4055_; uint8_t v_isShared_4056_; uint8_t v_isSharedCheck_4094_; 
v___x_4042_ = lean_st_ref_get(v_a_4034_);
v_caches_4043_ = lean_ctor_get(v___x_4042_, 0);
lean_inc_ref(v_caches_4043_);
lean_dec(v___x_4042_);
v___x_4044_ = lean_unsigned_to_nat(0u);
v___x_4045_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_get(v_cacheId_4030_, v_caches_4043_);
v___x_4046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4046_, 0, v___x_4044_);
lean_ctor_set(v___x_4046_, 1, v___x_4045_);
v___x_4047_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1);
v___x_4048_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(v_cacheId_4030_, v___x_4047_, v_caches_4043_);
v___x_4049_ = lean_st_ref_take(v_a_4034_);
v_typeAnalysis_4050_ = lean_ctor_get(v___x_4049_, 1);
v_target_4051_ = lean_ctor_get(v___x_4049_, 2);
v_hypotheses_4052_ = lean_ctor_get(v___x_4049_, 3);
v_didChange_4053_ = lean_ctor_get_uint8(v___x_4049_, sizeof(void*)*4);
v_isSharedCheck_4094_ = !lean_is_exclusive(v___x_4049_);
if (v_isSharedCheck_4094_ == 0)
{
lean_object* v_unused_4095_; 
v_unused_4095_ = lean_ctor_get(v___x_4049_, 0);
lean_dec(v_unused_4095_);
v___x_4055_ = v___x_4049_;
v_isShared_4056_ = v_isSharedCheck_4094_;
goto v_resetjp_4054_;
}
else
{
lean_inc(v_hypotheses_4052_);
lean_inc(v_target_4051_);
lean_inc(v_typeAnalysis_4050_);
lean_dec(v___x_4049_);
v___x_4055_ = lean_box(0);
v_isShared_4056_ = v_isSharedCheck_4094_;
goto v_resetjp_4054_;
}
v_resetjp_4054_:
{
lean_object* v___x_4058_; 
if (v_isShared_4056_ == 0)
{
lean_ctor_set(v___x_4055_, 0, v___x_4048_);
v___x_4058_ = v___x_4055_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4093_; 
v_reuseFailAlloc_4093_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4093_, 0, v___x_4048_);
lean_ctor_set(v_reuseFailAlloc_4093_, 1, v_typeAnalysis_4050_);
lean_ctor_set(v_reuseFailAlloc_4093_, 2, v_target_4051_);
lean_ctor_set(v_reuseFailAlloc_4093_, 3, v_hypotheses_4052_);
lean_ctor_set_uint8(v_reuseFailAlloc_4093_, sizeof(void*)*4, v_didChange_4053_);
v___x_4058_ = v_reuseFailAlloc_4093_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
lean_object* v___x_4059_; lean_object* v_type_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; 
v___x_4059_ = lean_st_ref_put(v_a_4034_, v___x_4058_);
v_type_4060_ = lean_ctor_get(v_hyp_4033_, 1);
lean_inc_ref(v_type_4060_);
v___x_4061_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_DSimp_dsimp___boxed), 11, 1);
lean_closure_set(v___x_4061_, 0, v_type_4060_);
v___x_4062_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v___x_4061_, v_methods_4031_, v_config_4032_, v___x_4046_, v_a_4035_, v_a_4036_, v_a_4037_, v_a_4038_, v_a_4039_, v_a_4040_);
if (lean_obj_tag(v___x_4062_) == 0)
{
lean_object* v_a_4063_; lean_object* v_fst_4064_; lean_object* v_snd_4065_; lean_object* v___x_4066_; lean_object* v_caches_4067_; lean_object* v_cache_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v_typeAnalysis_4071_; lean_object* v_target_4072_; lean_object* v_hypotheses_4073_; uint8_t v_didChange_4074_; lean_object* v___x_4076_; uint8_t v_isShared_4077_; uint8_t v_isSharedCheck_4083_; 
v_a_4063_ = lean_ctor_get(v___x_4062_, 0);
lean_inc(v_a_4063_);
lean_dec_ref_known(v___x_4062_, 1);
v_fst_4064_ = lean_ctor_get(v_a_4063_, 0);
lean_inc(v_fst_4064_);
v_snd_4065_ = lean_ctor_get(v_a_4063_, 1);
lean_inc(v_snd_4065_);
lean_dec(v_a_4063_);
v___x_4066_ = lean_st_ref_get(v_a_4034_);
v_caches_4067_ = lean_ctor_get(v___x_4066_, 0);
lean_inc_ref(v_caches_4067_);
lean_dec(v___x_4066_);
v_cache_4068_ = lean_ctor_get(v_snd_4065_, 1);
lean_inc_ref(v_cache_4068_);
lean_dec(v_snd_4065_);
v___x_4069_ = l_Lean_Meta_Tactic_BVDecide_Normalize_DSimpCacheId_set(v_cacheId_4030_, v_cache_4068_, v_caches_4067_);
v___x_4070_ = lean_st_ref_take(v_a_4034_);
v_typeAnalysis_4071_ = lean_ctor_get(v___x_4070_, 1);
v_target_4072_ = lean_ctor_get(v___x_4070_, 2);
v_hypotheses_4073_ = lean_ctor_get(v___x_4070_, 3);
v_didChange_4074_ = lean_ctor_get_uint8(v___x_4070_, sizeof(void*)*4);
v_isSharedCheck_4083_ = !lean_is_exclusive(v___x_4070_);
if (v_isSharedCheck_4083_ == 0)
{
lean_object* v_unused_4084_; 
v_unused_4084_ = lean_ctor_get(v___x_4070_, 0);
lean_dec(v_unused_4084_);
v___x_4076_ = v___x_4070_;
v_isShared_4077_ = v_isSharedCheck_4083_;
goto v_resetjp_4075_;
}
else
{
lean_inc(v_hypotheses_4073_);
lean_inc(v_target_4072_);
lean_inc(v_typeAnalysis_4071_);
lean_dec(v___x_4070_);
v___x_4076_ = lean_box(0);
v_isShared_4077_ = v_isSharedCheck_4083_;
goto v_resetjp_4075_;
}
v_resetjp_4075_:
{
lean_object* v___x_4079_; 
if (v_isShared_4077_ == 0)
{
lean_ctor_set(v___x_4076_, 0, v___x_4069_);
v___x_4079_ = v___x_4076_;
goto v_reusejp_4078_;
}
else
{
lean_object* v_reuseFailAlloc_4082_; 
v_reuseFailAlloc_4082_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4082_, 0, v___x_4069_);
lean_ctor_set(v_reuseFailAlloc_4082_, 1, v_typeAnalysis_4071_);
lean_ctor_set(v_reuseFailAlloc_4082_, 2, v_target_4072_);
lean_ctor_set(v_reuseFailAlloc_4082_, 3, v_hypotheses_4073_);
lean_ctor_set_uint8(v_reuseFailAlloc_4082_, sizeof(void*)*4, v_didChange_4074_);
v___x_4079_ = v_reuseFailAlloc_4082_;
goto v_reusejp_4078_;
}
v_reusejp_4078_:
{
lean_object* v___x_4080_; lean_object* v___x_4081_; 
v___x_4080_ = lean_st_ref_put(v_a_4034_, v___x_4079_);
v___x_4081_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(v_hyp_4033_, v_fst_4064_);
lean_dec(v_fst_4064_);
return v___x_4081_;
}
}
}
else
{
lean_object* v_a_4085_; lean_object* v___x_4087_; uint8_t v_isShared_4088_; uint8_t v_isSharedCheck_4092_; 
lean_dec_ref(v_hyp_4033_);
v_a_4085_ = lean_ctor_get(v___x_4062_, 0);
v_isSharedCheck_4092_ = !lean_is_exclusive(v___x_4062_);
if (v_isSharedCheck_4092_ == 0)
{
v___x_4087_ = v___x_4062_;
v_isShared_4088_ = v_isSharedCheck_4092_;
goto v_resetjp_4086_;
}
else
{
lean_inc(v_a_4085_);
lean_dec(v___x_4062_);
v___x_4087_ = lean_box(0);
v_isShared_4088_ = v_isSharedCheck_4092_;
goto v_resetjp_4086_;
}
v_resetjp_4086_:
{
lean_object* v___x_4090_; 
if (v_isShared_4088_ == 0)
{
v___x_4090_ = v___x_4087_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4091_; 
v_reuseFailAlloc_4091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4091_, 0, v_a_4085_);
v___x_4090_ = v_reuseFailAlloc_4091_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
return v___x_4090_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg___boxed(lean_object* v_cacheId_4096_, lean_object* v_methods_4097_, lean_object* v_config_4098_, lean_object* v_hyp_4099_, lean_object* v_a_4100_, lean_object* v_a_4101_, lean_object* v_a_4102_, lean_object* v_a_4103_, lean_object* v_a_4104_, lean_object* v_a_4105_, lean_object* v_a_4106_, lean_object* v_a_4107_){
_start:
{
uint8_t v_cacheId_boxed_4108_; lean_object* v_res_4109_; 
v_cacheId_boxed_4108_ = lean_unbox(v_cacheId_4096_);
v_res_4109_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(v_cacheId_boxed_4108_, v_methods_4097_, v_config_4098_, v_hyp_4099_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_, v_a_4104_, v_a_4105_, v_a_4106_);
lean_dec(v_a_4106_);
lean_dec_ref(v_a_4105_);
lean_dec(v_a_4104_);
lean_dec_ref(v_a_4103_);
lean_dec(v_a_4102_);
lean_dec_ref(v_a_4101_);
lean_dec(v_a_4100_);
lean_dec_ref(v_methods_4097_);
return v_res_4109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp(uint8_t v_cacheId_4110_, lean_object* v_methods_4111_, lean_object* v_config_4112_, lean_object* v_hyp_4113_, lean_object* v_a_4114_, lean_object* v_a_4115_, lean_object* v_a_4116_, lean_object* v_a_4117_, lean_object* v_a_4118_, lean_object* v_a_4119_, lean_object* v_a_4120_, lean_object* v_a_4121_, lean_object* v_a_4122_, lean_object* v_a_4123_, lean_object* v_a_4124_){
_start:
{
lean_object* v___x_4126_; 
v___x_4126_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(v_cacheId_4110_, v_methods_4111_, v_config_4112_, v_hyp_4113_, v_a_4115_, v_a_4119_, v_a_4120_, v_a_4121_, v_a_4122_, v_a_4123_, v_a_4124_);
return v___x_4126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___boxed(lean_object* v_cacheId_4127_, lean_object* v_methods_4128_, lean_object* v_config_4129_, lean_object* v_hyp_4130_, lean_object* v_a_4131_, lean_object* v_a_4132_, lean_object* v_a_4133_, lean_object* v_a_4134_, lean_object* v_a_4135_, lean_object* v_a_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_, lean_object* v_a_4139_, lean_object* v_a_4140_, lean_object* v_a_4141_, lean_object* v_a_4142_){
_start:
{
uint8_t v_cacheId_boxed_4143_; lean_object* v_res_4144_; 
v_cacheId_boxed_4143_ = lean_unbox(v_cacheId_4127_);
v_res_4144_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp(v_cacheId_boxed_4143_, v_methods_4128_, v_config_4129_, v_hyp_4130_, v_a_4131_, v_a_4132_, v_a_4133_, v_a_4134_, v_a_4135_, v_a_4136_, v_a_4137_, v_a_4138_, v_a_4139_, v_a_4140_, v_a_4141_);
lean_dec(v_a_4141_);
lean_dec_ref(v_a_4140_);
lean_dec(v_a_4139_);
lean_dec_ref(v_a_4138_);
lean_dec(v_a_4137_);
lean_dec_ref(v_a_4136_);
lean_dec(v_a_4135_);
lean_dec_ref(v_a_4134_);
lean_dec(v_a_4133_);
lean_dec(v_a_4132_);
lean_dec_ref(v_a_4131_);
lean_dec_ref(v_methods_4128_);
return v_res_4144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(lean_object* v_snd_4145_, lean_object* v_a_4146_, lean_object* v___x_4147_, lean_object* v_____r_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_){
_start:
{
lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; 
v___x_4161_ = lean_array_push(v_snd_4145_, v_a_4146_);
v___x_4162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4162_, 0, v___x_4147_);
lean_ctor_set(v___x_4162_, 1, v___x_4161_);
v___x_4163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4163_, 0, v___x_4162_);
v___x_4164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4164_, 0, v___x_4163_);
return v___x_4164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0___boxed(lean_object* v_snd_4165_, lean_object* v_a_4166_, lean_object* v___x_4167_, lean_object* v_____r_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_){
_start:
{
lean_object* v_res_4181_; 
v_res_4181_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(v_snd_4165_, v_a_4166_, v___x_4167_, v_____r_4168_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_, v___y_4173_, v___y_4174_, v___y_4175_, v___y_4176_, v___y_4177_, v___y_4178_, v___y_4179_);
lean_dec(v___y_4179_);
lean_dec_ref(v___y_4178_);
lean_dec(v___y_4177_);
lean_dec_ref(v___y_4176_);
lean_dec(v___y_4175_);
lean_dec_ref(v___y_4174_);
lean_dec(v___y_4173_);
lean_dec_ref(v___y_4172_);
lean_dec(v___y_4171_);
lean_dec(v___y_4170_);
lean_dec_ref(v___y_4169_);
return v_res_4181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(uint8_t v___x_4182_, lean_object* v___f_4183_, lean_object* v_____r_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_){
_start:
{
lean_object* v___x_4197_; lean_object* v_caches_4198_; lean_object* v_typeAnalysis_4199_; lean_object* v_target_4200_; lean_object* v_hypotheses_4201_; lean_object* v___x_4203_; uint8_t v_isShared_4204_; uint8_t v_isSharedCheck_4211_; 
v___x_4197_ = lean_st_ref_take(v___y_4186_);
v_caches_4198_ = lean_ctor_get(v___x_4197_, 0);
v_typeAnalysis_4199_ = lean_ctor_get(v___x_4197_, 1);
v_target_4200_ = lean_ctor_get(v___x_4197_, 2);
v_hypotheses_4201_ = lean_ctor_get(v___x_4197_, 3);
v_isSharedCheck_4211_ = !lean_is_exclusive(v___x_4197_);
if (v_isSharedCheck_4211_ == 0)
{
v___x_4203_ = v___x_4197_;
v_isShared_4204_ = v_isSharedCheck_4211_;
goto v_resetjp_4202_;
}
else
{
lean_inc(v_hypotheses_4201_);
lean_inc(v_target_4200_);
lean_inc(v_typeAnalysis_4199_);
lean_inc(v_caches_4198_);
lean_dec(v___x_4197_);
v___x_4203_ = lean_box(0);
v_isShared_4204_ = v_isSharedCheck_4211_;
goto v_resetjp_4202_;
}
v_resetjp_4202_:
{
lean_object* v___x_4205_; lean_object* v___x_4207_; 
v___x_4205_ = lean_box(0);
if (v_isShared_4204_ == 0)
{
v___x_4207_ = v___x_4203_;
goto v_reusejp_4206_;
}
else
{
lean_object* v_reuseFailAlloc_4210_; 
v_reuseFailAlloc_4210_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4210_, 0, v_caches_4198_);
lean_ctor_set(v_reuseFailAlloc_4210_, 1, v_typeAnalysis_4199_);
lean_ctor_set(v_reuseFailAlloc_4210_, 2, v_target_4200_);
lean_ctor_set(v_reuseFailAlloc_4210_, 3, v_hypotheses_4201_);
v___x_4207_ = v_reuseFailAlloc_4210_;
goto v_reusejp_4206_;
}
v_reusejp_4206_:
{
lean_object* v___x_4208_; lean_object* v___x_4209_; 
lean_ctor_set_uint8(v___x_4207_, sizeof(void*)*4, v___x_4182_);
v___x_4208_ = lean_st_ref_put(v___y_4186_, v___x_4207_);
lean_inc(v___y_4195_);
lean_inc_ref(v___y_4194_);
lean_inc(v___y_4193_);
lean_inc_ref(v___y_4192_);
lean_inc(v___y_4191_);
lean_inc_ref(v___y_4190_);
lean_inc(v___y_4189_);
lean_inc_ref(v___y_4188_);
lean_inc(v___y_4187_);
lean_inc(v___y_4186_);
lean_inc_ref(v___y_4185_);
v___x_4209_ = lean_apply_13(v___f_4183_, v___x_4205_, v___y_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_, v___y_4195_, lean_box(0));
return v___x_4209_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1___boxed(lean_object* v___x_4212_, lean_object* v___f_4213_, lean_object* v_____r_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_){
_start:
{
uint8_t v___x_22240__boxed_4227_; lean_object* v_res_4228_; 
v___x_22240__boxed_4227_ = lean_unbox(v___x_4212_);
v_res_4228_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_22240__boxed_4227_, v___f_4213_, v_____r_4214_, v___y_4215_, v___y_4216_, v___y_4217_, v___y_4218_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_, v___y_4224_, v___y_4225_);
lean_dec(v___y_4225_);
lean_dec_ref(v___y_4224_);
lean_dec(v___y_4223_);
lean_dec_ref(v___y_4222_);
lean_dec(v___y_4221_);
lean_dec_ref(v___y_4220_);
lean_dec(v___y_4219_);
lean_dec_ref(v___y_4218_);
lean_dec(v___y_4217_);
lean_dec(v___y_4216_);
lean_dec_ref(v___y_4215_);
return v_res_4228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2(lean_object* v___x_4229_, lean_object* v_hypotheses_4230_, uint8_t v_cacheId_4231_, lean_object* v_methods_4232_, lean_object* v_config_4233_, lean_object* v___x_4234_, lean_object* v___x_4235_, lean_object* v___x_4236_, lean_object* v_toMonadRef_4237_, lean_object* v___f_4238_, lean_object* v_next_4239_, lean_object* v_acc_4240_, lean_object* v_h_4241_, lean_object* v_G_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_){
_start:
{
lean_object* v___y_4256_; uint8_t v___x_4278_; 
v___x_4278_ = lean_nat_dec_lt(v_next_4239_, v___x_4229_);
if (v___x_4278_ == 0)
{
lean_object* v___x_4279_; 
lean_dec_ref(v_G_4242_);
lean_dec(v___f_4238_);
lean_dec_ref(v_toMonadRef_4237_);
lean_dec_ref(v___x_4236_);
lean_dec_ref(v___x_4235_);
lean_dec(v___x_4234_);
lean_dec_ref(v_config_4233_);
v___x_4279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4279_, 0, v_acc_4240_);
return v___x_4279_;
}
else
{
lean_object* v_snd_4280_; lean_object* v___x_4282_; uint8_t v_isShared_4283_; uint8_t v_isSharedCheck_4354_; 
v_snd_4280_ = lean_ctor_get(v_acc_4240_, 1);
v_isSharedCheck_4354_ = !lean_is_exclusive(v_acc_4240_);
if (v_isSharedCheck_4354_ == 0)
{
lean_object* v_unused_4355_; 
v_unused_4355_ = lean_ctor_get(v_acc_4240_, 0);
lean_dec(v_unused_4355_);
v___x_4282_ = v_acc_4240_;
v_isShared_4283_ = v_isSharedCheck_4354_;
goto v_resetjp_4281_;
}
else
{
lean_inc(v_snd_4280_);
lean_dec(v_acc_4240_);
v___x_4282_ = lean_box(0);
v_isShared_4283_ = v_isSharedCheck_4354_;
goto v_resetjp_4281_;
}
v_resetjp_4281_:
{
lean_object* v___x_4284_; lean_object* v___x_4285_; 
v___x_4284_ = lean_array_fget_borrowed(v_hypotheses_4230_, v_next_4239_);
lean_inc(v___x_4284_);
v___x_4285_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(v_cacheId_4231_, v_methods_4232_, v_config_4233_, v___x_4284_, v___y_4244_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_, v___y_4253_);
if (lean_obj_tag(v___x_4285_) == 0)
{
lean_object* v_a_4286_; lean_object* v_type_4287_; lean_object* v_value_4288_; uint8_t v___x_4289_; 
v_a_4286_ = lean_ctor_get(v___x_4285_, 0);
lean_inc(v_a_4286_);
lean_dec_ref_known(v___x_4285_, 1);
v_type_4287_ = lean_ctor_get(v_a_4286_, 1);
v_value_4288_ = lean_ctor_get(v_a_4286_, 2);
lean_inc_ref(v_type_4287_);
v___x_4289_ = l_Lean_Expr_isFalse(v_type_4287_);
if (v___x_4289_ == 0)
{
lean_object* v_type_4290_; lean_object* v___f_4291_; uint8_t v___x_4321_; 
lean_del_object(v___x_4282_);
v_type_4290_ = lean_ctor_get(v___x_4284_, 1);
lean_inc(v___x_4234_);
lean_inc(v_a_4286_);
lean_inc(v_snd_4280_);
v___f_4291_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0___boxed), 16, 3);
lean_closure_set(v___f_4291_, 0, v_snd_4280_);
lean_closure_set(v___f_4291_, 1, v_a_4286_);
lean_closure_set(v___f_4291_, 2, v___x_4234_);
v___x_4321_ = lean_expr_eqv(v_type_4290_, v_type_4287_);
if (v___x_4321_ == 0)
{
lean_inc_ref(v_type_4287_);
lean_dec(v_a_4286_);
lean_dec(v_snd_4280_);
lean_dec(v___x_4234_);
goto v___jp_4295_;
}
else
{
if (v___x_4289_ == 0)
{
lean_object* v___x_4322_; lean_object* v___x_4323_; 
lean_dec_ref(v___f_4291_);
lean_dec(v___f_4238_);
lean_dec_ref(v_toMonadRef_4237_);
lean_dec_ref(v___x_4236_);
lean_dec_ref(v___x_4235_);
v___x_4322_ = lean_box(0);
v___x_4323_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(v_snd_4280_, v_a_4286_, v___x_4234_, v___x_4322_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_, v___y_4253_);
v___y_4256_ = v___x_4323_;
goto v___jp_4255_;
}
else
{
lean_inc_ref(v_type_4287_);
lean_dec(v_a_4286_);
lean_dec(v_snd_4280_);
lean_dec(v___x_4234_);
goto v___jp_4295_;
}
}
v___jp_4292_:
{
lean_object* v___x_4293_; lean_object* v___x_4294_; 
v___x_4293_ = lean_box(0);
v___x_4294_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_4278_, v___f_4291_, v___x_4293_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_, v___y_4253_);
v___y_4256_ = v___x_4294_;
goto v___jp_4255_;
}
v___jp_4295_:
{
lean_object* v_toCold_4296_; lean_object* v_options_4297_; uint8_t v_hasTrace_4298_; 
v_toCold_4296_ = lean_ctor_get(v___y_4252_, 0);
v_options_4297_ = lean_ctor_get(v_toCold_4296_, 2);
v_hasTrace_4298_ = lean_ctor_get_uint8(v_options_4297_, sizeof(void*)*1);
if (v_hasTrace_4298_ == 0)
{
lean_dec_ref(v_type_4287_);
lean_dec(v___f_4238_);
lean_dec_ref(v_toMonadRef_4237_);
lean_dec_ref(v___x_4236_);
lean_dec_ref(v___x_4235_);
goto v___jp_4292_;
}
else
{
lean_object* v_inheritedTraceOptions_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; uint8_t v___x_4302_; 
v_inheritedTraceOptions_4299_ = lean_ctor_get(v_toCold_4296_, 11);
v___x_4300_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_4301_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_4302_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4299_, v_options_4297_, v___x_4301_);
if (v___x_4302_ == 0)
{
lean_dec_ref(v_type_4287_);
lean_dec(v___f_4238_);
lean_dec_ref(v_toMonadRef_4237_);
lean_dec_ref(v___x_4236_);
lean_dec_ref(v___x_4235_);
goto v___jp_4292_;
}
else
{
lean_object* v_type_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_22165__overap_4309_; lean_object* v___x_4310_; 
v_type_4303_ = lean_ctor_get(v___x_4284_, 1);
lean_inc_ref(v_type_4303_);
v___x_4304_ = l_Lean_MessageData_ofExpr(v_type_4303_);
v___x_4305_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_4306_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4306_, 0, v___x_4304_);
lean_ctor_set(v___x_4306_, 1, v___x_4305_);
v___x_4307_ = l_Lean_MessageData_ofExpr(v_type_4287_);
v___x_4308_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4308_, 0, v___x_4306_);
lean_ctor_set(v___x_4308_, 1, v___x_4307_);
v___x_22165__overap_4309_ = l_Lean_addTrace___redArg(v___x_4235_, v___x_4236_, v_toMonadRef_4237_, v___f_4238_, v___x_4300_, v___x_4308_);
lean_inc(v___y_4253_);
lean_inc_ref(v___y_4252_);
lean_inc(v___y_4251_);
lean_inc_ref(v___y_4250_);
lean_inc(v___y_4249_);
lean_inc_ref(v___y_4248_);
lean_inc(v___y_4247_);
lean_inc_ref(v___y_4246_);
lean_inc(v___y_4245_);
lean_inc(v___y_4244_);
lean_inc_ref(v___y_4243_);
v___x_4310_ = lean_apply_12(v___x_22165__overap_4309_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_, v___y_4253_, lean_box(0));
if (lean_obj_tag(v___x_4310_) == 0)
{
lean_object* v_a_4311_; lean_object* v___x_4312_; 
v_a_4311_ = lean_ctor_get(v___x_4310_, 0);
lean_inc(v_a_4311_);
lean_dec_ref_known(v___x_4310_, 1);
v___x_4312_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_4278_, v___f_4291_, v_a_4311_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_, v___y_4253_);
v___y_4256_ = v___x_4312_;
goto v___jp_4255_;
}
else
{
lean_object* v_a_4313_; lean_object* v___x_4315_; uint8_t v_isShared_4316_; uint8_t v_isSharedCheck_4320_; 
lean_dec_ref(v___f_4291_);
lean_dec_ref(v_G_4242_);
v_a_4313_ = lean_ctor_get(v___x_4310_, 0);
v_isSharedCheck_4320_ = !lean_is_exclusive(v___x_4310_);
if (v_isSharedCheck_4320_ == 0)
{
v___x_4315_ = v___x_4310_;
v_isShared_4316_ = v_isSharedCheck_4320_;
goto v_resetjp_4314_;
}
else
{
lean_inc(v_a_4313_);
lean_dec(v___x_4310_);
v___x_4315_ = lean_box(0);
v_isShared_4316_ = v_isSharedCheck_4320_;
goto v_resetjp_4314_;
}
v_resetjp_4314_:
{
lean_object* v___x_4318_; 
if (v_isShared_4316_ == 0)
{
v___x_4318_ = v___x_4315_;
goto v_reusejp_4317_;
}
else
{
lean_object* v_reuseFailAlloc_4319_; 
v_reuseFailAlloc_4319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4319_, 0, v_a_4313_);
v___x_4318_ = v_reuseFailAlloc_4319_;
goto v_reusejp_4317_;
}
v_reusejp_4317_:
{
return v___x_4318_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4324_; 
lean_inc_ref(v_value_4288_);
lean_dec(v_a_4286_);
lean_dec_ref(v_G_4242_);
lean_dec(v___f_4238_);
lean_dec_ref(v_toMonadRef_4237_);
lean_dec_ref(v___x_4236_);
lean_dec_ref(v___x_4235_);
lean_dec(v___x_4234_);
v___x_4324_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_4288_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_, v___y_4253_);
if (lean_obj_tag(v___x_4324_) == 0)
{
lean_object* v___x_4326_; uint8_t v_isShared_4327_; uint8_t v_isSharedCheck_4336_; 
v_isSharedCheck_4336_ = !lean_is_exclusive(v___x_4324_);
if (v_isSharedCheck_4336_ == 0)
{
lean_object* v_unused_4337_; 
v_unused_4337_ = lean_ctor_get(v___x_4324_, 0);
lean_dec(v_unused_4337_);
v___x_4326_ = v___x_4324_;
v_isShared_4327_ = v_isSharedCheck_4336_;
goto v_resetjp_4325_;
}
else
{
lean_dec(v___x_4324_);
v___x_4326_ = lean_box(0);
v_isShared_4327_ = v_isSharedCheck_4336_;
goto v_resetjp_4325_;
}
v_resetjp_4325_:
{
lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4331_; 
v___x_4328_ = lean_box(v___x_4278_);
v___x_4329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4329_, 0, v___x_4328_);
if (v_isShared_4283_ == 0)
{
lean_ctor_set(v___x_4282_, 0, v___x_4329_);
v___x_4331_ = v___x_4282_;
goto v_reusejp_4330_;
}
else
{
lean_object* v_reuseFailAlloc_4335_; 
v_reuseFailAlloc_4335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4335_, 0, v___x_4329_);
lean_ctor_set(v_reuseFailAlloc_4335_, 1, v_snd_4280_);
v___x_4331_ = v_reuseFailAlloc_4335_;
goto v_reusejp_4330_;
}
v_reusejp_4330_:
{
lean_object* v___x_4333_; 
if (v_isShared_4327_ == 0)
{
lean_ctor_set(v___x_4326_, 0, v___x_4331_);
v___x_4333_ = v___x_4326_;
goto v_reusejp_4332_;
}
else
{
lean_object* v_reuseFailAlloc_4334_; 
v_reuseFailAlloc_4334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4334_, 0, v___x_4331_);
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
else
{
lean_object* v_a_4338_; lean_object* v___x_4340_; uint8_t v_isShared_4341_; uint8_t v_isSharedCheck_4345_; 
lean_del_object(v___x_4282_);
lean_dec(v_snd_4280_);
v_a_4338_ = lean_ctor_get(v___x_4324_, 0);
v_isSharedCheck_4345_ = !lean_is_exclusive(v___x_4324_);
if (v_isSharedCheck_4345_ == 0)
{
v___x_4340_ = v___x_4324_;
v_isShared_4341_ = v_isSharedCheck_4345_;
goto v_resetjp_4339_;
}
else
{
lean_inc(v_a_4338_);
lean_dec(v___x_4324_);
v___x_4340_ = lean_box(0);
v_isShared_4341_ = v_isSharedCheck_4345_;
goto v_resetjp_4339_;
}
v_resetjp_4339_:
{
lean_object* v___x_4343_; 
if (v_isShared_4341_ == 0)
{
v___x_4343_ = v___x_4340_;
goto v_reusejp_4342_;
}
else
{
lean_object* v_reuseFailAlloc_4344_; 
v_reuseFailAlloc_4344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4344_, 0, v_a_4338_);
v___x_4343_ = v_reuseFailAlloc_4344_;
goto v_reusejp_4342_;
}
v_reusejp_4342_:
{
return v___x_4343_;
}
}
}
}
}
else
{
lean_object* v_a_4346_; lean_object* v___x_4348_; uint8_t v_isShared_4349_; uint8_t v_isSharedCheck_4353_; 
lean_del_object(v___x_4282_);
lean_dec(v_snd_4280_);
lean_dec_ref(v_G_4242_);
lean_dec(v___f_4238_);
lean_dec_ref(v_toMonadRef_4237_);
lean_dec_ref(v___x_4236_);
lean_dec_ref(v___x_4235_);
lean_dec(v___x_4234_);
v_a_4346_ = lean_ctor_get(v___x_4285_, 0);
v_isSharedCheck_4353_ = !lean_is_exclusive(v___x_4285_);
if (v_isSharedCheck_4353_ == 0)
{
v___x_4348_ = v___x_4285_;
v_isShared_4349_ = v_isSharedCheck_4353_;
goto v_resetjp_4347_;
}
else
{
lean_inc(v_a_4346_);
lean_dec(v___x_4285_);
v___x_4348_ = lean_box(0);
v_isShared_4349_ = v_isSharedCheck_4353_;
goto v_resetjp_4347_;
}
v_resetjp_4347_:
{
lean_object* v___x_4351_; 
if (v_isShared_4349_ == 0)
{
v___x_4351_ = v___x_4348_;
goto v_reusejp_4350_;
}
else
{
lean_object* v_reuseFailAlloc_4352_; 
v_reuseFailAlloc_4352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4352_, 0, v_a_4346_);
v___x_4351_ = v_reuseFailAlloc_4352_;
goto v_reusejp_4350_;
}
v_reusejp_4350_:
{
return v___x_4351_;
}
}
}
}
}
v___jp_4255_:
{
if (lean_obj_tag(v___y_4256_) == 0)
{
lean_object* v_a_4257_; lean_object* v___x_4259_; uint8_t v_isShared_4260_; uint8_t v_isSharedCheck_4269_; 
v_a_4257_ = lean_ctor_get(v___y_4256_, 0);
v_isSharedCheck_4269_ = !lean_is_exclusive(v___y_4256_);
if (v_isSharedCheck_4269_ == 0)
{
v___x_4259_ = v___y_4256_;
v_isShared_4260_ = v_isSharedCheck_4269_;
goto v_resetjp_4258_;
}
else
{
lean_inc(v_a_4257_);
lean_dec(v___y_4256_);
v___x_4259_ = lean_box(0);
v_isShared_4260_ = v_isSharedCheck_4269_;
goto v_resetjp_4258_;
}
v_resetjp_4258_:
{
if (lean_obj_tag(v_a_4257_) == 0)
{
lean_object* v_a_4261_; lean_object* v___x_4263_; 
lean_dec_ref(v_G_4242_);
v_a_4261_ = lean_ctor_get(v_a_4257_, 0);
lean_inc(v_a_4261_);
lean_dec_ref_known(v_a_4257_, 1);
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 0, v_a_4261_);
v___x_4263_ = v___x_4259_;
goto v_reusejp_4262_;
}
else
{
lean_object* v_reuseFailAlloc_4264_; 
v_reuseFailAlloc_4264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4264_, 0, v_a_4261_);
v___x_4263_ = v_reuseFailAlloc_4264_;
goto v_reusejp_4262_;
}
v_reusejp_4262_:
{
return v___x_4263_;
}
}
else
{
lean_object* v_a_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; 
lean_del_object(v___x_4259_);
v_a_4265_ = lean_ctor_get(v_a_4257_, 0);
lean_inc(v_a_4265_);
lean_dec_ref_known(v_a_4257_, 1);
v___x_4266_ = lean_unsigned_to_nat(1u);
v___x_4267_ = lean_nat_add(v_next_4239_, v___x_4266_);
lean_inc(v___y_4253_);
lean_inc_ref(v___y_4252_);
lean_inc(v___y_4251_);
lean_inc_ref(v___y_4250_);
lean_inc(v___y_4249_);
lean_inc_ref(v___y_4248_);
lean_inc(v___y_4247_);
lean_inc_ref(v___y_4246_);
lean_inc(v___y_4245_);
lean_inc(v___y_4244_);
lean_inc_ref(v___y_4243_);
v___x_4268_ = lean_apply_16(v_G_4242_, v___x_4267_, v_a_4265_, lean_box(0), lean_box(0), v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_, v___y_4253_, lean_box(0));
return v___x_4268_;
}
}
}
else
{
lean_object* v_a_4270_; lean_object* v___x_4272_; uint8_t v_isShared_4273_; uint8_t v_isSharedCheck_4277_; 
lean_dec_ref(v_G_4242_);
v_a_4270_ = lean_ctor_get(v___y_4256_, 0);
v_isSharedCheck_4277_ = !lean_is_exclusive(v___y_4256_);
if (v_isSharedCheck_4277_ == 0)
{
v___x_4272_ = v___y_4256_;
v_isShared_4273_ = v_isSharedCheck_4277_;
goto v_resetjp_4271_;
}
else
{
lean_inc(v_a_4270_);
lean_dec(v___y_4256_);
v___x_4272_ = lean_box(0);
v_isShared_4273_ = v_isSharedCheck_4277_;
goto v_resetjp_4271_;
}
v_resetjp_4271_:
{
lean_object* v___x_4275_; 
if (v_isShared_4273_ == 0)
{
v___x_4275_ = v___x_4272_;
goto v_reusejp_4274_;
}
else
{
lean_object* v_reuseFailAlloc_4276_; 
v_reuseFailAlloc_4276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4276_, 0, v_a_4270_);
v___x_4275_ = v_reuseFailAlloc_4276_;
goto v_reusejp_4274_;
}
v_reusejp_4274_:
{
return v___x_4275_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2___boxed(lean_object** _args){
lean_object* v___x_4356_ = _args[0];
lean_object* v_hypotheses_4357_ = _args[1];
lean_object* v_cacheId_4358_ = _args[2];
lean_object* v_methods_4359_ = _args[3];
lean_object* v_config_4360_ = _args[4];
lean_object* v___x_4361_ = _args[5];
lean_object* v___x_4362_ = _args[6];
lean_object* v___x_4363_ = _args[7];
lean_object* v_toMonadRef_4364_ = _args[8];
lean_object* v___f_4365_ = _args[9];
lean_object* v_next_4366_ = _args[10];
lean_object* v_acc_4367_ = _args[11];
lean_object* v_h_4368_ = _args[12];
lean_object* v_G_4369_ = _args[13];
lean_object* v___y_4370_ = _args[14];
lean_object* v___y_4371_ = _args[15];
lean_object* v___y_4372_ = _args[16];
lean_object* v___y_4373_ = _args[17];
lean_object* v___y_4374_ = _args[18];
lean_object* v___y_4375_ = _args[19];
lean_object* v___y_4376_ = _args[20];
lean_object* v___y_4377_ = _args[21];
lean_object* v___y_4378_ = _args[22];
lean_object* v___y_4379_ = _args[23];
lean_object* v___y_4380_ = _args[24];
lean_object* v___y_4381_ = _args[25];
_start:
{
uint8_t v_cacheId_boxed_4382_; lean_object* v_res_4383_; 
v_cacheId_boxed_4382_ = lean_unbox(v_cacheId_4358_);
v_res_4383_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2(v___x_4356_, v_hypotheses_4357_, v_cacheId_boxed_4382_, v_methods_4359_, v_config_4360_, v___x_4361_, v___x_4362_, v___x_4363_, v_toMonadRef_4364_, v___f_4365_, v_next_4366_, v_acc_4367_, v_h_4368_, v_G_4369_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_);
lean_dec(v___y_4380_);
lean_dec_ref(v___y_4379_);
lean_dec(v___y_4378_);
lean_dec_ref(v___y_4377_);
lean_dec(v___y_4376_);
lean_dec_ref(v___y_4375_);
lean_dec(v___y_4374_);
lean_dec_ref(v___y_4373_);
lean_dec(v___y_4372_);
lean_dec(v___y_4371_);
lean_dec_ref(v___y_4370_);
lean_dec(v_next_4366_);
lean_dec_ref(v_methods_4359_);
lean_dec_ref(v_hypotheses_4357_);
lean_dec(v___x_4356_);
return v_res_4383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps(uint8_t v_cacheId_4384_, lean_object* v_methods_4385_, lean_object* v_config_4386_, lean_object* v_a_4387_, lean_object* v_a_4388_, lean_object* v_a_4389_, lean_object* v_a_4390_, lean_object* v_a_4391_, lean_object* v_a_4392_, lean_object* v_a_4393_, lean_object* v_a_4394_, lean_object* v_a_4395_, lean_object* v_a_4396_, lean_object* v_a_4397_){
_start:
{
lean_object* v___x_4399_; lean_object* v_toApplicative_4400_; lean_object* v_toFunctor_4401_; lean_object* v_toSeq_4402_; lean_object* v_toSeqLeft_4403_; lean_object* v_toSeqRight_4404_; lean_object* v___f_4405_; lean_object* v___f_4406_; lean_object* v___f_4407_; lean_object* v___f_4408_; lean_object* v___x_4409_; lean_object* v___f_4410_; lean_object* v___f_4411_; lean_object* v___f_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v_toApplicative_4416_; lean_object* v___x_4418_; uint8_t v_isShared_4419_; uint8_t v_isSharedCheck_4503_; 
v___x_4399_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3);
v_toApplicative_4400_ = lean_ctor_get(v___x_4399_, 0);
v_toFunctor_4401_ = lean_ctor_get(v_toApplicative_4400_, 0);
v_toSeq_4402_ = lean_ctor_get(v_toApplicative_4400_, 2);
v_toSeqLeft_4403_ = lean_ctor_get(v_toApplicative_4400_, 3);
v_toSeqRight_4404_ = lean_ctor_get(v_toApplicative_4400_, 4);
v___f_4405_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4));
v___f_4406_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5));
lean_inc_ref_n(v_toFunctor_4401_, 2);
v___f_4407_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4407_, 0, v_toFunctor_4401_);
v___f_4408_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4408_, 0, v_toFunctor_4401_);
v___x_4409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4409_, 0, v___f_4407_);
lean_ctor_set(v___x_4409_, 1, v___f_4408_);
lean_inc(v_toSeqRight_4404_);
v___f_4410_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4410_, 0, v_toSeqRight_4404_);
lean_inc(v_toSeqLeft_4403_);
v___f_4411_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4411_, 0, v_toSeqLeft_4403_);
lean_inc(v_toSeq_4402_);
v___f_4412_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4412_, 0, v_toSeq_4402_);
v___x_4413_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4413_, 0, v___x_4409_);
lean_ctor_set(v___x_4413_, 1, v___f_4405_);
lean_ctor_set(v___x_4413_, 2, v___f_4412_);
lean_ctor_set(v___x_4413_, 3, v___f_4411_);
lean_ctor_set(v___x_4413_, 4, v___f_4410_);
v___x_4414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4414_, 0, v___x_4413_);
lean_ctor_set(v___x_4414_, 1, v___f_4406_);
v___x_4415_ = l_StateRefT_x27_instMonad___redArg(v___x_4414_);
v_toApplicative_4416_ = lean_ctor_get(v___x_4415_, 0);
v_isSharedCheck_4503_ = !lean_is_exclusive(v___x_4415_);
if (v_isSharedCheck_4503_ == 0)
{
lean_object* v_unused_4504_; 
v_unused_4504_ = lean_ctor_get(v___x_4415_, 1);
lean_dec(v_unused_4504_);
v___x_4418_ = v___x_4415_;
v_isShared_4419_ = v_isSharedCheck_4503_;
goto v_resetjp_4417_;
}
else
{
lean_inc(v_toApplicative_4416_);
lean_dec(v___x_4415_);
v___x_4418_ = lean_box(0);
v_isShared_4419_ = v_isSharedCheck_4503_;
goto v_resetjp_4417_;
}
v_resetjp_4417_:
{
lean_object* v_toFunctor_4420_; lean_object* v_toSeq_4421_; lean_object* v_toSeqLeft_4422_; lean_object* v_toSeqRight_4423_; lean_object* v___x_4425_; uint8_t v_isShared_4426_; uint8_t v_isSharedCheck_4501_; 
v_toFunctor_4420_ = lean_ctor_get(v_toApplicative_4416_, 0);
v_toSeq_4421_ = lean_ctor_get(v_toApplicative_4416_, 2);
v_toSeqLeft_4422_ = lean_ctor_get(v_toApplicative_4416_, 3);
v_toSeqRight_4423_ = lean_ctor_get(v_toApplicative_4416_, 4);
v_isSharedCheck_4501_ = !lean_is_exclusive(v_toApplicative_4416_);
if (v_isSharedCheck_4501_ == 0)
{
lean_object* v_unused_4502_; 
v_unused_4502_ = lean_ctor_get(v_toApplicative_4416_, 1);
lean_dec(v_unused_4502_);
v___x_4425_ = v_toApplicative_4416_;
v_isShared_4426_ = v_isSharedCheck_4501_;
goto v_resetjp_4424_;
}
else
{
lean_inc(v_toSeqRight_4423_);
lean_inc(v_toSeqLeft_4422_);
lean_inc(v_toSeq_4421_);
lean_inc(v_toFunctor_4420_);
lean_dec(v_toApplicative_4416_);
v___x_4425_ = lean_box(0);
v_isShared_4426_ = v_isSharedCheck_4501_;
goto v_resetjp_4424_;
}
v_resetjp_4424_:
{
lean_object* v___f_4427_; lean_object* v___f_4428_; lean_object* v___f_4429_; lean_object* v___f_4430_; lean_object* v___x_4431_; lean_object* v___f_4432_; lean_object* v___f_4433_; lean_object* v___f_4434_; lean_object* v___x_4436_; 
v___f_4427_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6));
v___f_4428_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7));
lean_inc_ref(v_toFunctor_4420_);
v___f_4429_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4429_, 0, v_toFunctor_4420_);
v___f_4430_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4430_, 0, v_toFunctor_4420_);
v___x_4431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4431_, 0, v___f_4429_);
lean_ctor_set(v___x_4431_, 1, v___f_4430_);
v___f_4432_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4432_, 0, v_toSeqRight_4423_);
v___f_4433_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4433_, 0, v_toSeqLeft_4422_);
v___f_4434_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4434_, 0, v_toSeq_4421_);
if (v_isShared_4426_ == 0)
{
lean_ctor_set(v___x_4425_, 4, v___f_4432_);
lean_ctor_set(v___x_4425_, 3, v___f_4433_);
lean_ctor_set(v___x_4425_, 2, v___f_4434_);
lean_ctor_set(v___x_4425_, 1, v___f_4427_);
lean_ctor_set(v___x_4425_, 0, v___x_4431_);
v___x_4436_ = v___x_4425_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4500_; 
v_reuseFailAlloc_4500_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4500_, 0, v___x_4431_);
lean_ctor_set(v_reuseFailAlloc_4500_, 1, v___f_4427_);
lean_ctor_set(v_reuseFailAlloc_4500_, 2, v___f_4434_);
lean_ctor_set(v_reuseFailAlloc_4500_, 3, v___f_4433_);
lean_ctor_set(v_reuseFailAlloc_4500_, 4, v___f_4432_);
v___x_4436_ = v_reuseFailAlloc_4500_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
lean_object* v___x_4438_; 
if (v_isShared_4419_ == 0)
{
lean_ctor_set(v___x_4418_, 1, v___f_4428_);
lean_ctor_set(v___x_4418_, 0, v___x_4436_);
v___x_4438_ = v___x_4418_;
goto v_reusejp_4437_;
}
else
{
lean_object* v_reuseFailAlloc_4499_; 
v_reuseFailAlloc_4499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4499_, 0, v___x_4436_);
lean_ctor_set(v_reuseFailAlloc_4499_, 1, v___f_4428_);
v___x_4438_ = v_reuseFailAlloc_4499_;
goto v_reusejp_4437_;
}
v_reusejp_4437_:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v_toMonadRef_4447_; lean_object* v___f_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v_hypotheses_4451_; lean_object* v___x_4452_; lean_object* v_newHyps_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___f_4457_; lean_object* v___x_4458_; lean_object* v___x_22063__overap_4459_; lean_object* v___x_4460_; 
v___x_4439_ = l_StateRefT_x27_instMonad___redArg(v___x_4438_);
v___x_4440_ = l_ReaderT_instMonad___redArg(v___x_4439_);
v___x_4441_ = l_StateRefT_x27_instMonad___redArg(v___x_4440_);
v___x_4442_ = l_ReaderT_instMonad___redArg(v___x_4441_);
v___x_4443_ = l_ReaderT_instMonad___redArg(v___x_4442_);
v___x_4444_ = l_StateRefT_x27_instMonad___redArg(v___x_4443_);
v___x_4445_ = l_ReaderT_instMonad___redArg(v___x_4444_);
v___x_4446_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toMonadRef_4447_ = lean_ctor_get(v___x_4446_, 0);
v___f_4448_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
v___x_4449_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_4450_ = lean_st_ref_get(v_a_4388_);
v_hypotheses_4451_ = lean_ctor_get(v___x_4450_, 3);
lean_inc_ref(v_hypotheses_4451_);
lean_dec(v___x_4450_);
v___x_4452_ = lean_array_get_size(v_hypotheses_4451_);
v_newHyps_4453_ = lean_mk_empty_array_with_capacity(v___x_4452_);
v___x_4454_ = lean_unsigned_to_nat(0u);
v___x_4455_ = lean_box(0);
v___x_4456_ = lean_box(v_cacheId_4384_);
lean_inc_ref(v_toMonadRef_4447_);
v___f_4457_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__2___boxed), 26, 10);
lean_closure_set(v___f_4457_, 0, v___x_4452_);
lean_closure_set(v___f_4457_, 1, v_hypotheses_4451_);
lean_closure_set(v___f_4457_, 2, v___x_4456_);
lean_closure_set(v___f_4457_, 3, v_methods_4385_);
lean_closure_set(v___f_4457_, 4, v_config_4386_);
lean_closure_set(v___f_4457_, 5, v___x_4455_);
lean_closure_set(v___f_4457_, 6, v___x_4445_);
lean_closure_set(v___f_4457_, 7, v___x_4449_);
lean_closure_set(v___f_4457_, 8, v_toMonadRef_4447_);
lean_closure_set(v___f_4457_, 9, v___f_4448_);
v___x_4458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4458_, 0, v___x_4455_);
lean_ctor_set(v___x_4458_, 1, v_newHyps_4453_);
v___x_22063__overap_4459_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_4457_, v___x_4454_, v___x_4458_, lean_box(0));
lean_inc(v_a_4397_);
lean_inc_ref(v_a_4396_);
lean_inc(v_a_4395_);
lean_inc_ref(v_a_4394_);
lean_inc(v_a_4393_);
lean_inc_ref(v_a_4392_);
lean_inc(v_a_4391_);
lean_inc_ref(v_a_4390_);
lean_inc(v_a_4389_);
lean_inc(v_a_4388_);
lean_inc_ref(v_a_4387_);
v___x_4460_ = lean_apply_12(v___x_22063__overap_4459_, v_a_4387_, v_a_4388_, v_a_4389_, v_a_4390_, v_a_4391_, v_a_4392_, v_a_4393_, v_a_4394_, v_a_4395_, v_a_4396_, v_a_4397_, lean_box(0));
if (lean_obj_tag(v___x_4460_) == 0)
{
lean_object* v_a_4461_; lean_object* v___x_4463_; uint8_t v_isShared_4464_; uint8_t v_isSharedCheck_4490_; 
v_a_4461_ = lean_ctor_get(v___x_4460_, 0);
v_isSharedCheck_4490_ = !lean_is_exclusive(v___x_4460_);
if (v_isSharedCheck_4490_ == 0)
{
v___x_4463_ = v___x_4460_;
v_isShared_4464_ = v_isSharedCheck_4490_;
goto v_resetjp_4462_;
}
else
{
lean_inc(v_a_4461_);
lean_dec(v___x_4460_);
v___x_4463_ = lean_box(0);
v_isShared_4464_ = v_isSharedCheck_4490_;
goto v_resetjp_4462_;
}
v_resetjp_4462_:
{
lean_object* v_fst_4465_; 
v_fst_4465_ = lean_ctor_get(v_a_4461_, 0);
if (lean_obj_tag(v_fst_4465_) == 0)
{
lean_object* v_snd_4466_; lean_object* v___x_4467_; lean_object* v_caches_4468_; lean_object* v_typeAnalysis_4469_; lean_object* v_target_4470_; uint8_t v_didChange_4471_; lean_object* v___x_4473_; uint8_t v_isShared_4474_; uint8_t v_isSharedCheck_4484_; 
v_snd_4466_ = lean_ctor_get(v_a_4461_, 1);
lean_inc(v_snd_4466_);
lean_dec(v_a_4461_);
v___x_4467_ = lean_st_ref_take(v_a_4388_);
v_caches_4468_ = lean_ctor_get(v___x_4467_, 0);
v_typeAnalysis_4469_ = lean_ctor_get(v___x_4467_, 1);
v_target_4470_ = lean_ctor_get(v___x_4467_, 2);
v_didChange_4471_ = lean_ctor_get_uint8(v___x_4467_, sizeof(void*)*4);
v_isSharedCheck_4484_ = !lean_is_exclusive(v___x_4467_);
if (v_isSharedCheck_4484_ == 0)
{
lean_object* v_unused_4485_; 
v_unused_4485_ = lean_ctor_get(v___x_4467_, 3);
lean_dec(v_unused_4485_);
v___x_4473_ = v___x_4467_;
v_isShared_4474_ = v_isSharedCheck_4484_;
goto v_resetjp_4472_;
}
else
{
lean_inc(v_target_4470_);
lean_inc(v_typeAnalysis_4469_);
lean_inc(v_caches_4468_);
lean_dec(v___x_4467_);
v___x_4473_ = lean_box(0);
v_isShared_4474_ = v_isSharedCheck_4484_;
goto v_resetjp_4472_;
}
v_resetjp_4472_:
{
lean_object* v___x_4476_; 
if (v_isShared_4474_ == 0)
{
lean_ctor_set(v___x_4473_, 3, v_snd_4466_);
v___x_4476_ = v___x_4473_;
goto v_reusejp_4475_;
}
else
{
lean_object* v_reuseFailAlloc_4483_; 
v_reuseFailAlloc_4483_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4483_, 0, v_caches_4468_);
lean_ctor_set(v_reuseFailAlloc_4483_, 1, v_typeAnalysis_4469_);
lean_ctor_set(v_reuseFailAlloc_4483_, 2, v_target_4470_);
lean_ctor_set(v_reuseFailAlloc_4483_, 3, v_snd_4466_);
lean_ctor_set_uint8(v_reuseFailAlloc_4483_, sizeof(void*)*4, v_didChange_4471_);
v___x_4476_ = v_reuseFailAlloc_4483_;
goto v_reusejp_4475_;
}
v_reusejp_4475_:
{
lean_object* v___x_4477_; uint8_t v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4481_; 
v___x_4477_ = lean_st_ref_put(v_a_4388_, v___x_4476_);
v___x_4478_ = 0;
v___x_4479_ = lean_box(v___x_4478_);
if (v_isShared_4464_ == 0)
{
lean_ctor_set(v___x_4463_, 0, v___x_4479_);
v___x_4481_ = v___x_4463_;
goto v_reusejp_4480_;
}
else
{
lean_object* v_reuseFailAlloc_4482_; 
v_reuseFailAlloc_4482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4482_, 0, v___x_4479_);
v___x_4481_ = v_reuseFailAlloc_4482_;
goto v_reusejp_4480_;
}
v_reusejp_4480_:
{
return v___x_4481_;
}
}
}
}
else
{
lean_object* v_val_4486_; lean_object* v___x_4488_; 
lean_inc_ref(v_fst_4465_);
lean_dec(v_a_4461_);
v_val_4486_ = lean_ctor_get(v_fst_4465_, 0);
lean_inc(v_val_4486_);
lean_dec_ref_known(v_fst_4465_, 1);
if (v_isShared_4464_ == 0)
{
lean_ctor_set(v___x_4463_, 0, v_val_4486_);
v___x_4488_ = v___x_4463_;
goto v_reusejp_4487_;
}
else
{
lean_object* v_reuseFailAlloc_4489_; 
v_reuseFailAlloc_4489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4489_, 0, v_val_4486_);
v___x_4488_ = v_reuseFailAlloc_4489_;
goto v_reusejp_4487_;
}
v_reusejp_4487_:
{
return v___x_4488_;
}
}
}
}
else
{
lean_object* v_a_4491_; lean_object* v___x_4493_; uint8_t v_isShared_4494_; uint8_t v_isSharedCheck_4498_; 
v_a_4491_ = lean_ctor_get(v___x_4460_, 0);
v_isSharedCheck_4498_ = !lean_is_exclusive(v___x_4460_);
if (v_isSharedCheck_4498_ == 0)
{
v___x_4493_ = v___x_4460_;
v_isShared_4494_ = v_isSharedCheck_4498_;
goto v_resetjp_4492_;
}
else
{
lean_inc(v_a_4491_);
lean_dec(v___x_4460_);
v___x_4493_ = lean_box(0);
v_isShared_4494_ = v_isSharedCheck_4498_;
goto v_resetjp_4492_;
}
v_resetjp_4492_:
{
lean_object* v___x_4496_; 
if (v_isShared_4494_ == 0)
{
v___x_4496_ = v___x_4493_;
goto v_reusejp_4495_;
}
else
{
lean_object* v_reuseFailAlloc_4497_; 
v_reuseFailAlloc_4497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4497_, 0, v_a_4491_);
v___x_4496_ = v_reuseFailAlloc_4497_;
goto v_reusejp_4495_;
}
v_reusejp_4495_:
{
return v___x_4496_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___boxed(lean_object* v_cacheId_4505_, lean_object* v_methods_4506_, lean_object* v_config_4507_, lean_object* v_a_4508_, lean_object* v_a_4509_, lean_object* v_a_4510_, lean_object* v_a_4511_, lean_object* v_a_4512_, lean_object* v_a_4513_, lean_object* v_a_4514_, lean_object* v_a_4515_, lean_object* v_a_4516_, lean_object* v_a_4517_, lean_object* v_a_4518_, lean_object* v_a_4519_){
_start:
{
uint8_t v_cacheId_boxed_4520_; lean_object* v_res_4521_; 
v_cacheId_boxed_4520_ = lean_unbox(v_cacheId_4505_);
v_res_4521_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps(v_cacheId_boxed_4520_, v_methods_4506_, v_config_4507_, v_a_4508_, v_a_4509_, v_a_4510_, v_a_4511_, v_a_4512_, v_a_4513_, v_a_4514_, v_a_4515_, v_a_4516_, v_a_4517_, v_a_4518_);
lean_dec(v_a_4518_);
lean_dec_ref(v_a_4517_);
lean_dec(v_a_4516_);
lean_dec_ref(v_a_4515_);
lean_dec(v_a_4514_);
lean_dec_ref(v_a_4513_);
lean_dec(v_a_4512_);
lean_dec_ref(v_a_4511_);
lean_dec(v_a_4510_);
lean_dec(v_a_4509_);
lean_dec_ref(v_a_4508_);
return v_res_4521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2(lean_object* v___x_4522_, lean_object* v_hypotheses_4523_, uint8_t v_cacheId_4524_, lean_object* v_methods_4525_, lean_object* v_config_4526_, lean_object* v___x_4527_, lean_object* v___x_4528_, lean_object* v___x_4529_, lean_object* v_toMonadRef_4530_, lean_object* v___f_4531_, lean_object* v_next_4532_, lean_object* v_acc_4533_, lean_object* v_h_4534_, lean_object* v_G_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_){
_start:
{
lean_object* v___y_4549_; uint8_t v___x_4571_; 
v___x_4571_ = lean_nat_dec_lt(v_next_4532_, v___x_4522_);
if (v___x_4571_ == 0)
{
lean_object* v___x_4572_; 
lean_dec_ref(v_G_4535_);
lean_dec(v___f_4531_);
lean_dec_ref(v_toMonadRef_4530_);
lean_dec_ref(v___x_4529_);
lean_dec_ref(v___x_4528_);
lean_dec(v___x_4527_);
lean_dec_ref(v_config_4526_);
v___x_4572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4572_, 0, v_acc_4533_);
return v___x_4572_;
}
else
{
lean_object* v_snd_4573_; lean_object* v___x_4575_; uint8_t v_isShared_4576_; uint8_t v_isSharedCheck_4647_; 
v_snd_4573_ = lean_ctor_get(v_acc_4533_, 1);
v_isSharedCheck_4647_ = !lean_is_exclusive(v_acc_4533_);
if (v_isSharedCheck_4647_ == 0)
{
lean_object* v_unused_4648_; 
v_unused_4648_ = lean_ctor_get(v_acc_4533_, 0);
lean_dec(v_unused_4648_);
v___x_4575_ = v_acc_4533_;
v_isShared_4576_ = v_isSharedCheck_4647_;
goto v_resetjp_4574_;
}
else
{
lean_inc(v_snd_4573_);
lean_dec(v_acc_4533_);
v___x_4575_ = lean_box(0);
v_isShared_4576_ = v_isSharedCheck_4647_;
goto v_resetjp_4574_;
}
v_resetjp_4574_:
{
lean_object* v___x_4577_; lean_object* v___x_4578_; 
v___x_4577_ = lean_array_fget_borrowed(v_hypotheses_4523_, v_next_4532_);
lean_inc(v___x_4577_);
v___x_4578_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(v_cacheId_4524_, v_methods_4525_, v_config_4526_, v___x_4577_, v___y_4537_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
if (lean_obj_tag(v___x_4578_) == 0)
{
lean_object* v_a_4579_; lean_object* v_type_4580_; lean_object* v_value_4581_; uint8_t v___x_4582_; 
v_a_4579_ = lean_ctor_get(v___x_4578_, 0);
lean_inc(v_a_4579_);
lean_dec_ref_known(v___x_4578_, 1);
v_type_4580_ = lean_ctor_get(v_a_4579_, 1);
v_value_4581_ = lean_ctor_get(v_a_4579_, 2);
lean_inc_ref(v_type_4580_);
v___x_4582_ = l_Lean_Expr_isFalse(v_type_4580_);
if (v___x_4582_ == 0)
{
lean_object* v_type_4583_; lean_object* v___f_4584_; uint8_t v___x_4614_; 
lean_del_object(v___x_4575_);
v_type_4583_ = lean_ctor_get(v___x_4577_, 1);
lean_inc(v___x_4527_);
lean_inc(v_a_4579_);
lean_inc(v_snd_4573_);
v___f_4584_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0___boxed), 16, 3);
lean_closure_set(v___f_4584_, 0, v_snd_4573_);
lean_closure_set(v___f_4584_, 1, v_a_4579_);
lean_closure_set(v___f_4584_, 2, v___x_4527_);
v___x_4614_ = lean_expr_eqv(v_type_4583_, v_type_4580_);
if (v___x_4614_ == 0)
{
lean_inc_ref(v_type_4580_);
lean_dec(v_a_4579_);
lean_dec(v_snd_4573_);
lean_dec(v___x_4527_);
goto v___jp_4588_;
}
else
{
if (v___x_4582_ == 0)
{
lean_object* v___x_4615_; lean_object* v___x_4616_; 
lean_dec_ref(v___f_4584_);
lean_dec(v___f_4531_);
lean_dec_ref(v_toMonadRef_4530_);
lean_dec_ref(v___x_4529_);
lean_dec_ref(v___x_4528_);
v___x_4615_ = lean_box(0);
v___x_4616_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__0(v_snd_4573_, v_a_4579_, v___x_4527_, v___x_4615_, v___y_4536_, v___y_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
v___y_4549_ = v___x_4616_;
goto v___jp_4548_;
}
else
{
lean_inc_ref(v_type_4580_);
lean_dec(v_a_4579_);
lean_dec(v_snd_4573_);
lean_dec(v___x_4527_);
goto v___jp_4588_;
}
}
v___jp_4585_:
{
lean_object* v___x_4586_; lean_object* v___x_4587_; 
v___x_4586_ = lean_box(0);
v___x_4587_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_4571_, v___f_4584_, v___x_4586_, v___y_4536_, v___y_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
v___y_4549_ = v___x_4587_;
goto v___jp_4548_;
}
v___jp_4588_:
{
lean_object* v_toCold_4589_; lean_object* v_options_4590_; uint8_t v_hasTrace_4591_; 
v_toCold_4589_ = lean_ctor_get(v___y_4545_, 0);
v_options_4590_ = lean_ctor_get(v_toCold_4589_, 2);
v_hasTrace_4591_ = lean_ctor_get_uint8(v_options_4590_, sizeof(void*)*1);
if (v_hasTrace_4591_ == 0)
{
lean_dec_ref(v_type_4580_);
lean_dec(v___f_4531_);
lean_dec_ref(v_toMonadRef_4530_);
lean_dec_ref(v___x_4529_);
lean_dec_ref(v___x_4528_);
goto v___jp_4585_;
}
else
{
lean_object* v_inheritedTraceOptions_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; uint8_t v___x_4595_; 
v_inheritedTraceOptions_4592_ = lean_ctor_get(v_toCold_4589_, 11);
v___x_4593_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_4594_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_4595_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4592_, v_options_4590_, v___x_4594_);
if (v___x_4595_ == 0)
{
lean_dec_ref(v_type_4580_);
lean_dec(v___f_4531_);
lean_dec_ref(v_toMonadRef_4530_);
lean_dec_ref(v___x_4529_);
lean_dec_ref(v___x_4528_);
goto v___jp_4585_;
}
else
{
lean_object* v_type_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_22165__overap_4602_; lean_object* v___x_4603_; 
v_type_4596_ = lean_ctor_get(v___x_4577_, 1);
lean_inc_ref(v_type_4596_);
v___x_4597_ = l_Lean_MessageData_ofExpr(v_type_4596_);
v___x_4598_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
v___x_4599_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4599_, 0, v___x_4597_);
lean_ctor_set(v___x_4599_, 1, v___x_4598_);
v___x_4600_ = l_Lean_MessageData_ofExpr(v_type_4580_);
v___x_4601_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4601_, 0, v___x_4599_);
lean_ctor_set(v___x_4601_, 1, v___x_4600_);
v___x_22165__overap_4602_ = l_Lean_addTrace___redArg(v___x_4528_, v___x_4529_, v_toMonadRef_4530_, v___f_4531_, v___x_4593_, v___x_4601_);
lean_inc(v___y_4546_);
lean_inc_ref(v___y_4545_);
lean_inc(v___y_4544_);
lean_inc_ref(v___y_4543_);
lean_inc(v___y_4542_);
lean_inc_ref(v___y_4541_);
lean_inc(v___y_4540_);
lean_inc_ref(v___y_4539_);
lean_inc(v___y_4538_);
lean_inc(v___y_4537_);
lean_inc_ref(v___y_4536_);
v___x_4603_ = lean_apply_12(v___x_22165__overap_4602_, v___y_4536_, v___y_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_, lean_box(0));
if (lean_obj_tag(v___x_4603_) == 0)
{
lean_object* v_a_4604_; lean_object* v___x_4605_; 
v_a_4604_ = lean_ctor_get(v___x_4603_, 0);
lean_inc(v_a_4604_);
lean_dec_ref_known(v___x_4603_, 1);
v___x_4605_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyps___lam__1(v___x_4571_, v___f_4584_, v_a_4604_, v___y_4536_, v___y_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
v___y_4549_ = v___x_4605_;
goto v___jp_4548_;
}
else
{
lean_object* v_a_4606_; lean_object* v___x_4608_; uint8_t v_isShared_4609_; uint8_t v_isSharedCheck_4613_; 
lean_dec_ref(v___f_4584_);
lean_dec_ref(v_G_4535_);
v_a_4606_ = lean_ctor_get(v___x_4603_, 0);
v_isSharedCheck_4613_ = !lean_is_exclusive(v___x_4603_);
if (v_isSharedCheck_4613_ == 0)
{
v___x_4608_ = v___x_4603_;
v_isShared_4609_ = v_isSharedCheck_4613_;
goto v_resetjp_4607_;
}
else
{
lean_inc(v_a_4606_);
lean_dec(v___x_4603_);
v___x_4608_ = lean_box(0);
v_isShared_4609_ = v_isSharedCheck_4613_;
goto v_resetjp_4607_;
}
v_resetjp_4607_:
{
lean_object* v___x_4611_; 
if (v_isShared_4609_ == 0)
{
v___x_4611_ = v___x_4608_;
goto v_reusejp_4610_;
}
else
{
lean_object* v_reuseFailAlloc_4612_; 
v_reuseFailAlloc_4612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4612_, 0, v_a_4606_);
v___x_4611_ = v_reuseFailAlloc_4612_;
goto v_reusejp_4610_;
}
v_reusejp_4610_:
{
return v___x_4611_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4617_; 
lean_inc_ref(v_value_4581_);
lean_dec(v_a_4579_);
lean_dec_ref(v_G_4535_);
lean_dec(v___f_4531_);
lean_dec_ref(v_toMonadRef_4530_);
lean_dec_ref(v___x_4529_);
lean_dec_ref(v___x_4528_);
lean_dec(v___x_4527_);
v___x_4617_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_4581_, v___y_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
if (lean_obj_tag(v___x_4617_) == 0)
{
lean_object* v___x_4619_; uint8_t v_isShared_4620_; uint8_t v_isSharedCheck_4629_; 
v_isSharedCheck_4629_ = !lean_is_exclusive(v___x_4617_);
if (v_isSharedCheck_4629_ == 0)
{
lean_object* v_unused_4630_; 
v_unused_4630_ = lean_ctor_get(v___x_4617_, 0);
lean_dec(v_unused_4630_);
v___x_4619_ = v___x_4617_;
v_isShared_4620_ = v_isSharedCheck_4629_;
goto v_resetjp_4618_;
}
else
{
lean_dec(v___x_4617_);
v___x_4619_ = lean_box(0);
v_isShared_4620_ = v_isSharedCheck_4629_;
goto v_resetjp_4618_;
}
v_resetjp_4618_:
{
lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4624_; 
v___x_4621_ = lean_box(v___x_4571_);
v___x_4622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4622_, 0, v___x_4621_);
if (v_isShared_4576_ == 0)
{
lean_ctor_set(v___x_4575_, 0, v___x_4622_);
v___x_4624_ = v___x_4575_;
goto v_reusejp_4623_;
}
else
{
lean_object* v_reuseFailAlloc_4628_; 
v_reuseFailAlloc_4628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4628_, 0, v___x_4622_);
lean_ctor_set(v_reuseFailAlloc_4628_, 1, v_snd_4573_);
v___x_4624_ = v_reuseFailAlloc_4628_;
goto v_reusejp_4623_;
}
v_reusejp_4623_:
{
lean_object* v___x_4626_; 
if (v_isShared_4620_ == 0)
{
lean_ctor_set(v___x_4619_, 0, v___x_4624_);
v___x_4626_ = v___x_4619_;
goto v_reusejp_4625_;
}
else
{
lean_object* v_reuseFailAlloc_4627_; 
v_reuseFailAlloc_4627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4627_, 0, v___x_4624_);
v___x_4626_ = v_reuseFailAlloc_4627_;
goto v_reusejp_4625_;
}
v_reusejp_4625_:
{
return v___x_4626_;
}
}
}
}
else
{
lean_object* v_a_4631_; lean_object* v___x_4633_; uint8_t v_isShared_4634_; uint8_t v_isSharedCheck_4638_; 
lean_del_object(v___x_4575_);
lean_dec(v_snd_4573_);
v_a_4631_ = lean_ctor_get(v___x_4617_, 0);
v_isSharedCheck_4638_ = !lean_is_exclusive(v___x_4617_);
if (v_isSharedCheck_4638_ == 0)
{
v___x_4633_ = v___x_4617_;
v_isShared_4634_ = v_isSharedCheck_4638_;
goto v_resetjp_4632_;
}
else
{
lean_inc(v_a_4631_);
lean_dec(v___x_4617_);
v___x_4633_ = lean_box(0);
v_isShared_4634_ = v_isSharedCheck_4638_;
goto v_resetjp_4632_;
}
v_resetjp_4632_:
{
lean_object* v___x_4636_; 
if (v_isShared_4634_ == 0)
{
v___x_4636_ = v___x_4633_;
goto v_reusejp_4635_;
}
else
{
lean_object* v_reuseFailAlloc_4637_; 
v_reuseFailAlloc_4637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4637_, 0, v_a_4631_);
v___x_4636_ = v_reuseFailAlloc_4637_;
goto v_reusejp_4635_;
}
v_reusejp_4635_:
{
return v___x_4636_;
}
}
}
}
}
else
{
lean_object* v_a_4639_; lean_object* v___x_4641_; uint8_t v_isShared_4642_; uint8_t v_isSharedCheck_4646_; 
lean_del_object(v___x_4575_);
lean_dec(v_snd_4573_);
lean_dec_ref(v_G_4535_);
lean_dec(v___f_4531_);
lean_dec_ref(v_toMonadRef_4530_);
lean_dec_ref(v___x_4529_);
lean_dec_ref(v___x_4528_);
lean_dec(v___x_4527_);
v_a_4639_ = lean_ctor_get(v___x_4578_, 0);
v_isSharedCheck_4646_ = !lean_is_exclusive(v___x_4578_);
if (v_isSharedCheck_4646_ == 0)
{
v___x_4641_ = v___x_4578_;
v_isShared_4642_ = v_isSharedCheck_4646_;
goto v_resetjp_4640_;
}
else
{
lean_inc(v_a_4639_);
lean_dec(v___x_4578_);
v___x_4641_ = lean_box(0);
v_isShared_4642_ = v_isSharedCheck_4646_;
goto v_resetjp_4640_;
}
v_resetjp_4640_:
{
lean_object* v___x_4644_; 
if (v_isShared_4642_ == 0)
{
v___x_4644_ = v___x_4641_;
goto v_reusejp_4643_;
}
else
{
lean_object* v_reuseFailAlloc_4645_; 
v_reuseFailAlloc_4645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4645_, 0, v_a_4639_);
v___x_4644_ = v_reuseFailAlloc_4645_;
goto v_reusejp_4643_;
}
v_reusejp_4643_:
{
return v___x_4644_;
}
}
}
}
}
v___jp_4548_:
{
if (lean_obj_tag(v___y_4549_) == 0)
{
lean_object* v_a_4550_; lean_object* v___x_4552_; uint8_t v_isShared_4553_; uint8_t v_isSharedCheck_4562_; 
v_a_4550_ = lean_ctor_get(v___y_4549_, 0);
v_isSharedCheck_4562_ = !lean_is_exclusive(v___y_4549_);
if (v_isSharedCheck_4562_ == 0)
{
v___x_4552_ = v___y_4549_;
v_isShared_4553_ = v_isSharedCheck_4562_;
goto v_resetjp_4551_;
}
else
{
lean_inc(v_a_4550_);
lean_dec(v___y_4549_);
v___x_4552_ = lean_box(0);
v_isShared_4553_ = v_isSharedCheck_4562_;
goto v_resetjp_4551_;
}
v_resetjp_4551_:
{
if (lean_obj_tag(v_a_4550_) == 0)
{
lean_object* v_a_4554_; lean_object* v___x_4556_; 
lean_dec_ref(v_G_4535_);
v_a_4554_ = lean_ctor_get(v_a_4550_, 0);
lean_inc(v_a_4554_);
lean_dec_ref_known(v_a_4550_, 1);
if (v_isShared_4553_ == 0)
{
lean_ctor_set(v___x_4552_, 0, v_a_4554_);
v___x_4556_ = v___x_4552_;
goto v_reusejp_4555_;
}
else
{
lean_object* v_reuseFailAlloc_4557_; 
v_reuseFailAlloc_4557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4557_, 0, v_a_4554_);
v___x_4556_ = v_reuseFailAlloc_4557_;
goto v_reusejp_4555_;
}
v_reusejp_4555_:
{
return v___x_4556_;
}
}
else
{
lean_object* v_a_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; 
lean_del_object(v___x_4552_);
v_a_4558_ = lean_ctor_get(v_a_4550_, 0);
lean_inc(v_a_4558_);
lean_dec_ref_known(v_a_4550_, 1);
v___x_4559_ = lean_unsigned_to_nat(1u);
v___x_4560_ = lean_nat_add(v_next_4532_, v___x_4559_);
lean_inc(v___y_4546_);
lean_inc_ref(v___y_4545_);
lean_inc(v___y_4544_);
lean_inc_ref(v___y_4543_);
lean_inc(v___y_4542_);
lean_inc_ref(v___y_4541_);
lean_inc(v___y_4540_);
lean_inc_ref(v___y_4539_);
lean_inc(v___y_4538_);
lean_inc(v___y_4537_);
lean_inc_ref(v___y_4536_);
v___x_4561_ = lean_apply_16(v_G_4535_, v___x_4560_, v_a_4558_, lean_box(0), lean_box(0), v___y_4536_, v___y_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_, lean_box(0));
return v___x_4561_;
}
}
}
else
{
lean_object* v_a_4563_; lean_object* v___x_4565_; uint8_t v_isShared_4566_; uint8_t v_isSharedCheck_4570_; 
lean_dec_ref(v_G_4535_);
v_a_4563_ = lean_ctor_get(v___y_4549_, 0);
v_isSharedCheck_4570_ = !lean_is_exclusive(v___y_4549_);
if (v_isSharedCheck_4570_ == 0)
{
v___x_4565_ = v___y_4549_;
v_isShared_4566_ = v_isSharedCheck_4570_;
goto v_resetjp_4564_;
}
else
{
lean_inc(v_a_4563_);
lean_dec(v___y_4549_);
v___x_4565_ = lean_box(0);
v_isShared_4566_ = v_isSharedCheck_4570_;
goto v_resetjp_4564_;
}
v_resetjp_4564_:
{
lean_object* v___x_4568_; 
if (v_isShared_4566_ == 0)
{
v___x_4568_ = v___x_4565_;
goto v_reusejp_4567_;
}
else
{
lean_object* v_reuseFailAlloc_4569_; 
v_reuseFailAlloc_4569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4569_, 0, v_a_4563_);
v___x_4568_ = v_reuseFailAlloc_4569_;
goto v_reusejp_4567_;
}
v_reusejp_4567_:
{
return v___x_4568_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2___boxed(lean_object** _args){
lean_object* v___x_4649_ = _args[0];
lean_object* v_hypotheses_4650_ = _args[1];
lean_object* v_cacheId_4651_ = _args[2];
lean_object* v_methods_4652_ = _args[3];
lean_object* v_config_4653_ = _args[4];
lean_object* v___x_4654_ = _args[5];
lean_object* v___x_4655_ = _args[6];
lean_object* v___x_4656_ = _args[7];
lean_object* v_toMonadRef_4657_ = _args[8];
lean_object* v___f_4658_ = _args[9];
lean_object* v_next_4659_ = _args[10];
lean_object* v_acc_4660_ = _args[11];
lean_object* v_h_4661_ = _args[12];
lean_object* v_G_4662_ = _args[13];
lean_object* v___y_4663_ = _args[14];
lean_object* v___y_4664_ = _args[15];
lean_object* v___y_4665_ = _args[16];
lean_object* v___y_4666_ = _args[17];
lean_object* v___y_4667_ = _args[18];
lean_object* v___y_4668_ = _args[19];
lean_object* v___y_4669_ = _args[20];
lean_object* v___y_4670_ = _args[21];
lean_object* v___y_4671_ = _args[22];
lean_object* v___y_4672_ = _args[23];
lean_object* v___y_4673_ = _args[24];
lean_object* v___y_4674_ = _args[25];
_start:
{
uint8_t v_cacheId_boxed_4675_; lean_object* v_res_4676_; 
v_cacheId_boxed_4675_ = lean_unbox(v_cacheId_4651_);
v_res_4676_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2(v___x_4649_, v_hypotheses_4650_, v_cacheId_boxed_4675_, v_methods_4652_, v_config_4653_, v___x_4654_, v___x_4655_, v___x_4656_, v_toMonadRef_4657_, v___f_4658_, v_next_4659_, v_acc_4660_, v_h_4661_, v_G_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_, v___y_4669_, v___y_4670_, v___y_4671_, v___y_4672_, v___y_4673_);
lean_dec(v___y_4673_);
lean_dec_ref(v___y_4672_);
lean_dec(v___y_4671_);
lean_dec_ref(v___y_4670_);
lean_dec(v___y_4669_);
lean_dec_ref(v___y_4668_);
lean_dec(v___y_4667_);
lean_dec_ref(v___y_4666_);
lean_dec(v___y_4665_);
lean_dec(v___y_4664_);
lean_dec_ref(v___y_4663_);
lean_dec(v_next_4659_);
lean_dec_ref(v_methods_4652_);
lean_dec_ref(v_hypotheses_4650_);
lean_dec(v___x_4649_);
return v_res_4676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps(uint8_t v_cacheId_4677_, lean_object* v_methods_4678_, lean_object* v_config_4679_, lean_object* v_a_4680_, lean_object* v_a_4681_, lean_object* v_a_4682_, lean_object* v_a_4683_, lean_object* v_a_4684_, lean_object* v_a_4685_, lean_object* v_a_4686_, lean_object* v_a_4687_, lean_object* v_a_4688_, lean_object* v_a_4689_, lean_object* v_a_4690_){
_start:
{
lean_object* v___x_4692_; lean_object* v_toApplicative_4693_; lean_object* v_toFunctor_4694_; lean_object* v_toSeq_4695_; lean_object* v_toSeqLeft_4696_; lean_object* v_toSeqRight_4697_; lean_object* v___f_4698_; lean_object* v___f_4699_; lean_object* v___f_4700_; lean_object* v___f_4701_; lean_object* v___x_4702_; lean_object* v___f_4703_; lean_object* v___f_4704_; lean_object* v___f_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v_toApplicative_4709_; lean_object* v___x_4711_; uint8_t v_isShared_4712_; uint8_t v_isSharedCheck_4796_; 
v___x_4692_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3);
v_toApplicative_4693_ = lean_ctor_get(v___x_4692_, 0);
v_toFunctor_4694_ = lean_ctor_get(v_toApplicative_4693_, 0);
v_toSeq_4695_ = lean_ctor_get(v_toApplicative_4693_, 2);
v_toSeqLeft_4696_ = lean_ctor_get(v_toApplicative_4693_, 3);
v_toSeqRight_4697_ = lean_ctor_get(v_toApplicative_4693_, 4);
v___f_4698_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4));
v___f_4699_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5));
lean_inc_ref_n(v_toFunctor_4694_, 2);
v___f_4700_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4700_, 0, v_toFunctor_4694_);
v___f_4701_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4701_, 0, v_toFunctor_4694_);
v___x_4702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4702_, 0, v___f_4700_);
lean_ctor_set(v___x_4702_, 1, v___f_4701_);
lean_inc(v_toSeqRight_4697_);
v___f_4703_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4703_, 0, v_toSeqRight_4697_);
lean_inc(v_toSeqLeft_4696_);
v___f_4704_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4704_, 0, v_toSeqLeft_4696_);
lean_inc(v_toSeq_4695_);
v___f_4705_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4705_, 0, v_toSeq_4695_);
v___x_4706_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4706_, 0, v___x_4702_);
lean_ctor_set(v___x_4706_, 1, v___f_4698_);
lean_ctor_set(v___x_4706_, 2, v___f_4705_);
lean_ctor_set(v___x_4706_, 3, v___f_4704_);
lean_ctor_set(v___x_4706_, 4, v___f_4703_);
v___x_4707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4707_, 0, v___x_4706_);
lean_ctor_set(v___x_4707_, 1, v___f_4699_);
v___x_4708_ = l_StateRefT_x27_instMonad___redArg(v___x_4707_);
v_toApplicative_4709_ = lean_ctor_get(v___x_4708_, 0);
v_isSharedCheck_4796_ = !lean_is_exclusive(v___x_4708_);
if (v_isSharedCheck_4796_ == 0)
{
lean_object* v_unused_4797_; 
v_unused_4797_ = lean_ctor_get(v___x_4708_, 1);
lean_dec(v_unused_4797_);
v___x_4711_ = v___x_4708_;
v_isShared_4712_ = v_isSharedCheck_4796_;
goto v_resetjp_4710_;
}
else
{
lean_inc(v_toApplicative_4709_);
lean_dec(v___x_4708_);
v___x_4711_ = lean_box(0);
v_isShared_4712_ = v_isSharedCheck_4796_;
goto v_resetjp_4710_;
}
v_resetjp_4710_:
{
lean_object* v_toFunctor_4713_; lean_object* v_toSeq_4714_; lean_object* v_toSeqLeft_4715_; lean_object* v_toSeqRight_4716_; lean_object* v___x_4718_; uint8_t v_isShared_4719_; uint8_t v_isSharedCheck_4794_; 
v_toFunctor_4713_ = lean_ctor_get(v_toApplicative_4709_, 0);
v_toSeq_4714_ = lean_ctor_get(v_toApplicative_4709_, 2);
v_toSeqLeft_4715_ = lean_ctor_get(v_toApplicative_4709_, 3);
v_toSeqRight_4716_ = lean_ctor_get(v_toApplicative_4709_, 4);
v_isSharedCheck_4794_ = !lean_is_exclusive(v_toApplicative_4709_);
if (v_isSharedCheck_4794_ == 0)
{
lean_object* v_unused_4795_; 
v_unused_4795_ = lean_ctor_get(v_toApplicative_4709_, 1);
lean_dec(v_unused_4795_);
v___x_4718_ = v_toApplicative_4709_;
v_isShared_4719_ = v_isSharedCheck_4794_;
goto v_resetjp_4717_;
}
else
{
lean_inc(v_toSeqRight_4716_);
lean_inc(v_toSeqLeft_4715_);
lean_inc(v_toSeq_4714_);
lean_inc(v_toFunctor_4713_);
lean_dec(v_toApplicative_4709_);
v___x_4718_ = lean_box(0);
v_isShared_4719_ = v_isSharedCheck_4794_;
goto v_resetjp_4717_;
}
v_resetjp_4717_:
{
lean_object* v___f_4720_; lean_object* v___f_4721_; lean_object* v___f_4722_; lean_object* v___f_4723_; lean_object* v___x_4724_; lean_object* v___f_4725_; lean_object* v___f_4726_; lean_object* v___f_4727_; lean_object* v___x_4729_; 
v___f_4720_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6));
v___f_4721_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7));
lean_inc_ref(v_toFunctor_4713_);
v___f_4722_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4722_, 0, v_toFunctor_4713_);
v___f_4723_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4723_, 0, v_toFunctor_4713_);
v___x_4724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4724_, 0, v___f_4722_);
lean_ctor_set(v___x_4724_, 1, v___f_4723_);
v___f_4725_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4725_, 0, v_toSeqRight_4716_);
v___f_4726_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4726_, 0, v_toSeqLeft_4715_);
v___f_4727_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4727_, 0, v_toSeq_4714_);
if (v_isShared_4719_ == 0)
{
lean_ctor_set(v___x_4718_, 4, v___f_4725_);
lean_ctor_set(v___x_4718_, 3, v___f_4726_);
lean_ctor_set(v___x_4718_, 2, v___f_4727_);
lean_ctor_set(v___x_4718_, 1, v___f_4720_);
lean_ctor_set(v___x_4718_, 0, v___x_4724_);
v___x_4729_ = v___x_4718_;
goto v_reusejp_4728_;
}
else
{
lean_object* v_reuseFailAlloc_4793_; 
v_reuseFailAlloc_4793_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4793_, 0, v___x_4724_);
lean_ctor_set(v_reuseFailAlloc_4793_, 1, v___f_4720_);
lean_ctor_set(v_reuseFailAlloc_4793_, 2, v___f_4727_);
lean_ctor_set(v_reuseFailAlloc_4793_, 3, v___f_4726_);
lean_ctor_set(v_reuseFailAlloc_4793_, 4, v___f_4725_);
v___x_4729_ = v_reuseFailAlloc_4793_;
goto v_reusejp_4728_;
}
v_reusejp_4728_:
{
lean_object* v___x_4731_; 
if (v_isShared_4712_ == 0)
{
lean_ctor_set(v___x_4711_, 1, v___f_4721_);
lean_ctor_set(v___x_4711_, 0, v___x_4729_);
v___x_4731_ = v___x_4711_;
goto v_reusejp_4730_;
}
else
{
lean_object* v_reuseFailAlloc_4792_; 
v_reuseFailAlloc_4792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4792_, 0, v___x_4729_);
lean_ctor_set(v_reuseFailAlloc_4792_, 1, v___f_4721_);
v___x_4731_ = v_reuseFailAlloc_4792_;
goto v_reusejp_4730_;
}
v_reusejp_4730_:
{
lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v_toMonadRef_4740_; lean_object* v___f_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v_hypotheses_4744_; lean_object* v___x_4745_; lean_object* v_newHyps_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___f_4750_; lean_object* v___x_4751_; lean_object* v___x_22063__overap_4752_; lean_object* v___x_4753_; 
v___x_4732_ = l_StateRefT_x27_instMonad___redArg(v___x_4731_);
v___x_4733_ = l_ReaderT_instMonad___redArg(v___x_4732_);
v___x_4734_ = l_StateRefT_x27_instMonad___redArg(v___x_4733_);
v___x_4735_ = l_ReaderT_instMonad___redArg(v___x_4734_);
v___x_4736_ = l_ReaderT_instMonad___redArg(v___x_4735_);
v___x_4737_ = l_StateRefT_x27_instMonad___redArg(v___x_4736_);
v___x_4738_ = l_ReaderT_instMonad___redArg(v___x_4737_);
v___x_4739_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toMonadRef_4740_ = lean_ctor_get(v___x_4739_, 0);
v___f_4741_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
v___x_4742_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_4743_ = lean_st_ref_get(v_a_4681_);
v_hypotheses_4744_ = lean_ctor_get(v___x_4743_, 3);
lean_inc_ref(v_hypotheses_4744_);
lean_dec(v___x_4743_);
v___x_4745_ = lean_array_get_size(v_hypotheses_4744_);
v_newHyps_4746_ = lean_mk_empty_array_with_capacity(v___x_4745_);
v___x_4747_ = lean_unsigned_to_nat(0u);
v___x_4748_ = lean_box(0);
v___x_4749_ = lean_box(v_cacheId_4677_);
lean_inc_ref(v_toMonadRef_4740_);
v___f_4750_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___lam__2___boxed), 26, 10);
lean_closure_set(v___f_4750_, 0, v___x_4745_);
lean_closure_set(v___f_4750_, 1, v_hypotheses_4744_);
lean_closure_set(v___f_4750_, 2, v___x_4749_);
lean_closure_set(v___f_4750_, 3, v_methods_4678_);
lean_closure_set(v___f_4750_, 4, v_config_4679_);
lean_closure_set(v___f_4750_, 5, v___x_4748_);
lean_closure_set(v___f_4750_, 6, v___x_4738_);
lean_closure_set(v___f_4750_, 7, v___x_4742_);
lean_closure_set(v___f_4750_, 8, v_toMonadRef_4740_);
lean_closure_set(v___f_4750_, 9, v___f_4741_);
v___x_4751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4751_, 0, v___x_4748_);
lean_ctor_set(v___x_4751_, 1, v_newHyps_4746_);
v___x_22063__overap_4752_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_4750_, v___x_4747_, v___x_4751_, lean_box(0));
lean_inc(v_a_4690_);
lean_inc_ref(v_a_4689_);
lean_inc(v_a_4688_);
lean_inc_ref(v_a_4687_);
lean_inc(v_a_4686_);
lean_inc_ref(v_a_4685_);
lean_inc(v_a_4684_);
lean_inc_ref(v_a_4683_);
lean_inc(v_a_4682_);
lean_inc(v_a_4681_);
lean_inc_ref(v_a_4680_);
v___x_4753_ = lean_apply_12(v___x_22063__overap_4752_, v_a_4680_, v_a_4681_, v_a_4682_, v_a_4683_, v_a_4684_, v_a_4685_, v_a_4686_, v_a_4687_, v_a_4688_, v_a_4689_, v_a_4690_, lean_box(0));
if (lean_obj_tag(v___x_4753_) == 0)
{
lean_object* v_a_4754_; lean_object* v___x_4756_; uint8_t v_isShared_4757_; uint8_t v_isSharedCheck_4783_; 
v_a_4754_ = lean_ctor_get(v___x_4753_, 0);
v_isSharedCheck_4783_ = !lean_is_exclusive(v___x_4753_);
if (v_isSharedCheck_4783_ == 0)
{
v___x_4756_ = v___x_4753_;
v_isShared_4757_ = v_isSharedCheck_4783_;
goto v_resetjp_4755_;
}
else
{
lean_inc(v_a_4754_);
lean_dec(v___x_4753_);
v___x_4756_ = lean_box(0);
v_isShared_4757_ = v_isSharedCheck_4783_;
goto v_resetjp_4755_;
}
v_resetjp_4755_:
{
lean_object* v_fst_4758_; 
v_fst_4758_ = lean_ctor_get(v_a_4754_, 0);
if (lean_obj_tag(v_fst_4758_) == 0)
{
lean_object* v_snd_4759_; lean_object* v___x_4760_; lean_object* v_caches_4761_; lean_object* v_typeAnalysis_4762_; lean_object* v_target_4763_; uint8_t v_didChange_4764_; lean_object* v___x_4766_; uint8_t v_isShared_4767_; uint8_t v_isSharedCheck_4777_; 
v_snd_4759_ = lean_ctor_get(v_a_4754_, 1);
lean_inc(v_snd_4759_);
lean_dec(v_a_4754_);
v___x_4760_ = lean_st_ref_take(v_a_4681_);
v_caches_4761_ = lean_ctor_get(v___x_4760_, 0);
v_typeAnalysis_4762_ = lean_ctor_get(v___x_4760_, 1);
v_target_4763_ = lean_ctor_get(v___x_4760_, 2);
v_didChange_4764_ = lean_ctor_get_uint8(v___x_4760_, sizeof(void*)*4);
v_isSharedCheck_4777_ = !lean_is_exclusive(v___x_4760_);
if (v_isSharedCheck_4777_ == 0)
{
lean_object* v_unused_4778_; 
v_unused_4778_ = lean_ctor_get(v___x_4760_, 3);
lean_dec(v_unused_4778_);
v___x_4766_ = v___x_4760_;
v_isShared_4767_ = v_isSharedCheck_4777_;
goto v_resetjp_4765_;
}
else
{
lean_inc(v_target_4763_);
lean_inc(v_typeAnalysis_4762_);
lean_inc(v_caches_4761_);
lean_dec(v___x_4760_);
v___x_4766_ = lean_box(0);
v_isShared_4767_ = v_isSharedCheck_4777_;
goto v_resetjp_4765_;
}
v_resetjp_4765_:
{
lean_object* v___x_4769_; 
if (v_isShared_4767_ == 0)
{
lean_ctor_set(v___x_4766_, 3, v_snd_4759_);
v___x_4769_ = v___x_4766_;
goto v_reusejp_4768_;
}
else
{
lean_object* v_reuseFailAlloc_4776_; 
v_reuseFailAlloc_4776_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4776_, 0, v_caches_4761_);
lean_ctor_set(v_reuseFailAlloc_4776_, 1, v_typeAnalysis_4762_);
lean_ctor_set(v_reuseFailAlloc_4776_, 2, v_target_4763_);
lean_ctor_set(v_reuseFailAlloc_4776_, 3, v_snd_4759_);
lean_ctor_set_uint8(v_reuseFailAlloc_4776_, sizeof(void*)*4, v_didChange_4764_);
v___x_4769_ = v_reuseFailAlloc_4776_;
goto v_reusejp_4768_;
}
v_reusejp_4768_:
{
lean_object* v___x_4770_; uint8_t v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4774_; 
v___x_4770_ = lean_st_ref_put(v_a_4681_, v___x_4769_);
v___x_4771_ = 0;
v___x_4772_ = lean_box(v___x_4771_);
if (v_isShared_4757_ == 0)
{
lean_ctor_set(v___x_4756_, 0, v___x_4772_);
v___x_4774_ = v___x_4756_;
goto v_reusejp_4773_;
}
else
{
lean_object* v_reuseFailAlloc_4775_; 
v_reuseFailAlloc_4775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4775_, 0, v___x_4772_);
v___x_4774_ = v_reuseFailAlloc_4775_;
goto v_reusejp_4773_;
}
v_reusejp_4773_:
{
return v___x_4774_;
}
}
}
}
else
{
lean_object* v_val_4779_; lean_object* v___x_4781_; 
lean_inc_ref(v_fst_4758_);
lean_dec(v_a_4754_);
v_val_4779_ = lean_ctor_get(v_fst_4758_, 0);
lean_inc(v_val_4779_);
lean_dec_ref_known(v_fst_4758_, 1);
if (v_isShared_4757_ == 0)
{
lean_ctor_set(v___x_4756_, 0, v_val_4779_);
v___x_4781_ = v___x_4756_;
goto v_reusejp_4780_;
}
else
{
lean_object* v_reuseFailAlloc_4782_; 
v_reuseFailAlloc_4782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4782_, 0, v_val_4779_);
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
lean_object* v_a_4784_; lean_object* v___x_4786_; uint8_t v_isShared_4787_; uint8_t v_isSharedCheck_4791_; 
v_a_4784_ = lean_ctor_get(v___x_4753_, 0);
v_isSharedCheck_4791_ = !lean_is_exclusive(v___x_4753_);
if (v_isSharedCheck_4791_ == 0)
{
v___x_4786_ = v___x_4753_;
v_isShared_4787_ = v_isSharedCheck_4791_;
goto v_resetjp_4785_;
}
else
{
lean_inc(v_a_4784_);
lean_dec(v___x_4753_);
v___x_4786_ = lean_box(0);
v_isShared_4787_ = v_isSharedCheck_4791_;
goto v_resetjp_4785_;
}
v_resetjp_4785_:
{
lean_object* v___x_4789_; 
if (v_isShared_4787_ == 0)
{
v___x_4789_ = v___x_4786_;
goto v_reusejp_4788_;
}
else
{
lean_object* v_reuseFailAlloc_4790_; 
v_reuseFailAlloc_4790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4790_, 0, v_a_4784_);
v___x_4789_ = v_reuseFailAlloc_4790_;
goto v_reusejp_4788_;
}
v_reusejp_4788_:
{
return v___x_4789_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps___boxed(lean_object* v_cacheId_4798_, lean_object* v_methods_4799_, lean_object* v_config_4800_, lean_object* v_a_4801_, lean_object* v_a_4802_, lean_object* v_a_4803_, lean_object* v_a_4804_, lean_object* v_a_4805_, lean_object* v_a_4806_, lean_object* v_a_4807_, lean_object* v_a_4808_, lean_object* v_a_4809_, lean_object* v_a_4810_, lean_object* v_a_4811_, lean_object* v_a_4812_){
_start:
{
uint8_t v_cacheId_boxed_4813_; lean_object* v_res_4814_; 
v_cacheId_boxed_4813_ = lean_unbox(v_cacheId_4798_);
v_res_4814_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyps(v_cacheId_boxed_4813_, v_methods_4799_, v_config_4800_, v_a_4801_, v_a_4802_, v_a_4803_, v_a_4804_, v_a_4805_, v_a_4806_, v_a_4807_, v_a_4808_, v_a_4809_, v_a_4810_, v_a_4811_);
lean_dec(v_a_4811_);
lean_dec_ref(v_a_4810_);
lean_dec(v_a_4809_);
lean_dec_ref(v_a_4808_);
lean_dec(v_a_4807_);
lean_dec_ref(v_a_4806_);
lean_dec(v_a_4805_);
lean_dec_ref(v_a_4804_);
lean_dec(v_a_4803_);
lean_dec(v_a_4802_);
lean_dec_ref(v_a_4801_);
return v_res_4814_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(lean_object* v_msgData_4815_, lean_object* v___y_4816_, lean_object* v___y_4817_, lean_object* v___y_4818_, lean_object* v___y_4819_){
_start:
{
lean_object* v___x_4821_; lean_object* v_env_4822_; lean_object* v___x_4823_; lean_object* v_toCold_4824_; lean_object* v_mctx_4825_; lean_object* v_lctx_4826_; lean_object* v_options_4827_; lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; 
v___x_4821_ = lean_st_ref_get(v___y_4819_);
v_env_4822_ = lean_ctor_get(v___x_4821_, 0);
lean_inc_ref(v_env_4822_);
lean_dec(v___x_4821_);
v___x_4823_ = lean_st_ref_get(v___y_4817_);
v_toCold_4824_ = lean_ctor_get(v___y_4818_, 0);
v_mctx_4825_ = lean_ctor_get(v___x_4823_, 0);
lean_inc_ref(v_mctx_4825_);
lean_dec(v___x_4823_);
v_lctx_4826_ = lean_ctor_get(v___y_4816_, 2);
v_options_4827_ = lean_ctor_get(v_toCold_4824_, 2);
lean_inc_ref(v_options_4827_);
lean_inc_ref(v_lctx_4826_);
v___x_4828_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4828_, 0, v_env_4822_);
lean_ctor_set(v___x_4828_, 1, v_mctx_4825_);
lean_ctor_set(v___x_4828_, 2, v_lctx_4826_);
lean_ctor_set(v___x_4828_, 3, v_options_4827_);
v___x_4829_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4829_, 0, v___x_4828_);
lean_ctor_set(v___x_4829_, 1, v_msgData_4815_);
v___x_4830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4830_, 0, v___x_4829_);
return v___x_4830_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0___boxed(lean_object* v_msgData_4831_, lean_object* v___y_4832_, lean_object* v___y_4833_, lean_object* v___y_4834_, lean_object* v___y_4835_, lean_object* v___y_4836_){
_start:
{
lean_object* v_res_4837_; 
v_res_4837_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msgData_4831_, v___y_4832_, v___y_4833_, v___y_4834_, v___y_4835_);
lean_dec(v___y_4835_);
lean_dec_ref(v___y_4834_);
lean_dec(v___y_4833_);
lean_dec_ref(v___y_4832_);
return v_res_4837_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4838_; double v___x_4839_; 
v___x_4838_ = lean_unsigned_to_nat(0u);
v___x_4839_ = lean_float_of_nat(v___x_4838_);
return v___x_4839_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(lean_object* v_cls_4843_, lean_object* v_msg_4844_, lean_object* v___y_4845_, lean_object* v___y_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_){
_start:
{
lean_object* v_ref_4850_; lean_object* v___x_4851_; lean_object* v_a_4852_; lean_object* v___x_4854_; uint8_t v_isShared_4855_; uint8_t v_isSharedCheck_4896_; 
v_ref_4850_ = lean_ctor_get(v___y_4847_, 2);
v___x_4851_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msg_4844_, v___y_4845_, v___y_4846_, v___y_4847_, v___y_4848_);
v_a_4852_ = lean_ctor_get(v___x_4851_, 0);
v_isSharedCheck_4896_ = !lean_is_exclusive(v___x_4851_);
if (v_isSharedCheck_4896_ == 0)
{
v___x_4854_ = v___x_4851_;
v_isShared_4855_ = v_isSharedCheck_4896_;
goto v_resetjp_4853_;
}
else
{
lean_inc(v_a_4852_);
lean_dec(v___x_4851_);
v___x_4854_ = lean_box(0);
v_isShared_4855_ = v_isSharedCheck_4896_;
goto v_resetjp_4853_;
}
v_resetjp_4853_:
{
lean_object* v___x_4856_; lean_object* v_traceState_4857_; lean_object* v_env_4858_; lean_object* v_nextMacroScope_4859_; lean_object* v_ngen_4860_; lean_object* v_auxDeclNGen_4861_; lean_object* v_cache_4862_; lean_object* v_messages_4863_; lean_object* v_infoState_4864_; lean_object* v_snapshotTasks_4865_; lean_object* v___x_4867_; uint8_t v_isShared_4868_; uint8_t v_isSharedCheck_4895_; 
v___x_4856_ = lean_st_ref_take(v___y_4848_);
v_traceState_4857_ = lean_ctor_get(v___x_4856_, 4);
v_env_4858_ = lean_ctor_get(v___x_4856_, 0);
v_nextMacroScope_4859_ = lean_ctor_get(v___x_4856_, 1);
v_ngen_4860_ = lean_ctor_get(v___x_4856_, 2);
v_auxDeclNGen_4861_ = lean_ctor_get(v___x_4856_, 3);
v_cache_4862_ = lean_ctor_get(v___x_4856_, 5);
v_messages_4863_ = lean_ctor_get(v___x_4856_, 6);
v_infoState_4864_ = lean_ctor_get(v___x_4856_, 7);
v_snapshotTasks_4865_ = lean_ctor_get(v___x_4856_, 8);
v_isSharedCheck_4895_ = !lean_is_exclusive(v___x_4856_);
if (v_isSharedCheck_4895_ == 0)
{
v___x_4867_ = v___x_4856_;
v_isShared_4868_ = v_isSharedCheck_4895_;
goto v_resetjp_4866_;
}
else
{
lean_inc(v_snapshotTasks_4865_);
lean_inc(v_infoState_4864_);
lean_inc(v_messages_4863_);
lean_inc(v_cache_4862_);
lean_inc(v_traceState_4857_);
lean_inc(v_auxDeclNGen_4861_);
lean_inc(v_ngen_4860_);
lean_inc(v_nextMacroScope_4859_);
lean_inc(v_env_4858_);
lean_dec(v___x_4856_);
v___x_4867_ = lean_box(0);
v_isShared_4868_ = v_isSharedCheck_4895_;
goto v_resetjp_4866_;
}
v_resetjp_4866_:
{
uint64_t v_tid_4869_; lean_object* v_traces_4870_; lean_object* v___x_4872_; uint8_t v_isShared_4873_; uint8_t v_isSharedCheck_4894_; 
v_tid_4869_ = lean_ctor_get_uint64(v_traceState_4857_, sizeof(void*)*1);
v_traces_4870_ = lean_ctor_get(v_traceState_4857_, 0);
v_isSharedCheck_4894_ = !lean_is_exclusive(v_traceState_4857_);
if (v_isSharedCheck_4894_ == 0)
{
v___x_4872_ = v_traceState_4857_;
v_isShared_4873_ = v_isSharedCheck_4894_;
goto v_resetjp_4871_;
}
else
{
lean_inc(v_traces_4870_);
lean_dec(v_traceState_4857_);
v___x_4872_ = lean_box(0);
v_isShared_4873_ = v_isSharedCheck_4894_;
goto v_resetjp_4871_;
}
v_resetjp_4871_:
{
lean_object* v___x_4874_; lean_object* v___x_4875_; double v___x_4876_; uint8_t v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4885_; 
v___x_4874_ = lean_box(0);
v___x_4875_ = lean_box(0);
v___x_4876_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0);
v___x_4877_ = 0;
v___x_4878_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_4879_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4879_, 0, v_cls_4843_);
lean_ctor_set(v___x_4879_, 1, v___x_4875_);
lean_ctor_set(v___x_4879_, 2, v___x_4878_);
lean_ctor_set_float(v___x_4879_, sizeof(void*)*3, v___x_4876_);
lean_ctor_set_float(v___x_4879_, sizeof(void*)*3 + 8, v___x_4876_);
lean_ctor_set_uint8(v___x_4879_, sizeof(void*)*3 + 16, v___x_4877_);
v___x_4880_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2));
v___x_4881_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4881_, 0, v___x_4879_);
lean_ctor_set(v___x_4881_, 1, v_a_4852_);
lean_ctor_set(v___x_4881_, 2, v___x_4880_);
lean_inc(v_ref_4850_);
v___x_4882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4882_, 0, v_ref_4850_);
lean_ctor_set(v___x_4882_, 1, v___x_4881_);
v___x_4883_ = l_Lean_PersistentArray_push___redArg(v_traces_4870_, v___x_4882_);
if (v_isShared_4873_ == 0)
{
lean_ctor_set(v___x_4872_, 0, v___x_4883_);
v___x_4885_ = v___x_4872_;
goto v_reusejp_4884_;
}
else
{
lean_object* v_reuseFailAlloc_4893_; 
v_reuseFailAlloc_4893_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4893_, 0, v___x_4883_);
lean_ctor_set_uint64(v_reuseFailAlloc_4893_, sizeof(void*)*1, v_tid_4869_);
v___x_4885_ = v_reuseFailAlloc_4893_;
goto v_reusejp_4884_;
}
v_reusejp_4884_:
{
lean_object* v___x_4887_; 
if (v_isShared_4868_ == 0)
{
lean_ctor_set(v___x_4867_, 4, v___x_4885_);
v___x_4887_ = v___x_4867_;
goto v_reusejp_4886_;
}
else
{
lean_object* v_reuseFailAlloc_4892_; 
v_reuseFailAlloc_4892_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4892_, 0, v_env_4858_);
lean_ctor_set(v_reuseFailAlloc_4892_, 1, v_nextMacroScope_4859_);
lean_ctor_set(v_reuseFailAlloc_4892_, 2, v_ngen_4860_);
lean_ctor_set(v_reuseFailAlloc_4892_, 3, v_auxDeclNGen_4861_);
lean_ctor_set(v_reuseFailAlloc_4892_, 4, v___x_4885_);
lean_ctor_set(v_reuseFailAlloc_4892_, 5, v_cache_4862_);
lean_ctor_set(v_reuseFailAlloc_4892_, 6, v_messages_4863_);
lean_ctor_set(v_reuseFailAlloc_4892_, 7, v_infoState_4864_);
lean_ctor_set(v_reuseFailAlloc_4892_, 8, v_snapshotTasks_4865_);
v___x_4887_ = v_reuseFailAlloc_4892_;
goto v_reusejp_4886_;
}
v_reusejp_4886_:
{
lean_object* v___x_4888_; lean_object* v___x_4890_; 
v___x_4888_ = lean_st_ref_put(v___y_4848_, v___x_4887_);
if (v_isShared_4855_ == 0)
{
lean_ctor_set(v___x_4854_, 0, v___x_4874_);
v___x_4890_ = v___x_4854_;
goto v_reusejp_4889_;
}
else
{
lean_object* v_reuseFailAlloc_4891_; 
v_reuseFailAlloc_4891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4891_, 0, v___x_4874_);
v___x_4890_ = v_reuseFailAlloc_4891_;
goto v_reusejp_4889_;
}
v_reusejp_4889_:
{
return v___x_4890_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___boxed(lean_object* v_cls_4897_, lean_object* v_msg_4898_, lean_object* v___y_4899_, lean_object* v___y_4900_, lean_object* v___y_4901_, lean_object* v___y_4902_, lean_object* v___y_4903_){
_start:
{
lean_object* v_res_4904_; 
v_res_4904_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(v_cls_4897_, v_msg_4898_, v___y_4899_, v___y_4900_, v___y_4901_, v___y_4902_);
lean_dec(v___y_4902_);
lean_dec_ref(v___y_4901_);
lean_dec(v___y_4900_);
lean_dec_ref(v___y_4899_);
return v_res_4904_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(uint8_t v___x_4905_, lean_object* v___f_4906_, lean_object* v_____r_4907_, lean_object* v___y_4908_, lean_object* v___y_4909_, lean_object* v___y_4910_, lean_object* v___y_4911_, lean_object* v___y_4912_, lean_object* v___y_4913_, lean_object* v___y_4914_, lean_object* v___y_4915_, lean_object* v___y_4916_, lean_object* v___y_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_){
_start:
{
lean_object* v___x_4921_; lean_object* v_caches_4922_; lean_object* v_typeAnalysis_4923_; lean_object* v_target_4924_; lean_object* v_hypotheses_4925_; lean_object* v___x_4927_; uint8_t v_isShared_4928_; uint8_t v_isSharedCheck_4935_; 
v___x_4921_ = lean_st_ref_take(v___y_4910_);
v_caches_4922_ = lean_ctor_get(v___x_4921_, 0);
v_typeAnalysis_4923_ = lean_ctor_get(v___x_4921_, 1);
v_target_4924_ = lean_ctor_get(v___x_4921_, 2);
v_hypotheses_4925_ = lean_ctor_get(v___x_4921_, 3);
v_isSharedCheck_4935_ = !lean_is_exclusive(v___x_4921_);
if (v_isSharedCheck_4935_ == 0)
{
v___x_4927_ = v___x_4921_;
v_isShared_4928_ = v_isSharedCheck_4935_;
goto v_resetjp_4926_;
}
else
{
lean_inc(v_hypotheses_4925_);
lean_inc(v_target_4924_);
lean_inc(v_typeAnalysis_4923_);
lean_inc(v_caches_4922_);
lean_dec(v___x_4921_);
v___x_4927_ = lean_box(0);
v_isShared_4928_ = v_isSharedCheck_4935_;
goto v_resetjp_4926_;
}
v_resetjp_4926_:
{
lean_object* v___x_4929_; lean_object* v___x_4931_; 
v___x_4929_ = lean_box(0);
if (v_isShared_4928_ == 0)
{
v___x_4931_ = v___x_4927_;
goto v_reusejp_4930_;
}
else
{
lean_object* v_reuseFailAlloc_4934_; 
v_reuseFailAlloc_4934_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4934_, 0, v_caches_4922_);
lean_ctor_set(v_reuseFailAlloc_4934_, 1, v_typeAnalysis_4923_);
lean_ctor_set(v_reuseFailAlloc_4934_, 2, v_target_4924_);
lean_ctor_set(v_reuseFailAlloc_4934_, 3, v_hypotheses_4925_);
v___x_4931_ = v_reuseFailAlloc_4934_;
goto v_reusejp_4930_;
}
v_reusejp_4930_:
{
lean_object* v___x_4932_; lean_object* v___x_4933_; 
lean_ctor_set_uint8(v___x_4931_, sizeof(void*)*4, v___x_4905_);
v___x_4932_ = lean_st_ref_put(v___y_4910_, v___x_4931_);
lean_inc(v___y_4919_);
lean_inc_ref(v___y_4918_);
lean_inc(v___y_4917_);
lean_inc_ref(v___y_4916_);
lean_inc(v___y_4915_);
lean_inc_ref(v___y_4914_);
lean_inc(v___y_4913_);
lean_inc_ref(v___y_4912_);
lean_inc(v___y_4911_);
lean_inc(v___y_4910_);
lean_inc_ref(v___y_4909_);
lean_inc(v___y_4908_);
v___x_4933_ = lean_apply_14(v___f_4906_, v___x_4929_, v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_, v___y_4912_, v___y_4913_, v___y_4914_, v___y_4915_, v___y_4916_, v___y_4917_, v___y_4918_, v___y_4919_, lean_box(0));
return v___x_4933_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1___boxed(lean_object* v___x_4936_, lean_object* v___f_4937_, lean_object* v_____r_4938_, lean_object* v___y_4939_, lean_object* v___y_4940_, lean_object* v___y_4941_, lean_object* v___y_4942_, lean_object* v___y_4943_, lean_object* v___y_4944_, lean_object* v___y_4945_, lean_object* v___y_4946_, lean_object* v___y_4947_, lean_object* v___y_4948_, lean_object* v___y_4949_, lean_object* v___y_4950_, lean_object* v___y_4951_){
_start:
{
uint8_t v___x_35787__boxed_4952_; lean_object* v_res_4953_; 
v___x_35787__boxed_4952_ = lean_unbox(v___x_4936_);
v_res_4953_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_35787__boxed_4952_, v___f_4937_, v_____r_4938_, v___y_4939_, v___y_4940_, v___y_4941_, v___y_4942_, v___y_4943_, v___y_4944_, v___y_4945_, v___y_4946_, v___y_4947_, v___y_4948_, v___y_4949_, v___y_4950_);
lean_dec(v___y_4950_);
lean_dec_ref(v___y_4949_);
lean_dec(v___y_4948_);
lean_dec_ref(v___y_4947_);
lean_dec(v___y_4946_);
lean_dec_ref(v___y_4945_);
lean_dec(v___y_4944_);
lean_dec_ref(v___y_4943_);
lean_dec(v___y_4942_);
lean_dec(v___y_4941_);
lean_dec_ref(v___y_4940_);
lean_dec(v___y_4939_);
return v_res_4953_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(lean_object* v_snd_4954_, lean_object* v_a_4955_, lean_object* v___x_4956_, lean_object* v_____r_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_, lean_object* v___y_4963_, lean_object* v___y_4964_, lean_object* v___y_4965_, lean_object* v___y_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_){
_start:
{
lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; 
v___x_4971_ = lean_array_push(v_snd_4954_, v_a_4955_);
v___x_4972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4972_, 0, v___x_4956_);
lean_ctor_set(v___x_4972_, 1, v___x_4971_);
v___x_4973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4973_, 0, v___x_4972_);
v___x_4974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4974_, 0, v___x_4973_);
return v___x_4974_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_snd_4975_ = _args[0];
lean_object* v_a_4976_ = _args[1];
lean_object* v___x_4977_ = _args[2];
lean_object* v_____r_4978_ = _args[3];
lean_object* v___y_4979_ = _args[4];
lean_object* v___y_4980_ = _args[5];
lean_object* v___y_4981_ = _args[6];
lean_object* v___y_4982_ = _args[7];
lean_object* v___y_4983_ = _args[8];
lean_object* v___y_4984_ = _args[9];
lean_object* v___y_4985_ = _args[10];
lean_object* v___y_4986_ = _args[11];
lean_object* v___y_4987_ = _args[12];
lean_object* v___y_4988_ = _args[13];
lean_object* v___y_4989_ = _args[14];
lean_object* v___y_4990_ = _args[15];
lean_object* v___y_4991_ = _args[16];
_start:
{
lean_object* v_res_4992_; 
v_res_4992_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(v_snd_4975_, v_a_4976_, v___x_4977_, v_____r_4978_, v___y_4979_, v___y_4980_, v___y_4981_, v___y_4982_, v___y_4983_, v___y_4984_, v___y_4985_, v___y_4986_, v___y_4987_, v___y_4988_, v___y_4989_, v___y_4990_);
lean_dec(v___y_4990_);
lean_dec_ref(v___y_4989_);
lean_dec(v___y_4988_);
lean_dec_ref(v___y_4987_);
lean_dec(v___y_4986_);
lean_dec_ref(v___y_4985_);
lean_dec(v___y_4984_);
lean_dec_ref(v___y_4983_);
lean_dec(v___y_4982_);
lean_dec(v___y_4981_);
lean_dec_ref(v___y_4980_);
lean_dec(v___y_4979_);
return v_res_4992_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(lean_object* v_upperBound_4993_, lean_object* v___x_4994_, lean_object* v_methods_4995_, lean_object* v_config_4996_, lean_object* v_a_4997_, lean_object* v_b_4998_, lean_object* v___y_4999_, lean_object* v___y_5000_, lean_object* v___y_5001_, lean_object* v___y_5002_, lean_object* v___y_5003_, lean_object* v___y_5004_, lean_object* v___y_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_){
_start:
{
lean_object* v___y_5013_; uint8_t v___x_5035_; 
v___x_5035_ = lean_nat_dec_lt(v_a_4997_, v_upperBound_4993_);
if (v___x_5035_ == 0)
{
lean_object* v___x_5036_; 
lean_dec(v_a_4997_);
lean_dec_ref(v_config_4996_);
v___x_5036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5036_, 0, v_b_4998_);
return v___x_5036_;
}
else
{
lean_object* v_snd_5037_; lean_object* v___x_5039_; uint8_t v_isShared_5040_; uint8_t v_isSharedCheck_5136_; 
v_snd_5037_ = lean_ctor_get(v_b_4998_, 1);
v_isSharedCheck_5136_ = !lean_is_exclusive(v_b_4998_);
if (v_isSharedCheck_5136_ == 0)
{
lean_object* v_unused_5137_; 
v_unused_5137_ = lean_ctor_get(v_b_4998_, 0);
lean_dec(v_unused_5137_);
v___x_5039_ = v_b_4998_;
v_isShared_5040_ = v_isSharedCheck_5136_;
goto v_resetjp_5038_;
}
else
{
lean_inc(v_snd_5037_);
lean_dec(v_b_4998_);
v___x_5039_ = lean_box(0);
v_isShared_5040_ = v_isSharedCheck_5136_;
goto v_resetjp_5038_;
}
v_resetjp_5038_:
{
lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v_type_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; 
v___x_5041_ = lean_box(0);
v___x_5042_ = lean_array_fget_borrowed(v___x_4994_, v_a_4997_);
v___x_5043_ = lean_st_ref_take(v___y_4999_);
v___x_5044_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0);
v___x_5045_ = lean_st_ref_put(v___y_4999_, v___x_5044_);
v_type_5046_ = lean_ctor_get(v___x_5042_, 1);
v___x_5047_ = lean_unsigned_to_nat(0u);
v___x_5048_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5048_, 0, v___x_5047_);
lean_ctor_set(v___x_5048_, 1, v___x_5043_);
lean_ctor_set(v___x_5048_, 2, v___x_5044_);
lean_ctor_set(v___x_5048_, 3, v___x_5044_);
lean_inc_ref(v_type_5046_);
v___x_5049_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_5049_, 0, v_type_5046_);
lean_inc_ref(v_config_4996_);
v___x_5050_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v___x_5049_, v_methods_4995_, v_config_4996_, v___x_5048_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_);
if (lean_obj_tag(v___x_5050_) == 0)
{
lean_object* v_a_5051_; lean_object* v_snd_5052_; lean_object* v_fst_5053_; lean_object* v___x_5055_; uint8_t v_isShared_5056_; uint8_t v_isSharedCheck_5127_; 
v_a_5051_ = lean_ctor_get(v___x_5050_, 0);
lean_inc(v_a_5051_);
lean_dec_ref_known(v___x_5050_, 1);
v_snd_5052_ = lean_ctor_get(v_a_5051_, 1);
v_fst_5053_ = lean_ctor_get(v_a_5051_, 0);
v_isSharedCheck_5127_ = !lean_is_exclusive(v_a_5051_);
if (v_isSharedCheck_5127_ == 0)
{
v___x_5055_ = v_a_5051_;
v_isShared_5056_ = v_isSharedCheck_5127_;
goto v_resetjp_5054_;
}
else
{
lean_inc(v_snd_5052_);
lean_inc(v_fst_5053_);
lean_dec(v_a_5051_);
v___x_5055_ = lean_box(0);
v_isShared_5056_ = v_isSharedCheck_5127_;
goto v_resetjp_5054_;
}
v_resetjp_5054_:
{
lean_object* v_persistentCache_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; 
v_persistentCache_5057_ = lean_ctor_get(v_snd_5052_, 1);
lean_inc_ref(v_persistentCache_5057_);
lean_dec(v_snd_5052_);
v___x_5058_ = lean_st_ref_swap(v___y_4999_, v_persistentCache_5057_);
lean_dec(v___x_5058_);
lean_inc(v___x_5042_);
v___x_5059_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applySimpResult___redArg(v___x_5042_, v_fst_5053_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_);
if (lean_obj_tag(v___x_5059_) == 0)
{
lean_object* v_a_5060_; lean_object* v_type_5061_; lean_object* v_value_5062_; uint8_t v___x_5063_; 
v_a_5060_ = lean_ctor_get(v___x_5059_, 0);
lean_inc(v_a_5060_);
lean_dec_ref_known(v___x_5059_, 1);
v_type_5061_ = lean_ctor_get(v_a_5060_, 1);
v_value_5062_ = lean_ctor_get(v_a_5060_, 2);
lean_inc_ref(v_type_5061_);
v___x_5063_ = l_Lean_Expr_isFalse(v_type_5061_);
if (v___x_5063_ == 0)
{
lean_object* v___f_5064_; uint8_t v___x_5094_; 
lean_del_object(v___x_5055_);
lean_inc(v_a_5060_);
lean_inc(v_snd_5037_);
v___f_5064_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0___boxed), 17, 3);
lean_closure_set(v___f_5064_, 0, v_snd_5037_);
lean_closure_set(v___f_5064_, 1, v_a_5060_);
lean_closure_set(v___f_5064_, 2, v___x_5041_);
v___x_5094_ = lean_expr_eqv(v_type_5046_, v_type_5061_);
if (v___x_5094_ == 0)
{
lean_inc_ref(v_type_5061_);
lean_dec(v_a_5060_);
lean_dec(v_snd_5037_);
goto v___jp_5068_;
}
else
{
if (v___x_5063_ == 0)
{
lean_object* v___x_5095_; lean_object* v___x_5096_; 
lean_dec_ref(v___f_5064_);
lean_del_object(v___x_5039_);
v___x_5095_ = lean_box(0);
v___x_5096_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(v_snd_5037_, v_a_5060_, v___x_5041_, v___x_5095_, v___y_4999_, v___y_5000_, v___y_5001_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_);
v___y_5013_ = v___x_5096_;
goto v___jp_5012_;
}
else
{
lean_inc_ref(v_type_5061_);
lean_dec(v_a_5060_);
lean_dec(v_snd_5037_);
goto v___jp_5068_;
}
}
v___jp_5065_:
{
lean_object* v___x_5066_; lean_object* v___x_5067_; 
v___x_5066_ = lean_box(0);
v___x_5067_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_5035_, v___f_5064_, v___x_5066_, v___y_4999_, v___y_5000_, v___y_5001_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_);
v___y_5013_ = v___x_5067_;
goto v___jp_5012_;
}
v___jp_5068_:
{
lean_object* v_toCold_5069_; lean_object* v_options_5070_; uint8_t v_hasTrace_5071_; 
v_toCold_5069_ = lean_ctor_get(v___y_5009_, 0);
v_options_5070_ = lean_ctor_get(v_toCold_5069_, 2);
v_hasTrace_5071_ = lean_ctor_get_uint8(v_options_5070_, sizeof(void*)*1);
if (v_hasTrace_5071_ == 0)
{
lean_dec_ref(v_type_5061_);
lean_del_object(v___x_5039_);
goto v___jp_5065_;
}
else
{
lean_object* v_inheritedTraceOptions_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; uint8_t v___x_5075_; 
v_inheritedTraceOptions_5072_ = lean_ctor_get(v_toCold_5069_, 11);
v___x_5073_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_5074_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_5075_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5072_, v_options_5070_, v___x_5074_);
if (v___x_5075_ == 0)
{
lean_dec_ref(v_type_5061_);
lean_del_object(v___x_5039_);
goto v___jp_5065_;
}
else
{
lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5079_; 
lean_inc_ref(v_type_5046_);
v___x_5076_ = l_Lean_MessageData_ofExpr(v_type_5046_);
v___x_5077_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
if (v_isShared_5040_ == 0)
{
lean_ctor_set_tag(v___x_5039_, 7);
lean_ctor_set(v___x_5039_, 1, v___x_5077_);
lean_ctor_set(v___x_5039_, 0, v___x_5076_);
v___x_5079_ = v___x_5039_;
goto v_reusejp_5078_;
}
else
{
lean_object* v_reuseFailAlloc_5093_; 
v_reuseFailAlloc_5093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5093_, 0, v___x_5076_);
lean_ctor_set(v_reuseFailAlloc_5093_, 1, v___x_5077_);
v___x_5079_ = v_reuseFailAlloc_5093_;
goto v_reusejp_5078_;
}
v_reusejp_5078_:
{
lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; 
v___x_5080_ = l_Lean_MessageData_ofExpr(v_type_5061_);
v___x_5081_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5081_, 0, v___x_5079_);
lean_ctor_set(v___x_5081_, 1, v___x_5080_);
v___x_5082_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(v___x_5073_, v___x_5081_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_);
if (lean_obj_tag(v___x_5082_) == 0)
{
lean_object* v_a_5083_; lean_object* v___x_5084_; 
v_a_5083_ = lean_ctor_get(v___x_5082_, 0);
lean_inc(v_a_5083_);
lean_dec_ref_known(v___x_5082_, 1);
v___x_5084_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_5035_, v___f_5064_, v_a_5083_, v___y_4999_, v___y_5000_, v___y_5001_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_);
v___y_5013_ = v___x_5084_;
goto v___jp_5012_;
}
else
{
lean_object* v_a_5085_; lean_object* v___x_5087_; uint8_t v_isShared_5088_; uint8_t v_isSharedCheck_5092_; 
lean_dec_ref(v___f_5064_);
lean_dec(v_a_4997_);
lean_dec_ref(v_config_4996_);
v_a_5085_ = lean_ctor_get(v___x_5082_, 0);
v_isSharedCheck_5092_ = !lean_is_exclusive(v___x_5082_);
if (v_isSharedCheck_5092_ == 0)
{
v___x_5087_ = v___x_5082_;
v_isShared_5088_ = v_isSharedCheck_5092_;
goto v_resetjp_5086_;
}
else
{
lean_inc(v_a_5085_);
lean_dec(v___x_5082_);
v___x_5087_ = lean_box(0);
v_isShared_5088_ = v_isSharedCheck_5092_;
goto v_resetjp_5086_;
}
v_resetjp_5086_:
{
lean_object* v___x_5090_; 
if (v_isShared_5088_ == 0)
{
v___x_5090_ = v___x_5087_;
goto v_reusejp_5089_;
}
else
{
lean_object* v_reuseFailAlloc_5091_; 
v_reuseFailAlloc_5091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5091_, 0, v_a_5085_);
v___x_5090_ = v_reuseFailAlloc_5091_;
goto v_reusejp_5089_;
}
v_reusejp_5089_:
{
return v___x_5090_;
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
lean_object* v___x_5097_; 
lean_inc_ref(v_value_5062_);
lean_dec(v_a_5060_);
lean_del_object(v___x_5039_);
lean_dec(v_a_4997_);
lean_dec_ref(v_config_4996_);
v___x_5097_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_5062_, v___y_5001_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_);
if (lean_obj_tag(v___x_5097_) == 0)
{
lean_object* v___x_5099_; uint8_t v_isShared_5100_; uint8_t v_isSharedCheck_5109_; 
v_isSharedCheck_5109_ = !lean_is_exclusive(v___x_5097_);
if (v_isSharedCheck_5109_ == 0)
{
lean_object* v_unused_5110_; 
v_unused_5110_ = lean_ctor_get(v___x_5097_, 0);
lean_dec(v_unused_5110_);
v___x_5099_ = v___x_5097_;
v_isShared_5100_ = v_isSharedCheck_5109_;
goto v_resetjp_5098_;
}
else
{
lean_dec(v___x_5097_);
v___x_5099_ = lean_box(0);
v_isShared_5100_ = v_isSharedCheck_5109_;
goto v_resetjp_5098_;
}
v_resetjp_5098_:
{
lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5104_; 
v___x_5101_ = lean_box(v___x_5035_);
v___x_5102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5102_, 0, v___x_5101_);
if (v_isShared_5056_ == 0)
{
lean_ctor_set(v___x_5055_, 1, v_snd_5037_);
lean_ctor_set(v___x_5055_, 0, v___x_5102_);
v___x_5104_ = v___x_5055_;
goto v_reusejp_5103_;
}
else
{
lean_object* v_reuseFailAlloc_5108_; 
v_reuseFailAlloc_5108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5108_, 0, v___x_5102_);
lean_ctor_set(v_reuseFailAlloc_5108_, 1, v_snd_5037_);
v___x_5104_ = v_reuseFailAlloc_5108_;
goto v_reusejp_5103_;
}
v_reusejp_5103_:
{
lean_object* v___x_5106_; 
if (v_isShared_5100_ == 0)
{
lean_ctor_set(v___x_5099_, 0, v___x_5104_);
v___x_5106_ = v___x_5099_;
goto v_reusejp_5105_;
}
else
{
lean_object* v_reuseFailAlloc_5107_; 
v_reuseFailAlloc_5107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5107_, 0, v___x_5104_);
v___x_5106_ = v_reuseFailAlloc_5107_;
goto v_reusejp_5105_;
}
v_reusejp_5105_:
{
return v___x_5106_;
}
}
}
}
else
{
lean_object* v_a_5111_; lean_object* v___x_5113_; uint8_t v_isShared_5114_; uint8_t v_isSharedCheck_5118_; 
lean_del_object(v___x_5055_);
lean_dec(v_snd_5037_);
v_a_5111_ = lean_ctor_get(v___x_5097_, 0);
v_isSharedCheck_5118_ = !lean_is_exclusive(v___x_5097_);
if (v_isSharedCheck_5118_ == 0)
{
v___x_5113_ = v___x_5097_;
v_isShared_5114_ = v_isSharedCheck_5118_;
goto v_resetjp_5112_;
}
else
{
lean_inc(v_a_5111_);
lean_dec(v___x_5097_);
v___x_5113_ = lean_box(0);
v_isShared_5114_ = v_isSharedCheck_5118_;
goto v_resetjp_5112_;
}
v_resetjp_5112_:
{
lean_object* v___x_5116_; 
if (v_isShared_5114_ == 0)
{
v___x_5116_ = v___x_5113_;
goto v_reusejp_5115_;
}
else
{
lean_object* v_reuseFailAlloc_5117_; 
v_reuseFailAlloc_5117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5117_, 0, v_a_5111_);
v___x_5116_ = v_reuseFailAlloc_5117_;
goto v_reusejp_5115_;
}
v_reusejp_5115_:
{
return v___x_5116_;
}
}
}
}
}
else
{
lean_object* v_a_5119_; lean_object* v___x_5121_; uint8_t v_isShared_5122_; uint8_t v_isSharedCheck_5126_; 
lean_del_object(v___x_5055_);
lean_del_object(v___x_5039_);
lean_dec(v_snd_5037_);
lean_dec(v_a_4997_);
lean_dec_ref(v_config_4996_);
v_a_5119_ = lean_ctor_get(v___x_5059_, 0);
v_isSharedCheck_5126_ = !lean_is_exclusive(v___x_5059_);
if (v_isSharedCheck_5126_ == 0)
{
v___x_5121_ = v___x_5059_;
v_isShared_5122_ = v_isSharedCheck_5126_;
goto v_resetjp_5120_;
}
else
{
lean_inc(v_a_5119_);
lean_dec(v___x_5059_);
v___x_5121_ = lean_box(0);
v_isShared_5122_ = v_isSharedCheck_5126_;
goto v_resetjp_5120_;
}
v_resetjp_5120_:
{
lean_object* v___x_5124_; 
if (v_isShared_5122_ == 0)
{
v___x_5124_ = v___x_5121_;
goto v_reusejp_5123_;
}
else
{
lean_object* v_reuseFailAlloc_5125_; 
v_reuseFailAlloc_5125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5125_, 0, v_a_5119_);
v___x_5124_ = v_reuseFailAlloc_5125_;
goto v_reusejp_5123_;
}
v_reusejp_5123_:
{
return v___x_5124_;
}
}
}
}
}
else
{
lean_object* v_a_5128_; lean_object* v___x_5130_; uint8_t v_isShared_5131_; uint8_t v_isSharedCheck_5135_; 
lean_del_object(v___x_5039_);
lean_dec(v_snd_5037_);
lean_dec(v_a_4997_);
lean_dec_ref(v_config_4996_);
v_a_5128_ = lean_ctor_get(v___x_5050_, 0);
v_isSharedCheck_5135_ = !lean_is_exclusive(v___x_5050_);
if (v_isSharedCheck_5135_ == 0)
{
v___x_5130_ = v___x_5050_;
v_isShared_5131_ = v_isSharedCheck_5135_;
goto v_resetjp_5129_;
}
else
{
lean_inc(v_a_5128_);
lean_dec(v___x_5050_);
v___x_5130_ = lean_box(0);
v_isShared_5131_ = v_isSharedCheck_5135_;
goto v_resetjp_5129_;
}
v_resetjp_5129_:
{
lean_object* v___x_5133_; 
if (v_isShared_5131_ == 0)
{
v___x_5133_ = v___x_5130_;
goto v_reusejp_5132_;
}
else
{
lean_object* v_reuseFailAlloc_5134_; 
v_reuseFailAlloc_5134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5134_, 0, v_a_5128_);
v___x_5133_ = v_reuseFailAlloc_5134_;
goto v_reusejp_5132_;
}
v_reusejp_5132_:
{
return v___x_5133_;
}
}
}
}
}
v___jp_5012_:
{
if (lean_obj_tag(v___y_5013_) == 0)
{
lean_object* v_a_5014_; lean_object* v___x_5016_; uint8_t v_isShared_5017_; uint8_t v_isSharedCheck_5026_; 
v_a_5014_ = lean_ctor_get(v___y_5013_, 0);
v_isSharedCheck_5026_ = !lean_is_exclusive(v___y_5013_);
if (v_isSharedCheck_5026_ == 0)
{
v___x_5016_ = v___y_5013_;
v_isShared_5017_ = v_isSharedCheck_5026_;
goto v_resetjp_5015_;
}
else
{
lean_inc(v_a_5014_);
lean_dec(v___y_5013_);
v___x_5016_ = lean_box(0);
v_isShared_5017_ = v_isSharedCheck_5026_;
goto v_resetjp_5015_;
}
v_resetjp_5015_:
{
if (lean_obj_tag(v_a_5014_) == 0)
{
lean_object* v_a_5018_; lean_object* v___x_5020_; 
lean_dec(v_a_4997_);
lean_dec_ref(v_config_4996_);
v_a_5018_ = lean_ctor_get(v_a_5014_, 0);
lean_inc(v_a_5018_);
lean_dec_ref_known(v_a_5014_, 1);
if (v_isShared_5017_ == 0)
{
lean_ctor_set(v___x_5016_, 0, v_a_5018_);
v___x_5020_ = v___x_5016_;
goto v_reusejp_5019_;
}
else
{
lean_object* v_reuseFailAlloc_5021_; 
v_reuseFailAlloc_5021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5021_, 0, v_a_5018_);
v___x_5020_ = v_reuseFailAlloc_5021_;
goto v_reusejp_5019_;
}
v_reusejp_5019_:
{
return v___x_5020_;
}
}
else
{
lean_object* v_a_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; 
lean_del_object(v___x_5016_);
v_a_5022_ = lean_ctor_get(v_a_5014_, 0);
lean_inc(v_a_5022_);
lean_dec_ref_known(v_a_5014_, 1);
v___x_5023_ = lean_unsigned_to_nat(1u);
v___x_5024_ = lean_nat_add(v_a_4997_, v___x_5023_);
lean_dec(v_a_4997_);
v_a_4997_ = v___x_5024_;
v_b_4998_ = v_a_5022_;
goto _start;
}
}
}
else
{
lean_object* v_a_5027_; lean_object* v___x_5029_; uint8_t v_isShared_5030_; uint8_t v_isSharedCheck_5034_; 
lean_dec(v_a_4997_);
lean_dec_ref(v_config_4996_);
v_a_5027_ = lean_ctor_get(v___y_5013_, 0);
v_isSharedCheck_5034_ = !lean_is_exclusive(v___y_5013_);
if (v_isSharedCheck_5034_ == 0)
{
v___x_5029_ = v___y_5013_;
v_isShared_5030_ = v_isSharedCheck_5034_;
goto v_resetjp_5028_;
}
else
{
lean_inc(v_a_5027_);
lean_dec(v___y_5013_);
v___x_5029_ = lean_box(0);
v_isShared_5030_ = v_isSharedCheck_5034_;
goto v_resetjp_5028_;
}
v_resetjp_5028_:
{
lean_object* v___x_5032_; 
if (v_isShared_5030_ == 0)
{
v___x_5032_ = v___x_5029_;
goto v_reusejp_5031_;
}
else
{
lean_object* v_reuseFailAlloc_5033_; 
v_reuseFailAlloc_5033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5033_, 0, v_a_5027_);
v___x_5032_ = v_reuseFailAlloc_5033_;
goto v_reusejp_5031_;
}
v_reusejp_5031_:
{
return v___x_5032_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_5138_ = _args[0];
lean_object* v___x_5139_ = _args[1];
lean_object* v_methods_5140_ = _args[2];
lean_object* v_config_5141_ = _args[3];
lean_object* v_a_5142_ = _args[4];
lean_object* v_b_5143_ = _args[5];
lean_object* v___y_5144_ = _args[6];
lean_object* v___y_5145_ = _args[7];
lean_object* v___y_5146_ = _args[8];
lean_object* v___y_5147_ = _args[9];
lean_object* v___y_5148_ = _args[10];
lean_object* v___y_5149_ = _args[11];
lean_object* v___y_5150_ = _args[12];
lean_object* v___y_5151_ = _args[13];
lean_object* v___y_5152_ = _args[14];
lean_object* v___y_5153_ = _args[15];
lean_object* v___y_5154_ = _args[16];
lean_object* v___y_5155_ = _args[17];
lean_object* v___y_5156_ = _args[18];
_start:
{
lean_object* v_res_5157_; 
v_res_5157_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(v_upperBound_5138_, v___x_5139_, v_methods_5140_, v_config_5141_, v_a_5142_, v_b_5143_, v___y_5144_, v___y_5145_, v___y_5146_, v___y_5147_, v___y_5148_, v___y_5149_, v___y_5150_, v___y_5151_, v___y_5152_, v___y_5153_, v___y_5154_, v___y_5155_);
lean_dec(v___y_5155_);
lean_dec_ref(v___y_5154_);
lean_dec(v___y_5153_);
lean_dec_ref(v___y_5152_);
lean_dec(v___y_5151_);
lean_dec_ref(v___y_5150_);
lean_dec(v___y_5149_);
lean_dec_ref(v___y_5148_);
lean_dec(v___y_5147_);
lean_dec(v___y_5146_);
lean_dec_ref(v___y_5145_);
lean_dec(v___y_5144_);
lean_dec_ref(v_methods_5140_);
lean_dec_ref(v___x_5139_);
lean_dec(v_upperBound_5138_);
return v_res_5157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go(lean_object* v_methods_5158_, lean_object* v_config_5159_, lean_object* v_a_5160_, lean_object* v_a_5161_, lean_object* v_a_5162_, lean_object* v_a_5163_, lean_object* v_a_5164_, lean_object* v_a_5165_, lean_object* v_a_5166_, lean_object* v_a_5167_, lean_object* v_a_5168_, lean_object* v_a_5169_, lean_object* v_a_5170_, lean_object* v_a_5171_){
_start:
{
lean_object* v___x_5173_; lean_object* v_hypotheses_5174_; lean_object* v___x_5175_; lean_object* v_newHyps_5176_; lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; 
v___x_5173_ = lean_st_ref_get(v_a_5162_);
v_hypotheses_5174_ = lean_ctor_get(v___x_5173_, 3);
lean_inc_ref(v_hypotheses_5174_);
lean_dec(v___x_5173_);
v___x_5175_ = lean_array_get_size(v_hypotheses_5174_);
v_newHyps_5176_ = lean_mk_empty_array_with_capacity(v___x_5175_);
v___x_5177_ = lean_unsigned_to_nat(0u);
v___x_5178_ = lean_box(0);
v___x_5179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5179_, 0, v___x_5178_);
lean_ctor_set(v___x_5179_, 1, v_newHyps_5176_);
v___x_5180_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(v___x_5175_, v_hypotheses_5174_, v_methods_5158_, v_config_5159_, v___x_5177_, v___x_5179_, v_a_5160_, v_a_5161_, v_a_5162_, v_a_5163_, v_a_5164_, v_a_5165_, v_a_5166_, v_a_5167_, v_a_5168_, v_a_5169_, v_a_5170_, v_a_5171_);
lean_dec_ref(v_hypotheses_5174_);
if (lean_obj_tag(v___x_5180_) == 0)
{
lean_object* v_a_5181_; lean_object* v___x_5183_; uint8_t v_isShared_5184_; uint8_t v_isSharedCheck_5210_; 
v_a_5181_ = lean_ctor_get(v___x_5180_, 0);
v_isSharedCheck_5210_ = !lean_is_exclusive(v___x_5180_);
if (v_isSharedCheck_5210_ == 0)
{
v___x_5183_ = v___x_5180_;
v_isShared_5184_ = v_isSharedCheck_5210_;
goto v_resetjp_5182_;
}
else
{
lean_inc(v_a_5181_);
lean_dec(v___x_5180_);
v___x_5183_ = lean_box(0);
v_isShared_5184_ = v_isSharedCheck_5210_;
goto v_resetjp_5182_;
}
v_resetjp_5182_:
{
lean_object* v_fst_5185_; 
v_fst_5185_ = lean_ctor_get(v_a_5181_, 0);
if (lean_obj_tag(v_fst_5185_) == 0)
{
lean_object* v_snd_5186_; lean_object* v___x_5187_; lean_object* v_caches_5188_; lean_object* v_typeAnalysis_5189_; lean_object* v_target_5190_; uint8_t v_didChange_5191_; lean_object* v___x_5193_; uint8_t v_isShared_5194_; uint8_t v_isSharedCheck_5204_; 
v_snd_5186_ = lean_ctor_get(v_a_5181_, 1);
lean_inc(v_snd_5186_);
lean_dec(v_a_5181_);
v___x_5187_ = lean_st_ref_take(v_a_5162_);
v_caches_5188_ = lean_ctor_get(v___x_5187_, 0);
v_typeAnalysis_5189_ = lean_ctor_get(v___x_5187_, 1);
v_target_5190_ = lean_ctor_get(v___x_5187_, 2);
v_didChange_5191_ = lean_ctor_get_uint8(v___x_5187_, sizeof(void*)*4);
v_isSharedCheck_5204_ = !lean_is_exclusive(v___x_5187_);
if (v_isSharedCheck_5204_ == 0)
{
lean_object* v_unused_5205_; 
v_unused_5205_ = lean_ctor_get(v___x_5187_, 3);
lean_dec(v_unused_5205_);
v___x_5193_ = v___x_5187_;
v_isShared_5194_ = v_isSharedCheck_5204_;
goto v_resetjp_5192_;
}
else
{
lean_inc(v_target_5190_);
lean_inc(v_typeAnalysis_5189_);
lean_inc(v_caches_5188_);
lean_dec(v___x_5187_);
v___x_5193_ = lean_box(0);
v_isShared_5194_ = v_isSharedCheck_5204_;
goto v_resetjp_5192_;
}
v_resetjp_5192_:
{
lean_object* v___x_5196_; 
if (v_isShared_5194_ == 0)
{
lean_ctor_set(v___x_5193_, 3, v_snd_5186_);
v___x_5196_ = v___x_5193_;
goto v_reusejp_5195_;
}
else
{
lean_object* v_reuseFailAlloc_5203_; 
v_reuseFailAlloc_5203_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_5203_, 0, v_caches_5188_);
lean_ctor_set(v_reuseFailAlloc_5203_, 1, v_typeAnalysis_5189_);
lean_ctor_set(v_reuseFailAlloc_5203_, 2, v_target_5190_);
lean_ctor_set(v_reuseFailAlloc_5203_, 3, v_snd_5186_);
lean_ctor_set_uint8(v_reuseFailAlloc_5203_, sizeof(void*)*4, v_didChange_5191_);
v___x_5196_ = v_reuseFailAlloc_5203_;
goto v_reusejp_5195_;
}
v_reusejp_5195_:
{
lean_object* v___x_5197_; uint8_t v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5201_; 
v___x_5197_ = lean_st_ref_put(v_a_5162_, v___x_5196_);
v___x_5198_ = 0;
v___x_5199_ = lean_box(v___x_5198_);
if (v_isShared_5184_ == 0)
{
lean_ctor_set(v___x_5183_, 0, v___x_5199_);
v___x_5201_ = v___x_5183_;
goto v_reusejp_5200_;
}
else
{
lean_object* v_reuseFailAlloc_5202_; 
v_reuseFailAlloc_5202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5202_, 0, v___x_5199_);
v___x_5201_ = v_reuseFailAlloc_5202_;
goto v_reusejp_5200_;
}
v_reusejp_5200_:
{
return v___x_5201_;
}
}
}
}
else
{
lean_object* v_val_5206_; lean_object* v___x_5208_; 
lean_inc_ref(v_fst_5185_);
lean_dec(v_a_5181_);
v_val_5206_ = lean_ctor_get(v_fst_5185_, 0);
lean_inc(v_val_5206_);
lean_dec_ref_known(v_fst_5185_, 1);
if (v_isShared_5184_ == 0)
{
lean_ctor_set(v___x_5183_, 0, v_val_5206_);
v___x_5208_ = v___x_5183_;
goto v_reusejp_5207_;
}
else
{
lean_object* v_reuseFailAlloc_5209_; 
v_reuseFailAlloc_5209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5209_, 0, v_val_5206_);
v___x_5208_ = v_reuseFailAlloc_5209_;
goto v_reusejp_5207_;
}
v_reusejp_5207_:
{
return v___x_5208_;
}
}
}
}
else
{
lean_object* v_a_5211_; lean_object* v___x_5213_; uint8_t v_isShared_5214_; uint8_t v_isSharedCheck_5218_; 
v_a_5211_ = lean_ctor_get(v___x_5180_, 0);
v_isSharedCheck_5218_ = !lean_is_exclusive(v___x_5180_);
if (v_isSharedCheck_5218_ == 0)
{
v___x_5213_ = v___x_5180_;
v_isShared_5214_ = v_isSharedCheck_5218_;
goto v_resetjp_5212_;
}
else
{
lean_inc(v_a_5211_);
lean_dec(v___x_5180_);
v___x_5213_ = lean_box(0);
v_isShared_5214_ = v_isSharedCheck_5218_;
goto v_resetjp_5212_;
}
v_resetjp_5212_:
{
lean_object* v___x_5216_; 
if (v_isShared_5214_ == 0)
{
v___x_5216_ = v___x_5213_;
goto v_reusejp_5215_;
}
else
{
lean_object* v_reuseFailAlloc_5217_; 
v_reuseFailAlloc_5217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5217_, 0, v_a_5211_);
v___x_5216_ = v_reuseFailAlloc_5217_;
goto v_reusejp_5215_;
}
v_reusejp_5215_:
{
return v___x_5216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go___boxed(lean_object* v_methods_5219_, lean_object* v_config_5220_, lean_object* v_a_5221_, lean_object* v_a_5222_, lean_object* v_a_5223_, lean_object* v_a_5224_, lean_object* v_a_5225_, lean_object* v_a_5226_, lean_object* v_a_5227_, lean_object* v_a_5228_, lean_object* v_a_5229_, lean_object* v_a_5230_, lean_object* v_a_5231_, lean_object* v_a_5232_, lean_object* v_a_5233_){
_start:
{
lean_object* v_res_5234_; 
v_res_5234_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go(v_methods_5219_, v_config_5220_, v_a_5221_, v_a_5222_, v_a_5223_, v_a_5224_, v_a_5225_, v_a_5226_, v_a_5227_, v_a_5228_, v_a_5229_, v_a_5230_, v_a_5231_, v_a_5232_);
lean_dec(v_a_5232_);
lean_dec_ref(v_a_5231_);
lean_dec(v_a_5230_);
lean_dec_ref(v_a_5229_);
lean_dec(v_a_5228_);
lean_dec_ref(v_a_5227_);
lean_dec(v_a_5226_);
lean_dec_ref(v_a_5225_);
lean_dec(v_a_5224_);
lean_dec(v_a_5223_);
lean_dec_ref(v_a_5222_);
lean_dec(v_a_5221_);
lean_dec_ref(v_methods_5219_);
return v_res_5234_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0(lean_object* v_cls_5235_, lean_object* v_msg_5236_, lean_object* v___y_5237_, lean_object* v___y_5238_, lean_object* v___y_5239_, lean_object* v___y_5240_, lean_object* v___y_5241_, lean_object* v___y_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_){
_start:
{
lean_object* v___x_5250_; 
v___x_5250_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg(v_cls_5235_, v_msg_5236_, v___y_5245_, v___y_5246_, v___y_5247_, v___y_5248_);
return v___x_5250_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___boxed(lean_object* v_cls_5251_, lean_object* v_msg_5252_, lean_object* v___y_5253_, lean_object* v___y_5254_, lean_object* v___y_5255_, lean_object* v___y_5256_, lean_object* v___y_5257_, lean_object* v___y_5258_, lean_object* v___y_5259_, lean_object* v___y_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_){
_start:
{
lean_object* v_res_5266_; 
v_res_5266_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0(v_cls_5251_, v_msg_5252_, v___y_5253_, v___y_5254_, v___y_5255_, v___y_5256_, v___y_5257_, v___y_5258_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v___y_5264_);
lean_dec(v___y_5264_);
lean_dec_ref(v___y_5263_);
lean_dec(v___y_5262_);
lean_dec_ref(v___y_5261_);
lean_dec(v___y_5260_);
lean_dec_ref(v___y_5259_);
lean_dec(v___y_5258_);
lean_dec_ref(v___y_5257_);
lean_dec(v___y_5256_);
lean_dec(v___y_5255_);
lean_dec_ref(v___y_5254_);
lean_dec(v___y_5253_);
return v_res_5266_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1(lean_object* v_upperBound_5267_, lean_object* v___x_5268_, lean_object* v_methods_5269_, lean_object* v_config_5270_, lean_object* v_inst_5271_, lean_object* v_R_5272_, lean_object* v_a_5273_, lean_object* v_b_5274_, lean_object* v_c_5275_, lean_object* v___y_5276_, lean_object* v___y_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_, lean_object* v___y_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_){
_start:
{
lean_object* v___x_5289_; 
v___x_5289_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg(v_upperBound_5267_, v___x_5268_, v_methods_5269_, v_config_5270_, v_a_5273_, v_b_5274_, v___y_5276_, v___y_5277_, v___y_5278_, v___y_5279_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_, v___y_5287_);
return v___x_5289_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_5290_ = _args[0];
lean_object* v___x_5291_ = _args[1];
lean_object* v_methods_5292_ = _args[2];
lean_object* v_config_5293_ = _args[3];
lean_object* v_inst_5294_ = _args[4];
lean_object* v_R_5295_ = _args[5];
lean_object* v_a_5296_ = _args[6];
lean_object* v_b_5297_ = _args[7];
lean_object* v_c_5298_ = _args[8];
lean_object* v___y_5299_ = _args[9];
lean_object* v___y_5300_ = _args[10];
lean_object* v___y_5301_ = _args[11];
lean_object* v___y_5302_ = _args[12];
lean_object* v___y_5303_ = _args[13];
lean_object* v___y_5304_ = _args[14];
lean_object* v___y_5305_ = _args[15];
lean_object* v___y_5306_ = _args[16];
lean_object* v___y_5307_ = _args[17];
lean_object* v___y_5308_ = _args[18];
lean_object* v___y_5309_ = _args[19];
lean_object* v___y_5310_ = _args[20];
lean_object* v___y_5311_ = _args[21];
_start:
{
lean_object* v_res_5312_; 
v_res_5312_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1(v_upperBound_5290_, v___x_5291_, v_methods_5292_, v_config_5293_, v_inst_5294_, v_R_5295_, v_a_5296_, v_b_5297_, v_c_5298_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_, v___y_5304_, v___y_5305_, v___y_5306_, v___y_5307_, v___y_5308_, v___y_5309_, v___y_5310_);
lean_dec(v___y_5310_);
lean_dec_ref(v___y_5309_);
lean_dec(v___y_5308_);
lean_dec_ref(v___y_5307_);
lean_dec(v___y_5306_);
lean_dec_ref(v___y_5305_);
lean_dec(v___y_5304_);
lean_dec_ref(v___y_5303_);
lean_dec(v___y_5302_);
lean_dec(v___y_5301_);
lean_dec_ref(v___y_5300_);
lean_dec(v___y_5299_);
lean_dec_ref(v_methods_5292_);
lean_dec_ref(v___x_5291_);
lean_dec(v_upperBound_5290_);
return v_res_5312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps(lean_object* v_methods_5313_, lean_object* v_config_5314_, lean_object* v_a_5315_, lean_object* v_a_5316_, lean_object* v_a_5317_, lean_object* v_a_5318_, lean_object* v_a_5319_, lean_object* v_a_5320_, lean_object* v_a_5321_, lean_object* v_a_5322_, lean_object* v_a_5323_, lean_object* v_a_5324_, lean_object* v_a_5325_){
_start:
{
lean_object* v___x_5327_; lean_object* v___x_5328_; lean_object* v___x_5329_; 
v___x_5327_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg___closed__0);
v___x_5328_ = lean_st_mk_ref(v___x_5327_);
v___x_5329_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go(v_methods_5313_, v_config_5314_, v___x_5328_, v_a_5315_, v_a_5316_, v_a_5317_, v_a_5318_, v_a_5319_, v_a_5320_, v_a_5321_, v_a_5322_, v_a_5323_, v_a_5324_, v_a_5325_);
if (lean_obj_tag(v___x_5329_) == 0)
{
lean_object* v_a_5330_; lean_object* v___x_5332_; uint8_t v_isShared_5333_; uint8_t v_isSharedCheck_5338_; 
v_a_5330_ = lean_ctor_get(v___x_5329_, 0);
v_isSharedCheck_5338_ = !lean_is_exclusive(v___x_5329_);
if (v_isSharedCheck_5338_ == 0)
{
v___x_5332_ = v___x_5329_;
v_isShared_5333_ = v_isSharedCheck_5338_;
goto v_resetjp_5331_;
}
else
{
lean_inc(v_a_5330_);
lean_dec(v___x_5329_);
v___x_5332_ = lean_box(0);
v_isShared_5333_ = v_isSharedCheck_5338_;
goto v_resetjp_5331_;
}
v_resetjp_5331_:
{
lean_object* v___x_5334_; lean_object* v___x_5336_; 
v___x_5334_ = lean_st_ref_get(v___x_5328_);
lean_dec(v___x_5328_);
lean_dec(v___x_5334_);
if (v_isShared_5333_ == 0)
{
v___x_5336_ = v___x_5332_;
goto v_reusejp_5335_;
}
else
{
lean_object* v_reuseFailAlloc_5337_; 
v_reuseFailAlloc_5337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5337_, 0, v_a_5330_);
v___x_5336_ = v_reuseFailAlloc_5337_;
goto v_reusejp_5335_;
}
v_reusejp_5335_:
{
return v___x_5336_;
}
}
}
else
{
lean_dec(v___x_5328_);
return v___x_5329_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps___boxed(lean_object* v_methods_5339_, lean_object* v_config_5340_, lean_object* v_a_5341_, lean_object* v_a_5342_, lean_object* v_a_5343_, lean_object* v_a_5344_, lean_object* v_a_5345_, lean_object* v_a_5346_, lean_object* v_a_5347_, lean_object* v_a_5348_, lean_object* v_a_5349_, lean_object* v_a_5350_, lean_object* v_a_5351_, lean_object* v_a_5352_){
_start:
{
lean_object* v_res_5353_; 
v_res_5353_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps(v_methods_5339_, v_config_5340_, v_a_5341_, v_a_5342_, v_a_5343_, v_a_5344_, v_a_5345_, v_a_5346_, v_a_5347_, v_a_5348_, v_a_5349_, v_a_5350_, v_a_5351_);
lean_dec(v_a_5351_);
lean_dec_ref(v_a_5350_);
lean_dec(v_a_5349_);
lean_dec_ref(v_a_5348_);
lean_dec(v_a_5347_);
lean_dec_ref(v_a_5346_);
lean_dec(v_a_5345_);
lean_dec_ref(v_a_5344_);
lean_dec(v_a_5343_);
lean_dec(v_a_5342_);
lean_dec_ref(v_a_5341_);
lean_dec_ref(v_methods_5339_);
return v_res_5353_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(lean_object* v_cls_5354_, lean_object* v_msg_5355_, lean_object* v___y_5356_, lean_object* v___y_5357_, lean_object* v___y_5358_, lean_object* v___y_5359_){
_start:
{
lean_object* v_ref_5361_; lean_object* v___x_5362_; lean_object* v_a_5363_; lean_object* v___x_5365_; uint8_t v_isShared_5366_; uint8_t v_isSharedCheck_5407_; 
v_ref_5361_ = lean_ctor_get(v___y_5358_, 2);
v___x_5362_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msg_5355_, v___y_5356_, v___y_5357_, v___y_5358_, v___y_5359_);
v_a_5363_ = lean_ctor_get(v___x_5362_, 0);
v_isSharedCheck_5407_ = !lean_is_exclusive(v___x_5362_);
if (v_isSharedCheck_5407_ == 0)
{
v___x_5365_ = v___x_5362_;
v_isShared_5366_ = v_isSharedCheck_5407_;
goto v_resetjp_5364_;
}
else
{
lean_inc(v_a_5363_);
lean_dec(v___x_5362_);
v___x_5365_ = lean_box(0);
v_isShared_5366_ = v_isSharedCheck_5407_;
goto v_resetjp_5364_;
}
v_resetjp_5364_:
{
lean_object* v___x_5367_; lean_object* v_traceState_5368_; lean_object* v_env_5369_; lean_object* v_nextMacroScope_5370_; lean_object* v_ngen_5371_; lean_object* v_auxDeclNGen_5372_; lean_object* v_cache_5373_; lean_object* v_messages_5374_; lean_object* v_infoState_5375_; lean_object* v_snapshotTasks_5376_; lean_object* v___x_5378_; uint8_t v_isShared_5379_; uint8_t v_isSharedCheck_5406_; 
v___x_5367_ = lean_st_ref_take(v___y_5359_);
v_traceState_5368_ = lean_ctor_get(v___x_5367_, 4);
v_env_5369_ = lean_ctor_get(v___x_5367_, 0);
v_nextMacroScope_5370_ = lean_ctor_get(v___x_5367_, 1);
v_ngen_5371_ = lean_ctor_get(v___x_5367_, 2);
v_auxDeclNGen_5372_ = lean_ctor_get(v___x_5367_, 3);
v_cache_5373_ = lean_ctor_get(v___x_5367_, 5);
v_messages_5374_ = lean_ctor_get(v___x_5367_, 6);
v_infoState_5375_ = lean_ctor_get(v___x_5367_, 7);
v_snapshotTasks_5376_ = lean_ctor_get(v___x_5367_, 8);
v_isSharedCheck_5406_ = !lean_is_exclusive(v___x_5367_);
if (v_isSharedCheck_5406_ == 0)
{
v___x_5378_ = v___x_5367_;
v_isShared_5379_ = v_isSharedCheck_5406_;
goto v_resetjp_5377_;
}
else
{
lean_inc(v_snapshotTasks_5376_);
lean_inc(v_infoState_5375_);
lean_inc(v_messages_5374_);
lean_inc(v_cache_5373_);
lean_inc(v_traceState_5368_);
lean_inc(v_auxDeclNGen_5372_);
lean_inc(v_ngen_5371_);
lean_inc(v_nextMacroScope_5370_);
lean_inc(v_env_5369_);
lean_dec(v___x_5367_);
v___x_5378_ = lean_box(0);
v_isShared_5379_ = v_isSharedCheck_5406_;
goto v_resetjp_5377_;
}
v_resetjp_5377_:
{
uint64_t v_tid_5380_; lean_object* v_traces_5381_; lean_object* v___x_5383_; uint8_t v_isShared_5384_; uint8_t v_isSharedCheck_5405_; 
v_tid_5380_ = lean_ctor_get_uint64(v_traceState_5368_, sizeof(void*)*1);
v_traces_5381_ = lean_ctor_get(v_traceState_5368_, 0);
v_isSharedCheck_5405_ = !lean_is_exclusive(v_traceState_5368_);
if (v_isSharedCheck_5405_ == 0)
{
v___x_5383_ = v_traceState_5368_;
v_isShared_5384_ = v_isSharedCheck_5405_;
goto v_resetjp_5382_;
}
else
{
lean_inc(v_traces_5381_);
lean_dec(v_traceState_5368_);
v___x_5383_ = lean_box(0);
v_isShared_5384_ = v_isSharedCheck_5405_;
goto v_resetjp_5382_;
}
v_resetjp_5382_:
{
lean_object* v___x_5385_; lean_object* v___x_5386_; double v___x_5387_; uint8_t v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5396_; 
v___x_5385_ = lean_box(0);
v___x_5386_ = lean_box(0);
v___x_5387_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0);
v___x_5388_ = 0;
v___x_5389_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_5390_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_5390_, 0, v_cls_5354_);
lean_ctor_set(v___x_5390_, 1, v___x_5386_);
lean_ctor_set(v___x_5390_, 2, v___x_5389_);
lean_ctor_set_float(v___x_5390_, sizeof(void*)*3, v___x_5387_);
lean_ctor_set_float(v___x_5390_, sizeof(void*)*3 + 8, v___x_5387_);
lean_ctor_set_uint8(v___x_5390_, sizeof(void*)*3 + 16, v___x_5388_);
v___x_5391_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2));
v___x_5392_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_5392_, 0, v___x_5390_);
lean_ctor_set(v___x_5392_, 1, v_a_5363_);
lean_ctor_set(v___x_5392_, 2, v___x_5391_);
lean_inc(v_ref_5361_);
v___x_5393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5393_, 0, v_ref_5361_);
lean_ctor_set(v___x_5393_, 1, v___x_5392_);
v___x_5394_ = l_Lean_PersistentArray_push___redArg(v_traces_5381_, v___x_5393_);
if (v_isShared_5384_ == 0)
{
lean_ctor_set(v___x_5383_, 0, v___x_5394_);
v___x_5396_ = v___x_5383_;
goto v_reusejp_5395_;
}
else
{
lean_object* v_reuseFailAlloc_5404_; 
v_reuseFailAlloc_5404_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5404_, 0, v___x_5394_);
lean_ctor_set_uint64(v_reuseFailAlloc_5404_, sizeof(void*)*1, v_tid_5380_);
v___x_5396_ = v_reuseFailAlloc_5404_;
goto v_reusejp_5395_;
}
v_reusejp_5395_:
{
lean_object* v___x_5398_; 
if (v_isShared_5379_ == 0)
{
lean_ctor_set(v___x_5378_, 4, v___x_5396_);
v___x_5398_ = v___x_5378_;
goto v_reusejp_5397_;
}
else
{
lean_object* v_reuseFailAlloc_5403_; 
v_reuseFailAlloc_5403_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5403_, 0, v_env_5369_);
lean_ctor_set(v_reuseFailAlloc_5403_, 1, v_nextMacroScope_5370_);
lean_ctor_set(v_reuseFailAlloc_5403_, 2, v_ngen_5371_);
lean_ctor_set(v_reuseFailAlloc_5403_, 3, v_auxDeclNGen_5372_);
lean_ctor_set(v_reuseFailAlloc_5403_, 4, v___x_5396_);
lean_ctor_set(v_reuseFailAlloc_5403_, 5, v_cache_5373_);
lean_ctor_set(v_reuseFailAlloc_5403_, 6, v_messages_5374_);
lean_ctor_set(v_reuseFailAlloc_5403_, 7, v_infoState_5375_);
lean_ctor_set(v_reuseFailAlloc_5403_, 8, v_snapshotTasks_5376_);
v___x_5398_ = v_reuseFailAlloc_5403_;
goto v_reusejp_5397_;
}
v_reusejp_5397_:
{
lean_object* v___x_5399_; lean_object* v___x_5401_; 
v___x_5399_ = lean_st_ref_put(v___y_5359_, v___x_5398_);
if (v_isShared_5366_ == 0)
{
lean_ctor_set(v___x_5365_, 0, v___x_5385_);
v___x_5401_ = v___x_5365_;
goto v_reusejp_5400_;
}
else
{
lean_object* v_reuseFailAlloc_5402_; 
v_reuseFailAlloc_5402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5402_, 0, v___x_5385_);
v___x_5401_ = v_reuseFailAlloc_5402_;
goto v_reusejp_5400_;
}
v_reusejp_5400_:
{
return v___x_5401_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg___boxed(lean_object* v_cls_5408_, lean_object* v_msg_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_, lean_object* v___y_5412_, lean_object* v___y_5413_, lean_object* v___y_5414_){
_start:
{
lean_object* v_res_5415_; 
v_res_5415_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(v_cls_5408_, v_msg_5409_, v___y_5410_, v___y_5411_, v___y_5412_, v___y_5413_);
lean_dec(v___y_5413_);
lean_dec_ref(v___y_5412_);
lean_dec(v___y_5411_);
lean_dec_ref(v___y_5410_);
return v_res_5415_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(lean_object* v_upperBound_5416_, lean_object* v___x_5417_, lean_object* v_methods_5418_, lean_object* v_config_5419_, lean_object* v_a_5420_, lean_object* v_b_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_, lean_object* v___y_5424_, lean_object* v___y_5425_, lean_object* v___y_5426_, lean_object* v___y_5427_, lean_object* v___y_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_, lean_object* v___y_5431_, lean_object* v___y_5432_, lean_object* v___y_5433_){
_start:
{
lean_object* v___y_5436_; uint8_t v___x_5458_; 
v___x_5458_ = lean_nat_dec_lt(v_a_5420_, v_upperBound_5416_);
if (v___x_5458_ == 0)
{
lean_object* v___x_5459_; 
lean_dec(v_a_5420_);
lean_dec_ref(v_config_5419_);
v___x_5459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5459_, 0, v_b_5421_);
return v___x_5459_;
}
else
{
lean_object* v_snd_5460_; lean_object* v___x_5462_; uint8_t v_isShared_5463_; uint8_t v_isSharedCheck_5566_; 
v_snd_5460_ = lean_ctor_get(v_b_5421_, 1);
v_isSharedCheck_5566_ = !lean_is_exclusive(v_b_5421_);
if (v_isSharedCheck_5566_ == 0)
{
lean_object* v_unused_5567_; 
v_unused_5567_ = lean_ctor_get(v_b_5421_, 0);
lean_dec(v_unused_5567_);
v___x_5462_ = v_b_5421_;
v_isShared_5463_ = v_isSharedCheck_5566_;
goto v_resetjp_5461_;
}
else
{
lean_inc(v_snd_5460_);
lean_dec(v_b_5421_);
v___x_5462_ = lean_box(0);
v_isShared_5463_ = v_isSharedCheck_5566_;
goto v_resetjp_5461_;
}
v_resetjp_5461_:
{
lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; lean_object* v___x_5468_; lean_object* v_type_5469_; lean_object* v___x_5470_; lean_object* v___x_5472_; 
v___x_5464_ = lean_box(0);
v___x_5465_ = lean_array_fget_borrowed(v___x_5417_, v_a_5420_);
v___x_5466_ = lean_st_ref_take(v___y_5422_);
v___x_5467_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1);
v___x_5468_ = lean_st_ref_put(v___y_5422_, v___x_5467_);
v_type_5469_ = lean_ctor_get(v___x_5465_, 1);
v___x_5470_ = lean_unsigned_to_nat(0u);
if (v_isShared_5463_ == 0)
{
lean_ctor_set(v___x_5462_, 1, v___x_5466_);
lean_ctor_set(v___x_5462_, 0, v___x_5470_);
v___x_5472_ = v___x_5462_;
goto v_reusejp_5471_;
}
else
{
lean_object* v_reuseFailAlloc_5565_; 
v_reuseFailAlloc_5565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5565_, 0, v___x_5470_);
lean_ctor_set(v_reuseFailAlloc_5565_, 1, v___x_5466_);
v___x_5472_ = v_reuseFailAlloc_5565_;
goto v_reusejp_5471_;
}
v_reusejp_5471_:
{
lean_object* v___x_5473_; lean_object* v___x_5474_; 
lean_inc_ref(v_type_5469_);
v___x_5473_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_DSimp_dsimp___boxed), 11, 1);
lean_closure_set(v___x_5473_, 0, v_type_5469_);
lean_inc_ref(v_config_5419_);
v___x_5474_ = l_Lean_Meta_Sym_DSimp_DSimpM_run___redArg(v___x_5473_, v_methods_5418_, v_config_5419_, v___x_5472_, v___y_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_, v___y_5433_);
if (lean_obj_tag(v___x_5474_) == 0)
{
lean_object* v_a_5475_; lean_object* v_snd_5476_; lean_object* v_fst_5477_; lean_object* v___x_5479_; uint8_t v_isShared_5480_; uint8_t v_isSharedCheck_5556_; 
v_a_5475_ = lean_ctor_get(v___x_5474_, 0);
lean_inc(v_a_5475_);
lean_dec_ref_known(v___x_5474_, 1);
v_snd_5476_ = lean_ctor_get(v_a_5475_, 1);
v_fst_5477_ = lean_ctor_get(v_a_5475_, 0);
v_isSharedCheck_5556_ = !lean_is_exclusive(v_a_5475_);
if (v_isSharedCheck_5556_ == 0)
{
v___x_5479_ = v_a_5475_;
v_isShared_5480_ = v_isSharedCheck_5556_;
goto v_resetjp_5478_;
}
else
{
lean_inc(v_snd_5476_);
lean_inc(v_fst_5477_);
lean_dec(v_a_5475_);
v___x_5479_ = lean_box(0);
v_isShared_5480_ = v_isSharedCheck_5556_;
goto v_resetjp_5478_;
}
v_resetjp_5478_:
{
lean_object* v_cache_5481_; lean_object* v___x_5483_; uint8_t v_isShared_5484_; uint8_t v_isSharedCheck_5554_; 
v_cache_5481_ = lean_ctor_get(v_snd_5476_, 1);
v_isSharedCheck_5554_ = !lean_is_exclusive(v_snd_5476_);
if (v_isSharedCheck_5554_ == 0)
{
lean_object* v_unused_5555_; 
v_unused_5555_ = lean_ctor_get(v_snd_5476_, 0);
lean_dec(v_unused_5555_);
v___x_5483_ = v_snd_5476_;
v_isShared_5484_ = v_isSharedCheck_5554_;
goto v_resetjp_5482_;
}
else
{
lean_inc(v_cache_5481_);
lean_dec(v_snd_5476_);
v___x_5483_ = lean_box(0);
v_isShared_5484_ = v_isSharedCheck_5554_;
goto v_resetjp_5482_;
}
v_resetjp_5482_:
{
lean_object* v___x_5485_; lean_object* v___x_5486_; 
v___x_5485_ = lean_st_ref_swap(v___y_5422_, v_cache_5481_);
lean_dec(v___x_5485_);
lean_inc(v___x_5465_);
v___x_5486_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Hyp_applyDSimpResult___redArg(v___x_5465_, v_fst_5477_);
lean_dec(v_fst_5477_);
if (lean_obj_tag(v___x_5486_) == 0)
{
lean_object* v_a_5487_; lean_object* v_type_5488_; lean_object* v_value_5489_; uint8_t v___x_5490_; 
v_a_5487_ = lean_ctor_get(v___x_5486_, 0);
lean_inc(v_a_5487_);
lean_dec_ref_known(v___x_5486_, 1);
v_type_5488_ = lean_ctor_get(v_a_5487_, 1);
v_value_5489_ = lean_ctor_get(v_a_5487_, 2);
lean_inc_ref(v_type_5488_);
v___x_5490_ = l_Lean_Expr_isFalse(v_type_5488_);
if (v___x_5490_ == 0)
{
lean_object* v___f_5491_; uint8_t v___x_5521_; 
lean_del_object(v___x_5479_);
lean_inc(v_a_5487_);
lean_inc(v_snd_5460_);
v___f_5491_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0___boxed), 17, 3);
lean_closure_set(v___f_5491_, 0, v_snd_5460_);
lean_closure_set(v___f_5491_, 1, v_a_5487_);
lean_closure_set(v___f_5491_, 2, v___x_5464_);
v___x_5521_ = lean_expr_eqv(v_type_5469_, v_type_5488_);
if (v___x_5521_ == 0)
{
lean_inc_ref(v_type_5488_);
lean_dec(v_a_5487_);
lean_dec(v_snd_5460_);
goto v___jp_5495_;
}
else
{
if (v___x_5490_ == 0)
{
lean_object* v___x_5522_; lean_object* v___x_5523_; 
lean_dec_ref(v___f_5491_);
lean_del_object(v___x_5483_);
v___x_5522_ = lean_box(0);
v___x_5523_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__0(v_snd_5460_, v_a_5487_, v___x_5464_, v___x_5522_, v___y_5422_, v___y_5423_, v___y_5424_, v___y_5425_, v___y_5426_, v___y_5427_, v___y_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_, v___y_5433_);
v___y_5436_ = v___x_5523_;
goto v___jp_5435_;
}
else
{
lean_inc_ref(v_type_5488_);
lean_dec(v_a_5487_);
lean_dec(v_snd_5460_);
goto v___jp_5495_;
}
}
v___jp_5492_:
{
lean_object* v___x_5493_; lean_object* v___x_5494_; 
v___x_5493_ = lean_box(0);
v___x_5494_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_5458_, v___f_5491_, v___x_5493_, v___y_5422_, v___y_5423_, v___y_5424_, v___y_5425_, v___y_5426_, v___y_5427_, v___y_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_, v___y_5433_);
v___y_5436_ = v___x_5494_;
goto v___jp_5435_;
}
v___jp_5495_:
{
lean_object* v_toCold_5496_; lean_object* v_options_5497_; uint8_t v_hasTrace_5498_; 
v_toCold_5496_ = lean_ctor_get(v___y_5432_, 0);
v_options_5497_ = lean_ctor_get(v_toCold_5496_, 2);
v_hasTrace_5498_ = lean_ctor_get_uint8(v_options_5497_, sizeof(void*)*1);
if (v_hasTrace_5498_ == 0)
{
lean_dec_ref(v_type_5488_);
lean_del_object(v___x_5483_);
goto v___jp_5492_;
}
else
{
lean_object* v_inheritedTraceOptions_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; uint8_t v___x_5502_; 
v_inheritedTraceOptions_5499_ = lean_ctor_get(v_toCold_5496_, 11);
v___x_5500_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_5501_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_5502_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5499_, v_options_5497_, v___x_5501_);
if (v___x_5502_ == 0)
{
lean_dec_ref(v_type_5488_);
lean_del_object(v___x_5483_);
goto v___jp_5492_;
}
else
{
lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5506_; 
lean_inc_ref(v_type_5469_);
v___x_5503_ = l_Lean_MessageData_ofExpr(v_type_5469_);
v___x_5504_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_flatMapHyps___redArg___lam__5___closed__1);
if (v_isShared_5484_ == 0)
{
lean_ctor_set_tag(v___x_5483_, 7);
lean_ctor_set(v___x_5483_, 1, v___x_5504_);
lean_ctor_set(v___x_5483_, 0, v___x_5503_);
v___x_5506_ = v___x_5483_;
goto v_reusejp_5505_;
}
else
{
lean_object* v_reuseFailAlloc_5520_; 
v_reuseFailAlloc_5520_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5520_, 0, v___x_5503_);
lean_ctor_set(v_reuseFailAlloc_5520_, 1, v___x_5504_);
v___x_5506_ = v_reuseFailAlloc_5520_;
goto v_reusejp_5505_;
}
v_reusejp_5505_:
{
lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; 
v___x_5507_ = l_Lean_MessageData_ofExpr(v_type_5488_);
v___x_5508_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5508_, 0, v___x_5506_);
lean_ctor_set(v___x_5508_, 1, v___x_5507_);
v___x_5509_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(v___x_5500_, v___x_5508_, v___y_5430_, v___y_5431_, v___y_5432_, v___y_5433_);
if (lean_obj_tag(v___x_5509_) == 0)
{
lean_object* v_a_5510_; lean_object* v___x_5511_; 
v_a_5510_ = lean_ctor_get(v___x_5509_, 0);
lean_inc(v_a_5510_);
lean_dec_ref_known(v___x_5509_, 1);
v___x_5511_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__1___redArg___lam__1(v___x_5458_, v___f_5491_, v_a_5510_, v___y_5422_, v___y_5423_, v___y_5424_, v___y_5425_, v___y_5426_, v___y_5427_, v___y_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_, v___y_5433_);
v___y_5436_ = v___x_5511_;
goto v___jp_5435_;
}
else
{
lean_object* v_a_5512_; lean_object* v___x_5514_; uint8_t v_isShared_5515_; uint8_t v_isSharedCheck_5519_; 
lean_dec_ref(v___f_5491_);
lean_dec(v_a_5420_);
lean_dec_ref(v_config_5419_);
v_a_5512_ = lean_ctor_get(v___x_5509_, 0);
v_isSharedCheck_5519_ = !lean_is_exclusive(v___x_5509_);
if (v_isSharedCheck_5519_ == 0)
{
v___x_5514_ = v___x_5509_;
v_isShared_5515_ = v_isSharedCheck_5519_;
goto v_resetjp_5513_;
}
else
{
lean_inc(v_a_5512_);
lean_dec(v___x_5509_);
v___x_5514_ = lean_box(0);
v_isShared_5515_ = v_isSharedCheck_5519_;
goto v_resetjp_5513_;
}
v_resetjp_5513_:
{
lean_object* v___x_5517_; 
if (v_isShared_5515_ == 0)
{
v___x_5517_ = v___x_5514_;
goto v_reusejp_5516_;
}
else
{
lean_object* v_reuseFailAlloc_5518_; 
v_reuseFailAlloc_5518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5518_, 0, v_a_5512_);
v___x_5517_ = v_reuseFailAlloc_5518_;
goto v_reusejp_5516_;
}
v_reusejp_5516_:
{
return v___x_5517_;
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
lean_object* v___x_5524_; 
lean_inc_ref(v_value_5489_);
lean_dec(v_a_5487_);
lean_del_object(v___x_5483_);
lean_dec(v_a_5420_);
lean_dec_ref(v_config_5419_);
v___x_5524_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_5489_, v___y_5424_, v___y_5425_, v___y_5426_, v___y_5427_, v___y_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_, v___y_5433_);
if (lean_obj_tag(v___x_5524_) == 0)
{
lean_object* v___x_5526_; uint8_t v_isShared_5527_; uint8_t v_isSharedCheck_5536_; 
v_isSharedCheck_5536_ = !lean_is_exclusive(v___x_5524_);
if (v_isSharedCheck_5536_ == 0)
{
lean_object* v_unused_5537_; 
v_unused_5537_ = lean_ctor_get(v___x_5524_, 0);
lean_dec(v_unused_5537_);
v___x_5526_ = v___x_5524_;
v_isShared_5527_ = v_isSharedCheck_5536_;
goto v_resetjp_5525_;
}
else
{
lean_dec(v___x_5524_);
v___x_5526_ = lean_box(0);
v_isShared_5527_ = v_isSharedCheck_5536_;
goto v_resetjp_5525_;
}
v_resetjp_5525_:
{
lean_object* v___x_5528_; lean_object* v___x_5529_; lean_object* v___x_5531_; 
v___x_5528_ = lean_box(v___x_5458_);
v___x_5529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5529_, 0, v___x_5528_);
if (v_isShared_5480_ == 0)
{
lean_ctor_set(v___x_5479_, 1, v_snd_5460_);
lean_ctor_set(v___x_5479_, 0, v___x_5529_);
v___x_5531_ = v___x_5479_;
goto v_reusejp_5530_;
}
else
{
lean_object* v_reuseFailAlloc_5535_; 
v_reuseFailAlloc_5535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5535_, 0, v___x_5529_);
lean_ctor_set(v_reuseFailAlloc_5535_, 1, v_snd_5460_);
v___x_5531_ = v_reuseFailAlloc_5535_;
goto v_reusejp_5530_;
}
v_reusejp_5530_:
{
lean_object* v___x_5533_; 
if (v_isShared_5527_ == 0)
{
lean_ctor_set(v___x_5526_, 0, v___x_5531_);
v___x_5533_ = v___x_5526_;
goto v_reusejp_5532_;
}
else
{
lean_object* v_reuseFailAlloc_5534_; 
v_reuseFailAlloc_5534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5534_, 0, v___x_5531_);
v___x_5533_ = v_reuseFailAlloc_5534_;
goto v_reusejp_5532_;
}
v_reusejp_5532_:
{
return v___x_5533_;
}
}
}
}
else
{
lean_object* v_a_5538_; lean_object* v___x_5540_; uint8_t v_isShared_5541_; uint8_t v_isSharedCheck_5545_; 
lean_del_object(v___x_5479_);
lean_dec(v_snd_5460_);
v_a_5538_ = lean_ctor_get(v___x_5524_, 0);
v_isSharedCheck_5545_ = !lean_is_exclusive(v___x_5524_);
if (v_isSharedCheck_5545_ == 0)
{
v___x_5540_ = v___x_5524_;
v_isShared_5541_ = v_isSharedCheck_5545_;
goto v_resetjp_5539_;
}
else
{
lean_inc(v_a_5538_);
lean_dec(v___x_5524_);
v___x_5540_ = lean_box(0);
v_isShared_5541_ = v_isSharedCheck_5545_;
goto v_resetjp_5539_;
}
v_resetjp_5539_:
{
lean_object* v___x_5543_; 
if (v_isShared_5541_ == 0)
{
v___x_5543_ = v___x_5540_;
goto v_reusejp_5542_;
}
else
{
lean_object* v_reuseFailAlloc_5544_; 
v_reuseFailAlloc_5544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5544_, 0, v_a_5538_);
v___x_5543_ = v_reuseFailAlloc_5544_;
goto v_reusejp_5542_;
}
v_reusejp_5542_:
{
return v___x_5543_;
}
}
}
}
}
else
{
lean_object* v_a_5546_; lean_object* v___x_5548_; uint8_t v_isShared_5549_; uint8_t v_isSharedCheck_5553_; 
lean_del_object(v___x_5483_);
lean_del_object(v___x_5479_);
lean_dec(v_snd_5460_);
lean_dec(v_a_5420_);
lean_dec_ref(v_config_5419_);
v_a_5546_ = lean_ctor_get(v___x_5486_, 0);
v_isSharedCheck_5553_ = !lean_is_exclusive(v___x_5486_);
if (v_isSharedCheck_5553_ == 0)
{
v___x_5548_ = v___x_5486_;
v_isShared_5549_ = v_isSharedCheck_5553_;
goto v_resetjp_5547_;
}
else
{
lean_inc(v_a_5546_);
lean_dec(v___x_5486_);
v___x_5548_ = lean_box(0);
v_isShared_5549_ = v_isSharedCheck_5553_;
goto v_resetjp_5547_;
}
v_resetjp_5547_:
{
lean_object* v___x_5551_; 
if (v_isShared_5549_ == 0)
{
v___x_5551_ = v___x_5548_;
goto v_reusejp_5550_;
}
else
{
lean_object* v_reuseFailAlloc_5552_; 
v_reuseFailAlloc_5552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5552_, 0, v_a_5546_);
v___x_5551_ = v_reuseFailAlloc_5552_;
goto v_reusejp_5550_;
}
v_reusejp_5550_:
{
return v___x_5551_;
}
}
}
}
}
}
else
{
lean_object* v_a_5557_; lean_object* v___x_5559_; uint8_t v_isShared_5560_; uint8_t v_isSharedCheck_5564_; 
lean_dec(v_snd_5460_);
lean_dec(v_a_5420_);
lean_dec_ref(v_config_5419_);
v_a_5557_ = lean_ctor_get(v___x_5474_, 0);
v_isSharedCheck_5564_ = !lean_is_exclusive(v___x_5474_);
if (v_isSharedCheck_5564_ == 0)
{
v___x_5559_ = v___x_5474_;
v_isShared_5560_ = v_isSharedCheck_5564_;
goto v_resetjp_5558_;
}
else
{
lean_inc(v_a_5557_);
lean_dec(v___x_5474_);
v___x_5559_ = lean_box(0);
v_isShared_5560_ = v_isSharedCheck_5564_;
goto v_resetjp_5558_;
}
v_resetjp_5558_:
{
lean_object* v___x_5562_; 
if (v_isShared_5560_ == 0)
{
v___x_5562_ = v___x_5559_;
goto v_reusejp_5561_;
}
else
{
lean_object* v_reuseFailAlloc_5563_; 
v_reuseFailAlloc_5563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5563_, 0, v_a_5557_);
v___x_5562_ = v_reuseFailAlloc_5563_;
goto v_reusejp_5561_;
}
v_reusejp_5561_:
{
return v___x_5562_;
}
}
}
}
}
}
v___jp_5435_:
{
if (lean_obj_tag(v___y_5436_) == 0)
{
lean_object* v_a_5437_; lean_object* v___x_5439_; uint8_t v_isShared_5440_; uint8_t v_isSharedCheck_5449_; 
v_a_5437_ = lean_ctor_get(v___y_5436_, 0);
v_isSharedCheck_5449_ = !lean_is_exclusive(v___y_5436_);
if (v_isSharedCheck_5449_ == 0)
{
v___x_5439_ = v___y_5436_;
v_isShared_5440_ = v_isSharedCheck_5449_;
goto v_resetjp_5438_;
}
else
{
lean_inc(v_a_5437_);
lean_dec(v___y_5436_);
v___x_5439_ = lean_box(0);
v_isShared_5440_ = v_isSharedCheck_5449_;
goto v_resetjp_5438_;
}
v_resetjp_5438_:
{
if (lean_obj_tag(v_a_5437_) == 0)
{
lean_object* v_a_5441_; lean_object* v___x_5443_; 
lean_dec(v_a_5420_);
lean_dec_ref(v_config_5419_);
v_a_5441_ = lean_ctor_get(v_a_5437_, 0);
lean_inc(v_a_5441_);
lean_dec_ref_known(v_a_5437_, 1);
if (v_isShared_5440_ == 0)
{
lean_ctor_set(v___x_5439_, 0, v_a_5441_);
v___x_5443_ = v___x_5439_;
goto v_reusejp_5442_;
}
else
{
lean_object* v_reuseFailAlloc_5444_; 
v_reuseFailAlloc_5444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5444_, 0, v_a_5441_);
v___x_5443_ = v_reuseFailAlloc_5444_;
goto v_reusejp_5442_;
}
v_reusejp_5442_:
{
return v___x_5443_;
}
}
else
{
lean_object* v_a_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; 
lean_del_object(v___x_5439_);
v_a_5445_ = lean_ctor_get(v_a_5437_, 0);
lean_inc(v_a_5445_);
lean_dec_ref_known(v_a_5437_, 1);
v___x_5446_ = lean_unsigned_to_nat(1u);
v___x_5447_ = lean_nat_add(v_a_5420_, v___x_5446_);
lean_dec(v_a_5420_);
v_a_5420_ = v___x_5447_;
v_b_5421_ = v_a_5445_;
goto _start;
}
}
}
else
{
lean_object* v_a_5450_; lean_object* v___x_5452_; uint8_t v_isShared_5453_; uint8_t v_isSharedCheck_5457_; 
lean_dec(v_a_5420_);
lean_dec_ref(v_config_5419_);
v_a_5450_ = lean_ctor_get(v___y_5436_, 0);
v_isSharedCheck_5457_ = !lean_is_exclusive(v___y_5436_);
if (v_isSharedCheck_5457_ == 0)
{
v___x_5452_ = v___y_5436_;
v_isShared_5453_ = v_isSharedCheck_5457_;
goto v_resetjp_5451_;
}
else
{
lean_inc(v_a_5450_);
lean_dec(v___y_5436_);
v___x_5452_ = lean_box(0);
v_isShared_5453_ = v_isSharedCheck_5457_;
goto v_resetjp_5451_;
}
v_resetjp_5451_:
{
lean_object* v___x_5455_; 
if (v_isShared_5453_ == 0)
{
v___x_5455_ = v___x_5452_;
goto v_reusejp_5454_;
}
else
{
lean_object* v_reuseFailAlloc_5456_; 
v_reuseFailAlloc_5456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5456_, 0, v_a_5450_);
v___x_5455_ = v_reuseFailAlloc_5456_;
goto v_reusejp_5454_;
}
v_reusejp_5454_:
{
return v___x_5455_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_5568_ = _args[0];
lean_object* v___x_5569_ = _args[1];
lean_object* v_methods_5570_ = _args[2];
lean_object* v_config_5571_ = _args[3];
lean_object* v_a_5572_ = _args[4];
lean_object* v_b_5573_ = _args[5];
lean_object* v___y_5574_ = _args[6];
lean_object* v___y_5575_ = _args[7];
lean_object* v___y_5576_ = _args[8];
lean_object* v___y_5577_ = _args[9];
lean_object* v___y_5578_ = _args[10];
lean_object* v___y_5579_ = _args[11];
lean_object* v___y_5580_ = _args[12];
lean_object* v___y_5581_ = _args[13];
lean_object* v___y_5582_ = _args[14];
lean_object* v___y_5583_ = _args[15];
lean_object* v___y_5584_ = _args[16];
lean_object* v___y_5585_ = _args[17];
lean_object* v___y_5586_ = _args[18];
_start:
{
lean_object* v_res_5587_; 
v_res_5587_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(v_upperBound_5568_, v___x_5569_, v_methods_5570_, v_config_5571_, v_a_5572_, v_b_5573_, v___y_5574_, v___y_5575_, v___y_5576_, v___y_5577_, v___y_5578_, v___y_5579_, v___y_5580_, v___y_5581_, v___y_5582_, v___y_5583_, v___y_5584_, v___y_5585_);
lean_dec(v___y_5585_);
lean_dec_ref(v___y_5584_);
lean_dec(v___y_5583_);
lean_dec_ref(v___y_5582_);
lean_dec(v___y_5581_);
lean_dec_ref(v___y_5580_);
lean_dec(v___y_5579_);
lean_dec_ref(v___y_5578_);
lean_dec(v___y_5577_);
lean_dec(v___y_5576_);
lean_dec_ref(v___y_5575_);
lean_dec(v___y_5574_);
lean_dec_ref(v_methods_5570_);
lean_dec_ref(v___x_5569_);
lean_dec(v_upperBound_5568_);
return v_res_5587_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go(lean_object* v_methods_5588_, lean_object* v_config_5589_, lean_object* v_a_5590_, lean_object* v_a_5591_, lean_object* v_a_5592_, lean_object* v_a_5593_, lean_object* v_a_5594_, lean_object* v_a_5595_, lean_object* v_a_5596_, lean_object* v_a_5597_, lean_object* v_a_5598_, lean_object* v_a_5599_, lean_object* v_a_5600_, lean_object* v_a_5601_){
_start:
{
lean_object* v___x_5603_; lean_object* v_hypotheses_5604_; lean_object* v___x_5605_; lean_object* v_newHyps_5606_; lean_object* v___x_5607_; lean_object* v___x_5608_; lean_object* v___x_5609_; lean_object* v___x_5610_; 
v___x_5603_ = lean_st_ref_get(v_a_5592_);
v_hypotheses_5604_ = lean_ctor_get(v___x_5603_, 3);
lean_inc_ref(v_hypotheses_5604_);
lean_dec(v___x_5603_);
v___x_5605_ = lean_array_get_size(v_hypotheses_5604_);
v_newHyps_5606_ = lean_mk_empty_array_with_capacity(v___x_5605_);
v___x_5607_ = lean_unsigned_to_nat(0u);
v___x_5608_ = lean_box(0);
v___x_5609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5609_, 0, v___x_5608_);
lean_ctor_set(v___x_5609_, 1, v_newHyps_5606_);
v___x_5610_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(v___x_5605_, v_hypotheses_5604_, v_methods_5588_, v_config_5589_, v___x_5607_, v___x_5609_, v_a_5590_, v_a_5591_, v_a_5592_, v_a_5593_, v_a_5594_, v_a_5595_, v_a_5596_, v_a_5597_, v_a_5598_, v_a_5599_, v_a_5600_, v_a_5601_);
lean_dec_ref(v_hypotheses_5604_);
if (lean_obj_tag(v___x_5610_) == 0)
{
lean_object* v_a_5611_; lean_object* v___x_5613_; uint8_t v_isShared_5614_; uint8_t v_isSharedCheck_5640_; 
v_a_5611_ = lean_ctor_get(v___x_5610_, 0);
v_isSharedCheck_5640_ = !lean_is_exclusive(v___x_5610_);
if (v_isSharedCheck_5640_ == 0)
{
v___x_5613_ = v___x_5610_;
v_isShared_5614_ = v_isSharedCheck_5640_;
goto v_resetjp_5612_;
}
else
{
lean_inc(v_a_5611_);
lean_dec(v___x_5610_);
v___x_5613_ = lean_box(0);
v_isShared_5614_ = v_isSharedCheck_5640_;
goto v_resetjp_5612_;
}
v_resetjp_5612_:
{
lean_object* v_fst_5615_; 
v_fst_5615_ = lean_ctor_get(v_a_5611_, 0);
if (lean_obj_tag(v_fst_5615_) == 0)
{
lean_object* v_snd_5616_; lean_object* v___x_5617_; lean_object* v_caches_5618_; lean_object* v_typeAnalysis_5619_; lean_object* v_target_5620_; uint8_t v_didChange_5621_; lean_object* v___x_5623_; uint8_t v_isShared_5624_; uint8_t v_isSharedCheck_5634_; 
v_snd_5616_ = lean_ctor_get(v_a_5611_, 1);
lean_inc(v_snd_5616_);
lean_dec(v_a_5611_);
v___x_5617_ = lean_st_ref_take(v_a_5592_);
v_caches_5618_ = lean_ctor_get(v___x_5617_, 0);
v_typeAnalysis_5619_ = lean_ctor_get(v___x_5617_, 1);
v_target_5620_ = lean_ctor_get(v___x_5617_, 2);
v_didChange_5621_ = lean_ctor_get_uint8(v___x_5617_, sizeof(void*)*4);
v_isSharedCheck_5634_ = !lean_is_exclusive(v___x_5617_);
if (v_isSharedCheck_5634_ == 0)
{
lean_object* v_unused_5635_; 
v_unused_5635_ = lean_ctor_get(v___x_5617_, 3);
lean_dec(v_unused_5635_);
v___x_5623_ = v___x_5617_;
v_isShared_5624_ = v_isSharedCheck_5634_;
goto v_resetjp_5622_;
}
else
{
lean_inc(v_target_5620_);
lean_inc(v_typeAnalysis_5619_);
lean_inc(v_caches_5618_);
lean_dec(v___x_5617_);
v___x_5623_ = lean_box(0);
v_isShared_5624_ = v_isSharedCheck_5634_;
goto v_resetjp_5622_;
}
v_resetjp_5622_:
{
lean_object* v___x_5626_; 
if (v_isShared_5624_ == 0)
{
lean_ctor_set(v___x_5623_, 3, v_snd_5616_);
v___x_5626_ = v___x_5623_;
goto v_reusejp_5625_;
}
else
{
lean_object* v_reuseFailAlloc_5633_; 
v_reuseFailAlloc_5633_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_5633_, 0, v_caches_5618_);
lean_ctor_set(v_reuseFailAlloc_5633_, 1, v_typeAnalysis_5619_);
lean_ctor_set(v_reuseFailAlloc_5633_, 2, v_target_5620_);
lean_ctor_set(v_reuseFailAlloc_5633_, 3, v_snd_5616_);
lean_ctor_set_uint8(v_reuseFailAlloc_5633_, sizeof(void*)*4, v_didChange_5621_);
v___x_5626_ = v_reuseFailAlloc_5633_;
goto v_reusejp_5625_;
}
v_reusejp_5625_:
{
lean_object* v___x_5627_; uint8_t v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5631_; 
v___x_5627_ = lean_st_ref_put(v_a_5592_, v___x_5626_);
v___x_5628_ = 0;
v___x_5629_ = lean_box(v___x_5628_);
if (v_isShared_5614_ == 0)
{
lean_ctor_set(v___x_5613_, 0, v___x_5629_);
v___x_5631_ = v___x_5613_;
goto v_reusejp_5630_;
}
else
{
lean_object* v_reuseFailAlloc_5632_; 
v_reuseFailAlloc_5632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5632_, 0, v___x_5629_);
v___x_5631_ = v_reuseFailAlloc_5632_;
goto v_reusejp_5630_;
}
v_reusejp_5630_:
{
return v___x_5631_;
}
}
}
}
else
{
lean_object* v_val_5636_; lean_object* v___x_5638_; 
lean_inc_ref(v_fst_5615_);
lean_dec(v_a_5611_);
v_val_5636_ = lean_ctor_get(v_fst_5615_, 0);
lean_inc(v_val_5636_);
lean_dec_ref_known(v_fst_5615_, 1);
if (v_isShared_5614_ == 0)
{
lean_ctor_set(v___x_5613_, 0, v_val_5636_);
v___x_5638_ = v___x_5613_;
goto v_reusejp_5637_;
}
else
{
lean_object* v_reuseFailAlloc_5639_; 
v_reuseFailAlloc_5639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5639_, 0, v_val_5636_);
v___x_5638_ = v_reuseFailAlloc_5639_;
goto v_reusejp_5637_;
}
v_reusejp_5637_:
{
return v___x_5638_;
}
}
}
}
else
{
lean_object* v_a_5641_; lean_object* v___x_5643_; uint8_t v_isShared_5644_; uint8_t v_isSharedCheck_5648_; 
v_a_5641_ = lean_ctor_get(v___x_5610_, 0);
v_isSharedCheck_5648_ = !lean_is_exclusive(v___x_5610_);
if (v_isSharedCheck_5648_ == 0)
{
v___x_5643_ = v___x_5610_;
v_isShared_5644_ = v_isSharedCheck_5648_;
goto v_resetjp_5642_;
}
else
{
lean_inc(v_a_5641_);
lean_dec(v___x_5610_);
v___x_5643_ = lean_box(0);
v_isShared_5644_ = v_isSharedCheck_5648_;
goto v_resetjp_5642_;
}
v_resetjp_5642_:
{
lean_object* v___x_5646_; 
if (v_isShared_5644_ == 0)
{
v___x_5646_ = v___x_5643_;
goto v_reusejp_5645_;
}
else
{
lean_object* v_reuseFailAlloc_5647_; 
v_reuseFailAlloc_5647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5647_, 0, v_a_5641_);
v___x_5646_ = v_reuseFailAlloc_5647_;
goto v_reusejp_5645_;
}
v_reusejp_5645_:
{
return v___x_5646_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go___boxed(lean_object* v_methods_5649_, lean_object* v_config_5650_, lean_object* v_a_5651_, lean_object* v_a_5652_, lean_object* v_a_5653_, lean_object* v_a_5654_, lean_object* v_a_5655_, lean_object* v_a_5656_, lean_object* v_a_5657_, lean_object* v_a_5658_, lean_object* v_a_5659_, lean_object* v_a_5660_, lean_object* v_a_5661_, lean_object* v_a_5662_, lean_object* v_a_5663_){
_start:
{
lean_object* v_res_5664_; 
v_res_5664_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go(v_methods_5649_, v_config_5650_, v_a_5651_, v_a_5652_, v_a_5653_, v_a_5654_, v_a_5655_, v_a_5656_, v_a_5657_, v_a_5658_, v_a_5659_, v_a_5660_, v_a_5661_, v_a_5662_);
lean_dec(v_a_5662_);
lean_dec_ref(v_a_5661_);
lean_dec(v_a_5660_);
lean_dec_ref(v_a_5659_);
lean_dec(v_a_5658_);
lean_dec_ref(v_a_5657_);
lean_dec(v_a_5656_);
lean_dec_ref(v_a_5655_);
lean_dec(v_a_5654_);
lean_dec(v_a_5653_);
lean_dec_ref(v_a_5652_);
lean_dec(v_a_5651_);
lean_dec_ref(v_methods_5649_);
return v_res_5664_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0(lean_object* v_cls_5665_, lean_object* v_msg_5666_, lean_object* v___y_5667_, lean_object* v___y_5668_, lean_object* v___y_5669_, lean_object* v___y_5670_, lean_object* v___y_5671_, lean_object* v___y_5672_, lean_object* v___y_5673_, lean_object* v___y_5674_, lean_object* v___y_5675_, lean_object* v___y_5676_, lean_object* v___y_5677_, lean_object* v___y_5678_){
_start:
{
lean_object* v___x_5680_; 
v___x_5680_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___redArg(v_cls_5665_, v_msg_5666_, v___y_5675_, v___y_5676_, v___y_5677_, v___y_5678_);
return v___x_5680_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0___boxed(lean_object* v_cls_5681_, lean_object* v_msg_5682_, lean_object* v___y_5683_, lean_object* v___y_5684_, lean_object* v___y_5685_, lean_object* v___y_5686_, lean_object* v___y_5687_, lean_object* v___y_5688_, lean_object* v___y_5689_, lean_object* v___y_5690_, lean_object* v___y_5691_, lean_object* v___y_5692_, lean_object* v___y_5693_, lean_object* v___y_5694_, lean_object* v___y_5695_){
_start:
{
lean_object* v_res_5696_; 
v_res_5696_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__0(v_cls_5681_, v_msg_5682_, v___y_5683_, v___y_5684_, v___y_5685_, v___y_5686_, v___y_5687_, v___y_5688_, v___y_5689_, v___y_5690_, v___y_5691_, v___y_5692_, v___y_5693_, v___y_5694_);
lean_dec(v___y_5694_);
lean_dec_ref(v___y_5693_);
lean_dec(v___y_5692_);
lean_dec_ref(v___y_5691_);
lean_dec(v___y_5690_);
lean_dec_ref(v___y_5689_);
lean_dec(v___y_5688_);
lean_dec_ref(v___y_5687_);
lean_dec(v___y_5686_);
lean_dec(v___y_5685_);
lean_dec_ref(v___y_5684_);
lean_dec(v___y_5683_);
return v_res_5696_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1(lean_object* v_upperBound_5697_, lean_object* v___x_5698_, lean_object* v_methods_5699_, lean_object* v_config_5700_, lean_object* v_inst_5701_, lean_object* v_R_5702_, lean_object* v_a_5703_, lean_object* v_b_5704_, lean_object* v_c_5705_, lean_object* v___y_5706_, lean_object* v___y_5707_, lean_object* v___y_5708_, lean_object* v___y_5709_, lean_object* v___y_5710_, lean_object* v___y_5711_, lean_object* v___y_5712_, lean_object* v___y_5713_, lean_object* v___y_5714_, lean_object* v___y_5715_, lean_object* v___y_5716_, lean_object* v___y_5717_){
_start:
{
lean_object* v___x_5719_; 
v___x_5719_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___redArg(v_upperBound_5697_, v___x_5698_, v_methods_5699_, v_config_5700_, v_a_5703_, v_b_5704_, v___y_5706_, v___y_5707_, v___y_5708_, v___y_5709_, v___y_5710_, v___y_5711_, v___y_5712_, v___y_5713_, v___y_5714_, v___y_5715_, v___y_5716_, v___y_5717_);
return v___x_5719_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_5720_ = _args[0];
lean_object* v___x_5721_ = _args[1];
lean_object* v_methods_5722_ = _args[2];
lean_object* v_config_5723_ = _args[3];
lean_object* v_inst_5724_ = _args[4];
lean_object* v_R_5725_ = _args[5];
lean_object* v_a_5726_ = _args[6];
lean_object* v_b_5727_ = _args[7];
lean_object* v_c_5728_ = _args[8];
lean_object* v___y_5729_ = _args[9];
lean_object* v___y_5730_ = _args[10];
lean_object* v___y_5731_ = _args[11];
lean_object* v___y_5732_ = _args[12];
lean_object* v___y_5733_ = _args[13];
lean_object* v___y_5734_ = _args[14];
lean_object* v___y_5735_ = _args[15];
lean_object* v___y_5736_ = _args[16];
lean_object* v___y_5737_ = _args[17];
lean_object* v___y_5738_ = _args[18];
lean_object* v___y_5739_ = _args[19];
lean_object* v___y_5740_ = _args[20];
lean_object* v___y_5741_ = _args[21];
_start:
{
lean_object* v_res_5742_; 
v_res_5742_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go_spec__1(v_upperBound_5720_, v___x_5721_, v_methods_5722_, v_config_5723_, v_inst_5724_, v_R_5725_, v_a_5726_, v_b_5727_, v_c_5728_, v___y_5729_, v___y_5730_, v___y_5731_, v___y_5732_, v___y_5733_, v___y_5734_, v___y_5735_, v___y_5736_, v___y_5737_, v___y_5738_, v___y_5739_, v___y_5740_);
lean_dec(v___y_5740_);
lean_dec_ref(v___y_5739_);
lean_dec(v___y_5738_);
lean_dec_ref(v___y_5737_);
lean_dec(v___y_5736_);
lean_dec_ref(v___y_5735_);
lean_dec(v___y_5734_);
lean_dec_ref(v___y_5733_);
lean_dec(v___y_5732_);
lean_dec(v___y_5731_);
lean_dec_ref(v___y_5730_);
lean_dec(v___y_5729_);
lean_dec_ref(v_methods_5722_);
lean_dec_ref(v___x_5721_);
lean_dec(v_upperBound_5720_);
return v_res_5742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps(lean_object* v_methods_5743_, lean_object* v_config_5744_, lean_object* v_a_5745_, lean_object* v_a_5746_, lean_object* v_a_5747_, lean_object* v_a_5748_, lean_object* v_a_5749_, lean_object* v_a_5750_, lean_object* v_a_5751_, lean_object* v_a_5752_, lean_object* v_a_5753_, lean_object* v_a_5754_, lean_object* v_a_5755_){
_start:
{
lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v___x_5759_; 
v___x_5757_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg___closed__1);
v___x_5758_ = lean_st_mk_ref(v___x_5757_);
v___x_5759_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps_go(v_methods_5743_, v_config_5744_, v___x_5758_, v_a_5745_, v_a_5746_, v_a_5747_, v_a_5748_, v_a_5749_, v_a_5750_, v_a_5751_, v_a_5752_, v_a_5753_, v_a_5754_, v_a_5755_);
if (lean_obj_tag(v___x_5759_) == 0)
{
lean_object* v_a_5760_; lean_object* v___x_5762_; uint8_t v_isShared_5763_; uint8_t v_isSharedCheck_5768_; 
v_a_5760_ = lean_ctor_get(v___x_5759_, 0);
v_isSharedCheck_5768_ = !lean_is_exclusive(v___x_5759_);
if (v_isSharedCheck_5768_ == 0)
{
v___x_5762_ = v___x_5759_;
v_isShared_5763_ = v_isSharedCheck_5768_;
goto v_resetjp_5761_;
}
else
{
lean_inc(v_a_5760_);
lean_dec(v___x_5759_);
v___x_5762_ = lean_box(0);
v_isShared_5763_ = v_isSharedCheck_5768_;
goto v_resetjp_5761_;
}
v_resetjp_5761_:
{
lean_object* v___x_5764_; lean_object* v___x_5766_; 
v___x_5764_ = lean_st_ref_get(v___x_5758_);
lean_dec(v___x_5758_);
lean_dec(v___x_5764_);
if (v_isShared_5763_ == 0)
{
v___x_5766_ = v___x_5762_;
goto v_reusejp_5765_;
}
else
{
lean_object* v_reuseFailAlloc_5767_; 
v_reuseFailAlloc_5767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5767_, 0, v_a_5760_);
v___x_5766_ = v_reuseFailAlloc_5767_;
goto v_reusejp_5765_;
}
v_reusejp_5765_:
{
return v___x_5766_;
}
}
}
else
{
lean_dec(v___x_5758_);
return v___x_5759_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps___boxed(lean_object* v_methods_5769_, lean_object* v_config_5770_, lean_object* v_a_5771_, lean_object* v_a_5772_, lean_object* v_a_5773_, lean_object* v_a_5774_, lean_object* v_a_5775_, lean_object* v_a_5776_, lean_object* v_a_5777_, lean_object* v_a_5778_, lean_object* v_a_5779_, lean_object* v_a_5780_, lean_object* v_a_5781_, lean_object* v_a_5782_){
_start:
{
lean_object* v_res_5783_; 
v_res_5783_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapDSimpHyps(v_methods_5769_, v_config_5770_, v_a_5771_, v_a_5772_, v_a_5773_, v_a_5774_, v_a_5775_, v_a_5776_, v_a_5777_, v_a_5778_, v_a_5779_, v_a_5780_, v_a_5781_);
lean_dec(v_a_5781_);
lean_dec_ref(v_a_5780_);
lean_dec(v_a_5779_);
lean_dec_ref(v_a_5778_);
lean_dec(v_a_5777_);
lean_dec_ref(v_a_5776_);
lean_dec(v_a_5775_);
lean_dec_ref(v_a_5774_);
lean_dec(v_a_5773_);
lean_dec(v_a_5772_);
lean_dec_ref(v_a_5771_);
lean_dec_ref(v_methods_5769_);
return v_res_5783_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5785_; lean_object* v___x_5786_; 
v___x_5785_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__0));
v___x_5786_ = l_Lean_stringToMessageData(v___x_5785_);
return v___x_5786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0(lean_object* v_name_5787_, lean_object* v_x_5788_, lean_object* v___y_5789_, lean_object* v___y_5790_, lean_object* v___y_5791_, lean_object* v___y_5792_, lean_object* v___y_5793_, lean_object* v___y_5794_, lean_object* v___y_5795_, lean_object* v___y_5796_, lean_object* v___y_5797_, lean_object* v___y_5798_, lean_object* v___y_5799_){
_start:
{
lean_object* v___x_5801_; lean_object* v___x_5802_; lean_object* v___x_5803_; lean_object* v___x_5804_; 
v___x_5801_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___closed__1);
v___x_5802_ = l_Lean_MessageData_ofName(v_name_5787_);
v___x_5803_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5803_, 0, v___x_5801_);
lean_ctor_set(v___x_5803_, 1, v___x_5802_);
v___x_5804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5804_, 0, v___x_5803_);
return v___x_5804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed(lean_object* v_name_5805_, lean_object* v_x_5806_, lean_object* v___y_5807_, lean_object* v___y_5808_, lean_object* v___y_5809_, lean_object* v___y_5810_, lean_object* v___y_5811_, lean_object* v___y_5812_, lean_object* v___y_5813_, lean_object* v___y_5814_, lean_object* v___y_5815_, lean_object* v___y_5816_, lean_object* v___y_5817_, lean_object* v___y_5818_){
_start:
{
lean_object* v_res_5819_; 
v_res_5819_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0(v_name_5805_, v_x_5806_, v___y_5807_, v___y_5808_, v___y_5809_, v___y_5810_, v___y_5811_, v___y_5812_, v___y_5813_, v___y_5814_, v___y_5815_, v___y_5816_, v___y_5817_);
lean_dec(v___y_5817_);
lean_dec_ref(v___y_5816_);
lean_dec(v___y_5815_);
lean_dec_ref(v___y_5814_);
lean_dec(v___y_5813_);
lean_dec_ref(v___y_5812_);
lean_dec(v___y_5811_);
lean_dec_ref(v___y_5810_);
lean_dec(v___y_5809_);
lean_dec(v___y_5808_);
lean_dec_ref(v___y_5807_);
lean_dec_ref(v_x_5806_);
return v_res_5819_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0(void){
_start:
{
lean_object* v___x_5820_; 
v___x_5820_ = l_instMonadExceptOfEIO___redArg();
return v___x_5820_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1(void){
_start:
{
lean_object* v___x_5821_; lean_object* v___x_5822_; 
v___x_5821_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__0);
v___x_5822_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5821_);
return v___x_5822_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2(void){
_start:
{
lean_object* v___x_5823_; lean_object* v___x_5824_; 
v___x_5823_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__1);
v___x_5824_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5823_);
return v___x_5824_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3(void){
_start:
{
lean_object* v___x_5825_; lean_object* v___x_5826_; 
v___x_5825_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__2);
v___x_5826_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5825_);
return v___x_5826_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4(void){
_start:
{
lean_object* v___x_5827_; lean_object* v___x_5828_; 
v___x_5827_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__3);
v___x_5828_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5827_);
return v___x_5828_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5(void){
_start:
{
lean_object* v___x_5829_; lean_object* v___x_5830_; 
v___x_5829_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__4);
v___x_5830_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5829_);
return v___x_5830_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6(void){
_start:
{
lean_object* v___x_5831_; lean_object* v___x_5832_; 
v___x_5831_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__5);
v___x_5832_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5831_);
return v___x_5832_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7(void){
_start:
{
lean_object* v___x_5833_; lean_object* v___x_5834_; 
v___x_5833_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__6);
v___x_5834_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5833_);
return v___x_5834_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8(void){
_start:
{
lean_object* v___x_5835_; lean_object* v___x_5836_; 
v___x_5835_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__7);
v___x_5836_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5835_);
return v___x_5836_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9(void){
_start:
{
lean_object* v___x_5837_; lean_object* v___x_5838_; 
v___x_5837_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__8);
v___x_5838_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5837_);
return v___x_5838_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10(void){
_start:
{
lean_object* v___x_5839_; lean_object* v___x_5840_; 
v___x_5839_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__9);
v___x_5840_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v___x_5839_);
return v___x_5840_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11(void){
_start:
{
lean_object* v___x_5841_; lean_object* v___x_5842_; 
v___x_5841_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__10);
v___x_5842_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v___x_5841_);
return v___x_5842_;
}
}
static double _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13(void){
_start:
{
lean_object* v___x_5844_; double v___x_5845_; 
v___x_5844_ = lean_unsigned_to_nat(1000000000u);
v___x_5845_ = lean_float_of_nat(v___x_5844_);
return v___x_5845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run(lean_object* v_pass_5846_, lean_object* v_a_5847_, lean_object* v_a_5848_, lean_object* v_a_5849_, lean_object* v_a_5850_, lean_object* v_a_5851_, lean_object* v_a_5852_, lean_object* v_a_5853_, lean_object* v_a_5854_, lean_object* v_a_5855_, lean_object* v_a_5856_, lean_object* v_a_5857_){
_start:
{
lean_object* v___x_5859_; lean_object* v_toApplicative_5860_; lean_object* v_toFunctor_5861_; lean_object* v_toSeq_5862_; lean_object* v_toSeqLeft_5863_; lean_object* v_toSeqRight_5864_; lean_object* v___f_5865_; lean_object* v___f_5866_; lean_object* v___f_5867_; lean_object* v___f_5868_; lean_object* v___x_5869_; lean_object* v___f_5870_; lean_object* v___f_5871_; lean_object* v___f_5872_; lean_object* v___x_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; lean_object* v_toApplicative_5876_; lean_object* v___x_5878_; uint8_t v_isShared_5879_; uint8_t v_isSharedCheck_6019_; 
v___x_5859_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__3);
v_toApplicative_5860_ = lean_ctor_get(v___x_5859_, 0);
v_toFunctor_5861_ = lean_ctor_get(v_toApplicative_5860_, 0);
v_toSeq_5862_ = lean_ctor_get(v_toApplicative_5860_, 2);
v_toSeqLeft_5863_ = lean_ctor_get(v_toApplicative_5860_, 3);
v_toSeqRight_5864_ = lean_ctor_get(v_toApplicative_5860_, 4);
v___f_5865_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__4));
v___f_5866_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__5));
lean_inc_ref_n(v_toFunctor_5861_, 2);
v___f_5867_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5867_, 0, v_toFunctor_5861_);
v___f_5868_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5868_, 0, v_toFunctor_5861_);
v___x_5869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5869_, 0, v___f_5867_);
lean_ctor_set(v___x_5869_, 1, v___f_5868_);
lean_inc(v_toSeqRight_5864_);
v___f_5870_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5870_, 0, v_toSeqRight_5864_);
lean_inc(v_toSeqLeft_5863_);
v___f_5871_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5871_, 0, v_toSeqLeft_5863_);
lean_inc(v_toSeq_5862_);
v___f_5872_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5872_, 0, v_toSeq_5862_);
v___x_5873_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5873_, 0, v___x_5869_);
lean_ctor_set(v___x_5873_, 1, v___f_5865_);
lean_ctor_set(v___x_5873_, 2, v___f_5872_);
lean_ctor_set(v___x_5873_, 3, v___f_5871_);
lean_ctor_set(v___x_5873_, 4, v___f_5870_);
v___x_5874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5874_, 0, v___x_5873_);
lean_ctor_set(v___x_5874_, 1, v___f_5866_);
v___x_5875_ = l_StateRefT_x27_instMonad___redArg(v___x_5874_);
v_toApplicative_5876_ = lean_ctor_get(v___x_5875_, 0);
v_isSharedCheck_6019_ = !lean_is_exclusive(v___x_5875_);
if (v_isSharedCheck_6019_ == 0)
{
lean_object* v_unused_6020_; 
v_unused_6020_ = lean_ctor_get(v___x_5875_, 1);
lean_dec(v_unused_6020_);
v___x_5878_ = v___x_5875_;
v_isShared_5879_ = v_isSharedCheck_6019_;
goto v_resetjp_5877_;
}
else
{
lean_inc(v_toApplicative_5876_);
lean_dec(v___x_5875_);
v___x_5878_ = lean_box(0);
v_isShared_5879_ = v_isSharedCheck_6019_;
goto v_resetjp_5877_;
}
v_resetjp_5877_:
{
lean_object* v_toFunctor_5880_; lean_object* v_toSeq_5881_; lean_object* v_toSeqLeft_5882_; lean_object* v_toSeqRight_5883_; lean_object* v___x_5885_; uint8_t v_isShared_5886_; uint8_t v_isSharedCheck_6017_; 
v_toFunctor_5880_ = lean_ctor_get(v_toApplicative_5876_, 0);
v_toSeq_5881_ = lean_ctor_get(v_toApplicative_5876_, 2);
v_toSeqLeft_5882_ = lean_ctor_get(v_toApplicative_5876_, 3);
v_toSeqRight_5883_ = lean_ctor_get(v_toApplicative_5876_, 4);
v_isSharedCheck_6017_ = !lean_is_exclusive(v_toApplicative_5876_);
if (v_isSharedCheck_6017_ == 0)
{
lean_object* v_unused_6018_; 
v_unused_6018_ = lean_ctor_get(v_toApplicative_5876_, 1);
lean_dec(v_unused_6018_);
v___x_5885_ = v_toApplicative_5876_;
v_isShared_5886_ = v_isSharedCheck_6017_;
goto v_resetjp_5884_;
}
else
{
lean_inc(v_toSeqRight_5883_);
lean_inc(v_toSeqLeft_5882_);
lean_inc(v_toSeq_5881_);
lean_inc(v_toFunctor_5880_);
lean_dec(v_toApplicative_5876_);
v___x_5885_ = lean_box(0);
v_isShared_5886_ = v_isSharedCheck_6017_;
goto v_resetjp_5884_;
}
v_resetjp_5884_:
{
lean_object* v___f_5887_; lean_object* v___f_5888_; lean_object* v___f_5889_; lean_object* v___f_5890_; lean_object* v___x_5891_; lean_object* v___f_5892_; lean_object* v___f_5893_; lean_object* v___f_5894_; lean_object* v___x_5896_; 
v___f_5887_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__6));
v___f_5888_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_withGrindGoal___redArg___closed__7));
lean_inc_ref(v_toFunctor_5880_);
v___f_5889_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5889_, 0, v_toFunctor_5880_);
v___f_5890_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5890_, 0, v_toFunctor_5880_);
v___x_5891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5891_, 0, v___f_5889_);
lean_ctor_set(v___x_5891_, 1, v___f_5890_);
v___f_5892_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5892_, 0, v_toSeqRight_5883_);
v___f_5893_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5893_, 0, v_toSeqLeft_5882_);
v___f_5894_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5894_, 0, v_toSeq_5881_);
if (v_isShared_5886_ == 0)
{
lean_ctor_set(v___x_5885_, 4, v___f_5892_);
lean_ctor_set(v___x_5885_, 3, v___f_5893_);
lean_ctor_set(v___x_5885_, 2, v___f_5894_);
lean_ctor_set(v___x_5885_, 1, v___f_5887_);
lean_ctor_set(v___x_5885_, 0, v___x_5891_);
v___x_5896_ = v___x_5885_;
goto v_reusejp_5895_;
}
else
{
lean_object* v_reuseFailAlloc_6016_; 
v_reuseFailAlloc_6016_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6016_, 0, v___x_5891_);
lean_ctor_set(v_reuseFailAlloc_6016_, 1, v___f_5887_);
lean_ctor_set(v_reuseFailAlloc_6016_, 2, v___f_5894_);
lean_ctor_set(v_reuseFailAlloc_6016_, 3, v___f_5893_);
lean_ctor_set(v_reuseFailAlloc_6016_, 4, v___f_5892_);
v___x_5896_ = v_reuseFailAlloc_6016_;
goto v_reusejp_5895_;
}
v_reusejp_5895_:
{
lean_object* v___x_5898_; 
if (v_isShared_5879_ == 0)
{
lean_ctor_set(v___x_5878_, 1, v___f_5888_);
lean_ctor_set(v___x_5878_, 0, v___x_5896_);
v___x_5898_ = v___x_5878_;
goto v_reusejp_5897_;
}
else
{
lean_object* v_reuseFailAlloc_6015_; 
v_reuseFailAlloc_6015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6015_, 0, v___x_5896_);
lean_ctor_set(v_reuseFailAlloc_6015_, 1, v___f_5888_);
v___x_5898_ = v_reuseFailAlloc_6015_;
goto v_reusejp_5897_;
}
v_reusejp_5897_:
{
lean_object* v___x_5899_; lean_object* v___x_5900_; lean_object* v___x_5901_; lean_object* v___x_5902_; lean_object* v___x_5903_; lean_object* v___x_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v_toMonadRef_5908_; lean_object* v___x_5909_; lean_object* v_name_5910_; lean_object* v_run_x27_5911_; lean_object* v___x_5913_; uint8_t v_isShared_5914_; uint8_t v_isSharedCheck_6014_; 
v___x_5899_ = l_StateRefT_x27_instMonad___redArg(v___x_5898_);
v___x_5900_ = l_ReaderT_instMonad___redArg(v___x_5899_);
v___x_5901_ = l_StateRefT_x27_instMonad___redArg(v___x_5900_);
v___x_5902_ = l_ReaderT_instMonad___redArg(v___x_5901_);
v___x_5903_ = l_ReaderT_instMonad___redArg(v___x_5902_);
v___x_5904_ = l_StateRefT_x27_instMonad___redArg(v___x_5903_);
v___x_5905_ = l_ReaderT_instMonad___redArg(v___x_5904_);
v___x_5906_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__10);
v___x_5907_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__21);
v_toMonadRef_5908_ = lean_ctor_get(v___x_5907_, 0);
v___x_5909_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__11);
v_name_5910_ = lean_ctor_get(v_pass_5846_, 0);
v_run_x27_5911_ = lean_ctor_get(v_pass_5846_, 1);
v_isSharedCheck_6014_ = !lean_is_exclusive(v_pass_5846_);
if (v_isSharedCheck_6014_ == 0)
{
v___x_5913_ = v_pass_5846_;
v_isShared_5914_ = v_isSharedCheck_6014_;
goto v_resetjp_5912_;
}
else
{
lean_inc(v_run_x27_5911_);
lean_inc(v_name_5910_);
lean_dec(v_pass_5846_);
v___x_5913_ = lean_box(0);
v_isShared_5914_ = v_isSharedCheck_6014_;
goto v_resetjp_5912_;
}
v_resetjp_5912_:
{
lean_object* v___x_5915_; lean_object* v_toCold_5916_; lean_object* v_options_5917_; uint8_t v_hasTrace_5918_; 
v___x_5915_ = l_Lean_KVMap_instValueBool;
v_toCold_5916_ = lean_ctor_get(v_a_5856_, 0);
v_options_5917_ = lean_ctor_get(v_toCold_5916_, 2);
v_hasTrace_5918_ = lean_ctor_get_uint8(v_options_5917_, sizeof(void*)*1);
if (v_hasTrace_5918_ == 0)
{
lean_object* v___x_5919_; 
lean_del_object(v___x_5913_);
lean_dec(v_name_5910_);
lean_dec_ref(v___x_5905_);
lean_inc(v_a_5857_);
lean_inc_ref(v_a_5856_);
lean_inc(v_a_5855_);
lean_inc_ref(v_a_5854_);
lean_inc(v_a_5853_);
lean_inc_ref(v_a_5852_);
lean_inc(v_a_5851_);
lean_inc_ref(v_a_5850_);
lean_inc(v_a_5849_);
lean_inc(v_a_5848_);
lean_inc_ref(v_a_5847_);
v___x_5919_ = lean_apply_12(v_run_x27_5911_, v_a_5847_, v_a_5848_, v_a_5849_, v_a_5850_, v_a_5851_, v_a_5852_, v_a_5853_, v_a_5854_, v_a_5855_, v_a_5856_, v_a_5857_, lean_box(0));
return v___x_5919_;
}
else
{
lean_object* v_inheritedTraceOptions_5920_; lean_object* v___f_5921_; lean_object* v___f_5922_; lean_object* v___f_5923_; lean_object* v___x_5924_; lean_object* v___x_5925_; lean_object* v___x_5926_; uint8_t v___x_5927_; lean_object* v___y_5929_; lean_object* v___y_5930_; lean_object* v_a_5931_; lean_object* v___y_5947_; lean_object* v___y_5948_; lean_object* v_a_5949_; 
v_inheritedTraceOptions_5920_ = lean_ctor_get(v_toCold_5916_, 11);
v___f_5921_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed), 14, 1);
lean_closure_set(v___f_5921_, 0, v_name_5910_);
v___f_5922_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__35);
v___f_5923_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__12));
v___x_5924_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_5925_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_5926_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_5927_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5920_, v_options_5917_, v___x_5926_);
if (v___x_5927_ == 0)
{
lean_object* v___x_6010_; lean_object* v___x_6011_; uint8_t v___x_6012_; 
v___x_6010_ = l_Lean_trace_profiler;
v___x_6011_ = l_Lean_Option_get___redArg(v___x_5915_, v_options_5917_, v___x_6010_);
v___x_6012_ = lean_unbox(v___x_6011_);
lean_dec(v___x_6011_);
if (v___x_6012_ == 0)
{
lean_object* v___x_6013_; 
lean_dec_ref(v___f_5921_);
lean_del_object(v___x_5913_);
lean_dec_ref(v___x_5905_);
lean_inc(v_a_5857_);
lean_inc_ref(v_a_5856_);
lean_inc(v_a_5855_);
lean_inc_ref(v_a_5854_);
lean_inc(v_a_5853_);
lean_inc_ref(v_a_5852_);
lean_inc(v_a_5851_);
lean_inc_ref(v_a_5850_);
lean_inc(v_a_5849_);
lean_inc(v_a_5848_);
lean_inc_ref(v_a_5847_);
v___x_6013_ = lean_apply_12(v_run_x27_5911_, v_a_5847_, v_a_5848_, v_a_5849_, v_a_5850_, v_a_5851_, v_a_5852_, v_a_5853_, v_a_5854_, v_a_5855_, v_a_5856_, v_a_5857_, lean_box(0));
return v___x_6013_;
}
else
{
goto v___jp_5959_;
}
}
else
{
goto v___jp_5959_;
}
v___jp_5928_:
{
lean_object* v___x_5932_; double v___x_5933_; double v___x_5934_; double v___x_5935_; double v___x_5936_; double v___x_5937_; lean_object* v___x_5938_; lean_object* v___x_5939_; lean_object* v___x_5941_; 
v___x_5932_ = lean_io_mono_nanos_now();
v___x_5933_ = lean_float_of_nat(v___y_5930_);
v___x_5934_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13);
v___x_5935_ = lean_float_div(v___x_5933_, v___x_5934_);
v___x_5936_ = lean_float_of_nat(v___x_5932_);
v___x_5937_ = lean_float_div(v___x_5936_, v___x_5934_);
v___x_5938_ = lean_box_float(v___x_5935_);
v___x_5939_ = lean_box_float(v___x_5937_);
if (v_isShared_5914_ == 0)
{
lean_ctor_set(v___x_5913_, 1, v___x_5939_);
lean_ctor_set(v___x_5913_, 0, v___x_5938_);
v___x_5941_ = v___x_5913_;
goto v_reusejp_5940_;
}
else
{
lean_object* v_reuseFailAlloc_5945_; 
v_reuseFailAlloc_5945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5945_, 0, v___x_5938_);
lean_ctor_set(v_reuseFailAlloc_5945_, 1, v___x_5939_);
v___x_5941_ = v_reuseFailAlloc_5945_;
goto v_reusejp_5940_;
}
v_reusejp_5940_:
{
lean_object* v___x_5942_; lean_object* v___x_28850__overap_5943_; lean_object* v___x_5944_; 
v___x_5942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5942_, 0, v_a_5931_);
lean_ctor_set(v___x_5942_, 1, v___x_5941_);
lean_inc_ref(v_toMonadRef_5908_);
v___x_28850__overap_5943_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_box(0), lean_box(0), v___x_5905_, v___x_5906_, v_toMonadRef_5908_, v___f_5922_, lean_box(0), v___x_5909_, v___f_5923_, v___x_5924_, v_hasTrace_5918_, v___x_5925_, v_options_5917_, v___x_5927_, v___y_5929_, v___f_5921_, v___x_5942_);
lean_inc(v_a_5857_);
lean_inc_ref(v_a_5856_);
lean_inc(v_a_5855_);
lean_inc_ref(v_a_5854_);
lean_inc(v_a_5853_);
lean_inc_ref(v_a_5852_);
lean_inc(v_a_5851_);
lean_inc_ref(v_a_5850_);
lean_inc(v_a_5849_);
lean_inc(v_a_5848_);
lean_inc_ref(v_a_5847_);
v___x_5944_ = lean_apply_12(v___x_28850__overap_5943_, v_a_5847_, v_a_5848_, v_a_5849_, v_a_5850_, v_a_5851_, v_a_5852_, v_a_5853_, v_a_5854_, v_a_5855_, v_a_5856_, v_a_5857_, lean_box(0));
return v___x_5944_;
}
}
v___jp_5946_:
{
lean_object* v___x_5950_; double v___x_5951_; double v___x_5952_; lean_object* v___x_5953_; lean_object* v___x_5954_; lean_object* v___x_5955_; lean_object* v___x_5956_; lean_object* v___x_28871__overap_5957_; lean_object* v___x_5958_; 
v___x_5950_ = lean_io_get_num_heartbeats();
v___x_5951_ = lean_float_of_nat(v___y_5947_);
v___x_5952_ = lean_float_of_nat(v___x_5950_);
v___x_5953_ = lean_box_float(v___x_5951_);
v___x_5954_ = lean_box_float(v___x_5952_);
v___x_5955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5955_, 0, v___x_5953_);
lean_ctor_set(v___x_5955_, 1, v___x_5954_);
v___x_5956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5956_, 0, v_a_5949_);
lean_ctor_set(v___x_5956_, 1, v___x_5955_);
lean_inc_ref(v_toMonadRef_5908_);
v___x_28871__overap_5957_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_box(0), lean_box(0), v___x_5905_, v___x_5906_, v_toMonadRef_5908_, v___f_5922_, lean_box(0), v___x_5909_, v___f_5923_, v___x_5924_, v_hasTrace_5918_, v___x_5925_, v_options_5917_, v___x_5927_, v___y_5948_, v___f_5921_, v___x_5956_);
lean_inc(v_a_5857_);
lean_inc_ref(v_a_5856_);
lean_inc(v_a_5855_);
lean_inc_ref(v_a_5854_);
lean_inc(v_a_5853_);
lean_inc_ref(v_a_5852_);
lean_inc(v_a_5851_);
lean_inc_ref(v_a_5850_);
lean_inc(v_a_5849_);
lean_inc(v_a_5848_);
lean_inc_ref(v_a_5847_);
v___x_5958_ = lean_apply_12(v___x_28871__overap_5957_, v_a_5847_, v_a_5848_, v_a_5849_, v_a_5850_, v_a_5851_, v_a_5852_, v_a_5853_, v_a_5854_, v_a_5855_, v_a_5856_, v_a_5857_, lean_box(0));
return v___x_5958_;
}
v___jp_5959_:
{
lean_object* v___x_28828__overap_5960_; lean_object* v___x_5961_; 
lean_inc_ref(v___x_5905_);
v___x_28828__overap_5960_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_box(0), v___x_5905_, v___x_5906_);
lean_inc(v_a_5857_);
lean_inc_ref(v_a_5856_);
lean_inc(v_a_5855_);
lean_inc_ref(v_a_5854_);
lean_inc(v_a_5853_);
lean_inc_ref(v_a_5852_);
lean_inc(v_a_5851_);
lean_inc_ref(v_a_5850_);
lean_inc(v_a_5849_);
lean_inc(v_a_5848_);
lean_inc_ref(v_a_5847_);
v___x_5961_ = lean_apply_12(v___x_28828__overap_5960_, v_a_5847_, v_a_5848_, v_a_5849_, v_a_5850_, v_a_5851_, v_a_5852_, v_a_5853_, v_a_5854_, v_a_5855_, v_a_5856_, v_a_5857_, lean_box(0));
if (lean_obj_tag(v___x_5961_) == 0)
{
lean_object* v_a_5962_; lean_object* v___x_5963_; lean_object* v___x_5964_; uint8_t v___x_5965_; 
v_a_5962_ = lean_ctor_get(v___x_5961_, 0);
lean_inc(v_a_5962_);
lean_dec_ref_known(v___x_5961_, 1);
v___x_5963_ = l_Lean_trace_profiler_useHeartbeats;
v___x_5964_ = l_Lean_Option_get___redArg(v___x_5915_, v_options_5917_, v___x_5963_);
v___x_5965_ = lean_unbox(v___x_5964_);
lean_dec(v___x_5964_);
if (v___x_5965_ == 0)
{
lean_object* v___x_5966_; lean_object* v___x_5967_; 
v___x_5966_ = lean_io_mono_nanos_now();
lean_inc(v_a_5857_);
lean_inc_ref(v_a_5856_);
lean_inc(v_a_5855_);
lean_inc_ref(v_a_5854_);
lean_inc(v_a_5853_);
lean_inc_ref(v_a_5852_);
lean_inc(v_a_5851_);
lean_inc_ref(v_a_5850_);
lean_inc(v_a_5849_);
lean_inc(v_a_5848_);
lean_inc_ref(v_a_5847_);
v___x_5967_ = lean_apply_12(v_run_x27_5911_, v_a_5847_, v_a_5848_, v_a_5849_, v_a_5850_, v_a_5851_, v_a_5852_, v_a_5853_, v_a_5854_, v_a_5855_, v_a_5856_, v_a_5857_, lean_box(0));
if (lean_obj_tag(v___x_5967_) == 0)
{
lean_object* v_a_5968_; lean_object* v___x_5970_; uint8_t v_isShared_5971_; uint8_t v_isSharedCheck_5975_; 
v_a_5968_ = lean_ctor_get(v___x_5967_, 0);
v_isSharedCheck_5975_ = !lean_is_exclusive(v___x_5967_);
if (v_isSharedCheck_5975_ == 0)
{
v___x_5970_ = v___x_5967_;
v_isShared_5971_ = v_isSharedCheck_5975_;
goto v_resetjp_5969_;
}
else
{
lean_inc(v_a_5968_);
lean_dec(v___x_5967_);
v___x_5970_ = lean_box(0);
v_isShared_5971_ = v_isSharedCheck_5975_;
goto v_resetjp_5969_;
}
v_resetjp_5969_:
{
lean_object* v___x_5973_; 
if (v_isShared_5971_ == 0)
{
lean_ctor_set_tag(v___x_5970_, 1);
v___x_5973_ = v___x_5970_;
goto v_reusejp_5972_;
}
else
{
lean_object* v_reuseFailAlloc_5974_; 
v_reuseFailAlloc_5974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5974_, 0, v_a_5968_);
v___x_5973_ = v_reuseFailAlloc_5974_;
goto v_reusejp_5972_;
}
v_reusejp_5972_:
{
v___y_5929_ = v_a_5962_;
v___y_5930_ = v___x_5966_;
v_a_5931_ = v___x_5973_;
goto v___jp_5928_;
}
}
}
else
{
lean_object* v_a_5976_; lean_object* v___x_5978_; uint8_t v_isShared_5979_; uint8_t v_isSharedCheck_5983_; 
v_a_5976_ = lean_ctor_get(v___x_5967_, 0);
v_isSharedCheck_5983_ = !lean_is_exclusive(v___x_5967_);
if (v_isSharedCheck_5983_ == 0)
{
v___x_5978_ = v___x_5967_;
v_isShared_5979_ = v_isSharedCheck_5983_;
goto v_resetjp_5977_;
}
else
{
lean_inc(v_a_5976_);
lean_dec(v___x_5967_);
v___x_5978_ = lean_box(0);
v_isShared_5979_ = v_isSharedCheck_5983_;
goto v_resetjp_5977_;
}
v_resetjp_5977_:
{
lean_object* v___x_5981_; 
if (v_isShared_5979_ == 0)
{
lean_ctor_set_tag(v___x_5978_, 0);
v___x_5981_ = v___x_5978_;
goto v_reusejp_5980_;
}
else
{
lean_object* v_reuseFailAlloc_5982_; 
v_reuseFailAlloc_5982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5982_, 0, v_a_5976_);
v___x_5981_ = v_reuseFailAlloc_5982_;
goto v_reusejp_5980_;
}
v_reusejp_5980_:
{
v___y_5929_ = v_a_5962_;
v___y_5930_ = v___x_5966_;
v_a_5931_ = v___x_5981_;
goto v___jp_5928_;
}
}
}
}
else
{
lean_object* v___x_5984_; lean_object* v___x_5985_; 
lean_del_object(v___x_5913_);
v___x_5984_ = lean_io_get_num_heartbeats();
lean_inc(v_a_5857_);
lean_inc_ref(v_a_5856_);
lean_inc(v_a_5855_);
lean_inc_ref(v_a_5854_);
lean_inc(v_a_5853_);
lean_inc_ref(v_a_5852_);
lean_inc(v_a_5851_);
lean_inc_ref(v_a_5850_);
lean_inc(v_a_5849_);
lean_inc(v_a_5848_);
lean_inc_ref(v_a_5847_);
v___x_5985_ = lean_apply_12(v_run_x27_5911_, v_a_5847_, v_a_5848_, v_a_5849_, v_a_5850_, v_a_5851_, v_a_5852_, v_a_5853_, v_a_5854_, v_a_5855_, v_a_5856_, v_a_5857_, lean_box(0));
if (lean_obj_tag(v___x_5985_) == 0)
{
lean_object* v_a_5986_; lean_object* v___x_5988_; uint8_t v_isShared_5989_; uint8_t v_isSharedCheck_5993_; 
v_a_5986_ = lean_ctor_get(v___x_5985_, 0);
v_isSharedCheck_5993_ = !lean_is_exclusive(v___x_5985_);
if (v_isSharedCheck_5993_ == 0)
{
v___x_5988_ = v___x_5985_;
v_isShared_5989_ = v_isSharedCheck_5993_;
goto v_resetjp_5987_;
}
else
{
lean_inc(v_a_5986_);
lean_dec(v___x_5985_);
v___x_5988_ = lean_box(0);
v_isShared_5989_ = v_isSharedCheck_5993_;
goto v_resetjp_5987_;
}
v_resetjp_5987_:
{
lean_object* v___x_5991_; 
if (v_isShared_5989_ == 0)
{
lean_ctor_set_tag(v___x_5988_, 1);
v___x_5991_ = v___x_5988_;
goto v_reusejp_5990_;
}
else
{
lean_object* v_reuseFailAlloc_5992_; 
v_reuseFailAlloc_5992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5992_, 0, v_a_5986_);
v___x_5991_ = v_reuseFailAlloc_5992_;
goto v_reusejp_5990_;
}
v_reusejp_5990_:
{
v___y_5947_ = v___x_5984_;
v___y_5948_ = v_a_5962_;
v_a_5949_ = v___x_5991_;
goto v___jp_5946_;
}
}
}
else
{
lean_object* v_a_5994_; lean_object* v___x_5996_; uint8_t v_isShared_5997_; uint8_t v_isSharedCheck_6001_; 
v_a_5994_ = lean_ctor_get(v___x_5985_, 0);
v_isSharedCheck_6001_ = !lean_is_exclusive(v___x_5985_);
if (v_isSharedCheck_6001_ == 0)
{
v___x_5996_ = v___x_5985_;
v_isShared_5997_ = v_isSharedCheck_6001_;
goto v_resetjp_5995_;
}
else
{
lean_inc(v_a_5994_);
lean_dec(v___x_5985_);
v___x_5996_ = lean_box(0);
v_isShared_5997_ = v_isSharedCheck_6001_;
goto v_resetjp_5995_;
}
v_resetjp_5995_:
{
lean_object* v___x_5999_; 
if (v_isShared_5997_ == 0)
{
lean_ctor_set_tag(v___x_5996_, 0);
v___x_5999_ = v___x_5996_;
goto v_reusejp_5998_;
}
else
{
lean_object* v_reuseFailAlloc_6000_; 
v_reuseFailAlloc_6000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6000_, 0, v_a_5994_);
v___x_5999_ = v_reuseFailAlloc_6000_;
goto v_reusejp_5998_;
}
v_reusejp_5998_:
{
v___y_5947_ = v___x_5984_;
v___y_5948_ = v_a_5962_;
v_a_5949_ = v___x_5999_;
goto v___jp_5946_;
}
}
}
}
}
else
{
lean_object* v_a_6002_; lean_object* v___x_6004_; uint8_t v_isShared_6005_; uint8_t v_isSharedCheck_6009_; 
lean_dec_ref(v___f_5921_);
lean_del_object(v___x_5913_);
lean_dec_ref(v_run_x27_5911_);
lean_dec_ref(v___x_5905_);
v_a_6002_ = lean_ctor_get(v___x_5961_, 0);
v_isSharedCheck_6009_ = !lean_is_exclusive(v___x_5961_);
if (v_isSharedCheck_6009_ == 0)
{
v___x_6004_ = v___x_5961_;
v_isShared_6005_ = v_isSharedCheck_6009_;
goto v_resetjp_6003_;
}
else
{
lean_inc(v_a_6002_);
lean_dec(v___x_5961_);
v___x_6004_ = lean_box(0);
v_isShared_6005_ = v_isSharedCheck_6009_;
goto v_resetjp_6003_;
}
v_resetjp_6003_:
{
lean_object* v___x_6007_; 
if (v_isShared_6005_ == 0)
{
v___x_6007_ = v___x_6004_;
goto v_reusejp_6006_;
}
else
{
lean_object* v_reuseFailAlloc_6008_; 
v_reuseFailAlloc_6008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6008_, 0, v_a_6002_);
v___x_6007_ = v_reuseFailAlloc_6008_;
goto v_reusejp_6006_;
}
v_reusejp_6006_:
{
return v___x_6007_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___boxed(lean_object* v_pass_6021_, lean_object* v_a_6022_, lean_object* v_a_6023_, lean_object* v_a_6024_, lean_object* v_a_6025_, lean_object* v_a_6026_, lean_object* v_a_6027_, lean_object* v_a_6028_, lean_object* v_a_6029_, lean_object* v_a_6030_, lean_object* v_a_6031_, lean_object* v_a_6032_, lean_object* v_a_6033_){
_start:
{
lean_object* v_res_6034_; 
v_res_6034_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run(v_pass_6021_, v_a_6022_, v_a_6023_, v_a_6024_, v_a_6025_, v_a_6026_, v_a_6027_, v_a_6028_, v_a_6029_, v_a_6030_, v_a_6031_, v_a_6032_);
lean_dec(v_a_6032_);
lean_dec_ref(v_a_6031_);
lean_dec(v_a_6030_);
lean_dec_ref(v_a_6029_);
lean_dec(v_a_6028_);
lean_dec_ref(v_a_6027_);
lean_dec(v_a_6026_);
lean_dec_ref(v_a_6025_);
lean_dec(v_a_6024_);
lean_dec(v_a_6023_);
lean_dec_ref(v_a_6022_);
return v_res_6034_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_6035_; lean_object* v___x_6036_; lean_object* v___x_6037_; 
v___x_6035_ = lean_unsigned_to_nat(32u);
v___x_6036_ = lean_mk_empty_array_with_capacity(v___x_6035_);
v___x_6037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6037_, 0, v___x_6036_);
return v___x_6037_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_6038_; lean_object* v___x_6039_; lean_object* v___x_6040_; lean_object* v___x_6041_; lean_object* v___x_6042_; lean_object* v___x_6043_; 
v___x_6038_ = ((size_t)5ULL);
v___x_6039_ = lean_unsigned_to_nat(0u);
v___x_6040_ = lean_unsigned_to_nat(32u);
v___x_6041_ = lean_mk_empty_array_with_capacity(v___x_6040_);
v___x_6042_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__0);
v___x_6043_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_6043_, 0, v___x_6042_);
lean_ctor_set(v___x_6043_, 1, v___x_6041_);
lean_ctor_set(v___x_6043_, 2, v___x_6039_);
lean_ctor_set(v___x_6043_, 3, v___x_6039_);
lean_ctor_set_usize(v___x_6043_, 4, v___x_6038_);
return v___x_6043_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(lean_object* v___y_6044_){
_start:
{
lean_object* v___x_6046_; lean_object* v_traceState_6047_; lean_object* v_traces_6048_; lean_object* v___x_6049_; lean_object* v_traceState_6050_; lean_object* v_env_6051_; lean_object* v_nextMacroScope_6052_; lean_object* v_ngen_6053_; lean_object* v_auxDeclNGen_6054_; lean_object* v_cache_6055_; lean_object* v_messages_6056_; lean_object* v_infoState_6057_; lean_object* v_snapshotTasks_6058_; lean_object* v___x_6060_; uint8_t v_isShared_6061_; uint8_t v_isSharedCheck_6077_; 
v___x_6046_ = lean_st_ref_get(v___y_6044_);
v_traceState_6047_ = lean_ctor_get(v___x_6046_, 4);
lean_inc_ref(v_traceState_6047_);
lean_dec(v___x_6046_);
v_traces_6048_ = lean_ctor_get(v_traceState_6047_, 0);
lean_inc_ref(v_traces_6048_);
lean_dec_ref(v_traceState_6047_);
v___x_6049_ = lean_st_ref_take(v___y_6044_);
v_traceState_6050_ = lean_ctor_get(v___x_6049_, 4);
v_env_6051_ = lean_ctor_get(v___x_6049_, 0);
v_nextMacroScope_6052_ = lean_ctor_get(v___x_6049_, 1);
v_ngen_6053_ = lean_ctor_get(v___x_6049_, 2);
v_auxDeclNGen_6054_ = lean_ctor_get(v___x_6049_, 3);
v_cache_6055_ = lean_ctor_get(v___x_6049_, 5);
v_messages_6056_ = lean_ctor_get(v___x_6049_, 6);
v_infoState_6057_ = lean_ctor_get(v___x_6049_, 7);
v_snapshotTasks_6058_ = lean_ctor_get(v___x_6049_, 8);
v_isSharedCheck_6077_ = !lean_is_exclusive(v___x_6049_);
if (v_isSharedCheck_6077_ == 0)
{
v___x_6060_ = v___x_6049_;
v_isShared_6061_ = v_isSharedCheck_6077_;
goto v_resetjp_6059_;
}
else
{
lean_inc(v_snapshotTasks_6058_);
lean_inc(v_infoState_6057_);
lean_inc(v_messages_6056_);
lean_inc(v_cache_6055_);
lean_inc(v_traceState_6050_);
lean_inc(v_auxDeclNGen_6054_);
lean_inc(v_ngen_6053_);
lean_inc(v_nextMacroScope_6052_);
lean_inc(v_env_6051_);
lean_dec(v___x_6049_);
v___x_6060_ = lean_box(0);
v_isShared_6061_ = v_isSharedCheck_6077_;
goto v_resetjp_6059_;
}
v_resetjp_6059_:
{
uint64_t v_tid_6062_; lean_object* v___x_6064_; uint8_t v_isShared_6065_; uint8_t v_isSharedCheck_6075_; 
v_tid_6062_ = lean_ctor_get_uint64(v_traceState_6050_, sizeof(void*)*1);
v_isSharedCheck_6075_ = !lean_is_exclusive(v_traceState_6050_);
if (v_isSharedCheck_6075_ == 0)
{
lean_object* v_unused_6076_; 
v_unused_6076_ = lean_ctor_get(v_traceState_6050_, 0);
lean_dec(v_unused_6076_);
v___x_6064_ = v_traceState_6050_;
v_isShared_6065_ = v_isSharedCheck_6075_;
goto v_resetjp_6063_;
}
else
{
lean_dec(v_traceState_6050_);
v___x_6064_ = lean_box(0);
v_isShared_6065_ = v_isSharedCheck_6075_;
goto v_resetjp_6063_;
}
v_resetjp_6063_:
{
lean_object* v___x_6066_; lean_object* v___x_6068_; 
v___x_6066_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___closed__1);
if (v_isShared_6065_ == 0)
{
lean_ctor_set(v___x_6064_, 0, v___x_6066_);
v___x_6068_ = v___x_6064_;
goto v_reusejp_6067_;
}
else
{
lean_object* v_reuseFailAlloc_6074_; 
v_reuseFailAlloc_6074_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_6074_, 0, v___x_6066_);
lean_ctor_set_uint64(v_reuseFailAlloc_6074_, sizeof(void*)*1, v_tid_6062_);
v___x_6068_ = v_reuseFailAlloc_6074_;
goto v_reusejp_6067_;
}
v_reusejp_6067_:
{
lean_object* v___x_6070_; 
if (v_isShared_6061_ == 0)
{
lean_ctor_set(v___x_6060_, 4, v___x_6068_);
v___x_6070_ = v___x_6060_;
goto v_reusejp_6069_;
}
else
{
lean_object* v_reuseFailAlloc_6073_; 
v_reuseFailAlloc_6073_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6073_, 0, v_env_6051_);
lean_ctor_set(v_reuseFailAlloc_6073_, 1, v_nextMacroScope_6052_);
lean_ctor_set(v_reuseFailAlloc_6073_, 2, v_ngen_6053_);
lean_ctor_set(v_reuseFailAlloc_6073_, 3, v_auxDeclNGen_6054_);
lean_ctor_set(v_reuseFailAlloc_6073_, 4, v___x_6068_);
lean_ctor_set(v_reuseFailAlloc_6073_, 5, v_cache_6055_);
lean_ctor_set(v_reuseFailAlloc_6073_, 6, v_messages_6056_);
lean_ctor_set(v_reuseFailAlloc_6073_, 7, v_infoState_6057_);
lean_ctor_set(v_reuseFailAlloc_6073_, 8, v_snapshotTasks_6058_);
v___x_6070_ = v_reuseFailAlloc_6073_;
goto v_reusejp_6069_;
}
v_reusejp_6069_:
{
lean_object* v___x_6071_; lean_object* v___x_6072_; 
v___x_6071_ = lean_st_ref_put(v___y_6044_, v___x_6070_);
v___x_6072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6072_, 0, v_traces_6048_);
return v___x_6072_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg___boxed(lean_object* v___y_6078_, lean_object* v___y_6079_){
_start:
{
lean_object* v_res_6080_; 
v_res_6080_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(v___y_6078_);
lean_dec(v___y_6078_);
return v_res_6080_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1(lean_object* v___y_6081_, lean_object* v___y_6082_, lean_object* v___y_6083_, lean_object* v___y_6084_, lean_object* v___y_6085_, lean_object* v___y_6086_, lean_object* v___y_6087_, lean_object* v___y_6088_, lean_object* v___y_6089_, lean_object* v___y_6090_, lean_object* v___y_6091_){
_start:
{
lean_object* v___x_6093_; 
v___x_6093_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(v___y_6091_);
return v___x_6093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___boxed(lean_object* v___y_6094_, lean_object* v___y_6095_, lean_object* v___y_6096_, lean_object* v___y_6097_, lean_object* v___y_6098_, lean_object* v___y_6099_, lean_object* v___y_6100_, lean_object* v___y_6101_, lean_object* v___y_6102_, lean_object* v___y_6103_, lean_object* v___y_6104_, lean_object* v___y_6105_){
_start:
{
lean_object* v_res_6106_; 
v_res_6106_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1(v___y_6094_, v___y_6095_, v___y_6096_, v___y_6097_, v___y_6098_, v___y_6099_, v___y_6100_, v___y_6101_, v___y_6102_, v___y_6103_, v___y_6104_);
lean_dec(v___y_6104_);
lean_dec_ref(v___y_6103_);
lean_dec(v___y_6102_);
lean_dec_ref(v___y_6101_);
lean_dec(v___y_6100_);
lean_dec_ref(v___y_6099_);
lean_dec(v___y_6098_);
lean_dec_ref(v___y_6097_);
lean_dec(v___y_6096_);
lean_dec(v___y_6095_);
lean_dec_ref(v___y_6094_);
return v_res_6106_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(lean_object* v_opts_6107_, lean_object* v_opt_6108_){
_start:
{
lean_object* v_name_6109_; lean_object* v_defValue_6110_; lean_object* v_map_6111_; lean_object* v___x_6112_; 
v_name_6109_ = lean_ctor_get(v_opt_6108_, 0);
v_defValue_6110_ = lean_ctor_get(v_opt_6108_, 1);
v_map_6111_ = lean_ctor_get(v_opts_6107_, 0);
v___x_6112_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_6111_, v_name_6109_);
if (lean_obj_tag(v___x_6112_) == 0)
{
uint8_t v___x_6113_; 
v___x_6113_ = lean_unbox(v_defValue_6110_);
return v___x_6113_;
}
else
{
lean_object* v_val_6114_; 
v_val_6114_ = lean_ctor_get(v___x_6112_, 0);
lean_inc(v_val_6114_);
lean_dec_ref_known(v___x_6112_, 1);
if (lean_obj_tag(v_val_6114_) == 1)
{
uint8_t v_v_6115_; 
v_v_6115_ = lean_ctor_get_uint8(v_val_6114_, 0);
lean_dec_ref_known(v_val_6114_, 0);
return v_v_6115_;
}
else
{
uint8_t v___x_6116_; 
lean_dec(v_val_6114_);
v___x_6116_ = lean_unbox(v_defValue_6110_);
return v___x_6116_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2___boxed(lean_object* v_opts_6117_, lean_object* v_opt_6118_){
_start:
{
uint8_t v_res_6119_; lean_object* v_r_6120_; 
v_res_6119_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_opts_6117_, v_opt_6118_);
lean_dec_ref(v_opt_6118_);
lean_dec_ref(v_opts_6117_);
v_r_6120_ = lean_box(v_res_6119_);
return v_r_6120_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(lean_object* v_cls_6121_, lean_object* v_msg_6122_, lean_object* v___y_6123_, lean_object* v___y_6124_, lean_object* v___y_6125_, lean_object* v___y_6126_){
_start:
{
lean_object* v_ref_6128_; lean_object* v___x_6129_; lean_object* v_a_6130_; lean_object* v___x_6132_; uint8_t v_isShared_6133_; uint8_t v_isSharedCheck_6174_; 
v_ref_6128_ = lean_ctor_get(v___y_6125_, 2);
v___x_6129_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msg_6122_, v___y_6123_, v___y_6124_, v___y_6125_, v___y_6126_);
v_a_6130_ = lean_ctor_get(v___x_6129_, 0);
v_isSharedCheck_6174_ = !lean_is_exclusive(v___x_6129_);
if (v_isSharedCheck_6174_ == 0)
{
v___x_6132_ = v___x_6129_;
v_isShared_6133_ = v_isSharedCheck_6174_;
goto v_resetjp_6131_;
}
else
{
lean_inc(v_a_6130_);
lean_dec(v___x_6129_);
v___x_6132_ = lean_box(0);
v_isShared_6133_ = v_isSharedCheck_6174_;
goto v_resetjp_6131_;
}
v_resetjp_6131_:
{
lean_object* v___x_6134_; lean_object* v_traceState_6135_; lean_object* v_env_6136_; lean_object* v_nextMacroScope_6137_; lean_object* v_ngen_6138_; lean_object* v_auxDeclNGen_6139_; lean_object* v_cache_6140_; lean_object* v_messages_6141_; lean_object* v_infoState_6142_; lean_object* v_snapshotTasks_6143_; lean_object* v___x_6145_; uint8_t v_isShared_6146_; uint8_t v_isSharedCheck_6173_; 
v___x_6134_ = lean_st_ref_take(v___y_6126_);
v_traceState_6135_ = lean_ctor_get(v___x_6134_, 4);
v_env_6136_ = lean_ctor_get(v___x_6134_, 0);
v_nextMacroScope_6137_ = lean_ctor_get(v___x_6134_, 1);
v_ngen_6138_ = lean_ctor_get(v___x_6134_, 2);
v_auxDeclNGen_6139_ = lean_ctor_get(v___x_6134_, 3);
v_cache_6140_ = lean_ctor_get(v___x_6134_, 5);
v_messages_6141_ = lean_ctor_get(v___x_6134_, 6);
v_infoState_6142_ = lean_ctor_get(v___x_6134_, 7);
v_snapshotTasks_6143_ = lean_ctor_get(v___x_6134_, 8);
v_isSharedCheck_6173_ = !lean_is_exclusive(v___x_6134_);
if (v_isSharedCheck_6173_ == 0)
{
v___x_6145_ = v___x_6134_;
v_isShared_6146_ = v_isSharedCheck_6173_;
goto v_resetjp_6144_;
}
else
{
lean_inc(v_snapshotTasks_6143_);
lean_inc(v_infoState_6142_);
lean_inc(v_messages_6141_);
lean_inc(v_cache_6140_);
lean_inc(v_traceState_6135_);
lean_inc(v_auxDeclNGen_6139_);
lean_inc(v_ngen_6138_);
lean_inc(v_nextMacroScope_6137_);
lean_inc(v_env_6136_);
lean_dec(v___x_6134_);
v___x_6145_ = lean_box(0);
v_isShared_6146_ = v_isSharedCheck_6173_;
goto v_resetjp_6144_;
}
v_resetjp_6144_:
{
uint64_t v_tid_6147_; lean_object* v_traces_6148_; lean_object* v___x_6150_; uint8_t v_isShared_6151_; uint8_t v_isSharedCheck_6172_; 
v_tid_6147_ = lean_ctor_get_uint64(v_traceState_6135_, sizeof(void*)*1);
v_traces_6148_ = lean_ctor_get(v_traceState_6135_, 0);
v_isSharedCheck_6172_ = !lean_is_exclusive(v_traceState_6135_);
if (v_isSharedCheck_6172_ == 0)
{
v___x_6150_ = v_traceState_6135_;
v_isShared_6151_ = v_isSharedCheck_6172_;
goto v_resetjp_6149_;
}
else
{
lean_inc(v_traces_6148_);
lean_dec(v_traceState_6135_);
v___x_6150_ = lean_box(0);
v_isShared_6151_ = v_isSharedCheck_6172_;
goto v_resetjp_6149_;
}
v_resetjp_6149_:
{
lean_object* v___x_6152_; lean_object* v___x_6153_; double v___x_6154_; uint8_t v___x_6155_; lean_object* v___x_6156_; lean_object* v___x_6157_; lean_object* v___x_6158_; lean_object* v___x_6159_; lean_object* v___x_6160_; lean_object* v___x_6161_; lean_object* v___x_6163_; 
v___x_6152_ = lean_box(0);
v___x_6153_ = lean_box(0);
v___x_6154_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0);
v___x_6155_ = 0;
v___x_6156_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_6157_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_6157_, 0, v_cls_6121_);
lean_ctor_set(v___x_6157_, 1, v___x_6153_);
lean_ctor_set(v___x_6157_, 2, v___x_6156_);
lean_ctor_set_float(v___x_6157_, sizeof(void*)*3, v___x_6154_);
lean_ctor_set_float(v___x_6157_, sizeof(void*)*3 + 8, v___x_6154_);
lean_ctor_set_uint8(v___x_6157_, sizeof(void*)*3 + 16, v___x_6155_);
v___x_6158_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__2));
v___x_6159_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_6159_, 0, v___x_6157_);
lean_ctor_set(v___x_6159_, 1, v_a_6130_);
lean_ctor_set(v___x_6159_, 2, v___x_6158_);
lean_inc(v_ref_6128_);
v___x_6160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6160_, 0, v_ref_6128_);
lean_ctor_set(v___x_6160_, 1, v___x_6159_);
v___x_6161_ = l_Lean_PersistentArray_push___redArg(v_traces_6148_, v___x_6160_);
if (v_isShared_6151_ == 0)
{
lean_ctor_set(v___x_6150_, 0, v___x_6161_);
v___x_6163_ = v___x_6150_;
goto v_reusejp_6162_;
}
else
{
lean_object* v_reuseFailAlloc_6171_; 
v_reuseFailAlloc_6171_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_6171_, 0, v___x_6161_);
lean_ctor_set_uint64(v_reuseFailAlloc_6171_, sizeof(void*)*1, v_tid_6147_);
v___x_6163_ = v_reuseFailAlloc_6171_;
goto v_reusejp_6162_;
}
v_reusejp_6162_:
{
lean_object* v___x_6165_; 
if (v_isShared_6146_ == 0)
{
lean_ctor_set(v___x_6145_, 4, v___x_6163_);
v___x_6165_ = v___x_6145_;
goto v_reusejp_6164_;
}
else
{
lean_object* v_reuseFailAlloc_6170_; 
v_reuseFailAlloc_6170_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6170_, 0, v_env_6136_);
lean_ctor_set(v_reuseFailAlloc_6170_, 1, v_nextMacroScope_6137_);
lean_ctor_set(v_reuseFailAlloc_6170_, 2, v_ngen_6138_);
lean_ctor_set(v_reuseFailAlloc_6170_, 3, v_auxDeclNGen_6139_);
lean_ctor_set(v_reuseFailAlloc_6170_, 4, v___x_6163_);
lean_ctor_set(v_reuseFailAlloc_6170_, 5, v_cache_6140_);
lean_ctor_set(v_reuseFailAlloc_6170_, 6, v_messages_6141_);
lean_ctor_set(v_reuseFailAlloc_6170_, 7, v_infoState_6142_);
lean_ctor_set(v_reuseFailAlloc_6170_, 8, v_snapshotTasks_6143_);
v___x_6165_ = v_reuseFailAlloc_6170_;
goto v_reusejp_6164_;
}
v_reusejp_6164_:
{
lean_object* v___x_6166_; lean_object* v___x_6168_; 
v___x_6166_ = lean_st_ref_put(v___y_6126_, v___x_6165_);
if (v_isShared_6133_ == 0)
{
lean_ctor_set(v___x_6132_, 0, v___x_6152_);
v___x_6168_ = v___x_6132_;
goto v_reusejp_6167_;
}
else
{
lean_object* v_reuseFailAlloc_6169_; 
v_reuseFailAlloc_6169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6169_, 0, v___x_6152_);
v___x_6168_ = v_reuseFailAlloc_6169_;
goto v_reusejp_6167_;
}
v_reusejp_6167_:
{
return v___x_6168_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg___boxed(lean_object* v_cls_6175_, lean_object* v_msg_6176_, lean_object* v___y_6177_, lean_object* v___y_6178_, lean_object* v___y_6179_, lean_object* v___y_6180_, lean_object* v___y_6181_){
_start:
{
lean_object* v_res_6182_; 
v_res_6182_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v_cls_6175_, v_msg_6176_, v___y_6177_, v___y_6178_, v___y_6179_, v___y_6180_);
lean_dec(v___y_6180_);
lean_dec_ref(v___y_6179_);
lean_dec(v___y_6178_);
lean_dec_ref(v___y_6177_);
return v_res_6182_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5(lean_object* v_e_6183_){
_start:
{
if (lean_obj_tag(v_e_6183_) == 0)
{
uint8_t v___x_6184_; 
v___x_6184_ = 2;
return v___x_6184_;
}
else
{
lean_object* v_a_6185_; uint8_t v___x_6186_; 
v_a_6185_ = lean_ctor_get(v_e_6183_, 0);
v___x_6186_ = lean_unbox(v_a_6185_);
if (v___x_6186_ == 0)
{
uint8_t v___x_6187_; 
v___x_6187_ = 1;
return v___x_6187_;
}
else
{
uint8_t v___x_6188_; 
v___x_6188_ = 0;
return v___x_6188_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5___boxed(lean_object* v_e_6189_){
_start:
{
uint8_t v_res_6190_; lean_object* v_r_6191_; 
v_res_6190_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5(v_e_6189_);
lean_dec_ref(v_e_6189_);
v_r_6191_ = lean_box(v_res_6190_);
return v_r_6191_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(lean_object* v_x_6192_){
_start:
{
if (lean_obj_tag(v_x_6192_) == 0)
{
lean_object* v_a_6194_; lean_object* v___x_6196_; uint8_t v_isShared_6197_; uint8_t v_isSharedCheck_6201_; 
v_a_6194_ = lean_ctor_get(v_x_6192_, 0);
v_isSharedCheck_6201_ = !lean_is_exclusive(v_x_6192_);
if (v_isSharedCheck_6201_ == 0)
{
v___x_6196_ = v_x_6192_;
v_isShared_6197_ = v_isSharedCheck_6201_;
goto v_resetjp_6195_;
}
else
{
lean_inc(v_a_6194_);
lean_dec(v_x_6192_);
v___x_6196_ = lean_box(0);
v_isShared_6197_ = v_isSharedCheck_6201_;
goto v_resetjp_6195_;
}
v_resetjp_6195_:
{
lean_object* v___x_6199_; 
if (v_isShared_6197_ == 0)
{
lean_ctor_set_tag(v___x_6196_, 1);
v___x_6199_ = v___x_6196_;
goto v_reusejp_6198_;
}
else
{
lean_object* v_reuseFailAlloc_6200_; 
v_reuseFailAlloc_6200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6200_, 0, v_a_6194_);
v___x_6199_ = v_reuseFailAlloc_6200_;
goto v_reusejp_6198_;
}
v_reusejp_6198_:
{
return v___x_6199_;
}
}
}
else
{
lean_object* v_a_6202_; lean_object* v___x_6204_; uint8_t v_isShared_6205_; uint8_t v_isSharedCheck_6209_; 
v_a_6202_ = lean_ctor_get(v_x_6192_, 0);
v_isSharedCheck_6209_ = !lean_is_exclusive(v_x_6192_);
if (v_isSharedCheck_6209_ == 0)
{
v___x_6204_ = v_x_6192_;
v_isShared_6205_ = v_isSharedCheck_6209_;
goto v_resetjp_6203_;
}
else
{
lean_inc(v_a_6202_);
lean_dec(v_x_6192_);
v___x_6204_ = lean_box(0);
v_isShared_6205_ = v_isSharedCheck_6209_;
goto v_resetjp_6203_;
}
v_resetjp_6203_:
{
lean_object* v___x_6207_; 
if (v_isShared_6205_ == 0)
{
lean_ctor_set_tag(v___x_6204_, 0);
v___x_6207_ = v___x_6204_;
goto v_reusejp_6206_;
}
else
{
lean_object* v_reuseFailAlloc_6208_; 
v_reuseFailAlloc_6208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6208_, 0, v_a_6202_);
v___x_6207_ = v_reuseFailAlloc_6208_;
goto v_reusejp_6206_;
}
v_reusejp_6206_:
{
return v___x_6207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg___boxed(lean_object* v_x_6210_, lean_object* v___y_6211_){
_start:
{
lean_object* v_res_6212_; 
v_res_6212_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(v_x_6210_);
return v_res_6212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(lean_object* v_opts_6213_, lean_object* v_opt_6214_){
_start:
{
lean_object* v_name_6215_; lean_object* v_defValue_6216_; lean_object* v_map_6217_; lean_object* v___x_6218_; 
v_name_6215_ = lean_ctor_get(v_opt_6214_, 0);
v_defValue_6216_ = lean_ctor_get(v_opt_6214_, 1);
v_map_6217_ = lean_ctor_get(v_opts_6213_, 0);
v___x_6218_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_6217_, v_name_6215_);
if (lean_obj_tag(v___x_6218_) == 0)
{
lean_inc(v_defValue_6216_);
return v_defValue_6216_;
}
else
{
lean_object* v_val_6219_; 
v_val_6219_ = lean_ctor_get(v___x_6218_, 0);
lean_inc(v_val_6219_);
lean_dec_ref_known(v___x_6218_, 1);
if (lean_obj_tag(v_val_6219_) == 3)
{
lean_object* v_v_6220_; 
v_v_6220_ = lean_ctor_get(v_val_6219_, 0);
lean_inc(v_v_6220_);
lean_dec_ref_known(v_val_6219_, 1);
return v_v_6220_;
}
else
{
lean_dec(v_val_6219_);
lean_inc(v_defValue_6216_);
return v_defValue_6216_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6___boxed(lean_object* v_opts_6221_, lean_object* v_opt_6222_){
_start:
{
lean_object* v_res_6223_; 
v_res_6223_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(v_opts_6221_, v_opt_6222_);
lean_dec_ref(v_opt_6222_);
lean_dec_ref(v_opts_6221_);
return v_res_6223_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4(size_t v_sz_6224_, size_t v_i_6225_, lean_object* v_bs_6226_){
_start:
{
uint8_t v___x_6227_; 
v___x_6227_ = lean_usize_dec_lt(v_i_6225_, v_sz_6224_);
if (v___x_6227_ == 0)
{
lean_object* v___x_6228_; 
v___x_6228_ = l_unsafeCast___redArg(v_bs_6226_);
lean_dec_ref(v_bs_6226_);
return v___x_6228_;
}
else
{
lean_object* v_v_6229_; lean_object* v___x_6230_; lean_object* v_msg_6231_; lean_object* v___x_6232_; lean_object* v_bs_x27_6233_; size_t v___x_6234_; size_t v___x_6235_; lean_object* v___x_6236_; lean_object* v___x_6237_; 
v_v_6229_ = lean_array_uget_borrowed(v_bs_6226_, v_i_6225_);
v___x_6230_ = l_unsafeCast___redArg(v_v_6229_);
v_msg_6231_ = lean_ctor_get(v___x_6230_, 1);
lean_inc_ref(v_msg_6231_);
lean_dec(v___x_6230_);
v___x_6232_ = lean_unsigned_to_nat(0u);
v_bs_x27_6233_ = lean_array_uset(v_bs_6226_, v_i_6225_, v___x_6232_);
v___x_6234_ = ((size_t)1ULL);
v___x_6235_ = lean_usize_add(v_i_6225_, v___x_6234_);
v___x_6236_ = l_unsafeCast___redArg(v_msg_6231_);
lean_dec_ref(v_msg_6231_);
v___x_6237_ = lean_array_uset(v_bs_x27_6233_, v_i_6225_, v___x_6236_);
v_i_6225_ = v___x_6235_;
v_bs_6226_ = v___x_6237_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4___boxed(lean_object* v_sz_6239_, lean_object* v_i_6240_, lean_object* v_bs_6241_){
_start:
{
size_t v_sz_boxed_6242_; size_t v_i_boxed_6243_; lean_object* v_res_6244_; 
v_sz_boxed_6242_ = lean_unbox_usize(v_sz_6239_);
lean_dec(v_sz_6239_);
v_i_boxed_6243_ = lean_unbox_usize(v_i_6240_);
lean_dec(v_i_6240_);
v_res_6244_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4(v_sz_boxed_6242_, v_i_boxed_6243_, v_bs_6241_);
return v_res_6244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(lean_object* v_oldTraces_6245_, lean_object* v_data_6246_, lean_object* v_ref_6247_, lean_object* v_msg_6248_, lean_object* v___y_6249_, lean_object* v___y_6250_, lean_object* v___y_6251_, lean_object* v___y_6252_){
_start:
{
lean_object* v_toCold_6254_; lean_object* v_currRecDepth_6255_; lean_object* v_ref_6256_; uint8_t v_diag_6257_; uint8_t v_suppressElabErrors_6258_; lean_object* v_ref_6259_; lean_object* v___x_6260_; lean_object* v___x_6261_; lean_object* v_traceState_6262_; lean_object* v_traces_6263_; lean_object* v___x_6264_; size_t v_sz_6265_; size_t v___x_6266_; lean_object* v___x_6267_; lean_object* v___x_6268_; lean_object* v___x_6269_; lean_object* v_msg_6270_; lean_object* v___x_6271_; lean_object* v_a_6272_; lean_object* v___x_6274_; uint8_t v_isShared_6275_; uint8_t v_isSharedCheck_6309_; 
v_toCold_6254_ = lean_ctor_get(v___y_6251_, 0);
v_currRecDepth_6255_ = lean_ctor_get(v___y_6251_, 1);
v_ref_6256_ = lean_ctor_get(v___y_6251_, 2);
v_diag_6257_ = lean_ctor_get_uint8(v___y_6251_, sizeof(void*)*3);
v_suppressElabErrors_6258_ = lean_ctor_get_uint8(v___y_6251_, sizeof(void*)*3 + 1);
v_ref_6259_ = l_Lean_replaceRef(v_ref_6247_, v_ref_6256_);
lean_inc(v_currRecDepth_6255_);
lean_inc_ref(v_toCold_6254_);
v___x_6260_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_6260_, 0, v_toCold_6254_);
lean_ctor_set(v___x_6260_, 1, v_currRecDepth_6255_);
lean_ctor_set(v___x_6260_, 2, v_ref_6259_);
lean_ctor_set_uint8(v___x_6260_, sizeof(void*)*3, v_diag_6257_);
lean_ctor_set_uint8(v___x_6260_, sizeof(void*)*3 + 1, v_suppressElabErrors_6258_);
v___x_6261_ = lean_st_ref_get(v___y_6252_);
v_traceState_6262_ = lean_ctor_get(v___x_6261_, 4);
lean_inc_ref(v_traceState_6262_);
lean_dec(v___x_6261_);
v_traces_6263_ = lean_ctor_get(v_traceState_6262_, 0);
lean_inc_ref(v_traces_6263_);
lean_dec_ref(v_traceState_6262_);
v___x_6264_ = l_Lean_PersistentArray_toArray___redArg(v_traces_6263_);
lean_dec_ref(v_traces_6263_);
v_sz_6265_ = lean_array_size(v___x_6264_);
v___x_6266_ = ((size_t)0ULL);
v___x_6267_ = l_unsafeCast___redArg(v___x_6264_);
lean_dec_ref(v___x_6264_);
v___x_6268_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3_spec__4(v_sz_6265_, v___x_6266_, v___x_6267_);
v___x_6269_ = l_unsafeCast___redArg(v___x_6268_);
lean_dec_ref(v___x_6268_);
v_msg_6270_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_6270_, 0, v_data_6246_);
lean_ctor_set(v_msg_6270_, 1, v_msg_6248_);
lean_ctor_set(v_msg_6270_, 2, v___x_6269_);
v___x_6271_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0_spec__0(v_msg_6270_, v___y_6249_, v___y_6250_, v___x_6260_, v___y_6252_);
lean_dec_ref_known(v___x_6260_, 3);
v_a_6272_ = lean_ctor_get(v___x_6271_, 0);
v_isSharedCheck_6309_ = !lean_is_exclusive(v___x_6271_);
if (v_isSharedCheck_6309_ == 0)
{
v___x_6274_ = v___x_6271_;
v_isShared_6275_ = v_isSharedCheck_6309_;
goto v_resetjp_6273_;
}
else
{
lean_inc(v_a_6272_);
lean_dec(v___x_6271_);
v___x_6274_ = lean_box(0);
v_isShared_6275_ = v_isSharedCheck_6309_;
goto v_resetjp_6273_;
}
v_resetjp_6273_:
{
lean_object* v___x_6276_; lean_object* v_traceState_6277_; lean_object* v_env_6278_; lean_object* v_nextMacroScope_6279_; lean_object* v_ngen_6280_; lean_object* v_auxDeclNGen_6281_; lean_object* v_cache_6282_; lean_object* v_messages_6283_; lean_object* v_infoState_6284_; lean_object* v_snapshotTasks_6285_; lean_object* v___x_6287_; uint8_t v_isShared_6288_; uint8_t v_isSharedCheck_6308_; 
v___x_6276_ = lean_st_ref_take(v___y_6252_);
v_traceState_6277_ = lean_ctor_get(v___x_6276_, 4);
v_env_6278_ = lean_ctor_get(v___x_6276_, 0);
v_nextMacroScope_6279_ = lean_ctor_get(v___x_6276_, 1);
v_ngen_6280_ = lean_ctor_get(v___x_6276_, 2);
v_auxDeclNGen_6281_ = lean_ctor_get(v___x_6276_, 3);
v_cache_6282_ = lean_ctor_get(v___x_6276_, 5);
v_messages_6283_ = lean_ctor_get(v___x_6276_, 6);
v_infoState_6284_ = lean_ctor_get(v___x_6276_, 7);
v_snapshotTasks_6285_ = lean_ctor_get(v___x_6276_, 8);
v_isSharedCheck_6308_ = !lean_is_exclusive(v___x_6276_);
if (v_isSharedCheck_6308_ == 0)
{
v___x_6287_ = v___x_6276_;
v_isShared_6288_ = v_isSharedCheck_6308_;
goto v_resetjp_6286_;
}
else
{
lean_inc(v_snapshotTasks_6285_);
lean_inc(v_infoState_6284_);
lean_inc(v_messages_6283_);
lean_inc(v_cache_6282_);
lean_inc(v_traceState_6277_);
lean_inc(v_auxDeclNGen_6281_);
lean_inc(v_ngen_6280_);
lean_inc(v_nextMacroScope_6279_);
lean_inc(v_env_6278_);
lean_dec(v___x_6276_);
v___x_6287_ = lean_box(0);
v_isShared_6288_ = v_isSharedCheck_6308_;
goto v_resetjp_6286_;
}
v_resetjp_6286_:
{
uint64_t v_tid_6289_; lean_object* v___x_6291_; uint8_t v_isShared_6292_; uint8_t v_isSharedCheck_6306_; 
v_tid_6289_ = lean_ctor_get_uint64(v_traceState_6277_, sizeof(void*)*1);
v_isSharedCheck_6306_ = !lean_is_exclusive(v_traceState_6277_);
if (v_isSharedCheck_6306_ == 0)
{
lean_object* v_unused_6307_; 
v_unused_6307_ = lean_ctor_get(v_traceState_6277_, 0);
lean_dec(v_unused_6307_);
v___x_6291_ = v_traceState_6277_;
v_isShared_6292_ = v_isSharedCheck_6306_;
goto v_resetjp_6290_;
}
else
{
lean_dec(v_traceState_6277_);
v___x_6291_ = lean_box(0);
v_isShared_6292_ = v_isSharedCheck_6306_;
goto v_resetjp_6290_;
}
v_resetjp_6290_:
{
lean_object* v___x_6293_; lean_object* v___x_6294_; lean_object* v___x_6295_; lean_object* v___x_6297_; 
v___x_6293_ = lean_box(0);
v___x_6294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6294_, 0, v_ref_6247_);
lean_ctor_set(v___x_6294_, 1, v_a_6272_);
v___x_6295_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_6245_, v___x_6294_);
if (v_isShared_6292_ == 0)
{
lean_ctor_set(v___x_6291_, 0, v___x_6295_);
v___x_6297_ = v___x_6291_;
goto v_reusejp_6296_;
}
else
{
lean_object* v_reuseFailAlloc_6305_; 
v_reuseFailAlloc_6305_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_6305_, 0, v___x_6295_);
lean_ctor_set_uint64(v_reuseFailAlloc_6305_, sizeof(void*)*1, v_tid_6289_);
v___x_6297_ = v_reuseFailAlloc_6305_;
goto v_reusejp_6296_;
}
v_reusejp_6296_:
{
lean_object* v___x_6299_; 
if (v_isShared_6288_ == 0)
{
lean_ctor_set(v___x_6287_, 4, v___x_6297_);
v___x_6299_ = v___x_6287_;
goto v_reusejp_6298_;
}
else
{
lean_object* v_reuseFailAlloc_6304_; 
v_reuseFailAlloc_6304_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6304_, 0, v_env_6278_);
lean_ctor_set(v_reuseFailAlloc_6304_, 1, v_nextMacroScope_6279_);
lean_ctor_set(v_reuseFailAlloc_6304_, 2, v_ngen_6280_);
lean_ctor_set(v_reuseFailAlloc_6304_, 3, v_auxDeclNGen_6281_);
lean_ctor_set(v_reuseFailAlloc_6304_, 4, v___x_6297_);
lean_ctor_set(v_reuseFailAlloc_6304_, 5, v_cache_6282_);
lean_ctor_set(v_reuseFailAlloc_6304_, 6, v_messages_6283_);
lean_ctor_set(v_reuseFailAlloc_6304_, 7, v_infoState_6284_);
lean_ctor_set(v_reuseFailAlloc_6304_, 8, v_snapshotTasks_6285_);
v___x_6299_ = v_reuseFailAlloc_6304_;
goto v_reusejp_6298_;
}
v_reusejp_6298_:
{
lean_object* v___x_6300_; lean_object* v___x_6302_; 
v___x_6300_ = lean_st_ref_put(v___y_6252_, v___x_6299_);
if (v_isShared_6275_ == 0)
{
lean_ctor_set(v___x_6274_, 0, v___x_6293_);
v___x_6302_ = v___x_6274_;
goto v_reusejp_6301_;
}
else
{
lean_object* v_reuseFailAlloc_6303_; 
v_reuseFailAlloc_6303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6303_, 0, v___x_6293_);
v___x_6302_ = v_reuseFailAlloc_6303_;
goto v_reusejp_6301_;
}
v_reusejp_6301_:
{
return v___x_6302_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg___boxed(lean_object* v_oldTraces_6310_, lean_object* v_data_6311_, lean_object* v_ref_6312_, lean_object* v_msg_6313_, lean_object* v___y_6314_, lean_object* v___y_6315_, lean_object* v___y_6316_, lean_object* v___y_6317_, lean_object* v___y_6318_){
_start:
{
lean_object* v_res_6319_; 
v_res_6319_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(v_oldTraces_6310_, v_data_6311_, v_ref_6312_, v_msg_6313_, v___y_6314_, v___y_6315_, v___y_6316_, v___y_6317_);
lean_dec(v___y_6317_);
lean_dec_ref(v___y_6316_);
lean_dec(v___y_6315_);
lean_dec_ref(v___y_6314_);
return v_res_6319_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1(void){
_start:
{
lean_object* v___x_6321_; lean_object* v___x_6322_; 
v___x_6321_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__0));
v___x_6322_ = l_Lean_stringToMessageData(v___x_6321_);
return v___x_6322_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2(void){
_start:
{
lean_object* v___x_6323_; double v___x_6324_; 
v___x_6323_ = lean_unsigned_to_nat(1000u);
v___x_6324_ = lean_float_of_nat(v___x_6323_);
return v___x_6324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(lean_object* v_cls_6325_, uint8_t v_collapsed_6326_, lean_object* v_tag_6327_, lean_object* v_opts_6328_, uint8_t v_clsEnabled_6329_, lean_object* v_oldTraces_6330_, lean_object* v_msg_6331_, lean_object* v_resStartStop_6332_, lean_object* v___y_6333_, lean_object* v___y_6334_, lean_object* v___y_6335_, lean_object* v___y_6336_, lean_object* v___y_6337_, lean_object* v___y_6338_, lean_object* v___y_6339_, lean_object* v___y_6340_, lean_object* v___y_6341_, lean_object* v___y_6342_, lean_object* v___y_6343_){
_start:
{
lean_object* v_fst_6345_; lean_object* v_snd_6346_; lean_object* v___y_6348_; lean_object* v___y_6349_; lean_object* v_data_6350_; lean_object* v_fst_6361_; lean_object* v_snd_6362_; lean_object* v___x_6363_; uint8_t v___x_6364_; lean_object* v___y_6366_; lean_object* v_a_6367_; uint8_t v___y_6382_; double v___y_6413_; 
v_fst_6345_ = lean_ctor_get(v_resStartStop_6332_, 0);
lean_inc(v_fst_6345_);
v_snd_6346_ = lean_ctor_get(v_resStartStop_6332_, 1);
lean_inc(v_snd_6346_);
lean_dec_ref(v_resStartStop_6332_);
v_fst_6361_ = lean_ctor_get(v_snd_6346_, 0);
lean_inc(v_fst_6361_);
v_snd_6362_ = lean_ctor_get(v_snd_6346_, 1);
lean_inc(v_snd_6362_);
lean_dec(v_snd_6346_);
v___x_6363_ = l_Lean_trace_profiler;
v___x_6364_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_opts_6328_, v___x_6363_);
if (v___x_6364_ == 0)
{
v___y_6382_ = v___x_6364_;
goto v___jp_6381_;
}
else
{
lean_object* v___x_6418_; uint8_t v___x_6419_; 
v___x_6418_ = l_Lean_trace_profiler_useHeartbeats;
v___x_6419_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_opts_6328_, v___x_6418_);
if (v___x_6419_ == 0)
{
lean_object* v___x_6420_; lean_object* v___x_6421_; double v___x_6422_; double v___x_6423_; double v___x_6424_; 
v___x_6420_ = l_Lean_trace_profiler_threshold;
v___x_6421_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(v_opts_6328_, v___x_6420_);
v___x_6422_ = lean_float_of_nat(v___x_6421_);
v___x_6423_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__2);
v___x_6424_ = lean_float_div(v___x_6422_, v___x_6423_);
v___y_6413_ = v___x_6424_;
goto v___jp_6412_;
}
else
{
lean_object* v___x_6425_; lean_object* v___x_6426_; double v___x_6427_; 
v___x_6425_ = l_Lean_trace_profiler_threshold;
v___x_6426_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__6(v_opts_6328_, v___x_6425_);
v___x_6427_ = lean_float_of_nat(v___x_6426_);
v___y_6413_ = v___x_6427_;
goto v___jp_6412_;
}
}
v___jp_6347_:
{
lean_object* v___x_6351_; 
lean_inc(v___y_6348_);
v___x_6351_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(v_oldTraces_6330_, v_data_6350_, v___y_6348_, v___y_6349_, v___y_6340_, v___y_6341_, v___y_6342_, v___y_6343_);
if (lean_obj_tag(v___x_6351_) == 0)
{
lean_object* v___x_6352_; 
lean_dec_ref_known(v___x_6351_, 1);
v___x_6352_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(v_fst_6345_);
return v___x_6352_;
}
else
{
lean_object* v_a_6353_; lean_object* v___x_6355_; uint8_t v_isShared_6356_; uint8_t v_isSharedCheck_6360_; 
lean_dec(v_fst_6345_);
v_a_6353_ = lean_ctor_get(v___x_6351_, 0);
v_isSharedCheck_6360_ = !lean_is_exclusive(v___x_6351_);
if (v_isSharedCheck_6360_ == 0)
{
v___x_6355_ = v___x_6351_;
v_isShared_6356_ = v_isSharedCheck_6360_;
goto v_resetjp_6354_;
}
else
{
lean_inc(v_a_6353_);
lean_dec(v___x_6351_);
v___x_6355_ = lean_box(0);
v_isShared_6356_ = v_isSharedCheck_6360_;
goto v_resetjp_6354_;
}
v_resetjp_6354_:
{
lean_object* v___x_6358_; 
if (v_isShared_6356_ == 0)
{
v___x_6358_ = v___x_6355_;
goto v_reusejp_6357_;
}
else
{
lean_object* v_reuseFailAlloc_6359_; 
v_reuseFailAlloc_6359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6359_, 0, v_a_6353_);
v___x_6358_ = v_reuseFailAlloc_6359_;
goto v_reusejp_6357_;
}
v_reusejp_6357_:
{
return v___x_6358_;
}
}
}
}
v___jp_6365_:
{
uint8_t v_result_6368_; lean_object* v___x_6369_; lean_object* v___x_6370_; double v___x_6371_; lean_object* v_data_6372_; 
v_result_6368_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__5(v_fst_6345_);
v___x_6369_ = lean_box(v_result_6368_);
v___x_6370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6370_, 0, v___x_6369_);
v___x_6371_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__0);
lean_inc_ref(v_tag_6327_);
lean_inc_ref(v___x_6370_);
lean_inc(v_cls_6325_);
v_data_6372_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_6372_, 0, v_cls_6325_);
lean_ctor_set(v_data_6372_, 1, v___x_6370_);
lean_ctor_set(v_data_6372_, 2, v_tag_6327_);
lean_ctor_set_float(v_data_6372_, sizeof(void*)*3, v___x_6371_);
lean_ctor_set_float(v_data_6372_, sizeof(void*)*3 + 8, v___x_6371_);
lean_ctor_set_uint8(v_data_6372_, sizeof(void*)*3 + 16, v_collapsed_6326_);
if (v___x_6364_ == 0)
{
lean_dec_ref_known(v___x_6370_, 1);
lean_dec(v_snd_6362_);
lean_dec(v_fst_6361_);
lean_dec_ref(v_tag_6327_);
lean_dec(v_cls_6325_);
v___y_6348_ = v___y_6366_;
v___y_6349_ = v_a_6367_;
v_data_6350_ = v_data_6372_;
goto v___jp_6347_;
}
else
{
lean_object* v_data_6373_; double v___x_6374_; double v___x_6375_; 
lean_dec_ref_known(v_data_6372_, 3);
v_data_6373_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_6373_, 0, v_cls_6325_);
lean_ctor_set(v_data_6373_, 1, v___x_6370_);
lean_ctor_set(v_data_6373_, 2, v_tag_6327_);
v___x_6374_ = lean_unbox_float(v_fst_6361_);
lean_dec(v_fst_6361_);
lean_ctor_set_float(v_data_6373_, sizeof(void*)*3, v___x_6374_);
v___x_6375_ = lean_unbox_float(v_snd_6362_);
lean_dec(v_snd_6362_);
lean_ctor_set_float(v_data_6373_, sizeof(void*)*3 + 8, v___x_6375_);
lean_ctor_set_uint8(v_data_6373_, sizeof(void*)*3 + 16, v_collapsed_6326_);
v___y_6348_ = v___y_6366_;
v___y_6349_ = v_a_6367_;
v_data_6350_ = v_data_6373_;
goto v___jp_6347_;
}
}
v___jp_6376_:
{
lean_object* v_ref_6377_; lean_object* v___x_6378_; 
v_ref_6377_ = lean_ctor_get(v___y_6342_, 2);
lean_inc(v___y_6343_);
lean_inc_ref(v___y_6342_);
lean_inc(v___y_6341_);
lean_inc_ref(v___y_6340_);
lean_inc(v___y_6339_);
lean_inc_ref(v___y_6338_);
lean_inc(v___y_6337_);
lean_inc_ref(v___y_6336_);
lean_inc(v___y_6335_);
lean_inc(v___y_6334_);
lean_inc_ref(v___y_6333_);
lean_inc(v_fst_6345_);
v___x_6378_ = lean_apply_13(v_msg_6331_, v_fst_6345_, v___y_6333_, v___y_6334_, v___y_6335_, v___y_6336_, v___y_6337_, v___y_6338_, v___y_6339_, v___y_6340_, v___y_6341_, v___y_6342_, v___y_6343_, lean_box(0));
if (lean_obj_tag(v___x_6378_) == 0)
{
lean_object* v_a_6379_; 
v_a_6379_ = lean_ctor_get(v___x_6378_, 0);
lean_inc(v_a_6379_);
lean_dec_ref_known(v___x_6378_, 1);
v___y_6366_ = v_ref_6377_;
v_a_6367_ = v_a_6379_;
goto v___jp_6365_;
}
else
{
lean_object* v___x_6380_; 
lean_dec_ref_known(v___x_6378_, 1);
v___x_6380_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___closed__1);
v___y_6366_ = v_ref_6377_;
v_a_6367_ = v___x_6380_;
goto v___jp_6365_;
}
}
v___jp_6381_:
{
if (v_clsEnabled_6329_ == 0)
{
if (v___y_6382_ == 0)
{
lean_object* v___x_6383_; lean_object* v_traceState_6384_; lean_object* v_env_6385_; lean_object* v_nextMacroScope_6386_; lean_object* v_ngen_6387_; lean_object* v_auxDeclNGen_6388_; lean_object* v_cache_6389_; lean_object* v_messages_6390_; lean_object* v_infoState_6391_; lean_object* v_snapshotTasks_6392_; lean_object* v___x_6394_; uint8_t v_isShared_6395_; uint8_t v_isSharedCheck_6411_; 
lean_dec(v_snd_6362_);
lean_dec(v_fst_6361_);
lean_dec_ref(v_msg_6331_);
lean_dec_ref(v_tag_6327_);
lean_dec(v_cls_6325_);
v___x_6383_ = lean_st_ref_take(v___y_6343_);
v_traceState_6384_ = lean_ctor_get(v___x_6383_, 4);
v_env_6385_ = lean_ctor_get(v___x_6383_, 0);
v_nextMacroScope_6386_ = lean_ctor_get(v___x_6383_, 1);
v_ngen_6387_ = lean_ctor_get(v___x_6383_, 2);
v_auxDeclNGen_6388_ = lean_ctor_get(v___x_6383_, 3);
v_cache_6389_ = lean_ctor_get(v___x_6383_, 5);
v_messages_6390_ = lean_ctor_get(v___x_6383_, 6);
v_infoState_6391_ = lean_ctor_get(v___x_6383_, 7);
v_snapshotTasks_6392_ = lean_ctor_get(v___x_6383_, 8);
v_isSharedCheck_6411_ = !lean_is_exclusive(v___x_6383_);
if (v_isSharedCheck_6411_ == 0)
{
v___x_6394_ = v___x_6383_;
v_isShared_6395_ = v_isSharedCheck_6411_;
goto v_resetjp_6393_;
}
else
{
lean_inc(v_snapshotTasks_6392_);
lean_inc(v_infoState_6391_);
lean_inc(v_messages_6390_);
lean_inc(v_cache_6389_);
lean_inc(v_traceState_6384_);
lean_inc(v_auxDeclNGen_6388_);
lean_inc(v_ngen_6387_);
lean_inc(v_nextMacroScope_6386_);
lean_inc(v_env_6385_);
lean_dec(v___x_6383_);
v___x_6394_ = lean_box(0);
v_isShared_6395_ = v_isSharedCheck_6411_;
goto v_resetjp_6393_;
}
v_resetjp_6393_:
{
uint64_t v_tid_6396_; lean_object* v_traces_6397_; lean_object* v___x_6399_; uint8_t v_isShared_6400_; uint8_t v_isSharedCheck_6410_; 
v_tid_6396_ = lean_ctor_get_uint64(v_traceState_6384_, sizeof(void*)*1);
v_traces_6397_ = lean_ctor_get(v_traceState_6384_, 0);
v_isSharedCheck_6410_ = !lean_is_exclusive(v_traceState_6384_);
if (v_isSharedCheck_6410_ == 0)
{
v___x_6399_ = v_traceState_6384_;
v_isShared_6400_ = v_isSharedCheck_6410_;
goto v_resetjp_6398_;
}
else
{
lean_inc(v_traces_6397_);
lean_dec(v_traceState_6384_);
v___x_6399_ = lean_box(0);
v_isShared_6400_ = v_isSharedCheck_6410_;
goto v_resetjp_6398_;
}
v_resetjp_6398_:
{
lean_object* v___x_6401_; lean_object* v___x_6403_; 
v___x_6401_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_6330_, v_traces_6397_);
lean_dec_ref(v_traces_6397_);
if (v_isShared_6400_ == 0)
{
lean_ctor_set(v___x_6399_, 0, v___x_6401_);
v___x_6403_ = v___x_6399_;
goto v_reusejp_6402_;
}
else
{
lean_object* v_reuseFailAlloc_6409_; 
v_reuseFailAlloc_6409_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_6409_, 0, v___x_6401_);
lean_ctor_set_uint64(v_reuseFailAlloc_6409_, sizeof(void*)*1, v_tid_6396_);
v___x_6403_ = v_reuseFailAlloc_6409_;
goto v_reusejp_6402_;
}
v_reusejp_6402_:
{
lean_object* v___x_6405_; 
if (v_isShared_6395_ == 0)
{
lean_ctor_set(v___x_6394_, 4, v___x_6403_);
v___x_6405_ = v___x_6394_;
goto v_reusejp_6404_;
}
else
{
lean_object* v_reuseFailAlloc_6408_; 
v_reuseFailAlloc_6408_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6408_, 0, v_env_6385_);
lean_ctor_set(v_reuseFailAlloc_6408_, 1, v_nextMacroScope_6386_);
lean_ctor_set(v_reuseFailAlloc_6408_, 2, v_ngen_6387_);
lean_ctor_set(v_reuseFailAlloc_6408_, 3, v_auxDeclNGen_6388_);
lean_ctor_set(v_reuseFailAlloc_6408_, 4, v___x_6403_);
lean_ctor_set(v_reuseFailAlloc_6408_, 5, v_cache_6389_);
lean_ctor_set(v_reuseFailAlloc_6408_, 6, v_messages_6390_);
lean_ctor_set(v_reuseFailAlloc_6408_, 7, v_infoState_6391_);
lean_ctor_set(v_reuseFailAlloc_6408_, 8, v_snapshotTasks_6392_);
v___x_6405_ = v_reuseFailAlloc_6408_;
goto v_reusejp_6404_;
}
v_reusejp_6404_:
{
lean_object* v___x_6406_; lean_object* v___x_6407_; 
v___x_6406_ = lean_st_ref_put(v___y_6343_, v___x_6405_);
v___x_6407_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(v_fst_6345_);
return v___x_6407_;
}
}
}
}
}
else
{
goto v___jp_6376_;
}
}
else
{
goto v___jp_6376_;
}
}
v___jp_6412_:
{
double v___x_6414_; double v___x_6415_; double v___x_6416_; uint8_t v___x_6417_; 
v___x_6414_ = lean_unbox_float(v_snd_6362_);
v___x_6415_ = lean_unbox_float(v_fst_6361_);
v___x_6416_ = lean_float_sub(v___x_6414_, v___x_6415_);
v___x_6417_ = lean_float_decLt(v___y_6413_, v___x_6416_);
v___y_6382_ = v___x_6417_;
goto v___jp_6381_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3___boxed(lean_object** _args){
lean_object* v_cls_6428_ = _args[0];
lean_object* v_collapsed_6429_ = _args[1];
lean_object* v_tag_6430_ = _args[2];
lean_object* v_opts_6431_ = _args[3];
lean_object* v_clsEnabled_6432_ = _args[4];
lean_object* v_oldTraces_6433_ = _args[5];
lean_object* v_msg_6434_ = _args[6];
lean_object* v_resStartStop_6435_ = _args[7];
lean_object* v___y_6436_ = _args[8];
lean_object* v___y_6437_ = _args[9];
lean_object* v___y_6438_ = _args[10];
lean_object* v___y_6439_ = _args[11];
lean_object* v___y_6440_ = _args[12];
lean_object* v___y_6441_ = _args[13];
lean_object* v___y_6442_ = _args[14];
lean_object* v___y_6443_ = _args[15];
lean_object* v___y_6444_ = _args[16];
lean_object* v___y_6445_ = _args[17];
lean_object* v___y_6446_ = _args[18];
lean_object* v___y_6447_ = _args[19];
_start:
{
uint8_t v_collapsed_boxed_6448_; uint8_t v_clsEnabled_boxed_6449_; lean_object* v_res_6450_; 
v_collapsed_boxed_6448_ = lean_unbox(v_collapsed_6429_);
v_clsEnabled_boxed_6449_ = lean_unbox(v_clsEnabled_6432_);
v_res_6450_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(v_cls_6428_, v_collapsed_boxed_6448_, v_tag_6430_, v_opts_6431_, v_clsEnabled_boxed_6449_, v_oldTraces_6433_, v_msg_6434_, v_resStartStop_6435_, v___y_6436_, v___y_6437_, v___y_6438_, v___y_6439_, v___y_6440_, v___y_6441_, v___y_6442_, v___y_6443_, v___y_6444_, v___y_6445_, v___y_6446_);
lean_dec(v___y_6446_);
lean_dec_ref(v___y_6445_);
lean_dec(v___y_6444_);
lean_dec_ref(v___y_6443_);
lean_dec(v___y_6442_);
lean_dec_ref(v___y_6441_);
lean_dec(v___y_6440_);
lean_dec_ref(v___y_6439_);
lean_dec(v___y_6438_);
lean_dec(v___y_6437_);
lean_dec_ref(v___y_6436_);
lean_dec_ref(v_opts_6431_);
return v_res_6450_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_6455_; lean_object* v___x_6456_; 
v___x_6455_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__1));
v___x_6456_ = l_Lean_stringToMessageData(v___x_6455_);
return v___x_6456_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(lean_object* v_as_x27_6457_, lean_object* v_b_6458_, lean_object* v___y_6459_, lean_object* v___y_6460_, lean_object* v___y_6461_, lean_object* v___y_6462_, lean_object* v___y_6463_, lean_object* v___y_6464_, lean_object* v___y_6465_, lean_object* v___y_6466_, lean_object* v___y_6467_, lean_object* v___y_6468_, lean_object* v___y_6469_){
_start:
{
if (lean_obj_tag(v_as_x27_6457_) == 0)
{
lean_object* v___x_6471_; 
v___x_6471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6471_, 0, v_b_6458_);
return v___x_6471_;
}
else
{
lean_object* v_head_6472_; lean_object* v_toCold_6473_; lean_object* v_options_6474_; lean_object* v_tail_6475_; lean_object* v_name_6476_; lean_object* v_run_x27_6477_; lean_object* v_inheritedTraceOptions_6478_; uint8_t v_hasTrace_6479_; lean_object* v___x_6480_; uint8_t v___y_6482_; lean_object* v___x_6487_; lean_object* v___y_6489_; 
lean_dec_ref(v_b_6458_);
v_head_6472_ = lean_ctor_get(v_as_x27_6457_, 0);
v_toCold_6473_ = lean_ctor_get(v___y_6468_, 0);
v_options_6474_ = lean_ctor_get(v_toCold_6473_, 2);
v_tail_6475_ = lean_ctor_get(v_as_x27_6457_, 1);
v_name_6476_ = lean_ctor_get(v_head_6472_, 0);
v_run_x27_6477_ = lean_ctor_get(v_head_6472_, 1);
v_inheritedTraceOptions_6478_ = lean_ctor_get(v_toCold_6473_, 11);
v_hasTrace_6479_ = lean_ctor_get_uint8(v_options_6474_, sizeof(void*)*1);
v___x_6480_ = lean_box(0);
v___x_6487_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0));
if (v_hasTrace_6479_ == 0)
{
lean_object* v___x_6517_; 
lean_inc_ref(v_run_x27_6477_);
lean_inc(v___y_6469_);
lean_inc_ref(v___y_6468_);
lean_inc(v___y_6467_);
lean_inc_ref(v___y_6466_);
lean_inc(v___y_6465_);
lean_inc_ref(v___y_6464_);
lean_inc(v___y_6463_);
lean_inc_ref(v___y_6462_);
lean_inc(v___y_6461_);
lean_inc(v___y_6460_);
lean_inc_ref(v___y_6459_);
v___x_6517_ = lean_apply_12(v_run_x27_6477_, v___y_6459_, v___y_6460_, v___y_6461_, v___y_6462_, v___y_6463_, v___y_6464_, v___y_6465_, v___y_6466_, v___y_6467_, v___y_6468_, v___y_6469_, lean_box(0));
v___y_6489_ = v___x_6517_;
goto v___jp_6488_;
}
else
{
lean_object* v___f_6518_; lean_object* v___x_6519_; lean_object* v___x_6520_; lean_object* v___x_6521_; uint8_t v___x_6522_; lean_object* v___y_6524_; lean_object* v___y_6525_; lean_object* v_a_6526_; lean_object* v___y_6539_; lean_object* v___y_6540_; lean_object* v_a_6541_; 
lean_inc(v_name_6476_);
v___f_6518_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___lam__0___boxed), 14, 1);
lean_closure_set(v___f_6518_, 0, v_name_6476_);
v___x_6519_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_6520_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_mapSimpHyps_go_spec__0___redArg___closed__1));
v___x_6521_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_6522_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6478_, v_options_6474_, v___x_6521_);
if (v___x_6522_ == 0)
{
lean_object* v___x_6591_; uint8_t v___x_6592_; 
v___x_6591_ = l_Lean_trace_profiler;
v___x_6592_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_options_6474_, v___x_6591_);
if (v___x_6592_ == 0)
{
lean_object* v___x_6593_; 
lean_dec_ref(v___f_6518_);
lean_inc_ref(v_run_x27_6477_);
lean_inc(v___y_6469_);
lean_inc_ref(v___y_6468_);
lean_inc(v___y_6467_);
lean_inc_ref(v___y_6466_);
lean_inc(v___y_6465_);
lean_inc_ref(v___y_6464_);
lean_inc(v___y_6463_);
lean_inc_ref(v___y_6462_);
lean_inc(v___y_6461_);
lean_inc(v___y_6460_);
lean_inc_ref(v___y_6459_);
v___x_6593_ = lean_apply_12(v_run_x27_6477_, v___y_6459_, v___y_6460_, v___y_6461_, v___y_6462_, v___y_6463_, v___y_6464_, v___y_6465_, v___y_6466_, v___y_6467_, v___y_6468_, v___y_6469_, lean_box(0));
v___y_6489_ = v___x_6593_;
goto v___jp_6488_;
}
else
{
goto v___jp_6550_;
}
}
else
{
goto v___jp_6550_;
}
v___jp_6523_:
{
lean_object* v___x_6527_; double v___x_6528_; double v___x_6529_; double v___x_6530_; double v___x_6531_; double v___x_6532_; lean_object* v___x_6533_; lean_object* v___x_6534_; lean_object* v___x_6535_; lean_object* v___x_6536_; lean_object* v___x_6537_; 
v___x_6527_ = lean_io_mono_nanos_now();
v___x_6528_ = lean_float_of_nat(v___y_6525_);
v___x_6529_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13, &l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_run___closed__13);
v___x_6530_ = lean_float_div(v___x_6528_, v___x_6529_);
v___x_6531_ = lean_float_of_nat(v___x_6527_);
v___x_6532_ = lean_float_div(v___x_6531_, v___x_6529_);
v___x_6533_ = lean_box_float(v___x_6530_);
v___x_6534_ = lean_box_float(v___x_6532_);
v___x_6535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6535_, 0, v___x_6533_);
lean_ctor_set(v___x_6535_, 1, v___x_6534_);
v___x_6536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6536_, 0, v_a_6526_);
lean_ctor_set(v___x_6536_, 1, v___x_6535_);
v___x_6537_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(v___x_6519_, v_hasTrace_6479_, v___x_6520_, v_options_6474_, v___x_6522_, v___y_6524_, v___f_6518_, v___x_6536_, v___y_6459_, v___y_6460_, v___y_6461_, v___y_6462_, v___y_6463_, v___y_6464_, v___y_6465_, v___y_6466_, v___y_6467_, v___y_6468_, v___y_6469_);
v___y_6489_ = v___x_6537_;
goto v___jp_6488_;
}
v___jp_6538_:
{
lean_object* v___x_6542_; double v___x_6543_; double v___x_6544_; lean_object* v___x_6545_; lean_object* v___x_6546_; lean_object* v___x_6547_; lean_object* v___x_6548_; lean_object* v___x_6549_; 
v___x_6542_ = lean_io_get_num_heartbeats();
v___x_6543_ = lean_float_of_nat(v___y_6540_);
v___x_6544_ = lean_float_of_nat(v___x_6542_);
v___x_6545_ = lean_box_float(v___x_6543_);
v___x_6546_ = lean_box_float(v___x_6544_);
v___x_6547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6547_, 0, v___x_6545_);
lean_ctor_set(v___x_6547_, 1, v___x_6546_);
v___x_6548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6548_, 0, v_a_6541_);
lean_ctor_set(v___x_6548_, 1, v___x_6547_);
v___x_6549_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3(v___x_6519_, v_hasTrace_6479_, v___x_6520_, v_options_6474_, v___x_6522_, v___y_6539_, v___f_6518_, v___x_6548_, v___y_6459_, v___y_6460_, v___y_6461_, v___y_6462_, v___y_6463_, v___y_6464_, v___y_6465_, v___y_6466_, v___y_6467_, v___y_6468_, v___y_6469_);
v___y_6489_ = v___x_6549_;
goto v___jp_6488_;
}
v___jp_6550_:
{
lean_object* v___x_6551_; lean_object* v_a_6552_; lean_object* v___x_6553_; uint8_t v___x_6554_; 
v___x_6551_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__1___redArg(v___y_6469_);
v_a_6552_ = lean_ctor_get(v___x_6551_, 0);
lean_inc(v_a_6552_);
lean_dec_ref(v___x_6551_);
v___x_6553_ = l_Lean_trace_profiler_useHeartbeats;
v___x_6554_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__2(v_options_6474_, v___x_6553_);
if (v___x_6554_ == 0)
{
lean_object* v___x_6555_; lean_object* v___x_6556_; 
v___x_6555_ = lean_io_mono_nanos_now();
lean_inc_ref(v_run_x27_6477_);
lean_inc(v___y_6469_);
lean_inc_ref(v___y_6468_);
lean_inc(v___y_6467_);
lean_inc_ref(v___y_6466_);
lean_inc(v___y_6465_);
lean_inc_ref(v___y_6464_);
lean_inc(v___y_6463_);
lean_inc_ref(v___y_6462_);
lean_inc(v___y_6461_);
lean_inc(v___y_6460_);
lean_inc_ref(v___y_6459_);
v___x_6556_ = lean_apply_12(v_run_x27_6477_, v___y_6459_, v___y_6460_, v___y_6461_, v___y_6462_, v___y_6463_, v___y_6464_, v___y_6465_, v___y_6466_, v___y_6467_, v___y_6468_, v___y_6469_, lean_box(0));
if (lean_obj_tag(v___x_6556_) == 0)
{
lean_object* v_a_6557_; lean_object* v___x_6559_; uint8_t v_isShared_6560_; uint8_t v_isSharedCheck_6564_; 
v_a_6557_ = lean_ctor_get(v___x_6556_, 0);
v_isSharedCheck_6564_ = !lean_is_exclusive(v___x_6556_);
if (v_isSharedCheck_6564_ == 0)
{
v___x_6559_ = v___x_6556_;
v_isShared_6560_ = v_isSharedCheck_6564_;
goto v_resetjp_6558_;
}
else
{
lean_inc(v_a_6557_);
lean_dec(v___x_6556_);
v___x_6559_ = lean_box(0);
v_isShared_6560_ = v_isSharedCheck_6564_;
goto v_resetjp_6558_;
}
v_resetjp_6558_:
{
lean_object* v___x_6562_; 
if (v_isShared_6560_ == 0)
{
lean_ctor_set_tag(v___x_6559_, 1);
v___x_6562_ = v___x_6559_;
goto v_reusejp_6561_;
}
else
{
lean_object* v_reuseFailAlloc_6563_; 
v_reuseFailAlloc_6563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6563_, 0, v_a_6557_);
v___x_6562_ = v_reuseFailAlloc_6563_;
goto v_reusejp_6561_;
}
v_reusejp_6561_:
{
v___y_6524_ = v_a_6552_;
v___y_6525_ = v___x_6555_;
v_a_6526_ = v___x_6562_;
goto v___jp_6523_;
}
}
}
else
{
lean_object* v_a_6565_; lean_object* v___x_6567_; uint8_t v_isShared_6568_; uint8_t v_isSharedCheck_6572_; 
v_a_6565_ = lean_ctor_get(v___x_6556_, 0);
v_isSharedCheck_6572_ = !lean_is_exclusive(v___x_6556_);
if (v_isSharedCheck_6572_ == 0)
{
v___x_6567_ = v___x_6556_;
v_isShared_6568_ = v_isSharedCheck_6572_;
goto v_resetjp_6566_;
}
else
{
lean_inc(v_a_6565_);
lean_dec(v___x_6556_);
v___x_6567_ = lean_box(0);
v_isShared_6568_ = v_isSharedCheck_6572_;
goto v_resetjp_6566_;
}
v_resetjp_6566_:
{
lean_object* v___x_6570_; 
if (v_isShared_6568_ == 0)
{
lean_ctor_set_tag(v___x_6567_, 0);
v___x_6570_ = v___x_6567_;
goto v_reusejp_6569_;
}
else
{
lean_object* v_reuseFailAlloc_6571_; 
v_reuseFailAlloc_6571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6571_, 0, v_a_6565_);
v___x_6570_ = v_reuseFailAlloc_6571_;
goto v_reusejp_6569_;
}
v_reusejp_6569_:
{
v___y_6524_ = v_a_6552_;
v___y_6525_ = v___x_6555_;
v_a_6526_ = v___x_6570_;
goto v___jp_6523_;
}
}
}
}
else
{
lean_object* v___x_6573_; lean_object* v___x_6574_; 
v___x_6573_ = lean_io_get_num_heartbeats();
lean_inc_ref(v_run_x27_6477_);
lean_inc(v___y_6469_);
lean_inc_ref(v___y_6468_);
lean_inc(v___y_6467_);
lean_inc_ref(v___y_6466_);
lean_inc(v___y_6465_);
lean_inc_ref(v___y_6464_);
lean_inc(v___y_6463_);
lean_inc_ref(v___y_6462_);
lean_inc(v___y_6461_);
lean_inc(v___y_6460_);
lean_inc_ref(v___y_6459_);
v___x_6574_ = lean_apply_12(v_run_x27_6477_, v___y_6459_, v___y_6460_, v___y_6461_, v___y_6462_, v___y_6463_, v___y_6464_, v___y_6465_, v___y_6466_, v___y_6467_, v___y_6468_, v___y_6469_, lean_box(0));
if (lean_obj_tag(v___x_6574_) == 0)
{
lean_object* v_a_6575_; lean_object* v___x_6577_; uint8_t v_isShared_6578_; uint8_t v_isSharedCheck_6582_; 
v_a_6575_ = lean_ctor_get(v___x_6574_, 0);
v_isSharedCheck_6582_ = !lean_is_exclusive(v___x_6574_);
if (v_isSharedCheck_6582_ == 0)
{
v___x_6577_ = v___x_6574_;
v_isShared_6578_ = v_isSharedCheck_6582_;
goto v_resetjp_6576_;
}
else
{
lean_inc(v_a_6575_);
lean_dec(v___x_6574_);
v___x_6577_ = lean_box(0);
v_isShared_6578_ = v_isSharedCheck_6582_;
goto v_resetjp_6576_;
}
v_resetjp_6576_:
{
lean_object* v___x_6580_; 
if (v_isShared_6578_ == 0)
{
lean_ctor_set_tag(v___x_6577_, 1);
v___x_6580_ = v___x_6577_;
goto v_reusejp_6579_;
}
else
{
lean_object* v_reuseFailAlloc_6581_; 
v_reuseFailAlloc_6581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6581_, 0, v_a_6575_);
v___x_6580_ = v_reuseFailAlloc_6581_;
goto v_reusejp_6579_;
}
v_reusejp_6579_:
{
v___y_6539_ = v_a_6552_;
v___y_6540_ = v___x_6573_;
v_a_6541_ = v___x_6580_;
goto v___jp_6538_;
}
}
}
else
{
lean_object* v_a_6583_; lean_object* v___x_6585_; uint8_t v_isShared_6586_; uint8_t v_isSharedCheck_6590_; 
v_a_6583_ = lean_ctor_get(v___x_6574_, 0);
v_isSharedCheck_6590_ = !lean_is_exclusive(v___x_6574_);
if (v_isSharedCheck_6590_ == 0)
{
v___x_6585_ = v___x_6574_;
v_isShared_6586_ = v_isSharedCheck_6590_;
goto v_resetjp_6584_;
}
else
{
lean_inc(v_a_6583_);
lean_dec(v___x_6574_);
v___x_6585_ = lean_box(0);
v_isShared_6586_ = v_isSharedCheck_6590_;
goto v_resetjp_6584_;
}
v_resetjp_6584_:
{
lean_object* v___x_6588_; 
if (v_isShared_6586_ == 0)
{
lean_ctor_set_tag(v___x_6585_, 0);
v___x_6588_ = v___x_6585_;
goto v_reusejp_6587_;
}
else
{
lean_object* v_reuseFailAlloc_6589_; 
v_reuseFailAlloc_6589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6589_, 0, v_a_6583_);
v___x_6588_ = v_reuseFailAlloc_6589_;
goto v_reusejp_6587_;
}
v_reusejp_6587_:
{
v___y_6539_ = v_a_6552_;
v___y_6540_ = v___x_6573_;
v_a_6541_ = v___x_6588_;
goto v___jp_6538_;
}
}
}
}
}
}
v___jp_6481_:
{
lean_object* v___x_6483_; lean_object* v___x_6484_; lean_object* v___x_6485_; lean_object* v___x_6486_; 
v___x_6483_ = lean_box(v___y_6482_);
v___x_6484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6484_, 0, v___x_6483_);
v___x_6485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6485_, 0, v___x_6484_);
lean_ctor_set(v___x_6485_, 1, v___x_6480_);
v___x_6486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6486_, 0, v___x_6485_);
return v___x_6486_;
}
v___jp_6488_:
{
if (lean_obj_tag(v___y_6489_) == 0)
{
lean_object* v_a_6490_; uint8_t v___x_6491_; 
v_a_6490_ = lean_ctor_get(v___y_6489_, 0);
lean_inc(v_a_6490_);
lean_dec_ref_known(v___y_6489_, 1);
v___x_6491_ = lean_unbox(v_a_6490_);
if (v___x_6491_ == 0)
{
lean_dec(v_a_6490_);
v_as_x27_6457_ = v_tail_6475_;
v_b_6458_ = v___x_6487_;
goto _start;
}
else
{
if (v_hasTrace_6479_ == 0)
{
uint8_t v___x_6493_; 
v___x_6493_ = lean_unbox(v_a_6490_);
lean_dec(v_a_6490_);
v___y_6482_ = v___x_6493_;
goto v___jp_6481_;
}
else
{
lean_object* v___x_6494_; lean_object* v___x_6495_; uint8_t v___x_6496_; 
v___x_6494_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_6495_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_6496_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6478_, v_options_6474_, v___x_6495_);
if (v___x_6496_ == 0)
{
uint8_t v___x_6497_; 
v___x_6497_ = lean_unbox(v_a_6490_);
lean_dec(v_a_6490_);
v___y_6482_ = v___x_6497_;
goto v___jp_6481_;
}
else
{
lean_object* v___x_6498_; lean_object* v___x_6499_; 
v___x_6498_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__2);
v___x_6499_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v___x_6494_, v___x_6498_, v___y_6466_, v___y_6467_, v___y_6468_, v___y_6469_);
if (lean_obj_tag(v___x_6499_) == 0)
{
uint8_t v___x_6500_; 
lean_dec_ref_known(v___x_6499_, 1);
v___x_6500_ = lean_unbox(v_a_6490_);
lean_dec(v_a_6490_);
v___y_6482_ = v___x_6500_;
goto v___jp_6481_;
}
else
{
lean_object* v_a_6501_; lean_object* v___x_6503_; uint8_t v_isShared_6504_; uint8_t v_isSharedCheck_6508_; 
lean_dec(v_a_6490_);
v_a_6501_ = lean_ctor_get(v___x_6499_, 0);
v_isSharedCheck_6508_ = !lean_is_exclusive(v___x_6499_);
if (v_isSharedCheck_6508_ == 0)
{
v___x_6503_ = v___x_6499_;
v_isShared_6504_ = v_isSharedCheck_6508_;
goto v_resetjp_6502_;
}
else
{
lean_inc(v_a_6501_);
lean_dec(v___x_6499_);
v___x_6503_ = lean_box(0);
v_isShared_6504_ = v_isSharedCheck_6508_;
goto v_resetjp_6502_;
}
v_resetjp_6502_:
{
lean_object* v___x_6506_; 
if (v_isShared_6504_ == 0)
{
v___x_6506_ = v___x_6503_;
goto v_reusejp_6505_;
}
else
{
lean_object* v_reuseFailAlloc_6507_; 
v_reuseFailAlloc_6507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6507_, 0, v_a_6501_);
v___x_6506_ = v_reuseFailAlloc_6507_;
goto v_reusejp_6505_;
}
v_reusejp_6505_:
{
return v___x_6506_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_6509_; lean_object* v___x_6511_; uint8_t v_isShared_6512_; uint8_t v_isSharedCheck_6516_; 
v_a_6509_ = lean_ctor_get(v___y_6489_, 0);
v_isSharedCheck_6516_ = !lean_is_exclusive(v___y_6489_);
if (v_isSharedCheck_6516_ == 0)
{
v___x_6511_ = v___y_6489_;
v_isShared_6512_ = v_isSharedCheck_6516_;
goto v_resetjp_6510_;
}
else
{
lean_inc(v_a_6509_);
lean_dec(v___y_6489_);
v___x_6511_ = lean_box(0);
v_isShared_6512_ = v_isSharedCheck_6516_;
goto v_resetjp_6510_;
}
v_resetjp_6510_:
{
lean_object* v___x_6514_; 
if (v_isShared_6512_ == 0)
{
v___x_6514_ = v___x_6511_;
goto v_reusejp_6513_;
}
else
{
lean_object* v_reuseFailAlloc_6515_; 
v_reuseFailAlloc_6515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6515_, 0, v_a_6509_);
v___x_6514_ = v_reuseFailAlloc_6515_;
goto v_reusejp_6513_;
}
v_reusejp_6513_:
{
return v___x_6514_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___boxed(lean_object* v_as_x27_6594_, lean_object* v_b_6595_, lean_object* v___y_6596_, lean_object* v___y_6597_, lean_object* v___y_6598_, lean_object* v___y_6599_, lean_object* v___y_6600_, lean_object* v___y_6601_, lean_object* v___y_6602_, lean_object* v___y_6603_, lean_object* v___y_6604_, lean_object* v___y_6605_, lean_object* v___y_6606_, lean_object* v___y_6607_){
_start:
{
lean_object* v_res_6608_; 
v_res_6608_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(v_as_x27_6594_, v_b_6595_, v___y_6596_, v___y_6597_, v___y_6598_, v___y_6599_, v___y_6600_, v___y_6601_, v___y_6602_, v___y_6603_, v___y_6604_, v___y_6605_, v___y_6606_);
lean_dec(v___y_6606_);
lean_dec_ref(v___y_6605_);
lean_dec(v___y_6604_);
lean_dec_ref(v___y_6603_);
lean_dec(v___y_6602_);
lean_dec_ref(v___y_6601_);
lean_dec(v___y_6600_);
lean_dec_ref(v___y_6599_);
lean_dec(v___y_6598_);
lean_dec(v___y_6597_);
lean_dec_ref(v___y_6596_);
lean_dec(v_as_x27_6594_);
return v_res_6608_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2(void){
_start:
{
lean_object* v___x_6611_; lean_object* v___x_6612_; 
v___x_6611_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__1));
v___x_6612_ = l_Lean_stringToMessageData(v___x_6611_);
return v___x_6612_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4(void){
_start:
{
lean_object* v___x_6614_; lean_object* v___x_6615_; 
v___x_6614_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__3));
v___x_6615_ = l_Lean_stringToMessageData(v___x_6614_);
return v___x_6615_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go(lean_object* v_passes_6616_, lean_object* v_a_6617_, lean_object* v_a_6618_, lean_object* v_a_6619_, lean_object* v_a_6620_, lean_object* v_a_6621_, lean_object* v_a_6622_, lean_object* v_a_6623_, lean_object* v_a_6624_, lean_object* v_a_6625_, lean_object* v_a_6626_, lean_object* v_a_6627_){
_start:
{
lean_object* v___x_6629_; lean_object* v___x_6630_; 
v___x_6629_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__0));
v___x_6630_ = l_Lean_Core_checkSystem(v___x_6629_, v_a_6626_, v_a_6627_);
if (lean_obj_tag(v___x_6630_) == 0)
{
lean_object* v___x_6631_; lean_object* v_caches_6632_; lean_object* v_typeAnalysis_6633_; lean_object* v_target_6634_; lean_object* v_hypotheses_6635_; lean_object* v___x_6637_; uint8_t v_isShared_6638_; uint8_t v_isSharedCheck_6720_; 
lean_dec_ref_known(v___x_6630_, 1);
v___x_6631_ = lean_st_ref_take(v_a_6618_);
v_caches_6632_ = lean_ctor_get(v___x_6631_, 0);
v_typeAnalysis_6633_ = lean_ctor_get(v___x_6631_, 1);
v_target_6634_ = lean_ctor_get(v___x_6631_, 2);
v_hypotheses_6635_ = lean_ctor_get(v___x_6631_, 3);
v_isSharedCheck_6720_ = !lean_is_exclusive(v___x_6631_);
if (v_isSharedCheck_6720_ == 0)
{
v___x_6637_ = v___x_6631_;
v_isShared_6638_ = v_isSharedCheck_6720_;
goto v_resetjp_6636_;
}
else
{
lean_inc(v_hypotheses_6635_);
lean_inc(v_target_6634_);
lean_inc(v_typeAnalysis_6633_);
lean_inc(v_caches_6632_);
lean_dec(v___x_6631_);
v___x_6637_ = lean_box(0);
v_isShared_6638_ = v_isSharedCheck_6720_;
goto v_resetjp_6636_;
}
v_resetjp_6636_:
{
uint8_t v___x_6639_; lean_object* v___x_6641_; 
v___x_6639_ = 0;
if (v_isShared_6638_ == 0)
{
v___x_6641_ = v___x_6637_;
goto v_reusejp_6640_;
}
else
{
lean_object* v_reuseFailAlloc_6719_; 
v_reuseFailAlloc_6719_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_6719_, 0, v_caches_6632_);
lean_ctor_set(v_reuseFailAlloc_6719_, 1, v_typeAnalysis_6633_);
lean_ctor_set(v_reuseFailAlloc_6719_, 2, v_target_6634_);
lean_ctor_set(v_reuseFailAlloc_6719_, 3, v_hypotheses_6635_);
v___x_6641_ = v_reuseFailAlloc_6719_;
goto v_reusejp_6640_;
}
v_reusejp_6640_:
{
lean_object* v___x_6642_; lean_object* v___x_6643_; lean_object* v___x_6644_; 
lean_ctor_set_uint8(v___x_6641_, sizeof(void*)*4, v___x_6639_);
v___x_6642_ = lean_st_ref_put(v_a_6618_, v___x_6641_);
v___x_6643_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg___closed__0));
v___x_6644_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(v_passes_6616_, v___x_6643_, v_a_6617_, v_a_6618_, v_a_6619_, v_a_6620_, v_a_6621_, v_a_6622_, v_a_6623_, v_a_6624_, v_a_6625_, v_a_6626_, v_a_6627_);
if (lean_obj_tag(v___x_6644_) == 0)
{
lean_object* v_a_6645_; lean_object* v___x_6647_; uint8_t v_isShared_6648_; uint8_t v_isSharedCheck_6710_; 
v_a_6645_ = lean_ctor_get(v___x_6644_, 0);
v_isSharedCheck_6710_ = !lean_is_exclusive(v___x_6644_);
if (v_isSharedCheck_6710_ == 0)
{
v___x_6647_ = v___x_6644_;
v_isShared_6648_ = v_isSharedCheck_6710_;
goto v_resetjp_6646_;
}
else
{
lean_inc(v_a_6645_);
lean_dec(v___x_6644_);
v___x_6647_ = lean_box(0);
v_isShared_6648_ = v_isSharedCheck_6710_;
goto v_resetjp_6646_;
}
v_resetjp_6646_:
{
lean_object* v_fst_6649_; 
v_fst_6649_ = lean_ctor_get(v_a_6645_, 0);
lean_inc(v_fst_6649_);
lean_dec(v_a_6645_);
if (lean_obj_tag(v_fst_6649_) == 0)
{
lean_object* v___x_6650_; uint8_t v_didChange_6651_; 
v___x_6650_ = lean_st_ref_get(v_a_6618_);
v_didChange_6651_ = lean_ctor_get_uint8(v___x_6650_, sizeof(void*)*4);
lean_dec(v___x_6650_);
if (v_didChange_6651_ == 0)
{
lean_object* v_toCold_6652_; lean_object* v_options_6653_; uint8_t v_hasTrace_6654_; 
v_toCold_6652_ = lean_ctor_get(v_a_6626_, 0);
v_options_6653_ = lean_ctor_get(v_toCold_6652_, 2);
v_hasTrace_6654_ = lean_ctor_get_uint8(v_options_6653_, sizeof(void*)*1);
if (v_hasTrace_6654_ == 0)
{
lean_object* v___x_6655_; lean_object* v___x_6657_; 
v___x_6655_ = lean_box(v_didChange_6651_);
if (v_isShared_6648_ == 0)
{
lean_ctor_set(v___x_6647_, 0, v___x_6655_);
v___x_6657_ = v___x_6647_;
goto v_reusejp_6656_;
}
else
{
lean_object* v_reuseFailAlloc_6658_; 
v_reuseFailAlloc_6658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6658_, 0, v___x_6655_);
v___x_6657_ = v_reuseFailAlloc_6658_;
goto v_reusejp_6656_;
}
v_reusejp_6656_:
{
return v___x_6657_;
}
}
else
{
lean_object* v_inheritedTraceOptions_6659_; lean_object* v___x_6660_; lean_object* v___x_6661_; uint8_t v___x_6662_; 
v_inheritedTraceOptions_6659_ = lean_ctor_get(v_toCold_6652_, 11);
v___x_6660_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_6661_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_6662_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6659_, v_options_6653_, v___x_6661_);
if (v___x_6662_ == 0)
{
lean_object* v___x_6663_; lean_object* v___x_6665_; 
v___x_6663_ = lean_box(v_didChange_6651_);
if (v_isShared_6648_ == 0)
{
lean_ctor_set(v___x_6647_, 0, v___x_6663_);
v___x_6665_ = v___x_6647_;
goto v_reusejp_6664_;
}
else
{
lean_object* v_reuseFailAlloc_6666_; 
v_reuseFailAlloc_6666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6666_, 0, v___x_6663_);
v___x_6665_ = v_reuseFailAlloc_6666_;
goto v_reusejp_6664_;
}
v_reusejp_6664_:
{
return v___x_6665_;
}
}
else
{
lean_object* v___x_6667_; lean_object* v___x_6668_; 
lean_del_object(v___x_6647_);
v___x_6667_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__2);
v___x_6668_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v___x_6660_, v___x_6667_, v_a_6624_, v_a_6625_, v_a_6626_, v_a_6627_);
if (lean_obj_tag(v___x_6668_) == 0)
{
lean_object* v___x_6670_; uint8_t v_isShared_6671_; uint8_t v_isSharedCheck_6676_; 
v_isSharedCheck_6676_ = !lean_is_exclusive(v___x_6668_);
if (v_isSharedCheck_6676_ == 0)
{
lean_object* v_unused_6677_; 
v_unused_6677_ = lean_ctor_get(v___x_6668_, 0);
lean_dec(v_unused_6677_);
v___x_6670_ = v___x_6668_;
v_isShared_6671_ = v_isSharedCheck_6676_;
goto v_resetjp_6669_;
}
else
{
lean_dec(v___x_6668_);
v___x_6670_ = lean_box(0);
v_isShared_6671_ = v_isSharedCheck_6676_;
goto v_resetjp_6669_;
}
v_resetjp_6669_:
{
lean_object* v___x_6672_; lean_object* v___x_6674_; 
v___x_6672_ = lean_box(v_didChange_6651_);
if (v_isShared_6671_ == 0)
{
lean_ctor_set(v___x_6670_, 0, v___x_6672_);
v___x_6674_ = v___x_6670_;
goto v_reusejp_6673_;
}
else
{
lean_object* v_reuseFailAlloc_6675_; 
v_reuseFailAlloc_6675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6675_, 0, v___x_6672_);
v___x_6674_ = v_reuseFailAlloc_6675_;
goto v_reusejp_6673_;
}
v_reusejp_6673_:
{
return v___x_6674_;
}
}
}
else
{
lean_object* v_a_6678_; lean_object* v___x_6680_; uint8_t v_isShared_6681_; uint8_t v_isSharedCheck_6685_; 
v_a_6678_ = lean_ctor_get(v___x_6668_, 0);
v_isSharedCheck_6685_ = !lean_is_exclusive(v___x_6668_);
if (v_isSharedCheck_6685_ == 0)
{
v___x_6680_ = v___x_6668_;
v_isShared_6681_ = v_isSharedCheck_6685_;
goto v_resetjp_6679_;
}
else
{
lean_inc(v_a_6678_);
lean_dec(v___x_6668_);
v___x_6680_ = lean_box(0);
v_isShared_6681_ = v_isSharedCheck_6685_;
goto v_resetjp_6679_;
}
v_resetjp_6679_:
{
lean_object* v___x_6683_; 
if (v_isShared_6681_ == 0)
{
v___x_6683_ = v___x_6680_;
goto v_reusejp_6682_;
}
else
{
lean_object* v_reuseFailAlloc_6684_; 
v_reuseFailAlloc_6684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6684_, 0, v_a_6678_);
v___x_6683_ = v_reuseFailAlloc_6684_;
goto v_reusejp_6682_;
}
v_reusejp_6682_:
{
return v___x_6683_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_6686_; lean_object* v_options_6687_; uint8_t v_hasTrace_6688_; 
lean_del_object(v___x_6647_);
v_toCold_6686_ = lean_ctor_get(v_a_6626_, 0);
v_options_6687_ = lean_ctor_get(v_toCold_6686_, 2);
v_hasTrace_6688_ = lean_ctor_get_uint8(v_options_6687_, sizeof(void*)*1);
if (v_hasTrace_6688_ == 0)
{
goto _start;
}
else
{
lean_object* v_inheritedTraceOptions_6690_; lean_object* v___x_6691_; lean_object* v___x_6692_; uint8_t v___x_6693_; 
v_inheritedTraceOptions_6690_ = lean_ctor_get(v_toCold_6686_, 11);
v___x_6691_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__25));
v___x_6692_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28, &l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_pushHyp___closed__28);
v___x_6693_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6690_, v_options_6687_, v___x_6692_);
if (v___x_6693_ == 0)
{
goto _start;
}
else
{
lean_object* v___x_6695_; lean_object* v___x_6696_; 
v___x_6695_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___closed__4);
v___x_6696_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v___x_6691_, v___x_6695_, v_a_6624_, v_a_6625_, v_a_6626_, v_a_6627_);
if (lean_obj_tag(v___x_6696_) == 0)
{
lean_dec_ref_known(v___x_6696_, 1);
goto _start;
}
else
{
lean_object* v_a_6698_; lean_object* v___x_6700_; uint8_t v_isShared_6701_; uint8_t v_isSharedCheck_6705_; 
v_a_6698_ = lean_ctor_get(v___x_6696_, 0);
v_isSharedCheck_6705_ = !lean_is_exclusive(v___x_6696_);
if (v_isSharedCheck_6705_ == 0)
{
v___x_6700_ = v___x_6696_;
v_isShared_6701_ = v_isSharedCheck_6705_;
goto v_resetjp_6699_;
}
else
{
lean_inc(v_a_6698_);
lean_dec(v___x_6696_);
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
}
}
}
else
{
lean_object* v_val_6706_; lean_object* v___x_6708_; 
v_val_6706_ = lean_ctor_get(v_fst_6649_, 0);
lean_inc(v_val_6706_);
lean_dec_ref_known(v_fst_6649_, 1);
if (v_isShared_6648_ == 0)
{
lean_ctor_set(v___x_6647_, 0, v_val_6706_);
v___x_6708_ = v___x_6647_;
goto v_reusejp_6707_;
}
else
{
lean_object* v_reuseFailAlloc_6709_; 
v_reuseFailAlloc_6709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6709_, 0, v_val_6706_);
v___x_6708_ = v_reuseFailAlloc_6709_;
goto v_reusejp_6707_;
}
v_reusejp_6707_:
{
return v___x_6708_;
}
}
}
}
else
{
lean_object* v_a_6711_; lean_object* v___x_6713_; uint8_t v_isShared_6714_; uint8_t v_isSharedCheck_6718_; 
v_a_6711_ = lean_ctor_get(v___x_6644_, 0);
v_isSharedCheck_6718_ = !lean_is_exclusive(v___x_6644_);
if (v_isSharedCheck_6718_ == 0)
{
v___x_6713_ = v___x_6644_;
v_isShared_6714_ = v_isSharedCheck_6718_;
goto v_resetjp_6712_;
}
else
{
lean_inc(v_a_6711_);
lean_dec(v___x_6644_);
v___x_6713_ = lean_box(0);
v_isShared_6714_ = v_isSharedCheck_6718_;
goto v_resetjp_6712_;
}
v_resetjp_6712_:
{
lean_object* v___x_6716_; 
if (v_isShared_6714_ == 0)
{
v___x_6716_ = v___x_6713_;
goto v_reusejp_6715_;
}
else
{
lean_object* v_reuseFailAlloc_6717_; 
v_reuseFailAlloc_6717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6717_, 0, v_a_6711_);
v___x_6716_ = v_reuseFailAlloc_6717_;
goto v_reusejp_6715_;
}
v_reusejp_6715_:
{
return v___x_6716_;
}
}
}
}
}
}
else
{
lean_object* v_a_6721_; lean_object* v___x_6723_; uint8_t v_isShared_6724_; uint8_t v_isSharedCheck_6728_; 
v_a_6721_ = lean_ctor_get(v___x_6630_, 0);
v_isSharedCheck_6728_ = !lean_is_exclusive(v___x_6630_);
if (v_isSharedCheck_6728_ == 0)
{
v___x_6723_ = v___x_6630_;
v_isShared_6724_ = v_isSharedCheck_6728_;
goto v_resetjp_6722_;
}
else
{
lean_inc(v_a_6721_);
lean_dec(v___x_6630_);
v___x_6723_ = lean_box(0);
v_isShared_6724_ = v_isSharedCheck_6728_;
goto v_resetjp_6722_;
}
v_resetjp_6722_:
{
lean_object* v___x_6726_; 
if (v_isShared_6724_ == 0)
{
v___x_6726_ = v___x_6723_;
goto v_reusejp_6725_;
}
else
{
lean_object* v_reuseFailAlloc_6727_; 
v_reuseFailAlloc_6727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6727_, 0, v_a_6721_);
v___x_6726_ = v_reuseFailAlloc_6727_;
goto v_reusejp_6725_;
}
v_reusejp_6725_:
{
return v___x_6726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go___boxed(lean_object* v_passes_6729_, lean_object* v_a_6730_, lean_object* v_a_6731_, lean_object* v_a_6732_, lean_object* v_a_6733_, lean_object* v_a_6734_, lean_object* v_a_6735_, lean_object* v_a_6736_, lean_object* v_a_6737_, lean_object* v_a_6738_, lean_object* v_a_6739_, lean_object* v_a_6740_, lean_object* v_a_6741_){
_start:
{
lean_object* v_res_6742_; 
v_res_6742_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go(v_passes_6729_, v_a_6730_, v_a_6731_, v_a_6732_, v_a_6733_, v_a_6734_, v_a_6735_, v_a_6736_, v_a_6737_, v_a_6738_, v_a_6739_, v_a_6740_);
lean_dec(v_a_6740_);
lean_dec_ref(v_a_6739_);
lean_dec(v_a_6738_);
lean_dec_ref(v_a_6737_);
lean_dec(v_a_6736_);
lean_dec_ref(v_a_6735_);
lean_dec(v_a_6734_);
lean_dec_ref(v_a_6733_);
lean_dec(v_a_6732_);
lean_dec(v_a_6731_);
lean_dec_ref(v_a_6730_);
lean_dec(v_passes_6729_);
return v_res_6742_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0(lean_object* v_cls_6743_, lean_object* v_msg_6744_, lean_object* v___y_6745_, lean_object* v___y_6746_, lean_object* v___y_6747_, lean_object* v___y_6748_, lean_object* v___y_6749_, lean_object* v___y_6750_, lean_object* v___y_6751_, lean_object* v___y_6752_, lean_object* v___y_6753_, lean_object* v___y_6754_, lean_object* v___y_6755_){
_start:
{
lean_object* v___x_6757_; 
v___x_6757_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___redArg(v_cls_6743_, v_msg_6744_, v___y_6752_, v___y_6753_, v___y_6754_, v___y_6755_);
return v___x_6757_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0___boxed(lean_object* v_cls_6758_, lean_object* v_msg_6759_, lean_object* v___y_6760_, lean_object* v___y_6761_, lean_object* v___y_6762_, lean_object* v___y_6763_, lean_object* v___y_6764_, lean_object* v___y_6765_, lean_object* v___y_6766_, lean_object* v___y_6767_, lean_object* v___y_6768_, lean_object* v___y_6769_, lean_object* v___y_6770_, lean_object* v___y_6771_){
_start:
{
lean_object* v_res_6772_; 
v_res_6772_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__0(v_cls_6758_, v_msg_6759_, v___y_6760_, v___y_6761_, v___y_6762_, v___y_6763_, v___y_6764_, v___y_6765_, v___y_6766_, v___y_6767_, v___y_6768_, v___y_6769_, v___y_6770_);
lean_dec(v___y_6770_);
lean_dec_ref(v___y_6769_);
lean_dec(v___y_6768_);
lean_dec_ref(v___y_6767_);
lean_dec(v___y_6766_);
lean_dec_ref(v___y_6765_);
lean_dec(v___y_6764_);
lean_dec_ref(v___y_6763_);
lean_dec(v___y_6762_);
lean_dec(v___y_6761_);
lean_dec_ref(v___y_6760_);
return v_res_6772_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4(lean_object* v_00_u03b1_6773_, lean_object* v_x_6774_, lean_object* v___y_6775_, lean_object* v___y_6776_, lean_object* v___y_6777_, lean_object* v___y_6778_, lean_object* v___y_6779_, lean_object* v___y_6780_, lean_object* v___y_6781_, lean_object* v___y_6782_, lean_object* v___y_6783_, lean_object* v___y_6784_, lean_object* v___y_6785_){
_start:
{
lean_object* v___x_6787_; 
v___x_6787_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___redArg(v_x_6774_);
return v___x_6787_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4___boxed(lean_object* v_00_u03b1_6788_, lean_object* v_x_6789_, lean_object* v___y_6790_, lean_object* v___y_6791_, lean_object* v___y_6792_, lean_object* v___y_6793_, lean_object* v___y_6794_, lean_object* v___y_6795_, lean_object* v___y_6796_, lean_object* v___y_6797_, lean_object* v___y_6798_, lean_object* v___y_6799_, lean_object* v___y_6800_, lean_object* v___y_6801_){
_start:
{
lean_object* v_res_6802_; 
v_res_6802_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__4(v_00_u03b1_6788_, v_x_6789_, v___y_6790_, v___y_6791_, v___y_6792_, v___y_6793_, v___y_6794_, v___y_6795_, v___y_6796_, v___y_6797_, v___y_6798_, v___y_6799_, v___y_6800_);
lean_dec(v___y_6800_);
lean_dec_ref(v___y_6799_);
lean_dec(v___y_6798_);
lean_dec_ref(v___y_6797_);
lean_dec(v___y_6796_);
lean_dec_ref(v___y_6795_);
lean_dec(v___y_6794_);
lean_dec_ref(v___y_6793_);
lean_dec(v___y_6792_);
lean_dec(v___y_6791_);
lean_dec_ref(v___y_6790_);
return v_res_6802_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4(lean_object* v_as_6803_, lean_object* v_as_x27_6804_, lean_object* v_b_6805_, lean_object* v_a_6806_, lean_object* v___y_6807_, lean_object* v___y_6808_, lean_object* v___y_6809_, lean_object* v___y_6810_, lean_object* v___y_6811_, lean_object* v___y_6812_, lean_object* v___y_6813_, lean_object* v___y_6814_, lean_object* v___y_6815_, lean_object* v___y_6816_, lean_object* v___y_6817_){
_start:
{
lean_object* v___x_6819_; 
v___x_6819_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___redArg(v_as_x27_6804_, v_b_6805_, v___y_6807_, v___y_6808_, v___y_6809_, v___y_6810_, v___y_6811_, v___y_6812_, v___y_6813_, v___y_6814_, v___y_6815_, v___y_6816_, v___y_6817_);
return v___x_6819_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4___boxed(lean_object* v_as_6820_, lean_object* v_as_x27_6821_, lean_object* v_b_6822_, lean_object* v_a_6823_, lean_object* v___y_6824_, lean_object* v___y_6825_, lean_object* v___y_6826_, lean_object* v___y_6827_, lean_object* v___y_6828_, lean_object* v___y_6829_, lean_object* v___y_6830_, lean_object* v___y_6831_, lean_object* v___y_6832_, lean_object* v___y_6833_, lean_object* v___y_6834_, lean_object* v___y_6835_){
_start:
{
lean_object* v_res_6836_; 
v_res_6836_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__4(v_as_6820_, v_as_x27_6821_, v_b_6822_, v_a_6823_, v___y_6824_, v___y_6825_, v___y_6826_, v___y_6827_, v___y_6828_, v___y_6829_, v___y_6830_, v___y_6831_, v___y_6832_, v___y_6833_, v___y_6834_);
lean_dec(v___y_6834_);
lean_dec_ref(v___y_6833_);
lean_dec(v___y_6832_);
lean_dec_ref(v___y_6831_);
lean_dec(v___y_6830_);
lean_dec_ref(v___y_6829_);
lean_dec(v___y_6828_);
lean_dec_ref(v___y_6827_);
lean_dec(v___y_6826_);
lean_dec(v___y_6825_);
lean_dec_ref(v___y_6824_);
lean_dec(v_as_x27_6821_);
lean_dec(v_as_6820_);
return v_res_6836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3(lean_object* v_oldTraces_6837_, lean_object* v_data_6838_, lean_object* v_ref_6839_, lean_object* v_msg_6840_, lean_object* v___y_6841_, lean_object* v___y_6842_, lean_object* v___y_6843_, lean_object* v___y_6844_, lean_object* v___y_6845_, lean_object* v___y_6846_, lean_object* v___y_6847_, lean_object* v___y_6848_, lean_object* v___y_6849_, lean_object* v___y_6850_, lean_object* v___y_6851_){
_start:
{
lean_object* v___x_6853_; 
v___x_6853_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___redArg(v_oldTraces_6837_, v_data_6838_, v_ref_6839_, v_msg_6840_, v___y_6848_, v___y_6849_, v___y_6850_, v___y_6851_);
return v___x_6853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3___boxed(lean_object* v_oldTraces_6854_, lean_object* v_data_6855_, lean_object* v_ref_6856_, lean_object* v_msg_6857_, lean_object* v___y_6858_, lean_object* v___y_6859_, lean_object* v___y_6860_, lean_object* v___y_6861_, lean_object* v___y_6862_, lean_object* v___y_6863_, lean_object* v___y_6864_, lean_object* v___y_6865_, lean_object* v___y_6866_, lean_object* v___y_6867_, lean_object* v___y_6868_, lean_object* v___y_6869_){
_start:
{
lean_object* v_res_6870_; 
v_res_6870_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go_spec__3_spec__3(v_oldTraces_6854_, v_data_6855_, v_ref_6856_, v_msg_6857_, v___y_6858_, v___y_6859_, v___y_6860_, v___y_6861_, v___y_6862_, v___y_6863_, v___y_6864_, v___y_6865_, v___y_6866_, v___y_6867_, v___y_6868_);
lean_dec(v___y_6868_);
lean_dec_ref(v___y_6867_);
lean_dec(v___y_6866_);
lean_dec_ref(v___y_6865_);
lean_dec(v___y_6864_);
lean_dec_ref(v___y_6863_);
lean_dec(v___y_6862_);
lean_dec_ref(v___y_6861_);
lean_dec(v___y_6860_);
lean_dec(v___y_6859_);
lean_dec_ref(v___y_6858_);
return v_res_6870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(lean_object* v_passes_6871_, lean_object* v_a_6872_, lean_object* v_a_6873_, lean_object* v_a_6874_, lean_object* v_a_6875_, lean_object* v_a_6876_, lean_object* v_a_6877_, lean_object* v_a_6878_, lean_object* v_a_6879_, lean_object* v_a_6880_, lean_object* v_a_6881_, lean_object* v_a_6882_){
_start:
{
lean_object* v___x_6884_; 
v___x_6884_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_Basic_0__Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline_go(v_passes_6871_, v_a_6872_, v_a_6873_, v_a_6874_, v_a_6875_, v_a_6876_, v_a_6877_, v_a_6878_, v_a_6879_, v_a_6880_, v_a_6881_, v_a_6882_);
if (lean_obj_tag(v___x_6884_) == 0)
{
lean_object* v_a_6885_; lean_object* v___x_6886_; lean_object* v___x_6888_; uint8_t v_isShared_6889_; uint8_t v_isSharedCheck_6893_; 
v_a_6885_ = lean_ctor_get(v___x_6884_, 0);
lean_inc(v_a_6885_);
lean_dec_ref_known(v___x_6884_, 1);
v___x_6886_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dropPassCaches___redArg(v_a_6872_, v_a_6873_);
v_isSharedCheck_6893_ = !lean_is_exclusive(v___x_6886_);
if (v_isSharedCheck_6893_ == 0)
{
lean_object* v_unused_6894_; 
v_unused_6894_ = lean_ctor_get(v___x_6886_, 0);
lean_dec(v_unused_6894_);
v___x_6888_ = v___x_6886_;
v_isShared_6889_ = v_isSharedCheck_6893_;
goto v_resetjp_6887_;
}
else
{
lean_dec(v___x_6886_);
v___x_6888_ = lean_box(0);
v_isShared_6889_ = v_isSharedCheck_6893_;
goto v_resetjp_6887_;
}
v_resetjp_6887_:
{
lean_object* v___x_6891_; 
if (v_isShared_6889_ == 0)
{
lean_ctor_set(v___x_6888_, 0, v_a_6885_);
v___x_6891_ = v___x_6888_;
goto v_reusejp_6890_;
}
else
{
lean_object* v_reuseFailAlloc_6892_; 
v_reuseFailAlloc_6892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6892_, 0, v_a_6885_);
v___x_6891_ = v_reuseFailAlloc_6892_;
goto v_reusejp_6890_;
}
v_reusejp_6890_:
{
return v___x_6891_;
}
}
}
else
{
return v___x_6884_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline___boxed(lean_object* v_passes_6895_, lean_object* v_a_6896_, lean_object* v_a_6897_, lean_object* v_a_6898_, lean_object* v_a_6899_, lean_object* v_a_6900_, lean_object* v_a_6901_, lean_object* v_a_6902_, lean_object* v_a_6903_, lean_object* v_a_6904_, lean_object* v_a_6905_, lean_object* v_a_6906_, lean_object* v_a_6907_){
_start:
{
lean_object* v_res_6908_; 
v_res_6908_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Pass_fixpointPipeline(v_passes_6895_, v_a_6896_, v_a_6897_, v_a_6898_, v_a_6899_, v_a_6900_, v_a_6901_, v_a_6902_, v_a_6903_, v_a_6904_, v_a_6905_, v_a_6906_);
lean_dec(v_a_6906_);
lean_dec_ref(v_a_6905_);
lean_dec(v_a_6904_);
lean_dec_ref(v_a_6903_);
lean_dec(v_a_6902_);
lean_dec_ref(v_a_6901_);
lean_dec(v_a_6900_);
lean_dec_ref(v_a_6899_);
lean_dec(v_a_6898_);
lean_dec(v_a_6897_);
lean_dec_ref(v_a_6896_);
lean_dec(v_passes_6895_);
return v_res_6908_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Attr(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_DSimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_Result(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_DSimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget_default);
l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedTarget);
l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource_default);
l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHypSource);
l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp_default);
l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_instInhabitedHyp);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Attr(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp_DSimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp_Result(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp_DSimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_BVDecide_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

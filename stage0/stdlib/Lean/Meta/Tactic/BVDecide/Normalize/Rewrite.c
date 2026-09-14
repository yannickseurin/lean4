// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize.Rewrite
// Imports: public import Lean.Meta.Tactic.BVDecide.Normalize.Basic import Lean.Meta.Tactic.BVDecide.Normalize.Simproc import Lean.Meta.Sym.Simp.Rewrite import Lean.Meta.Sym.Simp.EvalGround import Lean.Meta.Sym.DSimp import Lean.Meta.Sym.Simp.Forall import Lean.Meta.Sym.Simp.ControlFlow
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
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_zetaDeltaAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_Sym_Simp_evalGround___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_beta___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteDsimproc___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_zeta___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_evalGround___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_evalGround___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Tactic_BVDecide_bvNormalizeExt;
lean_object* l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkDischargerFromSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_io_get_num_heartbeats();
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "rewriteRules simproc statistics:"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__0___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__0_value;
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__1___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__0_value)} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__1_value;
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__2___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__1_value)} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__2_value;
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__3_value;
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__4___boxed, .m_arity = 13, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(255) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__2_value)} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__4_value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__3_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__5_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__6_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__7_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__8_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__10_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__11 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__11_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "  ==>  "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__13 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__13_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__14;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__9___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__10___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___boxed(lean_object**);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__9(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_evalGround___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(255) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_mkDischargerFromSimproc___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__0_value)} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "rewriteRules"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__2_value),LEAN_SCALAR_PTR_LITERAL(39, 217, 1, 104, 84, 94, 139, 227)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v___x_14_; 
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc(v___y_3_);
lean_inc_ref(v___y_2_);
v___x_14_ = lean_apply_12(v_x_1_, v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, lean_box(0));
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0___boxed(lean_object* v_x_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0(v_x_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
lean_dec(v___y_18_);
lean_dec(v___y_17_);
lean_dec_ref(v___y_16_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(lean_object* v_mvarId_29_, lean_object* v_x_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v___f_43_; lean_object* v___x_44_; 
lean_inc(v___y_37_);
lean_inc_ref(v___y_36_);
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
lean_inc(v___y_33_);
lean_inc(v___y_32_);
lean_inc_ref(v___y_31_);
v___f_43_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_43_, 0, v_x_30_);
lean_closure_set(v___f_43_, 1, v___y_31_);
lean_closure_set(v___f_43_, 2, v___y_32_);
lean_closure_set(v___f_43_, 3, v___y_33_);
lean_closure_set(v___f_43_, 4, v___y_34_);
lean_closure_set(v___f_43_, 5, v___y_35_);
lean_closure_set(v___f_43_, 6, v___y_36_);
lean_closure_set(v___f_43_, 7, v___y_37_);
v___x_44_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_29_, v___f_43_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
if (lean_obj_tag(v___x_44_) == 0)
{
return v___x_44_;
}
else
{
lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_52_; 
v_a_45_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_52_ == 0)
{
v___x_47_ = v___x_44_;
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_44_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_50_; 
if (v_isShared_48_ == 0)
{
v___x_50_ = v___x_47_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_a_45_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg___boxed(lean_object* v_mvarId_53_, lean_object* v_x_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(v_mvarId_53_, v_x_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
lean_dec(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2(lean_object* v_00_u03b1_68_, lean_object* v_mvarId_69_, lean_object* v_x_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(v_mvarId_69_, v_x_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___boxed(lean_object* v_00_u03b1_84_, lean_object* v_mvarId_85_, lean_object* v_x_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2(v_00_u03b1_84_, v_mvarId_85_, v_x_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
return v_res_99_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = lean_unsigned_to_nat(32u);
v___x_101_ = lean_mk_empty_array_with_capacity(v___x_100_);
v___x_102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
return v___x_102_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_103_ = ((size_t)5ULL);
v___x_104_ = lean_unsigned_to_nat(0u);
v___x_105_ = lean_unsigned_to_nat(32u);
v___x_106_ = lean_mk_empty_array_with_capacity(v___x_105_);
v___x_107_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__0);
v___x_108_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v___x_106_);
lean_ctor_set(v___x_108_, 2, v___x_104_);
lean_ctor_set(v___x_108_, 3, v___x_104_);
lean_ctor_set_usize(v___x_108_, 4, v___x_103_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg(lean_object* v___y_109_){
_start:
{
lean_object* v___x_111_; lean_object* v_traceState_112_; lean_object* v_traces_113_; lean_object* v___x_114_; lean_object* v_traceState_115_; lean_object* v_env_116_; lean_object* v_nextMacroScope_117_; lean_object* v_ngen_118_; lean_object* v_auxDeclNGen_119_; lean_object* v_cache_120_; lean_object* v_messages_121_; lean_object* v_infoState_122_; lean_object* v_snapshotTasks_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_142_; 
v___x_111_ = lean_st_ref_get(v___y_109_);
v_traceState_112_ = lean_ctor_get(v___x_111_, 4);
lean_inc_ref(v_traceState_112_);
lean_dec(v___x_111_);
v_traces_113_ = lean_ctor_get(v_traceState_112_, 0);
lean_inc_ref(v_traces_113_);
lean_dec_ref(v_traceState_112_);
v___x_114_ = lean_st_ref_take(v___y_109_);
v_traceState_115_ = lean_ctor_get(v___x_114_, 4);
v_env_116_ = lean_ctor_get(v___x_114_, 0);
v_nextMacroScope_117_ = lean_ctor_get(v___x_114_, 1);
v_ngen_118_ = lean_ctor_get(v___x_114_, 2);
v_auxDeclNGen_119_ = lean_ctor_get(v___x_114_, 3);
v_cache_120_ = lean_ctor_get(v___x_114_, 5);
v_messages_121_ = lean_ctor_get(v___x_114_, 6);
v_infoState_122_ = lean_ctor_get(v___x_114_, 7);
v_snapshotTasks_123_ = lean_ctor_get(v___x_114_, 8);
v_isSharedCheck_142_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_142_ == 0)
{
v___x_125_ = v___x_114_;
v_isShared_126_ = v_isSharedCheck_142_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_snapshotTasks_123_);
lean_inc(v_infoState_122_);
lean_inc(v_messages_121_);
lean_inc(v_cache_120_);
lean_inc(v_traceState_115_);
lean_inc(v_auxDeclNGen_119_);
lean_inc(v_ngen_118_);
lean_inc(v_nextMacroScope_117_);
lean_inc(v_env_116_);
lean_dec(v___x_114_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_142_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
uint64_t v_tid_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_140_; 
v_tid_127_ = lean_ctor_get_uint64(v_traceState_115_, sizeof(void*)*1);
v_isSharedCheck_140_ = !lean_is_exclusive(v_traceState_115_);
if (v_isSharedCheck_140_ == 0)
{
lean_object* v_unused_141_; 
v_unused_141_ = lean_ctor_get(v_traceState_115_, 0);
lean_dec(v_unused_141_);
v___x_129_ = v_traceState_115_;
v_isShared_130_ = v_isSharedCheck_140_;
goto v_resetjp_128_;
}
else
{
lean_dec(v_traceState_115_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_140_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_131_; lean_object* v___x_133_; 
v___x_131_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___closed__1);
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 0, v___x_131_);
v___x_133_ = v___x_129_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v___x_131_);
lean_ctor_set_uint64(v_reuseFailAlloc_139_, sizeof(void*)*1, v_tid_127_);
v___x_133_ = v_reuseFailAlloc_139_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
lean_object* v___x_135_; 
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 4, v___x_133_);
v___x_135_ = v___x_125_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_env_116_);
lean_ctor_set(v_reuseFailAlloc_138_, 1, v_nextMacroScope_117_);
lean_ctor_set(v_reuseFailAlloc_138_, 2, v_ngen_118_);
lean_ctor_set(v_reuseFailAlloc_138_, 3, v_auxDeclNGen_119_);
lean_ctor_set(v_reuseFailAlloc_138_, 4, v___x_133_);
lean_ctor_set(v_reuseFailAlloc_138_, 5, v_cache_120_);
lean_ctor_set(v_reuseFailAlloc_138_, 6, v_messages_121_);
lean_ctor_set(v_reuseFailAlloc_138_, 7, v_infoState_122_);
lean_ctor_set(v_reuseFailAlloc_138_, 8, v_snapshotTasks_123_);
v___x_135_ = v_reuseFailAlloc_138_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = lean_st_ref_put(v___y_109_, v___x_135_);
v___x_137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_137_, 0, v_traces_113_);
return v___x_137_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg___boxed(lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg(v___y_143_);
lean_dec(v___y_143_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4(lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg(v___y_156_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___boxed(lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4(v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
lean_dec(v___y_161_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
return v_res_171_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5(lean_object* v_opts_172_, lean_object* v_opt_173_){
_start:
{
lean_object* v_name_174_; lean_object* v_defValue_175_; lean_object* v_map_176_; lean_object* v___x_177_; 
v_name_174_ = lean_ctor_get(v_opt_173_, 0);
v_defValue_175_ = lean_ctor_get(v_opt_173_, 1);
v_map_176_ = lean_ctor_get(v_opts_172_, 0);
v___x_177_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_176_, v_name_174_);
if (lean_obj_tag(v___x_177_) == 0)
{
uint8_t v___x_178_; 
v___x_178_ = lean_unbox(v_defValue_175_);
return v___x_178_;
}
else
{
lean_object* v_val_179_; 
v_val_179_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_val_179_);
lean_dec_ref_known(v___x_177_, 1);
if (lean_obj_tag(v_val_179_) == 1)
{
uint8_t v_v_180_; 
v_v_180_ = lean_ctor_get_uint8(v_val_179_, 0);
lean_dec_ref_known(v_val_179_, 0);
return v_v_180_;
}
else
{
uint8_t v___x_181_; 
lean_dec(v_val_179_);
v___x_181_ = lean_unbox(v_defValue_175_);
return v___x_181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5___boxed(lean_object* v_opts_182_, lean_object* v_opt_183_){
_start:
{
uint8_t v_res_184_; lean_object* v_r_185_; 
v_res_184_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5(v_opts_182_, v_opt_183_);
lean_dec_ref(v_opt_183_);
lean_dec_ref(v_opts_182_);
v_r_185_ = lean_box(v_res_184_);
return v_r_185_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__2(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__1));
v___x_190_ = l_Lean_MessageData_ofFormat(v___x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0(lean_object* v_x_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___closed__2);
v___x_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0___boxed(lean_object* v_x_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__0(v_x_206_, v___y_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_, v___y_212_, v___y_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_);
lean_dec(v___y_217_);
lean_dec_ref(v___y_216_);
lean_dec(v___y_215_);
lean_dec_ref(v___y_214_);
lean_dec(v___y_213_);
lean_dec_ref(v___y_212_);
lean_dec(v___y_211_);
lean_dec_ref(v___y_210_);
lean_dec(v___y_209_);
lean_dec(v___y_208_);
lean_dec_ref(v___y_207_);
lean_dec_ref(v_x_206_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1(lean_object* v_e_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = l_Lean_Meta_Sym_Simp_simpControl(v_e_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_);
if (lean_obj_tag(v___x_231_) == 0)
{
lean_object* v_a_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_262_; 
v_a_232_ = lean_ctor_get(v___x_231_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_262_ == 0)
{
v___x_234_ = v___x_231_;
v_isShared_235_ = v_isSharedCheck_262_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_a_232_);
lean_dec(v___x_231_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_262_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
if (lean_obj_tag(v_a_232_) == 0)
{
uint8_t v_contextDependent_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_247_; 
v_contextDependent_236_ = lean_ctor_get_uint8(v_a_232_, 1);
v_isSharedCheck_247_ = !lean_is_exclusive(v_a_232_);
if (v_isSharedCheck_247_ == 0)
{
v___x_238_ = v_a_232_;
v_isShared_239_ = v_isSharedCheck_247_;
goto v_resetjp_237_;
}
else
{
lean_dec(v_a_232_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_247_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
uint8_t v___x_240_; lean_object* v___x_242_; 
v___x_240_ = 0;
if (v_isShared_239_ == 0)
{
v___x_242_ = v___x_238_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v_reuseFailAlloc_246_, 1, v_contextDependent_236_);
v___x_242_ = v_reuseFailAlloc_246_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
lean_object* v___x_244_; 
lean_ctor_set_uint8(v___x_242_, 0, v___x_240_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 0, v___x_242_);
v___x_244_ = v___x_234_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_242_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
}
else
{
lean_object* v_e_x27_248_; lean_object* v_proof_249_; uint8_t v_contextDependent_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_261_; 
v_e_x27_248_ = lean_ctor_get(v_a_232_, 0);
v_proof_249_ = lean_ctor_get(v_a_232_, 1);
v_contextDependent_250_ = lean_ctor_get_uint8(v_a_232_, sizeof(void*)*2 + 1);
v_isSharedCheck_261_ = !lean_is_exclusive(v_a_232_);
if (v_isSharedCheck_261_ == 0)
{
v___x_252_ = v_a_232_;
v_isShared_253_ = v_isSharedCheck_261_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_proof_249_);
lean_inc(v_e_x27_248_);
lean_dec(v_a_232_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_261_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
uint8_t v___x_254_; lean_object* v___x_256_; 
v___x_254_ = 0;
if (v_isShared_253_ == 0)
{
v___x_256_ = v___x_252_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_e_x27_248_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v_proof_249_);
lean_ctor_set_uint8(v_reuseFailAlloc_260_, sizeof(void*)*2 + 1, v_contextDependent_250_);
v___x_256_ = v_reuseFailAlloc_260_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
lean_object* v___x_258_; 
lean_ctor_set_uint8(v___x_256_, sizeof(void*)*2, v___x_254_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 0, v___x_256_);
v___x_258_ = v___x_234_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v___x_256_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
}
}
else
{
return v___x_231_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1___boxed(lean_object* v_e_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__1(v_e_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_);
lean_dec(v___y_272_);
lean_dec_ref(v___y_271_);
lean_dec(v___y_270_);
lean_dec_ref(v___y_269_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
lean_dec(v___y_264_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2(lean_object* v_val_275_, lean_object* v_a_276_, lean_object* v___x_277_, lean_object* v_x_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v___x_290_; 
lean_inc_ref(v___y_279_);
v___x_290_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteSimproc(v_val_275_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; 
v_a_291_ = lean_ctor_get(v___x_290_, 0);
lean_inc(v_a_291_);
if (lean_obj_tag(v_a_291_) == 0)
{
uint8_t v_done_292_; 
v_done_292_ = lean_ctor_get_uint8(v_a_291_, 0);
if (v_done_292_ == 0)
{
uint8_t v_contextDependent_293_; lean_object* v___x_294_; 
lean_dec_ref_known(v___x_290_, 1);
v_contextDependent_293_ = lean_ctor_get_uint8(v_a_291_, 1);
lean_dec_ref_known(v_a_291_, 0);
v___x_294_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_276_, v___x_277_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_);
if (lean_obj_tag(v___x_294_) == 0)
{
lean_object* v_a_295_; uint8_t v___y_297_; 
v_a_295_ = lean_ctor_get(v___x_294_, 0);
lean_inc(v_a_295_);
if (v_contextDependent_293_ == 0)
{
lean_dec(v_a_295_);
return v___x_294_;
}
else
{
if (lean_obj_tag(v_a_295_) == 0)
{
uint8_t v_contextDependent_307_; 
v_contextDependent_307_ = lean_ctor_get_uint8(v_a_295_, 1);
v___y_297_ = v_contextDependent_307_;
goto v___jp_296_;
}
else
{
uint8_t v_contextDependent_308_; 
v_contextDependent_308_ = lean_ctor_get_uint8(v_a_295_, sizeof(void*)*2 + 1);
v___y_297_ = v_contextDependent_308_;
goto v___jp_296_;
}
}
v___jp_296_:
{
if (v___y_297_ == 0)
{
lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_305_; 
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_294_);
if (v_isSharedCheck_305_ == 0)
{
lean_object* v_unused_306_; 
v_unused_306_ = lean_ctor_get(v___x_294_, 0);
lean_dec(v_unused_306_);
v___x_299_ = v___x_294_;
v_isShared_300_ = v_isSharedCheck_305_;
goto v_resetjp_298_;
}
else
{
lean_dec(v___x_294_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_305_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_301_; lean_object* v___x_303_; 
v___x_301_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_295_);
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 0, v___x_301_);
v___x_303_ = v___x_299_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
else
{
lean_dec(v_a_295_);
return v___x_294_;
}
}
}
else
{
return v___x_294_;
}
}
else
{
lean_dec_ref_known(v_a_291_, 0);
lean_dec_ref(v___y_279_);
lean_dec_ref(v___x_277_);
return v___x_290_;
}
}
else
{
uint8_t v_done_309_; 
v_done_309_ = lean_ctor_get_uint8(v_a_291_, sizeof(void*)*2);
if (v_done_309_ == 0)
{
lean_object* v_e_x27_310_; lean_object* v_proof_311_; uint8_t v_contextDependent_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_362_; 
lean_dec_ref_known(v___x_290_, 1);
v_e_x27_310_ = lean_ctor_get(v_a_291_, 0);
v_proof_311_ = lean_ctor_get(v_a_291_, 1);
v_contextDependent_312_ = lean_ctor_get_uint8(v_a_291_, sizeof(void*)*2 + 1);
v_isSharedCheck_362_ = !lean_is_exclusive(v_a_291_);
if (v_isSharedCheck_362_ == 0)
{
v___x_314_ = v_a_291_;
v_isShared_315_ = v_isSharedCheck_362_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_proof_311_);
lean_inc(v_e_x27_310_);
lean_dec(v_a_291_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_362_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; 
lean_inc_ref(v_e_x27_310_);
v___x_316_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_276_, v___x_277_, v_e_x27_310_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_);
if (lean_obj_tag(v___x_316_) == 0)
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_361_; 
v_a_317_ = lean_ctor_get(v___x_316_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_361_ == 0)
{
v___x_319_ = v___x_316_;
v_isShared_320_ = v_isSharedCheck_361_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v___x_316_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_361_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
if (lean_obj_tag(v_a_317_) == 0)
{
uint8_t v_done_321_; uint8_t v_contextDependent_322_; uint8_t v___y_324_; 
lean_dec_ref(v___y_279_);
v_done_321_ = lean_ctor_get_uint8(v_a_317_, 0);
v_contextDependent_322_ = lean_ctor_get_uint8(v_a_317_, 1);
lean_dec_ref_known(v_a_317_, 0);
if (v_contextDependent_312_ == 0)
{
v___y_324_ = v_contextDependent_322_;
goto v___jp_323_;
}
else
{
v___y_324_ = v_contextDependent_312_;
goto v___jp_323_;
}
v___jp_323_:
{
lean_object* v___x_326_; 
if (v_isShared_315_ == 0)
{
v___x_326_ = v___x_314_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_e_x27_310_);
lean_ctor_set(v_reuseFailAlloc_330_, 1, v_proof_311_);
v___x_326_ = v_reuseFailAlloc_330_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
lean_object* v___x_328_; 
lean_ctor_set_uint8(v___x_326_, sizeof(void*)*2, v_done_321_);
lean_ctor_set_uint8(v___x_326_, sizeof(void*)*2 + 1, v___y_324_);
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 0, v___x_326_);
v___x_328_ = v___x_319_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_326_);
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
else
{
lean_object* v_e_x27_331_; lean_object* v_proof_332_; uint8_t v_done_333_; uint8_t v_contextDependent_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_360_; 
lean_del_object(v___x_319_);
lean_del_object(v___x_314_);
v_e_x27_331_ = lean_ctor_get(v_a_317_, 0);
v_proof_332_ = lean_ctor_get(v_a_317_, 1);
v_done_333_ = lean_ctor_get_uint8(v_a_317_, sizeof(void*)*2);
v_contextDependent_334_ = lean_ctor_get_uint8(v_a_317_, sizeof(void*)*2 + 1);
v_isSharedCheck_360_ = !lean_is_exclusive(v_a_317_);
if (v_isSharedCheck_360_ == 0)
{
v___x_336_ = v_a_317_;
v_isShared_337_ = v_isSharedCheck_360_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_proof_332_);
lean_inc(v_e_x27_331_);
lean_dec(v_a_317_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_360_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_338_; 
lean_inc_ref(v_e_x27_331_);
v___x_338_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_279_, v_e_x27_310_, v_proof_311_, v_e_x27_331_, v_proof_332_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_);
if (lean_obj_tag(v___x_338_) == 0)
{
lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_351_; 
v_a_339_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_351_ == 0)
{
v___x_341_ = v___x_338_;
v_isShared_342_ = v_isSharedCheck_351_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v___x_338_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_351_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
uint8_t v___y_344_; 
if (v_contextDependent_312_ == 0)
{
v___y_344_ = v_contextDependent_334_;
goto v___jp_343_;
}
else
{
v___y_344_ = v_contextDependent_312_;
goto v___jp_343_;
}
v___jp_343_:
{
lean_object* v___x_346_; 
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 1, v_a_339_);
v___x_346_ = v___x_336_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_e_x27_331_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v_a_339_);
lean_ctor_set_uint8(v_reuseFailAlloc_350_, sizeof(void*)*2, v_done_333_);
v___x_346_ = v_reuseFailAlloc_350_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
lean_object* v___x_348_; 
lean_ctor_set_uint8(v___x_346_, sizeof(void*)*2 + 1, v___y_344_);
if (v_isShared_342_ == 0)
{
lean_ctor_set(v___x_341_, 0, v___x_346_);
v___x_348_ = v___x_341_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_346_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
}
}
else
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
lean_del_object(v___x_336_);
lean_dec_ref(v_e_x27_331_);
v_a_352_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_338_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_338_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_352_);
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
}
}
}
else
{
lean_del_object(v___x_314_);
lean_dec_ref(v_proof_311_);
lean_dec_ref(v_e_x27_310_);
lean_dec_ref(v___y_279_);
return v___x_316_;
}
}
}
else
{
lean_dec_ref_known(v_a_291_, 2);
lean_dec_ref(v___y_279_);
lean_dec_ref(v___x_277_);
return v___x_290_;
}
}
}
else
{
lean_dec_ref(v___y_279_);
lean_dec_ref(v___x_277_);
return v___x_290_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2___boxed(lean_object* v_val_363_, lean_object* v_a_364_, lean_object* v___x_365_, lean_object* v_x_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2(v_val_363_, v_a_364_, v___x_365_, v_x_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
lean_dec_ref(v_a_364_);
lean_dec(v_val_363_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3(lean_object* v___x_379_, lean_object* v___f_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = lean_box(0);
lean_inc_ref(v___y_381_);
v___x_393_ = l_Lean_Meta_Sym_Simp_evalGround___redArg(v___x_379_, v___y_381_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
lean_inc(v_a_394_);
if (lean_obj_tag(v_a_394_) == 0)
{
uint8_t v_done_395_; 
v_done_395_ = lean_ctor_get_uint8(v_a_394_, 0);
if (v_done_395_ == 0)
{
uint8_t v_contextDependent_396_; lean_object* v___x_397_; 
lean_dec_ref_known(v___x_393_, 1);
v_contextDependent_396_ = lean_ctor_get_uint8(v_a_394_, 1);
lean_dec_ref_known(v_a_394_, 0);
v___x_397_ = lean_apply_12(v___f_380_, v___x_392_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, lean_box(0));
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v_a_398_; uint8_t v___y_400_; 
v_a_398_ = lean_ctor_get(v___x_397_, 0);
lean_inc(v_a_398_);
if (v_contextDependent_396_ == 0)
{
lean_dec(v_a_398_);
return v___x_397_;
}
else
{
if (lean_obj_tag(v_a_398_) == 0)
{
uint8_t v_contextDependent_410_; 
v_contextDependent_410_ = lean_ctor_get_uint8(v_a_398_, 1);
v___y_400_ = v_contextDependent_410_;
goto v___jp_399_;
}
else
{
uint8_t v_contextDependent_411_; 
v_contextDependent_411_ = lean_ctor_get_uint8(v_a_398_, sizeof(void*)*2 + 1);
v___y_400_ = v_contextDependent_411_;
goto v___jp_399_;
}
}
v___jp_399_:
{
if (v___y_400_ == 0)
{
lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_408_; 
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_408_ == 0)
{
lean_object* v_unused_409_; 
v_unused_409_ = lean_ctor_get(v___x_397_, 0);
lean_dec(v_unused_409_);
v___x_402_ = v___x_397_;
v_isShared_403_ = v_isSharedCheck_408_;
goto v_resetjp_401_;
}
else
{
lean_dec(v___x_397_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_408_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___x_404_; lean_object* v___x_406_; 
v___x_404_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_398_);
if (v_isShared_403_ == 0)
{
lean_ctor_set(v___x_402_, 0, v___x_404_);
v___x_406_ = v___x_402_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_404_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
else
{
lean_dec(v_a_398_);
return v___x_397_;
}
}
}
else
{
return v___x_397_;
}
}
else
{
lean_dec_ref_known(v_a_394_, 0);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec_ref(v___f_380_);
return v___x_393_;
}
}
else
{
uint8_t v_done_412_; 
v_done_412_ = lean_ctor_get_uint8(v_a_394_, sizeof(void*)*2);
if (v_done_412_ == 0)
{
lean_object* v_e_x27_413_; lean_object* v_proof_414_; uint8_t v_contextDependent_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_465_; 
lean_dec_ref_known(v___x_393_, 1);
v_e_x27_413_ = lean_ctor_get(v_a_394_, 0);
v_proof_414_ = lean_ctor_get(v_a_394_, 1);
v_contextDependent_415_ = lean_ctor_get_uint8(v_a_394_, sizeof(void*)*2 + 1);
v_isSharedCheck_465_ = !lean_is_exclusive(v_a_394_);
if (v_isSharedCheck_465_ == 0)
{
v___x_417_ = v_a_394_;
v_isShared_418_ = v_isSharedCheck_465_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_proof_414_);
lean_inc(v_e_x27_413_);
lean_dec(v_a_394_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_465_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_419_; 
lean_inc(v___y_390_);
lean_inc_ref(v___y_389_);
lean_inc(v___y_388_);
lean_inc_ref(v___y_387_);
lean_inc(v___y_386_);
lean_inc_ref(v___y_385_);
lean_inc_ref(v_e_x27_413_);
v___x_419_ = lean_apply_12(v___f_380_, v___x_392_, v_e_x27_413_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, lean_box(0));
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_464_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_464_ == 0)
{
v___x_422_ = v___x_419_;
v_isShared_423_ = v_isSharedCheck_464_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_464_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
if (lean_obj_tag(v_a_420_) == 0)
{
uint8_t v_done_424_; uint8_t v_contextDependent_425_; uint8_t v___y_427_; 
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec_ref(v___y_381_);
v_done_424_ = lean_ctor_get_uint8(v_a_420_, 0);
v_contextDependent_425_ = lean_ctor_get_uint8(v_a_420_, 1);
lean_dec_ref_known(v_a_420_, 0);
if (v_contextDependent_415_ == 0)
{
v___y_427_ = v_contextDependent_425_;
goto v___jp_426_;
}
else
{
v___y_427_ = v_contextDependent_415_;
goto v___jp_426_;
}
v___jp_426_:
{
lean_object* v___x_429_; 
if (v_isShared_418_ == 0)
{
v___x_429_ = v___x_417_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_e_x27_413_);
lean_ctor_set(v_reuseFailAlloc_433_, 1, v_proof_414_);
v___x_429_ = v_reuseFailAlloc_433_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
lean_object* v___x_431_; 
lean_ctor_set_uint8(v___x_429_, sizeof(void*)*2, v_done_424_);
lean_ctor_set_uint8(v___x_429_, sizeof(void*)*2 + 1, v___y_427_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_429_);
v___x_431_ = v___x_422_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_429_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
}
else
{
lean_object* v_e_x27_434_; lean_object* v_proof_435_; uint8_t v_done_436_; uint8_t v_contextDependent_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_463_; 
lean_del_object(v___x_422_);
lean_del_object(v___x_417_);
v_e_x27_434_ = lean_ctor_get(v_a_420_, 0);
v_proof_435_ = lean_ctor_get(v_a_420_, 1);
v_done_436_ = lean_ctor_get_uint8(v_a_420_, sizeof(void*)*2);
v_contextDependent_437_ = lean_ctor_get_uint8(v_a_420_, sizeof(void*)*2 + 1);
v_isSharedCheck_463_ = !lean_is_exclusive(v_a_420_);
if (v_isSharedCheck_463_ == 0)
{
v___x_439_ = v_a_420_;
v_isShared_440_ = v_isSharedCheck_463_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_proof_435_);
lean_inc(v_e_x27_434_);
lean_dec(v_a_420_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_463_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_441_; 
lean_inc_ref(v_e_x27_434_);
v___x_441_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_381_, v_e_x27_413_, v_proof_414_, v_e_x27_434_, v_proof_435_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
if (lean_obj_tag(v___x_441_) == 0)
{
lean_object* v_a_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_454_; 
v_a_442_ = lean_ctor_get(v___x_441_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_454_ == 0)
{
v___x_444_ = v___x_441_;
v_isShared_445_ = v_isSharedCheck_454_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_a_442_);
lean_dec(v___x_441_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_454_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
uint8_t v___y_447_; 
if (v_contextDependent_415_ == 0)
{
v___y_447_ = v_contextDependent_437_;
goto v___jp_446_;
}
else
{
v___y_447_ = v_contextDependent_415_;
goto v___jp_446_;
}
v___jp_446_:
{
lean_object* v___x_449_; 
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 1, v_a_442_);
v___x_449_ = v___x_439_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_e_x27_434_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_a_442_);
lean_ctor_set_uint8(v_reuseFailAlloc_453_, sizeof(void*)*2, v_done_436_);
v___x_449_ = v_reuseFailAlloc_453_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_451_; 
lean_ctor_set_uint8(v___x_449_, sizeof(void*)*2 + 1, v___y_447_);
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 0, v___x_449_);
v___x_451_ = v___x_444_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v___x_449_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
}
else
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_462_; 
lean_del_object(v___x_439_);
lean_dec_ref(v_e_x27_434_);
v_a_455_ = lean_ctor_get(v___x_441_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_462_ == 0)
{
v___x_457_ = v___x_441_;
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v___x_441_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_460_; 
if (v_isShared_458_ == 0)
{
v___x_460_ = v___x_457_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_a_455_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_417_);
lean_dec_ref(v_proof_414_);
lean_dec_ref(v_e_x27_413_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec_ref(v___y_381_);
return v___x_419_;
}
}
}
else
{
lean_dec_ref_known(v_a_394_, 2);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec_ref(v___f_380_);
return v___x_393_;
}
}
}
else
{
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec_ref(v___f_380_);
return v___x_393_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3___boxed(lean_object* v___x_466_, lean_object* v___f_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3(v___x_466_, v___f_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
lean_dec(v___x_466_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__5(lean_object* v_snd_480_, lean_object* v_a_481_, lean_object* v___x_482_, lean_object* v_____r_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_496_ = lean_array_push(v_snd_480_, v_a_481_);
v___x_497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_482_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
v___x_498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
v___x_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_499_, 0, v___x_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__5___boxed(lean_object* v_snd_500_, lean_object* v_a_501_, lean_object* v___x_502_, lean_object* v_____r_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__5(v_snd_500_, v_a_501_, v___x_502_, v_____r_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
lean_dec(v___y_508_);
lean_dec_ref(v___y_507_);
lean_dec(v___y_506_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__6(uint8_t v___x_517_, lean_object* v___f_518_, lean_object* v_____r_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
lean_object* v___x_532_; lean_object* v_caches_533_; lean_object* v_typeAnalysis_534_; lean_object* v_target_535_; lean_object* v_hypotheses_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_546_; 
v___x_532_ = lean_st_ref_take(v___y_521_);
v_caches_533_ = lean_ctor_get(v___x_532_, 0);
v_typeAnalysis_534_ = lean_ctor_get(v___x_532_, 1);
v_target_535_ = lean_ctor_get(v___x_532_, 2);
v_hypotheses_536_ = lean_ctor_get(v___x_532_, 3);
v_isSharedCheck_546_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_546_ == 0)
{
v___x_538_ = v___x_532_;
v_isShared_539_ = v_isSharedCheck_546_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_hypotheses_536_);
lean_inc(v_target_535_);
lean_inc(v_typeAnalysis_534_);
lean_inc(v_caches_533_);
lean_dec(v___x_532_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_546_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_540_; lean_object* v___x_542_; 
v___x_540_ = lean_box(0);
if (v_isShared_539_ == 0)
{
v___x_542_ = v___x_538_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_caches_533_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v_typeAnalysis_534_);
lean_ctor_set(v_reuseFailAlloc_545_, 2, v_target_535_);
lean_ctor_set(v_reuseFailAlloc_545_, 3, v_hypotheses_536_);
v___x_542_ = v_reuseFailAlloc_545_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
lean_object* v___x_543_; lean_object* v___x_544_; 
lean_ctor_set_uint8(v___x_542_, sizeof(void*)*4, v___x_517_);
v___x_543_ = lean_st_ref_put(v___y_521_, v___x_542_);
lean_inc(v___y_530_);
lean_inc_ref(v___y_529_);
lean_inc(v___y_528_);
lean_inc_ref(v___y_527_);
lean_inc(v___y_526_);
lean_inc_ref(v___y_525_);
lean_inc(v___y_524_);
lean_inc_ref(v___y_523_);
lean_inc(v___y_522_);
lean_inc(v___y_521_);
lean_inc_ref(v___y_520_);
v___x_544_ = lean_apply_13(v___f_518_, v___x_540_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, lean_box(0));
return v___x_544_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__6___boxed(lean_object* v___x_547_, lean_object* v___f_548_, lean_object* v_____r_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_){
_start:
{
uint8_t v___x_194644__boxed_562_; lean_object* v_res_563_; 
v___x_194644__boxed_562_ = lean_unbox(v___x_547_);
v_res_563_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__6(v___x_194644__boxed_562_, v___f_548_, v_____r_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v___y_552_);
lean_dec(v___y_551_);
lean_dec_ref(v___y_550_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0(lean_object* v_msgData_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_){
_start:
{
lean_object* v___x_570_; lean_object* v_env_571_; lean_object* v___x_572_; lean_object* v_toCold_573_; lean_object* v_mctx_574_; lean_object* v_lctx_575_; lean_object* v_options_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_570_ = lean_st_ref_get(v___y_568_);
v_env_571_ = lean_ctor_get(v___x_570_, 0);
lean_inc_ref(v_env_571_);
lean_dec(v___x_570_);
v___x_572_ = lean_st_ref_get(v___y_566_);
v_toCold_573_ = lean_ctor_get(v___y_567_, 0);
v_mctx_574_ = lean_ctor_get(v___x_572_, 0);
lean_inc_ref(v_mctx_574_);
lean_dec(v___x_572_);
v_lctx_575_ = lean_ctor_get(v___y_565_, 2);
v_options_576_ = lean_ctor_get(v_toCold_573_, 2);
lean_inc_ref(v_options_576_);
lean_inc_ref(v_lctx_575_);
v___x_577_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_577_, 0, v_env_571_);
lean_ctor_set(v___x_577_, 1, v_mctx_574_);
lean_ctor_set(v___x_577_, 2, v_lctx_575_);
lean_ctor_set(v___x_577_, 3, v_options_576_);
v___x_578_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
lean_ctor_set(v___x_578_, 1, v_msgData_564_);
v___x_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0___boxed(lean_object* v_msgData_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0(v_msgData_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
return v_res_586_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_587_; double v___x_588_; 
v___x_587_ = lean_unsigned_to_nat(0u);
v___x_588_ = lean_float_of_nat(v___x_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(lean_object* v_cls_592_, lean_object* v_msg_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
lean_object* v_ref_599_; lean_object* v___x_600_; lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_645_; 
v_ref_599_ = lean_ctor_get(v___y_596_, 2);
v___x_600_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0(v_msg_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_);
v_a_601_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_645_ == 0)
{
v___x_603_ = v___x_600_;
v_isShared_604_ = v_isSharedCheck_645_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_600_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_645_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_605_; lean_object* v_traceState_606_; lean_object* v_env_607_; lean_object* v_nextMacroScope_608_; lean_object* v_ngen_609_; lean_object* v_auxDeclNGen_610_; lean_object* v_cache_611_; lean_object* v_messages_612_; lean_object* v_infoState_613_; lean_object* v_snapshotTasks_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_644_; 
v___x_605_ = lean_st_ref_take(v___y_597_);
v_traceState_606_ = lean_ctor_get(v___x_605_, 4);
v_env_607_ = lean_ctor_get(v___x_605_, 0);
v_nextMacroScope_608_ = lean_ctor_get(v___x_605_, 1);
v_ngen_609_ = lean_ctor_get(v___x_605_, 2);
v_auxDeclNGen_610_ = lean_ctor_get(v___x_605_, 3);
v_cache_611_ = lean_ctor_get(v___x_605_, 5);
v_messages_612_ = lean_ctor_get(v___x_605_, 6);
v_infoState_613_ = lean_ctor_get(v___x_605_, 7);
v_snapshotTasks_614_ = lean_ctor_get(v___x_605_, 8);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_644_ == 0)
{
v___x_616_ = v___x_605_;
v_isShared_617_ = v_isSharedCheck_644_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_snapshotTasks_614_);
lean_inc(v_infoState_613_);
lean_inc(v_messages_612_);
lean_inc(v_cache_611_);
lean_inc(v_traceState_606_);
lean_inc(v_auxDeclNGen_610_);
lean_inc(v_ngen_609_);
lean_inc(v_nextMacroScope_608_);
lean_inc(v_env_607_);
lean_dec(v___x_605_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_644_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
uint64_t v_tid_618_; lean_object* v_traces_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_643_; 
v_tid_618_ = lean_ctor_get_uint64(v_traceState_606_, sizeof(void*)*1);
v_traces_619_ = lean_ctor_get(v_traceState_606_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v_traceState_606_);
if (v_isSharedCheck_643_ == 0)
{
v___x_621_ = v_traceState_606_;
v_isShared_622_ = v_isSharedCheck_643_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_traces_619_);
lean_dec(v_traceState_606_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_643_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_624_; double v___x_625_; uint8_t v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_634_; 
v___x_623_ = lean_box(0);
v___x_624_ = lean_box(0);
v___x_625_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0);
v___x_626_ = 0;
v___x_627_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__1));
v___x_628_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_628_, 0, v_cls_592_);
lean_ctor_set(v___x_628_, 1, v___x_624_);
lean_ctor_set(v___x_628_, 2, v___x_627_);
lean_ctor_set_float(v___x_628_, sizeof(void*)*3, v___x_625_);
lean_ctor_set_float(v___x_628_, sizeof(void*)*3 + 8, v___x_625_);
lean_ctor_set_uint8(v___x_628_, sizeof(void*)*3 + 16, v___x_626_);
v___x_629_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__2));
v___x_630_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_630_, 0, v___x_628_);
lean_ctor_set(v___x_630_, 1, v_a_601_);
lean_ctor_set(v___x_630_, 2, v___x_629_);
lean_inc(v_ref_599_);
v___x_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_631_, 0, v_ref_599_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
v___x_632_ = l_Lean_PersistentArray_push___redArg(v_traces_619_, v___x_631_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 0, v___x_632_);
v___x_634_ = v___x_621_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_632_);
lean_ctor_set_uint64(v_reuseFailAlloc_642_, sizeof(void*)*1, v_tid_618_);
v___x_634_ = v_reuseFailAlloc_642_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
lean_object* v___x_636_; 
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 4, v___x_634_);
v___x_636_ = v___x_616_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_env_607_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v_nextMacroScope_608_);
lean_ctor_set(v_reuseFailAlloc_641_, 2, v_ngen_609_);
lean_ctor_set(v_reuseFailAlloc_641_, 3, v_auxDeclNGen_610_);
lean_ctor_set(v_reuseFailAlloc_641_, 4, v___x_634_);
lean_ctor_set(v_reuseFailAlloc_641_, 5, v_cache_611_);
lean_ctor_set(v_reuseFailAlloc_641_, 6, v_messages_612_);
lean_ctor_set(v_reuseFailAlloc_641_, 7, v_infoState_613_);
lean_ctor_set(v_reuseFailAlloc_641_, 8, v_snapshotTasks_614_);
v___x_636_ = v_reuseFailAlloc_641_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_637_ = lean_st_ref_put(v___y_597_, v___x_636_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 0, v___x_623_);
v___x_639_ = v___x_603_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_623_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___boxed(lean_object* v_cls_646_, lean_object* v_msg_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(v_cls_646_, v_msg_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_);
lean_dec(v___y_651_);
lean_dec_ref(v___y_650_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__4(lean_object* v___x_654_, lean_object* v___f_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_667_ = lean_box(0);
lean_inc_ref(v___y_656_);
v___x_668_ = l_Lean_Meta_Sym_DSimp_evalGround___redArg(v___x_654_, v___y_656_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, v___y_665_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v_a_669_; 
v_a_669_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_a_669_);
if (lean_obj_tag(v_a_669_) == 0)
{
uint8_t v_done_670_; 
v_done_670_ = lean_ctor_get_uint8(v_a_669_, 0);
lean_dec_ref_known(v_a_669_, 0);
if (v_done_670_ == 0)
{
lean_object* v___x_671_; 
lean_dec_ref_known(v___x_668_, 1);
v___x_671_ = lean_apply_12(v___f_655_, v___x_667_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, v___y_665_, lean_box(0));
return v___x_671_;
}
else
{
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
lean_dec_ref(v___f_655_);
return v___x_668_;
}
}
else
{
uint8_t v_done_672_; 
lean_dec_ref(v___y_656_);
v_done_672_ = lean_ctor_get_uint8(v_a_669_, sizeof(void*)*1);
if (v_done_672_ == 0)
{
lean_object* v_e_x27_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_691_; 
lean_dec_ref_known(v___x_668_, 1);
v_e_x27_673_ = lean_ctor_get(v_a_669_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v_a_669_);
if (v_isSharedCheck_691_ == 0)
{
v___x_675_ = v_a_669_;
v_isShared_676_ = v_isSharedCheck_691_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_e_x27_673_);
lean_dec(v_a_669_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_691_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_677_; 
lean_inc_ref(v_e_x27_673_);
v___x_677_ = lean_apply_12(v___f_655_, v___x_667_, v_e_x27_673_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, v___y_665_, lean_box(0));
if (lean_obj_tag(v___x_677_) == 0)
{
lean_object* v_a_678_; 
v_a_678_ = lean_ctor_get(v___x_677_, 0);
lean_inc(v_a_678_);
if (lean_obj_tag(v_a_678_) == 0)
{
lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_689_; 
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_689_ == 0)
{
lean_object* v_unused_690_; 
v_unused_690_ = lean_ctor_get(v___x_677_, 0);
lean_dec(v_unused_690_);
v___x_680_ = v___x_677_;
v_isShared_681_ = v_isSharedCheck_689_;
goto v_resetjp_679_;
}
else
{
lean_dec(v___x_677_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_689_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
uint8_t v_done_682_; lean_object* v___x_684_; 
v_done_682_ = lean_ctor_get_uint8(v_a_678_, 0);
lean_dec_ref_known(v_a_678_, 0);
if (v_isShared_676_ == 0)
{
v___x_684_ = v___x_675_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_e_x27_673_);
v___x_684_ = v_reuseFailAlloc_688_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
lean_object* v___x_686_; 
lean_ctor_set_uint8(v___x_684_, sizeof(void*)*1, v_done_682_);
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 0, v___x_684_);
v___x_686_ = v___x_680_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v___x_684_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_678_, 1);
lean_del_object(v___x_675_);
lean_dec_ref(v_e_x27_673_);
return v___x_677_;
}
}
else
{
lean_del_object(v___x_675_);
lean_dec_ref(v_e_x27_673_);
return v___x_677_;
}
}
}
else
{
lean_dec_ref_known(v_a_669_, 1);
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
lean_dec(v___y_657_);
lean_dec_ref(v___f_655_);
return v___x_668_;
}
}
}
else
{
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
lean_dec_ref(v___f_655_);
return v___x_668_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__4___boxed(lean_object* v___x_692_, lean_object* v___f_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__4(v___x_692_, v___f_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_);
lean_dec(v___x_692_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3(lean_object* v_x_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_719_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3___closed__0));
v___x_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_720_, 0, v___x_719_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3___boxed(lean_object* v_x_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__3(v_x_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_, v___y_730_);
lean_dec(v___y_730_);
lean_dec_ref(v___y_729_);
lean_dec(v___y_728_);
lean_dec_ref(v___y_727_);
lean_dec(v___y_726_);
lean_dec_ref(v___y_725_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec(v___y_722_);
lean_dec_ref(v_x_721_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__2(lean_object* v___f_733_, lean_object* v_x_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = lean_box(0);
lean_inc_ref(v___y_735_);
v___x_747_ = l_Lean_Meta_Sym_DSimp_zeta___redArg(v___y_735_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v_a_748_; 
v_a_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_748_);
if (lean_obj_tag(v_a_748_) == 0)
{
uint8_t v_done_749_; 
v_done_749_ = lean_ctor_get_uint8(v_a_748_, 0);
lean_dec_ref_known(v_a_748_, 0);
if (v_done_749_ == 0)
{
lean_object* v___x_750_; 
lean_dec_ref_known(v___x_747_, 1);
lean_inc(v___y_744_);
lean_inc_ref(v___y_743_);
lean_inc(v___y_742_);
lean_inc_ref(v___y_741_);
lean_inc(v___y_740_);
lean_inc_ref(v___y_739_);
lean_inc(v___y_738_);
lean_inc_ref(v___y_737_);
lean_inc(v___y_736_);
v___x_750_ = lean_apply_12(v___f_733_, v___x_746_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, lean_box(0));
return v___x_750_;
}
else
{
lean_dec_ref(v___y_735_);
lean_dec_ref(v___f_733_);
return v___x_747_;
}
}
else
{
uint8_t v_done_751_; 
lean_dec_ref(v___y_735_);
v_done_751_ = lean_ctor_get_uint8(v_a_748_, sizeof(void*)*1);
if (v_done_751_ == 0)
{
lean_object* v_e_x27_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_770_; 
lean_dec_ref_known(v___x_747_, 1);
v_e_x27_752_ = lean_ctor_get(v_a_748_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v_a_748_);
if (v_isSharedCheck_770_ == 0)
{
v___x_754_ = v_a_748_;
v_isShared_755_ = v_isSharedCheck_770_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_e_x27_752_);
lean_dec(v_a_748_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_770_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_756_; 
lean_inc(v___y_744_);
lean_inc_ref(v___y_743_);
lean_inc(v___y_742_);
lean_inc_ref(v___y_741_);
lean_inc(v___y_740_);
lean_inc_ref(v___y_739_);
lean_inc(v___y_738_);
lean_inc_ref(v___y_737_);
lean_inc(v___y_736_);
lean_inc_ref(v_e_x27_752_);
v___x_756_ = lean_apply_12(v___f_733_, v___x_746_, v_e_x27_752_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, lean_box(0));
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v_a_757_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_a_757_);
if (lean_obj_tag(v_a_757_) == 0)
{
lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_768_; 
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_768_ == 0)
{
lean_object* v_unused_769_; 
v_unused_769_ = lean_ctor_get(v___x_756_, 0);
lean_dec(v_unused_769_);
v___x_759_ = v___x_756_;
v_isShared_760_ = v_isSharedCheck_768_;
goto v_resetjp_758_;
}
else
{
lean_dec(v___x_756_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_768_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
uint8_t v_done_761_; lean_object* v___x_763_; 
v_done_761_ = lean_ctor_get_uint8(v_a_757_, 0);
lean_dec_ref_known(v_a_757_, 0);
if (v_isShared_755_ == 0)
{
v___x_763_ = v___x_754_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_e_x27_752_);
v___x_763_ = v_reuseFailAlloc_767_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
lean_object* v___x_765_; 
lean_ctor_set_uint8(v___x_763_, sizeof(void*)*1, v_done_761_);
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 0, v___x_763_);
v___x_765_ = v___x_759_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v___x_763_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_757_, 1);
lean_del_object(v___x_754_);
lean_dec_ref(v_e_x27_752_);
return v___x_756_;
}
}
else
{
lean_del_object(v___x_754_);
lean_dec_ref(v_e_x27_752_);
return v___x_756_;
}
}
}
else
{
lean_dec_ref_known(v_a_748_, 1);
lean_dec_ref(v___f_733_);
return v___x_747_;
}
}
}
else
{
lean_dec_ref(v___y_735_);
lean_dec_ref(v___f_733_);
return v___x_747_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__2___boxed(lean_object* v___f_771_, lean_object* v_x_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__2(v___f_771_, v_x_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_, v___y_782_);
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
lean_dec(v___y_780_);
lean_dec_ref(v___y_779_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
lean_dec(v___y_774_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__1(lean_object* v___f_785_, lean_object* v_x_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_798_ = lean_box(0);
lean_inc_ref(v___y_787_);
v___x_799_ = l_Lean_Meta_Sym_DSimp_zetaDeltaAll___redArg(v___y_787_, v___y_793_, v___y_795_, v___y_796_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; 
v_a_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_a_800_);
if (lean_obj_tag(v_a_800_) == 0)
{
uint8_t v_done_801_; 
v_done_801_ = lean_ctor_get_uint8(v_a_800_, 0);
lean_dec_ref_known(v_a_800_, 0);
if (v_done_801_ == 0)
{
lean_object* v___x_802_; 
lean_dec_ref_known(v___x_799_, 1);
lean_inc(v___y_796_);
lean_inc_ref(v___y_795_);
lean_inc(v___y_794_);
lean_inc_ref(v___y_793_);
lean_inc(v___y_792_);
lean_inc_ref(v___y_791_);
lean_inc(v___y_790_);
lean_inc_ref(v___y_789_);
lean_inc(v___y_788_);
v___x_802_ = lean_apply_12(v___f_785_, v___x_798_, v___y_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, lean_box(0));
return v___x_802_;
}
else
{
lean_dec_ref(v___y_787_);
lean_dec_ref(v___f_785_);
return v___x_799_;
}
}
else
{
uint8_t v_done_803_; 
lean_dec_ref(v___y_787_);
v_done_803_ = lean_ctor_get_uint8(v_a_800_, sizeof(void*)*1);
if (v_done_803_ == 0)
{
lean_object* v_e_x27_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_822_; 
lean_dec_ref_known(v___x_799_, 1);
v_e_x27_804_ = lean_ctor_get(v_a_800_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v_a_800_);
if (v_isSharedCheck_822_ == 0)
{
v___x_806_ = v_a_800_;
v_isShared_807_ = v_isSharedCheck_822_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_e_x27_804_);
lean_dec(v_a_800_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_822_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_808_; 
lean_inc(v___y_796_);
lean_inc_ref(v___y_795_);
lean_inc(v___y_794_);
lean_inc_ref(v___y_793_);
lean_inc(v___y_792_);
lean_inc_ref(v___y_791_);
lean_inc(v___y_790_);
lean_inc_ref(v___y_789_);
lean_inc(v___y_788_);
lean_inc_ref(v_e_x27_804_);
v___x_808_ = lean_apply_12(v___f_785_, v___x_798_, v_e_x27_804_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, lean_box(0));
if (lean_obj_tag(v___x_808_) == 0)
{
lean_object* v_a_809_; 
v_a_809_ = lean_ctor_get(v___x_808_, 0);
lean_inc(v_a_809_);
if (lean_obj_tag(v_a_809_) == 0)
{
lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_820_; 
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_820_ == 0)
{
lean_object* v_unused_821_; 
v_unused_821_ = lean_ctor_get(v___x_808_, 0);
lean_dec(v_unused_821_);
v___x_811_ = v___x_808_;
v_isShared_812_ = v_isSharedCheck_820_;
goto v_resetjp_810_;
}
else
{
lean_dec(v___x_808_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_820_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
uint8_t v_done_813_; lean_object* v___x_815_; 
v_done_813_ = lean_ctor_get_uint8(v_a_809_, 0);
lean_dec_ref_known(v_a_809_, 0);
if (v_isShared_807_ == 0)
{
v___x_815_ = v___x_806_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_e_x27_804_);
v___x_815_ = v_reuseFailAlloc_819_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
lean_object* v___x_817_; 
lean_ctor_set_uint8(v___x_815_, sizeof(void*)*1, v_done_813_);
if (v_isShared_812_ == 0)
{
lean_ctor_set(v___x_811_, 0, v___x_815_);
v___x_817_ = v___x_811_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v___x_815_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_809_, 1);
lean_del_object(v___x_806_);
lean_dec_ref(v_e_x27_804_);
return v___x_808_;
}
}
else
{
lean_del_object(v___x_806_);
lean_dec_ref(v_e_x27_804_);
return v___x_808_;
}
}
}
else
{
lean_dec_ref_known(v_a_800_, 1);
lean_dec_ref(v___f_785_);
return v___x_799_;
}
}
}
else
{
lean_dec_ref(v___y_787_);
lean_dec_ref(v___f_785_);
return v___x_799_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__1___boxed(lean_object* v___f_823_, lean_object* v_x_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__1(v___f_823_, v_x_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
lean_dec(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec(v___y_826_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__0(lean_object* v_x_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_){
_start:
{
lean_object* v___x_849_; 
lean_inc_ref(v___y_838_);
v___x_849_ = l_Lean_Meta_Sym_DSimp_beta___redArg(v___y_838_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; 
v_a_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_a_850_);
if (lean_obj_tag(v_a_850_) == 0)
{
uint8_t v_done_851_; 
v_done_851_ = lean_ctor_get_uint8(v_a_850_, 0);
lean_dec_ref_known(v_a_850_, 0);
if (v_done_851_ == 0)
{
lean_object* v___x_852_; 
lean_dec_ref_known(v___x_849_, 1);
v___x_852_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteDsimproc___redArg(v___y_838_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
return v___x_852_;
}
else
{
lean_dec_ref(v___y_838_);
return v___x_849_;
}
}
else
{
uint8_t v_done_853_; 
lean_dec_ref(v___y_838_);
v_done_853_ = lean_ctor_get_uint8(v_a_850_, sizeof(void*)*1);
if (v_done_853_ == 0)
{
lean_object* v_e_x27_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_872_; 
lean_dec_ref_known(v___x_849_, 1);
v_e_x27_854_ = lean_ctor_get(v_a_850_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v_a_850_);
if (v_isSharedCheck_872_ == 0)
{
v___x_856_ = v_a_850_;
v_isShared_857_ = v_isSharedCheck_872_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_e_x27_854_);
lean_dec(v_a_850_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_872_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_858_; 
lean_inc_ref(v_e_x27_854_);
v___x_858_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteDsimproc___redArg(v_e_x27_854_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; 
v_a_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc(v_a_859_);
if (lean_obj_tag(v_a_859_) == 0)
{
lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_870_; 
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_870_ == 0)
{
lean_object* v_unused_871_; 
v_unused_871_ = lean_ctor_get(v___x_858_, 0);
lean_dec(v_unused_871_);
v___x_861_ = v___x_858_;
v_isShared_862_ = v_isSharedCheck_870_;
goto v_resetjp_860_;
}
else
{
lean_dec(v___x_858_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_870_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
uint8_t v_done_863_; lean_object* v___x_865_; 
v_done_863_ = lean_ctor_get_uint8(v_a_859_, 0);
lean_dec_ref_known(v_a_859_, 0);
if (v_isShared_857_ == 0)
{
v___x_865_ = v___x_856_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_e_x27_854_);
v___x_865_ = v_reuseFailAlloc_869_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
lean_object* v___x_867_; 
lean_ctor_set_uint8(v___x_865_, sizeof(void*)*1, v_done_863_);
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 0, v___x_865_);
v___x_867_ = v___x_861_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_865_);
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
else
{
lean_dec_ref_known(v_a_859_, 1);
lean_del_object(v___x_856_);
lean_dec_ref(v_e_x27_854_);
return v___x_858_;
}
}
else
{
lean_del_object(v___x_856_);
lean_dec_ref(v_e_x27_854_);
return v___x_858_;
}
}
}
else
{
lean_dec_ref_known(v_a_850_, 1);
return v___x_849_;
}
}
}
else
{
lean_dec_ref(v___y_838_);
return v___x_849_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__0___boxed(lean_object* v_x_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__0(v_x_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
lean_dec(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec(v___y_875_);
return v_res_885_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12(void){
_start:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_908_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9));
v___x_909_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__11));
v___x_910_ = l_Lean_Name_append(v___x_909_, v___x_908_);
return v___x_910_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__14(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__13));
v___x_913_ = l_Lean_stringToMessageData(v___x_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(lean_object* v_upperBound_914_, lean_object* v___x_915_, lean_object* v___x_916_, lean_object* v___x_917_, lean_object* v___x_918_, lean_object* v_a_919_, lean_object* v_b_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v___y_934_; lean_object* v___y_957_; uint8_t v___x_960_; 
v___x_960_ = lean_nat_dec_lt(v_a_919_, v_upperBound_914_);
if (v___x_960_ == 0)
{
lean_object* v___x_961_; 
lean_dec(v_a_919_);
lean_dec_ref(v___x_918_);
lean_dec_ref(v___x_916_);
v___x_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_961_, 0, v_b_920_);
return v___x_961_;
}
else
{
lean_object* v_snd_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_1044_; 
v_snd_962_ = lean_ctor_get(v_b_920_, 1);
v_isSharedCheck_1044_ = !lean_is_exclusive(v_b_920_);
if (v_isSharedCheck_1044_ == 0)
{
lean_object* v_unused_1045_; 
v_unused_1045_ = lean_ctor_get(v_b_920_, 0);
lean_dec(v_unused_1045_);
v___x_964_ = v_b_920_;
v_isShared_965_ = v_isSharedCheck_1044_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_snd_962_);
lean_dec(v_b_920_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_1044_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___y_997_; uint8_t v___x_1039_; lean_object* v___x_1040_; 
v___x_966_ = lean_box(0);
v___x_967_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__5));
v___x_968_ = lean_array_fget_borrowed(v___x_915_, v_a_919_);
v___x_1039_ = 0;
lean_inc(v___x_968_);
lean_inc_ref(v___x_916_);
v___x_1040_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_dsimpHyp___redArg(v___x_1039_, v___x_967_, v___x_916_, v___x_968_, v___y_922_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; uint8_t v___x_1042_; lean_object* v___x_1043_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc(v_a_1041_);
lean_dec_ref_known(v___x_1040_, 1);
v___x_1042_ = 0;
lean_inc_ref(v___x_918_);
v___x_1043_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(v___x_1042_, v___x_917_, v___x_918_, v_a_1041_, v___y_922_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_);
v___y_997_ = v___x_1043_;
goto v___jp_996_;
}
else
{
v___y_997_ = v___x_1040_;
goto v___jp_996_;
}
v___jp_969_:
{
lean_object* v_toCold_972_; lean_object* v_options_973_; uint8_t v_hasTrace_974_; 
v_toCold_972_ = lean_ctor_get(v___y_930_, 0);
v_options_973_ = lean_ctor_get(v_toCold_972_, 2);
v_hasTrace_974_ = lean_ctor_get_uint8(v_options_973_, sizeof(void*)*1);
if (v_hasTrace_974_ == 0)
{
lean_dec_ref(v___y_970_);
v___y_957_ = v___y_971_;
goto v___jp_956_;
}
else
{
lean_object* v_inheritedTraceOptions_975_; lean_object* v___x_976_; lean_object* v___x_977_; uint8_t v___x_978_; 
v_inheritedTraceOptions_975_ = lean_ctor_get(v_toCold_972_, 11);
v___x_976_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9));
v___x_977_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12);
v___x_978_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_975_, v_options_973_, v___x_977_);
if (v___x_978_ == 0)
{
lean_dec_ref(v___y_970_);
v___y_957_ = v___y_971_;
goto v___jp_956_;
}
else
{
lean_object* v_type_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v_type_979_ = lean_ctor_get(v___x_968_, 1);
lean_inc_ref(v_type_979_);
v___x_980_ = l_Lean_MessageData_ofExpr(v_type_979_);
v___x_981_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__14, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__14_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__14);
v___x_982_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_980_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
v___x_983_ = l_Lean_MessageData_ofExpr(v___y_970_);
v___x_984_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_982_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
v___x_985_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(v___x_976_, v___x_984_, v___y_928_, v___y_929_, v___y_930_, v___y_931_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_object* v_a_986_; lean_object* v___x_987_; 
v_a_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_a_986_);
lean_dec_ref_known(v___x_985_, 1);
lean_inc(v___y_931_);
lean_inc_ref(v___y_930_);
lean_inc(v___y_929_);
lean_inc_ref(v___y_928_);
lean_inc(v___y_927_);
lean_inc_ref(v___y_926_);
lean_inc(v___y_925_);
lean_inc_ref(v___y_924_);
lean_inc(v___y_923_);
lean_inc(v___y_922_);
lean_inc_ref(v___y_921_);
v___x_987_ = lean_apply_13(v___y_971_, v_a_986_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, lean_box(0));
v___y_934_ = v___x_987_;
goto v___jp_933_;
}
else
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
lean_dec_ref(v___y_971_);
lean_dec(v_a_919_);
lean_dec_ref(v___x_918_);
lean_dec_ref(v___x_916_);
v_a_988_ = lean_ctor_get(v___x_985_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_985_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___x_985_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___x_985_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_988_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
}
}
v___jp_996_:
{
if (lean_obj_tag(v___y_997_) == 0)
{
lean_object* v_a_998_; lean_object* v_type_999_; lean_object* v_value_1000_; uint8_t v___x_1001_; 
v_a_998_ = lean_ctor_get(v___y_997_, 0);
lean_inc(v_a_998_);
lean_dec_ref_known(v___y_997_, 1);
v_type_999_ = lean_ctor_get(v_a_998_, 1);
v_value_1000_ = lean_ctor_get(v_a_998_, 2);
lean_inc_ref(v_type_999_);
v___x_1001_ = l_Lean_Expr_isFalse(v_type_999_);
if (v___x_1001_ == 0)
{
lean_object* v_type_1002_; lean_object* v___f_1003_; lean_object* v___x_1004_; lean_object* v___f_1005_; uint8_t v___x_1006_; 
lean_del_object(v___x_964_);
v_type_1002_ = lean_ctor_get(v___x_968_, 1);
lean_inc(v_a_998_);
lean_inc(v_snd_962_);
v___f_1003_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__5___boxed), 16, 3);
lean_closure_set(v___f_1003_, 0, v_snd_962_);
lean_closure_set(v___f_1003_, 1, v_a_998_);
lean_closure_set(v___f_1003_, 2, v___x_966_);
v___x_1004_ = lean_box(v___x_960_);
v___f_1005_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__6___boxed), 15, 2);
lean_closure_set(v___f_1005_, 0, v___x_1004_);
lean_closure_set(v___f_1005_, 1, v___f_1003_);
v___x_1006_ = lean_expr_eqv(v_type_1002_, v_type_999_);
if (v___x_1006_ == 0)
{
lean_inc_ref(v_type_999_);
lean_dec(v_a_998_);
lean_dec(v_snd_962_);
v___y_970_ = v_type_999_;
v___y_971_ = v___f_1005_;
goto v___jp_969_;
}
else
{
if (v___x_1001_ == 0)
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
lean_dec_ref(v___f_1005_);
v___x_1007_ = lean_box(0);
v___x_1008_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___lam__5(v_snd_962_, v_a_998_, v___x_966_, v___x_1007_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_);
v___y_934_ = v___x_1008_;
goto v___jp_933_;
}
else
{
lean_inc_ref(v_type_999_);
lean_dec(v_a_998_);
lean_dec(v_snd_962_);
v___y_970_ = v_type_999_;
v___y_971_ = v___f_1005_;
goto v___jp_969_;
}
}
}
else
{
lean_object* v___x_1009_; 
lean_inc_ref(v_value_1000_);
lean_dec(v_a_998_);
lean_dec(v_a_919_);
lean_dec_ref(v___x_918_);
lean_dec_ref(v___x_916_);
v___x_1009_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_1000_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1021_; 
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1021_ == 0)
{
lean_object* v_unused_1022_; 
v_unused_1022_ = lean_ctor_get(v___x_1009_, 0);
lean_dec(v_unused_1022_);
v___x_1011_ = v___x_1009_;
v_isShared_1012_ = v_isSharedCheck_1021_;
goto v_resetjp_1010_;
}
else
{
lean_dec(v___x_1009_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1021_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1016_; 
v___x_1013_ = lean_box(v___x_960_);
v___x_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
if (v_isShared_965_ == 0)
{
lean_ctor_set(v___x_964_, 0, v___x_1014_);
v___x_1016_ = v___x_964_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1014_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v_snd_962_);
v___x_1016_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1018_; 
if (v_isShared_1012_ == 0)
{
lean_ctor_set(v___x_1011_, 0, v___x_1016_);
v___x_1018_ = v___x_1011_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v___x_1016_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
else
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1030_; 
lean_del_object(v___x_964_);
lean_dec(v_snd_962_);
v_a_1023_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_1025_ = v___x_1009_;
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___x_1009_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1028_; 
if (v_isShared_1026_ == 0)
{
v___x_1028_ = v___x_1025_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v_a_1023_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
}
}
else
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1038_; 
lean_del_object(v___x_964_);
lean_dec(v_snd_962_);
lean_dec(v_a_919_);
lean_dec_ref(v___x_918_);
lean_dec_ref(v___x_916_);
v_a_1031_ = lean_ctor_get(v___y_997_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___y_997_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1033_ = v___y_997_;
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___y_997_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1036_; 
if (v_isShared_1034_ == 0)
{
v___x_1036_ = v___x_1033_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_a_1031_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
}
}
}
v___jp_933_:
{
if (lean_obj_tag(v___y_934_) == 0)
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_947_; 
v_a_935_ = lean_ctor_get(v___y_934_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___y_934_);
if (v_isSharedCheck_947_ == 0)
{
v___x_937_ = v___y_934_;
v_isShared_938_ = v_isSharedCheck_947_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___y_934_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_947_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
if (lean_obj_tag(v_a_935_) == 0)
{
lean_object* v_a_939_; lean_object* v___x_941_; 
lean_dec(v_a_919_);
lean_dec_ref(v___x_918_);
lean_dec_ref(v___x_916_);
v_a_939_ = lean_ctor_get(v_a_935_, 0);
lean_inc(v_a_939_);
lean_dec_ref_known(v_a_935_, 1);
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 0, v_a_939_);
v___x_941_ = v___x_937_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_939_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
else
{
lean_object* v_a_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
lean_del_object(v___x_937_);
v_a_943_ = lean_ctor_get(v_a_935_, 0);
lean_inc(v_a_943_);
lean_dec_ref_known(v_a_935_, 1);
v___x_944_ = lean_unsigned_to_nat(1u);
v___x_945_ = lean_nat_add(v_a_919_, v___x_944_);
lean_dec(v_a_919_);
v_a_919_ = v___x_945_;
v_b_920_ = v_a_943_;
goto _start;
}
}
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_955_; 
lean_dec(v_a_919_);
lean_dec_ref(v___x_918_);
lean_dec_ref(v___x_916_);
v_a_948_ = lean_ctor_get(v___y_934_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___y_934_);
if (v_isSharedCheck_955_ == 0)
{
v___x_950_ = v___y_934_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___y_934_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_948_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
}
v___jp_956_:
{
lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_958_ = lean_box(0);
lean_inc(v___y_931_);
lean_inc_ref(v___y_930_);
lean_inc(v___y_929_);
lean_inc_ref(v___y_928_);
lean_inc(v___y_927_);
lean_inc_ref(v___y_926_);
lean_inc(v___y_925_);
lean_inc_ref(v___y_924_);
lean_inc(v___y_923_);
lean_inc(v___y_922_);
lean_inc_ref(v___y_921_);
v___x_959_ = lean_apply_13(v___y_957_, v___x_958_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, lean_box(0));
v___y_934_ = v___x_959_;
goto v___jp_933_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_1046_ = _args[0];
lean_object* v___x_1047_ = _args[1];
lean_object* v___x_1048_ = _args[2];
lean_object* v___x_1049_ = _args[3];
lean_object* v___x_1050_ = _args[4];
lean_object* v_a_1051_ = _args[5];
lean_object* v_b_1052_ = _args[6];
lean_object* v___y_1053_ = _args[7];
lean_object* v___y_1054_ = _args[8];
lean_object* v___y_1055_ = _args[9];
lean_object* v___y_1056_ = _args[10];
lean_object* v___y_1057_ = _args[11];
lean_object* v___y_1058_ = _args[12];
lean_object* v___y_1059_ = _args[13];
lean_object* v___y_1060_ = _args[14];
lean_object* v___y_1061_ = _args[15];
lean_object* v___y_1062_ = _args[16];
lean_object* v___y_1063_ = _args[17];
lean_object* v___y_1064_ = _args[18];
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(v_upperBound_1046_, v___x_1047_, v___x_1048_, v___x_1049_, v___x_1050_, v_a_1051_, v_b_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec(v___y_1059_);
lean_dec_ref(v___y_1058_);
lean_dec(v___y_1057_);
lean_dec_ref(v___y_1056_);
lean_dec(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
lean_dec_ref(v___x_1049_);
lean_dec_ref(v___x_1047_);
lean_dec(v_upperBound_1046_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4(lean_object* v___x_1066_, lean_object* v___x_1067_, lean_object* v___x_1068_, lean_object* v___x_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v___x_1082_; lean_object* v_hypotheses_1083_; lean_object* v___x_1084_; lean_object* v_newHyps_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1082_ = lean_st_ref_get(v___y_1071_);
v_hypotheses_1083_ = lean_ctor_get(v___x_1082_, 3);
lean_inc_ref(v_hypotheses_1083_);
lean_dec(v___x_1082_);
v___x_1084_ = lean_array_get_size(v_hypotheses_1083_);
v_newHyps_1085_ = lean_mk_empty_array_with_capacity(v___x_1084_);
v___x_1086_ = lean_box(0);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
lean_ctor_set(v___x_1087_, 1, v_newHyps_1085_);
v___x_1088_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(v___x_1084_, v_hypotheses_1083_, v___x_1066_, v___x_1067_, v___x_1068_, v___x_1069_, v___x_1087_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
lean_dec_ref(v_hypotheses_1083_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1118_; 
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1091_ = v___x_1088_;
v_isShared_1092_ = v_isSharedCheck_1118_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1088_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1118_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v_fst_1093_; 
v_fst_1093_ = lean_ctor_get(v_a_1089_, 0);
if (lean_obj_tag(v_fst_1093_) == 0)
{
lean_object* v_snd_1094_; lean_object* v___x_1095_; lean_object* v_caches_1096_; lean_object* v_typeAnalysis_1097_; lean_object* v_target_1098_; uint8_t v_didChange_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1112_; 
v_snd_1094_ = lean_ctor_get(v_a_1089_, 1);
lean_inc(v_snd_1094_);
lean_dec(v_a_1089_);
v___x_1095_ = lean_st_ref_take(v___y_1071_);
v_caches_1096_ = lean_ctor_get(v___x_1095_, 0);
v_typeAnalysis_1097_ = lean_ctor_get(v___x_1095_, 1);
v_target_1098_ = lean_ctor_get(v___x_1095_, 2);
v_didChange_1099_ = lean_ctor_get_uint8(v___x_1095_, sizeof(void*)*4);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1112_ == 0)
{
lean_object* v_unused_1113_; 
v_unused_1113_ = lean_ctor_get(v___x_1095_, 3);
lean_dec(v_unused_1113_);
v___x_1101_ = v___x_1095_;
v_isShared_1102_ = v_isSharedCheck_1112_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_target_1098_);
lean_inc(v_typeAnalysis_1097_);
lean_inc(v_caches_1096_);
lean_dec(v___x_1095_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1112_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 3, v_snd_1094_);
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_caches_1096_);
lean_ctor_set(v_reuseFailAlloc_1111_, 1, v_typeAnalysis_1097_);
lean_ctor_set(v_reuseFailAlloc_1111_, 2, v_target_1098_);
lean_ctor_set(v_reuseFailAlloc_1111_, 3, v_snd_1094_);
lean_ctor_set_uint8(v_reuseFailAlloc_1111_, sizeof(void*)*4, v_didChange_1099_);
v___x_1104_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
lean_object* v___x_1105_; uint8_t v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1109_; 
v___x_1105_ = lean_st_ref_put(v___y_1071_, v___x_1104_);
v___x_1106_ = 0;
v___x_1107_ = lean_box(v___x_1106_);
if (v_isShared_1092_ == 0)
{
lean_ctor_set(v___x_1091_, 0, v___x_1107_);
v___x_1109_ = v___x_1091_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1107_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
else
{
lean_object* v_val_1114_; lean_object* v___x_1116_; 
lean_inc_ref(v_fst_1093_);
lean_dec(v_a_1089_);
v_val_1114_ = lean_ctor_get(v_fst_1093_, 0);
lean_inc(v_val_1114_);
lean_dec_ref_known(v_fst_1093_, 1);
if (v_isShared_1092_ == 0)
{
lean_ctor_set(v___x_1091_, 0, v_val_1114_);
v___x_1116_ = v___x_1091_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_val_1114_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
}
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
v_a_1119_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1088_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1088_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4___boxed(lean_object* v___x_1127_, lean_object* v___x_1128_, lean_object* v___x_1129_, lean_object* v___x_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4(v___x_1127_, v___x_1128_, v___x_1129_, v___x_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
lean_dec(v___y_1133_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1131_);
lean_dec_ref(v___x_1128_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg(lean_object* v_x_1144_){
_start:
{
if (lean_obj_tag(v_x_1144_) == 0)
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1153_; 
v_a_1146_ = lean_ctor_get(v_x_1144_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v_x_1144_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1148_ = v_x_1144_;
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v_x_1144_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1151_; 
if (v_isShared_1149_ == 0)
{
lean_ctor_set_tag(v___x_1148_, 1);
v___x_1151_ = v___x_1148_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1146_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
else
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
v_a_1154_ = lean_ctor_get(v_x_1144_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v_x_1144_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v_x_1144_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v_x_1144_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
lean_ctor_set_tag(v___x_1156_, 0);
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg___boxed(lean_object* v_x_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg(v_x_1162_);
return v_res_1164_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__9(lean_object* v_e_1165_){
_start:
{
if (lean_obj_tag(v_e_1165_) == 0)
{
uint8_t v___x_1166_; 
v___x_1166_ = 2;
return v___x_1166_;
}
else
{
uint8_t v___x_1167_; 
v___x_1167_ = 0;
return v___x_1167_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__9___boxed(lean_object* v_e_1168_){
_start:
{
uint8_t v_res_1169_; lean_object* v_r_1170_; 
v_res_1169_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__9(v_e_1168_);
lean_dec_ref(v_e_1168_);
v_r_1170_ = lean_box(v_res_1169_);
return v_r_1170_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7_spec__8(size_t v_sz_1171_, size_t v_i_1172_, lean_object* v_bs_1173_){
_start:
{
uint8_t v___x_1174_; 
v___x_1174_ = lean_usize_dec_lt(v_i_1172_, v_sz_1171_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; 
v___x_1175_ = l_unsafeCast___redArg(v_bs_1173_);
lean_dec_ref(v_bs_1173_);
return v___x_1175_;
}
else
{
lean_object* v_v_1176_; lean_object* v___x_1177_; lean_object* v_msg_1178_; lean_object* v___x_1179_; lean_object* v_bs_x27_1180_; size_t v___x_1181_; size_t v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v_v_1176_ = lean_array_uget_borrowed(v_bs_1173_, v_i_1172_);
v___x_1177_ = l_unsafeCast___redArg(v_v_1176_);
v_msg_1178_ = lean_ctor_get(v___x_1177_, 1);
lean_inc_ref(v_msg_1178_);
lean_dec(v___x_1177_);
v___x_1179_ = lean_unsigned_to_nat(0u);
v_bs_x27_1180_ = lean_array_uset(v_bs_1173_, v_i_1172_, v___x_1179_);
v___x_1181_ = ((size_t)1ULL);
v___x_1182_ = lean_usize_add(v_i_1172_, v___x_1181_);
v___x_1183_ = l_unsafeCast___redArg(v_msg_1178_);
lean_dec_ref(v_msg_1178_);
v___x_1184_ = lean_array_uset(v_bs_x27_1180_, v_i_1172_, v___x_1183_);
v_i_1172_ = v___x_1182_;
v_bs_1173_ = v___x_1184_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7_spec__8___boxed(lean_object* v_sz_1186_, lean_object* v_i_1187_, lean_object* v_bs_1188_){
_start:
{
size_t v_sz_boxed_1189_; size_t v_i_boxed_1190_; lean_object* v_res_1191_; 
v_sz_boxed_1189_ = lean_unbox_usize(v_sz_1186_);
lean_dec(v_sz_1186_);
v_i_boxed_1190_ = lean_unbox_usize(v_i_1187_);
lean_dec(v_i_1187_);
v_res_1191_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7_spec__8(v_sz_boxed_1189_, v_i_boxed_1190_, v_bs_1188_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___redArg(lean_object* v_oldTraces_1192_, lean_object* v_data_1193_, lean_object* v_ref_1194_, lean_object* v_msg_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v_toCold_1201_; lean_object* v_currRecDepth_1202_; lean_object* v_ref_1203_; uint8_t v_diag_1204_; uint8_t v_suppressElabErrors_1205_; lean_object* v_ref_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v_traceState_1209_; lean_object* v_traces_1210_; lean_object* v___x_1211_; size_t v_sz_1212_; size_t v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v_msg_1217_; lean_object* v___x_1218_; lean_object* v_a_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1256_; 
v_toCold_1201_ = lean_ctor_get(v___y_1198_, 0);
v_currRecDepth_1202_ = lean_ctor_get(v___y_1198_, 1);
v_ref_1203_ = lean_ctor_get(v___y_1198_, 2);
v_diag_1204_ = lean_ctor_get_uint8(v___y_1198_, sizeof(void*)*3);
v_suppressElabErrors_1205_ = lean_ctor_get_uint8(v___y_1198_, sizeof(void*)*3 + 1);
v_ref_1206_ = l_Lean_replaceRef(v_ref_1194_, v_ref_1203_);
lean_inc(v_currRecDepth_1202_);
lean_inc_ref(v_toCold_1201_);
v___x_1207_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1207_, 0, v_toCold_1201_);
lean_ctor_set(v___x_1207_, 1, v_currRecDepth_1202_);
lean_ctor_set(v___x_1207_, 2, v_ref_1206_);
lean_ctor_set_uint8(v___x_1207_, sizeof(void*)*3, v_diag_1204_);
lean_ctor_set_uint8(v___x_1207_, sizeof(void*)*3 + 1, v_suppressElabErrors_1205_);
v___x_1208_ = lean_st_ref_get(v___y_1199_);
v_traceState_1209_ = lean_ctor_get(v___x_1208_, 4);
lean_inc_ref(v_traceState_1209_);
lean_dec(v___x_1208_);
v_traces_1210_ = lean_ctor_get(v_traceState_1209_, 0);
lean_inc_ref(v_traces_1210_);
lean_dec_ref(v_traceState_1209_);
v___x_1211_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1210_);
lean_dec_ref(v_traces_1210_);
v_sz_1212_ = lean_array_size(v___x_1211_);
v___x_1213_ = ((size_t)0ULL);
v___x_1214_ = l_unsafeCast___redArg(v___x_1211_);
lean_dec_ref(v___x_1211_);
v___x_1215_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7_spec__8(v_sz_1212_, v___x_1213_, v___x_1214_);
v___x_1216_ = l_unsafeCast___redArg(v___x_1215_);
lean_dec_ref(v___x_1215_);
v_msg_1217_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1217_, 0, v_data_1193_);
lean_ctor_set(v_msg_1217_, 1, v_msg_1195_);
lean_ctor_set(v_msg_1217_, 2, v___x_1216_);
v___x_1218_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0_spec__0(v_msg_1217_, v___y_1196_, v___y_1197_, v___x_1207_, v___y_1199_);
lean_dec_ref_known(v___x_1207_, 3);
v_a_1219_ = lean_ctor_get(v___x_1218_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1218_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1221_ = v___x_1218_;
v_isShared_1222_ = v_isSharedCheck_1256_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_a_1219_);
lean_dec(v___x_1218_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1256_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1223_; lean_object* v_traceState_1224_; lean_object* v_env_1225_; lean_object* v_nextMacroScope_1226_; lean_object* v_ngen_1227_; lean_object* v_auxDeclNGen_1228_; lean_object* v_cache_1229_; lean_object* v_messages_1230_; lean_object* v_infoState_1231_; lean_object* v_snapshotTasks_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1255_; 
v___x_1223_ = lean_st_ref_take(v___y_1199_);
v_traceState_1224_ = lean_ctor_get(v___x_1223_, 4);
v_env_1225_ = lean_ctor_get(v___x_1223_, 0);
v_nextMacroScope_1226_ = lean_ctor_get(v___x_1223_, 1);
v_ngen_1227_ = lean_ctor_get(v___x_1223_, 2);
v_auxDeclNGen_1228_ = lean_ctor_get(v___x_1223_, 3);
v_cache_1229_ = lean_ctor_get(v___x_1223_, 5);
v_messages_1230_ = lean_ctor_get(v___x_1223_, 6);
v_infoState_1231_ = lean_ctor_get(v___x_1223_, 7);
v_snapshotTasks_1232_ = lean_ctor_get(v___x_1223_, 8);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1234_ = v___x_1223_;
v_isShared_1235_ = v_isSharedCheck_1255_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_snapshotTasks_1232_);
lean_inc(v_infoState_1231_);
lean_inc(v_messages_1230_);
lean_inc(v_cache_1229_);
lean_inc(v_traceState_1224_);
lean_inc(v_auxDeclNGen_1228_);
lean_inc(v_ngen_1227_);
lean_inc(v_nextMacroScope_1226_);
lean_inc(v_env_1225_);
lean_dec(v___x_1223_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1255_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
uint64_t v_tid_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1253_; 
v_tid_1236_ = lean_ctor_get_uint64(v_traceState_1224_, sizeof(void*)*1);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_traceState_1224_);
if (v_isSharedCheck_1253_ == 0)
{
lean_object* v_unused_1254_; 
v_unused_1254_ = lean_ctor_get(v_traceState_1224_, 0);
lean_dec(v_unused_1254_);
v___x_1238_ = v_traceState_1224_;
v_isShared_1239_ = v_isSharedCheck_1253_;
goto v_resetjp_1237_;
}
else
{
lean_dec(v_traceState_1224_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1253_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1244_; 
v___x_1240_ = lean_box(0);
v___x_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1241_, 0, v_ref_1194_);
lean_ctor_set(v___x_1241_, 1, v_a_1219_);
v___x_1242_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1192_, v___x_1241_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 0, v___x_1242_);
v___x_1244_ = v___x_1238_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v___x_1242_);
lean_ctor_set_uint64(v_reuseFailAlloc_1252_, sizeof(void*)*1, v_tid_1236_);
v___x_1244_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
lean_object* v___x_1246_; 
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 4, v___x_1244_);
v___x_1246_ = v___x_1234_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_env_1225_);
lean_ctor_set(v_reuseFailAlloc_1251_, 1, v_nextMacroScope_1226_);
lean_ctor_set(v_reuseFailAlloc_1251_, 2, v_ngen_1227_);
lean_ctor_set(v_reuseFailAlloc_1251_, 3, v_auxDeclNGen_1228_);
lean_ctor_set(v_reuseFailAlloc_1251_, 4, v___x_1244_);
lean_ctor_set(v_reuseFailAlloc_1251_, 5, v_cache_1229_);
lean_ctor_set(v_reuseFailAlloc_1251_, 6, v_messages_1230_);
lean_ctor_set(v_reuseFailAlloc_1251_, 7, v_infoState_1231_);
lean_ctor_set(v_reuseFailAlloc_1251_, 8, v_snapshotTasks_1232_);
v___x_1246_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
lean_object* v___x_1247_; lean_object* v___x_1249_; 
v___x_1247_ = lean_st_ref_put(v___y_1199_, v___x_1246_);
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 0, v___x_1240_);
v___x_1249_ = v___x_1221_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v___x_1240_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___redArg___boxed(lean_object* v_oldTraces_1257_, lean_object* v_data_1258_, lean_object* v_ref_1259_, lean_object* v_msg_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___redArg(v_oldTraces_1257_, v_data_1258_, v_ref_1259_, v_msg_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
lean_dec(v___y_1262_);
lean_dec_ref(v___y_1261_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__10(lean_object* v_opts_1267_, lean_object* v_opt_1268_){
_start:
{
lean_object* v_name_1269_; lean_object* v_defValue_1270_; lean_object* v_map_1271_; lean_object* v___x_1272_; 
v_name_1269_ = lean_ctor_get(v_opt_1268_, 0);
v_defValue_1270_ = lean_ctor_get(v_opt_1268_, 1);
v_map_1271_ = lean_ctor_get(v_opts_1267_, 0);
v___x_1272_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1271_, v_name_1269_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_inc(v_defValue_1270_);
return v_defValue_1270_;
}
else
{
lean_object* v_val_1273_; 
v_val_1273_ = lean_ctor_get(v___x_1272_, 0);
lean_inc(v_val_1273_);
lean_dec_ref_known(v___x_1272_, 1);
if (lean_obj_tag(v_val_1273_) == 3)
{
lean_object* v_v_1274_; 
v_v_1274_ = lean_ctor_get(v_val_1273_, 0);
lean_inc(v_v_1274_);
lean_dec_ref_known(v_val_1273_, 1);
return v_v_1274_;
}
else
{
lean_dec(v_val_1273_);
lean_inc(v_defValue_1270_);
return v_defValue_1270_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__10___boxed(lean_object* v_opts_1275_, lean_object* v_opt_1276_){
_start:
{
lean_object* v_res_1277_; 
v_res_1277_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__10(v_opts_1275_, v_opt_1276_);
lean_dec_ref(v_opt_1276_);
lean_dec_ref(v_opts_1275_);
return v_res_1277_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__1(void){
_start:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1279_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__0));
v___x_1280_ = l_Lean_stringToMessageData(v___x_1279_);
return v___x_1280_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__2(void){
_start:
{
lean_object* v___x_1281_; double v___x_1282_; 
v___x_1281_ = lean_unsigned_to_nat(1000u);
v___x_1282_ = lean_float_of_nat(v___x_1281_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6(lean_object* v_cls_1283_, uint8_t v_collapsed_1284_, lean_object* v_tag_1285_, lean_object* v_opts_1286_, uint8_t v_clsEnabled_1287_, lean_object* v_oldTraces_1288_, lean_object* v_msg_1289_, lean_object* v_resStartStop_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_){
_start:
{
lean_object* v_fst_1303_; lean_object* v_snd_1304_; lean_object* v___y_1306_; lean_object* v___y_1307_; lean_object* v_data_1308_; lean_object* v_fst_1311_; lean_object* v_snd_1312_; lean_object* v___x_1313_; uint8_t v___x_1314_; lean_object* v___y_1316_; lean_object* v_a_1317_; uint8_t v___y_1332_; double v___y_1363_; 
v_fst_1303_ = lean_ctor_get(v_resStartStop_1290_, 0);
lean_inc(v_fst_1303_);
v_snd_1304_ = lean_ctor_get(v_resStartStop_1290_, 1);
lean_inc(v_snd_1304_);
lean_dec_ref(v_resStartStop_1290_);
v_fst_1311_ = lean_ctor_get(v_snd_1304_, 0);
lean_inc(v_fst_1311_);
v_snd_1312_ = lean_ctor_get(v_snd_1304_, 1);
lean_inc(v_snd_1312_);
lean_dec(v_snd_1304_);
v___x_1313_ = l_Lean_trace_profiler;
v___x_1314_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5(v_opts_1286_, v___x_1313_);
if (v___x_1314_ == 0)
{
v___y_1332_ = v___x_1314_;
goto v___jp_1331_;
}
else
{
lean_object* v___x_1368_; uint8_t v___x_1369_; 
v___x_1368_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1369_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5(v_opts_1286_, v___x_1368_);
if (v___x_1369_ == 0)
{
lean_object* v___x_1370_; lean_object* v___x_1371_; double v___x_1372_; double v___x_1373_; double v___x_1374_; 
v___x_1370_ = l_Lean_trace_profiler_threshold;
v___x_1371_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__10(v_opts_1286_, v___x_1370_);
v___x_1372_ = lean_float_of_nat(v___x_1371_);
v___x_1373_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__2);
v___x_1374_ = lean_float_div(v___x_1372_, v___x_1373_);
v___y_1363_ = v___x_1374_;
goto v___jp_1362_;
}
else
{
lean_object* v___x_1375_; lean_object* v___x_1376_; double v___x_1377_; 
v___x_1375_ = l_Lean_trace_profiler_threshold;
v___x_1376_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__10(v_opts_1286_, v___x_1375_);
v___x_1377_ = lean_float_of_nat(v___x_1376_);
v___y_1363_ = v___x_1377_;
goto v___jp_1362_;
}
}
v___jp_1305_:
{
lean_object* v___x_1309_; 
lean_inc(v___y_1306_);
v___x_1309_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___redArg(v_oldTraces_1288_, v_data_1308_, v___y_1306_, v___y_1307_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v___x_1310_; 
lean_dec_ref_known(v___x_1309_, 1);
v___x_1310_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg(v_fst_1303_);
return v___x_1310_;
}
else
{
lean_dec(v_fst_1303_);
return v___x_1309_;
}
}
v___jp_1315_:
{
uint8_t v_result_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; double v___x_1321_; lean_object* v_data_1322_; 
v_result_1318_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__9(v_fst_1303_);
v___x_1319_ = lean_box(v_result_1318_);
v___x_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1319_);
v___x_1321_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__0);
lean_inc_ref(v_tag_1285_);
lean_inc_ref(v___x_1320_);
lean_inc(v_cls_1283_);
v_data_1322_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1322_, 0, v_cls_1283_);
lean_ctor_set(v_data_1322_, 1, v___x_1320_);
lean_ctor_set(v_data_1322_, 2, v_tag_1285_);
lean_ctor_set_float(v_data_1322_, sizeof(void*)*3, v___x_1321_);
lean_ctor_set_float(v_data_1322_, sizeof(void*)*3 + 8, v___x_1321_);
lean_ctor_set_uint8(v_data_1322_, sizeof(void*)*3 + 16, v_collapsed_1284_);
if (v___x_1314_ == 0)
{
lean_dec_ref_known(v___x_1320_, 1);
lean_dec(v_snd_1312_);
lean_dec(v_fst_1311_);
lean_dec_ref(v_tag_1285_);
lean_dec(v_cls_1283_);
v___y_1306_ = v___y_1316_;
v___y_1307_ = v_a_1317_;
v_data_1308_ = v_data_1322_;
goto v___jp_1305_;
}
else
{
lean_object* v_data_1323_; double v___x_1324_; double v___x_1325_; 
lean_dec_ref_known(v_data_1322_, 3);
v_data_1323_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1323_, 0, v_cls_1283_);
lean_ctor_set(v_data_1323_, 1, v___x_1320_);
lean_ctor_set(v_data_1323_, 2, v_tag_1285_);
v___x_1324_ = lean_unbox_float(v_fst_1311_);
lean_dec(v_fst_1311_);
lean_ctor_set_float(v_data_1323_, sizeof(void*)*3, v___x_1324_);
v___x_1325_ = lean_unbox_float(v_snd_1312_);
lean_dec(v_snd_1312_);
lean_ctor_set_float(v_data_1323_, sizeof(void*)*3 + 8, v___x_1325_);
lean_ctor_set_uint8(v_data_1323_, sizeof(void*)*3 + 16, v_collapsed_1284_);
v___y_1306_ = v___y_1316_;
v___y_1307_ = v_a_1317_;
v_data_1308_ = v_data_1323_;
goto v___jp_1305_;
}
}
v___jp_1326_:
{
lean_object* v_ref_1327_; lean_object* v___x_1328_; 
v_ref_1327_ = lean_ctor_get(v___y_1300_, 2);
lean_inc(v___y_1301_);
lean_inc_ref(v___y_1300_);
lean_inc(v___y_1299_);
lean_inc_ref(v___y_1298_);
lean_inc(v___y_1297_);
lean_inc_ref(v___y_1296_);
lean_inc(v___y_1295_);
lean_inc_ref(v___y_1294_);
lean_inc(v___y_1293_);
lean_inc(v___y_1292_);
lean_inc_ref(v___y_1291_);
lean_inc(v_fst_1303_);
v___x_1328_ = lean_apply_13(v_msg_1289_, v_fst_1303_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, lean_box(0));
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1329_);
lean_dec_ref_known(v___x_1328_, 1);
v___y_1316_ = v_ref_1327_;
v_a_1317_ = v_a_1329_;
goto v___jp_1315_;
}
else
{
lean_object* v___x_1330_; 
lean_dec_ref_known(v___x_1328_, 1);
v___x_1330_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___closed__1);
v___y_1316_ = v_ref_1327_;
v_a_1317_ = v___x_1330_;
goto v___jp_1315_;
}
}
v___jp_1331_:
{
if (v_clsEnabled_1287_ == 0)
{
if (v___y_1332_ == 0)
{
lean_object* v___x_1333_; lean_object* v_traceState_1334_; lean_object* v_env_1335_; lean_object* v_nextMacroScope_1336_; lean_object* v_ngen_1337_; lean_object* v_auxDeclNGen_1338_; lean_object* v_cache_1339_; lean_object* v_messages_1340_; lean_object* v_infoState_1341_; lean_object* v_snapshotTasks_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1361_; 
lean_dec(v_snd_1312_);
lean_dec(v_fst_1311_);
lean_dec_ref(v_msg_1289_);
lean_dec_ref(v_tag_1285_);
lean_dec(v_cls_1283_);
v___x_1333_ = lean_st_ref_take(v___y_1301_);
v_traceState_1334_ = lean_ctor_get(v___x_1333_, 4);
v_env_1335_ = lean_ctor_get(v___x_1333_, 0);
v_nextMacroScope_1336_ = lean_ctor_get(v___x_1333_, 1);
v_ngen_1337_ = lean_ctor_get(v___x_1333_, 2);
v_auxDeclNGen_1338_ = lean_ctor_get(v___x_1333_, 3);
v_cache_1339_ = lean_ctor_get(v___x_1333_, 5);
v_messages_1340_ = lean_ctor_get(v___x_1333_, 6);
v_infoState_1341_ = lean_ctor_get(v___x_1333_, 7);
v_snapshotTasks_1342_ = lean_ctor_get(v___x_1333_, 8);
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1344_ = v___x_1333_;
v_isShared_1345_ = v_isSharedCheck_1361_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_snapshotTasks_1342_);
lean_inc(v_infoState_1341_);
lean_inc(v_messages_1340_);
lean_inc(v_cache_1339_);
lean_inc(v_traceState_1334_);
lean_inc(v_auxDeclNGen_1338_);
lean_inc(v_ngen_1337_);
lean_inc(v_nextMacroScope_1336_);
lean_inc(v_env_1335_);
lean_dec(v___x_1333_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1361_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
uint64_t v_tid_1346_; lean_object* v_traces_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1360_; 
v_tid_1346_ = lean_ctor_get_uint64(v_traceState_1334_, sizeof(void*)*1);
v_traces_1347_ = lean_ctor_get(v_traceState_1334_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v_traceState_1334_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1349_ = v_traceState_1334_;
v_isShared_1350_ = v_isSharedCheck_1360_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_traces_1347_);
lean_dec(v_traceState_1334_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1360_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
lean_object* v___x_1351_; lean_object* v___x_1353_; 
v___x_1351_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1288_, v_traces_1347_);
lean_dec_ref(v_traces_1347_);
if (v_isShared_1350_ == 0)
{
lean_ctor_set(v___x_1349_, 0, v___x_1351_);
v___x_1353_ = v___x_1349_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v___x_1351_);
lean_ctor_set_uint64(v_reuseFailAlloc_1359_, sizeof(void*)*1, v_tid_1346_);
v___x_1353_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
lean_object* v___x_1355_; 
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 4, v___x_1353_);
v___x_1355_ = v___x_1344_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_env_1335_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v_nextMacroScope_1336_);
lean_ctor_set(v_reuseFailAlloc_1358_, 2, v_ngen_1337_);
lean_ctor_set(v_reuseFailAlloc_1358_, 3, v_auxDeclNGen_1338_);
lean_ctor_set(v_reuseFailAlloc_1358_, 4, v___x_1353_);
lean_ctor_set(v_reuseFailAlloc_1358_, 5, v_cache_1339_);
lean_ctor_set(v_reuseFailAlloc_1358_, 6, v_messages_1340_);
lean_ctor_set(v_reuseFailAlloc_1358_, 7, v_infoState_1341_);
lean_ctor_set(v_reuseFailAlloc_1358_, 8, v_snapshotTasks_1342_);
v___x_1355_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = lean_st_ref_put(v___y_1301_, v___x_1355_);
v___x_1357_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg(v_fst_1303_);
return v___x_1357_;
}
}
}
}
}
else
{
goto v___jp_1326_;
}
}
else
{
goto v___jp_1326_;
}
}
v___jp_1362_:
{
double v___x_1364_; double v___x_1365_; double v___x_1366_; uint8_t v___x_1367_; 
v___x_1364_ = lean_unbox_float(v_snd_1312_);
v___x_1365_ = lean_unbox_float(v_fst_1311_);
v___x_1366_ = lean_float_sub(v___x_1364_, v___x_1365_);
v___x_1367_ = lean_float_decLt(v___y_1363_, v___x_1366_);
v___y_1332_ = v___x_1367_;
goto v___jp_1331_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6___boxed(lean_object** _args){
lean_object* v_cls_1378_ = _args[0];
lean_object* v_collapsed_1379_ = _args[1];
lean_object* v_tag_1380_ = _args[2];
lean_object* v_opts_1381_ = _args[3];
lean_object* v_clsEnabled_1382_ = _args[4];
lean_object* v_oldTraces_1383_ = _args[5];
lean_object* v_msg_1384_ = _args[6];
lean_object* v_resStartStop_1385_ = _args[7];
lean_object* v___y_1386_ = _args[8];
lean_object* v___y_1387_ = _args[9];
lean_object* v___y_1388_ = _args[10];
lean_object* v___y_1389_ = _args[11];
lean_object* v___y_1390_ = _args[12];
lean_object* v___y_1391_ = _args[13];
lean_object* v___y_1392_ = _args[14];
lean_object* v___y_1393_ = _args[15];
lean_object* v___y_1394_ = _args[16];
lean_object* v___y_1395_ = _args[17];
lean_object* v___y_1396_ = _args[18];
lean_object* v___y_1397_ = _args[19];
_start:
{
uint8_t v_collapsed_boxed_1398_; uint8_t v_clsEnabled_boxed_1399_; lean_object* v_res_1400_; 
v_collapsed_boxed_1398_ = lean_unbox(v_collapsed_1379_);
v_clsEnabled_boxed_1399_ = lean_unbox(v_clsEnabled_1382_);
v_res_1400_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6(v_cls_1378_, v_collapsed_boxed_1398_, v_tag_1380_, v_opts_1381_, v_clsEnabled_boxed_1399_, v_oldTraces_1383_, v_msg_1384_, v_resStartStop_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
lean_dec(v___y_1390_);
lean_dec_ref(v___y_1389_);
lean_dec(v___y_1388_);
lean_dec(v___y_1387_);
lean_dec_ref(v___y_1386_);
lean_dec_ref(v_opts_1381_);
return v_res_1400_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1402_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__0));
v___x_1403_ = l_Lean_stringToMessageData(v___x_1402_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3(lean_object* v_as_1404_, size_t v_sz_1405_, size_t v_i_1406_, lean_object* v_b_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_){
_start:
{
lean_object* v_a_1421_; uint8_t v___x_1425_; 
v___x_1425_ = lean_usize_dec_lt(v_i_1406_, v_sz_1405_);
if (v___x_1425_ == 0)
{
lean_object* v___x_1426_; 
v___x_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1426_, 0, v_b_1407_);
return v___x_1426_;
}
else
{
lean_object* v_a_1427_; lean_object* v_toCold_1428_; lean_object* v_options_1429_; lean_object* v_fst_1430_; lean_object* v_snd_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1451_; 
v_a_1427_ = lean_array_uget(v_as_1404_, v_i_1406_);
v_toCold_1428_ = lean_ctor_get(v___y_1417_, 0);
v_options_1429_ = lean_ctor_get(v_toCold_1428_, 2);
v_fst_1430_ = lean_ctor_get(v_a_1427_, 0);
v_snd_1431_ = lean_ctor_get(v_a_1427_, 1);
v_isSharedCheck_1451_ = !lean_is_exclusive(v_a_1427_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1433_ = v_a_1427_;
v_isShared_1434_ = v_isSharedCheck_1451_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_snd_1431_);
lean_inc(v_fst_1430_);
lean_dec(v_a_1427_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1451_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v_inheritedTraceOptions_1435_; uint8_t v_hasTrace_1436_; lean_object* v___x_1437_; 
v_inheritedTraceOptions_1435_ = lean_ctor_get(v_toCold_1428_, 11);
v_hasTrace_1436_ = lean_ctor_get_uint8(v_options_1429_, sizeof(void*)*1);
v___x_1437_ = lean_box(0);
if (v_hasTrace_1436_ == 0)
{
lean_del_object(v___x_1433_);
lean_dec(v_snd_1431_);
lean_dec(v_fst_1430_);
v_a_1421_ = v___x_1437_;
goto v___jp_1420_;
}
else
{
lean_object* v___x_1438_; lean_object* v___x_1439_; uint8_t v___x_1440_; 
v___x_1438_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9));
v___x_1439_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12);
v___x_1440_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1435_, v_options_1429_, v___x_1439_);
if (v___x_1440_ == 0)
{
lean_del_object(v___x_1433_);
lean_dec(v_snd_1431_);
lean_dec(v_fst_1430_);
v_a_1421_ = v___x_1437_;
goto v___jp_1420_;
}
else
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1444_; 
v___x_1441_ = l_Lean_MessageData_ofName(v_fst_1430_);
v___x_1442_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___closed__1);
if (v_isShared_1434_ == 0)
{
lean_ctor_set_tag(v___x_1433_, 7);
lean_ctor_set(v___x_1433_, 1, v___x_1442_);
lean_ctor_set(v___x_1433_, 0, v___x_1441_);
v___x_1444_ = v___x_1433_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v___x_1441_);
lean_ctor_set(v_reuseFailAlloc_1450_, 1, v___x_1442_);
v___x_1444_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1445_ = l_Nat_reprFast(v_snd_1431_);
v___x_1446_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1445_);
v___x_1447_ = l_Lean_MessageData_ofFormat(v___x_1446_);
v___x_1448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1444_);
lean_ctor_set(v___x_1448_, 1, v___x_1447_);
v___x_1449_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(v___x_1438_, v___x_1448_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_dec_ref_known(v___x_1449_, 1);
v_a_1421_ = v___x_1437_;
goto v___jp_1420_;
}
else
{
return v___x_1449_;
}
}
}
}
}
}
v___jp_1420_:
{
size_t v___x_1422_; size_t v___x_1423_; 
v___x_1422_ = ((size_t)1ULL);
v___x_1423_ = lean_usize_add(v_i_1406_, v___x_1422_);
v_i_1406_ = v___x_1423_;
v_b_1407_ = v_a_1421_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3___boxed(lean_object* v_as_1452_, lean_object* v_sz_1453_, lean_object* v_i_1454_, lean_object* v_b_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_){
_start:
{
size_t v_sz_boxed_1468_; size_t v_i_boxed_1469_; lean_object* v_res_1470_; 
v_sz_boxed_1468_ = lean_unbox_usize(v_sz_1453_);
lean_dec(v_sz_1453_);
v_i_boxed_1469_ = lean_unbox_usize(v_i_1454_);
lean_dec(v_i_1454_);
v_res_1470_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3(v_as_1452_, v_sz_boxed_1468_, v_i_boxed_1469_, v_b_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_);
lean_dec(v___y_1466_);
lean_dec_ref(v___y_1465_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec(v___y_1458_);
lean_dec(v___y_1457_);
lean_dec_ref(v___y_1456_);
lean_dec_ref(v_as_1452_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__8(lean_object* v_x_1471_, lean_object* v_x_1472_){
_start:
{
if (lean_obj_tag(v_x_1472_) == 0)
{
return v_x_1471_;
}
else
{
lean_object* v_key_1473_; lean_object* v_value_1474_; lean_object* v_tail_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v_key_1473_ = lean_ctor_get(v_x_1472_, 0);
v_value_1474_ = lean_ctor_get(v_x_1472_, 1);
v_tail_1475_ = lean_ctor_get(v_x_1472_, 2);
lean_inc(v_value_1474_);
lean_inc(v_key_1473_);
v___x_1476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1476_, 0, v_key_1473_);
lean_ctor_set(v___x_1476_, 1, v_value_1474_);
v___x_1477_ = lean_array_push(v_x_1471_, v___x_1476_);
v_x_1471_ = v___x_1477_;
v_x_1472_ = v_tail_1475_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__8___boxed(lean_object* v_x_1479_, lean_object* v_x_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__8(v_x_1479_, v_x_1480_);
lean_dec(v_x_1480_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__9(lean_object* v_as_1482_, size_t v_i_1483_, size_t v_stop_1484_, lean_object* v_b_1485_){
_start:
{
uint8_t v___x_1486_; 
v___x_1486_ = lean_usize_dec_eq(v_i_1483_, v_stop_1484_);
if (v___x_1486_ == 0)
{
lean_object* v___x_1487_; lean_object* v___x_1488_; size_t v___x_1489_; size_t v___x_1490_; 
v___x_1487_ = lean_array_uget_borrowed(v_as_1482_, v_i_1483_);
v___x_1488_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__8(v_b_1485_, v___x_1487_);
v___x_1489_ = ((size_t)1ULL);
v___x_1490_ = lean_usize_add(v_i_1483_, v___x_1489_);
v_i_1483_ = v___x_1490_;
v_b_1485_ = v___x_1488_;
goto _start;
}
else
{
return v_b_1485_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__9___boxed(lean_object* v_as_1492_, lean_object* v_i_1493_, lean_object* v_stop_1494_, lean_object* v_b_1495_){
_start:
{
size_t v_i_boxed_1496_; size_t v_stop_boxed_1497_; lean_object* v_res_1498_; 
v_i_boxed_1496_ = lean_unbox_usize(v_i_1493_);
lean_dec(v_i_1493_);
v_stop_boxed_1497_ = lean_unbox_usize(v_stop_1494_);
lean_dec(v_stop_1494_);
v_res_1498_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__9(v_as_1492_, v_i_boxed_1496_, v_stop_boxed_1497_, v_b_1495_);
lean_dec_ref(v_as_1492_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___redArg(lean_object* v_hi_1499_, lean_object* v_pivot_1500_, lean_object* v_as_1501_, lean_object* v_i_1502_, lean_object* v_k_1503_){
_start:
{
uint8_t v___x_1504_; 
v___x_1504_ = lean_nat_dec_lt(v_k_1503_, v_hi_1499_);
if (v___x_1504_ == 0)
{
lean_object* v___x_1505_; lean_object* v___x_1506_; 
lean_dec(v_k_1503_);
v___x_1505_ = lean_array_fswap(v_as_1501_, v_i_1502_, v_hi_1499_);
v___x_1506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1506_, 0, v_i_1502_);
lean_ctor_set(v___x_1506_, 1, v___x_1505_);
return v___x_1506_;
}
else
{
lean_object* v_snd_1507_; lean_object* v___x_1508_; lean_object* v_snd_1509_; uint8_t v___x_1510_; 
v_snd_1507_ = lean_ctor_get(v_pivot_1500_, 1);
v___x_1508_ = lean_array_fget_borrowed(v_as_1501_, v_k_1503_);
v_snd_1509_ = lean_ctor_get(v___x_1508_, 1);
v___x_1510_ = lean_nat_dec_lt(v_snd_1507_, v_snd_1509_);
if (v___x_1510_ == 0)
{
lean_object* v___x_1511_; lean_object* v___x_1512_; 
v___x_1511_ = lean_unsigned_to_nat(1u);
v___x_1512_ = lean_nat_add(v_k_1503_, v___x_1511_);
lean_dec(v_k_1503_);
v_k_1503_ = v___x_1512_;
goto _start;
}
else
{
lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1514_ = lean_array_fswap(v_as_1501_, v_i_1502_, v_k_1503_);
v___x_1515_ = lean_unsigned_to_nat(1u);
v___x_1516_ = lean_nat_add(v_i_1502_, v___x_1515_);
lean_dec(v_i_1502_);
v___x_1517_ = lean_nat_add(v_k_1503_, v___x_1515_);
lean_dec(v_k_1503_);
v_as_1501_ = v___x_1514_;
v_i_1502_ = v___x_1516_;
v_k_1503_ = v___x_1517_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___redArg___boxed(lean_object* v_hi_1519_, lean_object* v_pivot_1520_, lean_object* v_as_1521_, lean_object* v_i_1522_, lean_object* v_k_1523_){
_start:
{
lean_object* v_res_1524_; 
v_res_1524_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___redArg(v_hi_1519_, v_pivot_1520_, v_as_1521_, v_i_1522_, v_k_1523_);
lean_dec_ref(v_pivot_1520_);
lean_dec(v_hi_1519_);
return v_res_1524_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0(lean_object* v_a_1525_, lean_object* v_b_1526_){
_start:
{
lean_object* v_snd_1527_; lean_object* v_snd_1528_; uint8_t v___x_1529_; 
v_snd_1527_ = lean_ctor_get(v_b_1526_, 1);
v_snd_1528_ = lean_ctor_get(v_a_1525_, 1);
v___x_1529_ = lean_nat_dec_lt(v_snd_1527_, v_snd_1528_);
return v___x_1529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0___boxed(lean_object* v_a_1530_, lean_object* v_b_1531_){
_start:
{
uint8_t v_res_1532_; lean_object* v_r_1533_; 
v_res_1532_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0(v_a_1530_, v_b_1531_);
lean_dec_ref(v_b_1531_);
lean_dec_ref(v_a_1530_);
v_r_1533_ = lean_box(v_res_1532_);
return v_r_1533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg(lean_object* v_n_1534_, lean_object* v_as_1535_, lean_object* v_lo_1536_, lean_object* v_hi_1537_){
_start:
{
lean_object* v___y_1539_; uint8_t v___x_1549_; 
v___x_1549_ = lean_nat_dec_lt(v_lo_1536_, v_hi_1537_);
if (v___x_1549_ == 0)
{
lean_dec(v_lo_1536_);
return v_as_1535_;
}
else
{
lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v_mid_1552_; lean_object* v___y_1554_; lean_object* v___y_1560_; lean_object* v___x_1565_; lean_object* v___x_1566_; uint8_t v___x_1567_; 
v___x_1550_ = lean_nat_add(v_lo_1536_, v_hi_1537_);
v___x_1551_ = lean_unsigned_to_nat(1u);
v_mid_1552_ = lean_nat_shiftr(v___x_1550_, v___x_1551_);
lean_dec(v___x_1550_);
v___x_1565_ = lean_array_fget_borrowed(v_as_1535_, v_mid_1552_);
v___x_1566_ = lean_array_fget_borrowed(v_as_1535_, v_lo_1536_);
v___x_1567_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0(v___x_1565_, v___x_1566_);
if (v___x_1567_ == 0)
{
v___y_1560_ = v_as_1535_;
goto v___jp_1559_;
}
else
{
lean_object* v___x_1568_; 
v___x_1568_ = lean_array_fswap(v_as_1535_, v_lo_1536_, v_mid_1552_);
v___y_1560_ = v___x_1568_;
goto v___jp_1559_;
}
v___jp_1553_:
{
lean_object* v___x_1555_; lean_object* v___x_1556_; uint8_t v___x_1557_; 
v___x_1555_ = lean_array_fget_borrowed(v___y_1554_, v_mid_1552_);
v___x_1556_ = lean_array_fget_borrowed(v___y_1554_, v_hi_1537_);
v___x_1557_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0(v___x_1555_, v___x_1556_);
if (v___x_1557_ == 0)
{
lean_dec(v_mid_1552_);
v___y_1539_ = v___y_1554_;
goto v___jp_1538_;
}
else
{
lean_object* v___x_1558_; 
v___x_1558_ = lean_array_fswap(v___y_1554_, v_mid_1552_, v_hi_1537_);
lean_dec(v_mid_1552_);
v___y_1539_ = v___x_1558_;
goto v___jp_1538_;
}
}
v___jp_1559_:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; uint8_t v___x_1563_; 
v___x_1561_ = lean_array_fget_borrowed(v___y_1560_, v_hi_1537_);
v___x_1562_ = lean_array_fget_borrowed(v___y_1560_, v_lo_1536_);
v___x_1563_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___lam__0(v___x_1561_, v___x_1562_);
if (v___x_1563_ == 0)
{
v___y_1554_ = v___y_1560_;
goto v___jp_1553_;
}
else
{
lean_object* v___x_1564_; 
v___x_1564_ = lean_array_fswap(v___y_1560_, v_lo_1536_, v_hi_1537_);
v___y_1554_ = v___x_1564_;
goto v___jp_1553_;
}
}
}
v___jp_1538_:
{
lean_object* v_pivot_1540_; lean_object* v___x_1541_; lean_object* v_fst_1542_; lean_object* v_snd_1543_; uint8_t v___x_1544_; 
v_pivot_1540_ = lean_array_fget(v___y_1539_, v_hi_1537_);
lean_inc_n(v_lo_1536_, 2);
v___x_1541_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___redArg(v_hi_1537_, v_pivot_1540_, v___y_1539_, v_lo_1536_, v_lo_1536_);
lean_dec(v_pivot_1540_);
v_fst_1542_ = lean_ctor_get(v___x_1541_, 0);
lean_inc(v_fst_1542_);
v_snd_1543_ = lean_ctor_get(v___x_1541_, 1);
lean_inc(v_snd_1543_);
lean_dec_ref(v___x_1541_);
v___x_1544_ = lean_nat_dec_le(v_hi_1537_, v_fst_1542_);
if (v___x_1544_ == 0)
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1545_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg(v_n_1534_, v_snd_1543_, v_lo_1536_, v_fst_1542_);
v___x_1546_ = lean_unsigned_to_nat(1u);
v___x_1547_ = lean_nat_add(v_fst_1542_, v___x_1546_);
lean_dec(v_fst_1542_);
v_as_1535_ = v___x_1545_;
v_lo_1536_ = v___x_1547_;
goto _start;
}
else
{
lean_dec(v_fst_1542_);
lean_dec(v_lo_1536_);
return v_snd_1543_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg___boxed(lean_object* v_n_1569_, lean_object* v_as_1570_, lean_object* v_lo_1571_, lean_object* v_hi_1572_){
_start:
{
lean_object* v_res_1573_; 
v_res_1573_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg(v_n_1569_, v_as_1570_, v_lo_1571_, v_hi_1572_);
lean_dec(v_hi_1572_);
lean_dec(v_n_1569_);
return v_res_1573_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__2(void){
_start:
{
lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1578_ = lean_box(0);
v___x_1579_ = lean_unsigned_to_nat(16u);
v___x_1580_ = lean_mk_array(v___x_1579_, v___x_1578_);
return v___x_1580_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1581_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__2);
v___x_1582_ = lean_unsigned_to_nat(0u);
v___x_1583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
lean_ctor_set(v___x_1583_, 1, v___x_1581_);
return v___x_1583_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__4(void){
_start:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__3);
v___x_1585_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
lean_ctor_set(v___x_1585_, 1, v___x_1584_);
lean_ctor_set(v___x_1585_, 2, v___x_1584_);
lean_ctor_set(v___x_1585_, 3, v___x_1584_);
return v___x_1585_;
}
}
static double _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__5(void){
_start:
{
lean_object* v___x_1586_; double v___x_1587_; 
v___x_1586_ = lean_unsigned_to_nat(1000000000u);
v___x_1587_ = lean_float_of_nat(v___x_1586_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5(lean_object* v___x_1588_, lean_object* v___f_1589_, lean_object* v___f_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(v___x_1588_, v___y_1601_);
if (lean_obj_tag(v___x_1603_) == 0)
{
lean_object* v_config_1604_; lean_object* v_a_1605_; lean_object* v_maxSteps_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___f_1614_; lean_object* v___f_1615_; lean_object* v___x_1616_; uint8_t v___x_1617_; lean_object* v___x_1618_; lean_object* v___f_1619_; lean_object* v___x_1620_; lean_object* v_target_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v_config_1604_ = lean_ctor_get(v___y_1591_, 0);
v_a_1605_ = lean_ctor_get(v___x_1603_, 0);
lean_inc(v_a_1605_);
lean_dec_ref_known(v___x_1603_, 1);
v_maxSteps_1606_ = lean_ctor_get(v_config_1604_, 1);
v___x_1607_ = lean_unsigned_to_nat(2u);
lean_inc_n(v_maxSteps_1606_, 2);
v___x_1608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1608_, 0, v_maxSteps_1606_);
lean_ctor_set(v___x_1608_, 1, v___x_1607_);
v___x_1609_ = lean_unsigned_to_nat(255u);
v___x_1610_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__1));
v___x_1611_ = lean_unsigned_to_nat(0u);
v___x_1612_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__4);
v___x_1613_ = lean_st_mk_ref(v___x_1612_);
lean_inc(v___x_1613_);
v___f_1614_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__2___boxed), 15, 3);
lean_closure_set(v___f_1614_, 0, v___x_1613_);
lean_closure_set(v___f_1614_, 1, v_a_1605_);
lean_closure_set(v___f_1614_, 2, v___x_1610_);
v___f_1615_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__3___boxed), 13, 2);
lean_closure_set(v___f_1615_, 0, v___x_1609_);
lean_closure_set(v___f_1615_, 1, v___f_1614_);
v___x_1616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1616_, 0, v___f_1589_);
lean_ctor_set(v___x_1616_, 1, v___f_1615_);
v___x_1617_ = 1;
v___x_1618_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1618_, 0, v_maxSteps_1606_);
lean_ctor_set_uint8(v___x_1618_, sizeof(void*)*1, v___x_1617_);
v___f_1619_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__4___boxed), 16, 4);
lean_closure_set(v___f_1619_, 0, v___x_1618_);
lean_closure_set(v___f_1619_, 1, v___x_1616_);
lean_closure_set(v___f_1619_, 2, v___x_1608_);
lean_closure_set(v___f_1619_, 3, v___x_1611_);
v___x_1620_ = lean_st_ref_get(v___y_1592_);
v_target_1621_ = lean_ctor_get(v___x_1620_, 2);
lean_inc_ref(v_target_1621_);
lean_dec(v___x_1620_);
v___x_1622_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(v_target_1621_);
lean_dec_ref(v_target_1621_);
v___x_1623_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__2___redArg(v___x_1622_, v___f_1619_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___y_1626_; lean_object* v_toCold_1643_; lean_object* v_options_1644_; uint8_t v_hasTrace_1645_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1624_);
v_toCold_1643_ = lean_ctor_get(v___y_1600_, 0);
v_options_1644_ = lean_ctor_get(v_toCold_1643_, 2);
v_hasTrace_1645_ = lean_ctor_get_uint8(v_options_1644_, sizeof(void*)*1);
if (v_hasTrace_1645_ == 0)
{
lean_dec(v_a_1624_);
lean_dec(v___x_1613_);
lean_dec_ref(v___f_1590_);
return v___x_1623_;
}
else
{
lean_object* v_inheritedTraceOptions_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; uint8_t v___x_1649_; lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v___y_1653_; lean_object* v_a_1654_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v___y_1669_; lean_object* v_a_1670_; lean_object* v___y_1673_; lean_object* v___y_1674_; lean_object* v___y_1675_; lean_object* v_a_1676_; lean_object* v___y_1686_; lean_object* v___y_1687_; lean_object* v___y_1688_; lean_object* v_a_1689_; 
v_inheritedTraceOptions_1646_ = lean_ctor_get(v_toCold_1643_, 11);
v___x_1647_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__9));
v___x_1648_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg___closed__12);
v___x_1649_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1646_, v_options_1644_, v___x_1648_);
if (v___x_1649_ == 0)
{
lean_dec(v_a_1624_);
lean_dec(v___x_1613_);
lean_dec_ref(v___f_1590_);
return v___x_1623_;
}
else
{
lean_object* v___x_1691_; lean_object* v___y_1693_; size_t v___y_1694_; lean_object* v___y_1695_; size_t v___y_1696_; lean_object* v___y_1697_; lean_object* v___y_1725_; lean_object* v___y_1742_; lean_object* v___y_1743_; lean_object* v___y_1744_; lean_object* v___y_1745_; lean_object* v___y_1748_; lean_object* v___y_1749_; lean_object* v___y_1750_; lean_object* v___y_1751_; lean_object* v___y_1754_; lean_object* v_statistics_1760_; lean_object* v_size_1761_; lean_object* v_buckets_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; uint8_t v___x_1765_; 
lean_dec_ref_known(v___x_1623_, 1);
v___x_1691_ = lean_st_ref_get(v___x_1613_);
lean_dec(v___x_1613_);
v_statistics_1760_ = lean_ctor_get(v___x_1691_, 3);
lean_inc_ref(v_statistics_1760_);
lean_dec(v___x_1691_);
v_size_1761_ = lean_ctor_get(v_statistics_1760_, 0);
lean_inc(v_size_1761_);
v_buckets_1762_ = lean_ctor_get(v_statistics_1760_, 1);
lean_inc_ref(v_buckets_1762_);
lean_dec_ref(v_statistics_1760_);
v___x_1763_ = lean_mk_empty_array_with_capacity(v_size_1761_);
lean_dec(v_size_1761_);
v___x_1764_ = lean_array_get_size(v_buckets_1762_);
v___x_1765_ = lean_nat_dec_lt(v___x_1611_, v___x_1764_);
if (v___x_1765_ == 0)
{
lean_dec_ref(v_buckets_1762_);
v___y_1754_ = v___x_1763_;
goto v___jp_1753_;
}
else
{
size_t v___x_1766_; size_t v___x_1767_; lean_object* v___x_1768_; 
v___x_1766_ = ((size_t)0ULL);
v___x_1767_ = lean_usize_of_nat(v___x_1764_);
v___x_1768_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__9(v_buckets_1762_, v___x_1766_, v___x_1767_, v___x_1763_);
lean_dec_ref(v_buckets_1762_);
v___y_1754_ = v___x_1768_;
goto v___jp_1753_;
}
v___jp_1692_:
{
lean_object* v___x_1698_; lean_object* v_a_1699_; lean_object* v___x_1700_; uint8_t v___x_1701_; 
v___x_1698_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__4___redArg(v___y_1601_);
v_a_1699_ = lean_ctor_get(v___x_1698_, 0);
lean_inc(v_a_1699_);
lean_dec_ref(v___x_1698_);
v___x_1700_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1701_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5(v_options_1644_, v___x_1700_);
if (v___x_1701_ == 0)
{
lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1702_ = lean_io_mono_nanos_now();
v___x_1703_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3(v___y_1695_, v___y_1694_, v___y_1696_, v___y_1693_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_);
lean_dec_ref(v___y_1695_);
if (lean_obj_tag(v___x_1703_) == 0)
{
lean_dec_ref_known(v___x_1703_, 1);
v___y_1667_ = v___x_1702_;
v___y_1668_ = v_a_1699_;
v___y_1669_ = v___y_1697_;
v_a_1670_ = v___y_1693_;
goto v___jp_1666_;
}
else
{
if (lean_obj_tag(v___x_1703_) == 0)
{
lean_object* v_a_1704_; 
v_a_1704_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_a_1704_);
lean_dec_ref_known(v___x_1703_, 1);
v___y_1667_ = v___x_1702_;
v___y_1668_ = v_a_1699_;
v___y_1669_ = v___y_1697_;
v_a_1670_ = v_a_1704_;
goto v___jp_1666_;
}
else
{
lean_object* v_a_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1712_; 
v_a_1705_ = lean_ctor_get(v___x_1703_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1703_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1707_ = v___x_1703_;
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_a_1705_);
lean_dec(v___x_1703_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1710_; 
if (v_isShared_1708_ == 0)
{
lean_ctor_set_tag(v___x_1707_, 0);
v___x_1710_ = v___x_1707_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v_a_1705_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
v___y_1651_ = v___x_1702_;
v___y_1652_ = v_a_1699_;
v___y_1653_ = v___y_1697_;
v_a_1654_ = v___x_1710_;
goto v___jp_1650_;
}
}
}
}
}
else
{
lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1713_ = lean_io_get_num_heartbeats();
v___x_1714_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3(v___y_1695_, v___y_1694_, v___y_1696_, v___y_1693_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_);
lean_dec_ref(v___y_1695_);
if (lean_obj_tag(v___x_1714_) == 0)
{
lean_dec_ref_known(v___x_1714_, 1);
v___y_1686_ = v___x_1713_;
v___y_1687_ = v_a_1699_;
v___y_1688_ = v___y_1697_;
v_a_1689_ = v___y_1693_;
goto v___jp_1685_;
}
else
{
if (lean_obj_tag(v___x_1714_) == 0)
{
lean_object* v_a_1715_; 
v_a_1715_ = lean_ctor_get(v___x_1714_, 0);
lean_inc(v_a_1715_);
lean_dec_ref_known(v___x_1714_, 1);
v___y_1686_ = v___x_1713_;
v___y_1687_ = v_a_1699_;
v___y_1688_ = v___y_1697_;
v_a_1689_ = v_a_1715_;
goto v___jp_1685_;
}
else
{
lean_object* v_a_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1723_; 
v_a_1716_ = lean_ctor_get(v___x_1714_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1714_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1718_ = v___x_1714_;
v_isShared_1719_ = v_isSharedCheck_1723_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_a_1716_);
lean_dec(v___x_1714_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1723_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1721_; 
if (v_isShared_1719_ == 0)
{
lean_ctor_set_tag(v___x_1718_, 0);
v___x_1721_ = v___x_1718_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v_a_1716_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
v___y_1673_ = v___x_1713_;
v___y_1674_ = v_a_1699_;
v___y_1675_ = v___y_1697_;
v_a_1676_ = v___x_1721_;
goto v___jp_1672_;
}
}
}
}
}
}
v___jp_1724_:
{
lean_object* v___x_1726_; size_t v_sz_1727_; size_t v___x_1728_; lean_object* v___x_1729_; 
v___x_1726_ = lean_box(0);
v_sz_1727_ = lean_array_size(v___y_1725_);
v___x_1728_ = ((size_t)0ULL);
v___x_1729_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg___closed__1));
if (v___x_1649_ == 0)
{
lean_object* v___x_1730_; uint8_t v___x_1731_; 
v___x_1730_ = l_Lean_trace_profiler;
v___x_1731_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__5(v_options_1644_, v___x_1730_);
if (v___x_1731_ == 0)
{
lean_object* v___x_1732_; 
lean_dec_ref(v___f_1590_);
v___x_1732_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__3(v___y_1725_, v_sz_1727_, v___x_1728_, v___x_1726_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_);
lean_dec_ref(v___y_1725_);
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1739_; 
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1739_ == 0)
{
lean_object* v_unused_1740_; 
v_unused_1740_ = lean_ctor_get(v___x_1732_, 0);
lean_dec(v_unused_1740_);
v___x_1734_ = v___x_1732_;
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
else
{
lean_dec(v___x_1732_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1737_; 
if (v_isShared_1735_ == 0)
{
lean_ctor_set(v___x_1734_, 0, v_a_1624_);
v___x_1737_ = v___x_1734_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_a_1624_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
}
else
{
v___y_1626_ = v___x_1732_;
goto v___jp_1625_;
}
}
else
{
v___y_1693_ = v___x_1726_;
v___y_1694_ = v_sz_1727_;
v___y_1695_ = v___y_1725_;
v___y_1696_ = v___x_1728_;
v___y_1697_ = v___x_1729_;
goto v___jp_1692_;
}
}
else
{
v___y_1693_ = v___x_1726_;
v___y_1694_ = v_sz_1727_;
v___y_1695_ = v___y_1725_;
v___y_1696_ = v___x_1728_;
v___y_1697_ = v___x_1729_;
goto v___jp_1692_;
}
}
v___jp_1741_:
{
lean_object* v___x_1746_; 
v___x_1746_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg(v___y_1744_, v___y_1743_, v___y_1742_, v___y_1745_);
lean_dec(v___y_1745_);
lean_dec(v___y_1744_);
v___y_1725_ = v___x_1746_;
goto v___jp_1724_;
}
v___jp_1747_:
{
uint8_t v___x_1752_; 
v___x_1752_ = lean_nat_dec_le(v___y_1751_, v___y_1750_);
if (v___x_1752_ == 0)
{
lean_dec(v___y_1750_);
lean_inc(v___y_1751_);
v___y_1742_ = v___y_1751_;
v___y_1743_ = v___y_1748_;
v___y_1744_ = v___y_1749_;
v___y_1745_ = v___y_1751_;
goto v___jp_1741_;
}
else
{
v___y_1742_ = v___y_1751_;
v___y_1743_ = v___y_1748_;
v___y_1744_ = v___y_1749_;
v___y_1745_ = v___y_1750_;
goto v___jp_1741_;
}
}
v___jp_1753_:
{
lean_object* v___x_1755_; uint8_t v___x_1756_; 
v___x_1755_ = lean_array_get_size(v___y_1754_);
v___x_1756_ = lean_nat_dec_eq(v___x_1755_, v___x_1611_);
if (v___x_1756_ == 0)
{
lean_object* v___x_1757_; lean_object* v___x_1758_; uint8_t v___x_1759_; 
v___x_1757_ = lean_unsigned_to_nat(1u);
v___x_1758_ = lean_nat_sub(v___x_1755_, v___x_1757_);
v___x_1759_ = lean_nat_dec_le(v___x_1611_, v___x_1758_);
if (v___x_1759_ == 0)
{
lean_inc(v___x_1758_);
v___y_1748_ = v___y_1754_;
v___y_1749_ = v___x_1755_;
v___y_1750_ = v___x_1758_;
v___y_1751_ = v___x_1758_;
goto v___jp_1747_;
}
else
{
v___y_1748_ = v___y_1754_;
v___y_1749_ = v___x_1755_;
v___y_1750_ = v___x_1758_;
v___y_1751_ = v___x_1611_;
goto v___jp_1747_;
}
}
else
{
v___y_1725_ = v___y_1754_;
goto v___jp_1724_;
}
}
}
v___jp_1650_:
{
lean_object* v___x_1655_; double v___x_1656_; double v___x_1657_; double v___x_1658_; double v___x_1659_; double v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1655_ = lean_io_mono_nanos_now();
v___x_1656_ = lean_float_of_nat(v___y_1651_);
v___x_1657_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___closed__5);
v___x_1658_ = lean_float_div(v___x_1656_, v___x_1657_);
v___x_1659_ = lean_float_of_nat(v___x_1655_);
v___x_1660_ = lean_float_div(v___x_1659_, v___x_1657_);
v___x_1661_ = lean_box_float(v___x_1658_);
v___x_1662_ = lean_box_float(v___x_1660_);
v___x_1663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1661_);
lean_ctor_set(v___x_1663_, 1, v___x_1662_);
v___x_1664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1664_, 0, v_a_1654_);
lean_ctor_set(v___x_1664_, 1, v___x_1663_);
lean_inc_ref(v___y_1653_);
v___x_1665_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6(v___x_1647_, v___x_1617_, v___y_1653_, v_options_1644_, v___x_1649_, v___y_1652_, v___f_1590_, v___x_1664_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_);
v___y_1626_ = v___x_1665_;
goto v___jp_1625_;
}
v___jp_1666_:
{
lean_object* v___x_1671_; 
v___x_1671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1671_, 0, v_a_1670_);
v___y_1651_ = v___y_1667_;
v___y_1652_ = v___y_1668_;
v___y_1653_ = v___y_1669_;
v_a_1654_ = v___x_1671_;
goto v___jp_1650_;
}
v___jp_1672_:
{
lean_object* v___x_1677_; double v___x_1678_; double v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1677_ = lean_io_get_num_heartbeats();
v___x_1678_ = lean_float_of_nat(v___y_1673_);
v___x_1679_ = lean_float_of_nat(v___x_1677_);
v___x_1680_ = lean_box_float(v___x_1678_);
v___x_1681_ = lean_box_float(v___x_1679_);
v___x_1682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1680_);
lean_ctor_set(v___x_1682_, 1, v___x_1681_);
v___x_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1683_, 0, v_a_1676_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
lean_inc_ref(v___y_1675_);
v___x_1684_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6(v___x_1647_, v___x_1617_, v___y_1675_, v_options_1644_, v___x_1649_, v___y_1674_, v___f_1590_, v___x_1683_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_);
v___y_1626_ = v___x_1684_;
goto v___jp_1625_;
}
v___jp_1685_:
{
lean_object* v___x_1690_; 
v___x_1690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1690_, 0, v_a_1689_);
v___y_1673_ = v___y_1686_;
v___y_1674_ = v___y_1687_;
v___y_1675_ = v___y_1688_;
v_a_1676_ = v___x_1690_;
goto v___jp_1672_;
}
}
v___jp_1625_:
{
if (lean_obj_tag(v___y_1626_) == 0)
{
lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1633_; 
v_isSharedCheck_1633_ = !lean_is_exclusive(v___y_1626_);
if (v_isSharedCheck_1633_ == 0)
{
lean_object* v_unused_1634_; 
v_unused_1634_ = lean_ctor_get(v___y_1626_, 0);
lean_dec(v_unused_1634_);
v___x_1628_ = v___y_1626_;
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
else
{
lean_dec(v___y_1626_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1631_; 
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 0, v_a_1624_);
v___x_1631_ = v___x_1628_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_a_1624_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
}
else
{
lean_object* v_a_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1642_; 
lean_dec(v_a_1624_);
v_a_1635_ = lean_ctor_get(v___y_1626_, 0);
v_isSharedCheck_1642_ = !lean_is_exclusive(v___y_1626_);
if (v_isSharedCheck_1642_ == 0)
{
v___x_1637_ = v___y_1626_;
v_isShared_1638_ = v_isSharedCheck_1642_;
goto v_resetjp_1636_;
}
else
{
lean_inc(v_a_1635_);
lean_dec(v___y_1626_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1642_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v___x_1640_; 
if (v_isShared_1638_ == 0)
{
v___x_1640_ = v___x_1637_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v_a_1635_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
}
}
else
{
lean_dec(v___x_1613_);
lean_dec_ref(v___f_1590_);
return v___x_1623_;
}
}
else
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1776_; 
lean_dec_ref(v___f_1590_);
lean_dec_ref(v___f_1589_);
v_a_1769_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1771_ = v___x_1603_;
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___x_1603_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_a_1769_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___boxed(lean_object* v___x_1777_, lean_object* v___f_1778_, lean_object* v___f_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5(v___x_1777_, v___f_1778_, v___f_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
lean_dec(v___y_1790_);
lean_dec_ref(v___y_1789_);
lean_dec(v___y_1788_);
lean_dec_ref(v___y_1787_);
lean_dec(v___y_1786_);
lean_dec_ref(v___y_1785_);
lean_dec(v___y_1784_);
lean_dec_ref(v___y_1783_);
lean_dec(v___y_1782_);
lean_dec(v___y_1781_);
lean_dec_ref(v___y_1780_);
lean_dec_ref(v___x_1777_);
return v_res_1792_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4(void){
_start:
{
lean_object* v___f_1798_; lean_object* v___f_1799_; lean_object* v___x_1800_; lean_object* v___f_1801_; 
v___f_1798_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__0));
v___f_1799_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__1));
v___x_1800_ = l_Lean_Meta_Tactic_BVDecide_bvNormalizeExt;
v___f_1801_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___lam__5___boxed), 15, 3);
lean_closure_set(v___f_1801_, 0, v___x_1800_);
lean_closure_set(v___f_1801_, 1, v___f_1799_);
lean_closure_set(v___f_1801_, 2, v___f_1798_);
return v___f_1801_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__5(void){
_start:
{
lean_object* v___f_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___f_1802_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__4);
v___x_1803_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__3));
v___x_1804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1803_);
lean_ctor_set(v___x_1804_, 1, v___f_1802_);
return v___x_1804_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass(void){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass___closed__5);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0(lean_object* v_cls_1806_, lean_object* v_msg_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_){
_start:
{
lean_object* v___x_1820_; 
v___x_1820_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___redArg(v_cls_1806_, v_msg_1807_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_);
return v___x_1820_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0___boxed(lean_object* v_cls_1821_, lean_object* v_msg_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_){
_start:
{
lean_object* v_res_1835_; 
v_res_1835_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__0(v_cls_1821_, v_msg_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_);
lean_dec(v___y_1833_);
lean_dec_ref(v___y_1832_);
lean_dec(v___y_1831_);
lean_dec_ref(v___y_1830_);
lean_dec(v___y_1829_);
lean_dec_ref(v___y_1828_);
lean_dec(v___y_1827_);
lean_dec_ref(v___y_1826_);
lean_dec(v___y_1825_);
lean_dec(v___y_1824_);
lean_dec_ref(v___y_1823_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1(lean_object* v_upperBound_1836_, lean_object* v___x_1837_, lean_object* v___x_1838_, lean_object* v___x_1839_, lean_object* v___x_1840_, lean_object* v_inst_1841_, lean_object* v_R_1842_, lean_object* v_a_1843_, lean_object* v_b_1844_, lean_object* v_c_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_){
_start:
{
lean_object* v___x_1858_; 
v___x_1858_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___redArg(v_upperBound_1836_, v___x_1837_, v___x_1838_, v___x_1839_, v___x_1840_, v_a_1843_, v_b_1844_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_1859_ = _args[0];
lean_object* v___x_1860_ = _args[1];
lean_object* v___x_1861_ = _args[2];
lean_object* v___x_1862_ = _args[3];
lean_object* v___x_1863_ = _args[4];
lean_object* v_inst_1864_ = _args[5];
lean_object* v_R_1865_ = _args[6];
lean_object* v_a_1866_ = _args[7];
lean_object* v_b_1867_ = _args[8];
lean_object* v_c_1868_ = _args[9];
lean_object* v___y_1869_ = _args[10];
lean_object* v___y_1870_ = _args[11];
lean_object* v___y_1871_ = _args[12];
lean_object* v___y_1872_ = _args[13];
lean_object* v___y_1873_ = _args[14];
lean_object* v___y_1874_ = _args[15];
lean_object* v___y_1875_ = _args[16];
lean_object* v___y_1876_ = _args[17];
lean_object* v___y_1877_ = _args[18];
lean_object* v___y_1878_ = _args[19];
lean_object* v___y_1879_ = _args[20];
lean_object* v___y_1880_ = _args[21];
_start:
{
lean_object* v_res_1881_; 
v_res_1881_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__1(v_upperBound_1859_, v___x_1860_, v___x_1861_, v___x_1862_, v___x_1863_, v_inst_1864_, v_R_1865_, v_a_1866_, v_b_1867_, v_c_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
lean_dec(v___y_1879_);
lean_dec_ref(v___y_1878_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec(v___y_1871_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
lean_dec_ref(v___x_1862_);
lean_dec_ref(v___x_1860_);
lean_dec(v_upperBound_1859_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8(lean_object* v_00_u03b1_1882_, lean_object* v_x_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_){
_start:
{
lean_object* v___x_1896_; 
v___x_1896_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___redArg(v_x_1883_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8___boxed(lean_object* v_00_u03b1_1897_, lean_object* v_x_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_){
_start:
{
lean_object* v_res_1911_; 
v_res_1911_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__8(v_00_u03b1_1897_, v_x_1898_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_);
lean_dec(v___y_1909_);
lean_dec_ref(v___y_1908_);
lean_dec(v___y_1907_);
lean_dec_ref(v___y_1906_);
lean_dec(v___y_1905_);
lean_dec_ref(v___y_1904_);
lean_dec(v___y_1903_);
lean_dec_ref(v___y_1902_);
lean_dec(v___y_1901_);
lean_dec(v___y_1900_);
lean_dec_ref(v___y_1899_);
return v_res_1911_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7(lean_object* v_n_1912_, lean_object* v_as_1913_, lean_object* v_lo_1914_, lean_object* v_hi_1915_, lean_object* v_w_1916_, lean_object* v_hlo_1917_, lean_object* v_hhi_1918_){
_start:
{
lean_object* v___x_1919_; 
v___x_1919_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___redArg(v_n_1912_, v_as_1913_, v_lo_1914_, v_hi_1915_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7___boxed(lean_object* v_n_1920_, lean_object* v_as_1921_, lean_object* v_lo_1922_, lean_object* v_hi_1923_, lean_object* v_w_1924_, lean_object* v_hlo_1925_, lean_object* v_hhi_1926_){
_start:
{
lean_object* v_res_1927_; 
v_res_1927_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7(v_n_1920_, v_as_1921_, v_lo_1922_, v_hi_1923_, v_w_1924_, v_hlo_1925_, v_hhi_1926_);
lean_dec(v_hi_1923_);
lean_dec(v_n_1920_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7(lean_object* v_oldTraces_1928_, lean_object* v_data_1929_, lean_object* v_ref_1930_, lean_object* v_msg_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_){
_start:
{
lean_object* v___x_1944_; 
v___x_1944_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___redArg(v_oldTraces_1928_, v_data_1929_, v_ref_1930_, v_msg_1931_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_);
return v___x_1944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7___boxed(lean_object* v_oldTraces_1945_, lean_object* v_data_1946_, lean_object* v_ref_1947_, lean_object* v_msg_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_){
_start:
{
lean_object* v_res_1961_; 
v_res_1961_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__6_spec__7(v_oldTraces_1945_, v_data_1946_, v_ref_1947_, v_msg_1948_, v___y_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1957_);
lean_dec_ref(v___y_1956_);
lean_dec(v___y_1955_);
lean_dec_ref(v___y_1954_);
lean_dec(v___y_1953_);
lean_dec_ref(v___y_1952_);
lean_dec(v___y_1951_);
lean_dec(v___y_1950_);
lean_dec_ref(v___y_1949_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12(lean_object* v_n_1962_, lean_object* v_lo_1963_, lean_object* v_hi_1964_, lean_object* v_hhi_1965_, lean_object* v_pivot_1966_, lean_object* v_as_1967_, lean_object* v_i_1968_, lean_object* v_k_1969_, lean_object* v_ilo_1970_, lean_object* v_ik_1971_, lean_object* v_w_1972_){
_start:
{
lean_object* v___x_1973_; 
v___x_1973_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___redArg(v_hi_1964_, v_pivot_1966_, v_as_1967_, v_i_1968_, v_k_1969_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12___boxed(lean_object* v_n_1974_, lean_object* v_lo_1975_, lean_object* v_hi_1976_, lean_object* v_hhi_1977_, lean_object* v_pivot_1978_, lean_object* v_as_1979_, lean_object* v_i_1980_, lean_object* v_k_1981_, lean_object* v_ilo_1982_, lean_object* v_ik_1983_, lean_object* v_w_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass_spec__7_spec__12(v_n_1974_, v_lo_1975_, v_hi_1976_, v_hhi_1977_, v_pivot_1978_, v_as_1979_, v_i_1980_, v_k_1981_, v_ilo_1982_, v_ik_1983_, v_w_1984_);
lean_dec_ref(v_pivot_1978_);
lean_dec(v_hi_1976_);
lean_dec(v_lo_1975_);
lean_dec(v_n_1974_);
return v_res_1985_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass = _init_l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_Normalize_rewriteRulesPass);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize_Rewrite(builtin);
}
#ifdef __cplusplus
}
#endif

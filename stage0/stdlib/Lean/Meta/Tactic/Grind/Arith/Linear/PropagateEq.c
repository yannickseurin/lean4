// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Linear.PropagateEq
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Linear.LinearM import Lean.Meta.Tactic.Grind.Arith.CommRing.Reify import Lean.Meta.Tactic.Grind.Arith.Linear.Den import Lean.Meta.Tactic.Grind.Arith.Linear.Reify import Lean.Meta.Tactic.Grind.Arith.Linear.IneqCnstr import Lean.Meta.Tactic.Grind.Arith.Linear.Proof
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
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Grind_Linarith_Poly_coeff(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArray_default___redArg();
lean_object* l_Lean_Meta_Grind_Arith_Linear_inconsistent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_set___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Linear_linearExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_hasNoNatZeroDivisors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Grind_Linarith_Poly_mul(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Lean_Grind_Linarith_Poly_combine(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_getVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_mkIntLit(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Grind_Linarith_Poly_updateOccs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqLBool_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_setInconsistent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Grind_Linarith_Poly_findVarToSubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_reify_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_withRingM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Grind_CommRing_Expr_toPoly(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_RingEqCnstr_cleanupDenominators(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Grind_CommRing_Poly_toIntModuleExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_reify_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Grind_Linarith_Expr_norm(lean_object*);
uint8_t l_Lean_Grind_Linarith_instBEqPoly_beq(lean_object*, lean_object*);
lean_object* l_Lean_Grind_CommRing_Poly_mulConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_isCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_RingDiseqCnstr_cleanupDenominators(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_inSameNatStruct_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_normNatModuleDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_ofNatModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Lean_Grind_Linarith_Poly_pickVarToElim_x3f(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_instInhabitedGoalM___redArg();
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffs(lean_object*);
lean_object* l_Lean_Grind_Linarith_Poly_div(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedAdd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqv___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_propagateImpEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "linarith"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "subst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__2_value),LEAN_SCALAR_PTR_LITERAL(215, 101, 68, 215, 12, 32, 3, 85)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__3_value),LEAN_SCALAR_PTR_LITERAL(205, 1, 87, 68, 102, 24, 231, 71)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 135, 131, 0, 162, 156, 15, 149)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__3_value),LEAN_SCALAR_PTR_LITERAL(206, 233, 164, 186, 216, 210, 242, 163)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_inSameStruct_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_inSameStruct_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_inSameStruct_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_inSameStruct_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleEq_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleEq_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm_spec__1(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lean.Meta.Tactic.Grind.Arith.Linear.PropagateEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 101, .m_capacity = 101, .m_length = 100, .m_data = "_private.Lean.Meta.Tactic.Grind.Arith.Linear.PropagateEq.0.Lean.Meta.Grind.Arith.Linear.EqCnstr.norm"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "`grind linarith` internal error, structure is not an ordered int module"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "`grind linarith` internal error, structure is not an ordered module"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__1;
static const lean_array_object l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateUppers___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateUppers___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateUppers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateUppers___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ignored"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 135, 131, 0, 162, 156, 15, 149)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 36, 82, 219, 127, 154, 201, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(193, 67, 1, 106, 4, 67, 211, 43)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applySubsts_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applySubsts_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unsat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 135, 131, 0, 162, 156, 15, 149)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 205, 246, 167, 183, 132, 208, 174)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "store"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 135, 131, 0, 162, 156, 15, 149)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 36, 82, 219, 127, 154, 201, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__3_value),LEAN_SCALAR_PTR_LITERAL(108, 151, 24, 43, 11, 190, 144, 191)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__5;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 135, 131, 0, 162, 156, 15, 149)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 36, 82, 219, 127, 154, 201, 164)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__1;
static const lean_array_object l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccsAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccsAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_isImpliedEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_isImpliedEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_ensureLeadCoeffPos___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_ensureLeadCoeffPos___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_ensureLeadCoeffPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_ensureLeadCoeffPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ">> "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 135, 131, 0, 162, 156, 15, 149)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__2_value),LEAN_SCALAR_PTR_LITERAL(111, 219, 223, 129, 16, 82, 214, 104)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__1_value),LEAN_SCALAR_PTR_LITERAL(96, 234, 54, 186, 23, 232, 175, 83)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleEq_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleEq_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_processNewEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_processNewEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_processNewDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_processNewDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(1u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0(lean_object* v_k_3_, lean_object* v_x_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; uint8_t v___x_19_; 
v___x_17_ = l_Lean_instInhabitedExpr;
v___x_18_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0___closed__0);
v___x_19_ = lean_int_dec_eq(v_k_3_, v___x_18_);
if (v___x_19_ == 0)
{
lean_object* v___x_20_; 
v___x_20_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_);
if (lean_obj_tag(v___x_20_) == 0)
{
lean_object* v_a_21_; lean_object* v___x_22_; 
v_a_21_ = lean_ctor_get(v___x_20_, 0);
lean_inc(v_a_21_);
lean_dec_ref_known(v___x_20_, 1);
v___x_22_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_);
if (lean_obj_tag(v___x_22_) == 0)
{
lean_object* v_a_23_; lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_40_; 
v_a_23_ = lean_ctor_get(v___x_22_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_22_);
if (v_isSharedCheck_40_ == 0)
{
v___x_25_ = v___x_22_;
v_isShared_26_ = v_isSharedCheck_40_;
goto v_resetjp_24_;
}
else
{
lean_inc(v_a_23_);
lean_dec(v___x_22_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_40_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
lean_object* v_vars_27_; lean_object* v_zsmulFn_28_; lean_object* v_size_29_; lean_object* v___x_30_; lean_object* v___y_32_; uint8_t v___x_37_; 
v_vars_27_ = lean_ctor_get(v_a_23_, 30);
lean_inc_ref(v_vars_27_);
lean_dec(v_a_23_);
v_zsmulFn_28_ = lean_ctor_get(v_a_21_, 23);
lean_inc_ref(v_zsmulFn_28_);
lean_dec(v_a_21_);
v_size_29_ = lean_ctor_get(v_vars_27_, 2);
v___x_30_ = l_Lean_mkIntLit(v_k_3_);
v___x_37_ = lean_nat_dec_lt(v_x_4_, v_size_29_);
if (v___x_37_ == 0)
{
lean_object* v___x_38_; 
lean_dec_ref(v_vars_27_);
v___x_38_ = l_outOfBounds___redArg(v___x_17_);
v___y_32_ = v___x_38_;
goto v___jp_31_;
}
else
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_PersistentArray_get_x21___redArg(v___x_17_, v_vars_27_, v_x_4_);
lean_dec_ref(v_vars_27_);
v___y_32_ = v___x_39_;
goto v___jp_31_;
}
v___jp_31_:
{
lean_object* v___x_33_; lean_object* v___x_35_; 
v___x_33_ = l_Lean_mkAppB(v_zsmulFn_28_, v___x_30_, v___y_32_);
if (v_isShared_26_ == 0)
{
lean_ctor_set(v___x_25_, 0, v___x_33_);
v___x_35_ = v___x_25_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___x_33_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
}
else
{
lean_object* v_a_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_48_; 
lean_dec(v_a_21_);
v_a_41_ = lean_ctor_get(v___x_22_, 0);
v_isSharedCheck_48_ = !lean_is_exclusive(v___x_22_);
if (v_isSharedCheck_48_ == 0)
{
v___x_43_ = v___x_22_;
v_isShared_44_ = v_isSharedCheck_48_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_a_41_);
lean_dec(v___x_22_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_48_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
lean_object* v___x_46_; 
if (v_isShared_44_ == 0)
{
v___x_46_ = v___x_43_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v_a_41_);
v___x_46_ = v_reuseFailAlloc_47_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
return v___x_46_;
}
}
}
}
else
{
lean_object* v_a_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_56_; 
v_a_49_ = lean_ctor_get(v___x_20_, 0);
v_isSharedCheck_56_ = !lean_is_exclusive(v___x_20_);
if (v_isSharedCheck_56_ == 0)
{
v___x_51_ = v___x_20_;
v_isShared_52_ = v_isSharedCheck_56_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_a_49_);
lean_dec(v___x_20_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_56_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v___x_54_; 
if (v_isShared_52_ == 0)
{
v___x_54_ = v___x_51_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v_a_49_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
}
else
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_);
if (lean_obj_tag(v___x_57_) == 0)
{
lean_object* v_a_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_73_; 
v_a_58_ = lean_ctor_get(v___x_57_, 0);
v_isSharedCheck_73_ = !lean_is_exclusive(v___x_57_);
if (v_isSharedCheck_73_ == 0)
{
v___x_60_ = v___x_57_;
v_isShared_61_ = v_isSharedCheck_73_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_a_58_);
lean_dec(v___x_57_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_73_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v_vars_62_; lean_object* v_size_63_; uint8_t v___x_64_; 
v_vars_62_ = lean_ctor_get(v_a_58_, 30);
lean_inc_ref(v_vars_62_);
lean_dec(v_a_58_);
v_size_63_ = lean_ctor_get(v_vars_62_, 2);
v___x_64_ = lean_nat_dec_lt(v_x_4_, v_size_63_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; lean_object* v___x_67_; 
lean_dec_ref(v_vars_62_);
v___x_65_ = l_outOfBounds___redArg(v___x_17_);
if (v_isShared_61_ == 0)
{
lean_ctor_set(v___x_60_, 0, v___x_65_);
v___x_67_ = v___x_60_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v___x_65_);
v___x_67_ = v_reuseFailAlloc_68_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
return v___x_67_;
}
}
else
{
lean_object* v___x_69_; lean_object* v___x_71_; 
v___x_69_ = l_Lean_PersistentArray_get_x21___redArg(v___x_17_, v_vars_62_, v_x_4_);
lean_dec_ref(v_vars_62_);
if (v_isShared_61_ == 0)
{
lean_ctor_set(v___x_60_, 0, v___x_69_);
v___x_71_ = v___x_60_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v___x_69_);
v___x_71_ = v_reuseFailAlloc_72_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
return v___x_71_;
}
}
}
}
else
{
lean_object* v_a_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_81_; 
v_a_74_ = lean_ctor_get(v___x_57_, 0);
v_isSharedCheck_81_ = !lean_is_exclusive(v___x_57_);
if (v_isSharedCheck_81_ == 0)
{
v___x_76_ = v___x_57_;
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_a_74_);
lean_dec(v___x_57_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_79_; 
if (v_isShared_77_ == 0)
{
v___x_79_ = v___x_76_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_a_74_);
v___x_79_ = v_reuseFailAlloc_80_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
return v___x_79_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0___boxed(lean_object* v_k_82_, lean_object* v_x_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0(v_k_82_, v_x_83_, v___y_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_);
lean_dec(v___y_94_);
lean_dec_ref(v___y_93_);
lean_dec(v___y_92_);
lean_dec_ref(v___y_91_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
lean_dec(v___y_86_);
lean_dec(v___y_85_);
lean_dec(v___y_84_);
lean_dec(v_x_83_);
lean_dec(v_k_82_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__1(lean_object* v_p_97_, lean_object* v_acc_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_){
_start:
{
if (lean_obj_tag(v_p_97_) == 0)
{
lean_object* v___x_111_; 
v___x_111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_111_, 0, v_acc_98_);
return v___x_111_;
}
else
{
lean_object* v_k_112_; lean_object* v_v_113_; lean_object* v_p_114_; lean_object* v___x_115_; 
v_k_112_ = lean_ctor_get(v_p_97_, 0);
v_v_113_ = lean_ctor_get(v_p_97_, 1);
v_p_114_ = lean_ctor_get(v_p_97_, 2);
v___x_115_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_);
if (lean_obj_tag(v___x_115_) == 0)
{
lean_object* v_a_116_; lean_object* v___x_117_; 
v_a_116_ = lean_ctor_get(v___x_115_, 0);
lean_inc(v_a_116_);
lean_dec_ref_known(v___x_115_, 1);
v___x_117_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0(v_k_112_, v_v_113_, v___y_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_object* v_a_118_; lean_object* v_addFn_119_; lean_object* v___x_120_; 
v_a_118_ = lean_ctor_get(v___x_117_, 0);
lean_inc(v_a_118_);
lean_dec_ref_known(v___x_117_, 1);
v_addFn_119_ = lean_ctor_get(v_a_116_, 22);
lean_inc_ref(v_addFn_119_);
lean_dec(v_a_116_);
v___x_120_ = l_Lean_mkAppB(v_addFn_119_, v_acc_98_, v_a_118_);
v_p_97_ = v_p_114_;
v_acc_98_ = v___x_120_;
goto _start;
}
else
{
lean_dec(v_a_116_);
lean_dec_ref(v_acc_98_);
return v___x_117_;
}
}
else
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
lean_dec_ref(v_acc_98_);
v_a_122_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v___x_115_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_115_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_122_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__1___boxed(lean_object* v_p_130_, lean_object* v_acc_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__1(v_p_130_, v_acc_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec(v___y_134_);
lean_dec(v___y_133_);
lean_dec(v___y_132_);
lean_dec(v_p_130_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0(lean_object* v_p_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
if (lean_obj_tag(v_p_145_) == 0)
{
lean_object* v___x_158_; 
v___x_158_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
if (lean_obj_tag(v___x_158_) == 0)
{
lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_167_; 
v_a_159_ = lean_ctor_get(v___x_158_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_158_);
if (v_isSharedCheck_167_ == 0)
{
v___x_161_ = v___x_158_;
v_isShared_162_ = v_isSharedCheck_167_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_dec(v___x_158_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_167_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v_zero_163_; lean_object* v___x_165_; 
v_zero_163_ = lean_ctor_get(v_a_159_, 17);
lean_inc_ref(v_zero_163_);
lean_dec(v_a_159_);
if (v_isShared_162_ == 0)
{
lean_ctor_set(v___x_161_, 0, v_zero_163_);
v___x_165_ = v___x_161_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_zero_163_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
else
{
lean_object* v_a_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_175_; 
v_a_168_ = lean_ctor_get(v___x_158_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v___x_158_);
if (v_isSharedCheck_175_ == 0)
{
v___x_170_ = v___x_158_;
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_a_168_);
lean_dec(v___x_158_);
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
lean_object* v_k_176_; lean_object* v_v_177_; lean_object* v_p_178_; lean_object* v___x_179_; 
v_k_176_ = lean_ctor_get(v_p_145_, 0);
v_v_177_ = lean_ctor_get(v_p_145_, 1);
v_p_178_ = lean_ctor_get(v_p_145_, 2);
v___x_179_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0(v_k_176_, v_v_177_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
if (lean_obj_tag(v___x_179_) == 0)
{
lean_object* v_a_180_; lean_object* v___x_181_; 
v_a_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc(v_a_180_);
lean_dec_ref_known(v___x_179_, 1);
v___x_181_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__1(v_p_178_, v_a_180_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
return v___x_181_;
}
else
{
return v___x_179_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0___boxed(lean_object* v_p_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0(v_p_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_, v___y_193_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
lean_dec(v___y_191_);
lean_dec_ref(v___y_190_);
lean_dec(v___y_189_);
lean_dec_ref(v___y_188_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
lean_dec(v___y_185_);
lean_dec(v___y_184_);
lean_dec(v___y_183_);
lean_dec(v_p_182_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3(lean_object* v_a_199_, lean_object* v_b_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_201_, v___y_202_, v___y_203_, v___y_204_, v___y_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_229_; 
v_a_214_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_229_ == 0)
{
v___x_216_ = v___x_213_;
v_isShared_217_ = v_isSharedCheck_229_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_213_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_229_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v_type_218_; lean_object* v_u_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_227_; 
v_type_218_ = lean_ctor_get(v_a_214_, 2);
lean_inc_ref(v_type_218_);
v_u_219_ = lean_ctor_get(v_a_214_, 3);
lean_inc(v_u_219_);
lean_dec(v_a_214_);
v___x_220_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3___closed__1));
v___x_221_ = l_Lean_Level_succ___override(v_u_219_);
v___x_222_ = lean_box(0);
v___x_223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_221_);
lean_ctor_set(v___x_223_, 1, v___x_222_);
v___x_224_ = l_Lean_mkConst(v___x_220_, v___x_223_);
v___x_225_ = l_Lean_mkApp3(v___x_224_, v_type_218_, v_a_199_, v_b_200_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 0, v___x_225_);
v___x_227_ = v___x_216_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v___x_225_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
else
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_237_; 
lean_dec_ref(v_b_200_);
lean_dec_ref(v_a_199_);
v_a_230_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_237_ == 0)
{
v___x_232_ = v___x_213_;
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_213_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_230_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3___boxed(lean_object* v_a_238_, lean_object* v_b_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3(v_a_238_, v_b_239_, v___y_240_, v___y_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
lean_dec(v___y_248_);
lean_dec_ref(v___y_247_);
lean_dec(v___y_246_);
lean_dec_ref(v___y_245_);
lean_dec(v___y_244_);
lean_dec_ref(v___y_243_);
lean_dec(v___y_242_);
lean_dec(v___y_241_);
lean_dec(v___y_240_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1(lean_object* v_c_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_){
_start:
{
lean_object* v_p_266_; lean_object* v___x_267_; 
v_p_266_ = lean_ctor_get(v_c_253_, 0);
v___x_267_ = l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0(v_p_266_, v___y_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; lean_object* v___x_269_; 
v_a_268_ = lean_ctor_get(v___x_267_, 0);
lean_inc(v_a_268_);
lean_dec_ref_known(v___x_267_, 1);
v___x_269_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
if (lean_obj_tag(v___x_269_) == 0)
{
lean_object* v_a_270_; lean_object* v_ofNatZero_271_; lean_object* v___x_272_; 
v_a_270_ = lean_ctor_get(v___x_269_, 0);
lean_inc(v_a_270_);
lean_dec_ref_known(v___x_269_, 1);
v_ofNatZero_271_ = lean_ctor_get(v_a_270_, 18);
lean_inc_ref(v_ofNatZero_271_);
lean_dec(v_a_270_);
v___x_272_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3(v_a_268_, v_ofNatZero_271_, v___y_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
return v___x_272_;
}
else
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
lean_dec(v_a_268_);
v_a_273_ = lean_ctor_get(v___x_269_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_269_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_269_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_269_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_276_ == 0)
{
v___x_278_ = v___x_275_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_273_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
else
{
return v___x_267_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1___boxed(lean_object* v_c_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1(v_c_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_);
lean_dec(v___y_292_);
lean_dec_ref(v___y_291_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
lean_dec(v___y_284_);
lean_dec(v___y_283_);
lean_dec(v___y_282_);
lean_dec_ref(v_c_281_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2_spec__5(lean_object* v_msgData_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
lean_object* v___x_301_; lean_object* v_env_302_; lean_object* v___x_303_; lean_object* v_toCold_304_; lean_object* v_mctx_305_; lean_object* v_lctx_306_; lean_object* v_options_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_301_ = lean_st_ref_get(v___y_299_);
v_env_302_ = lean_ctor_get(v___x_301_, 0);
lean_inc_ref(v_env_302_);
lean_dec(v___x_301_);
v___x_303_ = lean_st_ref_get(v___y_297_);
v_toCold_304_ = lean_ctor_get(v___y_298_, 0);
v_mctx_305_ = lean_ctor_get(v___x_303_, 0);
lean_inc_ref(v_mctx_305_);
lean_dec(v___x_303_);
v_lctx_306_ = lean_ctor_get(v___y_296_, 2);
v_options_307_ = lean_ctor_get(v_toCold_304_, 2);
lean_inc_ref(v_options_307_);
lean_inc_ref(v_lctx_306_);
v___x_308_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_308_, 0, v_env_302_);
lean_ctor_set(v___x_308_, 1, v_mctx_305_);
lean_ctor_set(v___x_308_, 2, v_lctx_306_);
lean_ctor_set(v___x_308_, 3, v_options_307_);
v___x_309_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
lean_ctor_set(v___x_309_, 1, v_msgData_295_);
v___x_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_310_, 0, v___x_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2_spec__5___boxed(lean_object* v_msgData_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2_spec__5(v_msgData_311_, v___y_312_, v___y_313_, v___y_314_, v___y_315_);
lean_dec(v___y_315_);
lean_dec_ref(v___y_314_);
lean_dec(v___y_313_);
lean_dec_ref(v___y_312_);
return v_res_317_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_318_; double v___x_319_; 
v___x_318_ = lean_unsigned_to_nat(0u);
v___x_319_ = lean_float_of_nat(v___x_318_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(lean_object* v_cls_323_, lean_object* v_msg_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
lean_object* v_ref_330_; lean_object* v___x_331_; lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_376_; 
v_ref_330_ = lean_ctor_get(v___y_327_, 2);
v___x_331_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2_spec__5(v_msg_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
v_a_332_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_376_ == 0)
{
v___x_334_ = v___x_331_;
v_isShared_335_ = v_isSharedCheck_376_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_331_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_376_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v_traceState_337_; lean_object* v_env_338_; lean_object* v_nextMacroScope_339_; lean_object* v_ngen_340_; lean_object* v_auxDeclNGen_341_; lean_object* v_cache_342_; lean_object* v_messages_343_; lean_object* v_infoState_344_; lean_object* v_snapshotTasks_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_375_; 
v___x_336_ = lean_st_ref_take(v___y_328_);
v_traceState_337_ = lean_ctor_get(v___x_336_, 4);
v_env_338_ = lean_ctor_get(v___x_336_, 0);
v_nextMacroScope_339_ = lean_ctor_get(v___x_336_, 1);
v_ngen_340_ = lean_ctor_get(v___x_336_, 2);
v_auxDeclNGen_341_ = lean_ctor_get(v___x_336_, 3);
v_cache_342_ = lean_ctor_get(v___x_336_, 5);
v_messages_343_ = lean_ctor_get(v___x_336_, 6);
v_infoState_344_ = lean_ctor_get(v___x_336_, 7);
v_snapshotTasks_345_ = lean_ctor_get(v___x_336_, 8);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_375_ == 0)
{
v___x_347_ = v___x_336_;
v_isShared_348_ = v_isSharedCheck_375_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_snapshotTasks_345_);
lean_inc(v_infoState_344_);
lean_inc(v_messages_343_);
lean_inc(v_cache_342_);
lean_inc(v_traceState_337_);
lean_inc(v_auxDeclNGen_341_);
lean_inc(v_ngen_340_);
lean_inc(v_nextMacroScope_339_);
lean_inc(v_env_338_);
lean_dec(v___x_336_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_375_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
uint64_t v_tid_349_; lean_object* v_traces_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_374_; 
v_tid_349_ = lean_ctor_get_uint64(v_traceState_337_, sizeof(void*)*1);
v_traces_350_ = lean_ctor_get(v_traceState_337_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v_traceState_337_);
if (v_isSharedCheck_374_ == 0)
{
v___x_352_ = v_traceState_337_;
v_isShared_353_ = v_isSharedCheck_374_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_traces_350_);
lean_dec(v_traceState_337_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_374_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_354_; lean_object* v___x_355_; double v___x_356_; uint8_t v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_365_; 
v___x_354_ = lean_box(0);
v___x_355_ = lean_box(0);
v___x_356_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___closed__0);
v___x_357_ = 0;
v___x_358_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___closed__1));
v___x_359_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_359_, 0, v_cls_323_);
lean_ctor_set(v___x_359_, 1, v___x_355_);
lean_ctor_set(v___x_359_, 2, v___x_358_);
lean_ctor_set_float(v___x_359_, sizeof(void*)*3, v___x_356_);
lean_ctor_set_float(v___x_359_, sizeof(void*)*3 + 8, v___x_356_);
lean_ctor_set_uint8(v___x_359_, sizeof(void*)*3 + 16, v___x_357_);
v___x_360_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___closed__2));
v___x_361_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_361_, 0, v___x_359_);
lean_ctor_set(v___x_361_, 1, v_a_332_);
lean_ctor_set(v___x_361_, 2, v___x_360_);
lean_inc(v_ref_330_);
v___x_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_362_, 0, v_ref_330_);
lean_ctor_set(v___x_362_, 1, v___x_361_);
v___x_363_ = l_Lean_PersistentArray_push___redArg(v_traces_350_, v___x_362_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_363_);
v___x_365_ = v___x_352_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_363_);
lean_ctor_set_uint64(v_reuseFailAlloc_373_, sizeof(void*)*1, v_tid_349_);
v___x_365_ = v_reuseFailAlloc_373_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
lean_object* v___x_367_; 
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 4, v___x_365_);
v___x_367_ = v___x_347_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v_env_338_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v_nextMacroScope_339_);
lean_ctor_set(v_reuseFailAlloc_372_, 2, v_ngen_340_);
lean_ctor_set(v_reuseFailAlloc_372_, 3, v_auxDeclNGen_341_);
lean_ctor_set(v_reuseFailAlloc_372_, 4, v___x_365_);
lean_ctor_set(v_reuseFailAlloc_372_, 5, v_cache_342_);
lean_ctor_set(v_reuseFailAlloc_372_, 6, v_messages_343_);
lean_ctor_set(v_reuseFailAlloc_372_, 7, v_infoState_344_);
lean_ctor_set(v_reuseFailAlloc_372_, 8, v_snapshotTasks_345_);
v___x_367_ = v_reuseFailAlloc_372_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
lean_object* v___x_368_; lean_object* v___x_370_; 
v___x_368_ = lean_st_ref_put(v___y_328_, v___x_367_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 0, v___x_354_);
v___x_370_ = v___x_334_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v___x_354_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg___boxed(lean_object* v_cls_377_, lean_object* v_msg_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v_cls_377_, v_msg_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
return v_res_384_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__7(void){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_397_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__4));
v___x_398_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__6));
v___x_399_ = l_Lean_Name_append(v___x_398_, v___x_397_);
return v___x_399_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__8));
v___x_402_ = l_Lean_stringToMessageData(v___x_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar(lean_object* v_p_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Lean_Grind_Linarith_Poly_findVarToSubst(v_p_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_540_; 
v_a_417_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_540_ == 0)
{
v___x_419_ = v___x_416_;
v_isShared_420_ = v_isSharedCheck_540_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_416_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_540_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
if (lean_obj_tag(v_a_417_) == 1)
{
lean_object* v_val_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_535_; 
v_val_421_ = lean_ctor_get(v_a_417_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v_a_417_);
if (v_isSharedCheck_535_ == 0)
{
v___x_423_ = v_a_417_;
v_isShared_424_ = v_isSharedCheck_535_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_val_421_);
lean_dec(v_a_417_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_535_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v_snd_425_; lean_object* v_snd_426_; lean_object* v_toCold_427_; lean_object* v_options_428_; lean_object* v_fst_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_533_; 
v_snd_425_ = lean_ctor_get(v_val_421_, 1);
lean_inc(v_snd_425_);
v_snd_426_ = lean_ctor_get(v_snd_425_, 1);
lean_inc(v_snd_426_);
v_toCold_427_ = lean_ctor_get(v_a_413_, 0);
v_options_428_ = lean_ctor_get(v_toCold_427_, 2);
v_fst_429_ = lean_ctor_get(v_val_421_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v_val_421_);
if (v_isSharedCheck_533_ == 0)
{
lean_object* v_unused_534_; 
v_unused_534_ = lean_ctor_get(v_val_421_, 1);
lean_dec(v_unused_534_);
v___x_431_ = v_val_421_;
v_isShared_432_ = v_isSharedCheck_533_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_fst_429_);
lean_dec(v_val_421_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_533_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v_fst_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_531_; 
v_fst_433_ = lean_ctor_get(v_snd_425_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v_snd_425_);
if (v_isSharedCheck_531_ == 0)
{
lean_object* v_unused_532_; 
v_unused_532_ = lean_ctor_get(v_snd_425_, 1);
lean_dec(v_unused_532_);
v___x_435_ = v_snd_425_;
v_isShared_436_ = v_isSharedCheck_531_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_fst_433_);
lean_dec(v_snd_425_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_531_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v_p_437_; lean_object* v_inheritedTraceOptions_438_; uint8_t v_hasTrace_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v_p_437_ = lean_ctor_get(v_snd_426_, 0);
v_inheritedTraceOptions_438_ = lean_ctor_get(v_toCold_427_, 11);
v_hasTrace_439_ = lean_ctor_get_uint8(v_options_428_, sizeof(void*)*1);
v___x_440_ = l_Lean_Grind_Linarith_Poly_coeff(v_p_437_, v_fst_433_);
lean_inc(v_p_403_);
v___x_441_ = l_Lean_Grind_Linarith_Poly_mul(v_p_403_, v___x_440_);
v___x_442_ = lean_int_neg(v_fst_429_);
lean_inc(v_p_437_);
v___x_443_ = l_Lean_Grind_Linarith_Poly_mul(v_p_437_, v___x_442_);
lean_dec(v___x_442_);
v___x_444_ = l_Lean_Grind_Linarith_Poly_combine(v___x_441_, v___x_443_);
if (v_hasTrace_439_ == 0)
{
lean_dec(v___x_440_);
lean_dec(v_fst_429_);
lean_dec(v_p_403_);
goto v___jp_445_;
}
else
{
lean_object* v___x_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_458_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__4));
v___x_459_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__7, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__7);
v___x_460_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_438_, v_options_428_, v___x_459_);
if (v___x_460_ == 0)
{
lean_dec(v___x_440_);
lean_dec(v_fst_429_);
lean_dec(v_p_403_);
goto v___jp_445_;
}
else
{
lean_object* v___x_461_; 
v___x_461_ = l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0(v_p_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
lean_dec(v_p_403_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; lean_object* v___x_463_; 
v_a_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc(v_a_462_);
lean_dec_ref_known(v___x_461_, 1);
v___x_463_ = l_Lean_Meta_Grind_Arith_Linear_getVar(v_fst_433_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v_a_464_; lean_object* v___x_465_; 
v_a_464_ = lean_ctor_get(v___x_463_, 0);
lean_inc(v_a_464_);
lean_dec_ref_known(v___x_463_, 1);
v___x_465_ = l_Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1(v_snd_426_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_465_) == 0)
{
lean_object* v_a_466_; lean_object* v___x_467_; 
v_a_466_ = lean_ctor_get(v___x_465_, 0);
lean_inc(v_a_466_);
lean_dec_ref_known(v___x_465_, 1);
v___x_467_ = l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0(v___x_444_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v_a_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v_a_468_ = lean_ctor_get(v___x_467_, 0);
lean_inc(v_a_468_);
lean_dec_ref_known(v___x_467_, 1);
v___x_469_ = l_Lean_MessageData_ofExpr(v_a_462_);
v___x_470_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9);
v___x_471_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_469_);
lean_ctor_set(v___x_471_, 1, v___x_470_);
v___x_472_ = l_Int_repr(v_fst_429_);
lean_dec(v_fst_429_);
v___x_473_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
v___x_474_ = l_Lean_MessageData_ofFormat(v___x_473_);
v___x_475_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_471_);
lean_ctor_set(v___x_475_, 1, v___x_474_);
v___x_476_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
lean_ctor_set(v___x_476_, 1, v___x_470_);
v___x_477_ = l_Lean_MessageData_ofExpr(v_a_464_);
v___x_478_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_478_, 0, v___x_476_);
lean_ctor_set(v___x_478_, 1, v___x_477_);
v___x_479_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
lean_ctor_set(v___x_479_, 1, v___x_470_);
v___x_480_ = l_Lean_MessageData_ofExpr(v_a_466_);
v___x_481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_481_, 0, v___x_479_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v___x_482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
lean_ctor_set(v___x_482_, 1, v___x_470_);
v___x_483_ = l_Int_repr(v___x_440_);
lean_dec(v___x_440_);
v___x_484_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
v___x_485_ = l_Lean_MessageData_ofFormat(v___x_484_);
v___x_486_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_486_, 0, v___x_482_);
lean_ctor_set(v___x_486_, 1, v___x_485_);
v___x_487_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
lean_ctor_set(v___x_487_, 1, v___x_470_);
v___x_488_ = l_Lean_MessageData_ofExpr(v_a_468_);
v___x_489_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_489_, 0, v___x_487_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
v___x_490_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v___x_458_, v___x_489_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_dec_ref_known(v___x_490_, 1);
goto v___jp_445_;
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
lean_dec(v___x_444_);
lean_del_object(v___x_435_);
lean_dec(v_fst_433_);
lean_del_object(v___x_431_);
lean_dec(v_snd_426_);
lean_del_object(v___x_423_);
lean_del_object(v___x_419_);
v_a_491_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_498_ == 0)
{
v___x_493_ = v___x_490_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_490_);
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
else
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_506_; 
lean_dec(v_a_466_);
lean_dec(v_a_464_);
lean_dec(v_a_462_);
lean_dec(v___x_444_);
lean_dec(v___x_440_);
lean_del_object(v___x_435_);
lean_dec(v_fst_433_);
lean_del_object(v___x_431_);
lean_dec(v_fst_429_);
lean_dec(v_snd_426_);
lean_del_object(v___x_423_);
lean_del_object(v___x_419_);
v_a_499_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_506_ == 0)
{
v___x_501_ = v___x_467_;
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_467_);
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
lean_object* v_a_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_514_; 
lean_dec(v_a_464_);
lean_dec(v_a_462_);
lean_dec(v___x_444_);
lean_dec(v___x_440_);
lean_del_object(v___x_435_);
lean_dec(v_fst_433_);
lean_del_object(v___x_431_);
lean_dec(v_fst_429_);
lean_dec(v_snd_426_);
lean_del_object(v___x_423_);
lean_del_object(v___x_419_);
v_a_507_ = lean_ctor_get(v___x_465_, 0);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_514_ == 0)
{
v___x_509_ = v___x_465_;
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_a_507_);
lean_dec(v___x_465_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_512_; 
if (v_isShared_510_ == 0)
{
v___x_512_ = v___x_509_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_a_507_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
}
else
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_522_; 
lean_dec(v_a_462_);
lean_dec(v___x_444_);
lean_dec(v___x_440_);
lean_del_object(v___x_435_);
lean_dec(v_fst_433_);
lean_del_object(v___x_431_);
lean_dec(v_fst_429_);
lean_dec(v_snd_426_);
lean_del_object(v___x_423_);
lean_del_object(v___x_419_);
v_a_515_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_522_ == 0)
{
v___x_517_ = v___x_463_;
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v___x_463_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_a_515_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
else
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
lean_dec(v___x_444_);
lean_dec(v___x_440_);
lean_del_object(v___x_435_);
lean_dec(v_fst_433_);
lean_del_object(v___x_431_);
lean_dec(v_fst_429_);
lean_dec(v_snd_426_);
lean_del_object(v___x_423_);
lean_del_object(v___x_419_);
v_a_523_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v___x_461_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_461_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
}
v___jp_445_:
{
lean_object* v___x_447_; 
if (v_isShared_436_ == 0)
{
lean_ctor_set(v___x_435_, 1, v___x_444_);
lean_ctor_set(v___x_435_, 0, v_snd_426_);
v___x_447_ = v___x_435_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_snd_426_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v___x_444_);
v___x_447_ = v_reuseFailAlloc_457_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
lean_object* v___x_449_; 
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 1, v___x_447_);
lean_ctor_set(v___x_431_, 0, v_fst_433_);
v___x_449_ = v___x_431_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_fst_433_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v___x_447_);
v___x_449_ = v_reuseFailAlloc_456_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_451_; 
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 0, v___x_449_);
v___x_451_ = v___x_423_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_449_);
v___x_451_ = v_reuseFailAlloc_455_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
lean_object* v___x_453_; 
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 0, v___x_451_);
v___x_453_ = v___x_419_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v___x_451_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
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
lean_object* v___x_536_; lean_object* v___x_538_; 
lean_dec(v_a_417_);
lean_dec(v_p_403_);
v___x_536_ = lean_box(0);
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 0, v___x_536_);
v___x_538_ = v___x_419_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_536_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec(v_p_403_);
v_a_541_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_416_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_416_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___boxed(lean_object* v_p_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar(v_p_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_, v_a_560_);
lean_dec(v_a_560_);
lean_dec_ref(v_a_559_);
lean_dec(v_a_558_);
lean_dec_ref(v_a_557_);
lean_dec(v_a_556_);
lean_dec_ref(v_a_555_);
lean_dec(v_a_554_);
lean_dec_ref(v_a_553_);
lean_dec(v_a_552_);
lean_dec(v_a_551_);
lean_dec(v_a_550_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2(lean_object* v_cls_563_, lean_object* v_msg_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v_cls_563_, v_msg_564_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___boxed(lean_object* v_cls_578_, lean_object* v_msg_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2(v_cls_578_, v_msg_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
lean_dec(v___y_582_);
lean_dec(v___y_581_);
lean_dec(v___y_580_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f_spec__0(lean_object* v_c_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_){
_start:
{
lean_object* v_p_606_; lean_object* v___x_607_; 
v_p_606_ = lean_ctor_get(v_c_593_, 0);
v___x_607_ = l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0(v_p_606_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v_a_608_; lean_object* v___x_609_; 
v_a_608_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_a_608_);
lean_dec_ref_known(v___x_607_, 1);
v___x_609_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v_a_610_; lean_object* v_ofNatZero_611_; lean_object* v___x_612_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
lean_inc(v_a_610_);
lean_dec_ref_known(v___x_609_, 1);
v_ofNatZero_611_ = lean_ctor_get(v_a_610_, 18);
lean_inc_ref(v_ofNatZero_611_);
lean_dec(v_a_610_);
v___x_612_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_mkEq___at___00Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1_spec__3(v_a_608_, v_ofNatZero_611_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_621_; 
v_a_613_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_621_ == 0)
{
v___x_615_ = v___x_612_;
v_isShared_616_ = v_isSharedCheck_621_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_612_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_621_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_617_; lean_object* v___x_619_; 
v___x_617_ = l_Lean_mkNot(v_a_613_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 0, v___x_617_);
v___x_619_ = v___x_615_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v___x_617_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
else
{
return v___x_612_;
}
}
else
{
lean_object* v_a_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_629_; 
lean_dec(v_a_608_);
v_a_622_ = lean_ctor_get(v___x_609_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_629_ == 0)
{
v___x_624_ = v___x_609_;
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_a_622_);
lean_dec(v___x_609_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_627_; 
if (v_isShared_625_ == 0)
{
v___x_627_ = v___x_624_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_a_622_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
}
else
{
return v___x_607_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f_spec__0___boxed(lean_object* v_c_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f_spec__0(v_c_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_);
lean_dec(v___y_641_);
lean_dec_ref(v___y_640_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
lean_dec(v___y_637_);
lean_dec_ref(v___y_636_);
lean_dec(v___y_635_);
lean_dec_ref(v___y_634_);
lean_dec(v___y_633_);
lean_dec(v___y_632_);
lean_dec(v___y_631_);
lean_dec_ref(v_c_630_);
return v_res_643_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0(void){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = lean_unsigned_to_nat(0u);
v___x_645_ = lean_nat_to_int(v___x_644_);
return v___x_645_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__2(void){
_start:
{
lean_object* v_cls_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v_cls_650_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__1));
v___x_651_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__6));
v___x_652_ = l_Lean_Name_append(v___x_651_, v_cls_650_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f(lean_object* v_a_653_, lean_object* v_x_654_, lean_object* v_c_u2081_655_, lean_object* v_b_656_, lean_object* v_c_u2082_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_){
_start:
{
lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___y_673_; lean_object* v___y_674_; lean_object* v___y_675_; lean_object* v___y_676_; lean_object* v___y_677_; lean_object* v___y_678_; lean_object* v___y_679_; lean_object* v___y_680_; lean_object* v___y_681_; lean_object* v_toCold_724_; lean_object* v_options_725_; uint8_t v_hasTrace_726_; 
v_toCold_724_ = lean_ctor_get(v_a_667_, 0);
v_options_725_ = lean_ctor_get(v_toCold_724_, 2);
v_hasTrace_726_ = lean_ctor_get_uint8(v_options_725_, sizeof(void*)*1);
if (v_hasTrace_726_ == 0)
{
v___y_671_ = v_a_658_;
v___y_672_ = v_a_659_;
v___y_673_ = v_a_660_;
v___y_674_ = v_a_661_;
v___y_675_ = v_a_662_;
v___y_676_ = v_a_663_;
v___y_677_ = v_a_664_;
v___y_678_ = v_a_665_;
v___y_679_ = v_a_666_;
v___y_680_ = v_a_667_;
v___y_681_ = v_a_668_;
goto v___jp_670_;
}
else
{
lean_object* v_inheritedTraceOptions_727_; lean_object* v_cls_728_; lean_object* v___x_729_; uint8_t v___x_730_; 
v_inheritedTraceOptions_727_ = lean_ctor_get(v_toCold_724_, 11);
v_cls_728_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__1));
v___x_729_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__2);
v___x_730_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_727_, v_options_725_, v___x_729_);
if (v___x_730_ == 0)
{
v___y_671_ = v_a_658_;
v___y_672_ = v_a_659_;
v___y_673_ = v_a_660_;
v___y_674_ = v_a_661_;
v___y_675_ = v_a_662_;
v___y_676_ = v_a_663_;
v___y_677_ = v_a_664_;
v___y_678_ = v_a_665_;
v___y_679_ = v_a_666_;
v___y_680_ = v_a_667_;
v___y_681_ = v_a_668_;
goto v___jp_670_;
}
else
{
lean_object* v___x_731_; 
v___x_731_ = l_Lean_Meta_Grind_Arith_Linear_getVar(v_x_654_, v_a_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___x_733_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc(v_a_732_);
lean_dec_ref_known(v___x_731_, 1);
v___x_733_ = l_Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1(v_c_u2081_655_, v_a_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v_a_734_; lean_object* v___x_735_; 
v_a_734_ = lean_ctor_get(v___x_733_, 0);
lean_inc(v_a_734_);
lean_dec_ref_known(v___x_733_, 1);
v___x_735_ = l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f_spec__0(v_c_u2082_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_);
if (lean_obj_tag(v___x_735_) == 0)
{
lean_object* v_a_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v_a_736_ = lean_ctor_get(v___x_735_, 0);
lean_inc(v_a_736_);
lean_dec_ref_known(v___x_735_, 1);
v___x_737_ = l_Lean_MessageData_ofExpr(v_a_732_);
v___x_738_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9);
v___x_739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_737_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
v___x_740_ = l_Lean_MessageData_ofExpr(v_a_734_);
v___x_741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_741_, 0, v___x_739_);
lean_ctor_set(v___x_741_, 1, v___x_740_);
v___x_742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_741_);
lean_ctor_set(v___x_742_, 1, v___x_738_);
v___x_743_ = l_Lean_MessageData_ofExpr(v_a_736_);
v___x_744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_742_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___x_745_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v_cls_728_, v___x_744_, v_a_665_, v_a_666_, v_a_667_, v_a_668_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_dec_ref_known(v___x_745_, 1);
v___y_671_ = v_a_658_;
v___y_672_ = v_a_659_;
v___y_673_ = v_a_660_;
v___y_674_ = v_a_661_;
v___y_675_ = v_a_662_;
v___y_676_ = v_a_663_;
v___y_677_ = v_a_664_;
v___y_678_ = v_a_665_;
v___y_679_ = v_a_666_;
v___y_680_ = v_a_667_;
v___y_681_ = v_a_668_;
goto v___jp_670_;
}
else
{
lean_object* v_a_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_753_; 
lean_dec_ref(v_c_u2082_657_);
lean_dec(v_b_656_);
lean_dec_ref(v_c_u2081_655_);
v_a_746_ = lean_ctor_get(v___x_745_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_745_);
if (v_isSharedCheck_753_ == 0)
{
v___x_748_ = v___x_745_;
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_a_746_);
lean_dec(v___x_745_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_751_; 
if (v_isShared_749_ == 0)
{
v___x_751_ = v___x_748_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_a_746_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_dec(v_a_734_);
lean_dec(v_a_732_);
lean_dec_ref(v_c_u2082_657_);
lean_dec(v_b_656_);
lean_dec_ref(v_c_u2081_655_);
v_a_754_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_735_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_735_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
else
{
lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_769_; 
lean_dec(v_a_732_);
lean_dec_ref(v_c_u2082_657_);
lean_dec(v_b_656_);
lean_dec_ref(v_c_u2081_655_);
v_a_762_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_769_ == 0)
{
v___x_764_ = v___x_733_;
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_dec(v___x_733_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_767_; 
if (v_isShared_765_ == 0)
{
v___x_767_ = v___x_764_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_762_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_777_; 
lean_dec_ref(v_c_u2082_657_);
lean_dec(v_b_656_);
lean_dec_ref(v_c_u2081_655_);
v_a_770_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_777_ == 0)
{
v___x_772_ = v___x_731_;
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_731_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_770_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
}
}
v___jp_670_:
{
lean_object* v_p_682_; lean_object* v_p_683_; lean_object* v___x_684_; lean_object* v___x_685_; uint8_t v___x_686_; 
v_p_682_ = lean_ctor_get(v_c_u2081_655_, 0);
v_p_683_ = lean_ctor_get(v_c_u2082_657_, 0);
v___x_684_ = lean_int_emod(v_b_656_, v_a_653_);
v___x_685_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0);
v___x_686_ = lean_int_dec_eq(v___x_684_, v___x_685_);
lean_dec(v___x_684_);
if (v___x_686_ == 0)
{
lean_object* v___x_687_; 
v___x_687_ = l_Lean_Meta_Grind_Arith_Linear_hasNoNatZeroDivisors(v___y_671_, v___y_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_707_; 
v_a_688_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_707_ == 0)
{
v___x_690_ = v___x_687_;
v_isShared_691_ = v_isSharedCheck_707_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_687_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_707_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
uint8_t v___x_692_; 
v___x_692_ = lean_unbox(v_a_688_);
lean_dec(v_a_688_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; lean_object* v___x_695_; 
lean_dec_ref(v_c_u2082_657_);
lean_dec(v_b_656_);
lean_dec_ref(v_c_u2081_655_);
v___x_693_ = lean_box(0);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 0, v___x_693_);
v___x_695_ = v___x_690_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v___x_693_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
else
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_705_; 
lean_inc(v_p_682_);
v___x_697_ = l_Lean_Grind_Linarith_Poly_mul(v_p_682_, v_b_656_);
v___x_698_ = lean_int_neg(v_a_653_);
lean_inc(v_p_683_);
v___x_699_ = l_Lean_Grind_Linarith_Poly_mul(v_p_683_, v___x_698_);
v___x_700_ = l_Lean_Grind_Linarith_Poly_combine(v___x_697_, v___x_699_);
v___x_701_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_701_, 0, v___x_698_);
lean_ctor_set(v___x_701_, 1, v_b_656_);
lean_ctor_set(v___x_701_, 2, v_c_u2081_655_);
lean_ctor_set(v___x_701_, 3, v_c_u2082_657_);
v___x_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_702_, 0, v___x_700_);
lean_ctor_set(v___x_702_, 1, v___x_701_);
v___x_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 0, v___x_703_);
v___x_705_ = v___x_690_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v___x_703_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
}
else
{
lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
lean_dec_ref(v_c_u2082_657_);
lean_dec(v_b_656_);
lean_dec_ref(v_c_u2081_655_);
v_a_708_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_715_ == 0)
{
v___x_710_ = v___x_687_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_dec(v___x_687_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_708_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
else
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_716_ = lean_int_neg(v_b_656_);
lean_dec(v_b_656_);
v___x_717_ = lean_int_ediv(v___x_716_, v_a_653_);
lean_dec(v___x_716_);
lean_inc(v_p_682_);
v___x_718_ = l_Lean_Grind_Linarith_Poly_mul(v_p_682_, v___x_717_);
lean_inc(v_p_683_);
v___x_719_ = l_Lean_Grind_Linarith_Poly_combine(v___x_718_, v_p_683_);
v___x_720_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v___x_720_, 0, v___x_717_);
lean_ctor_set(v___x_720_, 1, v_c_u2081_655_);
lean_ctor_set(v___x_720_, 2, v_c_u2082_657_);
v___x_721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_719_);
lean_ctor_set(v___x_721_, 1, v___x_720_);
v___x_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_722_, 0, v___x_721_);
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
return v___x_723_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___boxed(lean_object** _args){
lean_object* v_a_778_ = _args[0];
lean_object* v_x_779_ = _args[1];
lean_object* v_c_u2081_780_ = _args[2];
lean_object* v_b_781_ = _args[3];
lean_object* v_c_u2082_782_ = _args[4];
lean_object* v_a_783_ = _args[5];
lean_object* v_a_784_ = _args[6];
lean_object* v_a_785_ = _args[7];
lean_object* v_a_786_ = _args[8];
lean_object* v_a_787_ = _args[9];
lean_object* v_a_788_ = _args[10];
lean_object* v_a_789_ = _args[11];
lean_object* v_a_790_ = _args[12];
lean_object* v_a_791_ = _args[13];
lean_object* v_a_792_ = _args[14];
lean_object* v_a_793_ = _args[15];
lean_object* v_a_794_ = _args[16];
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f(v_a_778_, v_x_779_, v_c_u2081_780_, v_b_781_, v_c_u2082_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_, v_a_789_, v_a_790_, v_a_791_, v_a_792_, v_a_793_);
lean_dec(v_a_793_);
lean_dec_ref(v_a_792_);
lean_dec(v_a_791_);
lean_dec_ref(v_a_790_);
lean_dec(v_a_789_);
lean_dec_ref(v_a_788_);
lean_dec(v_a_787_);
lean_dec_ref(v_a_786_);
lean_dec(v_a_785_);
lean_dec(v_a_784_);
lean_dec(v_a_783_);
lean_dec(v_x_779_);
lean_dec(v_a_778_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_inSameStruct_x3f___redArg(lean_object* v_a_796_, lean_object* v_b_797_, lean_object* v_a_798_, lean_object* v_a_799_){
_start:
{
lean_object* v___x_801_; 
v___x_801_ = l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg(v_a_796_, v_a_798_, v_a_799_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_830_; 
v_a_802_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_830_ == 0)
{
v___x_804_ = v___x_801_;
v_isShared_805_ = v_isSharedCheck_830_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_a_802_);
lean_dec(v___x_801_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_830_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
if (lean_obj_tag(v_a_802_) == 1)
{
lean_object* v_val_806_; lean_object* v___x_807_; 
lean_del_object(v___x_804_);
v_val_806_ = lean_ctor_get(v_a_802_, 0);
v___x_807_ = l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg(v_b_797_, v_a_798_, v_a_799_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_825_; 
v_a_808_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_825_ == 0)
{
v___x_810_ = v___x_807_;
v_isShared_811_ = v_isSharedCheck_825_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_807_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_825_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
if (lean_obj_tag(v_a_808_) == 1)
{
lean_object* v_val_812_; uint8_t v___x_813_; 
v_val_812_ = lean_ctor_get(v_a_808_, 0);
lean_inc(v_val_812_);
lean_dec_ref_known(v_a_808_, 1);
v___x_813_ = lean_nat_dec_eq(v_val_806_, v_val_812_);
lean_dec(v_val_812_);
if (v___x_813_ == 0)
{
lean_object* v___x_814_; lean_object* v___x_816_; 
lean_dec_ref_known(v_a_802_, 1);
v___x_814_ = lean_box(0);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 0, v___x_814_);
v___x_816_ = v___x_810_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v___x_814_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
else
{
lean_object* v___x_819_; 
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 0, v_a_802_);
v___x_819_ = v___x_810_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_802_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
else
{
lean_object* v___x_821_; lean_object* v___x_823_; 
lean_dec(v_a_808_);
lean_dec_ref_known(v_a_802_, 1);
v___x_821_ = lean_box(0);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 0, v___x_821_);
v___x_823_ = v___x_810_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v___x_821_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_802_, 1);
return v___x_807_;
}
}
else
{
lean_object* v___x_826_; lean_object* v___x_828_; 
lean_dec(v_a_802_);
v___x_826_ = lean_box(0);
if (v_isShared_805_ == 0)
{
lean_ctor_set(v___x_804_, 0, v___x_826_);
v___x_828_ = v___x_804_;
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
return v___x_801_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_inSameStruct_x3f___redArg___boxed(lean_object* v_a_831_, lean_object* v_b_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_inSameStruct_x3f___redArg(v_a_831_, v_b_832_, v_a_833_, v_a_834_);
lean_dec_ref(v_a_834_);
lean_dec(v_a_833_);
lean_dec_ref(v_b_832_);
lean_dec_ref(v_a_831_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_inSameStruct_x3f(lean_object* v_a_837_, lean_object* v_b_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_inSameStruct_x3f___redArg(v_a_837_, v_b_838_, v_a_839_, v_a_847_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_inSameStruct_x3f___boxed(lean_object* v_a_851_, lean_object* v_b_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_inSameStruct_x3f(v_a_851_, v_b_852_, v_a_853_, v_a_854_, v_a_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_);
lean_dec(v_a_862_);
lean_dec_ref(v_a_861_);
lean_dec(v_a_860_);
lean_dec_ref(v_a_859_);
lean_dec(v_a_858_);
lean_dec_ref(v_a_857_);
lean_dec(v_a_856_);
lean_dec_ref(v_a_855_);
lean_dec(v_a_854_);
lean_dec(v_a_853_);
lean_dec_ref(v_b_852_);
lean_dec_ref(v_a_851_);
return v_res_864_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0(void){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_865_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0___closed__0);
v___x_866_ = lean_int_neg(v___x_865_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27(lean_object* v_a_867_, lean_object* v_b_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_){
_start:
{
uint8_t v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_881_ = 0;
v___x_882_ = lean_unsigned_to_nat(0u);
v___x_883_ = lean_box(v___x_881_);
lean_inc_ref(v_a_867_);
v___x_884_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_reify_x3f___boxed), 15, 3);
lean_closure_set(v___x_884_, 0, v_a_867_);
lean_closure_set(v___x_884_, 1, v___x_883_);
lean_closure_set(v___x_884_, 2, v___x_882_);
v___x_885_ = l_Lean_Meta_Grind_Arith_Linear_withRingM___redArg(v___x_884_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_1037_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_888_ = v___x_885_;
v_isShared_889_ = v_isSharedCheck_1037_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_885_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_1037_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
if (lean_obj_tag(v_a_886_) == 1)
{
lean_object* v_val_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
lean_del_object(v___x_888_);
v_val_890_ = lean_ctor_get(v_a_886_, 0);
lean_inc(v_val_890_);
lean_dec_ref_known(v_a_886_, 1);
v___x_891_ = lean_box(v___x_881_);
lean_inc_ref(v_b_868_);
v___x_892_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_reify_x3f___boxed), 15, 3);
lean_closure_set(v___x_892_, 0, v_b_868_);
lean_closure_set(v___x_892_, 1, v___x_891_);
lean_closure_set(v___x_892_, 2, v___x_882_);
v___x_893_ = l_Lean_Meta_Grind_Arith_Linear_withRingM___redArg(v___x_892_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_1024_; 
v_a_894_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_896_ = v___x_893_;
v_isShared_897_ = v_isSharedCheck_1024_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_893_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_1024_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
if (lean_obj_tag(v_a_894_) == 1)
{
lean_object* v_val_898_; lean_object* v___x_899_; 
lean_del_object(v___x_896_);
v_val_898_ = lean_ctor_get(v_a_894_, 0);
lean_inc(v_val_898_);
lean_dec_ref_known(v_a_894_, 1);
v___x_899_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_867_, v_a_870_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_901_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_899_, 1);
v___x_901_ = l_Lean_Meta_Grind_getGeneration___redArg(v_b_868_, v_a_870_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; lean_object* v___y_904_; uint8_t v___x_1003_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
lean_dec_ref_known(v___x_901_, 1);
v___x_1003_ = lean_nat_dec_le(v_a_900_, v_a_902_);
if (v___x_1003_ == 0)
{
lean_dec(v_a_902_);
v___y_904_ = v_a_900_;
goto v___jp_903_;
}
else
{
lean_dec(v_a_900_);
v___y_904_ = v_a_902_;
goto v___jp_903_;
}
v___jp_903_:
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
lean_inc(v_val_898_);
lean_inc(v_val_890_);
v___x_905_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_905_, 0, v_val_890_);
lean_ctor_set(v___x_905_, 1, v_val_898_);
v___x_906_ = l_Lean_Grind_CommRing_Expr_toPoly(v___x_905_);
v___x_907_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_907_, 0, v_a_867_);
lean_ctor_set(v___x_907_, 1, v_b_868_);
lean_ctor_set(v___x_907_, 2, v_val_890_);
lean_ctor_set(v___x_907_, 3, v_val_898_);
v___x_908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_908_, 0, v___x_906_);
lean_ctor_set(v___x_908_, 1, v___x_907_);
v___x_909_ = l_Lean_Meta_Grind_Arith_Linear_RingEqCnstr_cleanupDenominators(v___x_908_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v_p_911_; lean_object* v___x_912_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v___x_909_, 1);
v_p_911_ = lean_ctor_get(v_a_910_, 0);
lean_inc(v___y_904_);
lean_inc_ref(v_p_911_);
v___x_912_ = l_Lean_Grind_CommRing_Poly_toIntModuleExpr(v_p_911_, v___y_904_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_);
if (lean_obj_tag(v___x_912_) == 0)
{
lean_object* v_a_913_; lean_object* v___x_914_; 
v_a_913_ = lean_ctor_get(v___x_912_, 0);
lean_inc(v_a_913_);
lean_dec_ref_known(v___x_912_, 1);
lean_inc(v___y_904_);
v___x_914_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_a_913_, v___x_881_, v___y_904_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_978_; 
v_a_915_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_978_ == 0)
{
v___x_917_ = v___x_914_;
v_isShared_918_ = v_isSharedCheck_978_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_914_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_978_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
if (lean_obj_tag(v_a_915_) == 1)
{
lean_object* v_val_919_; lean_object* v___x_920_; lean_object* v___x_921_; uint8_t v___x_922_; 
v_val_919_ = lean_ctor_get(v_a_915_, 0);
lean_inc_n(v_val_919_, 2);
lean_dec_ref_known(v_a_915_, 1);
v___x_920_ = l_Lean_Grind_Linarith_Expr_norm(v_val_919_);
v___x_921_ = lean_box(0);
v___x_922_ = l_Lean_Grind_Linarith_instBEqPoly_beq(v___x_920_, v___x_921_);
if (v___x_922_ == 0)
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
lean_del_object(v___x_917_);
lean_inc(v_a_910_);
v___x_923_ = lean_alloc_ctor(12, 2, 0);
lean_ctor_set(v___x_923_, 0, v_a_910_);
lean_ctor_set(v___x_923_, 1, v_val_919_);
lean_inc(v___x_920_);
v___x_924_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_924_, 0, v___x_920_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
lean_ctor_set_uint8(v___x_924_, sizeof(void*)*2, v___x_881_);
v___x_925_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_924_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_968_; 
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_968_ == 0)
{
lean_object* v_unused_969_; 
v_unused_969_ = lean_ctor_get(v___x_925_, 0);
lean_dec(v_unused_969_);
v___x_927_ = v___x_925_;
v_isShared_928_ = v_isSharedCheck_968_;
goto v_resetjp_926_;
}
else
{
lean_dec(v___x_925_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_968_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_932_; 
v___x_929_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0);
lean_inc_ref(v_p_911_);
v___x_930_ = l_Lean_Grind_CommRing_Poly_mulConst(v___x_929_, v_p_911_);
if (v_isShared_928_ == 0)
{
lean_ctor_set_tag(v___x_927_, 1);
lean_ctor_set(v___x_927_, 0, v_a_910_);
v___x_932_ = v___x_927_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_910_);
v___x_932_ = v_reuseFailAlloc_967_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
lean_inc_ref(v___x_930_);
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_930_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
v___x_934_ = l_Lean_Grind_Linarith_Poly_mul(v___x_920_, v___x_929_);
lean_inc(v___y_904_);
v___x_935_ = l_Lean_Grind_CommRing_Poly_toIntModuleExpr(v___x_930_, v___y_904_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; lean_object* v___x_937_; 
v_a_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_936_);
lean_dec_ref_known(v___x_935_, 1);
v___x_937_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_a_936_, v___x_881_, v___y_904_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_950_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_950_ == 0)
{
v___x_940_ = v___x_937_;
v_isShared_941_ = v_isSharedCheck_950_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_dec(v___x_937_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_950_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
if (lean_obj_tag(v_a_938_) == 1)
{
lean_object* v_val_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
lean_del_object(v___x_940_);
v_val_942_ = lean_ctor_get(v_a_938_, 0);
lean_inc(v_val_942_);
lean_dec_ref_known(v_a_938_, 1);
v___x_943_ = lean_alloc_ctor(12, 2, 0);
lean_ctor_set(v___x_943_, 0, v___x_933_);
lean_ctor_set(v___x_943_, 1, v_val_942_);
v___x_944_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_944_, 0, v___x_934_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
lean_ctor_set_uint8(v___x_944_, sizeof(void*)*2, v___x_881_);
v___x_945_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_944_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_);
return v___x_945_;
}
else
{
lean_object* v___x_946_; lean_object* v___x_948_; 
lean_dec(v_a_938_);
lean_dec(v___x_934_);
lean_dec_ref_known(v___x_933_, 2);
v___x_946_ = lean_box(0);
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 0, v___x_946_);
v___x_948_ = v___x_940_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v___x_946_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
}
}
else
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
lean_dec(v___x_934_);
lean_dec_ref_known(v___x_933_, 2);
v_a_951_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_937_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_937_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
else
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
lean_dec(v___x_934_);
lean_dec_ref_known(v___x_933_, 2);
lean_dec(v___y_904_);
v_a_959_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_935_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_935_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
}
}
}
else
{
lean_dec(v___x_920_);
lean_dec(v_a_910_);
lean_dec(v___y_904_);
return v___x_925_;
}
}
else
{
lean_object* v___x_970_; lean_object* v___x_972_; 
lean_dec(v___x_920_);
lean_dec(v_val_919_);
lean_dec(v_a_910_);
lean_dec(v___y_904_);
v___x_970_ = lean_box(0);
if (v_isShared_918_ == 0)
{
lean_ctor_set(v___x_917_, 0, v___x_970_);
v___x_972_ = v___x_917_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v___x_970_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
else
{
lean_object* v___x_974_; lean_object* v___x_976_; 
lean_dec(v_a_915_);
lean_dec(v_a_910_);
lean_dec(v___y_904_);
v___x_974_ = lean_box(0);
if (v_isShared_918_ == 0)
{
lean_ctor_set(v___x_917_, 0, v___x_974_);
v___x_976_ = v___x_917_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v___x_974_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
else
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_986_; 
lean_dec(v_a_910_);
lean_dec(v___y_904_);
v_a_979_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_986_ == 0)
{
v___x_981_ = v___x_914_;
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_914_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_984_; 
if (v_isShared_982_ == 0)
{
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_a_979_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
}
else
{
lean_object* v_a_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_994_; 
lean_dec(v_a_910_);
lean_dec(v___y_904_);
v_a_987_ = lean_ctor_get(v___x_912_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_912_);
if (v_isSharedCheck_994_ == 0)
{
v___x_989_ = v___x_912_;
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_a_987_);
lean_dec(v___x_912_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_992_; 
if (v_isShared_990_ == 0)
{
v___x_992_ = v___x_989_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_a_987_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
}
}
else
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
lean_dec(v___y_904_);
v_a_995_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_909_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_909_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_998_ == 0)
{
v___x_1000_ = v___x_997_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_995_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
}
}
else
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
lean_dec(v_a_900_);
lean_dec(v_val_898_);
lean_dec(v_val_890_);
lean_dec_ref(v_b_868_);
lean_dec_ref(v_a_867_);
v_a_1004_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_901_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_901_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
else
{
lean_object* v_a_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1019_; 
lean_dec(v_val_898_);
lean_dec(v_val_890_);
lean_dec_ref(v_b_868_);
lean_dec_ref(v_a_867_);
v_a_1012_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1014_ = v___x_899_;
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_a_1012_);
lean_dec(v___x_899_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1017_; 
if (v_isShared_1015_ == 0)
{
v___x_1017_ = v___x_1014_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_a_1012_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
}
}
}
}
else
{
lean_object* v___x_1020_; lean_object* v___x_1022_; 
lean_dec(v_a_894_);
lean_dec(v_val_890_);
lean_dec_ref(v_b_868_);
lean_dec_ref(v_a_867_);
v___x_1020_ = lean_box(0);
if (v_isShared_897_ == 0)
{
lean_ctor_set(v___x_896_, 0, v___x_1020_);
v___x_1022_ = v___x_896_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1020_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_dec(v_val_890_);
lean_dec_ref(v_b_868_);
lean_dec_ref(v_a_867_);
v_a_1025_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_893_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_893_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
}
else
{
lean_object* v___x_1033_; lean_object* v___x_1035_; 
lean_dec(v_a_886_);
lean_dec_ref(v_b_868_);
lean_dec_ref(v_a_867_);
v___x_1033_ = lean_box(0);
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 0, v___x_1033_);
v___x_1035_ = v___x_888_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1033_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
else
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1045_; 
lean_dec_ref(v_b_868_);
lean_dec_ref(v_a_867_);
v_a_1038_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1040_ = v___x_885_;
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___x_885_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
if (v_isShared_1041_ == 0)
{
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1038_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___boxed(lean_object* v_a_1046_, lean_object* v_b_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_){
_start:
{
lean_object* v_res_1060_; 
v_res_1060_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27(v_a_1046_, v_b_1047_, v_a_1048_, v_a_1049_, v_a_1050_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_);
lean_dec(v_a_1058_);
lean_dec_ref(v_a_1057_);
lean_dec(v_a_1056_);
lean_dec_ref(v_a_1055_);
lean_dec(v_a_1054_);
lean_dec_ref(v_a_1053_);
lean_dec(v_a_1052_);
lean_dec_ref(v_a_1051_);
lean_dec(v_a_1050_);
lean_dec(v_a_1049_);
lean_dec(v_a_1048_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleEq_x27(lean_object* v_a_1061_, lean_object* v_b_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_){
_start:
{
lean_object* v___x_1075_; 
v___x_1075_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_1061_, v_a_1064_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; uint8_t v___x_1077_; lean_object* v___x_1078_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1075_, 1);
v___x_1077_ = 0;
lean_inc_ref(v_a_1061_);
v___x_1078_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_a_1061_, v___x_1077_, v_a_1076_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_, v_a_1067_, v_a_1068_, v_a_1069_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1133_; 
v_a_1079_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1081_ = v___x_1078_;
v_isShared_1082_ = v_isSharedCheck_1133_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1078_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1133_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
if (lean_obj_tag(v_a_1079_) == 1)
{
lean_object* v_val_1083_; lean_object* v___x_1084_; 
lean_del_object(v___x_1081_);
v_val_1083_ = lean_ctor_get(v_a_1079_, 0);
lean_inc(v_val_1083_);
lean_dec_ref_known(v_a_1079_, 1);
v___x_1084_ = l_Lean_Meta_Grind_getGeneration___redArg(v_b_1062_, v_a_1064_);
if (lean_obj_tag(v___x_1084_) == 0)
{
lean_object* v_a_1085_; lean_object* v___x_1086_; 
v_a_1085_ = lean_ctor_get(v___x_1084_, 0);
lean_inc(v_a_1085_);
lean_dec_ref_known(v___x_1084_, 1);
lean_inc_ref(v_b_1062_);
v___x_1086_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_b_1062_, v___x_1077_, v_a_1085_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_, v_a_1067_, v_a_1068_, v_a_1069_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1112_; 
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1089_ = v___x_1086_;
v_isShared_1090_ = v_isSharedCheck_1112_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1086_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1112_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
if (lean_obj_tag(v_a_1087_) == 1)
{
lean_object* v_val_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; uint8_t v___x_1095_; 
v_val_1091_ = lean_ctor_get(v_a_1087_, 0);
lean_inc_n(v_val_1091_, 2);
lean_dec_ref_known(v_a_1087_, 1);
lean_inc(v_val_1083_);
v___x_1092_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1092_, 0, v_val_1083_);
lean_ctor_set(v___x_1092_, 1, v_val_1091_);
v___x_1093_ = l_Lean_Grind_Linarith_Expr_norm(v___x_1092_);
v___x_1094_ = lean_box(0);
v___x_1095_ = l_Lean_Grind_Linarith_instBEqPoly_beq(v___x_1093_, v___x_1094_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
lean_del_object(v___x_1089_);
lean_inc(v_val_1091_);
lean_inc(v_val_1083_);
lean_inc_ref(v_b_1062_);
lean_inc_ref(v_a_1061_);
v___x_1096_ = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(v___x_1096_, 0, v_a_1061_);
lean_ctor_set(v___x_1096_, 1, v_b_1062_);
lean_ctor_set(v___x_1096_, 2, v_val_1083_);
lean_ctor_set(v___x_1096_, 3, v_val_1091_);
lean_inc(v___x_1093_);
v___x_1097_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1097_, 0, v___x_1093_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
lean_ctor_set_uint8(v___x_1097_, sizeof(void*)*2, v___x_1077_);
v___x_1098_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_1097_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_, v_a_1067_, v_a_1068_, v_a_1069_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_);
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
lean_dec_ref_known(v___x_1098_, 1);
v___x_1099_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0);
v___x_1100_ = l_Lean_Grind_Linarith_Poly_mul(v___x_1093_, v___x_1099_);
v___x_1101_ = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(v___x_1101_, 0, v_b_1062_);
lean_ctor_set(v___x_1101_, 1, v_a_1061_);
lean_ctor_set(v___x_1101_, 2, v_val_1091_);
lean_ctor_set(v___x_1101_, 3, v_val_1083_);
v___x_1102_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1102_, 0, v___x_1100_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
lean_ctor_set_uint8(v___x_1102_, sizeof(void*)*2, v___x_1077_);
v___x_1103_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_1102_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_, v_a_1067_, v_a_1068_, v_a_1069_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_);
return v___x_1103_;
}
else
{
lean_dec(v___x_1093_);
lean_dec(v_val_1091_);
lean_dec(v_val_1083_);
lean_dec_ref(v_b_1062_);
lean_dec_ref(v_a_1061_);
return v___x_1098_;
}
}
else
{
lean_object* v___x_1104_; lean_object* v___x_1106_; 
lean_dec(v___x_1093_);
lean_dec(v_val_1091_);
lean_dec(v_val_1083_);
lean_dec_ref(v_b_1062_);
lean_dec_ref(v_a_1061_);
v___x_1104_ = lean_box(0);
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 0, v___x_1104_);
v___x_1106_ = v___x_1089_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1104_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
else
{
lean_object* v___x_1108_; lean_object* v___x_1110_; 
lean_dec(v_a_1087_);
lean_dec(v_val_1083_);
lean_dec_ref(v_b_1062_);
lean_dec_ref(v_a_1061_);
v___x_1108_ = lean_box(0);
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 0, v___x_1108_);
v___x_1110_ = v___x_1089_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1108_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
}
else
{
lean_object* v_a_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1120_; 
lean_dec(v_val_1083_);
lean_dec_ref(v_b_1062_);
lean_dec_ref(v_a_1061_);
v_a_1113_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1115_ = v___x_1086_;
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_a_1113_);
lean_dec(v___x_1086_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1118_; 
if (v_isShared_1116_ == 0)
{
v___x_1118_ = v___x_1115_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_a_1113_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
}
else
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1128_; 
lean_dec(v_val_1083_);
lean_dec_ref(v_b_1062_);
lean_dec_ref(v_a_1061_);
v_a_1121_ = lean_ctor_get(v___x_1084_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1123_ = v___x_1084_;
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1084_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
if (v_isShared_1124_ == 0)
{
v___x_1126_ = v___x_1123_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_a_1121_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
}
else
{
lean_object* v___x_1129_; lean_object* v___x_1131_; 
lean_dec(v_a_1079_);
lean_dec_ref(v_b_1062_);
lean_dec_ref(v_a_1061_);
v___x_1129_ = lean_box(0);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 0, v___x_1129_);
v___x_1131_ = v___x_1081_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v___x_1129_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
else
{
lean_object* v_a_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1141_; 
lean_dec_ref(v_b_1062_);
lean_dec_ref(v_a_1061_);
v_a_1134_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1136_ = v___x_1078_;
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_a_1134_);
lean_dec(v___x_1078_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1139_; 
if (v_isShared_1137_ == 0)
{
v___x_1139_ = v___x_1136_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_a_1134_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
else
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
lean_dec_ref(v_b_1062_);
lean_dec_ref(v_a_1061_);
v_a_1142_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1144_ = v___x_1075_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1075_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1142_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleEq_x27___boxed(lean_object* v_a_1150_, lean_object* v_b_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleEq_x27(v_a_1150_, v_b_1151_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_);
lean_dec(v_a_1162_);
lean_dec_ref(v_a_1161_);
lean_dec(v_a_1160_);
lean_dec_ref(v_a_1159_);
lean_dec(v_a_1158_);
lean_dec_ref(v_a_1157_);
lean_dec(v_a_1156_);
lean_dec_ref(v_a_1155_);
lean_dec(v_a_1154_);
lean_dec(v_a_1153_);
lean_dec(v_a_1152_);
return v_res_1164_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1165_; 
v___x_1165_ = l_Lean_Meta_Grind_instInhabitedGoalM___redArg();
return v___x_1165_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm_spec__0(lean_object* v_msg_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v___x_1179_; lean_object* v___f_1180_; lean_object* v___x_2795__overap_1181_; lean_object* v___x_1182_; 
v___x_1179_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm_spec__0___closed__0);
v___f_1180_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1180_, 0, v___x_1179_);
v___x_2795__overap_1181_ = lean_panic_fn_borrowed(v___f_1180_, v_msg_1166_);
lean_dec_ref(v___f_1180_);
lean_inc(v___y_1177_);
lean_inc_ref(v___y_1176_);
lean_inc(v___y_1175_);
lean_inc_ref(v___y_1174_);
lean_inc(v___y_1173_);
lean_inc_ref(v___y_1172_);
lean_inc(v___y_1171_);
lean_inc_ref(v___y_1170_);
lean_inc(v___y_1169_);
lean_inc(v___y_1168_);
lean_inc(v___y_1167_);
v___x_1182_ = lean_apply_12(v___x_2795__overap_1181_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_, lean_box(0));
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm_spec__0___boxed(lean_object* v_msg_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm_spec__0(v_msg_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec(v___y_1185_);
lean_dec(v___y_1184_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm_spec__1(lean_object* v_a_1197_){
_start:
{
lean_object* v___x_1198_; 
v___x_1198_ = lean_nat_to_int(v_a_1197_);
return v___x_1198_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__3(void){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1202_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__2));
v___x_1203_ = lean_unsigned_to_nat(42u);
v___x_1204_ = lean_unsigned_to_nat(87u);
v___x_1205_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__1));
v___x_1206_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__0));
v___x_1207_ = l_mkPanicMessageWithDecl(v___x_1206_, v___x_1205_, v___x_1204_, v___x_1203_, v___x_1202_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm(lean_object* v_c_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_){
_start:
{
lean_object* v___y_1222_; lean_object* v___y_1223_; lean_object* v_c_1224_; lean_object* v_c_1230_; lean_object* v_p_1231_; lean_object* v___y_1232_; lean_object* v___y_1233_; lean_object* v___y_1234_; lean_object* v___y_1235_; lean_object* v___y_1236_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; lean_object* v___y_1241_; lean_object* v___y_1242_; lean_object* v___x_1267_; 
v___x_1267_ = l_Lean_Meta_Grind_Arith_Linear_hasNoNatZeroDivisors(v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_, v_a_1215_, v_a_1216_, v_a_1217_, v_a_1218_, v_a_1219_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_object* v_a_1268_; uint8_t v___x_1269_; 
v_a_1268_ = lean_ctor_get(v___x_1267_, 0);
lean_inc(v_a_1268_);
lean_dec_ref_known(v___x_1267_, 1);
v___x_1269_ = lean_unbox(v_a_1268_);
lean_dec(v_a_1268_);
if (v___x_1269_ == 0)
{
lean_object* v_p_1270_; 
v_p_1270_ = lean_ctor_get(v_c_1208_, 0);
lean_inc(v_p_1270_);
v_c_1230_ = v_c_1208_;
v_p_1231_ = v_p_1270_;
v___y_1232_ = v_a_1209_;
v___y_1233_ = v_a_1210_;
v___y_1234_ = v_a_1211_;
v___y_1235_ = v_a_1212_;
v___y_1236_ = v_a_1213_;
v___y_1237_ = v_a_1214_;
v___y_1238_ = v_a_1215_;
v___y_1239_ = v_a_1216_;
v___y_1240_ = v_a_1217_;
v___y_1241_ = v_a_1218_;
v___y_1242_ = v_a_1219_;
goto v___jp_1229_;
}
else
{
lean_object* v_p_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; uint8_t v___x_1274_; 
v_p_1271_ = lean_ctor_get(v_c_1208_, 0);
v___x_1272_ = l_Lean_Grind_Linarith_Poly_gcdCoeffs(v_p_1271_);
v___x_1273_ = lean_unsigned_to_nat(1u);
v___x_1274_ = lean_nat_dec_eq(v___x_1272_, v___x_1273_);
if (v___x_1274_ == 0)
{
lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
lean_inc(v___x_1272_);
v___x_1275_ = lean_nat_to_int(v___x_1272_);
lean_inc(v_p_1271_);
v___x_1276_ = l_Lean_Grind_Linarith_Poly_div(v_p_1271_, v___x_1275_);
lean_dec(v___x_1275_);
v___x_1277_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1272_);
lean_ctor_set(v___x_1277_, 1, v_c_1208_);
lean_inc(v___x_1276_);
v___x_1278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1276_);
lean_ctor_set(v___x_1278_, 1, v___x_1277_);
v_c_1230_ = v___x_1278_;
v_p_1231_ = v___x_1276_;
v___y_1232_ = v_a_1209_;
v___y_1233_ = v_a_1210_;
v___y_1234_ = v_a_1211_;
v___y_1235_ = v_a_1212_;
v___y_1236_ = v_a_1213_;
v___y_1237_ = v_a_1214_;
v___y_1238_ = v_a_1215_;
v___y_1239_ = v_a_1216_;
v___y_1240_ = v_a_1217_;
v___y_1241_ = v_a_1218_;
v___y_1242_ = v_a_1219_;
goto v___jp_1229_;
}
else
{
lean_inc(v_p_1271_);
lean_dec(v___x_1272_);
v_c_1230_ = v_c_1208_;
v_p_1231_ = v_p_1271_;
v___y_1232_ = v_a_1209_;
v___y_1233_ = v_a_1210_;
v___y_1234_ = v_a_1211_;
v___y_1235_ = v_a_1212_;
v___y_1236_ = v_a_1213_;
v___y_1237_ = v_a_1214_;
v___y_1238_ = v_a_1215_;
v___y_1239_ = v_a_1216_;
v___y_1240_ = v_a_1217_;
v___y_1241_ = v_a_1218_;
v___y_1242_ = v_a_1219_;
goto v___jp_1229_;
}
}
}
else
{
lean_object* v_a_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1286_; 
lean_dec_ref(v_c_1208_);
v_a_1279_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1281_ = v___x_1267_;
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_a_1279_);
lean_dec(v___x_1267_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1284_; 
if (v_isShared_1282_ == 0)
{
v___x_1284_ = v___x_1281_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_a_1279_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
}
}
}
v___jp_1221_:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1225_ = lean_nat_abs(v___y_1222_);
lean_dec(v___y_1222_);
v___x_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1226_, 0, v___y_1223_);
lean_ctor_set(v___x_1226_, 1, v_c_1224_);
v___x_1227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1225_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
v___x_1228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
return v___x_1228_;
}
v___jp_1229_:
{
lean_object* v___x_1243_; 
lean_inc(v_p_1231_);
v___x_1243_ = l_Lean_Grind_Linarith_Poly_pickVarToElim_x3f(v_p_1231_);
if (lean_obj_tag(v___x_1243_) == 1)
{
lean_object* v_val_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1264_; 
v_val_1244_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1246_ = v___x_1243_;
v_isShared_1247_ = v_isSharedCheck_1264_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_val_1244_);
lean_dec(v___x_1243_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1264_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v_fst_1248_; lean_object* v_snd_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1263_; 
v_fst_1248_ = lean_ctor_get(v_val_1244_, 0);
v_snd_1249_ = lean_ctor_get(v_val_1244_, 1);
v_isSharedCheck_1263_ = !lean_is_exclusive(v_val_1244_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1251_ = v_val_1244_;
v_isShared_1252_ = v_isSharedCheck_1263_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_snd_1249_);
lean_inc(v_fst_1248_);
lean_dec(v_val_1244_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1263_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1253_; uint8_t v___x_1254_; 
v___x_1253_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0);
v___x_1254_ = lean_int_dec_lt(v_fst_1248_, v___x_1253_);
if (v___x_1254_ == 0)
{
lean_del_object(v___x_1251_);
lean_del_object(v___x_1246_);
lean_dec(v_p_1231_);
v___y_1222_ = v_fst_1248_;
v___y_1223_ = v_snd_1249_;
v_c_1224_ = v_c_1230_;
goto v___jp_1221_;
}
else
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1258_; 
v___x_1255_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0);
v___x_1256_ = l_Lean_Grind_Linarith_Poly_mul(v_p_1231_, v___x_1255_);
if (v_isShared_1247_ == 0)
{
lean_ctor_set_tag(v___x_1246_, 3);
lean_ctor_set(v___x_1246_, 0, v_c_1230_);
v___x_1258_ = v___x_1246_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_c_1230_);
v___x_1258_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
lean_object* v___x_1260_; 
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 1, v___x_1258_);
lean_ctor_set(v___x_1251_, 0, v___x_1256_);
v___x_1260_ = v___x_1251_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v___x_1256_);
lean_ctor_set(v_reuseFailAlloc_1261_, 1, v___x_1258_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
v___y_1222_ = v_fst_1248_;
v___y_1223_ = v_snd_1249_;
v_c_1224_ = v___x_1260_;
goto v___jp_1221_;
}
}
}
}
}
}
else
{
lean_object* v___x_1265_; lean_object* v___x_1266_; 
lean_dec(v___x_1243_);
lean_dec(v_p_1231_);
lean_dec_ref(v_c_1230_);
v___x_1265_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___closed__3);
v___x_1266_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm_spec__0(v___x_1265_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_);
return v___x_1266_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm___boxed(lean_object* v_c_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm(v_c_1287_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_, v_a_1293_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_);
lean_dec(v_a_1298_);
lean_dec_ref(v_a_1297_);
lean_dec(v_a_1296_);
lean_dec_ref(v_a_1295_);
lean_dec(v_a_1294_);
lean_dec_ref(v_a_1293_);
lean_dec(v_a_1292_);
lean_dec_ref(v_a_1291_);
lean_dec(v_a_1290_);
lean_dec(v_a_1289_);
lean_dec(v_a_1288_);
return v_res_1300_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = l_Lean_maxRecDepthErrorMessage;
v___x_1307_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
return v___x_1307_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; 
v___x_1308_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__3);
v___x_1309_ = l_Lean_MessageData_ofFormat(v___x_1308_);
return v___x_1309_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1310_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__4);
v___x_1311_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__2));
v___x_1312_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1311_);
lean_ctor_set(v___x_1312_, 1, v___x_1310_);
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg(lean_object* v_ref_1313_){
_start:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1315_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___closed__5);
v___x_1316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1316_, 0, v_ref_1313_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
v___x_1317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg___boxed(lean_object* v_ref_1318_, lean_object* v___y_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg(v_ref_1318_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0(lean_object* v_00_u03b1_1321_, lean_object* v_ref_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v___x_1335_; 
v___x_1335_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg(v_ref_1322_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___boxed(lean_object* v_00_u03b1_1336_, lean_object* v_ref_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v_res_1350_; 
v_res_1350_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0(v_00_u03b1_1336_, v_ref_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_);
lean_dec(v___y_1348_);
lean_dec_ref(v___y_1347_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1345_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
lean_dec(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec(v___y_1338_);
return v_res_1350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts(lean_object* v_c_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_){
_start:
{
lean_object* v___y_1365_; lean_object* v___y_1366_; lean_object* v___y_1367_; lean_object* v___y_1368_; lean_object* v___y_1369_; lean_object* v___y_1370_; lean_object* v___y_1371_; lean_object* v___y_1372_; lean_object* v___y_1373_; lean_object* v___y_1374_; lean_object* v___y_1375_; lean_object* v___y_1376_; lean_object* v___y_1377_; lean_object* v___y_1378_; lean_object* v_toCold_1382_; lean_object* v_p_1383_; lean_object* v_currRecDepth_1384_; lean_object* v_ref_1385_; uint8_t v_diag_1386_; uint8_t v_suppressElabErrors_1387_; lean_object* v_options_1388_; lean_object* v_maxRecDepth_1389_; lean_object* v_inheritedTraceOptions_1390_; lean_object* v___x_1484_; uint8_t v___x_1485_; 
v_toCold_1382_ = lean_ctor_get(v_a_1361_, 0);
lean_inc_ref(v_toCold_1382_);
v_p_1383_ = lean_ctor_get(v_c_1351_, 0);
v_currRecDepth_1384_ = lean_ctor_get(v_a_1361_, 1);
lean_inc(v_currRecDepth_1384_);
v_ref_1385_ = lean_ctor_get(v_a_1361_, 2);
lean_inc(v_ref_1385_);
v_diag_1386_ = lean_ctor_get_uint8(v_a_1361_, sizeof(void*)*3);
v_suppressElabErrors_1387_ = lean_ctor_get_uint8(v_a_1361_, sizeof(void*)*3 + 1);
lean_dec_ref(v_a_1361_);
v_options_1388_ = lean_ctor_get(v_toCold_1382_, 2);
lean_inc_ref(v_options_1388_);
v_maxRecDepth_1389_ = lean_ctor_get(v_toCold_1382_, 3);
v_inheritedTraceOptions_1390_ = lean_ctor_get(v_toCold_1382_, 11);
lean_inc_ref(v_inheritedTraceOptions_1390_);
v___x_1484_ = lean_unsigned_to_nat(0u);
v___x_1485_ = lean_nat_dec_eq(v_maxRecDepth_1389_, v___x_1484_);
if (v___x_1485_ == 0)
{
uint8_t v___x_1486_; 
v___x_1486_ = lean_nat_dec_eq(v_currRecDepth_1384_, v_maxRecDepth_1389_);
if (v___x_1486_ == 0)
{
goto v___jp_1391_;
}
else
{
lean_object* v___x_1487_; 
lean_dec_ref(v_inheritedTraceOptions_1390_);
lean_dec_ref(v_options_1388_);
lean_dec(v_currRecDepth_1384_);
lean_dec_ref(v_toCold_1382_);
lean_dec_ref(v_c_1351_);
v___x_1487_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg(v_ref_1385_);
return v___x_1487_;
}
}
else
{
goto v___jp_1391_;
}
v___jp_1364_:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = lean_alloc_ctor(5, 3, 0);
lean_ctor_set(v___x_1379_, 0, v___y_1367_);
lean_ctor_set(v___x_1379_, 1, v___y_1365_);
lean_ctor_set(v___x_1379_, 2, v_c_1351_);
v___x_1380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1380_, 0, v___y_1366_);
lean_ctor_set(v___x_1380_, 1, v___x_1379_);
v_c_1351_ = v___x_1380_;
v_a_1352_ = v___y_1368_;
v_a_1353_ = v___y_1369_;
v_a_1354_ = v___y_1370_;
v_a_1355_ = v___y_1371_;
v_a_1356_ = v___y_1372_;
v_a_1357_ = v___y_1373_;
v_a_1358_ = v___y_1374_;
v_a_1359_ = v___y_1375_;
v_a_1360_ = v___y_1376_;
v_a_1361_ = v___y_1377_;
v_a_1362_ = v___y_1378_;
goto _start;
}
v___jp_1391_:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1392_ = lean_unsigned_to_nat(1u);
v___x_1393_ = lean_nat_add(v_currRecDepth_1384_, v___x_1392_);
lean_dec(v_currRecDepth_1384_);
v___x_1394_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1394_, 0, v_toCold_1382_);
lean_ctor_set(v___x_1394_, 1, v___x_1393_);
lean_ctor_set(v___x_1394_, 2, v_ref_1385_);
lean_ctor_set_uint8(v___x_1394_, sizeof(void*)*3, v_diag_1386_);
lean_ctor_set_uint8(v___x_1394_, sizeof(void*)*3 + 1, v_suppressElabErrors_1387_);
lean_inc(v_p_1383_);
v___x_1395_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar(v_p_1383_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_, v_a_1359_, v_a_1360_, v___x_1394_, v_a_1362_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_object* v_a_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1475_; 
v_a_1396_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1475_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1398_ = v___x_1395_;
v_isShared_1399_ = v_isSharedCheck_1475_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_a_1396_);
lean_dec(v___x_1395_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1475_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
if (lean_obj_tag(v_a_1396_) == 1)
{
lean_object* v_val_1400_; lean_object* v_snd_1401_; uint8_t v_hasTrace_1402_; 
lean_del_object(v___x_1398_);
v_val_1400_ = lean_ctor_get(v_a_1396_, 0);
lean_inc(v_val_1400_);
lean_dec_ref_known(v_a_1396_, 1);
v_snd_1401_ = lean_ctor_get(v_val_1400_, 1);
lean_inc(v_snd_1401_);
v_hasTrace_1402_ = lean_ctor_get_uint8(v_options_1388_, sizeof(void*)*1);
if (v_hasTrace_1402_ == 0)
{
lean_object* v_fst_1403_; lean_object* v_fst_1404_; lean_object* v_snd_1405_; 
lean_dec_ref(v_inheritedTraceOptions_1390_);
lean_dec_ref(v_options_1388_);
v_fst_1403_ = lean_ctor_get(v_val_1400_, 0);
lean_inc(v_fst_1403_);
lean_dec(v_val_1400_);
v_fst_1404_ = lean_ctor_get(v_snd_1401_, 0);
lean_inc(v_fst_1404_);
v_snd_1405_ = lean_ctor_get(v_snd_1401_, 1);
lean_inc(v_snd_1405_);
lean_dec(v_snd_1401_);
v___y_1365_ = v_fst_1404_;
v___y_1366_ = v_snd_1405_;
v___y_1367_ = v_fst_1403_;
v___y_1368_ = v_a_1352_;
v___y_1369_ = v_a_1353_;
v___y_1370_ = v_a_1354_;
v___y_1371_ = v_a_1355_;
v___y_1372_ = v_a_1356_;
v___y_1373_ = v_a_1357_;
v___y_1374_ = v_a_1358_;
v___y_1375_ = v_a_1359_;
v___y_1376_ = v_a_1360_;
v___y_1377_ = v___x_1394_;
v___y_1378_ = v_a_1362_;
goto v___jp_1364_;
}
else
{
lean_object* v_fst_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1470_; 
v_fst_1406_ = lean_ctor_get(v_val_1400_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v_val_1400_);
if (v_isSharedCheck_1470_ == 0)
{
lean_object* v_unused_1471_; 
v_unused_1471_ = lean_ctor_get(v_val_1400_, 1);
lean_dec(v_unused_1471_);
v___x_1408_ = v_val_1400_;
v_isShared_1409_ = v_isSharedCheck_1470_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_fst_1406_);
lean_dec(v_val_1400_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1470_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v_fst_1410_; lean_object* v_snd_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1469_; 
v_fst_1410_ = lean_ctor_get(v_snd_1401_, 0);
v_snd_1411_ = lean_ctor_get(v_snd_1401_, 1);
v_isSharedCheck_1469_ = !lean_is_exclusive(v_snd_1401_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1413_ = v_snd_1401_;
v_isShared_1414_ = v_isSharedCheck_1469_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_snd_1411_);
lean_inc(v_fst_1410_);
lean_dec(v_snd_1401_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1469_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; uint8_t v___x_1417_; 
v___x_1415_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__4));
v___x_1416_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__7, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__7);
v___x_1417_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1390_, v_options_1388_, v___x_1416_);
lean_dec_ref(v_options_1388_);
lean_dec_ref(v_inheritedTraceOptions_1390_);
if (v___x_1417_ == 0)
{
lean_del_object(v___x_1413_);
lean_del_object(v___x_1408_);
v___y_1365_ = v_fst_1410_;
v___y_1366_ = v_snd_1411_;
v___y_1367_ = v_fst_1406_;
v___y_1368_ = v_a_1352_;
v___y_1369_ = v_a_1353_;
v___y_1370_ = v_a_1354_;
v___y_1371_ = v_a_1355_;
v___y_1372_ = v_a_1356_;
v___y_1373_ = v_a_1357_;
v___y_1374_ = v_a_1358_;
v___y_1375_ = v_a_1359_;
v___y_1376_ = v_a_1360_;
v___y_1377_ = v___x_1394_;
v___y_1378_ = v_a_1362_;
goto v___jp_1364_;
}
else
{
lean_object* v___x_1418_; 
v___x_1418_ = l_Lean_Meta_Grind_Arith_Linear_getVar(v_fst_1406_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_, v_a_1359_, v_a_1360_, v___x_1394_, v_a_1362_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v___x_1420_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc(v_a_1419_);
lean_dec_ref_known(v___x_1418_, 1);
v___x_1420_ = l_Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1(v_c_1351_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_, v_a_1359_, v_a_1360_, v___x_1394_, v_a_1362_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_a_1421_; lean_object* v___x_1422_; 
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
lean_inc(v_a_1421_);
lean_dec_ref_known(v___x_1420_, 1);
v___x_1422_ = l_Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1(v_fst_1410_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_, v_a_1356_, v_a_1357_, v_a_1358_, v_a_1359_, v_a_1360_, v___x_1394_, v_a_1362_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1427_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_a_1423_);
lean_dec_ref_known(v___x_1422_, 1);
v___x_1424_ = l_Lean_MessageData_ofExpr(v_a_1419_);
v___x_1425_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9);
if (v_isShared_1414_ == 0)
{
lean_ctor_set_tag(v___x_1413_, 7);
lean_ctor_set(v___x_1413_, 1, v___x_1425_);
lean_ctor_set(v___x_1413_, 0, v___x_1424_);
v___x_1427_ = v___x_1413_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___x_1424_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v___x_1425_);
v___x_1427_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
lean_object* v___x_1428_; lean_object* v___x_1430_; 
v___x_1428_ = l_Lean_MessageData_ofExpr(v_a_1421_);
if (v_isShared_1409_ == 0)
{
lean_ctor_set_tag(v___x_1408_, 7);
lean_ctor_set(v___x_1408_, 1, v___x_1428_);
lean_ctor_set(v___x_1408_, 0, v___x_1427_);
v___x_1430_ = v___x_1408_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1427_);
lean_ctor_set(v_reuseFailAlloc_1443_, 1, v___x_1428_);
v___x_1430_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
lean_ctor_set(v___x_1431_, 1, v___x_1425_);
v___x_1432_ = l_Lean_MessageData_ofExpr(v_a_1423_);
v___x_1433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1431_);
lean_ctor_set(v___x_1433_, 1, v___x_1432_);
v___x_1434_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v___x_1415_, v___x_1433_, v_a_1359_, v_a_1360_, v___x_1394_, v_a_1362_);
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_dec_ref_known(v___x_1434_, 1);
v___y_1365_ = v_fst_1410_;
v___y_1366_ = v_snd_1411_;
v___y_1367_ = v_fst_1406_;
v___y_1368_ = v_a_1352_;
v___y_1369_ = v_a_1353_;
v___y_1370_ = v_a_1354_;
v___y_1371_ = v_a_1355_;
v___y_1372_ = v_a_1356_;
v___y_1373_ = v_a_1357_;
v___y_1374_ = v_a_1358_;
v___y_1375_ = v_a_1359_;
v___y_1376_ = v_a_1360_;
v___y_1377_ = v___x_1394_;
v___y_1378_ = v_a_1362_;
goto v___jp_1364_;
}
else
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
lean_dec(v_snd_1411_);
lean_dec(v_fst_1410_);
lean_dec(v_fst_1406_);
lean_dec_ref_known(v___x_1394_, 3);
lean_dec_ref(v_c_1351_);
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1437_ = v___x_1434_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1434_);
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
}
else
{
lean_object* v_a_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1452_; 
lean_dec(v_a_1421_);
lean_dec(v_a_1419_);
lean_del_object(v___x_1413_);
lean_dec(v_snd_1411_);
lean_dec(v_fst_1410_);
lean_del_object(v___x_1408_);
lean_dec(v_fst_1406_);
lean_dec_ref_known(v___x_1394_, 3);
lean_dec_ref(v_c_1351_);
v_a_1445_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1447_ = v___x_1422_;
v_isShared_1448_ = v_isSharedCheck_1452_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_a_1445_);
lean_dec(v___x_1422_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1452_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1450_; 
if (v_isShared_1448_ == 0)
{
v___x_1450_ = v___x_1447_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v_a_1445_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
}
}
else
{
lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1460_; 
lean_dec(v_a_1419_);
lean_del_object(v___x_1413_);
lean_dec(v_snd_1411_);
lean_dec(v_fst_1410_);
lean_del_object(v___x_1408_);
lean_dec(v_fst_1406_);
lean_dec_ref_known(v___x_1394_, 3);
lean_dec_ref(v_c_1351_);
v_a_1453_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1455_ = v___x_1420_;
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_dec(v___x_1420_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1458_; 
if (v_isShared_1456_ == 0)
{
v___x_1458_ = v___x_1455_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_a_1453_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
}
else
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
lean_del_object(v___x_1413_);
lean_dec(v_snd_1411_);
lean_dec(v_fst_1410_);
lean_del_object(v___x_1408_);
lean_dec(v_fst_1406_);
lean_dec_ref_known(v___x_1394_, 3);
lean_dec_ref(v_c_1351_);
v_a_1461_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1418_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1418_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
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
lean_object* v___x_1473_; 
lean_dec(v_a_1396_);
lean_dec_ref_known(v___x_1394_, 3);
lean_dec_ref(v_inheritedTraceOptions_1390_);
lean_dec_ref(v_options_1388_);
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 0, v_c_1351_);
v___x_1473_ = v___x_1398_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_c_1351_);
v___x_1473_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
return v___x_1473_;
}
}
}
}
else
{
lean_object* v_a_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1483_; 
lean_dec_ref_known(v___x_1394_, 3);
lean_dec_ref(v_inheritedTraceOptions_1390_);
lean_dec_ref(v_options_1388_);
lean_dec_ref(v_c_1351_);
v_a_1476_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1483_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1483_ == 0)
{
v___x_1478_ = v___x_1395_;
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_a_1476_);
lean_dec(v___x_1395_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1481_; 
if (v_isShared_1479_ == 0)
{
v___x_1481_ = v___x_1478_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_a_1476_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts___boxed(lean_object* v_c_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts(v_c_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_, v_a_1497_, v_a_1498_, v_a_1499_);
lean_dec(v_a_1499_);
lean_dec(v_a_1497_);
lean_dec_ref(v_a_1496_);
lean_dec(v_a_1495_);
lean_dec_ref(v_a_1494_);
lean_dec(v_a_1493_);
lean_dec_ref(v_a_1492_);
lean_dec(v_a_1491_);
lean_dec(v_a_1490_);
lean_dec(v_a_1489_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_msg_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v_ref_1508_; lean_object* v___x_1509_; lean_object* v_a_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1518_; 
v_ref_1508_ = lean_ctor_get(v___y_1505_, 2);
v___x_1509_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2_spec__5(v_msg_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_);
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1518_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1518_ == 0)
{
v___x_1512_ = v___x_1509_;
v_isShared_1513_ = v_isSharedCheck_1518_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_a_1510_);
lean_dec(v___x_1509_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1518_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1514_; lean_object* v___x_1516_; 
lean_inc(v_ref_1508_);
v___x_1514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1514_, 0, v_ref_1508_);
lean_ctor_set(v___x_1514_, 1, v_a_1510_);
if (v_isShared_1513_ == 0)
{
lean_ctor_set_tag(v___x_1512_, 1);
lean_ctor_set(v___x_1512_, 0, v___x_1514_);
v___x_1516_ = v___x_1512_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v___x_1514_);
v___x_1516_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
return v___x_1516_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_msg_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1_spec__2___redArg(v_msg_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_);
lean_dec(v___y_1523_);
lean_dec_ref(v___y_1522_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
return v_res_1525_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1___closed__0));
v___x_1528_ = l_Lean_stringToMessageData(v___x_1527_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1(lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v___x_1541_; 
v___x_1541_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v_a_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1553_; 
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1544_ = v___x_1541_;
v_isShared_1545_ = v_isSharedCheck_1553_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_a_1542_);
lean_dec(v___x_1541_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1553_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v_leFn_x3f_1546_; 
v_leFn_x3f_1546_ = lean_ctor_get(v_a_1542_, 20);
lean_inc(v_leFn_x3f_1546_);
lean_dec(v_a_1542_);
if (lean_obj_tag(v_leFn_x3f_1546_) == 1)
{
lean_object* v_val_1547_; lean_object* v___x_1549_; 
v_val_1547_ = lean_ctor_get(v_leFn_x3f_1546_, 0);
lean_inc(v_val_1547_);
lean_dec_ref_known(v_leFn_x3f_1546_, 1);
if (v_isShared_1545_ == 0)
{
lean_ctor_set(v___x_1544_, 0, v_val_1547_);
v___x_1549_ = v___x_1544_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_val_1547_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
else
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
lean_dec(v_leFn_x3f_1546_);
lean_del_object(v___x_1544_);
v___x_1551_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1___closed__1);
v___x_1552_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1_spec__2___redArg(v___x_1551_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_);
return v___x_1552_;
}
}
}
else
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1561_; 
v_a_1554_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1556_ = v___x_1541_;
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1541_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1557_ == 0)
{
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1554_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1___boxed(lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1(v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
lean_dec(v___y_1568_);
lean_dec_ref(v___y_1567_);
lean_dec(v___y_1566_);
lean_dec_ref(v___y_1565_);
lean_dec(v___y_1564_);
lean_dec(v___y_1563_);
lean_dec(v___y_1562_);
return v_res_1574_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2___closed__0));
v___x_1577_ = l_Lean_stringToMessageData(v___x_1576_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2(lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_){
_start:
{
lean_object* v___x_1590_; 
v___x_1590_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_);
if (lean_obj_tag(v___x_1590_) == 0)
{
lean_object* v_a_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1602_; 
v_a_1591_ = lean_ctor_get(v___x_1590_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___x_1590_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1593_ = v___x_1590_;
v_isShared_1594_ = v_isSharedCheck_1602_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_a_1591_);
lean_dec(v___x_1590_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1602_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v_ltFn_x3f_1595_; 
v_ltFn_x3f_1595_ = lean_ctor_get(v_a_1591_, 21);
lean_inc(v_ltFn_x3f_1595_);
lean_dec(v_a_1591_);
if (lean_obj_tag(v_ltFn_x3f_1595_) == 1)
{
lean_object* v_val_1596_; lean_object* v___x_1598_; 
v_val_1596_ = lean_ctor_get(v_ltFn_x3f_1595_, 0);
lean_inc(v_val_1596_);
lean_dec_ref_known(v_ltFn_x3f_1595_, 1);
if (v_isShared_1594_ == 0)
{
lean_ctor_set(v___x_1593_, 0, v_val_1596_);
v___x_1598_ = v___x_1593_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_val_1596_);
v___x_1598_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
return v___x_1598_;
}
}
else
{
lean_object* v___x_1600_; lean_object* v___x_1601_; 
lean_dec(v_ltFn_x3f_1595_);
lean_del_object(v___x_1593_);
v___x_1600_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2___closed__1);
v___x_1601_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1_spec__2___redArg(v___x_1600_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_);
return v___x_1601_;
}
}
}
else
{
lean_object* v_a_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1610_; 
v_a_1603_ = lean_ctor_get(v___x_1590_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v___x_1590_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1605_ = v___x_1590_;
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_a_1603_);
lean_dec(v___x_1590_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1608_; 
if (v_isShared_1606_ == 0)
{
v___x_1608_ = v___x_1605_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_a_1603_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
return v___x_1608_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2___boxed(lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_){
_start:
{
lean_object* v_res_1623_; 
v_res_1623_ = l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2(v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
lean_dec(v___y_1613_);
lean_dec(v___y_1612_);
lean_dec(v___y_1611_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0(lean_object* v_p_1624_, uint8_t v_strict_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
if (v_strict_1625_ == 0)
{
lean_object* v___x_1638_; 
v___x_1638_ = l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1(v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v_a_1639_; lean_object* v___x_1640_; 
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
lean_inc(v_a_1639_);
lean_dec_ref_known(v___x_1638_, 1);
v___x_1640_ = l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0(v_p_1624_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v_a_1641_; lean_object* v___x_1642_; 
v_a_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v___x_1640_, 1);
v___x_1642_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1652_; 
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1645_ = v___x_1642_;
v_isShared_1646_ = v_isSharedCheck_1652_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1642_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1652_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v_ofNatZero_1647_; lean_object* v___x_1648_; lean_object* v___x_1650_; 
v_ofNatZero_1647_ = lean_ctor_get(v_a_1643_, 18);
lean_inc_ref(v_ofNatZero_1647_);
lean_dec(v_a_1643_);
v___x_1648_ = l_Lean_mkAppB(v_a_1639_, v_a_1641_, v_ofNatZero_1647_);
if (v_isShared_1646_ == 0)
{
lean_ctor_set(v___x_1645_, 0, v___x_1648_);
v___x_1650_ = v___x_1645_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v___x_1648_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
else
{
lean_object* v_a_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1660_; 
lean_dec(v_a_1641_);
lean_dec(v_a_1639_);
v_a_1653_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1660_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1660_ == 0)
{
v___x_1655_ = v___x_1642_;
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_a_1653_);
lean_dec(v___x_1642_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1658_; 
if (v_isShared_1656_ == 0)
{
v___x_1658_ = v___x_1655_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_a_1653_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
}
else
{
lean_dec(v_a_1639_);
return v___x_1640_;
}
}
else
{
return v___x_1638_;
}
}
else
{
lean_object* v___x_1661_; 
v___x_1661_ = l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__2(v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_object* v_a_1662_; lean_object* v___x_1663_; 
v_a_1662_ = lean_ctor_get(v___x_1661_, 0);
lean_inc(v_a_1662_);
lean_dec_ref_known(v___x_1661_, 1);
v___x_1663_ = l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0(v_p_1624_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v_a_1664_; lean_object* v___x_1665_; 
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1664_);
lean_dec_ref_known(v___x_1663_, 1);
v___x_1665_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1665_) == 0)
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1675_; 
v_a_1666_ = lean_ctor_get(v___x_1665_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1665_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1668_ = v___x_1665_;
v_isShared_1669_ = v_isSharedCheck_1675_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1665_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1675_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v_ofNatZero_1670_; lean_object* v___x_1671_; lean_object* v___x_1673_; 
v_ofNatZero_1670_ = lean_ctor_get(v_a_1666_, 18);
lean_inc_ref(v_ofNatZero_1670_);
lean_dec(v_a_1666_);
v___x_1671_ = l_Lean_mkAppB(v_a_1662_, v_a_1664_, v_ofNatZero_1670_);
if (v_isShared_1669_ == 0)
{
lean_ctor_set(v___x_1668_, 0, v___x_1671_);
v___x_1673_ = v___x_1668_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v___x_1671_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
else
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1683_; 
lean_dec(v_a_1664_);
lean_dec(v_a_1662_);
v_a_1676_ = lean_ctor_get(v___x_1665_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1665_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1678_ = v___x_1665_;
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v___x_1665_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1681_; 
if (v_isShared_1679_ == 0)
{
v___x_1681_ = v___x_1678_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_a_1676_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
else
{
lean_dec(v_a_1662_);
return v___x_1663_;
}
}
else
{
return v___x_1661_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0___boxed(lean_object* v_p_1684_, lean_object* v_strict_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_){
_start:
{
uint8_t v_strict_boxed_1698_; lean_object* v_res_1699_; 
v_strict_boxed_1698_ = lean_unbox(v_strict_1685_);
v_res_1699_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0(v_p_1684_, v_strict_boxed_1698_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec(v___y_1694_);
lean_dec_ref(v___y_1693_);
lean_dec(v___y_1692_);
lean_dec_ref(v___y_1691_);
lean_dec(v___y_1690_);
lean_dec_ref(v___y_1689_);
lean_dec(v___y_1688_);
lean_dec(v___y_1687_);
lean_dec(v___y_1686_);
lean_dec(v_p_1684_);
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0(lean_object* v_c_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_){
_start:
{
lean_object* v_p_1713_; uint8_t v_strict_1714_; lean_object* v___x_1715_; 
v_p_1713_ = lean_ctor_get(v_c_1700_, 0);
v_strict_1714_ = lean_ctor_get_uint8(v_c_1700_, sizeof(void*)*2);
v___x_1715_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0(v_p_1713_, v_strict_1714_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0___boxed(lean_object* v_c_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
lean_object* v_res_1729_; 
v_res_1729_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0(v_c_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
lean_dec(v___y_1727_);
lean_dec_ref(v___y_1726_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec(v___y_1723_);
lean_dec_ref(v___y_1722_);
lean_dec(v___y_1721_);
lean_dec_ref(v___y_1720_);
lean_dec(v___y_1719_);
lean_dec(v___y_1718_);
lean_dec(v___y_1717_);
lean_dec_ref(v_c_1716_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq(lean_object* v_a_1730_, lean_object* v_x_1731_, lean_object* v_c_u2081_1732_, lean_object* v_b_1733_, lean_object* v_c_u2082_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_){
_start:
{
lean_object* v_toCold_1747_; lean_object* v_options_1748_; lean_object* v_p_1749_; lean_object* v_p_1750_; uint8_t v_strict_1751_; lean_object* v_inheritedTraceOptions_1752_; uint8_t v_hasTrace_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v_p_1758_; 
v_toCold_1747_ = lean_ctor_get(v_a_1744_, 0);
v_options_1748_ = lean_ctor_get(v_toCold_1747_, 2);
v_p_1749_ = lean_ctor_get(v_c_u2081_1732_, 0);
v_p_1750_ = lean_ctor_get(v_c_u2082_1734_, 0);
v_strict_1751_ = lean_ctor_get_uint8(v_c_u2082_1734_, sizeof(void*)*2);
v_inheritedTraceOptions_1752_ = lean_ctor_get(v_toCold_1747_, 11);
v_hasTrace_1753_ = lean_ctor_get_uint8(v_options_1748_, sizeof(void*)*1);
v___x_1754_ = lean_nat_to_int(v_a_1730_);
lean_inc(v_p_1750_);
v___x_1755_ = l_Lean_Grind_Linarith_Poly_mul(v_p_1750_, v___x_1754_);
lean_dec(v___x_1754_);
v___x_1756_ = lean_int_neg(v_b_1733_);
lean_inc(v_p_1749_);
v___x_1757_ = l_Lean_Grind_Linarith_Poly_mul(v_p_1749_, v___x_1756_);
lean_dec(v___x_1756_);
v_p_1758_ = l_Lean_Grind_Linarith_Poly_combine(v___x_1755_, v___x_1757_);
if (v_hasTrace_1753_ == 0)
{
goto v___jp_1759_;
}
else
{
lean_object* v_cls_1763_; lean_object* v___x_1764_; uint8_t v___x_1765_; 
v_cls_1763_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__1));
v___x_1764_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__2);
v___x_1765_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1752_, v_options_1748_, v___x_1764_);
if (v___x_1765_ == 0)
{
goto v___jp_1759_;
}
else
{
lean_object* v___x_1766_; 
v___x_1766_ = l_Lean_Meta_Grind_Arith_Linear_getVar(v_x_1731_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_, v_a_1739_, v_a_1740_, v_a_1741_, v_a_1742_, v_a_1743_, v_a_1744_, v_a_1745_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v_a_1767_; lean_object* v___x_1768_; 
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc(v_a_1767_);
lean_dec_ref_known(v___x_1766_, 1);
v___x_1768_ = l_Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1(v_c_u2081_1732_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_, v_a_1739_, v_a_1740_, v_a_1741_, v_a_1742_, v_a_1743_, v_a_1744_, v_a_1745_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; lean_object* v___x_1770_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1769_);
lean_dec_ref_known(v___x_1768_, 1);
v___x_1770_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0(v_c_u2082_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_, v_a_1739_, v_a_1740_, v_a_1741_, v_a_1742_, v_a_1743_, v_a_1744_, v_a_1745_);
if (lean_obj_tag(v___x_1770_) == 0)
{
lean_object* v_a_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
v_a_1771_ = lean_ctor_get(v___x_1770_, 0);
lean_inc(v_a_1771_);
lean_dec_ref_known(v___x_1770_, 1);
v___x_1772_ = l_Lean_MessageData_ofExpr(v_a_1767_);
v___x_1773_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9);
v___x_1774_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1772_);
lean_ctor_set(v___x_1774_, 1, v___x_1773_);
v___x_1775_ = l_Lean_MessageData_ofExpr(v_a_1769_);
v___x_1776_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1774_);
lean_ctor_set(v___x_1776_, 1, v___x_1775_);
v___x_1777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1776_);
lean_ctor_set(v___x_1777_, 1, v___x_1773_);
v___x_1778_ = l_Lean_MessageData_ofExpr(v_a_1771_);
v___x_1779_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1779_, 0, v___x_1777_);
lean_ctor_set(v___x_1779_, 1, v___x_1778_);
v___x_1780_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v_cls_1763_, v___x_1779_, v_a_1742_, v_a_1743_, v_a_1744_, v_a_1745_);
if (lean_obj_tag(v___x_1780_) == 0)
{
lean_dec_ref_known(v___x_1780_, 1);
goto v___jp_1759_;
}
else
{
lean_object* v_a_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1788_; 
lean_dec(v_p_1758_);
lean_dec_ref(v_c_u2082_1734_);
lean_dec_ref(v_c_u2081_1732_);
lean_dec(v_x_1731_);
v_a_1781_ = lean_ctor_get(v___x_1780_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1780_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1783_ = v___x_1780_;
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_a_1781_);
lean_dec(v___x_1780_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1784_ == 0)
{
v___x_1786_ = v___x_1783_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_a_1781_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
}
else
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1796_; 
lean_dec(v_a_1769_);
lean_dec(v_a_1767_);
lean_dec(v_p_1758_);
lean_dec_ref(v_c_u2082_1734_);
lean_dec_ref(v_c_u2081_1732_);
lean_dec(v_x_1731_);
v_a_1789_ = lean_ctor_get(v___x_1770_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v___x_1770_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1791_ = v___x_1770_;
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_a_1789_);
lean_dec(v___x_1770_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1794_; 
if (v_isShared_1792_ == 0)
{
v___x_1794_ = v___x_1791_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v_a_1789_);
v___x_1794_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
return v___x_1794_;
}
}
}
}
else
{
lean_object* v_a_1797_; lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1804_; 
lean_dec(v_a_1767_);
lean_dec(v_p_1758_);
lean_dec_ref(v_c_u2082_1734_);
lean_dec_ref(v_c_u2081_1732_);
lean_dec(v_x_1731_);
v_a_1797_ = lean_ctor_get(v___x_1768_, 0);
v_isSharedCheck_1804_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1799_ = v___x_1768_;
v_isShared_1800_ = v_isSharedCheck_1804_;
goto v_resetjp_1798_;
}
else
{
lean_inc(v_a_1797_);
lean_dec(v___x_1768_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1804_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
lean_object* v___x_1802_; 
if (v_isShared_1800_ == 0)
{
v___x_1802_ = v___x_1799_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v_a_1797_);
v___x_1802_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
return v___x_1802_;
}
}
}
}
else
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1812_; 
lean_dec(v_p_1758_);
lean_dec_ref(v_c_u2082_1734_);
lean_dec_ref(v_c_u2081_1732_);
lean_dec(v_x_1731_);
v_a_1805_ = lean_ctor_get(v___x_1766_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1807_ = v___x_1766_;
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v___x_1766_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1810_; 
if (v_isShared_1808_ == 0)
{
v___x_1810_ = v___x_1807_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_a_1805_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
}
v___jp_1759_:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1760_ = lean_alloc_ctor(13, 3, 0);
lean_ctor_set(v___x_1760_, 0, v_x_1731_);
lean_ctor_set(v___x_1760_, 1, v_c_u2081_1732_);
lean_ctor_set(v___x_1760_, 2, v_c_u2082_1734_);
v___x_1761_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1761_, 0, v_p_1758_);
lean_ctor_set(v___x_1761_, 1, v___x_1760_);
lean_ctor_set_uint8(v___x_1761_, sizeof(void*)*2, v_strict_1751_);
v___x_1762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1761_);
return v___x_1762_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq___boxed(lean_object** _args){
lean_object* v_a_1813_ = _args[0];
lean_object* v_x_1814_ = _args[1];
lean_object* v_c_u2081_1815_ = _args[2];
lean_object* v_b_1816_ = _args[3];
lean_object* v_c_u2082_1817_ = _args[4];
lean_object* v_a_1818_ = _args[5];
lean_object* v_a_1819_ = _args[6];
lean_object* v_a_1820_ = _args[7];
lean_object* v_a_1821_ = _args[8];
lean_object* v_a_1822_ = _args[9];
lean_object* v_a_1823_ = _args[10];
lean_object* v_a_1824_ = _args[11];
lean_object* v_a_1825_ = _args[12];
lean_object* v_a_1826_ = _args[13];
lean_object* v_a_1827_ = _args[14];
lean_object* v_a_1828_ = _args[15];
lean_object* v_a_1829_ = _args[16];
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq(v_a_1813_, v_x_1814_, v_c_u2081_1815_, v_b_1816_, v_c_u2082_1817_, v_a_1818_, v_a_1819_, v_a_1820_, v_a_1821_, v_a_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_);
lean_dec(v_a_1828_);
lean_dec_ref(v_a_1827_);
lean_dec(v_a_1826_);
lean_dec_ref(v_a_1825_);
lean_dec(v_a_1824_);
lean_dec_ref(v_a_1823_);
lean_dec(v_a_1822_);
lean_dec_ref(v_a_1821_);
lean_dec(v_a_1820_);
lean_dec(v_a_1819_);
lean_dec(v_a_1818_);
lean_dec(v_b_1816_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1831_, lean_object* v_msg_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_){
_start:
{
lean_object* v___x_1845_; 
v___x_1845_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1_spec__2___redArg(v_msg_1832_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_);
return v___x_1845_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1846_, lean_object* v_msg_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_){
_start:
{
lean_object* v_res_1860_; 
v_res_1860_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_1846_, v_msg_1847_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_);
lean_dec(v___y_1858_);
lean_dec_ref(v___y_1857_);
lean_dec(v___y_1856_);
lean_dec_ref(v___y_1855_);
lean_dec(v___y_1854_);
lean_dec_ref(v___y_1853_);
lean_dec(v___y_1852_);
lean_dec_ref(v___y_1851_);
lean_dec(v___y_1850_);
lean_dec(v___y_1849_);
lean_dec(v___y_1848_);
return v_res_1860_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0(lean_object* v_a_1869_, lean_object* v_x_1870_, lean_object* v_c_u2081_1871_, lean_object* v_as_1872_, size_t v_sz_1873_, size_t v_i_1874_, lean_object* v_b_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_){
_start:
{
uint8_t v___x_1888_; 
v___x_1888_ = lean_usize_dec_lt(v_i_1874_, v_sz_1873_);
if (v___x_1888_ == 0)
{
lean_object* v___x_1889_; 
lean_dec_ref(v_c_u2081_1871_);
lean_dec(v_x_1870_);
lean_dec(v_a_1869_);
v___x_1889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1889_, 0, v_b_1875_);
return v___x_1889_;
}
else
{
lean_object* v_a_1890_; lean_object* v_fst_1891_; lean_object* v_snd_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
lean_dec_ref(v_b_1875_);
v_a_1890_ = lean_array_uget_borrowed(v_as_1872_, v_i_1874_);
v_fst_1891_ = lean_ctor_get(v_a_1890_, 0);
v_snd_1892_ = lean_ctor_get(v_a_1890_, 1);
v___x_1893_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__0));
lean_inc(v_snd_1892_);
lean_inc_ref(v_c_u2081_1871_);
lean_inc(v_x_1870_);
lean_inc(v_a_1869_);
v___x_1894_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_IneqCnstr_applyEq(v_a_1869_, v_x_1870_, v_c_u2081_1871_, v_fst_1891_, v_snd_1892_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1896_; 
v_a_1895_ = lean_ctor_get(v___x_1894_, 0);
lean_inc(v_a_1895_);
lean_dec_ref_known(v___x_1894_, 1);
v___x_1896_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v_a_1895_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v___x_1897_; 
lean_dec_ref_known(v___x_1896_, 1);
v___x_1897_ = l_Lean_Meta_Grind_Arith_Linear_inconsistent(v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_);
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1910_; 
v_a_1898_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1910_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1900_ = v___x_1897_;
v_isShared_1901_ = v_isSharedCheck_1910_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_dec(v___x_1897_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1910_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
uint8_t v___x_1902_; 
v___x_1902_ = lean_unbox(v_a_1898_);
lean_dec(v_a_1898_);
if (v___x_1902_ == 0)
{
size_t v___x_1903_; size_t v___x_1904_; 
lean_del_object(v___x_1900_);
v___x_1903_ = ((size_t)1ULL);
v___x_1904_ = lean_usize_add(v_i_1874_, v___x_1903_);
v_i_1874_ = v___x_1904_;
v_b_1875_ = v___x_1893_;
goto _start;
}
else
{
lean_object* v___x_1906_; lean_object* v___x_1908_; 
lean_dec_ref(v_c_u2081_1871_);
lean_dec(v_x_1870_);
lean_dec(v_a_1869_);
v___x_1906_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__2));
if (v_isShared_1901_ == 0)
{
lean_ctor_set(v___x_1900_, 0, v___x_1906_);
v___x_1908_ = v___x_1900_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v___x_1906_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
}
}
else
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1918_; 
lean_dec_ref(v_c_u2081_1871_);
lean_dec(v_x_1870_);
lean_dec(v_a_1869_);
v_a_1911_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1913_ = v___x_1897_;
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v___x_1897_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
else
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1926_; 
lean_dec_ref(v_c_u2081_1871_);
lean_dec(v_x_1870_);
lean_dec(v_a_1869_);
v_a_1919_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1921_ = v___x_1896_;
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1896_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1919_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
else
{
lean_object* v_a_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1934_; 
lean_dec_ref(v_c_u2081_1871_);
lean_dec(v_x_1870_);
lean_dec(v_a_1869_);
v_a_1927_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1934_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1934_ == 0)
{
v___x_1929_ = v___x_1894_;
v_isShared_1930_ = v_isSharedCheck_1934_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_a_1927_);
lean_dec(v___x_1894_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1934_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v___x_1932_; 
if (v_isShared_1930_ == 0)
{
v___x_1932_ = v___x_1929_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_a_1927_);
v___x_1932_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
return v___x_1932_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___boxed(lean_object** _args){
lean_object* v_a_1935_ = _args[0];
lean_object* v_x_1936_ = _args[1];
lean_object* v_c_u2081_1937_ = _args[2];
lean_object* v_as_1938_ = _args[3];
lean_object* v_sz_1939_ = _args[4];
lean_object* v_i_1940_ = _args[5];
lean_object* v_b_1941_ = _args[6];
lean_object* v___y_1942_ = _args[7];
lean_object* v___y_1943_ = _args[8];
lean_object* v___y_1944_ = _args[9];
lean_object* v___y_1945_ = _args[10];
lean_object* v___y_1946_ = _args[11];
lean_object* v___y_1947_ = _args[12];
lean_object* v___y_1948_ = _args[13];
lean_object* v___y_1949_ = _args[14];
lean_object* v___y_1950_ = _args[15];
lean_object* v___y_1951_ = _args[16];
lean_object* v___y_1952_ = _args[17];
lean_object* v___y_1953_ = _args[18];
_start:
{
size_t v_sz_boxed_1954_; size_t v_i_boxed_1955_; lean_object* v_res_1956_; 
v_sz_boxed_1954_ = lean_unbox_usize(v_sz_1939_);
lean_dec(v_sz_1939_);
v_i_boxed_1955_ = lean_unbox_usize(v_i_1940_);
lean_dec(v_i_1940_);
v_res_1956_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0(v_a_1935_, v_x_1936_, v_c_u2081_1937_, v_as_1938_, v_sz_boxed_1954_, v_i_boxed_1955_, v_b_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_, v___y_1951_, v___y_1952_);
lean_dec(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_dec(v___y_1950_);
lean_dec_ref(v___y_1949_);
lean_dec(v___y_1948_);
lean_dec_ref(v___y_1947_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec(v___y_1944_);
lean_dec(v___y_1943_);
lean_dec(v___y_1942_);
lean_dec_ref(v_as_1938_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs(lean_object* v_a_1957_, lean_object* v_x_1958_, lean_object* v_c_u2081_1959_, lean_object* v_todo_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_, lean_object* v_a_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_, lean_object* v_a_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_){
_start:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; size_t v_sz_1975_; size_t v___x_1976_; lean_object* v___x_1977_; 
v___x_1973_ = lean_box(0);
v___x_1974_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__0));
v_sz_1975_ = lean_array_size(v_todo_1960_);
v___x_1976_ = ((size_t)0ULL);
v___x_1977_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0(v_a_1957_, v_x_1958_, v_c_u2081_1959_, v_todo_1960_, v_sz_1975_, v___x_1976_, v___x_1974_, v_a_1961_, v_a_1962_, v_a_1963_, v_a_1964_, v_a_1965_, v_a_1966_, v_a_1967_, v_a_1968_, v_a_1969_, v_a_1970_, v_a_1971_);
if (lean_obj_tag(v___x_1977_) == 0)
{
lean_object* v_a_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1990_; 
v_a_1978_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_1990_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_1990_ == 0)
{
v___x_1980_ = v___x_1977_;
v_isShared_1981_ = v_isSharedCheck_1990_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_a_1978_);
lean_dec(v___x_1977_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1990_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v_fst_1982_; 
v_fst_1982_ = lean_ctor_get(v_a_1978_, 0);
lean_inc(v_fst_1982_);
lean_dec(v_a_1978_);
if (lean_obj_tag(v_fst_1982_) == 0)
{
lean_object* v___x_1984_; 
if (v_isShared_1981_ == 0)
{
lean_ctor_set(v___x_1980_, 0, v___x_1973_);
v___x_1984_ = v___x_1980_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v___x_1973_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
return v___x_1984_;
}
}
else
{
lean_object* v_val_1986_; lean_object* v___x_1988_; 
v_val_1986_ = lean_ctor_get(v_fst_1982_, 0);
lean_inc(v_val_1986_);
lean_dec_ref_known(v_fst_1982_, 1);
if (v_isShared_1981_ == 0)
{
lean_ctor_set(v___x_1980_, 0, v_val_1986_);
v___x_1988_ = v___x_1980_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v_val_1986_);
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
else
{
lean_object* v_a_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_1998_; 
v_a_1991_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1993_ = v___x_1977_;
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_a_1991_);
lean_dec(v___x_1977_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1996_; 
if (v_isShared_1994_ == 0)
{
v___x_1996_ = v___x_1993_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_a_1991_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs___boxed(lean_object* v_a_1999_, lean_object* v_x_2000_, lean_object* v_c_u2081_2001_, lean_object* v_todo_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_){
_start:
{
lean_object* v_res_2015_; 
v_res_2015_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs(v_a_1999_, v_x_2000_, v_c_u2081_2001_, v_todo_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_);
lean_dec(v_a_2013_);
lean_dec_ref(v_a_2012_);
lean_dec(v_a_2011_);
lean_dec_ref(v_a_2010_);
lean_dec(v_a_2009_);
lean_dec_ref(v_a_2008_);
lean_dec(v_a_2007_);
lean_dec_ref(v_a_2006_);
lean_dec(v_a_2005_);
lean_dec(v_a_2004_);
lean_dec(v_a_2003_);
lean_dec_ref(v_todo_2002_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__2_spec__5(lean_object* v_x_2016_, lean_object* v_as_2017_, size_t v_sz_2018_, size_t v_i_2019_, lean_object* v_b_2020_){
_start:
{
uint8_t v___x_2021_; 
v___x_2021_ = lean_usize_dec_lt(v_i_2019_, v_sz_2018_);
if (v___x_2021_ == 0)
{
return v_b_2020_;
}
else
{
lean_object* v_snd_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2055_; 
v_snd_2022_ = lean_ctor_get(v_b_2020_, 1);
v_isSharedCheck_2055_ = !lean_is_exclusive(v_b_2020_);
if (v_isSharedCheck_2055_ == 0)
{
lean_object* v_unused_2056_; 
v_unused_2056_ = lean_ctor_get(v_b_2020_, 0);
lean_dec(v_unused_2056_);
v___x_2024_ = v_b_2020_;
v_isShared_2025_ = v_isSharedCheck_2055_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_snd_2022_);
lean_dec(v_b_2020_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2055_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v_fst_2026_; lean_object* v_snd_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2054_; 
v_fst_2026_ = lean_ctor_get(v_snd_2022_, 0);
v_snd_2027_ = lean_ctor_get(v_snd_2022_, 1);
v_isSharedCheck_2054_ = !lean_is_exclusive(v_snd_2022_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2029_ = v_snd_2022_;
v_isShared_2030_ = v_isSharedCheck_2054_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_snd_2027_);
lean_inc(v_fst_2026_);
lean_dec(v_snd_2022_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2054_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v_a_2031_; lean_object* v_p_2032_; lean_object* v___x_2033_; lean_object* v_a_2035_; lean_object* v_b_2042_; lean_object* v___x_2043_; uint8_t v___x_2044_; 
v_a_2031_ = lean_array_uget_borrowed(v_as_2017_, v_i_2019_);
v_p_2032_ = lean_ctor_get(v_a_2031_, 0);
v___x_2033_ = lean_box(0);
v_b_2042_ = l_Lean_Grind_Linarith_Poly_coeff(v_p_2032_, v_x_2016_);
v___x_2043_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0);
v___x_2044_ = lean_int_dec_eq(v_b_2042_, v___x_2043_);
if (v___x_2044_ == 0)
{
lean_object* v___x_2046_; 
lean_inc(v_a_2031_);
if (v_isShared_2025_ == 0)
{
lean_ctor_set(v___x_2024_, 1, v_a_2031_);
lean_ctor_set(v___x_2024_, 0, v_b_2042_);
v___x_2046_ = v___x_2024_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_b_2042_);
lean_ctor_set(v_reuseFailAlloc_2049_, 1, v_a_2031_);
v___x_2046_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
lean_object* v_todo_2047_; lean_object* v___x_2048_; 
v_todo_2047_ = lean_array_push(v_snd_2027_, v___x_2046_);
v___x_2048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2048_, 0, v_fst_2026_);
lean_ctor_set(v___x_2048_, 1, v_todo_2047_);
v_a_2035_ = v___x_2048_;
goto v___jp_2034_;
}
}
else
{
lean_object* v_cs_x27_2050_; lean_object* v___x_2052_; 
lean_dec(v_b_2042_);
lean_inc(v_a_2031_);
v_cs_x27_2050_ = l_Lean_PersistentArray_push___redArg(v_fst_2026_, v_a_2031_);
if (v_isShared_2025_ == 0)
{
lean_ctor_set(v___x_2024_, 1, v_snd_2027_);
lean_ctor_set(v___x_2024_, 0, v_cs_x27_2050_);
v___x_2052_ = v___x_2024_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_cs_x27_2050_);
lean_ctor_set(v_reuseFailAlloc_2053_, 1, v_snd_2027_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
v_a_2035_ = v___x_2052_;
goto v___jp_2034_;
}
}
v___jp_2034_:
{
lean_object* v___x_2037_; 
if (v_isShared_2030_ == 0)
{
lean_ctor_set(v___x_2029_, 1, v_a_2035_);
lean_ctor_set(v___x_2029_, 0, v___x_2033_);
v___x_2037_ = v___x_2029_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v___x_2033_);
lean_ctor_set(v_reuseFailAlloc_2041_, 1, v_a_2035_);
v___x_2037_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
size_t v___x_2038_; size_t v___x_2039_; 
v___x_2038_ = ((size_t)1ULL);
v___x_2039_ = lean_usize_add(v_i_2019_, v___x_2038_);
v_i_2019_ = v___x_2039_;
v_b_2020_ = v___x_2037_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_x_2057_, lean_object* v_as_2058_, lean_object* v_sz_2059_, lean_object* v_i_2060_, lean_object* v_b_2061_){
_start:
{
size_t v_sz_boxed_2062_; size_t v_i_boxed_2063_; lean_object* v_res_2064_; 
v_sz_boxed_2062_ = lean_unbox_usize(v_sz_2059_);
lean_dec(v_sz_2059_);
v_i_boxed_2063_ = lean_unbox_usize(v_i_2060_);
lean_dec(v_i_2060_);
v_res_2064_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__2_spec__5(v_x_2057_, v_as_2058_, v_sz_boxed_2062_, v_i_boxed_2063_, v_b_2061_);
lean_dec_ref(v_as_2058_);
lean_dec(v_x_2057_);
return v_res_2064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__2(lean_object* v_x_2065_, lean_object* v_as_2066_, size_t v_sz_2067_, size_t v_i_2068_, lean_object* v_b_2069_){
_start:
{
uint8_t v___x_2070_; 
v___x_2070_ = lean_usize_dec_lt(v_i_2068_, v_sz_2067_);
if (v___x_2070_ == 0)
{
return v_b_2069_;
}
else
{
lean_object* v_snd_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2104_; 
v_snd_2071_ = lean_ctor_get(v_b_2069_, 1);
v_isSharedCheck_2104_ = !lean_is_exclusive(v_b_2069_);
if (v_isSharedCheck_2104_ == 0)
{
lean_object* v_unused_2105_; 
v_unused_2105_ = lean_ctor_get(v_b_2069_, 0);
lean_dec(v_unused_2105_);
v___x_2073_ = v_b_2069_;
v_isShared_2074_ = v_isSharedCheck_2104_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_snd_2071_);
lean_dec(v_b_2069_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2104_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v_fst_2075_; lean_object* v_snd_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2103_; 
v_fst_2075_ = lean_ctor_get(v_snd_2071_, 0);
v_snd_2076_ = lean_ctor_get(v_snd_2071_, 1);
v_isSharedCheck_2103_ = !lean_is_exclusive(v_snd_2071_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2078_ = v_snd_2071_;
v_isShared_2079_ = v_isSharedCheck_2103_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_snd_2076_);
lean_inc(v_fst_2075_);
lean_dec(v_snd_2071_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2103_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
lean_object* v_a_2080_; lean_object* v_p_2081_; lean_object* v___x_2082_; lean_object* v_a_2084_; lean_object* v_b_2091_; lean_object* v___x_2092_; uint8_t v___x_2093_; 
v_a_2080_ = lean_array_uget_borrowed(v_as_2066_, v_i_2068_);
v_p_2081_ = lean_ctor_get(v_a_2080_, 0);
v___x_2082_ = lean_box(0);
v_b_2091_ = l_Lean_Grind_Linarith_Poly_coeff(v_p_2081_, v_x_2065_);
v___x_2092_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0);
v___x_2093_ = lean_int_dec_eq(v_b_2091_, v___x_2092_);
if (v___x_2093_ == 0)
{
lean_object* v___x_2095_; 
lean_inc(v_a_2080_);
if (v_isShared_2074_ == 0)
{
lean_ctor_set(v___x_2073_, 1, v_a_2080_);
lean_ctor_set(v___x_2073_, 0, v_b_2091_);
v___x_2095_ = v___x_2073_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v_b_2091_);
lean_ctor_set(v_reuseFailAlloc_2098_, 1, v_a_2080_);
v___x_2095_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
lean_object* v_todo_2096_; lean_object* v___x_2097_; 
v_todo_2096_ = lean_array_push(v_snd_2076_, v___x_2095_);
v___x_2097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2097_, 0, v_fst_2075_);
lean_ctor_set(v___x_2097_, 1, v_todo_2096_);
v_a_2084_ = v___x_2097_;
goto v___jp_2083_;
}
}
else
{
lean_object* v_cs_x27_2099_; lean_object* v___x_2101_; 
lean_dec(v_b_2091_);
lean_inc(v_a_2080_);
v_cs_x27_2099_ = l_Lean_PersistentArray_push___redArg(v_fst_2075_, v_a_2080_);
if (v_isShared_2074_ == 0)
{
lean_ctor_set(v___x_2073_, 1, v_snd_2076_);
lean_ctor_set(v___x_2073_, 0, v_cs_x27_2099_);
v___x_2101_ = v___x_2073_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v_cs_x27_2099_);
lean_ctor_set(v_reuseFailAlloc_2102_, 1, v_snd_2076_);
v___x_2101_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
v_a_2084_ = v___x_2101_;
goto v___jp_2083_;
}
}
v___jp_2083_:
{
lean_object* v___x_2086_; 
if (v_isShared_2079_ == 0)
{
lean_ctor_set(v___x_2078_, 1, v_a_2084_);
lean_ctor_set(v___x_2078_, 0, v___x_2082_);
v___x_2086_ = v___x_2078_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v___x_2082_);
lean_ctor_set(v_reuseFailAlloc_2090_, 1, v_a_2084_);
v___x_2086_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
size_t v___x_2087_; size_t v___x_2088_; lean_object* v___x_2089_; 
v___x_2087_ = ((size_t)1ULL);
v___x_2088_ = lean_usize_add(v_i_2068_, v___x_2087_);
v___x_2089_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__2_spec__5(v_x_2065_, v_as_2066_, v_sz_2067_, v___x_2088_, v___x_2086_);
return v___x_2089_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__2___boxed(lean_object* v_x_2106_, lean_object* v_as_2107_, lean_object* v_sz_2108_, lean_object* v_i_2109_, lean_object* v_b_2110_){
_start:
{
size_t v_sz_boxed_2111_; size_t v_i_boxed_2112_; lean_object* v_res_2113_; 
v_sz_boxed_2111_ = lean_unbox_usize(v_sz_2108_);
lean_dec(v_sz_2108_);
v_i_boxed_2112_ = lean_unbox_usize(v_i_2109_);
lean_dec(v_i_2109_);
v_res_2113_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__2(v_x_2106_, v_as_2107_, v_sz_boxed_2111_, v_i_boxed_2112_, v_b_2110_);
lean_dec_ref(v_as_2107_);
lean_dec(v_x_2106_);
return v_res_2113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object* v_x_2114_, lean_object* v_as_2115_, size_t v_sz_2116_, size_t v_i_2117_, lean_object* v_b_2118_){
_start:
{
uint8_t v___x_2119_; 
v___x_2119_ = lean_usize_dec_lt(v_i_2117_, v_sz_2116_);
if (v___x_2119_ == 0)
{
return v_b_2118_;
}
else
{
lean_object* v_snd_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2153_; 
v_snd_2120_ = lean_ctor_get(v_b_2118_, 1);
v_isSharedCheck_2153_ = !lean_is_exclusive(v_b_2118_);
if (v_isSharedCheck_2153_ == 0)
{
lean_object* v_unused_2154_; 
v_unused_2154_ = lean_ctor_get(v_b_2118_, 0);
lean_dec(v_unused_2154_);
v___x_2122_ = v_b_2118_;
v_isShared_2123_ = v_isSharedCheck_2153_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_snd_2120_);
lean_dec(v_b_2118_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2153_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v_fst_2124_; lean_object* v_snd_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2152_; 
v_fst_2124_ = lean_ctor_get(v_snd_2120_, 0);
v_snd_2125_ = lean_ctor_get(v_snd_2120_, 1);
v_isSharedCheck_2152_ = !lean_is_exclusive(v_snd_2120_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2127_ = v_snd_2120_;
v_isShared_2128_ = v_isSharedCheck_2152_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_snd_2125_);
lean_inc(v_fst_2124_);
lean_dec(v_snd_2120_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2152_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v_a_2129_; lean_object* v_p_2130_; lean_object* v___x_2131_; lean_object* v_a_2133_; lean_object* v_b_2140_; lean_object* v___x_2141_; uint8_t v___x_2142_; 
v_a_2129_ = lean_array_uget_borrowed(v_as_2115_, v_i_2117_);
v_p_2130_ = lean_ctor_get(v_a_2129_, 0);
v___x_2131_ = lean_box(0);
v_b_2140_ = l_Lean_Grind_Linarith_Poly_coeff(v_p_2130_, v_x_2114_);
v___x_2141_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0);
v___x_2142_ = lean_int_dec_eq(v_b_2140_, v___x_2141_);
if (v___x_2142_ == 0)
{
lean_object* v___x_2144_; 
lean_inc(v_a_2129_);
if (v_isShared_2123_ == 0)
{
lean_ctor_set(v___x_2122_, 1, v_a_2129_);
lean_ctor_set(v___x_2122_, 0, v_b_2140_);
v___x_2144_ = v___x_2122_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v_b_2140_);
lean_ctor_set(v_reuseFailAlloc_2147_, 1, v_a_2129_);
v___x_2144_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
lean_object* v_todo_2145_; lean_object* v___x_2146_; 
v_todo_2145_ = lean_array_push(v_snd_2125_, v___x_2144_);
v___x_2146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2146_, 0, v_fst_2124_);
lean_ctor_set(v___x_2146_, 1, v_todo_2145_);
v_a_2133_ = v___x_2146_;
goto v___jp_2132_;
}
}
else
{
lean_object* v_cs_x27_2148_; lean_object* v___x_2150_; 
lean_dec(v_b_2140_);
lean_inc(v_a_2129_);
v_cs_x27_2148_ = l_Lean_PersistentArray_push___redArg(v_fst_2124_, v_a_2129_);
if (v_isShared_2123_ == 0)
{
lean_ctor_set(v___x_2122_, 1, v_snd_2125_);
lean_ctor_set(v___x_2122_, 0, v_cs_x27_2148_);
v___x_2150_ = v___x_2122_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_cs_x27_2148_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v_snd_2125_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
v_a_2133_ = v___x_2150_;
goto v___jp_2132_;
}
}
v___jp_2132_:
{
lean_object* v___x_2135_; 
if (v_isShared_2128_ == 0)
{
lean_ctor_set(v___x_2127_, 1, v_a_2133_);
lean_ctor_set(v___x_2127_, 0, v___x_2131_);
v___x_2135_ = v___x_2127_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2139_; 
v_reuseFailAlloc_2139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2139_, 0, v___x_2131_);
lean_ctor_set(v_reuseFailAlloc_2139_, 1, v_a_2133_);
v___x_2135_ = v_reuseFailAlloc_2139_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
size_t v___x_2136_; size_t v___x_2137_; 
v___x_2136_ = ((size_t)1ULL);
v___x_2137_ = lean_usize_add(v_i_2117_, v___x_2136_);
v_i_2117_ = v___x_2137_;
v_b_2118_ = v___x_2135_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__3_spec__4___boxed(lean_object* v_x_2155_, lean_object* v_as_2156_, lean_object* v_sz_2157_, lean_object* v_i_2158_, lean_object* v_b_2159_){
_start:
{
size_t v_sz_boxed_2160_; size_t v_i_boxed_2161_; lean_object* v_res_2162_; 
v_sz_boxed_2160_ = lean_unbox_usize(v_sz_2157_);
lean_dec(v_sz_2157_);
v_i_boxed_2161_ = lean_unbox_usize(v_i_2158_);
lean_dec(v_i_2158_);
v_res_2162_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__3_spec__4(v_x_2155_, v_as_2156_, v_sz_boxed_2160_, v_i_boxed_2161_, v_b_2159_);
lean_dec_ref(v_as_2156_);
lean_dec(v_x_2155_);
return v_res_2162_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_2163_, lean_object* v_as_2164_, size_t v_sz_2165_, size_t v_i_2166_, lean_object* v_b_2167_){
_start:
{
uint8_t v___x_2168_; 
v___x_2168_ = lean_usize_dec_lt(v_i_2166_, v_sz_2165_);
if (v___x_2168_ == 0)
{
return v_b_2167_;
}
else
{
lean_object* v_snd_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2202_; 
v_snd_2169_ = lean_ctor_get(v_b_2167_, 1);
v_isSharedCheck_2202_ = !lean_is_exclusive(v_b_2167_);
if (v_isSharedCheck_2202_ == 0)
{
lean_object* v_unused_2203_; 
v_unused_2203_ = lean_ctor_get(v_b_2167_, 0);
lean_dec(v_unused_2203_);
v___x_2171_ = v_b_2167_;
v_isShared_2172_ = v_isSharedCheck_2202_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_snd_2169_);
lean_dec(v_b_2167_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2202_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v_fst_2173_; lean_object* v_snd_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2201_; 
v_fst_2173_ = lean_ctor_get(v_snd_2169_, 0);
v_snd_2174_ = lean_ctor_get(v_snd_2169_, 1);
v_isSharedCheck_2201_ = !lean_is_exclusive(v_snd_2169_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2176_ = v_snd_2169_;
v_isShared_2177_ = v_isSharedCheck_2201_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_snd_2174_);
lean_inc(v_fst_2173_);
lean_dec(v_snd_2169_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2201_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v_a_2178_; lean_object* v_p_2179_; lean_object* v___x_2180_; lean_object* v_a_2182_; lean_object* v_b_2189_; lean_object* v___x_2190_; uint8_t v___x_2191_; 
v_a_2178_ = lean_array_uget_borrowed(v_as_2164_, v_i_2166_);
v_p_2179_ = lean_ctor_get(v_a_2178_, 0);
v___x_2180_ = lean_box(0);
v_b_2189_ = l_Lean_Grind_Linarith_Poly_coeff(v_p_2179_, v_x_2163_);
v___x_2190_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0);
v___x_2191_ = lean_int_dec_eq(v_b_2189_, v___x_2190_);
if (v___x_2191_ == 0)
{
lean_object* v___x_2193_; 
lean_inc(v_a_2178_);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 1, v_a_2178_);
lean_ctor_set(v___x_2171_, 0, v_b_2189_);
v___x_2193_ = v___x_2171_;
goto v_reusejp_2192_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_b_2189_);
lean_ctor_set(v_reuseFailAlloc_2196_, 1, v_a_2178_);
v___x_2193_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2192_;
}
v_reusejp_2192_:
{
lean_object* v_todo_2194_; lean_object* v___x_2195_; 
v_todo_2194_ = lean_array_push(v_snd_2174_, v___x_2193_);
v___x_2195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2195_, 0, v_fst_2173_);
lean_ctor_set(v___x_2195_, 1, v_todo_2194_);
v_a_2182_ = v___x_2195_;
goto v___jp_2181_;
}
}
else
{
lean_object* v_cs_x27_2197_; lean_object* v___x_2199_; 
lean_dec(v_b_2189_);
lean_inc(v_a_2178_);
v_cs_x27_2197_ = l_Lean_PersistentArray_push___redArg(v_fst_2173_, v_a_2178_);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 1, v_snd_2174_);
lean_ctor_set(v___x_2171_, 0, v_cs_x27_2197_);
v___x_2199_ = v___x_2171_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_cs_x27_2197_);
lean_ctor_set(v_reuseFailAlloc_2200_, 1, v_snd_2174_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
v_a_2182_ = v___x_2199_;
goto v___jp_2181_;
}
}
v___jp_2181_:
{
lean_object* v___x_2184_; 
if (v_isShared_2177_ == 0)
{
lean_ctor_set(v___x_2176_, 1, v_a_2182_);
lean_ctor_set(v___x_2176_, 0, v___x_2180_);
v___x_2184_ = v___x_2176_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v___x_2180_);
lean_ctor_set(v_reuseFailAlloc_2188_, 1, v_a_2182_);
v___x_2184_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
size_t v___x_2185_; size_t v___x_2186_; lean_object* v___x_2187_; 
v___x_2185_ = ((size_t)1ULL);
v___x_2186_ = lean_usize_add(v_i_2166_, v___x_2185_);
v___x_2187_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__3_spec__4(v_x_2163_, v_as_2164_, v_sz_2165_, v___x_2186_, v___x_2184_);
return v___x_2187_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_x_2204_, lean_object* v_as_2205_, lean_object* v_sz_2206_, lean_object* v_i_2207_, lean_object* v_b_2208_){
_start:
{
size_t v_sz_boxed_2209_; size_t v_i_boxed_2210_; lean_object* v_res_2211_; 
v_sz_boxed_2209_ = lean_unbox_usize(v_sz_2206_);
lean_dec(v_sz_2206_);
v_i_boxed_2210_ = lean_unbox_usize(v_i_2207_);
lean_dec(v_i_2207_);
v_res_2211_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__3(v_x_2204_, v_as_2205_, v_sz_boxed_2209_, v_i_boxed_2210_, v_b_2208_);
lean_dec_ref(v_as_2205_);
lean_dec(v_x_2204_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1(lean_object* v_init_2212_, lean_object* v_x_2213_, lean_object* v_n_2214_, lean_object* v_b_2215_){
_start:
{
if (lean_obj_tag(v_n_2214_) == 0)
{
lean_object* v_cs_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; size_t v_sz_2219_; size_t v___x_2220_; lean_object* v___x_2221_; lean_object* v_fst_2222_; 
v_cs_2216_ = lean_ctor_get(v_n_2214_, 0);
v___x_2217_ = lean_box(0);
v___x_2218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2217_);
lean_ctor_set(v___x_2218_, 1, v_b_2215_);
v_sz_2219_ = lean_array_size(v_cs_2216_);
v___x_2220_ = ((size_t)0ULL);
v___x_2221_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__2(v_init_2212_, v_x_2213_, v_cs_2216_, v_sz_2219_, v___x_2220_, v___x_2218_);
v_fst_2222_ = lean_ctor_get(v___x_2221_, 0);
lean_inc(v_fst_2222_);
if (lean_obj_tag(v_fst_2222_) == 0)
{
lean_object* v_snd_2223_; lean_object* v___x_2224_; 
v_snd_2223_ = lean_ctor_get(v___x_2221_, 1);
lean_inc(v_snd_2223_);
lean_dec_ref(v___x_2221_);
v___x_2224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2224_, 0, v_snd_2223_);
return v___x_2224_;
}
else
{
lean_object* v_val_2225_; 
lean_dec_ref(v___x_2221_);
v_val_2225_ = lean_ctor_get(v_fst_2222_, 0);
lean_inc(v_val_2225_);
lean_dec_ref_known(v_fst_2222_, 1);
return v_val_2225_;
}
}
else
{
lean_object* v_vs_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; size_t v_sz_2229_; size_t v___x_2230_; lean_object* v___x_2231_; lean_object* v_fst_2232_; 
v_vs_2226_ = lean_ctor_get(v_n_2214_, 0);
v___x_2227_ = lean_box(0);
v___x_2228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2227_);
lean_ctor_set(v___x_2228_, 1, v_b_2215_);
v_sz_2229_ = lean_array_size(v_vs_2226_);
v___x_2230_ = ((size_t)0ULL);
v___x_2231_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__3(v_x_2213_, v_vs_2226_, v_sz_2229_, v___x_2230_, v___x_2228_);
v_fst_2232_ = lean_ctor_get(v___x_2231_, 0);
lean_inc(v_fst_2232_);
if (lean_obj_tag(v_fst_2232_) == 0)
{
lean_object* v_snd_2233_; lean_object* v___x_2234_; 
v_snd_2233_ = lean_ctor_get(v___x_2231_, 1);
lean_inc(v_snd_2233_);
lean_dec_ref(v___x_2231_);
v___x_2234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2234_, 0, v_snd_2233_);
return v___x_2234_;
}
else
{
lean_object* v_val_2235_; 
lean_dec_ref(v___x_2231_);
v_val_2235_ = lean_ctor_get(v_fst_2232_, 0);
lean_inc(v_val_2235_);
lean_dec_ref_known(v_fst_2232_, 1);
return v_val_2235_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__2(lean_object* v_init_2236_, lean_object* v_x_2237_, lean_object* v_as_2238_, size_t v_sz_2239_, size_t v_i_2240_, lean_object* v_b_2241_){
_start:
{
uint8_t v___x_2242_; 
v___x_2242_ = lean_usize_dec_lt(v_i_2240_, v_sz_2239_);
if (v___x_2242_ == 0)
{
return v_b_2241_;
}
else
{
lean_object* v_snd_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2261_; 
v_snd_2243_ = lean_ctor_get(v_b_2241_, 1);
v_isSharedCheck_2261_ = !lean_is_exclusive(v_b_2241_);
if (v_isSharedCheck_2261_ == 0)
{
lean_object* v_unused_2262_; 
v_unused_2262_ = lean_ctor_get(v_b_2241_, 0);
lean_dec(v_unused_2262_);
v___x_2245_ = v_b_2241_;
v_isShared_2246_ = v_isSharedCheck_2261_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_snd_2243_);
lean_dec(v_b_2241_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2261_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v_a_2247_; lean_object* v___x_2248_; 
v_a_2247_ = lean_array_uget_borrowed(v_as_2238_, v_i_2240_);
lean_inc(v_snd_2243_);
v___x_2248_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1(v_init_2236_, v_x_2237_, v_a_2247_, v_snd_2243_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v___x_2249_; lean_object* v___x_2251_; 
v___x_2249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2249_, 0, v___x_2248_);
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 0, v___x_2249_);
v___x_2251_ = v___x_2245_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v___x_2249_);
lean_ctor_set(v_reuseFailAlloc_2252_, 1, v_snd_2243_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
return v___x_2251_;
}
}
else
{
lean_object* v_a_2253_; lean_object* v___x_2254_; lean_object* v___x_2256_; 
lean_dec(v_snd_2243_);
v_a_2253_ = lean_ctor_get(v___x_2248_, 0);
lean_inc(v_a_2253_);
lean_dec_ref_known(v___x_2248_, 1);
v___x_2254_ = lean_box(0);
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 1, v_a_2253_);
lean_ctor_set(v___x_2245_, 0, v___x_2254_);
v___x_2256_ = v___x_2245_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v___x_2254_);
lean_ctor_set(v_reuseFailAlloc_2260_, 1, v_a_2253_);
v___x_2256_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
size_t v___x_2257_; size_t v___x_2258_; 
v___x_2257_ = ((size_t)1ULL);
v___x_2258_ = lean_usize_add(v_i_2240_, v___x_2257_);
v_i_2240_ = v___x_2258_;
v_b_2241_ = v___x_2256_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_init_2263_, lean_object* v_x_2264_, lean_object* v_as_2265_, lean_object* v_sz_2266_, lean_object* v_i_2267_, lean_object* v_b_2268_){
_start:
{
size_t v_sz_boxed_2269_; size_t v_i_boxed_2270_; lean_object* v_res_2271_; 
v_sz_boxed_2269_ = lean_unbox_usize(v_sz_2266_);
lean_dec(v_sz_2266_);
v_i_boxed_2270_ = lean_unbox_usize(v_i_2267_);
lean_dec(v_i_2267_);
v_res_2271_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1_spec__2(v_init_2263_, v_x_2264_, v_as_2265_, v_sz_boxed_2269_, v_i_boxed_2270_, v_b_2268_);
lean_dec_ref(v_as_2265_);
lean_dec(v_x_2264_);
lean_dec_ref(v_init_2263_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1___boxed(lean_object* v_init_2272_, lean_object* v_x_2273_, lean_object* v_n_2274_, lean_object* v_b_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1(v_init_2272_, v_x_2273_, v_n_2274_, v_b_2275_);
lean_dec_ref(v_n_2274_);
lean_dec(v_x_2273_);
lean_dec_ref(v_init_2272_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0(lean_object* v_x_2277_, lean_object* v_t_2278_, lean_object* v_init_2279_){
_start:
{
lean_object* v_root_2280_; lean_object* v_tail_2281_; lean_object* v___x_2282_; 
v_root_2280_ = lean_ctor_get(v_t_2278_, 0);
v_tail_2281_ = lean_ctor_get(v_t_2278_, 1);
lean_inc_ref(v_init_2279_);
v___x_2282_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__1(v_init_2279_, v_x_2277_, v_root_2280_, v_init_2279_);
lean_dec_ref(v_init_2279_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_a_2283_);
lean_dec_ref_known(v___x_2282_, 1);
return v_a_2283_;
}
else
{
lean_object* v_a_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; size_t v_sz_2287_; size_t v___x_2288_; lean_object* v___x_2289_; lean_object* v_fst_2290_; 
v_a_2284_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_a_2284_);
lean_dec_ref_known(v___x_2282_, 1);
v___x_2285_ = lean_box(0);
v___x_2286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2285_);
lean_ctor_set(v___x_2286_, 1, v_a_2284_);
v_sz_2287_ = lean_array_size(v_tail_2281_);
v___x_2288_ = ((size_t)0ULL);
v___x_2289_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0_spec__2(v_x_2277_, v_tail_2281_, v_sz_2287_, v___x_2288_, v___x_2286_);
v_fst_2290_ = lean_ctor_get(v___x_2289_, 0);
lean_inc(v_fst_2290_);
if (lean_obj_tag(v_fst_2290_) == 0)
{
lean_object* v_snd_2291_; 
v_snd_2291_ = lean_ctor_get(v___x_2289_, 1);
lean_inc(v_snd_2291_);
lean_dec_ref(v___x_2289_);
return v_snd_2291_;
}
else
{
lean_object* v_val_2292_; 
lean_dec_ref(v___x_2289_);
v_val_2292_ = lean_ctor_get(v_fst_2290_, 0);
lean_inc(v_val_2292_);
lean_dec_ref_known(v_fst_2290_, 1);
return v_val_2292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0___boxed(lean_object* v_x_2293_, lean_object* v_t_2294_, lean_object* v_init_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0(v_x_2293_, v_t_2294_, v_init_2295_);
lean_dec_ref(v_t_2294_);
lean_dec(v_x_2293_);
return v_res_2296_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; 
v___x_2297_ = lean_unsigned_to_nat(32u);
v___x_2298_ = lean_mk_empty_array_with_capacity(v___x_2297_);
v___x_2299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2298_);
return v___x_2299_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__1(void){
_start:
{
size_t v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v_cs_x27_2305_; 
v___x_2300_ = ((size_t)5ULL);
v___x_2301_ = lean_unsigned_to_nat(0u);
v___x_2302_ = lean_unsigned_to_nat(32u);
v___x_2303_ = lean_mk_empty_array_with_capacity(v___x_2302_);
v___x_2304_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__0, &l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__0);
v_cs_x27_2305_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_cs_x27_2305_, 0, v___x_2304_);
lean_ctor_set(v_cs_x27_2305_, 1, v___x_2303_);
lean_ctor_set(v_cs_x27_2305_, 2, v___x_2301_);
lean_ctor_set(v_cs_x27_2305_, 3, v___x_2301_);
lean_ctor_set_usize(v_cs_x27_2305_, 4, v___x_2300_);
return v_cs_x27_2305_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__3(void){
_start:
{
lean_object* v_todo_2308_; lean_object* v_cs_x27_2309_; lean_object* v___x_2310_; 
v_todo_2308_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__2));
v_cs_x27_2309_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__1, &l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__1_once, _init_l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__1);
v___x_2310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2310_, 0, v_cs_x27_2309_);
lean_ctor_set(v___x_2310_, 1, v_todo_2308_);
return v___x_2310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0(lean_object* v_x_2311_, lean_object* v_cs_2312_){
_start:
{
lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v_fst_2315_; lean_object* v_snd_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
v___x_2313_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__3, &l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__3_once, _init_l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___closed__3);
v___x_2314_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0_spec__0(v_x_2311_, v_cs_2312_, v___x_2313_);
v_fst_2315_ = lean_ctor_get(v___x_2314_, 0);
v_snd_2316_ = lean_ctor_get(v___x_2314_, 1);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2314_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_snd_2316_);
lean_inc(v_fst_2315_);
lean_dec(v___x_2314_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_fst_2315_);
lean_ctor_set(v_reuseFailAlloc_2322_, 1, v_snd_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0___boxed(lean_object* v_x_2324_, lean_object* v_cs_2325_){
_start:
{
lean_object* v_res_2326_; 
v_res_2326_ = l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0(v_x_2324_, v_cs_2325_);
lean_dec_ref(v_cs_2325_);
lean_dec(v_x_2324_);
return v_res_2326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs(lean_object* v_x_2327_, lean_object* v_cs_2328_){
_start:
{
lean_object* v___x_2329_; 
v___x_2329_ = l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0(v_x_2327_, v_cs_2328_);
return v___x_2329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs___boxed(lean_object* v_x_2330_, lean_object* v_cs_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs(v_x_2330_, v_cs_2331_);
lean_dec_ref(v_cs_2331_);
lean_dec(v_x_2330_);
return v_res_2332_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2333_ = lean_box(0);
v___x_2334_ = l_unsafeCast___redArg(v___x_2333_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0(lean_object* v_a_2335_, lean_object* v_y_2336_, lean_object* v_fst_2337_, lean_object* v_s_2338_){
_start:
{
lean_object* v_structs_2339_; lean_object* v_typeIdOf_2340_; lean_object* v_exprToStructId_2341_; lean_object* v_exprToStructIdEntries_2342_; lean_object* v_forbiddenNatModules_2343_; lean_object* v_natStructs_2344_; lean_object* v_natTypeIdOf_2345_; lean_object* v_exprToNatStructId_2346_; lean_object* v___x_2347_; uint8_t v___x_2348_; 
v_structs_2339_ = lean_ctor_get(v_s_2338_, 0);
v_typeIdOf_2340_ = lean_ctor_get(v_s_2338_, 1);
v_exprToStructId_2341_ = lean_ctor_get(v_s_2338_, 2);
v_exprToStructIdEntries_2342_ = lean_ctor_get(v_s_2338_, 3);
v_forbiddenNatModules_2343_ = lean_ctor_get(v_s_2338_, 4);
v_natStructs_2344_ = lean_ctor_get(v_s_2338_, 5);
v_natTypeIdOf_2345_ = lean_ctor_get(v_s_2338_, 6);
v_exprToNatStructId_2346_ = lean_ctor_get(v_s_2338_, 7);
v___x_2347_ = lean_array_get_size(v_structs_2339_);
v___x_2348_ = lean_nat_dec_lt(v_a_2335_, v___x_2347_);
if (v___x_2348_ == 0)
{
lean_dec_ref(v_fst_2337_);
return v_s_2338_;
}
else
{
lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2410_; 
lean_inc_ref(v_exprToNatStructId_2346_);
lean_inc_ref(v_natTypeIdOf_2345_);
lean_inc_ref(v_natStructs_2344_);
lean_inc_ref(v_forbiddenNatModules_2343_);
lean_inc_ref(v_exprToStructIdEntries_2342_);
lean_inc_ref(v_exprToStructId_2341_);
lean_inc_ref(v_typeIdOf_2340_);
lean_inc_ref(v_structs_2339_);
v_isSharedCheck_2410_ = !lean_is_exclusive(v_s_2338_);
if (v_isSharedCheck_2410_ == 0)
{
lean_object* v_unused_2411_; lean_object* v_unused_2412_; lean_object* v_unused_2413_; lean_object* v_unused_2414_; lean_object* v_unused_2415_; lean_object* v_unused_2416_; lean_object* v_unused_2417_; lean_object* v_unused_2418_; 
v_unused_2411_ = lean_ctor_get(v_s_2338_, 7);
lean_dec(v_unused_2411_);
v_unused_2412_ = lean_ctor_get(v_s_2338_, 6);
lean_dec(v_unused_2412_);
v_unused_2413_ = lean_ctor_get(v_s_2338_, 5);
lean_dec(v_unused_2413_);
v_unused_2414_ = lean_ctor_get(v_s_2338_, 4);
lean_dec(v_unused_2414_);
v_unused_2415_ = lean_ctor_get(v_s_2338_, 3);
lean_dec(v_unused_2415_);
v_unused_2416_ = lean_ctor_get(v_s_2338_, 2);
lean_dec(v_unused_2416_);
v_unused_2417_ = lean_ctor_get(v_s_2338_, 1);
lean_dec(v_unused_2417_);
v_unused_2418_ = lean_ctor_get(v_s_2338_, 0);
lean_dec(v_unused_2418_);
v___x_2350_ = v_s_2338_;
v_isShared_2351_ = v_isSharedCheck_2410_;
goto v_resetjp_2349_;
}
else
{
lean_dec(v_s_2338_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2410_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v_v_2352_; lean_object* v_id_2353_; lean_object* v_ringId_x3f_2354_; lean_object* v_type_2355_; lean_object* v_u_2356_; lean_object* v_intModuleInst_2357_; lean_object* v_leInst_x3f_2358_; lean_object* v_ltInst_x3f_2359_; lean_object* v_lawfulOrderLTInst_x3f_2360_; lean_object* v_isPreorderInst_x3f_2361_; lean_object* v_orderedAddInst_x3f_2362_; lean_object* v_isLinearInst_x3f_2363_; lean_object* v_noNatDivInst_x3f_2364_; lean_object* v_ringInst_x3f_2365_; lean_object* v_commRingInst_x3f_2366_; lean_object* v_orderedRingInst_x3f_2367_; lean_object* v_fieldInst_x3f_2368_; lean_object* v_charInst_x3f_2369_; lean_object* v_zero_2370_; lean_object* v_ofNatZero_2371_; lean_object* v_one_x3f_2372_; lean_object* v_leFn_x3f_2373_; lean_object* v_ltFn_x3f_2374_; lean_object* v_addFn_2375_; lean_object* v_zsmulFn_2376_; lean_object* v_nsmulFn_2377_; lean_object* v_zsmulFn_x3f_2378_; lean_object* v_nsmulFn_x3f_2379_; lean_object* v_homomulFn_x3f_2380_; lean_object* v_subFn_2381_; lean_object* v_negFn_2382_; lean_object* v_vars_2383_; lean_object* v_varMap_2384_; lean_object* v_lowers_2385_; lean_object* v_uppers_2386_; lean_object* v_diseqs_2387_; lean_object* v_assignment_2388_; uint8_t v_caseSplits_2389_; lean_object* v_conflict_x3f_2390_; lean_object* v_diseqSplits_2391_; lean_object* v_elimEqs_2392_; lean_object* v_elimStack_2393_; lean_object* v_occurs_2394_; lean_object* v_ignored_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2409_; 
v_v_2352_ = lean_array_fget(v_structs_2339_, v_a_2335_);
v_id_2353_ = lean_ctor_get(v_v_2352_, 0);
v_ringId_x3f_2354_ = lean_ctor_get(v_v_2352_, 1);
v_type_2355_ = lean_ctor_get(v_v_2352_, 2);
v_u_2356_ = lean_ctor_get(v_v_2352_, 3);
v_intModuleInst_2357_ = lean_ctor_get(v_v_2352_, 4);
v_leInst_x3f_2358_ = lean_ctor_get(v_v_2352_, 5);
v_ltInst_x3f_2359_ = lean_ctor_get(v_v_2352_, 6);
v_lawfulOrderLTInst_x3f_2360_ = lean_ctor_get(v_v_2352_, 7);
v_isPreorderInst_x3f_2361_ = lean_ctor_get(v_v_2352_, 8);
v_orderedAddInst_x3f_2362_ = lean_ctor_get(v_v_2352_, 9);
v_isLinearInst_x3f_2363_ = lean_ctor_get(v_v_2352_, 10);
v_noNatDivInst_x3f_2364_ = lean_ctor_get(v_v_2352_, 11);
v_ringInst_x3f_2365_ = lean_ctor_get(v_v_2352_, 12);
v_commRingInst_x3f_2366_ = lean_ctor_get(v_v_2352_, 13);
v_orderedRingInst_x3f_2367_ = lean_ctor_get(v_v_2352_, 14);
v_fieldInst_x3f_2368_ = lean_ctor_get(v_v_2352_, 15);
v_charInst_x3f_2369_ = lean_ctor_get(v_v_2352_, 16);
v_zero_2370_ = lean_ctor_get(v_v_2352_, 17);
v_ofNatZero_2371_ = lean_ctor_get(v_v_2352_, 18);
v_one_x3f_2372_ = lean_ctor_get(v_v_2352_, 19);
v_leFn_x3f_2373_ = lean_ctor_get(v_v_2352_, 20);
v_ltFn_x3f_2374_ = lean_ctor_get(v_v_2352_, 21);
v_addFn_2375_ = lean_ctor_get(v_v_2352_, 22);
v_zsmulFn_2376_ = lean_ctor_get(v_v_2352_, 23);
v_nsmulFn_2377_ = lean_ctor_get(v_v_2352_, 24);
v_zsmulFn_x3f_2378_ = lean_ctor_get(v_v_2352_, 25);
v_nsmulFn_x3f_2379_ = lean_ctor_get(v_v_2352_, 26);
v_homomulFn_x3f_2380_ = lean_ctor_get(v_v_2352_, 27);
v_subFn_2381_ = lean_ctor_get(v_v_2352_, 28);
v_negFn_2382_ = lean_ctor_get(v_v_2352_, 29);
v_vars_2383_ = lean_ctor_get(v_v_2352_, 30);
v_varMap_2384_ = lean_ctor_get(v_v_2352_, 31);
v_lowers_2385_ = lean_ctor_get(v_v_2352_, 32);
v_uppers_2386_ = lean_ctor_get(v_v_2352_, 33);
v_diseqs_2387_ = lean_ctor_get(v_v_2352_, 34);
v_assignment_2388_ = lean_ctor_get(v_v_2352_, 35);
v_caseSplits_2389_ = lean_ctor_get_uint8(v_v_2352_, sizeof(void*)*42);
v_conflict_x3f_2390_ = lean_ctor_get(v_v_2352_, 36);
v_diseqSplits_2391_ = lean_ctor_get(v_v_2352_, 37);
v_elimEqs_2392_ = lean_ctor_get(v_v_2352_, 38);
v_elimStack_2393_ = lean_ctor_get(v_v_2352_, 39);
v_occurs_2394_ = lean_ctor_get(v_v_2352_, 40);
v_ignored_2395_ = lean_ctor_get(v_v_2352_, 41);
v_isSharedCheck_2409_ = !lean_is_exclusive(v_v_2352_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2397_ = v_v_2352_;
v_isShared_2398_ = v_isSharedCheck_2409_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_ignored_2395_);
lean_inc(v_occurs_2394_);
lean_inc(v_elimStack_2393_);
lean_inc(v_elimEqs_2392_);
lean_inc(v_diseqSplits_2391_);
lean_inc(v_conflict_x3f_2390_);
lean_inc(v_assignment_2388_);
lean_inc(v_diseqs_2387_);
lean_inc(v_uppers_2386_);
lean_inc(v_lowers_2385_);
lean_inc(v_varMap_2384_);
lean_inc(v_vars_2383_);
lean_inc(v_negFn_2382_);
lean_inc(v_subFn_2381_);
lean_inc(v_homomulFn_x3f_2380_);
lean_inc(v_nsmulFn_x3f_2379_);
lean_inc(v_zsmulFn_x3f_2378_);
lean_inc(v_nsmulFn_2377_);
lean_inc(v_zsmulFn_2376_);
lean_inc(v_addFn_2375_);
lean_inc(v_ltFn_x3f_2374_);
lean_inc(v_leFn_x3f_2373_);
lean_inc(v_one_x3f_2372_);
lean_inc(v_ofNatZero_2371_);
lean_inc(v_zero_2370_);
lean_inc(v_charInst_x3f_2369_);
lean_inc(v_fieldInst_x3f_2368_);
lean_inc(v_orderedRingInst_x3f_2367_);
lean_inc(v_commRingInst_x3f_2366_);
lean_inc(v_ringInst_x3f_2365_);
lean_inc(v_noNatDivInst_x3f_2364_);
lean_inc(v_isLinearInst_x3f_2363_);
lean_inc(v_orderedAddInst_x3f_2362_);
lean_inc(v_isPreorderInst_x3f_2361_);
lean_inc(v_lawfulOrderLTInst_x3f_2360_);
lean_inc(v_ltInst_x3f_2359_);
lean_inc(v_leInst_x3f_2358_);
lean_inc(v_intModuleInst_2357_);
lean_inc(v_u_2356_);
lean_inc(v_type_2355_);
lean_inc(v_ringId_x3f_2354_);
lean_inc(v_id_2353_);
lean_dec(v_v_2352_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2409_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v___x_2399_; lean_object* v_xs_x27_2400_; lean_object* v___x_2401_; lean_object* v___x_2403_; 
v___x_2399_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0);
v_xs_x27_2400_ = lean_array_fset(v_structs_2339_, v_a_2335_, v___x_2399_);
v___x_2401_ = l_Lean_PersistentArray_set___redArg(v_lowers_2385_, v_y_2336_, v_fst_2337_);
if (v_isShared_2398_ == 0)
{
lean_ctor_set(v___x_2397_, 32, v___x_2401_);
v___x_2403_ = v___x_2397_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_id_2353_);
lean_ctor_set(v_reuseFailAlloc_2408_, 1, v_ringId_x3f_2354_);
lean_ctor_set(v_reuseFailAlloc_2408_, 2, v_type_2355_);
lean_ctor_set(v_reuseFailAlloc_2408_, 3, v_u_2356_);
lean_ctor_set(v_reuseFailAlloc_2408_, 4, v_intModuleInst_2357_);
lean_ctor_set(v_reuseFailAlloc_2408_, 5, v_leInst_x3f_2358_);
lean_ctor_set(v_reuseFailAlloc_2408_, 6, v_ltInst_x3f_2359_);
lean_ctor_set(v_reuseFailAlloc_2408_, 7, v_lawfulOrderLTInst_x3f_2360_);
lean_ctor_set(v_reuseFailAlloc_2408_, 8, v_isPreorderInst_x3f_2361_);
lean_ctor_set(v_reuseFailAlloc_2408_, 9, v_orderedAddInst_x3f_2362_);
lean_ctor_set(v_reuseFailAlloc_2408_, 10, v_isLinearInst_x3f_2363_);
lean_ctor_set(v_reuseFailAlloc_2408_, 11, v_noNatDivInst_x3f_2364_);
lean_ctor_set(v_reuseFailAlloc_2408_, 12, v_ringInst_x3f_2365_);
lean_ctor_set(v_reuseFailAlloc_2408_, 13, v_commRingInst_x3f_2366_);
lean_ctor_set(v_reuseFailAlloc_2408_, 14, v_orderedRingInst_x3f_2367_);
lean_ctor_set(v_reuseFailAlloc_2408_, 15, v_fieldInst_x3f_2368_);
lean_ctor_set(v_reuseFailAlloc_2408_, 16, v_charInst_x3f_2369_);
lean_ctor_set(v_reuseFailAlloc_2408_, 17, v_zero_2370_);
lean_ctor_set(v_reuseFailAlloc_2408_, 18, v_ofNatZero_2371_);
lean_ctor_set(v_reuseFailAlloc_2408_, 19, v_one_x3f_2372_);
lean_ctor_set(v_reuseFailAlloc_2408_, 20, v_leFn_x3f_2373_);
lean_ctor_set(v_reuseFailAlloc_2408_, 21, v_ltFn_x3f_2374_);
lean_ctor_set(v_reuseFailAlloc_2408_, 22, v_addFn_2375_);
lean_ctor_set(v_reuseFailAlloc_2408_, 23, v_zsmulFn_2376_);
lean_ctor_set(v_reuseFailAlloc_2408_, 24, v_nsmulFn_2377_);
lean_ctor_set(v_reuseFailAlloc_2408_, 25, v_zsmulFn_x3f_2378_);
lean_ctor_set(v_reuseFailAlloc_2408_, 26, v_nsmulFn_x3f_2379_);
lean_ctor_set(v_reuseFailAlloc_2408_, 27, v_homomulFn_x3f_2380_);
lean_ctor_set(v_reuseFailAlloc_2408_, 28, v_subFn_2381_);
lean_ctor_set(v_reuseFailAlloc_2408_, 29, v_negFn_2382_);
lean_ctor_set(v_reuseFailAlloc_2408_, 30, v_vars_2383_);
lean_ctor_set(v_reuseFailAlloc_2408_, 31, v_varMap_2384_);
lean_ctor_set(v_reuseFailAlloc_2408_, 32, v___x_2401_);
lean_ctor_set(v_reuseFailAlloc_2408_, 33, v_uppers_2386_);
lean_ctor_set(v_reuseFailAlloc_2408_, 34, v_diseqs_2387_);
lean_ctor_set(v_reuseFailAlloc_2408_, 35, v_assignment_2388_);
lean_ctor_set(v_reuseFailAlloc_2408_, 36, v_conflict_x3f_2390_);
lean_ctor_set(v_reuseFailAlloc_2408_, 37, v_diseqSplits_2391_);
lean_ctor_set(v_reuseFailAlloc_2408_, 38, v_elimEqs_2392_);
lean_ctor_set(v_reuseFailAlloc_2408_, 39, v_elimStack_2393_);
lean_ctor_set(v_reuseFailAlloc_2408_, 40, v_occurs_2394_);
lean_ctor_set(v_reuseFailAlloc_2408_, 41, v_ignored_2395_);
lean_ctor_set_uint8(v_reuseFailAlloc_2408_, sizeof(void*)*42, v_caseSplits_2389_);
v___x_2403_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
lean_object* v___x_2404_; lean_object* v___x_2406_; 
v___x_2404_ = lean_array_fset(v_xs_x27_2400_, v_a_2335_, v___x_2403_);
if (v_isShared_2351_ == 0)
{
lean_ctor_set(v___x_2350_, 0, v___x_2404_);
v___x_2406_ = v___x_2350_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v___x_2404_);
lean_ctor_set(v_reuseFailAlloc_2407_, 1, v_typeIdOf_2340_);
lean_ctor_set(v_reuseFailAlloc_2407_, 2, v_exprToStructId_2341_);
lean_ctor_set(v_reuseFailAlloc_2407_, 3, v_exprToStructIdEntries_2342_);
lean_ctor_set(v_reuseFailAlloc_2407_, 4, v_forbiddenNatModules_2343_);
lean_ctor_set(v_reuseFailAlloc_2407_, 5, v_natStructs_2344_);
lean_ctor_set(v_reuseFailAlloc_2407_, 6, v_natTypeIdOf_2345_);
lean_ctor_set(v_reuseFailAlloc_2407_, 7, v_exprToNatStructId_2346_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___boxed(lean_object* v_a_2419_, lean_object* v_y_2420_, lean_object* v_fst_2421_, lean_object* v_s_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0(v_a_2419_, v_y_2420_, v_fst_2421_, v_s_2422_);
lean_dec(v_y_2420_);
lean_dec(v_a_2419_);
return v_res_2423_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___closed__0(void){
_start:
{
lean_object* v___x_2424_; 
v___x_2424_ = l_Lean_instInhabitedPersistentArray_default___redArg();
return v___x_2424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers(lean_object* v_a_2425_, lean_object* v_x_2426_, lean_object* v_c_2427_, lean_object* v_y_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_, lean_object* v_a_2439_){
_start:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; 
v___x_2441_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___closed__0);
v___x_2442_ = l_Lean_Meta_Grind_Arith_Linear_inconsistent(v_a_2429_, v_a_2430_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_, v_a_2435_, v_a_2436_, v_a_2437_, v_a_2438_, v_a_2439_);
if (lean_obj_tag(v___x_2442_) == 0)
{
lean_object* v_a_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2476_; 
v_a_2443_ = lean_ctor_get(v___x_2442_, 0);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2442_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2445_ = v___x_2442_;
v_isShared_2446_ = v_isSharedCheck_2476_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v___x_2442_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2476_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
uint8_t v___x_2447_; 
v___x_2447_ = lean_unbox(v_a_2443_);
lean_dec(v_a_2443_);
if (v___x_2447_ == 0)
{
lean_object* v___x_2448_; 
lean_del_object(v___x_2445_);
v___x_2448_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_2429_, v_a_2430_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_, v_a_2435_, v_a_2436_, v_a_2437_, v_a_2438_, v_a_2439_);
if (lean_obj_tag(v___x_2448_) == 0)
{
lean_object* v_a_2449_; lean_object* v___y_2451_; lean_object* v_lowers_2459_; lean_object* v_size_2460_; uint8_t v___x_2461_; 
v_a_2449_ = lean_ctor_get(v___x_2448_, 0);
lean_inc(v_a_2449_);
lean_dec_ref_known(v___x_2448_, 1);
v_lowers_2459_ = lean_ctor_get(v_a_2449_, 32);
lean_inc_ref(v_lowers_2459_);
lean_dec(v_a_2449_);
v_size_2460_ = lean_ctor_get(v_lowers_2459_, 2);
v___x_2461_ = lean_nat_dec_lt(v_y_2428_, v_size_2460_);
if (v___x_2461_ == 0)
{
lean_object* v___x_2462_; 
lean_dec_ref(v_lowers_2459_);
v___x_2462_ = l_outOfBounds___redArg(v___x_2441_);
v___y_2451_ = v___x_2462_;
goto v___jp_2450_;
}
else
{
lean_object* v___x_2463_; 
v___x_2463_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2441_, v_lowers_2459_, v_y_2428_);
lean_dec_ref(v_lowers_2459_);
v___y_2451_ = v___x_2463_;
goto v___jp_2450_;
}
v___jp_2450_:
{
lean_object* v___x_2452_; lean_object* v_fst_2453_; lean_object* v_snd_2454_; lean_object* v___f_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; 
v___x_2452_ = l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0(v_x_2426_, v___y_2451_);
lean_dec_ref(v___y_2451_);
v_fst_2453_ = lean_ctor_get(v___x_2452_, 0);
lean_inc(v_fst_2453_);
v_snd_2454_ = lean_ctor_get(v___x_2452_, 1);
lean_inc(v_snd_2454_);
lean_dec_ref(v___x_2452_);
lean_inc(v_a_2429_);
v___f_2455_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2455_, 0, v_a_2429_);
lean_closure_set(v___f_2455_, 1, v_y_2428_);
lean_closure_set(v___f_2455_, 2, v_fst_2453_);
v___x_2456_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_2457_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2456_, v___f_2455_, v_a_2430_);
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v___x_2458_; 
lean_dec_ref_known(v___x_2457_, 1);
v___x_2458_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs(v_a_2425_, v_x_2426_, v_c_2427_, v_snd_2454_, v_a_2429_, v_a_2430_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_, v_a_2435_, v_a_2436_, v_a_2437_, v_a_2438_, v_a_2439_);
lean_dec(v_snd_2454_);
return v___x_2458_;
}
else
{
lean_dec(v_snd_2454_);
lean_dec_ref(v_c_2427_);
lean_dec(v_x_2426_);
lean_dec(v_a_2425_);
return v___x_2457_;
}
}
}
else
{
lean_object* v_a_2464_; lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2471_; 
lean_dec(v_y_2428_);
lean_dec_ref(v_c_2427_);
lean_dec(v_x_2426_);
lean_dec(v_a_2425_);
v_a_2464_ = lean_ctor_get(v___x_2448_, 0);
v_isSharedCheck_2471_ = !lean_is_exclusive(v___x_2448_);
if (v_isSharedCheck_2471_ == 0)
{
v___x_2466_ = v___x_2448_;
v_isShared_2467_ = v_isSharedCheck_2471_;
goto v_resetjp_2465_;
}
else
{
lean_inc(v_a_2464_);
lean_dec(v___x_2448_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2471_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v___x_2469_; 
if (v_isShared_2467_ == 0)
{
v___x_2469_ = v___x_2466_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v_a_2464_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
}
}
else
{
lean_object* v___x_2472_; lean_object* v___x_2474_; 
lean_dec(v_y_2428_);
lean_dec_ref(v_c_2427_);
lean_dec(v_x_2426_);
lean_dec(v_a_2425_);
v___x_2472_ = lean_box(0);
if (v_isShared_2446_ == 0)
{
lean_ctor_set(v___x_2445_, 0, v___x_2472_);
v___x_2474_ = v___x_2445_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v___x_2472_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
}
}
else
{
lean_object* v_a_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2484_; 
lean_dec(v_y_2428_);
lean_dec_ref(v_c_2427_);
lean_dec(v_x_2426_);
lean_dec(v_a_2425_);
v_a_2477_ = lean_ctor_get(v___x_2442_, 0);
v_isSharedCheck_2484_ = !lean_is_exclusive(v___x_2442_);
if (v_isSharedCheck_2484_ == 0)
{
v___x_2479_ = v___x_2442_;
v_isShared_2480_ = v_isSharedCheck_2484_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_a_2477_);
lean_dec(v___x_2442_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2484_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___x_2482_; 
if (v_isShared_2480_ == 0)
{
v___x_2482_ = v___x_2479_;
goto v_reusejp_2481_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v_a_2477_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___boxed(lean_object* v_a_2485_, lean_object* v_x_2486_, lean_object* v_c_2487_, lean_object* v_y_2488_, lean_object* v_a_2489_, lean_object* v_a_2490_, lean_object* v_a_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_){
_start:
{
lean_object* v_res_2501_; 
v_res_2501_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers(v_a_2485_, v_x_2486_, v_c_2487_, v_y_2488_, v_a_2489_, v_a_2490_, v_a_2491_, v_a_2492_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_);
lean_dec(v_a_2499_);
lean_dec_ref(v_a_2498_);
lean_dec(v_a_2497_);
lean_dec_ref(v_a_2496_);
lean_dec(v_a_2495_);
lean_dec_ref(v_a_2494_);
lean_dec(v_a_2493_);
lean_dec_ref(v_a_2492_);
lean_dec(v_a_2491_);
lean_dec(v_a_2490_);
lean_dec(v_a_2489_);
return v_res_2501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateUppers___lam__0(lean_object* v_a_2502_, lean_object* v_y_2503_, lean_object* v_fst_2504_, lean_object* v_s_2505_){
_start:
{
lean_object* v_structs_2506_; lean_object* v_typeIdOf_2507_; lean_object* v_exprToStructId_2508_; lean_object* v_exprToStructIdEntries_2509_; lean_object* v_forbiddenNatModules_2510_; lean_object* v_natStructs_2511_; lean_object* v_natTypeIdOf_2512_; lean_object* v_exprToNatStructId_2513_; lean_object* v___x_2514_; uint8_t v___x_2515_; 
v_structs_2506_ = lean_ctor_get(v_s_2505_, 0);
v_typeIdOf_2507_ = lean_ctor_get(v_s_2505_, 1);
v_exprToStructId_2508_ = lean_ctor_get(v_s_2505_, 2);
v_exprToStructIdEntries_2509_ = lean_ctor_get(v_s_2505_, 3);
v_forbiddenNatModules_2510_ = lean_ctor_get(v_s_2505_, 4);
v_natStructs_2511_ = lean_ctor_get(v_s_2505_, 5);
v_natTypeIdOf_2512_ = lean_ctor_get(v_s_2505_, 6);
v_exprToNatStructId_2513_ = lean_ctor_get(v_s_2505_, 7);
v___x_2514_ = lean_array_get_size(v_structs_2506_);
v___x_2515_ = lean_nat_dec_lt(v_a_2502_, v___x_2514_);
if (v___x_2515_ == 0)
{
lean_dec_ref(v_fst_2504_);
return v_s_2505_;
}
else
{
lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2577_; 
lean_inc_ref(v_exprToNatStructId_2513_);
lean_inc_ref(v_natTypeIdOf_2512_);
lean_inc_ref(v_natStructs_2511_);
lean_inc_ref(v_forbiddenNatModules_2510_);
lean_inc_ref(v_exprToStructIdEntries_2509_);
lean_inc_ref(v_exprToStructId_2508_);
lean_inc_ref(v_typeIdOf_2507_);
lean_inc_ref(v_structs_2506_);
v_isSharedCheck_2577_ = !lean_is_exclusive(v_s_2505_);
if (v_isSharedCheck_2577_ == 0)
{
lean_object* v_unused_2578_; lean_object* v_unused_2579_; lean_object* v_unused_2580_; lean_object* v_unused_2581_; lean_object* v_unused_2582_; lean_object* v_unused_2583_; lean_object* v_unused_2584_; lean_object* v_unused_2585_; 
v_unused_2578_ = lean_ctor_get(v_s_2505_, 7);
lean_dec(v_unused_2578_);
v_unused_2579_ = lean_ctor_get(v_s_2505_, 6);
lean_dec(v_unused_2579_);
v_unused_2580_ = lean_ctor_get(v_s_2505_, 5);
lean_dec(v_unused_2580_);
v_unused_2581_ = lean_ctor_get(v_s_2505_, 4);
lean_dec(v_unused_2581_);
v_unused_2582_ = lean_ctor_get(v_s_2505_, 3);
lean_dec(v_unused_2582_);
v_unused_2583_ = lean_ctor_get(v_s_2505_, 2);
lean_dec(v_unused_2583_);
v_unused_2584_ = lean_ctor_get(v_s_2505_, 1);
lean_dec(v_unused_2584_);
v_unused_2585_ = lean_ctor_get(v_s_2505_, 0);
lean_dec(v_unused_2585_);
v___x_2517_ = v_s_2505_;
v_isShared_2518_ = v_isSharedCheck_2577_;
goto v_resetjp_2516_;
}
else
{
lean_dec(v_s_2505_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2577_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v_v_2519_; lean_object* v_id_2520_; lean_object* v_ringId_x3f_2521_; lean_object* v_type_2522_; lean_object* v_u_2523_; lean_object* v_intModuleInst_2524_; lean_object* v_leInst_x3f_2525_; lean_object* v_ltInst_x3f_2526_; lean_object* v_lawfulOrderLTInst_x3f_2527_; lean_object* v_isPreorderInst_x3f_2528_; lean_object* v_orderedAddInst_x3f_2529_; lean_object* v_isLinearInst_x3f_2530_; lean_object* v_noNatDivInst_x3f_2531_; lean_object* v_ringInst_x3f_2532_; lean_object* v_commRingInst_x3f_2533_; lean_object* v_orderedRingInst_x3f_2534_; lean_object* v_fieldInst_x3f_2535_; lean_object* v_charInst_x3f_2536_; lean_object* v_zero_2537_; lean_object* v_ofNatZero_2538_; lean_object* v_one_x3f_2539_; lean_object* v_leFn_x3f_2540_; lean_object* v_ltFn_x3f_2541_; lean_object* v_addFn_2542_; lean_object* v_zsmulFn_2543_; lean_object* v_nsmulFn_2544_; lean_object* v_zsmulFn_x3f_2545_; lean_object* v_nsmulFn_x3f_2546_; lean_object* v_homomulFn_x3f_2547_; lean_object* v_subFn_2548_; lean_object* v_negFn_2549_; lean_object* v_vars_2550_; lean_object* v_varMap_2551_; lean_object* v_lowers_2552_; lean_object* v_uppers_2553_; lean_object* v_diseqs_2554_; lean_object* v_assignment_2555_; uint8_t v_caseSplits_2556_; lean_object* v_conflict_x3f_2557_; lean_object* v_diseqSplits_2558_; lean_object* v_elimEqs_2559_; lean_object* v_elimStack_2560_; lean_object* v_occurs_2561_; lean_object* v_ignored_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2576_; 
v_v_2519_ = lean_array_fget(v_structs_2506_, v_a_2502_);
v_id_2520_ = lean_ctor_get(v_v_2519_, 0);
v_ringId_x3f_2521_ = lean_ctor_get(v_v_2519_, 1);
v_type_2522_ = lean_ctor_get(v_v_2519_, 2);
v_u_2523_ = lean_ctor_get(v_v_2519_, 3);
v_intModuleInst_2524_ = lean_ctor_get(v_v_2519_, 4);
v_leInst_x3f_2525_ = lean_ctor_get(v_v_2519_, 5);
v_ltInst_x3f_2526_ = lean_ctor_get(v_v_2519_, 6);
v_lawfulOrderLTInst_x3f_2527_ = lean_ctor_get(v_v_2519_, 7);
v_isPreorderInst_x3f_2528_ = lean_ctor_get(v_v_2519_, 8);
v_orderedAddInst_x3f_2529_ = lean_ctor_get(v_v_2519_, 9);
v_isLinearInst_x3f_2530_ = lean_ctor_get(v_v_2519_, 10);
v_noNatDivInst_x3f_2531_ = lean_ctor_get(v_v_2519_, 11);
v_ringInst_x3f_2532_ = lean_ctor_get(v_v_2519_, 12);
v_commRingInst_x3f_2533_ = lean_ctor_get(v_v_2519_, 13);
v_orderedRingInst_x3f_2534_ = lean_ctor_get(v_v_2519_, 14);
v_fieldInst_x3f_2535_ = lean_ctor_get(v_v_2519_, 15);
v_charInst_x3f_2536_ = lean_ctor_get(v_v_2519_, 16);
v_zero_2537_ = lean_ctor_get(v_v_2519_, 17);
v_ofNatZero_2538_ = lean_ctor_get(v_v_2519_, 18);
v_one_x3f_2539_ = lean_ctor_get(v_v_2519_, 19);
v_leFn_x3f_2540_ = lean_ctor_get(v_v_2519_, 20);
v_ltFn_x3f_2541_ = lean_ctor_get(v_v_2519_, 21);
v_addFn_2542_ = lean_ctor_get(v_v_2519_, 22);
v_zsmulFn_2543_ = lean_ctor_get(v_v_2519_, 23);
v_nsmulFn_2544_ = lean_ctor_get(v_v_2519_, 24);
v_zsmulFn_x3f_2545_ = lean_ctor_get(v_v_2519_, 25);
v_nsmulFn_x3f_2546_ = lean_ctor_get(v_v_2519_, 26);
v_homomulFn_x3f_2547_ = lean_ctor_get(v_v_2519_, 27);
v_subFn_2548_ = lean_ctor_get(v_v_2519_, 28);
v_negFn_2549_ = lean_ctor_get(v_v_2519_, 29);
v_vars_2550_ = lean_ctor_get(v_v_2519_, 30);
v_varMap_2551_ = lean_ctor_get(v_v_2519_, 31);
v_lowers_2552_ = lean_ctor_get(v_v_2519_, 32);
v_uppers_2553_ = lean_ctor_get(v_v_2519_, 33);
v_diseqs_2554_ = lean_ctor_get(v_v_2519_, 34);
v_assignment_2555_ = lean_ctor_get(v_v_2519_, 35);
v_caseSplits_2556_ = lean_ctor_get_uint8(v_v_2519_, sizeof(void*)*42);
v_conflict_x3f_2557_ = lean_ctor_get(v_v_2519_, 36);
v_diseqSplits_2558_ = lean_ctor_get(v_v_2519_, 37);
v_elimEqs_2559_ = lean_ctor_get(v_v_2519_, 38);
v_elimStack_2560_ = lean_ctor_get(v_v_2519_, 39);
v_occurs_2561_ = lean_ctor_get(v_v_2519_, 40);
v_ignored_2562_ = lean_ctor_get(v_v_2519_, 41);
v_isSharedCheck_2576_ = !lean_is_exclusive(v_v_2519_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2564_ = v_v_2519_;
v_isShared_2565_ = v_isSharedCheck_2576_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_ignored_2562_);
lean_inc(v_occurs_2561_);
lean_inc(v_elimStack_2560_);
lean_inc(v_elimEqs_2559_);
lean_inc(v_diseqSplits_2558_);
lean_inc(v_conflict_x3f_2557_);
lean_inc(v_assignment_2555_);
lean_inc(v_diseqs_2554_);
lean_inc(v_uppers_2553_);
lean_inc(v_lowers_2552_);
lean_inc(v_varMap_2551_);
lean_inc(v_vars_2550_);
lean_inc(v_negFn_2549_);
lean_inc(v_subFn_2548_);
lean_inc(v_homomulFn_x3f_2547_);
lean_inc(v_nsmulFn_x3f_2546_);
lean_inc(v_zsmulFn_x3f_2545_);
lean_inc(v_nsmulFn_2544_);
lean_inc(v_zsmulFn_2543_);
lean_inc(v_addFn_2542_);
lean_inc(v_ltFn_x3f_2541_);
lean_inc(v_leFn_x3f_2540_);
lean_inc(v_one_x3f_2539_);
lean_inc(v_ofNatZero_2538_);
lean_inc(v_zero_2537_);
lean_inc(v_charInst_x3f_2536_);
lean_inc(v_fieldInst_x3f_2535_);
lean_inc(v_orderedRingInst_x3f_2534_);
lean_inc(v_commRingInst_x3f_2533_);
lean_inc(v_ringInst_x3f_2532_);
lean_inc(v_noNatDivInst_x3f_2531_);
lean_inc(v_isLinearInst_x3f_2530_);
lean_inc(v_orderedAddInst_x3f_2529_);
lean_inc(v_isPreorderInst_x3f_2528_);
lean_inc(v_lawfulOrderLTInst_x3f_2527_);
lean_inc(v_ltInst_x3f_2526_);
lean_inc(v_leInst_x3f_2525_);
lean_inc(v_intModuleInst_2524_);
lean_inc(v_u_2523_);
lean_inc(v_type_2522_);
lean_inc(v_ringId_x3f_2521_);
lean_inc(v_id_2520_);
lean_dec(v_v_2519_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2576_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2566_; lean_object* v_xs_x27_2567_; lean_object* v___x_2568_; lean_object* v___x_2570_; 
v___x_2566_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0);
v_xs_x27_2567_ = lean_array_fset(v_structs_2506_, v_a_2502_, v___x_2566_);
v___x_2568_ = l_Lean_PersistentArray_set___redArg(v_uppers_2553_, v_y_2503_, v_fst_2504_);
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 33, v___x_2568_);
v___x_2570_ = v___x_2564_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v_id_2520_);
lean_ctor_set(v_reuseFailAlloc_2575_, 1, v_ringId_x3f_2521_);
lean_ctor_set(v_reuseFailAlloc_2575_, 2, v_type_2522_);
lean_ctor_set(v_reuseFailAlloc_2575_, 3, v_u_2523_);
lean_ctor_set(v_reuseFailAlloc_2575_, 4, v_intModuleInst_2524_);
lean_ctor_set(v_reuseFailAlloc_2575_, 5, v_leInst_x3f_2525_);
lean_ctor_set(v_reuseFailAlloc_2575_, 6, v_ltInst_x3f_2526_);
lean_ctor_set(v_reuseFailAlloc_2575_, 7, v_lawfulOrderLTInst_x3f_2527_);
lean_ctor_set(v_reuseFailAlloc_2575_, 8, v_isPreorderInst_x3f_2528_);
lean_ctor_set(v_reuseFailAlloc_2575_, 9, v_orderedAddInst_x3f_2529_);
lean_ctor_set(v_reuseFailAlloc_2575_, 10, v_isLinearInst_x3f_2530_);
lean_ctor_set(v_reuseFailAlloc_2575_, 11, v_noNatDivInst_x3f_2531_);
lean_ctor_set(v_reuseFailAlloc_2575_, 12, v_ringInst_x3f_2532_);
lean_ctor_set(v_reuseFailAlloc_2575_, 13, v_commRingInst_x3f_2533_);
lean_ctor_set(v_reuseFailAlloc_2575_, 14, v_orderedRingInst_x3f_2534_);
lean_ctor_set(v_reuseFailAlloc_2575_, 15, v_fieldInst_x3f_2535_);
lean_ctor_set(v_reuseFailAlloc_2575_, 16, v_charInst_x3f_2536_);
lean_ctor_set(v_reuseFailAlloc_2575_, 17, v_zero_2537_);
lean_ctor_set(v_reuseFailAlloc_2575_, 18, v_ofNatZero_2538_);
lean_ctor_set(v_reuseFailAlloc_2575_, 19, v_one_x3f_2539_);
lean_ctor_set(v_reuseFailAlloc_2575_, 20, v_leFn_x3f_2540_);
lean_ctor_set(v_reuseFailAlloc_2575_, 21, v_ltFn_x3f_2541_);
lean_ctor_set(v_reuseFailAlloc_2575_, 22, v_addFn_2542_);
lean_ctor_set(v_reuseFailAlloc_2575_, 23, v_zsmulFn_2543_);
lean_ctor_set(v_reuseFailAlloc_2575_, 24, v_nsmulFn_2544_);
lean_ctor_set(v_reuseFailAlloc_2575_, 25, v_zsmulFn_x3f_2545_);
lean_ctor_set(v_reuseFailAlloc_2575_, 26, v_nsmulFn_x3f_2546_);
lean_ctor_set(v_reuseFailAlloc_2575_, 27, v_homomulFn_x3f_2547_);
lean_ctor_set(v_reuseFailAlloc_2575_, 28, v_subFn_2548_);
lean_ctor_set(v_reuseFailAlloc_2575_, 29, v_negFn_2549_);
lean_ctor_set(v_reuseFailAlloc_2575_, 30, v_vars_2550_);
lean_ctor_set(v_reuseFailAlloc_2575_, 31, v_varMap_2551_);
lean_ctor_set(v_reuseFailAlloc_2575_, 32, v_lowers_2552_);
lean_ctor_set(v_reuseFailAlloc_2575_, 33, v___x_2568_);
lean_ctor_set(v_reuseFailAlloc_2575_, 34, v_diseqs_2554_);
lean_ctor_set(v_reuseFailAlloc_2575_, 35, v_assignment_2555_);
lean_ctor_set(v_reuseFailAlloc_2575_, 36, v_conflict_x3f_2557_);
lean_ctor_set(v_reuseFailAlloc_2575_, 37, v_diseqSplits_2558_);
lean_ctor_set(v_reuseFailAlloc_2575_, 38, v_elimEqs_2559_);
lean_ctor_set(v_reuseFailAlloc_2575_, 39, v_elimStack_2560_);
lean_ctor_set(v_reuseFailAlloc_2575_, 40, v_occurs_2561_);
lean_ctor_set(v_reuseFailAlloc_2575_, 41, v_ignored_2562_);
lean_ctor_set_uint8(v_reuseFailAlloc_2575_, sizeof(void*)*42, v_caseSplits_2556_);
v___x_2570_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2569_;
}
v_reusejp_2569_:
{
lean_object* v___x_2571_; lean_object* v___x_2573_; 
v___x_2571_ = lean_array_fset(v_xs_x27_2567_, v_a_2502_, v___x_2570_);
if (v_isShared_2518_ == 0)
{
lean_ctor_set(v___x_2517_, 0, v___x_2571_);
v___x_2573_ = v___x_2517_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v___x_2571_);
lean_ctor_set(v_reuseFailAlloc_2574_, 1, v_typeIdOf_2507_);
lean_ctor_set(v_reuseFailAlloc_2574_, 2, v_exprToStructId_2508_);
lean_ctor_set(v_reuseFailAlloc_2574_, 3, v_exprToStructIdEntries_2509_);
lean_ctor_set(v_reuseFailAlloc_2574_, 4, v_forbiddenNatModules_2510_);
lean_ctor_set(v_reuseFailAlloc_2574_, 5, v_natStructs_2511_);
lean_ctor_set(v_reuseFailAlloc_2574_, 6, v_natTypeIdOf_2512_);
lean_ctor_set(v_reuseFailAlloc_2574_, 7, v_exprToNatStructId_2513_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateUppers___lam__0___boxed(lean_object* v_a_2586_, lean_object* v_y_2587_, lean_object* v_fst_2588_, lean_object* v_s_2589_){
_start:
{
lean_object* v_res_2590_; 
v_res_2590_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateUppers___lam__0(v_a_2586_, v_y_2587_, v_fst_2588_, v_s_2589_);
lean_dec(v_y_2587_);
lean_dec(v_a_2586_);
return v_res_2590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateUppers(lean_object* v_a_2591_, lean_object* v_x_2592_, lean_object* v_c_2593_, lean_object* v_y_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_){
_start:
{
lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2607_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___closed__0);
v___x_2608_ = l_Lean_Meta_Grind_Arith_Linear_inconsistent(v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_, v_a_2605_);
if (lean_obj_tag(v___x_2608_) == 0)
{
lean_object* v_a_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2642_; 
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
v_isSharedCheck_2642_ = !lean_is_exclusive(v___x_2608_);
if (v_isSharedCheck_2642_ == 0)
{
v___x_2611_ = v___x_2608_;
v_isShared_2612_ = v_isSharedCheck_2642_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_a_2609_);
lean_dec(v___x_2608_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2642_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
uint8_t v___x_2613_; 
v___x_2613_ = lean_unbox(v_a_2609_);
lean_dec(v_a_2609_);
if (v___x_2613_ == 0)
{
lean_object* v___x_2614_; 
lean_del_object(v___x_2611_);
v___x_2614_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_, v_a_2605_);
if (lean_obj_tag(v___x_2614_) == 0)
{
lean_object* v_a_2615_; lean_object* v___y_2617_; lean_object* v_uppers_2625_; lean_object* v_size_2626_; uint8_t v___x_2627_; 
v_a_2615_ = lean_ctor_get(v___x_2614_, 0);
lean_inc(v_a_2615_);
lean_dec_ref_known(v___x_2614_, 1);
v_uppers_2625_ = lean_ctor_get(v_a_2615_, 33);
lean_inc_ref(v_uppers_2625_);
lean_dec(v_a_2615_);
v_size_2626_ = lean_ctor_get(v_uppers_2625_, 2);
v___x_2627_ = lean_nat_dec_lt(v_y_2594_, v_size_2626_);
if (v___x_2627_ == 0)
{
lean_object* v___x_2628_; 
lean_dec_ref(v_uppers_2625_);
v___x_2628_ = l_outOfBounds___redArg(v___x_2607_);
v___y_2617_ = v___x_2628_;
goto v___jp_2616_;
}
else
{
lean_object* v___x_2629_; 
v___x_2629_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2607_, v_uppers_2625_, v_y_2594_);
lean_dec_ref(v_uppers_2625_);
v___y_2617_ = v___x_2629_;
goto v___jp_2616_;
}
v___jp_2616_:
{
lean_object* v___x_2618_; lean_object* v_fst_2619_; lean_object* v_snd_2620_; lean_object* v___f_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2618_ = l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitIneqCnstrs_spec__0(v_x_2592_, v___y_2617_);
lean_dec_ref(v___y_2617_);
v_fst_2619_ = lean_ctor_get(v___x_2618_, 0);
lean_inc(v_fst_2619_);
v_snd_2620_ = lean_ctor_get(v___x_2618_, 1);
lean_inc(v_snd_2620_);
lean_dec_ref(v___x_2618_);
lean_inc(v_a_2595_);
v___f_2621_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateUppers___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2621_, 0, v_a_2595_);
lean_closure_set(v___f_2621_, 1, v_y_2594_);
lean_closure_set(v___f_2621_, 2, v_fst_2619_);
v___x_2622_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_2623_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2622_, v___f_2621_, v_a_2596_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v___x_2624_; 
lean_dec_ref_known(v___x_2623_, 1);
v___x_2624_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs(v_a_2591_, v_x_2592_, v_c_2593_, v_snd_2620_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_, v_a_2605_);
lean_dec(v_snd_2620_);
return v___x_2624_;
}
else
{
lean_dec(v_snd_2620_);
lean_dec_ref(v_c_2593_);
lean_dec(v_x_2592_);
lean_dec(v_a_2591_);
return v___x_2623_;
}
}
}
else
{
lean_object* v_a_2630_; lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2637_; 
lean_dec(v_y_2594_);
lean_dec_ref(v_c_2593_);
lean_dec(v_x_2592_);
lean_dec(v_a_2591_);
v_a_2630_ = lean_ctor_get(v___x_2614_, 0);
v_isSharedCheck_2637_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2632_ = v___x_2614_;
v_isShared_2633_ = v_isSharedCheck_2637_;
goto v_resetjp_2631_;
}
else
{
lean_inc(v_a_2630_);
lean_dec(v___x_2614_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2637_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
lean_object* v___x_2635_; 
if (v_isShared_2633_ == 0)
{
v___x_2635_ = v___x_2632_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v_a_2630_);
v___x_2635_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
return v___x_2635_;
}
}
}
}
else
{
lean_object* v___x_2638_; lean_object* v___x_2640_; 
lean_dec(v_y_2594_);
lean_dec_ref(v_c_2593_);
lean_dec(v_x_2592_);
lean_dec(v_a_2591_);
v___x_2638_ = lean_box(0);
if (v_isShared_2612_ == 0)
{
lean_ctor_set(v___x_2611_, 0, v___x_2638_);
v___x_2640_ = v___x_2611_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v___x_2638_);
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
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2650_; 
lean_dec(v_y_2594_);
lean_dec_ref(v_c_2593_);
lean_dec(v_x_2592_);
lean_dec(v_a_2591_);
v_a_2643_ = lean_ctor_get(v___x_2608_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2608_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2645_ = v___x_2608_;
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2608_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2648_; 
if (v_isShared_2646_ == 0)
{
v___x_2648_ = v___x_2645_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_a_2643_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateUppers___boxed(lean_object* v_a_2651_, lean_object* v_x_2652_, lean_object* v_c_2653_, lean_object* v_y_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_, lean_object* v_a_2658_, lean_object* v_a_2659_, lean_object* v_a_2660_, lean_object* v_a_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_){
_start:
{
lean_object* v_res_2667_; 
v_res_2667_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateUppers(v_a_2651_, v_x_2652_, v_c_2653_, v_y_2654_, v_a_2655_, v_a_2656_, v_a_2657_, v_a_2658_, v_a_2659_, v_a_2660_, v_a_2661_, v_a_2662_, v_a_2663_, v_a_2664_, v_a_2665_);
lean_dec(v_a_2665_);
lean_dec_ref(v_a_2664_);
lean_dec(v_a_2663_);
lean_dec_ref(v_a_2662_);
lean_dec(v_a_2661_);
lean_dec_ref(v_a_2660_);
lean_dec(v_a_2659_);
lean_dec_ref(v_a_2658_);
lean_dec(v_a_2657_);
lean_dec(v_a_2656_);
lean_dec(v_a_2655_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___lam__0(lean_object* v___y_2668_, lean_object* v_a_2669_, lean_object* v_s_2670_){
_start:
{
lean_object* v_structs_2671_; lean_object* v_typeIdOf_2672_; lean_object* v_exprToStructId_2673_; lean_object* v_exprToStructIdEntries_2674_; lean_object* v_forbiddenNatModules_2675_; lean_object* v_natStructs_2676_; lean_object* v_natTypeIdOf_2677_; lean_object* v_exprToNatStructId_2678_; lean_object* v___x_2679_; uint8_t v___x_2680_; 
v_structs_2671_ = lean_ctor_get(v_s_2670_, 0);
v_typeIdOf_2672_ = lean_ctor_get(v_s_2670_, 1);
v_exprToStructId_2673_ = lean_ctor_get(v_s_2670_, 2);
v_exprToStructIdEntries_2674_ = lean_ctor_get(v_s_2670_, 3);
v_forbiddenNatModules_2675_ = lean_ctor_get(v_s_2670_, 4);
v_natStructs_2676_ = lean_ctor_get(v_s_2670_, 5);
v_natTypeIdOf_2677_ = lean_ctor_get(v_s_2670_, 6);
v_exprToNatStructId_2678_ = lean_ctor_get(v_s_2670_, 7);
v___x_2679_ = lean_array_get_size(v_structs_2671_);
v___x_2680_ = lean_nat_dec_lt(v___y_2668_, v___x_2679_);
if (v___x_2680_ == 0)
{
lean_dec_ref(v_a_2669_);
return v_s_2670_;
}
else
{
lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2742_; 
lean_inc_ref(v_exprToNatStructId_2678_);
lean_inc_ref(v_natTypeIdOf_2677_);
lean_inc_ref(v_natStructs_2676_);
lean_inc_ref(v_forbiddenNatModules_2675_);
lean_inc_ref(v_exprToStructIdEntries_2674_);
lean_inc_ref(v_exprToStructId_2673_);
lean_inc_ref(v_typeIdOf_2672_);
lean_inc_ref(v_structs_2671_);
v_isSharedCheck_2742_ = !lean_is_exclusive(v_s_2670_);
if (v_isSharedCheck_2742_ == 0)
{
lean_object* v_unused_2743_; lean_object* v_unused_2744_; lean_object* v_unused_2745_; lean_object* v_unused_2746_; lean_object* v_unused_2747_; lean_object* v_unused_2748_; lean_object* v_unused_2749_; lean_object* v_unused_2750_; 
v_unused_2743_ = lean_ctor_get(v_s_2670_, 7);
lean_dec(v_unused_2743_);
v_unused_2744_ = lean_ctor_get(v_s_2670_, 6);
lean_dec(v_unused_2744_);
v_unused_2745_ = lean_ctor_get(v_s_2670_, 5);
lean_dec(v_unused_2745_);
v_unused_2746_ = lean_ctor_get(v_s_2670_, 4);
lean_dec(v_unused_2746_);
v_unused_2747_ = lean_ctor_get(v_s_2670_, 3);
lean_dec(v_unused_2747_);
v_unused_2748_ = lean_ctor_get(v_s_2670_, 2);
lean_dec(v_unused_2748_);
v_unused_2749_ = lean_ctor_get(v_s_2670_, 1);
lean_dec(v_unused_2749_);
v_unused_2750_ = lean_ctor_get(v_s_2670_, 0);
lean_dec(v_unused_2750_);
v___x_2682_ = v_s_2670_;
v_isShared_2683_ = v_isSharedCheck_2742_;
goto v_resetjp_2681_;
}
else
{
lean_dec(v_s_2670_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2742_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v_v_2684_; lean_object* v_id_2685_; lean_object* v_ringId_x3f_2686_; lean_object* v_type_2687_; lean_object* v_u_2688_; lean_object* v_intModuleInst_2689_; lean_object* v_leInst_x3f_2690_; lean_object* v_ltInst_x3f_2691_; lean_object* v_lawfulOrderLTInst_x3f_2692_; lean_object* v_isPreorderInst_x3f_2693_; lean_object* v_orderedAddInst_x3f_2694_; lean_object* v_isLinearInst_x3f_2695_; lean_object* v_noNatDivInst_x3f_2696_; lean_object* v_ringInst_x3f_2697_; lean_object* v_commRingInst_x3f_2698_; lean_object* v_orderedRingInst_x3f_2699_; lean_object* v_fieldInst_x3f_2700_; lean_object* v_charInst_x3f_2701_; lean_object* v_zero_2702_; lean_object* v_ofNatZero_2703_; lean_object* v_one_x3f_2704_; lean_object* v_leFn_x3f_2705_; lean_object* v_ltFn_x3f_2706_; lean_object* v_addFn_2707_; lean_object* v_zsmulFn_2708_; lean_object* v_nsmulFn_2709_; lean_object* v_zsmulFn_x3f_2710_; lean_object* v_nsmulFn_x3f_2711_; lean_object* v_homomulFn_x3f_2712_; lean_object* v_subFn_2713_; lean_object* v_negFn_2714_; lean_object* v_vars_2715_; lean_object* v_varMap_2716_; lean_object* v_lowers_2717_; lean_object* v_uppers_2718_; lean_object* v_diseqs_2719_; lean_object* v_assignment_2720_; uint8_t v_caseSplits_2721_; lean_object* v_conflict_x3f_2722_; lean_object* v_diseqSplits_2723_; lean_object* v_elimEqs_2724_; lean_object* v_elimStack_2725_; lean_object* v_occurs_2726_; lean_object* v_ignored_2727_; lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2741_; 
v_v_2684_ = lean_array_fget(v_structs_2671_, v___y_2668_);
v_id_2685_ = lean_ctor_get(v_v_2684_, 0);
v_ringId_x3f_2686_ = lean_ctor_get(v_v_2684_, 1);
v_type_2687_ = lean_ctor_get(v_v_2684_, 2);
v_u_2688_ = lean_ctor_get(v_v_2684_, 3);
v_intModuleInst_2689_ = lean_ctor_get(v_v_2684_, 4);
v_leInst_x3f_2690_ = lean_ctor_get(v_v_2684_, 5);
v_ltInst_x3f_2691_ = lean_ctor_get(v_v_2684_, 6);
v_lawfulOrderLTInst_x3f_2692_ = lean_ctor_get(v_v_2684_, 7);
v_isPreorderInst_x3f_2693_ = lean_ctor_get(v_v_2684_, 8);
v_orderedAddInst_x3f_2694_ = lean_ctor_get(v_v_2684_, 9);
v_isLinearInst_x3f_2695_ = lean_ctor_get(v_v_2684_, 10);
v_noNatDivInst_x3f_2696_ = lean_ctor_get(v_v_2684_, 11);
v_ringInst_x3f_2697_ = lean_ctor_get(v_v_2684_, 12);
v_commRingInst_x3f_2698_ = lean_ctor_get(v_v_2684_, 13);
v_orderedRingInst_x3f_2699_ = lean_ctor_get(v_v_2684_, 14);
v_fieldInst_x3f_2700_ = lean_ctor_get(v_v_2684_, 15);
v_charInst_x3f_2701_ = lean_ctor_get(v_v_2684_, 16);
v_zero_2702_ = lean_ctor_get(v_v_2684_, 17);
v_ofNatZero_2703_ = lean_ctor_get(v_v_2684_, 18);
v_one_x3f_2704_ = lean_ctor_get(v_v_2684_, 19);
v_leFn_x3f_2705_ = lean_ctor_get(v_v_2684_, 20);
v_ltFn_x3f_2706_ = lean_ctor_get(v_v_2684_, 21);
v_addFn_2707_ = lean_ctor_get(v_v_2684_, 22);
v_zsmulFn_2708_ = lean_ctor_get(v_v_2684_, 23);
v_nsmulFn_2709_ = lean_ctor_get(v_v_2684_, 24);
v_zsmulFn_x3f_2710_ = lean_ctor_get(v_v_2684_, 25);
v_nsmulFn_x3f_2711_ = lean_ctor_get(v_v_2684_, 26);
v_homomulFn_x3f_2712_ = lean_ctor_get(v_v_2684_, 27);
v_subFn_2713_ = lean_ctor_get(v_v_2684_, 28);
v_negFn_2714_ = lean_ctor_get(v_v_2684_, 29);
v_vars_2715_ = lean_ctor_get(v_v_2684_, 30);
v_varMap_2716_ = lean_ctor_get(v_v_2684_, 31);
v_lowers_2717_ = lean_ctor_get(v_v_2684_, 32);
v_uppers_2718_ = lean_ctor_get(v_v_2684_, 33);
v_diseqs_2719_ = lean_ctor_get(v_v_2684_, 34);
v_assignment_2720_ = lean_ctor_get(v_v_2684_, 35);
v_caseSplits_2721_ = lean_ctor_get_uint8(v_v_2684_, sizeof(void*)*42);
v_conflict_x3f_2722_ = lean_ctor_get(v_v_2684_, 36);
v_diseqSplits_2723_ = lean_ctor_get(v_v_2684_, 37);
v_elimEqs_2724_ = lean_ctor_get(v_v_2684_, 38);
v_elimStack_2725_ = lean_ctor_get(v_v_2684_, 39);
v_occurs_2726_ = lean_ctor_get(v_v_2684_, 40);
v_ignored_2727_ = lean_ctor_get(v_v_2684_, 41);
v_isSharedCheck_2741_ = !lean_is_exclusive(v_v_2684_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2729_ = v_v_2684_;
v_isShared_2730_ = v_isSharedCheck_2741_;
goto v_resetjp_2728_;
}
else
{
lean_inc(v_ignored_2727_);
lean_inc(v_occurs_2726_);
lean_inc(v_elimStack_2725_);
lean_inc(v_elimEqs_2724_);
lean_inc(v_diseqSplits_2723_);
lean_inc(v_conflict_x3f_2722_);
lean_inc(v_assignment_2720_);
lean_inc(v_diseqs_2719_);
lean_inc(v_uppers_2718_);
lean_inc(v_lowers_2717_);
lean_inc(v_varMap_2716_);
lean_inc(v_vars_2715_);
lean_inc(v_negFn_2714_);
lean_inc(v_subFn_2713_);
lean_inc(v_homomulFn_x3f_2712_);
lean_inc(v_nsmulFn_x3f_2711_);
lean_inc(v_zsmulFn_x3f_2710_);
lean_inc(v_nsmulFn_2709_);
lean_inc(v_zsmulFn_2708_);
lean_inc(v_addFn_2707_);
lean_inc(v_ltFn_x3f_2706_);
lean_inc(v_leFn_x3f_2705_);
lean_inc(v_one_x3f_2704_);
lean_inc(v_ofNatZero_2703_);
lean_inc(v_zero_2702_);
lean_inc(v_charInst_x3f_2701_);
lean_inc(v_fieldInst_x3f_2700_);
lean_inc(v_orderedRingInst_x3f_2699_);
lean_inc(v_commRingInst_x3f_2698_);
lean_inc(v_ringInst_x3f_2697_);
lean_inc(v_noNatDivInst_x3f_2696_);
lean_inc(v_isLinearInst_x3f_2695_);
lean_inc(v_orderedAddInst_x3f_2694_);
lean_inc(v_isPreorderInst_x3f_2693_);
lean_inc(v_lawfulOrderLTInst_x3f_2692_);
lean_inc(v_ltInst_x3f_2691_);
lean_inc(v_leInst_x3f_2690_);
lean_inc(v_intModuleInst_2689_);
lean_inc(v_u_2688_);
lean_inc(v_type_2687_);
lean_inc(v_ringId_x3f_2686_);
lean_inc(v_id_2685_);
lean_dec(v_v_2684_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2741_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
lean_object* v___x_2731_; lean_object* v_xs_x27_2732_; lean_object* v___x_2733_; lean_object* v___x_2735_; 
v___x_2731_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0);
v_xs_x27_2732_ = lean_array_fset(v_structs_2671_, v___y_2668_, v___x_2731_);
v___x_2733_ = l_Lean_PersistentArray_push___redArg(v_ignored_2727_, v_a_2669_);
if (v_isShared_2730_ == 0)
{
lean_ctor_set(v___x_2729_, 41, v___x_2733_);
v___x_2735_ = v___x_2729_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_id_2685_);
lean_ctor_set(v_reuseFailAlloc_2740_, 1, v_ringId_x3f_2686_);
lean_ctor_set(v_reuseFailAlloc_2740_, 2, v_type_2687_);
lean_ctor_set(v_reuseFailAlloc_2740_, 3, v_u_2688_);
lean_ctor_set(v_reuseFailAlloc_2740_, 4, v_intModuleInst_2689_);
lean_ctor_set(v_reuseFailAlloc_2740_, 5, v_leInst_x3f_2690_);
lean_ctor_set(v_reuseFailAlloc_2740_, 6, v_ltInst_x3f_2691_);
lean_ctor_set(v_reuseFailAlloc_2740_, 7, v_lawfulOrderLTInst_x3f_2692_);
lean_ctor_set(v_reuseFailAlloc_2740_, 8, v_isPreorderInst_x3f_2693_);
lean_ctor_set(v_reuseFailAlloc_2740_, 9, v_orderedAddInst_x3f_2694_);
lean_ctor_set(v_reuseFailAlloc_2740_, 10, v_isLinearInst_x3f_2695_);
lean_ctor_set(v_reuseFailAlloc_2740_, 11, v_noNatDivInst_x3f_2696_);
lean_ctor_set(v_reuseFailAlloc_2740_, 12, v_ringInst_x3f_2697_);
lean_ctor_set(v_reuseFailAlloc_2740_, 13, v_commRingInst_x3f_2698_);
lean_ctor_set(v_reuseFailAlloc_2740_, 14, v_orderedRingInst_x3f_2699_);
lean_ctor_set(v_reuseFailAlloc_2740_, 15, v_fieldInst_x3f_2700_);
lean_ctor_set(v_reuseFailAlloc_2740_, 16, v_charInst_x3f_2701_);
lean_ctor_set(v_reuseFailAlloc_2740_, 17, v_zero_2702_);
lean_ctor_set(v_reuseFailAlloc_2740_, 18, v_ofNatZero_2703_);
lean_ctor_set(v_reuseFailAlloc_2740_, 19, v_one_x3f_2704_);
lean_ctor_set(v_reuseFailAlloc_2740_, 20, v_leFn_x3f_2705_);
lean_ctor_set(v_reuseFailAlloc_2740_, 21, v_ltFn_x3f_2706_);
lean_ctor_set(v_reuseFailAlloc_2740_, 22, v_addFn_2707_);
lean_ctor_set(v_reuseFailAlloc_2740_, 23, v_zsmulFn_2708_);
lean_ctor_set(v_reuseFailAlloc_2740_, 24, v_nsmulFn_2709_);
lean_ctor_set(v_reuseFailAlloc_2740_, 25, v_zsmulFn_x3f_2710_);
lean_ctor_set(v_reuseFailAlloc_2740_, 26, v_nsmulFn_x3f_2711_);
lean_ctor_set(v_reuseFailAlloc_2740_, 27, v_homomulFn_x3f_2712_);
lean_ctor_set(v_reuseFailAlloc_2740_, 28, v_subFn_2713_);
lean_ctor_set(v_reuseFailAlloc_2740_, 29, v_negFn_2714_);
lean_ctor_set(v_reuseFailAlloc_2740_, 30, v_vars_2715_);
lean_ctor_set(v_reuseFailAlloc_2740_, 31, v_varMap_2716_);
lean_ctor_set(v_reuseFailAlloc_2740_, 32, v_lowers_2717_);
lean_ctor_set(v_reuseFailAlloc_2740_, 33, v_uppers_2718_);
lean_ctor_set(v_reuseFailAlloc_2740_, 34, v_diseqs_2719_);
lean_ctor_set(v_reuseFailAlloc_2740_, 35, v_assignment_2720_);
lean_ctor_set(v_reuseFailAlloc_2740_, 36, v_conflict_x3f_2722_);
lean_ctor_set(v_reuseFailAlloc_2740_, 37, v_diseqSplits_2723_);
lean_ctor_set(v_reuseFailAlloc_2740_, 38, v_elimEqs_2724_);
lean_ctor_set(v_reuseFailAlloc_2740_, 39, v_elimStack_2725_);
lean_ctor_set(v_reuseFailAlloc_2740_, 40, v_occurs_2726_);
lean_ctor_set(v_reuseFailAlloc_2740_, 41, v___x_2733_);
lean_ctor_set_uint8(v_reuseFailAlloc_2740_, sizeof(void*)*42, v_caseSplits_2721_);
v___x_2735_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
lean_object* v___x_2736_; lean_object* v___x_2738_; 
v___x_2736_ = lean_array_fset(v_xs_x27_2732_, v___y_2668_, v___x_2735_);
if (v_isShared_2683_ == 0)
{
lean_ctor_set(v___x_2682_, 0, v___x_2736_);
v___x_2738_ = v___x_2682_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2739_; 
v_reuseFailAlloc_2739_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2739_, 0, v___x_2736_);
lean_ctor_set(v_reuseFailAlloc_2739_, 1, v_typeIdOf_2672_);
lean_ctor_set(v_reuseFailAlloc_2739_, 2, v_exprToStructId_2673_);
lean_ctor_set(v_reuseFailAlloc_2739_, 3, v_exprToStructIdEntries_2674_);
lean_ctor_set(v_reuseFailAlloc_2739_, 4, v_forbiddenNatModules_2675_);
lean_ctor_set(v_reuseFailAlloc_2739_, 5, v_natStructs_2676_);
lean_ctor_set(v_reuseFailAlloc_2739_, 6, v_natTypeIdOf_2677_);
lean_ctor_set(v_reuseFailAlloc_2739_, 7, v_exprToNatStructId_2678_);
v___x_2738_ = v_reuseFailAlloc_2739_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
return v___x_2738_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___lam__0___boxed(lean_object* v___y_2751_, lean_object* v_a_2752_, lean_object* v_s_2753_){
_start:
{
lean_object* v_res_2754_; 
v_res_2754_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___lam__0(v___y_2751_, v_a_2752_, v_s_2753_);
lean_dec(v___y_2751_);
return v_res_2754_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__3(void){
_start:
{
lean_object* v_cls_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; 
v_cls_2762_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__2));
v___x_2763_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__6));
v___x_2764_ = l_Lean_Name_append(v___x_2763_, v_cls_2762_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore(lean_object* v_c_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_, lean_object* v_a_2768_, lean_object* v_a_2769_, lean_object* v_a_2770_, lean_object* v_a_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_){
_start:
{
lean_object* v___y_2779_; lean_object* v___y_2780_; lean_object* v___y_2781_; lean_object* v___y_2782_; lean_object* v___y_2783_; lean_object* v___y_2784_; lean_object* v___y_2785_; lean_object* v___y_2786_; lean_object* v___y_2787_; lean_object* v___y_2788_; lean_object* v___y_2789_; lean_object* v_toCold_2803_; lean_object* v_options_2804_; uint8_t v_hasTrace_2805_; 
v_toCold_2803_ = lean_ctor_get(v_a_2775_, 0);
v_options_2804_ = lean_ctor_get(v_toCold_2803_, 2);
v_hasTrace_2805_ = lean_ctor_get_uint8(v_options_2804_, sizeof(void*)*1);
if (v_hasTrace_2805_ == 0)
{
v___y_2779_ = v_a_2766_;
v___y_2780_ = v_a_2767_;
v___y_2781_ = v_a_2768_;
v___y_2782_ = v_a_2769_;
v___y_2783_ = v_a_2770_;
v___y_2784_ = v_a_2771_;
v___y_2785_ = v_a_2772_;
v___y_2786_ = v_a_2773_;
v___y_2787_ = v_a_2774_;
v___y_2788_ = v_a_2775_;
v___y_2789_ = v_a_2776_;
goto v___jp_2778_;
}
else
{
lean_object* v_inheritedTraceOptions_2806_; lean_object* v_cls_2807_; lean_object* v___x_2808_; uint8_t v___x_2809_; 
v_inheritedTraceOptions_2806_ = lean_ctor_get(v_toCold_2803_, 11);
v_cls_2807_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__2));
v___x_2808_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___closed__3);
v___x_2809_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2806_, v_options_2804_, v___x_2808_);
if (v___x_2809_ == 0)
{
v___y_2779_ = v_a_2766_;
v___y_2780_ = v_a_2767_;
v___y_2781_ = v_a_2768_;
v___y_2782_ = v_a_2769_;
v___y_2783_ = v_a_2770_;
v___y_2784_ = v_a_2771_;
v___y_2785_ = v_a_2772_;
v___y_2786_ = v_a_2773_;
v___y_2787_ = v_a_2774_;
v___y_2788_ = v_a_2775_;
v___y_2789_ = v_a_2776_;
goto v___jp_2778_;
}
else
{
lean_object* v___x_2810_; 
v___x_2810_ = l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f_spec__0(v_c_2765_, v_a_2766_, v_a_2767_, v_a_2768_, v_a_2769_, v_a_2770_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_, v_a_2776_);
if (lean_obj_tag(v___x_2810_) == 0)
{
lean_object* v_a_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v_a_2811_ = lean_ctor_get(v___x_2810_, 0);
lean_inc(v_a_2811_);
lean_dec_ref_known(v___x_2810_, 1);
v___x_2812_ = l_Lean_MessageData_ofExpr(v_a_2811_);
v___x_2813_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v_cls_2807_, v___x_2812_, v_a_2773_, v_a_2774_, v_a_2775_, v_a_2776_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_dec_ref_known(v___x_2813_, 1);
v___y_2779_ = v_a_2766_;
v___y_2780_ = v_a_2767_;
v___y_2781_ = v_a_2768_;
v___y_2782_ = v_a_2769_;
v___y_2783_ = v_a_2770_;
v___y_2784_ = v_a_2771_;
v___y_2785_ = v_a_2772_;
v___y_2786_ = v_a_2773_;
v___y_2787_ = v_a_2774_;
v___y_2788_ = v_a_2775_;
v___y_2789_ = v_a_2776_;
goto v___jp_2778_;
}
else
{
return v___x_2813_;
}
}
else
{
lean_object* v_a_2814_; lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_2821_; 
v_a_2814_ = lean_ctor_get(v___x_2810_, 0);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2810_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2816_ = v___x_2810_;
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
else
{
lean_inc(v_a_2814_);
lean_dec(v___x_2810_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
lean_object* v___x_2819_; 
if (v_isShared_2817_ == 0)
{
v___x_2819_ = v___x_2816_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v_a_2814_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
return v___x_2819_;
}
}
}
}
}
v___jp_2778_:
{
lean_object* v___x_2790_; 
v___x_2790_ = l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f_spec__0(v_c_2765_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_);
if (lean_obj_tag(v___x_2790_) == 0)
{
lean_object* v_a_2791_; lean_object* v___f_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; 
v_a_2791_ = lean_ctor_get(v___x_2790_, 0);
lean_inc(v_a_2791_);
lean_dec_ref_known(v___x_2790_, 1);
lean_inc(v___y_2779_);
v___f_2792_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2792_, 0, v___y_2779_);
lean_closure_set(v___f_2792_, 1, v_a_2791_);
v___x_2793_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_2794_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2793_, v___f_2792_, v___y_2780_);
return v___x_2794_;
}
else
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2802_; 
v_a_2795_ = lean_ctor_get(v___x_2790_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2790_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2797_ = v___x_2790_;
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2790_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2800_; 
if (v_isShared_2798_ == 0)
{
v___x_2800_ = v___x_2797_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_a_2795_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
return v___x_2800_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore___boxed(lean_object* v_c_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_, lean_object* v_a_2826_, lean_object* v_a_2827_, lean_object* v_a_2828_, lean_object* v_a_2829_, lean_object* v_a_2830_, lean_object* v_a_2831_, lean_object* v_a_2832_, lean_object* v_a_2833_, lean_object* v_a_2834_){
_start:
{
lean_object* v_res_2835_; 
v_res_2835_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore(v_c_2822_, v_a_2823_, v_a_2824_, v_a_2825_, v_a_2826_, v_a_2827_, v_a_2828_, v_a_2829_, v_a_2830_, v_a_2831_, v_a_2832_, v_a_2833_);
lean_dec(v_a_2833_);
lean_dec_ref(v_a_2832_);
lean_dec(v_a_2831_);
lean_dec_ref(v_a_2830_);
lean_dec(v_a_2829_);
lean_dec_ref(v_a_2828_);
lean_dec(v_a_2827_);
lean_dec_ref(v_a_2826_);
lean_dec(v_a_2825_);
lean_dec(v_a_2824_);
lean_dec(v_a_2823_);
lean_dec_ref(v_c_2822_);
return v_res_2835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applySubsts_x3f(lean_object* v_c_u2082_2836_, lean_object* v_a_2837_, lean_object* v_a_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_, lean_object* v_a_2844_, lean_object* v_a_2845_, lean_object* v_a_2846_, lean_object* v_a_2847_){
_start:
{
lean_object* v_p_2849_; lean_object* v_toCold_2850_; lean_object* v_currRecDepth_2851_; lean_object* v_ref_2852_; uint8_t v_diag_2853_; uint8_t v_suppressElabErrors_2854_; lean_object* v_maxRecDepth_2906_; lean_object* v___x_2907_; uint8_t v___x_2908_; 
v_p_2849_ = lean_ctor_get(v_c_u2082_2836_, 0);
v_toCold_2850_ = lean_ctor_get(v_a_2846_, 0);
lean_inc_ref(v_toCold_2850_);
v_currRecDepth_2851_ = lean_ctor_get(v_a_2846_, 1);
lean_inc(v_currRecDepth_2851_);
v_ref_2852_ = lean_ctor_get(v_a_2846_, 2);
lean_inc(v_ref_2852_);
v_diag_2853_ = lean_ctor_get_uint8(v_a_2846_, sizeof(void*)*3);
v_suppressElabErrors_2854_ = lean_ctor_get_uint8(v_a_2846_, sizeof(void*)*3 + 1);
lean_dec_ref(v_a_2846_);
v_maxRecDepth_2906_ = lean_ctor_get(v_toCold_2850_, 3);
v___x_2907_ = lean_unsigned_to_nat(0u);
v___x_2908_ = lean_nat_dec_eq(v_maxRecDepth_2906_, v___x_2907_);
if (v___x_2908_ == 0)
{
uint8_t v___x_2909_; 
v___x_2909_ = lean_nat_dec_eq(v_currRecDepth_2851_, v_maxRecDepth_2906_);
if (v___x_2909_ == 0)
{
goto v___jp_2855_;
}
else
{
lean_object* v___x_2910_; 
lean_dec(v_currRecDepth_2851_);
lean_dec_ref(v_toCold_2850_);
lean_dec_ref(v_c_u2082_2836_);
v___x_2910_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts_spec__0___redArg(v_ref_2852_);
return v___x_2910_;
}
}
else
{
goto v___jp_2855_;
}
v___jp_2855_:
{
lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2856_ = lean_unsigned_to_nat(1u);
v___x_2857_ = lean_nat_add(v_currRecDepth_2851_, v___x_2856_);
lean_dec(v_currRecDepth_2851_);
v___x_2858_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2858_, 0, v_toCold_2850_);
lean_ctor_set(v___x_2858_, 1, v___x_2857_);
lean_ctor_set(v___x_2858_, 2, v_ref_2852_);
lean_ctor_set_uint8(v___x_2858_, sizeof(void*)*3, v_diag_2853_);
lean_ctor_set_uint8(v___x_2858_, sizeof(void*)*3 + 1, v_suppressElabErrors_2854_);
v___x_2859_ = l_Lean_Grind_Linarith_Poly_findVarToSubst(v_p_2849_, v_a_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_, v___x_2858_, v_a_2847_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2897_; 
v_a_2860_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2862_ = v___x_2859_;
v_isShared_2863_ = v_isSharedCheck_2897_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2859_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2897_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
if (lean_obj_tag(v_a_2860_) == 1)
{
lean_object* v_val_2864_; lean_object* v_snd_2865_; lean_object* v_snd_2866_; lean_object* v_fst_2867_; lean_object* v_fst_2868_; lean_object* v_p_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
lean_del_object(v___x_2862_);
v_val_2864_ = lean_ctor_get(v_a_2860_, 0);
lean_inc(v_val_2864_);
lean_dec_ref_known(v_a_2860_, 1);
v_snd_2865_ = lean_ctor_get(v_val_2864_, 1);
lean_inc(v_snd_2865_);
v_snd_2866_ = lean_ctor_get(v_snd_2865_, 1);
lean_inc(v_snd_2866_);
v_fst_2867_ = lean_ctor_get(v_val_2864_, 0);
lean_inc(v_fst_2867_);
lean_dec(v_val_2864_);
v_fst_2868_ = lean_ctor_get(v_snd_2865_, 0);
lean_inc(v_fst_2868_);
lean_dec(v_snd_2865_);
v_p_2869_ = lean_ctor_get(v_snd_2866_, 0);
v___x_2870_ = l_Lean_Grind_Linarith_Poly_coeff(v_p_2869_, v_fst_2868_);
lean_inc_ref(v_c_u2082_2836_);
v___x_2871_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f(v___x_2870_, v_fst_2868_, v_snd_2866_, v_fst_2867_, v_c_u2082_2836_, v_a_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_, v___x_2858_, v_a_2847_);
lean_dec(v_fst_2868_);
lean_dec(v___x_2870_);
if (lean_obj_tag(v___x_2871_) == 0)
{
lean_object* v_a_2872_; 
v_a_2872_ = lean_ctor_get(v___x_2871_, 0);
lean_inc(v_a_2872_);
lean_dec_ref_known(v___x_2871_, 1);
if (lean_obj_tag(v_a_2872_) == 1)
{
lean_object* v_val_2873_; 
lean_dec_ref(v_c_u2082_2836_);
v_val_2873_ = lean_ctor_get(v_a_2872_, 0);
lean_inc(v_val_2873_);
lean_dec_ref_known(v_a_2872_, 1);
v_c_u2082_2836_ = v_val_2873_;
v_a_2846_ = v___x_2858_;
goto _start;
}
else
{
lean_object* v___x_2875_; 
lean_dec(v_a_2872_);
v___x_2875_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore(v_c_u2082_2836_, v_a_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_, v_a_2845_, v___x_2858_, v_a_2847_);
lean_dec_ref_known(v___x_2858_, 3);
lean_dec_ref(v_c_u2082_2836_);
if (lean_obj_tag(v___x_2875_) == 0)
{
lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2883_; 
v_isSharedCheck_2883_ = !lean_is_exclusive(v___x_2875_);
if (v_isSharedCheck_2883_ == 0)
{
lean_object* v_unused_2884_; 
v_unused_2884_ = lean_ctor_get(v___x_2875_, 0);
lean_dec(v_unused_2884_);
v___x_2877_ = v___x_2875_;
v_isShared_2878_ = v_isSharedCheck_2883_;
goto v_resetjp_2876_;
}
else
{
lean_dec(v___x_2875_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2883_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2879_; lean_object* v___x_2881_; 
v___x_2879_ = lean_box(0);
if (v_isShared_2878_ == 0)
{
lean_ctor_set(v___x_2877_, 0, v___x_2879_);
v___x_2881_ = v___x_2877_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v___x_2879_);
v___x_2881_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
return v___x_2881_;
}
}
}
else
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2892_; 
v_a_2885_ = lean_ctor_get(v___x_2875_, 0);
v_isSharedCheck_2892_ = !lean_is_exclusive(v___x_2875_);
if (v_isSharedCheck_2892_ == 0)
{
v___x_2887_ = v___x_2875_;
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v___x_2875_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v___x_2890_; 
if (v_isShared_2888_ == 0)
{
v___x_2890_ = v___x_2887_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_a_2885_);
v___x_2890_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
return v___x_2890_;
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_2858_, 3);
lean_dec_ref(v_c_u2082_2836_);
return v___x_2871_;
}
}
else
{
lean_object* v___x_2893_; lean_object* v___x_2895_; 
lean_dec(v_a_2860_);
lean_dec_ref_known(v___x_2858_, 3);
v___x_2893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2893_, 0, v_c_u2082_2836_);
if (v_isShared_2863_ == 0)
{
lean_ctor_set(v___x_2862_, 0, v___x_2893_);
v___x_2895_ = v___x_2862_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v___x_2893_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
}
else
{
lean_object* v_a_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_2905_; 
lean_dec_ref_known(v___x_2858_, 3);
lean_dec_ref(v_c_u2082_2836_);
v_a_2898_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2905_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2905_ == 0)
{
v___x_2900_ = v___x_2859_;
v_isShared_2901_ = v_isSharedCheck_2905_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_a_2898_);
lean_dec(v___x_2859_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_2905_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
lean_object* v___x_2903_; 
if (v_isShared_2901_ == 0)
{
v___x_2903_ = v___x_2900_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2904_; 
v_reuseFailAlloc_2904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2904_, 0, v_a_2898_);
v___x_2903_ = v_reuseFailAlloc_2904_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
return v___x_2903_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applySubsts_x3f___boxed(lean_object* v_c_u2082_2911_, lean_object* v_a_2912_, lean_object* v_a_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_, lean_object* v_a_2921_, lean_object* v_a_2922_, lean_object* v_a_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applySubsts_x3f(v_c_u2082_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_, v_a_2916_, v_a_2917_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_, v_a_2922_);
lean_dec(v_a_2922_);
lean_dec(v_a_2920_);
lean_dec_ref(v_a_2919_);
lean_dec(v_a_2918_);
lean_dec_ref(v_a_2917_);
lean_dec(v_a_2916_);
lean_dec_ref(v_a_2915_);
lean_dec(v_a_2914_);
lean_dec(v_a_2913_);
lean_dec(v_a_2912_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert_spec__0_spec__0(lean_object* v_val_2925_, lean_object* v_x_2926_, size_t v_x_2927_, size_t v_x_2928_){
_start:
{
if (lean_obj_tag(v_x_2926_) == 0)
{
lean_object* v_cs_2929_; size_t v_j_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; uint8_t v___x_2933_; 
v_cs_2929_ = lean_ctor_get(v_x_2926_, 0);
v_j_2930_ = lean_usize_shift_right(v_x_2927_, v_x_2928_);
v___x_2931_ = lean_usize_to_nat(v_j_2930_);
v___x_2932_ = lean_array_get_size(v_cs_2929_);
v___x_2933_ = lean_nat_dec_lt(v___x_2931_, v___x_2932_);
if (v___x_2933_ == 0)
{
lean_dec(v___x_2931_);
lean_dec_ref(v_val_2925_);
return v_x_2926_;
}
else
{
lean_object* v___x_2935_; uint8_t v_isShared_2936_; uint8_t v_isSharedCheck_2951_; 
lean_inc_ref(v_cs_2929_);
v_isSharedCheck_2951_ = !lean_is_exclusive(v_x_2926_);
if (v_isSharedCheck_2951_ == 0)
{
lean_object* v_unused_2952_; 
v_unused_2952_ = lean_ctor_get(v_x_2926_, 0);
lean_dec(v_unused_2952_);
v___x_2935_ = v_x_2926_;
v_isShared_2936_ = v_isSharedCheck_2951_;
goto v_resetjp_2934_;
}
else
{
lean_dec(v_x_2926_);
v___x_2935_ = lean_box(0);
v_isShared_2936_ = v_isSharedCheck_2951_;
goto v_resetjp_2934_;
}
v_resetjp_2934_:
{
size_t v___x_2937_; size_t v___x_2938_; size_t v___x_2939_; size_t v_i_2940_; size_t v___x_2941_; size_t v_shift_2942_; lean_object* v_v_2943_; lean_object* v___x_2944_; lean_object* v_xs_x27_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2949_; 
v___x_2937_ = ((size_t)1ULL);
v___x_2938_ = lean_usize_shift_left(v___x_2937_, v_x_2928_);
v___x_2939_ = lean_usize_sub(v___x_2938_, v___x_2937_);
v_i_2940_ = lean_usize_land(v_x_2927_, v___x_2939_);
v___x_2941_ = ((size_t)5ULL);
v_shift_2942_ = lean_usize_sub(v_x_2928_, v___x_2941_);
v_v_2943_ = lean_array_fget(v_cs_2929_, v___x_2931_);
v___x_2944_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0);
v_xs_x27_2945_ = lean_array_fset(v_cs_2929_, v___x_2931_, v___x_2944_);
v___x_2946_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert_spec__0_spec__0(v_val_2925_, v_v_2943_, v_i_2940_, v_shift_2942_);
v___x_2947_ = lean_array_fset(v_xs_x27_2945_, v___x_2931_, v___x_2946_);
lean_dec(v___x_2931_);
if (v_isShared_2936_ == 0)
{
lean_ctor_set(v___x_2935_, 0, v___x_2947_);
v___x_2949_ = v___x_2935_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v___x_2947_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
return v___x_2949_;
}
}
}
}
else
{
lean_object* v_vs_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; uint8_t v___x_2956_; 
v_vs_2953_ = lean_ctor_get(v_x_2926_, 0);
v___x_2954_ = lean_usize_to_nat(v_x_2927_);
v___x_2955_ = lean_array_get_size(v_vs_2953_);
v___x_2956_ = lean_nat_dec_lt(v___x_2954_, v___x_2955_);
if (v___x_2956_ == 0)
{
lean_dec(v___x_2954_);
lean_dec_ref(v_val_2925_);
return v_x_2926_;
}
else
{
lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2968_; 
lean_inc_ref(v_vs_2953_);
v_isSharedCheck_2968_ = !lean_is_exclusive(v_x_2926_);
if (v_isSharedCheck_2968_ == 0)
{
lean_object* v_unused_2969_; 
v_unused_2969_ = lean_ctor_get(v_x_2926_, 0);
lean_dec(v_unused_2969_);
v___x_2958_ = v_x_2926_;
v_isShared_2959_ = v_isSharedCheck_2968_;
goto v_resetjp_2957_;
}
else
{
lean_dec(v_x_2926_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2968_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v_v_2960_; lean_object* v___x_2961_; lean_object* v_xs_x27_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2966_; 
v_v_2960_ = lean_array_fget(v_vs_2953_, v___x_2954_);
v___x_2961_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0);
v_xs_x27_2962_ = lean_array_fset(v_vs_2953_, v___x_2954_, v___x_2961_);
v___x_2963_ = l_Lean_PersistentArray_push___redArg(v_v_2960_, v_val_2925_);
v___x_2964_ = lean_array_fset(v_xs_x27_2962_, v___x_2954_, v___x_2963_);
lean_dec(v___x_2954_);
if (v_isShared_2959_ == 0)
{
lean_ctor_set(v___x_2958_, 0, v___x_2964_);
v___x_2966_ = v___x_2958_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v___x_2964_);
v___x_2966_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
return v___x_2966_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert_spec__0_spec__0___boxed(lean_object* v_val_2970_, lean_object* v_x_2971_, lean_object* v_x_2972_, lean_object* v_x_2973_){
_start:
{
size_t v_x_41348__boxed_2974_; size_t v_x_41349__boxed_2975_; lean_object* v_res_2976_; 
v_x_41348__boxed_2974_ = lean_unbox_usize(v_x_2972_);
lean_dec(v_x_2972_);
v_x_41349__boxed_2975_ = lean_unbox_usize(v_x_2973_);
lean_dec(v_x_2973_);
v_res_2976_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert_spec__0_spec__0(v_val_2970_, v_x_2971_, v_x_41348__boxed_2974_, v_x_41349__boxed_2975_);
return v_res_2976_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert_spec__0(lean_object* v_val_2977_, lean_object* v_t_2978_, lean_object* v_i_2979_){
_start:
{
lean_object* v_root_2980_; lean_object* v_tail_2981_; lean_object* v_size_2982_; size_t v_shift_2983_; lean_object* v_tailOff_2984_; lean_object* v___x_2986_; uint8_t v_isShared_2987_; uint8_t v_isSharedCheck_3008_; 
v_root_2980_ = lean_ctor_get(v_t_2978_, 0);
v_tail_2981_ = lean_ctor_get(v_t_2978_, 1);
v_size_2982_ = lean_ctor_get(v_t_2978_, 2);
v_shift_2983_ = lean_ctor_get_usize(v_t_2978_, 4);
v_tailOff_2984_ = lean_ctor_get(v_t_2978_, 3);
v_isSharedCheck_3008_ = !lean_is_exclusive(v_t_2978_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_2986_ = v_t_2978_;
v_isShared_2987_ = v_isSharedCheck_3008_;
goto v_resetjp_2985_;
}
else
{
lean_inc(v_tailOff_2984_);
lean_inc(v_size_2982_);
lean_inc(v_tail_2981_);
lean_inc(v_root_2980_);
lean_dec(v_t_2978_);
v___x_2986_ = lean_box(0);
v_isShared_2987_ = v_isSharedCheck_3008_;
goto v_resetjp_2985_;
}
v_resetjp_2985_:
{
uint8_t v___x_2988_; 
v___x_2988_ = lean_nat_dec_le(v_tailOff_2984_, v_i_2979_);
if (v___x_2988_ == 0)
{
size_t v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2992_; 
v___x_2989_ = lean_usize_of_nat(v_i_2979_);
v___x_2990_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert_spec__0_spec__0(v_val_2977_, v_root_2980_, v___x_2989_, v_shift_2983_);
if (v_isShared_2987_ == 0)
{
lean_ctor_set(v___x_2986_, 0, v___x_2990_);
v___x_2992_ = v___x_2986_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v___x_2990_);
lean_ctor_set(v_reuseFailAlloc_2993_, 1, v_tail_2981_);
lean_ctor_set(v_reuseFailAlloc_2993_, 2, v_size_2982_);
lean_ctor_set(v_reuseFailAlloc_2993_, 3, v_tailOff_2984_);
lean_ctor_set_usize(v_reuseFailAlloc_2993_, 4, v_shift_2983_);
v___x_2992_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
return v___x_2992_;
}
}
else
{
lean_object* v___x_2994_; lean_object* v___x_2995_; uint8_t v___x_2996_; 
v___x_2994_ = lean_nat_sub(v_i_2979_, v_tailOff_2984_);
v___x_2995_ = lean_array_get_size(v_tail_2981_);
v___x_2996_ = lean_nat_dec_lt(v___x_2994_, v___x_2995_);
if (v___x_2996_ == 0)
{
lean_object* v___x_2998_; 
lean_dec(v___x_2994_);
lean_dec_ref(v_val_2977_);
if (v_isShared_2987_ == 0)
{
v___x_2998_ = v___x_2986_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v_root_2980_);
lean_ctor_set(v_reuseFailAlloc_2999_, 1, v_tail_2981_);
lean_ctor_set(v_reuseFailAlloc_2999_, 2, v_size_2982_);
lean_ctor_set(v_reuseFailAlloc_2999_, 3, v_tailOff_2984_);
lean_ctor_set_usize(v_reuseFailAlloc_2999_, 4, v_shift_2983_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
return v___x_2998_;
}
}
else
{
lean_object* v_v_3000_; lean_object* v___x_3001_; lean_object* v_xs_x27_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3006_; 
v_v_3000_ = lean_array_fget(v_tail_2981_, v___x_2994_);
v___x_3001_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0);
v_xs_x27_3002_ = lean_array_fset(v_tail_2981_, v___x_2994_, v___x_3001_);
v___x_3003_ = l_Lean_PersistentArray_push___redArg(v_v_3000_, v_val_2977_);
v___x_3004_ = lean_array_fset(v_xs_x27_3002_, v___x_2994_, v___x_3003_);
lean_dec(v___x_2994_);
if (v_isShared_2987_ == 0)
{
lean_ctor_set(v___x_2986_, 1, v___x_3004_);
v___x_3006_ = v___x_2986_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_root_2980_);
lean_ctor_set(v_reuseFailAlloc_3007_, 1, v___x_3004_);
lean_ctor_set(v_reuseFailAlloc_3007_, 2, v_size_2982_);
lean_ctor_set(v_reuseFailAlloc_3007_, 3, v_tailOff_2984_);
lean_ctor_set_usize(v_reuseFailAlloc_3007_, 4, v_shift_2983_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
return v___x_3006_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert_spec__0___boxed(lean_object* v_val_3009_, lean_object* v_t_3010_, lean_object* v_i_3011_){
_start:
{
lean_object* v_res_3012_; 
v_res_3012_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert_spec__0(v_val_3009_, v_t_3010_, v_i_3011_);
lean_dec(v_i_3011_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___lam__0(lean_object* v___y_3013_, lean_object* v_val_3014_, lean_object* v_v_3015_, lean_object* v_s_3016_){
_start:
{
lean_object* v_structs_3017_; lean_object* v_typeIdOf_3018_; lean_object* v_exprToStructId_3019_; lean_object* v_exprToStructIdEntries_3020_; lean_object* v_forbiddenNatModules_3021_; lean_object* v_natStructs_3022_; lean_object* v_natTypeIdOf_3023_; lean_object* v_exprToNatStructId_3024_; lean_object* v___x_3025_; uint8_t v___x_3026_; 
v_structs_3017_ = lean_ctor_get(v_s_3016_, 0);
v_typeIdOf_3018_ = lean_ctor_get(v_s_3016_, 1);
v_exprToStructId_3019_ = lean_ctor_get(v_s_3016_, 2);
v_exprToStructIdEntries_3020_ = lean_ctor_get(v_s_3016_, 3);
v_forbiddenNatModules_3021_ = lean_ctor_get(v_s_3016_, 4);
v_natStructs_3022_ = lean_ctor_get(v_s_3016_, 5);
v_natTypeIdOf_3023_ = lean_ctor_get(v_s_3016_, 6);
v_exprToNatStructId_3024_ = lean_ctor_get(v_s_3016_, 7);
v___x_3025_ = lean_array_get_size(v_structs_3017_);
v___x_3026_ = lean_nat_dec_lt(v___y_3013_, v___x_3025_);
if (v___x_3026_ == 0)
{
lean_dec_ref(v_val_3014_);
return v_s_3016_;
}
else
{
lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3088_; 
lean_inc_ref(v_exprToNatStructId_3024_);
lean_inc_ref(v_natTypeIdOf_3023_);
lean_inc_ref(v_natStructs_3022_);
lean_inc_ref(v_forbiddenNatModules_3021_);
lean_inc_ref(v_exprToStructIdEntries_3020_);
lean_inc_ref(v_exprToStructId_3019_);
lean_inc_ref(v_typeIdOf_3018_);
lean_inc_ref(v_structs_3017_);
v_isSharedCheck_3088_ = !lean_is_exclusive(v_s_3016_);
if (v_isSharedCheck_3088_ == 0)
{
lean_object* v_unused_3089_; lean_object* v_unused_3090_; lean_object* v_unused_3091_; lean_object* v_unused_3092_; lean_object* v_unused_3093_; lean_object* v_unused_3094_; lean_object* v_unused_3095_; lean_object* v_unused_3096_; 
v_unused_3089_ = lean_ctor_get(v_s_3016_, 7);
lean_dec(v_unused_3089_);
v_unused_3090_ = lean_ctor_get(v_s_3016_, 6);
lean_dec(v_unused_3090_);
v_unused_3091_ = lean_ctor_get(v_s_3016_, 5);
lean_dec(v_unused_3091_);
v_unused_3092_ = lean_ctor_get(v_s_3016_, 4);
lean_dec(v_unused_3092_);
v_unused_3093_ = lean_ctor_get(v_s_3016_, 3);
lean_dec(v_unused_3093_);
v_unused_3094_ = lean_ctor_get(v_s_3016_, 2);
lean_dec(v_unused_3094_);
v_unused_3095_ = lean_ctor_get(v_s_3016_, 1);
lean_dec(v_unused_3095_);
v_unused_3096_ = lean_ctor_get(v_s_3016_, 0);
lean_dec(v_unused_3096_);
v___x_3028_ = v_s_3016_;
v_isShared_3029_ = v_isSharedCheck_3088_;
goto v_resetjp_3027_;
}
else
{
lean_dec(v_s_3016_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3088_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v_v_3030_; lean_object* v_id_3031_; lean_object* v_ringId_x3f_3032_; lean_object* v_type_3033_; lean_object* v_u_3034_; lean_object* v_intModuleInst_3035_; lean_object* v_leInst_x3f_3036_; lean_object* v_ltInst_x3f_3037_; lean_object* v_lawfulOrderLTInst_x3f_3038_; lean_object* v_isPreorderInst_x3f_3039_; lean_object* v_orderedAddInst_x3f_3040_; lean_object* v_isLinearInst_x3f_3041_; lean_object* v_noNatDivInst_x3f_3042_; lean_object* v_ringInst_x3f_3043_; lean_object* v_commRingInst_x3f_3044_; lean_object* v_orderedRingInst_x3f_3045_; lean_object* v_fieldInst_x3f_3046_; lean_object* v_charInst_x3f_3047_; lean_object* v_zero_3048_; lean_object* v_ofNatZero_3049_; lean_object* v_one_x3f_3050_; lean_object* v_leFn_x3f_3051_; lean_object* v_ltFn_x3f_3052_; lean_object* v_addFn_3053_; lean_object* v_zsmulFn_3054_; lean_object* v_nsmulFn_3055_; lean_object* v_zsmulFn_x3f_3056_; lean_object* v_nsmulFn_x3f_3057_; lean_object* v_homomulFn_x3f_3058_; lean_object* v_subFn_3059_; lean_object* v_negFn_3060_; lean_object* v_vars_3061_; lean_object* v_varMap_3062_; lean_object* v_lowers_3063_; lean_object* v_uppers_3064_; lean_object* v_diseqs_3065_; lean_object* v_assignment_3066_; uint8_t v_caseSplits_3067_; lean_object* v_conflict_x3f_3068_; lean_object* v_diseqSplits_3069_; lean_object* v_elimEqs_3070_; lean_object* v_elimStack_3071_; lean_object* v_occurs_3072_; lean_object* v_ignored_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3087_; 
v_v_3030_ = lean_array_fget(v_structs_3017_, v___y_3013_);
v_id_3031_ = lean_ctor_get(v_v_3030_, 0);
v_ringId_x3f_3032_ = lean_ctor_get(v_v_3030_, 1);
v_type_3033_ = lean_ctor_get(v_v_3030_, 2);
v_u_3034_ = lean_ctor_get(v_v_3030_, 3);
v_intModuleInst_3035_ = lean_ctor_get(v_v_3030_, 4);
v_leInst_x3f_3036_ = lean_ctor_get(v_v_3030_, 5);
v_ltInst_x3f_3037_ = lean_ctor_get(v_v_3030_, 6);
v_lawfulOrderLTInst_x3f_3038_ = lean_ctor_get(v_v_3030_, 7);
v_isPreorderInst_x3f_3039_ = lean_ctor_get(v_v_3030_, 8);
v_orderedAddInst_x3f_3040_ = lean_ctor_get(v_v_3030_, 9);
v_isLinearInst_x3f_3041_ = lean_ctor_get(v_v_3030_, 10);
v_noNatDivInst_x3f_3042_ = lean_ctor_get(v_v_3030_, 11);
v_ringInst_x3f_3043_ = lean_ctor_get(v_v_3030_, 12);
v_commRingInst_x3f_3044_ = lean_ctor_get(v_v_3030_, 13);
v_orderedRingInst_x3f_3045_ = lean_ctor_get(v_v_3030_, 14);
v_fieldInst_x3f_3046_ = lean_ctor_get(v_v_3030_, 15);
v_charInst_x3f_3047_ = lean_ctor_get(v_v_3030_, 16);
v_zero_3048_ = lean_ctor_get(v_v_3030_, 17);
v_ofNatZero_3049_ = lean_ctor_get(v_v_3030_, 18);
v_one_x3f_3050_ = lean_ctor_get(v_v_3030_, 19);
v_leFn_x3f_3051_ = lean_ctor_get(v_v_3030_, 20);
v_ltFn_x3f_3052_ = lean_ctor_get(v_v_3030_, 21);
v_addFn_3053_ = lean_ctor_get(v_v_3030_, 22);
v_zsmulFn_3054_ = lean_ctor_get(v_v_3030_, 23);
v_nsmulFn_3055_ = lean_ctor_get(v_v_3030_, 24);
v_zsmulFn_x3f_3056_ = lean_ctor_get(v_v_3030_, 25);
v_nsmulFn_x3f_3057_ = lean_ctor_get(v_v_3030_, 26);
v_homomulFn_x3f_3058_ = lean_ctor_get(v_v_3030_, 27);
v_subFn_3059_ = lean_ctor_get(v_v_3030_, 28);
v_negFn_3060_ = lean_ctor_get(v_v_3030_, 29);
v_vars_3061_ = lean_ctor_get(v_v_3030_, 30);
v_varMap_3062_ = lean_ctor_get(v_v_3030_, 31);
v_lowers_3063_ = lean_ctor_get(v_v_3030_, 32);
v_uppers_3064_ = lean_ctor_get(v_v_3030_, 33);
v_diseqs_3065_ = lean_ctor_get(v_v_3030_, 34);
v_assignment_3066_ = lean_ctor_get(v_v_3030_, 35);
v_caseSplits_3067_ = lean_ctor_get_uint8(v_v_3030_, sizeof(void*)*42);
v_conflict_x3f_3068_ = lean_ctor_get(v_v_3030_, 36);
v_diseqSplits_3069_ = lean_ctor_get(v_v_3030_, 37);
v_elimEqs_3070_ = lean_ctor_get(v_v_3030_, 38);
v_elimStack_3071_ = lean_ctor_get(v_v_3030_, 39);
v_occurs_3072_ = lean_ctor_get(v_v_3030_, 40);
v_ignored_3073_ = lean_ctor_get(v_v_3030_, 41);
v_isSharedCheck_3087_ = !lean_is_exclusive(v_v_3030_);
if (v_isSharedCheck_3087_ == 0)
{
v___x_3075_ = v_v_3030_;
v_isShared_3076_ = v_isSharedCheck_3087_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_ignored_3073_);
lean_inc(v_occurs_3072_);
lean_inc(v_elimStack_3071_);
lean_inc(v_elimEqs_3070_);
lean_inc(v_diseqSplits_3069_);
lean_inc(v_conflict_x3f_3068_);
lean_inc(v_assignment_3066_);
lean_inc(v_diseqs_3065_);
lean_inc(v_uppers_3064_);
lean_inc(v_lowers_3063_);
lean_inc(v_varMap_3062_);
lean_inc(v_vars_3061_);
lean_inc(v_negFn_3060_);
lean_inc(v_subFn_3059_);
lean_inc(v_homomulFn_x3f_3058_);
lean_inc(v_nsmulFn_x3f_3057_);
lean_inc(v_zsmulFn_x3f_3056_);
lean_inc(v_nsmulFn_3055_);
lean_inc(v_zsmulFn_3054_);
lean_inc(v_addFn_3053_);
lean_inc(v_ltFn_x3f_3052_);
lean_inc(v_leFn_x3f_3051_);
lean_inc(v_one_x3f_3050_);
lean_inc(v_ofNatZero_3049_);
lean_inc(v_zero_3048_);
lean_inc(v_charInst_x3f_3047_);
lean_inc(v_fieldInst_x3f_3046_);
lean_inc(v_orderedRingInst_x3f_3045_);
lean_inc(v_commRingInst_x3f_3044_);
lean_inc(v_ringInst_x3f_3043_);
lean_inc(v_noNatDivInst_x3f_3042_);
lean_inc(v_isLinearInst_x3f_3041_);
lean_inc(v_orderedAddInst_x3f_3040_);
lean_inc(v_isPreorderInst_x3f_3039_);
lean_inc(v_lawfulOrderLTInst_x3f_3038_);
lean_inc(v_ltInst_x3f_3037_);
lean_inc(v_leInst_x3f_3036_);
lean_inc(v_intModuleInst_3035_);
lean_inc(v_u_3034_);
lean_inc(v_type_3033_);
lean_inc(v_ringId_x3f_3032_);
lean_inc(v_id_3031_);
lean_dec(v_v_3030_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3087_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3077_; lean_object* v_xs_x27_3078_; lean_object* v___x_3079_; lean_object* v___x_3081_; 
v___x_3077_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0);
v_xs_x27_3078_ = lean_array_fset(v_structs_3017_, v___y_3013_, v___x_3077_);
v___x_3079_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert_spec__0(v_val_3014_, v_diseqs_3065_, v_v_3015_);
if (v_isShared_3076_ == 0)
{
lean_ctor_set(v___x_3075_, 34, v___x_3079_);
v___x_3081_ = v___x_3075_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v_id_3031_);
lean_ctor_set(v_reuseFailAlloc_3086_, 1, v_ringId_x3f_3032_);
lean_ctor_set(v_reuseFailAlloc_3086_, 2, v_type_3033_);
lean_ctor_set(v_reuseFailAlloc_3086_, 3, v_u_3034_);
lean_ctor_set(v_reuseFailAlloc_3086_, 4, v_intModuleInst_3035_);
lean_ctor_set(v_reuseFailAlloc_3086_, 5, v_leInst_x3f_3036_);
lean_ctor_set(v_reuseFailAlloc_3086_, 6, v_ltInst_x3f_3037_);
lean_ctor_set(v_reuseFailAlloc_3086_, 7, v_lawfulOrderLTInst_x3f_3038_);
lean_ctor_set(v_reuseFailAlloc_3086_, 8, v_isPreorderInst_x3f_3039_);
lean_ctor_set(v_reuseFailAlloc_3086_, 9, v_orderedAddInst_x3f_3040_);
lean_ctor_set(v_reuseFailAlloc_3086_, 10, v_isLinearInst_x3f_3041_);
lean_ctor_set(v_reuseFailAlloc_3086_, 11, v_noNatDivInst_x3f_3042_);
lean_ctor_set(v_reuseFailAlloc_3086_, 12, v_ringInst_x3f_3043_);
lean_ctor_set(v_reuseFailAlloc_3086_, 13, v_commRingInst_x3f_3044_);
lean_ctor_set(v_reuseFailAlloc_3086_, 14, v_orderedRingInst_x3f_3045_);
lean_ctor_set(v_reuseFailAlloc_3086_, 15, v_fieldInst_x3f_3046_);
lean_ctor_set(v_reuseFailAlloc_3086_, 16, v_charInst_x3f_3047_);
lean_ctor_set(v_reuseFailAlloc_3086_, 17, v_zero_3048_);
lean_ctor_set(v_reuseFailAlloc_3086_, 18, v_ofNatZero_3049_);
lean_ctor_set(v_reuseFailAlloc_3086_, 19, v_one_x3f_3050_);
lean_ctor_set(v_reuseFailAlloc_3086_, 20, v_leFn_x3f_3051_);
lean_ctor_set(v_reuseFailAlloc_3086_, 21, v_ltFn_x3f_3052_);
lean_ctor_set(v_reuseFailAlloc_3086_, 22, v_addFn_3053_);
lean_ctor_set(v_reuseFailAlloc_3086_, 23, v_zsmulFn_3054_);
lean_ctor_set(v_reuseFailAlloc_3086_, 24, v_nsmulFn_3055_);
lean_ctor_set(v_reuseFailAlloc_3086_, 25, v_zsmulFn_x3f_3056_);
lean_ctor_set(v_reuseFailAlloc_3086_, 26, v_nsmulFn_x3f_3057_);
lean_ctor_set(v_reuseFailAlloc_3086_, 27, v_homomulFn_x3f_3058_);
lean_ctor_set(v_reuseFailAlloc_3086_, 28, v_subFn_3059_);
lean_ctor_set(v_reuseFailAlloc_3086_, 29, v_negFn_3060_);
lean_ctor_set(v_reuseFailAlloc_3086_, 30, v_vars_3061_);
lean_ctor_set(v_reuseFailAlloc_3086_, 31, v_varMap_3062_);
lean_ctor_set(v_reuseFailAlloc_3086_, 32, v_lowers_3063_);
lean_ctor_set(v_reuseFailAlloc_3086_, 33, v_uppers_3064_);
lean_ctor_set(v_reuseFailAlloc_3086_, 34, v___x_3079_);
lean_ctor_set(v_reuseFailAlloc_3086_, 35, v_assignment_3066_);
lean_ctor_set(v_reuseFailAlloc_3086_, 36, v_conflict_x3f_3068_);
lean_ctor_set(v_reuseFailAlloc_3086_, 37, v_diseqSplits_3069_);
lean_ctor_set(v_reuseFailAlloc_3086_, 38, v_elimEqs_3070_);
lean_ctor_set(v_reuseFailAlloc_3086_, 39, v_elimStack_3071_);
lean_ctor_set(v_reuseFailAlloc_3086_, 40, v_occurs_3072_);
lean_ctor_set(v_reuseFailAlloc_3086_, 41, v_ignored_3073_);
lean_ctor_set_uint8(v_reuseFailAlloc_3086_, sizeof(void*)*42, v_caseSplits_3067_);
v___x_3081_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
lean_object* v___x_3082_; lean_object* v___x_3084_; 
v___x_3082_ = lean_array_fset(v_xs_x27_3078_, v___y_3013_, v___x_3081_);
if (v_isShared_3029_ == 0)
{
lean_ctor_set(v___x_3028_, 0, v___x_3082_);
v___x_3084_ = v___x_3028_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v___x_3082_);
lean_ctor_set(v_reuseFailAlloc_3085_, 1, v_typeIdOf_3018_);
lean_ctor_set(v_reuseFailAlloc_3085_, 2, v_exprToStructId_3019_);
lean_ctor_set(v_reuseFailAlloc_3085_, 3, v_exprToStructIdEntries_3020_);
lean_ctor_set(v_reuseFailAlloc_3085_, 4, v_forbiddenNatModules_3021_);
lean_ctor_set(v_reuseFailAlloc_3085_, 5, v_natStructs_3022_);
lean_ctor_set(v_reuseFailAlloc_3085_, 6, v_natTypeIdOf_3023_);
lean_ctor_set(v_reuseFailAlloc_3085_, 7, v_exprToNatStructId_3024_);
v___x_3084_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
return v___x_3084_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___lam__0___boxed(lean_object* v___y_3097_, lean_object* v_val_3098_, lean_object* v_v_3099_, lean_object* v_s_3100_){
_start:
{
lean_object* v_res_3101_; 
v_res_3101_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___lam__0(v___y_3097_, v_val_3098_, v_v_3099_, v_s_3100_);
lean_dec(v_v_3099_);
lean_dec(v___y_3097_);
return v_res_3101_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__2(void){
_start:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; 
v___x_3107_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__1));
v___x_3108_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__6));
v___x_3109_ = l_Lean_Name_append(v___x_3108_, v___x_3107_);
return v___x_3109_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__5(void){
_start:
{
lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3116_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__4));
v___x_3117_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__6));
v___x_3118_ = l_Lean_Name_append(v___x_3117_, v___x_3116_);
return v___x_3118_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__7(void){
_start:
{
lean_object* v_cls_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; 
v_cls_3123_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__6));
v___x_3124_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__6));
v___x_3125_ = l_Lean_Name_append(v___x_3124_, v_cls_3123_);
return v___x_3125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert(lean_object* v_c_3126_, lean_object* v_a_3127_, lean_object* v_a_3128_, lean_object* v_a_3129_, lean_object* v_a_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_, lean_object* v_a_3134_, lean_object* v_a_3135_, lean_object* v_a_3136_, lean_object* v_a_3137_){
_start:
{
lean_object* v___y_3140_; lean_object* v___y_3141_; lean_object* v___y_3142_; lean_object* v___y_3143_; lean_object* v___y_3144_; lean_object* v___y_3145_; lean_object* v___y_3146_; lean_object* v___y_3147_; lean_object* v___y_3148_; lean_object* v___y_3149_; lean_object* v___y_3150_; lean_object* v___y_3151_; lean_object* v___y_3152_; lean_object* v___y_3153_; lean_object* v___y_3154_; lean_object* v___y_3155_; lean_object* v___y_3183_; lean_object* v___y_3184_; lean_object* v___y_3185_; lean_object* v___y_3186_; lean_object* v___y_3187_; lean_object* v___y_3188_; lean_object* v___y_3189_; lean_object* v___y_3190_; lean_object* v___y_3191_; lean_object* v___y_3192_; lean_object* v___y_3193_; lean_object* v___y_3194_; lean_object* v_toCold_3197_; lean_object* v_options_3198_; lean_object* v_inheritedTraceOptions_3199_; uint8_t v_hasTrace_3200_; lean_object* v___y_3202_; lean_object* v___y_3203_; lean_object* v___y_3204_; lean_object* v___y_3205_; lean_object* v___y_3206_; lean_object* v___y_3207_; lean_object* v___y_3208_; lean_object* v___y_3209_; lean_object* v___y_3210_; lean_object* v___y_3211_; lean_object* v___y_3212_; 
v_toCold_3197_ = lean_ctor_get(v_a_3136_, 0);
v_options_3198_ = lean_ctor_get(v_toCold_3197_, 2);
v_inheritedTraceOptions_3199_ = lean_ctor_get(v_toCold_3197_, 11);
v_hasTrace_3200_ = lean_ctor_get_uint8(v_options_3198_, sizeof(void*)*1);
if (v_hasTrace_3200_ == 0)
{
v___y_3202_ = v_a_3127_;
v___y_3203_ = v_a_3128_;
v___y_3204_ = v_a_3129_;
v___y_3205_ = v_a_3130_;
v___y_3206_ = v_a_3131_;
v___y_3207_ = v_a_3132_;
v___y_3208_ = v_a_3133_;
v___y_3209_ = v_a_3134_;
v___y_3210_ = v_a_3135_;
v___y_3211_ = v_a_3136_;
v___y_3212_ = v_a_3137_;
goto v___jp_3201_;
}
else
{
lean_object* v_cls_3273_; lean_object* v___x_3274_; uint8_t v___x_3275_; 
v_cls_3273_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__6));
v___x_3274_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__7, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__7);
v___x_3275_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3199_, v_options_3198_, v___x_3274_);
if (v___x_3275_ == 0)
{
v___y_3202_ = v_a_3127_;
v___y_3203_ = v_a_3128_;
v___y_3204_ = v_a_3129_;
v___y_3205_ = v_a_3130_;
v___y_3206_ = v_a_3131_;
v___y_3207_ = v_a_3132_;
v___y_3208_ = v_a_3133_;
v___y_3209_ = v_a_3134_;
v___y_3210_ = v_a_3135_;
v___y_3211_ = v_a_3136_;
v___y_3212_ = v_a_3137_;
goto v___jp_3201_;
}
else
{
lean_object* v___x_3276_; 
v___x_3276_ = l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f_spec__0(v_c_3126_, v_a_3127_, v_a_3128_, v_a_3129_, v_a_3130_, v_a_3131_, v_a_3132_, v_a_3133_, v_a_3134_, v_a_3135_, v_a_3136_, v_a_3137_);
if (lean_obj_tag(v___x_3276_) == 0)
{
lean_object* v_a_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
v_a_3277_ = lean_ctor_get(v___x_3276_, 0);
lean_inc(v_a_3277_);
lean_dec_ref_known(v___x_3276_, 1);
v___x_3278_ = l_Lean_MessageData_ofExpr(v_a_3277_);
v___x_3279_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v_cls_3273_, v___x_3278_, v_a_3134_, v_a_3135_, v_a_3136_, v_a_3137_);
if (lean_obj_tag(v___x_3279_) == 0)
{
lean_dec_ref_known(v___x_3279_, 1);
v___y_3202_ = v_a_3127_;
v___y_3203_ = v_a_3128_;
v___y_3204_ = v_a_3129_;
v___y_3205_ = v_a_3130_;
v___y_3206_ = v_a_3131_;
v___y_3207_ = v_a_3132_;
v___y_3208_ = v_a_3133_;
v___y_3209_ = v_a_3134_;
v___y_3210_ = v_a_3135_;
v___y_3211_ = v_a_3136_;
v___y_3212_ = v_a_3137_;
goto v___jp_3201_;
}
else
{
lean_dec_ref(v_c_3126_);
return v___x_3279_;
}
}
else
{
lean_object* v_a_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3287_; 
lean_dec_ref(v_c_3126_);
v_a_3280_ = lean_ctor_get(v___x_3276_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3276_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3282_ = v___x_3276_;
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___x_3276_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3285_; 
if (v_isShared_3283_ == 0)
{
v___x_3285_ = v___x_3282_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v_a_3280_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
}
}
v___jp_3139_:
{
lean_object* v___f_3156_; lean_object* v___x_3157_; 
lean_inc(v___y_3145_);
v___f_3156_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3156_, 0, v___y_3145_);
lean_closure_set(v___f_3156_, 1, v___y_3140_);
lean_closure_set(v___f_3156_, 2, v___y_3141_);
v___x_3157_ = l_Lean_Grind_Linarith_Poly_updateOccs(v___y_3143_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_);
if (lean_obj_tag(v___x_3157_) == 0)
{
lean_object* v___x_3158_; lean_object* v___x_3159_; 
lean_dec_ref_known(v___x_3157_, 1);
v___x_3158_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_3159_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3158_, v___f_3156_, v___y_3146_);
if (lean_obj_tag(v___x_3159_) == 0)
{
lean_object* v___x_3160_; 
lean_dec_ref_known(v___x_3159_, 1);
v___x_3160_ = l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_satisfied(v___y_3142_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_);
if (lean_obj_tag(v___x_3160_) == 0)
{
lean_object* v_a_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3173_; 
v_a_3161_ = lean_ctor_get(v___x_3160_, 0);
v_isSharedCheck_3173_ = !lean_is_exclusive(v___x_3160_);
if (v_isSharedCheck_3173_ == 0)
{
v___x_3163_ = v___x_3160_;
v_isShared_3164_ = v_isSharedCheck_3173_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_a_3161_);
lean_dec(v___x_3160_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3173_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
uint8_t v___x_3165_; uint8_t v___x_3166_; uint8_t v___x_3167_; 
v___x_3165_ = 0;
v___x_3166_ = lean_unbox(v_a_3161_);
lean_dec(v_a_3161_);
v___x_3167_ = l_Lean_instBEqLBool_beq(v___x_3166_, v___x_3165_);
if (v___x_3167_ == 0)
{
lean_object* v___x_3168_; lean_object* v___x_3170_; 
lean_dec(v___y_3144_);
v___x_3168_ = lean_box(0);
if (v_isShared_3164_ == 0)
{
lean_ctor_set(v___x_3163_, 0, v___x_3168_);
v___x_3170_ = v___x_3163_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v___x_3168_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
else
{
lean_object* v___x_3172_; 
lean_del_object(v___x_3163_);
v___x_3172_ = l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg(v___y_3144_, v___y_3145_, v___y_3146_);
return v___x_3172_;
}
}
}
else
{
lean_object* v_a_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3181_; 
lean_dec(v___y_3144_);
v_a_3174_ = lean_ctor_get(v___x_3160_, 0);
v_isSharedCheck_3181_ = !lean_is_exclusive(v___x_3160_);
if (v_isSharedCheck_3181_ == 0)
{
v___x_3176_ = v___x_3160_;
v_isShared_3177_ = v_isSharedCheck_3181_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_a_3174_);
lean_dec(v___x_3160_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3181_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v___x_3179_; 
if (v_isShared_3177_ == 0)
{
v___x_3179_ = v___x_3176_;
goto v_reusejp_3178_;
}
else
{
lean_object* v_reuseFailAlloc_3180_; 
v_reuseFailAlloc_3180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3180_, 0, v_a_3174_);
v___x_3179_ = v_reuseFailAlloc_3180_;
goto v_reusejp_3178_;
}
v_reusejp_3178_:
{
return v___x_3179_;
}
}
}
}
else
{
lean_dec(v___y_3144_);
lean_dec_ref(v___y_3142_);
return v___x_3159_;
}
}
else
{
lean_dec_ref(v___f_3156_);
lean_dec(v___y_3144_);
lean_dec_ref(v___y_3142_);
return v___x_3157_;
}
}
v___jp_3182_:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; 
v___x_3195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3195_, 0, v___y_3183_);
v___x_3196_ = l_Lean_Meta_Grind_Arith_Linear_setInconsistent(v___x_3195_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_);
return v___x_3196_;
}
v___jp_3201_:
{
lean_object* v___x_3213_; 
lean_inc_ref(v___y_3211_);
v___x_3213_ = l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applySubsts_x3f(v_c_3126_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3213_) == 0)
{
lean_object* v_a_3214_; lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3264_; 
v_a_3214_ = lean_ctor_get(v___x_3213_, 0);
v_isSharedCheck_3264_ = !lean_is_exclusive(v___x_3213_);
if (v_isSharedCheck_3264_ == 0)
{
v___x_3216_ = v___x_3213_;
v_isShared_3217_ = v_isSharedCheck_3264_;
goto v_resetjp_3215_;
}
else
{
lean_inc(v_a_3214_);
lean_dec(v___x_3213_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3264_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
if (lean_obj_tag(v_a_3214_) == 1)
{
lean_object* v_val_3218_; lean_object* v_p_3219_; 
lean_del_object(v___x_3216_);
v_val_3218_ = lean_ctor_get(v_a_3214_, 0);
lean_inc(v_val_3218_);
lean_dec_ref_known(v_a_3214_, 1);
v_p_3219_ = lean_ctor_get(v_val_3218_, 0);
if (lean_obj_tag(v_p_3219_) == 0)
{
lean_object* v_toCold_3220_; lean_object* v_options_3221_; uint8_t v_hasTrace_3222_; 
v_toCold_3220_ = lean_ctor_get(v___y_3211_, 0);
v_options_3221_ = lean_ctor_get(v_toCold_3220_, 2);
v_hasTrace_3222_ = lean_ctor_get_uint8(v_options_3221_, sizeof(void*)*1);
if (v_hasTrace_3222_ == 0)
{
v___y_3183_ = v_val_3218_;
v___y_3184_ = v___y_3202_;
v___y_3185_ = v___y_3203_;
v___y_3186_ = v___y_3204_;
v___y_3187_ = v___y_3205_;
v___y_3188_ = v___y_3206_;
v___y_3189_ = v___y_3207_;
v___y_3190_ = v___y_3208_;
v___y_3191_ = v___y_3209_;
v___y_3192_ = v___y_3210_;
v___y_3193_ = v___y_3211_;
v___y_3194_ = v___y_3212_;
goto v___jp_3182_;
}
else
{
lean_object* v_inheritedTraceOptions_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; uint8_t v___x_3226_; 
v_inheritedTraceOptions_3223_ = lean_ctor_get(v_toCold_3220_, 11);
v___x_3224_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__1));
v___x_3225_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__2);
v___x_3226_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3223_, v_options_3221_, v___x_3225_);
if (v___x_3226_ == 0)
{
v___y_3183_ = v_val_3218_;
v___y_3184_ = v___y_3202_;
v___y_3185_ = v___y_3203_;
v___y_3186_ = v___y_3204_;
v___y_3187_ = v___y_3205_;
v___y_3188_ = v___y_3206_;
v___y_3189_ = v___y_3207_;
v___y_3190_ = v___y_3208_;
v___y_3191_ = v___y_3209_;
v___y_3192_ = v___y_3210_;
v___y_3193_ = v___y_3211_;
v___y_3194_ = v___y_3212_;
goto v___jp_3182_;
}
else
{
lean_object* v___x_3227_; 
v___x_3227_ = l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f_spec__0(v_val_3218_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3227_) == 0)
{
lean_object* v_a_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; 
v_a_3228_ = lean_ctor_get(v___x_3227_, 0);
lean_inc(v_a_3228_);
lean_dec_ref_known(v___x_3227_, 1);
v___x_3229_ = l_Lean_MessageData_ofExpr(v_a_3228_);
v___x_3230_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v___x_3224_, v___x_3229_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3230_) == 0)
{
lean_dec_ref_known(v___x_3230_, 1);
v___y_3183_ = v_val_3218_;
v___y_3184_ = v___y_3202_;
v___y_3185_ = v___y_3203_;
v___y_3186_ = v___y_3204_;
v___y_3187_ = v___y_3205_;
v___y_3188_ = v___y_3206_;
v___y_3189_ = v___y_3207_;
v___y_3190_ = v___y_3208_;
v___y_3191_ = v___y_3209_;
v___y_3192_ = v___y_3210_;
v___y_3193_ = v___y_3211_;
v___y_3194_ = v___y_3212_;
goto v___jp_3182_;
}
else
{
lean_dec(v_val_3218_);
return v___x_3230_;
}
}
else
{
lean_object* v_a_3231_; lean_object* v___x_3233_; uint8_t v_isShared_3234_; uint8_t v_isSharedCheck_3238_; 
lean_dec(v_val_3218_);
v_a_3231_ = lean_ctor_get(v___x_3227_, 0);
v_isSharedCheck_3238_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3238_ == 0)
{
v___x_3233_ = v___x_3227_;
v_isShared_3234_ = v_isSharedCheck_3238_;
goto v_resetjp_3232_;
}
else
{
lean_inc(v_a_3231_);
lean_dec(v___x_3227_);
v___x_3233_ = lean_box(0);
v_isShared_3234_ = v_isSharedCheck_3238_;
goto v_resetjp_3232_;
}
v_resetjp_3232_:
{
lean_object* v___x_3236_; 
if (v_isShared_3234_ == 0)
{
v___x_3236_ = v___x_3233_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v_a_3231_);
v___x_3236_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
return v___x_3236_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_3239_; lean_object* v_options_3240_; uint8_t v_hasTrace_3241_; 
lean_inc_ref(v_p_3219_);
v_toCold_3239_ = lean_ctor_get(v___y_3211_, 0);
v_options_3240_ = lean_ctor_get(v_toCold_3239_, 2);
v_hasTrace_3241_ = lean_ctor_get_uint8(v_options_3240_, sizeof(void*)*1);
if (v_hasTrace_3241_ == 0)
{
lean_object* v_v_3242_; 
v_v_3242_ = lean_ctor_get(v_p_3219_, 1);
lean_inc_n(v_v_3242_, 2);
lean_inc(v_val_3218_);
v___y_3140_ = v_val_3218_;
v___y_3141_ = v_v_3242_;
v___y_3142_ = v_val_3218_;
v___y_3143_ = v_p_3219_;
v___y_3144_ = v_v_3242_;
v___y_3145_ = v___y_3202_;
v___y_3146_ = v___y_3203_;
v___y_3147_ = v___y_3204_;
v___y_3148_ = v___y_3205_;
v___y_3149_ = v___y_3206_;
v___y_3150_ = v___y_3207_;
v___y_3151_ = v___y_3208_;
v___y_3152_ = v___y_3209_;
v___y_3153_ = v___y_3210_;
v___y_3154_ = v___y_3211_;
v___y_3155_ = v___y_3212_;
goto v___jp_3139_;
}
else
{
lean_object* v_v_3243_; lean_object* v_inheritedTraceOptions_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; uint8_t v___x_3247_; 
v_v_3243_ = lean_ctor_get(v_p_3219_, 1);
lean_inc(v_v_3243_);
v_inheritedTraceOptions_3244_ = lean_ctor_get(v_toCold_3239_, 11);
v___x_3245_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__4));
v___x_3246_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__5, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__5);
v___x_3247_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3244_, v_options_3240_, v___x_3246_);
if (v___x_3247_ == 0)
{
lean_inc(v_v_3243_);
lean_inc(v_val_3218_);
v___y_3140_ = v_val_3218_;
v___y_3141_ = v_v_3243_;
v___y_3142_ = v_val_3218_;
v___y_3143_ = v_p_3219_;
v___y_3144_ = v_v_3243_;
v___y_3145_ = v___y_3202_;
v___y_3146_ = v___y_3203_;
v___y_3147_ = v___y_3204_;
v___y_3148_ = v___y_3205_;
v___y_3149_ = v___y_3206_;
v___y_3150_ = v___y_3207_;
v___y_3151_ = v___y_3208_;
v___y_3152_ = v___y_3209_;
v___y_3153_ = v___y_3210_;
v___y_3154_ = v___y_3211_;
v___y_3155_ = v___y_3212_;
goto v___jp_3139_;
}
else
{
lean_object* v___x_3248_; 
v___x_3248_ = l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f_spec__0(v_val_3218_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3248_) == 0)
{
lean_object* v_a_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; 
v_a_3249_ = lean_ctor_get(v___x_3248_, 0);
lean_inc(v_a_3249_);
lean_dec_ref_known(v___x_3248_, 1);
v___x_3250_ = l_Lean_MessageData_ofExpr(v_a_3249_);
v___x_3251_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v___x_3245_, v___x_3250_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_dec_ref_known(v___x_3251_, 1);
lean_inc(v_v_3243_);
lean_inc(v_val_3218_);
v___y_3140_ = v_val_3218_;
v___y_3141_ = v_v_3243_;
v___y_3142_ = v_val_3218_;
v___y_3143_ = v_p_3219_;
v___y_3144_ = v_v_3243_;
v___y_3145_ = v___y_3202_;
v___y_3146_ = v___y_3203_;
v___y_3147_ = v___y_3204_;
v___y_3148_ = v___y_3205_;
v___y_3149_ = v___y_3206_;
v___y_3150_ = v___y_3207_;
v___y_3151_ = v___y_3208_;
v___y_3152_ = v___y_3209_;
v___y_3153_ = v___y_3210_;
v___y_3154_ = v___y_3211_;
v___y_3155_ = v___y_3212_;
goto v___jp_3139_;
}
else
{
lean_dec(v_v_3243_);
lean_dec_ref_known(v_p_3219_, 3);
lean_dec(v_val_3218_);
return v___x_3251_;
}
}
else
{
lean_object* v_a_3252_; lean_object* v___x_3254_; uint8_t v_isShared_3255_; uint8_t v_isSharedCheck_3259_; 
lean_dec(v_v_3243_);
lean_dec_ref_known(v_p_3219_, 3);
lean_dec(v_val_3218_);
v_a_3252_ = lean_ctor_get(v___x_3248_, 0);
v_isSharedCheck_3259_ = !lean_is_exclusive(v___x_3248_);
if (v_isSharedCheck_3259_ == 0)
{
v___x_3254_ = v___x_3248_;
v_isShared_3255_ = v_isSharedCheck_3259_;
goto v_resetjp_3253_;
}
else
{
lean_inc(v_a_3252_);
lean_dec(v___x_3248_);
v___x_3254_ = lean_box(0);
v_isShared_3255_ = v_isSharedCheck_3259_;
goto v_resetjp_3253_;
}
v_resetjp_3253_:
{
lean_object* v___x_3257_; 
if (v_isShared_3255_ == 0)
{
v___x_3257_ = v___x_3254_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v_a_3252_);
v___x_3257_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3256_;
}
v_reusejp_3256_:
{
return v___x_3257_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3260_; lean_object* v___x_3262_; 
lean_dec(v_a_3214_);
v___x_3260_ = lean_box(0);
if (v_isShared_3217_ == 0)
{
lean_ctor_set(v___x_3216_, 0, v___x_3260_);
v___x_3262_ = v___x_3216_;
goto v_reusejp_3261_;
}
else
{
lean_object* v_reuseFailAlloc_3263_; 
v_reuseFailAlloc_3263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3263_, 0, v___x_3260_);
v___x_3262_ = v_reuseFailAlloc_3263_;
goto v_reusejp_3261_;
}
v_reusejp_3261_:
{
return v___x_3262_;
}
}
}
}
else
{
lean_object* v_a_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3272_; 
v_a_3265_ = lean_ctor_get(v___x_3213_, 0);
v_isSharedCheck_3272_ = !lean_is_exclusive(v___x_3213_);
if (v_isSharedCheck_3272_ == 0)
{
v___x_3267_ = v___x_3213_;
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_a_3265_);
lean_dec(v___x_3213_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
lean_object* v___x_3270_; 
if (v_isShared_3268_ == 0)
{
v___x_3270_ = v___x_3267_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v_a_3265_);
v___x_3270_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
return v___x_3270_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___boxed(lean_object* v_c_3288_, lean_object* v_a_3289_, lean_object* v_a_3290_, lean_object* v_a_3291_, lean_object* v_a_3292_, lean_object* v_a_3293_, lean_object* v_a_3294_, lean_object* v_a_3295_, lean_object* v_a_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_){
_start:
{
lean_object* v_res_3301_; 
v_res_3301_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert(v_c_3288_, v_a_3289_, v_a_3290_, v_a_3291_, v_a_3292_, v_a_3293_, v_a_3294_, v_a_3295_, v_a_3296_, v_a_3297_, v_a_3298_, v_a_3299_);
lean_dec(v_a_3299_);
lean_dec_ref(v_a_3298_);
lean_dec(v_a_3297_);
lean_dec_ref(v_a_3296_);
lean_dec(v_a_3295_);
lean_dec_ref(v_a_3294_);
lean_dec(v_a_3293_);
lean_dec_ref(v_a_3292_);
lean_dec(v_a_3291_);
lean_dec(v_a_3290_);
lean_dec(v_a_3289_);
return v_res_3301_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__2_spec__5(lean_object* v_x_3302_, lean_object* v_as_3303_, size_t v_sz_3304_, size_t v_i_3305_, lean_object* v_b_3306_){
_start:
{
uint8_t v___x_3307_; 
v___x_3307_ = lean_usize_dec_lt(v_i_3305_, v_sz_3304_);
if (v___x_3307_ == 0)
{
return v_b_3306_;
}
else
{
lean_object* v_snd_3308_; lean_object* v___x_3310_; uint8_t v_isShared_3311_; uint8_t v_isSharedCheck_3349_; 
v_snd_3308_ = lean_ctor_get(v_b_3306_, 1);
v_isSharedCheck_3349_ = !lean_is_exclusive(v_b_3306_);
if (v_isSharedCheck_3349_ == 0)
{
lean_object* v_unused_3350_; 
v_unused_3350_ = lean_ctor_get(v_b_3306_, 0);
lean_dec(v_unused_3350_);
v___x_3310_ = v_b_3306_;
v_isShared_3311_ = v_isSharedCheck_3349_;
goto v_resetjp_3309_;
}
else
{
lean_inc(v_snd_3308_);
lean_dec(v_b_3306_);
v___x_3310_ = lean_box(0);
v_isShared_3311_ = v_isSharedCheck_3349_;
goto v_resetjp_3309_;
}
v_resetjp_3309_:
{
lean_object* v_fst_3312_; lean_object* v_snd_3313_; lean_object* v___x_3315_; uint8_t v_isShared_3316_; uint8_t v_isSharedCheck_3348_; 
v_fst_3312_ = lean_ctor_get(v_snd_3308_, 0);
v_snd_3313_ = lean_ctor_get(v_snd_3308_, 1);
v_isSharedCheck_3348_ = !lean_is_exclusive(v_snd_3308_);
if (v_isSharedCheck_3348_ == 0)
{
v___x_3315_ = v_snd_3308_;
v_isShared_3316_ = v_isSharedCheck_3348_;
goto v_resetjp_3314_;
}
else
{
lean_inc(v_snd_3313_);
lean_inc(v_fst_3312_);
lean_dec(v_snd_3308_);
v___x_3315_ = lean_box(0);
v_isShared_3316_ = v_isSharedCheck_3348_;
goto v_resetjp_3314_;
}
v_resetjp_3314_:
{
lean_object* v_a_3317_; lean_object* v_p_3318_; lean_object* v___x_3319_; lean_object* v_a_3321_; lean_object* v_b_3328_; lean_object* v___x_3329_; uint8_t v___x_3330_; 
v_a_3317_ = lean_array_uget(v_as_3303_, v_i_3305_);
v_p_3318_ = lean_ctor_get(v_a_3317_, 0);
v___x_3319_ = lean_box(0);
v_b_3328_ = l_Lean_Grind_Linarith_Poly_coeff(v_p_3318_, v_x_3302_);
v___x_3329_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0);
v___x_3330_ = lean_int_dec_eq(v_b_3328_, v___x_3329_);
if (v___x_3330_ == 0)
{
lean_object* v___x_3332_; 
lean_inc(v_a_3317_);
if (v_isShared_3311_ == 0)
{
lean_ctor_set(v___x_3310_, 1, v_a_3317_);
lean_ctor_set(v___x_3310_, 0, v_b_3328_);
v___x_3332_ = v___x_3310_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v_b_3328_);
lean_ctor_set(v_reuseFailAlloc_3343_, 1, v_a_3317_);
v___x_3332_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3331_;
}
v_reusejp_3331_:
{
lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3340_; 
v_isSharedCheck_3340_ = !lean_is_exclusive(v_a_3317_);
if (v_isSharedCheck_3340_ == 0)
{
lean_object* v_unused_3341_; lean_object* v_unused_3342_; 
v_unused_3341_ = lean_ctor_get(v_a_3317_, 1);
lean_dec(v_unused_3341_);
v_unused_3342_ = lean_ctor_get(v_a_3317_, 0);
lean_dec(v_unused_3342_);
v___x_3334_ = v_a_3317_;
v_isShared_3335_ = v_isSharedCheck_3340_;
goto v_resetjp_3333_;
}
else
{
lean_dec(v_a_3317_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3340_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
lean_object* v_todo_3336_; lean_object* v___x_3338_; 
v_todo_3336_ = lean_array_push(v_snd_3313_, v___x_3332_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 1, v_todo_3336_);
lean_ctor_set(v___x_3334_, 0, v_fst_3312_);
v___x_3338_ = v___x_3334_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v_fst_3312_);
lean_ctor_set(v_reuseFailAlloc_3339_, 1, v_todo_3336_);
v___x_3338_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
v_a_3321_ = v___x_3338_;
goto v___jp_3320_;
}
}
}
}
else
{
lean_object* v_cs_x27_3344_; lean_object* v___x_3346_; 
lean_dec(v_b_3328_);
v_cs_x27_3344_ = l_Lean_PersistentArray_push___redArg(v_fst_3312_, v_a_3317_);
if (v_isShared_3311_ == 0)
{
lean_ctor_set(v___x_3310_, 1, v_snd_3313_);
lean_ctor_set(v___x_3310_, 0, v_cs_x27_3344_);
v___x_3346_ = v___x_3310_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v_cs_x27_3344_);
lean_ctor_set(v_reuseFailAlloc_3347_, 1, v_snd_3313_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
v_a_3321_ = v___x_3346_;
goto v___jp_3320_;
}
}
v___jp_3320_:
{
lean_object* v___x_3323_; 
if (v_isShared_3316_ == 0)
{
lean_ctor_set(v___x_3315_, 1, v_a_3321_);
lean_ctor_set(v___x_3315_, 0, v___x_3319_);
v___x_3323_ = v___x_3315_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v___x_3319_);
lean_ctor_set(v_reuseFailAlloc_3327_, 1, v_a_3321_);
v___x_3323_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
size_t v___x_3324_; size_t v___x_3325_; 
v___x_3324_ = ((size_t)1ULL);
v___x_3325_ = lean_usize_add(v_i_3305_, v___x_3324_);
v_i_3305_ = v___x_3325_;
v_b_3306_ = v___x_3323_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_x_3351_, lean_object* v_as_3352_, lean_object* v_sz_3353_, lean_object* v_i_3354_, lean_object* v_b_3355_){
_start:
{
size_t v_sz_boxed_3356_; size_t v_i_boxed_3357_; lean_object* v_res_3358_; 
v_sz_boxed_3356_ = lean_unbox_usize(v_sz_3353_);
lean_dec(v_sz_3353_);
v_i_boxed_3357_ = lean_unbox_usize(v_i_3354_);
lean_dec(v_i_3354_);
v_res_3358_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__2_spec__5(v_x_3351_, v_as_3352_, v_sz_boxed_3356_, v_i_boxed_3357_, v_b_3355_);
lean_dec_ref(v_as_3352_);
lean_dec(v_x_3351_);
return v_res_3358_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__2(lean_object* v_x_3359_, lean_object* v_as_3360_, size_t v_sz_3361_, size_t v_i_3362_, lean_object* v_b_3363_){
_start:
{
uint8_t v___x_3364_; 
v___x_3364_ = lean_usize_dec_lt(v_i_3362_, v_sz_3361_);
if (v___x_3364_ == 0)
{
return v_b_3363_;
}
else
{
lean_object* v_snd_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3406_; 
v_snd_3365_ = lean_ctor_get(v_b_3363_, 1);
v_isSharedCheck_3406_ = !lean_is_exclusive(v_b_3363_);
if (v_isSharedCheck_3406_ == 0)
{
lean_object* v_unused_3407_; 
v_unused_3407_ = lean_ctor_get(v_b_3363_, 0);
lean_dec(v_unused_3407_);
v___x_3367_ = v_b_3363_;
v_isShared_3368_ = v_isSharedCheck_3406_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_snd_3365_);
lean_dec(v_b_3363_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3406_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v_fst_3369_; lean_object* v_snd_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3405_; 
v_fst_3369_ = lean_ctor_get(v_snd_3365_, 0);
v_snd_3370_ = lean_ctor_get(v_snd_3365_, 1);
v_isSharedCheck_3405_ = !lean_is_exclusive(v_snd_3365_);
if (v_isSharedCheck_3405_ == 0)
{
v___x_3372_ = v_snd_3365_;
v_isShared_3373_ = v_isSharedCheck_3405_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_snd_3370_);
lean_inc(v_fst_3369_);
lean_dec(v_snd_3365_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3405_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
lean_object* v_a_3374_; lean_object* v_p_3375_; lean_object* v___x_3376_; lean_object* v_a_3378_; lean_object* v_b_3385_; lean_object* v___x_3386_; uint8_t v___x_3387_; 
v_a_3374_ = lean_array_uget(v_as_3360_, v_i_3362_);
v_p_3375_ = lean_ctor_get(v_a_3374_, 0);
v___x_3376_ = lean_box(0);
v_b_3385_ = l_Lean_Grind_Linarith_Poly_coeff(v_p_3375_, v_x_3359_);
v___x_3386_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0);
v___x_3387_ = lean_int_dec_eq(v_b_3385_, v___x_3386_);
if (v___x_3387_ == 0)
{
lean_object* v___x_3389_; 
lean_inc(v_a_3374_);
if (v_isShared_3368_ == 0)
{
lean_ctor_set(v___x_3367_, 1, v_a_3374_);
lean_ctor_set(v___x_3367_, 0, v_b_3385_);
v___x_3389_ = v___x_3367_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v_b_3385_);
lean_ctor_set(v_reuseFailAlloc_3400_, 1, v_a_3374_);
v___x_3389_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3397_; 
v_isSharedCheck_3397_ = !lean_is_exclusive(v_a_3374_);
if (v_isSharedCheck_3397_ == 0)
{
lean_object* v_unused_3398_; lean_object* v_unused_3399_; 
v_unused_3398_ = lean_ctor_get(v_a_3374_, 1);
lean_dec(v_unused_3398_);
v_unused_3399_ = lean_ctor_get(v_a_3374_, 0);
lean_dec(v_unused_3399_);
v___x_3391_ = v_a_3374_;
v_isShared_3392_ = v_isSharedCheck_3397_;
goto v_resetjp_3390_;
}
else
{
lean_dec(v_a_3374_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3397_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v_todo_3393_; lean_object* v___x_3395_; 
v_todo_3393_ = lean_array_push(v_snd_3370_, v___x_3389_);
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 1, v_todo_3393_);
lean_ctor_set(v___x_3391_, 0, v_fst_3369_);
v___x_3395_ = v___x_3391_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v_fst_3369_);
lean_ctor_set(v_reuseFailAlloc_3396_, 1, v_todo_3393_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
v_a_3378_ = v___x_3395_;
goto v___jp_3377_;
}
}
}
}
else
{
lean_object* v_cs_x27_3401_; lean_object* v___x_3403_; 
lean_dec(v_b_3385_);
v_cs_x27_3401_ = l_Lean_PersistentArray_push___redArg(v_fst_3369_, v_a_3374_);
if (v_isShared_3368_ == 0)
{
lean_ctor_set(v___x_3367_, 1, v_snd_3370_);
lean_ctor_set(v___x_3367_, 0, v_cs_x27_3401_);
v___x_3403_ = v___x_3367_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3404_; 
v_reuseFailAlloc_3404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3404_, 0, v_cs_x27_3401_);
lean_ctor_set(v_reuseFailAlloc_3404_, 1, v_snd_3370_);
v___x_3403_ = v_reuseFailAlloc_3404_;
goto v_reusejp_3402_;
}
v_reusejp_3402_:
{
v_a_3378_ = v___x_3403_;
goto v___jp_3377_;
}
}
v___jp_3377_:
{
lean_object* v___x_3380_; 
if (v_isShared_3373_ == 0)
{
lean_ctor_set(v___x_3372_, 1, v_a_3378_);
lean_ctor_set(v___x_3372_, 0, v___x_3376_);
v___x_3380_ = v___x_3372_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v___x_3376_);
lean_ctor_set(v_reuseFailAlloc_3384_, 1, v_a_3378_);
v___x_3380_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
size_t v___x_3381_; size_t v___x_3382_; lean_object* v___x_3383_; 
v___x_3381_ = ((size_t)1ULL);
v___x_3382_ = lean_usize_add(v_i_3362_, v___x_3381_);
v___x_3383_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__2_spec__5(v_x_3359_, v_as_3360_, v_sz_3361_, v___x_3382_, v___x_3380_);
return v___x_3383_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__2___boxed(lean_object* v_x_3408_, lean_object* v_as_3409_, lean_object* v_sz_3410_, lean_object* v_i_3411_, lean_object* v_b_3412_){
_start:
{
size_t v_sz_boxed_3413_; size_t v_i_boxed_3414_; lean_object* v_res_3415_; 
v_sz_boxed_3413_ = lean_unbox_usize(v_sz_3410_);
lean_dec(v_sz_3410_);
v_i_boxed_3414_ = lean_unbox_usize(v_i_3411_);
lean_dec(v_i_3411_);
v_res_3415_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__2(v_x_3408_, v_as_3409_, v_sz_boxed_3413_, v_i_boxed_3414_, v_b_3412_);
lean_dec_ref(v_as_3409_);
lean_dec(v_x_3408_);
return v_res_3415_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object* v_x_3416_, lean_object* v_as_3417_, size_t v_sz_3418_, size_t v_i_3419_, lean_object* v_b_3420_){
_start:
{
uint8_t v___x_3421_; 
v___x_3421_ = lean_usize_dec_lt(v_i_3419_, v_sz_3418_);
if (v___x_3421_ == 0)
{
return v_b_3420_;
}
else
{
lean_object* v_snd_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3463_; 
v_snd_3422_ = lean_ctor_get(v_b_3420_, 1);
v_isSharedCheck_3463_ = !lean_is_exclusive(v_b_3420_);
if (v_isSharedCheck_3463_ == 0)
{
lean_object* v_unused_3464_; 
v_unused_3464_ = lean_ctor_get(v_b_3420_, 0);
lean_dec(v_unused_3464_);
v___x_3424_ = v_b_3420_;
v_isShared_3425_ = v_isSharedCheck_3463_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_snd_3422_);
lean_dec(v_b_3420_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3463_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v_fst_3426_; lean_object* v_snd_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3462_; 
v_fst_3426_ = lean_ctor_get(v_snd_3422_, 0);
v_snd_3427_ = lean_ctor_get(v_snd_3422_, 1);
v_isSharedCheck_3462_ = !lean_is_exclusive(v_snd_3422_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3429_ = v_snd_3422_;
v_isShared_3430_ = v_isSharedCheck_3462_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_snd_3427_);
lean_inc(v_fst_3426_);
lean_dec(v_snd_3422_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3462_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v_a_3431_; lean_object* v_p_3432_; lean_object* v___x_3433_; lean_object* v_a_3435_; lean_object* v_b_3442_; lean_object* v___x_3443_; uint8_t v___x_3444_; 
v_a_3431_ = lean_array_uget(v_as_3417_, v_i_3419_);
v_p_3432_ = lean_ctor_get(v_a_3431_, 0);
v___x_3433_ = lean_box(0);
v_b_3442_ = l_Lean_Grind_Linarith_Poly_coeff(v_p_3432_, v_x_3416_);
v___x_3443_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0);
v___x_3444_ = lean_int_dec_eq(v_b_3442_, v___x_3443_);
if (v___x_3444_ == 0)
{
lean_object* v___x_3446_; 
lean_inc(v_a_3431_);
if (v_isShared_3425_ == 0)
{
lean_ctor_set(v___x_3424_, 1, v_a_3431_);
lean_ctor_set(v___x_3424_, 0, v_b_3442_);
v___x_3446_ = v___x_3424_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3457_; 
v_reuseFailAlloc_3457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3457_, 0, v_b_3442_);
lean_ctor_set(v_reuseFailAlloc_3457_, 1, v_a_3431_);
v___x_3446_ = v_reuseFailAlloc_3457_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
lean_object* v___x_3448_; uint8_t v_isShared_3449_; uint8_t v_isSharedCheck_3454_; 
v_isSharedCheck_3454_ = !lean_is_exclusive(v_a_3431_);
if (v_isSharedCheck_3454_ == 0)
{
lean_object* v_unused_3455_; lean_object* v_unused_3456_; 
v_unused_3455_ = lean_ctor_get(v_a_3431_, 1);
lean_dec(v_unused_3455_);
v_unused_3456_ = lean_ctor_get(v_a_3431_, 0);
lean_dec(v_unused_3456_);
v___x_3448_ = v_a_3431_;
v_isShared_3449_ = v_isSharedCheck_3454_;
goto v_resetjp_3447_;
}
else
{
lean_dec(v_a_3431_);
v___x_3448_ = lean_box(0);
v_isShared_3449_ = v_isSharedCheck_3454_;
goto v_resetjp_3447_;
}
v_resetjp_3447_:
{
lean_object* v_todo_3450_; lean_object* v___x_3452_; 
v_todo_3450_ = lean_array_push(v_snd_3427_, v___x_3446_);
if (v_isShared_3449_ == 0)
{
lean_ctor_set(v___x_3448_, 1, v_todo_3450_);
lean_ctor_set(v___x_3448_, 0, v_fst_3426_);
v___x_3452_ = v___x_3448_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v_fst_3426_);
lean_ctor_set(v_reuseFailAlloc_3453_, 1, v_todo_3450_);
v___x_3452_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
v_a_3435_ = v___x_3452_;
goto v___jp_3434_;
}
}
}
}
else
{
lean_object* v_cs_x27_3458_; lean_object* v___x_3460_; 
lean_dec(v_b_3442_);
v_cs_x27_3458_ = l_Lean_PersistentArray_push___redArg(v_fst_3426_, v_a_3431_);
if (v_isShared_3425_ == 0)
{
lean_ctor_set(v___x_3424_, 1, v_snd_3427_);
lean_ctor_set(v___x_3424_, 0, v_cs_x27_3458_);
v___x_3460_ = v___x_3424_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_cs_x27_3458_);
lean_ctor_set(v_reuseFailAlloc_3461_, 1, v_snd_3427_);
v___x_3460_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
v_a_3435_ = v___x_3460_;
goto v___jp_3434_;
}
}
v___jp_3434_:
{
lean_object* v___x_3437_; 
if (v_isShared_3430_ == 0)
{
lean_ctor_set(v___x_3429_, 1, v_a_3435_);
lean_ctor_set(v___x_3429_, 0, v___x_3433_);
v___x_3437_ = v___x_3429_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v___x_3433_);
lean_ctor_set(v_reuseFailAlloc_3441_, 1, v_a_3435_);
v___x_3437_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
size_t v___x_3438_; size_t v___x_3439_; 
v___x_3438_ = ((size_t)1ULL);
v___x_3439_ = lean_usize_add(v_i_3419_, v___x_3438_);
v_i_3419_ = v___x_3439_;
v_b_3420_ = v___x_3437_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__3_spec__4___boxed(lean_object* v_x_3465_, lean_object* v_as_3466_, lean_object* v_sz_3467_, lean_object* v_i_3468_, lean_object* v_b_3469_){
_start:
{
size_t v_sz_boxed_3470_; size_t v_i_boxed_3471_; lean_object* v_res_3472_; 
v_sz_boxed_3470_ = lean_unbox_usize(v_sz_3467_);
lean_dec(v_sz_3467_);
v_i_boxed_3471_ = lean_unbox_usize(v_i_3468_);
lean_dec(v_i_3468_);
v_res_3472_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__3_spec__4(v_x_3465_, v_as_3466_, v_sz_boxed_3470_, v_i_boxed_3471_, v_b_3469_);
lean_dec_ref(v_as_3466_);
lean_dec(v_x_3465_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_3473_, lean_object* v_as_3474_, size_t v_sz_3475_, size_t v_i_3476_, lean_object* v_b_3477_){
_start:
{
uint8_t v___x_3478_; 
v___x_3478_ = lean_usize_dec_lt(v_i_3476_, v_sz_3475_);
if (v___x_3478_ == 0)
{
return v_b_3477_;
}
else
{
lean_object* v_snd_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3520_; 
v_snd_3479_ = lean_ctor_get(v_b_3477_, 1);
v_isSharedCheck_3520_ = !lean_is_exclusive(v_b_3477_);
if (v_isSharedCheck_3520_ == 0)
{
lean_object* v_unused_3521_; 
v_unused_3521_ = lean_ctor_get(v_b_3477_, 0);
lean_dec(v_unused_3521_);
v___x_3481_ = v_b_3477_;
v_isShared_3482_ = v_isSharedCheck_3520_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_snd_3479_);
lean_dec(v_b_3477_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3520_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v_fst_3483_; lean_object* v_snd_3484_; lean_object* v___x_3486_; uint8_t v_isShared_3487_; uint8_t v_isSharedCheck_3519_; 
v_fst_3483_ = lean_ctor_get(v_snd_3479_, 0);
v_snd_3484_ = lean_ctor_get(v_snd_3479_, 1);
v_isSharedCheck_3519_ = !lean_is_exclusive(v_snd_3479_);
if (v_isSharedCheck_3519_ == 0)
{
v___x_3486_ = v_snd_3479_;
v_isShared_3487_ = v_isSharedCheck_3519_;
goto v_resetjp_3485_;
}
else
{
lean_inc(v_snd_3484_);
lean_inc(v_fst_3483_);
lean_dec(v_snd_3479_);
v___x_3486_ = lean_box(0);
v_isShared_3487_ = v_isSharedCheck_3519_;
goto v_resetjp_3485_;
}
v_resetjp_3485_:
{
lean_object* v_a_3488_; lean_object* v_p_3489_; lean_object* v___x_3490_; lean_object* v_a_3492_; lean_object* v_b_3499_; lean_object* v___x_3500_; uint8_t v___x_3501_; 
v_a_3488_ = lean_array_uget(v_as_3474_, v_i_3476_);
v_p_3489_ = lean_ctor_get(v_a_3488_, 0);
v___x_3490_ = lean_box(0);
v_b_3499_ = l_Lean_Grind_Linarith_Poly_coeff(v_p_3489_, v_x_3473_);
v___x_3500_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0);
v___x_3501_ = lean_int_dec_eq(v_b_3499_, v___x_3500_);
if (v___x_3501_ == 0)
{
lean_object* v___x_3503_; 
lean_inc(v_a_3488_);
if (v_isShared_3482_ == 0)
{
lean_ctor_set(v___x_3481_, 1, v_a_3488_);
lean_ctor_set(v___x_3481_, 0, v_b_3499_);
v___x_3503_ = v___x_3481_;
goto v_reusejp_3502_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v_b_3499_);
lean_ctor_set(v_reuseFailAlloc_3514_, 1, v_a_3488_);
v___x_3503_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3502_;
}
v_reusejp_3502_:
{
lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3511_; 
v_isSharedCheck_3511_ = !lean_is_exclusive(v_a_3488_);
if (v_isSharedCheck_3511_ == 0)
{
lean_object* v_unused_3512_; lean_object* v_unused_3513_; 
v_unused_3512_ = lean_ctor_get(v_a_3488_, 1);
lean_dec(v_unused_3512_);
v_unused_3513_ = lean_ctor_get(v_a_3488_, 0);
lean_dec(v_unused_3513_);
v___x_3505_ = v_a_3488_;
v_isShared_3506_ = v_isSharedCheck_3511_;
goto v_resetjp_3504_;
}
else
{
lean_dec(v_a_3488_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3511_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v_todo_3507_; lean_object* v___x_3509_; 
v_todo_3507_ = lean_array_push(v_snd_3484_, v___x_3503_);
if (v_isShared_3506_ == 0)
{
lean_ctor_set(v___x_3505_, 1, v_todo_3507_);
lean_ctor_set(v___x_3505_, 0, v_fst_3483_);
v___x_3509_ = v___x_3505_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v_fst_3483_);
lean_ctor_set(v_reuseFailAlloc_3510_, 1, v_todo_3507_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
v_a_3492_ = v___x_3509_;
goto v___jp_3491_;
}
}
}
}
else
{
lean_object* v_cs_x27_3515_; lean_object* v___x_3517_; 
lean_dec(v_b_3499_);
v_cs_x27_3515_ = l_Lean_PersistentArray_push___redArg(v_fst_3483_, v_a_3488_);
if (v_isShared_3482_ == 0)
{
lean_ctor_set(v___x_3481_, 1, v_snd_3484_);
lean_ctor_set(v___x_3481_, 0, v_cs_x27_3515_);
v___x_3517_ = v___x_3481_;
goto v_reusejp_3516_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v_cs_x27_3515_);
lean_ctor_set(v_reuseFailAlloc_3518_, 1, v_snd_3484_);
v___x_3517_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3516_;
}
v_reusejp_3516_:
{
v_a_3492_ = v___x_3517_;
goto v___jp_3491_;
}
}
v___jp_3491_:
{
lean_object* v___x_3494_; 
if (v_isShared_3487_ == 0)
{
lean_ctor_set(v___x_3486_, 1, v_a_3492_);
lean_ctor_set(v___x_3486_, 0, v___x_3490_);
v___x_3494_ = v___x_3486_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v___x_3490_);
lean_ctor_set(v_reuseFailAlloc_3498_, 1, v_a_3492_);
v___x_3494_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
size_t v___x_3495_; size_t v___x_3496_; lean_object* v___x_3497_; 
v___x_3495_ = ((size_t)1ULL);
v___x_3496_ = lean_usize_add(v_i_3476_, v___x_3495_);
v___x_3497_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__3_spec__4(v_x_3473_, v_as_3474_, v_sz_3475_, v___x_3496_, v___x_3494_);
return v___x_3497_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_x_3522_, lean_object* v_as_3523_, lean_object* v_sz_3524_, lean_object* v_i_3525_, lean_object* v_b_3526_){
_start:
{
size_t v_sz_boxed_3527_; size_t v_i_boxed_3528_; lean_object* v_res_3529_; 
v_sz_boxed_3527_ = lean_unbox_usize(v_sz_3524_);
lean_dec(v_sz_3524_);
v_i_boxed_3528_ = lean_unbox_usize(v_i_3525_);
lean_dec(v_i_3525_);
v_res_3529_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__3(v_x_3522_, v_as_3523_, v_sz_boxed_3527_, v_i_boxed_3528_, v_b_3526_);
lean_dec_ref(v_as_3523_);
lean_dec(v_x_3522_);
return v_res_3529_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1(lean_object* v_init_3530_, lean_object* v_x_3531_, lean_object* v_n_3532_, lean_object* v_b_3533_){
_start:
{
if (lean_obj_tag(v_n_3532_) == 0)
{
lean_object* v_cs_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; size_t v_sz_3537_; size_t v___x_3538_; lean_object* v___x_3539_; lean_object* v_fst_3540_; 
v_cs_3534_ = lean_ctor_get(v_n_3532_, 0);
v___x_3535_ = lean_box(0);
v___x_3536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3535_);
lean_ctor_set(v___x_3536_, 1, v_b_3533_);
v_sz_3537_ = lean_array_size(v_cs_3534_);
v___x_3538_ = ((size_t)0ULL);
v___x_3539_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__2(v_init_3530_, v_x_3531_, v_cs_3534_, v_sz_3537_, v___x_3538_, v___x_3536_);
v_fst_3540_ = lean_ctor_get(v___x_3539_, 0);
lean_inc(v_fst_3540_);
if (lean_obj_tag(v_fst_3540_) == 0)
{
lean_object* v_snd_3541_; lean_object* v___x_3542_; 
v_snd_3541_ = lean_ctor_get(v___x_3539_, 1);
lean_inc(v_snd_3541_);
lean_dec_ref(v___x_3539_);
v___x_3542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3542_, 0, v_snd_3541_);
return v___x_3542_;
}
else
{
lean_object* v_val_3543_; 
lean_dec_ref(v___x_3539_);
v_val_3543_ = lean_ctor_get(v_fst_3540_, 0);
lean_inc(v_val_3543_);
lean_dec_ref_known(v_fst_3540_, 1);
return v_val_3543_;
}
}
else
{
lean_object* v_vs_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; size_t v_sz_3547_; size_t v___x_3548_; lean_object* v___x_3549_; lean_object* v_fst_3550_; 
v_vs_3544_ = lean_ctor_get(v_n_3532_, 0);
v___x_3545_ = lean_box(0);
v___x_3546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3545_);
lean_ctor_set(v___x_3546_, 1, v_b_3533_);
v_sz_3547_ = lean_array_size(v_vs_3544_);
v___x_3548_ = ((size_t)0ULL);
v___x_3549_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__3(v_x_3531_, v_vs_3544_, v_sz_3547_, v___x_3548_, v___x_3546_);
v_fst_3550_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_fst_3550_);
if (lean_obj_tag(v_fst_3550_) == 0)
{
lean_object* v_snd_3551_; lean_object* v___x_3552_; 
v_snd_3551_ = lean_ctor_get(v___x_3549_, 1);
lean_inc(v_snd_3551_);
lean_dec_ref(v___x_3549_);
v___x_3552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3552_, 0, v_snd_3551_);
return v___x_3552_;
}
else
{
lean_object* v_val_3553_; 
lean_dec_ref(v___x_3549_);
v_val_3553_ = lean_ctor_get(v_fst_3550_, 0);
lean_inc(v_val_3553_);
lean_dec_ref_known(v_fst_3550_, 1);
return v_val_3553_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__2(lean_object* v_init_3554_, lean_object* v_x_3555_, lean_object* v_as_3556_, size_t v_sz_3557_, size_t v_i_3558_, lean_object* v_b_3559_){
_start:
{
uint8_t v___x_3560_; 
v___x_3560_ = lean_usize_dec_lt(v_i_3558_, v_sz_3557_);
if (v___x_3560_ == 0)
{
return v_b_3559_;
}
else
{
lean_object* v_snd_3561_; lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3579_; 
v_snd_3561_ = lean_ctor_get(v_b_3559_, 1);
v_isSharedCheck_3579_ = !lean_is_exclusive(v_b_3559_);
if (v_isSharedCheck_3579_ == 0)
{
lean_object* v_unused_3580_; 
v_unused_3580_ = lean_ctor_get(v_b_3559_, 0);
lean_dec(v_unused_3580_);
v___x_3563_ = v_b_3559_;
v_isShared_3564_ = v_isSharedCheck_3579_;
goto v_resetjp_3562_;
}
else
{
lean_inc(v_snd_3561_);
lean_dec(v_b_3559_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3579_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v_a_3565_; lean_object* v___x_3566_; 
v_a_3565_ = lean_array_uget_borrowed(v_as_3556_, v_i_3558_);
lean_inc(v_snd_3561_);
v___x_3566_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1(v_init_3554_, v_x_3555_, v_a_3565_, v_snd_3561_);
if (lean_obj_tag(v___x_3566_) == 0)
{
lean_object* v___x_3567_; lean_object* v___x_3569_; 
v___x_3567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3567_, 0, v___x_3566_);
if (v_isShared_3564_ == 0)
{
lean_ctor_set(v___x_3563_, 0, v___x_3567_);
v___x_3569_ = v___x_3563_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3570_; 
v_reuseFailAlloc_3570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3570_, 0, v___x_3567_);
lean_ctor_set(v_reuseFailAlloc_3570_, 1, v_snd_3561_);
v___x_3569_ = v_reuseFailAlloc_3570_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
return v___x_3569_;
}
}
else
{
lean_object* v_a_3571_; lean_object* v___x_3572_; lean_object* v___x_3574_; 
lean_dec(v_snd_3561_);
v_a_3571_ = lean_ctor_get(v___x_3566_, 0);
lean_inc(v_a_3571_);
lean_dec_ref_known(v___x_3566_, 1);
v___x_3572_ = lean_box(0);
if (v_isShared_3564_ == 0)
{
lean_ctor_set(v___x_3563_, 1, v_a_3571_);
lean_ctor_set(v___x_3563_, 0, v___x_3572_);
v___x_3574_ = v___x_3563_;
goto v_reusejp_3573_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v___x_3572_);
lean_ctor_set(v_reuseFailAlloc_3578_, 1, v_a_3571_);
v___x_3574_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3573_;
}
v_reusejp_3573_:
{
size_t v___x_3575_; size_t v___x_3576_; 
v___x_3575_ = ((size_t)1ULL);
v___x_3576_ = lean_usize_add(v_i_3558_, v___x_3575_);
v_i_3558_ = v___x_3576_;
v_b_3559_ = v___x_3574_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_init_3581_, lean_object* v_x_3582_, lean_object* v_as_3583_, lean_object* v_sz_3584_, lean_object* v_i_3585_, lean_object* v_b_3586_){
_start:
{
size_t v_sz_boxed_3587_; size_t v_i_boxed_3588_; lean_object* v_res_3589_; 
v_sz_boxed_3587_ = lean_unbox_usize(v_sz_3584_);
lean_dec(v_sz_3584_);
v_i_boxed_3588_ = lean_unbox_usize(v_i_3585_);
lean_dec(v_i_3585_);
v_res_3589_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1_spec__2(v_init_3581_, v_x_3582_, v_as_3583_, v_sz_boxed_3587_, v_i_boxed_3588_, v_b_3586_);
lean_dec_ref(v_as_3583_);
lean_dec(v_x_3582_);
lean_dec_ref(v_init_3581_);
return v_res_3589_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1___boxed(lean_object* v_init_3590_, lean_object* v_x_3591_, lean_object* v_n_3592_, lean_object* v_b_3593_){
_start:
{
lean_object* v_res_3594_; 
v_res_3594_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1(v_init_3590_, v_x_3591_, v_n_3592_, v_b_3593_);
lean_dec_ref(v_n_3592_);
lean_dec(v_x_3591_);
lean_dec_ref(v_init_3590_);
return v_res_3594_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0(lean_object* v_x_3595_, lean_object* v_t_3596_, lean_object* v_init_3597_){
_start:
{
lean_object* v_root_3598_; lean_object* v_tail_3599_; lean_object* v___x_3600_; 
v_root_3598_ = lean_ctor_get(v_t_3596_, 0);
v_tail_3599_ = lean_ctor_get(v_t_3596_, 1);
lean_inc_ref(v_init_3597_);
v___x_3600_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__1(v_init_3597_, v_x_3595_, v_root_3598_, v_init_3597_);
lean_dec_ref(v_init_3597_);
if (lean_obj_tag(v___x_3600_) == 0)
{
lean_object* v_a_3601_; 
v_a_3601_ = lean_ctor_get(v___x_3600_, 0);
lean_inc(v_a_3601_);
lean_dec_ref_known(v___x_3600_, 1);
return v_a_3601_;
}
else
{
lean_object* v_a_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; size_t v_sz_3605_; size_t v___x_3606_; lean_object* v___x_3607_; lean_object* v_fst_3608_; 
v_a_3602_ = lean_ctor_get(v___x_3600_, 0);
lean_inc(v_a_3602_);
lean_dec_ref_known(v___x_3600_, 1);
v___x_3603_ = lean_box(0);
v___x_3604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3603_);
lean_ctor_set(v___x_3604_, 1, v_a_3602_);
v_sz_3605_ = lean_array_size(v_tail_3599_);
v___x_3606_ = ((size_t)0ULL);
v___x_3607_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0_spec__2(v_x_3595_, v_tail_3599_, v_sz_3605_, v___x_3606_, v___x_3604_);
v_fst_3608_ = lean_ctor_get(v___x_3607_, 0);
lean_inc(v_fst_3608_);
if (lean_obj_tag(v_fst_3608_) == 0)
{
lean_object* v_snd_3609_; 
v_snd_3609_ = lean_ctor_get(v___x_3607_, 1);
lean_inc(v_snd_3609_);
lean_dec_ref(v___x_3607_);
return v_snd_3609_;
}
else
{
lean_object* v_val_3610_; 
lean_dec_ref(v___x_3607_);
v_val_3610_ = lean_ctor_get(v_fst_3608_, 0);
lean_inc(v_val_3610_);
lean_dec_ref_known(v_fst_3608_, 1);
return v_val_3610_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0___boxed(lean_object* v_x_3611_, lean_object* v_t_3612_, lean_object* v_init_3613_){
_start:
{
lean_object* v_res_3614_; 
v_res_3614_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0(v_x_3611_, v_t_3612_, v_init_3613_);
lean_dec_ref(v_t_3612_);
lean_dec(v_x_3611_);
return v_res_3614_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; 
v___x_3615_ = lean_unsigned_to_nat(32u);
v___x_3616_ = lean_mk_empty_array_with_capacity(v___x_3615_);
v___x_3617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3617_, 0, v___x_3616_);
return v___x_3617_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__1(void){
_start:
{
size_t v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v_cs_x27_3623_; 
v___x_3618_ = ((size_t)5ULL);
v___x_3619_ = lean_unsigned_to_nat(0u);
v___x_3620_ = lean_unsigned_to_nat(32u);
v___x_3621_ = lean_mk_empty_array_with_capacity(v___x_3620_);
v___x_3622_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__0, &l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__0);
v_cs_x27_3623_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_cs_x27_3623_, 0, v___x_3622_);
lean_ctor_set(v_cs_x27_3623_, 1, v___x_3621_);
lean_ctor_set(v_cs_x27_3623_, 2, v___x_3619_);
lean_ctor_set(v_cs_x27_3623_, 3, v___x_3619_);
lean_ctor_set_usize(v_cs_x27_3623_, 4, v___x_3618_);
return v_cs_x27_3623_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__3(void){
_start:
{
lean_object* v_todo_3626_; lean_object* v_cs_x27_3627_; lean_object* v___x_3628_; 
v_todo_3626_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__2));
v_cs_x27_3627_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__1, &l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__1_once, _init_l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__1);
v___x_3628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3628_, 0, v_cs_x27_3627_);
lean_ctor_set(v___x_3628_, 1, v_todo_3626_);
return v___x_3628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0(lean_object* v_x_3629_, lean_object* v_cs_3630_){
_start:
{
lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v_fst_3633_; lean_object* v_snd_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3641_; 
v___x_3631_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__3, &l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__3_once, _init_l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___closed__3);
v___x_3632_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0_spec__0(v_x_3629_, v_cs_3630_, v___x_3631_);
v_fst_3633_ = lean_ctor_get(v___x_3632_, 0);
v_snd_3634_ = lean_ctor_get(v___x_3632_, 1);
v_isSharedCheck_3641_ = !lean_is_exclusive(v___x_3632_);
if (v_isSharedCheck_3641_ == 0)
{
v___x_3636_ = v___x_3632_;
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_snd_3634_);
lean_inc(v_fst_3633_);
lean_dec(v___x_3632_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3639_; 
if (v_isShared_3637_ == 0)
{
v___x_3639_ = v___x_3636_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v_fst_3633_);
lean_ctor_set(v_reuseFailAlloc_3640_, 1, v_snd_3634_);
v___x_3639_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
return v___x_3639_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0___boxed(lean_object* v_x_3642_, lean_object* v_cs_3643_){
_start:
{
lean_object* v_res_3644_; 
v_res_3644_ = l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0(v_x_3642_, v_cs_3643_);
lean_dec_ref(v_cs_3643_);
lean_dec(v_x_3642_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs(lean_object* v_x_3645_, lean_object* v_cs_3646_){
_start:
{
lean_object* v___x_3647_; 
v___x_3647_ = l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0(v_x_3645_, v_cs_3646_);
return v___x_3647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs___boxed(lean_object* v_x_3648_, lean_object* v_cs_3649_){
_start:
{
lean_object* v_res_3650_; 
v_res_3650_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs(v_x_3648_, v_cs_3649_);
lean_dec_ref(v_cs_3649_);
lean_dec(v_x_3648_);
return v_res_3650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs___lam__0(lean_object* v_a_3651_, lean_object* v_y_3652_, lean_object* v_fst_3653_, lean_object* v_s_3654_){
_start:
{
lean_object* v_structs_3655_; lean_object* v_typeIdOf_3656_; lean_object* v_exprToStructId_3657_; lean_object* v_exprToStructIdEntries_3658_; lean_object* v_forbiddenNatModules_3659_; lean_object* v_natStructs_3660_; lean_object* v_natTypeIdOf_3661_; lean_object* v_exprToNatStructId_3662_; lean_object* v___x_3663_; uint8_t v___x_3664_; 
v_structs_3655_ = lean_ctor_get(v_s_3654_, 0);
v_typeIdOf_3656_ = lean_ctor_get(v_s_3654_, 1);
v_exprToStructId_3657_ = lean_ctor_get(v_s_3654_, 2);
v_exprToStructIdEntries_3658_ = lean_ctor_get(v_s_3654_, 3);
v_forbiddenNatModules_3659_ = lean_ctor_get(v_s_3654_, 4);
v_natStructs_3660_ = lean_ctor_get(v_s_3654_, 5);
v_natTypeIdOf_3661_ = lean_ctor_get(v_s_3654_, 6);
v_exprToNatStructId_3662_ = lean_ctor_get(v_s_3654_, 7);
v___x_3663_ = lean_array_get_size(v_structs_3655_);
v___x_3664_ = lean_nat_dec_lt(v_a_3651_, v___x_3663_);
if (v___x_3664_ == 0)
{
lean_dec_ref(v_fst_3653_);
return v_s_3654_;
}
else
{
lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3726_; 
lean_inc_ref(v_exprToNatStructId_3662_);
lean_inc_ref(v_natTypeIdOf_3661_);
lean_inc_ref(v_natStructs_3660_);
lean_inc_ref(v_forbiddenNatModules_3659_);
lean_inc_ref(v_exprToStructIdEntries_3658_);
lean_inc_ref(v_exprToStructId_3657_);
lean_inc_ref(v_typeIdOf_3656_);
lean_inc_ref(v_structs_3655_);
v_isSharedCheck_3726_ = !lean_is_exclusive(v_s_3654_);
if (v_isSharedCheck_3726_ == 0)
{
lean_object* v_unused_3727_; lean_object* v_unused_3728_; lean_object* v_unused_3729_; lean_object* v_unused_3730_; lean_object* v_unused_3731_; lean_object* v_unused_3732_; lean_object* v_unused_3733_; lean_object* v_unused_3734_; 
v_unused_3727_ = lean_ctor_get(v_s_3654_, 7);
lean_dec(v_unused_3727_);
v_unused_3728_ = lean_ctor_get(v_s_3654_, 6);
lean_dec(v_unused_3728_);
v_unused_3729_ = lean_ctor_get(v_s_3654_, 5);
lean_dec(v_unused_3729_);
v_unused_3730_ = lean_ctor_get(v_s_3654_, 4);
lean_dec(v_unused_3730_);
v_unused_3731_ = lean_ctor_get(v_s_3654_, 3);
lean_dec(v_unused_3731_);
v_unused_3732_ = lean_ctor_get(v_s_3654_, 2);
lean_dec(v_unused_3732_);
v_unused_3733_ = lean_ctor_get(v_s_3654_, 1);
lean_dec(v_unused_3733_);
v_unused_3734_ = lean_ctor_get(v_s_3654_, 0);
lean_dec(v_unused_3734_);
v___x_3666_ = v_s_3654_;
v_isShared_3667_ = v_isSharedCheck_3726_;
goto v_resetjp_3665_;
}
else
{
lean_dec(v_s_3654_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3726_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v_v_3668_; lean_object* v_id_3669_; lean_object* v_ringId_x3f_3670_; lean_object* v_type_3671_; lean_object* v_u_3672_; lean_object* v_intModuleInst_3673_; lean_object* v_leInst_x3f_3674_; lean_object* v_ltInst_x3f_3675_; lean_object* v_lawfulOrderLTInst_x3f_3676_; lean_object* v_isPreorderInst_x3f_3677_; lean_object* v_orderedAddInst_x3f_3678_; lean_object* v_isLinearInst_x3f_3679_; lean_object* v_noNatDivInst_x3f_3680_; lean_object* v_ringInst_x3f_3681_; lean_object* v_commRingInst_x3f_3682_; lean_object* v_orderedRingInst_x3f_3683_; lean_object* v_fieldInst_x3f_3684_; lean_object* v_charInst_x3f_3685_; lean_object* v_zero_3686_; lean_object* v_ofNatZero_3687_; lean_object* v_one_x3f_3688_; lean_object* v_leFn_x3f_3689_; lean_object* v_ltFn_x3f_3690_; lean_object* v_addFn_3691_; lean_object* v_zsmulFn_3692_; lean_object* v_nsmulFn_3693_; lean_object* v_zsmulFn_x3f_3694_; lean_object* v_nsmulFn_x3f_3695_; lean_object* v_homomulFn_x3f_3696_; lean_object* v_subFn_3697_; lean_object* v_negFn_3698_; lean_object* v_vars_3699_; lean_object* v_varMap_3700_; lean_object* v_lowers_3701_; lean_object* v_uppers_3702_; lean_object* v_diseqs_3703_; lean_object* v_assignment_3704_; uint8_t v_caseSplits_3705_; lean_object* v_conflict_x3f_3706_; lean_object* v_diseqSplits_3707_; lean_object* v_elimEqs_3708_; lean_object* v_elimStack_3709_; lean_object* v_occurs_3710_; lean_object* v_ignored_3711_; lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3725_; 
v_v_3668_ = lean_array_fget(v_structs_3655_, v_a_3651_);
v_id_3669_ = lean_ctor_get(v_v_3668_, 0);
v_ringId_x3f_3670_ = lean_ctor_get(v_v_3668_, 1);
v_type_3671_ = lean_ctor_get(v_v_3668_, 2);
v_u_3672_ = lean_ctor_get(v_v_3668_, 3);
v_intModuleInst_3673_ = lean_ctor_get(v_v_3668_, 4);
v_leInst_x3f_3674_ = lean_ctor_get(v_v_3668_, 5);
v_ltInst_x3f_3675_ = lean_ctor_get(v_v_3668_, 6);
v_lawfulOrderLTInst_x3f_3676_ = lean_ctor_get(v_v_3668_, 7);
v_isPreorderInst_x3f_3677_ = lean_ctor_get(v_v_3668_, 8);
v_orderedAddInst_x3f_3678_ = lean_ctor_get(v_v_3668_, 9);
v_isLinearInst_x3f_3679_ = lean_ctor_get(v_v_3668_, 10);
v_noNatDivInst_x3f_3680_ = lean_ctor_get(v_v_3668_, 11);
v_ringInst_x3f_3681_ = lean_ctor_get(v_v_3668_, 12);
v_commRingInst_x3f_3682_ = lean_ctor_get(v_v_3668_, 13);
v_orderedRingInst_x3f_3683_ = lean_ctor_get(v_v_3668_, 14);
v_fieldInst_x3f_3684_ = lean_ctor_get(v_v_3668_, 15);
v_charInst_x3f_3685_ = lean_ctor_get(v_v_3668_, 16);
v_zero_3686_ = lean_ctor_get(v_v_3668_, 17);
v_ofNatZero_3687_ = lean_ctor_get(v_v_3668_, 18);
v_one_x3f_3688_ = lean_ctor_get(v_v_3668_, 19);
v_leFn_x3f_3689_ = lean_ctor_get(v_v_3668_, 20);
v_ltFn_x3f_3690_ = lean_ctor_get(v_v_3668_, 21);
v_addFn_3691_ = lean_ctor_get(v_v_3668_, 22);
v_zsmulFn_3692_ = lean_ctor_get(v_v_3668_, 23);
v_nsmulFn_3693_ = lean_ctor_get(v_v_3668_, 24);
v_zsmulFn_x3f_3694_ = lean_ctor_get(v_v_3668_, 25);
v_nsmulFn_x3f_3695_ = lean_ctor_get(v_v_3668_, 26);
v_homomulFn_x3f_3696_ = lean_ctor_get(v_v_3668_, 27);
v_subFn_3697_ = lean_ctor_get(v_v_3668_, 28);
v_negFn_3698_ = lean_ctor_get(v_v_3668_, 29);
v_vars_3699_ = lean_ctor_get(v_v_3668_, 30);
v_varMap_3700_ = lean_ctor_get(v_v_3668_, 31);
v_lowers_3701_ = lean_ctor_get(v_v_3668_, 32);
v_uppers_3702_ = lean_ctor_get(v_v_3668_, 33);
v_diseqs_3703_ = lean_ctor_get(v_v_3668_, 34);
v_assignment_3704_ = lean_ctor_get(v_v_3668_, 35);
v_caseSplits_3705_ = lean_ctor_get_uint8(v_v_3668_, sizeof(void*)*42);
v_conflict_x3f_3706_ = lean_ctor_get(v_v_3668_, 36);
v_diseqSplits_3707_ = lean_ctor_get(v_v_3668_, 37);
v_elimEqs_3708_ = lean_ctor_get(v_v_3668_, 38);
v_elimStack_3709_ = lean_ctor_get(v_v_3668_, 39);
v_occurs_3710_ = lean_ctor_get(v_v_3668_, 40);
v_ignored_3711_ = lean_ctor_get(v_v_3668_, 41);
v_isSharedCheck_3725_ = !lean_is_exclusive(v_v_3668_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3713_ = v_v_3668_;
v_isShared_3714_ = v_isSharedCheck_3725_;
goto v_resetjp_3712_;
}
else
{
lean_inc(v_ignored_3711_);
lean_inc(v_occurs_3710_);
lean_inc(v_elimStack_3709_);
lean_inc(v_elimEqs_3708_);
lean_inc(v_diseqSplits_3707_);
lean_inc(v_conflict_x3f_3706_);
lean_inc(v_assignment_3704_);
lean_inc(v_diseqs_3703_);
lean_inc(v_uppers_3702_);
lean_inc(v_lowers_3701_);
lean_inc(v_varMap_3700_);
lean_inc(v_vars_3699_);
lean_inc(v_negFn_3698_);
lean_inc(v_subFn_3697_);
lean_inc(v_homomulFn_x3f_3696_);
lean_inc(v_nsmulFn_x3f_3695_);
lean_inc(v_zsmulFn_x3f_3694_);
lean_inc(v_nsmulFn_3693_);
lean_inc(v_zsmulFn_3692_);
lean_inc(v_addFn_3691_);
lean_inc(v_ltFn_x3f_3690_);
lean_inc(v_leFn_x3f_3689_);
lean_inc(v_one_x3f_3688_);
lean_inc(v_ofNatZero_3687_);
lean_inc(v_zero_3686_);
lean_inc(v_charInst_x3f_3685_);
lean_inc(v_fieldInst_x3f_3684_);
lean_inc(v_orderedRingInst_x3f_3683_);
lean_inc(v_commRingInst_x3f_3682_);
lean_inc(v_ringInst_x3f_3681_);
lean_inc(v_noNatDivInst_x3f_3680_);
lean_inc(v_isLinearInst_x3f_3679_);
lean_inc(v_orderedAddInst_x3f_3678_);
lean_inc(v_isPreorderInst_x3f_3677_);
lean_inc(v_lawfulOrderLTInst_x3f_3676_);
lean_inc(v_ltInst_x3f_3675_);
lean_inc(v_leInst_x3f_3674_);
lean_inc(v_intModuleInst_3673_);
lean_inc(v_u_3672_);
lean_inc(v_type_3671_);
lean_inc(v_ringId_x3f_3670_);
lean_inc(v_id_3669_);
lean_dec(v_v_3668_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3725_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
lean_object* v___x_3715_; lean_object* v_xs_x27_3716_; lean_object* v___x_3717_; lean_object* v___x_3719_; 
v___x_3715_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0);
v_xs_x27_3716_ = lean_array_fset(v_structs_3655_, v_a_3651_, v___x_3715_);
v___x_3717_ = l_Lean_PersistentArray_set___redArg(v_diseqs_3703_, v_y_3652_, v_fst_3653_);
if (v_isShared_3714_ == 0)
{
lean_ctor_set(v___x_3713_, 34, v___x_3717_);
v___x_3719_ = v___x_3713_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_id_3669_);
lean_ctor_set(v_reuseFailAlloc_3724_, 1, v_ringId_x3f_3670_);
lean_ctor_set(v_reuseFailAlloc_3724_, 2, v_type_3671_);
lean_ctor_set(v_reuseFailAlloc_3724_, 3, v_u_3672_);
lean_ctor_set(v_reuseFailAlloc_3724_, 4, v_intModuleInst_3673_);
lean_ctor_set(v_reuseFailAlloc_3724_, 5, v_leInst_x3f_3674_);
lean_ctor_set(v_reuseFailAlloc_3724_, 6, v_ltInst_x3f_3675_);
lean_ctor_set(v_reuseFailAlloc_3724_, 7, v_lawfulOrderLTInst_x3f_3676_);
lean_ctor_set(v_reuseFailAlloc_3724_, 8, v_isPreorderInst_x3f_3677_);
lean_ctor_set(v_reuseFailAlloc_3724_, 9, v_orderedAddInst_x3f_3678_);
lean_ctor_set(v_reuseFailAlloc_3724_, 10, v_isLinearInst_x3f_3679_);
lean_ctor_set(v_reuseFailAlloc_3724_, 11, v_noNatDivInst_x3f_3680_);
lean_ctor_set(v_reuseFailAlloc_3724_, 12, v_ringInst_x3f_3681_);
lean_ctor_set(v_reuseFailAlloc_3724_, 13, v_commRingInst_x3f_3682_);
lean_ctor_set(v_reuseFailAlloc_3724_, 14, v_orderedRingInst_x3f_3683_);
lean_ctor_set(v_reuseFailAlloc_3724_, 15, v_fieldInst_x3f_3684_);
lean_ctor_set(v_reuseFailAlloc_3724_, 16, v_charInst_x3f_3685_);
lean_ctor_set(v_reuseFailAlloc_3724_, 17, v_zero_3686_);
lean_ctor_set(v_reuseFailAlloc_3724_, 18, v_ofNatZero_3687_);
lean_ctor_set(v_reuseFailAlloc_3724_, 19, v_one_x3f_3688_);
lean_ctor_set(v_reuseFailAlloc_3724_, 20, v_leFn_x3f_3689_);
lean_ctor_set(v_reuseFailAlloc_3724_, 21, v_ltFn_x3f_3690_);
lean_ctor_set(v_reuseFailAlloc_3724_, 22, v_addFn_3691_);
lean_ctor_set(v_reuseFailAlloc_3724_, 23, v_zsmulFn_3692_);
lean_ctor_set(v_reuseFailAlloc_3724_, 24, v_nsmulFn_3693_);
lean_ctor_set(v_reuseFailAlloc_3724_, 25, v_zsmulFn_x3f_3694_);
lean_ctor_set(v_reuseFailAlloc_3724_, 26, v_nsmulFn_x3f_3695_);
lean_ctor_set(v_reuseFailAlloc_3724_, 27, v_homomulFn_x3f_3696_);
lean_ctor_set(v_reuseFailAlloc_3724_, 28, v_subFn_3697_);
lean_ctor_set(v_reuseFailAlloc_3724_, 29, v_negFn_3698_);
lean_ctor_set(v_reuseFailAlloc_3724_, 30, v_vars_3699_);
lean_ctor_set(v_reuseFailAlloc_3724_, 31, v_varMap_3700_);
lean_ctor_set(v_reuseFailAlloc_3724_, 32, v_lowers_3701_);
lean_ctor_set(v_reuseFailAlloc_3724_, 33, v_uppers_3702_);
lean_ctor_set(v_reuseFailAlloc_3724_, 34, v___x_3717_);
lean_ctor_set(v_reuseFailAlloc_3724_, 35, v_assignment_3704_);
lean_ctor_set(v_reuseFailAlloc_3724_, 36, v_conflict_x3f_3706_);
lean_ctor_set(v_reuseFailAlloc_3724_, 37, v_diseqSplits_3707_);
lean_ctor_set(v_reuseFailAlloc_3724_, 38, v_elimEqs_3708_);
lean_ctor_set(v_reuseFailAlloc_3724_, 39, v_elimStack_3709_);
lean_ctor_set(v_reuseFailAlloc_3724_, 40, v_occurs_3710_);
lean_ctor_set(v_reuseFailAlloc_3724_, 41, v_ignored_3711_);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, sizeof(void*)*42, v_caseSplits_3705_);
v___x_3719_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
lean_object* v___x_3720_; lean_object* v___x_3722_; 
v___x_3720_ = lean_array_fset(v_xs_x27_3716_, v_a_3651_, v___x_3719_);
if (v_isShared_3667_ == 0)
{
lean_ctor_set(v___x_3666_, 0, v___x_3720_);
v___x_3722_ = v___x_3666_;
goto v_reusejp_3721_;
}
else
{
lean_object* v_reuseFailAlloc_3723_; 
v_reuseFailAlloc_3723_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3723_, 0, v___x_3720_);
lean_ctor_set(v_reuseFailAlloc_3723_, 1, v_typeIdOf_3656_);
lean_ctor_set(v_reuseFailAlloc_3723_, 2, v_exprToStructId_3657_);
lean_ctor_set(v_reuseFailAlloc_3723_, 3, v_exprToStructIdEntries_3658_);
lean_ctor_set(v_reuseFailAlloc_3723_, 4, v_forbiddenNatModules_3659_);
lean_ctor_set(v_reuseFailAlloc_3723_, 5, v_natStructs_3660_);
lean_ctor_set(v_reuseFailAlloc_3723_, 6, v_natTypeIdOf_3661_);
lean_ctor_set(v_reuseFailAlloc_3723_, 7, v_exprToNatStructId_3662_);
v___x_3722_ = v_reuseFailAlloc_3723_;
goto v_reusejp_3721_;
}
v_reusejp_3721_:
{
return v___x_3722_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs___lam__0___boxed(lean_object* v_a_3735_, lean_object* v_y_3736_, lean_object* v_fst_3737_, lean_object* v_s_3738_){
_start:
{
lean_object* v_res_3739_; 
v_res_3739_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs___lam__0(v_a_3735_, v_y_3736_, v_fst_3737_, v_s_3738_);
lean_dec(v_y_3736_);
lean_dec(v_a_3735_);
return v_res_3739_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs_spec__0(lean_object* v_a_3740_, lean_object* v_x_3741_, lean_object* v_c_3742_, lean_object* v_as_3743_, size_t v_sz_3744_, size_t v_i_3745_, lean_object* v_b_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_){
_start:
{
lean_object* v_a_3760_; uint8_t v___x_3764_; 
v___x_3764_ = lean_usize_dec_lt(v_i_3745_, v_sz_3744_);
if (v___x_3764_ == 0)
{
lean_object* v___x_3765_; 
lean_dec_ref(v_c_3742_);
v___x_3765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3765_, 0, v_b_3746_);
return v___x_3765_;
}
else
{
lean_object* v_a_3766_; lean_object* v_fst_3767_; lean_object* v_snd_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; 
lean_dec_ref(v_b_3746_);
v_a_3766_ = lean_array_uget_borrowed(v_as_3743_, v_i_3745_);
v_fst_3767_ = lean_ctor_get(v_a_3766_, 0);
v_snd_3768_ = lean_ctor_get(v_a_3766_, 1);
v___x_3769_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__0));
lean_inc(v_snd_3768_);
lean_inc(v_fst_3767_);
lean_inc_ref(v_c_3742_);
v___x_3770_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f(v_a_3740_, v_x_3741_, v_c_3742_, v_fst_3767_, v_snd_3768_, v___y_3747_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_, v___y_3756_, v___y_3757_);
if (lean_obj_tag(v___x_3770_) == 0)
{
lean_object* v_a_3771_; 
v_a_3771_ = lean_ctor_get(v___x_3770_, 0);
lean_inc(v_a_3771_);
lean_dec_ref_known(v___x_3770_, 1);
if (lean_obj_tag(v_a_3771_) == 1)
{
lean_object* v_val_3772_; lean_object* v___x_3773_; 
v_val_3772_ = lean_ctor_get(v_a_3771_, 0);
lean_inc(v_val_3772_);
lean_dec_ref_known(v_a_3771_, 1);
v___x_3773_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert(v_val_3772_, v___y_3747_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_, v___y_3756_, v___y_3757_);
if (lean_obj_tag(v___x_3773_) == 0)
{
lean_object* v___x_3774_; 
lean_dec_ref_known(v___x_3773_, 1);
v___x_3774_ = l_Lean_Meta_Grind_Arith_Linear_inconsistent(v___y_3747_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_, v___y_3756_, v___y_3757_);
if (lean_obj_tag(v___x_3774_) == 0)
{
lean_object* v_a_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3784_; 
v_a_3775_ = lean_ctor_get(v___x_3774_, 0);
v_isSharedCheck_3784_ = !lean_is_exclusive(v___x_3774_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3777_ = v___x_3774_;
v_isShared_3778_ = v_isSharedCheck_3784_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_a_3775_);
lean_dec(v___x_3774_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3784_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
uint8_t v___x_3779_; 
v___x_3779_ = lean_unbox(v_a_3775_);
lean_dec(v_a_3775_);
if (v___x_3779_ == 0)
{
lean_del_object(v___x_3777_);
v_a_3760_ = v___x_3769_;
goto v___jp_3759_;
}
else
{
lean_object* v___x_3780_; lean_object* v___x_3782_; 
lean_dec_ref(v_c_3742_);
v___x_3780_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__2));
if (v_isShared_3778_ == 0)
{
lean_ctor_set(v___x_3777_, 0, v___x_3780_);
v___x_3782_ = v___x_3777_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v___x_3780_);
v___x_3782_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
return v___x_3782_;
}
}
}
}
else
{
lean_object* v_a_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3792_; 
lean_dec_ref(v_c_3742_);
v_a_3785_ = lean_ctor_get(v___x_3774_, 0);
v_isSharedCheck_3792_ = !lean_is_exclusive(v___x_3774_);
if (v_isSharedCheck_3792_ == 0)
{
v___x_3787_ = v___x_3774_;
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
else
{
lean_inc(v_a_3785_);
lean_dec(v___x_3774_);
v___x_3787_ = lean_box(0);
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
v_resetjp_3786_:
{
lean_object* v___x_3790_; 
if (v_isShared_3788_ == 0)
{
v___x_3790_ = v___x_3787_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v_a_3785_);
v___x_3790_ = v_reuseFailAlloc_3791_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
return v___x_3790_;
}
}
}
}
else
{
lean_object* v_a_3793_; lean_object* v___x_3795_; uint8_t v_isShared_3796_; uint8_t v_isSharedCheck_3800_; 
lean_dec_ref(v_c_3742_);
v_a_3793_ = lean_ctor_get(v___x_3773_, 0);
v_isSharedCheck_3800_ = !lean_is_exclusive(v___x_3773_);
if (v_isSharedCheck_3800_ == 0)
{
v___x_3795_ = v___x_3773_;
v_isShared_3796_ = v_isSharedCheck_3800_;
goto v_resetjp_3794_;
}
else
{
lean_inc(v_a_3793_);
lean_dec(v___x_3773_);
v___x_3795_ = lean_box(0);
v_isShared_3796_ = v_isSharedCheck_3800_;
goto v_resetjp_3794_;
}
v_resetjp_3794_:
{
lean_object* v___x_3798_; 
if (v_isShared_3796_ == 0)
{
v___x_3798_ = v___x_3795_;
goto v_reusejp_3797_;
}
else
{
lean_object* v_reuseFailAlloc_3799_; 
v_reuseFailAlloc_3799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3799_, 0, v_a_3793_);
v___x_3798_ = v_reuseFailAlloc_3799_;
goto v_reusejp_3797_;
}
v_reusejp_3797_:
{
return v___x_3798_;
}
}
}
}
else
{
lean_object* v___x_3801_; 
lean_dec(v_a_3771_);
v___x_3801_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_ignore(v_snd_3768_, v___y_3747_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_, v___y_3756_, v___y_3757_);
if (lean_obj_tag(v___x_3801_) == 0)
{
lean_dec_ref_known(v___x_3801_, 1);
v_a_3760_ = v___x_3769_;
goto v___jp_3759_;
}
else
{
lean_object* v_a_3802_; lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3809_; 
lean_dec_ref(v_c_3742_);
v_a_3802_ = lean_ctor_get(v___x_3801_, 0);
v_isSharedCheck_3809_ = !lean_is_exclusive(v___x_3801_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3804_ = v___x_3801_;
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
else
{
lean_inc(v_a_3802_);
lean_dec(v___x_3801_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
lean_object* v___x_3807_; 
if (v_isShared_3805_ == 0)
{
v___x_3807_ = v___x_3804_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_a_3802_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
}
}
else
{
lean_object* v_a_3810_; lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3817_; 
lean_dec_ref(v_c_3742_);
v_a_3810_ = lean_ctor_get(v___x_3770_, 0);
v_isSharedCheck_3817_ = !lean_is_exclusive(v___x_3770_);
if (v_isSharedCheck_3817_ == 0)
{
v___x_3812_ = v___x_3770_;
v_isShared_3813_ = v_isSharedCheck_3817_;
goto v_resetjp_3811_;
}
else
{
lean_inc(v_a_3810_);
lean_dec(v___x_3770_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3817_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
lean_object* v___x_3815_; 
if (v_isShared_3813_ == 0)
{
v___x_3815_ = v___x_3812_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v_a_3810_);
v___x_3815_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
return v___x_3815_;
}
}
}
}
v___jp_3759_:
{
size_t v___x_3761_; size_t v___x_3762_; 
v___x_3761_ = ((size_t)1ULL);
v___x_3762_ = lean_usize_add(v_i_3745_, v___x_3761_);
lean_inc_ref(v_a_3760_);
v_i_3745_ = v___x_3762_;
v_b_3746_ = v_a_3760_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs_spec__0___boxed(lean_object** _args){
lean_object* v_a_3818_ = _args[0];
lean_object* v_x_3819_ = _args[1];
lean_object* v_c_3820_ = _args[2];
lean_object* v_as_3821_ = _args[3];
lean_object* v_sz_3822_ = _args[4];
lean_object* v_i_3823_ = _args[5];
lean_object* v_b_3824_ = _args[6];
lean_object* v___y_3825_ = _args[7];
lean_object* v___y_3826_ = _args[8];
lean_object* v___y_3827_ = _args[9];
lean_object* v___y_3828_ = _args[10];
lean_object* v___y_3829_ = _args[11];
lean_object* v___y_3830_ = _args[12];
lean_object* v___y_3831_ = _args[13];
lean_object* v___y_3832_ = _args[14];
lean_object* v___y_3833_ = _args[15];
lean_object* v___y_3834_ = _args[16];
lean_object* v___y_3835_ = _args[17];
lean_object* v___y_3836_ = _args[18];
_start:
{
size_t v_sz_boxed_3837_; size_t v_i_boxed_3838_; lean_object* v_res_3839_; 
v_sz_boxed_3837_ = lean_unbox_usize(v_sz_3822_);
lean_dec(v_sz_3822_);
v_i_boxed_3838_ = lean_unbox_usize(v_i_3823_);
lean_dec(v_i_3823_);
v_res_3839_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs_spec__0(v_a_3818_, v_x_3819_, v_c_3820_, v_as_3821_, v_sz_boxed_3837_, v_i_boxed_3838_, v_b_3824_, v___y_3825_, v___y_3826_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_);
lean_dec(v___y_3835_);
lean_dec_ref(v___y_3834_);
lean_dec(v___y_3833_);
lean_dec_ref(v___y_3832_);
lean_dec(v___y_3831_);
lean_dec_ref(v___y_3830_);
lean_dec(v___y_3829_);
lean_dec_ref(v___y_3828_);
lean_dec(v___y_3827_);
lean_dec(v___y_3826_);
lean_dec(v___y_3825_);
lean_dec_ref(v_as_3821_);
lean_dec(v_x_3819_);
lean_dec(v_a_3818_);
return v_res_3839_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs(lean_object* v_a_3840_, lean_object* v_x_3841_, lean_object* v_c_3842_, lean_object* v_y_3843_, lean_object* v_a_3844_, lean_object* v_a_3845_, lean_object* v_a_3846_, lean_object* v_a_3847_, lean_object* v_a_3848_, lean_object* v_a_3849_, lean_object* v_a_3850_, lean_object* v_a_3851_, lean_object* v_a_3852_, lean_object* v_a_3853_, lean_object* v_a_3854_){
_start:
{
lean_object* v___x_3856_; lean_object* v___x_3857_; 
v___x_3856_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___closed__0);
v___x_3857_ = l_Lean_Meta_Grind_Arith_Linear_inconsistent(v_a_3844_, v_a_3845_, v_a_3846_, v_a_3847_, v_a_3848_, v_a_3849_, v_a_3850_, v_a_3851_, v_a_3852_, v_a_3853_, v_a_3854_);
if (lean_obj_tag(v___x_3857_) == 0)
{
lean_object* v_a_3858_; lean_object* v___x_3860_; uint8_t v_isShared_3861_; uint8_t v_isSharedCheck_3916_; 
v_a_3858_ = lean_ctor_get(v___x_3857_, 0);
v_isSharedCheck_3916_ = !lean_is_exclusive(v___x_3857_);
if (v_isSharedCheck_3916_ == 0)
{
v___x_3860_ = v___x_3857_;
v_isShared_3861_ = v_isSharedCheck_3916_;
goto v_resetjp_3859_;
}
else
{
lean_inc(v_a_3858_);
lean_dec(v___x_3857_);
v___x_3860_ = lean_box(0);
v_isShared_3861_ = v_isSharedCheck_3916_;
goto v_resetjp_3859_;
}
v_resetjp_3859_:
{
uint8_t v___x_3862_; 
v___x_3862_ = lean_unbox(v_a_3858_);
lean_dec(v_a_3858_);
if (v___x_3862_ == 0)
{
lean_object* v___x_3863_; 
lean_del_object(v___x_3860_);
v___x_3863_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_3844_, v_a_3845_, v_a_3846_, v_a_3847_, v_a_3848_, v_a_3849_, v_a_3850_, v_a_3851_, v_a_3852_, v_a_3853_, v_a_3854_);
if (lean_obj_tag(v___x_3863_) == 0)
{
lean_object* v_a_3864_; lean_object* v___y_3866_; lean_object* v_diseqs_3899_; lean_object* v_size_3900_; uint8_t v___x_3901_; 
v_a_3864_ = lean_ctor_get(v___x_3863_, 0);
lean_inc(v_a_3864_);
lean_dec_ref_known(v___x_3863_, 1);
v_diseqs_3899_ = lean_ctor_get(v_a_3864_, 34);
lean_inc_ref(v_diseqs_3899_);
lean_dec(v_a_3864_);
v_size_3900_ = lean_ctor_get(v_diseqs_3899_, 2);
v___x_3901_ = lean_nat_dec_lt(v_y_3843_, v_size_3900_);
if (v___x_3901_ == 0)
{
lean_object* v___x_3902_; 
lean_dec_ref(v_diseqs_3899_);
v___x_3902_ = l_outOfBounds___redArg(v___x_3856_);
v___y_3866_ = v___x_3902_;
goto v___jp_3865_;
}
else
{
lean_object* v___x_3903_; 
v___x_3903_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3856_, v_diseqs_3899_, v_y_3843_);
lean_dec_ref(v_diseqs_3899_);
v___y_3866_ = v___x_3903_;
goto v___jp_3865_;
}
v___jp_3865_:
{
lean_object* v___x_3867_; lean_object* v_fst_3868_; lean_object* v_snd_3869_; lean_object* v___f_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; 
v___x_3867_ = l_Lean_Meta_Grind_Arith_split___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_splitDiseqs_spec__0(v_x_3841_, v___y_3866_);
lean_dec_ref(v___y_3866_);
v_fst_3868_ = lean_ctor_get(v___x_3867_, 0);
lean_inc(v_fst_3868_);
v_snd_3869_ = lean_ctor_get(v___x_3867_, 1);
lean_inc(v_snd_3869_);
lean_dec_ref(v___x_3867_);
lean_inc(v_a_3844_);
v___f_3870_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3870_, 0, v_a_3844_);
lean_closure_set(v___f_3870_, 1, v_y_3843_);
lean_closure_set(v___f_3870_, 2, v_fst_3868_);
v___x_3871_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_3872_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3871_, v___f_3870_, v_a_3845_);
if (lean_obj_tag(v___x_3872_) == 0)
{
lean_object* v___x_3873_; lean_object* v___x_3874_; size_t v_sz_3875_; size_t v___x_3876_; lean_object* v___x_3877_; 
lean_dec_ref_known(v___x_3872_, 1);
v___x_3873_ = lean_box(0);
v___x_3874_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLeCnstrs_spec__0___closed__0));
v_sz_3875_ = lean_array_size(v_snd_3869_);
v___x_3876_ = ((size_t)0ULL);
v___x_3877_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs_spec__0(v_a_3840_, v_x_3841_, v_c_3842_, v_snd_3869_, v_sz_3875_, v___x_3876_, v___x_3874_, v_a_3844_, v_a_3845_, v_a_3846_, v_a_3847_, v_a_3848_, v_a_3849_, v_a_3850_, v_a_3851_, v_a_3852_, v_a_3853_, v_a_3854_);
lean_dec(v_snd_3869_);
if (lean_obj_tag(v___x_3877_) == 0)
{
lean_object* v_a_3878_; lean_object* v___x_3880_; uint8_t v_isShared_3881_; uint8_t v_isSharedCheck_3890_; 
v_a_3878_ = lean_ctor_get(v___x_3877_, 0);
v_isSharedCheck_3890_ = !lean_is_exclusive(v___x_3877_);
if (v_isSharedCheck_3890_ == 0)
{
v___x_3880_ = v___x_3877_;
v_isShared_3881_ = v_isSharedCheck_3890_;
goto v_resetjp_3879_;
}
else
{
lean_inc(v_a_3878_);
lean_dec(v___x_3877_);
v___x_3880_ = lean_box(0);
v_isShared_3881_ = v_isSharedCheck_3890_;
goto v_resetjp_3879_;
}
v_resetjp_3879_:
{
lean_object* v_fst_3882_; 
v_fst_3882_ = lean_ctor_get(v_a_3878_, 0);
lean_inc(v_fst_3882_);
lean_dec(v_a_3878_);
if (lean_obj_tag(v_fst_3882_) == 0)
{
lean_object* v___x_3884_; 
if (v_isShared_3881_ == 0)
{
lean_ctor_set(v___x_3880_, 0, v___x_3873_);
v___x_3884_ = v___x_3880_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v___x_3873_);
v___x_3884_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
return v___x_3884_;
}
}
else
{
lean_object* v_val_3886_; lean_object* v___x_3888_; 
v_val_3886_ = lean_ctor_get(v_fst_3882_, 0);
lean_inc(v_val_3886_);
lean_dec_ref_known(v_fst_3882_, 1);
if (v_isShared_3881_ == 0)
{
lean_ctor_set(v___x_3880_, 0, v_val_3886_);
v___x_3888_ = v___x_3880_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v_val_3886_);
v___x_3888_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
return v___x_3888_;
}
}
}
}
else
{
lean_object* v_a_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3898_; 
v_a_3891_ = lean_ctor_get(v___x_3877_, 0);
v_isSharedCheck_3898_ = !lean_is_exclusive(v___x_3877_);
if (v_isSharedCheck_3898_ == 0)
{
v___x_3893_ = v___x_3877_;
v_isShared_3894_ = v_isSharedCheck_3898_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_a_3891_);
lean_dec(v___x_3877_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3898_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
lean_object* v___x_3896_; 
if (v_isShared_3894_ == 0)
{
v___x_3896_ = v___x_3893_;
goto v_reusejp_3895_;
}
else
{
lean_object* v_reuseFailAlloc_3897_; 
v_reuseFailAlloc_3897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3897_, 0, v_a_3891_);
v___x_3896_ = v_reuseFailAlloc_3897_;
goto v_reusejp_3895_;
}
v_reusejp_3895_:
{
return v___x_3896_;
}
}
}
}
else
{
lean_dec(v_snd_3869_);
lean_dec_ref(v_c_3842_);
return v___x_3872_;
}
}
}
else
{
lean_object* v_a_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3911_; 
lean_dec(v_y_3843_);
lean_dec_ref(v_c_3842_);
v_a_3904_ = lean_ctor_get(v___x_3863_, 0);
v_isSharedCheck_3911_ = !lean_is_exclusive(v___x_3863_);
if (v_isSharedCheck_3911_ == 0)
{
v___x_3906_ = v___x_3863_;
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_a_3904_);
lean_dec(v___x_3863_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v___x_3909_; 
if (v_isShared_3907_ == 0)
{
v___x_3909_ = v___x_3906_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v_a_3904_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
return v___x_3909_;
}
}
}
}
else
{
lean_object* v___x_3912_; lean_object* v___x_3914_; 
lean_dec(v_y_3843_);
lean_dec_ref(v_c_3842_);
v___x_3912_ = lean_box(0);
if (v_isShared_3861_ == 0)
{
lean_ctor_set(v___x_3860_, 0, v___x_3912_);
v___x_3914_ = v___x_3860_;
goto v_reusejp_3913_;
}
else
{
lean_object* v_reuseFailAlloc_3915_; 
v_reuseFailAlloc_3915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3915_, 0, v___x_3912_);
v___x_3914_ = v_reuseFailAlloc_3915_;
goto v_reusejp_3913_;
}
v_reusejp_3913_:
{
return v___x_3914_;
}
}
}
}
else
{
lean_object* v_a_3917_; lean_object* v___x_3919_; uint8_t v_isShared_3920_; uint8_t v_isSharedCheck_3924_; 
lean_dec(v_y_3843_);
lean_dec_ref(v_c_3842_);
v_a_3917_ = lean_ctor_get(v___x_3857_, 0);
v_isSharedCheck_3924_ = !lean_is_exclusive(v___x_3857_);
if (v_isSharedCheck_3924_ == 0)
{
v___x_3919_ = v___x_3857_;
v_isShared_3920_ = v_isSharedCheck_3924_;
goto v_resetjp_3918_;
}
else
{
lean_inc(v_a_3917_);
lean_dec(v___x_3857_);
v___x_3919_ = lean_box(0);
v_isShared_3920_ = v_isSharedCheck_3924_;
goto v_resetjp_3918_;
}
v_resetjp_3918_:
{
lean_object* v___x_3922_; 
if (v_isShared_3920_ == 0)
{
v___x_3922_ = v___x_3919_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3923_; 
v_reuseFailAlloc_3923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3923_, 0, v_a_3917_);
v___x_3922_ = v_reuseFailAlloc_3923_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
return v___x_3922_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs___boxed(lean_object* v_a_3925_, lean_object* v_x_3926_, lean_object* v_c_3927_, lean_object* v_y_3928_, lean_object* v_a_3929_, lean_object* v_a_3930_, lean_object* v_a_3931_, lean_object* v_a_3932_, lean_object* v_a_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_){
_start:
{
lean_object* v_res_3941_; 
v_res_3941_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs(v_a_3925_, v_x_3926_, v_c_3927_, v_y_3928_, v_a_3929_, v_a_3930_, v_a_3931_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_, v_a_3938_, v_a_3939_);
lean_dec(v_a_3939_);
lean_dec_ref(v_a_3938_);
lean_dec(v_a_3937_);
lean_dec_ref(v_a_3936_);
lean_dec(v_a_3935_);
lean_dec_ref(v_a_3934_);
lean_dec(v_a_3933_);
lean_dec_ref(v_a_3932_);
lean_dec(v_a_3931_);
lean_dec(v_a_3930_);
lean_dec(v_a_3929_);
lean_dec(v_x_3926_);
lean_dec(v_a_3925_);
return v_res_3941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccsAt(lean_object* v_a_3942_, lean_object* v_x_3943_, lean_object* v_c_3944_, lean_object* v_y_3945_, lean_object* v_a_3946_, lean_object* v_a_3947_, lean_object* v_a_3948_, lean_object* v_a_3949_, lean_object* v_a_3950_, lean_object* v_a_3951_, lean_object* v_a_3952_, lean_object* v_a_3953_, lean_object* v_a_3954_, lean_object* v_a_3955_, lean_object* v_a_3956_){
_start:
{
lean_object* v___x_3958_; 
lean_inc(v_y_3945_);
lean_inc_ref(v_c_3944_);
lean_inc(v_x_3943_);
lean_inc(v_a_3942_);
v___x_3958_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers(v_a_3942_, v_x_3943_, v_c_3944_, v_y_3945_, v_a_3946_, v_a_3947_, v_a_3948_, v_a_3949_, v_a_3950_, v_a_3951_, v_a_3952_, v_a_3953_, v_a_3954_, v_a_3955_, v_a_3956_);
if (lean_obj_tag(v___x_3958_) == 0)
{
lean_object* v___x_3959_; 
lean_dec_ref_known(v___x_3958_, 1);
lean_inc(v_y_3945_);
lean_inc_ref(v_c_3944_);
lean_inc(v_x_3943_);
lean_inc(v_a_3942_);
v___x_3959_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateUppers(v_a_3942_, v_x_3943_, v_c_3944_, v_y_3945_, v_a_3946_, v_a_3947_, v_a_3948_, v_a_3949_, v_a_3950_, v_a_3951_, v_a_3952_, v_a_3953_, v_a_3954_, v_a_3955_, v_a_3956_);
if (lean_obj_tag(v___x_3959_) == 0)
{
lean_object* v___x_3960_; lean_object* v___x_3961_; 
lean_dec_ref_known(v___x_3959_, 1);
v___x_3960_ = lean_nat_to_int(v_a_3942_);
v___x_3961_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateDiseqs(v___x_3960_, v_x_3943_, v_c_3944_, v_y_3945_, v_a_3946_, v_a_3947_, v_a_3948_, v_a_3949_, v_a_3950_, v_a_3951_, v_a_3952_, v_a_3953_, v_a_3954_, v_a_3955_, v_a_3956_);
lean_dec(v_x_3943_);
lean_dec(v___x_3960_);
return v___x_3961_;
}
else
{
lean_dec(v_y_3945_);
lean_dec_ref(v_c_3944_);
lean_dec(v_x_3943_);
lean_dec(v_a_3942_);
return v___x_3959_;
}
}
else
{
lean_dec(v_y_3945_);
lean_dec_ref(v_c_3944_);
lean_dec(v_x_3943_);
lean_dec(v_a_3942_);
return v___x_3958_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccsAt___boxed(lean_object* v_a_3962_, lean_object* v_x_3963_, lean_object* v_c_3964_, lean_object* v_y_3965_, lean_object* v_a_3966_, lean_object* v_a_3967_, lean_object* v_a_3968_, lean_object* v_a_3969_, lean_object* v_a_3970_, lean_object* v_a_3971_, lean_object* v_a_3972_, lean_object* v_a_3973_, lean_object* v_a_3974_, lean_object* v_a_3975_, lean_object* v_a_3976_, lean_object* v_a_3977_){
_start:
{
lean_object* v_res_3978_; 
v_res_3978_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccsAt(v_a_3962_, v_x_3963_, v_c_3964_, v_y_3965_, v_a_3966_, v_a_3967_, v_a_3968_, v_a_3969_, v_a_3970_, v_a_3971_, v_a_3972_, v_a_3973_, v_a_3974_, v_a_3975_, v_a_3976_);
lean_dec(v_a_3976_);
lean_dec_ref(v_a_3975_);
lean_dec(v_a_3974_);
lean_dec_ref(v_a_3973_);
lean_dec(v_a_3972_);
lean_dec_ref(v_a_3971_);
lean_dec(v_a_3970_);
lean_dec_ref(v_a_3969_);
lean_dec(v_a_3968_);
lean_dec(v_a_3967_);
lean_dec(v_a_3966_);
return v_res_3978_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs___lam__0(lean_object* v_a_3979_, lean_object* v_x_3980_, lean_object* v_s_3981_){
_start:
{
lean_object* v_structs_3982_; lean_object* v_typeIdOf_3983_; lean_object* v_exprToStructId_3984_; lean_object* v_exprToStructIdEntries_3985_; lean_object* v_forbiddenNatModules_3986_; lean_object* v_natStructs_3987_; lean_object* v_natTypeIdOf_3988_; lean_object* v_exprToNatStructId_3989_; lean_object* v___x_3990_; uint8_t v___x_3991_; 
v_structs_3982_ = lean_ctor_get(v_s_3981_, 0);
v_typeIdOf_3983_ = lean_ctor_get(v_s_3981_, 1);
v_exprToStructId_3984_ = lean_ctor_get(v_s_3981_, 2);
v_exprToStructIdEntries_3985_ = lean_ctor_get(v_s_3981_, 3);
v_forbiddenNatModules_3986_ = lean_ctor_get(v_s_3981_, 4);
v_natStructs_3987_ = lean_ctor_get(v_s_3981_, 5);
v_natTypeIdOf_3988_ = lean_ctor_get(v_s_3981_, 6);
v_exprToNatStructId_3989_ = lean_ctor_get(v_s_3981_, 7);
v___x_3990_ = lean_array_get_size(v_structs_3982_);
v___x_3991_ = lean_nat_dec_lt(v_a_3979_, v___x_3990_);
if (v___x_3991_ == 0)
{
return v_s_3981_;
}
else
{
lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_4054_; 
lean_inc_ref(v_exprToNatStructId_3989_);
lean_inc_ref(v_natTypeIdOf_3988_);
lean_inc_ref(v_natStructs_3987_);
lean_inc_ref(v_forbiddenNatModules_3986_);
lean_inc_ref(v_exprToStructIdEntries_3985_);
lean_inc_ref(v_exprToStructId_3984_);
lean_inc_ref(v_typeIdOf_3983_);
lean_inc_ref(v_structs_3982_);
v_isSharedCheck_4054_ = !lean_is_exclusive(v_s_3981_);
if (v_isSharedCheck_4054_ == 0)
{
lean_object* v_unused_4055_; lean_object* v_unused_4056_; lean_object* v_unused_4057_; lean_object* v_unused_4058_; lean_object* v_unused_4059_; lean_object* v_unused_4060_; lean_object* v_unused_4061_; lean_object* v_unused_4062_; 
v_unused_4055_ = lean_ctor_get(v_s_3981_, 7);
lean_dec(v_unused_4055_);
v_unused_4056_ = lean_ctor_get(v_s_3981_, 6);
lean_dec(v_unused_4056_);
v_unused_4057_ = lean_ctor_get(v_s_3981_, 5);
lean_dec(v_unused_4057_);
v_unused_4058_ = lean_ctor_get(v_s_3981_, 4);
lean_dec(v_unused_4058_);
v_unused_4059_ = lean_ctor_get(v_s_3981_, 3);
lean_dec(v_unused_4059_);
v_unused_4060_ = lean_ctor_get(v_s_3981_, 2);
lean_dec(v_unused_4060_);
v_unused_4061_ = lean_ctor_get(v_s_3981_, 1);
lean_dec(v_unused_4061_);
v_unused_4062_ = lean_ctor_get(v_s_3981_, 0);
lean_dec(v_unused_4062_);
v___x_3993_ = v_s_3981_;
v_isShared_3994_ = v_isSharedCheck_4054_;
goto v_resetjp_3992_;
}
else
{
lean_dec(v_s_3981_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_4054_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
lean_object* v_v_3995_; lean_object* v_id_3996_; lean_object* v_ringId_x3f_3997_; lean_object* v_type_3998_; lean_object* v_u_3999_; lean_object* v_intModuleInst_4000_; lean_object* v_leInst_x3f_4001_; lean_object* v_ltInst_x3f_4002_; lean_object* v_lawfulOrderLTInst_x3f_4003_; lean_object* v_isPreorderInst_x3f_4004_; lean_object* v_orderedAddInst_x3f_4005_; lean_object* v_isLinearInst_x3f_4006_; lean_object* v_noNatDivInst_x3f_4007_; lean_object* v_ringInst_x3f_4008_; lean_object* v_commRingInst_x3f_4009_; lean_object* v_orderedRingInst_x3f_4010_; lean_object* v_fieldInst_x3f_4011_; lean_object* v_charInst_x3f_4012_; lean_object* v_zero_4013_; lean_object* v_ofNatZero_4014_; lean_object* v_one_x3f_4015_; lean_object* v_leFn_x3f_4016_; lean_object* v_ltFn_x3f_4017_; lean_object* v_addFn_4018_; lean_object* v_zsmulFn_4019_; lean_object* v_nsmulFn_4020_; lean_object* v_zsmulFn_x3f_4021_; lean_object* v_nsmulFn_x3f_4022_; lean_object* v_homomulFn_x3f_4023_; lean_object* v_subFn_4024_; lean_object* v_negFn_4025_; lean_object* v_vars_4026_; lean_object* v_varMap_4027_; lean_object* v_lowers_4028_; lean_object* v_uppers_4029_; lean_object* v_diseqs_4030_; lean_object* v_assignment_4031_; uint8_t v_caseSplits_4032_; lean_object* v_conflict_x3f_4033_; lean_object* v_diseqSplits_4034_; lean_object* v_elimEqs_4035_; lean_object* v_elimStack_4036_; lean_object* v_occurs_4037_; lean_object* v_ignored_4038_; lean_object* v___x_4040_; uint8_t v_isShared_4041_; uint8_t v_isSharedCheck_4053_; 
v_v_3995_ = lean_array_fget(v_structs_3982_, v_a_3979_);
v_id_3996_ = lean_ctor_get(v_v_3995_, 0);
v_ringId_x3f_3997_ = lean_ctor_get(v_v_3995_, 1);
v_type_3998_ = lean_ctor_get(v_v_3995_, 2);
v_u_3999_ = lean_ctor_get(v_v_3995_, 3);
v_intModuleInst_4000_ = lean_ctor_get(v_v_3995_, 4);
v_leInst_x3f_4001_ = lean_ctor_get(v_v_3995_, 5);
v_ltInst_x3f_4002_ = lean_ctor_get(v_v_3995_, 6);
v_lawfulOrderLTInst_x3f_4003_ = lean_ctor_get(v_v_3995_, 7);
v_isPreorderInst_x3f_4004_ = lean_ctor_get(v_v_3995_, 8);
v_orderedAddInst_x3f_4005_ = lean_ctor_get(v_v_3995_, 9);
v_isLinearInst_x3f_4006_ = lean_ctor_get(v_v_3995_, 10);
v_noNatDivInst_x3f_4007_ = lean_ctor_get(v_v_3995_, 11);
v_ringInst_x3f_4008_ = lean_ctor_get(v_v_3995_, 12);
v_commRingInst_x3f_4009_ = lean_ctor_get(v_v_3995_, 13);
v_orderedRingInst_x3f_4010_ = lean_ctor_get(v_v_3995_, 14);
v_fieldInst_x3f_4011_ = lean_ctor_get(v_v_3995_, 15);
v_charInst_x3f_4012_ = lean_ctor_get(v_v_3995_, 16);
v_zero_4013_ = lean_ctor_get(v_v_3995_, 17);
v_ofNatZero_4014_ = lean_ctor_get(v_v_3995_, 18);
v_one_x3f_4015_ = lean_ctor_get(v_v_3995_, 19);
v_leFn_x3f_4016_ = lean_ctor_get(v_v_3995_, 20);
v_ltFn_x3f_4017_ = lean_ctor_get(v_v_3995_, 21);
v_addFn_4018_ = lean_ctor_get(v_v_3995_, 22);
v_zsmulFn_4019_ = lean_ctor_get(v_v_3995_, 23);
v_nsmulFn_4020_ = lean_ctor_get(v_v_3995_, 24);
v_zsmulFn_x3f_4021_ = lean_ctor_get(v_v_3995_, 25);
v_nsmulFn_x3f_4022_ = lean_ctor_get(v_v_3995_, 26);
v_homomulFn_x3f_4023_ = lean_ctor_get(v_v_3995_, 27);
v_subFn_4024_ = lean_ctor_get(v_v_3995_, 28);
v_negFn_4025_ = lean_ctor_get(v_v_3995_, 29);
v_vars_4026_ = lean_ctor_get(v_v_3995_, 30);
v_varMap_4027_ = lean_ctor_get(v_v_3995_, 31);
v_lowers_4028_ = lean_ctor_get(v_v_3995_, 32);
v_uppers_4029_ = lean_ctor_get(v_v_3995_, 33);
v_diseqs_4030_ = lean_ctor_get(v_v_3995_, 34);
v_assignment_4031_ = lean_ctor_get(v_v_3995_, 35);
v_caseSplits_4032_ = lean_ctor_get_uint8(v_v_3995_, sizeof(void*)*42);
v_conflict_x3f_4033_ = lean_ctor_get(v_v_3995_, 36);
v_diseqSplits_4034_ = lean_ctor_get(v_v_3995_, 37);
v_elimEqs_4035_ = lean_ctor_get(v_v_3995_, 38);
v_elimStack_4036_ = lean_ctor_get(v_v_3995_, 39);
v_occurs_4037_ = lean_ctor_get(v_v_3995_, 40);
v_ignored_4038_ = lean_ctor_get(v_v_3995_, 41);
v_isSharedCheck_4053_ = !lean_is_exclusive(v_v_3995_);
if (v_isSharedCheck_4053_ == 0)
{
v___x_4040_ = v_v_3995_;
v_isShared_4041_ = v_isSharedCheck_4053_;
goto v_resetjp_4039_;
}
else
{
lean_inc(v_ignored_4038_);
lean_inc(v_occurs_4037_);
lean_inc(v_elimStack_4036_);
lean_inc(v_elimEqs_4035_);
lean_inc(v_diseqSplits_4034_);
lean_inc(v_conflict_x3f_4033_);
lean_inc(v_assignment_4031_);
lean_inc(v_diseqs_4030_);
lean_inc(v_uppers_4029_);
lean_inc(v_lowers_4028_);
lean_inc(v_varMap_4027_);
lean_inc(v_vars_4026_);
lean_inc(v_negFn_4025_);
lean_inc(v_subFn_4024_);
lean_inc(v_homomulFn_x3f_4023_);
lean_inc(v_nsmulFn_x3f_4022_);
lean_inc(v_zsmulFn_x3f_4021_);
lean_inc(v_nsmulFn_4020_);
lean_inc(v_zsmulFn_4019_);
lean_inc(v_addFn_4018_);
lean_inc(v_ltFn_x3f_4017_);
lean_inc(v_leFn_x3f_4016_);
lean_inc(v_one_x3f_4015_);
lean_inc(v_ofNatZero_4014_);
lean_inc(v_zero_4013_);
lean_inc(v_charInst_x3f_4012_);
lean_inc(v_fieldInst_x3f_4011_);
lean_inc(v_orderedRingInst_x3f_4010_);
lean_inc(v_commRingInst_x3f_4009_);
lean_inc(v_ringInst_x3f_4008_);
lean_inc(v_noNatDivInst_x3f_4007_);
lean_inc(v_isLinearInst_x3f_4006_);
lean_inc(v_orderedAddInst_x3f_4005_);
lean_inc(v_isPreorderInst_x3f_4004_);
lean_inc(v_lawfulOrderLTInst_x3f_4003_);
lean_inc(v_ltInst_x3f_4002_);
lean_inc(v_leInst_x3f_4001_);
lean_inc(v_intModuleInst_4000_);
lean_inc(v_u_3999_);
lean_inc(v_type_3998_);
lean_inc(v_ringId_x3f_3997_);
lean_inc(v_id_3996_);
lean_dec(v_v_3995_);
v___x_4040_ = lean_box(0);
v_isShared_4041_ = v_isSharedCheck_4053_;
goto v_resetjp_4039_;
}
v_resetjp_4039_:
{
lean_object* v___x_4042_; lean_object* v_xs_x27_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4047_; 
v___x_4042_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0);
v_xs_x27_4043_ = lean_array_fset(v_structs_3982_, v_a_3979_, v___x_4042_);
v___x_4044_ = lean_box(1);
v___x_4045_ = l_Lean_PersistentArray_set___redArg(v_occurs_4037_, v_x_3980_, v___x_4044_);
if (v_isShared_4041_ == 0)
{
lean_ctor_set(v___x_4040_, 40, v___x_4045_);
v___x_4047_ = v___x_4040_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4052_; 
v_reuseFailAlloc_4052_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_4052_, 0, v_id_3996_);
lean_ctor_set(v_reuseFailAlloc_4052_, 1, v_ringId_x3f_3997_);
lean_ctor_set(v_reuseFailAlloc_4052_, 2, v_type_3998_);
lean_ctor_set(v_reuseFailAlloc_4052_, 3, v_u_3999_);
lean_ctor_set(v_reuseFailAlloc_4052_, 4, v_intModuleInst_4000_);
lean_ctor_set(v_reuseFailAlloc_4052_, 5, v_leInst_x3f_4001_);
lean_ctor_set(v_reuseFailAlloc_4052_, 6, v_ltInst_x3f_4002_);
lean_ctor_set(v_reuseFailAlloc_4052_, 7, v_lawfulOrderLTInst_x3f_4003_);
lean_ctor_set(v_reuseFailAlloc_4052_, 8, v_isPreorderInst_x3f_4004_);
lean_ctor_set(v_reuseFailAlloc_4052_, 9, v_orderedAddInst_x3f_4005_);
lean_ctor_set(v_reuseFailAlloc_4052_, 10, v_isLinearInst_x3f_4006_);
lean_ctor_set(v_reuseFailAlloc_4052_, 11, v_noNatDivInst_x3f_4007_);
lean_ctor_set(v_reuseFailAlloc_4052_, 12, v_ringInst_x3f_4008_);
lean_ctor_set(v_reuseFailAlloc_4052_, 13, v_commRingInst_x3f_4009_);
lean_ctor_set(v_reuseFailAlloc_4052_, 14, v_orderedRingInst_x3f_4010_);
lean_ctor_set(v_reuseFailAlloc_4052_, 15, v_fieldInst_x3f_4011_);
lean_ctor_set(v_reuseFailAlloc_4052_, 16, v_charInst_x3f_4012_);
lean_ctor_set(v_reuseFailAlloc_4052_, 17, v_zero_4013_);
lean_ctor_set(v_reuseFailAlloc_4052_, 18, v_ofNatZero_4014_);
lean_ctor_set(v_reuseFailAlloc_4052_, 19, v_one_x3f_4015_);
lean_ctor_set(v_reuseFailAlloc_4052_, 20, v_leFn_x3f_4016_);
lean_ctor_set(v_reuseFailAlloc_4052_, 21, v_ltFn_x3f_4017_);
lean_ctor_set(v_reuseFailAlloc_4052_, 22, v_addFn_4018_);
lean_ctor_set(v_reuseFailAlloc_4052_, 23, v_zsmulFn_4019_);
lean_ctor_set(v_reuseFailAlloc_4052_, 24, v_nsmulFn_4020_);
lean_ctor_set(v_reuseFailAlloc_4052_, 25, v_zsmulFn_x3f_4021_);
lean_ctor_set(v_reuseFailAlloc_4052_, 26, v_nsmulFn_x3f_4022_);
lean_ctor_set(v_reuseFailAlloc_4052_, 27, v_homomulFn_x3f_4023_);
lean_ctor_set(v_reuseFailAlloc_4052_, 28, v_subFn_4024_);
lean_ctor_set(v_reuseFailAlloc_4052_, 29, v_negFn_4025_);
lean_ctor_set(v_reuseFailAlloc_4052_, 30, v_vars_4026_);
lean_ctor_set(v_reuseFailAlloc_4052_, 31, v_varMap_4027_);
lean_ctor_set(v_reuseFailAlloc_4052_, 32, v_lowers_4028_);
lean_ctor_set(v_reuseFailAlloc_4052_, 33, v_uppers_4029_);
lean_ctor_set(v_reuseFailAlloc_4052_, 34, v_diseqs_4030_);
lean_ctor_set(v_reuseFailAlloc_4052_, 35, v_assignment_4031_);
lean_ctor_set(v_reuseFailAlloc_4052_, 36, v_conflict_x3f_4033_);
lean_ctor_set(v_reuseFailAlloc_4052_, 37, v_diseqSplits_4034_);
lean_ctor_set(v_reuseFailAlloc_4052_, 38, v_elimEqs_4035_);
lean_ctor_set(v_reuseFailAlloc_4052_, 39, v_elimStack_4036_);
lean_ctor_set(v_reuseFailAlloc_4052_, 40, v___x_4045_);
lean_ctor_set(v_reuseFailAlloc_4052_, 41, v_ignored_4038_);
lean_ctor_set_uint8(v_reuseFailAlloc_4052_, sizeof(void*)*42, v_caseSplits_4032_);
v___x_4047_ = v_reuseFailAlloc_4052_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
lean_object* v___x_4048_; lean_object* v___x_4050_; 
v___x_4048_ = lean_array_fset(v_xs_x27_4043_, v_a_3979_, v___x_4047_);
if (v_isShared_3994_ == 0)
{
lean_ctor_set(v___x_3993_, 0, v___x_4048_);
v___x_4050_ = v___x_3993_;
goto v_reusejp_4049_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v___x_4048_);
lean_ctor_set(v_reuseFailAlloc_4051_, 1, v_typeIdOf_3983_);
lean_ctor_set(v_reuseFailAlloc_4051_, 2, v_exprToStructId_3984_);
lean_ctor_set(v_reuseFailAlloc_4051_, 3, v_exprToStructIdEntries_3985_);
lean_ctor_set(v_reuseFailAlloc_4051_, 4, v_forbiddenNatModules_3986_);
lean_ctor_set(v_reuseFailAlloc_4051_, 5, v_natStructs_3987_);
lean_ctor_set(v_reuseFailAlloc_4051_, 6, v_natTypeIdOf_3988_);
lean_ctor_set(v_reuseFailAlloc_4051_, 7, v_exprToNatStructId_3989_);
v___x_4050_ = v_reuseFailAlloc_4051_;
goto v_reusejp_4049_;
}
v_reusejp_4049_:
{
return v___x_4050_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs___lam__0___boxed(lean_object* v_a_4063_, lean_object* v_x_4064_, lean_object* v_s_4065_){
_start:
{
lean_object* v_res_4066_; 
v_res_4066_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs___lam__0(v_a_4063_, v_x_4064_, v_s_4065_);
lean_dec(v_x_4064_);
lean_dec(v_a_4063_);
return v_res_4066_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs_spec__0(lean_object* v_a_4067_, lean_object* v_x_4068_, lean_object* v_c_4069_, lean_object* v_init_4070_, lean_object* v_x_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_){
_start:
{
if (lean_obj_tag(v_x_4071_) == 0)
{
lean_object* v_k_4084_; lean_object* v_l_4085_; lean_object* v_r_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; 
v_k_4084_ = lean_ctor_get(v_x_4071_, 1);
lean_inc(v_k_4084_);
v_l_4085_ = lean_ctor_get(v_x_4071_, 3);
lean_inc(v_l_4085_);
v_r_4086_ = lean_ctor_get(v_x_4071_, 4);
lean_inc(v_r_4086_);
lean_dec_ref_known(v_x_4071_, 5);
v___x_4087_ = lean_box(0);
lean_inc_ref(v_c_4069_);
lean_inc(v_x_4068_);
lean_inc(v_a_4067_);
v___x_4088_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs_spec__0(v_a_4067_, v_x_4068_, v_c_4069_, v_init_4070_, v_l_4085_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_, v___y_4078_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
if (lean_obj_tag(v___x_4088_) == 0)
{
lean_object* v___x_4089_; 
lean_dec_ref_known(v___x_4088_, 1);
lean_inc_ref(v_c_4069_);
lean_inc(v_x_4068_);
lean_inc(v_a_4067_);
v___x_4089_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccsAt(v_a_4067_, v_x_4068_, v_c_4069_, v_k_4084_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_, v___y_4078_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
if (lean_obj_tag(v___x_4089_) == 0)
{
lean_dec_ref_known(v___x_4089_, 1);
v_init_4070_ = v___x_4087_;
v_x_4071_ = v_r_4086_;
goto _start;
}
else
{
lean_object* v_a_4091_; lean_object* v___x_4093_; uint8_t v_isShared_4094_; uint8_t v_isSharedCheck_4098_; 
lean_dec(v_r_4086_);
lean_dec_ref(v_c_4069_);
lean_dec(v_x_4068_);
lean_dec(v_a_4067_);
v_a_4091_ = lean_ctor_get(v___x_4089_, 0);
v_isSharedCheck_4098_ = !lean_is_exclusive(v___x_4089_);
if (v_isSharedCheck_4098_ == 0)
{
v___x_4093_ = v___x_4089_;
v_isShared_4094_ = v_isSharedCheck_4098_;
goto v_resetjp_4092_;
}
else
{
lean_inc(v_a_4091_);
lean_dec(v___x_4089_);
v___x_4093_ = lean_box(0);
v_isShared_4094_ = v_isSharedCheck_4098_;
goto v_resetjp_4092_;
}
v_resetjp_4092_:
{
lean_object* v___x_4096_; 
if (v_isShared_4094_ == 0)
{
v___x_4096_ = v___x_4093_;
goto v_reusejp_4095_;
}
else
{
lean_object* v_reuseFailAlloc_4097_; 
v_reuseFailAlloc_4097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4097_, 0, v_a_4091_);
v___x_4096_ = v_reuseFailAlloc_4097_;
goto v_reusejp_4095_;
}
v_reusejp_4095_:
{
return v___x_4096_;
}
}
}
}
else
{
lean_dec(v_r_4086_);
lean_dec(v_k_4084_);
lean_dec_ref(v_c_4069_);
lean_dec(v_x_4068_);
lean_dec(v_a_4067_);
return v___x_4088_;
}
}
else
{
lean_object* v___x_4099_; lean_object* v___x_4100_; 
lean_dec_ref(v_c_4069_);
lean_dec(v_x_4068_);
lean_dec(v_a_4067_);
v___x_4099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4099_, 0, v_init_4070_);
v___x_4100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4100_, 0, v___x_4099_);
return v___x_4100_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs_spec__0___boxed(lean_object** _args){
lean_object* v_a_4101_ = _args[0];
lean_object* v_x_4102_ = _args[1];
lean_object* v_c_4103_ = _args[2];
lean_object* v_init_4104_ = _args[3];
lean_object* v_x_4105_ = _args[4];
lean_object* v___y_4106_ = _args[5];
lean_object* v___y_4107_ = _args[6];
lean_object* v___y_4108_ = _args[7];
lean_object* v___y_4109_ = _args[8];
lean_object* v___y_4110_ = _args[9];
lean_object* v___y_4111_ = _args[10];
lean_object* v___y_4112_ = _args[11];
lean_object* v___y_4113_ = _args[12];
lean_object* v___y_4114_ = _args[13];
lean_object* v___y_4115_ = _args[14];
lean_object* v___y_4116_ = _args[15];
lean_object* v___y_4117_ = _args[16];
_start:
{
lean_object* v_res_4118_; 
v_res_4118_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs_spec__0(v_a_4101_, v_x_4102_, v_c_4103_, v_init_4104_, v_x_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_);
lean_dec(v___y_4116_);
lean_dec_ref(v___y_4115_);
lean_dec(v___y_4114_);
lean_dec_ref(v___y_4113_);
lean_dec(v___y_4112_);
lean_dec_ref(v___y_4111_);
lean_dec(v___y_4110_);
lean_dec_ref(v___y_4109_);
lean_dec(v___y_4108_);
lean_dec(v___y_4107_);
lean_dec(v___y_4106_);
return v_res_4118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs(lean_object* v_a_4119_, lean_object* v_x_4120_, lean_object* v_c_4121_, lean_object* v_a_4122_, lean_object* v_a_4123_, lean_object* v_a_4124_, lean_object* v_a_4125_, lean_object* v_a_4126_, lean_object* v_a_4127_, lean_object* v_a_4128_, lean_object* v_a_4129_, lean_object* v_a_4130_, lean_object* v_a_4131_, lean_object* v_a_4132_){
_start:
{
lean_object* v___f_4134_; lean_object* v___x_4135_; 
lean_inc(v_x_4120_);
lean_inc(v_a_4122_);
v___f_4134_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4134_, 0, v_a_4122_);
lean_closure_set(v___f_4134_, 1, v_x_4120_);
v___x_4135_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_4122_, v_a_4123_, v_a_4124_, v_a_4125_, v_a_4126_, v_a_4127_, v_a_4128_, v_a_4129_, v_a_4130_, v_a_4131_, v_a_4132_);
if (lean_obj_tag(v___x_4135_) == 0)
{
lean_object* v_a_4136_; lean_object* v___y_4138_; lean_object* v_occurs_4160_; lean_object* v_size_4161_; lean_object* v___x_4162_; uint8_t v___x_4163_; 
v_a_4136_ = lean_ctor_get(v___x_4135_, 0);
lean_inc(v_a_4136_);
lean_dec_ref_known(v___x_4135_, 1);
v_occurs_4160_ = lean_ctor_get(v_a_4136_, 40);
lean_inc_ref(v_occurs_4160_);
lean_dec(v_a_4136_);
v_size_4161_ = lean_ctor_get(v_occurs_4160_, 2);
v___x_4162_ = lean_box(1);
v___x_4163_ = lean_nat_dec_lt(v_x_4120_, v_size_4161_);
if (v___x_4163_ == 0)
{
lean_object* v___x_4164_; 
lean_dec_ref(v_occurs_4160_);
v___x_4164_ = l_outOfBounds___redArg(v___x_4162_);
v___y_4138_ = v___x_4164_;
goto v___jp_4137_;
}
else
{
lean_object* v___x_4165_; 
v___x_4165_ = l_Lean_PersistentArray_get_x21___redArg(v___x_4162_, v_occurs_4160_, v_x_4120_);
lean_dec_ref(v_occurs_4160_);
v___y_4138_ = v___x_4165_;
goto v___jp_4137_;
}
v___jp_4137_:
{
lean_object* v___x_4139_; lean_object* v___x_4140_; 
v___x_4139_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_4140_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_4139_, v___f_4134_, v_a_4123_);
if (lean_obj_tag(v___x_4140_) == 0)
{
lean_object* v___x_4141_; 
lean_dec_ref_known(v___x_4140_, 1);
lean_inc_ref(v_c_4121_);
lean_inc_n(v_x_4120_, 2);
lean_inc(v_a_4119_);
v___x_4141_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccsAt(v_a_4119_, v_x_4120_, v_c_4121_, v_x_4120_, v_a_4122_, v_a_4123_, v_a_4124_, v_a_4125_, v_a_4126_, v_a_4127_, v_a_4128_, v_a_4129_, v_a_4130_, v_a_4131_, v_a_4132_);
if (lean_obj_tag(v___x_4141_) == 0)
{
lean_object* v___x_4142_; lean_object* v___x_4143_; 
lean_dec_ref_known(v___x_4141_, 1);
v___x_4142_ = lean_box(0);
v___x_4143_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs_spec__0(v_a_4119_, v_x_4120_, v_c_4121_, v___x_4142_, v___y_4138_, v_a_4122_, v_a_4123_, v_a_4124_, v_a_4125_, v_a_4126_, v_a_4127_, v_a_4128_, v_a_4129_, v_a_4130_, v_a_4131_, v_a_4132_);
if (lean_obj_tag(v___x_4143_) == 0)
{
lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4150_; 
v_isSharedCheck_4150_ = !lean_is_exclusive(v___x_4143_);
if (v_isSharedCheck_4150_ == 0)
{
lean_object* v_unused_4151_; 
v_unused_4151_ = lean_ctor_get(v___x_4143_, 0);
lean_dec(v_unused_4151_);
v___x_4145_ = v___x_4143_;
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
else
{
lean_dec(v___x_4143_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
lean_object* v___x_4148_; 
if (v_isShared_4146_ == 0)
{
lean_ctor_set(v___x_4145_, 0, v___x_4142_);
v___x_4148_ = v___x_4145_;
goto v_reusejp_4147_;
}
else
{
lean_object* v_reuseFailAlloc_4149_; 
v_reuseFailAlloc_4149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4149_, 0, v___x_4142_);
v___x_4148_ = v_reuseFailAlloc_4149_;
goto v_reusejp_4147_;
}
v_reusejp_4147_:
{
return v___x_4148_;
}
}
}
else
{
lean_object* v_a_4152_; lean_object* v___x_4154_; uint8_t v_isShared_4155_; uint8_t v_isSharedCheck_4159_; 
v_a_4152_ = lean_ctor_get(v___x_4143_, 0);
v_isSharedCheck_4159_ = !lean_is_exclusive(v___x_4143_);
if (v_isSharedCheck_4159_ == 0)
{
v___x_4154_ = v___x_4143_;
v_isShared_4155_ = v_isSharedCheck_4159_;
goto v_resetjp_4153_;
}
else
{
lean_inc(v_a_4152_);
lean_dec(v___x_4143_);
v___x_4154_ = lean_box(0);
v_isShared_4155_ = v_isSharedCheck_4159_;
goto v_resetjp_4153_;
}
v_resetjp_4153_:
{
lean_object* v___x_4157_; 
if (v_isShared_4155_ == 0)
{
v___x_4157_ = v___x_4154_;
goto v_reusejp_4156_;
}
else
{
lean_object* v_reuseFailAlloc_4158_; 
v_reuseFailAlloc_4158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4158_, 0, v_a_4152_);
v___x_4157_ = v_reuseFailAlloc_4158_;
goto v_reusejp_4156_;
}
v_reusejp_4156_:
{
return v___x_4157_;
}
}
}
}
else
{
lean_dec(v___y_4138_);
lean_dec_ref(v_c_4121_);
lean_dec(v_x_4120_);
lean_dec(v_a_4119_);
return v___x_4141_;
}
}
else
{
lean_dec(v___y_4138_);
lean_dec_ref(v_c_4121_);
lean_dec(v_x_4120_);
lean_dec(v_a_4119_);
return v___x_4140_;
}
}
}
else
{
lean_object* v_a_4166_; lean_object* v___x_4168_; uint8_t v_isShared_4169_; uint8_t v_isSharedCheck_4173_; 
lean_dec_ref(v___f_4134_);
lean_dec_ref(v_c_4121_);
lean_dec(v_x_4120_);
lean_dec(v_a_4119_);
v_a_4166_ = lean_ctor_get(v___x_4135_, 0);
v_isSharedCheck_4173_ = !lean_is_exclusive(v___x_4135_);
if (v_isSharedCheck_4173_ == 0)
{
v___x_4168_ = v___x_4135_;
v_isShared_4169_ = v_isSharedCheck_4173_;
goto v_resetjp_4167_;
}
else
{
lean_inc(v_a_4166_);
lean_dec(v___x_4135_);
v___x_4168_ = lean_box(0);
v_isShared_4169_ = v_isSharedCheck_4173_;
goto v_resetjp_4167_;
}
v_resetjp_4167_:
{
lean_object* v___x_4171_; 
if (v_isShared_4169_ == 0)
{
v___x_4171_ = v___x_4168_;
goto v_reusejp_4170_;
}
else
{
lean_object* v_reuseFailAlloc_4172_; 
v_reuseFailAlloc_4172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4172_, 0, v_a_4166_);
v___x_4171_ = v_reuseFailAlloc_4172_;
goto v_reusejp_4170_;
}
v_reusejp_4170_:
{
return v___x_4171_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs___boxed(lean_object* v_a_4174_, lean_object* v_x_4175_, lean_object* v_c_4176_, lean_object* v_a_4177_, lean_object* v_a_4178_, lean_object* v_a_4179_, lean_object* v_a_4180_, lean_object* v_a_4181_, lean_object* v_a_4182_, lean_object* v_a_4183_, lean_object* v_a_4184_, lean_object* v_a_4185_, lean_object* v_a_4186_, lean_object* v_a_4187_, lean_object* v_a_4188_){
_start:
{
lean_object* v_res_4189_; 
v_res_4189_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs(v_a_4174_, v_x_4175_, v_c_4176_, v_a_4177_, v_a_4178_, v_a_4179_, v_a_4180_, v_a_4181_, v_a_4182_, v_a_4183_, v_a_4184_, v_a_4185_, v_a_4186_, v_a_4187_);
lean_dec(v_a_4187_);
lean_dec_ref(v_a_4186_);
lean_dec(v_a_4185_);
lean_dec_ref(v_a_4184_);
lean_dec(v_a_4183_);
lean_dec_ref(v_a_4182_);
lean_dec(v_a_4181_);
lean_dec_ref(v_a_4180_);
lean_dec(v_a_4179_);
lean_dec(v_a_4178_);
lean_dec(v_a_4177_);
return v_res_4189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_isImpliedEq(lean_object* v_c_4190_, lean_object* v_a_4191_, lean_object* v_a_4192_, lean_object* v_a_4193_, lean_object* v_a_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_, lean_object* v_a_4197_, lean_object* v_a_4198_, lean_object* v_a_4199_, lean_object* v_a_4200_, lean_object* v_a_4201_){
_start:
{
lean_object* v_p_4207_; 
v_p_4207_ = lean_ctor_get(v_c_4190_, 0);
if (lean_obj_tag(v_p_4207_) == 1)
{
lean_object* v_k_4208_; lean_object* v_v_4209_; lean_object* v_p_4210_; lean_object* v_y_4212_; lean_object* v___y_4213_; lean_object* v___y_4214_; lean_object* v___y_4215_; lean_object* v___y_4216_; lean_object* v___y_4217_; lean_object* v___y_4218_; lean_object* v___y_4219_; lean_object* v___y_4220_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___y_4223_; lean_object* v___x_4261_; lean_object* v___x_4262_; uint8_t v___x_4263_; 
v_k_4208_ = lean_ctor_get(v_p_4207_, 0);
v_v_4209_ = lean_ctor_get(v_p_4207_, 1);
v_p_4210_ = lean_ctor_get(v_p_4207_, 2);
v___x_4261_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__0_spec__0___closed__0);
v___x_4262_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0);
v___x_4263_ = lean_int_dec_eq(v_k_4208_, v___x_4262_);
if (v___x_4263_ == 0)
{
uint8_t v___x_4264_; 
v___x_4264_ = lean_int_dec_eq(v_k_4208_, v___x_4261_);
if (v___x_4264_ == 0)
{
goto v___jp_4203_;
}
else
{
if (lean_obj_tag(v_p_4210_) == 1)
{
lean_object* v_k_4265_; lean_object* v_v_4266_; lean_object* v_p_4267_; uint8_t v___x_4268_; 
v_k_4265_ = lean_ctor_get(v_p_4210_, 0);
v_v_4266_ = lean_ctor_get(v_p_4210_, 1);
v_p_4267_ = lean_ctor_get(v_p_4210_, 2);
v___x_4268_ = lean_int_dec_eq(v_k_4265_, v___x_4262_);
if (v___x_4268_ == 0)
{
goto v___jp_4203_;
}
else
{
if (lean_obj_tag(v_p_4267_) == 0)
{
v_y_4212_ = v_v_4266_;
v___y_4213_ = v_a_4191_;
v___y_4214_ = v_a_4192_;
v___y_4215_ = v_a_4193_;
v___y_4216_ = v_a_4194_;
v___y_4217_ = v_a_4195_;
v___y_4218_ = v_a_4196_;
v___y_4219_ = v_a_4197_;
v___y_4220_ = v_a_4198_;
v___y_4221_ = v_a_4199_;
v___y_4222_ = v_a_4200_;
v___y_4223_ = v_a_4201_;
goto v___jp_4211_;
}
else
{
goto v___jp_4203_;
}
}
}
else
{
goto v___jp_4203_;
}
}
}
else
{
if (lean_obj_tag(v_p_4210_) == 1)
{
lean_object* v_k_4269_; lean_object* v_v_4270_; lean_object* v_p_4271_; uint8_t v___x_4272_; 
v_k_4269_ = lean_ctor_get(v_p_4210_, 0);
v_v_4270_ = lean_ctor_get(v_p_4210_, 1);
v_p_4271_ = lean_ctor_get(v_p_4210_, 2);
v___x_4272_ = lean_int_dec_eq(v_k_4269_, v___x_4261_);
if (v___x_4272_ == 0)
{
goto v___jp_4203_;
}
else
{
if (lean_obj_tag(v_p_4271_) == 0)
{
v_y_4212_ = v_v_4270_;
v___y_4213_ = v_a_4191_;
v___y_4214_ = v_a_4192_;
v___y_4215_ = v_a_4193_;
v___y_4216_ = v_a_4194_;
v___y_4217_ = v_a_4195_;
v___y_4218_ = v_a_4196_;
v___y_4219_ = v_a_4197_;
v___y_4220_ = v_a_4198_;
v___y_4221_ = v_a_4199_;
v___y_4222_ = v_a_4200_;
v___y_4223_ = v_a_4201_;
goto v___jp_4211_;
}
else
{
goto v___jp_4203_;
}
}
}
else
{
goto v___jp_4203_;
}
}
v___jp_4211_:
{
lean_object* v___x_4224_; 
v___x_4224_ = l_Lean_Meta_Grind_Arith_Linear_getVar(v_v_4209_, v___y_4213_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_, v___y_4218_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_);
if (lean_obj_tag(v___x_4224_) == 0)
{
lean_object* v_a_4225_; lean_object* v___x_4226_; 
v_a_4225_ = lean_ctor_get(v___x_4224_, 0);
lean_inc(v_a_4225_);
lean_dec_ref_known(v___x_4224_, 1);
v___x_4226_ = l_Lean_Meta_Grind_Arith_Linear_getVar(v_y_4212_, v___y_4213_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_, v___y_4218_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_);
if (lean_obj_tag(v___x_4226_) == 0)
{
lean_object* v_a_4227_; lean_object* v___x_4228_; 
v_a_4227_ = lean_ctor_get(v___x_4226_, 0);
lean_inc(v_a_4227_);
lean_dec_ref_known(v___x_4226_, 1);
v___x_4228_ = l_Lean_Meta_Grind_isEqv___redArg(v_a_4225_, v_a_4227_, v___y_4214_);
lean_dec(v_a_4227_);
lean_dec(v_a_4225_);
if (lean_obj_tag(v___x_4228_) == 0)
{
lean_object* v_a_4229_; lean_object* v___x_4231_; uint8_t v_isShared_4232_; uint8_t v_isSharedCheck_4244_; 
v_a_4229_ = lean_ctor_get(v___x_4228_, 0);
v_isSharedCheck_4244_ = !lean_is_exclusive(v___x_4228_);
if (v_isSharedCheck_4244_ == 0)
{
v___x_4231_ = v___x_4228_;
v_isShared_4232_ = v_isSharedCheck_4244_;
goto v_resetjp_4230_;
}
else
{
lean_inc(v_a_4229_);
lean_dec(v___x_4228_);
v___x_4231_ = lean_box(0);
v_isShared_4232_ = v_isSharedCheck_4244_;
goto v_resetjp_4230_;
}
v_resetjp_4230_:
{
uint8_t v___x_4233_; 
v___x_4233_ = lean_unbox(v_a_4229_);
lean_dec(v_a_4229_);
if (v___x_4233_ == 0)
{
uint8_t v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4237_; 
v___x_4234_ = 1;
v___x_4235_ = lean_box(v___x_4234_);
if (v_isShared_4232_ == 0)
{
lean_ctor_set(v___x_4231_, 0, v___x_4235_);
v___x_4237_ = v___x_4231_;
goto v_reusejp_4236_;
}
else
{
lean_object* v_reuseFailAlloc_4238_; 
v_reuseFailAlloc_4238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4238_, 0, v___x_4235_);
v___x_4237_ = v_reuseFailAlloc_4238_;
goto v_reusejp_4236_;
}
v_reusejp_4236_:
{
return v___x_4237_;
}
}
else
{
uint8_t v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4242_; 
v___x_4239_ = 0;
v___x_4240_ = lean_box(v___x_4239_);
if (v_isShared_4232_ == 0)
{
lean_ctor_set(v___x_4231_, 0, v___x_4240_);
v___x_4242_ = v___x_4231_;
goto v_reusejp_4241_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v___x_4240_);
v___x_4242_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4241_;
}
v_reusejp_4241_:
{
return v___x_4242_;
}
}
}
}
else
{
return v___x_4228_;
}
}
else
{
lean_object* v_a_4245_; lean_object* v___x_4247_; uint8_t v_isShared_4248_; uint8_t v_isSharedCheck_4252_; 
lean_dec(v_a_4225_);
v_a_4245_ = lean_ctor_get(v___x_4226_, 0);
v_isSharedCheck_4252_ = !lean_is_exclusive(v___x_4226_);
if (v_isSharedCheck_4252_ == 0)
{
v___x_4247_ = v___x_4226_;
v_isShared_4248_ = v_isSharedCheck_4252_;
goto v_resetjp_4246_;
}
else
{
lean_inc(v_a_4245_);
lean_dec(v___x_4226_);
v___x_4247_ = lean_box(0);
v_isShared_4248_ = v_isSharedCheck_4252_;
goto v_resetjp_4246_;
}
v_resetjp_4246_:
{
lean_object* v___x_4250_; 
if (v_isShared_4248_ == 0)
{
v___x_4250_ = v___x_4247_;
goto v_reusejp_4249_;
}
else
{
lean_object* v_reuseFailAlloc_4251_; 
v_reuseFailAlloc_4251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4251_, 0, v_a_4245_);
v___x_4250_ = v_reuseFailAlloc_4251_;
goto v_reusejp_4249_;
}
v_reusejp_4249_:
{
return v___x_4250_;
}
}
}
}
else
{
lean_object* v_a_4253_; lean_object* v___x_4255_; uint8_t v_isShared_4256_; uint8_t v_isSharedCheck_4260_; 
v_a_4253_ = lean_ctor_get(v___x_4224_, 0);
v_isSharedCheck_4260_ = !lean_is_exclusive(v___x_4224_);
if (v_isSharedCheck_4260_ == 0)
{
v___x_4255_ = v___x_4224_;
v_isShared_4256_ = v_isSharedCheck_4260_;
goto v_resetjp_4254_;
}
else
{
lean_inc(v_a_4253_);
lean_dec(v___x_4224_);
v___x_4255_ = lean_box(0);
v_isShared_4256_ = v_isSharedCheck_4260_;
goto v_resetjp_4254_;
}
v_resetjp_4254_:
{
lean_object* v___x_4258_; 
if (v_isShared_4256_ == 0)
{
v___x_4258_ = v___x_4255_;
goto v_reusejp_4257_;
}
else
{
lean_object* v_reuseFailAlloc_4259_; 
v_reuseFailAlloc_4259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4259_, 0, v_a_4253_);
v___x_4258_ = v_reuseFailAlloc_4259_;
goto v_reusejp_4257_;
}
v_reusejp_4257_:
{
return v___x_4258_;
}
}
}
}
}
else
{
goto v___jp_4203_;
}
v___jp_4203_:
{
uint8_t v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; 
v___x_4204_ = 0;
v___x_4205_ = lean_box(v___x_4204_);
v___x_4206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4206_, 0, v___x_4205_);
return v___x_4206_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_isImpliedEq___boxed(lean_object* v_c_4273_, lean_object* v_a_4274_, lean_object* v_a_4275_, lean_object* v_a_4276_, lean_object* v_a_4277_, lean_object* v_a_4278_, lean_object* v_a_4279_, lean_object* v_a_4280_, lean_object* v_a_4281_, lean_object* v_a_4282_, lean_object* v_a_4283_, lean_object* v_a_4284_, lean_object* v_a_4285_){
_start:
{
lean_object* v_res_4286_; 
v_res_4286_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_isImpliedEq(v_c_4273_, v_a_4274_, v_a_4275_, v_a_4276_, v_a_4277_, v_a_4278_, v_a_4279_, v_a_4280_, v_a_4281_, v_a_4282_, v_a_4283_, v_a_4284_);
lean_dec(v_a_4284_);
lean_dec_ref(v_a_4283_);
lean_dec(v_a_4282_);
lean_dec_ref(v_a_4281_);
lean_dec(v_a_4280_);
lean_dec_ref(v_a_4279_);
lean_dec(v_a_4278_);
lean_dec_ref(v_a_4277_);
lean_dec(v_a_4276_);
lean_dec(v_a_4275_);
lean_dec(v_a_4274_);
lean_dec_ref(v_c_4273_);
return v_res_4286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_ensureLeadCoeffPos___redArg(lean_object* v_c_4287_){
_start:
{
lean_object* v_p_4289_; 
v_p_4289_ = lean_ctor_get(v_c_4287_, 0);
if (lean_obj_tag(v_p_4289_) == 1)
{
lean_object* v_k_4290_; lean_object* v___x_4291_; uint8_t v___x_4292_; 
v_k_4290_ = lean_ctor_get(v_p_4289_, 0);
v___x_4291_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_applyEq_x3f___closed__0);
v___x_4292_ = lean_int_dec_lt(v_k_4290_, v___x_4291_);
if (v___x_4292_ == 0)
{
lean_object* v___x_4293_; 
v___x_4293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4293_, 0, v_c_4287_);
return v___x_4293_;
}
else
{
lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; 
v___x_4294_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0);
lean_inc_ref(v_p_4289_);
v___x_4295_ = l_Lean_Grind_Linarith_Poly_mul(v_p_4289_, v___x_4294_);
v___x_4296_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4296_, 0, v_c_4287_);
v___x_4297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4295_);
lean_ctor_set(v___x_4297_, 1, v___x_4296_);
v___x_4298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4298_, 0, v___x_4297_);
return v___x_4298_;
}
}
else
{
lean_object* v___x_4299_; 
v___x_4299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4299_, 0, v_c_4287_);
return v___x_4299_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_ensureLeadCoeffPos___redArg___boxed(lean_object* v_c_4300_, lean_object* v_a_4301_){
_start:
{
lean_object* v_res_4302_; 
v_res_4302_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_ensureLeadCoeffPos___redArg(v_c_4300_);
return v_res_4302_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_ensureLeadCoeffPos(lean_object* v_c_4303_, lean_object* v_a_4304_, lean_object* v_a_4305_, lean_object* v_a_4306_, lean_object* v_a_4307_, lean_object* v_a_4308_, lean_object* v_a_4309_, lean_object* v_a_4310_, lean_object* v_a_4311_, lean_object* v_a_4312_, lean_object* v_a_4313_, lean_object* v_a_4314_){
_start:
{
lean_object* v___x_4316_; 
v___x_4316_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_ensureLeadCoeffPos___redArg(v_c_4303_);
return v___x_4316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_ensureLeadCoeffPos___boxed(lean_object* v_c_4317_, lean_object* v_a_4318_, lean_object* v_a_4319_, lean_object* v_a_4320_, lean_object* v_a_4321_, lean_object* v_a_4322_, lean_object* v_a_4323_, lean_object* v_a_4324_, lean_object* v_a_4325_, lean_object* v_a_4326_, lean_object* v_a_4327_, lean_object* v_a_4328_, lean_object* v_a_4329_){
_start:
{
lean_object* v_res_4330_; 
v_res_4330_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_ensureLeadCoeffPos(v_c_4317_, v_a_4318_, v_a_4319_, v_a_4320_, v_a_4321_, v_a_4322_, v_a_4323_, v_a_4324_, v_a_4325_, v_a_4326_, v_a_4327_, v_a_4328_);
lean_dec(v_a_4328_);
lean_dec_ref(v_a_4327_);
lean_dec(v_a_4326_);
lean_dec_ref(v_a_4325_);
lean_dec(v_a_4324_);
lean_dec_ref(v_a_4323_);
lean_dec(v_a_4322_);
lean_dec_ref(v_a_4321_);
lean_dec(v_a_4320_);
lean_dec(v_a_4319_);
lean_dec(v_a_4318_);
return v_res_4330_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___lam__0(lean_object* v___y_4331_, lean_object* v_snd_4332_, lean_object* v_fst_4333_, lean_object* v_s_4334_){
_start:
{
lean_object* v_structs_4335_; lean_object* v_typeIdOf_4336_; lean_object* v_exprToStructId_4337_; lean_object* v_exprToStructIdEntries_4338_; lean_object* v_forbiddenNatModules_4339_; lean_object* v_natStructs_4340_; lean_object* v_natTypeIdOf_4341_; lean_object* v_exprToNatStructId_4342_; lean_object* v___x_4343_; uint8_t v___x_4344_; 
v_structs_4335_ = lean_ctor_get(v_s_4334_, 0);
v_typeIdOf_4336_ = lean_ctor_get(v_s_4334_, 1);
v_exprToStructId_4337_ = lean_ctor_get(v_s_4334_, 2);
v_exprToStructIdEntries_4338_ = lean_ctor_get(v_s_4334_, 3);
v_forbiddenNatModules_4339_ = lean_ctor_get(v_s_4334_, 4);
v_natStructs_4340_ = lean_ctor_get(v_s_4334_, 5);
v_natTypeIdOf_4341_ = lean_ctor_get(v_s_4334_, 6);
v_exprToNatStructId_4342_ = lean_ctor_get(v_s_4334_, 7);
v___x_4343_ = lean_array_get_size(v_structs_4335_);
v___x_4344_ = lean_nat_dec_lt(v___y_4331_, v___x_4343_);
if (v___x_4344_ == 0)
{
lean_dec(v_fst_4333_);
lean_dec_ref(v_snd_4332_);
return v_s_4334_;
}
else
{
lean_object* v___x_4346_; uint8_t v_isShared_4347_; uint8_t v_isSharedCheck_4408_; 
lean_inc_ref(v_exprToNatStructId_4342_);
lean_inc_ref(v_natTypeIdOf_4341_);
lean_inc_ref(v_natStructs_4340_);
lean_inc_ref(v_forbiddenNatModules_4339_);
lean_inc_ref(v_exprToStructIdEntries_4338_);
lean_inc_ref(v_exprToStructId_4337_);
lean_inc_ref(v_typeIdOf_4336_);
lean_inc_ref(v_structs_4335_);
v_isSharedCheck_4408_ = !lean_is_exclusive(v_s_4334_);
if (v_isSharedCheck_4408_ == 0)
{
lean_object* v_unused_4409_; lean_object* v_unused_4410_; lean_object* v_unused_4411_; lean_object* v_unused_4412_; lean_object* v_unused_4413_; lean_object* v_unused_4414_; lean_object* v_unused_4415_; lean_object* v_unused_4416_; 
v_unused_4409_ = lean_ctor_get(v_s_4334_, 7);
lean_dec(v_unused_4409_);
v_unused_4410_ = lean_ctor_get(v_s_4334_, 6);
lean_dec(v_unused_4410_);
v_unused_4411_ = lean_ctor_get(v_s_4334_, 5);
lean_dec(v_unused_4411_);
v_unused_4412_ = lean_ctor_get(v_s_4334_, 4);
lean_dec(v_unused_4412_);
v_unused_4413_ = lean_ctor_get(v_s_4334_, 3);
lean_dec(v_unused_4413_);
v_unused_4414_ = lean_ctor_get(v_s_4334_, 2);
lean_dec(v_unused_4414_);
v_unused_4415_ = lean_ctor_get(v_s_4334_, 1);
lean_dec(v_unused_4415_);
v_unused_4416_ = lean_ctor_get(v_s_4334_, 0);
lean_dec(v_unused_4416_);
v___x_4346_ = v_s_4334_;
v_isShared_4347_ = v_isSharedCheck_4408_;
goto v_resetjp_4345_;
}
else
{
lean_dec(v_s_4334_);
v___x_4346_ = lean_box(0);
v_isShared_4347_ = v_isSharedCheck_4408_;
goto v_resetjp_4345_;
}
v_resetjp_4345_:
{
lean_object* v_v_4348_; lean_object* v_id_4349_; lean_object* v_ringId_x3f_4350_; lean_object* v_type_4351_; lean_object* v_u_4352_; lean_object* v_intModuleInst_4353_; lean_object* v_leInst_x3f_4354_; lean_object* v_ltInst_x3f_4355_; lean_object* v_lawfulOrderLTInst_x3f_4356_; lean_object* v_isPreorderInst_x3f_4357_; lean_object* v_orderedAddInst_x3f_4358_; lean_object* v_isLinearInst_x3f_4359_; lean_object* v_noNatDivInst_x3f_4360_; lean_object* v_ringInst_x3f_4361_; lean_object* v_commRingInst_x3f_4362_; lean_object* v_orderedRingInst_x3f_4363_; lean_object* v_fieldInst_x3f_4364_; lean_object* v_charInst_x3f_4365_; lean_object* v_zero_4366_; lean_object* v_ofNatZero_4367_; lean_object* v_one_x3f_4368_; lean_object* v_leFn_x3f_4369_; lean_object* v_ltFn_x3f_4370_; lean_object* v_addFn_4371_; lean_object* v_zsmulFn_4372_; lean_object* v_nsmulFn_4373_; lean_object* v_zsmulFn_x3f_4374_; lean_object* v_nsmulFn_x3f_4375_; lean_object* v_homomulFn_x3f_4376_; lean_object* v_subFn_4377_; lean_object* v_negFn_4378_; lean_object* v_vars_4379_; lean_object* v_varMap_4380_; lean_object* v_lowers_4381_; lean_object* v_uppers_4382_; lean_object* v_diseqs_4383_; lean_object* v_assignment_4384_; uint8_t v_caseSplits_4385_; lean_object* v_conflict_x3f_4386_; lean_object* v_diseqSplits_4387_; lean_object* v_elimEqs_4388_; lean_object* v_elimStack_4389_; lean_object* v_occurs_4390_; lean_object* v_ignored_4391_; lean_object* v___x_4393_; uint8_t v_isShared_4394_; uint8_t v_isSharedCheck_4407_; 
v_v_4348_ = lean_array_fget(v_structs_4335_, v___y_4331_);
v_id_4349_ = lean_ctor_get(v_v_4348_, 0);
v_ringId_x3f_4350_ = lean_ctor_get(v_v_4348_, 1);
v_type_4351_ = lean_ctor_get(v_v_4348_, 2);
v_u_4352_ = lean_ctor_get(v_v_4348_, 3);
v_intModuleInst_4353_ = lean_ctor_get(v_v_4348_, 4);
v_leInst_x3f_4354_ = lean_ctor_get(v_v_4348_, 5);
v_ltInst_x3f_4355_ = lean_ctor_get(v_v_4348_, 6);
v_lawfulOrderLTInst_x3f_4356_ = lean_ctor_get(v_v_4348_, 7);
v_isPreorderInst_x3f_4357_ = lean_ctor_get(v_v_4348_, 8);
v_orderedAddInst_x3f_4358_ = lean_ctor_get(v_v_4348_, 9);
v_isLinearInst_x3f_4359_ = lean_ctor_get(v_v_4348_, 10);
v_noNatDivInst_x3f_4360_ = lean_ctor_get(v_v_4348_, 11);
v_ringInst_x3f_4361_ = lean_ctor_get(v_v_4348_, 12);
v_commRingInst_x3f_4362_ = lean_ctor_get(v_v_4348_, 13);
v_orderedRingInst_x3f_4363_ = lean_ctor_get(v_v_4348_, 14);
v_fieldInst_x3f_4364_ = lean_ctor_get(v_v_4348_, 15);
v_charInst_x3f_4365_ = lean_ctor_get(v_v_4348_, 16);
v_zero_4366_ = lean_ctor_get(v_v_4348_, 17);
v_ofNatZero_4367_ = lean_ctor_get(v_v_4348_, 18);
v_one_x3f_4368_ = lean_ctor_get(v_v_4348_, 19);
v_leFn_x3f_4369_ = lean_ctor_get(v_v_4348_, 20);
v_ltFn_x3f_4370_ = lean_ctor_get(v_v_4348_, 21);
v_addFn_4371_ = lean_ctor_get(v_v_4348_, 22);
v_zsmulFn_4372_ = lean_ctor_get(v_v_4348_, 23);
v_nsmulFn_4373_ = lean_ctor_get(v_v_4348_, 24);
v_zsmulFn_x3f_4374_ = lean_ctor_get(v_v_4348_, 25);
v_nsmulFn_x3f_4375_ = lean_ctor_get(v_v_4348_, 26);
v_homomulFn_x3f_4376_ = lean_ctor_get(v_v_4348_, 27);
v_subFn_4377_ = lean_ctor_get(v_v_4348_, 28);
v_negFn_4378_ = lean_ctor_get(v_v_4348_, 29);
v_vars_4379_ = lean_ctor_get(v_v_4348_, 30);
v_varMap_4380_ = lean_ctor_get(v_v_4348_, 31);
v_lowers_4381_ = lean_ctor_get(v_v_4348_, 32);
v_uppers_4382_ = lean_ctor_get(v_v_4348_, 33);
v_diseqs_4383_ = lean_ctor_get(v_v_4348_, 34);
v_assignment_4384_ = lean_ctor_get(v_v_4348_, 35);
v_caseSplits_4385_ = lean_ctor_get_uint8(v_v_4348_, sizeof(void*)*42);
v_conflict_x3f_4386_ = lean_ctor_get(v_v_4348_, 36);
v_diseqSplits_4387_ = lean_ctor_get(v_v_4348_, 37);
v_elimEqs_4388_ = lean_ctor_get(v_v_4348_, 38);
v_elimStack_4389_ = lean_ctor_get(v_v_4348_, 39);
v_occurs_4390_ = lean_ctor_get(v_v_4348_, 40);
v_ignored_4391_ = lean_ctor_get(v_v_4348_, 41);
v_isSharedCheck_4407_ = !lean_is_exclusive(v_v_4348_);
if (v_isSharedCheck_4407_ == 0)
{
v___x_4393_ = v_v_4348_;
v_isShared_4394_ = v_isSharedCheck_4407_;
goto v_resetjp_4392_;
}
else
{
lean_inc(v_ignored_4391_);
lean_inc(v_occurs_4390_);
lean_inc(v_elimStack_4389_);
lean_inc(v_elimEqs_4388_);
lean_inc(v_diseqSplits_4387_);
lean_inc(v_conflict_x3f_4386_);
lean_inc(v_assignment_4384_);
lean_inc(v_diseqs_4383_);
lean_inc(v_uppers_4382_);
lean_inc(v_lowers_4381_);
lean_inc(v_varMap_4380_);
lean_inc(v_vars_4379_);
lean_inc(v_negFn_4378_);
lean_inc(v_subFn_4377_);
lean_inc(v_homomulFn_x3f_4376_);
lean_inc(v_nsmulFn_x3f_4375_);
lean_inc(v_zsmulFn_x3f_4374_);
lean_inc(v_nsmulFn_4373_);
lean_inc(v_zsmulFn_4372_);
lean_inc(v_addFn_4371_);
lean_inc(v_ltFn_x3f_4370_);
lean_inc(v_leFn_x3f_4369_);
lean_inc(v_one_x3f_4368_);
lean_inc(v_ofNatZero_4367_);
lean_inc(v_zero_4366_);
lean_inc(v_charInst_x3f_4365_);
lean_inc(v_fieldInst_x3f_4364_);
lean_inc(v_orderedRingInst_x3f_4363_);
lean_inc(v_commRingInst_x3f_4362_);
lean_inc(v_ringInst_x3f_4361_);
lean_inc(v_noNatDivInst_x3f_4360_);
lean_inc(v_isLinearInst_x3f_4359_);
lean_inc(v_orderedAddInst_x3f_4358_);
lean_inc(v_isPreorderInst_x3f_4357_);
lean_inc(v_lawfulOrderLTInst_x3f_4356_);
lean_inc(v_ltInst_x3f_4355_);
lean_inc(v_leInst_x3f_4354_);
lean_inc(v_intModuleInst_4353_);
lean_inc(v_u_4352_);
lean_inc(v_type_4351_);
lean_inc(v_ringId_x3f_4350_);
lean_inc(v_id_4349_);
lean_dec(v_v_4348_);
v___x_4393_ = lean_box(0);
v_isShared_4394_ = v_isSharedCheck_4407_;
goto v_resetjp_4392_;
}
v_resetjp_4392_:
{
lean_object* v___x_4395_; lean_object* v_xs_x27_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4401_; 
v___x_4395_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateLowers___lam__0___closed__0);
v_xs_x27_4396_ = lean_array_fset(v_structs_4335_, v___y_4331_, v___x_4395_);
v___x_4397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4397_, 0, v_snd_4332_);
v___x_4398_ = l_Lean_PersistentArray_set___redArg(v_elimEqs_4388_, v_fst_4333_, v___x_4397_);
v___x_4399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4399_, 0, v_fst_4333_);
lean_ctor_set(v___x_4399_, 1, v_elimStack_4389_);
if (v_isShared_4394_ == 0)
{
lean_ctor_set(v___x_4393_, 39, v___x_4399_);
lean_ctor_set(v___x_4393_, 38, v___x_4398_);
v___x_4401_ = v___x_4393_;
goto v_reusejp_4400_;
}
else
{
lean_object* v_reuseFailAlloc_4406_; 
v_reuseFailAlloc_4406_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_4406_, 0, v_id_4349_);
lean_ctor_set(v_reuseFailAlloc_4406_, 1, v_ringId_x3f_4350_);
lean_ctor_set(v_reuseFailAlloc_4406_, 2, v_type_4351_);
lean_ctor_set(v_reuseFailAlloc_4406_, 3, v_u_4352_);
lean_ctor_set(v_reuseFailAlloc_4406_, 4, v_intModuleInst_4353_);
lean_ctor_set(v_reuseFailAlloc_4406_, 5, v_leInst_x3f_4354_);
lean_ctor_set(v_reuseFailAlloc_4406_, 6, v_ltInst_x3f_4355_);
lean_ctor_set(v_reuseFailAlloc_4406_, 7, v_lawfulOrderLTInst_x3f_4356_);
lean_ctor_set(v_reuseFailAlloc_4406_, 8, v_isPreorderInst_x3f_4357_);
lean_ctor_set(v_reuseFailAlloc_4406_, 9, v_orderedAddInst_x3f_4358_);
lean_ctor_set(v_reuseFailAlloc_4406_, 10, v_isLinearInst_x3f_4359_);
lean_ctor_set(v_reuseFailAlloc_4406_, 11, v_noNatDivInst_x3f_4360_);
lean_ctor_set(v_reuseFailAlloc_4406_, 12, v_ringInst_x3f_4361_);
lean_ctor_set(v_reuseFailAlloc_4406_, 13, v_commRingInst_x3f_4362_);
lean_ctor_set(v_reuseFailAlloc_4406_, 14, v_orderedRingInst_x3f_4363_);
lean_ctor_set(v_reuseFailAlloc_4406_, 15, v_fieldInst_x3f_4364_);
lean_ctor_set(v_reuseFailAlloc_4406_, 16, v_charInst_x3f_4365_);
lean_ctor_set(v_reuseFailAlloc_4406_, 17, v_zero_4366_);
lean_ctor_set(v_reuseFailAlloc_4406_, 18, v_ofNatZero_4367_);
lean_ctor_set(v_reuseFailAlloc_4406_, 19, v_one_x3f_4368_);
lean_ctor_set(v_reuseFailAlloc_4406_, 20, v_leFn_x3f_4369_);
lean_ctor_set(v_reuseFailAlloc_4406_, 21, v_ltFn_x3f_4370_);
lean_ctor_set(v_reuseFailAlloc_4406_, 22, v_addFn_4371_);
lean_ctor_set(v_reuseFailAlloc_4406_, 23, v_zsmulFn_4372_);
lean_ctor_set(v_reuseFailAlloc_4406_, 24, v_nsmulFn_4373_);
lean_ctor_set(v_reuseFailAlloc_4406_, 25, v_zsmulFn_x3f_4374_);
lean_ctor_set(v_reuseFailAlloc_4406_, 26, v_nsmulFn_x3f_4375_);
lean_ctor_set(v_reuseFailAlloc_4406_, 27, v_homomulFn_x3f_4376_);
lean_ctor_set(v_reuseFailAlloc_4406_, 28, v_subFn_4377_);
lean_ctor_set(v_reuseFailAlloc_4406_, 29, v_negFn_4378_);
lean_ctor_set(v_reuseFailAlloc_4406_, 30, v_vars_4379_);
lean_ctor_set(v_reuseFailAlloc_4406_, 31, v_varMap_4380_);
lean_ctor_set(v_reuseFailAlloc_4406_, 32, v_lowers_4381_);
lean_ctor_set(v_reuseFailAlloc_4406_, 33, v_uppers_4382_);
lean_ctor_set(v_reuseFailAlloc_4406_, 34, v_diseqs_4383_);
lean_ctor_set(v_reuseFailAlloc_4406_, 35, v_assignment_4384_);
lean_ctor_set(v_reuseFailAlloc_4406_, 36, v_conflict_x3f_4386_);
lean_ctor_set(v_reuseFailAlloc_4406_, 37, v_diseqSplits_4387_);
lean_ctor_set(v_reuseFailAlloc_4406_, 38, v___x_4398_);
lean_ctor_set(v_reuseFailAlloc_4406_, 39, v___x_4399_);
lean_ctor_set(v_reuseFailAlloc_4406_, 40, v_occurs_4390_);
lean_ctor_set(v_reuseFailAlloc_4406_, 41, v_ignored_4391_);
lean_ctor_set_uint8(v_reuseFailAlloc_4406_, sizeof(void*)*42, v_caseSplits_4385_);
v___x_4401_ = v_reuseFailAlloc_4406_;
goto v_reusejp_4400_;
}
v_reusejp_4400_:
{
lean_object* v___x_4402_; lean_object* v___x_4404_; 
v___x_4402_ = lean_array_fset(v_xs_x27_4396_, v___y_4331_, v___x_4401_);
if (v_isShared_4347_ == 0)
{
lean_ctor_set(v___x_4346_, 0, v___x_4402_);
v___x_4404_ = v___x_4346_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v___x_4402_);
lean_ctor_set(v_reuseFailAlloc_4405_, 1, v_typeIdOf_4336_);
lean_ctor_set(v_reuseFailAlloc_4405_, 2, v_exprToStructId_4337_);
lean_ctor_set(v_reuseFailAlloc_4405_, 3, v_exprToStructIdEntries_4338_);
lean_ctor_set(v_reuseFailAlloc_4405_, 4, v_forbiddenNatModules_4339_);
lean_ctor_set(v_reuseFailAlloc_4405_, 5, v_natStructs_4340_);
lean_ctor_set(v_reuseFailAlloc_4405_, 6, v_natTypeIdOf_4341_);
lean_ctor_set(v_reuseFailAlloc_4405_, 7, v_exprToNatStructId_4342_);
v___x_4404_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
return v___x_4404_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___lam__0___boxed(lean_object* v___y_4417_, lean_object* v_snd_4418_, lean_object* v_fst_4419_, lean_object* v_s_4420_){
_start:
{
lean_object* v_res_4421_; 
v_res_4421_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___lam__0(v___y_4417_, v_snd_4418_, v_fst_4419_, v_s_4420_);
lean_dec(v___y_4417_);
return v_res_4421_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__1(void){
_start:
{
lean_object* v___x_4423_; lean_object* v___x_4424_; 
v___x_4423_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__0));
v___x_4424_ = l_Lean_stringToMessageData(v___x_4423_);
return v___x_4424_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__4(void){
_start:
{
lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; 
v___x_4430_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__3));
v___x_4431_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__6));
v___x_4432_ = l_Lean_Name_append(v___x_4431_, v___x_4430_);
return v___x_4432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert(lean_object* v_c_4433_, lean_object* v_a_4434_, lean_object* v_a_4435_, lean_object* v_a_4436_, lean_object* v_a_4437_, lean_object* v_a_4438_, lean_object* v_a_4439_, lean_object* v_a_4440_, lean_object* v_a_4441_, lean_object* v_a_4442_, lean_object* v_a_4443_, lean_object* v_a_4444_){
_start:
{
lean_object* v___y_4450_; lean_object* v___y_4451_; lean_object* v___y_4452_; lean_object* v___y_4453_; lean_object* v___y_4454_; lean_object* v___y_4455_; lean_object* v___y_4456_; lean_object* v___y_4457_; lean_object* v___y_4458_; lean_object* v___y_4459_; lean_object* v___y_4460_; lean_object* v___y_4461_; lean_object* v___y_4462_; lean_object* v___y_4463_; lean_object* v___y_4464_; lean_object* v___y_4465_; lean_object* v___y_4471_; lean_object* v___y_4472_; lean_object* v___y_4473_; lean_object* v___y_4474_; lean_object* v___y_4475_; lean_object* v___y_4476_; lean_object* v___y_4477_; lean_object* v___y_4478_; lean_object* v___y_4479_; lean_object* v___y_4480_; lean_object* v___y_4481_; lean_object* v___y_4482_; lean_object* v___y_4483_; lean_object* v___y_4484_; lean_object* v___y_4485_; lean_object* v___y_4486_; lean_object* v_toCold_4512_; lean_object* v_options_4513_; lean_object* v_inheritedTraceOptions_4514_; uint8_t v_hasTrace_4515_; lean_object* v___y_4517_; lean_object* v___y_4518_; lean_object* v___y_4519_; lean_object* v___y_4520_; lean_object* v___y_4521_; lean_object* v___y_4522_; lean_object* v___y_4523_; lean_object* v___y_4524_; lean_object* v___y_4525_; lean_object* v___y_4526_; lean_object* v___y_4527_; lean_object* v___y_4528_; lean_object* v___y_4529_; lean_object* v___y_4530_; lean_object* v___y_4531_; lean_object* v_options_4532_; lean_object* v_inheritedTraceOptions_4533_; lean_object* v___y_4534_; lean_object* v___y_4551_; lean_object* v___y_4552_; lean_object* v___y_4553_; lean_object* v___y_4554_; lean_object* v___y_4555_; lean_object* v___y_4556_; lean_object* v___y_4557_; lean_object* v___y_4558_; lean_object* v___y_4559_; lean_object* v___y_4560_; lean_object* v___y_4561_; 
v_toCold_4512_ = lean_ctor_get(v_a_4443_, 0);
v_options_4513_ = lean_ctor_get(v_toCold_4512_, 2);
v_inheritedTraceOptions_4514_ = lean_ctor_get(v_toCold_4512_, 11);
v_hasTrace_4515_ = lean_ctor_get_uint8(v_options_4513_, sizeof(void*)*1);
if (v_hasTrace_4515_ == 0)
{
v___y_4551_ = v_a_4434_;
v___y_4552_ = v_a_4435_;
v___y_4553_ = v_a_4436_;
v___y_4554_ = v_a_4437_;
v___y_4555_ = v_a_4438_;
v___y_4556_ = v_a_4439_;
v___y_4557_ = v_a_4440_;
v___y_4558_ = v_a_4441_;
v___y_4559_ = v_a_4442_;
v___y_4560_ = v_a_4443_;
v___y_4561_ = v_a_4444_;
goto v___jp_4550_;
}
else
{
lean_object* v_cls_4659_; lean_object* v___x_4660_; uint8_t v___x_4661_; 
v_cls_4659_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__6));
v___x_4660_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__7, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__7);
v___x_4661_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4514_, v_options_4513_, v___x_4660_);
if (v___x_4661_ == 0)
{
v___y_4551_ = v_a_4434_;
v___y_4552_ = v_a_4435_;
v___y_4553_ = v_a_4436_;
v___y_4554_ = v_a_4437_;
v___y_4555_ = v_a_4438_;
v___y_4556_ = v_a_4439_;
v___y_4557_ = v_a_4440_;
v___y_4558_ = v_a_4441_;
v___y_4559_ = v_a_4442_;
v___y_4560_ = v_a_4443_;
v___y_4561_ = v_a_4444_;
goto v___jp_4550_;
}
else
{
lean_object* v___x_4662_; 
v___x_4662_ = l_Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1(v_c_4433_, v_a_4434_, v_a_4435_, v_a_4436_, v_a_4437_, v_a_4438_, v_a_4439_, v_a_4440_, v_a_4441_, v_a_4442_, v_a_4443_, v_a_4444_);
if (lean_obj_tag(v___x_4662_) == 0)
{
lean_object* v_a_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; 
v_a_4663_ = lean_ctor_get(v___x_4662_, 0);
lean_inc(v_a_4663_);
lean_dec_ref_known(v___x_4662_, 1);
v___x_4664_ = l_Lean_MessageData_ofExpr(v_a_4663_);
v___x_4665_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v_cls_4659_, v___x_4664_, v_a_4441_, v_a_4442_, v_a_4443_, v_a_4444_);
if (lean_obj_tag(v___x_4665_) == 0)
{
lean_dec_ref_known(v___x_4665_, 1);
v___y_4551_ = v_a_4434_;
v___y_4552_ = v_a_4435_;
v___y_4553_ = v_a_4436_;
v___y_4554_ = v_a_4437_;
v___y_4555_ = v_a_4438_;
v___y_4556_ = v_a_4439_;
v___y_4557_ = v_a_4440_;
v___y_4558_ = v_a_4441_;
v___y_4559_ = v_a_4442_;
v___y_4560_ = v_a_4443_;
v___y_4561_ = v_a_4444_;
goto v___jp_4550_;
}
else
{
lean_dec_ref(v_c_4433_);
return v___x_4665_;
}
}
else
{
lean_object* v_a_4666_; lean_object* v___x_4668_; uint8_t v_isShared_4669_; uint8_t v_isSharedCheck_4673_; 
lean_dec_ref(v_c_4433_);
v_a_4666_ = lean_ctor_get(v___x_4662_, 0);
v_isSharedCheck_4673_ = !lean_is_exclusive(v___x_4662_);
if (v_isSharedCheck_4673_ == 0)
{
v___x_4668_ = v___x_4662_;
v_isShared_4669_ = v_isSharedCheck_4673_;
goto v_resetjp_4667_;
}
else
{
lean_inc(v_a_4666_);
lean_dec(v___x_4662_);
v___x_4668_ = lean_box(0);
v_isShared_4669_ = v_isSharedCheck_4673_;
goto v_resetjp_4667_;
}
v_resetjp_4667_:
{
lean_object* v___x_4671_; 
if (v_isShared_4669_ == 0)
{
v___x_4671_ = v___x_4668_;
goto v_reusejp_4670_;
}
else
{
lean_object* v_reuseFailAlloc_4672_; 
v_reuseFailAlloc_4672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4672_, 0, v_a_4666_);
v___x_4671_ = v_reuseFailAlloc_4672_;
goto v_reusejp_4670_;
}
v_reusejp_4670_:
{
return v___x_4671_;
}
}
}
}
}
v___jp_4446_:
{
lean_object* v___x_4447_; lean_object* v___x_4448_; 
v___x_4447_ = lean_box(0);
v___x_4448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4448_, 0, v___x_4447_);
return v___x_4448_;
}
v___jp_4449_:
{
lean_object* v___f_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; 
lean_inc(v___y_4455_);
v___f_4466_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___lam__0___boxed), 4, 3);
lean_closure_set(v___f_4466_, 0, v___y_4455_);
lean_closure_set(v___f_4466_, 1, v___y_4451_);
lean_closure_set(v___f_4466_, 2, v___y_4450_);
v___x_4467_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_4468_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_4467_, v___f_4466_, v___y_4456_);
if (lean_obj_tag(v___x_4468_) == 0)
{
lean_object* v___x_4469_; 
lean_dec_ref_known(v___x_4468_, 1);
v___x_4469_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_updateOccs(v___y_4454_, v___y_4453_, v___y_4452_, v___y_4455_, v___y_4456_, v___y_4457_, v___y_4458_, v___y_4459_, v___y_4460_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_, v___y_4465_);
return v___x_4469_;
}
else
{
lean_dec(v___y_4454_);
lean_dec(v___y_4453_);
lean_dec_ref(v___y_4452_);
return v___x_4468_;
}
}
v___jp_4470_:
{
lean_object* v___x_4487_; 
v___x_4487_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_4476_, v___y_4477_, v___y_4478_, v___y_4479_, v___y_4480_, v___y_4481_, v___y_4482_, v___y_4483_, v___y_4484_, v___y_4485_, v___y_4486_);
if (lean_obj_tag(v___x_4487_) == 0)
{
lean_object* v_a_4488_; uint8_t v_caseSplits_4489_; 
v_a_4488_ = lean_ctor_get(v___x_4487_, 0);
lean_inc(v_a_4488_);
lean_dec_ref_known(v___x_4487_, 1);
v_caseSplits_4489_ = lean_ctor_get_uint8(v_a_4488_, sizeof(void*)*42);
lean_dec(v_a_4488_);
if (v_caseSplits_4489_ == 0)
{
lean_object* v___x_4490_; 
v___x_4490_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_isImpliedEq(v___y_4474_, v___y_4476_, v___y_4477_, v___y_4478_, v___y_4479_, v___y_4480_, v___y_4481_, v___y_4482_, v___y_4483_, v___y_4484_, v___y_4485_, v___y_4486_);
if (lean_obj_tag(v___x_4490_) == 0)
{
lean_object* v_a_4491_; uint8_t v___x_4492_; 
v_a_4491_ = lean_ctor_get(v___x_4490_, 0);
lean_inc(v_a_4491_);
lean_dec_ref_known(v___x_4490_, 1);
v___x_4492_ = lean_unbox(v_a_4491_);
lean_dec(v_a_4491_);
if (v___x_4492_ == 0)
{
v___y_4450_ = v___y_4472_;
v___y_4451_ = v___y_4471_;
v___y_4452_ = v___y_4474_;
v___y_4453_ = v___y_4473_;
v___y_4454_ = v___y_4475_;
v___y_4455_ = v___y_4476_;
v___y_4456_ = v___y_4477_;
v___y_4457_ = v___y_4478_;
v___y_4458_ = v___y_4479_;
v___y_4459_ = v___y_4480_;
v___y_4460_ = v___y_4481_;
v___y_4461_ = v___y_4482_;
v___y_4462_ = v___y_4483_;
v___y_4463_ = v___y_4484_;
v___y_4464_ = v___y_4485_;
v___y_4465_ = v___y_4486_;
goto v___jp_4449_;
}
else
{
lean_object* v___x_4493_; lean_object* v_a_4494_; lean_object* v___x_4495_; 
lean_inc_ref(v___y_4474_);
v___x_4493_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_ensureLeadCoeffPos___redArg(v___y_4474_);
v_a_4494_ = lean_ctor_get(v___x_4493_, 0);
lean_inc(v_a_4494_);
lean_dec_ref(v___x_4493_);
v___x_4495_ = l_Lean_Meta_Grind_Arith_Linear_propagateImpEq(v_a_4494_, v___y_4476_, v___y_4477_, v___y_4478_, v___y_4479_, v___y_4480_, v___y_4481_, v___y_4482_, v___y_4483_, v___y_4484_, v___y_4485_, v___y_4486_);
if (lean_obj_tag(v___x_4495_) == 0)
{
lean_dec_ref_known(v___x_4495_, 1);
v___y_4450_ = v___y_4472_;
v___y_4451_ = v___y_4471_;
v___y_4452_ = v___y_4474_;
v___y_4453_ = v___y_4473_;
v___y_4454_ = v___y_4475_;
v___y_4455_ = v___y_4476_;
v___y_4456_ = v___y_4477_;
v___y_4457_ = v___y_4478_;
v___y_4458_ = v___y_4479_;
v___y_4459_ = v___y_4480_;
v___y_4460_ = v___y_4481_;
v___y_4461_ = v___y_4482_;
v___y_4462_ = v___y_4483_;
v___y_4463_ = v___y_4484_;
v___y_4464_ = v___y_4485_;
v___y_4465_ = v___y_4486_;
goto v___jp_4449_;
}
else
{
lean_dec(v___y_4475_);
lean_dec_ref(v___y_4474_);
lean_dec(v___y_4473_);
lean_dec(v___y_4472_);
lean_dec_ref(v___y_4471_);
return v___x_4495_;
}
}
}
else
{
lean_object* v_a_4496_; lean_object* v___x_4498_; uint8_t v_isShared_4499_; uint8_t v_isSharedCheck_4503_; 
lean_dec(v___y_4475_);
lean_dec_ref(v___y_4474_);
lean_dec(v___y_4473_);
lean_dec(v___y_4472_);
lean_dec_ref(v___y_4471_);
v_a_4496_ = lean_ctor_get(v___x_4490_, 0);
v_isSharedCheck_4503_ = !lean_is_exclusive(v___x_4490_);
if (v_isSharedCheck_4503_ == 0)
{
v___x_4498_ = v___x_4490_;
v_isShared_4499_ = v_isSharedCheck_4503_;
goto v_resetjp_4497_;
}
else
{
lean_inc(v_a_4496_);
lean_dec(v___x_4490_);
v___x_4498_ = lean_box(0);
v_isShared_4499_ = v_isSharedCheck_4503_;
goto v_resetjp_4497_;
}
v_resetjp_4497_:
{
lean_object* v___x_4501_; 
if (v_isShared_4499_ == 0)
{
v___x_4501_ = v___x_4498_;
goto v_reusejp_4500_;
}
else
{
lean_object* v_reuseFailAlloc_4502_; 
v_reuseFailAlloc_4502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4502_, 0, v_a_4496_);
v___x_4501_ = v_reuseFailAlloc_4502_;
goto v_reusejp_4500_;
}
v_reusejp_4500_:
{
return v___x_4501_;
}
}
}
}
else
{
v___y_4450_ = v___y_4472_;
v___y_4451_ = v___y_4471_;
v___y_4452_ = v___y_4474_;
v___y_4453_ = v___y_4473_;
v___y_4454_ = v___y_4475_;
v___y_4455_ = v___y_4476_;
v___y_4456_ = v___y_4477_;
v___y_4457_ = v___y_4478_;
v___y_4458_ = v___y_4479_;
v___y_4459_ = v___y_4480_;
v___y_4460_ = v___y_4481_;
v___y_4461_ = v___y_4482_;
v___y_4462_ = v___y_4483_;
v___y_4463_ = v___y_4484_;
v___y_4464_ = v___y_4485_;
v___y_4465_ = v___y_4486_;
goto v___jp_4449_;
}
}
else
{
lean_object* v_a_4504_; lean_object* v___x_4506_; uint8_t v_isShared_4507_; uint8_t v_isSharedCheck_4511_; 
lean_dec(v___y_4475_);
lean_dec_ref(v___y_4474_);
lean_dec(v___y_4473_);
lean_dec(v___y_4472_);
lean_dec_ref(v___y_4471_);
v_a_4504_ = lean_ctor_get(v___x_4487_, 0);
v_isSharedCheck_4511_ = !lean_is_exclusive(v___x_4487_);
if (v_isSharedCheck_4511_ == 0)
{
v___x_4506_ = v___x_4487_;
v_isShared_4507_ = v_isSharedCheck_4511_;
goto v_resetjp_4505_;
}
else
{
lean_inc(v_a_4504_);
lean_dec(v___x_4487_);
v___x_4506_ = lean_box(0);
v_isShared_4507_ = v_isSharedCheck_4511_;
goto v_resetjp_4505_;
}
v_resetjp_4505_:
{
lean_object* v___x_4509_; 
if (v_isShared_4507_ == 0)
{
v___x_4509_ = v___x_4506_;
goto v_reusejp_4508_;
}
else
{
lean_object* v_reuseFailAlloc_4510_; 
v_reuseFailAlloc_4510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4510_, 0, v_a_4504_);
v___x_4509_ = v_reuseFailAlloc_4510_;
goto v_reusejp_4508_;
}
v_reusejp_4508_:
{
return v___x_4509_;
}
}
}
}
v___jp_4516_:
{
lean_object* v___x_4535_; lean_object* v___x_4536_; uint8_t v___x_4537_; 
v___x_4535_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__4));
v___x_4536_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__5, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert___closed__5);
v___x_4537_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4533_, v_options_4532_, v___x_4536_);
if (v___x_4537_ == 0)
{
v___y_4471_ = v___y_4518_;
v___y_4472_ = v___y_4517_;
v___y_4473_ = v___y_4520_;
v___y_4474_ = v___y_4519_;
v___y_4475_ = v___y_4521_;
v___y_4476_ = v___y_4522_;
v___y_4477_ = v___y_4523_;
v___y_4478_ = v___y_4524_;
v___y_4479_ = v___y_4525_;
v___y_4480_ = v___y_4526_;
v___y_4481_ = v___y_4527_;
v___y_4482_ = v___y_4528_;
v___y_4483_ = v___y_4529_;
v___y_4484_ = v___y_4530_;
v___y_4485_ = v___y_4531_;
v___y_4486_ = v___y_4534_;
goto v___jp_4470_;
}
else
{
lean_object* v___x_4538_; 
v___x_4538_ = l_Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1(v___y_4519_, v___y_4522_, v___y_4523_, v___y_4524_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_, v___y_4530_, v___y_4531_, v___y_4534_);
if (lean_obj_tag(v___x_4538_) == 0)
{
lean_object* v_a_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; 
v_a_4539_ = lean_ctor_get(v___x_4538_, 0);
lean_inc(v_a_4539_);
lean_dec_ref_known(v___x_4538_, 1);
v___x_4540_ = l_Lean_MessageData_ofExpr(v_a_4539_);
v___x_4541_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v___x_4535_, v___x_4540_, v___y_4529_, v___y_4530_, v___y_4531_, v___y_4534_);
if (lean_obj_tag(v___x_4541_) == 0)
{
lean_dec_ref_known(v___x_4541_, 1);
v___y_4471_ = v___y_4518_;
v___y_4472_ = v___y_4517_;
v___y_4473_ = v___y_4520_;
v___y_4474_ = v___y_4519_;
v___y_4475_ = v___y_4521_;
v___y_4476_ = v___y_4522_;
v___y_4477_ = v___y_4523_;
v___y_4478_ = v___y_4524_;
v___y_4479_ = v___y_4525_;
v___y_4480_ = v___y_4526_;
v___y_4481_ = v___y_4527_;
v___y_4482_ = v___y_4528_;
v___y_4483_ = v___y_4529_;
v___y_4484_ = v___y_4530_;
v___y_4485_ = v___y_4531_;
v___y_4486_ = v___y_4534_;
goto v___jp_4470_;
}
else
{
lean_dec(v___y_4521_);
lean_dec(v___y_4520_);
lean_dec_ref(v___y_4519_);
lean_dec_ref(v___y_4518_);
lean_dec(v___y_4517_);
return v___x_4541_;
}
}
else
{
lean_object* v_a_4542_; lean_object* v___x_4544_; uint8_t v_isShared_4545_; uint8_t v_isSharedCheck_4549_; 
lean_dec(v___y_4521_);
lean_dec(v___y_4520_);
lean_dec_ref(v___y_4519_);
lean_dec_ref(v___y_4518_);
lean_dec(v___y_4517_);
v_a_4542_ = lean_ctor_get(v___x_4538_, 0);
v_isSharedCheck_4549_ = !lean_is_exclusive(v___x_4538_);
if (v_isSharedCheck_4549_ == 0)
{
v___x_4544_ = v___x_4538_;
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
else
{
lean_inc(v_a_4542_);
lean_dec(v___x_4538_);
v___x_4544_ = lean_box(0);
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
v_resetjp_4543_:
{
lean_object* v___x_4547_; 
if (v_isShared_4545_ == 0)
{
v___x_4547_ = v___x_4544_;
goto v_reusejp_4546_;
}
else
{
lean_object* v_reuseFailAlloc_4548_; 
v_reuseFailAlloc_4548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4548_, 0, v_a_4542_);
v___x_4547_ = v_reuseFailAlloc_4548_;
goto v_reusejp_4546_;
}
v_reusejp_4546_:
{
return v___x_4547_;
}
}
}
}
}
v___jp_4550_:
{
lean_object* v___x_4562_; 
lean_inc_ref(v___y_4560_);
v___x_4562_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_applySubsts(v_c_4433_, v___y_4551_, v___y_4552_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
if (lean_obj_tag(v___x_4562_) == 0)
{
lean_object* v_a_4563_; lean_object* v_p_4564_; lean_object* v___x_4565_; uint8_t v___x_4566_; 
v_a_4563_ = lean_ctor_get(v___x_4562_, 0);
lean_inc(v_a_4563_);
lean_dec_ref_known(v___x_4562_, 1);
v_p_4564_ = lean_ctor_get(v_a_4563_, 0);
v___x_4565_ = lean_box(0);
v___x_4566_ = l_Lean_Grind_Linarith_instBEqPoly_beq(v_p_4564_, v___x_4565_);
if (v___x_4566_ == 0)
{
lean_object* v___x_4567_; 
v___x_4567_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_norm(v_a_4563_, v___y_4551_, v___y_4552_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
if (lean_obj_tag(v___x_4567_) == 0)
{
lean_object* v_a_4568_; lean_object* v_snd_4569_; lean_object* v_toCold_4570_; lean_object* v_options_4571_; uint8_t v_hasTrace_4572_; 
v_a_4568_ = lean_ctor_get(v___x_4567_, 0);
lean_inc(v_a_4568_);
lean_dec_ref_known(v___x_4567_, 1);
v_snd_4569_ = lean_ctor_get(v_a_4568_, 1);
lean_inc(v_snd_4569_);
v_toCold_4570_ = lean_ctor_get(v___y_4560_, 0);
v_options_4571_ = lean_ctor_get(v_toCold_4570_, 2);
v_hasTrace_4572_ = lean_ctor_get_uint8(v_options_4571_, sizeof(void*)*1);
if (v_hasTrace_4572_ == 0)
{
lean_object* v_fst_4573_; lean_object* v_fst_4574_; lean_object* v_snd_4575_; 
v_fst_4573_ = lean_ctor_get(v_a_4568_, 0);
lean_inc(v_fst_4573_);
lean_dec(v_a_4568_);
v_fst_4574_ = lean_ctor_get(v_snd_4569_, 0);
lean_inc_n(v_fst_4574_, 2);
v_snd_4575_ = lean_ctor_get(v_snd_4569_, 1);
lean_inc_n(v_snd_4575_, 2);
lean_dec(v_snd_4569_);
v___y_4471_ = v_snd_4575_;
v___y_4472_ = v_fst_4574_;
v___y_4473_ = v_fst_4574_;
v___y_4474_ = v_snd_4575_;
v___y_4475_ = v_fst_4573_;
v___y_4476_ = v___y_4551_;
v___y_4477_ = v___y_4552_;
v___y_4478_ = v___y_4553_;
v___y_4479_ = v___y_4554_;
v___y_4480_ = v___y_4555_;
v___y_4481_ = v___y_4556_;
v___y_4482_ = v___y_4557_;
v___y_4483_ = v___y_4558_;
v___y_4484_ = v___y_4559_;
v___y_4485_ = v___y_4560_;
v___y_4486_ = v___y_4561_;
goto v___jp_4470_;
}
else
{
lean_object* v_fst_4576_; lean_object* v___x_4578_; uint8_t v_isShared_4579_; uint8_t v_isSharedCheck_4622_; 
v_fst_4576_ = lean_ctor_get(v_a_4568_, 0);
v_isSharedCheck_4622_ = !lean_is_exclusive(v_a_4568_);
if (v_isSharedCheck_4622_ == 0)
{
lean_object* v_unused_4623_; 
v_unused_4623_ = lean_ctor_get(v_a_4568_, 1);
lean_dec(v_unused_4623_);
v___x_4578_ = v_a_4568_;
v_isShared_4579_ = v_isSharedCheck_4622_;
goto v_resetjp_4577_;
}
else
{
lean_inc(v_fst_4576_);
lean_dec(v_a_4568_);
v___x_4578_ = lean_box(0);
v_isShared_4579_ = v_isSharedCheck_4622_;
goto v_resetjp_4577_;
}
v_resetjp_4577_:
{
lean_object* v_fst_4580_; lean_object* v_snd_4581_; lean_object* v___x_4583_; uint8_t v_isShared_4584_; uint8_t v_isSharedCheck_4621_; 
v_fst_4580_ = lean_ctor_get(v_snd_4569_, 0);
v_snd_4581_ = lean_ctor_get(v_snd_4569_, 1);
v_isSharedCheck_4621_ = !lean_is_exclusive(v_snd_4569_);
if (v_isSharedCheck_4621_ == 0)
{
v___x_4583_ = v_snd_4569_;
v_isShared_4584_ = v_isSharedCheck_4621_;
goto v_resetjp_4582_;
}
else
{
lean_inc(v_snd_4581_);
lean_inc(v_fst_4580_);
lean_dec(v_snd_4569_);
v___x_4583_ = lean_box(0);
v_isShared_4584_ = v_isSharedCheck_4621_;
goto v_resetjp_4582_;
}
v_resetjp_4582_:
{
lean_object* v_inheritedTraceOptions_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; uint8_t v___x_4588_; 
v_inheritedTraceOptions_4585_ = lean_ctor_get(v_toCold_4570_, 11);
v___x_4586_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__4));
v___x_4587_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__7, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__7);
v___x_4588_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4585_, v_options_4571_, v___x_4587_);
if (v___x_4588_ == 0)
{
lean_del_object(v___x_4583_);
lean_del_object(v___x_4578_);
lean_inc(v_snd_4581_);
lean_inc(v_fst_4580_);
v___y_4517_ = v_fst_4580_;
v___y_4518_ = v_snd_4581_;
v___y_4519_ = v_snd_4581_;
v___y_4520_ = v_fst_4580_;
v___y_4521_ = v_fst_4576_;
v___y_4522_ = v___y_4551_;
v___y_4523_ = v___y_4552_;
v___y_4524_ = v___y_4553_;
v___y_4525_ = v___y_4554_;
v___y_4526_ = v___y_4555_;
v___y_4527_ = v___y_4556_;
v___y_4528_ = v___y_4557_;
v___y_4529_ = v___y_4558_;
v___y_4530_ = v___y_4559_;
v___y_4531_ = v___y_4560_;
v_options_4532_ = v_options_4571_;
v_inheritedTraceOptions_4533_ = v_inheritedTraceOptions_4585_;
v___y_4534_ = v___y_4561_;
goto v___jp_4516_;
}
else
{
lean_object* v___x_4589_; 
v___x_4589_ = l_Lean_Meta_Grind_Arith_Linear_getVar(v_fst_4580_, v___y_4551_, v___y_4552_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
if (lean_obj_tag(v___x_4589_) == 0)
{
lean_object* v_a_4590_; lean_object* v___x_4591_; 
v_a_4590_ = lean_ctor_get(v___x_4589_, 0);
lean_inc(v_a_4590_);
lean_dec_ref_known(v___x_4589_, 1);
v___x_4591_ = l_Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1(v_snd_4581_, v___y_4551_, v___y_4552_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
if (lean_obj_tag(v___x_4591_) == 0)
{
lean_object* v_a_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4596_; 
v_a_4592_ = lean_ctor_get(v___x_4591_, 0);
lean_inc(v_a_4592_);
lean_dec_ref_known(v___x_4591_, 1);
v___x_4593_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__1);
v___x_4594_ = l_Lean_MessageData_ofExpr(v_a_4590_);
if (v_isShared_4584_ == 0)
{
lean_ctor_set_tag(v___x_4583_, 7);
lean_ctor_set(v___x_4583_, 1, v___x_4594_);
lean_ctor_set(v___x_4583_, 0, v___x_4593_);
v___x_4596_ = v___x_4583_;
goto v_reusejp_4595_;
}
else
{
lean_object* v_reuseFailAlloc_4604_; 
v_reuseFailAlloc_4604_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4604_, 0, v___x_4593_);
lean_ctor_set(v_reuseFailAlloc_4604_, 1, v___x_4594_);
v___x_4596_ = v_reuseFailAlloc_4604_;
goto v_reusejp_4595_;
}
v_reusejp_4595_:
{
lean_object* v___x_4597_; lean_object* v___x_4599_; 
v___x_4597_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9);
if (v_isShared_4579_ == 0)
{
lean_ctor_set_tag(v___x_4578_, 7);
lean_ctor_set(v___x_4578_, 1, v___x_4597_);
lean_ctor_set(v___x_4578_, 0, v___x_4596_);
v___x_4599_ = v___x_4578_;
goto v_reusejp_4598_;
}
else
{
lean_object* v_reuseFailAlloc_4603_; 
v_reuseFailAlloc_4603_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4603_, 0, v___x_4596_);
lean_ctor_set(v_reuseFailAlloc_4603_, 1, v___x_4597_);
v___x_4599_ = v_reuseFailAlloc_4603_;
goto v_reusejp_4598_;
}
v_reusejp_4598_:
{
lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; 
v___x_4600_ = l_Lean_MessageData_ofExpr(v_a_4592_);
v___x_4601_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4601_, 0, v___x_4599_);
lean_ctor_set(v___x_4601_, 1, v___x_4600_);
v___x_4602_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v___x_4586_, v___x_4601_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
if (lean_obj_tag(v___x_4602_) == 0)
{
lean_dec_ref_known(v___x_4602_, 1);
lean_inc(v_snd_4581_);
lean_inc(v_fst_4580_);
v___y_4517_ = v_fst_4580_;
v___y_4518_ = v_snd_4581_;
v___y_4519_ = v_snd_4581_;
v___y_4520_ = v_fst_4580_;
v___y_4521_ = v_fst_4576_;
v___y_4522_ = v___y_4551_;
v___y_4523_ = v___y_4552_;
v___y_4524_ = v___y_4553_;
v___y_4525_ = v___y_4554_;
v___y_4526_ = v___y_4555_;
v___y_4527_ = v___y_4556_;
v___y_4528_ = v___y_4557_;
v___y_4529_ = v___y_4558_;
v___y_4530_ = v___y_4559_;
v___y_4531_ = v___y_4560_;
v_options_4532_ = v_options_4571_;
v_inheritedTraceOptions_4533_ = v_inheritedTraceOptions_4585_;
v___y_4534_ = v___y_4561_;
goto v___jp_4516_;
}
else
{
lean_dec(v_snd_4581_);
lean_dec(v_fst_4580_);
lean_dec(v_fst_4576_);
return v___x_4602_;
}
}
}
}
else
{
lean_object* v_a_4605_; lean_object* v___x_4607_; uint8_t v_isShared_4608_; uint8_t v_isSharedCheck_4612_; 
lean_dec(v_a_4590_);
lean_del_object(v___x_4583_);
lean_dec(v_snd_4581_);
lean_dec(v_fst_4580_);
lean_del_object(v___x_4578_);
lean_dec(v_fst_4576_);
v_a_4605_ = lean_ctor_get(v___x_4591_, 0);
v_isSharedCheck_4612_ = !lean_is_exclusive(v___x_4591_);
if (v_isSharedCheck_4612_ == 0)
{
v___x_4607_ = v___x_4591_;
v_isShared_4608_ = v_isSharedCheck_4612_;
goto v_resetjp_4606_;
}
else
{
lean_inc(v_a_4605_);
lean_dec(v___x_4591_);
v___x_4607_ = lean_box(0);
v_isShared_4608_ = v_isSharedCheck_4612_;
goto v_resetjp_4606_;
}
v_resetjp_4606_:
{
lean_object* v___x_4610_; 
if (v_isShared_4608_ == 0)
{
v___x_4610_ = v___x_4607_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4611_; 
v_reuseFailAlloc_4611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4611_, 0, v_a_4605_);
v___x_4610_ = v_reuseFailAlloc_4611_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
return v___x_4610_;
}
}
}
}
else
{
lean_object* v_a_4613_; lean_object* v___x_4615_; uint8_t v_isShared_4616_; uint8_t v_isSharedCheck_4620_; 
lean_del_object(v___x_4583_);
lean_dec(v_snd_4581_);
lean_dec(v_fst_4580_);
lean_del_object(v___x_4578_);
lean_dec(v_fst_4576_);
v_a_4613_ = lean_ctor_get(v___x_4589_, 0);
v_isSharedCheck_4620_ = !lean_is_exclusive(v___x_4589_);
if (v_isSharedCheck_4620_ == 0)
{
v___x_4615_ = v___x_4589_;
v_isShared_4616_ = v_isSharedCheck_4620_;
goto v_resetjp_4614_;
}
else
{
lean_inc(v_a_4613_);
lean_dec(v___x_4589_);
v___x_4615_ = lean_box(0);
v_isShared_4616_ = v_isSharedCheck_4620_;
goto v_resetjp_4614_;
}
v_resetjp_4614_:
{
lean_object* v___x_4618_; 
if (v_isShared_4616_ == 0)
{
v___x_4618_ = v___x_4615_;
goto v_reusejp_4617_;
}
else
{
lean_object* v_reuseFailAlloc_4619_; 
v_reuseFailAlloc_4619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4619_, 0, v_a_4613_);
v___x_4618_ = v_reuseFailAlloc_4619_;
goto v_reusejp_4617_;
}
v_reusejp_4617_:
{
return v___x_4618_;
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
lean_object* v_a_4624_; lean_object* v___x_4626_; uint8_t v_isShared_4627_; uint8_t v_isSharedCheck_4631_; 
v_a_4624_ = lean_ctor_get(v___x_4567_, 0);
v_isSharedCheck_4631_ = !lean_is_exclusive(v___x_4567_);
if (v_isSharedCheck_4631_ == 0)
{
v___x_4626_ = v___x_4567_;
v_isShared_4627_ = v_isSharedCheck_4631_;
goto v_resetjp_4625_;
}
else
{
lean_inc(v_a_4624_);
lean_dec(v___x_4567_);
v___x_4626_ = lean_box(0);
v_isShared_4627_ = v_isSharedCheck_4631_;
goto v_resetjp_4625_;
}
v_resetjp_4625_:
{
lean_object* v___x_4629_; 
if (v_isShared_4627_ == 0)
{
v___x_4629_ = v___x_4626_;
goto v_reusejp_4628_;
}
else
{
lean_object* v_reuseFailAlloc_4630_; 
v_reuseFailAlloc_4630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4630_, 0, v_a_4624_);
v___x_4629_ = v_reuseFailAlloc_4630_;
goto v_reusejp_4628_;
}
v_reusejp_4628_:
{
return v___x_4629_;
}
}
}
}
else
{
lean_object* v_toCold_4632_; lean_object* v_options_4633_; uint8_t v_hasTrace_4634_; 
v_toCold_4632_ = lean_ctor_get(v___y_4560_, 0);
v_options_4633_ = lean_ctor_get(v_toCold_4632_, 2);
v_hasTrace_4634_ = lean_ctor_get_uint8(v_options_4633_, sizeof(void*)*1);
if (v_hasTrace_4634_ == 0)
{
lean_dec(v_a_4563_);
goto v___jp_4446_;
}
else
{
lean_object* v_inheritedTraceOptions_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; uint8_t v___x_4638_; 
v_inheritedTraceOptions_4635_ = lean_ctor_get(v_toCold_4632_, 11);
v___x_4636_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__3));
v___x_4637_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__4, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___closed__4);
v___x_4638_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4635_, v_options_4633_, v___x_4637_);
if (v___x_4638_ == 0)
{
lean_dec(v_a_4563_);
goto v___jp_4446_;
}
else
{
lean_object* v___x_4639_; 
v___x_4639_ = l_Lean_Meta_Grind_Arith_Linear_EqCnstr_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__1(v_a_4563_, v___y_4551_, v___y_4552_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
lean_dec(v_a_4563_);
if (lean_obj_tag(v___x_4639_) == 0)
{
lean_object* v_a_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; 
v_a_4640_ = lean_ctor_get(v___x_4639_, 0);
lean_inc(v_a_4640_);
lean_dec_ref_known(v___x_4639_, 1);
v___x_4641_ = l_Lean_MessageData_ofExpr(v_a_4640_);
v___x_4642_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v___x_4636_, v___x_4641_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
if (lean_obj_tag(v___x_4642_) == 0)
{
lean_dec_ref_known(v___x_4642_, 1);
goto v___jp_4446_;
}
else
{
return v___x_4642_;
}
}
else
{
lean_object* v_a_4643_; lean_object* v___x_4645_; uint8_t v_isShared_4646_; uint8_t v_isSharedCheck_4650_; 
v_a_4643_ = lean_ctor_get(v___x_4639_, 0);
v_isSharedCheck_4650_ = !lean_is_exclusive(v___x_4639_);
if (v_isSharedCheck_4650_ == 0)
{
v___x_4645_ = v___x_4639_;
v_isShared_4646_ = v_isSharedCheck_4650_;
goto v_resetjp_4644_;
}
else
{
lean_inc(v_a_4643_);
lean_dec(v___x_4639_);
v___x_4645_ = lean_box(0);
v_isShared_4646_ = v_isSharedCheck_4650_;
goto v_resetjp_4644_;
}
v_resetjp_4644_:
{
lean_object* v___x_4648_; 
if (v_isShared_4646_ == 0)
{
v___x_4648_ = v___x_4645_;
goto v_reusejp_4647_;
}
else
{
lean_object* v_reuseFailAlloc_4649_; 
v_reuseFailAlloc_4649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4649_, 0, v_a_4643_);
v___x_4648_ = v_reuseFailAlloc_4649_;
goto v_reusejp_4647_;
}
v_reusejp_4647_:
{
return v___x_4648_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4651_; lean_object* v___x_4653_; uint8_t v_isShared_4654_; uint8_t v_isSharedCheck_4658_; 
v_a_4651_ = lean_ctor_get(v___x_4562_, 0);
v_isSharedCheck_4658_ = !lean_is_exclusive(v___x_4562_);
if (v_isSharedCheck_4658_ == 0)
{
v___x_4653_ = v___x_4562_;
v_isShared_4654_ = v_isSharedCheck_4658_;
goto v_resetjp_4652_;
}
else
{
lean_inc(v_a_4651_);
lean_dec(v___x_4562_);
v___x_4653_ = lean_box(0);
v_isShared_4654_ = v_isSharedCheck_4658_;
goto v_resetjp_4652_;
}
v_resetjp_4652_:
{
lean_object* v___x_4656_; 
if (v_isShared_4654_ == 0)
{
v___x_4656_ = v___x_4653_;
goto v_reusejp_4655_;
}
else
{
lean_object* v_reuseFailAlloc_4657_; 
v_reuseFailAlloc_4657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4657_, 0, v_a_4651_);
v___x_4656_ = v_reuseFailAlloc_4657_;
goto v_reusejp_4655_;
}
v_reusejp_4655_:
{
return v___x_4656_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert___boxed(lean_object* v_c_4674_, lean_object* v_a_4675_, lean_object* v_a_4676_, lean_object* v_a_4677_, lean_object* v_a_4678_, lean_object* v_a_4679_, lean_object* v_a_4680_, lean_object* v_a_4681_, lean_object* v_a_4682_, lean_object* v_a_4683_, lean_object* v_a_4684_, lean_object* v_a_4685_, lean_object* v_a_4686_){
_start:
{
lean_object* v_res_4687_; 
v_res_4687_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert(v_c_4674_, v_a_4675_, v_a_4676_, v_a_4677_, v_a_4678_, v_a_4679_, v_a_4680_, v_a_4681_, v_a_4682_, v_a_4683_, v_a_4684_, v_a_4685_);
lean_dec(v_a_4685_);
lean_dec_ref(v_a_4684_);
lean_dec(v_a_4683_);
lean_dec_ref(v_a_4682_);
lean_dec(v_a_4681_);
lean_dec_ref(v_a_4680_);
lean_dec(v_a_4679_);
lean_dec_ref(v_a_4678_);
lean_dec(v_a_4677_);
lean_dec(v_a_4676_);
lean_dec(v_a_4675_);
return v_res_4687_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__2(void){
_start:
{
lean_object* v_cls_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; 
v_cls_4692_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__1));
v___x_4693_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__6));
v___x_4694_ = l_Lean_Name_append(v___x_4693_, v_cls_4692_);
return v___x_4694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg(lean_object* v_a_4695_, lean_object* v_b_4696_, lean_object* v_a_4697_, lean_object* v_a_4698_, lean_object* v_a_4699_, lean_object* v_a_4700_){
_start:
{
lean_object* v_toCold_4705_; lean_object* v_options_4706_; uint8_t v_hasTrace_4707_; 
v_toCold_4705_ = lean_ctor_get(v_a_4699_, 0);
v_options_4706_ = lean_ctor_get(v_toCold_4705_, 2);
v_hasTrace_4707_ = lean_ctor_get_uint8(v_options_4706_, sizeof(void*)*1);
if (v_hasTrace_4707_ == 0)
{
lean_dec_ref(v_b_4696_);
lean_dec_ref(v_a_4695_);
goto v___jp_4702_;
}
else
{
lean_object* v_inheritedTraceOptions_4708_; lean_object* v_cls_4709_; lean_object* v___x_4710_; uint8_t v___x_4711_; 
v_inheritedTraceOptions_4708_ = lean_ctor_get(v_toCold_4705_, 11);
v_cls_4709_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__1));
v___x_4710_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___closed__2);
v___x_4711_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4708_, v_options_4706_, v___x_4710_);
if (v___x_4711_ == 0)
{
lean_dec_ref(v_b_4696_);
lean_dec_ref(v_a_4695_);
goto v___jp_4702_;
}
else
{
lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; 
v___x_4712_ = l_Lean_MessageData_ofExpr(v_a_4695_);
v___x_4713_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar___closed__9);
v___x_4714_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4714_, 0, v___x_4712_);
lean_ctor_set(v___x_4714_, 1, v___x_4713_);
v___x_4715_ = l_Lean_MessageData_ofExpr(v_b_4696_);
v___x_4716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4716_, 0, v___x_4714_);
lean_ctor_set(v___x_4716_, 1, v___x_4715_);
v___x_4717_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Grind_Linarith_Poly_substVar_spec__2___redArg(v_cls_4709_, v___x_4716_, v_a_4697_, v_a_4698_, v_a_4699_, v_a_4700_);
return v___x_4717_;
}
}
v___jp_4702_:
{
lean_object* v___x_4703_; lean_object* v___x_4704_; 
v___x_4703_ = lean_box(0);
v___x_4704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4704_, 0, v___x_4703_);
return v___x_4704_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg___boxed(lean_object* v_a_4718_, lean_object* v_b_4719_, lean_object* v_a_4720_, lean_object* v_a_4721_, lean_object* v_a_4722_, lean_object* v_a_4723_, lean_object* v_a_4724_){
_start:
{
lean_object* v_res_4725_; 
v_res_4725_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg(v_a_4718_, v_b_4719_, v_a_4720_, v_a_4721_, v_a_4722_, v_a_4723_);
lean_dec(v_a_4723_);
lean_dec_ref(v_a_4722_);
lean_dec(v_a_4721_);
lean_dec_ref(v_a_4720_);
return v_res_4725_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq(lean_object* v_a_4726_, lean_object* v_b_4727_, lean_object* v_a_4728_, lean_object* v_a_4729_, lean_object* v_a_4730_, lean_object* v_a_4731_, lean_object* v_a_4732_, lean_object* v_a_4733_, lean_object* v_a_4734_, lean_object* v_a_4735_, lean_object* v_a_4736_, lean_object* v_a_4737_, lean_object* v_a_4738_){
_start:
{
lean_object* v___x_4740_; 
v___x_4740_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg(v_a_4726_, v_b_4727_, v_a_4735_, v_a_4736_, v_a_4737_, v_a_4738_);
return v___x_4740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___boxed(lean_object* v_a_4741_, lean_object* v_b_4742_, lean_object* v_a_4743_, lean_object* v_a_4744_, lean_object* v_a_4745_, lean_object* v_a_4746_, lean_object* v_a_4747_, lean_object* v_a_4748_, lean_object* v_a_4749_, lean_object* v_a_4750_, lean_object* v_a_4751_, lean_object* v_a_4752_, lean_object* v_a_4753_, lean_object* v_a_4754_){
_start:
{
lean_object* v_res_4755_; 
v_res_4755_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq(v_a_4741_, v_b_4742_, v_a_4743_, v_a_4744_, v_a_4745_, v_a_4746_, v_a_4747_, v_a_4748_, v_a_4749_, v_a_4750_, v_a_4751_, v_a_4752_, v_a_4753_);
lean_dec(v_a_4753_);
lean_dec_ref(v_a_4752_);
lean_dec(v_a_4751_);
lean_dec_ref(v_a_4750_);
lean_dec(v_a_4749_);
lean_dec_ref(v_a_4748_);
lean_dec(v_a_4747_);
lean_dec_ref(v_a_4746_);
lean_dec(v_a_4745_);
lean_dec(v_a_4744_);
lean_dec(v_a_4743_);
return v_res_4755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleEq(lean_object* v_a_4756_, lean_object* v_b_4757_, lean_object* v_a_4758_, lean_object* v_a_4759_, lean_object* v_a_4760_, lean_object* v_a_4761_, lean_object* v_a_4762_, lean_object* v_a_4763_, lean_object* v_a_4764_, lean_object* v_a_4765_, lean_object* v_a_4766_, lean_object* v_a_4767_, lean_object* v_a_4768_){
_start:
{
lean_object* v___x_4770_; 
v___x_4770_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_4756_, v_a_4759_);
if (lean_obj_tag(v___x_4770_) == 0)
{
lean_object* v_a_4771_; uint8_t v___x_4772_; lean_object* v___x_4773_; 
v_a_4771_ = lean_ctor_get(v___x_4770_, 0);
lean_inc(v_a_4771_);
lean_dec_ref_known(v___x_4770_, 1);
v___x_4772_ = 0;
lean_inc_ref(v_a_4756_);
v___x_4773_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_a_4756_, v___x_4772_, v_a_4771_, v_a_4758_, v_a_4759_, v_a_4760_, v_a_4761_, v_a_4762_, v_a_4763_, v_a_4764_, v_a_4765_, v_a_4766_, v_a_4767_, v_a_4768_);
if (lean_obj_tag(v___x_4773_) == 0)
{
lean_object* v_a_4774_; lean_object* v___x_4776_; uint8_t v_isShared_4777_; uint8_t v_isSharedCheck_4823_; 
v_a_4774_ = lean_ctor_get(v___x_4773_, 0);
v_isSharedCheck_4823_ = !lean_is_exclusive(v___x_4773_);
if (v_isSharedCheck_4823_ == 0)
{
v___x_4776_ = v___x_4773_;
v_isShared_4777_ = v_isSharedCheck_4823_;
goto v_resetjp_4775_;
}
else
{
lean_inc(v_a_4774_);
lean_dec(v___x_4773_);
v___x_4776_ = lean_box(0);
v_isShared_4777_ = v_isSharedCheck_4823_;
goto v_resetjp_4775_;
}
v_resetjp_4775_:
{
if (lean_obj_tag(v_a_4774_) == 1)
{
lean_object* v_val_4778_; lean_object* v___x_4779_; 
lean_del_object(v___x_4776_);
v_val_4778_ = lean_ctor_get(v_a_4774_, 0);
lean_inc(v_val_4778_);
lean_dec_ref_known(v_a_4774_, 1);
v___x_4779_ = l_Lean_Meta_Grind_getGeneration___redArg(v_b_4757_, v_a_4759_);
if (lean_obj_tag(v___x_4779_) == 0)
{
lean_object* v_a_4780_; lean_object* v___x_4781_; 
v_a_4780_ = lean_ctor_get(v___x_4779_, 0);
lean_inc(v_a_4780_);
lean_dec_ref_known(v___x_4779_, 1);
lean_inc_ref(v_b_4757_);
v___x_4781_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_b_4757_, v___x_4772_, v_a_4780_, v_a_4758_, v_a_4759_, v_a_4760_, v_a_4761_, v_a_4762_, v_a_4763_, v_a_4764_, v_a_4765_, v_a_4766_, v_a_4767_, v_a_4768_);
if (lean_obj_tag(v___x_4781_) == 0)
{
lean_object* v_a_4782_; lean_object* v___x_4784_; uint8_t v_isShared_4785_; uint8_t v_isSharedCheck_4802_; 
v_a_4782_ = lean_ctor_get(v___x_4781_, 0);
v_isSharedCheck_4802_ = !lean_is_exclusive(v___x_4781_);
if (v_isSharedCheck_4802_ == 0)
{
v___x_4784_ = v___x_4781_;
v_isShared_4785_ = v_isSharedCheck_4802_;
goto v_resetjp_4783_;
}
else
{
lean_inc(v_a_4782_);
lean_dec(v___x_4781_);
v___x_4784_ = lean_box(0);
v_isShared_4785_ = v_isSharedCheck_4802_;
goto v_resetjp_4783_;
}
v_resetjp_4783_:
{
if (lean_obj_tag(v_a_4782_) == 1)
{
lean_object* v_val_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; uint8_t v___x_4790_; 
v_val_4786_ = lean_ctor_get(v_a_4782_, 0);
lean_inc_n(v_val_4786_, 2);
lean_dec_ref_known(v_a_4782_, 1);
lean_inc(v_val_4778_);
v___x_4787_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4787_, 0, v_val_4778_);
lean_ctor_set(v___x_4787_, 1, v_val_4786_);
v___x_4788_ = l_Lean_Grind_Linarith_Expr_norm(v___x_4787_);
v___x_4789_ = lean_box(0);
v___x_4790_ = l_Lean_Grind_Linarith_instBEqPoly_beq(v___x_4788_, v___x_4789_);
if (v___x_4790_ == 0)
{
lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; 
lean_del_object(v___x_4784_);
v___x_4791_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4791_, 0, v_a_4756_);
lean_ctor_set(v___x_4791_, 1, v_b_4757_);
lean_ctor_set(v___x_4791_, 2, v_val_4778_);
lean_ctor_set(v___x_4791_, 3, v_val_4786_);
v___x_4792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4792_, 0, v___x_4788_);
lean_ctor_set(v___x_4792_, 1, v___x_4791_);
v___x_4793_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert(v___x_4792_, v_a_4758_, v_a_4759_, v_a_4760_, v_a_4761_, v_a_4762_, v_a_4763_, v_a_4764_, v_a_4765_, v_a_4766_, v_a_4767_, v_a_4768_);
return v___x_4793_;
}
else
{
lean_object* v___x_4794_; lean_object* v___x_4796_; 
lean_dec(v___x_4788_);
lean_dec(v_val_4786_);
lean_dec(v_val_4778_);
lean_dec_ref(v_b_4757_);
lean_dec_ref(v_a_4756_);
v___x_4794_ = lean_box(0);
if (v_isShared_4785_ == 0)
{
lean_ctor_set(v___x_4784_, 0, v___x_4794_);
v___x_4796_ = v___x_4784_;
goto v_reusejp_4795_;
}
else
{
lean_object* v_reuseFailAlloc_4797_; 
v_reuseFailAlloc_4797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4797_, 0, v___x_4794_);
v___x_4796_ = v_reuseFailAlloc_4797_;
goto v_reusejp_4795_;
}
v_reusejp_4795_:
{
return v___x_4796_;
}
}
}
else
{
lean_object* v___x_4798_; lean_object* v___x_4800_; 
lean_dec(v_a_4782_);
lean_dec(v_val_4778_);
lean_dec_ref(v_b_4757_);
lean_dec_ref(v_a_4756_);
v___x_4798_ = lean_box(0);
if (v_isShared_4785_ == 0)
{
lean_ctor_set(v___x_4784_, 0, v___x_4798_);
v___x_4800_ = v___x_4784_;
goto v_reusejp_4799_;
}
else
{
lean_object* v_reuseFailAlloc_4801_; 
v_reuseFailAlloc_4801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4801_, 0, v___x_4798_);
v___x_4800_ = v_reuseFailAlloc_4801_;
goto v_reusejp_4799_;
}
v_reusejp_4799_:
{
return v___x_4800_;
}
}
}
}
else
{
lean_object* v_a_4803_; lean_object* v___x_4805_; uint8_t v_isShared_4806_; uint8_t v_isSharedCheck_4810_; 
lean_dec(v_val_4778_);
lean_dec_ref(v_b_4757_);
lean_dec_ref(v_a_4756_);
v_a_4803_ = lean_ctor_get(v___x_4781_, 0);
v_isSharedCheck_4810_ = !lean_is_exclusive(v___x_4781_);
if (v_isSharedCheck_4810_ == 0)
{
v___x_4805_ = v___x_4781_;
v_isShared_4806_ = v_isSharedCheck_4810_;
goto v_resetjp_4804_;
}
else
{
lean_inc(v_a_4803_);
lean_dec(v___x_4781_);
v___x_4805_ = lean_box(0);
v_isShared_4806_ = v_isSharedCheck_4810_;
goto v_resetjp_4804_;
}
v_resetjp_4804_:
{
lean_object* v___x_4808_; 
if (v_isShared_4806_ == 0)
{
v___x_4808_ = v___x_4805_;
goto v_reusejp_4807_;
}
else
{
lean_object* v_reuseFailAlloc_4809_; 
v_reuseFailAlloc_4809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4809_, 0, v_a_4803_);
v___x_4808_ = v_reuseFailAlloc_4809_;
goto v_reusejp_4807_;
}
v_reusejp_4807_:
{
return v___x_4808_;
}
}
}
}
else
{
lean_object* v_a_4811_; lean_object* v___x_4813_; uint8_t v_isShared_4814_; uint8_t v_isSharedCheck_4818_; 
lean_dec(v_val_4778_);
lean_dec_ref(v_b_4757_);
lean_dec_ref(v_a_4756_);
v_a_4811_ = lean_ctor_get(v___x_4779_, 0);
v_isSharedCheck_4818_ = !lean_is_exclusive(v___x_4779_);
if (v_isSharedCheck_4818_ == 0)
{
v___x_4813_ = v___x_4779_;
v_isShared_4814_ = v_isSharedCheck_4818_;
goto v_resetjp_4812_;
}
else
{
lean_inc(v_a_4811_);
lean_dec(v___x_4779_);
v___x_4813_ = lean_box(0);
v_isShared_4814_ = v_isSharedCheck_4818_;
goto v_resetjp_4812_;
}
v_resetjp_4812_:
{
lean_object* v___x_4816_; 
if (v_isShared_4814_ == 0)
{
v___x_4816_ = v___x_4813_;
goto v_reusejp_4815_;
}
else
{
lean_object* v_reuseFailAlloc_4817_; 
v_reuseFailAlloc_4817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4817_, 0, v_a_4811_);
v___x_4816_ = v_reuseFailAlloc_4817_;
goto v_reusejp_4815_;
}
v_reusejp_4815_:
{
return v___x_4816_;
}
}
}
}
else
{
lean_object* v___x_4819_; lean_object* v___x_4821_; 
lean_dec(v_a_4774_);
lean_dec_ref(v_b_4757_);
lean_dec_ref(v_a_4756_);
v___x_4819_ = lean_box(0);
if (v_isShared_4777_ == 0)
{
lean_ctor_set(v___x_4776_, 0, v___x_4819_);
v___x_4821_ = v___x_4776_;
goto v_reusejp_4820_;
}
else
{
lean_object* v_reuseFailAlloc_4822_; 
v_reuseFailAlloc_4822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4822_, 0, v___x_4819_);
v___x_4821_ = v_reuseFailAlloc_4822_;
goto v_reusejp_4820_;
}
v_reusejp_4820_:
{
return v___x_4821_;
}
}
}
}
else
{
lean_object* v_a_4824_; lean_object* v___x_4826_; uint8_t v_isShared_4827_; uint8_t v_isSharedCheck_4831_; 
lean_dec_ref(v_b_4757_);
lean_dec_ref(v_a_4756_);
v_a_4824_ = lean_ctor_get(v___x_4773_, 0);
v_isSharedCheck_4831_ = !lean_is_exclusive(v___x_4773_);
if (v_isSharedCheck_4831_ == 0)
{
v___x_4826_ = v___x_4773_;
v_isShared_4827_ = v_isSharedCheck_4831_;
goto v_resetjp_4825_;
}
else
{
lean_inc(v_a_4824_);
lean_dec(v___x_4773_);
v___x_4826_ = lean_box(0);
v_isShared_4827_ = v_isSharedCheck_4831_;
goto v_resetjp_4825_;
}
v_resetjp_4825_:
{
lean_object* v___x_4829_; 
if (v_isShared_4827_ == 0)
{
v___x_4829_ = v___x_4826_;
goto v_reusejp_4828_;
}
else
{
lean_object* v_reuseFailAlloc_4830_; 
v_reuseFailAlloc_4830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4830_, 0, v_a_4824_);
v___x_4829_ = v_reuseFailAlloc_4830_;
goto v_reusejp_4828_;
}
v_reusejp_4828_:
{
return v___x_4829_;
}
}
}
}
else
{
lean_object* v_a_4832_; lean_object* v___x_4834_; uint8_t v_isShared_4835_; uint8_t v_isSharedCheck_4839_; 
lean_dec_ref(v_b_4757_);
lean_dec_ref(v_a_4756_);
v_a_4832_ = lean_ctor_get(v___x_4770_, 0);
v_isSharedCheck_4839_ = !lean_is_exclusive(v___x_4770_);
if (v_isSharedCheck_4839_ == 0)
{
v___x_4834_ = v___x_4770_;
v_isShared_4835_ = v_isSharedCheck_4839_;
goto v_resetjp_4833_;
}
else
{
lean_inc(v_a_4832_);
lean_dec(v___x_4770_);
v___x_4834_ = lean_box(0);
v_isShared_4835_ = v_isSharedCheck_4839_;
goto v_resetjp_4833_;
}
v_resetjp_4833_:
{
lean_object* v___x_4837_; 
if (v_isShared_4835_ == 0)
{
v___x_4837_ = v___x_4834_;
goto v_reusejp_4836_;
}
else
{
lean_object* v_reuseFailAlloc_4838_; 
v_reuseFailAlloc_4838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4838_, 0, v_a_4832_);
v___x_4837_ = v_reuseFailAlloc_4838_;
goto v_reusejp_4836_;
}
v_reusejp_4836_:
{
return v___x_4837_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleEq___boxed(lean_object* v_a_4840_, lean_object* v_b_4841_, lean_object* v_a_4842_, lean_object* v_a_4843_, lean_object* v_a_4844_, lean_object* v_a_4845_, lean_object* v_a_4846_, lean_object* v_a_4847_, lean_object* v_a_4848_, lean_object* v_a_4849_, lean_object* v_a_4850_, lean_object* v_a_4851_, lean_object* v_a_4852_, lean_object* v_a_4853_){
_start:
{
lean_object* v_res_4854_; 
v_res_4854_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleEq(v_a_4840_, v_b_4841_, v_a_4842_, v_a_4843_, v_a_4844_, v_a_4845_, v_a_4846_, v_a_4847_, v_a_4848_, v_a_4849_, v_a_4850_, v_a_4851_, v_a_4852_);
lean_dec(v_a_4852_);
lean_dec_ref(v_a_4851_);
lean_dec(v_a_4850_);
lean_dec_ref(v_a_4849_);
lean_dec(v_a_4848_);
lean_dec_ref(v_a_4847_);
lean_dec(v_a_4846_);
lean_dec_ref(v_a_4845_);
lean_dec(v_a_4844_);
lean_dec(v_a_4843_);
lean_dec(v_a_4842_);
return v_res_4854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleEq_x27(lean_object* v_a_4855_, lean_object* v_b_4856_, lean_object* v_a_4857_, lean_object* v_a_4858_, lean_object* v_a_4859_, lean_object* v_a_4860_, lean_object* v_a_4861_, lean_object* v_a_4862_, lean_object* v_a_4863_, lean_object* v_a_4864_, lean_object* v_a_4865_, lean_object* v_a_4866_, lean_object* v_a_4867_){
_start:
{
lean_object* v___x_4869_; 
v___x_4869_ = l_Lean_Meta_Grind_Arith_Linear_getNatStruct(v_a_4857_, v_a_4858_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_);
if (lean_obj_tag(v___x_4869_) == 0)
{
lean_object* v_a_4870_; lean_object* v___x_4871_; 
v_a_4870_ = lean_ctor_get(v___x_4869_, 0);
lean_inc(v_a_4870_);
lean_dec_ref_known(v___x_4869_, 1);
lean_inc_ref(v_a_4855_);
v___x_4871_ = l_Lean_Meta_Grind_Arith_Linear_ofNatModule(v_a_4855_, v_a_4857_, v_a_4858_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_);
if (lean_obj_tag(v___x_4871_) == 0)
{
lean_object* v_a_4872_; lean_object* v_fst_4873_; lean_object* v___x_4874_; 
v_a_4872_ = lean_ctor_get(v___x_4871_, 0);
lean_inc(v_a_4872_);
lean_dec_ref_known(v___x_4871_, 1);
v_fst_4873_ = lean_ctor_get(v_a_4872_, 0);
lean_inc(v_fst_4873_);
lean_dec(v_a_4872_);
lean_inc_ref(v_b_4856_);
v___x_4874_ = l_Lean_Meta_Grind_Arith_Linear_ofNatModule(v_b_4856_, v_a_4857_, v_a_4858_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_);
if (lean_obj_tag(v___x_4874_) == 0)
{
lean_object* v_a_4875_; lean_object* v_fst_4876_; lean_object* v___x_4878_; uint8_t v_isShared_4879_; uint8_t v_isSharedCheck_4959_; 
v_a_4875_ = lean_ctor_get(v___x_4874_, 0);
lean_inc(v_a_4875_);
lean_dec_ref_known(v___x_4874_, 1);
v_fst_4876_ = lean_ctor_get(v_a_4875_, 0);
v_isSharedCheck_4959_ = !lean_is_exclusive(v_a_4875_);
if (v_isSharedCheck_4959_ == 0)
{
lean_object* v_unused_4960_; 
v_unused_4960_ = lean_ctor_get(v_a_4875_, 1);
lean_dec(v_unused_4960_);
v___x_4878_ = v_a_4875_;
v_isShared_4879_ = v_isSharedCheck_4959_;
goto v_resetjp_4877_;
}
else
{
lean_inc(v_fst_4876_);
lean_dec(v_a_4875_);
v___x_4878_ = lean_box(0);
v_isShared_4879_ = v_isSharedCheck_4959_;
goto v_resetjp_4877_;
}
v_resetjp_4877_:
{
lean_object* v_id_4880_; lean_object* v_structId_4881_; lean_object* v___x_4882_; 
v_id_4880_ = lean_ctor_get(v_a_4870_, 0);
lean_inc(v_id_4880_);
v_structId_4881_ = lean_ctor_get(v_a_4870_, 1);
lean_inc(v_structId_4881_);
lean_dec(v_a_4870_);
v___x_4882_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_4855_, v_a_4858_);
if (lean_obj_tag(v___x_4882_) == 0)
{
lean_object* v_a_4883_; uint8_t v___x_4884_; lean_object* v___x_4885_; 
v_a_4883_ = lean_ctor_get(v___x_4882_, 0);
lean_inc(v_a_4883_);
lean_dec_ref_known(v___x_4882_, 1);
v___x_4884_ = 0;
v___x_4885_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_fst_4873_, v___x_4884_, v_a_4883_, v_structId_4881_, v_a_4858_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_);
if (lean_obj_tag(v___x_4885_) == 0)
{
lean_object* v_a_4886_; lean_object* v___x_4888_; uint8_t v_isShared_4889_; uint8_t v_isSharedCheck_4942_; 
v_a_4886_ = lean_ctor_get(v___x_4885_, 0);
v_isSharedCheck_4942_ = !lean_is_exclusive(v___x_4885_);
if (v_isSharedCheck_4942_ == 0)
{
v___x_4888_ = v___x_4885_;
v_isShared_4889_ = v_isSharedCheck_4942_;
goto v_resetjp_4887_;
}
else
{
lean_inc(v_a_4886_);
lean_dec(v___x_4885_);
v___x_4888_ = lean_box(0);
v_isShared_4889_ = v_isSharedCheck_4942_;
goto v_resetjp_4887_;
}
v_resetjp_4887_:
{
if (lean_obj_tag(v_a_4886_) == 1)
{
lean_object* v_val_4890_; lean_object* v___x_4891_; 
lean_del_object(v___x_4888_);
v_val_4890_ = lean_ctor_get(v_a_4886_, 0);
lean_inc(v_val_4890_);
lean_dec_ref_known(v_a_4886_, 1);
v___x_4891_ = l_Lean_Meta_Grind_getGeneration___redArg(v_b_4856_, v_a_4858_);
if (lean_obj_tag(v___x_4891_) == 0)
{
lean_object* v_a_4892_; lean_object* v___x_4893_; 
v_a_4892_ = lean_ctor_get(v___x_4891_, 0);
lean_inc(v_a_4892_);
lean_dec_ref_known(v___x_4891_, 1);
v___x_4893_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_fst_4876_, v___x_4884_, v_a_4892_, v_structId_4881_, v_a_4858_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_);
if (lean_obj_tag(v___x_4893_) == 0)
{
lean_object* v_a_4894_; lean_object* v___x_4896_; uint8_t v_isShared_4897_; uint8_t v_isSharedCheck_4921_; 
v_a_4894_ = lean_ctor_get(v___x_4893_, 0);
v_isSharedCheck_4921_ = !lean_is_exclusive(v___x_4893_);
if (v_isSharedCheck_4921_ == 0)
{
v___x_4896_ = v___x_4893_;
v_isShared_4897_ = v_isSharedCheck_4921_;
goto v_resetjp_4895_;
}
else
{
lean_inc(v_a_4894_);
lean_dec(v___x_4893_);
v___x_4896_ = lean_box(0);
v_isShared_4897_ = v_isSharedCheck_4921_;
goto v_resetjp_4895_;
}
v_resetjp_4895_:
{
if (lean_obj_tag(v_a_4894_) == 1)
{
lean_object* v_val_4898_; lean_object* v___x_4900_; 
v_val_4898_ = lean_ctor_get(v_a_4894_, 0);
lean_inc_n(v_val_4898_, 2);
lean_dec_ref_known(v_a_4894_, 1);
lean_inc(v_val_4890_);
if (v_isShared_4879_ == 0)
{
lean_ctor_set_tag(v___x_4878_, 3);
lean_ctor_set(v___x_4878_, 1, v_val_4898_);
lean_ctor_set(v___x_4878_, 0, v_val_4890_);
v___x_4900_ = v___x_4878_;
goto v_reusejp_4899_;
}
else
{
lean_object* v_reuseFailAlloc_4916_; 
v_reuseFailAlloc_4916_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4916_, 0, v_val_4890_);
lean_ctor_set(v_reuseFailAlloc_4916_, 1, v_val_4898_);
v___x_4900_ = v_reuseFailAlloc_4916_;
goto v_reusejp_4899_;
}
v_reusejp_4899_:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; uint8_t v___x_4903_; 
v___x_4901_ = l_Lean_Grind_Linarith_Expr_norm(v___x_4900_);
v___x_4902_ = lean_box(0);
v___x_4903_ = l_Lean_Grind_Linarith_instBEqPoly_beq(v___x_4901_, v___x_4902_);
if (v___x_4903_ == 0)
{
lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; 
lean_del_object(v___x_4896_);
lean_inc(v_val_4898_);
lean_inc(v_val_4890_);
lean_inc(v_id_4880_);
lean_inc_ref(v_b_4856_);
lean_inc_ref(v_a_4855_);
v___x_4904_ = lean_alloc_ctor(11, 5, 0);
lean_ctor_set(v___x_4904_, 0, v_a_4855_);
lean_ctor_set(v___x_4904_, 1, v_b_4856_);
lean_ctor_set(v___x_4904_, 2, v_id_4880_);
lean_ctor_set(v___x_4904_, 3, v_val_4890_);
lean_ctor_set(v___x_4904_, 4, v_val_4898_);
lean_inc(v___x_4901_);
v___x_4905_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4905_, 0, v___x_4901_);
lean_ctor_set(v___x_4905_, 1, v___x_4904_);
lean_ctor_set_uint8(v___x_4905_, sizeof(void*)*2, v___x_4884_);
v___x_4906_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_4905_, v_structId_4881_, v_a_4858_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_);
if (lean_obj_tag(v___x_4906_) == 0)
{
lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; 
lean_dec_ref_known(v___x_4906_, 1);
v___x_4907_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27___closed__0);
v___x_4908_ = l_Lean_Grind_Linarith_Poly_mul(v___x_4901_, v___x_4907_);
v___x_4909_ = lean_alloc_ctor(11, 5, 0);
lean_ctor_set(v___x_4909_, 0, v_b_4856_);
lean_ctor_set(v___x_4909_, 1, v_a_4855_);
lean_ctor_set(v___x_4909_, 2, v_id_4880_);
lean_ctor_set(v___x_4909_, 3, v_val_4898_);
lean_ctor_set(v___x_4909_, 4, v_val_4890_);
v___x_4910_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4910_, 0, v___x_4908_);
lean_ctor_set(v___x_4910_, 1, v___x_4909_);
lean_ctor_set_uint8(v___x_4910_, sizeof(void*)*2, v___x_4884_);
v___x_4911_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_4910_, v_structId_4881_, v_a_4858_, v_a_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_);
lean_dec(v_structId_4881_);
return v___x_4911_;
}
else
{
lean_dec(v___x_4901_);
lean_dec(v_val_4898_);
lean_dec(v_val_4890_);
lean_dec(v_structId_4881_);
lean_dec(v_id_4880_);
lean_dec_ref(v_b_4856_);
lean_dec_ref(v_a_4855_);
return v___x_4906_;
}
}
else
{
lean_object* v___x_4912_; lean_object* v___x_4914_; 
lean_dec(v___x_4901_);
lean_dec(v_val_4898_);
lean_dec(v_val_4890_);
lean_dec(v_structId_4881_);
lean_dec(v_id_4880_);
lean_dec_ref(v_b_4856_);
lean_dec_ref(v_a_4855_);
v___x_4912_ = lean_box(0);
if (v_isShared_4897_ == 0)
{
lean_ctor_set(v___x_4896_, 0, v___x_4912_);
v___x_4914_ = v___x_4896_;
goto v_reusejp_4913_;
}
else
{
lean_object* v_reuseFailAlloc_4915_; 
v_reuseFailAlloc_4915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4915_, 0, v___x_4912_);
v___x_4914_ = v_reuseFailAlloc_4915_;
goto v_reusejp_4913_;
}
v_reusejp_4913_:
{
return v___x_4914_;
}
}
}
}
else
{
lean_object* v___x_4917_; lean_object* v___x_4919_; 
lean_dec(v_a_4894_);
lean_dec(v_val_4890_);
lean_dec(v_structId_4881_);
lean_dec(v_id_4880_);
lean_del_object(v___x_4878_);
lean_dec_ref(v_b_4856_);
lean_dec_ref(v_a_4855_);
v___x_4917_ = lean_box(0);
if (v_isShared_4897_ == 0)
{
lean_ctor_set(v___x_4896_, 0, v___x_4917_);
v___x_4919_ = v___x_4896_;
goto v_reusejp_4918_;
}
else
{
lean_object* v_reuseFailAlloc_4920_; 
v_reuseFailAlloc_4920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4920_, 0, v___x_4917_);
v___x_4919_ = v_reuseFailAlloc_4920_;
goto v_reusejp_4918_;
}
v_reusejp_4918_:
{
return v___x_4919_;
}
}
}
}
else
{
lean_object* v_a_4922_; lean_object* v___x_4924_; uint8_t v_isShared_4925_; uint8_t v_isSharedCheck_4929_; 
lean_dec(v_val_4890_);
lean_dec(v_structId_4881_);
lean_dec(v_id_4880_);
lean_del_object(v___x_4878_);
lean_dec_ref(v_b_4856_);
lean_dec_ref(v_a_4855_);
v_a_4922_ = lean_ctor_get(v___x_4893_, 0);
v_isSharedCheck_4929_ = !lean_is_exclusive(v___x_4893_);
if (v_isSharedCheck_4929_ == 0)
{
v___x_4924_ = v___x_4893_;
v_isShared_4925_ = v_isSharedCheck_4929_;
goto v_resetjp_4923_;
}
else
{
lean_inc(v_a_4922_);
lean_dec(v___x_4893_);
v___x_4924_ = lean_box(0);
v_isShared_4925_ = v_isSharedCheck_4929_;
goto v_resetjp_4923_;
}
v_resetjp_4923_:
{
lean_object* v___x_4927_; 
if (v_isShared_4925_ == 0)
{
v___x_4927_ = v___x_4924_;
goto v_reusejp_4926_;
}
else
{
lean_object* v_reuseFailAlloc_4928_; 
v_reuseFailAlloc_4928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4928_, 0, v_a_4922_);
v___x_4927_ = v_reuseFailAlloc_4928_;
goto v_reusejp_4926_;
}
v_reusejp_4926_:
{
return v___x_4927_;
}
}
}
}
else
{
lean_object* v_a_4930_; lean_object* v___x_4932_; uint8_t v_isShared_4933_; uint8_t v_isSharedCheck_4937_; 
lean_dec(v_val_4890_);
lean_dec(v_structId_4881_);
lean_dec(v_id_4880_);
lean_del_object(v___x_4878_);
lean_dec(v_fst_4876_);
lean_dec_ref(v_b_4856_);
lean_dec_ref(v_a_4855_);
v_a_4930_ = lean_ctor_get(v___x_4891_, 0);
v_isSharedCheck_4937_ = !lean_is_exclusive(v___x_4891_);
if (v_isSharedCheck_4937_ == 0)
{
v___x_4932_ = v___x_4891_;
v_isShared_4933_ = v_isSharedCheck_4937_;
goto v_resetjp_4931_;
}
else
{
lean_inc(v_a_4930_);
lean_dec(v___x_4891_);
v___x_4932_ = lean_box(0);
v_isShared_4933_ = v_isSharedCheck_4937_;
goto v_resetjp_4931_;
}
v_resetjp_4931_:
{
lean_object* v___x_4935_; 
if (v_isShared_4933_ == 0)
{
v___x_4935_ = v___x_4932_;
goto v_reusejp_4934_;
}
else
{
lean_object* v_reuseFailAlloc_4936_; 
v_reuseFailAlloc_4936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4936_, 0, v_a_4930_);
v___x_4935_ = v_reuseFailAlloc_4936_;
goto v_reusejp_4934_;
}
v_reusejp_4934_:
{
return v___x_4935_;
}
}
}
}
else
{
lean_object* v___x_4938_; lean_object* v___x_4940_; 
lean_dec(v_a_4886_);
lean_dec(v_structId_4881_);
lean_dec(v_id_4880_);
lean_del_object(v___x_4878_);
lean_dec(v_fst_4876_);
lean_dec_ref(v_b_4856_);
lean_dec_ref(v_a_4855_);
v___x_4938_ = lean_box(0);
if (v_isShared_4889_ == 0)
{
lean_ctor_set(v___x_4888_, 0, v___x_4938_);
v___x_4940_ = v___x_4888_;
goto v_reusejp_4939_;
}
else
{
lean_object* v_reuseFailAlloc_4941_; 
v_reuseFailAlloc_4941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4941_, 0, v___x_4938_);
v___x_4940_ = v_reuseFailAlloc_4941_;
goto v_reusejp_4939_;
}
v_reusejp_4939_:
{
return v___x_4940_;
}
}
}
}
else
{
lean_object* v_a_4943_; lean_object* v___x_4945_; uint8_t v_isShared_4946_; uint8_t v_isSharedCheck_4950_; 
lean_dec(v_structId_4881_);
lean_dec(v_id_4880_);
lean_del_object(v___x_4878_);
lean_dec(v_fst_4876_);
lean_dec_ref(v_b_4856_);
lean_dec_ref(v_a_4855_);
v_a_4943_ = lean_ctor_get(v___x_4885_, 0);
v_isSharedCheck_4950_ = !lean_is_exclusive(v___x_4885_);
if (v_isSharedCheck_4950_ == 0)
{
v___x_4945_ = v___x_4885_;
v_isShared_4946_ = v_isSharedCheck_4950_;
goto v_resetjp_4944_;
}
else
{
lean_inc(v_a_4943_);
lean_dec(v___x_4885_);
v___x_4945_ = lean_box(0);
v_isShared_4946_ = v_isSharedCheck_4950_;
goto v_resetjp_4944_;
}
v_resetjp_4944_:
{
lean_object* v___x_4948_; 
if (v_isShared_4946_ == 0)
{
v___x_4948_ = v___x_4945_;
goto v_reusejp_4947_;
}
else
{
lean_object* v_reuseFailAlloc_4949_; 
v_reuseFailAlloc_4949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4949_, 0, v_a_4943_);
v___x_4948_ = v_reuseFailAlloc_4949_;
goto v_reusejp_4947_;
}
v_reusejp_4947_:
{
return v___x_4948_;
}
}
}
}
else
{
lean_object* v_a_4951_; lean_object* v___x_4953_; uint8_t v_isShared_4954_; uint8_t v_isSharedCheck_4958_; 
lean_dec(v_structId_4881_);
lean_dec(v_id_4880_);
lean_del_object(v___x_4878_);
lean_dec(v_fst_4876_);
lean_dec(v_fst_4873_);
lean_dec_ref(v_b_4856_);
lean_dec_ref(v_a_4855_);
v_a_4951_ = lean_ctor_get(v___x_4882_, 0);
v_isSharedCheck_4958_ = !lean_is_exclusive(v___x_4882_);
if (v_isSharedCheck_4958_ == 0)
{
v___x_4953_ = v___x_4882_;
v_isShared_4954_ = v_isSharedCheck_4958_;
goto v_resetjp_4952_;
}
else
{
lean_inc(v_a_4951_);
lean_dec(v___x_4882_);
v___x_4953_ = lean_box(0);
v_isShared_4954_ = v_isSharedCheck_4958_;
goto v_resetjp_4952_;
}
v_resetjp_4952_:
{
lean_object* v___x_4956_; 
if (v_isShared_4954_ == 0)
{
v___x_4956_ = v___x_4953_;
goto v_reusejp_4955_;
}
else
{
lean_object* v_reuseFailAlloc_4957_; 
v_reuseFailAlloc_4957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4957_, 0, v_a_4951_);
v___x_4956_ = v_reuseFailAlloc_4957_;
goto v_reusejp_4955_;
}
v_reusejp_4955_:
{
return v___x_4956_;
}
}
}
}
}
else
{
lean_object* v_a_4961_; lean_object* v___x_4963_; uint8_t v_isShared_4964_; uint8_t v_isSharedCheck_4968_; 
lean_dec(v_fst_4873_);
lean_dec(v_a_4870_);
lean_dec_ref(v_b_4856_);
lean_dec_ref(v_a_4855_);
v_a_4961_ = lean_ctor_get(v___x_4874_, 0);
v_isSharedCheck_4968_ = !lean_is_exclusive(v___x_4874_);
if (v_isSharedCheck_4968_ == 0)
{
v___x_4963_ = v___x_4874_;
v_isShared_4964_ = v_isSharedCheck_4968_;
goto v_resetjp_4962_;
}
else
{
lean_inc(v_a_4961_);
lean_dec(v___x_4874_);
v___x_4963_ = lean_box(0);
v_isShared_4964_ = v_isSharedCheck_4968_;
goto v_resetjp_4962_;
}
v_resetjp_4962_:
{
lean_object* v___x_4966_; 
if (v_isShared_4964_ == 0)
{
v___x_4966_ = v___x_4963_;
goto v_reusejp_4965_;
}
else
{
lean_object* v_reuseFailAlloc_4967_; 
v_reuseFailAlloc_4967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4967_, 0, v_a_4961_);
v___x_4966_ = v_reuseFailAlloc_4967_;
goto v_reusejp_4965_;
}
v_reusejp_4965_:
{
return v___x_4966_;
}
}
}
}
else
{
lean_object* v_a_4969_; lean_object* v___x_4971_; uint8_t v_isShared_4972_; uint8_t v_isSharedCheck_4976_; 
lean_dec(v_a_4870_);
lean_dec_ref(v_b_4856_);
lean_dec_ref(v_a_4855_);
v_a_4969_ = lean_ctor_get(v___x_4871_, 0);
v_isSharedCheck_4976_ = !lean_is_exclusive(v___x_4871_);
if (v_isSharedCheck_4976_ == 0)
{
v___x_4971_ = v___x_4871_;
v_isShared_4972_ = v_isSharedCheck_4976_;
goto v_resetjp_4970_;
}
else
{
lean_inc(v_a_4969_);
lean_dec(v___x_4871_);
v___x_4971_ = lean_box(0);
v_isShared_4972_ = v_isSharedCheck_4976_;
goto v_resetjp_4970_;
}
v_resetjp_4970_:
{
lean_object* v___x_4974_; 
if (v_isShared_4972_ == 0)
{
v___x_4974_ = v___x_4971_;
goto v_reusejp_4973_;
}
else
{
lean_object* v_reuseFailAlloc_4975_; 
v_reuseFailAlloc_4975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4975_, 0, v_a_4969_);
v___x_4974_ = v_reuseFailAlloc_4975_;
goto v_reusejp_4973_;
}
v_reusejp_4973_:
{
return v___x_4974_;
}
}
}
}
else
{
lean_object* v_a_4977_; lean_object* v___x_4979_; uint8_t v_isShared_4980_; uint8_t v_isSharedCheck_4984_; 
lean_dec_ref(v_b_4856_);
lean_dec_ref(v_a_4855_);
v_a_4977_ = lean_ctor_get(v___x_4869_, 0);
v_isSharedCheck_4984_ = !lean_is_exclusive(v___x_4869_);
if (v_isSharedCheck_4984_ == 0)
{
v___x_4979_ = v___x_4869_;
v_isShared_4980_ = v_isSharedCheck_4984_;
goto v_resetjp_4978_;
}
else
{
lean_inc(v_a_4977_);
lean_dec(v___x_4869_);
v___x_4979_ = lean_box(0);
v_isShared_4980_ = v_isSharedCheck_4984_;
goto v_resetjp_4978_;
}
v_resetjp_4978_:
{
lean_object* v___x_4982_; 
if (v_isShared_4980_ == 0)
{
v___x_4982_ = v___x_4979_;
goto v_reusejp_4981_;
}
else
{
lean_object* v_reuseFailAlloc_4983_; 
v_reuseFailAlloc_4983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4983_, 0, v_a_4977_);
v___x_4982_ = v_reuseFailAlloc_4983_;
goto v_reusejp_4981_;
}
v_reusejp_4981_:
{
return v___x_4982_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleEq_x27___boxed(lean_object* v_a_4985_, lean_object* v_b_4986_, lean_object* v_a_4987_, lean_object* v_a_4988_, lean_object* v_a_4989_, lean_object* v_a_4990_, lean_object* v_a_4991_, lean_object* v_a_4992_, lean_object* v_a_4993_, lean_object* v_a_4994_, lean_object* v_a_4995_, lean_object* v_a_4996_, lean_object* v_a_4997_, lean_object* v_a_4998_){
_start:
{
lean_object* v_res_4999_; 
v_res_4999_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleEq_x27(v_a_4985_, v_b_4986_, v_a_4987_, v_a_4988_, v_a_4989_, v_a_4990_, v_a_4991_, v_a_4992_, v_a_4993_, v_a_4994_, v_a_4995_, v_a_4996_, v_a_4997_);
lean_dec(v_a_4997_);
lean_dec_ref(v_a_4996_);
lean_dec(v_a_4995_);
lean_dec_ref(v_a_4994_);
lean_dec(v_a_4993_);
lean_dec_ref(v_a_4992_);
lean_dec(v_a_4991_);
lean_dec_ref(v_a_4990_);
lean_dec(v_a_4989_);
lean_dec(v_a_4988_);
lean_dec(v_a_4987_);
return v_res_4999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleEq(lean_object* v_a_5000_, lean_object* v_b_5001_, lean_object* v_a_5002_, lean_object* v_a_5003_, lean_object* v_a_5004_, lean_object* v_a_5005_, lean_object* v_a_5006_, lean_object* v_a_5007_, lean_object* v_a_5008_, lean_object* v_a_5009_, lean_object* v_a_5010_, lean_object* v_a_5011_, lean_object* v_a_5012_){
_start:
{
lean_object* v___x_5014_; 
v___x_5014_ = l_Lean_Meta_Grind_Arith_Linear_getNatStruct(v_a_5002_, v_a_5003_, v_a_5004_, v_a_5005_, v_a_5006_, v_a_5007_, v_a_5008_, v_a_5009_, v_a_5010_, v_a_5011_, v_a_5012_);
if (lean_obj_tag(v___x_5014_) == 0)
{
lean_object* v_a_5015_; lean_object* v___x_5016_; 
v_a_5015_ = lean_ctor_get(v___x_5014_, 0);
lean_inc(v_a_5015_);
lean_dec_ref_known(v___x_5014_, 1);
lean_inc_ref(v_a_5000_);
v___x_5016_ = l_Lean_Meta_Grind_Arith_Linear_ofNatModule(v_a_5000_, v_a_5002_, v_a_5003_, v_a_5004_, v_a_5005_, v_a_5006_, v_a_5007_, v_a_5008_, v_a_5009_, v_a_5010_, v_a_5011_, v_a_5012_);
if (lean_obj_tag(v___x_5016_) == 0)
{
lean_object* v_a_5017_; lean_object* v_fst_5018_; lean_object* v___x_5020_; uint8_t v_isShared_5021_; uint8_t v_isSharedCheck_5114_; 
v_a_5017_ = lean_ctor_get(v___x_5016_, 0);
lean_inc(v_a_5017_);
lean_dec_ref_known(v___x_5016_, 1);
v_fst_5018_ = lean_ctor_get(v_a_5017_, 0);
v_isSharedCheck_5114_ = !lean_is_exclusive(v_a_5017_);
if (v_isSharedCheck_5114_ == 0)
{
lean_object* v_unused_5115_; 
v_unused_5115_ = lean_ctor_get(v_a_5017_, 1);
lean_dec(v_unused_5115_);
v___x_5020_ = v_a_5017_;
v_isShared_5021_ = v_isSharedCheck_5114_;
goto v_resetjp_5019_;
}
else
{
lean_inc(v_fst_5018_);
lean_dec(v_a_5017_);
v___x_5020_ = lean_box(0);
v_isShared_5021_ = v_isSharedCheck_5114_;
goto v_resetjp_5019_;
}
v_resetjp_5019_:
{
lean_object* v___x_5022_; 
lean_inc_ref(v_b_5001_);
v___x_5022_ = l_Lean_Meta_Grind_Arith_Linear_ofNatModule(v_b_5001_, v_a_5002_, v_a_5003_, v_a_5004_, v_a_5005_, v_a_5006_, v_a_5007_, v_a_5008_, v_a_5009_, v_a_5010_, v_a_5011_, v_a_5012_);
if (lean_obj_tag(v___x_5022_) == 0)
{
lean_object* v_a_5023_; lean_object* v_fst_5024_; lean_object* v___x_5026_; uint8_t v_isShared_5027_; uint8_t v_isSharedCheck_5104_; 
v_a_5023_ = lean_ctor_get(v___x_5022_, 0);
lean_inc(v_a_5023_);
lean_dec_ref_known(v___x_5022_, 1);
v_fst_5024_ = lean_ctor_get(v_a_5023_, 0);
v_isSharedCheck_5104_ = !lean_is_exclusive(v_a_5023_);
if (v_isSharedCheck_5104_ == 0)
{
lean_object* v_unused_5105_; 
v_unused_5105_ = lean_ctor_get(v_a_5023_, 1);
lean_dec(v_unused_5105_);
v___x_5026_ = v_a_5023_;
v_isShared_5027_ = v_isSharedCheck_5104_;
goto v_resetjp_5025_;
}
else
{
lean_inc(v_fst_5024_);
lean_dec(v_a_5023_);
v___x_5026_ = lean_box(0);
v_isShared_5027_ = v_isSharedCheck_5104_;
goto v_resetjp_5025_;
}
v_resetjp_5025_:
{
lean_object* v_id_5028_; lean_object* v_structId_5029_; lean_object* v___x_5030_; 
v_id_5028_ = lean_ctor_get(v_a_5015_, 0);
lean_inc(v_id_5028_);
v_structId_5029_ = lean_ctor_get(v_a_5015_, 1);
lean_inc(v_structId_5029_);
lean_dec(v_a_5015_);
v___x_5030_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_5000_, v_a_5003_);
if (lean_obj_tag(v___x_5030_) == 0)
{
lean_object* v_a_5031_; uint8_t v___x_5032_; lean_object* v___x_5033_; 
v_a_5031_ = lean_ctor_get(v___x_5030_, 0);
lean_inc(v_a_5031_);
lean_dec_ref_known(v___x_5030_, 1);
v___x_5032_ = 0;
v___x_5033_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_fst_5018_, v___x_5032_, v_a_5031_, v_structId_5029_, v_a_5003_, v_a_5004_, v_a_5005_, v_a_5006_, v_a_5007_, v_a_5008_, v_a_5009_, v_a_5010_, v_a_5011_, v_a_5012_);
if (lean_obj_tag(v___x_5033_) == 0)
{
lean_object* v_a_5034_; lean_object* v___x_5036_; uint8_t v_isShared_5037_; uint8_t v_isSharedCheck_5087_; 
v_a_5034_ = lean_ctor_get(v___x_5033_, 0);
v_isSharedCheck_5087_ = !lean_is_exclusive(v___x_5033_);
if (v_isSharedCheck_5087_ == 0)
{
v___x_5036_ = v___x_5033_;
v_isShared_5037_ = v_isSharedCheck_5087_;
goto v_resetjp_5035_;
}
else
{
lean_inc(v_a_5034_);
lean_dec(v___x_5033_);
v___x_5036_ = lean_box(0);
v_isShared_5037_ = v_isSharedCheck_5087_;
goto v_resetjp_5035_;
}
v_resetjp_5035_:
{
if (lean_obj_tag(v_a_5034_) == 1)
{
lean_object* v_val_5038_; lean_object* v___x_5039_; 
lean_del_object(v___x_5036_);
v_val_5038_ = lean_ctor_get(v_a_5034_, 0);
lean_inc(v_val_5038_);
lean_dec_ref_known(v_a_5034_, 1);
v___x_5039_ = l_Lean_Meta_Grind_getGeneration___redArg(v_b_5001_, v_a_5003_);
if (lean_obj_tag(v___x_5039_) == 0)
{
lean_object* v_a_5040_; lean_object* v___x_5041_; 
v_a_5040_ = lean_ctor_get(v___x_5039_, 0);
lean_inc(v_a_5040_);
lean_dec_ref_known(v___x_5039_, 1);
v___x_5041_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_fst_5024_, v___x_5032_, v_a_5040_, v_structId_5029_, v_a_5003_, v_a_5004_, v_a_5005_, v_a_5006_, v_a_5007_, v_a_5008_, v_a_5009_, v_a_5010_, v_a_5011_, v_a_5012_);
if (lean_obj_tag(v___x_5041_) == 0)
{
lean_object* v_a_5042_; lean_object* v___x_5044_; uint8_t v_isShared_5045_; uint8_t v_isSharedCheck_5066_; 
v_a_5042_ = lean_ctor_get(v___x_5041_, 0);
v_isSharedCheck_5066_ = !lean_is_exclusive(v___x_5041_);
if (v_isSharedCheck_5066_ == 0)
{
v___x_5044_ = v___x_5041_;
v_isShared_5045_ = v_isSharedCheck_5066_;
goto v_resetjp_5043_;
}
else
{
lean_inc(v_a_5042_);
lean_dec(v___x_5041_);
v___x_5044_ = lean_box(0);
v_isShared_5045_ = v_isSharedCheck_5066_;
goto v_resetjp_5043_;
}
v_resetjp_5043_:
{
if (lean_obj_tag(v_a_5042_) == 1)
{
lean_object* v_val_5046_; lean_object* v___x_5048_; 
v_val_5046_ = lean_ctor_get(v_a_5042_, 0);
lean_inc_n(v_val_5046_, 2);
lean_dec_ref_known(v_a_5042_, 1);
lean_inc(v_val_5038_);
if (v_isShared_5027_ == 0)
{
lean_ctor_set_tag(v___x_5026_, 3);
lean_ctor_set(v___x_5026_, 1, v_val_5046_);
lean_ctor_set(v___x_5026_, 0, v_val_5038_);
v___x_5048_ = v___x_5026_;
goto v_reusejp_5047_;
}
else
{
lean_object* v_reuseFailAlloc_5061_; 
v_reuseFailAlloc_5061_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5061_, 0, v_val_5038_);
lean_ctor_set(v_reuseFailAlloc_5061_, 1, v_val_5046_);
v___x_5048_ = v_reuseFailAlloc_5061_;
goto v_reusejp_5047_;
}
v_reusejp_5047_:
{
lean_object* v___x_5049_; lean_object* v___x_5050_; uint8_t v___x_5051_; 
v___x_5049_ = l_Lean_Grind_Linarith_Expr_norm(v___x_5048_);
v___x_5050_ = lean_box(0);
v___x_5051_ = l_Lean_Grind_Linarith_instBEqPoly_beq(v___x_5049_, v___x_5050_);
if (v___x_5051_ == 0)
{
lean_object* v___x_5052_; lean_object* v___x_5054_; 
lean_del_object(v___x_5044_);
v___x_5052_ = lean_alloc_ctor(2, 5, 0);
lean_ctor_set(v___x_5052_, 0, v_a_5000_);
lean_ctor_set(v___x_5052_, 1, v_b_5001_);
lean_ctor_set(v___x_5052_, 2, v_id_5028_);
lean_ctor_set(v___x_5052_, 3, v_val_5038_);
lean_ctor_set(v___x_5052_, 4, v_val_5046_);
if (v_isShared_5021_ == 0)
{
lean_ctor_set(v___x_5020_, 1, v___x_5052_);
lean_ctor_set(v___x_5020_, 0, v___x_5049_);
v___x_5054_ = v___x_5020_;
goto v_reusejp_5053_;
}
else
{
lean_object* v_reuseFailAlloc_5056_; 
v_reuseFailAlloc_5056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5056_, 0, v___x_5049_);
lean_ctor_set(v_reuseFailAlloc_5056_, 1, v___x_5052_);
v___x_5054_ = v_reuseFailAlloc_5056_;
goto v_reusejp_5053_;
}
v_reusejp_5053_:
{
lean_object* v___x_5055_; 
v___x_5055_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_EqCnstr_assert(v___x_5054_, v_structId_5029_, v_a_5003_, v_a_5004_, v_a_5005_, v_a_5006_, v_a_5007_, v_a_5008_, v_a_5009_, v_a_5010_, v_a_5011_, v_a_5012_);
lean_dec(v_structId_5029_);
return v___x_5055_;
}
}
else
{
lean_object* v___x_5057_; lean_object* v___x_5059_; 
lean_dec(v___x_5049_);
lean_dec(v_val_5046_);
lean_dec(v_val_5038_);
lean_dec(v_structId_5029_);
lean_dec(v_id_5028_);
lean_del_object(v___x_5020_);
lean_dec_ref(v_b_5001_);
lean_dec_ref(v_a_5000_);
v___x_5057_ = lean_box(0);
if (v_isShared_5045_ == 0)
{
lean_ctor_set(v___x_5044_, 0, v___x_5057_);
v___x_5059_ = v___x_5044_;
goto v_reusejp_5058_;
}
else
{
lean_object* v_reuseFailAlloc_5060_; 
v_reuseFailAlloc_5060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5060_, 0, v___x_5057_);
v___x_5059_ = v_reuseFailAlloc_5060_;
goto v_reusejp_5058_;
}
v_reusejp_5058_:
{
return v___x_5059_;
}
}
}
}
else
{
lean_object* v___x_5062_; lean_object* v___x_5064_; 
lean_dec(v_a_5042_);
lean_dec(v_val_5038_);
lean_dec(v_structId_5029_);
lean_dec(v_id_5028_);
lean_del_object(v___x_5026_);
lean_del_object(v___x_5020_);
lean_dec_ref(v_b_5001_);
lean_dec_ref(v_a_5000_);
v___x_5062_ = lean_box(0);
if (v_isShared_5045_ == 0)
{
lean_ctor_set(v___x_5044_, 0, v___x_5062_);
v___x_5064_ = v___x_5044_;
goto v_reusejp_5063_;
}
else
{
lean_object* v_reuseFailAlloc_5065_; 
v_reuseFailAlloc_5065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5065_, 0, v___x_5062_);
v___x_5064_ = v_reuseFailAlloc_5065_;
goto v_reusejp_5063_;
}
v_reusejp_5063_:
{
return v___x_5064_;
}
}
}
}
else
{
lean_object* v_a_5067_; lean_object* v___x_5069_; uint8_t v_isShared_5070_; uint8_t v_isSharedCheck_5074_; 
lean_dec(v_val_5038_);
lean_dec(v_structId_5029_);
lean_dec(v_id_5028_);
lean_del_object(v___x_5026_);
lean_del_object(v___x_5020_);
lean_dec_ref(v_b_5001_);
lean_dec_ref(v_a_5000_);
v_a_5067_ = lean_ctor_get(v___x_5041_, 0);
v_isSharedCheck_5074_ = !lean_is_exclusive(v___x_5041_);
if (v_isSharedCheck_5074_ == 0)
{
v___x_5069_ = v___x_5041_;
v_isShared_5070_ = v_isSharedCheck_5074_;
goto v_resetjp_5068_;
}
else
{
lean_inc(v_a_5067_);
lean_dec(v___x_5041_);
v___x_5069_ = lean_box(0);
v_isShared_5070_ = v_isSharedCheck_5074_;
goto v_resetjp_5068_;
}
v_resetjp_5068_:
{
lean_object* v___x_5072_; 
if (v_isShared_5070_ == 0)
{
v___x_5072_ = v___x_5069_;
goto v_reusejp_5071_;
}
else
{
lean_object* v_reuseFailAlloc_5073_; 
v_reuseFailAlloc_5073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5073_, 0, v_a_5067_);
v___x_5072_ = v_reuseFailAlloc_5073_;
goto v_reusejp_5071_;
}
v_reusejp_5071_:
{
return v___x_5072_;
}
}
}
}
else
{
lean_object* v_a_5075_; lean_object* v___x_5077_; uint8_t v_isShared_5078_; uint8_t v_isSharedCheck_5082_; 
lean_dec(v_val_5038_);
lean_dec(v_structId_5029_);
lean_dec(v_id_5028_);
lean_del_object(v___x_5026_);
lean_dec(v_fst_5024_);
lean_del_object(v___x_5020_);
lean_dec_ref(v_b_5001_);
lean_dec_ref(v_a_5000_);
v_a_5075_ = lean_ctor_get(v___x_5039_, 0);
v_isSharedCheck_5082_ = !lean_is_exclusive(v___x_5039_);
if (v_isSharedCheck_5082_ == 0)
{
v___x_5077_ = v___x_5039_;
v_isShared_5078_ = v_isSharedCheck_5082_;
goto v_resetjp_5076_;
}
else
{
lean_inc(v_a_5075_);
lean_dec(v___x_5039_);
v___x_5077_ = lean_box(0);
v_isShared_5078_ = v_isSharedCheck_5082_;
goto v_resetjp_5076_;
}
v_resetjp_5076_:
{
lean_object* v___x_5080_; 
if (v_isShared_5078_ == 0)
{
v___x_5080_ = v___x_5077_;
goto v_reusejp_5079_;
}
else
{
lean_object* v_reuseFailAlloc_5081_; 
v_reuseFailAlloc_5081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5081_, 0, v_a_5075_);
v___x_5080_ = v_reuseFailAlloc_5081_;
goto v_reusejp_5079_;
}
v_reusejp_5079_:
{
return v___x_5080_;
}
}
}
}
else
{
lean_object* v___x_5083_; lean_object* v___x_5085_; 
lean_dec(v_a_5034_);
lean_dec(v_structId_5029_);
lean_dec(v_id_5028_);
lean_del_object(v___x_5026_);
lean_dec(v_fst_5024_);
lean_del_object(v___x_5020_);
lean_dec_ref(v_b_5001_);
lean_dec_ref(v_a_5000_);
v___x_5083_ = lean_box(0);
if (v_isShared_5037_ == 0)
{
lean_ctor_set(v___x_5036_, 0, v___x_5083_);
v___x_5085_ = v___x_5036_;
goto v_reusejp_5084_;
}
else
{
lean_object* v_reuseFailAlloc_5086_; 
v_reuseFailAlloc_5086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5086_, 0, v___x_5083_);
v___x_5085_ = v_reuseFailAlloc_5086_;
goto v_reusejp_5084_;
}
v_reusejp_5084_:
{
return v___x_5085_;
}
}
}
}
else
{
lean_object* v_a_5088_; lean_object* v___x_5090_; uint8_t v_isShared_5091_; uint8_t v_isSharedCheck_5095_; 
lean_dec(v_structId_5029_);
lean_dec(v_id_5028_);
lean_del_object(v___x_5026_);
lean_dec(v_fst_5024_);
lean_del_object(v___x_5020_);
lean_dec_ref(v_b_5001_);
lean_dec_ref(v_a_5000_);
v_a_5088_ = lean_ctor_get(v___x_5033_, 0);
v_isSharedCheck_5095_ = !lean_is_exclusive(v___x_5033_);
if (v_isSharedCheck_5095_ == 0)
{
v___x_5090_ = v___x_5033_;
v_isShared_5091_ = v_isSharedCheck_5095_;
goto v_resetjp_5089_;
}
else
{
lean_inc(v_a_5088_);
lean_dec(v___x_5033_);
v___x_5090_ = lean_box(0);
v_isShared_5091_ = v_isSharedCheck_5095_;
goto v_resetjp_5089_;
}
v_resetjp_5089_:
{
lean_object* v___x_5093_; 
if (v_isShared_5091_ == 0)
{
v___x_5093_ = v___x_5090_;
goto v_reusejp_5092_;
}
else
{
lean_object* v_reuseFailAlloc_5094_; 
v_reuseFailAlloc_5094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5094_, 0, v_a_5088_);
v___x_5093_ = v_reuseFailAlloc_5094_;
goto v_reusejp_5092_;
}
v_reusejp_5092_:
{
return v___x_5093_;
}
}
}
}
else
{
lean_object* v_a_5096_; lean_object* v___x_5098_; uint8_t v_isShared_5099_; uint8_t v_isSharedCheck_5103_; 
lean_dec(v_structId_5029_);
lean_dec(v_id_5028_);
lean_del_object(v___x_5026_);
lean_dec(v_fst_5024_);
lean_del_object(v___x_5020_);
lean_dec(v_fst_5018_);
lean_dec_ref(v_b_5001_);
lean_dec_ref(v_a_5000_);
v_a_5096_ = lean_ctor_get(v___x_5030_, 0);
v_isSharedCheck_5103_ = !lean_is_exclusive(v___x_5030_);
if (v_isSharedCheck_5103_ == 0)
{
v___x_5098_ = v___x_5030_;
v_isShared_5099_ = v_isSharedCheck_5103_;
goto v_resetjp_5097_;
}
else
{
lean_inc(v_a_5096_);
lean_dec(v___x_5030_);
v___x_5098_ = lean_box(0);
v_isShared_5099_ = v_isSharedCheck_5103_;
goto v_resetjp_5097_;
}
v_resetjp_5097_:
{
lean_object* v___x_5101_; 
if (v_isShared_5099_ == 0)
{
v___x_5101_ = v___x_5098_;
goto v_reusejp_5100_;
}
else
{
lean_object* v_reuseFailAlloc_5102_; 
v_reuseFailAlloc_5102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5102_, 0, v_a_5096_);
v___x_5101_ = v_reuseFailAlloc_5102_;
goto v_reusejp_5100_;
}
v_reusejp_5100_:
{
return v___x_5101_;
}
}
}
}
}
else
{
lean_object* v_a_5106_; lean_object* v___x_5108_; uint8_t v_isShared_5109_; uint8_t v_isSharedCheck_5113_; 
lean_del_object(v___x_5020_);
lean_dec(v_fst_5018_);
lean_dec(v_a_5015_);
lean_dec_ref(v_b_5001_);
lean_dec_ref(v_a_5000_);
v_a_5106_ = lean_ctor_get(v___x_5022_, 0);
v_isSharedCheck_5113_ = !lean_is_exclusive(v___x_5022_);
if (v_isSharedCheck_5113_ == 0)
{
v___x_5108_ = v___x_5022_;
v_isShared_5109_ = v_isSharedCheck_5113_;
goto v_resetjp_5107_;
}
else
{
lean_inc(v_a_5106_);
lean_dec(v___x_5022_);
v___x_5108_ = lean_box(0);
v_isShared_5109_ = v_isSharedCheck_5113_;
goto v_resetjp_5107_;
}
v_resetjp_5107_:
{
lean_object* v___x_5111_; 
if (v_isShared_5109_ == 0)
{
v___x_5111_ = v___x_5108_;
goto v_reusejp_5110_;
}
else
{
lean_object* v_reuseFailAlloc_5112_; 
v_reuseFailAlloc_5112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5112_, 0, v_a_5106_);
v___x_5111_ = v_reuseFailAlloc_5112_;
goto v_reusejp_5110_;
}
v_reusejp_5110_:
{
return v___x_5111_;
}
}
}
}
}
else
{
lean_object* v_a_5116_; lean_object* v___x_5118_; uint8_t v_isShared_5119_; uint8_t v_isSharedCheck_5123_; 
lean_dec(v_a_5015_);
lean_dec_ref(v_b_5001_);
lean_dec_ref(v_a_5000_);
v_a_5116_ = lean_ctor_get(v___x_5016_, 0);
v_isSharedCheck_5123_ = !lean_is_exclusive(v___x_5016_);
if (v_isSharedCheck_5123_ == 0)
{
v___x_5118_ = v___x_5016_;
v_isShared_5119_ = v_isSharedCheck_5123_;
goto v_resetjp_5117_;
}
else
{
lean_inc(v_a_5116_);
lean_dec(v___x_5016_);
v___x_5118_ = lean_box(0);
v_isShared_5119_ = v_isSharedCheck_5123_;
goto v_resetjp_5117_;
}
v_resetjp_5117_:
{
lean_object* v___x_5121_; 
if (v_isShared_5119_ == 0)
{
v___x_5121_ = v___x_5118_;
goto v_reusejp_5120_;
}
else
{
lean_object* v_reuseFailAlloc_5122_; 
v_reuseFailAlloc_5122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5122_, 0, v_a_5116_);
v___x_5121_ = v_reuseFailAlloc_5122_;
goto v_reusejp_5120_;
}
v_reusejp_5120_:
{
return v___x_5121_;
}
}
}
}
else
{
lean_object* v_a_5124_; lean_object* v___x_5126_; uint8_t v_isShared_5127_; uint8_t v_isSharedCheck_5131_; 
lean_dec_ref(v_b_5001_);
lean_dec_ref(v_a_5000_);
v_a_5124_ = lean_ctor_get(v___x_5014_, 0);
v_isSharedCheck_5131_ = !lean_is_exclusive(v___x_5014_);
if (v_isSharedCheck_5131_ == 0)
{
v___x_5126_ = v___x_5014_;
v_isShared_5127_ = v_isSharedCheck_5131_;
goto v_resetjp_5125_;
}
else
{
lean_inc(v_a_5124_);
lean_dec(v___x_5014_);
v___x_5126_ = lean_box(0);
v_isShared_5127_ = v_isSharedCheck_5131_;
goto v_resetjp_5125_;
}
v_resetjp_5125_:
{
lean_object* v___x_5129_; 
if (v_isShared_5127_ == 0)
{
v___x_5129_ = v___x_5126_;
goto v_reusejp_5128_;
}
else
{
lean_object* v_reuseFailAlloc_5130_; 
v_reuseFailAlloc_5130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5130_, 0, v_a_5124_);
v___x_5129_ = v_reuseFailAlloc_5130_;
goto v_reusejp_5128_;
}
v_reusejp_5128_:
{
return v___x_5129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleEq___boxed(lean_object* v_a_5132_, lean_object* v_b_5133_, lean_object* v_a_5134_, lean_object* v_a_5135_, lean_object* v_a_5136_, lean_object* v_a_5137_, lean_object* v_a_5138_, lean_object* v_a_5139_, lean_object* v_a_5140_, lean_object* v_a_5141_, lean_object* v_a_5142_, lean_object* v_a_5143_, lean_object* v_a_5144_, lean_object* v_a_5145_){
_start:
{
lean_object* v_res_5146_; 
v_res_5146_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleEq(v_a_5132_, v_b_5133_, v_a_5134_, v_a_5135_, v_a_5136_, v_a_5137_, v_a_5138_, v_a_5139_, v_a_5140_, v_a_5141_, v_a_5142_, v_a_5143_, v_a_5144_);
lean_dec(v_a_5144_);
lean_dec_ref(v_a_5143_);
lean_dec(v_a_5142_);
lean_dec_ref(v_a_5141_);
lean_dec(v_a_5140_);
lean_dec_ref(v_a_5139_);
lean_dec(v_a_5138_);
lean_dec_ref(v_a_5137_);
lean_dec(v_a_5136_);
lean_dec(v_a_5135_);
lean_dec(v_a_5134_);
return v_res_5146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_processNewEq(lean_object* v_a_5147_, lean_object* v_b_5148_, lean_object* v_a_5149_, lean_object* v_a_5150_, lean_object* v_a_5151_, lean_object* v_a_5152_, lean_object* v_a_5153_, lean_object* v_a_5154_, lean_object* v_a_5155_, lean_object* v_a_5156_, lean_object* v_a_5157_, lean_object* v_a_5158_){
_start:
{
size_t v___x_5160_; size_t v___x_5161_; uint8_t v___x_5162_; 
v___x_5160_ = lean_ptr_addr(v_a_5147_);
v___x_5161_ = lean_ptr_addr(v_b_5148_);
v___x_5162_ = lean_usize_dec_eq(v___x_5160_, v___x_5161_);
if (v___x_5162_ == 0)
{
lean_object* v___x_5163_; 
v___x_5163_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_inSameStruct_x3f___redArg(v_a_5147_, v_b_5148_, v_a_5149_, v_a_5157_);
if (lean_obj_tag(v___x_5163_) == 0)
{
lean_object* v_a_5164_; 
v_a_5164_ = lean_ctor_get(v___x_5163_, 0);
lean_inc(v_a_5164_);
lean_dec_ref_known(v___x_5163_, 1);
if (lean_obj_tag(v_a_5164_) == 1)
{
lean_object* v_val_5165_; lean_object* v___x_5166_; 
v_val_5165_ = lean_ctor_get(v_a_5164_, 0);
lean_inc(v_val_5165_);
lean_dec_ref_known(v_a_5164_, 1);
v___x_5166_ = l_Lean_Meta_Grind_Arith_Linear_isOrderedAdd(v_val_5165_, v_a_5149_, v_a_5150_, v_a_5151_, v_a_5152_, v_a_5153_, v_a_5154_, v_a_5155_, v_a_5156_, v_a_5157_, v_a_5158_);
if (lean_obj_tag(v___x_5166_) == 0)
{
lean_object* v_a_5167_; uint8_t v___x_5168_; 
v_a_5167_ = lean_ctor_get(v___x_5166_, 0);
lean_inc(v_a_5167_);
lean_dec_ref_known(v___x_5166_, 1);
v___x_5168_ = lean_unbox(v_a_5167_);
lean_dec(v_a_5167_);
if (v___x_5168_ == 0)
{
lean_object* v___x_5169_; 
v___x_5169_ = l_Lean_Meta_Grind_Arith_Linear_isCommRing(v_val_5165_, v_a_5149_, v_a_5150_, v_a_5151_, v_a_5152_, v_a_5153_, v_a_5154_, v_a_5155_, v_a_5156_, v_a_5157_, v_a_5158_);
if (lean_obj_tag(v___x_5169_) == 0)
{
lean_object* v_a_5170_; uint8_t v___x_5171_; 
v_a_5170_ = lean_ctor_get(v___x_5169_, 0);
lean_inc(v_a_5170_);
lean_dec_ref_known(v___x_5169_, 1);
v___x_5171_ = lean_unbox(v_a_5170_);
lean_dec(v_a_5170_);
if (v___x_5171_ == 0)
{
lean_object* v___x_5172_; 
v___x_5172_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleEq(v_a_5147_, v_b_5148_, v_val_5165_, v_a_5149_, v_a_5150_, v_a_5151_, v_a_5152_, v_a_5153_, v_a_5154_, v_a_5155_, v_a_5156_, v_a_5157_, v_a_5158_);
lean_dec(v_val_5165_);
return v___x_5172_;
}
else
{
lean_object* v___x_5173_; 
lean_dec(v_val_5165_);
v___x_5173_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq___redArg(v_a_5147_, v_b_5148_, v_a_5155_, v_a_5156_, v_a_5157_, v_a_5158_);
return v___x_5173_;
}
}
else
{
lean_object* v_a_5174_; lean_object* v___x_5176_; uint8_t v_isShared_5177_; uint8_t v_isSharedCheck_5181_; 
lean_dec(v_val_5165_);
lean_dec_ref(v_b_5148_);
lean_dec_ref(v_a_5147_);
v_a_5174_ = lean_ctor_get(v___x_5169_, 0);
v_isSharedCheck_5181_ = !lean_is_exclusive(v___x_5169_);
if (v_isSharedCheck_5181_ == 0)
{
v___x_5176_ = v___x_5169_;
v_isShared_5177_ = v_isSharedCheck_5181_;
goto v_resetjp_5175_;
}
else
{
lean_inc(v_a_5174_);
lean_dec(v___x_5169_);
v___x_5176_ = lean_box(0);
v_isShared_5177_ = v_isSharedCheck_5181_;
goto v_resetjp_5175_;
}
v_resetjp_5175_:
{
lean_object* v___x_5179_; 
if (v_isShared_5177_ == 0)
{
v___x_5179_ = v___x_5176_;
goto v_reusejp_5178_;
}
else
{
lean_object* v_reuseFailAlloc_5180_; 
v_reuseFailAlloc_5180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5180_, 0, v_a_5174_);
v___x_5179_ = v_reuseFailAlloc_5180_;
goto v_reusejp_5178_;
}
v_reusejp_5178_:
{
return v___x_5179_;
}
}
}
}
else
{
lean_object* v___x_5182_; 
v___x_5182_ = l_Lean_Meta_Grind_Arith_Linear_isCommRing(v_val_5165_, v_a_5149_, v_a_5150_, v_a_5151_, v_a_5152_, v_a_5153_, v_a_5154_, v_a_5155_, v_a_5156_, v_a_5157_, v_a_5158_);
if (lean_obj_tag(v___x_5182_) == 0)
{
lean_object* v_a_5183_; uint8_t v___x_5184_; 
v_a_5183_ = lean_ctor_get(v___x_5182_, 0);
lean_inc(v_a_5183_);
lean_dec_ref_known(v___x_5182_, 1);
v___x_5184_ = lean_unbox(v_a_5183_);
lean_dec(v_a_5183_);
if (v___x_5184_ == 0)
{
lean_object* v___x_5185_; 
v___x_5185_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleEq_x27(v_a_5147_, v_b_5148_, v_val_5165_, v_a_5149_, v_a_5150_, v_a_5151_, v_a_5152_, v_a_5153_, v_a_5154_, v_a_5155_, v_a_5156_, v_a_5157_, v_a_5158_);
lean_dec(v_val_5165_);
return v___x_5185_;
}
else
{
lean_object* v___x_5186_; 
v___x_5186_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingEq_x27(v_a_5147_, v_b_5148_, v_val_5165_, v_a_5149_, v_a_5150_, v_a_5151_, v_a_5152_, v_a_5153_, v_a_5154_, v_a_5155_, v_a_5156_, v_a_5157_, v_a_5158_);
lean_dec(v_val_5165_);
return v___x_5186_;
}
}
else
{
lean_object* v_a_5187_; lean_object* v___x_5189_; uint8_t v_isShared_5190_; uint8_t v_isSharedCheck_5194_; 
lean_dec(v_val_5165_);
lean_dec_ref(v_b_5148_);
lean_dec_ref(v_a_5147_);
v_a_5187_ = lean_ctor_get(v___x_5182_, 0);
v_isSharedCheck_5194_ = !lean_is_exclusive(v___x_5182_);
if (v_isSharedCheck_5194_ == 0)
{
v___x_5189_ = v___x_5182_;
v_isShared_5190_ = v_isSharedCheck_5194_;
goto v_resetjp_5188_;
}
else
{
lean_inc(v_a_5187_);
lean_dec(v___x_5182_);
v___x_5189_ = lean_box(0);
v_isShared_5190_ = v_isSharedCheck_5194_;
goto v_resetjp_5188_;
}
v_resetjp_5188_:
{
lean_object* v___x_5192_; 
if (v_isShared_5190_ == 0)
{
v___x_5192_ = v___x_5189_;
goto v_reusejp_5191_;
}
else
{
lean_object* v_reuseFailAlloc_5193_; 
v_reuseFailAlloc_5193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5193_, 0, v_a_5187_);
v___x_5192_ = v_reuseFailAlloc_5193_;
goto v_reusejp_5191_;
}
v_reusejp_5191_:
{
return v___x_5192_;
}
}
}
}
}
else
{
lean_object* v_a_5195_; lean_object* v___x_5197_; uint8_t v_isShared_5198_; uint8_t v_isSharedCheck_5202_; 
lean_dec(v_val_5165_);
lean_dec_ref(v_b_5148_);
lean_dec_ref(v_a_5147_);
v_a_5195_ = lean_ctor_get(v___x_5166_, 0);
v_isSharedCheck_5202_ = !lean_is_exclusive(v___x_5166_);
if (v_isSharedCheck_5202_ == 0)
{
v___x_5197_ = v___x_5166_;
v_isShared_5198_ = v_isSharedCheck_5202_;
goto v_resetjp_5196_;
}
else
{
lean_inc(v_a_5195_);
lean_dec(v___x_5166_);
v___x_5197_ = lean_box(0);
v_isShared_5198_ = v_isSharedCheck_5202_;
goto v_resetjp_5196_;
}
v_resetjp_5196_:
{
lean_object* v___x_5200_; 
if (v_isShared_5198_ == 0)
{
v___x_5200_ = v___x_5197_;
goto v_reusejp_5199_;
}
else
{
lean_object* v_reuseFailAlloc_5201_; 
v_reuseFailAlloc_5201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5201_, 0, v_a_5195_);
v___x_5200_ = v_reuseFailAlloc_5201_;
goto v_reusejp_5199_;
}
v_reusejp_5199_:
{
return v___x_5200_;
}
}
}
}
else
{
lean_object* v___x_5203_; 
lean_dec(v_a_5164_);
v___x_5203_ = l_Lean_Meta_Grind_Arith_Linear_inSameNatStruct_x3f___redArg(v_a_5147_, v_b_5148_, v_a_5149_, v_a_5157_);
if (lean_obj_tag(v___x_5203_) == 0)
{
lean_object* v_a_5204_; lean_object* v___x_5206_; uint8_t v_isShared_5207_; uint8_t v_isSharedCheck_5226_; 
v_a_5204_ = lean_ctor_get(v___x_5203_, 0);
v_isSharedCheck_5226_ = !lean_is_exclusive(v___x_5203_);
if (v_isSharedCheck_5226_ == 0)
{
v___x_5206_ = v___x_5203_;
v_isShared_5207_ = v_isSharedCheck_5226_;
goto v_resetjp_5205_;
}
else
{
lean_inc(v_a_5204_);
lean_dec(v___x_5203_);
v___x_5206_ = lean_box(0);
v_isShared_5207_ = v_isSharedCheck_5226_;
goto v_resetjp_5205_;
}
v_resetjp_5205_:
{
if (lean_obj_tag(v_a_5204_) == 1)
{
lean_object* v_val_5208_; lean_object* v___x_5209_; 
lean_del_object(v___x_5206_);
v_val_5208_ = lean_ctor_get(v_a_5204_, 0);
lean_inc(v_val_5208_);
lean_dec_ref_known(v_a_5204_, 1);
v___x_5209_ = l_Lean_Meta_Grind_Arith_Linear_getNatStruct(v_val_5208_, v_a_5149_, v_a_5150_, v_a_5151_, v_a_5152_, v_a_5153_, v_a_5154_, v_a_5155_, v_a_5156_, v_a_5157_, v_a_5158_);
if (lean_obj_tag(v___x_5209_) == 0)
{
lean_object* v_a_5210_; lean_object* v_orderedAddInst_x3f_5211_; 
v_a_5210_ = lean_ctor_get(v___x_5209_, 0);
lean_inc(v_a_5210_);
lean_dec_ref_known(v___x_5209_, 1);
v_orderedAddInst_x3f_5211_ = lean_ctor_get(v_a_5210_, 9);
lean_inc(v_orderedAddInst_x3f_5211_);
lean_dec(v_a_5210_);
if (lean_obj_tag(v_orderedAddInst_x3f_5211_) == 0)
{
lean_object* v___x_5212_; 
v___x_5212_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleEq(v_a_5147_, v_b_5148_, v_val_5208_, v_a_5149_, v_a_5150_, v_a_5151_, v_a_5152_, v_a_5153_, v_a_5154_, v_a_5155_, v_a_5156_, v_a_5157_, v_a_5158_);
lean_dec(v_val_5208_);
return v___x_5212_;
}
else
{
lean_object* v___x_5213_; 
lean_dec_ref_known(v_orderedAddInst_x3f_5211_, 1);
v___x_5213_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleEq_x27(v_a_5147_, v_b_5148_, v_val_5208_, v_a_5149_, v_a_5150_, v_a_5151_, v_a_5152_, v_a_5153_, v_a_5154_, v_a_5155_, v_a_5156_, v_a_5157_, v_a_5158_);
lean_dec(v_val_5208_);
return v___x_5213_;
}
}
else
{
lean_object* v_a_5214_; lean_object* v___x_5216_; uint8_t v_isShared_5217_; uint8_t v_isSharedCheck_5221_; 
lean_dec(v_val_5208_);
lean_dec_ref(v_b_5148_);
lean_dec_ref(v_a_5147_);
v_a_5214_ = lean_ctor_get(v___x_5209_, 0);
v_isSharedCheck_5221_ = !lean_is_exclusive(v___x_5209_);
if (v_isSharedCheck_5221_ == 0)
{
v___x_5216_ = v___x_5209_;
v_isShared_5217_ = v_isSharedCheck_5221_;
goto v_resetjp_5215_;
}
else
{
lean_inc(v_a_5214_);
lean_dec(v___x_5209_);
v___x_5216_ = lean_box(0);
v_isShared_5217_ = v_isSharedCheck_5221_;
goto v_resetjp_5215_;
}
v_resetjp_5215_:
{
lean_object* v___x_5219_; 
if (v_isShared_5217_ == 0)
{
v___x_5219_ = v___x_5216_;
goto v_reusejp_5218_;
}
else
{
lean_object* v_reuseFailAlloc_5220_; 
v_reuseFailAlloc_5220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5220_, 0, v_a_5214_);
v___x_5219_ = v_reuseFailAlloc_5220_;
goto v_reusejp_5218_;
}
v_reusejp_5218_:
{
return v___x_5219_;
}
}
}
}
else
{
lean_object* v___x_5222_; lean_object* v___x_5224_; 
lean_dec(v_a_5204_);
lean_dec_ref(v_b_5148_);
lean_dec_ref(v_a_5147_);
v___x_5222_ = lean_box(0);
if (v_isShared_5207_ == 0)
{
lean_ctor_set(v___x_5206_, 0, v___x_5222_);
v___x_5224_ = v___x_5206_;
goto v_reusejp_5223_;
}
else
{
lean_object* v_reuseFailAlloc_5225_; 
v_reuseFailAlloc_5225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5225_, 0, v___x_5222_);
v___x_5224_ = v_reuseFailAlloc_5225_;
goto v_reusejp_5223_;
}
v_reusejp_5223_:
{
return v___x_5224_;
}
}
}
}
else
{
lean_object* v_a_5227_; lean_object* v___x_5229_; uint8_t v_isShared_5230_; uint8_t v_isSharedCheck_5234_; 
lean_dec_ref(v_b_5148_);
lean_dec_ref(v_a_5147_);
v_a_5227_ = lean_ctor_get(v___x_5203_, 0);
v_isSharedCheck_5234_ = !lean_is_exclusive(v___x_5203_);
if (v_isSharedCheck_5234_ == 0)
{
v___x_5229_ = v___x_5203_;
v_isShared_5230_ = v_isSharedCheck_5234_;
goto v_resetjp_5228_;
}
else
{
lean_inc(v_a_5227_);
lean_dec(v___x_5203_);
v___x_5229_ = lean_box(0);
v_isShared_5230_ = v_isSharedCheck_5234_;
goto v_resetjp_5228_;
}
v_resetjp_5228_:
{
lean_object* v___x_5232_; 
if (v_isShared_5230_ == 0)
{
v___x_5232_ = v___x_5229_;
goto v_reusejp_5231_;
}
else
{
lean_object* v_reuseFailAlloc_5233_; 
v_reuseFailAlloc_5233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5233_, 0, v_a_5227_);
v___x_5232_ = v_reuseFailAlloc_5233_;
goto v_reusejp_5231_;
}
v_reusejp_5231_:
{
return v___x_5232_;
}
}
}
}
}
else
{
lean_object* v_a_5235_; lean_object* v___x_5237_; uint8_t v_isShared_5238_; uint8_t v_isSharedCheck_5242_; 
lean_dec_ref(v_b_5148_);
lean_dec_ref(v_a_5147_);
v_a_5235_ = lean_ctor_get(v___x_5163_, 0);
v_isSharedCheck_5242_ = !lean_is_exclusive(v___x_5163_);
if (v_isSharedCheck_5242_ == 0)
{
v___x_5237_ = v___x_5163_;
v_isShared_5238_ = v_isSharedCheck_5242_;
goto v_resetjp_5236_;
}
else
{
lean_inc(v_a_5235_);
lean_dec(v___x_5163_);
v___x_5237_ = lean_box(0);
v_isShared_5238_ = v_isSharedCheck_5242_;
goto v_resetjp_5236_;
}
v_resetjp_5236_:
{
lean_object* v___x_5240_; 
if (v_isShared_5238_ == 0)
{
v___x_5240_ = v___x_5237_;
goto v_reusejp_5239_;
}
else
{
lean_object* v_reuseFailAlloc_5241_; 
v_reuseFailAlloc_5241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5241_, 0, v_a_5235_);
v___x_5240_ = v_reuseFailAlloc_5241_;
goto v_reusejp_5239_;
}
v_reusejp_5239_:
{
return v___x_5240_;
}
}
}
}
else
{
lean_object* v___x_5243_; lean_object* v___x_5244_; 
lean_dec_ref(v_b_5148_);
lean_dec_ref(v_a_5147_);
v___x_5243_ = lean_box(0);
v___x_5244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5244_, 0, v___x_5243_);
return v___x_5244_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_processNewEq___boxed(lean_object* v_a_5245_, lean_object* v_b_5246_, lean_object* v_a_5247_, lean_object* v_a_5248_, lean_object* v_a_5249_, lean_object* v_a_5250_, lean_object* v_a_5251_, lean_object* v_a_5252_, lean_object* v_a_5253_, lean_object* v_a_5254_, lean_object* v_a_5255_, lean_object* v_a_5256_, lean_object* v_a_5257_){
_start:
{
lean_object* v_res_5258_; 
v_res_5258_ = l_Lean_Meta_Grind_Arith_Linear_processNewEq(v_a_5245_, v_b_5246_, v_a_5247_, v_a_5248_, v_a_5249_, v_a_5250_, v_a_5251_, v_a_5252_, v_a_5253_, v_a_5254_, v_a_5255_, v_a_5256_);
lean_dec(v_a_5256_);
lean_dec_ref(v_a_5255_);
lean_dec(v_a_5254_);
lean_dec_ref(v_a_5253_);
lean_dec(v_a_5252_);
lean_dec_ref(v_a_5251_);
lean_dec(v_a_5250_);
lean_dec_ref(v_a_5249_);
lean_dec(v_a_5248_);
lean_dec(v_a_5247_);
return v_res_5258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingDiseq(lean_object* v_a_5259_, lean_object* v_b_5260_, lean_object* v_a_5261_, lean_object* v_a_5262_, lean_object* v_a_5263_, lean_object* v_a_5264_, lean_object* v_a_5265_, lean_object* v_a_5266_, lean_object* v_a_5267_, lean_object* v_a_5268_, lean_object* v_a_5269_, lean_object* v_a_5270_, lean_object* v_a_5271_){
_start:
{
uint8_t v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; 
v___x_5273_ = 0;
v___x_5274_ = lean_unsigned_to_nat(0u);
v___x_5275_ = lean_box(v___x_5273_);
lean_inc_ref(v_a_5259_);
v___x_5276_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_reify_x3f___boxed), 15, 3);
lean_closure_set(v___x_5276_, 0, v_a_5259_);
lean_closure_set(v___x_5276_, 1, v___x_5275_);
lean_closure_set(v___x_5276_, 2, v___x_5274_);
v___x_5277_ = l_Lean_Meta_Grind_Arith_Linear_withRingM___redArg(v___x_5276_, v_a_5261_, v_a_5262_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_, v_a_5269_, v_a_5270_, v_a_5271_);
if (lean_obj_tag(v___x_5277_) == 0)
{
lean_object* v_a_5278_; lean_object* v___x_5280_; uint8_t v_isShared_5281_; uint8_t v_isSharedCheck_5379_; 
v_a_5278_ = lean_ctor_get(v___x_5277_, 0);
v_isSharedCheck_5379_ = !lean_is_exclusive(v___x_5277_);
if (v_isSharedCheck_5379_ == 0)
{
v___x_5280_ = v___x_5277_;
v_isShared_5281_ = v_isSharedCheck_5379_;
goto v_resetjp_5279_;
}
else
{
lean_inc(v_a_5278_);
lean_dec(v___x_5277_);
v___x_5280_ = lean_box(0);
v_isShared_5281_ = v_isSharedCheck_5379_;
goto v_resetjp_5279_;
}
v_resetjp_5279_:
{
if (lean_obj_tag(v_a_5278_) == 1)
{
lean_object* v_val_5282_; lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; 
lean_del_object(v___x_5280_);
v_val_5282_ = lean_ctor_get(v_a_5278_, 0);
lean_inc(v_val_5282_);
lean_dec_ref_known(v_a_5278_, 1);
v___x_5283_ = lean_box(v___x_5273_);
lean_inc_ref(v_b_5260_);
v___x_5284_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_reify_x3f___boxed), 15, 3);
lean_closure_set(v___x_5284_, 0, v_b_5260_);
lean_closure_set(v___x_5284_, 1, v___x_5283_);
lean_closure_set(v___x_5284_, 2, v___x_5274_);
v___x_5285_ = l_Lean_Meta_Grind_Arith_Linear_withRingM___redArg(v___x_5284_, v_a_5261_, v_a_5262_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_, v_a_5269_, v_a_5270_, v_a_5271_);
if (lean_obj_tag(v___x_5285_) == 0)
{
lean_object* v_a_5286_; lean_object* v___x_5288_; uint8_t v_isShared_5289_; uint8_t v_isSharedCheck_5366_; 
v_a_5286_ = lean_ctor_get(v___x_5285_, 0);
v_isSharedCheck_5366_ = !lean_is_exclusive(v___x_5285_);
if (v_isSharedCheck_5366_ == 0)
{
v___x_5288_ = v___x_5285_;
v_isShared_5289_ = v_isSharedCheck_5366_;
goto v_resetjp_5287_;
}
else
{
lean_inc(v_a_5286_);
lean_dec(v___x_5285_);
v___x_5288_ = lean_box(0);
v_isShared_5289_ = v_isSharedCheck_5366_;
goto v_resetjp_5287_;
}
v_resetjp_5287_:
{
if (lean_obj_tag(v_a_5286_) == 1)
{
lean_object* v_val_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; 
lean_del_object(v___x_5288_);
v_val_5290_ = lean_ctor_get(v_a_5286_, 0);
lean_inc_n(v_val_5290_, 2);
lean_dec_ref_known(v_a_5286_, 1);
lean_inc(v_val_5282_);
v___x_5291_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_5291_, 0, v_val_5282_);
lean_ctor_set(v___x_5291_, 1, v_val_5290_);
v___x_5292_ = l_Lean_Grind_CommRing_Expr_toPoly(v___x_5291_);
lean_inc_ref(v_b_5260_);
lean_inc_ref(v_a_5259_);
v___x_5293_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5293_, 0, v_a_5259_);
lean_ctor_set(v___x_5293_, 1, v_b_5260_);
lean_ctor_set(v___x_5293_, 2, v_val_5282_);
lean_ctor_set(v___x_5293_, 3, v_val_5290_);
v___x_5294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5294_, 0, v___x_5292_);
lean_ctor_set(v___x_5294_, 1, v___x_5293_);
v___x_5295_ = l_Lean_Meta_Grind_Arith_Linear_RingDiseqCnstr_cleanupDenominators(v___x_5294_, v_a_5261_, v_a_5262_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_, v_a_5269_, v_a_5270_, v_a_5271_);
if (lean_obj_tag(v___x_5295_) == 0)
{
lean_object* v_a_5296_; lean_object* v_p_5297_; lean_object* v___x_5298_; 
v_a_5296_ = lean_ctor_get(v___x_5295_, 0);
lean_inc(v_a_5296_);
lean_dec_ref_known(v___x_5295_, 1);
v_p_5297_ = lean_ctor_get(v_a_5296_, 0);
v___x_5298_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_5259_, v_a_5262_);
lean_dec_ref(v_a_5259_);
if (lean_obj_tag(v___x_5298_) == 0)
{
lean_object* v_a_5299_; lean_object* v___x_5300_; 
v_a_5299_ = lean_ctor_get(v___x_5298_, 0);
lean_inc(v_a_5299_);
lean_dec_ref_known(v___x_5298_, 1);
v___x_5300_ = l_Lean_Meta_Grind_getGeneration___redArg(v_b_5260_, v_a_5262_);
lean_dec_ref(v_b_5260_);
if (lean_obj_tag(v___x_5300_) == 0)
{
lean_object* v_a_5301_; lean_object* v___y_5303_; uint8_t v___x_5337_; 
v_a_5301_ = lean_ctor_get(v___x_5300_, 0);
lean_inc(v_a_5301_);
lean_dec_ref_known(v___x_5300_, 1);
v___x_5337_ = lean_nat_dec_le(v_a_5299_, v_a_5301_);
if (v___x_5337_ == 0)
{
lean_dec(v_a_5301_);
v___y_5303_ = v_a_5299_;
goto v___jp_5302_;
}
else
{
lean_dec(v_a_5299_);
v___y_5303_ = v_a_5301_;
goto v___jp_5302_;
}
v___jp_5302_:
{
lean_object* v___x_5304_; 
lean_inc(v___y_5303_);
lean_inc_ref(v_p_5297_);
v___x_5304_ = l_Lean_Grind_CommRing_Poly_toIntModuleExpr(v_p_5297_, v___y_5303_, v_a_5261_, v_a_5262_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_, v_a_5269_, v_a_5270_, v_a_5271_);
if (lean_obj_tag(v___x_5304_) == 0)
{
lean_object* v_a_5305_; lean_object* v___x_5306_; 
v_a_5305_ = lean_ctor_get(v___x_5304_, 0);
lean_inc(v_a_5305_);
lean_dec_ref_known(v___x_5304_, 1);
v___x_5306_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_a_5305_, v___x_5273_, v___y_5303_, v_a_5261_, v_a_5262_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_, v_a_5269_, v_a_5270_, v_a_5271_);
if (lean_obj_tag(v___x_5306_) == 0)
{
lean_object* v_a_5307_; lean_object* v___x_5309_; uint8_t v_isShared_5310_; uint8_t v_isSharedCheck_5320_; 
v_a_5307_ = lean_ctor_get(v___x_5306_, 0);
v_isSharedCheck_5320_ = !lean_is_exclusive(v___x_5306_);
if (v_isSharedCheck_5320_ == 0)
{
v___x_5309_ = v___x_5306_;
v_isShared_5310_ = v_isSharedCheck_5320_;
goto v_resetjp_5308_;
}
else
{
lean_inc(v_a_5307_);
lean_dec(v___x_5306_);
v___x_5309_ = lean_box(0);
v_isShared_5310_ = v_isSharedCheck_5320_;
goto v_resetjp_5308_;
}
v_resetjp_5308_:
{
if (lean_obj_tag(v_a_5307_) == 1)
{
lean_object* v_val_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; 
lean_del_object(v___x_5309_);
v_val_5311_ = lean_ctor_get(v_a_5307_, 0);
lean_inc_n(v_val_5311_, 2);
lean_dec_ref_known(v_a_5307_, 1);
v___x_5312_ = l_Lean_Grind_Linarith_Expr_norm(v_val_5311_);
v___x_5313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5313_, 0, v_a_5296_);
lean_ctor_set(v___x_5313_, 1, v_val_5311_);
v___x_5314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5314_, 0, v___x_5312_);
lean_ctor_set(v___x_5314_, 1, v___x_5313_);
v___x_5315_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert(v___x_5314_, v_a_5261_, v_a_5262_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_, v_a_5269_, v_a_5270_, v_a_5271_);
return v___x_5315_;
}
else
{
lean_object* v___x_5316_; lean_object* v___x_5318_; 
lean_dec(v_a_5307_);
lean_dec(v_a_5296_);
v___x_5316_ = lean_box(0);
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 0, v___x_5316_);
v___x_5318_ = v___x_5309_;
goto v_reusejp_5317_;
}
else
{
lean_object* v_reuseFailAlloc_5319_; 
v_reuseFailAlloc_5319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5319_, 0, v___x_5316_);
v___x_5318_ = v_reuseFailAlloc_5319_;
goto v_reusejp_5317_;
}
v_reusejp_5317_:
{
return v___x_5318_;
}
}
}
}
else
{
lean_object* v_a_5321_; lean_object* v___x_5323_; uint8_t v_isShared_5324_; uint8_t v_isSharedCheck_5328_; 
lean_dec(v_a_5296_);
v_a_5321_ = lean_ctor_get(v___x_5306_, 0);
v_isSharedCheck_5328_ = !lean_is_exclusive(v___x_5306_);
if (v_isSharedCheck_5328_ == 0)
{
v___x_5323_ = v___x_5306_;
v_isShared_5324_ = v_isSharedCheck_5328_;
goto v_resetjp_5322_;
}
else
{
lean_inc(v_a_5321_);
lean_dec(v___x_5306_);
v___x_5323_ = lean_box(0);
v_isShared_5324_ = v_isSharedCheck_5328_;
goto v_resetjp_5322_;
}
v_resetjp_5322_:
{
lean_object* v___x_5326_; 
if (v_isShared_5324_ == 0)
{
v___x_5326_ = v___x_5323_;
goto v_reusejp_5325_;
}
else
{
lean_object* v_reuseFailAlloc_5327_; 
v_reuseFailAlloc_5327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5327_, 0, v_a_5321_);
v___x_5326_ = v_reuseFailAlloc_5327_;
goto v_reusejp_5325_;
}
v_reusejp_5325_:
{
return v___x_5326_;
}
}
}
}
else
{
lean_object* v_a_5329_; lean_object* v___x_5331_; uint8_t v_isShared_5332_; uint8_t v_isSharedCheck_5336_; 
lean_dec(v___y_5303_);
lean_dec(v_a_5296_);
v_a_5329_ = lean_ctor_get(v___x_5304_, 0);
v_isSharedCheck_5336_ = !lean_is_exclusive(v___x_5304_);
if (v_isSharedCheck_5336_ == 0)
{
v___x_5331_ = v___x_5304_;
v_isShared_5332_ = v_isSharedCheck_5336_;
goto v_resetjp_5330_;
}
else
{
lean_inc(v_a_5329_);
lean_dec(v___x_5304_);
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
else
{
lean_object* v_a_5338_; lean_object* v___x_5340_; uint8_t v_isShared_5341_; uint8_t v_isSharedCheck_5345_; 
lean_dec(v_a_5299_);
lean_dec(v_a_5296_);
v_a_5338_ = lean_ctor_get(v___x_5300_, 0);
v_isSharedCheck_5345_ = !lean_is_exclusive(v___x_5300_);
if (v_isSharedCheck_5345_ == 0)
{
v___x_5340_ = v___x_5300_;
v_isShared_5341_ = v_isSharedCheck_5345_;
goto v_resetjp_5339_;
}
else
{
lean_inc(v_a_5338_);
lean_dec(v___x_5300_);
v___x_5340_ = lean_box(0);
v_isShared_5341_ = v_isSharedCheck_5345_;
goto v_resetjp_5339_;
}
v_resetjp_5339_:
{
lean_object* v___x_5343_; 
if (v_isShared_5341_ == 0)
{
v___x_5343_ = v___x_5340_;
goto v_reusejp_5342_;
}
else
{
lean_object* v_reuseFailAlloc_5344_; 
v_reuseFailAlloc_5344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5344_, 0, v_a_5338_);
v___x_5343_ = v_reuseFailAlloc_5344_;
goto v_reusejp_5342_;
}
v_reusejp_5342_:
{
return v___x_5343_;
}
}
}
}
else
{
lean_object* v_a_5346_; lean_object* v___x_5348_; uint8_t v_isShared_5349_; uint8_t v_isSharedCheck_5353_; 
lean_dec(v_a_5296_);
lean_dec_ref(v_b_5260_);
v_a_5346_ = lean_ctor_get(v___x_5298_, 0);
v_isSharedCheck_5353_ = !lean_is_exclusive(v___x_5298_);
if (v_isSharedCheck_5353_ == 0)
{
v___x_5348_ = v___x_5298_;
v_isShared_5349_ = v_isSharedCheck_5353_;
goto v_resetjp_5347_;
}
else
{
lean_inc(v_a_5346_);
lean_dec(v___x_5298_);
v___x_5348_ = lean_box(0);
v_isShared_5349_ = v_isSharedCheck_5353_;
goto v_resetjp_5347_;
}
v_resetjp_5347_:
{
lean_object* v___x_5351_; 
if (v_isShared_5349_ == 0)
{
v___x_5351_ = v___x_5348_;
goto v_reusejp_5350_;
}
else
{
lean_object* v_reuseFailAlloc_5352_; 
v_reuseFailAlloc_5352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5352_, 0, v_a_5346_);
v___x_5351_ = v_reuseFailAlloc_5352_;
goto v_reusejp_5350_;
}
v_reusejp_5350_:
{
return v___x_5351_;
}
}
}
}
else
{
lean_object* v_a_5354_; lean_object* v___x_5356_; uint8_t v_isShared_5357_; uint8_t v_isSharedCheck_5361_; 
lean_dec_ref(v_b_5260_);
lean_dec_ref(v_a_5259_);
v_a_5354_ = lean_ctor_get(v___x_5295_, 0);
v_isSharedCheck_5361_ = !lean_is_exclusive(v___x_5295_);
if (v_isSharedCheck_5361_ == 0)
{
v___x_5356_ = v___x_5295_;
v_isShared_5357_ = v_isSharedCheck_5361_;
goto v_resetjp_5355_;
}
else
{
lean_inc(v_a_5354_);
lean_dec(v___x_5295_);
v___x_5356_ = lean_box(0);
v_isShared_5357_ = v_isSharedCheck_5361_;
goto v_resetjp_5355_;
}
v_resetjp_5355_:
{
lean_object* v___x_5359_; 
if (v_isShared_5357_ == 0)
{
v___x_5359_ = v___x_5356_;
goto v_reusejp_5358_;
}
else
{
lean_object* v_reuseFailAlloc_5360_; 
v_reuseFailAlloc_5360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5360_, 0, v_a_5354_);
v___x_5359_ = v_reuseFailAlloc_5360_;
goto v_reusejp_5358_;
}
v_reusejp_5358_:
{
return v___x_5359_;
}
}
}
}
else
{
lean_object* v___x_5362_; lean_object* v___x_5364_; 
lean_dec(v_a_5286_);
lean_dec(v_val_5282_);
lean_dec_ref(v_b_5260_);
lean_dec_ref(v_a_5259_);
v___x_5362_ = lean_box(0);
if (v_isShared_5289_ == 0)
{
lean_ctor_set(v___x_5288_, 0, v___x_5362_);
v___x_5364_ = v___x_5288_;
goto v_reusejp_5363_;
}
else
{
lean_object* v_reuseFailAlloc_5365_; 
v_reuseFailAlloc_5365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5365_, 0, v___x_5362_);
v___x_5364_ = v_reuseFailAlloc_5365_;
goto v_reusejp_5363_;
}
v_reusejp_5363_:
{
return v___x_5364_;
}
}
}
}
else
{
lean_object* v_a_5367_; lean_object* v___x_5369_; uint8_t v_isShared_5370_; uint8_t v_isSharedCheck_5374_; 
lean_dec(v_val_5282_);
lean_dec_ref(v_b_5260_);
lean_dec_ref(v_a_5259_);
v_a_5367_ = lean_ctor_get(v___x_5285_, 0);
v_isSharedCheck_5374_ = !lean_is_exclusive(v___x_5285_);
if (v_isSharedCheck_5374_ == 0)
{
v___x_5369_ = v___x_5285_;
v_isShared_5370_ = v_isSharedCheck_5374_;
goto v_resetjp_5368_;
}
else
{
lean_inc(v_a_5367_);
lean_dec(v___x_5285_);
v___x_5369_ = lean_box(0);
v_isShared_5370_ = v_isSharedCheck_5374_;
goto v_resetjp_5368_;
}
v_resetjp_5368_:
{
lean_object* v___x_5372_; 
if (v_isShared_5370_ == 0)
{
v___x_5372_ = v___x_5369_;
goto v_reusejp_5371_;
}
else
{
lean_object* v_reuseFailAlloc_5373_; 
v_reuseFailAlloc_5373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5373_, 0, v_a_5367_);
v___x_5372_ = v_reuseFailAlloc_5373_;
goto v_reusejp_5371_;
}
v_reusejp_5371_:
{
return v___x_5372_;
}
}
}
}
else
{
lean_object* v___x_5375_; lean_object* v___x_5377_; 
lean_dec(v_a_5278_);
lean_dec_ref(v_b_5260_);
lean_dec_ref(v_a_5259_);
v___x_5375_ = lean_box(0);
if (v_isShared_5281_ == 0)
{
lean_ctor_set(v___x_5280_, 0, v___x_5375_);
v___x_5377_ = v___x_5280_;
goto v_reusejp_5376_;
}
else
{
lean_object* v_reuseFailAlloc_5378_; 
v_reuseFailAlloc_5378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5378_, 0, v___x_5375_);
v___x_5377_ = v_reuseFailAlloc_5378_;
goto v_reusejp_5376_;
}
v_reusejp_5376_:
{
return v___x_5377_;
}
}
}
}
else
{
lean_object* v_a_5380_; lean_object* v___x_5382_; uint8_t v_isShared_5383_; uint8_t v_isSharedCheck_5387_; 
lean_dec_ref(v_b_5260_);
lean_dec_ref(v_a_5259_);
v_a_5380_ = lean_ctor_get(v___x_5277_, 0);
v_isSharedCheck_5387_ = !lean_is_exclusive(v___x_5277_);
if (v_isSharedCheck_5387_ == 0)
{
v___x_5382_ = v___x_5277_;
v_isShared_5383_ = v_isSharedCheck_5387_;
goto v_resetjp_5381_;
}
else
{
lean_inc(v_a_5380_);
lean_dec(v___x_5277_);
v___x_5382_ = lean_box(0);
v_isShared_5383_ = v_isSharedCheck_5387_;
goto v_resetjp_5381_;
}
v_resetjp_5381_:
{
lean_object* v___x_5385_; 
if (v_isShared_5383_ == 0)
{
v___x_5385_ = v___x_5382_;
goto v_reusejp_5384_;
}
else
{
lean_object* v_reuseFailAlloc_5386_; 
v_reuseFailAlloc_5386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5386_, 0, v_a_5380_);
v___x_5385_ = v_reuseFailAlloc_5386_;
goto v_reusejp_5384_;
}
v_reusejp_5384_:
{
return v___x_5385_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingDiseq___boxed(lean_object* v_a_5388_, lean_object* v_b_5389_, lean_object* v_a_5390_, lean_object* v_a_5391_, lean_object* v_a_5392_, lean_object* v_a_5393_, lean_object* v_a_5394_, lean_object* v_a_5395_, lean_object* v_a_5396_, lean_object* v_a_5397_, lean_object* v_a_5398_, lean_object* v_a_5399_, lean_object* v_a_5400_, lean_object* v_a_5401_){
_start:
{
lean_object* v_res_5402_; 
v_res_5402_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingDiseq(v_a_5388_, v_b_5389_, v_a_5390_, v_a_5391_, v_a_5392_, v_a_5393_, v_a_5394_, v_a_5395_, v_a_5396_, v_a_5397_, v_a_5398_, v_a_5399_, v_a_5400_);
lean_dec(v_a_5400_);
lean_dec_ref(v_a_5399_);
lean_dec(v_a_5398_);
lean_dec_ref(v_a_5397_);
lean_dec(v_a_5396_);
lean_dec_ref(v_a_5395_);
lean_dec(v_a_5394_);
lean_dec_ref(v_a_5393_);
lean_dec(v_a_5392_);
lean_dec(v_a_5391_);
lean_dec(v_a_5390_);
return v_res_5402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleDiseq(lean_object* v_a_5403_, lean_object* v_b_5404_, lean_object* v_a_5405_, lean_object* v_a_5406_, lean_object* v_a_5407_, lean_object* v_a_5408_, lean_object* v_a_5409_, lean_object* v_a_5410_, lean_object* v_a_5411_, lean_object* v_a_5412_, lean_object* v_a_5413_, lean_object* v_a_5414_, lean_object* v_a_5415_){
_start:
{
lean_object* v___x_5417_; 
v___x_5417_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_5403_, v_a_5406_);
if (lean_obj_tag(v___x_5417_) == 0)
{
lean_object* v_a_5418_; uint8_t v___x_5419_; lean_object* v___x_5420_; 
v_a_5418_ = lean_ctor_get(v___x_5417_, 0);
lean_inc(v_a_5418_);
lean_dec_ref_known(v___x_5417_, 1);
v___x_5419_ = 0;
lean_inc_ref(v_a_5403_);
v___x_5420_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_a_5403_, v___x_5419_, v_a_5418_, v_a_5405_, v_a_5406_, v_a_5407_, v_a_5408_, v_a_5409_, v_a_5410_, v_a_5411_, v_a_5412_, v_a_5413_, v_a_5414_, v_a_5415_);
if (lean_obj_tag(v___x_5420_) == 0)
{
lean_object* v_a_5421_; lean_object* v___x_5423_; uint8_t v_isShared_5424_; uint8_t v_isSharedCheck_5464_; 
v_a_5421_ = lean_ctor_get(v___x_5420_, 0);
v_isSharedCheck_5464_ = !lean_is_exclusive(v___x_5420_);
if (v_isSharedCheck_5464_ == 0)
{
v___x_5423_ = v___x_5420_;
v_isShared_5424_ = v_isSharedCheck_5464_;
goto v_resetjp_5422_;
}
else
{
lean_inc(v_a_5421_);
lean_dec(v___x_5420_);
v___x_5423_ = lean_box(0);
v_isShared_5424_ = v_isSharedCheck_5464_;
goto v_resetjp_5422_;
}
v_resetjp_5422_:
{
if (lean_obj_tag(v_a_5421_) == 1)
{
lean_object* v_val_5425_; lean_object* v___x_5426_; 
lean_del_object(v___x_5423_);
v_val_5425_ = lean_ctor_get(v_a_5421_, 0);
lean_inc(v_val_5425_);
lean_dec_ref_known(v_a_5421_, 1);
v___x_5426_ = l_Lean_Meta_Grind_getGeneration___redArg(v_b_5404_, v_a_5406_);
if (lean_obj_tag(v___x_5426_) == 0)
{
lean_object* v_a_5427_; lean_object* v___x_5428_; 
v_a_5427_ = lean_ctor_get(v___x_5426_, 0);
lean_inc(v_a_5427_);
lean_dec_ref_known(v___x_5426_, 1);
lean_inc_ref(v_b_5404_);
v___x_5428_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_b_5404_, v___x_5419_, v_a_5427_, v_a_5405_, v_a_5406_, v_a_5407_, v_a_5408_, v_a_5409_, v_a_5410_, v_a_5411_, v_a_5412_, v_a_5413_, v_a_5414_, v_a_5415_);
if (lean_obj_tag(v___x_5428_) == 0)
{
lean_object* v_a_5429_; lean_object* v___x_5431_; uint8_t v_isShared_5432_; uint8_t v_isSharedCheck_5443_; 
v_a_5429_ = lean_ctor_get(v___x_5428_, 0);
v_isSharedCheck_5443_ = !lean_is_exclusive(v___x_5428_);
if (v_isSharedCheck_5443_ == 0)
{
v___x_5431_ = v___x_5428_;
v_isShared_5432_ = v_isSharedCheck_5443_;
goto v_resetjp_5430_;
}
else
{
lean_inc(v_a_5429_);
lean_dec(v___x_5428_);
v___x_5431_ = lean_box(0);
v_isShared_5432_ = v_isSharedCheck_5443_;
goto v_resetjp_5430_;
}
v_resetjp_5430_:
{
if (lean_obj_tag(v_a_5429_) == 1)
{
lean_object* v_val_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v___x_5438_; 
lean_del_object(v___x_5431_);
v_val_5433_ = lean_ctor_get(v_a_5429_, 0);
lean_inc_n(v_val_5433_, 2);
lean_dec_ref_known(v_a_5429_, 1);
lean_inc(v_val_5425_);
v___x_5434_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_5434_, 0, v_val_5425_);
lean_ctor_set(v___x_5434_, 1, v_val_5433_);
v___x_5435_ = l_Lean_Grind_Linarith_Expr_norm(v___x_5434_);
v___x_5436_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5436_, 0, v_a_5403_);
lean_ctor_set(v___x_5436_, 1, v_b_5404_);
lean_ctor_set(v___x_5436_, 2, v_val_5425_);
lean_ctor_set(v___x_5436_, 3, v_val_5433_);
v___x_5437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5437_, 0, v___x_5435_);
lean_ctor_set(v___x_5437_, 1, v___x_5436_);
v___x_5438_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert(v___x_5437_, v_a_5405_, v_a_5406_, v_a_5407_, v_a_5408_, v_a_5409_, v_a_5410_, v_a_5411_, v_a_5412_, v_a_5413_, v_a_5414_, v_a_5415_);
return v___x_5438_;
}
else
{
lean_object* v___x_5439_; lean_object* v___x_5441_; 
lean_dec(v_a_5429_);
lean_dec(v_val_5425_);
lean_dec_ref(v_b_5404_);
lean_dec_ref(v_a_5403_);
v___x_5439_ = lean_box(0);
if (v_isShared_5432_ == 0)
{
lean_ctor_set(v___x_5431_, 0, v___x_5439_);
v___x_5441_ = v___x_5431_;
goto v_reusejp_5440_;
}
else
{
lean_object* v_reuseFailAlloc_5442_; 
v_reuseFailAlloc_5442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5442_, 0, v___x_5439_);
v___x_5441_ = v_reuseFailAlloc_5442_;
goto v_reusejp_5440_;
}
v_reusejp_5440_:
{
return v___x_5441_;
}
}
}
}
else
{
lean_object* v_a_5444_; lean_object* v___x_5446_; uint8_t v_isShared_5447_; uint8_t v_isSharedCheck_5451_; 
lean_dec(v_val_5425_);
lean_dec_ref(v_b_5404_);
lean_dec_ref(v_a_5403_);
v_a_5444_ = lean_ctor_get(v___x_5428_, 0);
v_isSharedCheck_5451_ = !lean_is_exclusive(v___x_5428_);
if (v_isSharedCheck_5451_ == 0)
{
v___x_5446_ = v___x_5428_;
v_isShared_5447_ = v_isSharedCheck_5451_;
goto v_resetjp_5445_;
}
else
{
lean_inc(v_a_5444_);
lean_dec(v___x_5428_);
v___x_5446_ = lean_box(0);
v_isShared_5447_ = v_isSharedCheck_5451_;
goto v_resetjp_5445_;
}
v_resetjp_5445_:
{
lean_object* v___x_5449_; 
if (v_isShared_5447_ == 0)
{
v___x_5449_ = v___x_5446_;
goto v_reusejp_5448_;
}
else
{
lean_object* v_reuseFailAlloc_5450_; 
v_reuseFailAlloc_5450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5450_, 0, v_a_5444_);
v___x_5449_ = v_reuseFailAlloc_5450_;
goto v_reusejp_5448_;
}
v_reusejp_5448_:
{
return v___x_5449_;
}
}
}
}
else
{
lean_object* v_a_5452_; lean_object* v___x_5454_; uint8_t v_isShared_5455_; uint8_t v_isSharedCheck_5459_; 
lean_dec(v_val_5425_);
lean_dec_ref(v_b_5404_);
lean_dec_ref(v_a_5403_);
v_a_5452_ = lean_ctor_get(v___x_5426_, 0);
v_isSharedCheck_5459_ = !lean_is_exclusive(v___x_5426_);
if (v_isSharedCheck_5459_ == 0)
{
v___x_5454_ = v___x_5426_;
v_isShared_5455_ = v_isSharedCheck_5459_;
goto v_resetjp_5453_;
}
else
{
lean_inc(v_a_5452_);
lean_dec(v___x_5426_);
v___x_5454_ = lean_box(0);
v_isShared_5455_ = v_isSharedCheck_5459_;
goto v_resetjp_5453_;
}
v_resetjp_5453_:
{
lean_object* v___x_5457_; 
if (v_isShared_5455_ == 0)
{
v___x_5457_ = v___x_5454_;
goto v_reusejp_5456_;
}
else
{
lean_object* v_reuseFailAlloc_5458_; 
v_reuseFailAlloc_5458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5458_, 0, v_a_5452_);
v___x_5457_ = v_reuseFailAlloc_5458_;
goto v_reusejp_5456_;
}
v_reusejp_5456_:
{
return v___x_5457_;
}
}
}
}
else
{
lean_object* v___x_5460_; lean_object* v___x_5462_; 
lean_dec(v_a_5421_);
lean_dec_ref(v_b_5404_);
lean_dec_ref(v_a_5403_);
v___x_5460_ = lean_box(0);
if (v_isShared_5424_ == 0)
{
lean_ctor_set(v___x_5423_, 0, v___x_5460_);
v___x_5462_ = v___x_5423_;
goto v_reusejp_5461_;
}
else
{
lean_object* v_reuseFailAlloc_5463_; 
v_reuseFailAlloc_5463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5463_, 0, v___x_5460_);
v___x_5462_ = v_reuseFailAlloc_5463_;
goto v_reusejp_5461_;
}
v_reusejp_5461_:
{
return v___x_5462_;
}
}
}
}
else
{
lean_object* v_a_5465_; lean_object* v___x_5467_; uint8_t v_isShared_5468_; uint8_t v_isSharedCheck_5472_; 
lean_dec_ref(v_b_5404_);
lean_dec_ref(v_a_5403_);
v_a_5465_ = lean_ctor_get(v___x_5420_, 0);
v_isSharedCheck_5472_ = !lean_is_exclusive(v___x_5420_);
if (v_isSharedCheck_5472_ == 0)
{
v___x_5467_ = v___x_5420_;
v_isShared_5468_ = v_isSharedCheck_5472_;
goto v_resetjp_5466_;
}
else
{
lean_inc(v_a_5465_);
lean_dec(v___x_5420_);
v___x_5467_ = lean_box(0);
v_isShared_5468_ = v_isSharedCheck_5472_;
goto v_resetjp_5466_;
}
v_resetjp_5466_:
{
lean_object* v___x_5470_; 
if (v_isShared_5468_ == 0)
{
v___x_5470_ = v___x_5467_;
goto v_reusejp_5469_;
}
else
{
lean_object* v_reuseFailAlloc_5471_; 
v_reuseFailAlloc_5471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5471_, 0, v_a_5465_);
v___x_5470_ = v_reuseFailAlloc_5471_;
goto v_reusejp_5469_;
}
v_reusejp_5469_:
{
return v___x_5470_;
}
}
}
}
else
{
lean_object* v_a_5473_; lean_object* v___x_5475_; uint8_t v_isShared_5476_; uint8_t v_isSharedCheck_5480_; 
lean_dec_ref(v_b_5404_);
lean_dec_ref(v_a_5403_);
v_a_5473_ = lean_ctor_get(v___x_5417_, 0);
v_isSharedCheck_5480_ = !lean_is_exclusive(v___x_5417_);
if (v_isSharedCheck_5480_ == 0)
{
v___x_5475_ = v___x_5417_;
v_isShared_5476_ = v_isSharedCheck_5480_;
goto v_resetjp_5474_;
}
else
{
lean_inc(v_a_5473_);
lean_dec(v___x_5417_);
v___x_5475_ = lean_box(0);
v_isShared_5476_ = v_isSharedCheck_5480_;
goto v_resetjp_5474_;
}
v_resetjp_5474_:
{
lean_object* v___x_5478_; 
if (v_isShared_5476_ == 0)
{
v___x_5478_ = v___x_5475_;
goto v_reusejp_5477_;
}
else
{
lean_object* v_reuseFailAlloc_5479_; 
v_reuseFailAlloc_5479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5479_, 0, v_a_5473_);
v___x_5478_ = v_reuseFailAlloc_5479_;
goto v_reusejp_5477_;
}
v_reusejp_5477_:
{
return v___x_5478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleDiseq___boxed(lean_object* v_a_5481_, lean_object* v_b_5482_, lean_object* v_a_5483_, lean_object* v_a_5484_, lean_object* v_a_5485_, lean_object* v_a_5486_, lean_object* v_a_5487_, lean_object* v_a_5488_, lean_object* v_a_5489_, lean_object* v_a_5490_, lean_object* v_a_5491_, lean_object* v_a_5492_, lean_object* v_a_5493_, lean_object* v_a_5494_){
_start:
{
lean_object* v_res_5495_; 
v_res_5495_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleDiseq(v_a_5481_, v_b_5482_, v_a_5483_, v_a_5484_, v_a_5485_, v_a_5486_, v_a_5487_, v_a_5488_, v_a_5489_, v_a_5490_, v_a_5491_, v_a_5492_, v_a_5493_);
lean_dec(v_a_5493_);
lean_dec_ref(v_a_5492_);
lean_dec(v_a_5491_);
lean_dec_ref(v_a_5490_);
lean_dec(v_a_5489_);
lean_dec_ref(v_a_5488_);
lean_dec(v_a_5487_);
lean_dec_ref(v_a_5486_);
lean_dec(v_a_5485_);
lean_dec(v_a_5484_);
lean_dec(v_a_5483_);
return v_res_5495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleDiseq(lean_object* v_a_5496_, lean_object* v_b_5497_, lean_object* v_a_5498_, lean_object* v_a_5499_, lean_object* v_a_5500_, lean_object* v_a_5501_, lean_object* v_a_5502_, lean_object* v_a_5503_, lean_object* v_a_5504_, lean_object* v_a_5505_, lean_object* v_a_5506_, lean_object* v_a_5507_, lean_object* v_a_5508_){
_start:
{
lean_object* v___x_5510_; 
v___x_5510_ = l_Lean_Meta_Grind_Arith_Linear_getNatStruct(v_a_5498_, v_a_5499_, v_a_5500_, v_a_5501_, v_a_5502_, v_a_5503_, v_a_5504_, v_a_5505_, v_a_5506_, v_a_5507_, v_a_5508_);
if (lean_obj_tag(v___x_5510_) == 0)
{
lean_object* v_a_5511_; lean_object* v_addRightCancelInst_x3f_5512_; 
v_a_5511_ = lean_ctor_get(v___x_5510_, 0);
lean_inc(v_a_5511_);
lean_dec_ref_known(v___x_5510_, 1);
v_addRightCancelInst_x3f_5512_ = lean_ctor_get(v_a_5511_, 11);
if (lean_obj_tag(v_addRightCancelInst_x3f_5512_) == 0)
{
lean_object* v___x_5513_; 
lean_dec(v_a_5511_);
v___x_5513_ = l_Lean_Meta_Grind_Arith_Linear_normNatModuleDiseq(v_a_5496_, v_b_5497_, v_a_5498_, v_a_5499_, v_a_5500_, v_a_5501_, v_a_5502_, v_a_5503_, v_a_5504_, v_a_5505_, v_a_5506_, v_a_5507_, v_a_5508_);
return v___x_5513_;
}
else
{
lean_object* v_id_5514_; lean_object* v_structId_5515_; lean_object* v___x_5516_; 
v_id_5514_ = lean_ctor_get(v_a_5511_, 0);
lean_inc(v_id_5514_);
v_structId_5515_ = lean_ctor_get(v_a_5511_, 1);
lean_inc(v_structId_5515_);
lean_dec(v_a_5511_);
lean_inc_ref(v_a_5496_);
v___x_5516_ = l_Lean_Meta_Grind_Arith_Linear_ofNatModule(v_a_5496_, v_a_5498_, v_a_5499_, v_a_5500_, v_a_5501_, v_a_5502_, v_a_5503_, v_a_5504_, v_a_5505_, v_a_5506_, v_a_5507_, v_a_5508_);
if (lean_obj_tag(v___x_5516_) == 0)
{
lean_object* v_a_5517_; lean_object* v_fst_5518_; lean_object* v___x_5520_; uint8_t v_isShared_5521_; uint8_t v_isSharedCheck_5606_; 
v_a_5517_ = lean_ctor_get(v___x_5516_, 0);
lean_inc(v_a_5517_);
lean_dec_ref_known(v___x_5516_, 1);
v_fst_5518_ = lean_ctor_get(v_a_5517_, 0);
v_isSharedCheck_5606_ = !lean_is_exclusive(v_a_5517_);
if (v_isSharedCheck_5606_ == 0)
{
lean_object* v_unused_5607_; 
v_unused_5607_ = lean_ctor_get(v_a_5517_, 1);
lean_dec(v_unused_5607_);
v___x_5520_ = v_a_5517_;
v_isShared_5521_ = v_isSharedCheck_5606_;
goto v_resetjp_5519_;
}
else
{
lean_inc(v_fst_5518_);
lean_dec(v_a_5517_);
v___x_5520_ = lean_box(0);
v_isShared_5521_ = v_isSharedCheck_5606_;
goto v_resetjp_5519_;
}
v_resetjp_5519_:
{
lean_object* v___x_5522_; 
lean_inc_ref(v_b_5497_);
v___x_5522_ = l_Lean_Meta_Grind_Arith_Linear_ofNatModule(v_b_5497_, v_a_5498_, v_a_5499_, v_a_5500_, v_a_5501_, v_a_5502_, v_a_5503_, v_a_5504_, v_a_5505_, v_a_5506_, v_a_5507_, v_a_5508_);
if (lean_obj_tag(v___x_5522_) == 0)
{
lean_object* v_a_5523_; lean_object* v_fst_5524_; lean_object* v___x_5526_; uint8_t v_isShared_5527_; uint8_t v_isSharedCheck_5596_; 
v_a_5523_ = lean_ctor_get(v___x_5522_, 0);
lean_inc(v_a_5523_);
lean_dec_ref_known(v___x_5522_, 1);
v_fst_5524_ = lean_ctor_get(v_a_5523_, 0);
v_isSharedCheck_5596_ = !lean_is_exclusive(v_a_5523_);
if (v_isSharedCheck_5596_ == 0)
{
lean_object* v_unused_5597_; 
v_unused_5597_ = lean_ctor_get(v_a_5523_, 1);
lean_dec(v_unused_5597_);
v___x_5526_ = v_a_5523_;
v_isShared_5527_ = v_isSharedCheck_5596_;
goto v_resetjp_5525_;
}
else
{
lean_inc(v_fst_5524_);
lean_dec(v_a_5523_);
v___x_5526_ = lean_box(0);
v_isShared_5527_ = v_isSharedCheck_5596_;
goto v_resetjp_5525_;
}
v_resetjp_5525_:
{
lean_object* v___x_5528_; 
v___x_5528_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_5496_, v_a_5499_);
if (lean_obj_tag(v___x_5528_) == 0)
{
lean_object* v_a_5529_; uint8_t v___x_5530_; lean_object* v___x_5531_; 
v_a_5529_ = lean_ctor_get(v___x_5528_, 0);
lean_inc(v_a_5529_);
lean_dec_ref_known(v___x_5528_, 1);
v___x_5530_ = 0;
v___x_5531_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_fst_5518_, v___x_5530_, v_a_5529_, v_structId_5515_, v_a_5499_, v_a_5500_, v_a_5501_, v_a_5502_, v_a_5503_, v_a_5504_, v_a_5505_, v_a_5506_, v_a_5507_, v_a_5508_);
if (lean_obj_tag(v___x_5531_) == 0)
{
lean_object* v_a_5532_; lean_object* v___x_5534_; uint8_t v_isShared_5535_; uint8_t v_isSharedCheck_5579_; 
v_a_5532_ = lean_ctor_get(v___x_5531_, 0);
v_isSharedCheck_5579_ = !lean_is_exclusive(v___x_5531_);
if (v_isSharedCheck_5579_ == 0)
{
v___x_5534_ = v___x_5531_;
v_isShared_5535_ = v_isSharedCheck_5579_;
goto v_resetjp_5533_;
}
else
{
lean_inc(v_a_5532_);
lean_dec(v___x_5531_);
v___x_5534_ = lean_box(0);
v_isShared_5535_ = v_isSharedCheck_5579_;
goto v_resetjp_5533_;
}
v_resetjp_5533_:
{
if (lean_obj_tag(v_a_5532_) == 1)
{
lean_object* v_val_5536_; lean_object* v___x_5537_; 
lean_del_object(v___x_5534_);
v_val_5536_ = lean_ctor_get(v_a_5532_, 0);
lean_inc(v_val_5536_);
lean_dec_ref_known(v_a_5532_, 1);
v___x_5537_ = l_Lean_Meta_Grind_getGeneration___redArg(v_b_5497_, v_a_5499_);
if (lean_obj_tag(v___x_5537_) == 0)
{
lean_object* v_a_5538_; lean_object* v___x_5539_; 
v_a_5538_ = lean_ctor_get(v___x_5537_, 0);
lean_inc(v_a_5538_);
lean_dec_ref_known(v___x_5537_, 1);
v___x_5539_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_fst_5524_, v___x_5530_, v_a_5538_, v_structId_5515_, v_a_5499_, v_a_5500_, v_a_5501_, v_a_5502_, v_a_5503_, v_a_5504_, v_a_5505_, v_a_5506_, v_a_5507_, v_a_5508_);
if (lean_obj_tag(v___x_5539_) == 0)
{
lean_object* v_a_5540_; lean_object* v___x_5542_; uint8_t v_isShared_5543_; uint8_t v_isSharedCheck_5558_; 
v_a_5540_ = lean_ctor_get(v___x_5539_, 0);
v_isSharedCheck_5558_ = !lean_is_exclusive(v___x_5539_);
if (v_isSharedCheck_5558_ == 0)
{
v___x_5542_ = v___x_5539_;
v_isShared_5543_ = v_isSharedCheck_5558_;
goto v_resetjp_5541_;
}
else
{
lean_inc(v_a_5540_);
lean_dec(v___x_5539_);
v___x_5542_ = lean_box(0);
v_isShared_5543_ = v_isSharedCheck_5558_;
goto v_resetjp_5541_;
}
v_resetjp_5541_:
{
if (lean_obj_tag(v_a_5540_) == 1)
{
lean_object* v_val_5544_; lean_object* v___x_5546_; 
lean_del_object(v___x_5542_);
v_val_5544_ = lean_ctor_get(v_a_5540_, 0);
lean_inc_n(v_val_5544_, 2);
lean_dec_ref_known(v_a_5540_, 1);
lean_inc(v_val_5536_);
if (v_isShared_5527_ == 0)
{
lean_ctor_set_tag(v___x_5526_, 3);
lean_ctor_set(v___x_5526_, 1, v_val_5544_);
lean_ctor_set(v___x_5526_, 0, v_val_5536_);
v___x_5546_ = v___x_5526_;
goto v_reusejp_5545_;
}
else
{
lean_object* v_reuseFailAlloc_5553_; 
v_reuseFailAlloc_5553_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5553_, 0, v_val_5536_);
lean_ctor_set(v_reuseFailAlloc_5553_, 1, v_val_5544_);
v___x_5546_ = v_reuseFailAlloc_5553_;
goto v_reusejp_5545_;
}
v_reusejp_5545_:
{
lean_object* v___x_5547_; lean_object* v___x_5548_; lean_object* v___x_5550_; 
v___x_5547_ = l_Lean_Grind_Linarith_Expr_norm(v___x_5546_);
v___x_5548_ = lean_alloc_ctor(2, 5, 0);
lean_ctor_set(v___x_5548_, 0, v_a_5496_);
lean_ctor_set(v___x_5548_, 1, v_b_5497_);
lean_ctor_set(v___x_5548_, 2, v_id_5514_);
lean_ctor_set(v___x_5548_, 3, v_val_5536_);
lean_ctor_set(v___x_5548_, 4, v_val_5544_);
if (v_isShared_5521_ == 0)
{
lean_ctor_set(v___x_5520_, 1, v___x_5548_);
lean_ctor_set(v___x_5520_, 0, v___x_5547_);
v___x_5550_ = v___x_5520_;
goto v_reusejp_5549_;
}
else
{
lean_object* v_reuseFailAlloc_5552_; 
v_reuseFailAlloc_5552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5552_, 0, v___x_5547_);
lean_ctor_set(v_reuseFailAlloc_5552_, 1, v___x_5548_);
v___x_5550_ = v_reuseFailAlloc_5552_;
goto v_reusejp_5549_;
}
v_reusejp_5549_:
{
lean_object* v___x_5551_; 
v___x_5551_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_DiseqCnstr_assert(v___x_5550_, v_structId_5515_, v_a_5499_, v_a_5500_, v_a_5501_, v_a_5502_, v_a_5503_, v_a_5504_, v_a_5505_, v_a_5506_, v_a_5507_, v_a_5508_);
lean_dec(v_structId_5515_);
return v___x_5551_;
}
}
}
else
{
lean_object* v___x_5554_; lean_object* v___x_5556_; 
lean_dec(v_a_5540_);
lean_dec(v_val_5536_);
lean_del_object(v___x_5526_);
lean_del_object(v___x_5520_);
lean_dec(v_structId_5515_);
lean_dec(v_id_5514_);
lean_dec_ref(v_b_5497_);
lean_dec_ref(v_a_5496_);
v___x_5554_ = lean_box(0);
if (v_isShared_5543_ == 0)
{
lean_ctor_set(v___x_5542_, 0, v___x_5554_);
v___x_5556_ = v___x_5542_;
goto v_reusejp_5555_;
}
else
{
lean_object* v_reuseFailAlloc_5557_; 
v_reuseFailAlloc_5557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5557_, 0, v___x_5554_);
v___x_5556_ = v_reuseFailAlloc_5557_;
goto v_reusejp_5555_;
}
v_reusejp_5555_:
{
return v___x_5556_;
}
}
}
}
else
{
lean_object* v_a_5559_; lean_object* v___x_5561_; uint8_t v_isShared_5562_; uint8_t v_isSharedCheck_5566_; 
lean_dec(v_val_5536_);
lean_del_object(v___x_5526_);
lean_del_object(v___x_5520_);
lean_dec(v_structId_5515_);
lean_dec(v_id_5514_);
lean_dec_ref(v_b_5497_);
lean_dec_ref(v_a_5496_);
v_a_5559_ = lean_ctor_get(v___x_5539_, 0);
v_isSharedCheck_5566_ = !lean_is_exclusive(v___x_5539_);
if (v_isSharedCheck_5566_ == 0)
{
v___x_5561_ = v___x_5539_;
v_isShared_5562_ = v_isSharedCheck_5566_;
goto v_resetjp_5560_;
}
else
{
lean_inc(v_a_5559_);
lean_dec(v___x_5539_);
v___x_5561_ = lean_box(0);
v_isShared_5562_ = v_isSharedCheck_5566_;
goto v_resetjp_5560_;
}
v_resetjp_5560_:
{
lean_object* v___x_5564_; 
if (v_isShared_5562_ == 0)
{
v___x_5564_ = v___x_5561_;
goto v_reusejp_5563_;
}
else
{
lean_object* v_reuseFailAlloc_5565_; 
v_reuseFailAlloc_5565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5565_, 0, v_a_5559_);
v___x_5564_ = v_reuseFailAlloc_5565_;
goto v_reusejp_5563_;
}
v_reusejp_5563_:
{
return v___x_5564_;
}
}
}
}
else
{
lean_object* v_a_5567_; lean_object* v___x_5569_; uint8_t v_isShared_5570_; uint8_t v_isSharedCheck_5574_; 
lean_dec(v_val_5536_);
lean_del_object(v___x_5526_);
lean_dec(v_fst_5524_);
lean_del_object(v___x_5520_);
lean_dec(v_structId_5515_);
lean_dec(v_id_5514_);
lean_dec_ref(v_b_5497_);
lean_dec_ref(v_a_5496_);
v_a_5567_ = lean_ctor_get(v___x_5537_, 0);
v_isSharedCheck_5574_ = !lean_is_exclusive(v___x_5537_);
if (v_isSharedCheck_5574_ == 0)
{
v___x_5569_ = v___x_5537_;
v_isShared_5570_ = v_isSharedCheck_5574_;
goto v_resetjp_5568_;
}
else
{
lean_inc(v_a_5567_);
lean_dec(v___x_5537_);
v___x_5569_ = lean_box(0);
v_isShared_5570_ = v_isSharedCheck_5574_;
goto v_resetjp_5568_;
}
v_resetjp_5568_:
{
lean_object* v___x_5572_; 
if (v_isShared_5570_ == 0)
{
v___x_5572_ = v___x_5569_;
goto v_reusejp_5571_;
}
else
{
lean_object* v_reuseFailAlloc_5573_; 
v_reuseFailAlloc_5573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5573_, 0, v_a_5567_);
v___x_5572_ = v_reuseFailAlloc_5573_;
goto v_reusejp_5571_;
}
v_reusejp_5571_:
{
return v___x_5572_;
}
}
}
}
else
{
lean_object* v___x_5575_; lean_object* v___x_5577_; 
lean_dec(v_a_5532_);
lean_del_object(v___x_5526_);
lean_dec(v_fst_5524_);
lean_del_object(v___x_5520_);
lean_dec(v_structId_5515_);
lean_dec(v_id_5514_);
lean_dec_ref(v_b_5497_);
lean_dec_ref(v_a_5496_);
v___x_5575_ = lean_box(0);
if (v_isShared_5535_ == 0)
{
lean_ctor_set(v___x_5534_, 0, v___x_5575_);
v___x_5577_ = v___x_5534_;
goto v_reusejp_5576_;
}
else
{
lean_object* v_reuseFailAlloc_5578_; 
v_reuseFailAlloc_5578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5578_, 0, v___x_5575_);
v___x_5577_ = v_reuseFailAlloc_5578_;
goto v_reusejp_5576_;
}
v_reusejp_5576_:
{
return v___x_5577_;
}
}
}
}
else
{
lean_object* v_a_5580_; lean_object* v___x_5582_; uint8_t v_isShared_5583_; uint8_t v_isSharedCheck_5587_; 
lean_del_object(v___x_5526_);
lean_dec(v_fst_5524_);
lean_del_object(v___x_5520_);
lean_dec(v_structId_5515_);
lean_dec(v_id_5514_);
lean_dec_ref(v_b_5497_);
lean_dec_ref(v_a_5496_);
v_a_5580_ = lean_ctor_get(v___x_5531_, 0);
v_isSharedCheck_5587_ = !lean_is_exclusive(v___x_5531_);
if (v_isSharedCheck_5587_ == 0)
{
v___x_5582_ = v___x_5531_;
v_isShared_5583_ = v_isSharedCheck_5587_;
goto v_resetjp_5581_;
}
else
{
lean_inc(v_a_5580_);
lean_dec(v___x_5531_);
v___x_5582_ = lean_box(0);
v_isShared_5583_ = v_isSharedCheck_5587_;
goto v_resetjp_5581_;
}
v_resetjp_5581_:
{
lean_object* v___x_5585_; 
if (v_isShared_5583_ == 0)
{
v___x_5585_ = v___x_5582_;
goto v_reusejp_5584_;
}
else
{
lean_object* v_reuseFailAlloc_5586_; 
v_reuseFailAlloc_5586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5586_, 0, v_a_5580_);
v___x_5585_ = v_reuseFailAlloc_5586_;
goto v_reusejp_5584_;
}
v_reusejp_5584_:
{
return v___x_5585_;
}
}
}
}
else
{
lean_object* v_a_5588_; lean_object* v___x_5590_; uint8_t v_isShared_5591_; uint8_t v_isSharedCheck_5595_; 
lean_del_object(v___x_5526_);
lean_dec(v_fst_5524_);
lean_del_object(v___x_5520_);
lean_dec(v_fst_5518_);
lean_dec(v_structId_5515_);
lean_dec(v_id_5514_);
lean_dec_ref(v_b_5497_);
lean_dec_ref(v_a_5496_);
v_a_5588_ = lean_ctor_get(v___x_5528_, 0);
v_isSharedCheck_5595_ = !lean_is_exclusive(v___x_5528_);
if (v_isSharedCheck_5595_ == 0)
{
v___x_5590_ = v___x_5528_;
v_isShared_5591_ = v_isSharedCheck_5595_;
goto v_resetjp_5589_;
}
else
{
lean_inc(v_a_5588_);
lean_dec(v___x_5528_);
v___x_5590_ = lean_box(0);
v_isShared_5591_ = v_isSharedCheck_5595_;
goto v_resetjp_5589_;
}
v_resetjp_5589_:
{
lean_object* v___x_5593_; 
if (v_isShared_5591_ == 0)
{
v___x_5593_ = v___x_5590_;
goto v_reusejp_5592_;
}
else
{
lean_object* v_reuseFailAlloc_5594_; 
v_reuseFailAlloc_5594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5594_, 0, v_a_5588_);
v___x_5593_ = v_reuseFailAlloc_5594_;
goto v_reusejp_5592_;
}
v_reusejp_5592_:
{
return v___x_5593_;
}
}
}
}
}
else
{
lean_object* v_a_5598_; lean_object* v___x_5600_; uint8_t v_isShared_5601_; uint8_t v_isSharedCheck_5605_; 
lean_del_object(v___x_5520_);
lean_dec(v_fst_5518_);
lean_dec(v_structId_5515_);
lean_dec(v_id_5514_);
lean_dec_ref(v_b_5497_);
lean_dec_ref(v_a_5496_);
v_a_5598_ = lean_ctor_get(v___x_5522_, 0);
v_isSharedCheck_5605_ = !lean_is_exclusive(v___x_5522_);
if (v_isSharedCheck_5605_ == 0)
{
v___x_5600_ = v___x_5522_;
v_isShared_5601_ = v_isSharedCheck_5605_;
goto v_resetjp_5599_;
}
else
{
lean_inc(v_a_5598_);
lean_dec(v___x_5522_);
v___x_5600_ = lean_box(0);
v_isShared_5601_ = v_isSharedCheck_5605_;
goto v_resetjp_5599_;
}
v_resetjp_5599_:
{
lean_object* v___x_5603_; 
if (v_isShared_5601_ == 0)
{
v___x_5603_ = v___x_5600_;
goto v_reusejp_5602_;
}
else
{
lean_object* v_reuseFailAlloc_5604_; 
v_reuseFailAlloc_5604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5604_, 0, v_a_5598_);
v___x_5603_ = v_reuseFailAlloc_5604_;
goto v_reusejp_5602_;
}
v_reusejp_5602_:
{
return v___x_5603_;
}
}
}
}
}
else
{
lean_object* v_a_5608_; lean_object* v___x_5610_; uint8_t v_isShared_5611_; uint8_t v_isSharedCheck_5615_; 
lean_dec(v_structId_5515_);
lean_dec(v_id_5514_);
lean_dec_ref(v_b_5497_);
lean_dec_ref(v_a_5496_);
v_a_5608_ = lean_ctor_get(v___x_5516_, 0);
v_isSharedCheck_5615_ = !lean_is_exclusive(v___x_5516_);
if (v_isSharedCheck_5615_ == 0)
{
v___x_5610_ = v___x_5516_;
v_isShared_5611_ = v_isSharedCheck_5615_;
goto v_resetjp_5609_;
}
else
{
lean_inc(v_a_5608_);
lean_dec(v___x_5516_);
v___x_5610_ = lean_box(0);
v_isShared_5611_ = v_isSharedCheck_5615_;
goto v_resetjp_5609_;
}
v_resetjp_5609_:
{
lean_object* v___x_5613_; 
if (v_isShared_5611_ == 0)
{
v___x_5613_ = v___x_5610_;
goto v_reusejp_5612_;
}
else
{
lean_object* v_reuseFailAlloc_5614_; 
v_reuseFailAlloc_5614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5614_, 0, v_a_5608_);
v___x_5613_ = v_reuseFailAlloc_5614_;
goto v_reusejp_5612_;
}
v_reusejp_5612_:
{
return v___x_5613_;
}
}
}
}
}
else
{
lean_object* v_a_5616_; lean_object* v___x_5618_; uint8_t v_isShared_5619_; uint8_t v_isSharedCheck_5623_; 
lean_dec_ref(v_b_5497_);
lean_dec_ref(v_a_5496_);
v_a_5616_ = lean_ctor_get(v___x_5510_, 0);
v_isSharedCheck_5623_ = !lean_is_exclusive(v___x_5510_);
if (v_isSharedCheck_5623_ == 0)
{
v___x_5618_ = v___x_5510_;
v_isShared_5619_ = v_isSharedCheck_5623_;
goto v_resetjp_5617_;
}
else
{
lean_inc(v_a_5616_);
lean_dec(v___x_5510_);
v___x_5618_ = lean_box(0);
v_isShared_5619_ = v_isSharedCheck_5623_;
goto v_resetjp_5617_;
}
v_resetjp_5617_:
{
lean_object* v___x_5621_; 
if (v_isShared_5619_ == 0)
{
v___x_5621_ = v___x_5618_;
goto v_reusejp_5620_;
}
else
{
lean_object* v_reuseFailAlloc_5622_; 
v_reuseFailAlloc_5622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5622_, 0, v_a_5616_);
v___x_5621_ = v_reuseFailAlloc_5622_;
goto v_reusejp_5620_;
}
v_reusejp_5620_:
{
return v___x_5621_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleDiseq___boxed(lean_object* v_a_5624_, lean_object* v_b_5625_, lean_object* v_a_5626_, lean_object* v_a_5627_, lean_object* v_a_5628_, lean_object* v_a_5629_, lean_object* v_a_5630_, lean_object* v_a_5631_, lean_object* v_a_5632_, lean_object* v_a_5633_, lean_object* v_a_5634_, lean_object* v_a_5635_, lean_object* v_a_5636_, lean_object* v_a_5637_){
_start:
{
lean_object* v_res_5638_; 
v_res_5638_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleDiseq(v_a_5624_, v_b_5625_, v_a_5626_, v_a_5627_, v_a_5628_, v_a_5629_, v_a_5630_, v_a_5631_, v_a_5632_, v_a_5633_, v_a_5634_, v_a_5635_, v_a_5636_);
lean_dec(v_a_5636_);
lean_dec_ref(v_a_5635_);
lean_dec(v_a_5634_);
lean_dec_ref(v_a_5633_);
lean_dec(v_a_5632_);
lean_dec_ref(v_a_5631_);
lean_dec(v_a_5630_);
lean_dec_ref(v_a_5629_);
lean_dec(v_a_5628_);
lean_dec(v_a_5627_);
lean_dec(v_a_5626_);
return v_res_5638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_processNewDiseq(lean_object* v_a_5639_, lean_object* v_b_5640_, lean_object* v_a_5641_, lean_object* v_a_5642_, lean_object* v_a_5643_, lean_object* v_a_5644_, lean_object* v_a_5645_, lean_object* v_a_5646_, lean_object* v_a_5647_, lean_object* v_a_5648_, lean_object* v_a_5649_, lean_object* v_a_5650_){
_start:
{
lean_object* v___x_5652_; 
v___x_5652_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_inSameStruct_x3f___redArg(v_a_5639_, v_b_5640_, v_a_5641_, v_a_5649_);
if (lean_obj_tag(v___x_5652_) == 0)
{
lean_object* v_a_5653_; 
v_a_5653_ = lean_ctor_get(v___x_5652_, 0);
lean_inc(v_a_5653_);
lean_dec_ref_known(v___x_5652_, 1);
if (lean_obj_tag(v_a_5653_) == 1)
{
lean_object* v_val_5654_; lean_object* v___x_5655_; 
v_val_5654_ = lean_ctor_get(v_a_5653_, 0);
lean_inc(v_val_5654_);
lean_dec_ref_known(v_a_5653_, 1);
v___x_5655_ = l_Lean_Meta_Grind_Arith_Linear_isCommRing(v_val_5654_, v_a_5641_, v_a_5642_, v_a_5643_, v_a_5644_, v_a_5645_, v_a_5646_, v_a_5647_, v_a_5648_, v_a_5649_, v_a_5650_);
if (lean_obj_tag(v___x_5655_) == 0)
{
lean_object* v_a_5656_; uint8_t v___x_5657_; 
v_a_5656_ = lean_ctor_get(v___x_5655_, 0);
lean_inc(v_a_5656_);
lean_dec_ref_known(v___x_5655_, 1);
v___x_5657_ = lean_unbox(v_a_5656_);
lean_dec(v_a_5656_);
if (v___x_5657_ == 0)
{
lean_object* v___x_5658_; 
v___x_5658_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewIntModuleDiseq(v_a_5639_, v_b_5640_, v_val_5654_, v_a_5641_, v_a_5642_, v_a_5643_, v_a_5644_, v_a_5645_, v_a_5646_, v_a_5647_, v_a_5648_, v_a_5649_, v_a_5650_);
lean_dec(v_val_5654_);
return v___x_5658_;
}
else
{
lean_object* v___x_5659_; 
v___x_5659_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewCommRingDiseq(v_a_5639_, v_b_5640_, v_val_5654_, v_a_5641_, v_a_5642_, v_a_5643_, v_a_5644_, v_a_5645_, v_a_5646_, v_a_5647_, v_a_5648_, v_a_5649_, v_a_5650_);
lean_dec(v_val_5654_);
return v___x_5659_;
}
}
else
{
lean_object* v_a_5660_; lean_object* v___x_5662_; uint8_t v_isShared_5663_; uint8_t v_isSharedCheck_5667_; 
lean_dec(v_val_5654_);
lean_dec_ref(v_b_5640_);
lean_dec_ref(v_a_5639_);
v_a_5660_ = lean_ctor_get(v___x_5655_, 0);
v_isSharedCheck_5667_ = !lean_is_exclusive(v___x_5655_);
if (v_isSharedCheck_5667_ == 0)
{
v___x_5662_ = v___x_5655_;
v_isShared_5663_ = v_isSharedCheck_5667_;
goto v_resetjp_5661_;
}
else
{
lean_inc(v_a_5660_);
lean_dec(v___x_5655_);
v___x_5662_ = lean_box(0);
v_isShared_5663_ = v_isSharedCheck_5667_;
goto v_resetjp_5661_;
}
v_resetjp_5661_:
{
lean_object* v___x_5665_; 
if (v_isShared_5663_ == 0)
{
v___x_5665_ = v___x_5662_;
goto v_reusejp_5664_;
}
else
{
lean_object* v_reuseFailAlloc_5666_; 
v_reuseFailAlloc_5666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5666_, 0, v_a_5660_);
v___x_5665_ = v_reuseFailAlloc_5666_;
goto v_reusejp_5664_;
}
v_reusejp_5664_:
{
return v___x_5665_;
}
}
}
}
else
{
lean_object* v___x_5668_; 
lean_dec(v_a_5653_);
v___x_5668_ = l_Lean_Meta_Grind_Arith_Linear_inSameNatStruct_x3f___redArg(v_a_5639_, v_b_5640_, v_a_5641_, v_a_5649_);
if (lean_obj_tag(v___x_5668_) == 0)
{
lean_object* v_a_5669_; lean_object* v___x_5671_; uint8_t v_isShared_5672_; uint8_t v_isSharedCheck_5679_; 
v_a_5669_ = lean_ctor_get(v___x_5668_, 0);
v_isSharedCheck_5679_ = !lean_is_exclusive(v___x_5668_);
if (v_isSharedCheck_5679_ == 0)
{
v___x_5671_ = v___x_5668_;
v_isShared_5672_ = v_isSharedCheck_5679_;
goto v_resetjp_5670_;
}
else
{
lean_inc(v_a_5669_);
lean_dec(v___x_5668_);
v___x_5671_ = lean_box(0);
v_isShared_5672_ = v_isSharedCheck_5679_;
goto v_resetjp_5670_;
}
v_resetjp_5670_:
{
if (lean_obj_tag(v_a_5669_) == 1)
{
lean_object* v_val_5673_; lean_object* v___x_5674_; 
lean_del_object(v___x_5671_);
v_val_5673_ = lean_ctor_get(v_a_5669_, 0);
lean_inc(v_val_5673_);
lean_dec_ref_known(v_a_5669_, 1);
v___x_5674_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq_0__Lean_Meta_Grind_Arith_Linear_processNewNatModuleDiseq(v_a_5639_, v_b_5640_, v_val_5673_, v_a_5641_, v_a_5642_, v_a_5643_, v_a_5644_, v_a_5645_, v_a_5646_, v_a_5647_, v_a_5648_, v_a_5649_, v_a_5650_);
lean_dec(v_val_5673_);
return v___x_5674_;
}
else
{
lean_object* v___x_5675_; lean_object* v___x_5677_; 
lean_dec(v_a_5669_);
lean_dec_ref(v_b_5640_);
lean_dec_ref(v_a_5639_);
v___x_5675_ = lean_box(0);
if (v_isShared_5672_ == 0)
{
lean_ctor_set(v___x_5671_, 0, v___x_5675_);
v___x_5677_ = v___x_5671_;
goto v_reusejp_5676_;
}
else
{
lean_object* v_reuseFailAlloc_5678_; 
v_reuseFailAlloc_5678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5678_, 0, v___x_5675_);
v___x_5677_ = v_reuseFailAlloc_5678_;
goto v_reusejp_5676_;
}
v_reusejp_5676_:
{
return v___x_5677_;
}
}
}
}
else
{
lean_object* v_a_5680_; lean_object* v___x_5682_; uint8_t v_isShared_5683_; uint8_t v_isSharedCheck_5687_; 
lean_dec_ref(v_b_5640_);
lean_dec_ref(v_a_5639_);
v_a_5680_ = lean_ctor_get(v___x_5668_, 0);
v_isSharedCheck_5687_ = !lean_is_exclusive(v___x_5668_);
if (v_isSharedCheck_5687_ == 0)
{
v___x_5682_ = v___x_5668_;
v_isShared_5683_ = v_isSharedCheck_5687_;
goto v_resetjp_5681_;
}
else
{
lean_inc(v_a_5680_);
lean_dec(v___x_5668_);
v___x_5682_ = lean_box(0);
v_isShared_5683_ = v_isSharedCheck_5687_;
goto v_resetjp_5681_;
}
v_resetjp_5681_:
{
lean_object* v___x_5685_; 
if (v_isShared_5683_ == 0)
{
v___x_5685_ = v___x_5682_;
goto v_reusejp_5684_;
}
else
{
lean_object* v_reuseFailAlloc_5686_; 
v_reuseFailAlloc_5686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5686_, 0, v_a_5680_);
v___x_5685_ = v_reuseFailAlloc_5686_;
goto v_reusejp_5684_;
}
v_reusejp_5684_:
{
return v___x_5685_;
}
}
}
}
}
else
{
lean_object* v_a_5688_; lean_object* v___x_5690_; uint8_t v_isShared_5691_; uint8_t v_isSharedCheck_5695_; 
lean_dec_ref(v_b_5640_);
lean_dec_ref(v_a_5639_);
v_a_5688_ = lean_ctor_get(v___x_5652_, 0);
v_isSharedCheck_5695_ = !lean_is_exclusive(v___x_5652_);
if (v_isSharedCheck_5695_ == 0)
{
v___x_5690_ = v___x_5652_;
v_isShared_5691_ = v_isSharedCheck_5695_;
goto v_resetjp_5689_;
}
else
{
lean_inc(v_a_5688_);
lean_dec(v___x_5652_);
v___x_5690_ = lean_box(0);
v_isShared_5691_ = v_isSharedCheck_5695_;
goto v_resetjp_5689_;
}
v_resetjp_5689_:
{
lean_object* v___x_5693_; 
if (v_isShared_5691_ == 0)
{
v___x_5693_ = v___x_5690_;
goto v_reusejp_5692_;
}
else
{
lean_object* v_reuseFailAlloc_5694_; 
v_reuseFailAlloc_5694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5694_, 0, v_a_5688_);
v___x_5693_ = v_reuseFailAlloc_5694_;
goto v_reusejp_5692_;
}
v_reusejp_5692_:
{
return v___x_5693_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_processNewDiseq___boxed(lean_object* v_a_5696_, lean_object* v_b_5697_, lean_object* v_a_5698_, lean_object* v_a_5699_, lean_object* v_a_5700_, lean_object* v_a_5701_, lean_object* v_a_5702_, lean_object* v_a_5703_, lean_object* v_a_5704_, lean_object* v_a_5705_, lean_object* v_a_5706_, lean_object* v_a_5707_, lean_object* v_a_5708_){
_start:
{
lean_object* v_res_5709_; 
v_res_5709_ = l_Lean_Meta_Grind_Arith_Linear_processNewDiseq(v_a_5696_, v_b_5697_, v_a_5698_, v_a_5699_, v_a_5700_, v_a_5701_, v_a_5702_, v_a_5703_, v_a_5704_, v_a_5705_, v_a_5706_, v_a_5707_);
lean_dec(v_a_5707_);
lean_dec_ref(v_a_5706_);
lean_dec(v_a_5705_);
lean_dec_ref(v_a_5704_);
lean_dec(v_a_5703_);
lean_dec_ref(v_a_5702_);
lean_dec(v_a_5701_);
lean_dec_ref(v_a_5700_);
lean_dec(v_a_5699_);
lean_dec(v_a_5698_);
return v_res_5709_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Den(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Reify(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Proof(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Den(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Den(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Reify(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Proof(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Den(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Linear_PropagateEq(builtin);
}
#ifdef __cplusplus
}
#endif

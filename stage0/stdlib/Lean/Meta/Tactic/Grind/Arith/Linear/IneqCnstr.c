// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Linear.IneqCnstr
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Linear.LinearM import Lean.Meta.Tactic.Grind.Arith.CommRing.Reify import Lean.Meta.Tactic.Grind.Arith.Linear.Den import Lean.Meta.Tactic.Grind.Arith.Linear.StructId import Lean.Meta.Tactic.Grind.Arith.Linear.Reify import Lean.Meta.Tactic.Grind.Arith.Linear.Proof
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
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_reify_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_isLinearOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Linear_linearExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Grind_Linarith_Expr_norm(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_setInconsistent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqLBool_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Grind_Linarith_Poly_updateOccs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkIntLit(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_ofNatModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_reify_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_withRingM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Grind_CommRing_Expr_toPoly(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_RingIneqCnstr_cleanupDenominators(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Grind_CommRing_Poly_toIntModuleExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_isInstOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_isInstOf___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__7___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "`grind linarith` internal error, structure is not an ordered module"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "`grind linarith` internal error, structure is not an ordered int module"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__0;
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "linarith"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 135, 131, 0, 162, 156, 15, 149)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__4_value),LEAN_SCALAR_PTR_LITERAL(111, 219, 223, 129, 16, 82, 214, 104)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__6_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__8;
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unsat"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 135, 131, 0, 162, 156, 15, 149)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__9_value),LEAN_SCALAR_PTR_LITERAL(30, 205, 246, 167, 183, 132, 208, 174)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__11;
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "store"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 135, 131, 0, 162, 156, 15, 149)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__13_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 36, 82, 219, 127, 154, 201, 164)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__13_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__12_value),LEAN_SCALAR_PTR_LITERAL(108, 151, 24, 43, 11, 190, 144, 191)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__13_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__14;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__15_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 135, 131, 0, 162, 156, 15, 149)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__15_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 36, 82, 219, 127, 154, 201, 164)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__15_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__16;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateIntModuleIneq(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateIntModuleIneq___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateNatModuleIneq(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateNatModuleIneq___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_propagateIneq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_propagateIneq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_isInstOf(lean_object* v_fn_x3f_1_, lean_object* v_inst_2_){
_start:
{
if (lean_obj_tag(v_fn_x3f_1_) == 1)
{
lean_object* v_val_3_; lean_object* v___x_4_; size_t v___x_5_; size_t v___x_6_; uint8_t v___x_7_; 
v_val_3_ = lean_ctor_get(v_fn_x3f_1_, 0);
v___x_4_ = l_Lean_Expr_appArg_x21(v_val_3_);
v___x_5_ = lean_ptr_addr(v___x_4_);
lean_dec_ref(v___x_4_);
v___x_6_ = lean_ptr_addr(v_inst_2_);
v___x_7_ = lean_usize_dec_eq(v___x_5_, v___x_6_);
return v___x_7_;
}
else
{
uint8_t v___x_8_; 
v___x_8_ = 0;
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_isInstOf___boxed(lean_object* v_fn_x3f_9_, lean_object* v_inst_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_isInstOf(v_fn_x3f_9_, v_inst_10_);
lean_dec_ref(v_inst_10_);
lean_dec(v_fn_x3f_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
static lean_object* _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_box(0);
v___x_14_ = l_unsafeCast___redArg(v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4(lean_object* v_c_15_, lean_object* v_x_16_, size_t v_x_17_, size_t v_x_18_){
_start:
{
if (lean_obj_tag(v_x_16_) == 0)
{
lean_object* v_cs_19_; size_t v_j_20_; lean_object* v___x_21_; lean_object* v___x_22_; uint8_t v___x_23_; 
v_cs_19_ = lean_ctor_get(v_x_16_, 0);
v_j_20_ = lean_usize_shift_right(v_x_17_, v_x_18_);
v___x_21_ = lean_usize_to_nat(v_j_20_);
v___x_22_ = lean_array_get_size(v_cs_19_);
v___x_23_ = lean_nat_dec_lt(v___x_21_, v___x_22_);
if (v___x_23_ == 0)
{
lean_dec(v___x_21_);
lean_dec_ref(v_c_15_);
return v_x_16_;
}
else
{
lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_41_; 
lean_inc_ref(v_cs_19_);
v_isSharedCheck_41_ = !lean_is_exclusive(v_x_16_);
if (v_isSharedCheck_41_ == 0)
{
lean_object* v_unused_42_; 
v_unused_42_ = lean_ctor_get(v_x_16_, 0);
lean_dec(v_unused_42_);
v___x_25_ = v_x_16_;
v_isShared_26_ = v_isSharedCheck_41_;
goto v_resetjp_24_;
}
else
{
lean_dec(v_x_16_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_41_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
size_t v___x_27_; size_t v___x_28_; size_t v___x_29_; size_t v_i_30_; size_t v___x_31_; size_t v_shift_32_; lean_object* v_v_33_; lean_object* v___x_34_; lean_object* v_xs_x27_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_27_ = ((size_t)1ULL);
v___x_28_ = lean_usize_shift_left(v___x_27_, v_x_18_);
v___x_29_ = lean_usize_sub(v___x_28_, v___x_27_);
v_i_30_ = lean_usize_land(v_x_17_, v___x_29_);
v___x_31_ = ((size_t)5ULL);
v_shift_32_ = lean_usize_sub(v_x_18_, v___x_31_);
v_v_33_ = lean_array_fget(v_cs_19_, v___x_21_);
v___x_34_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0);
v_xs_x27_35_ = lean_array_fset(v_cs_19_, v___x_21_, v___x_34_);
v___x_36_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4(v_c_15_, v_v_33_, v_i_30_, v_shift_32_);
v___x_37_ = lean_array_fset(v_xs_x27_35_, v___x_21_, v___x_36_);
lean_dec(v___x_21_);
if (v_isShared_26_ == 0)
{
lean_ctor_set(v___x_25_, 0, v___x_37_);
v___x_39_ = v___x_25_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v___x_37_);
v___x_39_ = v_reuseFailAlloc_40_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
return v___x_39_;
}
}
}
}
else
{
lean_object* v_vs_43_; lean_object* v___x_44_; lean_object* v___x_45_; uint8_t v___x_46_; 
v_vs_43_ = lean_ctor_get(v_x_16_, 0);
v___x_44_ = lean_usize_to_nat(v_x_17_);
v___x_45_ = lean_array_get_size(v_vs_43_);
v___x_46_ = lean_nat_dec_lt(v___x_44_, v___x_45_);
if (v___x_46_ == 0)
{
lean_dec(v___x_44_);
lean_dec_ref(v_c_15_);
return v_x_16_;
}
else
{
lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_58_; 
lean_inc_ref(v_vs_43_);
v_isSharedCheck_58_ = !lean_is_exclusive(v_x_16_);
if (v_isSharedCheck_58_ == 0)
{
lean_object* v_unused_59_; 
v_unused_59_ = lean_ctor_get(v_x_16_, 0);
lean_dec(v_unused_59_);
v___x_48_ = v_x_16_;
v_isShared_49_ = v_isSharedCheck_58_;
goto v_resetjp_47_;
}
else
{
lean_dec(v_x_16_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_58_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v_v_50_; lean_object* v___x_51_; lean_object* v_xs_x27_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_56_; 
v_v_50_ = lean_array_fget(v_vs_43_, v___x_44_);
v___x_51_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0);
v_xs_x27_52_ = lean_array_fset(v_vs_43_, v___x_44_, v___x_51_);
v___x_53_ = l_Lean_PersistentArray_push___redArg(v_v_50_, v_c_15_);
v___x_54_ = lean_array_fset(v_xs_x27_52_, v___x_44_, v___x_53_);
lean_dec(v___x_44_);
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 0, v___x_54_);
v___x_56_ = v___x_48_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v___x_54_);
v___x_56_ = v_reuseFailAlloc_57_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
return v___x_56_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___boxed(lean_object* v_c_60_, lean_object* v_x_61_, lean_object* v_x_62_, lean_object* v_x_63_){
_start:
{
size_t v_x_69559__boxed_64_; size_t v_x_69560__boxed_65_; lean_object* v_res_66_; 
v_x_69559__boxed_64_ = lean_unbox_usize(v_x_62_);
lean_dec(v_x_62_);
v_x_69560__boxed_65_ = lean_unbox_usize(v_x_63_);
lean_dec(v_x_63_);
v_res_66_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4(v_c_60_, v_x_61_, v_x_69559__boxed_64_, v_x_69560__boxed_65_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2(lean_object* v_c_67_, lean_object* v_t_68_, lean_object* v_i_69_){
_start:
{
lean_object* v_root_70_; lean_object* v_tail_71_; lean_object* v_size_72_; size_t v_shift_73_; lean_object* v_tailOff_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_98_; 
v_root_70_ = lean_ctor_get(v_t_68_, 0);
v_tail_71_ = lean_ctor_get(v_t_68_, 1);
v_size_72_ = lean_ctor_get(v_t_68_, 2);
v_shift_73_ = lean_ctor_get_usize(v_t_68_, 4);
v_tailOff_74_ = lean_ctor_get(v_t_68_, 3);
v_isSharedCheck_98_ = !lean_is_exclusive(v_t_68_);
if (v_isSharedCheck_98_ == 0)
{
v___x_76_ = v_t_68_;
v_isShared_77_ = v_isSharedCheck_98_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_tailOff_74_);
lean_inc(v_size_72_);
lean_inc(v_tail_71_);
lean_inc(v_root_70_);
lean_dec(v_t_68_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_98_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
uint8_t v___x_78_; 
v___x_78_ = lean_nat_dec_le(v_tailOff_74_, v_i_69_);
if (v___x_78_ == 0)
{
size_t v___x_79_; lean_object* v___x_80_; lean_object* v___x_82_; 
v___x_79_ = lean_usize_of_nat(v_i_69_);
v___x_80_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4(v_c_67_, v_root_70_, v___x_79_, v_shift_73_);
if (v_isShared_77_ == 0)
{
lean_ctor_set(v___x_76_, 0, v___x_80_);
v___x_82_ = v___x_76_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v___x_80_);
lean_ctor_set(v_reuseFailAlloc_83_, 1, v_tail_71_);
lean_ctor_set(v_reuseFailAlloc_83_, 2, v_size_72_);
lean_ctor_set(v_reuseFailAlloc_83_, 3, v_tailOff_74_);
lean_ctor_set_usize(v_reuseFailAlloc_83_, 4, v_shift_73_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
else
{
lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_84_ = lean_nat_sub(v_i_69_, v_tailOff_74_);
v___x_85_ = lean_array_get_size(v_tail_71_);
v___x_86_ = lean_nat_dec_lt(v___x_84_, v___x_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_88_; 
lean_dec(v___x_84_);
lean_dec_ref(v_c_67_);
if (v_isShared_77_ == 0)
{
v___x_88_ = v___x_76_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_root_70_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v_tail_71_);
lean_ctor_set(v_reuseFailAlloc_89_, 2, v_size_72_);
lean_ctor_set(v_reuseFailAlloc_89_, 3, v_tailOff_74_);
lean_ctor_set_usize(v_reuseFailAlloc_89_, 4, v_shift_73_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
else
{
lean_object* v_v_90_; lean_object* v___x_91_; lean_object* v_xs_x27_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_96_; 
v_v_90_ = lean_array_fget(v_tail_71_, v___x_84_);
v___x_91_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0);
v_xs_x27_92_ = lean_array_fset(v_tail_71_, v___x_84_, v___x_91_);
v___x_93_ = l_Lean_PersistentArray_push___redArg(v_v_90_, v_c_67_);
v___x_94_ = lean_array_fset(v_xs_x27_92_, v___x_84_, v___x_93_);
lean_dec(v___x_84_);
if (v_isShared_77_ == 0)
{
lean_ctor_set(v___x_76_, 1, v___x_94_);
v___x_96_ = v___x_76_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v_root_70_);
lean_ctor_set(v_reuseFailAlloc_97_, 1, v___x_94_);
lean_ctor_set(v_reuseFailAlloc_97_, 2, v_size_72_);
lean_ctor_set(v_reuseFailAlloc_97_, 3, v_tailOff_74_);
lean_ctor_set_usize(v_reuseFailAlloc_97_, 4, v_shift_73_);
v___x_96_ = v_reuseFailAlloc_97_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
return v___x_96_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___boxed(lean_object* v_c_99_, lean_object* v_t_100_, lean_object* v_i_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2(v_c_99_, v_t_100_, v_i_101_);
lean_dec(v_i_101_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__0(lean_object* v___y_103_, lean_object* v_c_104_, lean_object* v_v_105_, lean_object* v_s_106_){
_start:
{
lean_object* v_structs_107_; lean_object* v_typeIdOf_108_; lean_object* v_exprToStructId_109_; lean_object* v_exprToStructIdEntries_110_; lean_object* v_forbiddenNatModules_111_; lean_object* v_natStructs_112_; lean_object* v_natTypeIdOf_113_; lean_object* v_exprToNatStructId_114_; lean_object* v___x_115_; uint8_t v___x_116_; 
v_structs_107_ = lean_ctor_get(v_s_106_, 0);
v_typeIdOf_108_ = lean_ctor_get(v_s_106_, 1);
v_exprToStructId_109_ = lean_ctor_get(v_s_106_, 2);
v_exprToStructIdEntries_110_ = lean_ctor_get(v_s_106_, 3);
v_forbiddenNatModules_111_ = lean_ctor_get(v_s_106_, 4);
v_natStructs_112_ = lean_ctor_get(v_s_106_, 5);
v_natTypeIdOf_113_ = lean_ctor_get(v_s_106_, 6);
v_exprToNatStructId_114_ = lean_ctor_get(v_s_106_, 7);
v___x_115_ = lean_array_get_size(v_structs_107_);
v___x_116_ = lean_nat_dec_lt(v___y_103_, v___x_115_);
if (v___x_116_ == 0)
{
lean_dec_ref(v_c_104_);
return v_s_106_;
}
else
{
lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_178_; 
lean_inc_ref(v_exprToNatStructId_114_);
lean_inc_ref(v_natTypeIdOf_113_);
lean_inc_ref(v_natStructs_112_);
lean_inc_ref(v_forbiddenNatModules_111_);
lean_inc_ref(v_exprToStructIdEntries_110_);
lean_inc_ref(v_exprToStructId_109_);
lean_inc_ref(v_typeIdOf_108_);
lean_inc_ref(v_structs_107_);
v_isSharedCheck_178_ = !lean_is_exclusive(v_s_106_);
if (v_isSharedCheck_178_ == 0)
{
lean_object* v_unused_179_; lean_object* v_unused_180_; lean_object* v_unused_181_; lean_object* v_unused_182_; lean_object* v_unused_183_; lean_object* v_unused_184_; lean_object* v_unused_185_; lean_object* v_unused_186_; 
v_unused_179_ = lean_ctor_get(v_s_106_, 7);
lean_dec(v_unused_179_);
v_unused_180_ = lean_ctor_get(v_s_106_, 6);
lean_dec(v_unused_180_);
v_unused_181_ = lean_ctor_get(v_s_106_, 5);
lean_dec(v_unused_181_);
v_unused_182_ = lean_ctor_get(v_s_106_, 4);
lean_dec(v_unused_182_);
v_unused_183_ = lean_ctor_get(v_s_106_, 3);
lean_dec(v_unused_183_);
v_unused_184_ = lean_ctor_get(v_s_106_, 2);
lean_dec(v_unused_184_);
v_unused_185_ = lean_ctor_get(v_s_106_, 1);
lean_dec(v_unused_185_);
v_unused_186_ = lean_ctor_get(v_s_106_, 0);
lean_dec(v_unused_186_);
v___x_118_ = v_s_106_;
v_isShared_119_ = v_isSharedCheck_178_;
goto v_resetjp_117_;
}
else
{
lean_dec(v_s_106_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_178_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v_v_120_; lean_object* v_id_121_; lean_object* v_ringId_x3f_122_; lean_object* v_type_123_; lean_object* v_u_124_; lean_object* v_intModuleInst_125_; lean_object* v_leInst_x3f_126_; lean_object* v_ltInst_x3f_127_; lean_object* v_lawfulOrderLTInst_x3f_128_; lean_object* v_isPreorderInst_x3f_129_; lean_object* v_orderedAddInst_x3f_130_; lean_object* v_isLinearInst_x3f_131_; lean_object* v_noNatDivInst_x3f_132_; lean_object* v_ringInst_x3f_133_; lean_object* v_commRingInst_x3f_134_; lean_object* v_orderedRingInst_x3f_135_; lean_object* v_fieldInst_x3f_136_; lean_object* v_charInst_x3f_137_; lean_object* v_zero_138_; lean_object* v_ofNatZero_139_; lean_object* v_one_x3f_140_; lean_object* v_leFn_x3f_141_; lean_object* v_ltFn_x3f_142_; lean_object* v_addFn_143_; lean_object* v_zsmulFn_144_; lean_object* v_nsmulFn_145_; lean_object* v_zsmulFn_x3f_146_; lean_object* v_nsmulFn_x3f_147_; lean_object* v_homomulFn_x3f_148_; lean_object* v_subFn_149_; lean_object* v_negFn_150_; lean_object* v_vars_151_; lean_object* v_varMap_152_; lean_object* v_lowers_153_; lean_object* v_uppers_154_; lean_object* v_diseqs_155_; lean_object* v_assignment_156_; uint8_t v_caseSplits_157_; lean_object* v_conflict_x3f_158_; lean_object* v_diseqSplits_159_; lean_object* v_elimEqs_160_; lean_object* v_elimStack_161_; lean_object* v_occurs_162_; lean_object* v_ignored_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_177_; 
v_v_120_ = lean_array_fget(v_structs_107_, v___y_103_);
v_id_121_ = lean_ctor_get(v_v_120_, 0);
v_ringId_x3f_122_ = lean_ctor_get(v_v_120_, 1);
v_type_123_ = lean_ctor_get(v_v_120_, 2);
v_u_124_ = lean_ctor_get(v_v_120_, 3);
v_intModuleInst_125_ = lean_ctor_get(v_v_120_, 4);
v_leInst_x3f_126_ = lean_ctor_get(v_v_120_, 5);
v_ltInst_x3f_127_ = lean_ctor_get(v_v_120_, 6);
v_lawfulOrderLTInst_x3f_128_ = lean_ctor_get(v_v_120_, 7);
v_isPreorderInst_x3f_129_ = lean_ctor_get(v_v_120_, 8);
v_orderedAddInst_x3f_130_ = lean_ctor_get(v_v_120_, 9);
v_isLinearInst_x3f_131_ = lean_ctor_get(v_v_120_, 10);
v_noNatDivInst_x3f_132_ = lean_ctor_get(v_v_120_, 11);
v_ringInst_x3f_133_ = lean_ctor_get(v_v_120_, 12);
v_commRingInst_x3f_134_ = lean_ctor_get(v_v_120_, 13);
v_orderedRingInst_x3f_135_ = lean_ctor_get(v_v_120_, 14);
v_fieldInst_x3f_136_ = lean_ctor_get(v_v_120_, 15);
v_charInst_x3f_137_ = lean_ctor_get(v_v_120_, 16);
v_zero_138_ = lean_ctor_get(v_v_120_, 17);
v_ofNatZero_139_ = lean_ctor_get(v_v_120_, 18);
v_one_x3f_140_ = lean_ctor_get(v_v_120_, 19);
v_leFn_x3f_141_ = lean_ctor_get(v_v_120_, 20);
v_ltFn_x3f_142_ = lean_ctor_get(v_v_120_, 21);
v_addFn_143_ = lean_ctor_get(v_v_120_, 22);
v_zsmulFn_144_ = lean_ctor_get(v_v_120_, 23);
v_nsmulFn_145_ = lean_ctor_get(v_v_120_, 24);
v_zsmulFn_x3f_146_ = lean_ctor_get(v_v_120_, 25);
v_nsmulFn_x3f_147_ = lean_ctor_get(v_v_120_, 26);
v_homomulFn_x3f_148_ = lean_ctor_get(v_v_120_, 27);
v_subFn_149_ = lean_ctor_get(v_v_120_, 28);
v_negFn_150_ = lean_ctor_get(v_v_120_, 29);
v_vars_151_ = lean_ctor_get(v_v_120_, 30);
v_varMap_152_ = lean_ctor_get(v_v_120_, 31);
v_lowers_153_ = lean_ctor_get(v_v_120_, 32);
v_uppers_154_ = lean_ctor_get(v_v_120_, 33);
v_diseqs_155_ = lean_ctor_get(v_v_120_, 34);
v_assignment_156_ = lean_ctor_get(v_v_120_, 35);
v_caseSplits_157_ = lean_ctor_get_uint8(v_v_120_, sizeof(void*)*42);
v_conflict_x3f_158_ = lean_ctor_get(v_v_120_, 36);
v_diseqSplits_159_ = lean_ctor_get(v_v_120_, 37);
v_elimEqs_160_ = lean_ctor_get(v_v_120_, 38);
v_elimStack_161_ = lean_ctor_get(v_v_120_, 39);
v_occurs_162_ = lean_ctor_get(v_v_120_, 40);
v_ignored_163_ = lean_ctor_get(v_v_120_, 41);
v_isSharedCheck_177_ = !lean_is_exclusive(v_v_120_);
if (v_isSharedCheck_177_ == 0)
{
v___x_165_ = v_v_120_;
v_isShared_166_ = v_isSharedCheck_177_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_ignored_163_);
lean_inc(v_occurs_162_);
lean_inc(v_elimStack_161_);
lean_inc(v_elimEqs_160_);
lean_inc(v_diseqSplits_159_);
lean_inc(v_conflict_x3f_158_);
lean_inc(v_assignment_156_);
lean_inc(v_diseqs_155_);
lean_inc(v_uppers_154_);
lean_inc(v_lowers_153_);
lean_inc(v_varMap_152_);
lean_inc(v_vars_151_);
lean_inc(v_negFn_150_);
lean_inc(v_subFn_149_);
lean_inc(v_homomulFn_x3f_148_);
lean_inc(v_nsmulFn_x3f_147_);
lean_inc(v_zsmulFn_x3f_146_);
lean_inc(v_nsmulFn_145_);
lean_inc(v_zsmulFn_144_);
lean_inc(v_addFn_143_);
lean_inc(v_ltFn_x3f_142_);
lean_inc(v_leFn_x3f_141_);
lean_inc(v_one_x3f_140_);
lean_inc(v_ofNatZero_139_);
lean_inc(v_zero_138_);
lean_inc(v_charInst_x3f_137_);
lean_inc(v_fieldInst_x3f_136_);
lean_inc(v_orderedRingInst_x3f_135_);
lean_inc(v_commRingInst_x3f_134_);
lean_inc(v_ringInst_x3f_133_);
lean_inc(v_noNatDivInst_x3f_132_);
lean_inc(v_isLinearInst_x3f_131_);
lean_inc(v_orderedAddInst_x3f_130_);
lean_inc(v_isPreorderInst_x3f_129_);
lean_inc(v_lawfulOrderLTInst_x3f_128_);
lean_inc(v_ltInst_x3f_127_);
lean_inc(v_leInst_x3f_126_);
lean_inc(v_intModuleInst_125_);
lean_inc(v_u_124_);
lean_inc(v_type_123_);
lean_inc(v_ringId_x3f_122_);
lean_inc(v_id_121_);
lean_dec(v_v_120_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_177_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___x_167_; lean_object* v_xs_x27_168_; lean_object* v___x_169_; lean_object* v___x_171_; 
v___x_167_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0);
v_xs_x27_168_ = lean_array_fset(v_structs_107_, v___y_103_, v___x_167_);
v___x_169_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2(v_c_104_, v_lowers_153_, v_v_105_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 32, v___x_169_);
v___x_171_ = v___x_165_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_id_121_);
lean_ctor_set(v_reuseFailAlloc_176_, 1, v_ringId_x3f_122_);
lean_ctor_set(v_reuseFailAlloc_176_, 2, v_type_123_);
lean_ctor_set(v_reuseFailAlloc_176_, 3, v_u_124_);
lean_ctor_set(v_reuseFailAlloc_176_, 4, v_intModuleInst_125_);
lean_ctor_set(v_reuseFailAlloc_176_, 5, v_leInst_x3f_126_);
lean_ctor_set(v_reuseFailAlloc_176_, 6, v_ltInst_x3f_127_);
lean_ctor_set(v_reuseFailAlloc_176_, 7, v_lawfulOrderLTInst_x3f_128_);
lean_ctor_set(v_reuseFailAlloc_176_, 8, v_isPreorderInst_x3f_129_);
lean_ctor_set(v_reuseFailAlloc_176_, 9, v_orderedAddInst_x3f_130_);
lean_ctor_set(v_reuseFailAlloc_176_, 10, v_isLinearInst_x3f_131_);
lean_ctor_set(v_reuseFailAlloc_176_, 11, v_noNatDivInst_x3f_132_);
lean_ctor_set(v_reuseFailAlloc_176_, 12, v_ringInst_x3f_133_);
lean_ctor_set(v_reuseFailAlloc_176_, 13, v_commRingInst_x3f_134_);
lean_ctor_set(v_reuseFailAlloc_176_, 14, v_orderedRingInst_x3f_135_);
lean_ctor_set(v_reuseFailAlloc_176_, 15, v_fieldInst_x3f_136_);
lean_ctor_set(v_reuseFailAlloc_176_, 16, v_charInst_x3f_137_);
lean_ctor_set(v_reuseFailAlloc_176_, 17, v_zero_138_);
lean_ctor_set(v_reuseFailAlloc_176_, 18, v_ofNatZero_139_);
lean_ctor_set(v_reuseFailAlloc_176_, 19, v_one_x3f_140_);
lean_ctor_set(v_reuseFailAlloc_176_, 20, v_leFn_x3f_141_);
lean_ctor_set(v_reuseFailAlloc_176_, 21, v_ltFn_x3f_142_);
lean_ctor_set(v_reuseFailAlloc_176_, 22, v_addFn_143_);
lean_ctor_set(v_reuseFailAlloc_176_, 23, v_zsmulFn_144_);
lean_ctor_set(v_reuseFailAlloc_176_, 24, v_nsmulFn_145_);
lean_ctor_set(v_reuseFailAlloc_176_, 25, v_zsmulFn_x3f_146_);
lean_ctor_set(v_reuseFailAlloc_176_, 26, v_nsmulFn_x3f_147_);
lean_ctor_set(v_reuseFailAlloc_176_, 27, v_homomulFn_x3f_148_);
lean_ctor_set(v_reuseFailAlloc_176_, 28, v_subFn_149_);
lean_ctor_set(v_reuseFailAlloc_176_, 29, v_negFn_150_);
lean_ctor_set(v_reuseFailAlloc_176_, 30, v_vars_151_);
lean_ctor_set(v_reuseFailAlloc_176_, 31, v_varMap_152_);
lean_ctor_set(v_reuseFailAlloc_176_, 32, v___x_169_);
lean_ctor_set(v_reuseFailAlloc_176_, 33, v_uppers_154_);
lean_ctor_set(v_reuseFailAlloc_176_, 34, v_diseqs_155_);
lean_ctor_set(v_reuseFailAlloc_176_, 35, v_assignment_156_);
lean_ctor_set(v_reuseFailAlloc_176_, 36, v_conflict_x3f_158_);
lean_ctor_set(v_reuseFailAlloc_176_, 37, v_diseqSplits_159_);
lean_ctor_set(v_reuseFailAlloc_176_, 38, v_elimEqs_160_);
lean_ctor_set(v_reuseFailAlloc_176_, 39, v_elimStack_161_);
lean_ctor_set(v_reuseFailAlloc_176_, 40, v_occurs_162_);
lean_ctor_set(v_reuseFailAlloc_176_, 41, v_ignored_163_);
lean_ctor_set_uint8(v_reuseFailAlloc_176_, sizeof(void*)*42, v_caseSplits_157_);
v___x_171_ = v_reuseFailAlloc_176_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
lean_object* v___x_172_; lean_object* v___x_174_; 
v___x_172_ = lean_array_fset(v_xs_x27_168_, v___y_103_, v___x_171_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 0, v___x_172_);
v___x_174_ = v___x_118_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_172_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v_typeIdOf_108_);
lean_ctor_set(v_reuseFailAlloc_175_, 2, v_exprToStructId_109_);
lean_ctor_set(v_reuseFailAlloc_175_, 3, v_exprToStructIdEntries_110_);
lean_ctor_set(v_reuseFailAlloc_175_, 4, v_forbiddenNatModules_111_);
lean_ctor_set(v_reuseFailAlloc_175_, 5, v_natStructs_112_);
lean_ctor_set(v_reuseFailAlloc_175_, 6, v_natTypeIdOf_113_);
lean_ctor_set(v_reuseFailAlloc_175_, 7, v_exprToNatStructId_114_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__0___boxed(lean_object* v___y_187_, lean_object* v_c_188_, lean_object* v_v_189_, lean_object* v_s_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__0(v___y_187_, v_c_188_, v_v_189_, v_s_190_);
lean_dec(v_v_189_);
lean_dec(v___y_187_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__1(lean_object* v___y_192_, lean_object* v_c_193_, lean_object* v_v_194_, lean_object* v_s_195_){
_start:
{
lean_object* v_structs_196_; lean_object* v_typeIdOf_197_; lean_object* v_exprToStructId_198_; lean_object* v_exprToStructIdEntries_199_; lean_object* v_forbiddenNatModules_200_; lean_object* v_natStructs_201_; lean_object* v_natTypeIdOf_202_; lean_object* v_exprToNatStructId_203_; lean_object* v___x_204_; uint8_t v___x_205_; 
v_structs_196_ = lean_ctor_get(v_s_195_, 0);
v_typeIdOf_197_ = lean_ctor_get(v_s_195_, 1);
v_exprToStructId_198_ = lean_ctor_get(v_s_195_, 2);
v_exprToStructIdEntries_199_ = lean_ctor_get(v_s_195_, 3);
v_forbiddenNatModules_200_ = lean_ctor_get(v_s_195_, 4);
v_natStructs_201_ = lean_ctor_get(v_s_195_, 5);
v_natTypeIdOf_202_ = lean_ctor_get(v_s_195_, 6);
v_exprToNatStructId_203_ = lean_ctor_get(v_s_195_, 7);
v___x_204_ = lean_array_get_size(v_structs_196_);
v___x_205_ = lean_nat_dec_lt(v___y_192_, v___x_204_);
if (v___x_205_ == 0)
{
lean_dec_ref(v_c_193_);
return v_s_195_;
}
else
{
lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_267_; 
lean_inc_ref(v_exprToNatStructId_203_);
lean_inc_ref(v_natTypeIdOf_202_);
lean_inc_ref(v_natStructs_201_);
lean_inc_ref(v_forbiddenNatModules_200_);
lean_inc_ref(v_exprToStructIdEntries_199_);
lean_inc_ref(v_exprToStructId_198_);
lean_inc_ref(v_typeIdOf_197_);
lean_inc_ref(v_structs_196_);
v_isSharedCheck_267_ = !lean_is_exclusive(v_s_195_);
if (v_isSharedCheck_267_ == 0)
{
lean_object* v_unused_268_; lean_object* v_unused_269_; lean_object* v_unused_270_; lean_object* v_unused_271_; lean_object* v_unused_272_; lean_object* v_unused_273_; lean_object* v_unused_274_; lean_object* v_unused_275_; 
v_unused_268_ = lean_ctor_get(v_s_195_, 7);
lean_dec(v_unused_268_);
v_unused_269_ = lean_ctor_get(v_s_195_, 6);
lean_dec(v_unused_269_);
v_unused_270_ = lean_ctor_get(v_s_195_, 5);
lean_dec(v_unused_270_);
v_unused_271_ = lean_ctor_get(v_s_195_, 4);
lean_dec(v_unused_271_);
v_unused_272_ = lean_ctor_get(v_s_195_, 3);
lean_dec(v_unused_272_);
v_unused_273_ = lean_ctor_get(v_s_195_, 2);
lean_dec(v_unused_273_);
v_unused_274_ = lean_ctor_get(v_s_195_, 1);
lean_dec(v_unused_274_);
v_unused_275_ = lean_ctor_get(v_s_195_, 0);
lean_dec(v_unused_275_);
v___x_207_ = v_s_195_;
v_isShared_208_ = v_isSharedCheck_267_;
goto v_resetjp_206_;
}
else
{
lean_dec(v_s_195_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_267_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v_v_209_; lean_object* v_id_210_; lean_object* v_ringId_x3f_211_; lean_object* v_type_212_; lean_object* v_u_213_; lean_object* v_intModuleInst_214_; lean_object* v_leInst_x3f_215_; lean_object* v_ltInst_x3f_216_; lean_object* v_lawfulOrderLTInst_x3f_217_; lean_object* v_isPreorderInst_x3f_218_; lean_object* v_orderedAddInst_x3f_219_; lean_object* v_isLinearInst_x3f_220_; lean_object* v_noNatDivInst_x3f_221_; lean_object* v_ringInst_x3f_222_; lean_object* v_commRingInst_x3f_223_; lean_object* v_orderedRingInst_x3f_224_; lean_object* v_fieldInst_x3f_225_; lean_object* v_charInst_x3f_226_; lean_object* v_zero_227_; lean_object* v_ofNatZero_228_; lean_object* v_one_x3f_229_; lean_object* v_leFn_x3f_230_; lean_object* v_ltFn_x3f_231_; lean_object* v_addFn_232_; lean_object* v_zsmulFn_233_; lean_object* v_nsmulFn_234_; lean_object* v_zsmulFn_x3f_235_; lean_object* v_nsmulFn_x3f_236_; lean_object* v_homomulFn_x3f_237_; lean_object* v_subFn_238_; lean_object* v_negFn_239_; lean_object* v_vars_240_; lean_object* v_varMap_241_; lean_object* v_lowers_242_; lean_object* v_uppers_243_; lean_object* v_diseqs_244_; lean_object* v_assignment_245_; uint8_t v_caseSplits_246_; lean_object* v_conflict_x3f_247_; lean_object* v_diseqSplits_248_; lean_object* v_elimEqs_249_; lean_object* v_elimStack_250_; lean_object* v_occurs_251_; lean_object* v_ignored_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_266_; 
v_v_209_ = lean_array_fget(v_structs_196_, v___y_192_);
v_id_210_ = lean_ctor_get(v_v_209_, 0);
v_ringId_x3f_211_ = lean_ctor_get(v_v_209_, 1);
v_type_212_ = lean_ctor_get(v_v_209_, 2);
v_u_213_ = lean_ctor_get(v_v_209_, 3);
v_intModuleInst_214_ = lean_ctor_get(v_v_209_, 4);
v_leInst_x3f_215_ = lean_ctor_get(v_v_209_, 5);
v_ltInst_x3f_216_ = lean_ctor_get(v_v_209_, 6);
v_lawfulOrderLTInst_x3f_217_ = lean_ctor_get(v_v_209_, 7);
v_isPreorderInst_x3f_218_ = lean_ctor_get(v_v_209_, 8);
v_orderedAddInst_x3f_219_ = lean_ctor_get(v_v_209_, 9);
v_isLinearInst_x3f_220_ = lean_ctor_get(v_v_209_, 10);
v_noNatDivInst_x3f_221_ = lean_ctor_get(v_v_209_, 11);
v_ringInst_x3f_222_ = lean_ctor_get(v_v_209_, 12);
v_commRingInst_x3f_223_ = lean_ctor_get(v_v_209_, 13);
v_orderedRingInst_x3f_224_ = lean_ctor_get(v_v_209_, 14);
v_fieldInst_x3f_225_ = lean_ctor_get(v_v_209_, 15);
v_charInst_x3f_226_ = lean_ctor_get(v_v_209_, 16);
v_zero_227_ = lean_ctor_get(v_v_209_, 17);
v_ofNatZero_228_ = lean_ctor_get(v_v_209_, 18);
v_one_x3f_229_ = lean_ctor_get(v_v_209_, 19);
v_leFn_x3f_230_ = lean_ctor_get(v_v_209_, 20);
v_ltFn_x3f_231_ = lean_ctor_get(v_v_209_, 21);
v_addFn_232_ = lean_ctor_get(v_v_209_, 22);
v_zsmulFn_233_ = lean_ctor_get(v_v_209_, 23);
v_nsmulFn_234_ = lean_ctor_get(v_v_209_, 24);
v_zsmulFn_x3f_235_ = lean_ctor_get(v_v_209_, 25);
v_nsmulFn_x3f_236_ = lean_ctor_get(v_v_209_, 26);
v_homomulFn_x3f_237_ = lean_ctor_get(v_v_209_, 27);
v_subFn_238_ = lean_ctor_get(v_v_209_, 28);
v_negFn_239_ = lean_ctor_get(v_v_209_, 29);
v_vars_240_ = lean_ctor_get(v_v_209_, 30);
v_varMap_241_ = lean_ctor_get(v_v_209_, 31);
v_lowers_242_ = lean_ctor_get(v_v_209_, 32);
v_uppers_243_ = lean_ctor_get(v_v_209_, 33);
v_diseqs_244_ = lean_ctor_get(v_v_209_, 34);
v_assignment_245_ = lean_ctor_get(v_v_209_, 35);
v_caseSplits_246_ = lean_ctor_get_uint8(v_v_209_, sizeof(void*)*42);
v_conflict_x3f_247_ = lean_ctor_get(v_v_209_, 36);
v_diseqSplits_248_ = lean_ctor_get(v_v_209_, 37);
v_elimEqs_249_ = lean_ctor_get(v_v_209_, 38);
v_elimStack_250_ = lean_ctor_get(v_v_209_, 39);
v_occurs_251_ = lean_ctor_get(v_v_209_, 40);
v_ignored_252_ = lean_ctor_get(v_v_209_, 41);
v_isSharedCheck_266_ = !lean_is_exclusive(v_v_209_);
if (v_isSharedCheck_266_ == 0)
{
v___x_254_ = v_v_209_;
v_isShared_255_ = v_isSharedCheck_266_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_ignored_252_);
lean_inc(v_occurs_251_);
lean_inc(v_elimStack_250_);
lean_inc(v_elimEqs_249_);
lean_inc(v_diseqSplits_248_);
lean_inc(v_conflict_x3f_247_);
lean_inc(v_assignment_245_);
lean_inc(v_diseqs_244_);
lean_inc(v_uppers_243_);
lean_inc(v_lowers_242_);
lean_inc(v_varMap_241_);
lean_inc(v_vars_240_);
lean_inc(v_negFn_239_);
lean_inc(v_subFn_238_);
lean_inc(v_homomulFn_x3f_237_);
lean_inc(v_nsmulFn_x3f_236_);
lean_inc(v_zsmulFn_x3f_235_);
lean_inc(v_nsmulFn_234_);
lean_inc(v_zsmulFn_233_);
lean_inc(v_addFn_232_);
lean_inc(v_ltFn_x3f_231_);
lean_inc(v_leFn_x3f_230_);
lean_inc(v_one_x3f_229_);
lean_inc(v_ofNatZero_228_);
lean_inc(v_zero_227_);
lean_inc(v_charInst_x3f_226_);
lean_inc(v_fieldInst_x3f_225_);
lean_inc(v_orderedRingInst_x3f_224_);
lean_inc(v_commRingInst_x3f_223_);
lean_inc(v_ringInst_x3f_222_);
lean_inc(v_noNatDivInst_x3f_221_);
lean_inc(v_isLinearInst_x3f_220_);
lean_inc(v_orderedAddInst_x3f_219_);
lean_inc(v_isPreorderInst_x3f_218_);
lean_inc(v_lawfulOrderLTInst_x3f_217_);
lean_inc(v_ltInst_x3f_216_);
lean_inc(v_leInst_x3f_215_);
lean_inc(v_intModuleInst_214_);
lean_inc(v_u_213_);
lean_inc(v_type_212_);
lean_inc(v_ringId_x3f_211_);
lean_inc(v_id_210_);
lean_dec(v_v_209_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_266_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_256_; lean_object* v_xs_x27_257_; lean_object* v___x_258_; lean_object* v___x_260_; 
v___x_256_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0);
v_xs_x27_257_ = lean_array_fset(v_structs_196_, v___y_192_, v___x_256_);
v___x_258_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2(v_c_193_, v_uppers_243_, v_v_194_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 33, v___x_258_);
v___x_260_ = v___x_254_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_id_210_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v_ringId_x3f_211_);
lean_ctor_set(v_reuseFailAlloc_265_, 2, v_type_212_);
lean_ctor_set(v_reuseFailAlloc_265_, 3, v_u_213_);
lean_ctor_set(v_reuseFailAlloc_265_, 4, v_intModuleInst_214_);
lean_ctor_set(v_reuseFailAlloc_265_, 5, v_leInst_x3f_215_);
lean_ctor_set(v_reuseFailAlloc_265_, 6, v_ltInst_x3f_216_);
lean_ctor_set(v_reuseFailAlloc_265_, 7, v_lawfulOrderLTInst_x3f_217_);
lean_ctor_set(v_reuseFailAlloc_265_, 8, v_isPreorderInst_x3f_218_);
lean_ctor_set(v_reuseFailAlloc_265_, 9, v_orderedAddInst_x3f_219_);
lean_ctor_set(v_reuseFailAlloc_265_, 10, v_isLinearInst_x3f_220_);
lean_ctor_set(v_reuseFailAlloc_265_, 11, v_noNatDivInst_x3f_221_);
lean_ctor_set(v_reuseFailAlloc_265_, 12, v_ringInst_x3f_222_);
lean_ctor_set(v_reuseFailAlloc_265_, 13, v_commRingInst_x3f_223_);
lean_ctor_set(v_reuseFailAlloc_265_, 14, v_orderedRingInst_x3f_224_);
lean_ctor_set(v_reuseFailAlloc_265_, 15, v_fieldInst_x3f_225_);
lean_ctor_set(v_reuseFailAlloc_265_, 16, v_charInst_x3f_226_);
lean_ctor_set(v_reuseFailAlloc_265_, 17, v_zero_227_);
lean_ctor_set(v_reuseFailAlloc_265_, 18, v_ofNatZero_228_);
lean_ctor_set(v_reuseFailAlloc_265_, 19, v_one_x3f_229_);
lean_ctor_set(v_reuseFailAlloc_265_, 20, v_leFn_x3f_230_);
lean_ctor_set(v_reuseFailAlloc_265_, 21, v_ltFn_x3f_231_);
lean_ctor_set(v_reuseFailAlloc_265_, 22, v_addFn_232_);
lean_ctor_set(v_reuseFailAlloc_265_, 23, v_zsmulFn_233_);
lean_ctor_set(v_reuseFailAlloc_265_, 24, v_nsmulFn_234_);
lean_ctor_set(v_reuseFailAlloc_265_, 25, v_zsmulFn_x3f_235_);
lean_ctor_set(v_reuseFailAlloc_265_, 26, v_nsmulFn_x3f_236_);
lean_ctor_set(v_reuseFailAlloc_265_, 27, v_homomulFn_x3f_237_);
lean_ctor_set(v_reuseFailAlloc_265_, 28, v_subFn_238_);
lean_ctor_set(v_reuseFailAlloc_265_, 29, v_negFn_239_);
lean_ctor_set(v_reuseFailAlloc_265_, 30, v_vars_240_);
lean_ctor_set(v_reuseFailAlloc_265_, 31, v_varMap_241_);
lean_ctor_set(v_reuseFailAlloc_265_, 32, v_lowers_242_);
lean_ctor_set(v_reuseFailAlloc_265_, 33, v___x_258_);
lean_ctor_set(v_reuseFailAlloc_265_, 34, v_diseqs_244_);
lean_ctor_set(v_reuseFailAlloc_265_, 35, v_assignment_245_);
lean_ctor_set(v_reuseFailAlloc_265_, 36, v_conflict_x3f_247_);
lean_ctor_set(v_reuseFailAlloc_265_, 37, v_diseqSplits_248_);
lean_ctor_set(v_reuseFailAlloc_265_, 38, v_elimEqs_249_);
lean_ctor_set(v_reuseFailAlloc_265_, 39, v_elimStack_250_);
lean_ctor_set(v_reuseFailAlloc_265_, 40, v_occurs_251_);
lean_ctor_set(v_reuseFailAlloc_265_, 41, v_ignored_252_);
lean_ctor_set_uint8(v_reuseFailAlloc_265_, sizeof(void*)*42, v_caseSplits_246_);
v___x_260_ = v_reuseFailAlloc_265_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
lean_object* v___x_261_; lean_object* v___x_263_; 
v___x_261_ = lean_array_fset(v_xs_x27_257_, v___y_192_, v___x_260_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_261_);
v___x_263_ = v___x_207_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_261_);
lean_ctor_set(v_reuseFailAlloc_264_, 1, v_typeIdOf_197_);
lean_ctor_set(v_reuseFailAlloc_264_, 2, v_exprToStructId_198_);
lean_ctor_set(v_reuseFailAlloc_264_, 3, v_exprToStructIdEntries_199_);
lean_ctor_set(v_reuseFailAlloc_264_, 4, v_forbiddenNatModules_200_);
lean_ctor_set(v_reuseFailAlloc_264_, 5, v_natStructs_201_);
lean_ctor_set(v_reuseFailAlloc_264_, 6, v_natTypeIdOf_202_);
lean_ctor_set(v_reuseFailAlloc_264_, 7, v_exprToNatStructId_203_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__1___boxed(lean_object* v___y_276_, lean_object* v_c_277_, lean_object* v_v_278_, lean_object* v_s_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__1(v___y_276_, v_c_277_, v_v_278_, v_s_279_);
lean_dec(v_v_278_);
lean_dec(v___y_276_);
return v_res_280_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__7___closed__0(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = lean_unsigned_to_nat(1u);
v___x_282_ = lean_nat_to_int(v___x_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__7(lean_object* v_k_283_, lean_object* v_x_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; uint8_t v___x_299_; 
v___x_297_ = l_Lean_instInhabitedExpr;
v___x_298_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__7___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__7___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__7___closed__0);
v___x_299_ = lean_int_dec_eq(v_k_283_, v___x_298_);
if (v___x_299_ == 0)
{
lean_object* v___x_300_; 
v___x_300_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_);
if (lean_obj_tag(v___x_300_) == 0)
{
lean_object* v_a_301_; lean_object* v___x_302_; 
v_a_301_ = lean_ctor_get(v___x_300_, 0);
lean_inc(v_a_301_);
lean_dec_ref_known(v___x_300_, 1);
v___x_302_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_320_; 
v_a_303_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_320_ == 0)
{
v___x_305_ = v___x_302_;
v_isShared_306_ = v_isSharedCheck_320_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_302_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_320_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v_vars_307_; lean_object* v_zsmulFn_308_; lean_object* v_size_309_; lean_object* v___x_310_; lean_object* v___y_312_; uint8_t v___x_317_; 
v_vars_307_ = lean_ctor_get(v_a_303_, 30);
lean_inc_ref(v_vars_307_);
lean_dec(v_a_303_);
v_zsmulFn_308_ = lean_ctor_get(v_a_301_, 23);
lean_inc_ref(v_zsmulFn_308_);
lean_dec(v_a_301_);
v_size_309_ = lean_ctor_get(v_vars_307_, 2);
v___x_310_ = l_Lean_mkIntLit(v_k_283_);
v___x_317_ = lean_nat_dec_lt(v_x_284_, v_size_309_);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; 
lean_dec_ref(v_vars_307_);
v___x_318_ = l_outOfBounds___redArg(v___x_297_);
v___y_312_ = v___x_318_;
goto v___jp_311_;
}
else
{
lean_object* v___x_319_; 
v___x_319_ = l_Lean_PersistentArray_get_x21___redArg(v___x_297_, v_vars_307_, v_x_284_);
lean_dec_ref(v_vars_307_);
v___y_312_ = v___x_319_;
goto v___jp_311_;
}
v___jp_311_:
{
lean_object* v___x_313_; lean_object* v___x_315_; 
v___x_313_ = l_Lean_mkAppB(v_zsmulFn_308_, v___x_310_, v___y_312_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_313_);
v___x_315_ = v___x_305_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v___x_313_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
}
else
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_328_; 
lean_dec(v_a_301_);
v_a_321_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_328_ == 0)
{
v___x_323_ = v___x_302_;
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v___x_302_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
if (v_isShared_324_ == 0)
{
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_a_321_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
}
else
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_336_; 
v_a_329_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_336_ == 0)
{
v___x_331_ = v___x_300_;
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_300_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_334_; 
if (v_isShared_332_ == 0)
{
v___x_334_ = v___x_331_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_a_329_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
}
else
{
lean_object* v___x_337_; 
v___x_337_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_353_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_353_ == 0)
{
v___x_340_ = v___x_337_;
v_isShared_341_ = v_isSharedCheck_353_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_337_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_353_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v_vars_342_; lean_object* v_size_343_; uint8_t v___x_344_; 
v_vars_342_ = lean_ctor_get(v_a_338_, 30);
lean_inc_ref(v_vars_342_);
lean_dec(v_a_338_);
v_size_343_ = lean_ctor_get(v_vars_342_, 2);
v___x_344_ = lean_nat_dec_lt(v_x_284_, v_size_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; lean_object* v___x_347_; 
lean_dec_ref(v_vars_342_);
v___x_345_ = l_outOfBounds___redArg(v___x_297_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 0, v___x_345_);
v___x_347_ = v___x_340_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v___x_345_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
else
{
lean_object* v___x_349_; lean_object* v___x_351_; 
v___x_349_ = l_Lean_PersistentArray_get_x21___redArg(v___x_297_, v_vars_342_, v_x_284_);
lean_dec_ref(v_vars_342_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 0, v___x_349_);
v___x_351_ = v___x_340_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v___x_349_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
v_a_354_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_337_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_337_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__7___boxed(lean_object* v_k_362_, lean_object* v_x_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__7(v_k_362_, v_x_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
lean_dec(v___y_366_);
lean_dec(v___y_365_);
lean_dec(v___y_364_);
lean_dec(v_x_363_);
lean_dec(v_k_362_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__8(lean_object* v_p_377_, lean_object* v_acc_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
if (lean_obj_tag(v_p_377_) == 0)
{
lean_object* v___x_391_; 
v___x_391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_391_, 0, v_acc_378_);
return v___x_391_;
}
else
{
lean_object* v_k_392_; lean_object* v_v_393_; lean_object* v_p_394_; lean_object* v___x_395_; 
v_k_392_ = lean_ctor_get(v_p_377_, 0);
v_v_393_ = lean_ctor_get(v_p_377_, 1);
v_p_394_ = lean_ctor_get(v_p_377_, 2);
v___x_395_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v_a_396_; lean_object* v___x_397_; 
v_a_396_ = lean_ctor_get(v___x_395_, 0);
lean_inc(v_a_396_);
lean_dec_ref_known(v___x_395_, 1);
v___x_397_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__7(v_k_392_, v_v_393_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v_a_398_; lean_object* v_addFn_399_; lean_object* v___x_400_; 
v_a_398_ = lean_ctor_get(v___x_397_, 0);
lean_inc(v_a_398_);
lean_dec_ref_known(v___x_397_, 1);
v_addFn_399_ = lean_ctor_get(v_a_396_, 22);
lean_inc_ref(v_addFn_399_);
lean_dec(v_a_396_);
v___x_400_ = l_Lean_mkAppB(v_addFn_399_, v_acc_378_, v_a_398_);
v_p_377_ = v_p_394_;
v_acc_378_ = v___x_400_;
goto _start;
}
else
{
lean_dec(v_a_396_);
lean_dec_ref(v_acc_378_);
return v___x_397_;
}
}
else
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
lean_dec_ref(v_acc_378_);
v_a_402_ = lean_ctor_get(v___x_395_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_395_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_395_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__8___boxed(lean_object* v_p_410_, lean_object* v_acc_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__8(v_p_410_, v_acc_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_);
lean_dec(v___y_422_);
lean_dec_ref(v___y_421_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
lean_dec(v___y_414_);
lean_dec(v___y_413_);
lean_dec(v___y_412_);
lean_dec(v_p_410_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2(lean_object* v_p_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
if (lean_obj_tag(v_p_425_) == 0)
{
lean_object* v___x_438_; 
v___x_438_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_447_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_447_ == 0)
{
v___x_441_ = v___x_438_;
v_isShared_442_ = v_isSharedCheck_447_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_438_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_447_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v_zero_443_; lean_object* v___x_445_; 
v_zero_443_ = lean_ctor_get(v_a_439_, 17);
lean_inc_ref(v_zero_443_);
lean_dec(v_a_439_);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 0, v_zero_443_);
v___x_445_ = v___x_441_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_zero_443_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
v_a_448_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_438_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_438_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_448_);
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
else
{
lean_object* v_k_456_; lean_object* v_v_457_; lean_object* v_p_458_; lean_object* v___x_459_; 
v_k_456_ = lean_ctor_get(v_p_425_, 0);
v_v_457_ = lean_ctor_get(v_p_425_, 1);
v_p_458_ = lean_ctor_get(v_p_425_, 2);
v___x_459_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__7(v_k_456_, v_v_457_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
if (lean_obj_tag(v___x_459_) == 0)
{
lean_object* v_a_460_; lean_object* v___x_461_; 
v_a_460_ = lean_ctor_get(v___x_459_, 0);
lean_inc(v_a_460_);
lean_dec_ref_known(v___x_459_, 1);
v___x_461_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2_spec__8(v_p_458_, v_a_460_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
return v___x_461_;
}
else
{
return v___x_459_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2___boxed(lean_object* v_p_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2(v_p_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v___y_465_);
lean_dec(v___y_464_);
lean_dec(v___y_463_);
lean_dec(v_p_462_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__2(lean_object* v_msgData_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_){
_start:
{
lean_object* v___x_482_; lean_object* v_env_483_; lean_object* v___x_484_; lean_object* v_toCold_485_; lean_object* v_mctx_486_; lean_object* v_lctx_487_; lean_object* v_options_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_482_ = lean_st_ref_get(v___y_480_);
v_env_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc_ref(v_env_483_);
lean_dec(v___x_482_);
v___x_484_ = lean_st_ref_get(v___y_478_);
v_toCold_485_ = lean_ctor_get(v___y_479_, 0);
v_mctx_486_ = lean_ctor_get(v___x_484_, 0);
lean_inc_ref(v_mctx_486_);
lean_dec(v___x_484_);
v_lctx_487_ = lean_ctor_get(v___y_477_, 2);
v_options_488_ = lean_ctor_get(v_toCold_485_, 2);
lean_inc_ref(v_options_488_);
lean_inc_ref(v_lctx_487_);
v___x_489_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_489_, 0, v_env_483_);
lean_ctor_set(v___x_489_, 1, v_mctx_486_);
lean_ctor_set(v___x_489_, 2, v_lctx_487_);
lean_ctor_set(v___x_489_, 3, v_options_488_);
v___x_490_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
lean_ctor_set(v___x_490_, 1, v_msgData_476_);
v___x_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__2___boxed(lean_object* v_msgData_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__2(v_msgData_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_);
lean_dec(v___y_496_);
lean_dec_ref(v___y_495_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1_spec__5___redArg(lean_object* v_msg_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_){
_start:
{
lean_object* v_ref_505_; lean_object* v___x_506_; lean_object* v_a_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_515_; 
v_ref_505_ = lean_ctor_get(v___y_502_, 2);
v___x_506_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__2(v_msg_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
v_a_507_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_515_ == 0)
{
v___x_509_ = v___x_506_;
v_isShared_510_ = v_isSharedCheck_515_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_a_507_);
lean_dec(v___x_506_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_515_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_511_; lean_object* v___x_513_; 
lean_inc(v_ref_505_);
v___x_511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_511_, 0, v_ref_505_);
lean_ctor_set(v___x_511_, 1, v_a_507_);
if (v_isShared_510_ == 0)
{
lean_ctor_set_tag(v___x_509_, 1);
lean_ctor_set(v___x_509_, 0, v___x_511_);
v___x_513_ = v___x_509_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v___x_511_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_msg_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1_spec__5___redArg(v_msg_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v___y_518_);
lean_dec_ref(v___y_517_);
return v_res_522_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3___closed__1(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3___closed__0));
v___x_525_ = l_Lean_stringToMessageData(v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3(lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_a_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_550_; 
v_a_539_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_550_ == 0)
{
v___x_541_ = v___x_538_;
v_isShared_542_ = v_isSharedCheck_550_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_a_539_);
lean_dec(v___x_538_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_550_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v_ltFn_x3f_543_; 
v_ltFn_x3f_543_ = lean_ctor_get(v_a_539_, 21);
lean_inc(v_ltFn_x3f_543_);
lean_dec(v_a_539_);
if (lean_obj_tag(v_ltFn_x3f_543_) == 1)
{
lean_object* v_val_544_; lean_object* v___x_546_; 
v_val_544_ = lean_ctor_get(v_ltFn_x3f_543_, 0);
lean_inc(v_val_544_);
lean_dec_ref_known(v_ltFn_x3f_543_, 1);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 0, v_val_544_);
v___x_546_ = v___x_541_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_val_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
else
{
lean_object* v___x_548_; lean_object* v___x_549_; 
lean_dec(v_ltFn_x3f_543_);
lean_del_object(v___x_541_);
v___x_548_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3___closed__1);
v___x_549_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1_spec__5___redArg(v___x_548_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
return v___x_549_;
}
}
}
else
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
v_a_551_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_538_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_538_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3___boxed(lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3(v___y_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v___y_563_);
lean_dec_ref(v___y_562_);
lean_dec(v___y_561_);
lean_dec(v___y_560_);
lean_dec(v___y_559_);
return v_res_571_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_573_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1___closed__0));
v___x_574_ = l_Lean_stringToMessageData(v___x_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1(lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_599_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_599_ == 0)
{
v___x_590_ = v___x_587_;
v_isShared_591_ = v_isSharedCheck_599_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_a_588_);
lean_dec(v___x_587_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_599_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v_leFn_x3f_592_; 
v_leFn_x3f_592_ = lean_ctor_get(v_a_588_, 20);
lean_inc(v_leFn_x3f_592_);
lean_dec(v_a_588_);
if (lean_obj_tag(v_leFn_x3f_592_) == 1)
{
lean_object* v_val_593_; lean_object* v___x_595_; 
v_val_593_ = lean_ctor_get(v_leFn_x3f_592_, 0);
lean_inc(v_val_593_);
lean_dec_ref_known(v_leFn_x3f_592_, 1);
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 0, v_val_593_);
v___x_595_ = v___x_590_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_val_593_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
else
{
lean_object* v___x_597_; lean_object* v___x_598_; 
lean_dec(v_leFn_x3f_592_);
lean_del_object(v___x_590_);
v___x_597_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1___closed__1);
v___x_598_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1_spec__5___redArg(v___x_597_, v___y_582_, v___y_583_, v___y_584_, v___y_585_);
return v___x_598_;
}
}
}
else
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_607_; 
v_a_600_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_607_ == 0)
{
v___x_602_ = v___x_587_;
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_587_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
if (v_isShared_603_ == 0)
{
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_600_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1___boxed(lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1(v___y_608_, v___y_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_, v___y_616_, v___y_617_, v___y_618_);
lean_dec(v___y_618_);
lean_dec_ref(v___y_617_);
lean_dec(v___y_616_);
lean_dec_ref(v___y_615_);
lean_dec(v___y_614_);
lean_dec_ref(v___y_613_);
lean_dec(v___y_612_);
lean_dec_ref(v___y_611_);
lean_dec(v___y_610_);
lean_dec(v___y_609_);
lean_dec(v___y_608_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0(lean_object* v_p_621_, uint8_t v_strict_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_){
_start:
{
if (v_strict_622_ == 0)
{
lean_object* v___x_635_; 
v___x_635_ = l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1(v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_637_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
lean_inc(v_a_636_);
lean_dec_ref_known(v___x_635_, 1);
v___x_637_ = l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2(v_p_621_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_639_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
lean_inc(v_a_638_);
lean_dec_ref_known(v___x_637_, 1);
v___x_639_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_649_; 
v_a_640_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_649_ == 0)
{
v___x_642_ = v___x_639_;
v_isShared_643_ = v_isSharedCheck_649_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v___x_639_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_649_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v_ofNatZero_644_; lean_object* v___x_645_; lean_object* v___x_647_; 
v_ofNatZero_644_ = lean_ctor_get(v_a_640_, 18);
lean_inc_ref(v_ofNatZero_644_);
lean_dec(v_a_640_);
v___x_645_ = l_Lean_mkAppB(v_a_636_, v_a_638_, v_ofNatZero_644_);
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 0, v___x_645_);
v___x_647_ = v___x_642_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v___x_645_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_dec(v_a_638_);
lean_dec(v_a_636_);
v_a_650_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_639_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_639_);
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
}
else
{
lean_dec(v_a_636_);
return v___x_637_;
}
}
else
{
return v___x_635_;
}
}
else
{
lean_object* v___x_658_; 
v___x_658_ = l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__3(v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; lean_object* v___x_660_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc(v_a_659_);
lean_dec_ref_known(v___x_658_, 1);
v___x_660_ = l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__2(v_p_621_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_a_661_; lean_object* v___x_662_; 
v_a_661_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_a_661_);
lean_dec_ref_known(v___x_660_, 1);
v___x_662_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_672_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_672_ == 0)
{
v___x_665_ = v___x_662_;
v_isShared_666_ = v_isSharedCheck_672_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_662_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_672_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v_ofNatZero_667_; lean_object* v___x_668_; lean_object* v___x_670_; 
v_ofNatZero_667_ = lean_ctor_get(v_a_663_, 18);
lean_inc_ref(v_ofNatZero_667_);
lean_dec(v_a_663_);
v___x_668_ = l_Lean_mkAppB(v_a_659_, v_a_661_, v_ofNatZero_667_);
if (v_isShared_666_ == 0)
{
lean_ctor_set(v___x_665_, 0, v___x_668_);
v___x_670_ = v___x_665_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v___x_668_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
else
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_680_; 
lean_dec(v_a_661_);
lean_dec(v_a_659_);
v_a_673_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_680_ == 0)
{
v___x_675_ = v___x_662_;
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_662_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_678_; 
if (v_isShared_676_ == 0)
{
v___x_678_ = v___x_675_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_a_673_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
}
else
{
lean_dec(v_a_659_);
return v___x_660_;
}
}
else
{
return v___x_658_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0___boxed(lean_object* v_p_681_, lean_object* v_strict_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
uint8_t v_strict_boxed_695_; lean_object* v_res_696_; 
v_strict_boxed_695_ = lean_unbox(v_strict_682_);
v_res_696_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0(v_p_681_, v_strict_boxed_695_, v___y_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
lean_dec(v___y_691_);
lean_dec_ref(v___y_690_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
lean_dec(v___y_687_);
lean_dec_ref(v___y_686_);
lean_dec(v___y_685_);
lean_dec(v___y_684_);
lean_dec(v___y_683_);
lean_dec(v_p_681_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0(lean_object* v_c_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_){
_start:
{
lean_object* v_p_710_; uint8_t v_strict_711_; lean_object* v___x_712_; 
v_p_710_ = lean_ctor_get(v_c_697_, 0);
v_strict_711_ = lean_ctor_get_uint8(v_c_697_, sizeof(void*)*2);
v___x_712_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0(v_p_710_, v_strict_711_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___boxed(lean_object* v_c_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0(v_c_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec(v___y_720_);
lean_dec_ref(v___y_719_);
lean_dec(v___y_718_);
lean_dec_ref(v___y_717_);
lean_dec(v___y_716_);
lean_dec(v___y_715_);
lean_dec(v___y_714_);
lean_dec_ref(v_c_713_);
return v_res_726_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_727_; double v___x_728_; 
v___x_727_ = lean_unsigned_to_nat(0u);
v___x_728_ = lean_float_of_nat(v___x_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg(lean_object* v_cls_732_, lean_object* v_msg_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
lean_object* v_ref_739_; lean_object* v___x_740_; lean_object* v_a_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_785_; 
v_ref_739_ = lean_ctor_get(v___y_736_, 2);
v___x_740_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__2(v_msg_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
v_a_741_ = lean_ctor_get(v___x_740_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_785_ == 0)
{
v___x_743_ = v___x_740_;
v_isShared_744_ = v_isSharedCheck_785_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_a_741_);
lean_dec(v___x_740_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_785_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_745_; lean_object* v_traceState_746_; lean_object* v_env_747_; lean_object* v_nextMacroScope_748_; lean_object* v_ngen_749_; lean_object* v_auxDeclNGen_750_; lean_object* v_cache_751_; lean_object* v_messages_752_; lean_object* v_infoState_753_; lean_object* v_snapshotTasks_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_784_; 
v___x_745_ = lean_st_ref_take(v___y_737_);
v_traceState_746_ = lean_ctor_get(v___x_745_, 4);
v_env_747_ = lean_ctor_get(v___x_745_, 0);
v_nextMacroScope_748_ = lean_ctor_get(v___x_745_, 1);
v_ngen_749_ = lean_ctor_get(v___x_745_, 2);
v_auxDeclNGen_750_ = lean_ctor_get(v___x_745_, 3);
v_cache_751_ = lean_ctor_get(v___x_745_, 5);
v_messages_752_ = lean_ctor_get(v___x_745_, 6);
v_infoState_753_ = lean_ctor_get(v___x_745_, 7);
v_snapshotTasks_754_ = lean_ctor_get(v___x_745_, 8);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_745_);
if (v_isSharedCheck_784_ == 0)
{
v___x_756_ = v___x_745_;
v_isShared_757_ = v_isSharedCheck_784_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_snapshotTasks_754_);
lean_inc(v_infoState_753_);
lean_inc(v_messages_752_);
lean_inc(v_cache_751_);
lean_inc(v_traceState_746_);
lean_inc(v_auxDeclNGen_750_);
lean_inc(v_ngen_749_);
lean_inc(v_nextMacroScope_748_);
lean_inc(v_env_747_);
lean_dec(v___x_745_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_784_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
uint64_t v_tid_758_; lean_object* v_traces_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_783_; 
v_tid_758_ = lean_ctor_get_uint64(v_traceState_746_, sizeof(void*)*1);
v_traces_759_ = lean_ctor_get(v_traceState_746_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v_traceState_746_);
if (v_isSharedCheck_783_ == 0)
{
v___x_761_ = v_traceState_746_;
v_isShared_762_ = v_isSharedCheck_783_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_traces_759_);
lean_dec(v_traceState_746_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_783_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_763_; lean_object* v___x_764_; double v___x_765_; uint8_t v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_774_; 
v___x_763_ = lean_box(0);
v___x_764_ = lean_box(0);
v___x_765_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___closed__0);
v___x_766_ = 0;
v___x_767_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___closed__1));
v___x_768_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_768_, 0, v_cls_732_);
lean_ctor_set(v___x_768_, 1, v___x_764_);
lean_ctor_set(v___x_768_, 2, v___x_767_);
lean_ctor_set_float(v___x_768_, sizeof(void*)*3, v___x_765_);
lean_ctor_set_float(v___x_768_, sizeof(void*)*3 + 8, v___x_765_);
lean_ctor_set_uint8(v___x_768_, sizeof(void*)*3 + 16, v___x_766_);
v___x_769_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___closed__2));
v___x_770_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_770_, 0, v___x_768_);
lean_ctor_set(v___x_770_, 1, v_a_741_);
lean_ctor_set(v___x_770_, 2, v___x_769_);
lean_inc(v_ref_739_);
v___x_771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_771_, 0, v_ref_739_);
lean_ctor_set(v___x_771_, 1, v___x_770_);
v___x_772_ = l_Lean_PersistentArray_push___redArg(v_traces_759_, v___x_771_);
if (v_isShared_762_ == 0)
{
lean_ctor_set(v___x_761_, 0, v___x_772_);
v___x_774_ = v___x_761_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_772_);
lean_ctor_set_uint64(v_reuseFailAlloc_782_, sizeof(void*)*1, v_tid_758_);
v___x_774_ = v_reuseFailAlloc_782_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_776_; 
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 4, v___x_774_);
v___x_776_ = v___x_756_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_env_747_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_nextMacroScope_748_);
lean_ctor_set(v_reuseFailAlloc_781_, 2, v_ngen_749_);
lean_ctor_set(v_reuseFailAlloc_781_, 3, v_auxDeclNGen_750_);
lean_ctor_set(v_reuseFailAlloc_781_, 4, v___x_774_);
lean_ctor_set(v_reuseFailAlloc_781_, 5, v_cache_751_);
lean_ctor_set(v_reuseFailAlloc_781_, 6, v_messages_752_);
lean_ctor_set(v_reuseFailAlloc_781_, 7, v_infoState_753_);
lean_ctor_set(v_reuseFailAlloc_781_, 8, v_snapshotTasks_754_);
v___x_776_ = v_reuseFailAlloc_781_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
lean_object* v___x_777_; lean_object* v___x_779_; 
v___x_777_ = lean_st_ref_put(v___y_737_, v___x_776_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 0, v___x_763_);
v___x_779_ = v___x_743_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_763_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg___boxed(lean_object* v_cls_786_, lean_object* v_msg_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg(v_cls_786_, v_msg_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_);
lean_dec(v___y_791_);
lean_dec_ref(v___y_790_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
return v_res_793_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__0(void){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_794_ = lean_unsigned_to_nat(0u);
v___x_795_ = lean_nat_to_int(v___x_794_);
return v___x_795_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__8(void){
_start:
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_807_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5));
v___x_808_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7));
v___x_809_ = l_Lean_Name_append(v___x_808_, v___x_807_);
return v___x_809_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__11(void){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_815_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10));
v___x_816_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7));
v___x_817_ = l_Lean_Name_append(v___x_816_, v___x_815_);
return v___x_817_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__14(void){
_start:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_824_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__13));
v___x_825_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7));
v___x_826_ = l_Lean_Name_append(v___x_825_, v___x_824_);
return v___x_826_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__16(void){
_start:
{
lean_object* v_cls_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v_cls_831_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__15));
v___x_832_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7));
v___x_833_ = l_Lean_Name_append(v___x_832_, v_cls_831_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(lean_object* v_c_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_){
_start:
{
lean_object* v___y_851_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_865_; lean_object* v___y_866_; lean_object* v___y_867_; lean_object* v___y_868_; lean_object* v___y_869_; lean_object* v___y_870_; lean_object* v___y_871_; lean_object* v___y_872_; lean_object* v___y_873_; lean_object* v___y_874_; lean_object* v___y_875_; lean_object* v___y_876_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___y_902_; lean_object* v___y_903_; lean_object* v___y_904_; lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; lean_object* v___y_909_; lean_object* v___y_910_; lean_object* v___y_911_; lean_object* v___y_912_; lean_object* v___y_913_; lean_object* v___y_914_; lean_object* v_toCold_924_; lean_object* v_options_925_; lean_object* v_inheritedTraceOptions_926_; uint8_t v_hasTrace_927_; lean_object* v___y_929_; lean_object* v___y_930_; lean_object* v___y_931_; lean_object* v___y_932_; lean_object* v___y_933_; lean_object* v___y_934_; lean_object* v___y_935_; lean_object* v___y_936_; lean_object* v___y_937_; lean_object* v___y_938_; lean_object* v___y_939_; 
v_toCold_924_ = lean_ctor_get(v_a_844_, 0);
v_options_925_ = lean_ctor_get(v_toCold_924_, 2);
v_inheritedTraceOptions_926_ = lean_ctor_get(v_toCold_924_, 11);
v_hasTrace_927_ = lean_ctor_get_uint8(v_options_925_, sizeof(void*)*1);
if (v_hasTrace_927_ == 0)
{
v___y_929_ = v_a_835_;
v___y_930_ = v_a_836_;
v___y_931_ = v_a_837_;
v___y_932_ = v_a_838_;
v___y_933_ = v_a_839_;
v___y_934_ = v_a_840_;
v___y_935_ = v_a_841_;
v___y_936_ = v_a_842_;
v___y_937_ = v_a_843_;
v___y_938_ = v_a_844_;
v___y_939_ = v_a_845_;
goto v___jp_928_;
}
else
{
lean_object* v_cls_1003_; lean_object* v___x_1004_; uint8_t v___x_1005_; 
v_cls_1003_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__15));
v___x_1004_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__16, &l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__16_once, _init_l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__16);
v___x_1005_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_926_, v_options_925_, v___x_1004_);
if (v___x_1005_ == 0)
{
v___y_929_ = v_a_835_;
v___y_930_ = v_a_836_;
v___y_931_ = v_a_837_;
v___y_932_ = v_a_838_;
v___y_933_ = v_a_839_;
v___y_934_ = v_a_840_;
v___y_935_ = v_a_841_;
v___y_936_ = v_a_842_;
v___y_937_ = v_a_843_;
v___y_938_ = v_a_844_;
v___y_939_ = v_a_845_;
goto v___jp_928_;
}
else
{
lean_object* v___x_1006_; 
v___x_1006_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0(v_c_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_, v_a_845_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_a_1007_);
lean_dec_ref_known(v___x_1006_, 1);
v___x_1008_ = l_Lean_MessageData_ofExpr(v_a_1007_);
v___x_1009_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg(v_cls_1003_, v___x_1008_, v_a_842_, v_a_843_, v_a_844_, v_a_845_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_dec_ref_known(v___x_1009_, 1);
v___y_929_ = v_a_835_;
v___y_930_ = v_a_836_;
v___y_931_ = v_a_837_;
v___y_932_ = v_a_838_;
v___y_933_ = v_a_839_;
v___y_934_ = v_a_840_;
v___y_935_ = v_a_841_;
v___y_936_ = v_a_842_;
v___y_937_ = v_a_843_;
v___y_938_ = v_a_844_;
v___y_939_ = v_a_845_;
goto v___jp_928_;
}
else
{
lean_dec_ref(v_c_834_);
return v___x_1009_;
}
}
else
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
lean_dec_ref(v_c_834_);
v_a_1010_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v___x_1006_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_1006_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1015_; 
if (v_isShared_1013_ == 0)
{
v___x_1015_ = v___x_1012_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_a_1010_);
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
v___jp_847_:
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = lean_box(0);
v___x_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_849_, 0, v___x_848_);
return v___x_849_;
}
v___jp_850_:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_862_, 0, v_c_834_);
v___x_863_ = l_Lean_Meta_Grind_Arith_Linear_setInconsistent(v___x_862_, v___y_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_);
return v___x_863_;
}
v___jp_864_:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_satisfied(v_c_834_, v___y_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_890_; 
v_a_878_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_890_ == 0)
{
v___x_880_ = v___x_877_;
v_isShared_881_ = v_isSharedCheck_890_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_877_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_890_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
uint8_t v___x_882_; uint8_t v___x_883_; uint8_t v___x_884_; 
v___x_882_ = 0;
v___x_883_ = lean_unbox(v_a_878_);
lean_dec(v_a_878_);
v___x_884_ = l_Lean_instBEqLBool_beq(v___x_883_, v___x_882_);
if (v___x_884_ == 0)
{
lean_object* v___x_885_; lean_object* v___x_887_; 
lean_dec(v___y_865_);
v___x_885_ = lean_box(0);
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 0, v___x_885_);
v___x_887_ = v___x_880_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_885_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
else
{
lean_object* v___x_889_; 
lean_del_object(v___x_880_);
v___x_889_ = l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg(v___y_865_, v___y_866_, v___y_867_);
return v___x_889_;
}
}
}
else
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
lean_dec(v___y_865_);
v_a_891_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_877_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_877_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
v___jp_899_:
{
lean_object* v___f_915_; lean_object* v___f_916_; lean_object* v___x_917_; 
lean_inc(v___y_900_);
lean_inc_ref_n(v_c_834_, 2);
lean_inc_n(v___y_904_, 2);
v___f_915_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__0___boxed), 4, 3);
lean_closure_set(v___f_915_, 0, v___y_904_);
lean_closure_set(v___f_915_, 1, v_c_834_);
lean_closure_set(v___f_915_, 2, v___y_900_);
v___f_916_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__1___boxed), 4, 3);
lean_closure_set(v___f_916_, 0, v___y_904_);
lean_closure_set(v___f_916_, 1, v_c_834_);
lean_closure_set(v___f_916_, 2, v___y_900_);
v___x_917_ = l_Lean_Grind_Linarith_Poly_updateOccs(v___y_901_, v___y_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v___x_918_; uint8_t v___x_919_; 
lean_dec_ref_known(v___x_917_, 1);
v___x_918_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__0, &l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__0);
v___x_919_ = lean_int_dec_lt(v___y_902_, v___x_918_);
lean_dec(v___y_902_);
if (v___x_919_ == 0)
{
lean_object* v___x_920_; lean_object* v___x_921_; 
lean_dec_ref(v___f_915_);
v___x_920_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_921_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_920_, v___f_916_, v___y_905_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_dec_ref_known(v___x_921_, 1);
v___y_865_ = v___y_903_;
v___y_866_ = v___y_904_;
v___y_867_ = v___y_905_;
v___y_868_ = v___y_906_;
v___y_869_ = v___y_907_;
v___y_870_ = v___y_908_;
v___y_871_ = v___y_909_;
v___y_872_ = v___y_910_;
v___y_873_ = v___y_911_;
v___y_874_ = v___y_912_;
v___y_875_ = v___y_913_;
v___y_876_ = v___y_914_;
goto v___jp_864_;
}
else
{
lean_dec(v___y_903_);
lean_dec_ref(v_c_834_);
return v___x_921_;
}
}
else
{
lean_object* v___x_922_; lean_object* v___x_923_; 
lean_dec_ref(v___f_916_);
v___x_922_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_923_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_922_, v___f_915_, v___y_905_);
if (lean_obj_tag(v___x_923_) == 0)
{
lean_dec_ref_known(v___x_923_, 1);
v___y_865_ = v___y_903_;
v___y_866_ = v___y_904_;
v___y_867_ = v___y_905_;
v___y_868_ = v___y_906_;
v___y_869_ = v___y_907_;
v___y_870_ = v___y_908_;
v___y_871_ = v___y_909_;
v___y_872_ = v___y_910_;
v___y_873_ = v___y_911_;
v___y_874_ = v___y_912_;
v___y_875_ = v___y_913_;
v___y_876_ = v___y_914_;
goto v___jp_864_;
}
else
{
lean_dec(v___y_903_);
lean_dec_ref(v_c_834_);
return v___x_923_;
}
}
}
else
{
lean_dec_ref(v___f_916_);
lean_dec_ref(v___f_915_);
lean_dec(v___y_903_);
lean_dec(v___y_902_);
lean_dec_ref(v_c_834_);
return v___x_917_;
}
}
v___jp_928_:
{
lean_object* v_p_940_; 
v_p_940_ = lean_ctor_get(v_c_834_, 0);
if (lean_obj_tag(v_p_940_) == 0)
{
uint8_t v_strict_941_; 
v_strict_941_ = lean_ctor_get_uint8(v_c_834_, sizeof(void*)*2);
if (v_strict_941_ == 0)
{
lean_object* v_toCold_942_; lean_object* v_options_943_; uint8_t v_hasTrace_944_; 
v_toCold_942_ = lean_ctor_get(v___y_938_, 0);
v_options_943_ = lean_ctor_get(v_toCold_942_, 2);
v_hasTrace_944_ = lean_ctor_get_uint8(v_options_943_, sizeof(void*)*1);
if (v_hasTrace_944_ == 0)
{
lean_dec_ref(v_c_834_);
goto v___jp_847_;
}
else
{
lean_object* v_inheritedTraceOptions_945_; lean_object* v___x_946_; lean_object* v___x_947_; uint8_t v___x_948_; 
v_inheritedTraceOptions_945_ = lean_ctor_get(v_toCold_942_, 11);
v___x_946_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5));
v___x_947_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__8, &l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__8_once, _init_l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__8);
v___x_948_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_945_, v_options_943_, v___x_947_);
if (v___x_948_ == 0)
{
lean_dec_ref(v_c_834_);
goto v___jp_847_;
}
else
{
lean_object* v___x_949_; 
v___x_949_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0(v_c_834_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
lean_dec_ref(v_c_834_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
lean_inc(v_a_950_);
lean_dec_ref_known(v___x_949_, 1);
v___x_951_ = l_Lean_MessageData_ofExpr(v_a_950_);
v___x_952_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg(v___x_946_, v___x_951_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
return v___x_952_;
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
v_a_953_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v___x_949_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_949_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_953_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_961_; lean_object* v_options_962_; uint8_t v_hasTrace_963_; 
v_toCold_961_ = lean_ctor_get(v___y_938_, 0);
v_options_962_ = lean_ctor_get(v_toCold_961_, 2);
v_hasTrace_963_ = lean_ctor_get_uint8(v_options_962_, sizeof(void*)*1);
if (v_hasTrace_963_ == 0)
{
v___y_851_ = v___y_929_;
v___y_852_ = v___y_930_;
v___y_853_ = v___y_931_;
v___y_854_ = v___y_932_;
v___y_855_ = v___y_933_;
v___y_856_ = v___y_934_;
v___y_857_ = v___y_935_;
v___y_858_ = v___y_936_;
v___y_859_ = v___y_937_;
v___y_860_ = v___y_938_;
v___y_861_ = v___y_939_;
goto v___jp_850_;
}
else
{
lean_object* v_inheritedTraceOptions_964_; lean_object* v___x_965_; lean_object* v___x_966_; uint8_t v___x_967_; 
v_inheritedTraceOptions_964_ = lean_ctor_get(v_toCold_961_, 11);
v___x_965_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10));
v___x_966_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__11, &l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__11_once, _init_l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__11);
v___x_967_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_964_, v_options_962_, v___x_966_);
if (v___x_967_ == 0)
{
v___y_851_ = v___y_929_;
v___y_852_ = v___y_930_;
v___y_853_ = v___y_931_;
v___y_854_ = v___y_932_;
v___y_855_ = v___y_933_;
v___y_856_ = v___y_934_;
v___y_857_ = v___y_935_;
v___y_858_ = v___y_936_;
v___y_859_ = v___y_937_;
v___y_860_ = v___y_938_;
v___y_861_ = v___y_939_;
goto v___jp_850_;
}
else
{
lean_object* v___x_968_; 
v___x_968_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0(v_c_834_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v_a_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_969_);
lean_dec_ref_known(v___x_968_, 1);
v___x_970_ = l_Lean_MessageData_ofExpr(v_a_969_);
v___x_971_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg(v___x_965_, v___x_970_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_dec_ref_known(v___x_971_, 1);
v___y_851_ = v___y_929_;
v___y_852_ = v___y_930_;
v___y_853_ = v___y_931_;
v___y_854_ = v___y_932_;
v___y_855_ = v___y_933_;
v___y_856_ = v___y_934_;
v___y_857_ = v___y_935_;
v___y_858_ = v___y_936_;
v___y_859_ = v___y_937_;
v___y_860_ = v___y_938_;
v___y_861_ = v___y_939_;
goto v___jp_850_;
}
else
{
lean_dec_ref(v_c_834_);
return v___x_971_;
}
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
lean_dec_ref(v_c_834_);
v_a_972_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_968_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_968_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
}
}
}
else
{
lean_object* v_toCold_980_; lean_object* v_options_981_; uint8_t v_hasTrace_982_; 
v_toCold_980_ = lean_ctor_get(v___y_938_, 0);
v_options_981_ = lean_ctor_get(v_toCold_980_, 2);
v_hasTrace_982_ = lean_ctor_get_uint8(v_options_981_, sizeof(void*)*1);
if (v_hasTrace_982_ == 0)
{
lean_object* v_k_983_; lean_object* v_v_984_; 
v_k_983_ = lean_ctor_get(v_p_940_, 0);
v_v_984_ = lean_ctor_get(v_p_940_, 1);
lean_inc(v_k_983_);
lean_inc_ref(v_p_940_);
lean_inc_n(v_v_984_, 2);
v___y_900_ = v_v_984_;
v___y_901_ = v_p_940_;
v___y_902_ = v_k_983_;
v___y_903_ = v_v_984_;
v___y_904_ = v___y_929_;
v___y_905_ = v___y_930_;
v___y_906_ = v___y_931_;
v___y_907_ = v___y_932_;
v___y_908_ = v___y_933_;
v___y_909_ = v___y_934_;
v___y_910_ = v___y_935_;
v___y_911_ = v___y_936_;
v___y_912_ = v___y_937_;
v___y_913_ = v___y_938_;
v___y_914_ = v___y_939_;
goto v___jp_899_;
}
else
{
lean_object* v_k_985_; lean_object* v_v_986_; lean_object* v_inheritedTraceOptions_987_; lean_object* v___x_988_; lean_object* v___x_989_; uint8_t v___x_990_; 
v_k_985_ = lean_ctor_get(v_p_940_, 0);
v_v_986_ = lean_ctor_get(v_p_940_, 1);
v_inheritedTraceOptions_987_ = lean_ctor_get(v_toCold_980_, 11);
v___x_988_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__13));
v___x_989_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__14, &l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__14_once, _init_l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__14);
v___x_990_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_987_, v_options_981_, v___x_989_);
if (v___x_990_ == 0)
{
lean_inc(v_k_985_);
lean_inc_ref(v_p_940_);
lean_inc_n(v_v_986_, 2);
v___y_900_ = v_v_986_;
v___y_901_ = v_p_940_;
v___y_902_ = v_k_985_;
v___y_903_ = v_v_986_;
v___y_904_ = v___y_929_;
v___y_905_ = v___y_930_;
v___y_906_ = v___y_931_;
v___y_907_ = v___y_932_;
v___y_908_ = v___y_933_;
v___y_909_ = v___y_934_;
v___y_910_ = v___y_935_;
v___y_911_ = v___y_936_;
v___y_912_ = v___y_937_;
v___y_913_ = v___y_938_;
v___y_914_ = v___y_939_;
goto v___jp_899_;
}
else
{
lean_object* v___x_991_; 
v___x_991_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0(v_c_834_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
lean_inc(v_a_992_);
lean_dec_ref_known(v___x_991_, 1);
v___x_993_ = l_Lean_MessageData_ofExpr(v_a_992_);
v___x_994_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg(v___x_988_, v___x_993_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_dec_ref_known(v___x_994_, 1);
lean_inc(v_k_985_);
lean_inc_ref(v_p_940_);
lean_inc_n(v_v_986_, 2);
v___y_900_ = v_v_986_;
v___y_901_ = v_p_940_;
v___y_902_ = v_k_985_;
v___y_903_ = v_v_986_;
v___y_904_ = v___y_929_;
v___y_905_ = v___y_930_;
v___y_906_ = v___y_931_;
v___y_907_ = v___y_932_;
v___y_908_ = v___y_933_;
v___y_909_ = v___y_934_;
v___y_910_ = v___y_935_;
v___y_911_ = v___y_936_;
v___y_912_ = v___y_937_;
v___y_913_ = v___y_938_;
v___y_914_ = v___y_939_;
goto v___jp_899_;
}
else
{
lean_dec_ref(v_c_834_);
return v___x_994_;
}
}
else
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
lean_dec_ref(v_c_834_);
v_a_995_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_991_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_991_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___boxed(lean_object* v_c_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v_c_1018_, v_a_1019_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_, v_a_1024_, v_a_1025_, v_a_1026_, v_a_1027_, v_a_1028_, v_a_1029_);
lean_dec(v_a_1029_);
lean_dec_ref(v_a_1028_);
lean_dec(v_a_1027_);
lean_dec_ref(v_a_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_a_1024_);
lean_dec(v_a_1023_);
lean_dec_ref(v_a_1022_);
lean_dec(v_a_1021_);
lean_dec(v_a_1020_);
lean_dec(v_a_1019_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1(lean_object* v_cls_1032_, lean_object* v_msg_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v___x_1046_; 
v___x_1046_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___redArg(v_cls_1032_, v_msg_1033_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___boxed(lean_object* v_cls_1047_, lean_object* v_msg_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1(v_cls_1047_, v_msg_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_);
lean_dec(v___y_1059_);
lean_dec_ref(v___y_1058_);
lean_dec(v___y_1057_);
lean_dec_ref(v___y_1056_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec(v___y_1050_);
lean_dec(v___y_1049_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b1_1062_, lean_object* v_msg_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1_spec__5___redArg(v_msg_1063_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03b1_1077_, lean_object* v_msg_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0_spec__0_spec__1_spec__5(v_00_u03b1_1077_, v_msg_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec(v___y_1080_);
lean_dec(v___y_1079_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___lam__0(lean_object* v_a_1092_, lean_object* v_e_1093_, lean_object* v_s_1094_){
_start:
{
lean_object* v_structs_1095_; lean_object* v_typeIdOf_1096_; lean_object* v_exprToStructId_1097_; lean_object* v_exprToStructIdEntries_1098_; lean_object* v_forbiddenNatModules_1099_; lean_object* v_natStructs_1100_; lean_object* v_natTypeIdOf_1101_; lean_object* v_exprToNatStructId_1102_; lean_object* v___x_1103_; uint8_t v___x_1104_; 
v_structs_1095_ = lean_ctor_get(v_s_1094_, 0);
v_typeIdOf_1096_ = lean_ctor_get(v_s_1094_, 1);
v_exprToStructId_1097_ = lean_ctor_get(v_s_1094_, 2);
v_exprToStructIdEntries_1098_ = lean_ctor_get(v_s_1094_, 3);
v_forbiddenNatModules_1099_ = lean_ctor_get(v_s_1094_, 4);
v_natStructs_1100_ = lean_ctor_get(v_s_1094_, 5);
v_natTypeIdOf_1101_ = lean_ctor_get(v_s_1094_, 6);
v_exprToNatStructId_1102_ = lean_ctor_get(v_s_1094_, 7);
v___x_1103_ = lean_array_get_size(v_structs_1095_);
v___x_1104_ = lean_nat_dec_lt(v_a_1092_, v___x_1103_);
if (v___x_1104_ == 0)
{
lean_dec_ref(v_e_1093_);
return v_s_1094_;
}
else
{
lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1166_; 
lean_inc_ref(v_exprToNatStructId_1102_);
lean_inc_ref(v_natTypeIdOf_1101_);
lean_inc_ref(v_natStructs_1100_);
lean_inc_ref(v_forbiddenNatModules_1099_);
lean_inc_ref(v_exprToStructIdEntries_1098_);
lean_inc_ref(v_exprToStructId_1097_);
lean_inc_ref(v_typeIdOf_1096_);
lean_inc_ref(v_structs_1095_);
v_isSharedCheck_1166_ = !lean_is_exclusive(v_s_1094_);
if (v_isSharedCheck_1166_ == 0)
{
lean_object* v_unused_1167_; lean_object* v_unused_1168_; lean_object* v_unused_1169_; lean_object* v_unused_1170_; lean_object* v_unused_1171_; lean_object* v_unused_1172_; lean_object* v_unused_1173_; lean_object* v_unused_1174_; 
v_unused_1167_ = lean_ctor_get(v_s_1094_, 7);
lean_dec(v_unused_1167_);
v_unused_1168_ = lean_ctor_get(v_s_1094_, 6);
lean_dec(v_unused_1168_);
v_unused_1169_ = lean_ctor_get(v_s_1094_, 5);
lean_dec(v_unused_1169_);
v_unused_1170_ = lean_ctor_get(v_s_1094_, 4);
lean_dec(v_unused_1170_);
v_unused_1171_ = lean_ctor_get(v_s_1094_, 3);
lean_dec(v_unused_1171_);
v_unused_1172_ = lean_ctor_get(v_s_1094_, 2);
lean_dec(v_unused_1172_);
v_unused_1173_ = lean_ctor_get(v_s_1094_, 1);
lean_dec(v_unused_1173_);
v_unused_1174_ = lean_ctor_get(v_s_1094_, 0);
lean_dec(v_unused_1174_);
v___x_1106_ = v_s_1094_;
v_isShared_1107_ = v_isSharedCheck_1166_;
goto v_resetjp_1105_;
}
else
{
lean_dec(v_s_1094_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1166_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v_v_1108_; lean_object* v_id_1109_; lean_object* v_ringId_x3f_1110_; lean_object* v_type_1111_; lean_object* v_u_1112_; lean_object* v_intModuleInst_1113_; lean_object* v_leInst_x3f_1114_; lean_object* v_ltInst_x3f_1115_; lean_object* v_lawfulOrderLTInst_x3f_1116_; lean_object* v_isPreorderInst_x3f_1117_; lean_object* v_orderedAddInst_x3f_1118_; lean_object* v_isLinearInst_x3f_1119_; lean_object* v_noNatDivInst_x3f_1120_; lean_object* v_ringInst_x3f_1121_; lean_object* v_commRingInst_x3f_1122_; lean_object* v_orderedRingInst_x3f_1123_; lean_object* v_fieldInst_x3f_1124_; lean_object* v_charInst_x3f_1125_; lean_object* v_zero_1126_; lean_object* v_ofNatZero_1127_; lean_object* v_one_x3f_1128_; lean_object* v_leFn_x3f_1129_; lean_object* v_ltFn_x3f_1130_; lean_object* v_addFn_1131_; lean_object* v_zsmulFn_1132_; lean_object* v_nsmulFn_1133_; lean_object* v_zsmulFn_x3f_1134_; lean_object* v_nsmulFn_x3f_1135_; lean_object* v_homomulFn_x3f_1136_; lean_object* v_subFn_1137_; lean_object* v_negFn_1138_; lean_object* v_vars_1139_; lean_object* v_varMap_1140_; lean_object* v_lowers_1141_; lean_object* v_uppers_1142_; lean_object* v_diseqs_1143_; lean_object* v_assignment_1144_; uint8_t v_caseSplits_1145_; lean_object* v_conflict_x3f_1146_; lean_object* v_diseqSplits_1147_; lean_object* v_elimEqs_1148_; lean_object* v_elimStack_1149_; lean_object* v_occurs_1150_; lean_object* v_ignored_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1165_; 
v_v_1108_ = lean_array_fget(v_structs_1095_, v_a_1092_);
v_id_1109_ = lean_ctor_get(v_v_1108_, 0);
v_ringId_x3f_1110_ = lean_ctor_get(v_v_1108_, 1);
v_type_1111_ = lean_ctor_get(v_v_1108_, 2);
v_u_1112_ = lean_ctor_get(v_v_1108_, 3);
v_intModuleInst_1113_ = lean_ctor_get(v_v_1108_, 4);
v_leInst_x3f_1114_ = lean_ctor_get(v_v_1108_, 5);
v_ltInst_x3f_1115_ = lean_ctor_get(v_v_1108_, 6);
v_lawfulOrderLTInst_x3f_1116_ = lean_ctor_get(v_v_1108_, 7);
v_isPreorderInst_x3f_1117_ = lean_ctor_get(v_v_1108_, 8);
v_orderedAddInst_x3f_1118_ = lean_ctor_get(v_v_1108_, 9);
v_isLinearInst_x3f_1119_ = lean_ctor_get(v_v_1108_, 10);
v_noNatDivInst_x3f_1120_ = lean_ctor_get(v_v_1108_, 11);
v_ringInst_x3f_1121_ = lean_ctor_get(v_v_1108_, 12);
v_commRingInst_x3f_1122_ = lean_ctor_get(v_v_1108_, 13);
v_orderedRingInst_x3f_1123_ = lean_ctor_get(v_v_1108_, 14);
v_fieldInst_x3f_1124_ = lean_ctor_get(v_v_1108_, 15);
v_charInst_x3f_1125_ = lean_ctor_get(v_v_1108_, 16);
v_zero_1126_ = lean_ctor_get(v_v_1108_, 17);
v_ofNatZero_1127_ = lean_ctor_get(v_v_1108_, 18);
v_one_x3f_1128_ = lean_ctor_get(v_v_1108_, 19);
v_leFn_x3f_1129_ = lean_ctor_get(v_v_1108_, 20);
v_ltFn_x3f_1130_ = lean_ctor_get(v_v_1108_, 21);
v_addFn_1131_ = lean_ctor_get(v_v_1108_, 22);
v_zsmulFn_1132_ = lean_ctor_get(v_v_1108_, 23);
v_nsmulFn_1133_ = lean_ctor_get(v_v_1108_, 24);
v_zsmulFn_x3f_1134_ = lean_ctor_get(v_v_1108_, 25);
v_nsmulFn_x3f_1135_ = lean_ctor_get(v_v_1108_, 26);
v_homomulFn_x3f_1136_ = lean_ctor_get(v_v_1108_, 27);
v_subFn_1137_ = lean_ctor_get(v_v_1108_, 28);
v_negFn_1138_ = lean_ctor_get(v_v_1108_, 29);
v_vars_1139_ = lean_ctor_get(v_v_1108_, 30);
v_varMap_1140_ = lean_ctor_get(v_v_1108_, 31);
v_lowers_1141_ = lean_ctor_get(v_v_1108_, 32);
v_uppers_1142_ = lean_ctor_get(v_v_1108_, 33);
v_diseqs_1143_ = lean_ctor_get(v_v_1108_, 34);
v_assignment_1144_ = lean_ctor_get(v_v_1108_, 35);
v_caseSplits_1145_ = lean_ctor_get_uint8(v_v_1108_, sizeof(void*)*42);
v_conflict_x3f_1146_ = lean_ctor_get(v_v_1108_, 36);
v_diseqSplits_1147_ = lean_ctor_get(v_v_1108_, 37);
v_elimEqs_1148_ = lean_ctor_get(v_v_1108_, 38);
v_elimStack_1149_ = lean_ctor_get(v_v_1108_, 39);
v_occurs_1150_ = lean_ctor_get(v_v_1108_, 40);
v_ignored_1151_ = lean_ctor_get(v_v_1108_, 41);
v_isSharedCheck_1165_ = !lean_is_exclusive(v_v_1108_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1153_ = v_v_1108_;
v_isShared_1154_ = v_isSharedCheck_1165_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_ignored_1151_);
lean_inc(v_occurs_1150_);
lean_inc(v_elimStack_1149_);
lean_inc(v_elimEqs_1148_);
lean_inc(v_diseqSplits_1147_);
lean_inc(v_conflict_x3f_1146_);
lean_inc(v_assignment_1144_);
lean_inc(v_diseqs_1143_);
lean_inc(v_uppers_1142_);
lean_inc(v_lowers_1141_);
lean_inc(v_varMap_1140_);
lean_inc(v_vars_1139_);
lean_inc(v_negFn_1138_);
lean_inc(v_subFn_1137_);
lean_inc(v_homomulFn_x3f_1136_);
lean_inc(v_nsmulFn_x3f_1135_);
lean_inc(v_zsmulFn_x3f_1134_);
lean_inc(v_nsmulFn_1133_);
lean_inc(v_zsmulFn_1132_);
lean_inc(v_addFn_1131_);
lean_inc(v_ltFn_x3f_1130_);
lean_inc(v_leFn_x3f_1129_);
lean_inc(v_one_x3f_1128_);
lean_inc(v_ofNatZero_1127_);
lean_inc(v_zero_1126_);
lean_inc(v_charInst_x3f_1125_);
lean_inc(v_fieldInst_x3f_1124_);
lean_inc(v_orderedRingInst_x3f_1123_);
lean_inc(v_commRingInst_x3f_1122_);
lean_inc(v_ringInst_x3f_1121_);
lean_inc(v_noNatDivInst_x3f_1120_);
lean_inc(v_isLinearInst_x3f_1119_);
lean_inc(v_orderedAddInst_x3f_1118_);
lean_inc(v_isPreorderInst_x3f_1117_);
lean_inc(v_lawfulOrderLTInst_x3f_1116_);
lean_inc(v_ltInst_x3f_1115_);
lean_inc(v_leInst_x3f_1114_);
lean_inc(v_intModuleInst_1113_);
lean_inc(v_u_1112_);
lean_inc(v_type_1111_);
lean_inc(v_ringId_x3f_1110_);
lean_inc(v_id_1109_);
lean_dec(v_v_1108_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1165_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1155_; lean_object* v_xs_x27_1156_; lean_object* v___x_1157_; lean_object* v___x_1159_; 
v___x_1155_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__4___closed__0);
v_xs_x27_1156_ = lean_array_fset(v_structs_1095_, v_a_1092_, v___x_1155_);
v___x_1157_ = l_Lean_PersistentArray_push___redArg(v_ignored_1151_, v_e_1093_);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 41, v___x_1157_);
v___x_1159_ = v___x_1153_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_id_1109_);
lean_ctor_set(v_reuseFailAlloc_1164_, 1, v_ringId_x3f_1110_);
lean_ctor_set(v_reuseFailAlloc_1164_, 2, v_type_1111_);
lean_ctor_set(v_reuseFailAlloc_1164_, 3, v_u_1112_);
lean_ctor_set(v_reuseFailAlloc_1164_, 4, v_intModuleInst_1113_);
lean_ctor_set(v_reuseFailAlloc_1164_, 5, v_leInst_x3f_1114_);
lean_ctor_set(v_reuseFailAlloc_1164_, 6, v_ltInst_x3f_1115_);
lean_ctor_set(v_reuseFailAlloc_1164_, 7, v_lawfulOrderLTInst_x3f_1116_);
lean_ctor_set(v_reuseFailAlloc_1164_, 8, v_isPreorderInst_x3f_1117_);
lean_ctor_set(v_reuseFailAlloc_1164_, 9, v_orderedAddInst_x3f_1118_);
lean_ctor_set(v_reuseFailAlloc_1164_, 10, v_isLinearInst_x3f_1119_);
lean_ctor_set(v_reuseFailAlloc_1164_, 11, v_noNatDivInst_x3f_1120_);
lean_ctor_set(v_reuseFailAlloc_1164_, 12, v_ringInst_x3f_1121_);
lean_ctor_set(v_reuseFailAlloc_1164_, 13, v_commRingInst_x3f_1122_);
lean_ctor_set(v_reuseFailAlloc_1164_, 14, v_orderedRingInst_x3f_1123_);
lean_ctor_set(v_reuseFailAlloc_1164_, 15, v_fieldInst_x3f_1124_);
lean_ctor_set(v_reuseFailAlloc_1164_, 16, v_charInst_x3f_1125_);
lean_ctor_set(v_reuseFailAlloc_1164_, 17, v_zero_1126_);
lean_ctor_set(v_reuseFailAlloc_1164_, 18, v_ofNatZero_1127_);
lean_ctor_set(v_reuseFailAlloc_1164_, 19, v_one_x3f_1128_);
lean_ctor_set(v_reuseFailAlloc_1164_, 20, v_leFn_x3f_1129_);
lean_ctor_set(v_reuseFailAlloc_1164_, 21, v_ltFn_x3f_1130_);
lean_ctor_set(v_reuseFailAlloc_1164_, 22, v_addFn_1131_);
lean_ctor_set(v_reuseFailAlloc_1164_, 23, v_zsmulFn_1132_);
lean_ctor_set(v_reuseFailAlloc_1164_, 24, v_nsmulFn_1133_);
lean_ctor_set(v_reuseFailAlloc_1164_, 25, v_zsmulFn_x3f_1134_);
lean_ctor_set(v_reuseFailAlloc_1164_, 26, v_nsmulFn_x3f_1135_);
lean_ctor_set(v_reuseFailAlloc_1164_, 27, v_homomulFn_x3f_1136_);
lean_ctor_set(v_reuseFailAlloc_1164_, 28, v_subFn_1137_);
lean_ctor_set(v_reuseFailAlloc_1164_, 29, v_negFn_1138_);
lean_ctor_set(v_reuseFailAlloc_1164_, 30, v_vars_1139_);
lean_ctor_set(v_reuseFailAlloc_1164_, 31, v_varMap_1140_);
lean_ctor_set(v_reuseFailAlloc_1164_, 32, v_lowers_1141_);
lean_ctor_set(v_reuseFailAlloc_1164_, 33, v_uppers_1142_);
lean_ctor_set(v_reuseFailAlloc_1164_, 34, v_diseqs_1143_);
lean_ctor_set(v_reuseFailAlloc_1164_, 35, v_assignment_1144_);
lean_ctor_set(v_reuseFailAlloc_1164_, 36, v_conflict_x3f_1146_);
lean_ctor_set(v_reuseFailAlloc_1164_, 37, v_diseqSplits_1147_);
lean_ctor_set(v_reuseFailAlloc_1164_, 38, v_elimEqs_1148_);
lean_ctor_set(v_reuseFailAlloc_1164_, 39, v_elimStack_1149_);
lean_ctor_set(v_reuseFailAlloc_1164_, 40, v_occurs_1150_);
lean_ctor_set(v_reuseFailAlloc_1164_, 41, v___x_1157_);
lean_ctor_set_uint8(v_reuseFailAlloc_1164_, sizeof(void*)*42, v_caseSplits_1145_);
v___x_1159_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
lean_object* v___x_1160_; lean_object* v___x_1162_; 
v___x_1160_ = lean_array_fset(v_xs_x27_1156_, v_a_1092_, v___x_1159_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 0, v___x_1160_);
v___x_1162_ = v___x_1106_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v___x_1160_);
lean_ctor_set(v_reuseFailAlloc_1163_, 1, v_typeIdOf_1096_);
lean_ctor_set(v_reuseFailAlloc_1163_, 2, v_exprToStructId_1097_);
lean_ctor_set(v_reuseFailAlloc_1163_, 3, v_exprToStructIdEntries_1098_);
lean_ctor_set(v_reuseFailAlloc_1163_, 4, v_forbiddenNatModules_1099_);
lean_ctor_set(v_reuseFailAlloc_1163_, 5, v_natStructs_1100_);
lean_ctor_set(v_reuseFailAlloc_1163_, 6, v_natTypeIdOf_1101_);
lean_ctor_set(v_reuseFailAlloc_1163_, 7, v_exprToNatStructId_1102_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___lam__0___boxed(lean_object* v_a_1175_, lean_object* v_e_1176_, lean_object* v_s_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___lam__0(v_a_1175_, v_e_1176_, v_s_1177_);
lean_dec(v_a_1175_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq(lean_object* v_e_1179_, lean_object* v_lhs_1180_, lean_object* v_rhs_1181_, uint8_t v_strict_1182_, uint8_t v_eqTrue_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_){
_start:
{
lean_object* v___f_1196_; uint8_t v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
lean_inc_ref(v_e_1179_);
lean_inc(v_a_1184_);
v___f_1196_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1196_, 0, v_a_1184_);
lean_closure_set(v___f_1196_, 1, v_e_1179_);
v___x_1197_ = 0;
v___x_1198_ = lean_unsigned_to_nat(0u);
v___x_1199_ = lean_box(v___x_1197_);
v___x_1200_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_reify_x3f___boxed), 15, 3);
lean_closure_set(v___x_1200_, 0, v_lhs_1180_);
lean_closure_set(v___x_1200_, 1, v___x_1199_);
lean_closure_set(v___x_1200_, 2, v___x_1198_);
v___x_1201_ = l_Lean_Meta_Grind_Arith_Linear_withRingM___redArg(v___x_1200_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1355_; 
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1204_ = v___x_1201_;
v_isShared_1205_ = v_isSharedCheck_1355_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1201_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1355_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
if (lean_obj_tag(v_a_1202_) == 1)
{
lean_object* v_val_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
lean_del_object(v___x_1204_);
v_val_1206_ = lean_ctor_get(v_a_1202_, 0);
lean_inc(v_val_1206_);
lean_dec_ref_known(v_a_1202_, 1);
v___x_1207_ = lean_box(v___x_1197_);
v___x_1208_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_reify_x3f___boxed), 15, 3);
lean_closure_set(v___x_1208_, 0, v_rhs_1181_);
lean_closure_set(v___x_1208_, 1, v___x_1207_);
lean_closure_set(v___x_1208_, 2, v___x_1198_);
v___x_1209_ = l_Lean_Meta_Grind_Arith_Linear_withRingM___redArg(v___x_1208_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1342_; 
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1212_ = v___x_1209_;
v_isShared_1213_ = v_isSharedCheck_1342_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1209_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1342_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
if (lean_obj_tag(v_a_1210_) == 1)
{
lean_object* v_val_1214_; lean_object* v___x_1215_; 
lean_del_object(v___x_1212_);
v_val_1214_ = lean_ctor_get(v_a_1210_, 0);
lean_inc(v_val_1214_);
lean_dec_ref_known(v_a_1210_, 1);
v___x_1215_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_1179_, v_a_1185_);
if (lean_obj_tag(v___x_1215_) == 0)
{
if (v_eqTrue_1183_ == 0)
{
lean_object* v_a_1216_; lean_object* v___x_1217_; 
v_a_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_a_1216_);
lean_dec_ref_known(v___x_1215_, 1);
v___x_1217_ = l_Lean_Meta_Grind_Arith_Linear_isLinearOrder(v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v_a_1218_; uint8_t v___x_1219_; 
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
lean_inc(v_a_1218_);
lean_dec_ref_known(v___x_1217_, 1);
v___x_1219_ = lean_unbox(v_a_1218_);
if (v___x_1219_ == 0)
{
lean_object* v___x_1220_; lean_object* v___x_1221_; 
lean_dec(v_a_1218_);
lean_dec(v_a_1216_);
lean_dec(v_val_1214_);
lean_dec(v_val_1206_);
lean_dec_ref(v_e_1179_);
v___x_1220_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_1221_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1220_, v___f_1196_, v_a_1185_);
return v___x_1221_;
}
else
{
lean_object* v___x_1222_; lean_object* v___x_1223_; uint8_t v___y_1225_; 
lean_dec_ref(v___f_1196_);
lean_inc(v_val_1206_);
lean_inc(v_val_1214_);
v___x_1222_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1222_, 0, v_val_1214_);
lean_ctor_set(v___x_1222_, 1, v_val_1206_);
v___x_1223_ = l_Lean_Grind_CommRing_Expr_toPoly(v___x_1222_);
if (v_strict_1182_ == 0)
{
uint8_t v___x_1272_; 
v___x_1272_ = lean_unbox(v_a_1218_);
lean_dec(v_a_1218_);
v___y_1225_ = v___x_1272_;
goto v___jp_1224_;
}
else
{
lean_dec(v_a_1218_);
v___y_1225_ = v_eqTrue_1183_;
goto v___jp_1224_;
}
v___jp_1224_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1226_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1226_, 0, v_e_1179_);
lean_ctor_set(v___x_1226_, 1, v_val_1206_);
lean_ctor_set(v___x_1226_, 2, v_val_1214_);
v___x_1227_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1227_, 0, v___x_1223_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
lean_ctor_set_uint8(v___x_1227_, sizeof(void*)*2, v___y_1225_);
v___x_1228_ = l_Lean_Meta_Grind_Arith_Linear_RingIneqCnstr_cleanupDenominators(v___x_1227_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v_a_1229_; lean_object* v_p_1230_; lean_object* v___x_1231_; 
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
lean_inc(v_a_1229_);
lean_dec_ref_known(v___x_1228_, 1);
v_p_1230_ = lean_ctor_get(v_a_1229_, 0);
lean_inc(v_a_1216_);
lean_inc_ref(v_p_1230_);
v___x_1231_ = l_Lean_Grind_CommRing_Poly_toIntModuleExpr(v_p_1230_, v_a_1216_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v_a_1232_; lean_object* v___x_1233_; 
v_a_1232_ = lean_ctor_get(v___x_1231_, 0);
lean_inc(v_a_1232_);
lean_dec_ref_known(v___x_1231_, 1);
v___x_1233_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_a_1232_, v___x_1197_, v_a_1216_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v_a_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1247_; 
v_a_1234_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1247_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1236_ = v___x_1233_;
v_isShared_1237_ = v_isSharedCheck_1247_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_dec(v___x_1233_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1247_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
if (lean_obj_tag(v_a_1234_) == 1)
{
lean_object* v_val_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
lean_del_object(v___x_1236_);
v_val_1238_ = lean_ctor_get(v_a_1234_, 0);
lean_inc_n(v_val_1238_, 2);
lean_dec_ref_known(v_a_1234_, 1);
v___x_1239_ = l_Lean_Grind_Linarith_Expr_norm(v_val_1238_);
v___x_1240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1240_, 0, v_a_1229_);
lean_ctor_set(v___x_1240_, 1, v_val_1238_);
v___x_1241_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1241_, 0, v___x_1239_);
lean_ctor_set(v___x_1241_, 1, v___x_1240_);
lean_ctor_set_uint8(v___x_1241_, sizeof(void*)*2, v___y_1225_);
v___x_1242_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_1241_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
return v___x_1242_;
}
else
{
lean_object* v___x_1243_; lean_object* v___x_1245_; 
lean_dec(v_a_1234_);
lean_dec(v_a_1229_);
v___x_1243_ = lean_box(0);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 0, v___x_1243_);
v___x_1245_ = v___x_1236_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1243_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
return v___x_1245_;
}
}
}
}
else
{
lean_object* v_a_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1255_; 
lean_dec(v_a_1229_);
v_a_1248_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1250_ = v___x_1233_;
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_a_1248_);
lean_dec(v___x_1233_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1253_; 
if (v_isShared_1251_ == 0)
{
v___x_1253_ = v___x_1250_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_a_1248_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
return v___x_1253_;
}
}
}
}
else
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1263_; 
lean_dec(v_a_1229_);
lean_dec(v_a_1216_);
v_a_1256_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1258_ = v___x_1231_;
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1231_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1256_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
}
else
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
lean_dec(v_a_1216_);
v_a_1264_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v___x_1228_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1228_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
}
}
else
{
lean_object* v_a_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1280_; 
lean_dec(v_a_1216_);
lean_dec(v_val_1214_);
lean_dec(v_val_1206_);
lean_dec_ref(v___f_1196_);
lean_dec_ref(v_e_1179_);
v_a_1273_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1275_ = v___x_1217_;
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_a_1273_);
lean_dec(v___x_1217_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1278_; 
if (v_isShared_1276_ == 0)
{
v___x_1278_ = v___x_1275_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v_a_1273_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
}
else
{
lean_object* v_a_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
lean_dec_ref(v___f_1196_);
v_a_1281_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_a_1281_);
lean_dec_ref_known(v___x_1215_, 1);
lean_inc(v_val_1214_);
lean_inc(v_val_1206_);
v___x_1282_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1282_, 0, v_val_1206_);
lean_ctor_set(v___x_1282_, 1, v_val_1214_);
v___x_1283_ = l_Lean_Grind_CommRing_Expr_toPoly(v___x_1282_);
v___x_1284_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1284_, 0, v_e_1179_);
lean_ctor_set(v___x_1284_, 1, v_val_1206_);
lean_ctor_set(v___x_1284_, 2, v_val_1214_);
v___x_1285_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1285_, 0, v___x_1283_);
lean_ctor_set(v___x_1285_, 1, v___x_1284_);
lean_ctor_set_uint8(v___x_1285_, sizeof(void*)*2, v_strict_1182_);
v___x_1286_ = l_Lean_Meta_Grind_Arith_Linear_RingIneqCnstr_cleanupDenominators(v___x_1285_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; lean_object* v_p_1288_; lean_object* v___x_1289_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
lean_inc(v_a_1287_);
lean_dec_ref_known(v___x_1286_, 1);
v_p_1288_ = lean_ctor_get(v_a_1287_, 0);
lean_inc(v_a_1281_);
lean_inc_ref(v_p_1288_);
v___x_1289_ = l_Lean_Grind_CommRing_Poly_toIntModuleExpr(v_p_1288_, v_a_1281_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; lean_object* v___x_1291_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
lean_inc(v_a_1290_);
lean_dec_ref_known(v___x_1289_, 1);
v___x_1291_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_a_1290_, v___x_1197_, v_a_1281_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
if (lean_obj_tag(v___x_1291_) == 0)
{
lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1305_; 
v_a_1292_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1294_ = v___x_1291_;
v_isShared_1295_ = v_isSharedCheck_1305_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_dec(v___x_1291_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1305_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
if (lean_obj_tag(v_a_1292_) == 1)
{
lean_object* v_val_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
lean_del_object(v___x_1294_);
v_val_1296_ = lean_ctor_get(v_a_1292_, 0);
lean_inc_n(v_val_1296_, 2);
lean_dec_ref_known(v_a_1292_, 1);
v___x_1297_ = l_Lean_Grind_Linarith_Expr_norm(v_val_1296_);
v___x_1298_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1298_, 0, v_a_1287_);
lean_ctor_set(v___x_1298_, 1, v_val_1296_);
v___x_1299_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1299_, 0, v___x_1297_);
lean_ctor_set(v___x_1299_, 1, v___x_1298_);
lean_ctor_set_uint8(v___x_1299_, sizeof(void*)*2, v_strict_1182_);
v___x_1300_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_1299_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
return v___x_1300_;
}
else
{
lean_object* v___x_1301_; lean_object* v___x_1303_; 
lean_dec(v_a_1292_);
lean_dec(v_a_1287_);
v___x_1301_ = lean_box(0);
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 0, v___x_1301_);
v___x_1303_ = v___x_1294_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v___x_1301_);
v___x_1303_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
return v___x_1303_;
}
}
}
}
else
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1313_; 
lean_dec(v_a_1287_);
v_a_1306_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1308_ = v___x_1291_;
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v___x_1291_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1311_; 
if (v_isShared_1309_ == 0)
{
v___x_1311_ = v___x_1308_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_a_1306_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
}
else
{
lean_object* v_a_1314_; lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1321_; 
lean_dec(v_a_1287_);
lean_dec(v_a_1281_);
v_a_1314_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1316_ = v___x_1289_;
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
else
{
lean_inc(v_a_1314_);
lean_dec(v___x_1289_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1319_; 
if (v_isShared_1317_ == 0)
{
v___x_1319_ = v___x_1316_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_a_1314_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
}
else
{
lean_object* v_a_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1329_; 
lean_dec(v_a_1281_);
v_a_1322_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1324_ = v___x_1286_;
v_isShared_1325_ = v_isSharedCheck_1329_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_a_1322_);
lean_dec(v___x_1286_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1329_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1327_; 
if (v_isShared_1325_ == 0)
{
v___x_1327_ = v___x_1324_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v_a_1322_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
}
}
}
}
}
else
{
lean_object* v_a_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1337_; 
lean_dec(v_val_1214_);
lean_dec(v_val_1206_);
lean_dec_ref(v___f_1196_);
lean_dec_ref(v_e_1179_);
v_a_1330_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1332_ = v___x_1215_;
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_a_1330_);
lean_dec(v___x_1215_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1335_; 
if (v_isShared_1333_ == 0)
{
v___x_1335_ = v___x_1332_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v_a_1330_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
}
}
else
{
lean_object* v___x_1338_; lean_object* v___x_1340_; 
lean_dec(v_a_1210_);
lean_dec(v_val_1206_);
lean_dec_ref(v___f_1196_);
lean_dec_ref(v_e_1179_);
v___x_1338_ = lean_box(0);
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 0, v___x_1338_);
v___x_1340_ = v___x_1212_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___x_1338_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
}
else
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
lean_dec(v_val_1206_);
lean_dec_ref(v___f_1196_);
lean_dec_ref(v_e_1179_);
v_a_1343_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v___x_1209_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1209_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_a_1343_);
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
lean_object* v___x_1351_; lean_object* v___x_1353_; 
lean_dec(v_a_1202_);
lean_dec_ref(v___f_1196_);
lean_dec_ref(v_rhs_1181_);
lean_dec_ref(v_e_1179_);
v___x_1351_ = lean_box(0);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v___x_1351_);
v___x_1353_ = v___x_1204_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v___x_1351_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
}
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec_ref(v___f_1196_);
lean_dec_ref(v_rhs_1181_);
lean_dec_ref(v_e_1179_);
v_a_1356_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1201_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1201_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___boxed(lean_object** _args){
lean_object* v_e_1364_ = _args[0];
lean_object* v_lhs_1365_ = _args[1];
lean_object* v_rhs_1366_ = _args[2];
lean_object* v_strict_1367_ = _args[3];
lean_object* v_eqTrue_1368_ = _args[4];
lean_object* v_a_1369_ = _args[5];
lean_object* v_a_1370_ = _args[6];
lean_object* v_a_1371_ = _args[7];
lean_object* v_a_1372_ = _args[8];
lean_object* v_a_1373_ = _args[9];
lean_object* v_a_1374_ = _args[10];
lean_object* v_a_1375_ = _args[11];
lean_object* v_a_1376_ = _args[12];
lean_object* v_a_1377_ = _args[13];
lean_object* v_a_1378_ = _args[14];
lean_object* v_a_1379_ = _args[15];
lean_object* v_a_1380_ = _args[16];
_start:
{
uint8_t v_strict_boxed_1381_; uint8_t v_eqTrue_boxed_1382_; lean_object* v_res_1383_; 
v_strict_boxed_1381_ = lean_unbox(v_strict_1367_);
v_eqTrue_boxed_1382_ = lean_unbox(v_eqTrue_1368_);
v_res_1383_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq(v_e_1364_, v_lhs_1365_, v_rhs_1366_, v_strict_boxed_1381_, v_eqTrue_boxed_1382_, v_a_1369_, v_a_1370_, v_a_1371_, v_a_1372_, v_a_1373_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_, v_a_1378_, v_a_1379_);
lean_dec(v_a_1379_);
lean_dec_ref(v_a_1378_);
lean_dec(v_a_1377_);
lean_dec_ref(v_a_1376_);
lean_dec(v_a_1375_);
lean_dec_ref(v_a_1374_);
lean_dec(v_a_1373_);
lean_dec_ref(v_a_1372_);
lean_dec(v_a_1371_);
lean_dec(v_a_1370_);
lean_dec(v_a_1369_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateIntModuleIneq(lean_object* v_e_1384_, lean_object* v_lhs_1385_, lean_object* v_rhs_1386_, uint8_t v_strict_1387_, uint8_t v_eqTrue_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_, lean_object* v_a_1399_){
_start:
{
lean_object* v___f_1401_; lean_object* v___x_1402_; 
lean_inc_ref(v_e_1384_);
lean_inc(v_a_1389_);
v___f_1401_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1401_, 0, v_a_1389_);
lean_closure_set(v___f_1401_, 1, v_e_1384_);
v___x_1402_ = l_Lean_Meta_Grind_getGeneration___redArg(v_lhs_1385_, v_a_1390_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; uint8_t v___x_1404_; lean_object* v___x_1405_; 
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_a_1403_);
lean_dec_ref_known(v___x_1402_, 1);
v___x_1404_ = 0;
v___x_1405_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_lhs_1385_, v___x_1404_, v_a_1403_, v_a_1389_, v_a_1390_, v_a_1391_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_, v_a_1399_);
if (lean_obj_tag(v___x_1405_) == 0)
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1471_; 
v_a_1406_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1408_ = v___x_1405_;
v_isShared_1409_ = v_isSharedCheck_1471_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1405_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1471_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
if (lean_obj_tag(v_a_1406_) == 1)
{
lean_object* v_val_1410_; lean_object* v___x_1411_; 
lean_del_object(v___x_1408_);
v_val_1410_ = lean_ctor_get(v_a_1406_, 0);
lean_inc(v_val_1410_);
lean_dec_ref_known(v_a_1406_, 1);
v___x_1411_ = l_Lean_Meta_Grind_getGeneration___redArg(v_rhs_1386_, v_a_1390_);
if (lean_obj_tag(v___x_1411_) == 0)
{
lean_object* v_a_1412_; lean_object* v___x_1413_; 
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
lean_inc(v_a_1412_);
lean_dec_ref_known(v___x_1411_, 1);
v___x_1413_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_rhs_1386_, v___x_1404_, v_a_1412_, v_a_1389_, v_a_1390_, v_a_1391_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_, v_a_1399_);
if (lean_obj_tag(v___x_1413_) == 0)
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1450_; 
v_a_1414_ = lean_ctor_get(v___x_1413_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1416_ = v___x_1413_;
v_isShared_1417_ = v_isSharedCheck_1450_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1413_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1450_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
if (lean_obj_tag(v_a_1414_) == 1)
{
lean_del_object(v___x_1416_);
if (v_eqTrue_1388_ == 0)
{
lean_object* v_val_1418_; lean_object* v___x_1419_; 
v_val_1418_ = lean_ctor_get(v_a_1414_, 0);
lean_inc(v_val_1418_);
lean_dec_ref_known(v_a_1414_, 1);
v___x_1419_ = l_Lean_Meta_Grind_Arith_Linear_isLinearOrder(v_a_1389_, v_a_1390_, v_a_1391_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_, v_a_1399_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_a_1420_; uint8_t v___x_1421_; 
v_a_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_a_1420_);
lean_dec_ref_known(v___x_1419_, 1);
v___x_1421_ = lean_unbox(v_a_1420_);
if (v___x_1421_ == 0)
{
lean_object* v___x_1422_; lean_object* v___x_1423_; 
lean_dec(v_a_1420_);
lean_dec(v_val_1418_);
lean_dec(v_val_1410_);
lean_dec_ref(v_e_1384_);
v___x_1422_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_1423_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1422_, v___f_1401_, v_a_1390_);
return v___x_1423_;
}
else
{
lean_object* v___x_1424_; lean_object* v___x_1425_; uint8_t v___y_1427_; 
lean_dec_ref(v___f_1401_);
lean_inc(v_val_1410_);
lean_inc(v_val_1418_);
v___x_1424_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1424_, 0, v_val_1418_);
lean_ctor_set(v___x_1424_, 1, v_val_1410_);
v___x_1425_ = l_Lean_Grind_Linarith_Expr_norm(v___x_1424_);
if (v_strict_1387_ == 0)
{
uint8_t v___x_1431_; 
v___x_1431_ = lean_unbox(v_a_1420_);
lean_dec(v_a_1420_);
v___y_1427_ = v___x_1431_;
goto v___jp_1426_;
}
else
{
lean_dec(v_a_1420_);
v___y_1427_ = v_eqTrue_1388_;
goto v___jp_1426_;
}
v___jp_1426_:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1428_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1428_, 0, v_e_1384_);
lean_ctor_set(v___x_1428_, 1, v_val_1410_);
lean_ctor_set(v___x_1428_, 2, v_val_1418_);
v___x_1429_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1429_, 0, v___x_1425_);
lean_ctor_set(v___x_1429_, 1, v___x_1428_);
lean_ctor_set_uint8(v___x_1429_, sizeof(void*)*2, v___y_1427_);
v___x_1430_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_1429_, v_a_1389_, v_a_1390_, v_a_1391_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_, v_a_1399_);
return v___x_1430_;
}
}
}
else
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1439_; 
lean_dec(v_val_1418_);
lean_dec(v_val_1410_);
lean_dec_ref(v___f_1401_);
lean_dec_ref(v_e_1384_);
v_a_1432_ = lean_ctor_get(v___x_1419_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1434_ = v___x_1419_;
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v___x_1419_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1437_; 
if (v_isShared_1435_ == 0)
{
v___x_1437_ = v___x_1434_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_a_1432_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
else
{
lean_object* v_val_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
lean_dec_ref(v___f_1401_);
v_val_1440_ = lean_ctor_get(v_a_1414_, 0);
lean_inc_n(v_val_1440_, 2);
lean_dec_ref_known(v_a_1414_, 1);
lean_inc(v_val_1410_);
v___x_1441_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1441_, 0, v_val_1410_);
lean_ctor_set(v___x_1441_, 1, v_val_1440_);
v___x_1442_ = l_Lean_Grind_Linarith_Expr_norm(v___x_1441_);
v___x_1443_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1443_, 0, v_e_1384_);
lean_ctor_set(v___x_1443_, 1, v_val_1410_);
lean_ctor_set(v___x_1443_, 2, v_val_1440_);
v___x_1444_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1444_, 0, v___x_1442_);
lean_ctor_set(v___x_1444_, 1, v___x_1443_);
lean_ctor_set_uint8(v___x_1444_, sizeof(void*)*2, v_strict_1387_);
v___x_1445_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_1444_, v_a_1389_, v_a_1390_, v_a_1391_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_, v_a_1399_);
return v___x_1445_;
}
}
else
{
lean_object* v___x_1446_; lean_object* v___x_1448_; 
lean_dec(v_a_1414_);
lean_dec(v_val_1410_);
lean_dec_ref(v___f_1401_);
lean_dec_ref(v_e_1384_);
v___x_1446_ = lean_box(0);
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 0, v___x_1446_);
v___x_1448_ = v___x_1416_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1446_);
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
else
{
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1458_; 
lean_dec(v_val_1410_);
lean_dec_ref(v___f_1401_);
lean_dec_ref(v_e_1384_);
v_a_1451_ = lean_ctor_get(v___x_1413_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1453_ = v___x_1413_;
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1413_);
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
lean_dec(v_val_1410_);
lean_dec_ref(v___f_1401_);
lean_dec_ref(v_rhs_1386_);
lean_dec_ref(v_e_1384_);
v_a_1459_ = lean_ctor_get(v___x_1411_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1461_ = v___x_1411_;
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_dec(v___x_1411_);
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
else
{
lean_object* v___x_1467_; lean_object* v___x_1469_; 
lean_dec(v_a_1406_);
lean_dec_ref(v___f_1401_);
lean_dec_ref(v_rhs_1386_);
lean_dec_ref(v_e_1384_);
v___x_1467_ = lean_box(0);
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 0, v___x_1467_);
v___x_1469_ = v___x_1408_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v___x_1467_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
}
}
else
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
lean_dec_ref(v___f_1401_);
lean_dec_ref(v_rhs_1386_);
lean_dec_ref(v_e_1384_);
v_a_1472_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1405_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1405_);
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
else
{
lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1487_; 
lean_dec_ref(v___f_1401_);
lean_dec_ref(v_rhs_1386_);
lean_dec_ref(v_lhs_1385_);
lean_dec_ref(v_e_1384_);
v_a_1480_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1482_ = v___x_1402_;
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v___x_1402_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1485_; 
if (v_isShared_1483_ == 0)
{
v___x_1485_ = v___x_1482_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_a_1480_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateIntModuleIneq___boxed(lean_object** _args){
lean_object* v_e_1488_ = _args[0];
lean_object* v_lhs_1489_ = _args[1];
lean_object* v_rhs_1490_ = _args[2];
lean_object* v_strict_1491_ = _args[3];
lean_object* v_eqTrue_1492_ = _args[4];
lean_object* v_a_1493_ = _args[5];
lean_object* v_a_1494_ = _args[6];
lean_object* v_a_1495_ = _args[7];
lean_object* v_a_1496_ = _args[8];
lean_object* v_a_1497_ = _args[9];
lean_object* v_a_1498_ = _args[10];
lean_object* v_a_1499_ = _args[11];
lean_object* v_a_1500_ = _args[12];
lean_object* v_a_1501_ = _args[13];
lean_object* v_a_1502_ = _args[14];
lean_object* v_a_1503_ = _args[15];
lean_object* v_a_1504_ = _args[16];
_start:
{
uint8_t v_strict_boxed_1505_; uint8_t v_eqTrue_boxed_1506_; lean_object* v_res_1507_; 
v_strict_boxed_1505_ = lean_unbox(v_strict_1491_);
v_eqTrue_boxed_1506_ = lean_unbox(v_eqTrue_1492_);
v_res_1507_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateIntModuleIneq(v_e_1488_, v_lhs_1489_, v_rhs_1490_, v_strict_boxed_1505_, v_eqTrue_boxed_1506_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_, v_a_1497_, v_a_1498_, v_a_1499_, v_a_1500_, v_a_1501_, v_a_1502_, v_a_1503_);
lean_dec(v_a_1503_);
lean_dec_ref(v_a_1502_);
lean_dec(v_a_1501_);
lean_dec_ref(v_a_1500_);
lean_dec(v_a_1499_);
lean_dec_ref(v_a_1498_);
lean_dec(v_a_1497_);
lean_dec_ref(v_a_1496_);
lean_dec(v_a_1495_);
lean_dec(v_a_1494_);
lean_dec(v_a_1493_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateNatModuleIneq(lean_object* v_e_1508_, lean_object* v_lhs_1509_, lean_object* v_rhs_1510_, uint8_t v_strict_1511_, uint8_t v_eqTrue_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_){
_start:
{
lean_object* v___x_1525_; 
v___x_1525_ = l_Lean_Meta_Grind_Arith_Linear_getNatStruct(v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; lean_object* v___x_1527_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1526_);
lean_dec_ref_known(v___x_1525_, 1);
lean_inc_ref(v_lhs_1509_);
v___x_1527_ = l_Lean_Meta_Grind_Arith_Linear_ofNatModule(v_lhs_1509_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
if (lean_obj_tag(v___x_1527_) == 0)
{
lean_object* v_a_1528_; lean_object* v_fst_1529_; lean_object* v___x_1530_; 
v_a_1528_ = lean_ctor_get(v___x_1527_, 0);
lean_inc(v_a_1528_);
lean_dec_ref_known(v___x_1527_, 1);
v_fst_1529_ = lean_ctor_get(v_a_1528_, 0);
lean_inc(v_fst_1529_);
lean_dec(v_a_1528_);
lean_inc_ref(v_rhs_1510_);
v___x_1530_ = l_Lean_Meta_Grind_Arith_Linear_ofNatModule(v_rhs_1510_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1531_; lean_object* v_fst_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1615_; 
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
lean_inc(v_a_1531_);
lean_dec_ref_known(v___x_1530_, 1);
v_fst_1532_ = lean_ctor_get(v_a_1531_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v_a_1531_);
if (v_isSharedCheck_1615_ == 0)
{
lean_object* v_unused_1616_; 
v_unused_1616_ = lean_ctor_get(v_a_1531_, 1);
lean_dec(v_unused_1616_);
v___x_1534_ = v_a_1531_;
v_isShared_1535_ = v_isSharedCheck_1615_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_fst_1532_);
lean_dec(v_a_1531_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1615_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v_id_1536_; lean_object* v_structId_1537_; lean_object* v___x_1538_; 
v_id_1536_ = lean_ctor_get(v_a_1526_, 0);
lean_inc(v_id_1536_);
v_structId_1537_ = lean_ctor_get(v_a_1526_, 1);
lean_inc(v_structId_1537_);
lean_dec(v_a_1526_);
v___x_1538_ = l_Lean_Meta_Grind_getGeneration___redArg(v_lhs_1509_, v_a_1514_);
lean_dec_ref(v_lhs_1509_);
if (lean_obj_tag(v___x_1538_) == 0)
{
lean_object* v_a_1539_; uint8_t v___x_1540_; lean_object* v___x_1541_; 
v_a_1539_ = lean_ctor_get(v___x_1538_, 0);
lean_inc(v_a_1539_);
lean_dec_ref_known(v___x_1538_, 1);
v___x_1540_ = 0;
v___x_1541_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_fst_1529_, v___x_1540_, v_a_1539_, v_structId_1537_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v_a_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1598_; 
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1544_ = v___x_1541_;
v_isShared_1545_ = v_isSharedCheck_1598_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_a_1542_);
lean_dec(v___x_1541_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1598_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
if (lean_obj_tag(v_a_1542_) == 1)
{
lean_object* v_val_1546_; lean_object* v___x_1547_; 
lean_del_object(v___x_1544_);
v_val_1546_ = lean_ctor_get(v_a_1542_, 0);
lean_inc(v_val_1546_);
lean_dec_ref_known(v_a_1542_, 1);
v___x_1547_ = l_Lean_Meta_Grind_getGeneration___redArg(v_rhs_1510_, v_a_1514_);
lean_dec_ref(v_rhs_1510_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1548_; lean_object* v___x_1549_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_a_1548_);
lean_dec_ref_known(v___x_1547_, 1);
v___x_1549_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_fst_1532_, v___x_1540_, v_a_1548_, v_structId_1537_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
if (lean_obj_tag(v___x_1549_) == 0)
{
lean_object* v_a_1550_; lean_object* v___x_1552_; uint8_t v_isShared_1553_; uint8_t v_isSharedCheck_1577_; 
v_a_1550_ = lean_ctor_get(v___x_1549_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1552_ = v___x_1549_;
v_isShared_1553_ = v_isSharedCheck_1577_;
goto v_resetjp_1551_;
}
else
{
lean_inc(v_a_1550_);
lean_dec(v___x_1549_);
v___x_1552_ = lean_box(0);
v_isShared_1553_ = v_isSharedCheck_1577_;
goto v_resetjp_1551_;
}
v_resetjp_1551_:
{
if (lean_obj_tag(v_a_1550_) == 1)
{
lean_del_object(v___x_1552_);
if (v_eqTrue_1512_ == 0)
{
lean_object* v_val_1554_; lean_object* v___x_1556_; 
v_val_1554_ = lean_ctor_get(v_a_1550_, 0);
lean_inc_n(v_val_1554_, 2);
lean_dec_ref_known(v_a_1550_, 1);
lean_inc(v_val_1546_);
if (v_isShared_1535_ == 0)
{
lean_ctor_set_tag(v___x_1534_, 3);
lean_ctor_set(v___x_1534_, 1, v_val_1546_);
lean_ctor_set(v___x_1534_, 0, v_val_1554_);
v___x_1556_ = v___x_1534_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_val_1554_);
lean_ctor_set(v_reuseFailAlloc_1564_, 1, v_val_1546_);
v___x_1556_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
lean_object* v___x_1557_; uint8_t v___y_1559_; 
v___x_1557_ = l_Lean_Grind_Linarith_Expr_norm(v___x_1556_);
if (v_strict_1511_ == 0)
{
uint8_t v___x_1563_; 
v___x_1563_ = 1;
v___y_1559_ = v___x_1563_;
goto v___jp_1558_;
}
else
{
v___y_1559_ = v_eqTrue_1512_;
goto v___jp_1558_;
}
v___jp_1558_:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1560_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_1560_, 0, v_e_1508_);
lean_ctor_set(v___x_1560_, 1, v_id_1536_);
lean_ctor_set(v___x_1560_, 2, v_val_1546_);
lean_ctor_set(v___x_1560_, 3, v_val_1554_);
v___x_1561_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1561_, 0, v___x_1557_);
lean_ctor_set(v___x_1561_, 1, v___x_1560_);
lean_ctor_set_uint8(v___x_1561_, sizeof(void*)*2, v___y_1559_);
v___x_1562_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_1561_, v_structId_1537_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
lean_dec(v_structId_1537_);
return v___x_1562_;
}
}
}
else
{
lean_object* v_val_1565_; lean_object* v___x_1567_; 
v_val_1565_ = lean_ctor_get(v_a_1550_, 0);
lean_inc_n(v_val_1565_, 2);
lean_dec_ref_known(v_a_1550_, 1);
lean_inc(v_val_1546_);
if (v_isShared_1535_ == 0)
{
lean_ctor_set_tag(v___x_1534_, 3);
lean_ctor_set(v___x_1534_, 1, v_val_1565_);
lean_ctor_set(v___x_1534_, 0, v_val_1546_);
v___x_1567_ = v___x_1534_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_val_1546_);
lean_ctor_set(v_reuseFailAlloc_1572_, 1, v_val_1565_);
v___x_1567_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_1568_ = l_Lean_Grind_Linarith_Expr_norm(v___x_1567_);
v___x_1569_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1569_, 0, v_e_1508_);
lean_ctor_set(v___x_1569_, 1, v_id_1536_);
lean_ctor_set(v___x_1569_, 2, v_val_1546_);
lean_ctor_set(v___x_1569_, 3, v_val_1565_);
v___x_1570_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1570_, 0, v___x_1568_);
lean_ctor_set(v___x_1570_, 1, v___x_1569_);
lean_ctor_set_uint8(v___x_1570_, sizeof(void*)*2, v_strict_1511_);
v___x_1571_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_1570_, v_structId_1537_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
lean_dec(v_structId_1537_);
return v___x_1571_;
}
}
}
else
{
lean_object* v___x_1573_; lean_object* v___x_1575_; 
lean_dec(v_a_1550_);
lean_dec(v_val_1546_);
lean_dec(v_structId_1537_);
lean_dec(v_id_1536_);
lean_del_object(v___x_1534_);
lean_dec_ref(v_e_1508_);
v___x_1573_ = lean_box(0);
if (v_isShared_1553_ == 0)
{
lean_ctor_set(v___x_1552_, 0, v___x_1573_);
v___x_1575_ = v___x_1552_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v___x_1573_);
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
lean_dec(v_val_1546_);
lean_dec(v_structId_1537_);
lean_dec(v_id_1536_);
lean_del_object(v___x_1534_);
lean_dec_ref(v_e_1508_);
v_a_1578_ = lean_ctor_get(v___x_1549_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1580_ = v___x_1549_;
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v___x_1549_);
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
else
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1593_; 
lean_dec(v_val_1546_);
lean_dec(v_structId_1537_);
lean_dec(v_id_1536_);
lean_del_object(v___x_1534_);
lean_dec(v_fst_1532_);
lean_dec_ref(v_e_1508_);
v_a_1586_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1588_ = v___x_1547_;
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v___x_1547_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
if (v_isShared_1589_ == 0)
{
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_a_1586_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
return v___x_1591_;
}
}
}
}
else
{
lean_object* v___x_1594_; lean_object* v___x_1596_; 
lean_dec(v_a_1542_);
lean_dec(v_structId_1537_);
lean_dec(v_id_1536_);
lean_del_object(v___x_1534_);
lean_dec(v_fst_1532_);
lean_dec_ref(v_rhs_1510_);
lean_dec_ref(v_e_1508_);
v___x_1594_ = lean_box(0);
if (v_isShared_1545_ == 0)
{
lean_ctor_set(v___x_1544_, 0, v___x_1594_);
v___x_1596_ = v___x_1544_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v___x_1594_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
}
}
else
{
lean_object* v_a_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1606_; 
lean_dec(v_structId_1537_);
lean_dec(v_id_1536_);
lean_del_object(v___x_1534_);
lean_dec(v_fst_1532_);
lean_dec_ref(v_rhs_1510_);
lean_dec_ref(v_e_1508_);
v_a_1599_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1601_ = v___x_1541_;
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_a_1599_);
lean_dec(v___x_1541_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1604_; 
if (v_isShared_1602_ == 0)
{
v___x_1604_ = v___x_1601_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_a_1599_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
return v___x_1604_;
}
}
}
}
else
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
lean_dec(v_structId_1537_);
lean_dec(v_id_1536_);
lean_del_object(v___x_1534_);
lean_dec(v_fst_1532_);
lean_dec(v_fst_1529_);
lean_dec_ref(v_rhs_1510_);
lean_dec_ref(v_e_1508_);
v_a_1607_ = lean_ctor_get(v___x_1538_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1609_ = v___x_1538_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1538_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1607_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
}
}
else
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1624_; 
lean_dec(v_fst_1529_);
lean_dec(v_a_1526_);
lean_dec_ref(v_rhs_1510_);
lean_dec_ref(v_lhs_1509_);
lean_dec_ref(v_e_1508_);
v_a_1617_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1619_ = v___x_1530_;
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v___x_1530_);
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
lean_dec(v_a_1526_);
lean_dec_ref(v_rhs_1510_);
lean_dec_ref(v_lhs_1509_);
lean_dec_ref(v_e_1508_);
v_a_1625_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1627_ = v___x_1527_;
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1527_);
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
else
{
lean_object* v_a_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1640_; 
lean_dec_ref(v_rhs_1510_);
lean_dec_ref(v_lhs_1509_);
lean_dec_ref(v_e_1508_);
v_a_1633_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1635_ = v___x_1525_;
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_a_1633_);
lean_dec(v___x_1525_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1638_; 
if (v_isShared_1636_ == 0)
{
v___x_1638_ = v___x_1635_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_a_1633_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateNatModuleIneq___boxed(lean_object** _args){
lean_object* v_e_1641_ = _args[0];
lean_object* v_lhs_1642_ = _args[1];
lean_object* v_rhs_1643_ = _args[2];
lean_object* v_strict_1644_ = _args[3];
lean_object* v_eqTrue_1645_ = _args[4];
lean_object* v_a_1646_ = _args[5];
lean_object* v_a_1647_ = _args[6];
lean_object* v_a_1648_ = _args[7];
lean_object* v_a_1649_ = _args[8];
lean_object* v_a_1650_ = _args[9];
lean_object* v_a_1651_ = _args[10];
lean_object* v_a_1652_ = _args[11];
lean_object* v_a_1653_ = _args[12];
lean_object* v_a_1654_ = _args[13];
lean_object* v_a_1655_ = _args[14];
lean_object* v_a_1656_ = _args[15];
lean_object* v_a_1657_ = _args[16];
_start:
{
uint8_t v_strict_boxed_1658_; uint8_t v_eqTrue_boxed_1659_; lean_object* v_res_1660_; 
v_strict_boxed_1658_ = lean_unbox(v_strict_1644_);
v_eqTrue_boxed_1659_ = lean_unbox(v_eqTrue_1645_);
v_res_1660_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateNatModuleIneq(v_e_1641_, v_lhs_1642_, v_rhs_1643_, v_strict_boxed_1658_, v_eqTrue_boxed_1659_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_, v_a_1654_, v_a_1655_, v_a_1656_);
lean_dec(v_a_1656_);
lean_dec_ref(v_a_1655_);
lean_dec(v_a_1654_);
lean_dec_ref(v_a_1653_);
lean_dec(v_a_1652_);
lean_dec_ref(v_a_1651_);
lean_dec(v_a_1650_);
lean_dec_ref(v_a_1649_);
lean_dec(v_a_1648_);
lean_dec(v_a_1647_);
lean_dec(v_a_1646_);
return v_res_1660_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0(lean_object* v_x_1661_, lean_object* v_x_1662_){
_start:
{
if (lean_obj_tag(v_x_1661_) == 0)
{
if (lean_obj_tag(v_x_1662_) == 0)
{
uint8_t v___x_1663_; 
v___x_1663_ = 1;
return v___x_1663_;
}
else
{
uint8_t v___x_1664_; 
v___x_1664_ = 0;
return v___x_1664_;
}
}
else
{
if (lean_obj_tag(v_x_1662_) == 0)
{
uint8_t v___x_1665_; 
v___x_1665_ = 0;
return v___x_1665_;
}
else
{
lean_object* v_val_1666_; lean_object* v_val_1667_; uint8_t v___x_1668_; 
v_val_1666_ = lean_ctor_get(v_x_1661_, 0);
v_val_1667_ = lean_ctor_get(v_x_1662_, 0);
v___x_1668_ = lean_expr_eqv(v_val_1666_, v_val_1667_);
return v___x_1668_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0___boxed(lean_object* v_x_1669_, lean_object* v_x_1670_){
_start:
{
uint8_t v_res_1671_; lean_object* v_r_1672_; 
v_res_1671_ = l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0(v_x_1669_, v_x_1670_);
lean_dec(v_x_1670_);
lean_dec(v_x_1669_);
v_r_1672_ = lean_box(v_res_1671_);
return v_r_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_propagateIneq(lean_object* v_e_1673_, uint8_t v_eqTrue_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_){
_start:
{
lean_object* v___x_1686_; 
v___x_1686_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_1677_);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1880_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1689_ = v___x_1686_;
v_isShared_1690_ = v_isSharedCheck_1880_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_a_1687_);
lean_dec(v___x_1686_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1880_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
uint8_t v_linarith_1691_; 
v_linarith_1691_ = lean_ctor_get_uint8(v_a_1687_, sizeof(void*)*14 + 22);
lean_dec(v_a_1687_);
if (v_linarith_1691_ == 0)
{
lean_object* v___x_1692_; lean_object* v___x_1694_; 
lean_dec_ref(v_e_1673_);
v___x_1692_ = lean_box(0);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 0, v___x_1692_);
v___x_1694_ = v___x_1689_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v___x_1692_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
else
{
lean_object* v___x_1696_; lean_object* v___x_1697_; uint8_t v___x_1698_; 
v___x_1696_ = l_Lean_Expr_getAppNumArgs(v_e_1673_);
v___x_1697_ = lean_unsigned_to_nat(4u);
v___x_1698_ = lean_nat_dec_eq(v___x_1696_, v___x_1697_);
if (v___x_1698_ == 0)
{
lean_object* v___x_1699_; lean_object* v___x_1701_; 
lean_dec(v___x_1696_);
lean_dec_ref(v_e_1673_);
v___x_1699_ = lean_box(0);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 0, v___x_1699_);
v___x_1701_ = v___x_1689_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v___x_1699_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
else
{
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; uint8_t v_strict_1717_; lean_object* v___y_1718_; lean_object* v___y_1719_; lean_object* v___y_1720_; lean_object* v___y_1721_; lean_object* v___y_1722_; lean_object* v___y_1723_; lean_object* v___y_1724_; lean_object* v___y_1725_; lean_object* v___y_1726_; lean_object* v___y_1727_; lean_object* v___y_1728_; lean_object* v___x_1742_; 
lean_del_object(v___x_1689_);
v___x_1703_ = lean_unsigned_to_nat(1u);
v___x_1704_ = lean_nat_sub(v___x_1696_, v___x_1703_);
lean_inc(v___x_1704_);
v___x_1705_ = l_Lean_Expr_getRevArg_x21(v_e_1673_, v___x_1704_);
v___x_1706_ = lean_nat_sub(v___x_1704_, v___x_1703_);
lean_dec(v___x_1704_);
v___x_1707_ = l_Lean_Expr_getRevArg_x21(v_e_1673_, v___x_1706_);
v___x_1708_ = lean_unsigned_to_nat(2u);
v___x_1709_ = lean_nat_sub(v___x_1696_, v___x_1708_);
v___x_1710_ = lean_nat_sub(v___x_1709_, v___x_1703_);
lean_dec(v___x_1709_);
v___x_1711_ = l_Lean_Expr_getRevArg_x21(v_e_1673_, v___x_1710_);
v___x_1712_ = lean_unsigned_to_nat(3u);
v___x_1713_ = lean_nat_sub(v___x_1696_, v___x_1712_);
lean_dec(v___x_1696_);
v___x_1714_ = lean_nat_sub(v___x_1713_, v___x_1703_);
lean_dec(v___x_1713_);
v___x_1715_ = l_Lean_Expr_getRevArg_x21(v_e_1673_, v___x_1714_);
lean_inc_ref(v___x_1705_);
v___x_1742_ = l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(v___x_1705_, v_a_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1871_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1745_ = v___x_1742_;
v_isShared_1746_ = v_isSharedCheck_1871_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1742_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1871_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
if (lean_obj_tag(v_a_1743_) == 1)
{
lean_object* v_val_1747_; lean_object* v___x_1748_; 
lean_del_object(v___x_1745_);
lean_dec_ref(v___x_1705_);
v_val_1747_ = lean_ctor_get(v_a_1743_, 0);
lean_inc(v_val_1747_);
lean_dec_ref_known(v_a_1743_, 1);
v___x_1748_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_val_1747_, v_a_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1762_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1751_ = v___x_1748_;
v_isShared_1752_ = v_isSharedCheck_1762_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1748_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1762_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v_leFn_x3f_1753_; lean_object* v_ltFn_x3f_1754_; uint8_t v___x_1755_; 
v_leFn_x3f_1753_ = lean_ctor_get(v_a_1749_, 20);
lean_inc(v_leFn_x3f_1753_);
v_ltFn_x3f_1754_ = lean_ctor_get(v_a_1749_, 21);
lean_inc(v_ltFn_x3f_1754_);
lean_dec(v_a_1749_);
v___x_1755_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_isInstOf(v_leFn_x3f_1753_, v___x_1707_);
lean_dec(v_leFn_x3f_1753_);
if (v___x_1755_ == 0)
{
uint8_t v___x_1756_; 
v___x_1756_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_isInstOf(v_ltFn_x3f_1754_, v___x_1707_);
lean_dec_ref(v___x_1707_);
lean_dec(v_ltFn_x3f_1754_);
if (v___x_1756_ == 0)
{
lean_object* v___x_1757_; lean_object* v___x_1759_; 
lean_dec(v_val_1747_);
lean_dec_ref(v___x_1715_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v_e_1673_);
v___x_1757_ = lean_box(0);
if (v_isShared_1752_ == 0)
{
lean_ctor_set(v___x_1751_, 0, v___x_1757_);
v___x_1759_ = v___x_1751_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v___x_1757_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
else
{
lean_del_object(v___x_1751_);
v_strict_1717_ = v___x_1698_;
v___y_1718_ = v_val_1747_;
v___y_1719_ = v_a_1675_;
v___y_1720_ = v_a_1676_;
v___y_1721_ = v_a_1677_;
v___y_1722_ = v_a_1678_;
v___y_1723_ = v_a_1679_;
v___y_1724_ = v_a_1680_;
v___y_1725_ = v_a_1681_;
v___y_1726_ = v_a_1682_;
v___y_1727_ = v_a_1683_;
v___y_1728_ = v_a_1684_;
goto v___jp_1716_;
}
}
else
{
uint8_t v___x_1761_; 
lean_dec(v_ltFn_x3f_1754_);
lean_del_object(v___x_1751_);
lean_dec_ref(v___x_1707_);
v___x_1761_ = 0;
v_strict_1717_ = v___x_1761_;
v___y_1718_ = v_val_1747_;
v___y_1719_ = v_a_1675_;
v___y_1720_ = v_a_1676_;
v___y_1721_ = v_a_1677_;
v___y_1722_ = v_a_1678_;
v___y_1723_ = v_a_1679_;
v___y_1724_ = v_a_1680_;
v___y_1725_ = v_a_1681_;
v___y_1726_ = v_a_1682_;
v___y_1727_ = v_a_1683_;
v___y_1728_ = v_a_1684_;
goto v___jp_1716_;
}
}
}
else
{
lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1770_; 
lean_dec(v_val_1747_);
lean_dec_ref(v___x_1715_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v_e_1673_);
v_a_1763_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1765_ = v___x_1748_;
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v___x_1748_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1768_; 
if (v_isShared_1766_ == 0)
{
v___x_1768_ = v___x_1765_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_a_1763_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
else
{
lean_object* v___x_1771_; 
lean_dec(v_a_1743_);
v___x_1771_ = l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f(v___x_1705_, v_a_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1862_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1774_ = v___x_1771_;
v_isShared_1775_ = v_isSharedCheck_1862_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_a_1772_);
lean_dec(v___x_1771_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1862_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
if (lean_obj_tag(v_a_1772_) == 1)
{
lean_object* v_val_1776_; lean_object* v___x_1777_; 
v_val_1776_ = lean_ctor_get(v_a_1772_, 0);
lean_inc(v_val_1776_);
lean_dec_ref_known(v_a_1772_, 1);
v___x_1777_ = l_Lean_Meta_Grind_Arith_Linear_getNatStruct(v_val_1776_, v_a_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
if (lean_obj_tag(v___x_1777_) == 0)
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1849_; 
v_a_1778_ = lean_ctor_get(v___x_1777_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1780_ = v___x_1777_;
v_isShared_1781_ = v_isSharedCheck_1849_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1777_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1849_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v_leInst_x3f_1787_; lean_object* v_ltInst_x3f_1788_; lean_object* v_lawfulOrderLTInst_x3f_1789_; lean_object* v_isPreorderInst_x3f_1790_; lean_object* v_orderedAddInst_x3f_1791_; lean_object* v_isLinearInst_x3f_1792_; lean_object* v___y_1794_; lean_object* v___y_1795_; lean_object* v___y_1796_; lean_object* v___y_1797_; lean_object* v___y_1798_; lean_object* v___y_1799_; uint8_t v___y_1800_; lean_object* v___y_1801_; lean_object* v___y_1802_; lean_object* v___y_1803_; lean_object* v___y_1804_; lean_object* v___y_1805_; lean_object* v___y_1812_; lean_object* v___y_1813_; lean_object* v___y_1814_; lean_object* v___y_1815_; lean_object* v___y_1816_; lean_object* v___y_1817_; uint8_t v___y_1818_; lean_object* v___y_1819_; lean_object* v___y_1820_; lean_object* v___y_1821_; lean_object* v___y_1822_; lean_object* v___y_1823_; uint8_t v___y_1824_; uint8_t v___y_1827_; uint8_t v___y_1847_; 
v_leInst_x3f_1787_ = lean_ctor_get(v_a_1778_, 5);
lean_inc(v_leInst_x3f_1787_);
v_ltInst_x3f_1788_ = lean_ctor_get(v_a_1778_, 6);
lean_inc(v_ltInst_x3f_1788_);
v_lawfulOrderLTInst_x3f_1789_ = lean_ctor_get(v_a_1778_, 7);
lean_inc(v_lawfulOrderLTInst_x3f_1789_);
v_isPreorderInst_x3f_1790_ = lean_ctor_get(v_a_1778_, 8);
lean_inc(v_isPreorderInst_x3f_1790_);
v_orderedAddInst_x3f_1791_ = lean_ctor_get(v_a_1778_, 9);
lean_inc(v_orderedAddInst_x3f_1791_);
v_isLinearInst_x3f_1792_ = lean_ctor_get(v_a_1778_, 10);
lean_inc(v_isLinearInst_x3f_1792_);
lean_dec(v_a_1778_);
if (lean_obj_tag(v_leInst_x3f_1787_) == 0)
{
lean_dec(v_isPreorderInst_x3f_1790_);
v___y_1847_ = v___x_1698_;
goto v___jp_1846_;
}
else
{
if (lean_obj_tag(v_isPreorderInst_x3f_1790_) == 0)
{
v___y_1847_ = v___x_1698_;
goto v___jp_1846_;
}
else
{
uint8_t v___x_1848_; 
lean_dec_ref_known(v_isPreorderInst_x3f_1790_, 1);
v___x_1848_ = 0;
v___y_1827_ = v___x_1848_;
goto v___jp_1826_;
}
}
v___jp_1782_:
{
lean_object* v___x_1783_; lean_object* v___x_1785_; 
v___x_1783_ = lean_box(0);
if (v_isShared_1781_ == 0)
{
lean_ctor_set(v___x_1780_, 0, v___x_1783_);
v___x_1785_ = v___x_1780_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v___x_1783_);
v___x_1785_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
return v___x_1785_;
}
}
v___jp_1793_:
{
if (lean_obj_tag(v_isLinearInst_x3f_1792_) == 0)
{
lean_object* v___x_1806_; lean_object* v___x_1808_; 
lean_dec(v___y_1795_);
lean_dec_ref(v___x_1715_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v_e_1673_);
v___x_1806_ = lean_box(0);
if (v_isShared_1775_ == 0)
{
lean_ctor_set(v___x_1774_, 0, v___x_1806_);
v___x_1808_ = v___x_1774_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v___x_1806_);
v___x_1808_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
return v___x_1808_;
}
}
else
{
lean_object* v___x_1810_; 
lean_dec_ref_known(v_isLinearInst_x3f_1792_, 1);
lean_del_object(v___x_1774_);
v___x_1810_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateNatModuleIneq(v_e_1673_, v___x_1711_, v___x_1715_, v___y_1800_, v_eqTrue_1674_, v___y_1795_, v___y_1798_, v___y_1804_, v___y_1796_, v___y_1794_, v___y_1801_, v___y_1797_, v___y_1805_, v___y_1802_, v___y_1799_, v___y_1803_);
lean_dec(v___y_1795_);
return v___x_1810_;
}
}
v___jp_1811_:
{
if (v_eqTrue_1674_ == 0)
{
v___y_1794_ = v___y_1812_;
v___y_1795_ = v___y_1813_;
v___y_1796_ = v___y_1814_;
v___y_1797_ = v___y_1815_;
v___y_1798_ = v___y_1816_;
v___y_1799_ = v___y_1817_;
v___y_1800_ = v___y_1818_;
v___y_1801_ = v___y_1819_;
v___y_1802_ = v___y_1820_;
v___y_1803_ = v___y_1821_;
v___y_1804_ = v___y_1822_;
v___y_1805_ = v___y_1823_;
goto v___jp_1793_;
}
else
{
if (v___y_1824_ == 0)
{
lean_object* v___x_1825_; 
lean_dec(v_isLinearInst_x3f_1792_);
lean_del_object(v___x_1774_);
v___x_1825_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateNatModuleIneq(v_e_1673_, v___x_1711_, v___x_1715_, v___y_1818_, v_eqTrue_1674_, v___y_1813_, v___y_1816_, v___y_1822_, v___y_1814_, v___y_1812_, v___y_1819_, v___y_1815_, v___y_1823_, v___y_1820_, v___y_1817_, v___y_1821_);
lean_dec(v___y_1813_);
return v___x_1825_;
}
else
{
v___y_1794_ = v___y_1812_;
v___y_1795_ = v___y_1813_;
v___y_1796_ = v___y_1814_;
v___y_1797_ = v___y_1815_;
v___y_1798_ = v___y_1816_;
v___y_1799_ = v___y_1817_;
v___y_1800_ = v___y_1818_;
v___y_1801_ = v___y_1819_;
v___y_1802_ = v___y_1820_;
v___y_1803_ = v___y_1821_;
v___y_1804_ = v___y_1822_;
v___y_1805_ = v___y_1823_;
goto v___jp_1793_;
}
}
}
v___jp_1826_:
{
if (lean_obj_tag(v_orderedAddInst_x3f_1791_) == 0)
{
lean_dec(v_isLinearInst_x3f_1792_);
lean_dec(v_lawfulOrderLTInst_x3f_1789_);
lean_dec(v_ltInst_x3f_1788_);
lean_dec(v_leInst_x3f_1787_);
lean_dec(v_val_1776_);
lean_del_object(v___x_1774_);
lean_del_object(v___x_1745_);
lean_dec_ref(v___x_1715_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v_e_1673_);
goto v___jp_1782_;
}
else
{
lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1844_; 
lean_del_object(v___x_1780_);
v_isSharedCheck_1844_ = !lean_is_exclusive(v_orderedAddInst_x3f_1791_);
if (v_isSharedCheck_1844_ == 0)
{
lean_object* v_unused_1845_; 
v_unused_1845_ = lean_ctor_get(v_orderedAddInst_x3f_1791_, 0);
lean_dec(v_unused_1845_);
v___x_1829_ = v_orderedAddInst_x3f_1791_;
v_isShared_1830_ = v_isSharedCheck_1844_;
goto v_resetjp_1828_;
}
else
{
lean_dec(v_orderedAddInst_x3f_1791_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1844_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1832_; 
if (v_isShared_1830_ == 0)
{
lean_ctor_set(v___x_1829_, 0, v___x_1707_);
v___x_1832_ = v___x_1829_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v___x_1707_);
v___x_1832_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
uint8_t v___x_1833_; 
v___x_1833_ = l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0(v___x_1832_, v_leInst_x3f_1787_);
lean_dec(v_leInst_x3f_1787_);
if (v___x_1833_ == 0)
{
uint8_t v___x_1834_; 
v___x_1834_ = l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0(v___x_1832_, v_ltInst_x3f_1788_);
lean_dec(v_ltInst_x3f_1788_);
lean_dec_ref(v___x_1832_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; lean_object* v___x_1837_; 
lean_dec(v_isLinearInst_x3f_1792_);
lean_dec(v_lawfulOrderLTInst_x3f_1789_);
lean_dec(v_val_1776_);
lean_del_object(v___x_1774_);
lean_dec_ref(v___x_1715_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v_e_1673_);
v___x_1835_ = lean_box(0);
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 0, v___x_1835_);
v___x_1837_ = v___x_1745_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v___x_1835_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
else
{
if (v___x_1698_ == 0)
{
lean_dec(v_lawfulOrderLTInst_x3f_1789_);
lean_del_object(v___x_1745_);
v___y_1812_ = v_a_1678_;
v___y_1813_ = v_val_1776_;
v___y_1814_ = v_a_1677_;
v___y_1815_ = v_a_1680_;
v___y_1816_ = v_a_1675_;
v___y_1817_ = v_a_1683_;
v___y_1818_ = v___x_1698_;
v___y_1819_ = v_a_1679_;
v___y_1820_ = v_a_1682_;
v___y_1821_ = v_a_1684_;
v___y_1822_ = v_a_1676_;
v___y_1823_ = v_a_1681_;
v___y_1824_ = v___y_1827_;
goto v___jp_1811_;
}
else
{
if (lean_obj_tag(v_lawfulOrderLTInst_x3f_1789_) == 0)
{
lean_object* v___x_1839_; lean_object* v___x_1841_; 
lean_dec(v_isLinearInst_x3f_1792_);
lean_dec(v_val_1776_);
lean_del_object(v___x_1774_);
lean_dec_ref(v___x_1715_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v_e_1673_);
v___x_1839_ = lean_box(0);
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 0, v___x_1839_);
v___x_1841_ = v___x_1745_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v___x_1839_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
return v___x_1841_;
}
}
else
{
lean_dec_ref_known(v_lawfulOrderLTInst_x3f_1789_, 1);
lean_del_object(v___x_1745_);
v___y_1812_ = v_a_1678_;
v___y_1813_ = v_val_1776_;
v___y_1814_ = v_a_1677_;
v___y_1815_ = v_a_1680_;
v___y_1816_ = v_a_1675_;
v___y_1817_ = v_a_1683_;
v___y_1818_ = v___x_1698_;
v___y_1819_ = v_a_1679_;
v___y_1820_ = v_a_1682_;
v___y_1821_ = v_a_1684_;
v___y_1822_ = v_a_1676_;
v___y_1823_ = v_a_1681_;
v___y_1824_ = v___y_1827_;
goto v___jp_1811_;
}
}
}
}
else
{
lean_dec_ref(v___x_1832_);
lean_dec(v_lawfulOrderLTInst_x3f_1789_);
lean_dec(v_ltInst_x3f_1788_);
lean_del_object(v___x_1745_);
v___y_1812_ = v_a_1678_;
v___y_1813_ = v_val_1776_;
v___y_1814_ = v_a_1677_;
v___y_1815_ = v_a_1680_;
v___y_1816_ = v_a_1675_;
v___y_1817_ = v_a_1683_;
v___y_1818_ = v___y_1827_;
v___y_1819_ = v_a_1679_;
v___y_1820_ = v_a_1682_;
v___y_1821_ = v_a_1684_;
v___y_1822_ = v_a_1676_;
v___y_1823_ = v_a_1681_;
v___y_1824_ = v___y_1827_;
goto v___jp_1811_;
}
}
}
}
}
v___jp_1846_:
{
if (v___y_1847_ == 0)
{
v___y_1827_ = v___y_1847_;
goto v___jp_1826_;
}
else
{
lean_dec(v_isLinearInst_x3f_1792_);
lean_dec(v_orderedAddInst_x3f_1791_);
lean_dec(v_lawfulOrderLTInst_x3f_1789_);
lean_dec(v_ltInst_x3f_1788_);
lean_dec(v_leInst_x3f_1787_);
lean_dec(v_val_1776_);
lean_del_object(v___x_1774_);
lean_del_object(v___x_1745_);
lean_dec_ref(v___x_1715_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v_e_1673_);
goto v___jp_1782_;
}
}
}
}
else
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
lean_dec(v_val_1776_);
lean_del_object(v___x_1774_);
lean_del_object(v___x_1745_);
lean_dec_ref(v___x_1715_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v_e_1673_);
v_a_1850_ = lean_ctor_get(v___x_1777_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1852_ = v___x_1777_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1777_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_a_1850_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
}
else
{
lean_object* v___x_1858_; lean_object* v___x_1860_; 
lean_dec(v_a_1772_);
lean_del_object(v___x_1745_);
lean_dec_ref(v___x_1715_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v_e_1673_);
v___x_1858_ = lean_box(0);
if (v_isShared_1775_ == 0)
{
lean_ctor_set(v___x_1774_, 0, v___x_1858_);
v___x_1860_ = v___x_1774_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v___x_1858_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
}
}
}
}
else
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1870_; 
lean_del_object(v___x_1745_);
lean_dec_ref(v___x_1715_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v_e_1673_);
v_a_1863_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1865_ = v___x_1771_;
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v___x_1771_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1868_; 
if (v_isShared_1866_ == 0)
{
v___x_1868_ = v___x_1865_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_a_1863_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
return v___x_1868_;
}
}
}
}
}
}
else
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1879_; 
lean_dec_ref(v___x_1715_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v___x_1705_);
lean_dec_ref(v_e_1673_);
v_a_1872_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1874_ = v___x_1742_;
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1742_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1877_; 
if (v_isShared_1875_ == 0)
{
v___x_1877_ = v___x_1874_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_a_1872_);
v___x_1877_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
return v___x_1877_;
}
}
}
v___jp_1716_:
{
lean_object* v___x_1729_; 
v___x_1729_ = l_Lean_Meta_Grind_Arith_Linear_isOrderedCommRing(v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
if (lean_obj_tag(v___x_1729_) == 0)
{
lean_object* v_a_1730_; uint8_t v___x_1731_; 
v_a_1730_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_a_1730_);
lean_dec_ref_known(v___x_1729_, 1);
v___x_1731_ = lean_unbox(v_a_1730_);
lean_dec(v_a_1730_);
if (v___x_1731_ == 0)
{
lean_object* v___x_1732_; 
v___x_1732_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateIntModuleIneq(v_e_1673_, v___x_1711_, v___x_1715_, v_strict_1717_, v_eqTrue_1674_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
lean_dec(v___y_1718_);
return v___x_1732_;
}
else
{
lean_object* v___x_1733_; 
v___x_1733_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq(v_e_1673_, v___x_1711_, v___x_1715_, v_strict_1717_, v_eqTrue_1674_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
lean_dec(v___y_1718_);
return v___x_1733_;
}
}
else
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1741_; 
lean_dec(v___y_1718_);
lean_dec_ref(v___x_1715_);
lean_dec_ref(v___x_1711_);
lean_dec_ref(v_e_1673_);
v_a_1734_ = lean_ctor_get(v___x_1729_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1736_ = v___x_1729_;
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1729_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1739_; 
if (v_isShared_1737_ == 0)
{
v___x_1739_ = v___x_1736_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_a_1734_);
v___x_1739_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
return v___x_1739_;
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
lean_object* v_a_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1888_; 
lean_dec_ref(v_e_1673_);
v_a_1881_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1888_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1883_ = v___x_1686_;
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_a_1881_);
lean_dec(v___x_1686_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
lean_object* v___x_1886_; 
if (v_isShared_1884_ == 0)
{
v___x_1886_ = v___x_1883_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_a_1881_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_propagateIneq___boxed(lean_object* v_e_1889_, lean_object* v_eqTrue_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_){
_start:
{
uint8_t v_eqTrue_boxed_1902_; lean_object* v_res_1903_; 
v_eqTrue_boxed_1902_ = lean_unbox(v_eqTrue_1890_);
v_res_1903_ = l_Lean_Meta_Grind_Arith_Linear_propagateIneq(v_e_1889_, v_eqTrue_boxed_1902_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_1896_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_);
lean_dec(v_a_1900_);
lean_dec_ref(v_a_1899_);
lean_dec(v_a_1898_);
lean_dec_ref(v_a_1897_);
lean_dec(v_a_1896_);
lean_dec_ref(v_a_1895_);
lean_dec(v_a_1894_);
lean_dec_ref(v_a_1893_);
lean_dec(v_a_1892_);
lean_dec(v_a_1891_);
return v_res_1903_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Den(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Reify(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Proof(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(uint8_t builtin) {
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
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Den(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Reify(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Proof(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(uint8_t builtin) {
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
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(builtin);
}
#ifdef __cplusplus
}
#endif

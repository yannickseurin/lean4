// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.CommRing.RingM
// Imports: public import Lean.Meta.Tactic.Grind.SynthInstance public import Lean.Meta.Tactic.Grind.Arith.CommRing.MonadRing import Lean.Meta.Sym.Arith.Poly
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
lean_object* l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Grind_CommRing_Poly_degree(lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_CommRing_ringExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SolverExtension_markTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_instHashableExprPtr___lam__0___boxed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Meta_Grind_Arith_CommRing_EqCnstr_compare(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instBEqExprPtr___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minKey_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "ring polynomial degree "};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__1;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = " exceeds threshold `(ringMaxDegree := "};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__3;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ")`"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__0_value;
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__1___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__0_value),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__1_value)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "`grind` internal error, invalid ringId"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisorsInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisorsInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_hasChar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_hasChar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "`grind` internal error, ring does not have a characteristic"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCharInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCharInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isField(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isField___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isQueueEmpty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isQueueEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "expression in two different rings"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instBEqExprPtr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instHashableExprPtr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___redArg(lean_object* v_a_1_, lean_object* v_a_2_, lean_object* v_a_3_){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_1_, v_a_3_);
if (lean_obj_tag(v___x_5_) == 0)
{
lean_object* v_a_6_; lean_object* v___x_7_; 
v_a_6_ = lean_ctor_get(v___x_5_, 0);
lean_inc(v_a_6_);
lean_dec_ref_known(v___x_5_, 1);
v___x_7_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_2_);
if (lean_obj_tag(v___x_7_) == 0)
{
lean_object* v_a_8_; lean_object* v___x_10_; uint8_t v_isShared_11_; uint8_t v_isSharedCheck_19_; 
v_a_8_ = lean_ctor_get(v___x_7_, 0);
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_7_);
if (v_isSharedCheck_19_ == 0)
{
v___x_10_ = v___x_7_;
v_isShared_11_ = v_isSharedCheck_19_;
goto v_resetjp_9_;
}
else
{
lean_inc(v_a_8_);
lean_dec(v___x_7_);
v___x_10_ = lean_box(0);
v_isShared_11_ = v_isSharedCheck_19_;
goto v_resetjp_9_;
}
v_resetjp_9_:
{
lean_object* v_ringSteps_12_; lean_object* v_steps_13_; uint8_t v___x_14_; lean_object* v___x_15_; lean_object* v___x_17_; 
v_ringSteps_12_ = lean_ctor_get(v_a_8_, 6);
lean_inc(v_ringSteps_12_);
lean_dec(v_a_8_);
v_steps_13_ = lean_ctor_get(v_a_6_, 12);
lean_inc(v_steps_13_);
lean_dec(v_a_6_);
v___x_14_ = lean_nat_dec_le(v_ringSteps_12_, v_steps_13_);
lean_dec(v_steps_13_);
lean_dec(v_ringSteps_12_);
v___x_15_ = lean_box(v___x_14_);
if (v_isShared_11_ == 0)
{
lean_ctor_set(v___x_10_, 0, v___x_15_);
v___x_17_ = v___x_10_;
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
lean_object* v_a_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_27_; 
lean_dec(v_a_6_);
v_a_20_ = lean_ctor_get(v___x_7_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_7_);
if (v_isSharedCheck_27_ == 0)
{
v___x_22_ = v___x_7_;
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_a_20_);
lean_dec(v___x_7_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_25_; 
if (v_isShared_23_ == 0)
{
v___x_25_ = v___x_22_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_20_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
}
else
{
lean_object* v_a_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_35_; 
v_a_28_ = lean_ctor_get(v___x_5_, 0);
v_isSharedCheck_35_ = !lean_is_exclusive(v___x_5_);
if (v_isSharedCheck_35_ == 0)
{
v___x_30_ = v___x_5_;
v_isShared_31_ = v_isSharedCheck_35_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_a_28_);
lean_dec(v___x_5_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_35_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v___x_33_; 
if (v_isShared_31_ == 0)
{
v___x_33_ = v___x_30_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v_a_28_);
v___x_33_ = v_reuseFailAlloc_34_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
return v___x_33_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___redArg___boxed(lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___redArg(v_a_36_, v_a_37_, v_a_38_);
lean_dec_ref(v_a_38_);
lean_dec_ref(v_a_37_);
lean_dec(v_a_36_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps(lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___redArg(v_a_41_, v_a_43_, v_a_49_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___boxed(lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps(v_a_53_, v_a_54_, v_a_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_);
lean_dec(v_a_62_);
lean_dec_ref(v_a_61_);
lean_dec(v_a_60_);
lean_dec_ref(v_a_59_);
lean_dec(v_a_58_);
lean_dec_ref(v_a_57_);
lean_dec(v_a_56_);
lean_dec_ref(v_a_55_);
lean_dec(v_a_54_);
lean_dec(v_a_53_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___lam__0(uint8_t v___x_65_, lean_object* v_s_66_){
_start:
{
lean_object* v_rings_67_; lean_object* v_typeIdOf_68_; lean_object* v_exprToRingId_69_; lean_object* v_semirings_70_; lean_object* v_stypeIdOf_71_; lean_object* v_exprToSemiringId_72_; lean_object* v_ncRings_73_; lean_object* v_exprToNCRingId_74_; lean_object* v_nctypeIdOf_75_; lean_object* v_ncSemirings_76_; lean_object* v_exprToNCSemiringId_77_; lean_object* v_ncstypeIdOf_78_; lean_object* v_steps_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_86_; 
v_rings_67_ = lean_ctor_get(v_s_66_, 0);
v_typeIdOf_68_ = lean_ctor_get(v_s_66_, 1);
v_exprToRingId_69_ = lean_ctor_get(v_s_66_, 2);
v_semirings_70_ = lean_ctor_get(v_s_66_, 3);
v_stypeIdOf_71_ = lean_ctor_get(v_s_66_, 4);
v_exprToSemiringId_72_ = lean_ctor_get(v_s_66_, 5);
v_ncRings_73_ = lean_ctor_get(v_s_66_, 6);
v_exprToNCRingId_74_ = lean_ctor_get(v_s_66_, 7);
v_nctypeIdOf_75_ = lean_ctor_get(v_s_66_, 8);
v_ncSemirings_76_ = lean_ctor_get(v_s_66_, 9);
v_exprToNCSemiringId_77_ = lean_ctor_get(v_s_66_, 10);
v_ncstypeIdOf_78_ = lean_ctor_get(v_s_66_, 11);
v_steps_79_ = lean_ctor_get(v_s_66_, 12);
v_isSharedCheck_86_ = !lean_is_exclusive(v_s_66_);
if (v_isSharedCheck_86_ == 0)
{
v___x_81_ = v_s_66_;
v_isShared_82_ = v_isSharedCheck_86_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_steps_79_);
lean_inc(v_ncstypeIdOf_78_);
lean_inc(v_exprToNCSemiringId_77_);
lean_inc(v_ncSemirings_76_);
lean_inc(v_nctypeIdOf_75_);
lean_inc(v_exprToNCRingId_74_);
lean_inc(v_ncRings_73_);
lean_inc(v_exprToSemiringId_72_);
lean_inc(v_stypeIdOf_71_);
lean_inc(v_semirings_70_);
lean_inc(v_exprToRingId_69_);
lean_inc(v_typeIdOf_68_);
lean_inc(v_rings_67_);
lean_dec(v_s_66_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_86_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_84_; 
if (v_isShared_82_ == 0)
{
v___x_84_ = v___x_81_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v_rings_67_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v_typeIdOf_68_);
lean_ctor_set(v_reuseFailAlloc_85_, 2, v_exprToRingId_69_);
lean_ctor_set(v_reuseFailAlloc_85_, 3, v_semirings_70_);
lean_ctor_set(v_reuseFailAlloc_85_, 4, v_stypeIdOf_71_);
lean_ctor_set(v_reuseFailAlloc_85_, 5, v_exprToSemiringId_72_);
lean_ctor_set(v_reuseFailAlloc_85_, 6, v_ncRings_73_);
lean_ctor_set(v_reuseFailAlloc_85_, 7, v_exprToNCRingId_74_);
lean_ctor_set(v_reuseFailAlloc_85_, 8, v_nctypeIdOf_75_);
lean_ctor_set(v_reuseFailAlloc_85_, 9, v_ncSemirings_76_);
lean_ctor_set(v_reuseFailAlloc_85_, 10, v_exprToNCSemiringId_77_);
lean_ctor_set(v_reuseFailAlloc_85_, 11, v_ncstypeIdOf_78_);
lean_ctor_set(v_reuseFailAlloc_85_, 12, v_steps_79_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*13, v___x_65_);
return v___x_84_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___lam__0___boxed(lean_object* v___x_87_, lean_object* v_s_88_){
_start:
{
uint8_t v___x_6108__boxed_89_; lean_object* v_res_90_; 
v___x_6108__boxed_89_ = lean_unbox(v___x_87_);
v_res_90_ = l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___lam__0(v___x_6108__boxed_89_, v_s_88_);
return v_res_90_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__1(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__0));
v___x_93_ = l_Lean_stringToMessageData(v___x_92_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__3(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__2));
v___x_96_ = l_Lean_stringToMessageData(v___x_95_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__5(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__4));
v___x_99_ = l_Lean_stringToMessageData(v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg(lean_object* v_p_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_102_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_200_; 
v_a_111_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_200_ == 0)
{
v___x_113_ = v___x_110_;
v_isShared_114_ = v_isSharedCheck_200_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_110_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_200_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v_ringMaxDegree_115_; lean_object* v___x_116_; uint8_t v___x_117_; 
v_ringMaxDegree_115_ = lean_ctor_get(v_a_111_, 7);
lean_inc(v_ringMaxDegree_115_);
lean_dec(v_a_111_);
v___x_116_ = l_Lean_Grind_CommRing_Poly_degree(v_p_100_);
v___x_117_ = lean_nat_dec_le(v_ringMaxDegree_115_, v___x_116_);
lean_dec(v_ringMaxDegree_115_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; lean_object* v___x_120_; 
lean_dec(v___x_116_);
v___x_118_ = lean_box(v___x_117_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_118_);
v___x_120_ = v___x_113_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v___x_118_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
else
{
lean_object* v___x_122_; lean_object* v___f_123_; lean_object* v___x_124_; 
lean_del_object(v___x_113_);
v___x_122_ = lean_box(v___x_117_);
v___f_123_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_123_, 0, v___x_122_);
v___x_124_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_101_, v_a_107_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_191_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_191_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_191_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_191_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
uint8_t v_reportedMaxDegreeIssue_129_; 
v_reportedMaxDegreeIssue_129_ = lean_ctor_get_uint8(v_a_125_, sizeof(void*)*13);
lean_dec(v_a_125_);
if (v_reportedMaxDegreeIssue_129_ == 0)
{
lean_object* v___x_130_; lean_object* v___x_131_; 
lean_del_object(v___x_127_);
v___x_130_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_131_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_130_, v___f_123_, v_a_101_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
lean_dec_ref_known(v___x_131_, 1);
v___x_132_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__1);
v___x_133_ = l_Nat_reprFast(v___x_116_);
v___x_134_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
v___x_135_ = l_Lean_MessageData_ofFormat(v___x_134_);
lean_inc_ref(v___x_135_);
v___x_136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_132_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__3, &l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__3_once, _init_l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__3);
v___x_138_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_136_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
lean_ctor_set(v___x_139_, 1, v___x_135_);
v___x_140_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__5, &l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__5_once, _init_l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___closed__5);
v___x_141_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_139_);
lean_ctor_set(v___x_141_, 1, v___x_140_);
v___x_142_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_103_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_170_; 
v_a_143_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_170_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_170_ == 0)
{
v___x_145_ = v___x_142_;
v_isShared_146_ = v_isSharedCheck_170_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_142_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_170_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
uint8_t v_verbose_147_; 
v_verbose_147_ = lean_ctor_get_uint8(v_a_143_, 0);
lean_dec(v_a_143_);
if (v_verbose_147_ == 0)
{
lean_object* v___x_148_; lean_object* v___x_150_; 
lean_dec_ref_known(v___x_141_, 2);
v___x_148_ = lean_box(v___x_117_);
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 0, v___x_148_);
v___x_150_ = v___x_145_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v___x_148_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
else
{
lean_object* v___x_152_; 
lean_del_object(v___x_145_);
v___x_152_ = l_Lean_Meta_Sym_reportIssue(v___x_141_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
if (lean_obj_tag(v___x_152_) == 0)
{
lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_160_; 
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_152_);
if (v_isSharedCheck_160_ == 0)
{
lean_object* v_unused_161_; 
v_unused_161_ = lean_ctor_get(v___x_152_, 0);
lean_dec(v_unused_161_);
v___x_154_ = v___x_152_;
v_isShared_155_ = v_isSharedCheck_160_;
goto v_resetjp_153_;
}
else
{
lean_dec(v___x_152_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_160_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_156_ = lean_box(v___x_117_);
if (v_isShared_155_ == 0)
{
lean_ctor_set(v___x_154_, 0, v___x_156_);
v___x_158_ = v___x_154_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_156_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
else
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_169_; 
v_a_162_ = lean_ctor_get(v___x_152_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_152_);
if (v_isSharedCheck_169_ == 0)
{
v___x_164_ = v___x_152_;
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_152_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_167_; 
if (v_isShared_165_ == 0)
{
v___x_167_ = v___x_164_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_a_162_);
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
}
}
else
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_178_; 
lean_dec_ref_known(v___x_141_, 2);
v_a_171_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_178_ == 0)
{
v___x_173_ = v___x_142_;
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_142_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_176_; 
if (v_isShared_174_ == 0)
{
v___x_176_ = v___x_173_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_a_171_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
}
else
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_186_; 
lean_dec(v___x_116_);
v_a_179_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_186_ == 0)
{
v___x_181_ = v___x_131_;
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_131_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_184_; 
if (v_isShared_182_ == 0)
{
v___x_184_ = v___x_181_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_a_179_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
else
{
lean_object* v___x_187_; lean_object* v___x_189_; 
lean_dec_ref(v___f_123_);
lean_dec(v___x_116_);
v___x_187_ = lean_box(v___x_117_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v___x_187_);
v___x_189_ = v___x_127_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_187_);
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
else
{
lean_object* v_a_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_199_; 
lean_dec_ref(v___f_123_);
lean_dec(v___x_116_);
v_a_192_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_199_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_199_ == 0)
{
v___x_194_ = v___x_124_;
v_isShared_195_ = v_isSharedCheck_199_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_a_192_);
lean_dec(v___x_124_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_199_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___x_197_; 
if (v_isShared_195_ == 0)
{
v___x_197_ = v___x_194_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v_a_192_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
}
}
}
}
else
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_208_; 
v_a_201_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_208_ == 0)
{
v___x_203_ = v___x_110_;
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_110_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_206_; 
if (v_isShared_204_ == 0)
{
v___x_206_ = v___x_203_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_a_201_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg___boxed(lean_object* v_p_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg(v_p_209_, v_a_210_, v_a_211_, v_a_212_, v_a_213_, v_a_214_, v_a_215_, v_a_216_, v_a_217_);
lean_dec(v_a_217_);
lean_dec_ref(v_a_216_);
lean_dec(v_a_215_);
lean_dec_ref(v_a_214_);
lean_dec(v_a_213_);
lean_dec_ref(v_a_212_);
lean_dec_ref(v_a_211_);
lean_dec(v_a_210_);
lean_dec_ref(v_p_209_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree(lean_object* v_p_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___redArg(v_p_220_, v_a_221_, v_a_223_, v_a_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_, v_a_230_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree___boxed(lean_object* v_p_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lean_Meta_Grind_Arith_CommRing_checkMaxDegree(v_p_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_, v_a_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
lean_dec(v_a_241_);
lean_dec_ref(v_a_240_);
lean_dec(v_a_239_);
lean_dec_ref(v_a_238_);
lean_dec(v_a_237_);
lean_dec_ref(v_a_236_);
lean_dec(v_a_235_);
lean_dec(v_a_234_);
lean_dec_ref(v_p_233_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___lam__0(lean_object* v_n_246_, lean_object* v_s_247_){
_start:
{
lean_object* v_rings_248_; lean_object* v_typeIdOf_249_; lean_object* v_exprToRingId_250_; lean_object* v_semirings_251_; lean_object* v_stypeIdOf_252_; lean_object* v_exprToSemiringId_253_; lean_object* v_ncRings_254_; lean_object* v_exprToNCRingId_255_; lean_object* v_nctypeIdOf_256_; lean_object* v_ncSemirings_257_; lean_object* v_exprToNCSemiringId_258_; lean_object* v_ncstypeIdOf_259_; lean_object* v_steps_260_; uint8_t v_reportedMaxDegreeIssue_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_269_; 
v_rings_248_ = lean_ctor_get(v_s_247_, 0);
v_typeIdOf_249_ = lean_ctor_get(v_s_247_, 1);
v_exprToRingId_250_ = lean_ctor_get(v_s_247_, 2);
v_semirings_251_ = lean_ctor_get(v_s_247_, 3);
v_stypeIdOf_252_ = lean_ctor_get(v_s_247_, 4);
v_exprToSemiringId_253_ = lean_ctor_get(v_s_247_, 5);
v_ncRings_254_ = lean_ctor_get(v_s_247_, 6);
v_exprToNCRingId_255_ = lean_ctor_get(v_s_247_, 7);
v_nctypeIdOf_256_ = lean_ctor_get(v_s_247_, 8);
v_ncSemirings_257_ = lean_ctor_get(v_s_247_, 9);
v_exprToNCSemiringId_258_ = lean_ctor_get(v_s_247_, 10);
v_ncstypeIdOf_259_ = lean_ctor_get(v_s_247_, 11);
v_steps_260_ = lean_ctor_get(v_s_247_, 12);
v_reportedMaxDegreeIssue_261_ = lean_ctor_get_uint8(v_s_247_, sizeof(void*)*13);
v_isSharedCheck_269_ = !lean_is_exclusive(v_s_247_);
if (v_isSharedCheck_269_ == 0)
{
v___x_263_ = v_s_247_;
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_steps_260_);
lean_inc(v_ncstypeIdOf_259_);
lean_inc(v_exprToNCSemiringId_258_);
lean_inc(v_ncSemirings_257_);
lean_inc(v_nctypeIdOf_256_);
lean_inc(v_exprToNCRingId_255_);
lean_inc(v_ncRings_254_);
lean_inc(v_exprToSemiringId_253_);
lean_inc(v_stypeIdOf_252_);
lean_inc(v_semirings_251_);
lean_inc(v_exprToRingId_250_);
lean_inc(v_typeIdOf_249_);
lean_inc(v_rings_248_);
lean_dec(v_s_247_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_265_; lean_object* v___x_267_; 
v___x_265_ = lean_nat_add(v_steps_260_, v_n_246_);
lean_dec(v_steps_260_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 12, v___x_265_);
v___x_267_ = v___x_263_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_rings_248_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v_typeIdOf_249_);
lean_ctor_set(v_reuseFailAlloc_268_, 2, v_exprToRingId_250_);
lean_ctor_set(v_reuseFailAlloc_268_, 3, v_semirings_251_);
lean_ctor_set(v_reuseFailAlloc_268_, 4, v_stypeIdOf_252_);
lean_ctor_set(v_reuseFailAlloc_268_, 5, v_exprToSemiringId_253_);
lean_ctor_set(v_reuseFailAlloc_268_, 6, v_ncRings_254_);
lean_ctor_set(v_reuseFailAlloc_268_, 7, v_exprToNCRingId_255_);
lean_ctor_set(v_reuseFailAlloc_268_, 8, v_nctypeIdOf_256_);
lean_ctor_set(v_reuseFailAlloc_268_, 9, v_ncSemirings_257_);
lean_ctor_set(v_reuseFailAlloc_268_, 10, v_exprToNCSemiringId_258_);
lean_ctor_set(v_reuseFailAlloc_268_, 11, v_ncstypeIdOf_259_);
lean_ctor_set(v_reuseFailAlloc_268_, 12, v___x_265_);
lean_ctor_set_uint8(v_reuseFailAlloc_268_, sizeof(void*)*13, v_reportedMaxDegreeIssue_261_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___lam__0___boxed(lean_object* v_n_270_, lean_object* v_s_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___lam__0(v_n_270_, v_s_271_);
lean_dec(v_n_270_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg(lean_object* v_n_273_, lean_object* v_a_274_){
_start:
{
lean_object* v___f_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___f_276_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_276_, 0, v_n_273_);
v___x_277_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_278_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_277_, v___f_276_, v_a_274_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___boxed(lean_object* v_n_279_, lean_object* v_a_280_, lean_object* v_a_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg(v_n_279_, v_a_280_);
lean_dec(v_a_280_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps(lean_object* v_n_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg(v_n_283_, v_a_284_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___boxed(lean_object* v_n_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lean_Meta_Grind_Arith_CommRing_incSteps(v_n_296_, v_a_297_, v_a_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_, v_a_306_);
lean_dec(v_a_306_);
lean_dec_ref(v_a_305_);
lean_dec(v_a_304_);
lean_dec_ref(v_a_303_);
lean_dec(v_a_302_);
lean_dec_ref(v_a_301_);
lean_dec(v_a_300_);
lean_dec_ref(v_a_299_);
lean_dec(v_a_298_);
lean_dec(v_a_297_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run___redArg(lean_object* v_ringId_309_, lean_object* v_x_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_){
_start:
{
uint8_t v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_322_ = 0;
v___x_323_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_323_, 0, v_ringId_309_);
lean_ctor_set_uint8(v___x_323_, sizeof(void*)*1, v___x_322_);
lean_inc(v_a_320_);
lean_inc_ref(v_a_319_);
lean_inc(v_a_318_);
lean_inc_ref(v_a_317_);
lean_inc(v_a_316_);
lean_inc_ref(v_a_315_);
lean_inc(v_a_314_);
lean_inc_ref(v_a_313_);
lean_inc(v_a_312_);
lean_inc(v_a_311_);
v___x_324_ = lean_apply_12(v_x_310_, v___x_323_, v_a_311_, v_a_312_, v_a_313_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, lean_box(0));
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run___redArg___boxed(lean_object* v_ringId_325_, lean_object* v_x_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_run___redArg(v_ringId_325_, v_x_326_, v_a_327_, v_a_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
lean_dec(v_a_332_);
lean_dec_ref(v_a_331_);
lean_dec(v_a_330_);
lean_dec_ref(v_a_329_);
lean_dec(v_a_328_);
lean_dec(v_a_327_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run(lean_object* v_00_u03b1_339_, lean_object* v_ringId_340_, lean_object* v_x_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
uint8_t v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_353_ = 0;
v___x_354_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_354_, 0, v_ringId_340_);
lean_ctor_set_uint8(v___x_354_, sizeof(void*)*1, v___x_353_);
lean_inc(v_a_351_);
lean_inc_ref(v_a_350_);
lean_inc(v_a_349_);
lean_inc_ref(v_a_348_);
lean_inc(v_a_347_);
lean_inc_ref(v_a_346_);
lean_inc(v_a_345_);
lean_inc_ref(v_a_344_);
lean_inc(v_a_343_);
lean_inc(v_a_342_);
v___x_355_ = lean_apply_12(v_x_341_, v___x_354_, v_a_342_, v_a_343_, v_a_344_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_, lean_box(0));
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run___boxed(lean_object* v_00_u03b1_356_, lean_object* v_ringId_357_, lean_object* v_x_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_run(v_00_u03b1_356_, v_ringId_357_, v_x_358_, v_a_359_, v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_);
lean_dec(v_a_368_);
lean_dec_ref(v_a_367_);
lean_dec(v_a_366_);
lean_dec_ref(v_a_365_);
lean_dec(v_a_364_);
lean_dec_ref(v_a_363_);
lean_dec(v_a_362_);
lean_dec_ref(v_a_361_);
lean_dec(v_a_360_);
lean_dec(v_a_359_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId___redArg(lean_object* v_a_371_){
_start:
{
lean_object* v_ringId_373_; lean_object* v___x_374_; 
v_ringId_373_ = lean_ctor_get(v_a_371_, 0);
lean_inc(v_ringId_373_);
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v_ringId_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId___redArg___boxed(lean_object* v_a_375_, lean_object* v_a_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lean_Meta_Grind_Arith_CommRing_getRingId___redArg(v_a_375_);
lean_dec_ref(v_a_375_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId(lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_){
_start:
{
lean_object* v_ringId_390_; lean_object* v___x_391_; 
v_ringId_390_ = lean_ctor_get(v_a_378_, 0);
lean_inc(v_ringId_390_);
v___x_391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_391_, 0, v_ringId_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId___boxed(lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_Meta_Grind_Arith_CommRing_getRingId(v_a_392_, v_a_393_, v_a_394_, v_a_395_, v_a_396_, v_a_397_, v_a_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_);
lean_dec(v_a_402_);
lean_dec_ref(v_a_401_);
lean_dec(v_a_400_);
lean_dec_ref(v_a_399_);
lean_dec(v_a_398_);
lean_dec_ref(v_a_397_);
lean_dec(v_a_396_);
lean_dec_ref(v_a_395_);
lean_dec(v_a_394_);
lean_dec(v_a_393_);
lean_dec_ref(v_a_392_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__0(lean_object* v_e_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lean_Meta_Sym_canon(v_e_405_, v___y_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_);
if (lean_obj_tag(v___x_418_) == 0)
{
lean_object* v_a_419_; lean_object* v___x_420_; 
v_a_419_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_419_);
lean_dec_ref_known(v___x_418_, 1);
v___x_420_ = l_Lean_Meta_Sym_shareCommon(v_a_419_, v___y_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_);
return v___x_420_;
}
else
{
return v___x_418_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__0___boxed(lean_object* v_e_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__0(v_e_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_);
lean_dec(v___y_432_);
lean_dec_ref(v___y_431_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec(v___y_424_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__1(lean_object* v_e_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_e_435_, v___y_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__1___boxed(lean_object* v_e_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__1(v_e_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec(v___y_452_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0_spec__0(lean_object* v_msgData_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_){
_start:
{
lean_object* v___x_475_; lean_object* v_env_476_; lean_object* v___x_477_; lean_object* v_toCold_478_; lean_object* v_mctx_479_; lean_object* v_lctx_480_; lean_object* v_options_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_475_ = lean_st_ref_get(v___y_473_);
v_env_476_ = lean_ctor_get(v___x_475_, 0);
lean_inc_ref(v_env_476_);
lean_dec(v___x_475_);
v___x_477_ = lean_st_ref_get(v___y_471_);
v_toCold_478_ = lean_ctor_get(v___y_472_, 0);
v_mctx_479_ = lean_ctor_get(v___x_477_, 0);
lean_inc_ref(v_mctx_479_);
lean_dec(v___x_477_);
v_lctx_480_ = lean_ctor_get(v___y_470_, 2);
v_options_481_ = lean_ctor_get(v_toCold_478_, 2);
lean_inc_ref(v_options_481_);
lean_inc_ref(v_lctx_480_);
v___x_482_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_482_, 0, v_env_476_);
lean_ctor_set(v___x_482_, 1, v_mctx_479_);
lean_ctor_set(v___x_482_, 2, v_lctx_480_);
lean_ctor_set(v___x_482_, 3, v_options_481_);
v___x_483_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
lean_ctor_set(v___x_483_, 1, v_msgData_469_);
v___x_484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0_spec__0___boxed(lean_object* v_msgData_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0_spec__0(v_msgData_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg(lean_object* v_msg_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
lean_object* v_ref_498_; lean_object* v___x_499_; lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_508_; 
v_ref_498_ = lean_ctor_get(v___y_495_, 2);
v___x_499_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0_spec__0(v_msg_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_);
v_a_500_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_508_ == 0)
{
v___x_502_ = v___x_499_;
v_isShared_503_ = v_isSharedCheck_508_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_499_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_508_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_504_; lean_object* v___x_506_; 
lean_inc(v_ref_498_);
v___x_504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_504_, 0, v_ref_498_);
lean_ctor_set(v___x_504_, 1, v_a_500_);
if (v_isShared_503_ == 0)
{
lean_ctor_set_tag(v___x_502_, 1);
lean_ctor_set(v___x_502_, 0, v___x_504_);
v___x_506_ = v___x_502_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_504_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg___boxed(lean_object* v_msg_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg(v_msg_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
return v_res_515_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__1(void){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__0));
v___x_518_ = l_Lean_stringToMessageData(v___x_517_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_520_, v_a_528_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_546_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_546_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_546_ == 0)
{
v___x_534_ = v___x_531_;
v_isShared_535_ = v_isSharedCheck_546_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_531_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_546_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v_ringId_536_; lean_object* v_rings_537_; lean_object* v___x_538_; uint8_t v___x_539_; 
v_ringId_536_ = lean_ctor_get(v_a_519_, 0);
v_rings_537_ = lean_ctor_get(v_a_532_, 0);
lean_inc_ref(v_rings_537_);
lean_dec(v_a_532_);
v___x_538_ = lean_array_get_size(v_rings_537_);
v___x_539_ = lean_nat_dec_lt(v_ringId_536_, v___x_538_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; lean_object* v___x_541_; 
lean_dec_ref(v_rings_537_);
lean_del_object(v___x_534_);
v___x_540_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__1);
v___x_541_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg(v___x_540_, v_a_526_, v_a_527_, v_a_528_, v_a_529_);
return v___x_541_;
}
else
{
lean_object* v___x_542_; lean_object* v___x_544_; 
v___x_542_ = lean_array_fget(v_rings_537_, v_ringId_536_);
lean_dec_ref(v_rings_537_);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 0, v___x_542_);
v___x_544_ = v___x_534_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_542_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
}
else
{
lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_554_; 
v_a_547_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_554_ == 0)
{
v___x_549_ = v___x_531_;
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_531_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_552_; 
if (v_isShared_550_ == 0)
{
v___x_552_ = v___x_549_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_a_547_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___boxed(lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_, v_a_562_, v_a_563_, v_a_564_, v_a_565_);
lean_dec(v_a_565_);
lean_dec_ref(v_a_564_);
lean_dec(v_a_563_);
lean_dec_ref(v_a_562_);
lean_dec(v_a_561_);
lean_dec_ref(v_a_560_);
lean_dec(v_a_559_);
lean_dec_ref(v_a_558_);
lean_dec(v_a_557_);
lean_dec(v_a_556_);
lean_dec_ref(v_a_555_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0(lean_object* v_00_u03b1_568_, lean_object* v_msg_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg(v_msg_569_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___boxed(lean_object* v_00_u03b1_583_, lean_object* v_msg_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0(v_00_u03b1_583_, v_msg_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
lean_dec(v___y_595_);
lean_dec_ref(v___y_594_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
return v_res_597_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_598_ = lean_box(0);
v___x_599_ = l_unsafeCast___redArg(v___x_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0(lean_object* v_ringId_600_, lean_object* v_f_601_, lean_object* v_s_602_){
_start:
{
lean_object* v_rings_603_; lean_object* v_typeIdOf_604_; lean_object* v_exprToRingId_605_; lean_object* v_semirings_606_; lean_object* v_stypeIdOf_607_; lean_object* v_exprToSemiringId_608_; lean_object* v_ncRings_609_; lean_object* v_exprToNCRingId_610_; lean_object* v_nctypeIdOf_611_; lean_object* v_ncSemirings_612_; lean_object* v_exprToNCSemiringId_613_; lean_object* v_ncstypeIdOf_614_; lean_object* v_steps_615_; uint8_t v_reportedMaxDegreeIssue_616_; lean_object* v___x_617_; uint8_t v___x_618_; 
v_rings_603_ = lean_ctor_get(v_s_602_, 0);
v_typeIdOf_604_ = lean_ctor_get(v_s_602_, 1);
v_exprToRingId_605_ = lean_ctor_get(v_s_602_, 2);
v_semirings_606_ = lean_ctor_get(v_s_602_, 3);
v_stypeIdOf_607_ = lean_ctor_get(v_s_602_, 4);
v_exprToSemiringId_608_ = lean_ctor_get(v_s_602_, 5);
v_ncRings_609_ = lean_ctor_get(v_s_602_, 6);
v_exprToNCRingId_610_ = lean_ctor_get(v_s_602_, 7);
v_nctypeIdOf_611_ = lean_ctor_get(v_s_602_, 8);
v_ncSemirings_612_ = lean_ctor_get(v_s_602_, 9);
v_exprToNCSemiringId_613_ = lean_ctor_get(v_s_602_, 10);
v_ncstypeIdOf_614_ = lean_ctor_get(v_s_602_, 11);
v_steps_615_ = lean_ctor_get(v_s_602_, 12);
v_reportedMaxDegreeIssue_616_ = lean_ctor_get_uint8(v_s_602_, sizeof(void*)*13);
v___x_617_ = lean_array_get_size(v_rings_603_);
v___x_618_ = lean_nat_dec_lt(v_ringId_600_, v___x_617_);
if (v___x_618_ == 0)
{
lean_dec_ref(v_f_601_);
return v_s_602_;
}
else
{
lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_630_; 
lean_inc(v_steps_615_);
lean_inc_ref(v_ncstypeIdOf_614_);
lean_inc_ref(v_exprToNCSemiringId_613_);
lean_inc_ref(v_ncSemirings_612_);
lean_inc_ref(v_nctypeIdOf_611_);
lean_inc_ref(v_exprToNCRingId_610_);
lean_inc_ref(v_ncRings_609_);
lean_inc_ref(v_exprToSemiringId_608_);
lean_inc_ref(v_stypeIdOf_607_);
lean_inc_ref(v_semirings_606_);
lean_inc_ref(v_exprToRingId_605_);
lean_inc_ref(v_typeIdOf_604_);
lean_inc_ref(v_rings_603_);
v_isSharedCheck_630_ = !lean_is_exclusive(v_s_602_);
if (v_isSharedCheck_630_ == 0)
{
lean_object* v_unused_631_; lean_object* v_unused_632_; lean_object* v_unused_633_; lean_object* v_unused_634_; lean_object* v_unused_635_; lean_object* v_unused_636_; lean_object* v_unused_637_; lean_object* v_unused_638_; lean_object* v_unused_639_; lean_object* v_unused_640_; lean_object* v_unused_641_; lean_object* v_unused_642_; lean_object* v_unused_643_; 
v_unused_631_ = lean_ctor_get(v_s_602_, 12);
lean_dec(v_unused_631_);
v_unused_632_ = lean_ctor_get(v_s_602_, 11);
lean_dec(v_unused_632_);
v_unused_633_ = lean_ctor_get(v_s_602_, 10);
lean_dec(v_unused_633_);
v_unused_634_ = lean_ctor_get(v_s_602_, 9);
lean_dec(v_unused_634_);
v_unused_635_ = lean_ctor_get(v_s_602_, 8);
lean_dec(v_unused_635_);
v_unused_636_ = lean_ctor_get(v_s_602_, 7);
lean_dec(v_unused_636_);
v_unused_637_ = lean_ctor_get(v_s_602_, 6);
lean_dec(v_unused_637_);
v_unused_638_ = lean_ctor_get(v_s_602_, 5);
lean_dec(v_unused_638_);
v_unused_639_ = lean_ctor_get(v_s_602_, 4);
lean_dec(v_unused_639_);
v_unused_640_ = lean_ctor_get(v_s_602_, 3);
lean_dec(v_unused_640_);
v_unused_641_ = lean_ctor_get(v_s_602_, 2);
lean_dec(v_unused_641_);
v_unused_642_ = lean_ctor_get(v_s_602_, 1);
lean_dec(v_unused_642_);
v_unused_643_ = lean_ctor_get(v_s_602_, 0);
lean_dec(v_unused_643_);
v___x_620_ = v_s_602_;
v_isShared_621_ = v_isSharedCheck_630_;
goto v_resetjp_619_;
}
else
{
lean_dec(v_s_602_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_630_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v_v_622_; lean_object* v___x_623_; lean_object* v_xs_x27_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_628_; 
v_v_622_ = lean_array_fget(v_rings_603_, v_ringId_600_);
v___x_623_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___closed__0);
v_xs_x27_624_ = lean_array_fset(v_rings_603_, v_ringId_600_, v___x_623_);
v___x_625_ = lean_apply_1(v_f_601_, v_v_622_);
v___x_626_ = lean_array_fset(v_xs_x27_624_, v_ringId_600_, v___x_625_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 0, v___x_626_);
v___x_628_ = v___x_620_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v___x_626_);
lean_ctor_set(v_reuseFailAlloc_629_, 1, v_typeIdOf_604_);
lean_ctor_set(v_reuseFailAlloc_629_, 2, v_exprToRingId_605_);
lean_ctor_set(v_reuseFailAlloc_629_, 3, v_semirings_606_);
lean_ctor_set(v_reuseFailAlloc_629_, 4, v_stypeIdOf_607_);
lean_ctor_set(v_reuseFailAlloc_629_, 5, v_exprToSemiringId_608_);
lean_ctor_set(v_reuseFailAlloc_629_, 6, v_ncRings_609_);
lean_ctor_set(v_reuseFailAlloc_629_, 7, v_exprToNCRingId_610_);
lean_ctor_set(v_reuseFailAlloc_629_, 8, v_nctypeIdOf_611_);
lean_ctor_set(v_reuseFailAlloc_629_, 9, v_ncSemirings_612_);
lean_ctor_set(v_reuseFailAlloc_629_, 10, v_exprToNCSemiringId_613_);
lean_ctor_set(v_reuseFailAlloc_629_, 11, v_ncstypeIdOf_614_);
lean_ctor_set(v_reuseFailAlloc_629_, 12, v_steps_615_);
lean_ctor_set_uint8(v_reuseFailAlloc_629_, sizeof(void*)*13, v_reportedMaxDegreeIssue_616_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___boxed(lean_object* v_ringId_644_, lean_object* v_f_645_, lean_object* v_s_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0(v_ringId_644_, v_f_645_, v_s_646_);
lean_dec(v_ringId_644_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(lean_object* v_f_648_, lean_object* v_a_649_, lean_object* v_a_650_){
_start:
{
lean_object* v_ringId_652_; lean_object* v___f_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v_ringId_652_ = lean_ctor_get(v_a_649_, 0);
lean_inc(v_ringId_652_);
v___f_653_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_653_, 0, v_ringId_652_);
lean_closure_set(v___f_653_, 1, v_f_648_);
v___x_654_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_655_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_654_, v___f_653_, v_a_650_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___boxed(lean_object* v_f_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v_f_656_, v_a_657_, v_a_658_);
lean_dec(v_a_658_);
lean_dec_ref(v_a_657_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing(lean_object* v_f_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v_f_661_, v_a_662_, v_a_663_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___boxed(lean_object* v_f_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing(v_f_675_, v_a_676_, v_a_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_);
lean_dec(v_a_686_);
lean_dec_ref(v_a_685_);
lean_dec(v_a_684_);
lean_dec_ref(v_a_683_);
lean_dec(v_a_682_);
lean_dec_ref(v_a_681_);
lean_dec(v_a_680_);
lean_dec_ref(v_a_679_);
lean_dec(v_a_678_);
lean_dec(v_a_677_);
lean_dec_ref(v_a_676_);
return v_res_688_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__1(void){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_690_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__0));
v___x_691_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___boxed), 12, 0);
v___x_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
lean_ctor_set(v___x_692_, 1, v___x_690_);
return v___x_692_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM(void){
_start:
{
lean_object* v___x_693_; 
v___x_693_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__1);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd___redArg(lean_object* v_x_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_ringId_707_; uint8_t v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v_ringId_707_ = lean_ctor_get(v_a_695_, 0);
v___x_708_ = 1;
lean_inc(v_ringId_707_);
v___x_709_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_709_, 0, v_ringId_707_);
lean_ctor_set_uint8(v___x_709_, sizeof(void*)*1, v___x_708_);
lean_inc(v_a_705_);
lean_inc_ref(v_a_704_);
lean_inc(v_a_703_);
lean_inc_ref(v_a_702_);
lean_inc(v_a_701_);
lean_inc_ref(v_a_700_);
lean_inc(v_a_699_);
lean_inc_ref(v_a_698_);
lean_inc(v_a_697_);
lean_inc(v_a_696_);
v___x_710_ = lean_apply_12(v_x_694_, v___x_709_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, lean_box(0));
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd___redArg___boxed(lean_object* v_x_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_){
_start:
{
lean_object* v_res_724_; 
v_res_724_ = l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd___redArg(v_x_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_);
lean_dec(v_a_722_);
lean_dec_ref(v_a_721_);
lean_dec(v_a_720_);
lean_dec_ref(v_a_719_);
lean_dec(v_a_718_);
lean_dec_ref(v_a_717_);
lean_dec(v_a_716_);
lean_dec_ref(v_a_715_);
lean_dec(v_a_714_);
lean_dec(v_a_713_);
lean_dec_ref(v_a_712_);
return v_res_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd(lean_object* v_00_u03b1_725_, lean_object* v_x_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_){
_start:
{
lean_object* v_ringId_739_; uint8_t v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v_ringId_739_ = lean_ctor_get(v_a_727_, 0);
v___x_740_ = 1;
lean_inc(v_ringId_739_);
v___x_741_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_741_, 0, v_ringId_739_);
lean_ctor_set_uint8(v___x_741_, sizeof(void*)*1, v___x_740_);
lean_inc(v_a_737_);
lean_inc_ref(v_a_736_);
lean_inc(v_a_735_);
lean_inc_ref(v_a_734_);
lean_inc(v_a_733_);
lean_inc_ref(v_a_732_);
lean_inc(v_a_731_);
lean_inc_ref(v_a_730_);
lean_inc(v_a_729_);
lean_inc(v_a_728_);
v___x_742_ = lean_apply_12(v_x_726_, v___x_741_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_, v_a_737_, lean_box(0));
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd___boxed(lean_object* v_00_u03b1_743_, lean_object* v_x_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd(v_00_u03b1_743_, v_x_744_, v_a_745_, v_a_746_, v_a_747_, v_a_748_, v_a_749_, v_a_750_, v_a_751_, v_a_752_, v_a_753_, v_a_754_, v_a_755_);
lean_dec(v_a_755_);
lean_dec_ref(v_a_754_);
lean_dec(v_a_753_);
lean_dec_ref(v_a_752_);
lean_dec(v_a_751_);
lean_dec_ref(v_a_750_);
lean_dec(v_a_749_);
lean_dec_ref(v_a_748_);
lean_dec(v_a_747_);
lean_dec(v_a_746_);
lean_dec_ref(v_a_745_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___redArg(lean_object* v_a_758_){
_start:
{
uint8_t v_checkCoeffDvd_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v_checkCoeffDvd_760_ = lean_ctor_get_uint8(v_a_758_, sizeof(void*)*1);
v___x_761_ = lean_box(v_checkCoeffDvd_760_);
v___x_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___redArg___boxed(lean_object* v_a_763_, lean_object* v_a_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___redArg(v_a_763_);
lean_dec_ref(v_a_763_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd(lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_){
_start:
{
lean_object* v___x_778_; 
v___x_778_ = l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___redArg(v_a_766_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___boxed(lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd(v_a_779_, v_a_780_, v_a_781_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_, v_a_789_);
lean_dec(v_a_789_);
lean_dec_ref(v_a_788_);
lean_dec(v_a_787_);
lean_dec_ref(v_a_786_);
lean_dec(v_a_785_);
lean_dec_ref(v_a_784_);
lean_dec(v_a_783_);
lean_dec_ref(v_a_782_);
lean_dec(v_a_781_);
lean_dec(v_a_780_);
lean_dec_ref(v_a_779_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_792_, lean_object* v_vals_793_, lean_object* v_i_794_, lean_object* v_k_795_){
_start:
{
lean_object* v___x_796_; uint8_t v___x_797_; 
v___x_796_ = lean_array_get_size(v_keys_792_);
v___x_797_ = lean_nat_dec_lt(v_i_794_, v___x_796_);
if (v___x_797_ == 0)
{
lean_object* v___x_798_; 
lean_dec(v_i_794_);
v___x_798_ = lean_box(0);
return v___x_798_;
}
else
{
lean_object* v_k_x27_799_; size_t v___x_800_; size_t v___x_801_; uint8_t v___x_802_; 
v_k_x27_799_ = lean_array_fget_borrowed(v_keys_792_, v_i_794_);
v___x_800_ = lean_ptr_addr(v_k_795_);
v___x_801_ = lean_ptr_addr(v_k_x27_799_);
v___x_802_ = lean_usize_dec_eq(v___x_800_, v___x_801_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_803_ = lean_unsigned_to_nat(1u);
v___x_804_ = lean_nat_add(v_i_794_, v___x_803_);
lean_dec(v_i_794_);
v_i_794_ = v___x_804_;
goto _start;
}
else
{
lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_806_ = lean_array_fget_borrowed(v_vals_793_, v_i_794_);
lean_dec(v_i_794_);
lean_inc(v___x_806_);
v___x_807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_807_, 0, v___x_806_);
return v___x_807_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_808_, lean_object* v_vals_809_, lean_object* v_i_810_, lean_object* v_k_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_808_, v_vals_809_, v_i_810_, v_k_811_);
lean_dec_ref(v_k_811_);
lean_dec_ref(v_vals_809_);
lean_dec_ref(v_keys_808_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg(lean_object* v_x_813_, size_t v_x_814_, lean_object* v_x_815_){
_start:
{
if (lean_obj_tag(v_x_813_) == 0)
{
lean_object* v_es_816_; lean_object* v___x_817_; size_t v___x_818_; size_t v___x_819_; lean_object* v_j_820_; lean_object* v___x_821_; 
v_es_816_ = lean_ctor_get(v_x_813_, 0);
v___x_817_ = lean_box(2);
v___x_818_ = ((size_t)31ULL);
v___x_819_ = lean_usize_land(v_x_814_, v___x_818_);
v_j_820_ = lean_usize_to_nat(v___x_819_);
v___x_821_ = lean_array_get_borrowed(v___x_817_, v_es_816_, v_j_820_);
lean_dec(v_j_820_);
switch(lean_obj_tag(v___x_821_))
{
case 0:
{
lean_object* v_key_822_; lean_object* v_val_823_; size_t v___x_824_; size_t v___x_825_; uint8_t v___x_826_; 
v_key_822_ = lean_ctor_get(v___x_821_, 0);
v_val_823_ = lean_ctor_get(v___x_821_, 1);
v___x_824_ = lean_ptr_addr(v_x_815_);
v___x_825_ = lean_ptr_addr(v_key_822_);
v___x_826_ = lean_usize_dec_eq(v___x_824_, v___x_825_);
if (v___x_826_ == 0)
{
lean_object* v___x_827_; 
v___x_827_ = lean_box(0);
return v___x_827_;
}
else
{
lean_object* v___x_828_; 
lean_inc(v_val_823_);
v___x_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_828_, 0, v_val_823_);
return v___x_828_;
}
}
case 1:
{
lean_object* v_node_829_; size_t v___x_830_; size_t v___x_831_; 
v_node_829_ = lean_ctor_get(v___x_821_, 0);
v___x_830_ = ((size_t)5ULL);
v___x_831_ = lean_usize_shift_right(v_x_814_, v___x_830_);
v_x_813_ = v_node_829_;
v_x_814_ = v___x_831_;
goto _start;
}
default: 
{
lean_object* v___x_833_; 
v___x_833_ = lean_box(0);
return v___x_833_;
}
}
}
else
{
lean_object* v_ks_834_; lean_object* v_vs_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v_ks_834_ = lean_ctor_get(v_x_813_, 0);
v_vs_835_ = lean_ctor_get(v_x_813_, 1);
v___x_836_ = lean_unsigned_to_nat(0u);
v___x_837_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___redArg(v_ks_834_, v_vs_835_, v___x_836_, v_x_815_);
return v___x_837_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_838_, lean_object* v_x_839_, lean_object* v_x_840_){
_start:
{
size_t v_x_905__boxed_841_; lean_object* v_res_842_; 
v_x_905__boxed_841_ = lean_unbox_usize(v_x_839_);
lean_dec(v_x_839_);
v_res_842_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg(v_x_838_, v_x_905__boxed_841_, v_x_840_);
lean_dec_ref(v_x_840_);
lean_dec_ref(v_x_838_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg(lean_object* v_x_843_, lean_object* v_x_844_){
_start:
{
size_t v___x_845_; size_t v___x_846_; size_t v___x_847_; uint64_t v___x_848_; size_t v___x_849_; lean_object* v___x_850_; 
v___x_845_ = lean_ptr_addr(v_x_844_);
v___x_846_ = ((size_t)3ULL);
v___x_847_ = lean_usize_shift_right(v___x_845_, v___x_846_);
v___x_848_ = lean_usize_to_uint64(v___x_847_);
v___x_849_ = lean_uint64_to_usize(v___x_848_);
v___x_850_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg(v_x_843_, v___x_849_, v_x_844_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg___boxed(lean_object* v_x_851_, lean_object* v_x_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg(v_x_851_, v_x_852_);
lean_dec_ref(v_x_852_);
lean_dec_ref(v_x_851_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___redArg(lean_object* v_e_854_, lean_object* v_a_855_, lean_object* v_a_856_){
_start:
{
lean_object* v___x_858_; 
v___x_858_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_855_, v_a_856_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_868_; 
v_a_859_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_868_ == 0)
{
v___x_861_ = v___x_858_;
v_isShared_862_ = v_isSharedCheck_868_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___x_858_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_868_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v_exprToRingId_863_; lean_object* v___x_864_; lean_object* v___x_866_; 
v_exprToRingId_863_ = lean_ctor_get(v_a_859_, 2);
lean_inc_ref(v_exprToRingId_863_);
lean_dec(v_a_859_);
v___x_864_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg(v_exprToRingId_863_, v_e_854_);
lean_dec_ref(v_exprToRingId_863_);
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 0, v___x_864_);
v___x_866_ = v___x_861_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v___x_864_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
else
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_876_; 
v_a_869_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_876_ == 0)
{
v___x_871_ = v___x_858_;
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_858_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_869_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___redArg___boxed(lean_object* v_e_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___redArg(v_e_877_, v_a_878_, v_a_879_);
lean_dec_ref(v_a_879_);
lean_dec(v_a_878_);
lean_dec_ref(v_e_877_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f(lean_object* v_e_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___redArg(v_e_882_, v_a_883_, v_a_891_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___boxed(lean_object* v_e_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f(v_e_895_, v_a_896_, v_a_897_, v_a_898_, v_a_899_, v_a_900_, v_a_901_, v_a_902_, v_a_903_, v_a_904_, v_a_905_);
lean_dec(v_a_905_);
lean_dec_ref(v_a_904_);
lean_dec(v_a_903_);
lean_dec_ref(v_a_902_);
lean_dec(v_a_901_);
lean_dec_ref(v_a_900_);
lean_dec(v_a_899_);
lean_dec_ref(v_a_898_);
lean_dec(v_a_897_);
lean_dec(v_a_896_);
lean_dec_ref(v_e_895_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0(lean_object* v_00_u03b2_908_, lean_object* v_x_909_, lean_object* v_x_910_){
_start:
{
lean_object* v___x_911_; 
v___x_911_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg(v_x_909_, v_x_910_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___boxed(lean_object* v_00_u03b2_912_, lean_object* v_x_913_, lean_object* v_x_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0(v_00_u03b2_912_, v_x_913_, v_x_914_);
lean_dec_ref(v_x_914_);
lean_dec_ref(v_x_913_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0(lean_object* v_00_u03b2_916_, lean_object* v_x_917_, size_t v_x_918_, lean_object* v_x_919_){
_start:
{
lean_object* v___x_920_; 
v___x_920_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg(v_x_917_, v_x_918_, v_x_919_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_921_, lean_object* v_x_922_, lean_object* v_x_923_, lean_object* v_x_924_){
_start:
{
size_t v_x_1026__boxed_925_; lean_object* v_res_926_; 
v_x_1026__boxed_925_ = lean_unbox_usize(v_x_923_);
lean_dec(v_x_923_);
v_res_926_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0(v_00_u03b2_921_, v_x_922_, v_x_1026__boxed_925_, v_x_924_);
lean_dec_ref(v_x_924_);
lean_dec_ref(v_x_922_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_927_, lean_object* v_keys_928_, lean_object* v_vals_929_, lean_object* v_heq_930_, lean_object* v_i_931_, lean_object* v_k_932_){
_start:
{
lean_object* v___x_933_; 
v___x_933_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_928_, v_vals_929_, v_i_931_, v_k_932_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_934_, lean_object* v_keys_935_, lean_object* v_vals_936_, lean_object* v_heq_937_, lean_object* v_i_938_, lean_object* v_k_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1(v_00_u03b2_934_, v_keys_935_, v_vals_936_, v_heq_937_, v_i_938_, v_k_939_);
lean_dec_ref(v_k_939_);
lean_dec_ref(v_vals_936_);
lean_dec_ref(v_keys_935_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f___redArg___lam__0(lean_object* v_toPure_941_, lean_object* v_____do__lift_942_){
_start:
{
lean_object* v_charInst_x3f_946_; 
v_charInst_x3f_946_ = lean_ctor_get(v_____do__lift_942_, 5);
lean_inc(v_charInst_x3f_946_);
lean_dec_ref(v_____do__lift_942_);
if (lean_obj_tag(v_charInst_x3f_946_) == 1)
{
lean_object* v_val_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_958_; 
v_val_947_ = lean_ctor_get(v_charInst_x3f_946_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v_charInst_x3f_946_);
if (v_isSharedCheck_958_ == 0)
{
v___x_949_ = v_charInst_x3f_946_;
v_isShared_950_ = v_isSharedCheck_958_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_val_947_);
lean_dec(v_charInst_x3f_946_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_958_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v_snd_951_; lean_object* v___x_952_; uint8_t v___x_953_; 
v_snd_951_ = lean_ctor_get(v_val_947_, 1);
lean_inc(v_snd_951_);
lean_dec(v_val_947_);
v___x_952_ = lean_unsigned_to_nat(0u);
v___x_953_ = lean_nat_dec_eq(v_snd_951_, v___x_952_);
if (v___x_953_ == 0)
{
lean_object* v___x_955_; 
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 0, v_snd_951_);
v___x_955_ = v___x_949_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_snd_951_);
v___x_955_ = v_reuseFailAlloc_957_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
lean_object* v___x_956_; 
v___x_956_ = lean_apply_2(v_toPure_941_, lean_box(0), v___x_955_);
return v___x_956_;
}
}
else
{
lean_dec(v_snd_951_);
lean_del_object(v___x_949_);
goto v___jp_943_;
}
}
}
else
{
lean_dec(v_charInst_x3f_946_);
goto v___jp_943_;
}
v___jp_943_:
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = lean_box(0);
v___x_945_ = lean_apply_2(v_toPure_941_, lean_box(0), v___x_944_);
return v___x_945_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f___redArg(lean_object* v_inst_959_, lean_object* v_inst_960_){
_start:
{
lean_object* v_toApplicative_961_; lean_object* v_toBind_962_; lean_object* v_getRing_963_; lean_object* v_toPure_964_; lean_object* v___f_965_; lean_object* v___x_966_; 
v_toApplicative_961_ = lean_ctor_get(v_inst_959_, 0);
lean_inc_ref(v_toApplicative_961_);
v_toBind_962_ = lean_ctor_get(v_inst_959_, 1);
lean_inc(v_toBind_962_);
lean_dec_ref(v_inst_959_);
v_getRing_963_ = lean_ctor_get(v_inst_960_, 0);
lean_inc(v_getRing_963_);
lean_dec_ref(v_inst_960_);
v_toPure_964_ = lean_ctor_get(v_toApplicative_961_, 1);
lean_inc(v_toPure_964_);
lean_dec_ref(v_toApplicative_961_);
v___f_965_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_965_, 0, v_toPure_964_);
v___x_966_ = lean_apply_4(v_toBind_962_, lean_box(0), lean_box(0), v_getRing_963_, v___f_965_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f(lean_object* v_m_967_, lean_object* v_inst_968_, lean_object* v_inst_969_){
_start:
{
lean_object* v___x_970_; 
v___x_970_ = l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f___redArg(v_inst_968_, v_inst_969_);
return v___x_970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f___redArg___lam__0(lean_object* v_toPure_971_, lean_object* v_____do__lift_972_){
_start:
{
lean_object* v_charInst_x3f_976_; 
v_charInst_x3f_976_ = lean_ctor_get(v_____do__lift_972_, 5);
lean_inc(v_charInst_x3f_976_);
lean_dec_ref(v_____do__lift_972_);
if (lean_obj_tag(v_charInst_x3f_976_) == 1)
{
lean_object* v_val_977_; lean_object* v_snd_978_; lean_object* v___x_979_; uint8_t v___x_980_; 
v_val_977_ = lean_ctor_get(v_charInst_x3f_976_, 0);
v_snd_978_ = lean_ctor_get(v_val_977_, 1);
v___x_979_ = lean_unsigned_to_nat(0u);
v___x_980_ = lean_nat_dec_eq(v_snd_978_, v___x_979_);
if (v___x_980_ == 0)
{
lean_object* v___x_981_; 
v___x_981_ = lean_apply_2(v_toPure_971_, lean_box(0), v_charInst_x3f_976_);
return v___x_981_;
}
else
{
lean_dec_ref_known(v_charInst_x3f_976_, 1);
goto v___jp_973_;
}
}
else
{
lean_dec(v_charInst_x3f_976_);
goto v___jp_973_;
}
v___jp_973_:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = lean_box(0);
v___x_975_ = lean_apply_2(v_toPure_971_, lean_box(0), v___x_974_);
return v___x_975_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f___redArg(lean_object* v_inst_982_, lean_object* v_inst_983_){
_start:
{
lean_object* v_toApplicative_984_; lean_object* v_toBind_985_; lean_object* v_getRing_986_; lean_object* v_toPure_987_; lean_object* v___f_988_; lean_object* v___x_989_; 
v_toApplicative_984_ = lean_ctor_get(v_inst_982_, 0);
lean_inc_ref(v_toApplicative_984_);
v_toBind_985_ = lean_ctor_get(v_inst_982_, 1);
lean_inc(v_toBind_985_);
lean_dec_ref(v_inst_982_);
v_getRing_986_ = lean_ctor_get(v_inst_983_, 0);
lean_inc(v_getRing_986_);
lean_dec_ref(v_inst_983_);
v_toPure_987_ = lean_ctor_get(v_toApplicative_984_, 1);
lean_inc(v_toPure_987_);
lean_dec_ref(v_toApplicative_984_);
v___f_988_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_988_, 0, v_toPure_987_);
v___x_989_ = lean_apply_4(v_toBind_985_, lean_box(0), lean_box(0), v_getRing_986_, v___f_988_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f(lean_object* v_m_990_, lean_object* v_inst_991_, lean_object* v_inst_992_){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f___redArg(v_inst_991_, v_inst_992_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisorsInst_x3f(lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v___x_1006_; 
v___x_1006_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1015_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1009_ = v___x_1006_;
v_isShared_1010_ = v_isSharedCheck_1015_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_1006_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1015_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v_noZeroDivInst_x3f_1011_; lean_object* v___x_1013_; 
v_noZeroDivInst_x3f_1011_ = lean_ctor_get(v_a_1007_, 5);
lean_inc(v_noZeroDivInst_x3f_1011_);
lean_dec(v_a_1007_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 0, v_noZeroDivInst_x3f_1011_);
v___x_1013_ = v___x_1009_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_noZeroDivInst_x3f_1011_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
v_a_1016_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_1006_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_1006_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisorsInst_x3f___boxed(lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisorsInst_x3f(v_a_1024_, v_a_1025_, v_a_1026_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_);
lean_dec(v_a_1034_);
lean_dec_ref(v_a_1033_);
lean_dec(v_a_1032_);
lean_dec_ref(v_a_1031_);
lean_dec(v_a_1030_);
lean_dec_ref(v_a_1029_);
lean_dec(v_a_1028_);
lean_dec_ref(v_a_1027_);
lean_dec(v_a_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_a_1024_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisors(lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_){
_start:
{
lean_object* v___x_1049_; 
v___x_1049_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_, v_a_1046_, v_a_1047_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1065_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1052_ = v___x_1049_;
v_isShared_1053_ = v_isSharedCheck_1065_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1049_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1065_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v_noZeroDivInst_x3f_1054_; 
v_noZeroDivInst_x3f_1054_ = lean_ctor_get(v_a_1050_, 5);
lean_inc(v_noZeroDivInst_x3f_1054_);
lean_dec(v_a_1050_);
if (lean_obj_tag(v_noZeroDivInst_x3f_1054_) == 0)
{
uint8_t v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1058_; 
v___x_1055_ = 0;
v___x_1056_ = lean_box(v___x_1055_);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 0, v___x_1056_);
v___x_1058_ = v___x_1052_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v___x_1056_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
else
{
uint8_t v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1063_; 
lean_dec_ref_known(v_noZeroDivInst_x3f_1054_, 1);
v___x_1060_ = 1;
v___x_1061_ = lean_box(v___x_1060_);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 0, v___x_1061_);
v___x_1063_ = v___x_1052_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v___x_1061_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
else
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1073_; 
v_a_1066_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1068_ = v___x_1049_;
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1049_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1071_; 
if (v_isShared_1069_ == 0)
{
v___x_1071_ = v___x_1068_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_a_1066_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisors___boxed(lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisors(v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_);
lean_dec(v_a_1084_);
lean_dec_ref(v_a_1083_);
lean_dec(v_a_1082_);
lean_dec_ref(v_a_1081_);
lean_dec(v_a_1080_);
lean_dec_ref(v_a_1079_);
lean_dec(v_a_1078_);
lean_dec_ref(v_a_1077_);
lean_dec(v_a_1076_);
lean_dec(v_a_1075_);
lean_dec_ref(v_a_1074_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_hasChar(lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1116_; 
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1116_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1116_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v_toRing_1104_; lean_object* v_charInst_x3f_1105_; 
v_toRing_1104_ = lean_ctor_get(v_a_1100_, 0);
lean_inc_ref(v_toRing_1104_);
lean_dec(v_a_1100_);
v_charInst_x3f_1105_ = lean_ctor_get(v_toRing_1104_, 5);
lean_inc(v_charInst_x3f_1105_);
lean_dec_ref(v_toRing_1104_);
if (lean_obj_tag(v_charInst_x3f_1105_) == 0)
{
uint8_t v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1109_; 
v___x_1106_ = 0;
v___x_1107_ = lean_box(v___x_1106_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 0, v___x_1107_);
v___x_1109_ = v___x_1102_;
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
else
{
uint8_t v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1114_; 
lean_dec_ref_known(v_charInst_x3f_1105_, 1);
v___x_1111_ = 1;
v___x_1112_ = lean_box(v___x_1111_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 0, v___x_1112_);
v___x_1114_ = v___x_1102_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v___x_1112_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
}
}
else
{
lean_object* v_a_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1124_; 
v_a_1117_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1119_ = v___x_1099_;
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_a_1117_);
lean_dec(v___x_1099_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_hasChar___boxed(lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l_Lean_Meta_Grind_Arith_CommRing_hasChar(v_a_1125_, v_a_1126_, v_a_1127_, v_a_1128_, v_a_1129_, v_a_1130_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_);
lean_dec(v_a_1135_);
lean_dec_ref(v_a_1134_);
lean_dec(v_a_1133_);
lean_dec_ref(v_a_1132_);
lean_dec(v_a_1131_);
lean_dec_ref(v_a_1130_);
lean_dec(v_a_1129_);
lean_dec_ref(v_a_1128_);
lean_dec(v_a_1127_);
lean_dec(v_a_1126_);
lean_dec_ref(v_a_1125_);
return v_res_1137_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__1(void){
_start:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1139_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__0));
v___x_1140_ = l_Lean_stringToMessageData(v___x_1139_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCharInst(lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1166_; 
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1156_ = v___x_1153_;
v_isShared_1157_ = v_isSharedCheck_1166_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1153_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1166_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v_toRing_1158_; lean_object* v_charInst_x3f_1159_; 
v_toRing_1158_ = lean_ctor_get(v_a_1154_, 0);
lean_inc_ref(v_toRing_1158_);
lean_dec(v_a_1154_);
v_charInst_x3f_1159_ = lean_ctor_get(v_toRing_1158_, 5);
lean_inc(v_charInst_x3f_1159_);
lean_dec_ref(v_toRing_1158_);
if (lean_obj_tag(v_charInst_x3f_1159_) == 1)
{
lean_object* v_val_1160_; lean_object* v___x_1162_; 
v_val_1160_ = lean_ctor_get(v_charInst_x3f_1159_, 0);
lean_inc(v_val_1160_);
lean_dec_ref_known(v_charInst_x3f_1159_, 1);
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 0, v_val_1160_);
v___x_1162_ = v___x_1156_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_val_1160_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
else
{
lean_object* v___x_1164_; lean_object* v___x_1165_; 
lean_dec(v_charInst_x3f_1159_);
lean_del_object(v___x_1156_);
v___x_1164_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__1);
v___x_1165_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg(v___x_1164_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_);
return v___x_1165_;
}
}
}
else
{
lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1174_; 
v_a_1167_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1169_ = v___x_1153_;
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v___x_1153_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1172_; 
if (v_isShared_1170_ == 0)
{
v___x_1172_ = v___x_1169_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_a_1167_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCharInst___boxed(lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_Meta_Grind_Arith_CommRing_getCharInst(v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_, v_a_1185_);
lean_dec(v_a_1185_);
lean_dec_ref(v_a_1184_);
lean_dec(v_a_1183_);
lean_dec_ref(v_a_1182_);
lean_dec(v_a_1181_);
lean_dec_ref(v_a_1180_);
lean_dec(v_a_1179_);
lean_dec_ref(v_a_1178_);
lean_dec(v_a_1177_);
lean_dec(v_a_1176_);
lean_dec_ref(v_a_1175_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isField(lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_1188_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_, v_a_1197_, v_a_1198_);
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1216_; 
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1203_ = v___x_1200_;
v_isShared_1204_ = v_isSharedCheck_1216_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1200_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1216_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v_fieldInst_x3f_1205_; 
v_fieldInst_x3f_1205_ = lean_ctor_get(v_a_1201_, 6);
lean_inc(v_fieldInst_x3f_1205_);
lean_dec(v_a_1201_);
if (lean_obj_tag(v_fieldInst_x3f_1205_) == 0)
{
uint8_t v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1209_; 
v___x_1206_ = 0;
v___x_1207_ = lean_box(v___x_1206_);
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 0, v___x_1207_);
v___x_1209_ = v___x_1203_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v___x_1207_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
else
{
uint8_t v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1214_; 
lean_dec_ref_known(v_fieldInst_x3f_1205_, 1);
v___x_1211_ = 1;
v___x_1212_ = lean_box(v___x_1211_);
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 0, v___x_1212_);
v___x_1214_ = v___x_1203_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1212_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
v_a_1217_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1200_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1200_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isField___boxed(lean_object* v_a_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l_Lean_Meta_Grind_Arith_CommRing_isField(v_a_1225_, v_a_1226_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_, v_a_1233_, v_a_1234_, v_a_1235_);
lean_dec(v_a_1235_);
lean_dec_ref(v_a_1234_);
lean_dec(v_a_1233_);
lean_dec_ref(v_a_1232_);
lean_dec(v_a_1231_);
lean_dec_ref(v_a_1230_);
lean_dec(v_a_1229_);
lean_dec_ref(v_a_1228_);
lean_dec(v_a_1227_);
lean_dec(v_a_1226_);
lean_dec_ref(v_a_1225_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isQueueEmpty(lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_){
_start:
{
lean_object* v___x_1250_; 
v___x_1250_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_1238_, v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1266_; 
v_a_1251_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1253_ = v___x_1250_;
v_isShared_1254_ = v_isSharedCheck_1266_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1250_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1266_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v_queue_1255_; 
v_queue_1255_ = lean_ctor_get(v_a_1251_, 11);
lean_inc(v_queue_1255_);
lean_dec(v_a_1251_);
if (lean_obj_tag(v_queue_1255_) == 0)
{
uint8_t v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1259_; 
lean_dec_ref_known(v_queue_1255_, 5);
v___x_1256_ = 0;
v___x_1257_ = lean_box(v___x_1256_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 0, v___x_1257_);
v___x_1259_ = v___x_1253_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v___x_1257_);
v___x_1259_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
return v___x_1259_;
}
}
else
{
uint8_t v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1264_; 
v___x_1261_ = 1;
v___x_1262_ = lean_box(v___x_1261_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 0, v___x_1262_);
v___x_1264_ = v___x_1253_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1262_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
}
else
{
lean_object* v_a_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1274_; 
v_a_1267_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1269_ = v___x_1250_;
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_a_1267_);
lean_dec(v___x_1250_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1272_; 
if (v_isShared_1270_ == 0)
{
v___x_1272_ = v___x_1269_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_a_1267_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isQueueEmpty___boxed(lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = l_Lean_Meta_Grind_Arith_CommRing_isQueueEmpty(v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_, v_a_1284_, v_a_1285_);
lean_dec(v_a_1285_);
lean_dec_ref(v_a_1284_);
lean_dec(v_a_1283_);
lean_dec_ref(v_a_1282_);
lean_dec(v_a_1281_);
lean_dec_ref(v_a_1280_);
lean_dec(v_a_1279_);
lean_dec_ref(v_a_1278_);
lean_dec(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg(lean_object* v_k_1288_, lean_object* v_t_1289_){
_start:
{
if (lean_obj_tag(v_t_1289_) == 0)
{
lean_object* v_k_1290_; lean_object* v_v_1291_; lean_object* v_l_1292_; lean_object* v_r_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1947_; 
v_k_1290_ = lean_ctor_get(v_t_1289_, 1);
v_v_1291_ = lean_ctor_get(v_t_1289_, 2);
v_l_1292_ = lean_ctor_get(v_t_1289_, 3);
v_r_1293_ = lean_ctor_get(v_t_1289_, 4);
v_isSharedCheck_1947_ = !lean_is_exclusive(v_t_1289_);
if (v_isSharedCheck_1947_ == 0)
{
lean_object* v_unused_1948_; 
v_unused_1948_ = lean_ctor_get(v_t_1289_, 0);
lean_dec(v_unused_1948_);
v___x_1295_ = v_t_1289_;
v_isShared_1296_ = v_isSharedCheck_1947_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_r_1293_);
lean_inc(v_l_1292_);
lean_inc(v_v_1291_);
lean_inc(v_k_1290_);
lean_dec(v_t_1289_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1947_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
uint8_t v___x_1297_; 
v___x_1297_ = l_Lean_Meta_Grind_Arith_CommRing_EqCnstr_compare(v_k_1288_, v_k_1290_);
switch(v___x_1297_)
{
case 0:
{
lean_object* v_impl_1298_; lean_object* v___x_1299_; 
v_impl_1298_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg(v_k_1288_, v_l_1292_);
v___x_1299_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1298_) == 0)
{
if (lean_obj_tag(v_r_1293_) == 0)
{
lean_object* v_size_1300_; lean_object* v_size_1301_; lean_object* v_k_1302_; lean_object* v_v_1303_; lean_object* v_l_1304_; lean_object* v_r_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; uint8_t v___x_1308_; 
v_size_1300_ = lean_ctor_get(v_impl_1298_, 0);
lean_inc(v_size_1300_);
v_size_1301_ = lean_ctor_get(v_r_1293_, 0);
v_k_1302_ = lean_ctor_get(v_r_1293_, 1);
v_v_1303_ = lean_ctor_get(v_r_1293_, 2);
v_l_1304_ = lean_ctor_get(v_r_1293_, 3);
lean_inc(v_l_1304_);
v_r_1305_ = lean_ctor_get(v_r_1293_, 4);
v___x_1306_ = lean_unsigned_to_nat(3u);
v___x_1307_ = lean_nat_mul(v___x_1306_, v_size_1300_);
v___x_1308_ = lean_nat_dec_lt(v___x_1307_, v_size_1301_);
lean_dec(v___x_1307_);
if (v___x_1308_ == 0)
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1312_; 
lean_dec(v_l_1304_);
v___x_1309_ = lean_nat_add(v___x_1299_, v_size_1300_);
lean_dec(v_size_1300_);
v___x_1310_ = lean_nat_add(v___x_1309_, v_size_1301_);
lean_dec(v___x_1309_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 3, v_impl_1298_);
lean_ctor_set(v___x_1295_, 0, v___x_1310_);
v___x_1312_ = v___x_1295_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___x_1310_);
lean_ctor_set(v_reuseFailAlloc_1313_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1313_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1313_, 3, v_impl_1298_);
lean_ctor_set(v_reuseFailAlloc_1313_, 4, v_r_1293_);
v___x_1312_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
return v___x_1312_;
}
}
else
{
lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1377_; 
lean_inc(v_r_1305_);
lean_inc(v_v_1303_);
lean_inc(v_k_1302_);
lean_inc(v_size_1301_);
v_isSharedCheck_1377_ = !lean_is_exclusive(v_r_1293_);
if (v_isSharedCheck_1377_ == 0)
{
lean_object* v_unused_1378_; lean_object* v_unused_1379_; lean_object* v_unused_1380_; lean_object* v_unused_1381_; lean_object* v_unused_1382_; 
v_unused_1378_ = lean_ctor_get(v_r_1293_, 4);
lean_dec(v_unused_1378_);
v_unused_1379_ = lean_ctor_get(v_r_1293_, 3);
lean_dec(v_unused_1379_);
v_unused_1380_ = lean_ctor_get(v_r_1293_, 2);
lean_dec(v_unused_1380_);
v_unused_1381_ = lean_ctor_get(v_r_1293_, 1);
lean_dec(v_unused_1381_);
v_unused_1382_ = lean_ctor_get(v_r_1293_, 0);
lean_dec(v_unused_1382_);
v___x_1315_ = v_r_1293_;
v_isShared_1316_ = v_isSharedCheck_1377_;
goto v_resetjp_1314_;
}
else
{
lean_dec(v_r_1293_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1377_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v_size_1317_; lean_object* v_k_1318_; lean_object* v_v_1319_; lean_object* v_l_1320_; lean_object* v_r_1321_; lean_object* v_size_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; uint8_t v___x_1325_; 
v_size_1317_ = lean_ctor_get(v_l_1304_, 0);
v_k_1318_ = lean_ctor_get(v_l_1304_, 1);
v_v_1319_ = lean_ctor_get(v_l_1304_, 2);
v_l_1320_ = lean_ctor_get(v_l_1304_, 3);
v_r_1321_ = lean_ctor_get(v_l_1304_, 4);
v_size_1322_ = lean_ctor_get(v_r_1305_, 0);
v___x_1323_ = lean_unsigned_to_nat(2u);
v___x_1324_ = lean_nat_mul(v___x_1323_, v_size_1322_);
v___x_1325_ = lean_nat_dec_lt(v_size_1317_, v___x_1324_);
lean_dec(v___x_1324_);
if (v___x_1325_ == 0)
{
lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1353_; 
lean_inc(v_r_1321_);
lean_inc(v_l_1320_);
lean_inc(v_v_1319_);
lean_inc(v_k_1318_);
v_isSharedCheck_1353_ = !lean_is_exclusive(v_l_1304_);
if (v_isSharedCheck_1353_ == 0)
{
lean_object* v_unused_1354_; lean_object* v_unused_1355_; lean_object* v_unused_1356_; lean_object* v_unused_1357_; lean_object* v_unused_1358_; 
v_unused_1354_ = lean_ctor_get(v_l_1304_, 4);
lean_dec(v_unused_1354_);
v_unused_1355_ = lean_ctor_get(v_l_1304_, 3);
lean_dec(v_unused_1355_);
v_unused_1356_ = lean_ctor_get(v_l_1304_, 2);
lean_dec(v_unused_1356_);
v_unused_1357_ = lean_ctor_get(v_l_1304_, 1);
lean_dec(v_unused_1357_);
v_unused_1358_ = lean_ctor_get(v_l_1304_, 0);
lean_dec(v_unused_1358_);
v___x_1327_ = v_l_1304_;
v_isShared_1328_ = v_isSharedCheck_1353_;
goto v_resetjp_1326_;
}
else
{
lean_dec(v_l_1304_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1353_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___y_1332_; lean_object* v___y_1333_; lean_object* v___y_1334_; lean_object* v___y_1343_; 
v___x_1329_ = lean_nat_add(v___x_1299_, v_size_1300_);
lean_dec(v_size_1300_);
v___x_1330_ = lean_nat_add(v___x_1329_, v_size_1301_);
lean_dec(v_size_1301_);
if (lean_obj_tag(v_l_1320_) == 0)
{
lean_object* v_size_1351_; 
v_size_1351_ = lean_ctor_get(v_l_1320_, 0);
lean_inc(v_size_1351_);
v___y_1343_ = v_size_1351_;
goto v___jp_1342_;
}
else
{
lean_object* v___x_1352_; 
v___x_1352_ = lean_unsigned_to_nat(0u);
v___y_1343_ = v___x_1352_;
goto v___jp_1342_;
}
v___jp_1331_:
{
lean_object* v___x_1335_; lean_object* v___x_1337_; 
v___x_1335_ = lean_nat_add(v___y_1332_, v___y_1334_);
lean_dec(v___y_1334_);
lean_dec(v___y_1332_);
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 4, v_r_1305_);
lean_ctor_set(v___x_1327_, 3, v_r_1321_);
lean_ctor_set(v___x_1327_, 2, v_v_1303_);
lean_ctor_set(v___x_1327_, 1, v_k_1302_);
lean_ctor_set(v___x_1327_, 0, v___x_1335_);
v___x_1337_ = v___x_1327_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___x_1335_);
lean_ctor_set(v_reuseFailAlloc_1341_, 1, v_k_1302_);
lean_ctor_set(v_reuseFailAlloc_1341_, 2, v_v_1303_);
lean_ctor_set(v_reuseFailAlloc_1341_, 3, v_r_1321_);
lean_ctor_set(v_reuseFailAlloc_1341_, 4, v_r_1305_);
v___x_1337_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
lean_object* v___x_1339_; 
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 4, v___x_1337_);
lean_ctor_set(v___x_1315_, 3, v___y_1333_);
lean_ctor_set(v___x_1315_, 2, v_v_1319_);
lean_ctor_set(v___x_1315_, 1, v_k_1318_);
lean_ctor_set(v___x_1315_, 0, v___x_1330_);
v___x_1339_ = v___x_1315_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v___x_1330_);
lean_ctor_set(v_reuseFailAlloc_1340_, 1, v_k_1318_);
lean_ctor_set(v_reuseFailAlloc_1340_, 2, v_v_1319_);
lean_ctor_set(v_reuseFailAlloc_1340_, 3, v___y_1333_);
lean_ctor_set(v_reuseFailAlloc_1340_, 4, v___x_1337_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
v___jp_1342_:
{
lean_object* v___x_1344_; lean_object* v___x_1346_; 
v___x_1344_ = lean_nat_add(v___x_1329_, v___y_1343_);
lean_dec(v___y_1343_);
lean_dec(v___x_1329_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 4, v_l_1320_);
lean_ctor_set(v___x_1295_, 3, v_impl_1298_);
lean_ctor_set(v___x_1295_, 0, v___x_1344_);
v___x_1346_ = v___x_1295_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v___x_1344_);
lean_ctor_set(v_reuseFailAlloc_1350_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1350_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1350_, 3, v_impl_1298_);
lean_ctor_set(v_reuseFailAlloc_1350_, 4, v_l_1320_);
v___x_1346_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
lean_object* v___x_1347_; 
v___x_1347_ = lean_nat_add(v___x_1299_, v_size_1322_);
if (lean_obj_tag(v_r_1321_) == 0)
{
lean_object* v_size_1348_; 
v_size_1348_ = lean_ctor_get(v_r_1321_, 0);
lean_inc(v_size_1348_);
v___y_1332_ = v___x_1347_;
v___y_1333_ = v___x_1346_;
v___y_1334_ = v_size_1348_;
goto v___jp_1331_;
}
else
{
lean_object* v___x_1349_; 
v___x_1349_ = lean_unsigned_to_nat(0u);
v___y_1332_ = v___x_1347_;
v___y_1333_ = v___x_1346_;
v___y_1334_ = v___x_1349_;
goto v___jp_1331_;
}
}
}
}
}
else
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1363_; 
lean_del_object(v___x_1295_);
v___x_1359_ = lean_nat_add(v___x_1299_, v_size_1300_);
lean_dec(v_size_1300_);
v___x_1360_ = lean_nat_add(v___x_1359_, v_size_1301_);
lean_dec(v_size_1301_);
v___x_1361_ = lean_nat_add(v___x_1359_, v_size_1317_);
lean_dec(v___x_1359_);
lean_inc_ref(v_impl_1298_);
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 4, v_l_1304_);
lean_ctor_set(v___x_1315_, 3, v_impl_1298_);
lean_ctor_set(v___x_1315_, 2, v_v_1291_);
lean_ctor_set(v___x_1315_, 1, v_k_1290_);
lean_ctor_set(v___x_1315_, 0, v___x_1361_);
v___x_1363_ = v___x_1315_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v___x_1361_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1376_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1376_, 3, v_impl_1298_);
lean_ctor_set(v_reuseFailAlloc_1376_, 4, v_l_1304_);
v___x_1363_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
v_isSharedCheck_1370_ = !lean_is_exclusive(v_impl_1298_);
if (v_isSharedCheck_1370_ == 0)
{
lean_object* v_unused_1371_; lean_object* v_unused_1372_; lean_object* v_unused_1373_; lean_object* v_unused_1374_; lean_object* v_unused_1375_; 
v_unused_1371_ = lean_ctor_get(v_impl_1298_, 4);
lean_dec(v_unused_1371_);
v_unused_1372_ = lean_ctor_get(v_impl_1298_, 3);
lean_dec(v_unused_1372_);
v_unused_1373_ = lean_ctor_get(v_impl_1298_, 2);
lean_dec(v_unused_1373_);
v_unused_1374_ = lean_ctor_get(v_impl_1298_, 1);
lean_dec(v_unused_1374_);
v_unused_1375_ = lean_ctor_get(v_impl_1298_, 0);
lean_dec(v_unused_1375_);
v___x_1365_ = v_impl_1298_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_dec(v_impl_1298_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 4, v_r_1305_);
lean_ctor_set(v___x_1365_, 3, v___x_1363_);
lean_ctor_set(v___x_1365_, 2, v_v_1303_);
lean_ctor_set(v___x_1365_, 1, v_k_1302_);
lean_ctor_set(v___x_1365_, 0, v___x_1360_);
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v___x_1360_);
lean_ctor_set(v_reuseFailAlloc_1369_, 1, v_k_1302_);
lean_ctor_set(v_reuseFailAlloc_1369_, 2, v_v_1303_);
lean_ctor_set(v_reuseFailAlloc_1369_, 3, v___x_1363_);
lean_ctor_set(v_reuseFailAlloc_1369_, 4, v_r_1305_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1383_; lean_object* v___x_1384_; lean_object* v___x_1386_; 
v_size_1383_ = lean_ctor_get(v_impl_1298_, 0);
lean_inc(v_size_1383_);
v___x_1384_ = lean_nat_add(v___x_1299_, v_size_1383_);
lean_dec(v_size_1383_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 3, v_impl_1298_);
lean_ctor_set(v___x_1295_, 0, v___x_1384_);
v___x_1386_ = v___x_1295_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1384_);
lean_ctor_set(v_reuseFailAlloc_1387_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1387_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1387_, 3, v_impl_1298_);
lean_ctor_set(v_reuseFailAlloc_1387_, 4, v_r_1293_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
else
{
if (lean_obj_tag(v_r_1293_) == 0)
{
lean_object* v_l_1388_; 
v_l_1388_ = lean_ctor_get(v_r_1293_, 3);
lean_inc(v_l_1388_);
if (lean_obj_tag(v_l_1388_) == 0)
{
lean_object* v_r_1389_; 
v_r_1389_ = lean_ctor_get(v_r_1293_, 4);
lean_inc(v_r_1389_);
if (lean_obj_tag(v_r_1389_) == 0)
{
lean_object* v_size_1390_; lean_object* v_k_1391_; lean_object* v_v_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1405_; 
v_size_1390_ = lean_ctor_get(v_r_1293_, 0);
v_k_1391_ = lean_ctor_get(v_r_1293_, 1);
v_v_1392_ = lean_ctor_get(v_r_1293_, 2);
v_isSharedCheck_1405_ = !lean_is_exclusive(v_r_1293_);
if (v_isSharedCheck_1405_ == 0)
{
lean_object* v_unused_1406_; lean_object* v_unused_1407_; 
v_unused_1406_ = lean_ctor_get(v_r_1293_, 4);
lean_dec(v_unused_1406_);
v_unused_1407_ = lean_ctor_get(v_r_1293_, 3);
lean_dec(v_unused_1407_);
v___x_1394_ = v_r_1293_;
v_isShared_1395_ = v_isSharedCheck_1405_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_v_1392_);
lean_inc(v_k_1391_);
lean_inc(v_size_1390_);
lean_dec(v_r_1293_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1405_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v_size_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1400_; 
v_size_1396_ = lean_ctor_get(v_l_1388_, 0);
v___x_1397_ = lean_nat_add(v___x_1299_, v_size_1390_);
lean_dec(v_size_1390_);
v___x_1398_ = lean_nat_add(v___x_1299_, v_size_1396_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v_l_1388_);
lean_ctor_set(v___x_1394_, 3, v_impl_1298_);
lean_ctor_set(v___x_1394_, 2, v_v_1291_);
lean_ctor_set(v___x_1394_, 1, v_k_1290_);
lean_ctor_set(v___x_1394_, 0, v___x_1398_);
v___x_1400_ = v___x_1394_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1398_);
lean_ctor_set(v_reuseFailAlloc_1404_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1404_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1404_, 3, v_impl_1298_);
lean_ctor_set(v_reuseFailAlloc_1404_, 4, v_l_1388_);
v___x_1400_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
lean_object* v___x_1402_; 
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 4, v_r_1389_);
lean_ctor_set(v___x_1295_, 3, v___x_1400_);
lean_ctor_set(v___x_1295_, 2, v_v_1392_);
lean_ctor_set(v___x_1295_, 1, v_k_1391_);
lean_ctor_set(v___x_1295_, 0, v___x_1397_);
v___x_1402_ = v___x_1295_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v___x_1397_);
lean_ctor_set(v_reuseFailAlloc_1403_, 1, v_k_1391_);
lean_ctor_set(v_reuseFailAlloc_1403_, 2, v_v_1392_);
lean_ctor_set(v_reuseFailAlloc_1403_, 3, v___x_1400_);
lean_ctor_set(v_reuseFailAlloc_1403_, 4, v_r_1389_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
}
}
else
{
lean_object* v_k_1408_; lean_object* v_v_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1432_; 
v_k_1408_ = lean_ctor_get(v_r_1293_, 1);
v_v_1409_ = lean_ctor_get(v_r_1293_, 2);
v_isSharedCheck_1432_ = !lean_is_exclusive(v_r_1293_);
if (v_isSharedCheck_1432_ == 0)
{
lean_object* v_unused_1433_; lean_object* v_unused_1434_; lean_object* v_unused_1435_; 
v_unused_1433_ = lean_ctor_get(v_r_1293_, 4);
lean_dec(v_unused_1433_);
v_unused_1434_ = lean_ctor_get(v_r_1293_, 3);
lean_dec(v_unused_1434_);
v_unused_1435_ = lean_ctor_get(v_r_1293_, 0);
lean_dec(v_unused_1435_);
v___x_1411_ = v_r_1293_;
v_isShared_1412_ = v_isSharedCheck_1432_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_v_1409_);
lean_inc(v_k_1408_);
lean_dec(v_r_1293_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1432_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v_k_1413_; lean_object* v_v_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1428_; 
v_k_1413_ = lean_ctor_get(v_l_1388_, 1);
v_v_1414_ = lean_ctor_get(v_l_1388_, 2);
v_isSharedCheck_1428_ = !lean_is_exclusive(v_l_1388_);
if (v_isSharedCheck_1428_ == 0)
{
lean_object* v_unused_1429_; lean_object* v_unused_1430_; lean_object* v_unused_1431_; 
v_unused_1429_ = lean_ctor_get(v_l_1388_, 4);
lean_dec(v_unused_1429_);
v_unused_1430_ = lean_ctor_get(v_l_1388_, 3);
lean_dec(v_unused_1430_);
v_unused_1431_ = lean_ctor_get(v_l_1388_, 0);
lean_dec(v_unused_1431_);
v___x_1416_ = v_l_1388_;
v_isShared_1417_ = v_isSharedCheck_1428_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_v_1414_);
lean_inc(v_k_1413_);
lean_dec(v_l_1388_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1428_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1418_; lean_object* v___x_1420_; 
v___x_1418_ = lean_unsigned_to_nat(3u);
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 4, v_r_1389_);
lean_ctor_set(v___x_1416_, 3, v_r_1389_);
lean_ctor_set(v___x_1416_, 2, v_v_1291_);
lean_ctor_set(v___x_1416_, 1, v_k_1290_);
lean_ctor_set(v___x_1416_, 0, v___x_1299_);
v___x_1420_ = v___x_1416_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v___x_1299_);
lean_ctor_set(v_reuseFailAlloc_1427_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1427_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1427_, 3, v_r_1389_);
lean_ctor_set(v_reuseFailAlloc_1427_, 4, v_r_1389_);
v___x_1420_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
lean_object* v___x_1422_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 3, v_r_1389_);
lean_ctor_set(v___x_1411_, 0, v___x_1299_);
v___x_1422_ = v___x_1411_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1299_);
lean_ctor_set(v_reuseFailAlloc_1426_, 1, v_k_1408_);
lean_ctor_set(v_reuseFailAlloc_1426_, 2, v_v_1409_);
lean_ctor_set(v_reuseFailAlloc_1426_, 3, v_r_1389_);
lean_ctor_set(v_reuseFailAlloc_1426_, 4, v_r_1389_);
v___x_1422_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
lean_object* v___x_1424_; 
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 4, v___x_1422_);
lean_ctor_set(v___x_1295_, 3, v___x_1420_);
lean_ctor_set(v___x_1295_, 2, v_v_1414_);
lean_ctor_set(v___x_1295_, 1, v_k_1413_);
lean_ctor_set(v___x_1295_, 0, v___x_1418_);
v___x_1424_ = v___x_1295_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v___x_1418_);
lean_ctor_set(v_reuseFailAlloc_1425_, 1, v_k_1413_);
lean_ctor_set(v_reuseFailAlloc_1425_, 2, v_v_1414_);
lean_ctor_set(v_reuseFailAlloc_1425_, 3, v___x_1420_);
lean_ctor_set(v_reuseFailAlloc_1425_, 4, v___x_1422_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_1436_; 
v_r_1436_ = lean_ctor_get(v_r_1293_, 4);
lean_inc(v_r_1436_);
if (lean_obj_tag(v_r_1436_) == 0)
{
lean_object* v_k_1437_; lean_object* v_v_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1449_; 
v_k_1437_ = lean_ctor_get(v_r_1293_, 1);
v_v_1438_ = lean_ctor_get(v_r_1293_, 2);
v_isSharedCheck_1449_ = !lean_is_exclusive(v_r_1293_);
if (v_isSharedCheck_1449_ == 0)
{
lean_object* v_unused_1450_; lean_object* v_unused_1451_; lean_object* v_unused_1452_; 
v_unused_1450_ = lean_ctor_get(v_r_1293_, 4);
lean_dec(v_unused_1450_);
v_unused_1451_ = lean_ctor_get(v_r_1293_, 3);
lean_dec(v_unused_1451_);
v_unused_1452_ = lean_ctor_get(v_r_1293_, 0);
lean_dec(v_unused_1452_);
v___x_1440_ = v_r_1293_;
v_isShared_1441_ = v_isSharedCheck_1449_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_v_1438_);
lean_inc(v_k_1437_);
lean_dec(v_r_1293_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1449_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1442_; lean_object* v___x_1444_; 
v___x_1442_ = lean_unsigned_to_nat(3u);
if (v_isShared_1441_ == 0)
{
lean_ctor_set(v___x_1440_, 4, v_l_1388_);
lean_ctor_set(v___x_1440_, 2, v_v_1291_);
lean_ctor_set(v___x_1440_, 1, v_k_1290_);
lean_ctor_set(v___x_1440_, 0, v___x_1299_);
v___x_1444_ = v___x_1440_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1299_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1448_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1448_, 3, v_l_1388_);
lean_ctor_set(v_reuseFailAlloc_1448_, 4, v_l_1388_);
v___x_1444_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
lean_object* v___x_1446_; 
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 4, v_r_1436_);
lean_ctor_set(v___x_1295_, 3, v___x_1444_);
lean_ctor_set(v___x_1295_, 2, v_v_1438_);
lean_ctor_set(v___x_1295_, 1, v_k_1437_);
lean_ctor_set(v___x_1295_, 0, v___x_1442_);
v___x_1446_ = v___x_1295_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v___x_1442_);
lean_ctor_set(v_reuseFailAlloc_1447_, 1, v_k_1437_);
lean_ctor_set(v_reuseFailAlloc_1447_, 2, v_v_1438_);
lean_ctor_set(v_reuseFailAlloc_1447_, 3, v___x_1444_);
lean_ctor_set(v_reuseFailAlloc_1447_, 4, v_r_1436_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
}
else
{
lean_object* v_size_1453_; lean_object* v_k_1454_; lean_object* v_v_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1466_; 
v_size_1453_ = lean_ctor_get(v_r_1293_, 0);
v_k_1454_ = lean_ctor_get(v_r_1293_, 1);
v_v_1455_ = lean_ctor_get(v_r_1293_, 2);
v_isSharedCheck_1466_ = !lean_is_exclusive(v_r_1293_);
if (v_isSharedCheck_1466_ == 0)
{
lean_object* v_unused_1467_; lean_object* v_unused_1468_; 
v_unused_1467_ = lean_ctor_get(v_r_1293_, 4);
lean_dec(v_unused_1467_);
v_unused_1468_ = lean_ctor_get(v_r_1293_, 3);
lean_dec(v_unused_1468_);
v___x_1457_ = v_r_1293_;
v_isShared_1458_ = v_isSharedCheck_1466_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_v_1455_);
lean_inc(v_k_1454_);
lean_inc(v_size_1453_);
lean_dec(v_r_1293_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1466_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 3, v_r_1436_);
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_size_1453_);
lean_ctor_set(v_reuseFailAlloc_1465_, 1, v_k_1454_);
lean_ctor_set(v_reuseFailAlloc_1465_, 2, v_v_1455_);
lean_ctor_set(v_reuseFailAlloc_1465_, 3, v_r_1436_);
lean_ctor_set(v_reuseFailAlloc_1465_, 4, v_r_1436_);
v___x_1460_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
lean_object* v___x_1461_; lean_object* v___x_1463_; 
v___x_1461_ = lean_unsigned_to_nat(2u);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 4, v___x_1460_);
lean_ctor_set(v___x_1295_, 3, v_r_1436_);
lean_ctor_set(v___x_1295_, 0, v___x_1461_);
v___x_1463_ = v___x_1295_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v___x_1461_);
lean_ctor_set(v_reuseFailAlloc_1464_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1464_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1464_, 3, v_r_1436_);
lean_ctor_set(v_reuseFailAlloc_1464_, 4, v___x_1460_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
}
}
else
{
lean_object* v___x_1470_; 
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 3, v_r_1293_);
lean_ctor_set(v___x_1295_, 0, v___x_1299_);
v___x_1470_ = v___x_1295_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1299_);
lean_ctor_set(v_reuseFailAlloc_1471_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1471_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1471_, 3, v_r_1293_);
lean_ctor_set(v_reuseFailAlloc_1471_, 4, v_r_1293_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
case 1:
{
lean_del_object(v___x_1295_);
lean_dec(v_v_1291_);
lean_dec(v_k_1290_);
if (lean_obj_tag(v_l_1292_) == 0)
{
if (lean_obj_tag(v_r_1293_) == 0)
{
lean_object* v_size_1472_; lean_object* v_k_1473_; lean_object* v_v_1474_; lean_object* v_l_1475_; lean_object* v_r_1476_; lean_object* v_size_1477_; lean_object* v_k_1478_; lean_object* v_v_1479_; lean_object* v_l_1480_; lean_object* v_r_1481_; lean_object* v___x_1482_; uint8_t v___x_1483_; 
v_size_1472_ = lean_ctor_get(v_l_1292_, 0);
v_k_1473_ = lean_ctor_get(v_l_1292_, 1);
v_v_1474_ = lean_ctor_get(v_l_1292_, 2);
v_l_1475_ = lean_ctor_get(v_l_1292_, 3);
v_r_1476_ = lean_ctor_get(v_l_1292_, 4);
lean_inc(v_r_1476_);
v_size_1477_ = lean_ctor_get(v_r_1293_, 0);
v_k_1478_ = lean_ctor_get(v_r_1293_, 1);
v_v_1479_ = lean_ctor_get(v_r_1293_, 2);
v_l_1480_ = lean_ctor_get(v_r_1293_, 3);
lean_inc(v_l_1480_);
v_r_1481_ = lean_ctor_get(v_r_1293_, 4);
v___x_1482_ = lean_unsigned_to_nat(1u);
v___x_1483_ = lean_nat_dec_lt(v_size_1472_, v_size_1477_);
if (v___x_1483_ == 0)
{
lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1619_; 
lean_inc(v_l_1475_);
lean_inc(v_v_1474_);
lean_inc(v_k_1473_);
v_isSharedCheck_1619_ = !lean_is_exclusive(v_l_1292_);
if (v_isSharedCheck_1619_ == 0)
{
lean_object* v_unused_1620_; lean_object* v_unused_1621_; lean_object* v_unused_1622_; lean_object* v_unused_1623_; lean_object* v_unused_1624_; 
v_unused_1620_ = lean_ctor_get(v_l_1292_, 4);
lean_dec(v_unused_1620_);
v_unused_1621_ = lean_ctor_get(v_l_1292_, 3);
lean_dec(v_unused_1621_);
v_unused_1622_ = lean_ctor_get(v_l_1292_, 2);
lean_dec(v_unused_1622_);
v_unused_1623_ = lean_ctor_get(v_l_1292_, 1);
lean_dec(v_unused_1623_);
v_unused_1624_ = lean_ctor_get(v_l_1292_, 0);
lean_dec(v_unused_1624_);
v___x_1485_ = v_l_1292_;
v_isShared_1486_ = v_isSharedCheck_1619_;
goto v_resetjp_1484_;
}
else
{
lean_dec(v_l_1292_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1619_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1487_; lean_object* v_tree_1488_; 
v___x_1487_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_1473_, v_v_1474_, v_l_1475_, v_r_1476_);
v_tree_1488_ = lean_ctor_get(v___x_1487_, 2);
lean_inc(v_tree_1488_);
if (lean_obj_tag(v_tree_1488_) == 0)
{
lean_object* v_k_1489_; lean_object* v_v_1490_; lean_object* v_size_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; uint8_t v___x_1494_; 
v_k_1489_ = lean_ctor_get(v___x_1487_, 0);
lean_inc(v_k_1489_);
v_v_1490_ = lean_ctor_get(v___x_1487_, 1);
lean_inc(v_v_1490_);
lean_dec_ref(v___x_1487_);
v_size_1491_ = lean_ctor_get(v_tree_1488_, 0);
v___x_1492_ = lean_unsigned_to_nat(3u);
v___x_1493_ = lean_nat_mul(v___x_1492_, v_size_1491_);
v___x_1494_ = lean_nat_dec_lt(v___x_1493_, v_size_1477_);
lean_dec(v___x_1493_);
if (v___x_1494_ == 0)
{
lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1498_; 
lean_dec(v_l_1480_);
v___x_1495_ = lean_nat_add(v___x_1482_, v_size_1491_);
v___x_1496_ = lean_nat_add(v___x_1495_, v_size_1477_);
lean_dec(v___x_1495_);
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 4, v_r_1293_);
lean_ctor_set(v___x_1485_, 3, v_tree_1488_);
lean_ctor_set(v___x_1485_, 2, v_v_1490_);
lean_ctor_set(v___x_1485_, 1, v_k_1489_);
lean_ctor_set(v___x_1485_, 0, v___x_1496_);
v___x_1498_ = v___x_1485_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v___x_1496_);
lean_ctor_set(v_reuseFailAlloc_1499_, 1, v_k_1489_);
lean_ctor_set(v_reuseFailAlloc_1499_, 2, v_v_1490_);
lean_ctor_set(v_reuseFailAlloc_1499_, 3, v_tree_1488_);
lean_ctor_set(v_reuseFailAlloc_1499_, 4, v_r_1293_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
return v___x_1498_;
}
}
else
{
lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1554_; 
lean_inc(v_r_1481_);
lean_inc(v_v_1479_);
lean_inc(v_k_1478_);
lean_inc(v_size_1477_);
v_isSharedCheck_1554_ = !lean_is_exclusive(v_r_1293_);
if (v_isSharedCheck_1554_ == 0)
{
lean_object* v_unused_1555_; lean_object* v_unused_1556_; lean_object* v_unused_1557_; lean_object* v_unused_1558_; lean_object* v_unused_1559_; 
v_unused_1555_ = lean_ctor_get(v_r_1293_, 4);
lean_dec(v_unused_1555_);
v_unused_1556_ = lean_ctor_get(v_r_1293_, 3);
lean_dec(v_unused_1556_);
v_unused_1557_ = lean_ctor_get(v_r_1293_, 2);
lean_dec(v_unused_1557_);
v_unused_1558_ = lean_ctor_get(v_r_1293_, 1);
lean_dec(v_unused_1558_);
v_unused_1559_ = lean_ctor_get(v_r_1293_, 0);
lean_dec(v_unused_1559_);
v___x_1501_ = v_r_1293_;
v_isShared_1502_ = v_isSharedCheck_1554_;
goto v_resetjp_1500_;
}
else
{
lean_dec(v_r_1293_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1554_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v_size_1503_; lean_object* v_k_1504_; lean_object* v_v_1505_; lean_object* v_l_1506_; lean_object* v_r_1507_; lean_object* v_size_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; uint8_t v___x_1511_; 
v_size_1503_ = lean_ctor_get(v_l_1480_, 0);
v_k_1504_ = lean_ctor_get(v_l_1480_, 1);
v_v_1505_ = lean_ctor_get(v_l_1480_, 2);
v_l_1506_ = lean_ctor_get(v_l_1480_, 3);
v_r_1507_ = lean_ctor_get(v_l_1480_, 4);
v_size_1508_ = lean_ctor_get(v_r_1481_, 0);
v___x_1509_ = lean_unsigned_to_nat(2u);
v___x_1510_ = lean_nat_mul(v___x_1509_, v_size_1508_);
v___x_1511_ = lean_nat_dec_lt(v_size_1503_, v___x_1510_);
lean_dec(v___x_1510_);
if (v___x_1511_ == 0)
{
lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1539_; 
lean_inc(v_r_1507_);
lean_inc(v_l_1506_);
lean_inc(v_v_1505_);
lean_inc(v_k_1504_);
v_isSharedCheck_1539_ = !lean_is_exclusive(v_l_1480_);
if (v_isSharedCheck_1539_ == 0)
{
lean_object* v_unused_1540_; lean_object* v_unused_1541_; lean_object* v_unused_1542_; lean_object* v_unused_1543_; lean_object* v_unused_1544_; 
v_unused_1540_ = lean_ctor_get(v_l_1480_, 4);
lean_dec(v_unused_1540_);
v_unused_1541_ = lean_ctor_get(v_l_1480_, 3);
lean_dec(v_unused_1541_);
v_unused_1542_ = lean_ctor_get(v_l_1480_, 2);
lean_dec(v_unused_1542_);
v_unused_1543_ = lean_ctor_get(v_l_1480_, 1);
lean_dec(v_unused_1543_);
v_unused_1544_ = lean_ctor_get(v_l_1480_, 0);
lean_dec(v_unused_1544_);
v___x_1513_ = v_l_1480_;
v_isShared_1514_ = v_isSharedCheck_1539_;
goto v_resetjp_1512_;
}
else
{
lean_dec(v_l_1480_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1539_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___y_1518_; lean_object* v___y_1519_; lean_object* v___y_1520_; lean_object* v___y_1529_; 
v___x_1515_ = lean_nat_add(v___x_1482_, v_size_1491_);
v___x_1516_ = lean_nat_add(v___x_1515_, v_size_1477_);
lean_dec(v_size_1477_);
if (lean_obj_tag(v_l_1506_) == 0)
{
lean_object* v_size_1537_; 
v_size_1537_ = lean_ctor_get(v_l_1506_, 0);
lean_inc(v_size_1537_);
v___y_1529_ = v_size_1537_;
goto v___jp_1528_;
}
else
{
lean_object* v___x_1538_; 
v___x_1538_ = lean_unsigned_to_nat(0u);
v___y_1529_ = v___x_1538_;
goto v___jp_1528_;
}
v___jp_1517_:
{
lean_object* v___x_1521_; lean_object* v___x_1523_; 
v___x_1521_ = lean_nat_add(v___y_1518_, v___y_1520_);
lean_dec(v___y_1520_);
lean_dec(v___y_1518_);
if (v_isShared_1514_ == 0)
{
lean_ctor_set(v___x_1513_, 4, v_r_1481_);
lean_ctor_set(v___x_1513_, 3, v_r_1507_);
lean_ctor_set(v___x_1513_, 2, v_v_1479_);
lean_ctor_set(v___x_1513_, 1, v_k_1478_);
lean_ctor_set(v___x_1513_, 0, v___x_1521_);
v___x_1523_ = v___x_1513_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v___x_1521_);
lean_ctor_set(v_reuseFailAlloc_1527_, 1, v_k_1478_);
lean_ctor_set(v_reuseFailAlloc_1527_, 2, v_v_1479_);
lean_ctor_set(v_reuseFailAlloc_1527_, 3, v_r_1507_);
lean_ctor_set(v_reuseFailAlloc_1527_, 4, v_r_1481_);
v___x_1523_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
lean_object* v___x_1525_; 
if (v_isShared_1502_ == 0)
{
lean_ctor_set(v___x_1501_, 4, v___x_1523_);
lean_ctor_set(v___x_1501_, 3, v___y_1519_);
lean_ctor_set(v___x_1501_, 2, v_v_1505_);
lean_ctor_set(v___x_1501_, 1, v_k_1504_);
lean_ctor_set(v___x_1501_, 0, v___x_1516_);
v___x_1525_ = v___x_1501_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v___x_1516_);
lean_ctor_set(v_reuseFailAlloc_1526_, 1, v_k_1504_);
lean_ctor_set(v_reuseFailAlloc_1526_, 2, v_v_1505_);
lean_ctor_set(v_reuseFailAlloc_1526_, 3, v___y_1519_);
lean_ctor_set(v_reuseFailAlloc_1526_, 4, v___x_1523_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
v___jp_1528_:
{
lean_object* v___x_1530_; lean_object* v___x_1532_; 
v___x_1530_ = lean_nat_add(v___x_1515_, v___y_1529_);
lean_dec(v___y_1529_);
lean_dec(v___x_1515_);
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 4, v_l_1506_);
lean_ctor_set(v___x_1485_, 3, v_tree_1488_);
lean_ctor_set(v___x_1485_, 2, v_v_1490_);
lean_ctor_set(v___x_1485_, 1, v_k_1489_);
lean_ctor_set(v___x_1485_, 0, v___x_1530_);
v___x_1532_ = v___x_1485_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v___x_1530_);
lean_ctor_set(v_reuseFailAlloc_1536_, 1, v_k_1489_);
lean_ctor_set(v_reuseFailAlloc_1536_, 2, v_v_1490_);
lean_ctor_set(v_reuseFailAlloc_1536_, 3, v_tree_1488_);
lean_ctor_set(v_reuseFailAlloc_1536_, 4, v_l_1506_);
v___x_1532_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
lean_object* v___x_1533_; 
v___x_1533_ = lean_nat_add(v___x_1482_, v_size_1508_);
if (lean_obj_tag(v_r_1507_) == 0)
{
lean_object* v_size_1534_; 
v_size_1534_ = lean_ctor_get(v_r_1507_, 0);
lean_inc(v_size_1534_);
v___y_1518_ = v___x_1533_;
v___y_1519_ = v___x_1532_;
v___y_1520_ = v_size_1534_;
goto v___jp_1517_;
}
else
{
lean_object* v___x_1535_; 
v___x_1535_ = lean_unsigned_to_nat(0u);
v___y_1518_ = v___x_1533_;
v___y_1519_ = v___x_1532_;
v___y_1520_ = v___x_1535_;
goto v___jp_1517_;
}
}
}
}
}
else
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1549_; 
v___x_1545_ = lean_nat_add(v___x_1482_, v_size_1491_);
v___x_1546_ = lean_nat_add(v___x_1545_, v_size_1477_);
lean_dec(v_size_1477_);
v___x_1547_ = lean_nat_add(v___x_1545_, v_size_1503_);
lean_dec(v___x_1545_);
if (v_isShared_1502_ == 0)
{
lean_ctor_set(v___x_1501_, 4, v_l_1480_);
lean_ctor_set(v___x_1501_, 3, v_tree_1488_);
lean_ctor_set(v___x_1501_, 2, v_v_1490_);
lean_ctor_set(v___x_1501_, 1, v_k_1489_);
lean_ctor_set(v___x_1501_, 0, v___x_1547_);
v___x_1549_ = v___x_1501_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v___x_1547_);
lean_ctor_set(v_reuseFailAlloc_1553_, 1, v_k_1489_);
lean_ctor_set(v_reuseFailAlloc_1553_, 2, v_v_1490_);
lean_ctor_set(v_reuseFailAlloc_1553_, 3, v_tree_1488_);
lean_ctor_set(v_reuseFailAlloc_1553_, 4, v_l_1480_);
v___x_1549_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
lean_object* v___x_1551_; 
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 4, v_r_1481_);
lean_ctor_set(v___x_1485_, 3, v___x_1549_);
lean_ctor_set(v___x_1485_, 2, v_v_1479_);
lean_ctor_set(v___x_1485_, 1, v_k_1478_);
lean_ctor_set(v___x_1485_, 0, v___x_1546_);
v___x_1551_ = v___x_1485_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v___x_1546_);
lean_ctor_set(v_reuseFailAlloc_1552_, 1, v_k_1478_);
lean_ctor_set(v_reuseFailAlloc_1552_, 2, v_v_1479_);
lean_ctor_set(v_reuseFailAlloc_1552_, 3, v___x_1549_);
lean_ctor_set(v_reuseFailAlloc_1552_, 4, v_r_1481_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
}
}
}
else
{
lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1613_; 
lean_inc(v_r_1481_);
lean_inc(v_v_1479_);
lean_inc(v_k_1478_);
lean_inc(v_size_1477_);
v_isSharedCheck_1613_ = !lean_is_exclusive(v_r_1293_);
if (v_isSharedCheck_1613_ == 0)
{
lean_object* v_unused_1614_; lean_object* v_unused_1615_; lean_object* v_unused_1616_; lean_object* v_unused_1617_; lean_object* v_unused_1618_; 
v_unused_1614_ = lean_ctor_get(v_r_1293_, 4);
lean_dec(v_unused_1614_);
v_unused_1615_ = lean_ctor_get(v_r_1293_, 3);
lean_dec(v_unused_1615_);
v_unused_1616_ = lean_ctor_get(v_r_1293_, 2);
lean_dec(v_unused_1616_);
v_unused_1617_ = lean_ctor_get(v_r_1293_, 1);
lean_dec(v_unused_1617_);
v_unused_1618_ = lean_ctor_get(v_r_1293_, 0);
lean_dec(v_unused_1618_);
v___x_1561_ = v_r_1293_;
v_isShared_1562_ = v_isSharedCheck_1613_;
goto v_resetjp_1560_;
}
else
{
lean_dec(v_r_1293_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1613_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
if (lean_obj_tag(v_l_1480_) == 0)
{
if (lean_obj_tag(v_r_1481_) == 0)
{
lean_object* v_k_1563_; lean_object* v_v_1564_; lean_object* v_size_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1569_; 
v_k_1563_ = lean_ctor_get(v___x_1487_, 0);
lean_inc(v_k_1563_);
v_v_1564_ = lean_ctor_get(v___x_1487_, 1);
lean_inc(v_v_1564_);
lean_dec_ref(v___x_1487_);
v_size_1565_ = lean_ctor_get(v_l_1480_, 0);
v___x_1566_ = lean_nat_add(v___x_1482_, v_size_1477_);
lean_dec(v_size_1477_);
v___x_1567_ = lean_nat_add(v___x_1482_, v_size_1565_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 4, v_l_1480_);
lean_ctor_set(v___x_1561_, 3, v_tree_1488_);
lean_ctor_set(v___x_1561_, 2, v_v_1564_);
lean_ctor_set(v___x_1561_, 1, v_k_1563_);
lean_ctor_set(v___x_1561_, 0, v___x_1567_);
v___x_1569_ = v___x_1561_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v___x_1567_);
lean_ctor_set(v_reuseFailAlloc_1573_, 1, v_k_1563_);
lean_ctor_set(v_reuseFailAlloc_1573_, 2, v_v_1564_);
lean_ctor_set(v_reuseFailAlloc_1573_, 3, v_tree_1488_);
lean_ctor_set(v_reuseFailAlloc_1573_, 4, v_l_1480_);
v___x_1569_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
lean_object* v___x_1571_; 
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 4, v_r_1481_);
lean_ctor_set(v___x_1485_, 3, v___x_1569_);
lean_ctor_set(v___x_1485_, 2, v_v_1479_);
lean_ctor_set(v___x_1485_, 1, v_k_1478_);
lean_ctor_set(v___x_1485_, 0, v___x_1566_);
v___x_1571_ = v___x_1485_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v___x_1566_);
lean_ctor_set(v_reuseFailAlloc_1572_, 1, v_k_1478_);
lean_ctor_set(v_reuseFailAlloc_1572_, 2, v_v_1479_);
lean_ctor_set(v_reuseFailAlloc_1572_, 3, v___x_1569_);
lean_ctor_set(v_reuseFailAlloc_1572_, 4, v_r_1481_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
}
else
{
lean_object* v_k_1574_; lean_object* v_v_1575_; lean_object* v_k_1576_; lean_object* v_v_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1591_; 
lean_dec(v_size_1477_);
v_k_1574_ = lean_ctor_get(v___x_1487_, 0);
lean_inc(v_k_1574_);
v_v_1575_ = lean_ctor_get(v___x_1487_, 1);
lean_inc(v_v_1575_);
lean_dec_ref(v___x_1487_);
v_k_1576_ = lean_ctor_get(v_l_1480_, 1);
v_v_1577_ = lean_ctor_get(v_l_1480_, 2);
v_isSharedCheck_1591_ = !lean_is_exclusive(v_l_1480_);
if (v_isSharedCheck_1591_ == 0)
{
lean_object* v_unused_1592_; lean_object* v_unused_1593_; lean_object* v_unused_1594_; 
v_unused_1592_ = lean_ctor_get(v_l_1480_, 4);
lean_dec(v_unused_1592_);
v_unused_1593_ = lean_ctor_get(v_l_1480_, 3);
lean_dec(v_unused_1593_);
v_unused_1594_ = lean_ctor_get(v_l_1480_, 0);
lean_dec(v_unused_1594_);
v___x_1579_ = v_l_1480_;
v_isShared_1580_ = v_isSharedCheck_1591_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_v_1577_);
lean_inc(v_k_1576_);
lean_dec(v_l_1480_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1591_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1581_; lean_object* v___x_1583_; 
v___x_1581_ = lean_unsigned_to_nat(3u);
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 4, v_r_1481_);
lean_ctor_set(v___x_1579_, 3, v_r_1481_);
lean_ctor_set(v___x_1579_, 2, v_v_1575_);
lean_ctor_set(v___x_1579_, 1, v_k_1574_);
lean_ctor_set(v___x_1579_, 0, v___x_1482_);
v___x_1583_ = v___x_1579_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v___x_1482_);
lean_ctor_set(v_reuseFailAlloc_1590_, 1, v_k_1574_);
lean_ctor_set(v_reuseFailAlloc_1590_, 2, v_v_1575_);
lean_ctor_set(v_reuseFailAlloc_1590_, 3, v_r_1481_);
lean_ctor_set(v_reuseFailAlloc_1590_, 4, v_r_1481_);
v___x_1583_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
lean_object* v___x_1585_; 
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 3, v_r_1481_);
lean_ctor_set(v___x_1561_, 0, v___x_1482_);
v___x_1585_ = v___x_1561_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1482_);
lean_ctor_set(v_reuseFailAlloc_1589_, 1, v_k_1478_);
lean_ctor_set(v_reuseFailAlloc_1589_, 2, v_v_1479_);
lean_ctor_set(v_reuseFailAlloc_1589_, 3, v_r_1481_);
lean_ctor_set(v_reuseFailAlloc_1589_, 4, v_r_1481_);
v___x_1585_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
lean_object* v___x_1587_; 
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 4, v___x_1585_);
lean_ctor_set(v___x_1485_, 3, v___x_1583_);
lean_ctor_set(v___x_1485_, 2, v_v_1577_);
lean_ctor_set(v___x_1485_, 1, v_k_1576_);
lean_ctor_set(v___x_1485_, 0, v___x_1581_);
v___x_1587_ = v___x_1485_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v___x_1581_);
lean_ctor_set(v_reuseFailAlloc_1588_, 1, v_k_1576_);
lean_ctor_set(v_reuseFailAlloc_1588_, 2, v_v_1577_);
lean_ctor_set(v_reuseFailAlloc_1588_, 3, v___x_1583_);
lean_ctor_set(v_reuseFailAlloc_1588_, 4, v___x_1585_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1481_) == 0)
{
lean_object* v_k_1595_; lean_object* v_v_1596_; lean_object* v___x_1597_; lean_object* v___x_1599_; 
lean_dec(v_size_1477_);
v_k_1595_ = lean_ctor_get(v___x_1487_, 0);
lean_inc(v_k_1595_);
v_v_1596_ = lean_ctor_get(v___x_1487_, 1);
lean_inc(v_v_1596_);
lean_dec_ref(v___x_1487_);
v___x_1597_ = lean_unsigned_to_nat(3u);
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 4, v_l_1480_);
lean_ctor_set(v___x_1561_, 2, v_v_1596_);
lean_ctor_set(v___x_1561_, 1, v_k_1595_);
lean_ctor_set(v___x_1561_, 0, v___x_1482_);
v___x_1599_ = v___x_1561_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1482_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v_k_1595_);
lean_ctor_set(v_reuseFailAlloc_1603_, 2, v_v_1596_);
lean_ctor_set(v_reuseFailAlloc_1603_, 3, v_l_1480_);
lean_ctor_set(v_reuseFailAlloc_1603_, 4, v_l_1480_);
v___x_1599_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
lean_object* v___x_1601_; 
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 4, v_r_1481_);
lean_ctor_set(v___x_1485_, 3, v___x_1599_);
lean_ctor_set(v___x_1485_, 2, v_v_1479_);
lean_ctor_set(v___x_1485_, 1, v_k_1478_);
lean_ctor_set(v___x_1485_, 0, v___x_1597_);
v___x_1601_ = v___x_1485_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1597_);
lean_ctor_set(v_reuseFailAlloc_1602_, 1, v_k_1478_);
lean_ctor_set(v_reuseFailAlloc_1602_, 2, v_v_1479_);
lean_ctor_set(v_reuseFailAlloc_1602_, 3, v___x_1599_);
lean_ctor_set(v_reuseFailAlloc_1602_, 4, v_r_1481_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
else
{
lean_object* v_k_1604_; lean_object* v_v_1605_; lean_object* v___x_1607_; 
v_k_1604_ = lean_ctor_get(v___x_1487_, 0);
lean_inc(v_k_1604_);
v_v_1605_ = lean_ctor_get(v___x_1487_, 1);
lean_inc(v_v_1605_);
lean_dec_ref(v___x_1487_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 3, v_r_1481_);
v___x_1607_ = v___x_1561_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_size_1477_);
lean_ctor_set(v_reuseFailAlloc_1612_, 1, v_k_1478_);
lean_ctor_set(v_reuseFailAlloc_1612_, 2, v_v_1479_);
lean_ctor_set(v_reuseFailAlloc_1612_, 3, v_r_1481_);
lean_ctor_set(v_reuseFailAlloc_1612_, 4, v_r_1481_);
v___x_1607_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
lean_object* v___x_1608_; lean_object* v___x_1610_; 
v___x_1608_ = lean_unsigned_to_nat(2u);
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 4, v___x_1607_);
lean_ctor_set(v___x_1485_, 3, v_r_1481_);
lean_ctor_set(v___x_1485_, 2, v_v_1605_);
lean_ctor_set(v___x_1485_, 1, v_k_1604_);
lean_ctor_set(v___x_1485_, 0, v___x_1608_);
v___x_1610_ = v___x_1485_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v___x_1608_);
lean_ctor_set(v_reuseFailAlloc_1611_, 1, v_k_1604_);
lean_ctor_set(v_reuseFailAlloc_1611_, 2, v_v_1605_);
lean_ctor_set(v_reuseFailAlloc_1611_, 3, v_r_1481_);
lean_ctor_set(v_reuseFailAlloc_1611_, 4, v___x_1607_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
return v___x_1610_;
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
lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1777_; 
lean_inc(v_r_1481_);
lean_inc(v_v_1479_);
lean_inc(v_k_1478_);
v_isSharedCheck_1777_ = !lean_is_exclusive(v_r_1293_);
if (v_isSharedCheck_1777_ == 0)
{
lean_object* v_unused_1778_; lean_object* v_unused_1779_; lean_object* v_unused_1780_; lean_object* v_unused_1781_; lean_object* v_unused_1782_; 
v_unused_1778_ = lean_ctor_get(v_r_1293_, 4);
lean_dec(v_unused_1778_);
v_unused_1779_ = lean_ctor_get(v_r_1293_, 3);
lean_dec(v_unused_1779_);
v_unused_1780_ = lean_ctor_get(v_r_1293_, 2);
lean_dec(v_unused_1780_);
v_unused_1781_ = lean_ctor_get(v_r_1293_, 1);
lean_dec(v_unused_1781_);
v_unused_1782_ = lean_ctor_get(v_r_1293_, 0);
lean_dec(v_unused_1782_);
v___x_1626_ = v_r_1293_;
v_isShared_1627_ = v_isSharedCheck_1777_;
goto v_resetjp_1625_;
}
else
{
lean_dec(v_r_1293_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1777_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1628_; lean_object* v_tree_1629_; 
v___x_1628_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_1478_, v_v_1479_, v_l_1480_, v_r_1481_);
v_tree_1629_ = lean_ctor_get(v___x_1628_, 2);
lean_inc(v_tree_1629_);
if (lean_obj_tag(v_tree_1629_) == 0)
{
lean_object* v_k_1630_; lean_object* v_v_1631_; lean_object* v_size_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; uint8_t v___x_1635_; 
v_k_1630_ = lean_ctor_get(v___x_1628_, 0);
lean_inc(v_k_1630_);
v_v_1631_ = lean_ctor_get(v___x_1628_, 1);
lean_inc(v_v_1631_);
lean_dec_ref(v___x_1628_);
v_size_1632_ = lean_ctor_get(v_tree_1629_, 0);
v___x_1633_ = lean_unsigned_to_nat(3u);
v___x_1634_ = lean_nat_mul(v___x_1633_, v_size_1632_);
v___x_1635_ = lean_nat_dec_lt(v___x_1634_, v_size_1472_);
lean_dec(v___x_1634_);
if (v___x_1635_ == 0)
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1639_; 
lean_dec(v_r_1476_);
v___x_1636_ = lean_nat_add(v___x_1482_, v_size_1472_);
v___x_1637_ = lean_nat_add(v___x_1636_, v_size_1632_);
lean_dec(v___x_1636_);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 4, v_tree_1629_);
lean_ctor_set(v___x_1626_, 3, v_l_1292_);
lean_ctor_set(v___x_1626_, 2, v_v_1631_);
lean_ctor_set(v___x_1626_, 1, v_k_1630_);
lean_ctor_set(v___x_1626_, 0, v___x_1637_);
v___x_1639_ = v___x_1626_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1637_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v_k_1630_);
lean_ctor_set(v_reuseFailAlloc_1640_, 2, v_v_1631_);
lean_ctor_set(v_reuseFailAlloc_1640_, 3, v_l_1292_);
lean_ctor_set(v_reuseFailAlloc_1640_, 4, v_tree_1629_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
else
{
lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1706_; 
lean_inc(v_l_1475_);
lean_inc(v_v_1474_);
lean_inc(v_k_1473_);
lean_inc(v_size_1472_);
v_isSharedCheck_1706_ = !lean_is_exclusive(v_l_1292_);
if (v_isSharedCheck_1706_ == 0)
{
lean_object* v_unused_1707_; lean_object* v_unused_1708_; lean_object* v_unused_1709_; lean_object* v_unused_1710_; lean_object* v_unused_1711_; 
v_unused_1707_ = lean_ctor_get(v_l_1292_, 4);
lean_dec(v_unused_1707_);
v_unused_1708_ = lean_ctor_get(v_l_1292_, 3);
lean_dec(v_unused_1708_);
v_unused_1709_ = lean_ctor_get(v_l_1292_, 2);
lean_dec(v_unused_1709_);
v_unused_1710_ = lean_ctor_get(v_l_1292_, 1);
lean_dec(v_unused_1710_);
v_unused_1711_ = lean_ctor_get(v_l_1292_, 0);
lean_dec(v_unused_1711_);
v___x_1642_ = v_l_1292_;
v_isShared_1643_ = v_isSharedCheck_1706_;
goto v_resetjp_1641_;
}
else
{
lean_dec(v_l_1292_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1706_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v_size_1644_; lean_object* v_size_1645_; lean_object* v_k_1646_; lean_object* v_v_1647_; lean_object* v_l_1648_; lean_object* v_r_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; uint8_t v___x_1652_; 
v_size_1644_ = lean_ctor_get(v_l_1475_, 0);
v_size_1645_ = lean_ctor_get(v_r_1476_, 0);
v_k_1646_ = lean_ctor_get(v_r_1476_, 1);
v_v_1647_ = lean_ctor_get(v_r_1476_, 2);
v_l_1648_ = lean_ctor_get(v_r_1476_, 3);
v_r_1649_ = lean_ctor_get(v_r_1476_, 4);
v___x_1650_ = lean_unsigned_to_nat(2u);
v___x_1651_ = lean_nat_mul(v___x_1650_, v_size_1644_);
v___x_1652_ = lean_nat_dec_lt(v_size_1645_, v___x_1651_);
lean_dec(v___x_1651_);
if (v___x_1652_ == 0)
{
lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1690_; 
lean_inc(v_r_1649_);
lean_inc(v_l_1648_);
lean_inc(v_v_1647_);
lean_inc(v_k_1646_);
lean_del_object(v___x_1642_);
v_isSharedCheck_1690_ = !lean_is_exclusive(v_r_1476_);
if (v_isSharedCheck_1690_ == 0)
{
lean_object* v_unused_1691_; lean_object* v_unused_1692_; lean_object* v_unused_1693_; lean_object* v_unused_1694_; lean_object* v_unused_1695_; 
v_unused_1691_ = lean_ctor_get(v_r_1476_, 4);
lean_dec(v_unused_1691_);
v_unused_1692_ = lean_ctor_get(v_r_1476_, 3);
lean_dec(v_unused_1692_);
v_unused_1693_ = lean_ctor_get(v_r_1476_, 2);
lean_dec(v_unused_1693_);
v_unused_1694_ = lean_ctor_get(v_r_1476_, 1);
lean_dec(v_unused_1694_);
v_unused_1695_ = lean_ctor_get(v_r_1476_, 0);
lean_dec(v_unused_1695_);
v___x_1654_ = v_r_1476_;
v_isShared_1655_ = v_isSharedCheck_1690_;
goto v_resetjp_1653_;
}
else
{
lean_dec(v_r_1476_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1690_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___y_1659_; lean_object* v___y_1660_; lean_object* v___y_1661_; lean_object* v___x_1678_; lean_object* v___y_1680_; 
v___x_1656_ = lean_nat_add(v___x_1482_, v_size_1472_);
lean_dec(v_size_1472_);
v___x_1657_ = lean_nat_add(v___x_1656_, v_size_1632_);
lean_dec(v___x_1656_);
v___x_1678_ = lean_nat_add(v___x_1482_, v_size_1644_);
if (lean_obj_tag(v_l_1648_) == 0)
{
lean_object* v_size_1688_; 
v_size_1688_ = lean_ctor_get(v_l_1648_, 0);
lean_inc(v_size_1688_);
v___y_1680_ = v_size_1688_;
goto v___jp_1679_;
}
else
{
lean_object* v___x_1689_; 
v___x_1689_ = lean_unsigned_to_nat(0u);
v___y_1680_ = v___x_1689_;
goto v___jp_1679_;
}
v___jp_1658_:
{
lean_object* v___x_1662_; lean_object* v___x_1664_; 
v___x_1662_ = lean_nat_add(v___y_1660_, v___y_1661_);
lean_dec(v___y_1661_);
lean_dec(v___y_1660_);
lean_inc_ref(v_tree_1629_);
if (v_isShared_1655_ == 0)
{
lean_ctor_set(v___x_1654_, 4, v_tree_1629_);
lean_ctor_set(v___x_1654_, 3, v_r_1649_);
lean_ctor_set(v___x_1654_, 2, v_v_1631_);
lean_ctor_set(v___x_1654_, 1, v_k_1630_);
lean_ctor_set(v___x_1654_, 0, v___x_1662_);
v___x_1664_ = v___x_1654_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v___x_1662_);
lean_ctor_set(v_reuseFailAlloc_1677_, 1, v_k_1630_);
lean_ctor_set(v_reuseFailAlloc_1677_, 2, v_v_1631_);
lean_ctor_set(v_reuseFailAlloc_1677_, 3, v_r_1649_);
lean_ctor_set(v_reuseFailAlloc_1677_, 4, v_tree_1629_);
v___x_1664_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1671_; 
v_isSharedCheck_1671_ = !lean_is_exclusive(v_tree_1629_);
if (v_isSharedCheck_1671_ == 0)
{
lean_object* v_unused_1672_; lean_object* v_unused_1673_; lean_object* v_unused_1674_; lean_object* v_unused_1675_; lean_object* v_unused_1676_; 
v_unused_1672_ = lean_ctor_get(v_tree_1629_, 4);
lean_dec(v_unused_1672_);
v_unused_1673_ = lean_ctor_get(v_tree_1629_, 3);
lean_dec(v_unused_1673_);
v_unused_1674_ = lean_ctor_get(v_tree_1629_, 2);
lean_dec(v_unused_1674_);
v_unused_1675_ = lean_ctor_get(v_tree_1629_, 1);
lean_dec(v_unused_1675_);
v_unused_1676_ = lean_ctor_get(v_tree_1629_, 0);
lean_dec(v_unused_1676_);
v___x_1666_ = v_tree_1629_;
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
else
{
lean_dec(v_tree_1629_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1669_; 
if (v_isShared_1667_ == 0)
{
lean_ctor_set(v___x_1666_, 4, v___x_1664_);
lean_ctor_set(v___x_1666_, 3, v___y_1659_);
lean_ctor_set(v___x_1666_, 2, v_v_1647_);
lean_ctor_set(v___x_1666_, 1, v_k_1646_);
lean_ctor_set(v___x_1666_, 0, v___x_1657_);
v___x_1669_ = v___x_1666_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v___x_1657_);
lean_ctor_set(v_reuseFailAlloc_1670_, 1, v_k_1646_);
lean_ctor_set(v_reuseFailAlloc_1670_, 2, v_v_1647_);
lean_ctor_set(v_reuseFailAlloc_1670_, 3, v___y_1659_);
lean_ctor_set(v_reuseFailAlloc_1670_, 4, v___x_1664_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
}
v___jp_1679_:
{
lean_object* v___x_1681_; lean_object* v___x_1683_; 
v___x_1681_ = lean_nat_add(v___x_1678_, v___y_1680_);
lean_dec(v___y_1680_);
lean_dec(v___x_1678_);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 4, v_l_1648_);
lean_ctor_set(v___x_1626_, 3, v_l_1475_);
lean_ctor_set(v___x_1626_, 2, v_v_1474_);
lean_ctor_set(v___x_1626_, 1, v_k_1473_);
lean_ctor_set(v___x_1626_, 0, v___x_1681_);
v___x_1683_ = v___x_1626_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___x_1681_);
lean_ctor_set(v_reuseFailAlloc_1687_, 1, v_k_1473_);
lean_ctor_set(v_reuseFailAlloc_1687_, 2, v_v_1474_);
lean_ctor_set(v_reuseFailAlloc_1687_, 3, v_l_1475_);
lean_ctor_set(v_reuseFailAlloc_1687_, 4, v_l_1648_);
v___x_1683_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
lean_object* v___x_1684_; 
v___x_1684_ = lean_nat_add(v___x_1482_, v_size_1632_);
if (lean_obj_tag(v_r_1649_) == 0)
{
lean_object* v_size_1685_; 
v_size_1685_ = lean_ctor_get(v_r_1649_, 0);
lean_inc(v_size_1685_);
v___y_1659_ = v___x_1683_;
v___y_1660_ = v___x_1684_;
v___y_1661_ = v_size_1685_;
goto v___jp_1658_;
}
else
{
lean_object* v___x_1686_; 
v___x_1686_ = lean_unsigned_to_nat(0u);
v___y_1659_ = v___x_1683_;
v___y_1660_ = v___x_1684_;
v___y_1661_ = v___x_1686_;
goto v___jp_1658_;
}
}
}
}
}
else
{
lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1701_; 
v___x_1696_ = lean_nat_add(v___x_1482_, v_size_1472_);
lean_dec(v_size_1472_);
v___x_1697_ = lean_nat_add(v___x_1696_, v_size_1632_);
lean_dec(v___x_1696_);
v___x_1698_ = lean_nat_add(v___x_1482_, v_size_1632_);
v___x_1699_ = lean_nat_add(v___x_1698_, v_size_1645_);
lean_dec(v___x_1698_);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 4, v_tree_1629_);
lean_ctor_set(v___x_1626_, 3, v_r_1476_);
lean_ctor_set(v___x_1626_, 2, v_v_1631_);
lean_ctor_set(v___x_1626_, 1, v_k_1630_);
lean_ctor_set(v___x_1626_, 0, v___x_1699_);
v___x_1701_ = v___x_1626_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v___x_1699_);
lean_ctor_set(v_reuseFailAlloc_1705_, 1, v_k_1630_);
lean_ctor_set(v_reuseFailAlloc_1705_, 2, v_v_1631_);
lean_ctor_set(v_reuseFailAlloc_1705_, 3, v_r_1476_);
lean_ctor_set(v_reuseFailAlloc_1705_, 4, v_tree_1629_);
v___x_1701_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
lean_object* v___x_1703_; 
if (v_isShared_1643_ == 0)
{
lean_ctor_set(v___x_1642_, 4, v___x_1701_);
lean_ctor_set(v___x_1642_, 0, v___x_1697_);
v___x_1703_ = v___x_1642_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v___x_1697_);
lean_ctor_set(v_reuseFailAlloc_1704_, 1, v_k_1473_);
lean_ctor_set(v_reuseFailAlloc_1704_, 2, v_v_1474_);
lean_ctor_set(v_reuseFailAlloc_1704_, 3, v_l_1475_);
lean_ctor_set(v_reuseFailAlloc_1704_, 4, v___x_1701_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
return v___x_1703_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_1475_) == 0)
{
lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1735_; 
lean_inc_ref(v_l_1475_);
lean_inc(v_v_1474_);
lean_inc(v_k_1473_);
lean_inc(v_size_1472_);
v_isSharedCheck_1735_ = !lean_is_exclusive(v_l_1292_);
if (v_isSharedCheck_1735_ == 0)
{
lean_object* v_unused_1736_; lean_object* v_unused_1737_; lean_object* v_unused_1738_; lean_object* v_unused_1739_; lean_object* v_unused_1740_; 
v_unused_1736_ = lean_ctor_get(v_l_1292_, 4);
lean_dec(v_unused_1736_);
v_unused_1737_ = lean_ctor_get(v_l_1292_, 3);
lean_dec(v_unused_1737_);
v_unused_1738_ = lean_ctor_get(v_l_1292_, 2);
lean_dec(v_unused_1738_);
v_unused_1739_ = lean_ctor_get(v_l_1292_, 1);
lean_dec(v_unused_1739_);
v_unused_1740_ = lean_ctor_get(v_l_1292_, 0);
lean_dec(v_unused_1740_);
v___x_1713_ = v_l_1292_;
v_isShared_1714_ = v_isSharedCheck_1735_;
goto v_resetjp_1712_;
}
else
{
lean_dec(v_l_1292_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1735_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
if (lean_obj_tag(v_r_1476_) == 0)
{
lean_object* v_k_1715_; lean_object* v_v_1716_; lean_object* v_size_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1721_; 
v_k_1715_ = lean_ctor_get(v___x_1628_, 0);
lean_inc(v_k_1715_);
v_v_1716_ = lean_ctor_get(v___x_1628_, 1);
lean_inc(v_v_1716_);
lean_dec_ref(v___x_1628_);
v_size_1717_ = lean_ctor_get(v_r_1476_, 0);
v___x_1718_ = lean_nat_add(v___x_1482_, v_size_1472_);
lean_dec(v_size_1472_);
v___x_1719_ = lean_nat_add(v___x_1482_, v_size_1717_);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 4, v_tree_1629_);
lean_ctor_set(v___x_1626_, 3, v_r_1476_);
lean_ctor_set(v___x_1626_, 2, v_v_1716_);
lean_ctor_set(v___x_1626_, 1, v_k_1715_);
lean_ctor_set(v___x_1626_, 0, v___x_1719_);
v___x_1721_ = v___x_1626_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v___x_1719_);
lean_ctor_set(v_reuseFailAlloc_1725_, 1, v_k_1715_);
lean_ctor_set(v_reuseFailAlloc_1725_, 2, v_v_1716_);
lean_ctor_set(v_reuseFailAlloc_1725_, 3, v_r_1476_);
lean_ctor_set(v_reuseFailAlloc_1725_, 4, v_tree_1629_);
v___x_1721_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
lean_object* v___x_1723_; 
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 4, v___x_1721_);
lean_ctor_set(v___x_1713_, 0, v___x_1718_);
v___x_1723_ = v___x_1713_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v___x_1718_);
lean_ctor_set(v_reuseFailAlloc_1724_, 1, v_k_1473_);
lean_ctor_set(v_reuseFailAlloc_1724_, 2, v_v_1474_);
lean_ctor_set(v_reuseFailAlloc_1724_, 3, v_l_1475_);
lean_ctor_set(v_reuseFailAlloc_1724_, 4, v___x_1721_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
else
{
lean_object* v_k_1726_; lean_object* v_v_1727_; lean_object* v___x_1728_; lean_object* v___x_1730_; 
lean_dec(v_size_1472_);
v_k_1726_ = lean_ctor_get(v___x_1628_, 0);
lean_inc(v_k_1726_);
v_v_1727_ = lean_ctor_get(v___x_1628_, 1);
lean_inc(v_v_1727_);
lean_dec_ref(v___x_1628_);
v___x_1728_ = lean_unsigned_to_nat(3u);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 4, v_r_1476_);
lean_ctor_set(v___x_1626_, 3, v_r_1476_);
lean_ctor_set(v___x_1626_, 2, v_v_1727_);
lean_ctor_set(v___x_1626_, 1, v_k_1726_);
lean_ctor_set(v___x_1626_, 0, v___x_1482_);
v___x_1730_ = v___x_1626_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v___x_1482_);
lean_ctor_set(v_reuseFailAlloc_1734_, 1, v_k_1726_);
lean_ctor_set(v_reuseFailAlloc_1734_, 2, v_v_1727_);
lean_ctor_set(v_reuseFailAlloc_1734_, 3, v_r_1476_);
lean_ctor_set(v_reuseFailAlloc_1734_, 4, v_r_1476_);
v___x_1730_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
lean_object* v___x_1732_; 
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 4, v___x_1730_);
lean_ctor_set(v___x_1713_, 0, v___x_1728_);
v___x_1732_ = v___x_1713_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v___x_1728_);
lean_ctor_set(v_reuseFailAlloc_1733_, 1, v_k_1473_);
lean_ctor_set(v_reuseFailAlloc_1733_, 2, v_v_1474_);
lean_ctor_set(v_reuseFailAlloc_1733_, 3, v_l_1475_);
lean_ctor_set(v_reuseFailAlloc_1733_, 4, v___x_1730_);
v___x_1732_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
return v___x_1732_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1476_) == 0)
{
lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1765_; 
lean_inc(v_l_1475_);
lean_inc(v_v_1474_);
lean_inc(v_k_1473_);
v_isSharedCheck_1765_ = !lean_is_exclusive(v_l_1292_);
if (v_isSharedCheck_1765_ == 0)
{
lean_object* v_unused_1766_; lean_object* v_unused_1767_; lean_object* v_unused_1768_; lean_object* v_unused_1769_; lean_object* v_unused_1770_; 
v_unused_1766_ = lean_ctor_get(v_l_1292_, 4);
lean_dec(v_unused_1766_);
v_unused_1767_ = lean_ctor_get(v_l_1292_, 3);
lean_dec(v_unused_1767_);
v_unused_1768_ = lean_ctor_get(v_l_1292_, 2);
lean_dec(v_unused_1768_);
v_unused_1769_ = lean_ctor_get(v_l_1292_, 1);
lean_dec(v_unused_1769_);
v_unused_1770_ = lean_ctor_get(v_l_1292_, 0);
lean_dec(v_unused_1770_);
v___x_1742_ = v_l_1292_;
v_isShared_1743_ = v_isSharedCheck_1765_;
goto v_resetjp_1741_;
}
else
{
lean_dec(v_l_1292_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1765_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v_k_1744_; lean_object* v_v_1745_; lean_object* v_k_1746_; lean_object* v_v_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1761_; 
v_k_1744_ = lean_ctor_get(v___x_1628_, 0);
lean_inc(v_k_1744_);
v_v_1745_ = lean_ctor_get(v___x_1628_, 1);
lean_inc(v_v_1745_);
lean_dec_ref(v___x_1628_);
v_k_1746_ = lean_ctor_get(v_r_1476_, 1);
v_v_1747_ = lean_ctor_get(v_r_1476_, 2);
v_isSharedCheck_1761_ = !lean_is_exclusive(v_r_1476_);
if (v_isSharedCheck_1761_ == 0)
{
lean_object* v_unused_1762_; lean_object* v_unused_1763_; lean_object* v_unused_1764_; 
v_unused_1762_ = lean_ctor_get(v_r_1476_, 4);
lean_dec(v_unused_1762_);
v_unused_1763_ = lean_ctor_get(v_r_1476_, 3);
lean_dec(v_unused_1763_);
v_unused_1764_ = lean_ctor_get(v_r_1476_, 0);
lean_dec(v_unused_1764_);
v___x_1749_ = v_r_1476_;
v_isShared_1750_ = v_isSharedCheck_1761_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_v_1747_);
lean_inc(v_k_1746_);
lean_dec(v_r_1476_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1761_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
lean_object* v___x_1751_; lean_object* v___x_1753_; 
v___x_1751_ = lean_unsigned_to_nat(3u);
if (v_isShared_1750_ == 0)
{
lean_ctor_set(v___x_1749_, 4, v_l_1475_);
lean_ctor_set(v___x_1749_, 3, v_l_1475_);
lean_ctor_set(v___x_1749_, 2, v_v_1474_);
lean_ctor_set(v___x_1749_, 1, v_k_1473_);
lean_ctor_set(v___x_1749_, 0, v___x_1482_);
v___x_1753_ = v___x_1749_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v___x_1482_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v_k_1473_);
lean_ctor_set(v_reuseFailAlloc_1760_, 2, v_v_1474_);
lean_ctor_set(v_reuseFailAlloc_1760_, 3, v_l_1475_);
lean_ctor_set(v_reuseFailAlloc_1760_, 4, v_l_1475_);
v___x_1753_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
lean_object* v___x_1755_; 
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 4, v_l_1475_);
lean_ctor_set(v___x_1626_, 3, v_l_1475_);
lean_ctor_set(v___x_1626_, 2, v_v_1745_);
lean_ctor_set(v___x_1626_, 1, v_k_1744_);
lean_ctor_set(v___x_1626_, 0, v___x_1482_);
v___x_1755_ = v___x_1626_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___x_1482_);
lean_ctor_set(v_reuseFailAlloc_1759_, 1, v_k_1744_);
lean_ctor_set(v_reuseFailAlloc_1759_, 2, v_v_1745_);
lean_ctor_set(v_reuseFailAlloc_1759_, 3, v_l_1475_);
lean_ctor_set(v_reuseFailAlloc_1759_, 4, v_l_1475_);
v___x_1755_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
lean_object* v___x_1757_; 
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 4, v___x_1755_);
lean_ctor_set(v___x_1742_, 3, v___x_1753_);
lean_ctor_set(v___x_1742_, 2, v_v_1747_);
lean_ctor_set(v___x_1742_, 1, v_k_1746_);
lean_ctor_set(v___x_1742_, 0, v___x_1751_);
v___x_1757_ = v___x_1742_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v___x_1751_);
lean_ctor_set(v_reuseFailAlloc_1758_, 1, v_k_1746_);
lean_ctor_set(v_reuseFailAlloc_1758_, 2, v_v_1747_);
lean_ctor_set(v_reuseFailAlloc_1758_, 3, v___x_1753_);
lean_ctor_set(v_reuseFailAlloc_1758_, 4, v___x_1755_);
v___x_1757_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
return v___x_1757_;
}
}
}
}
}
}
else
{
lean_object* v_k_1771_; lean_object* v_v_1772_; lean_object* v___x_1773_; lean_object* v___x_1775_; 
v_k_1771_ = lean_ctor_get(v___x_1628_, 0);
lean_inc(v_k_1771_);
v_v_1772_ = lean_ctor_get(v___x_1628_, 1);
lean_inc(v_v_1772_);
lean_dec_ref(v___x_1628_);
v___x_1773_ = lean_unsigned_to_nat(2u);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 4, v_r_1476_);
lean_ctor_set(v___x_1626_, 3, v_l_1292_);
lean_ctor_set(v___x_1626_, 2, v_v_1772_);
lean_ctor_set(v___x_1626_, 1, v_k_1771_);
lean_ctor_set(v___x_1626_, 0, v___x_1773_);
v___x_1775_ = v___x_1626_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v___x_1773_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v_k_1771_);
lean_ctor_set(v_reuseFailAlloc_1776_, 2, v_v_1772_);
lean_ctor_set(v_reuseFailAlloc_1776_, 3, v_l_1292_);
lean_ctor_set(v_reuseFailAlloc_1776_, 4, v_r_1476_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
}
}
}
}
}
}
}
else
{
return v_l_1292_;
}
}
else
{
return v_r_1293_;
}
}
default: 
{
lean_object* v_impl_1783_; lean_object* v___x_1784_; 
v_impl_1783_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg(v_k_1288_, v_r_1293_);
v___x_1784_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1783_) == 0)
{
if (lean_obj_tag(v_l_1292_) == 0)
{
lean_object* v_size_1785_; lean_object* v_size_1786_; lean_object* v_k_1787_; lean_object* v_v_1788_; lean_object* v_l_1789_; lean_object* v_r_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; uint8_t v___x_1793_; 
v_size_1785_ = lean_ctor_get(v_impl_1783_, 0);
lean_inc(v_size_1785_);
v_size_1786_ = lean_ctor_get(v_l_1292_, 0);
v_k_1787_ = lean_ctor_get(v_l_1292_, 1);
v_v_1788_ = lean_ctor_get(v_l_1292_, 2);
v_l_1789_ = lean_ctor_get(v_l_1292_, 3);
v_r_1790_ = lean_ctor_get(v_l_1292_, 4);
lean_inc(v_r_1790_);
v___x_1791_ = lean_unsigned_to_nat(3u);
v___x_1792_ = lean_nat_mul(v___x_1791_, v_size_1785_);
v___x_1793_ = lean_nat_dec_lt(v___x_1792_, v_size_1786_);
lean_dec(v___x_1792_);
if (v___x_1793_ == 0)
{
lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1797_; 
lean_dec(v_r_1790_);
v___x_1794_ = lean_nat_add(v___x_1784_, v_size_1786_);
v___x_1795_ = lean_nat_add(v___x_1794_, v_size_1785_);
lean_dec(v_size_1785_);
lean_dec(v___x_1794_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 4, v_impl_1783_);
lean_ctor_set(v___x_1295_, 0, v___x_1795_);
v___x_1797_ = v___x_1295_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v___x_1795_);
lean_ctor_set(v_reuseFailAlloc_1798_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1798_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1798_, 3, v_l_1292_);
lean_ctor_set(v_reuseFailAlloc_1798_, 4, v_impl_1783_);
v___x_1797_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
return v___x_1797_;
}
}
else
{
lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1864_; 
lean_inc(v_l_1789_);
lean_inc(v_v_1788_);
lean_inc(v_k_1787_);
lean_inc(v_size_1786_);
v_isSharedCheck_1864_ = !lean_is_exclusive(v_l_1292_);
if (v_isSharedCheck_1864_ == 0)
{
lean_object* v_unused_1865_; lean_object* v_unused_1866_; lean_object* v_unused_1867_; lean_object* v_unused_1868_; lean_object* v_unused_1869_; 
v_unused_1865_ = lean_ctor_get(v_l_1292_, 4);
lean_dec(v_unused_1865_);
v_unused_1866_ = lean_ctor_get(v_l_1292_, 3);
lean_dec(v_unused_1866_);
v_unused_1867_ = lean_ctor_get(v_l_1292_, 2);
lean_dec(v_unused_1867_);
v_unused_1868_ = lean_ctor_get(v_l_1292_, 1);
lean_dec(v_unused_1868_);
v_unused_1869_ = lean_ctor_get(v_l_1292_, 0);
lean_dec(v_unused_1869_);
v___x_1800_ = v_l_1292_;
v_isShared_1801_ = v_isSharedCheck_1864_;
goto v_resetjp_1799_;
}
else
{
lean_dec(v_l_1292_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1864_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v_size_1802_; lean_object* v_size_1803_; lean_object* v_k_1804_; lean_object* v_v_1805_; lean_object* v_l_1806_; lean_object* v_r_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; uint8_t v___x_1810_; 
v_size_1802_ = lean_ctor_get(v_l_1789_, 0);
v_size_1803_ = lean_ctor_get(v_r_1790_, 0);
v_k_1804_ = lean_ctor_get(v_r_1790_, 1);
v_v_1805_ = lean_ctor_get(v_r_1790_, 2);
v_l_1806_ = lean_ctor_get(v_r_1790_, 3);
v_r_1807_ = lean_ctor_get(v_r_1790_, 4);
v___x_1808_ = lean_unsigned_to_nat(2u);
v___x_1809_ = lean_nat_mul(v___x_1808_, v_size_1802_);
v___x_1810_ = lean_nat_dec_lt(v_size_1803_, v___x_1809_);
lean_dec(v___x_1809_);
if (v___x_1810_ == 0)
{
lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1839_; 
lean_inc(v_r_1807_);
lean_inc(v_l_1806_);
lean_inc(v_v_1805_);
lean_inc(v_k_1804_);
v_isSharedCheck_1839_ = !lean_is_exclusive(v_r_1790_);
if (v_isSharedCheck_1839_ == 0)
{
lean_object* v_unused_1840_; lean_object* v_unused_1841_; lean_object* v_unused_1842_; lean_object* v_unused_1843_; lean_object* v_unused_1844_; 
v_unused_1840_ = lean_ctor_get(v_r_1790_, 4);
lean_dec(v_unused_1840_);
v_unused_1841_ = lean_ctor_get(v_r_1790_, 3);
lean_dec(v_unused_1841_);
v_unused_1842_ = lean_ctor_get(v_r_1790_, 2);
lean_dec(v_unused_1842_);
v_unused_1843_ = lean_ctor_get(v_r_1790_, 1);
lean_dec(v_unused_1843_);
v_unused_1844_ = lean_ctor_get(v_r_1790_, 0);
lean_dec(v_unused_1844_);
v___x_1812_ = v_r_1790_;
v_isShared_1813_ = v_isSharedCheck_1839_;
goto v_resetjp_1811_;
}
else
{
lean_dec(v_r_1790_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1839_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___y_1817_; lean_object* v___y_1818_; lean_object* v___y_1819_; lean_object* v___x_1827_; lean_object* v___y_1829_; 
v___x_1814_ = lean_nat_add(v___x_1784_, v_size_1786_);
lean_dec(v_size_1786_);
v___x_1815_ = lean_nat_add(v___x_1814_, v_size_1785_);
lean_dec(v___x_1814_);
v___x_1827_ = lean_nat_add(v___x_1784_, v_size_1802_);
if (lean_obj_tag(v_l_1806_) == 0)
{
lean_object* v_size_1837_; 
v_size_1837_ = lean_ctor_get(v_l_1806_, 0);
lean_inc(v_size_1837_);
v___y_1829_ = v_size_1837_;
goto v___jp_1828_;
}
else
{
lean_object* v___x_1838_; 
v___x_1838_ = lean_unsigned_to_nat(0u);
v___y_1829_ = v___x_1838_;
goto v___jp_1828_;
}
v___jp_1816_:
{
lean_object* v___x_1820_; lean_object* v___x_1822_; 
v___x_1820_ = lean_nat_add(v___y_1817_, v___y_1819_);
lean_dec(v___y_1819_);
lean_dec(v___y_1817_);
if (v_isShared_1813_ == 0)
{
lean_ctor_set(v___x_1812_, 4, v_impl_1783_);
lean_ctor_set(v___x_1812_, 3, v_r_1807_);
lean_ctor_set(v___x_1812_, 2, v_v_1291_);
lean_ctor_set(v___x_1812_, 1, v_k_1290_);
lean_ctor_set(v___x_1812_, 0, v___x_1820_);
v___x_1822_ = v___x_1812_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v___x_1820_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1826_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1826_, 3, v_r_1807_);
lean_ctor_set(v_reuseFailAlloc_1826_, 4, v_impl_1783_);
v___x_1822_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
lean_object* v___x_1824_; 
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 4, v___x_1822_);
lean_ctor_set(v___x_1800_, 3, v___y_1818_);
lean_ctor_set(v___x_1800_, 2, v_v_1805_);
lean_ctor_set(v___x_1800_, 1, v_k_1804_);
lean_ctor_set(v___x_1800_, 0, v___x_1815_);
v___x_1824_ = v___x_1800_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v___x_1815_);
lean_ctor_set(v_reuseFailAlloc_1825_, 1, v_k_1804_);
lean_ctor_set(v_reuseFailAlloc_1825_, 2, v_v_1805_);
lean_ctor_set(v_reuseFailAlloc_1825_, 3, v___y_1818_);
lean_ctor_set(v_reuseFailAlloc_1825_, 4, v___x_1822_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
}
v___jp_1828_:
{
lean_object* v___x_1830_; lean_object* v___x_1832_; 
v___x_1830_ = lean_nat_add(v___x_1827_, v___y_1829_);
lean_dec(v___y_1829_);
lean_dec(v___x_1827_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 4, v_l_1806_);
lean_ctor_set(v___x_1295_, 3, v_l_1789_);
lean_ctor_set(v___x_1295_, 2, v_v_1788_);
lean_ctor_set(v___x_1295_, 1, v_k_1787_);
lean_ctor_set(v___x_1295_, 0, v___x_1830_);
v___x_1832_ = v___x_1295_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v___x_1830_);
lean_ctor_set(v_reuseFailAlloc_1836_, 1, v_k_1787_);
lean_ctor_set(v_reuseFailAlloc_1836_, 2, v_v_1788_);
lean_ctor_set(v_reuseFailAlloc_1836_, 3, v_l_1789_);
lean_ctor_set(v_reuseFailAlloc_1836_, 4, v_l_1806_);
v___x_1832_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
lean_object* v___x_1833_; 
v___x_1833_ = lean_nat_add(v___x_1784_, v_size_1785_);
lean_dec(v_size_1785_);
if (lean_obj_tag(v_r_1807_) == 0)
{
lean_object* v_size_1834_; 
v_size_1834_ = lean_ctor_get(v_r_1807_, 0);
lean_inc(v_size_1834_);
v___y_1817_ = v___x_1833_;
v___y_1818_ = v___x_1832_;
v___y_1819_ = v_size_1834_;
goto v___jp_1816_;
}
else
{
lean_object* v___x_1835_; 
v___x_1835_ = lean_unsigned_to_nat(0u);
v___y_1817_ = v___x_1833_;
v___y_1818_ = v___x_1832_;
v___y_1819_ = v___x_1835_;
goto v___jp_1816_;
}
}
}
}
}
else
{
lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1850_; 
lean_del_object(v___x_1295_);
v___x_1845_ = lean_nat_add(v___x_1784_, v_size_1786_);
lean_dec(v_size_1786_);
v___x_1846_ = lean_nat_add(v___x_1845_, v_size_1785_);
lean_dec(v___x_1845_);
v___x_1847_ = lean_nat_add(v___x_1784_, v_size_1785_);
lean_dec(v_size_1785_);
v___x_1848_ = lean_nat_add(v___x_1847_, v_size_1803_);
lean_dec(v___x_1847_);
lean_inc_ref(v_impl_1783_);
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 4, v_impl_1783_);
lean_ctor_set(v___x_1800_, 3, v_r_1790_);
lean_ctor_set(v___x_1800_, 2, v_v_1291_);
lean_ctor_set(v___x_1800_, 1, v_k_1290_);
lean_ctor_set(v___x_1800_, 0, v___x_1848_);
v___x_1850_ = v___x_1800_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v___x_1848_);
lean_ctor_set(v_reuseFailAlloc_1863_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1863_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1863_, 3, v_r_1790_);
lean_ctor_set(v_reuseFailAlloc_1863_, 4, v_impl_1783_);
v___x_1850_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
v_isSharedCheck_1857_ = !lean_is_exclusive(v_impl_1783_);
if (v_isSharedCheck_1857_ == 0)
{
lean_object* v_unused_1858_; lean_object* v_unused_1859_; lean_object* v_unused_1860_; lean_object* v_unused_1861_; lean_object* v_unused_1862_; 
v_unused_1858_ = lean_ctor_get(v_impl_1783_, 4);
lean_dec(v_unused_1858_);
v_unused_1859_ = lean_ctor_get(v_impl_1783_, 3);
lean_dec(v_unused_1859_);
v_unused_1860_ = lean_ctor_get(v_impl_1783_, 2);
lean_dec(v_unused_1860_);
v_unused_1861_ = lean_ctor_get(v_impl_1783_, 1);
lean_dec(v_unused_1861_);
v_unused_1862_ = lean_ctor_get(v_impl_1783_, 0);
lean_dec(v_unused_1862_);
v___x_1852_ = v_impl_1783_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_dec(v_impl_1783_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
lean_ctor_set(v___x_1852_, 4, v___x_1850_);
lean_ctor_set(v___x_1852_, 3, v_l_1789_);
lean_ctor_set(v___x_1852_, 2, v_v_1788_);
lean_ctor_set(v___x_1852_, 1, v_k_1787_);
lean_ctor_set(v___x_1852_, 0, v___x_1846_);
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v___x_1846_);
lean_ctor_set(v_reuseFailAlloc_1856_, 1, v_k_1787_);
lean_ctor_set(v_reuseFailAlloc_1856_, 2, v_v_1788_);
lean_ctor_set(v_reuseFailAlloc_1856_, 3, v_l_1789_);
lean_ctor_set(v_reuseFailAlloc_1856_, 4, v___x_1850_);
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
}
}
}
else
{
lean_object* v_size_1870_; lean_object* v___x_1871_; lean_object* v___x_1873_; 
v_size_1870_ = lean_ctor_get(v_impl_1783_, 0);
lean_inc(v_size_1870_);
v___x_1871_ = lean_nat_add(v___x_1784_, v_size_1870_);
lean_dec(v_size_1870_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 4, v_impl_1783_);
lean_ctor_set(v___x_1295_, 0, v___x_1871_);
v___x_1873_ = v___x_1295_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v___x_1871_);
lean_ctor_set(v_reuseFailAlloc_1874_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1874_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1874_, 3, v_l_1292_);
lean_ctor_set(v_reuseFailAlloc_1874_, 4, v_impl_1783_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
else
{
if (lean_obj_tag(v_l_1292_) == 0)
{
lean_object* v_l_1875_; 
v_l_1875_ = lean_ctor_get(v_l_1292_, 3);
if (lean_obj_tag(v_l_1875_) == 0)
{
lean_object* v_r_1876_; 
lean_inc_ref(v_l_1875_);
v_r_1876_ = lean_ctor_get(v_l_1292_, 4);
lean_inc(v_r_1876_);
if (lean_obj_tag(v_r_1876_) == 0)
{
lean_object* v_size_1877_; lean_object* v_k_1878_; lean_object* v_v_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1892_; 
v_size_1877_ = lean_ctor_get(v_l_1292_, 0);
v_k_1878_ = lean_ctor_get(v_l_1292_, 1);
v_v_1879_ = lean_ctor_get(v_l_1292_, 2);
v_isSharedCheck_1892_ = !lean_is_exclusive(v_l_1292_);
if (v_isSharedCheck_1892_ == 0)
{
lean_object* v_unused_1893_; lean_object* v_unused_1894_; 
v_unused_1893_ = lean_ctor_get(v_l_1292_, 4);
lean_dec(v_unused_1893_);
v_unused_1894_ = lean_ctor_get(v_l_1292_, 3);
lean_dec(v_unused_1894_);
v___x_1881_ = v_l_1292_;
v_isShared_1882_ = v_isSharedCheck_1892_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_v_1879_);
lean_inc(v_k_1878_);
lean_inc(v_size_1877_);
lean_dec(v_l_1292_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1892_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v_size_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1887_; 
v_size_1883_ = lean_ctor_get(v_r_1876_, 0);
v___x_1884_ = lean_nat_add(v___x_1784_, v_size_1877_);
lean_dec(v_size_1877_);
v___x_1885_ = lean_nat_add(v___x_1784_, v_size_1883_);
if (v_isShared_1882_ == 0)
{
lean_ctor_set(v___x_1881_, 4, v_impl_1783_);
lean_ctor_set(v___x_1881_, 3, v_r_1876_);
lean_ctor_set(v___x_1881_, 2, v_v_1291_);
lean_ctor_set(v___x_1881_, 1, v_k_1290_);
lean_ctor_set(v___x_1881_, 0, v___x_1885_);
v___x_1887_ = v___x_1881_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v___x_1885_);
lean_ctor_set(v_reuseFailAlloc_1891_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1891_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1891_, 3, v_r_1876_);
lean_ctor_set(v_reuseFailAlloc_1891_, 4, v_impl_1783_);
v___x_1887_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
lean_object* v___x_1889_; 
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 4, v___x_1887_);
lean_ctor_set(v___x_1295_, 3, v_l_1875_);
lean_ctor_set(v___x_1295_, 2, v_v_1879_);
lean_ctor_set(v___x_1295_, 1, v_k_1878_);
lean_ctor_set(v___x_1295_, 0, v___x_1884_);
v___x_1889_ = v___x_1295_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v___x_1884_);
lean_ctor_set(v_reuseFailAlloc_1890_, 1, v_k_1878_);
lean_ctor_set(v_reuseFailAlloc_1890_, 2, v_v_1879_);
lean_ctor_set(v_reuseFailAlloc_1890_, 3, v_l_1875_);
lean_ctor_set(v_reuseFailAlloc_1890_, 4, v___x_1887_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
else
{
lean_object* v_k_1895_; lean_object* v_v_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1907_; 
v_k_1895_ = lean_ctor_get(v_l_1292_, 1);
v_v_1896_ = lean_ctor_get(v_l_1292_, 2);
v_isSharedCheck_1907_ = !lean_is_exclusive(v_l_1292_);
if (v_isSharedCheck_1907_ == 0)
{
lean_object* v_unused_1908_; lean_object* v_unused_1909_; lean_object* v_unused_1910_; 
v_unused_1908_ = lean_ctor_get(v_l_1292_, 4);
lean_dec(v_unused_1908_);
v_unused_1909_ = lean_ctor_get(v_l_1292_, 3);
lean_dec(v_unused_1909_);
v_unused_1910_ = lean_ctor_get(v_l_1292_, 0);
lean_dec(v_unused_1910_);
v___x_1898_ = v_l_1292_;
v_isShared_1899_ = v_isSharedCheck_1907_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_v_1896_);
lean_inc(v_k_1895_);
lean_dec(v_l_1292_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1907_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1900_; lean_object* v___x_1902_; 
v___x_1900_ = lean_unsigned_to_nat(3u);
if (v_isShared_1899_ == 0)
{
lean_ctor_set(v___x_1898_, 3, v_r_1876_);
lean_ctor_set(v___x_1898_, 2, v_v_1291_);
lean_ctor_set(v___x_1898_, 1, v_k_1290_);
lean_ctor_set(v___x_1898_, 0, v___x_1784_);
v___x_1902_ = v___x_1898_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v___x_1784_);
lean_ctor_set(v_reuseFailAlloc_1906_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1906_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1906_, 3, v_r_1876_);
lean_ctor_set(v_reuseFailAlloc_1906_, 4, v_r_1876_);
v___x_1902_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
lean_object* v___x_1904_; 
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 4, v___x_1902_);
lean_ctor_set(v___x_1295_, 3, v_l_1875_);
lean_ctor_set(v___x_1295_, 2, v_v_1896_);
lean_ctor_set(v___x_1295_, 1, v_k_1895_);
lean_ctor_set(v___x_1295_, 0, v___x_1900_);
v___x_1904_ = v___x_1295_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v___x_1900_);
lean_ctor_set(v_reuseFailAlloc_1905_, 1, v_k_1895_);
lean_ctor_set(v_reuseFailAlloc_1905_, 2, v_v_1896_);
lean_ctor_set(v_reuseFailAlloc_1905_, 3, v_l_1875_);
lean_ctor_set(v_reuseFailAlloc_1905_, 4, v___x_1902_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
}
}
else
{
lean_object* v_r_1911_; 
v_r_1911_ = lean_ctor_get(v_l_1292_, 4);
lean_inc(v_r_1911_);
if (lean_obj_tag(v_r_1911_) == 0)
{
lean_object* v_k_1912_; lean_object* v_v_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1936_; 
lean_inc(v_l_1875_);
v_k_1912_ = lean_ctor_get(v_l_1292_, 1);
v_v_1913_ = lean_ctor_get(v_l_1292_, 2);
v_isSharedCheck_1936_ = !lean_is_exclusive(v_l_1292_);
if (v_isSharedCheck_1936_ == 0)
{
lean_object* v_unused_1937_; lean_object* v_unused_1938_; lean_object* v_unused_1939_; 
v_unused_1937_ = lean_ctor_get(v_l_1292_, 4);
lean_dec(v_unused_1937_);
v_unused_1938_ = lean_ctor_get(v_l_1292_, 3);
lean_dec(v_unused_1938_);
v_unused_1939_ = lean_ctor_get(v_l_1292_, 0);
lean_dec(v_unused_1939_);
v___x_1915_ = v_l_1292_;
v_isShared_1916_ = v_isSharedCheck_1936_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_v_1913_);
lean_inc(v_k_1912_);
lean_dec(v_l_1292_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1936_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v_k_1917_; lean_object* v_v_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1932_; 
v_k_1917_ = lean_ctor_get(v_r_1911_, 1);
v_v_1918_ = lean_ctor_get(v_r_1911_, 2);
v_isSharedCheck_1932_ = !lean_is_exclusive(v_r_1911_);
if (v_isSharedCheck_1932_ == 0)
{
lean_object* v_unused_1933_; lean_object* v_unused_1934_; lean_object* v_unused_1935_; 
v_unused_1933_ = lean_ctor_get(v_r_1911_, 4);
lean_dec(v_unused_1933_);
v_unused_1934_ = lean_ctor_get(v_r_1911_, 3);
lean_dec(v_unused_1934_);
v_unused_1935_ = lean_ctor_get(v_r_1911_, 0);
lean_dec(v_unused_1935_);
v___x_1920_ = v_r_1911_;
v_isShared_1921_ = v_isSharedCheck_1932_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_v_1918_);
lean_inc(v_k_1917_);
lean_dec(v_r_1911_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1932_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1922_; lean_object* v___x_1924_; 
v___x_1922_ = lean_unsigned_to_nat(3u);
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 4, v_l_1875_);
lean_ctor_set(v___x_1920_, 3, v_l_1875_);
lean_ctor_set(v___x_1920_, 2, v_v_1913_);
lean_ctor_set(v___x_1920_, 1, v_k_1912_);
lean_ctor_set(v___x_1920_, 0, v___x_1784_);
v___x_1924_ = v___x_1920_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v___x_1784_);
lean_ctor_set(v_reuseFailAlloc_1931_, 1, v_k_1912_);
lean_ctor_set(v_reuseFailAlloc_1931_, 2, v_v_1913_);
lean_ctor_set(v_reuseFailAlloc_1931_, 3, v_l_1875_);
lean_ctor_set(v_reuseFailAlloc_1931_, 4, v_l_1875_);
v___x_1924_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
lean_object* v___x_1926_; 
if (v_isShared_1916_ == 0)
{
lean_ctor_set(v___x_1915_, 4, v_l_1875_);
lean_ctor_set(v___x_1915_, 2, v_v_1291_);
lean_ctor_set(v___x_1915_, 1, v_k_1290_);
lean_ctor_set(v___x_1915_, 0, v___x_1784_);
v___x_1926_ = v___x_1915_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v___x_1784_);
lean_ctor_set(v_reuseFailAlloc_1930_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1930_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1930_, 3, v_l_1875_);
lean_ctor_set(v_reuseFailAlloc_1930_, 4, v_l_1875_);
v___x_1926_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
lean_object* v___x_1928_; 
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 4, v___x_1926_);
lean_ctor_set(v___x_1295_, 3, v___x_1924_);
lean_ctor_set(v___x_1295_, 2, v_v_1918_);
lean_ctor_set(v___x_1295_, 1, v_k_1917_);
lean_ctor_set(v___x_1295_, 0, v___x_1922_);
v___x_1928_ = v___x_1295_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v___x_1922_);
lean_ctor_set(v_reuseFailAlloc_1929_, 1, v_k_1917_);
lean_ctor_set(v_reuseFailAlloc_1929_, 2, v_v_1918_);
lean_ctor_set(v_reuseFailAlloc_1929_, 3, v___x_1924_);
lean_ctor_set(v_reuseFailAlloc_1929_, 4, v___x_1926_);
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
}
}
else
{
lean_object* v___x_1940_; lean_object* v___x_1942_; 
v___x_1940_ = lean_unsigned_to_nat(2u);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 4, v_r_1911_);
lean_ctor_set(v___x_1295_, 0, v___x_1940_);
v___x_1942_ = v___x_1295_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1940_);
lean_ctor_set(v_reuseFailAlloc_1943_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1943_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1943_, 3, v_l_1292_);
lean_ctor_set(v_reuseFailAlloc_1943_, 4, v_r_1911_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
else
{
lean_object* v___x_1945_; 
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 4, v_l_1292_);
lean_ctor_set(v___x_1295_, 0, v___x_1784_);
v___x_1945_ = v___x_1295_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1784_);
lean_ctor_set(v_reuseFailAlloc_1946_, 1, v_k_1290_);
lean_ctor_set(v_reuseFailAlloc_1946_, 2, v_v_1291_);
lean_ctor_set(v_reuseFailAlloc_1946_, 3, v_l_1292_);
lean_ctor_set(v_reuseFailAlloc_1946_, 4, v_l_1292_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
}
}
}
else
{
return v_t_1289_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg___boxed(lean_object* v_k_1949_, lean_object* v_t_1950_){
_start:
{
lean_object* v_res_1951_; 
v_res_1951_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg(v_k_1949_, v_t_1950_);
lean_dec_ref(v_k_1949_);
return v_res_1951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___lam__0(lean_object* v_val_1952_, lean_object* v_s_1953_){
_start:
{
lean_object* v_toRing_1954_; lean_object* v_invFn_x3f_1955_; lean_object* v_semiringId_x3f_1956_; lean_object* v_commSemiringInst_1957_; lean_object* v_commRingInst_1958_; lean_object* v_noZeroDivInst_x3f_1959_; lean_object* v_fieldInst_x3f_1960_; lean_object* v_powIdentityInst_x3f_1961_; lean_object* v_denoteEntries_1962_; lean_object* v_nextId_1963_; lean_object* v_steps_1964_; lean_object* v_queue_1965_; lean_object* v_basis_1966_; lean_object* v_diseqs_1967_; uint8_t v_recheck_1968_; lean_object* v_invSet_1969_; lean_object* v_powIdentityVarCount_1970_; lean_object* v_numEq0_x3f_1971_; uint8_t v_numEq0Updated_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1980_; 
v_toRing_1954_ = lean_ctor_get(v_s_1953_, 0);
v_invFn_x3f_1955_ = lean_ctor_get(v_s_1953_, 1);
v_semiringId_x3f_1956_ = lean_ctor_get(v_s_1953_, 2);
v_commSemiringInst_1957_ = lean_ctor_get(v_s_1953_, 3);
v_commRingInst_1958_ = lean_ctor_get(v_s_1953_, 4);
v_noZeroDivInst_x3f_1959_ = lean_ctor_get(v_s_1953_, 5);
v_fieldInst_x3f_1960_ = lean_ctor_get(v_s_1953_, 6);
v_powIdentityInst_x3f_1961_ = lean_ctor_get(v_s_1953_, 7);
v_denoteEntries_1962_ = lean_ctor_get(v_s_1953_, 8);
v_nextId_1963_ = lean_ctor_get(v_s_1953_, 9);
v_steps_1964_ = lean_ctor_get(v_s_1953_, 10);
v_queue_1965_ = lean_ctor_get(v_s_1953_, 11);
v_basis_1966_ = lean_ctor_get(v_s_1953_, 12);
v_diseqs_1967_ = lean_ctor_get(v_s_1953_, 13);
v_recheck_1968_ = lean_ctor_get_uint8(v_s_1953_, sizeof(void*)*17);
v_invSet_1969_ = lean_ctor_get(v_s_1953_, 14);
v_powIdentityVarCount_1970_ = lean_ctor_get(v_s_1953_, 15);
v_numEq0_x3f_1971_ = lean_ctor_get(v_s_1953_, 16);
v_numEq0Updated_1972_ = lean_ctor_get_uint8(v_s_1953_, sizeof(void*)*17 + 1);
v_isSharedCheck_1980_ = !lean_is_exclusive(v_s_1953_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1974_ = v_s_1953_;
v_isShared_1975_ = v_isSharedCheck_1980_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_numEq0_x3f_1971_);
lean_inc(v_powIdentityVarCount_1970_);
lean_inc(v_invSet_1969_);
lean_inc(v_diseqs_1967_);
lean_inc(v_basis_1966_);
lean_inc(v_queue_1965_);
lean_inc(v_steps_1964_);
lean_inc(v_nextId_1963_);
lean_inc(v_denoteEntries_1962_);
lean_inc(v_powIdentityInst_x3f_1961_);
lean_inc(v_fieldInst_x3f_1960_);
lean_inc(v_noZeroDivInst_x3f_1959_);
lean_inc(v_commRingInst_1958_);
lean_inc(v_commSemiringInst_1957_);
lean_inc(v_semiringId_x3f_1956_);
lean_inc(v_invFn_x3f_1955_);
lean_inc(v_toRing_1954_);
lean_dec(v_s_1953_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1980_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1976_; lean_object* v___x_1978_; 
v___x_1976_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg(v_val_1952_, v_queue_1965_);
if (v_isShared_1975_ == 0)
{
lean_ctor_set(v___x_1974_, 11, v___x_1976_);
v___x_1978_ = v___x_1974_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_toRing_1954_);
lean_ctor_set(v_reuseFailAlloc_1979_, 1, v_invFn_x3f_1955_);
lean_ctor_set(v_reuseFailAlloc_1979_, 2, v_semiringId_x3f_1956_);
lean_ctor_set(v_reuseFailAlloc_1979_, 3, v_commSemiringInst_1957_);
lean_ctor_set(v_reuseFailAlloc_1979_, 4, v_commRingInst_1958_);
lean_ctor_set(v_reuseFailAlloc_1979_, 5, v_noZeroDivInst_x3f_1959_);
lean_ctor_set(v_reuseFailAlloc_1979_, 6, v_fieldInst_x3f_1960_);
lean_ctor_set(v_reuseFailAlloc_1979_, 7, v_powIdentityInst_x3f_1961_);
lean_ctor_set(v_reuseFailAlloc_1979_, 8, v_denoteEntries_1962_);
lean_ctor_set(v_reuseFailAlloc_1979_, 9, v_nextId_1963_);
lean_ctor_set(v_reuseFailAlloc_1979_, 10, v_steps_1964_);
lean_ctor_set(v_reuseFailAlloc_1979_, 11, v___x_1976_);
lean_ctor_set(v_reuseFailAlloc_1979_, 12, v_basis_1966_);
lean_ctor_set(v_reuseFailAlloc_1979_, 13, v_diseqs_1967_);
lean_ctor_set(v_reuseFailAlloc_1979_, 14, v_invSet_1969_);
lean_ctor_set(v_reuseFailAlloc_1979_, 15, v_powIdentityVarCount_1970_);
lean_ctor_set(v_reuseFailAlloc_1979_, 16, v_numEq0_x3f_1971_);
lean_ctor_set_uint8(v_reuseFailAlloc_1979_, sizeof(void*)*17, v_recheck_1968_);
lean_ctor_set_uint8(v_reuseFailAlloc_1979_, sizeof(void*)*17 + 1, v_numEq0Updated_1972_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___lam__0___boxed(lean_object* v_val_1981_, lean_object* v_s_1982_){
_start:
{
lean_object* v_res_1983_; 
v_res_1983_ = l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___lam__0(v_val_1981_, v_s_1982_);
lean_dec_ref(v_val_1981_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f(lean_object* v_a_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_){
_start:
{
lean_object* v___x_1996_; 
v___x_1996_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_1984_, v_a_1985_, v_a_1986_, v_a_1987_, v_a_1988_, v_a_1989_, v_a_1990_, v_a_1991_, v_a_1992_, v_a_1993_, v_a_1994_);
if (lean_obj_tag(v___x_1996_) == 0)
{
lean_object* v_a_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2036_; 
v_a_1997_ = lean_ctor_get(v___x_1996_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_1996_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_1999_ = v___x_1996_;
v_isShared_2000_ = v_isSharedCheck_2036_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_a_1997_);
lean_dec(v___x_1996_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2036_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
lean_object* v_queue_2001_; lean_object* v___x_2002_; 
v_queue_2001_ = lean_ctor_get(v_a_1997_, 11);
lean_inc(v_queue_2001_);
lean_dec(v_a_1997_);
v___x_2002_ = l_Std_DTreeMap_Internal_Impl_minKey_x3f___redArg(v_queue_2001_);
lean_dec(v_queue_2001_);
if (lean_obj_tag(v___x_2002_) == 1)
{
lean_object* v_val_2003_; lean_object* v___f_2004_; lean_object* v___x_2005_; 
lean_del_object(v___x_1999_);
v_val_2003_ = lean_ctor_get(v___x_2002_, 0);
lean_inc(v_val_2003_);
v___f_2004_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2004_, 0, v_val_2003_);
v___x_2005_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_2004_, v_a_1984_, v_a_1985_);
if (lean_obj_tag(v___x_2005_) == 0)
{
lean_object* v___x_2006_; lean_object* v___x_2007_; 
lean_dec_ref_known(v___x_2005_, 1);
v___x_2006_ = lean_unsigned_to_nat(1u);
v___x_2007_ = l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg(v___x_2006_, v_a_1985_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2014_; 
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_2007_);
if (v_isSharedCheck_2014_ == 0)
{
lean_object* v_unused_2015_; 
v_unused_2015_ = lean_ctor_get(v___x_2007_, 0);
lean_dec(v_unused_2015_);
v___x_2009_ = v___x_2007_;
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
else
{
lean_dec(v___x_2007_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2012_; 
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 0, v___x_2002_);
v___x_2012_ = v___x_2009_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_2002_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
else
{
lean_object* v_a_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2023_; 
lean_dec_ref_known(v___x_2002_, 1);
v_a_2016_ = lean_ctor_get(v___x_2007_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_2007_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2018_ = v___x_2007_;
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_a_2016_);
lean_dec(v___x_2007_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2021_; 
if (v_isShared_2019_ == 0)
{
v___x_2021_ = v___x_2018_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_a_2016_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
return v___x_2021_;
}
}
}
}
else
{
lean_object* v_a_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2031_; 
lean_dec_ref_known(v___x_2002_, 1);
v_a_2024_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2026_ = v___x_2005_;
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_a_2024_);
lean_dec(v___x_2005_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___x_2029_; 
if (v_isShared_2027_ == 0)
{
v___x_2029_ = v___x_2026_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_a_2024_);
v___x_2029_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
return v___x_2029_;
}
}
}
}
else
{
lean_object* v___x_2032_; lean_object* v___x_2034_; 
lean_dec(v___x_2002_);
v___x_2032_ = lean_box(0);
if (v_isShared_2000_ == 0)
{
lean_ctor_set(v___x_1999_, 0, v___x_2032_);
v___x_2034_ = v___x_1999_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v___x_2032_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
}
else
{
lean_object* v_a_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2044_; 
v_a_2037_ = lean_ctor_get(v___x_1996_, 0);
v_isSharedCheck_2044_ = !lean_is_exclusive(v___x_1996_);
if (v_isSharedCheck_2044_ == 0)
{
v___x_2039_ = v___x_1996_;
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_a_2037_);
lean_dec(v___x_1996_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v___x_2042_; 
if (v_isShared_2040_ == 0)
{
v___x_2042_ = v___x_2039_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v_a_2037_);
v___x_2042_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
return v___x_2042_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___boxed(lean_object* v_a_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_, lean_object* v_a_2050_, lean_object* v_a_2051_, lean_object* v_a_2052_, lean_object* v_a_2053_, lean_object* v_a_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_){
_start:
{
lean_object* v_res_2057_; 
v_res_2057_ = l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f(v_a_2045_, v_a_2046_, v_a_2047_, v_a_2048_, v_a_2049_, v_a_2050_, v_a_2051_, v_a_2052_, v_a_2053_, v_a_2054_, v_a_2055_);
lean_dec(v_a_2055_);
lean_dec_ref(v_a_2054_);
lean_dec(v_a_2053_);
lean_dec_ref(v_a_2052_);
lean_dec(v_a_2051_);
lean_dec_ref(v_a_2050_);
lean_dec(v_a_2049_);
lean_dec_ref(v_a_2048_);
lean_dec(v_a_2047_);
lean_dec(v_a_2046_);
lean_dec_ref(v_a_2045_);
return v_res_2057_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0(lean_object* v_00_u03b2_2058_, lean_object* v_k_2059_, lean_object* v_t_2060_, lean_object* v_h_2061_){
_start:
{
lean_object* v___x_2062_; 
v___x_2062_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg(v_k_2059_, v_t_2060_);
return v___x_2062_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___boxed(lean_object* v_00_u03b2_2063_, lean_object* v_k_2064_, lean_object* v_t_2065_, lean_object* v_h_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0(v_00_u03b2_2063_, v_k_2064_, v_t_2065_, v_h_2066_);
lean_dec_ref(v_k_2064_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_2068_, lean_object* v_x_2069_, lean_object* v_x_2070_, lean_object* v_x_2071_){
_start:
{
lean_object* v_ks_2072_; lean_object* v_vs_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2099_; 
v_ks_2072_ = lean_ctor_get(v_x_2068_, 0);
v_vs_2073_ = lean_ctor_get(v_x_2068_, 1);
v_isSharedCheck_2099_ = !lean_is_exclusive(v_x_2068_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2075_ = v_x_2068_;
v_isShared_2076_ = v_isSharedCheck_2099_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_vs_2073_);
lean_inc(v_ks_2072_);
lean_dec(v_x_2068_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2099_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2077_; uint8_t v___x_2078_; 
v___x_2077_ = lean_array_get_size(v_ks_2072_);
v___x_2078_ = lean_nat_dec_lt(v_x_2069_, v___x_2077_);
if (v___x_2078_ == 0)
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2082_; 
lean_dec(v_x_2069_);
v___x_2079_ = lean_array_push(v_ks_2072_, v_x_2070_);
v___x_2080_ = lean_array_push(v_vs_2073_, v_x_2071_);
if (v_isShared_2076_ == 0)
{
lean_ctor_set(v___x_2075_, 1, v___x_2080_);
lean_ctor_set(v___x_2075_, 0, v___x_2079_);
v___x_2082_ = v___x_2075_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v___x_2079_);
lean_ctor_set(v_reuseFailAlloc_2083_, 1, v___x_2080_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
else
{
lean_object* v_k_x27_2084_; size_t v___x_2085_; size_t v___x_2086_; uint8_t v___x_2087_; 
v_k_x27_2084_ = lean_array_fget_borrowed(v_ks_2072_, v_x_2069_);
v___x_2085_ = lean_ptr_addr(v_x_2070_);
v___x_2086_ = lean_ptr_addr(v_k_x27_2084_);
v___x_2087_ = lean_usize_dec_eq(v___x_2085_, v___x_2086_);
if (v___x_2087_ == 0)
{
lean_object* v___x_2089_; 
if (v_isShared_2076_ == 0)
{
v___x_2089_ = v___x_2075_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_ks_2072_);
lean_ctor_set(v_reuseFailAlloc_2093_, 1, v_vs_2073_);
v___x_2089_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2090_ = lean_unsigned_to_nat(1u);
v___x_2091_ = lean_nat_add(v_x_2069_, v___x_2090_);
lean_dec(v_x_2069_);
v_x_2068_ = v___x_2089_;
v_x_2069_ = v___x_2091_;
goto _start;
}
}
else
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2097_; 
v___x_2094_ = lean_array_fset(v_ks_2072_, v_x_2069_, v_x_2070_);
v___x_2095_ = lean_array_fset(v_vs_2073_, v_x_2069_, v_x_2071_);
lean_dec(v_x_2069_);
if (v_isShared_2076_ == 0)
{
lean_ctor_set(v___x_2075_, 1, v___x_2095_);
lean_ctor_set(v___x_2075_, 0, v___x_2094_);
v___x_2097_ = v___x_2075_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v___x_2094_);
lean_ctor_set(v_reuseFailAlloc_2098_, 1, v___x_2095_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1___redArg(lean_object* v_n_2100_, lean_object* v_k_2101_, lean_object* v_v_2102_){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2103_ = lean_unsigned_to_nat(0u);
v___x_2104_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1_spec__2___redArg(v_n_2100_, v___x_2103_, v_k_2101_, v_v_2102_);
return v___x_2104_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2105_; 
v___x_2105_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_2105_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg(lean_object* v_x_2106_, size_t v_x_2107_, size_t v_x_2108_, lean_object* v_x_2109_, lean_object* v_x_2110_){
_start:
{
if (lean_obj_tag(v_x_2106_) == 0)
{
lean_object* v_es_2111_; size_t v___x_2112_; size_t v___x_2113_; lean_object* v_j_2114_; lean_object* v___x_2115_; uint8_t v___x_2116_; 
v_es_2111_ = lean_ctor_get(v_x_2106_, 0);
v___x_2112_ = ((size_t)31ULL);
v___x_2113_ = lean_usize_land(v_x_2107_, v___x_2112_);
v_j_2114_ = lean_usize_to_nat(v___x_2113_);
v___x_2115_ = lean_array_get_size(v_es_2111_);
v___x_2116_ = lean_nat_dec_lt(v_j_2114_, v___x_2115_);
if (v___x_2116_ == 0)
{
lean_dec(v_j_2114_);
lean_dec(v_x_2110_);
lean_dec_ref(v_x_2109_);
return v_x_2106_;
}
else
{
lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2157_; 
lean_inc_ref(v_es_2111_);
v_isSharedCheck_2157_ = !lean_is_exclusive(v_x_2106_);
if (v_isSharedCheck_2157_ == 0)
{
lean_object* v_unused_2158_; 
v_unused_2158_ = lean_ctor_get(v_x_2106_, 0);
lean_dec(v_unused_2158_);
v___x_2118_ = v_x_2106_;
v_isShared_2119_ = v_isSharedCheck_2157_;
goto v_resetjp_2117_;
}
else
{
lean_dec(v_x_2106_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2157_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v_v_2120_; lean_object* v___x_2121_; lean_object* v_xs_x27_2122_; lean_object* v___y_2124_; 
v_v_2120_ = lean_array_fget(v_es_2111_, v_j_2114_);
v___x_2121_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___closed__0);
v_xs_x27_2122_ = lean_array_fset(v_es_2111_, v_j_2114_, v___x_2121_);
switch(lean_obj_tag(v_v_2120_))
{
case 0:
{
lean_object* v_key_2129_; lean_object* v_val_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2142_; 
v_key_2129_ = lean_ctor_get(v_v_2120_, 0);
v_val_2130_ = lean_ctor_get(v_v_2120_, 1);
v_isSharedCheck_2142_ = !lean_is_exclusive(v_v_2120_);
if (v_isSharedCheck_2142_ == 0)
{
v___x_2132_ = v_v_2120_;
v_isShared_2133_ = v_isSharedCheck_2142_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_val_2130_);
lean_inc(v_key_2129_);
lean_dec(v_v_2120_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2142_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
size_t v___x_2134_; size_t v___x_2135_; uint8_t v___x_2136_; 
v___x_2134_ = lean_ptr_addr(v_x_2109_);
v___x_2135_ = lean_ptr_addr(v_key_2129_);
v___x_2136_ = lean_usize_dec_eq(v___x_2134_, v___x_2135_);
if (v___x_2136_ == 0)
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
lean_del_object(v___x_2132_);
v___x_2137_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2129_, v_val_2130_, v_x_2109_, v_x_2110_);
v___x_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2137_);
v___y_2124_ = v___x_2138_;
goto v___jp_2123_;
}
else
{
lean_object* v___x_2140_; 
lean_dec(v_val_2130_);
lean_dec(v_key_2129_);
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 1, v_x_2110_);
lean_ctor_set(v___x_2132_, 0, v_x_2109_);
v___x_2140_ = v___x_2132_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v_x_2109_);
lean_ctor_set(v_reuseFailAlloc_2141_, 1, v_x_2110_);
v___x_2140_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
v___y_2124_ = v___x_2140_;
goto v___jp_2123_;
}
}
}
}
case 1:
{
lean_object* v_node_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2155_; 
v_node_2143_ = lean_ctor_get(v_v_2120_, 0);
v_isSharedCheck_2155_ = !lean_is_exclusive(v_v_2120_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2145_ = v_v_2120_;
v_isShared_2146_ = v_isSharedCheck_2155_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_node_2143_);
lean_dec(v_v_2120_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2155_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
size_t v___x_2147_; size_t v___x_2148_; size_t v___x_2149_; size_t v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2153_; 
v___x_2147_ = ((size_t)5ULL);
v___x_2148_ = lean_usize_shift_right(v_x_2107_, v___x_2147_);
v___x_2149_ = ((size_t)1ULL);
v___x_2150_ = lean_usize_add(v_x_2108_, v___x_2149_);
v___x_2151_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg(v_node_2143_, v___x_2148_, v___x_2150_, v_x_2109_, v_x_2110_);
if (v_isShared_2146_ == 0)
{
lean_ctor_set(v___x_2145_, 0, v___x_2151_);
v___x_2153_ = v___x_2145_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v___x_2151_);
v___x_2153_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
v___y_2124_ = v___x_2153_;
goto v___jp_2123_;
}
}
}
default: 
{
lean_object* v___x_2156_; 
v___x_2156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2156_, 0, v_x_2109_);
lean_ctor_set(v___x_2156_, 1, v_x_2110_);
v___y_2124_ = v___x_2156_;
goto v___jp_2123_;
}
}
v___jp_2123_:
{
lean_object* v___x_2125_; lean_object* v___x_2127_; 
v___x_2125_ = lean_array_fset(v_xs_x27_2122_, v_j_2114_, v___y_2124_);
lean_dec(v_j_2114_);
if (v_isShared_2119_ == 0)
{
lean_ctor_set(v___x_2118_, 0, v___x_2125_);
v___x_2127_ = v___x_2118_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v___x_2125_);
v___x_2127_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
return v___x_2127_;
}
}
}
}
}
else
{
lean_object* v_ks_2159_; lean_object* v_vs_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2178_; 
v_ks_2159_ = lean_ctor_get(v_x_2106_, 0);
v_vs_2160_ = lean_ctor_get(v_x_2106_, 1);
v_isSharedCheck_2178_ = !lean_is_exclusive(v_x_2106_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2162_ = v_x_2106_;
v_isShared_2163_ = v_isSharedCheck_2178_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_vs_2160_);
lean_inc(v_ks_2159_);
lean_dec(v_x_2106_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2178_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2165_; 
if (v_isShared_2163_ == 0)
{
v___x_2165_ = v___x_2162_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_ks_2159_);
lean_ctor_set(v_reuseFailAlloc_2177_, 1, v_vs_2160_);
v___x_2165_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
lean_object* v_newNode_2166_; size_t v___x_2167_; uint8_t v___x_2168_; 
v_newNode_2166_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1___redArg(v___x_2165_, v_x_2109_, v_x_2110_);
v___x_2167_ = ((size_t)7ULL);
v___x_2168_ = lean_usize_dec_le(v___x_2167_, v_x_2108_);
if (v___x_2168_ == 0)
{
lean_object* v___x_2169_; lean_object* v___x_2170_; uint8_t v___x_2171_; 
v___x_2169_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2166_);
v___x_2170_ = lean_unsigned_to_nat(4u);
v___x_2171_ = lean_nat_dec_lt(v___x_2169_, v___x_2170_);
lean_dec(v___x_2169_);
if (v___x_2171_ == 0)
{
lean_object* v_ks_2172_; lean_object* v_vs_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; 
v_ks_2172_ = lean_ctor_get(v_newNode_2166_, 0);
lean_inc_ref(v_ks_2172_);
v_vs_2173_ = lean_ctor_get(v_newNode_2166_, 1);
lean_inc_ref(v_vs_2173_);
lean_dec_ref(v_newNode_2166_);
v___x_2174_ = lean_unsigned_to_nat(0u);
v___x_2175_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___closed__0);
v___x_2176_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___redArg(v_x_2108_, v_ks_2172_, v_vs_2173_, v___x_2174_, v___x_2175_);
lean_dec_ref(v_vs_2173_);
lean_dec_ref(v_ks_2172_);
return v___x_2176_;
}
else
{
return v_newNode_2166_;
}
}
else
{
return v_newNode_2166_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___redArg(size_t v_depth_2179_, lean_object* v_keys_2180_, lean_object* v_vals_2181_, lean_object* v_i_2182_, lean_object* v_entries_2183_){
_start:
{
lean_object* v___x_2184_; uint8_t v___x_2185_; 
v___x_2184_ = lean_array_get_size(v_keys_2180_);
v___x_2185_ = lean_nat_dec_lt(v_i_2182_, v___x_2184_);
if (v___x_2185_ == 0)
{
lean_dec(v_i_2182_);
return v_entries_2183_;
}
else
{
lean_object* v_k_2186_; lean_object* v_v_2187_; size_t v___x_2188_; size_t v___x_2189_; size_t v___x_2190_; uint64_t v___x_2191_; size_t v_h_2192_; size_t v___x_2193_; lean_object* v___x_2194_; size_t v___x_2195_; size_t v___x_2196_; size_t v___x_2197_; size_t v_h_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v_k_2186_ = lean_array_fget_borrowed(v_keys_2180_, v_i_2182_);
v_v_2187_ = lean_array_fget_borrowed(v_vals_2181_, v_i_2182_);
v___x_2188_ = lean_ptr_addr(v_k_2186_);
v___x_2189_ = ((size_t)3ULL);
v___x_2190_ = lean_usize_shift_right(v___x_2188_, v___x_2189_);
v___x_2191_ = lean_usize_to_uint64(v___x_2190_);
v_h_2192_ = lean_uint64_to_usize(v___x_2191_);
v___x_2193_ = ((size_t)5ULL);
v___x_2194_ = lean_unsigned_to_nat(1u);
v___x_2195_ = ((size_t)1ULL);
v___x_2196_ = lean_usize_sub(v_depth_2179_, v___x_2195_);
v___x_2197_ = lean_usize_mul(v___x_2193_, v___x_2196_);
v_h_2198_ = lean_usize_shift_right(v_h_2192_, v___x_2197_);
v___x_2199_ = lean_nat_add(v_i_2182_, v___x_2194_);
lean_dec(v_i_2182_);
lean_inc(v_v_2187_);
lean_inc(v_k_2186_);
v___x_2200_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg(v_entries_2183_, v_h_2198_, v_depth_2179_, v_k_2186_, v_v_2187_);
v_i_2182_ = v___x_2199_;
v_entries_2183_ = v___x_2200_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_2202_, lean_object* v_keys_2203_, lean_object* v_vals_2204_, lean_object* v_i_2205_, lean_object* v_entries_2206_){
_start:
{
size_t v_depth_boxed_2207_; lean_object* v_res_2208_; 
v_depth_boxed_2207_ = lean_unbox_usize(v_depth_2202_);
lean_dec(v_depth_2202_);
v_res_2208_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___redArg(v_depth_boxed_2207_, v_keys_2203_, v_vals_2204_, v_i_2205_, v_entries_2206_);
lean_dec_ref(v_vals_2204_);
lean_dec_ref(v_keys_2203_);
return v_res_2208_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___boxed(lean_object* v_x_2209_, lean_object* v_x_2210_, lean_object* v_x_2211_, lean_object* v_x_2212_, lean_object* v_x_2213_){
_start:
{
size_t v_x_6678__boxed_2214_; size_t v_x_6679__boxed_2215_; lean_object* v_res_2216_; 
v_x_6678__boxed_2214_ = lean_unbox_usize(v_x_2210_);
lean_dec(v_x_2210_);
v_x_6679__boxed_2215_ = lean_unbox_usize(v_x_2211_);
lean_dec(v_x_2211_);
v_res_2216_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg(v_x_2209_, v_x_6678__boxed_2214_, v_x_6679__boxed_2215_, v_x_2212_, v_x_2213_);
return v_res_2216_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0___redArg(lean_object* v_x_2217_, lean_object* v_x_2218_, lean_object* v_x_2219_){
_start:
{
size_t v___x_2220_; size_t v___x_2221_; size_t v___x_2222_; uint64_t v___x_2223_; size_t v___x_2224_; size_t v___x_2225_; lean_object* v___x_2226_; 
v___x_2220_ = lean_ptr_addr(v_x_2218_);
v___x_2221_ = ((size_t)3ULL);
v___x_2222_ = lean_usize_shift_right(v___x_2220_, v___x_2221_);
v___x_2223_ = lean_usize_to_uint64(v___x_2222_);
v___x_2224_ = lean_uint64_to_usize(v___x_2223_);
v___x_2225_ = ((size_t)1ULL);
v___x_2226_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg(v_x_2217_, v___x_2224_, v___x_2225_, v_x_2218_, v_x_2219_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___lam__0(lean_object* v_e_2227_, lean_object* v_ringId_2228_, lean_object* v_s_2229_){
_start:
{
lean_object* v_rings_2230_; lean_object* v_typeIdOf_2231_; lean_object* v_exprToRingId_2232_; lean_object* v_semirings_2233_; lean_object* v_stypeIdOf_2234_; lean_object* v_exprToSemiringId_2235_; lean_object* v_ncRings_2236_; lean_object* v_exprToNCRingId_2237_; lean_object* v_nctypeIdOf_2238_; lean_object* v_ncSemirings_2239_; lean_object* v_exprToNCSemiringId_2240_; lean_object* v_ncstypeIdOf_2241_; lean_object* v_steps_2242_; uint8_t v_reportedMaxDegreeIssue_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2251_; 
v_rings_2230_ = lean_ctor_get(v_s_2229_, 0);
v_typeIdOf_2231_ = lean_ctor_get(v_s_2229_, 1);
v_exprToRingId_2232_ = lean_ctor_get(v_s_2229_, 2);
v_semirings_2233_ = lean_ctor_get(v_s_2229_, 3);
v_stypeIdOf_2234_ = lean_ctor_get(v_s_2229_, 4);
v_exprToSemiringId_2235_ = lean_ctor_get(v_s_2229_, 5);
v_ncRings_2236_ = lean_ctor_get(v_s_2229_, 6);
v_exprToNCRingId_2237_ = lean_ctor_get(v_s_2229_, 7);
v_nctypeIdOf_2238_ = lean_ctor_get(v_s_2229_, 8);
v_ncSemirings_2239_ = lean_ctor_get(v_s_2229_, 9);
v_exprToNCSemiringId_2240_ = lean_ctor_get(v_s_2229_, 10);
v_ncstypeIdOf_2241_ = lean_ctor_get(v_s_2229_, 11);
v_steps_2242_ = lean_ctor_get(v_s_2229_, 12);
v_reportedMaxDegreeIssue_2243_ = lean_ctor_get_uint8(v_s_2229_, sizeof(void*)*13);
v_isSharedCheck_2251_ = !lean_is_exclusive(v_s_2229_);
if (v_isSharedCheck_2251_ == 0)
{
v___x_2245_ = v_s_2229_;
v_isShared_2246_ = v_isSharedCheck_2251_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_steps_2242_);
lean_inc(v_ncstypeIdOf_2241_);
lean_inc(v_exprToNCSemiringId_2240_);
lean_inc(v_ncSemirings_2239_);
lean_inc(v_nctypeIdOf_2238_);
lean_inc(v_exprToNCRingId_2237_);
lean_inc(v_ncRings_2236_);
lean_inc(v_exprToSemiringId_2235_);
lean_inc(v_stypeIdOf_2234_);
lean_inc(v_semirings_2233_);
lean_inc(v_exprToRingId_2232_);
lean_inc(v_typeIdOf_2231_);
lean_inc(v_rings_2230_);
lean_dec(v_s_2229_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2251_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2247_; lean_object* v___x_2249_; 
v___x_2247_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0___redArg(v_exprToRingId_2232_, v_e_2227_, v_ringId_2228_);
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 2, v___x_2247_);
v___x_2249_ = v___x_2245_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2250_, 0, v_rings_2230_);
lean_ctor_set(v_reuseFailAlloc_2250_, 1, v_typeIdOf_2231_);
lean_ctor_set(v_reuseFailAlloc_2250_, 2, v___x_2247_);
lean_ctor_set(v_reuseFailAlloc_2250_, 3, v_semirings_2233_);
lean_ctor_set(v_reuseFailAlloc_2250_, 4, v_stypeIdOf_2234_);
lean_ctor_set(v_reuseFailAlloc_2250_, 5, v_exprToSemiringId_2235_);
lean_ctor_set(v_reuseFailAlloc_2250_, 6, v_ncRings_2236_);
lean_ctor_set(v_reuseFailAlloc_2250_, 7, v_exprToNCRingId_2237_);
lean_ctor_set(v_reuseFailAlloc_2250_, 8, v_nctypeIdOf_2238_);
lean_ctor_set(v_reuseFailAlloc_2250_, 9, v_ncSemirings_2239_);
lean_ctor_set(v_reuseFailAlloc_2250_, 10, v_exprToNCSemiringId_2240_);
lean_ctor_set(v_reuseFailAlloc_2250_, 11, v_ncstypeIdOf_2241_);
lean_ctor_set(v_reuseFailAlloc_2250_, 12, v_steps_2242_);
lean_ctor_set_uint8(v_reuseFailAlloc_2250_, sizeof(void*)*13, v_reportedMaxDegreeIssue_2243_);
v___x_2249_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
return v___x_2249_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__1(void){
_start:
{
lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2253_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__0));
v___x_2254_ = l_Lean_stringToMessageData(v___x_2253_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(lean_object* v_e_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_){
_start:
{
lean_object* v_ringId_2268_; lean_object* v___f_2269_; lean_object* v___x_2270_; 
v_ringId_2268_ = lean_ctor_get(v_a_2256_, 0);
lean_inc(v_ringId_2268_);
lean_inc_ref(v_e_2255_);
v___f_2269_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2269_, 0, v_e_2255_);
lean_closure_set(v___f_2269_, 1, v_ringId_2268_);
v___x_2270_ = l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___redArg(v_e_2255_, v_a_2257_, v_a_2262_);
if (lean_obj_tag(v___x_2270_) == 0)
{
lean_object* v_a_2271_; 
v_a_2271_ = lean_ctor_get(v___x_2270_, 0);
lean_inc(v_a_2271_);
lean_dec_ref_known(v___x_2270_, 1);
if (lean_obj_tag(v_a_2271_) == 1)
{
lean_object* v_val_2272_; uint8_t v___x_2273_; 
lean_dec_ref(v___f_2269_);
v_val_2272_ = lean_ctor_get(v_a_2271_, 0);
lean_inc(v_val_2272_);
lean_dec_ref_known(v_a_2271_, 1);
v___x_2273_ = lean_nat_dec_eq(v_val_2272_, v_ringId_2268_);
lean_dec(v_val_2272_);
if (v___x_2273_ == 0)
{
lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2274_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__1);
v___x_2275_ = l_Lean_indentExpr(v_e_2255_);
v___x_2276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2274_);
lean_ctor_set(v___x_2276_, 1, v___x_2275_);
v___x_2277_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_2258_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v_a_2278_; uint8_t v_verbose_2279_; 
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
lean_inc(v_a_2278_);
lean_dec_ref_known(v___x_2277_, 1);
v_verbose_2279_ = lean_ctor_get_uint8(v_a_2278_, 0);
lean_dec(v_a_2278_);
if (v_verbose_2279_ == 0)
{
lean_dec_ref_known(v___x_2276_, 2);
goto v___jp_2265_;
}
else
{
lean_object* v___x_2280_; 
v___x_2280_ = l_Lean_Meta_Sym_reportIssue(v___x_2276_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_, v_a_2262_, v_a_2263_);
if (lean_obj_tag(v___x_2280_) == 0)
{
lean_dec_ref_known(v___x_2280_, 1);
goto v___jp_2265_;
}
else
{
return v___x_2280_;
}
}
}
else
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2288_; 
lean_dec_ref_known(v___x_2276_, 2);
v_a_2281_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2288_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2288_ == 0)
{
v___x_2283_ = v___x_2277_;
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___x_2277_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2286_; 
if (v_isShared_2284_ == 0)
{
v___x_2286_ = v___x_2283_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v_a_2281_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
}
}
else
{
lean_dec_ref(v_e_2255_);
goto v___jp_2265_;
}
}
else
{
lean_object* v___x_2289_; lean_object* v___x_2290_; 
lean_dec(v_a_2271_);
lean_dec_ref(v_e_2255_);
v___x_2289_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_2290_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2289_, v___f_2269_, v_a_2257_);
return v___x_2290_;
}
}
else
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2298_; 
lean_dec_ref(v___f_2269_);
lean_dec_ref(v_e_2255_);
v_a_2291_ = lean_ctor_get(v___x_2270_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2270_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2293_ = v___x_2270_;
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v___x_2270_);
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
v___jp_2265_:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2266_ = lean_box(0);
v___x_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2266_);
return v___x_2267_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___boxed(lean_object* v_e_2299_, lean_object* v_a_2300_, lean_object* v_a_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_, lean_object* v_a_2306_, lean_object* v_a_2307_, lean_object* v_a_2308_){
_start:
{
lean_object* v_res_2309_; 
v_res_2309_ = l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(v_e_2299_, v_a_2300_, v_a_2301_, v_a_2302_, v_a_2303_, v_a_2304_, v_a_2305_, v_a_2306_, v_a_2307_);
lean_dec(v_a_2307_);
lean_dec_ref(v_a_2306_);
lean_dec(v_a_2305_);
lean_dec_ref(v_a_2304_);
lean_dec(v_a_2303_);
lean_dec_ref(v_a_2302_);
lean_dec(v_a_2301_);
lean_dec_ref(v_a_2300_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId(lean_object* v_e_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_){
_start:
{
lean_object* v___x_2323_; 
v___x_2323_ = l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(v_e_2310_, v_a_2311_, v_a_2312_, v_a_2316_, v_a_2317_, v_a_2318_, v_a_2319_, v_a_2320_, v_a_2321_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___boxed(lean_object* v_e_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_){
_start:
{
lean_object* v_res_2337_; 
v_res_2337_ = l_Lean_Meta_Grind_Arith_CommRing_setTermRingId(v_e_2324_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_, v_a_2329_, v_a_2330_, v_a_2331_, v_a_2332_, v_a_2333_, v_a_2334_, v_a_2335_);
lean_dec(v_a_2335_);
lean_dec_ref(v_a_2334_);
lean_dec(v_a_2333_);
lean_dec_ref(v_a_2332_);
lean_dec(v_a_2331_);
lean_dec_ref(v_a_2330_);
lean_dec(v_a_2329_);
lean_dec_ref(v_a_2328_);
lean_dec(v_a_2327_);
lean_dec(v_a_2326_);
lean_dec_ref(v_a_2325_);
return v_res_2337_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0(lean_object* v_00_u03b2_2338_, lean_object* v_x_2339_, lean_object* v_x_2340_, lean_object* v_x_2341_){
_start:
{
lean_object* v___x_2342_; 
v___x_2342_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0___redArg(v_x_2339_, v_x_2340_, v_x_2341_);
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0(lean_object* v_00_u03b2_2343_, lean_object* v_x_2344_, size_t v_x_2345_, size_t v_x_2346_, lean_object* v_x_2347_, lean_object* v_x_2348_){
_start:
{
lean_object* v___x_2349_; 
v___x_2349_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg(v_x_2344_, v_x_2345_, v_x_2346_, v_x_2347_, v_x_2348_);
return v___x_2349_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2350_, lean_object* v_x_2351_, lean_object* v_x_2352_, lean_object* v_x_2353_, lean_object* v_x_2354_, lean_object* v_x_2355_){
_start:
{
size_t v_x_6964__boxed_2356_; size_t v_x_6965__boxed_2357_; lean_object* v_res_2358_; 
v_x_6964__boxed_2356_ = lean_unbox_usize(v_x_2352_);
lean_dec(v_x_2352_);
v_x_6965__boxed_2357_ = lean_unbox_usize(v_x_2353_);
lean_dec(v_x_2353_);
v_res_2358_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0(v_00_u03b2_2350_, v_x_2351_, v_x_6964__boxed_2356_, v_x_6965__boxed_2357_, v_x_2354_, v_x_2355_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2359_, lean_object* v_n_2360_, lean_object* v_k_2361_, lean_object* v_v_2362_){
_start:
{
lean_object* v___x_2363_; 
v___x_2363_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1___redArg(v_n_2360_, v_k_2361_, v_v_2362_);
return v___x_2363_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2364_, size_t v_depth_2365_, lean_object* v_keys_2366_, lean_object* v_vals_2367_, lean_object* v_heq_2368_, lean_object* v_i_2369_, lean_object* v_entries_2370_){
_start:
{
lean_object* v___x_2371_; 
v___x_2371_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___redArg(v_depth_2365_, v_keys_2366_, v_vals_2367_, v_i_2369_, v_entries_2370_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2372_, lean_object* v_depth_2373_, lean_object* v_keys_2374_, lean_object* v_vals_2375_, lean_object* v_heq_2376_, lean_object* v_i_2377_, lean_object* v_entries_2378_){
_start:
{
size_t v_depth_boxed_2379_; lean_object* v_res_2380_; 
v_depth_boxed_2379_ = lean_unbox_usize(v_depth_2373_);
lean_dec(v_depth_2373_);
v_res_2380_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2(v_00_u03b2_2372_, v_depth_boxed_2379_, v_keys_2374_, v_vals_2375_, v_heq_2376_, v_i_2377_, v_entries_2378_);
lean_dec_ref(v_vals_2375_);
lean_dec_ref(v_keys_2374_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2381_, lean_object* v_x_2382_, lean_object* v_x_2383_, lean_object* v_x_2384_, lean_object* v_x_2385_){
_start:
{
lean_object* v___x_2386_; 
v___x_2386_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1_spec__2___redArg(v_x_2382_, v_x_2383_, v_x_2384_, v_x_2385_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__0(lean_object* v_e_2387_, lean_object* v___f_2388_, lean_object* v___f_2389_, lean_object* v_size_2390_, lean_object* v_s_2391_){
_start:
{
lean_object* v_id_2392_; lean_object* v_type_2393_; lean_object* v_u_2394_; lean_object* v_ringInst_2395_; lean_object* v_semiringInst_2396_; lean_object* v_charInst_x3f_2397_; lean_object* v_addFn_x3f_2398_; lean_object* v_mulFn_x3f_2399_; lean_object* v_subFn_x3f_2400_; lean_object* v_negFn_x3f_2401_; lean_object* v_powFn_x3f_2402_; lean_object* v_intCastFn_x3f_2403_; lean_object* v_natCastFn_x3f_2404_; lean_object* v_one_x3f_2405_; lean_object* v_vars_2406_; lean_object* v_varMap_2407_; lean_object* v_denote_2408_; lean_object* v___x_2410_; uint8_t v_isShared_2411_; uint8_t v_isSharedCheck_2417_; 
v_id_2392_ = lean_ctor_get(v_s_2391_, 0);
v_type_2393_ = lean_ctor_get(v_s_2391_, 1);
v_u_2394_ = lean_ctor_get(v_s_2391_, 2);
v_ringInst_2395_ = lean_ctor_get(v_s_2391_, 3);
v_semiringInst_2396_ = lean_ctor_get(v_s_2391_, 4);
v_charInst_x3f_2397_ = lean_ctor_get(v_s_2391_, 5);
v_addFn_x3f_2398_ = lean_ctor_get(v_s_2391_, 6);
v_mulFn_x3f_2399_ = lean_ctor_get(v_s_2391_, 7);
v_subFn_x3f_2400_ = lean_ctor_get(v_s_2391_, 8);
v_negFn_x3f_2401_ = lean_ctor_get(v_s_2391_, 9);
v_powFn_x3f_2402_ = lean_ctor_get(v_s_2391_, 10);
v_intCastFn_x3f_2403_ = lean_ctor_get(v_s_2391_, 11);
v_natCastFn_x3f_2404_ = lean_ctor_get(v_s_2391_, 12);
v_one_x3f_2405_ = lean_ctor_get(v_s_2391_, 13);
v_vars_2406_ = lean_ctor_get(v_s_2391_, 14);
v_varMap_2407_ = lean_ctor_get(v_s_2391_, 15);
v_denote_2408_ = lean_ctor_get(v_s_2391_, 16);
v_isSharedCheck_2417_ = !lean_is_exclusive(v_s_2391_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2410_ = v_s_2391_;
v_isShared_2411_ = v_isSharedCheck_2417_;
goto v_resetjp_2409_;
}
else
{
lean_inc(v_denote_2408_);
lean_inc(v_varMap_2407_);
lean_inc(v_vars_2406_);
lean_inc(v_one_x3f_2405_);
lean_inc(v_natCastFn_x3f_2404_);
lean_inc(v_intCastFn_x3f_2403_);
lean_inc(v_powFn_x3f_2402_);
lean_inc(v_negFn_x3f_2401_);
lean_inc(v_subFn_x3f_2400_);
lean_inc(v_mulFn_x3f_2399_);
lean_inc(v_addFn_x3f_2398_);
lean_inc(v_charInst_x3f_2397_);
lean_inc(v_semiringInst_2396_);
lean_inc(v_ringInst_2395_);
lean_inc(v_u_2394_);
lean_inc(v_type_2393_);
lean_inc(v_id_2392_);
lean_dec(v_s_2391_);
v___x_2410_ = lean_box(0);
v_isShared_2411_ = v_isSharedCheck_2417_;
goto v_resetjp_2409_;
}
v_resetjp_2409_:
{
lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2415_; 
lean_inc_ref(v_e_2387_);
v___x_2412_ = l_Lean_PersistentArray_push___redArg(v_vars_2406_, v_e_2387_);
v___x_2413_ = l_Lean_PersistentHashMap_insert___redArg(v___f_2388_, v___f_2389_, v_varMap_2407_, v_e_2387_, v_size_2390_);
if (v_isShared_2411_ == 0)
{
lean_ctor_set(v___x_2410_, 15, v___x_2413_);
lean_ctor_set(v___x_2410_, 14, v___x_2412_);
v___x_2415_ = v___x_2410_;
goto v_reusejp_2414_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v_id_2392_);
lean_ctor_set(v_reuseFailAlloc_2416_, 1, v_type_2393_);
lean_ctor_set(v_reuseFailAlloc_2416_, 2, v_u_2394_);
lean_ctor_set(v_reuseFailAlloc_2416_, 3, v_ringInst_2395_);
lean_ctor_set(v_reuseFailAlloc_2416_, 4, v_semiringInst_2396_);
lean_ctor_set(v_reuseFailAlloc_2416_, 5, v_charInst_x3f_2397_);
lean_ctor_set(v_reuseFailAlloc_2416_, 6, v_addFn_x3f_2398_);
lean_ctor_set(v_reuseFailAlloc_2416_, 7, v_mulFn_x3f_2399_);
lean_ctor_set(v_reuseFailAlloc_2416_, 8, v_subFn_x3f_2400_);
lean_ctor_set(v_reuseFailAlloc_2416_, 9, v_negFn_x3f_2401_);
lean_ctor_set(v_reuseFailAlloc_2416_, 10, v_powFn_x3f_2402_);
lean_ctor_set(v_reuseFailAlloc_2416_, 11, v_intCastFn_x3f_2403_);
lean_ctor_set(v_reuseFailAlloc_2416_, 12, v_natCastFn_x3f_2404_);
lean_ctor_set(v_reuseFailAlloc_2416_, 13, v_one_x3f_2405_);
lean_ctor_set(v_reuseFailAlloc_2416_, 14, v___x_2412_);
lean_ctor_set(v_reuseFailAlloc_2416_, 15, v___x_2413_);
lean_ctor_set(v_reuseFailAlloc_2416_, 16, v_denote_2408_);
v___x_2415_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2414_;
}
v_reusejp_2414_:
{
return v___x_2415_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__1(lean_object* v_toPure_2418_, lean_object* v_size_2419_, lean_object* v_____r_2420_){
_start:
{
lean_object* v___x_2421_; 
v___x_2421_ = lean_apply_2(v_toPure_2418_, lean_box(0), v_size_2419_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__2(lean_object* v_e_2422_, lean_object* v_inst_2423_, lean_object* v_toBind_2424_, lean_object* v___f_2425_, lean_object* v_____r_2426_){
_start:
{
lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2427_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_2428_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_SolverExtension_markTerm___boxed), 14, 3);
lean_closure_set(v___x_2428_, 0, lean_box(0));
lean_closure_set(v___x_2428_, 1, v___x_2427_);
lean_closure_set(v___x_2428_, 2, v_e_2422_);
v___x_2429_ = lean_apply_2(v_inst_2423_, lean_box(0), v___x_2428_);
v___x_2430_ = lean_apply_4(v_toBind_2424_, lean_box(0), lean_box(0), v___x_2429_, v___f_2425_);
return v___x_2430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__3(lean_object* v_inst_2431_, lean_object* v_e_2432_, lean_object* v_toBind_2433_, lean_object* v___f_2434_, lean_object* v_____r_2435_){
_start:
{
lean_object* v___x_2436_; lean_object* v___x_2437_; 
v___x_2436_ = lean_apply_1(v_inst_2431_, v_e_2432_);
v___x_2437_ = lean_apply_4(v_toBind_2433_, lean_box(0), lean_box(0), v___x_2436_, v___f_2434_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__4(lean_object* v___f_2438_, lean_object* v___f_2439_, lean_object* v_e_2440_, lean_object* v_toPure_2441_, lean_object* v_inst_2442_, lean_object* v_toBind_2443_, lean_object* v_inst_2444_, lean_object* v_modifyRing_2445_, lean_object* v_s_2446_){
_start:
{
lean_object* v_vars_2447_; lean_object* v_varMap_2448_; lean_object* v___x_2449_; 
v_vars_2447_ = lean_ctor_get(v_s_2446_, 14);
lean_inc_ref(v_vars_2447_);
v_varMap_2448_ = lean_ctor_get(v_s_2446_, 15);
lean_inc_ref(v_varMap_2448_);
lean_dec_ref(v_s_2446_);
lean_inc_ref(v_e_2440_);
lean_inc_ref(v___f_2439_);
lean_inc_ref(v___f_2438_);
v___x_2449_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___f_2438_, v___f_2439_, v_varMap_2448_, v_e_2440_);
lean_dec_ref(v_varMap_2448_);
if (lean_obj_tag(v___x_2449_) == 1)
{
lean_object* v_val_2450_; lean_object* v___x_2451_; 
lean_dec_ref(v_vars_2447_);
lean_dec(v_modifyRing_2445_);
lean_dec(v_inst_2444_);
lean_dec(v_toBind_2443_);
lean_dec(v_inst_2442_);
lean_dec_ref(v_e_2440_);
lean_dec_ref(v___f_2439_);
lean_dec_ref(v___f_2438_);
v_val_2450_ = lean_ctor_get(v___x_2449_, 0);
lean_inc(v_val_2450_);
lean_dec_ref_known(v___x_2449_, 1);
v___x_2451_ = lean_apply_2(v_toPure_2441_, lean_box(0), v_val_2450_);
return v___x_2451_;
}
else
{
lean_object* v_size_2452_; lean_object* v___f_2453_; lean_object* v___f_2454_; lean_object* v___f_2455_; lean_object* v___f_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
lean_dec(v___x_2449_);
v_size_2452_ = lean_ctor_get(v_vars_2447_, 2);
lean_inc_n(v_size_2452_, 2);
lean_dec_ref(v_vars_2447_);
lean_inc_ref_n(v_e_2440_, 2);
v___f_2453_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2453_, 0, v_e_2440_);
lean_closure_set(v___f_2453_, 1, v___f_2438_);
lean_closure_set(v___f_2453_, 2, v___f_2439_);
lean_closure_set(v___f_2453_, 3, v_size_2452_);
v___f_2454_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2454_, 0, v_toPure_2441_);
lean_closure_set(v___f_2454_, 1, v_size_2452_);
lean_inc_n(v_toBind_2443_, 2);
v___f_2455_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2455_, 0, v_e_2440_);
lean_closure_set(v___f_2455_, 1, v_inst_2442_);
lean_closure_set(v___f_2455_, 2, v_toBind_2443_);
lean_closure_set(v___f_2455_, 3, v___f_2454_);
v___f_2456_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__3), 5, 4);
lean_closure_set(v___f_2456_, 0, v_inst_2444_);
lean_closure_set(v___f_2456_, 1, v_e_2440_);
lean_closure_set(v___f_2456_, 2, v_toBind_2443_);
lean_closure_set(v___f_2456_, 3, v___f_2455_);
v___x_2457_ = lean_apply_1(v_modifyRing_2445_, v___f_2453_);
v___x_2458_ = lean_apply_4(v_toBind_2443_, lean_box(0), lean_box(0), v___x_2457_, v___f_2456_);
return v___x_2458_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg(lean_object* v_inst_2461_, lean_object* v_inst_2462_, lean_object* v_inst_2463_, lean_object* v_inst_2464_, lean_object* v_e_2465_){
_start:
{
lean_object* v_toApplicative_2466_; lean_object* v_toBind_2467_; lean_object* v_getRing_2468_; lean_object* v_modifyRing_2469_; lean_object* v_toPure_2470_; lean_object* v___f_2471_; lean_object* v___f_2472_; lean_object* v___f_2473_; lean_object* v___x_2474_; 
v_toApplicative_2466_ = lean_ctor_get(v_inst_2462_, 0);
lean_inc_ref(v_toApplicative_2466_);
v_toBind_2467_ = lean_ctor_get(v_inst_2462_, 1);
lean_inc_n(v_toBind_2467_, 2);
lean_dec_ref(v_inst_2462_);
v_getRing_2468_ = lean_ctor_get(v_inst_2463_, 0);
lean_inc(v_getRing_2468_);
v_modifyRing_2469_ = lean_ctor_get(v_inst_2463_, 1);
lean_inc(v_modifyRing_2469_);
lean_dec_ref(v_inst_2463_);
v_toPure_2470_ = lean_ctor_get(v_toApplicative_2466_, 1);
lean_inc(v_toPure_2470_);
lean_dec_ref(v_toApplicative_2466_);
v___f_2471_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__0));
v___f_2472_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__1));
v___f_2473_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__4), 9, 8);
lean_closure_set(v___f_2473_, 0, v___f_2471_);
lean_closure_set(v___f_2473_, 1, v___f_2472_);
lean_closure_set(v___f_2473_, 2, v_e_2465_);
lean_closure_set(v___f_2473_, 3, v_toPure_2470_);
lean_closure_set(v___f_2473_, 4, v_inst_2461_);
lean_closure_set(v___f_2473_, 5, v_toBind_2467_);
lean_closure_set(v___f_2473_, 6, v_inst_2464_);
lean_closure_set(v___f_2473_, 7, v_modifyRing_2469_);
v___x_2474_ = lean_apply_4(v_toBind_2467_, lean_box(0), lean_box(0), v_getRing_2468_, v___f_2473_);
return v___x_2474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore(lean_object* v_m_2475_, lean_object* v_inst_2476_, lean_object* v_inst_2477_, lean_object* v_inst_2478_, lean_object* v_inst_2479_, lean_object* v_e_2480_){
_start:
{
lean_object* v___x_2481_; 
v___x_2481_ = l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg(v_inst_2476_, v_inst_2477_, v_inst_2478_, v_inst_2479_, v_e_2480_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___lam__0(lean_object* v_e_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_){
_start:
{
lean_object* v___x_2495_; 
v___x_2495_ = l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(v_e_2482_, v___y_2483_, v___y_2484_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_);
return v___x_2495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___lam__0___boxed(lean_object* v_e_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
lean_object* v_res_2509_; 
v_res_2509_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___lam__0(v_e_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
lean_dec(v___y_2505_);
lean_dec_ref(v___y_2504_);
lean_dec(v___y_2503_);
lean_dec_ref(v___y_2502_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
lean_dec(v___y_2499_);
lean_dec(v___y_2498_);
lean_dec_ref(v___y_2497_);
return v_res_2509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0___lam__0(lean_object* v_e_2512_, lean_object* v_size_2513_, lean_object* v_s_2514_){
_start:
{
lean_object* v_toRing_2515_; lean_object* v_invFn_x3f_2516_; lean_object* v_semiringId_x3f_2517_; lean_object* v_commSemiringInst_2518_; lean_object* v_commRingInst_2519_; lean_object* v_noZeroDivInst_x3f_2520_; lean_object* v_fieldInst_x3f_2521_; lean_object* v_powIdentityInst_x3f_2522_; lean_object* v_denoteEntries_2523_; lean_object* v_nextId_2524_; lean_object* v_steps_2525_; lean_object* v_queue_2526_; lean_object* v_basis_2527_; lean_object* v_diseqs_2528_; uint8_t v_recheck_2529_; lean_object* v_invSet_2530_; lean_object* v_powIdentityVarCount_2531_; lean_object* v_numEq0_x3f_2532_; uint8_t v_numEq0Updated_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2566_; 
v_toRing_2515_ = lean_ctor_get(v_s_2514_, 0);
v_invFn_x3f_2516_ = lean_ctor_get(v_s_2514_, 1);
v_semiringId_x3f_2517_ = lean_ctor_get(v_s_2514_, 2);
v_commSemiringInst_2518_ = lean_ctor_get(v_s_2514_, 3);
v_commRingInst_2519_ = lean_ctor_get(v_s_2514_, 4);
v_noZeroDivInst_x3f_2520_ = lean_ctor_get(v_s_2514_, 5);
v_fieldInst_x3f_2521_ = lean_ctor_get(v_s_2514_, 6);
v_powIdentityInst_x3f_2522_ = lean_ctor_get(v_s_2514_, 7);
v_denoteEntries_2523_ = lean_ctor_get(v_s_2514_, 8);
v_nextId_2524_ = lean_ctor_get(v_s_2514_, 9);
v_steps_2525_ = lean_ctor_get(v_s_2514_, 10);
v_queue_2526_ = lean_ctor_get(v_s_2514_, 11);
v_basis_2527_ = lean_ctor_get(v_s_2514_, 12);
v_diseqs_2528_ = lean_ctor_get(v_s_2514_, 13);
v_recheck_2529_ = lean_ctor_get_uint8(v_s_2514_, sizeof(void*)*17);
v_invSet_2530_ = lean_ctor_get(v_s_2514_, 14);
v_powIdentityVarCount_2531_ = lean_ctor_get(v_s_2514_, 15);
v_numEq0_x3f_2532_ = lean_ctor_get(v_s_2514_, 16);
v_numEq0Updated_2533_ = lean_ctor_get_uint8(v_s_2514_, sizeof(void*)*17 + 1);
v_isSharedCheck_2566_ = !lean_is_exclusive(v_s_2514_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2535_ = v_s_2514_;
v_isShared_2536_ = v_isSharedCheck_2566_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_numEq0_x3f_2532_);
lean_inc(v_powIdentityVarCount_2531_);
lean_inc(v_invSet_2530_);
lean_inc(v_diseqs_2528_);
lean_inc(v_basis_2527_);
lean_inc(v_queue_2526_);
lean_inc(v_steps_2525_);
lean_inc(v_nextId_2524_);
lean_inc(v_denoteEntries_2523_);
lean_inc(v_powIdentityInst_x3f_2522_);
lean_inc(v_fieldInst_x3f_2521_);
lean_inc(v_noZeroDivInst_x3f_2520_);
lean_inc(v_commRingInst_2519_);
lean_inc(v_commSemiringInst_2518_);
lean_inc(v_semiringId_x3f_2517_);
lean_inc(v_invFn_x3f_2516_);
lean_inc(v_toRing_2515_);
lean_dec(v_s_2514_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2566_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v_id_2537_; lean_object* v_type_2538_; lean_object* v_u_2539_; lean_object* v_ringInst_2540_; lean_object* v_semiringInst_2541_; lean_object* v_charInst_x3f_2542_; lean_object* v_addFn_x3f_2543_; lean_object* v_mulFn_x3f_2544_; lean_object* v_subFn_x3f_2545_; lean_object* v_negFn_x3f_2546_; lean_object* v_powFn_x3f_2547_; lean_object* v_intCastFn_x3f_2548_; lean_object* v_natCastFn_x3f_2549_; lean_object* v_one_x3f_2550_; lean_object* v_vars_2551_; lean_object* v_varMap_2552_; lean_object* v_denote_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2565_; 
v_id_2537_ = lean_ctor_get(v_toRing_2515_, 0);
v_type_2538_ = lean_ctor_get(v_toRing_2515_, 1);
v_u_2539_ = lean_ctor_get(v_toRing_2515_, 2);
v_ringInst_2540_ = lean_ctor_get(v_toRing_2515_, 3);
v_semiringInst_2541_ = lean_ctor_get(v_toRing_2515_, 4);
v_charInst_x3f_2542_ = lean_ctor_get(v_toRing_2515_, 5);
v_addFn_x3f_2543_ = lean_ctor_get(v_toRing_2515_, 6);
v_mulFn_x3f_2544_ = lean_ctor_get(v_toRing_2515_, 7);
v_subFn_x3f_2545_ = lean_ctor_get(v_toRing_2515_, 8);
v_negFn_x3f_2546_ = lean_ctor_get(v_toRing_2515_, 9);
v_powFn_x3f_2547_ = lean_ctor_get(v_toRing_2515_, 10);
v_intCastFn_x3f_2548_ = lean_ctor_get(v_toRing_2515_, 11);
v_natCastFn_x3f_2549_ = lean_ctor_get(v_toRing_2515_, 12);
v_one_x3f_2550_ = lean_ctor_get(v_toRing_2515_, 13);
v_vars_2551_ = lean_ctor_get(v_toRing_2515_, 14);
v_varMap_2552_ = lean_ctor_get(v_toRing_2515_, 15);
v_denote_2553_ = lean_ctor_get(v_toRing_2515_, 16);
v_isSharedCheck_2565_ = !lean_is_exclusive(v_toRing_2515_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2555_ = v_toRing_2515_;
v_isShared_2556_ = v_isSharedCheck_2565_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_denote_2553_);
lean_inc(v_varMap_2552_);
lean_inc(v_vars_2551_);
lean_inc(v_one_x3f_2550_);
lean_inc(v_natCastFn_x3f_2549_);
lean_inc(v_intCastFn_x3f_2548_);
lean_inc(v_powFn_x3f_2547_);
lean_inc(v_negFn_x3f_2546_);
lean_inc(v_subFn_x3f_2545_);
lean_inc(v_mulFn_x3f_2544_);
lean_inc(v_addFn_x3f_2543_);
lean_inc(v_charInst_x3f_2542_);
lean_inc(v_semiringInst_2541_);
lean_inc(v_ringInst_2540_);
lean_inc(v_u_2539_);
lean_inc(v_type_2538_);
lean_inc(v_id_2537_);
lean_dec(v_toRing_2515_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2565_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2560_; 
lean_inc_ref(v_e_2512_);
v___x_2557_ = l_Lean_PersistentArray_push___redArg(v_vars_2551_, v_e_2512_);
v___x_2558_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0___redArg(v_varMap_2552_, v_e_2512_, v_size_2513_);
if (v_isShared_2556_ == 0)
{
lean_ctor_set(v___x_2555_, 15, v___x_2558_);
lean_ctor_set(v___x_2555_, 14, v___x_2557_);
v___x_2560_ = v___x_2555_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_id_2537_);
lean_ctor_set(v_reuseFailAlloc_2564_, 1, v_type_2538_);
lean_ctor_set(v_reuseFailAlloc_2564_, 2, v_u_2539_);
lean_ctor_set(v_reuseFailAlloc_2564_, 3, v_ringInst_2540_);
lean_ctor_set(v_reuseFailAlloc_2564_, 4, v_semiringInst_2541_);
lean_ctor_set(v_reuseFailAlloc_2564_, 5, v_charInst_x3f_2542_);
lean_ctor_set(v_reuseFailAlloc_2564_, 6, v_addFn_x3f_2543_);
lean_ctor_set(v_reuseFailAlloc_2564_, 7, v_mulFn_x3f_2544_);
lean_ctor_set(v_reuseFailAlloc_2564_, 8, v_subFn_x3f_2545_);
lean_ctor_set(v_reuseFailAlloc_2564_, 9, v_negFn_x3f_2546_);
lean_ctor_set(v_reuseFailAlloc_2564_, 10, v_powFn_x3f_2547_);
lean_ctor_set(v_reuseFailAlloc_2564_, 11, v_intCastFn_x3f_2548_);
lean_ctor_set(v_reuseFailAlloc_2564_, 12, v_natCastFn_x3f_2549_);
lean_ctor_set(v_reuseFailAlloc_2564_, 13, v_one_x3f_2550_);
lean_ctor_set(v_reuseFailAlloc_2564_, 14, v___x_2557_);
lean_ctor_set(v_reuseFailAlloc_2564_, 15, v___x_2558_);
lean_ctor_set(v_reuseFailAlloc_2564_, 16, v_denote_2553_);
v___x_2560_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
lean_object* v___x_2562_; 
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 0, v___x_2560_);
v___x_2562_ = v___x_2535_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v___x_2560_);
lean_ctor_set(v_reuseFailAlloc_2563_, 1, v_invFn_x3f_2516_);
lean_ctor_set(v_reuseFailAlloc_2563_, 2, v_semiringId_x3f_2517_);
lean_ctor_set(v_reuseFailAlloc_2563_, 3, v_commSemiringInst_2518_);
lean_ctor_set(v_reuseFailAlloc_2563_, 4, v_commRingInst_2519_);
lean_ctor_set(v_reuseFailAlloc_2563_, 5, v_noZeroDivInst_x3f_2520_);
lean_ctor_set(v_reuseFailAlloc_2563_, 6, v_fieldInst_x3f_2521_);
lean_ctor_set(v_reuseFailAlloc_2563_, 7, v_powIdentityInst_x3f_2522_);
lean_ctor_set(v_reuseFailAlloc_2563_, 8, v_denoteEntries_2523_);
lean_ctor_set(v_reuseFailAlloc_2563_, 9, v_nextId_2524_);
lean_ctor_set(v_reuseFailAlloc_2563_, 10, v_steps_2525_);
lean_ctor_set(v_reuseFailAlloc_2563_, 11, v_queue_2526_);
lean_ctor_set(v_reuseFailAlloc_2563_, 12, v_basis_2527_);
lean_ctor_set(v_reuseFailAlloc_2563_, 13, v_diseqs_2528_);
lean_ctor_set(v_reuseFailAlloc_2563_, 14, v_invSet_2530_);
lean_ctor_set(v_reuseFailAlloc_2563_, 15, v_powIdentityVarCount_2531_);
lean_ctor_set(v_reuseFailAlloc_2563_, 16, v_numEq0_x3f_2532_);
lean_ctor_set_uint8(v_reuseFailAlloc_2563_, sizeof(void*)*17, v_recheck_2529_);
lean_ctor_set_uint8(v_reuseFailAlloc_2563_, sizeof(void*)*17 + 1, v_numEq0Updated_2533_);
v___x_2562_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
return v___x_2562_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0(lean_object* v_e_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_){
_start:
{
lean_object* v___x_2580_; 
v___x_2580_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_);
if (lean_obj_tag(v___x_2580_) == 0)
{
lean_object* v_a_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2631_; 
v_a_2581_ = lean_ctor_get(v___x_2580_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2583_ = v___x_2580_;
v_isShared_2584_ = v_isSharedCheck_2631_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_a_2581_);
lean_dec(v___x_2580_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2631_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v_toRing_2585_; lean_object* v_vars_2586_; lean_object* v_varMap_2587_; lean_object* v___x_2588_; 
v_toRing_2585_ = lean_ctor_get(v_a_2581_, 0);
lean_inc_ref(v_toRing_2585_);
lean_dec(v_a_2581_);
v_vars_2586_ = lean_ctor_get(v_toRing_2585_, 14);
lean_inc_ref(v_vars_2586_);
v_varMap_2587_ = lean_ctor_get(v_toRing_2585_, 15);
lean_inc_ref(v_varMap_2587_);
lean_dec_ref(v_toRing_2585_);
v___x_2588_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg(v_varMap_2587_, v_e_2567_);
lean_dec_ref(v_varMap_2587_);
if (lean_obj_tag(v___x_2588_) == 1)
{
lean_object* v_val_2589_; lean_object* v___x_2591_; 
lean_dec_ref(v_vars_2586_);
lean_dec_ref(v_e_2567_);
v_val_2589_ = lean_ctor_get(v___x_2588_, 0);
lean_inc(v_val_2589_);
lean_dec_ref_known(v___x_2588_, 1);
if (v_isShared_2584_ == 0)
{
lean_ctor_set(v___x_2583_, 0, v_val_2589_);
v___x_2591_ = v___x_2583_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_val_2589_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
return v___x_2591_;
}
}
else
{
lean_object* v_size_2593_; lean_object* v___f_2594_; lean_object* v___x_2595_; 
lean_dec(v___x_2588_);
lean_del_object(v___x_2583_);
v_size_2593_ = lean_ctor_get(v_vars_2586_, 2);
lean_inc_n(v_size_2593_, 2);
lean_dec_ref(v_vars_2586_);
lean_inc_ref(v_e_2567_);
v___f_2594_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0___lam__0), 3, 2);
lean_closure_set(v___f_2594_, 0, v_e_2567_);
lean_closure_set(v___f_2594_, 1, v_size_2593_);
v___x_2595_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_2594_, v___y_2568_, v___y_2569_);
if (lean_obj_tag(v___x_2595_) == 0)
{
lean_object* v___x_2596_; 
lean_dec_ref_known(v___x_2595_, 1);
lean_inc_ref(v_e_2567_);
v___x_2596_ = l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(v_e_2567_, v___y_2568_, v___y_2569_, v___y_2573_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_);
if (lean_obj_tag(v___x_2596_) == 0)
{
lean_object* v___x_2597_; lean_object* v___x_2598_; 
lean_dec_ref_known(v___x_2596_, 1);
v___x_2597_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_2598_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_2597_, v_e_2567_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2605_; 
v_isSharedCheck_2605_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2605_ == 0)
{
lean_object* v_unused_2606_; 
v_unused_2606_ = lean_ctor_get(v___x_2598_, 0);
lean_dec(v_unused_2606_);
v___x_2600_ = v___x_2598_;
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
else
{
lean_dec(v___x_2598_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
lean_object* v___x_2603_; 
if (v_isShared_2601_ == 0)
{
lean_ctor_set(v___x_2600_, 0, v_size_2593_);
v___x_2603_ = v___x_2600_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v_size_2593_);
v___x_2603_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
return v___x_2603_;
}
}
}
else
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2614_; 
lean_dec(v_size_2593_);
v_a_2607_ = lean_ctor_get(v___x_2598_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2609_ = v___x_2598_;
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2598_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2612_; 
if (v_isShared_2610_ == 0)
{
v___x_2612_ = v___x_2609_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_a_2607_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
}
else
{
lean_object* v_a_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2622_; 
lean_dec(v_size_2593_);
lean_dec_ref(v_e_2567_);
v_a_2615_ = lean_ctor_get(v___x_2596_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2617_ = v___x_2596_;
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_a_2615_);
lean_dec(v___x_2596_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2620_; 
if (v_isShared_2618_ == 0)
{
v___x_2620_ = v___x_2617_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v_a_2615_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
}
}
else
{
lean_object* v_a_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2630_; 
lean_dec(v_size_2593_);
lean_dec_ref(v_e_2567_);
v_a_2623_ = lean_ctor_get(v___x_2595_, 0);
v_isSharedCheck_2630_ = !lean_is_exclusive(v___x_2595_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2625_ = v___x_2595_;
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_a_2623_);
lean_dec(v___x_2595_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v___x_2628_; 
if (v_isShared_2626_ == 0)
{
v___x_2628_ = v___x_2625_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_a_2623_);
v___x_2628_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
return v___x_2628_;
}
}
}
}
}
}
else
{
lean_object* v_a_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2639_; 
lean_dec_ref(v_e_2567_);
v_a_2632_ = lean_ctor_get(v___x_2580_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2634_ = v___x_2580_;
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_a_2632_);
lean_dec(v___x_2580_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0___boxed(lean_object* v_e_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_){
_start:
{
lean_object* v_res_2653_; 
v_res_2653_ = l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0(v_e_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_);
lean_dec(v___y_2651_);
lean_dec_ref(v___y_2650_);
lean_dec(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec(v___y_2647_);
lean_dec_ref(v___y_2646_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
lean_dec(v___y_2643_);
lean_dec(v___y_2642_);
lean_dec_ref(v___y_2641_);
return v_res_2653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVar(lean_object* v_e_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_, lean_object* v_a_2658_, lean_object* v_a_2659_, lean_object* v_a_2660_, lean_object* v_a_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_){
_start:
{
lean_object* v___x_2667_; 
v___x_2667_ = l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0(v_e_2654_, v_a_2655_, v_a_2656_, v_a_2657_, v_a_2658_, v_a_2659_, v_a_2660_, v_a_2661_, v_a_2662_, v_a_2663_, v_a_2664_, v_a_2665_);
return v___x_2667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVar___boxed(lean_object* v_e_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_, lean_object* v_a_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_, lean_object* v_a_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_){
_start:
{
lean_object* v_res_2681_; 
v_res_2681_ = l_Lean_Meta_Grind_Arith_CommRing_mkVar(v_e_2668_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_, v_a_2679_);
lean_dec(v_a_2679_);
lean_dec_ref(v_a_2678_);
lean_dec(v_a_2677_);
lean_dec_ref(v_a_2676_);
lean_dec(v_a_2675_);
lean_dec_ref(v_a_2674_);
lean_dec(v_a_2673_);
lean_dec_ref(v_a_2672_);
lean_dec(v_a_2671_);
lean_dec(v_a_2670_);
lean_dec_ref(v_a_2669_);
return v_res_2681_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadRing(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Arith_Poly(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Arith_Poly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM = _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadRing(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Arith_Poly(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Arith_Poly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(builtin);
}
#ifdef __cplusplus
}
#endif

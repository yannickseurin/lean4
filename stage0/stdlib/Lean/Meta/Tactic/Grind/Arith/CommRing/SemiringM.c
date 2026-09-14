// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.CommRing.SemiringM
// Imports: public import Lean.Meta.Tactic.Grind.Arith.CommRing.RingM public import Lean.Meta.Tactic.Grind.Arith.CommRing.MonadSemiring import Lean.Meta.Tactic.Grind.Arith.CommRing.DenoteExpr public import Lean.Meta.Tactic.Grind.Arith.CommRing.Functions
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
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_CommRing_ringExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
extern lean_object* l_Lean_Nat_mkType;
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_Grind_instInhabitedGoalM___redArg();
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instBEqExprPtr___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instHashableExprPtr___lam__0___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SolverExtension_markTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__0_value;
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__1___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__0_value),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__1_value)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "`grind` internal error, invalid semiringId"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "`grind` internal error, invalid ringId"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Ring"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "OfSemiring"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "toQ"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 53, 64, 113, 205, 30, 141, 114)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__4_value),LEAN_SCALAR_PTR_LITERAL(232, 146, 236, 221, 122, 127, 105, 70)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Add"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 91, 0, 102, 155, 93, 69, 240)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "AddRightCancel"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(33, 101, 175, 31, 110, 234, 168, 33)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHAdd"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(229, 81, 239, 34, 203, 244, 36, 133)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Semiring"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toAdd"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(7, 205, 186, 60, 7, 38, 135, 75)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 107, 107, 59, 202, 230, 169, 251)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(232, 23, 103, 115, 5, 120, 143, 98)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "expression in two different semirings"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instBEqExprPtr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instHashableExprPtr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__1(lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "failed to find instance"};
static const lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toNeg"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(100, 233, 103, 154, 53, 22, 86, 139)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__4;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 49, 23, 61, 125, 46, 165, 129)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HPow"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 188, 136, 200, 106, 253, 76, 178)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__2;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "npow"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__3_value),LEAN_SCALAR_PTR_LITERAL(227, 91, 39, 101, 227, 157, 49, 255)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hPow"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 188, 136, 200, 106, 253, 76, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__5_value),LEAN_SCALAR_PTR_LITERAL(32, 63, 208, 57, 56, 184, 164, 144)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lean.Meta.Tactic.Grind.Arith.CommRing.SemiringM"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "_private.Lean.Meta.Tactic.Grind.Arith.CommRing.SemiringM.0.Lean.Grind.CommRing.Expr.denoteAsRingExpr.go"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_CommRing_Expr_denoteAsRingExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_CommRing_Expr_denoteAsRingExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run___redArg(lean_object* v_semiringId_1_, lean_object* v_x_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_){
_start:
{
lean_object* v___x_14_; 
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
lean_inc(v_a_10_);
lean_inc_ref(v_a_9_);
lean_inc(v_a_8_);
lean_inc_ref(v_a_7_);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
lean_inc(v_a_4_);
lean_inc(v_a_3_);
v___x_14_ = lean_apply_12(v_x_2_, v_semiringId_1_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_, v_a_12_, lean_box(0));
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run___redArg___boxed(lean_object* v_semiringId_15_, lean_object* v_x_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run___redArg(v_semiringId_15_, v_x_16_, v_a_17_, v_a_18_, v_a_19_, v_a_20_, v_a_21_, v_a_22_, v_a_23_, v_a_24_, v_a_25_, v_a_26_);
lean_dec(v_a_26_);
lean_dec_ref(v_a_25_);
lean_dec(v_a_24_);
lean_dec_ref(v_a_23_);
lean_dec(v_a_22_);
lean_dec_ref(v_a_21_);
lean_dec(v_a_20_);
lean_dec_ref(v_a_19_);
lean_dec(v_a_18_);
lean_dec(v_a_17_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run(lean_object* v_00_u03b1_29_, lean_object* v_semiringId_30_, lean_object* v_x_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v___x_43_; 
lean_inc(v_a_41_);
lean_inc_ref(v_a_40_);
lean_inc(v_a_39_);
lean_inc_ref(v_a_38_);
lean_inc(v_a_37_);
lean_inc_ref(v_a_36_);
lean_inc(v_a_35_);
lean_inc_ref(v_a_34_);
lean_inc(v_a_33_);
lean_inc(v_a_32_);
v___x_43_ = lean_apply_12(v_x_31_, v_semiringId_30_, v_a_32_, v_a_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, v_a_40_, v_a_41_, lean_box(0));
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run___boxed(lean_object* v_00_u03b1_44_, lean_object* v_semiringId_45_, lean_object* v_x_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run(v_00_u03b1_44_, v_semiringId_45_, v_x_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_, v_a_55_, v_a_56_);
lean_dec(v_a_56_);
lean_dec_ref(v_a_55_);
lean_dec(v_a_54_);
lean_dec_ref(v_a_53_);
lean_dec(v_a_52_);
lean_dec_ref(v_a_51_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec(v_a_47_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId___redArg(lean_object* v_a_59_){
_start:
{
lean_object* v___x_61_; 
lean_inc(v_a_59_);
v___x_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_61_, 0, v_a_59_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId___redArg___boxed(lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_Meta_Grind_Arith_CommRing_getSemiringId___redArg(v_a_62_);
lean_dec(v_a_62_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId(lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v___x_77_; 
lean_inc(v_a_65_);
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v_a_65_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId___boxed(lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_Meta_Grind_Arith_CommRing_getSemiringId(v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
lean_dec(v_a_88_);
lean_dec_ref(v_a_87_);
lean_dec(v_a_86_);
lean_dec_ref(v_a_85_);
lean_dec(v_a_84_);
lean_dec_ref(v_a_83_);
lean_dec(v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
lean_dec(v_a_79_);
lean_dec(v_a_78_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__0(lean_object* v_e_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Lean_Meta_Sym_canon(v_e_91_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_);
if (lean_obj_tag(v___x_104_) == 0)
{
lean_object* v_a_105_; lean_object* v___x_106_; 
v_a_105_ = lean_ctor_get(v___x_104_, 0);
lean_inc(v_a_105_);
lean_dec_ref_known(v___x_104_, 1);
v___x_106_ = l_Lean_Meta_Sym_shareCommon(v_a_105_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_);
return v___x_106_;
}
else
{
return v___x_104_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__0___boxed(lean_object* v_e_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__0(v_e_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
lean_dec(v___y_112_);
lean_dec_ref(v___y_111_);
lean_dec(v___y_110_);
lean_dec(v___y_109_);
lean_dec(v___y_108_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__1(lean_object* v_e_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_e_121_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__1___boxed(lean_object* v_e_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__1(v_e_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
lean_dec(v___y_138_);
lean_dec(v___y_137_);
lean_dec(v___y_136_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0_spec__0(lean_object* v_msgData_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_){
_start:
{
lean_object* v___x_161_; lean_object* v_env_162_; lean_object* v___x_163_; lean_object* v_toCold_164_; lean_object* v_mctx_165_; lean_object* v_lctx_166_; lean_object* v_options_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_161_ = lean_st_ref_get(v___y_159_);
v_env_162_ = lean_ctor_get(v___x_161_, 0);
lean_inc_ref(v_env_162_);
lean_dec(v___x_161_);
v___x_163_ = lean_st_ref_get(v___y_157_);
v_toCold_164_ = lean_ctor_get(v___y_158_, 0);
v_mctx_165_ = lean_ctor_get(v___x_163_, 0);
lean_inc_ref(v_mctx_165_);
lean_dec(v___x_163_);
v_lctx_166_ = lean_ctor_get(v___y_156_, 2);
v_options_167_ = lean_ctor_get(v_toCold_164_, 2);
lean_inc_ref(v_options_167_);
lean_inc_ref(v_lctx_166_);
v___x_168_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_168_, 0, v_env_162_);
lean_ctor_set(v___x_168_, 1, v_mctx_165_);
lean_ctor_set(v___x_168_, 2, v_lctx_166_);
lean_ctor_set(v___x_168_, 3, v_options_167_);
v___x_169_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set(v___x_169_, 1, v_msgData_155_);
v___x_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0_spec__0___boxed(lean_object* v_msgData_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0_spec__0(v_msgData_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg(lean_object* v_msg_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_){
_start:
{
lean_object* v_ref_184_; lean_object* v___x_185_; lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_194_; 
v_ref_184_ = lean_ctor_get(v___y_181_, 2);
v___x_185_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0_spec__0(v_msg_178_, v___y_179_, v___y_180_, v___y_181_, v___y_182_);
v_a_186_ = lean_ctor_get(v___x_185_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_194_ == 0)
{
v___x_188_ = v___x_185_;
v_isShared_189_ = v_isSharedCheck_194_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_185_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_194_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_190_; lean_object* v___x_192_; 
lean_inc(v_ref_184_);
v___x_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_190_, 0, v_ref_184_);
lean_ctor_set(v___x_190_, 1, v_a_186_);
if (v_isShared_189_ == 0)
{
lean_ctor_set_tag(v___x_188_, 1);
lean_ctor_set(v___x_188_, 0, v___x_190_);
v___x_192_ = v___x_188_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_190_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg___boxed(lean_object* v_msg_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg(v_msg_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
return v_res_201_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__1(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__0));
v___x_204_ = l_Lean_stringToMessageData(v___x_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_206_, v_a_214_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_231_; 
v_a_218_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_231_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_231_ == 0)
{
v___x_220_ = v___x_217_;
v_isShared_221_ = v_isSharedCheck_231_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_217_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_231_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v_semirings_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v_semirings_222_ = lean_ctor_get(v_a_218_, 3);
lean_inc_ref(v_semirings_222_);
lean_dec(v_a_218_);
v___x_223_ = lean_array_get_size(v_semirings_222_);
v___x_224_ = lean_nat_dec_lt(v_a_205_, v___x_223_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; lean_object* v___x_226_; 
lean_dec_ref(v_semirings_222_);
lean_del_object(v___x_220_);
v___x_225_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__1);
v___x_226_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg(v___x_225_, v_a_212_, v_a_213_, v_a_214_, v_a_215_);
return v___x_226_;
}
else
{
lean_object* v___x_227_; lean_object* v___x_229_; 
v___x_227_ = lean_array_fget(v_semirings_222_, v_a_205_);
lean_dec_ref(v_semirings_222_);
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 0, v___x_227_);
v___x_229_ = v___x_220_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_227_);
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
else
{
lean_object* v_a_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_239_; 
v_a_232_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_239_ == 0)
{
v___x_234_ = v___x_217_;
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_a_232_);
lean_dec(v___x_217_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_237_; 
if (v_isShared_235_ == 0)
{
v___x_237_ = v___x_234_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_a_232_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___boxed(lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_, v_a_248_, v_a_249_, v_a_250_);
lean_dec(v_a_250_);
lean_dec_ref(v_a_249_);
lean_dec(v_a_248_);
lean_dec_ref(v_a_247_);
lean_dec(v_a_246_);
lean_dec_ref(v_a_245_);
lean_dec(v_a_244_);
lean_dec_ref(v_a_243_);
lean_dec(v_a_242_);
lean_dec(v_a_241_);
lean_dec(v_a_240_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0(lean_object* v_00_u03b1_253_, lean_object* v_msg_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg(v_msg_254_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___boxed(lean_object* v_00_u03b1_268_, lean_object* v_msg_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0(v_00_u03b1_268_, v_msg_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
lean_dec(v___y_276_);
lean_dec_ref(v___y_275_);
lean_dec(v___y_274_);
lean_dec_ref(v___y_273_);
lean_dec(v___y_272_);
lean_dec(v___y_271_);
lean_dec(v___y_270_);
return v_res_282_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = lean_box(0);
v___x_284_ = l_unsafeCast___redArg(v___x_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0(lean_object* v_a_285_, lean_object* v_f_286_, lean_object* v_s_287_){
_start:
{
lean_object* v_rings_288_; lean_object* v_typeIdOf_289_; lean_object* v_exprToRingId_290_; lean_object* v_semirings_291_; lean_object* v_stypeIdOf_292_; lean_object* v_exprToSemiringId_293_; lean_object* v_ncRings_294_; lean_object* v_exprToNCRingId_295_; lean_object* v_nctypeIdOf_296_; lean_object* v_ncSemirings_297_; lean_object* v_exprToNCSemiringId_298_; lean_object* v_ncstypeIdOf_299_; lean_object* v_steps_300_; uint8_t v_reportedMaxDegreeIssue_301_; lean_object* v___x_302_; uint8_t v___x_303_; 
v_rings_288_ = lean_ctor_get(v_s_287_, 0);
v_typeIdOf_289_ = lean_ctor_get(v_s_287_, 1);
v_exprToRingId_290_ = lean_ctor_get(v_s_287_, 2);
v_semirings_291_ = lean_ctor_get(v_s_287_, 3);
v_stypeIdOf_292_ = lean_ctor_get(v_s_287_, 4);
v_exprToSemiringId_293_ = lean_ctor_get(v_s_287_, 5);
v_ncRings_294_ = lean_ctor_get(v_s_287_, 6);
v_exprToNCRingId_295_ = lean_ctor_get(v_s_287_, 7);
v_nctypeIdOf_296_ = lean_ctor_get(v_s_287_, 8);
v_ncSemirings_297_ = lean_ctor_get(v_s_287_, 9);
v_exprToNCSemiringId_298_ = lean_ctor_get(v_s_287_, 10);
v_ncstypeIdOf_299_ = lean_ctor_get(v_s_287_, 11);
v_steps_300_ = lean_ctor_get(v_s_287_, 12);
v_reportedMaxDegreeIssue_301_ = lean_ctor_get_uint8(v_s_287_, sizeof(void*)*13);
v___x_302_ = lean_array_get_size(v_semirings_291_);
v___x_303_ = lean_nat_dec_lt(v_a_285_, v___x_302_);
if (v___x_303_ == 0)
{
lean_dec_ref(v_f_286_);
return v_s_287_;
}
else
{
lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_315_; 
lean_inc(v_steps_300_);
lean_inc_ref(v_ncstypeIdOf_299_);
lean_inc_ref(v_exprToNCSemiringId_298_);
lean_inc_ref(v_ncSemirings_297_);
lean_inc_ref(v_nctypeIdOf_296_);
lean_inc_ref(v_exprToNCRingId_295_);
lean_inc_ref(v_ncRings_294_);
lean_inc_ref(v_exprToSemiringId_293_);
lean_inc_ref(v_stypeIdOf_292_);
lean_inc_ref(v_semirings_291_);
lean_inc_ref(v_exprToRingId_290_);
lean_inc_ref(v_typeIdOf_289_);
lean_inc_ref(v_rings_288_);
v_isSharedCheck_315_ = !lean_is_exclusive(v_s_287_);
if (v_isSharedCheck_315_ == 0)
{
lean_object* v_unused_316_; lean_object* v_unused_317_; lean_object* v_unused_318_; lean_object* v_unused_319_; lean_object* v_unused_320_; lean_object* v_unused_321_; lean_object* v_unused_322_; lean_object* v_unused_323_; lean_object* v_unused_324_; lean_object* v_unused_325_; lean_object* v_unused_326_; lean_object* v_unused_327_; lean_object* v_unused_328_; 
v_unused_316_ = lean_ctor_get(v_s_287_, 12);
lean_dec(v_unused_316_);
v_unused_317_ = lean_ctor_get(v_s_287_, 11);
lean_dec(v_unused_317_);
v_unused_318_ = lean_ctor_get(v_s_287_, 10);
lean_dec(v_unused_318_);
v_unused_319_ = lean_ctor_get(v_s_287_, 9);
lean_dec(v_unused_319_);
v_unused_320_ = lean_ctor_get(v_s_287_, 8);
lean_dec(v_unused_320_);
v_unused_321_ = lean_ctor_get(v_s_287_, 7);
lean_dec(v_unused_321_);
v_unused_322_ = lean_ctor_get(v_s_287_, 6);
lean_dec(v_unused_322_);
v_unused_323_ = lean_ctor_get(v_s_287_, 5);
lean_dec(v_unused_323_);
v_unused_324_ = lean_ctor_get(v_s_287_, 4);
lean_dec(v_unused_324_);
v_unused_325_ = lean_ctor_get(v_s_287_, 3);
lean_dec(v_unused_325_);
v_unused_326_ = lean_ctor_get(v_s_287_, 2);
lean_dec(v_unused_326_);
v_unused_327_ = lean_ctor_get(v_s_287_, 1);
lean_dec(v_unused_327_);
v_unused_328_ = lean_ctor_get(v_s_287_, 0);
lean_dec(v_unused_328_);
v___x_305_ = v_s_287_;
v_isShared_306_ = v_isSharedCheck_315_;
goto v_resetjp_304_;
}
else
{
lean_dec(v_s_287_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_315_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v_v_307_; lean_object* v___x_308_; lean_object* v_xs_x27_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_313_; 
v_v_307_ = lean_array_fget(v_semirings_291_, v_a_285_);
v___x_308_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0);
v_xs_x27_309_ = lean_array_fset(v_semirings_291_, v_a_285_, v___x_308_);
v___x_310_ = lean_apply_1(v_f_286_, v_v_307_);
v___x_311_ = lean_array_fset(v_xs_x27_309_, v_a_285_, v___x_310_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 3, v___x_311_);
v___x_313_ = v___x_305_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_rings_288_);
lean_ctor_set(v_reuseFailAlloc_314_, 1, v_typeIdOf_289_);
lean_ctor_set(v_reuseFailAlloc_314_, 2, v_exprToRingId_290_);
lean_ctor_set(v_reuseFailAlloc_314_, 3, v___x_311_);
lean_ctor_set(v_reuseFailAlloc_314_, 4, v_stypeIdOf_292_);
lean_ctor_set(v_reuseFailAlloc_314_, 5, v_exprToSemiringId_293_);
lean_ctor_set(v_reuseFailAlloc_314_, 6, v_ncRings_294_);
lean_ctor_set(v_reuseFailAlloc_314_, 7, v_exprToNCRingId_295_);
lean_ctor_set(v_reuseFailAlloc_314_, 8, v_nctypeIdOf_296_);
lean_ctor_set(v_reuseFailAlloc_314_, 9, v_ncSemirings_297_);
lean_ctor_set(v_reuseFailAlloc_314_, 10, v_exprToNCSemiringId_298_);
lean_ctor_set(v_reuseFailAlloc_314_, 11, v_ncstypeIdOf_299_);
lean_ctor_set(v_reuseFailAlloc_314_, 12, v_steps_300_);
lean_ctor_set_uint8(v_reuseFailAlloc_314_, sizeof(void*)*13, v_reportedMaxDegreeIssue_301_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___boxed(lean_object* v_a_329_, lean_object* v_f_330_, lean_object* v_s_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0(v_a_329_, v_f_330_, v_s_331_);
lean_dec(v_a_329_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg(lean_object* v_f_333_, lean_object* v_a_334_, lean_object* v_a_335_){
_start:
{
lean_object* v___f_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
lean_inc(v_a_334_);
v___f_337_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_337_, 0, v_a_334_);
lean_closure_set(v___f_337_, 1, v_f_333_);
v___x_338_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_339_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_338_, v___f_337_, v_a_335_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___boxed(lean_object* v_f_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg(v_f_340_, v_a_341_, v_a_342_);
lean_dec(v_a_342_);
lean_dec(v_a_341_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring(lean_object* v_f_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_){
_start:
{
lean_object* v___f_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
lean_inc(v_a_346_);
v___f_358_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_358_, 0, v_a_346_);
lean_closure_set(v___f_358_, 1, v_f_345_);
v___x_359_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_360_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_359_, v___f_358_, v_a_347_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___boxed(lean_object* v_f_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring(v_f_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_);
lean_dec(v_a_372_);
lean_dec_ref(v_a_371_);
lean_dec(v_a_370_);
lean_dec_ref(v_a_369_);
lean_dec(v_a_368_);
lean_dec_ref(v_a_367_);
lean_dec(v_a_366_);
lean_dec_ref(v_a_365_);
lean_dec(v_a_364_);
lean_dec(v_a_363_);
lean_dec(v_a_362_);
return v_res_374_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__1(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_376_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__0));
v___x_377_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___boxed), 12, 0);
v___x_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
lean_ctor_set(v___x_378_, 1, v___x_376_);
return v___x_378_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM(void){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__1);
return v___x_379_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__1(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__0));
v___x_382_ = l_Lean_stringToMessageData(v___x_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_384_, v_a_392_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v_a_396_; lean_object* v___x_397_; 
v_a_396_ = lean_ctor_get(v___x_395_, 0);
lean_inc(v_a_396_);
lean_dec_ref_known(v___x_395_, 1);
v___x_397_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_387_, v_a_388_, v_a_389_, v_a_390_, v_a_391_, v_a_392_, v_a_393_);
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_412_; 
v_a_398_ = lean_ctor_get(v___x_397_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_412_ == 0)
{
v___x_400_ = v___x_397_;
v_isShared_401_ = v_isSharedCheck_412_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v___x_397_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_412_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v_ringId_402_; lean_object* v_rings_403_; lean_object* v___x_404_; uint8_t v___x_405_; 
v_ringId_402_ = lean_ctor_get(v_a_398_, 1);
lean_inc(v_ringId_402_);
lean_dec(v_a_398_);
v_rings_403_ = lean_ctor_get(v_a_396_, 0);
lean_inc_ref(v_rings_403_);
lean_dec(v_a_396_);
v___x_404_ = lean_array_get_size(v_rings_403_);
v___x_405_ = lean_nat_dec_lt(v_ringId_402_, v___x_404_);
if (v___x_405_ == 0)
{
lean_object* v___x_406_; lean_object* v___x_407_; 
lean_dec_ref(v_rings_403_);
lean_dec(v_ringId_402_);
lean_del_object(v___x_400_);
v___x_406_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__1);
v___x_407_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg(v___x_406_, v_a_390_, v_a_391_, v_a_392_, v_a_393_);
return v___x_407_;
}
else
{
lean_object* v___x_408_; lean_object* v___x_410_; 
v___x_408_ = lean_array_fget(v_rings_403_, v_ringId_402_);
lean_dec(v_ringId_402_);
lean_dec_ref(v_rings_403_);
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 0, v___x_408_);
v___x_410_ = v___x_400_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v___x_408_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
}
else
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_420_; 
lean_dec(v_a_396_);
v_a_413_ = lean_ctor_get(v___x_397_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_420_ == 0)
{
v___x_415_ = v___x_397_;
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_397_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_a_413_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
}
}
else
{
lean_object* v_a_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_428_; 
v_a_421_ = lean_ctor_get(v___x_395_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_428_ == 0)
{
v___x_423_ = v___x_395_;
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_a_421_);
lean_dec(v___x_395_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_426_; 
if (v_isShared_424_ == 0)
{
v___x_426_ = v___x_423_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_421_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___boxed(lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(v_a_429_, v_a_430_, v_a_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_, v_a_437_, v_a_438_, v_a_439_);
lean_dec(v_a_439_);
lean_dec_ref(v_a_438_);
lean_dec(v_a_437_);
lean_dec_ref(v_a_436_);
lean_dec(v_a_435_);
lean_dec_ref(v_a_434_);
lean_dec(v_a_433_);
lean_dec_ref(v_a_432_);
lean_dec(v_a_431_);
lean_dec(v_a_430_);
lean_dec(v_a_429_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___lam__0(lean_object* v_ringId_442_, lean_object* v_f_443_, lean_object* v_s_444_){
_start:
{
lean_object* v_rings_445_; lean_object* v_typeIdOf_446_; lean_object* v_exprToRingId_447_; lean_object* v_semirings_448_; lean_object* v_stypeIdOf_449_; lean_object* v_exprToSemiringId_450_; lean_object* v_ncRings_451_; lean_object* v_exprToNCRingId_452_; lean_object* v_nctypeIdOf_453_; lean_object* v_ncSemirings_454_; lean_object* v_exprToNCSemiringId_455_; lean_object* v_ncstypeIdOf_456_; lean_object* v_steps_457_; uint8_t v_reportedMaxDegreeIssue_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
v_rings_445_ = lean_ctor_get(v_s_444_, 0);
v_typeIdOf_446_ = lean_ctor_get(v_s_444_, 1);
v_exprToRingId_447_ = lean_ctor_get(v_s_444_, 2);
v_semirings_448_ = lean_ctor_get(v_s_444_, 3);
v_stypeIdOf_449_ = lean_ctor_get(v_s_444_, 4);
v_exprToSemiringId_450_ = lean_ctor_get(v_s_444_, 5);
v_ncRings_451_ = lean_ctor_get(v_s_444_, 6);
v_exprToNCRingId_452_ = lean_ctor_get(v_s_444_, 7);
v_nctypeIdOf_453_ = lean_ctor_get(v_s_444_, 8);
v_ncSemirings_454_ = lean_ctor_get(v_s_444_, 9);
v_exprToNCSemiringId_455_ = lean_ctor_get(v_s_444_, 10);
v_ncstypeIdOf_456_ = lean_ctor_get(v_s_444_, 11);
v_steps_457_ = lean_ctor_get(v_s_444_, 12);
v_reportedMaxDegreeIssue_458_ = lean_ctor_get_uint8(v_s_444_, sizeof(void*)*13);
v___x_459_ = lean_array_get_size(v_rings_445_);
v___x_460_ = lean_nat_dec_lt(v_ringId_442_, v___x_459_);
if (v___x_460_ == 0)
{
lean_dec_ref(v_f_443_);
return v_s_444_;
}
else
{
lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_472_; 
lean_inc(v_steps_457_);
lean_inc_ref(v_ncstypeIdOf_456_);
lean_inc_ref(v_exprToNCSemiringId_455_);
lean_inc_ref(v_ncSemirings_454_);
lean_inc_ref(v_nctypeIdOf_453_);
lean_inc_ref(v_exprToNCRingId_452_);
lean_inc_ref(v_ncRings_451_);
lean_inc_ref(v_exprToSemiringId_450_);
lean_inc_ref(v_stypeIdOf_449_);
lean_inc_ref(v_semirings_448_);
lean_inc_ref(v_exprToRingId_447_);
lean_inc_ref(v_typeIdOf_446_);
lean_inc_ref(v_rings_445_);
v_isSharedCheck_472_ = !lean_is_exclusive(v_s_444_);
if (v_isSharedCheck_472_ == 0)
{
lean_object* v_unused_473_; lean_object* v_unused_474_; lean_object* v_unused_475_; lean_object* v_unused_476_; lean_object* v_unused_477_; lean_object* v_unused_478_; lean_object* v_unused_479_; lean_object* v_unused_480_; lean_object* v_unused_481_; lean_object* v_unused_482_; lean_object* v_unused_483_; lean_object* v_unused_484_; lean_object* v_unused_485_; 
v_unused_473_ = lean_ctor_get(v_s_444_, 12);
lean_dec(v_unused_473_);
v_unused_474_ = lean_ctor_get(v_s_444_, 11);
lean_dec(v_unused_474_);
v_unused_475_ = lean_ctor_get(v_s_444_, 10);
lean_dec(v_unused_475_);
v_unused_476_ = lean_ctor_get(v_s_444_, 9);
lean_dec(v_unused_476_);
v_unused_477_ = lean_ctor_get(v_s_444_, 8);
lean_dec(v_unused_477_);
v_unused_478_ = lean_ctor_get(v_s_444_, 7);
lean_dec(v_unused_478_);
v_unused_479_ = lean_ctor_get(v_s_444_, 6);
lean_dec(v_unused_479_);
v_unused_480_ = lean_ctor_get(v_s_444_, 5);
lean_dec(v_unused_480_);
v_unused_481_ = lean_ctor_get(v_s_444_, 4);
lean_dec(v_unused_481_);
v_unused_482_ = lean_ctor_get(v_s_444_, 3);
lean_dec(v_unused_482_);
v_unused_483_ = lean_ctor_get(v_s_444_, 2);
lean_dec(v_unused_483_);
v_unused_484_ = lean_ctor_get(v_s_444_, 1);
lean_dec(v_unused_484_);
v_unused_485_ = lean_ctor_get(v_s_444_, 0);
lean_dec(v_unused_485_);
v___x_462_ = v_s_444_;
v_isShared_463_ = v_isSharedCheck_472_;
goto v_resetjp_461_;
}
else
{
lean_dec(v_s_444_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_472_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v_v_464_; lean_object* v___x_465_; lean_object* v_xs_x27_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_470_; 
v_v_464_ = lean_array_fget(v_rings_445_, v_ringId_442_);
v___x_465_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0);
v_xs_x27_466_ = lean_array_fset(v_rings_445_, v_ringId_442_, v___x_465_);
v___x_467_ = lean_apply_1(v_f_443_, v_v_464_);
v___x_468_ = lean_array_fset(v_xs_x27_466_, v_ringId_442_, v___x_467_);
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 0, v___x_468_);
v___x_470_ = v___x_462_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_468_);
lean_ctor_set(v_reuseFailAlloc_471_, 1, v_typeIdOf_446_);
lean_ctor_set(v_reuseFailAlloc_471_, 2, v_exprToRingId_447_);
lean_ctor_set(v_reuseFailAlloc_471_, 3, v_semirings_448_);
lean_ctor_set(v_reuseFailAlloc_471_, 4, v_stypeIdOf_449_);
lean_ctor_set(v_reuseFailAlloc_471_, 5, v_exprToSemiringId_450_);
lean_ctor_set(v_reuseFailAlloc_471_, 6, v_ncRings_451_);
lean_ctor_set(v_reuseFailAlloc_471_, 7, v_exprToNCRingId_452_);
lean_ctor_set(v_reuseFailAlloc_471_, 8, v_nctypeIdOf_453_);
lean_ctor_set(v_reuseFailAlloc_471_, 9, v_ncSemirings_454_);
lean_ctor_set(v_reuseFailAlloc_471_, 10, v_exprToNCSemiringId_455_);
lean_ctor_set(v_reuseFailAlloc_471_, 11, v_ncstypeIdOf_456_);
lean_ctor_set(v_reuseFailAlloc_471_, 12, v_steps_457_);
lean_ctor_set_uint8(v_reuseFailAlloc_471_, sizeof(void*)*13, v_reportedMaxDegreeIssue_458_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___lam__0___boxed(lean_object* v_ringId_486_, lean_object* v_f_487_, lean_object* v_s_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___lam__0(v_ringId_486_, v_f_487_, v_s_488_);
lean_dec(v_ringId_486_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing(lean_object* v_f_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(v_a_491_, v_a_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_, v_a_497_, v_a_498_, v_a_499_, v_a_500_, v_a_501_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; lean_object* v_ringId_505_; lean_object* v___f_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v_a_504_ = lean_ctor_get(v___x_503_, 0);
lean_inc(v_a_504_);
lean_dec_ref_known(v___x_503_, 1);
v_ringId_505_ = lean_ctor_get(v_a_504_, 1);
lean_inc(v_ringId_505_);
lean_dec(v_a_504_);
v___f_506_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___lam__0___boxed), 3, 2);
lean_closure_set(v___f_506_, 0, v_ringId_505_);
lean_closure_set(v___f_506_, 1, v_f_490_);
v___x_507_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_508_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_507_, v___f_506_, v_a_492_);
return v___x_508_;
}
else
{
lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_516_; 
lean_dec_ref(v_f_490_);
v_a_509_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_516_ == 0)
{
v___x_511_ = v___x_503_;
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_503_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_514_; 
if (v_isShared_512_ == 0)
{
v___x_514_ = v___x_511_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_a_509_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___boxed(lean_object* v_f_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing(v_f_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_, v_a_527_, v_a_528_);
lean_dec(v_a_528_);
lean_dec_ref(v_a_527_);
lean_dec(v_a_526_);
lean_dec_ref(v_a_525_);
lean_dec(v_a_524_);
lean_dec_ref(v_a_523_);
lean_dec(v_a_522_);
lean_dec_ref(v_a_521_);
lean_dec(v_a_520_);
lean_dec(v_a_519_);
lean_dec(v_a_518_);
return v_res_530_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__1(void){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_532_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__0));
v___x_533_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___boxed), 12, 0);
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
lean_ctor_set(v___x_534_, 1, v___x_532_);
return v___x_534_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM(void){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__1);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___lam__0(lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_s_538_){
_start:
{
lean_object* v_rings_539_; lean_object* v_typeIdOf_540_; lean_object* v_exprToRingId_541_; lean_object* v_semirings_542_; lean_object* v_stypeIdOf_543_; lean_object* v_exprToSemiringId_544_; lean_object* v_ncRings_545_; lean_object* v_exprToNCRingId_546_; lean_object* v_nctypeIdOf_547_; lean_object* v_ncSemirings_548_; lean_object* v_exprToNCSemiringId_549_; lean_object* v_ncstypeIdOf_550_; lean_object* v_steps_551_; uint8_t v_reportedMaxDegreeIssue_552_; lean_object* v___x_553_; uint8_t v___x_554_; 
v_rings_539_ = lean_ctor_get(v_s_538_, 0);
v_typeIdOf_540_ = lean_ctor_get(v_s_538_, 1);
v_exprToRingId_541_ = lean_ctor_get(v_s_538_, 2);
v_semirings_542_ = lean_ctor_get(v_s_538_, 3);
v_stypeIdOf_543_ = lean_ctor_get(v_s_538_, 4);
v_exprToSemiringId_544_ = lean_ctor_get(v_s_538_, 5);
v_ncRings_545_ = lean_ctor_get(v_s_538_, 6);
v_exprToNCRingId_546_ = lean_ctor_get(v_s_538_, 7);
v_nctypeIdOf_547_ = lean_ctor_get(v_s_538_, 8);
v_ncSemirings_548_ = lean_ctor_get(v_s_538_, 9);
v_exprToNCSemiringId_549_ = lean_ctor_get(v_s_538_, 10);
v_ncstypeIdOf_550_ = lean_ctor_get(v_s_538_, 11);
v_steps_551_ = lean_ctor_get(v_s_538_, 12);
v_reportedMaxDegreeIssue_552_ = lean_ctor_get_uint8(v_s_538_, sizeof(void*)*13);
v___x_553_ = lean_array_get_size(v_semirings_542_);
v___x_554_ = lean_nat_dec_lt(v_a_536_, v___x_553_);
if (v___x_554_ == 0)
{
lean_dec_ref(v_a_537_);
return v_s_538_;
}
else
{
lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_578_; 
lean_inc(v_steps_551_);
lean_inc_ref(v_ncstypeIdOf_550_);
lean_inc_ref(v_exprToNCSemiringId_549_);
lean_inc_ref(v_ncSemirings_548_);
lean_inc_ref(v_nctypeIdOf_547_);
lean_inc_ref(v_exprToNCRingId_546_);
lean_inc_ref(v_ncRings_545_);
lean_inc_ref(v_exprToSemiringId_544_);
lean_inc_ref(v_stypeIdOf_543_);
lean_inc_ref(v_semirings_542_);
lean_inc_ref(v_exprToRingId_541_);
lean_inc_ref(v_typeIdOf_540_);
lean_inc_ref(v_rings_539_);
v_isSharedCheck_578_ = !lean_is_exclusive(v_s_538_);
if (v_isSharedCheck_578_ == 0)
{
lean_object* v_unused_579_; lean_object* v_unused_580_; lean_object* v_unused_581_; lean_object* v_unused_582_; lean_object* v_unused_583_; lean_object* v_unused_584_; lean_object* v_unused_585_; lean_object* v_unused_586_; lean_object* v_unused_587_; lean_object* v_unused_588_; lean_object* v_unused_589_; lean_object* v_unused_590_; lean_object* v_unused_591_; 
v_unused_579_ = lean_ctor_get(v_s_538_, 12);
lean_dec(v_unused_579_);
v_unused_580_ = lean_ctor_get(v_s_538_, 11);
lean_dec(v_unused_580_);
v_unused_581_ = lean_ctor_get(v_s_538_, 10);
lean_dec(v_unused_581_);
v_unused_582_ = lean_ctor_get(v_s_538_, 9);
lean_dec(v_unused_582_);
v_unused_583_ = lean_ctor_get(v_s_538_, 8);
lean_dec(v_unused_583_);
v_unused_584_ = lean_ctor_get(v_s_538_, 7);
lean_dec(v_unused_584_);
v_unused_585_ = lean_ctor_get(v_s_538_, 6);
lean_dec(v_unused_585_);
v_unused_586_ = lean_ctor_get(v_s_538_, 5);
lean_dec(v_unused_586_);
v_unused_587_ = lean_ctor_get(v_s_538_, 4);
lean_dec(v_unused_587_);
v_unused_588_ = lean_ctor_get(v_s_538_, 3);
lean_dec(v_unused_588_);
v_unused_589_ = lean_ctor_get(v_s_538_, 2);
lean_dec(v_unused_589_);
v_unused_590_ = lean_ctor_get(v_s_538_, 1);
lean_dec(v_unused_590_);
v_unused_591_ = lean_ctor_get(v_s_538_, 0);
lean_dec(v_unused_591_);
v___x_556_ = v_s_538_;
v_isShared_557_ = v_isSharedCheck_578_;
goto v_resetjp_555_;
}
else
{
lean_dec(v_s_538_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_578_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v_v_558_; lean_object* v_toSemiring_559_; lean_object* v_ringId_560_; lean_object* v_commSemiringInst_561_; lean_object* v_addRightCancelInst_x3f_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_576_; 
v_v_558_ = lean_array_fget(v_semirings_542_, v_a_536_);
v_toSemiring_559_ = lean_ctor_get(v_v_558_, 0);
v_ringId_560_ = lean_ctor_get(v_v_558_, 1);
v_commSemiringInst_561_ = lean_ctor_get(v_v_558_, 2);
v_addRightCancelInst_x3f_562_ = lean_ctor_get(v_v_558_, 3);
v_isSharedCheck_576_ = !lean_is_exclusive(v_v_558_);
if (v_isSharedCheck_576_ == 0)
{
lean_object* v_unused_577_; 
v_unused_577_ = lean_ctor_get(v_v_558_, 4);
lean_dec(v_unused_577_);
v___x_564_ = v_v_558_;
v_isShared_565_ = v_isSharedCheck_576_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_addRightCancelInst_x3f_562_);
lean_inc(v_commSemiringInst_561_);
lean_inc(v_ringId_560_);
lean_inc(v_toSemiring_559_);
lean_dec(v_v_558_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_576_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_566_; lean_object* v_xs_x27_567_; lean_object* v___x_568_; lean_object* v___x_570_; 
v___x_566_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0);
v_xs_x27_567_ = lean_array_fset(v_semirings_542_, v_a_536_, v___x_566_);
v___x_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_568_, 0, v_a_537_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 4, v___x_568_);
v___x_570_ = v___x_564_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_toSemiring_559_);
lean_ctor_set(v_reuseFailAlloc_575_, 1, v_ringId_560_);
lean_ctor_set(v_reuseFailAlloc_575_, 2, v_commSemiringInst_561_);
lean_ctor_set(v_reuseFailAlloc_575_, 3, v_addRightCancelInst_x3f_562_);
lean_ctor_set(v_reuseFailAlloc_575_, 4, v___x_568_);
v___x_570_ = v_reuseFailAlloc_575_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_571_ = lean_array_fset(v_xs_x27_567_, v_a_536_, v___x_570_);
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 3, v___x_571_);
v___x_573_ = v___x_556_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_rings_539_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v_typeIdOf_540_);
lean_ctor_set(v_reuseFailAlloc_574_, 2, v_exprToRingId_541_);
lean_ctor_set(v_reuseFailAlloc_574_, 3, v___x_571_);
lean_ctor_set(v_reuseFailAlloc_574_, 4, v_stypeIdOf_543_);
lean_ctor_set(v_reuseFailAlloc_574_, 5, v_exprToSemiringId_544_);
lean_ctor_set(v_reuseFailAlloc_574_, 6, v_ncRings_545_);
lean_ctor_set(v_reuseFailAlloc_574_, 7, v_exprToNCRingId_546_);
lean_ctor_set(v_reuseFailAlloc_574_, 8, v_nctypeIdOf_547_);
lean_ctor_set(v_reuseFailAlloc_574_, 9, v_ncSemirings_548_);
lean_ctor_set(v_reuseFailAlloc_574_, 10, v_exprToNCSemiringId_549_);
lean_ctor_set(v_reuseFailAlloc_574_, 11, v_ncstypeIdOf_550_);
lean_ctor_set(v_reuseFailAlloc_574_, 12, v_steps_551_);
lean_ctor_set_uint8(v_reuseFailAlloc_574_, sizeof(void*)*13, v_reportedMaxDegreeIssue_552_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___lam__0___boxed(lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_s_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_Lean_Meta_Grind_Arith_CommRing_getToQFn___lam__0(v_a_592_, v_a_593_, v_s_594_);
lean_dec(v_a_592_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn(lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_){
_start:
{
lean_object* v___y_620_; lean_object* v___x_641_; 
v___x_641_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_);
if (lean_obj_tag(v___x_641_) == 0)
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_663_; 
v_a_642_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_663_ == 0)
{
v___x_644_ = v___x_641_;
v_isShared_645_ = v_isSharedCheck_663_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_641_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_663_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v_toQFn_x3f_646_; 
v_toQFn_x3f_646_ = lean_ctor_get(v_a_642_, 4);
if (lean_obj_tag(v_toQFn_x3f_646_) == 1)
{
lean_object* v_val_647_; lean_object* v___x_649_; 
lean_inc_ref(v_toQFn_x3f_646_);
lean_dec(v_a_642_);
v_val_647_ = lean_ctor_get(v_toQFn_x3f_646_, 0);
lean_inc(v_val_647_);
lean_dec_ref_known(v_toQFn_x3f_646_, 1);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 0, v_val_647_);
v___x_649_ = v___x_644_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_val_647_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
else
{
lean_object* v_toSemiring_651_; lean_object* v_type_652_; lean_object* v_u_653_; lean_object* v_semiringInst_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
lean_del_object(v___x_644_);
v_toSemiring_651_ = lean_ctor_get(v_a_642_, 0);
lean_inc_ref(v_toSemiring_651_);
lean_dec(v_a_642_);
v_type_652_ = lean_ctor_get(v_toSemiring_651_, 1);
lean_inc_ref(v_type_652_);
v_u_653_ = lean_ctor_get(v_toSemiring_651_, 2);
lean_inc(v_u_653_);
v_semiringInst_654_ = lean_ctor_get(v_toSemiring_651_, 3);
lean_inc_ref(v_semiringInst_654_);
lean_dec_ref(v_toSemiring_651_);
v___x_655_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5));
v___x_656_ = lean_box(0);
v___x_657_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_657_, 0, v_u_653_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
v___x_658_ = l_Lean_mkConst(v___x_655_, v___x_657_);
v___x_659_ = l_Lean_mkAppB(v___x_658_, v_type_652_, v_semiringInst_654_);
v___x_660_ = l_Lean_Meta_Sym_canon(v___x_659_, v_a_612_, v_a_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_a_661_; lean_object* v___x_662_; 
v_a_661_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_a_661_);
lean_dec_ref_known(v___x_660_, 1);
v___x_662_ = l_Lean_Meta_Sym_shareCommon(v_a_661_, v_a_612_, v_a_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_);
v___y_620_ = v___x_662_;
goto v___jp_619_;
}
else
{
v___y_620_ = v___x_660_;
goto v___jp_619_;
}
}
}
}
else
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_671_; 
v_a_664_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_671_ == 0)
{
v___x_666_ = v___x_641_;
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_641_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_669_; 
if (v_isShared_667_ == 0)
{
v___x_669_ = v___x_666_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_a_664_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
v___jp_619_:
{
if (lean_obj_tag(v___y_620_) == 0)
{
lean_object* v_a_621_; lean_object* v___f_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v_a_621_ = lean_ctor_get(v___y_620_, 0);
lean_inc_n(v_a_621_, 2);
lean_dec_ref_known(v___y_620_, 1);
lean_inc(v_a_607_);
v___f_622_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getToQFn___lam__0___boxed), 3, 2);
lean_closure_set(v___f_622_, 0, v_a_607_);
lean_closure_set(v___f_622_, 1, v_a_621_);
v___x_623_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_624_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_623_, v___f_622_, v_a_608_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_631_; 
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_631_ == 0)
{
lean_object* v_unused_632_; 
v_unused_632_ = lean_ctor_get(v___x_624_, 0);
lean_dec(v_unused_632_);
v___x_626_ = v___x_624_;
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
else
{
lean_dec(v___x_624_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_629_; 
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 0, v_a_621_);
v___x_629_ = v___x_626_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_a_621_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
else
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_640_; 
lean_dec(v_a_621_);
v_a_633_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_640_ == 0)
{
v___x_635_ = v___x_624_;
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v___x_624_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_638_; 
if (v_isShared_636_ == 0)
{
v___x_638_ = v___x_635_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_a_633_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
}
else
{
return v___y_620_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___boxed(lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lean_Meta_Grind_Arith_CommRing_getToQFn(v_a_672_, v_a_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_);
lean_dec(v_a_682_);
lean_dec_ref(v_a_681_);
lean_dec(v_a_680_);
lean_dec_ref(v_a_679_);
lean_dec(v_a_678_);
lean_dec_ref(v_a_677_);
lean_dec(v_a_676_);
lean_dec_ref(v_a_675_);
lean_dec(v_a_674_);
lean_dec(v_a_673_);
lean_dec(v_a_672_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg(lean_object* v_u_693_, lean_object* v_type_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v_add_705_; lean_object* v___x_706_; 
v___x_701_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__1));
v___x_702_ = lean_box(0);
v___x_703_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_703_, 0, v_u_693_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
lean_inc_ref(v___x_703_);
v___x_704_ = l_Lean_mkConst(v___x_701_, v___x_703_);
lean_inc_ref(v_type_694_);
v_add_705_ = l_Lean_Expr_app___override(v___x_704_, v_type_694_);
v___x_706_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_add_705_, v_a_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_720_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_720_ == 0)
{
v___x_709_ = v___x_706_;
v_isShared_710_ = v_isSharedCheck_720_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_706_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_720_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
if (lean_obj_tag(v_a_707_) == 1)
{
lean_object* v_val_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
lean_del_object(v___x_709_);
v_val_711_ = lean_ctor_get(v_a_707_, 0);
lean_inc(v_val_711_);
lean_dec_ref_known(v_a_707_, 1);
v___x_712_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__3));
v___x_713_ = l_Lean_mkConst(v___x_712_, v___x_703_);
v___x_714_ = l_Lean_mkAppB(v___x_713_, v_type_694_, v_val_711_);
v___x_715_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_714_, v_a_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_);
return v___x_715_;
}
else
{
lean_object* v___x_716_; lean_object* v___x_718_; 
lean_dec(v_a_707_);
lean_dec_ref_known(v___x_703_, 2);
lean_dec_ref(v_type_694_);
v___x_716_ = lean_box(0);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v___x_716_);
v___x_718_ = v___x_709_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_716_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_703_, 2);
lean_dec_ref(v_type_694_);
return v___x_706_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___boxed(lean_object* v_u_721_, lean_object* v_type_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg(v_u_721_, v_type_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
lean_dec(v_a_727_);
lean_dec_ref(v_a_726_);
lean_dec(v_a_725_);
lean_dec_ref(v_a_724_);
lean_dec(v_a_723_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f(lean_object* v_u_730_, lean_object* v_type_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg(v_u_730_, v_type_731_, v_a_737_, v_a_738_, v_a_739_, v_a_740_, v_a_741_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___boxed(lean_object* v_u_744_, lean_object* v_type_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f(v_u_744_, v_type_745_, v_a_746_, v_a_747_, v_a_748_, v_a_749_, v_a_750_, v_a_751_, v_a_752_, v_a_753_, v_a_754_, v_a_755_);
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
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___lam__0(lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_s_760_){
_start:
{
lean_object* v_rings_761_; lean_object* v_typeIdOf_762_; lean_object* v_exprToRingId_763_; lean_object* v_semirings_764_; lean_object* v_stypeIdOf_765_; lean_object* v_exprToSemiringId_766_; lean_object* v_ncRings_767_; lean_object* v_exprToNCRingId_768_; lean_object* v_nctypeIdOf_769_; lean_object* v_ncSemirings_770_; lean_object* v_exprToNCSemiringId_771_; lean_object* v_ncstypeIdOf_772_; lean_object* v_steps_773_; uint8_t v_reportedMaxDegreeIssue_774_; lean_object* v___x_775_; uint8_t v___x_776_; 
v_rings_761_ = lean_ctor_get(v_s_760_, 0);
v_typeIdOf_762_ = lean_ctor_get(v_s_760_, 1);
v_exprToRingId_763_ = lean_ctor_get(v_s_760_, 2);
v_semirings_764_ = lean_ctor_get(v_s_760_, 3);
v_stypeIdOf_765_ = lean_ctor_get(v_s_760_, 4);
v_exprToSemiringId_766_ = lean_ctor_get(v_s_760_, 5);
v_ncRings_767_ = lean_ctor_get(v_s_760_, 6);
v_exprToNCRingId_768_ = lean_ctor_get(v_s_760_, 7);
v_nctypeIdOf_769_ = lean_ctor_get(v_s_760_, 8);
v_ncSemirings_770_ = lean_ctor_get(v_s_760_, 9);
v_exprToNCSemiringId_771_ = lean_ctor_get(v_s_760_, 10);
v_ncstypeIdOf_772_ = lean_ctor_get(v_s_760_, 11);
v_steps_773_ = lean_ctor_get(v_s_760_, 12);
v_reportedMaxDegreeIssue_774_ = lean_ctor_get_uint8(v_s_760_, sizeof(void*)*13);
v___x_775_ = lean_array_get_size(v_semirings_764_);
v___x_776_ = lean_nat_dec_lt(v_a_758_, v___x_775_);
if (v___x_776_ == 0)
{
lean_dec(v_a_759_);
return v_s_760_;
}
else
{
lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_800_; 
lean_inc(v_steps_773_);
lean_inc_ref(v_ncstypeIdOf_772_);
lean_inc_ref(v_exprToNCSemiringId_771_);
lean_inc_ref(v_ncSemirings_770_);
lean_inc_ref(v_nctypeIdOf_769_);
lean_inc_ref(v_exprToNCRingId_768_);
lean_inc_ref(v_ncRings_767_);
lean_inc_ref(v_exprToSemiringId_766_);
lean_inc_ref(v_stypeIdOf_765_);
lean_inc_ref(v_semirings_764_);
lean_inc_ref(v_exprToRingId_763_);
lean_inc_ref(v_typeIdOf_762_);
lean_inc_ref(v_rings_761_);
v_isSharedCheck_800_ = !lean_is_exclusive(v_s_760_);
if (v_isSharedCheck_800_ == 0)
{
lean_object* v_unused_801_; lean_object* v_unused_802_; lean_object* v_unused_803_; lean_object* v_unused_804_; lean_object* v_unused_805_; lean_object* v_unused_806_; lean_object* v_unused_807_; lean_object* v_unused_808_; lean_object* v_unused_809_; lean_object* v_unused_810_; lean_object* v_unused_811_; lean_object* v_unused_812_; lean_object* v_unused_813_; 
v_unused_801_ = lean_ctor_get(v_s_760_, 12);
lean_dec(v_unused_801_);
v_unused_802_ = lean_ctor_get(v_s_760_, 11);
lean_dec(v_unused_802_);
v_unused_803_ = lean_ctor_get(v_s_760_, 10);
lean_dec(v_unused_803_);
v_unused_804_ = lean_ctor_get(v_s_760_, 9);
lean_dec(v_unused_804_);
v_unused_805_ = lean_ctor_get(v_s_760_, 8);
lean_dec(v_unused_805_);
v_unused_806_ = lean_ctor_get(v_s_760_, 7);
lean_dec(v_unused_806_);
v_unused_807_ = lean_ctor_get(v_s_760_, 6);
lean_dec(v_unused_807_);
v_unused_808_ = lean_ctor_get(v_s_760_, 5);
lean_dec(v_unused_808_);
v_unused_809_ = lean_ctor_get(v_s_760_, 4);
lean_dec(v_unused_809_);
v_unused_810_ = lean_ctor_get(v_s_760_, 3);
lean_dec(v_unused_810_);
v_unused_811_ = lean_ctor_get(v_s_760_, 2);
lean_dec(v_unused_811_);
v_unused_812_ = lean_ctor_get(v_s_760_, 1);
lean_dec(v_unused_812_);
v_unused_813_ = lean_ctor_get(v_s_760_, 0);
lean_dec(v_unused_813_);
v___x_778_ = v_s_760_;
v_isShared_779_ = v_isSharedCheck_800_;
goto v_resetjp_777_;
}
else
{
lean_dec(v_s_760_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_800_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v_v_780_; lean_object* v_toSemiring_781_; lean_object* v_ringId_782_; lean_object* v_commSemiringInst_783_; lean_object* v_toQFn_x3f_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_798_; 
v_v_780_ = lean_array_fget(v_semirings_764_, v_a_758_);
v_toSemiring_781_ = lean_ctor_get(v_v_780_, 0);
v_ringId_782_ = lean_ctor_get(v_v_780_, 1);
v_commSemiringInst_783_ = lean_ctor_get(v_v_780_, 2);
v_toQFn_x3f_784_ = lean_ctor_get(v_v_780_, 4);
v_isSharedCheck_798_ = !lean_is_exclusive(v_v_780_);
if (v_isSharedCheck_798_ == 0)
{
lean_object* v_unused_799_; 
v_unused_799_ = lean_ctor_get(v_v_780_, 3);
lean_dec(v_unused_799_);
v___x_786_ = v_v_780_;
v_isShared_787_ = v_isSharedCheck_798_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_toQFn_x3f_784_);
lean_inc(v_commSemiringInst_783_);
lean_inc(v_ringId_782_);
lean_inc(v_toSemiring_781_);
lean_dec(v_v_780_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_798_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_788_; lean_object* v_xs_x27_789_; lean_object* v___x_790_; lean_object* v___x_792_; 
v___x_788_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0);
v_xs_x27_789_ = lean_array_fset(v_semirings_764_, v_a_758_, v___x_788_);
v___x_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_790_, 0, v_a_759_);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 3, v___x_790_);
v___x_792_ = v___x_786_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_toSemiring_781_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v_ringId_782_);
lean_ctor_set(v_reuseFailAlloc_797_, 2, v_commSemiringInst_783_);
lean_ctor_set(v_reuseFailAlloc_797_, 3, v___x_790_);
lean_ctor_set(v_reuseFailAlloc_797_, 4, v_toQFn_x3f_784_);
v___x_792_ = v_reuseFailAlloc_797_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
lean_object* v___x_793_; lean_object* v___x_795_; 
v___x_793_ = lean_array_fset(v_xs_x27_789_, v_a_758_, v___x_792_);
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 3, v___x_793_);
v___x_795_ = v___x_778_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_rings_761_);
lean_ctor_set(v_reuseFailAlloc_796_, 1, v_typeIdOf_762_);
lean_ctor_set(v_reuseFailAlloc_796_, 2, v_exprToRingId_763_);
lean_ctor_set(v_reuseFailAlloc_796_, 3, v___x_793_);
lean_ctor_set(v_reuseFailAlloc_796_, 4, v_stypeIdOf_765_);
lean_ctor_set(v_reuseFailAlloc_796_, 5, v_exprToSemiringId_766_);
lean_ctor_set(v_reuseFailAlloc_796_, 6, v_ncRings_767_);
lean_ctor_set(v_reuseFailAlloc_796_, 7, v_exprToNCRingId_768_);
lean_ctor_set(v_reuseFailAlloc_796_, 8, v_nctypeIdOf_769_);
lean_ctor_set(v_reuseFailAlloc_796_, 9, v_ncSemirings_770_);
lean_ctor_set(v_reuseFailAlloc_796_, 10, v_exprToNCSemiringId_771_);
lean_ctor_set(v_reuseFailAlloc_796_, 11, v_ncstypeIdOf_772_);
lean_ctor_set(v_reuseFailAlloc_796_, 12, v_steps_773_);
lean_ctor_set_uint8(v_reuseFailAlloc_796_, sizeof(void*)*13, v_reportedMaxDegreeIssue_774_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___lam__0___boxed(lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_s_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___lam__0(v_a_814_, v_a_815_, v_s_816_);
lean_dec(v_a_814_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f(lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(v_a_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_864_; 
v_a_831_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_864_ == 0)
{
v___x_833_ = v___x_830_;
v_isShared_834_ = v_isSharedCheck_864_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_dec(v___x_830_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_864_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v_addRightCancelInst_x3f_835_; 
v_addRightCancelInst_x3f_835_ = lean_ctor_get(v_a_831_, 3);
if (lean_obj_tag(v_addRightCancelInst_x3f_835_) == 1)
{
lean_object* v_val_836_; lean_object* v___x_838_; 
lean_inc_ref(v_addRightCancelInst_x3f_835_);
lean_dec(v_a_831_);
v_val_836_ = lean_ctor_get(v_addRightCancelInst_x3f_835_, 0);
lean_inc(v_val_836_);
lean_dec_ref_known(v_addRightCancelInst_x3f_835_, 1);
if (v_isShared_834_ == 0)
{
lean_ctor_set(v___x_833_, 0, v_val_836_);
v___x_838_ = v___x_833_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_val_836_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
else
{
lean_object* v_toSemiring_840_; lean_object* v_type_841_; lean_object* v_u_842_; lean_object* v___x_843_; 
lean_del_object(v___x_833_);
v_toSemiring_840_ = lean_ctor_get(v_a_831_, 0);
lean_inc_ref(v_toSemiring_840_);
lean_dec(v_a_831_);
v_type_841_ = lean_ctor_get(v_toSemiring_840_, 1);
lean_inc_ref(v_type_841_);
v_u_842_ = lean_ctor_get(v_toSemiring_840_, 2);
lean_inc(v_u_842_);
lean_dec_ref(v_toSemiring_840_);
v___x_843_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg(v_u_842_, v_type_841_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_);
if (lean_obj_tag(v___x_843_) == 0)
{
lean_object* v_a_844_; lean_object* v___f_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v_a_844_ = lean_ctor_get(v___x_843_, 0);
lean_inc_n(v_a_844_, 2);
lean_dec_ref_known(v___x_843_, 1);
lean_inc(v_a_818_);
v___f_845_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___lam__0___boxed), 3, 2);
lean_closure_set(v___f_845_, 0, v_a_818_);
lean_closure_set(v___f_845_, 1, v_a_844_);
v___x_846_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_847_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_846_, v___f_845_, v_a_819_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_854_; 
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_854_ == 0)
{
lean_object* v_unused_855_; 
v_unused_855_ = lean_ctor_get(v___x_847_, 0);
lean_dec(v_unused_855_);
v___x_849_ = v___x_847_;
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
else
{
lean_dec(v___x_847_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_852_; 
if (v_isShared_850_ == 0)
{
lean_ctor_set(v___x_849_, 0, v_a_844_);
v___x_852_ = v___x_849_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_a_844_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
else
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
lean_dec(v_a_844_);
v_a_856_ = lean_ctor_get(v___x_847_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_847_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_847_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
}
else
{
return v___x_843_;
}
}
}
}
else
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_872_; 
v_a_865_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_872_ == 0)
{
v___x_867_ = v___x_830_;
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_830_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_870_; 
if (v_isShared_868_ == 0)
{
v___x_870_ = v___x_867_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_a_865_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___boxed(lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f(v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_);
lean_dec(v_a_883_);
lean_dec_ref(v_a_882_);
lean_dec(v_a_881_);
lean_dec_ref(v_a_880_);
lean_dec(v_a_879_);
lean_dec_ref(v_a_878_);
lean_dec(v_a_877_);
lean_dec_ref(v_a_876_);
lean_dec(v_a_875_);
lean_dec(v_a_874_);
lean_dec(v_a_873_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__0(lean_object* v_addFn_886_, lean_object* v_s_887_){
_start:
{
lean_object* v_id_888_; lean_object* v_type_889_; lean_object* v_u_890_; lean_object* v_semiringInst_891_; lean_object* v_mulFn_x3f_892_; lean_object* v_powFn_x3f_893_; lean_object* v_natCastFn_x3f_894_; lean_object* v_denote_895_; lean_object* v_vars_896_; lean_object* v_varMap_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_905_; 
v_id_888_ = lean_ctor_get(v_s_887_, 0);
v_type_889_ = lean_ctor_get(v_s_887_, 1);
v_u_890_ = lean_ctor_get(v_s_887_, 2);
v_semiringInst_891_ = lean_ctor_get(v_s_887_, 3);
v_mulFn_x3f_892_ = lean_ctor_get(v_s_887_, 5);
v_powFn_x3f_893_ = lean_ctor_get(v_s_887_, 6);
v_natCastFn_x3f_894_ = lean_ctor_get(v_s_887_, 7);
v_denote_895_ = lean_ctor_get(v_s_887_, 8);
v_vars_896_ = lean_ctor_get(v_s_887_, 9);
v_varMap_897_ = lean_ctor_get(v_s_887_, 10);
v_isSharedCheck_905_ = !lean_is_exclusive(v_s_887_);
if (v_isSharedCheck_905_ == 0)
{
lean_object* v_unused_906_; 
v_unused_906_ = lean_ctor_get(v_s_887_, 4);
lean_dec(v_unused_906_);
v___x_899_ = v_s_887_;
v_isShared_900_ = v_isSharedCheck_905_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_varMap_897_);
lean_inc(v_vars_896_);
lean_inc(v_denote_895_);
lean_inc(v_natCastFn_x3f_894_);
lean_inc(v_powFn_x3f_893_);
lean_inc(v_mulFn_x3f_892_);
lean_inc(v_semiringInst_891_);
lean_inc(v_u_890_);
lean_inc(v_type_889_);
lean_inc(v_id_888_);
lean_dec(v_s_887_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_905_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_901_; lean_object* v___x_903_; 
v___x_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_901_, 0, v_addFn_886_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 4, v___x_901_);
v___x_903_ = v___x_899_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_id_888_);
lean_ctor_set(v_reuseFailAlloc_904_, 1, v_type_889_);
lean_ctor_set(v_reuseFailAlloc_904_, 2, v_u_890_);
lean_ctor_set(v_reuseFailAlloc_904_, 3, v_semiringInst_891_);
lean_ctor_set(v_reuseFailAlloc_904_, 4, v___x_901_);
lean_ctor_set(v_reuseFailAlloc_904_, 5, v_mulFn_x3f_892_);
lean_ctor_set(v_reuseFailAlloc_904_, 6, v_powFn_x3f_893_);
lean_ctor_set(v_reuseFailAlloc_904_, 7, v_natCastFn_x3f_894_);
lean_ctor_set(v_reuseFailAlloc_904_, 8, v_denote_895_);
lean_ctor_set(v_reuseFailAlloc_904_, 9, v_vars_896_);
lean_ctor_set(v_reuseFailAlloc_904_, 10, v_varMap_897_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__1(lean_object* v_toPure_907_, lean_object* v_addFn_908_, lean_object* v_____r_909_){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = lean_apply_2(v_toPure_907_, lean_box(0), v_addFn_908_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__2(lean_object* v_toPure_911_, lean_object* v_modifySemiring_912_, lean_object* v_toBind_913_, lean_object* v_addFn_914_){
_start:
{
lean_object* v___f_915_; lean_object* v___f_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
lean_inc_ref(v_addFn_914_);
v___f_915_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_915_, 0, v_addFn_914_);
v___f_916_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__1), 3, 2);
lean_closure_set(v___f_916_, 0, v_toPure_911_);
lean_closure_set(v___f_916_, 1, v_addFn_914_);
v___x_917_ = lean_apply_1(v_modifySemiring_912_, v___f_915_);
v___x_918_ = lean_apply_4(v_toBind_913_, lean_box(0), lean_box(0), v___x_917_, v___f_916_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3(lean_object* v_toPure_936_, lean_object* v_inst_937_, lean_object* v_inst_938_, lean_object* v_inst_939_, lean_object* v_inst_940_, lean_object* v_toBind_941_, lean_object* v___f_942_, lean_object* v_s_943_){
_start:
{
lean_object* v_addFn_x3f_944_; 
v_addFn_x3f_944_ = lean_ctor_get(v_s_943_, 4);
if (lean_obj_tag(v_addFn_x3f_944_) == 1)
{
lean_object* v_val_945_; lean_object* v___x_946_; 
lean_inc_ref(v_addFn_x3f_944_);
lean_dec_ref(v_s_943_);
lean_dec(v___f_942_);
lean_dec(v_toBind_941_);
lean_dec_ref(v_inst_940_);
lean_dec_ref(v_inst_939_);
lean_dec_ref(v_inst_938_);
lean_dec(v_inst_937_);
v_val_945_ = lean_ctor_get(v_addFn_x3f_944_, 0);
lean_inc(v_val_945_);
lean_dec_ref_known(v_addFn_x3f_944_, 1);
v___x_946_ = lean_apply_2(v_toPure_936_, lean_box(0), v_val_945_);
return v___x_946_;
}
else
{
lean_object* v_type_947_; lean_object* v_u_948_; lean_object* v_semiringInst_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v_expectedInst_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
lean_dec(v_toPure_936_);
v_type_947_ = lean_ctor_get(v_s_943_, 1);
lean_inc_ref_n(v_type_947_, 3);
v_u_948_ = lean_ctor_get(v_s_943_, 2);
lean_inc_n(v_u_948_, 2);
v_semiringInst_949_ = lean_ctor_get(v_s_943_, 3);
lean_inc_ref(v_semiringInst_949_);
lean_dec_ref(v_s_943_);
v___x_950_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__1));
v___x_951_ = lean_box(0);
v___x_952_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_952_, 0, v_u_948_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
lean_inc_ref(v___x_952_);
v___x_953_ = l_Lean_mkConst(v___x_950_, v___x_952_);
v___x_954_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4));
v___x_955_ = l_Lean_mkConst(v___x_954_, v___x_952_);
v___x_956_ = l_Lean_mkAppB(v___x_955_, v_type_947_, v_semiringInst_949_);
v_expectedInst_957_ = l_Lean_mkAppB(v___x_953_, v_type_947_, v___x_956_);
v___x_958_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__6));
v___x_959_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8));
v___x_960_ = l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___redArg(v_inst_937_, v_inst_938_, v_inst_939_, v_inst_940_, v_type_947_, v_u_948_, v___x_958_, v___x_959_, v_expectedInst_957_);
v___x_961_ = lean_apply_4(v_toBind_941_, lean_box(0), lean_box(0), v___x_960_, v___f_942_);
return v___x_961_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg(lean_object* v_inst_962_, lean_object* v_inst_963_, lean_object* v_inst_964_, lean_object* v_inst_965_, lean_object* v_inst_966_){
_start:
{
lean_object* v_toApplicative_967_; lean_object* v_toBind_968_; lean_object* v_getSemiring_969_; lean_object* v_modifySemiring_970_; lean_object* v_toPure_971_; lean_object* v___f_972_; lean_object* v___f_973_; lean_object* v___x_974_; 
v_toApplicative_967_ = lean_ctor_get(v_inst_964_, 0);
v_toBind_968_ = lean_ctor_get(v_inst_964_, 1);
lean_inc_n(v_toBind_968_, 3);
v_getSemiring_969_ = lean_ctor_get(v_inst_966_, 0);
lean_inc(v_getSemiring_969_);
v_modifySemiring_970_ = lean_ctor_get(v_inst_966_, 1);
lean_inc(v_modifySemiring_970_);
lean_dec_ref(v_inst_966_);
v_toPure_971_ = lean_ctor_get(v_toApplicative_967_, 1);
lean_inc_n(v_toPure_971_, 2);
v___f_972_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_972_, 0, v_toPure_971_);
lean_closure_set(v___f_972_, 1, v_modifySemiring_970_);
lean_closure_set(v___f_972_, 2, v_toBind_968_);
v___f_973_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3), 8, 7);
lean_closure_set(v___f_973_, 0, v_toPure_971_);
lean_closure_set(v___f_973_, 1, v_inst_962_);
lean_closure_set(v___f_973_, 2, v_inst_963_);
lean_closure_set(v___f_973_, 3, v_inst_964_);
lean_closure_set(v___f_973_, 4, v_inst_965_);
lean_closure_set(v___f_973_, 5, v_toBind_968_);
lean_closure_set(v___f_973_, 6, v___f_972_);
v___x_974_ = lean_apply_4(v_toBind_968_, lean_box(0), lean_box(0), v_getSemiring_969_, v___f_973_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27(lean_object* v_m_975_, lean_object* v_inst_976_, lean_object* v_inst_977_, lean_object* v_inst_978_, lean_object* v_inst_979_, lean_object* v_inst_980_){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg(v_inst_976_, v_inst_977_, v_inst_978_, v_inst_979_, v_inst_980_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__0(lean_object* v_mulFn_982_, lean_object* v_s_983_){
_start:
{
lean_object* v_id_984_; lean_object* v_type_985_; lean_object* v_u_986_; lean_object* v_semiringInst_987_; lean_object* v_addFn_x3f_988_; lean_object* v_powFn_x3f_989_; lean_object* v_natCastFn_x3f_990_; lean_object* v_denote_991_; lean_object* v_vars_992_; lean_object* v_varMap_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1001_; 
v_id_984_ = lean_ctor_get(v_s_983_, 0);
v_type_985_ = lean_ctor_get(v_s_983_, 1);
v_u_986_ = lean_ctor_get(v_s_983_, 2);
v_semiringInst_987_ = lean_ctor_get(v_s_983_, 3);
v_addFn_x3f_988_ = lean_ctor_get(v_s_983_, 4);
v_powFn_x3f_989_ = lean_ctor_get(v_s_983_, 6);
v_natCastFn_x3f_990_ = lean_ctor_get(v_s_983_, 7);
v_denote_991_ = lean_ctor_get(v_s_983_, 8);
v_vars_992_ = lean_ctor_get(v_s_983_, 9);
v_varMap_993_ = lean_ctor_get(v_s_983_, 10);
v_isSharedCheck_1001_ = !lean_is_exclusive(v_s_983_);
if (v_isSharedCheck_1001_ == 0)
{
lean_object* v_unused_1002_; 
v_unused_1002_ = lean_ctor_get(v_s_983_, 5);
lean_dec(v_unused_1002_);
v___x_995_ = v_s_983_;
v_isShared_996_ = v_isSharedCheck_1001_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_varMap_993_);
lean_inc(v_vars_992_);
lean_inc(v_denote_991_);
lean_inc(v_natCastFn_x3f_990_);
lean_inc(v_powFn_x3f_989_);
lean_inc(v_addFn_x3f_988_);
lean_inc(v_semiringInst_987_);
lean_inc(v_u_986_);
lean_inc(v_type_985_);
lean_inc(v_id_984_);
lean_dec(v_s_983_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1001_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_997_; lean_object* v___x_999_; 
v___x_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_997_, 0, v_mulFn_982_);
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 5, v___x_997_);
v___x_999_ = v___x_995_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_id_984_);
lean_ctor_set(v_reuseFailAlloc_1000_, 1, v_type_985_);
lean_ctor_set(v_reuseFailAlloc_1000_, 2, v_u_986_);
lean_ctor_set(v_reuseFailAlloc_1000_, 3, v_semiringInst_987_);
lean_ctor_set(v_reuseFailAlloc_1000_, 4, v_addFn_x3f_988_);
lean_ctor_set(v_reuseFailAlloc_1000_, 5, v___x_997_);
lean_ctor_set(v_reuseFailAlloc_1000_, 6, v_powFn_x3f_989_);
lean_ctor_set(v_reuseFailAlloc_1000_, 7, v_natCastFn_x3f_990_);
lean_ctor_set(v_reuseFailAlloc_1000_, 8, v_denote_991_);
lean_ctor_set(v_reuseFailAlloc_1000_, 9, v_vars_992_);
lean_ctor_set(v_reuseFailAlloc_1000_, 10, v_varMap_993_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__1(lean_object* v_toPure_1003_, lean_object* v_mulFn_1004_, lean_object* v_____r_1005_){
_start:
{
lean_object* v___x_1006_; 
v___x_1006_ = lean_apply_2(v_toPure_1003_, lean_box(0), v_mulFn_1004_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__2(lean_object* v_toPure_1007_, lean_object* v_modifySemiring_1008_, lean_object* v_toBind_1009_, lean_object* v_mulFn_1010_){
_start:
{
lean_object* v___f_1011_; lean_object* v___f_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
lean_inc_ref(v_mulFn_1010_);
v___f_1011_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1011_, 0, v_mulFn_1010_);
v___f_1012_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1012_, 0, v_toPure_1007_);
lean_closure_set(v___f_1012_, 1, v_mulFn_1010_);
v___x_1013_ = lean_apply_1(v_modifySemiring_1008_, v___f_1011_);
v___x_1014_ = lean_apply_4(v_toBind_1009_, lean_box(0), lean_box(0), v___x_1013_, v___f_1012_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3(lean_object* v_toPure_1031_, lean_object* v_inst_1032_, lean_object* v_inst_1033_, lean_object* v_inst_1034_, lean_object* v_inst_1035_, lean_object* v_toBind_1036_, lean_object* v___f_1037_, lean_object* v_s_1038_){
_start:
{
lean_object* v_mulFn_x3f_1039_; 
v_mulFn_x3f_1039_ = lean_ctor_get(v_s_1038_, 5);
if (lean_obj_tag(v_mulFn_x3f_1039_) == 1)
{
lean_object* v_val_1040_; lean_object* v___x_1041_; 
lean_inc_ref(v_mulFn_x3f_1039_);
lean_dec_ref(v_s_1038_);
lean_dec(v___f_1037_);
lean_dec(v_toBind_1036_);
lean_dec_ref(v_inst_1035_);
lean_dec_ref(v_inst_1034_);
lean_dec_ref(v_inst_1033_);
lean_dec(v_inst_1032_);
v_val_1040_ = lean_ctor_get(v_mulFn_x3f_1039_, 0);
lean_inc(v_val_1040_);
lean_dec_ref_known(v_mulFn_x3f_1039_, 1);
v___x_1041_ = lean_apply_2(v_toPure_1031_, lean_box(0), v_val_1040_);
return v___x_1041_;
}
else
{
lean_object* v_type_1042_; lean_object* v_u_1043_; lean_object* v_semiringInst_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v_expectedInst_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
lean_dec(v_toPure_1031_);
v_type_1042_ = lean_ctor_get(v_s_1038_, 1);
lean_inc_ref_n(v_type_1042_, 3);
v_u_1043_ = lean_ctor_get(v_s_1038_, 2);
lean_inc_n(v_u_1043_, 2);
v_semiringInst_1044_ = lean_ctor_get(v_s_1038_, 3);
lean_inc_ref(v_semiringInst_1044_);
lean_dec_ref(v_s_1038_);
v___x_1045_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__1));
v___x_1046_ = lean_box(0);
v___x_1047_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1047_, 0, v_u_1043_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
lean_inc_ref(v___x_1047_);
v___x_1048_ = l_Lean_mkConst(v___x_1045_, v___x_1047_);
v___x_1049_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3));
v___x_1050_ = l_Lean_mkConst(v___x_1049_, v___x_1047_);
v___x_1051_ = l_Lean_mkAppB(v___x_1050_, v_type_1042_, v_semiringInst_1044_);
v_expectedInst_1052_ = l_Lean_mkAppB(v___x_1048_, v_type_1042_, v___x_1051_);
v___x_1053_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__5));
v___x_1054_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7));
v___x_1055_ = l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___redArg(v_inst_1032_, v_inst_1033_, v_inst_1034_, v_inst_1035_, v_type_1042_, v_u_1043_, v___x_1053_, v___x_1054_, v_expectedInst_1052_);
v___x_1056_ = lean_apply_4(v_toBind_1036_, lean_box(0), lean_box(0), v___x_1055_, v___f_1037_);
return v___x_1056_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg(lean_object* v_inst_1057_, lean_object* v_inst_1058_, lean_object* v_inst_1059_, lean_object* v_inst_1060_, lean_object* v_inst_1061_){
_start:
{
lean_object* v_toApplicative_1062_; lean_object* v_toBind_1063_; lean_object* v_getSemiring_1064_; lean_object* v_modifySemiring_1065_; lean_object* v_toPure_1066_; lean_object* v___f_1067_; lean_object* v___f_1068_; lean_object* v___x_1069_; 
v_toApplicative_1062_ = lean_ctor_get(v_inst_1059_, 0);
v_toBind_1063_ = lean_ctor_get(v_inst_1059_, 1);
lean_inc_n(v_toBind_1063_, 3);
v_getSemiring_1064_ = lean_ctor_get(v_inst_1061_, 0);
lean_inc(v_getSemiring_1064_);
v_modifySemiring_1065_ = lean_ctor_get(v_inst_1061_, 1);
lean_inc(v_modifySemiring_1065_);
lean_dec_ref(v_inst_1061_);
v_toPure_1066_ = lean_ctor_get(v_toApplicative_1062_, 1);
lean_inc_n(v_toPure_1066_, 2);
v___f_1067_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1067_, 0, v_toPure_1066_);
lean_closure_set(v___f_1067_, 1, v_modifySemiring_1065_);
lean_closure_set(v___f_1067_, 2, v_toBind_1063_);
v___f_1068_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3), 8, 7);
lean_closure_set(v___f_1068_, 0, v_toPure_1066_);
lean_closure_set(v___f_1068_, 1, v_inst_1057_);
lean_closure_set(v___f_1068_, 2, v_inst_1058_);
lean_closure_set(v___f_1068_, 3, v_inst_1059_);
lean_closure_set(v___f_1068_, 4, v_inst_1060_);
lean_closure_set(v___f_1068_, 5, v_toBind_1063_);
lean_closure_set(v___f_1068_, 6, v___f_1067_);
v___x_1069_ = lean_apply_4(v_toBind_1063_, lean_box(0), lean_box(0), v_getSemiring_1064_, v___f_1068_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27(lean_object* v_m_1070_, lean_object* v_inst_1071_, lean_object* v_inst_1072_, lean_object* v_inst_1073_, lean_object* v_inst_1074_, lean_object* v_inst_1075_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg(v_inst_1071_, v_inst_1072_, v_inst_1073_, v_inst_1074_, v_inst_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__0(lean_object* v_powFn_1077_, lean_object* v_s_1078_){
_start:
{
lean_object* v_id_1079_; lean_object* v_type_1080_; lean_object* v_u_1081_; lean_object* v_semiringInst_1082_; lean_object* v_addFn_x3f_1083_; lean_object* v_mulFn_x3f_1084_; lean_object* v_natCastFn_x3f_1085_; lean_object* v_denote_1086_; lean_object* v_vars_1087_; lean_object* v_varMap_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1096_; 
v_id_1079_ = lean_ctor_get(v_s_1078_, 0);
v_type_1080_ = lean_ctor_get(v_s_1078_, 1);
v_u_1081_ = lean_ctor_get(v_s_1078_, 2);
v_semiringInst_1082_ = lean_ctor_get(v_s_1078_, 3);
v_addFn_x3f_1083_ = lean_ctor_get(v_s_1078_, 4);
v_mulFn_x3f_1084_ = lean_ctor_get(v_s_1078_, 5);
v_natCastFn_x3f_1085_ = lean_ctor_get(v_s_1078_, 7);
v_denote_1086_ = lean_ctor_get(v_s_1078_, 8);
v_vars_1087_ = lean_ctor_get(v_s_1078_, 9);
v_varMap_1088_ = lean_ctor_get(v_s_1078_, 10);
v_isSharedCheck_1096_ = !lean_is_exclusive(v_s_1078_);
if (v_isSharedCheck_1096_ == 0)
{
lean_object* v_unused_1097_; 
v_unused_1097_ = lean_ctor_get(v_s_1078_, 6);
lean_dec(v_unused_1097_);
v___x_1090_ = v_s_1078_;
v_isShared_1091_ = v_isSharedCheck_1096_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_varMap_1088_);
lean_inc(v_vars_1087_);
lean_inc(v_denote_1086_);
lean_inc(v_natCastFn_x3f_1085_);
lean_inc(v_mulFn_x3f_1084_);
lean_inc(v_addFn_x3f_1083_);
lean_inc(v_semiringInst_1082_);
lean_inc(v_u_1081_);
lean_inc(v_type_1080_);
lean_inc(v_id_1079_);
lean_dec(v_s_1078_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1096_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1092_; lean_object* v___x_1094_; 
v___x_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1092_, 0, v_powFn_1077_);
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 6, v___x_1092_);
v___x_1094_ = v___x_1090_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_id_1079_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v_type_1080_);
lean_ctor_set(v_reuseFailAlloc_1095_, 2, v_u_1081_);
lean_ctor_set(v_reuseFailAlloc_1095_, 3, v_semiringInst_1082_);
lean_ctor_set(v_reuseFailAlloc_1095_, 4, v_addFn_x3f_1083_);
lean_ctor_set(v_reuseFailAlloc_1095_, 5, v_mulFn_x3f_1084_);
lean_ctor_set(v_reuseFailAlloc_1095_, 6, v___x_1092_);
lean_ctor_set(v_reuseFailAlloc_1095_, 7, v_natCastFn_x3f_1085_);
lean_ctor_set(v_reuseFailAlloc_1095_, 8, v_denote_1086_);
lean_ctor_set(v_reuseFailAlloc_1095_, 9, v_vars_1087_);
lean_ctor_set(v_reuseFailAlloc_1095_, 10, v_varMap_1088_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__1(lean_object* v_toPure_1098_, lean_object* v_powFn_1099_, lean_object* v_____r_1100_){
_start:
{
lean_object* v___x_1101_; 
v___x_1101_ = lean_apply_2(v_toPure_1098_, lean_box(0), v_powFn_1099_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__2(lean_object* v_toPure_1102_, lean_object* v_modifySemiring_1103_, lean_object* v_toBind_1104_, lean_object* v_powFn_1105_){
_start:
{
lean_object* v___f_1106_; lean_object* v___f_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
lean_inc_ref(v_powFn_1105_);
v___f_1106_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1106_, 0, v_powFn_1105_);
v___f_1107_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1107_, 0, v_toPure_1102_);
lean_closure_set(v___f_1107_, 1, v_powFn_1105_);
v___x_1108_ = lean_apply_1(v_modifySemiring_1103_, v___f_1106_);
v___x_1109_ = lean_apply_4(v_toBind_1104_, lean_box(0), lean_box(0), v___x_1108_, v___f_1107_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__3(lean_object* v_toPure_1110_, lean_object* v_inst_1111_, lean_object* v_inst_1112_, lean_object* v_inst_1113_, lean_object* v_inst_1114_, lean_object* v_toBind_1115_, lean_object* v___f_1116_, lean_object* v_s_1117_){
_start:
{
lean_object* v_powFn_x3f_1118_; 
v_powFn_x3f_1118_ = lean_ctor_get(v_s_1117_, 6);
if (lean_obj_tag(v_powFn_x3f_1118_) == 1)
{
lean_object* v_val_1119_; lean_object* v___x_1120_; 
lean_inc_ref(v_powFn_x3f_1118_);
lean_dec_ref(v_s_1117_);
lean_dec(v___f_1116_);
lean_dec(v_toBind_1115_);
lean_dec_ref(v_inst_1114_);
lean_dec_ref(v_inst_1113_);
lean_dec_ref(v_inst_1112_);
lean_dec(v_inst_1111_);
v_val_1119_ = lean_ctor_get(v_powFn_x3f_1118_, 0);
lean_inc(v_val_1119_);
lean_dec_ref_known(v_powFn_x3f_1118_, 1);
v___x_1120_ = lean_apply_2(v_toPure_1110_, lean_box(0), v_val_1119_);
return v___x_1120_;
}
else
{
lean_object* v_type_1121_; lean_object* v_u_1122_; lean_object* v_semiringInst_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
lean_dec(v_toPure_1110_);
v_type_1121_ = lean_ctor_get(v_s_1117_, 1);
lean_inc_ref(v_type_1121_);
v_u_1122_ = lean_ctor_get(v_s_1117_, 2);
lean_inc(v_u_1122_);
v_semiringInst_1123_ = lean_ctor_get(v_s_1117_, 3);
lean_inc_ref(v_semiringInst_1123_);
lean_dec_ref(v_s_1117_);
v___x_1124_ = l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___redArg(v_inst_1111_, v_inst_1112_, v_inst_1113_, v_inst_1114_, v_u_1122_, v_type_1121_, v_semiringInst_1123_);
v___x_1125_ = lean_apply_4(v_toBind_1115_, lean_box(0), lean_box(0), v___x_1124_, v___f_1116_);
return v___x_1125_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg(lean_object* v_inst_1126_, lean_object* v_inst_1127_, lean_object* v_inst_1128_, lean_object* v_inst_1129_, lean_object* v_inst_1130_){
_start:
{
lean_object* v_toApplicative_1131_; lean_object* v_toBind_1132_; lean_object* v_getSemiring_1133_; lean_object* v_modifySemiring_1134_; lean_object* v_toPure_1135_; lean_object* v___f_1136_; lean_object* v___f_1137_; lean_object* v___x_1138_; 
v_toApplicative_1131_ = lean_ctor_get(v_inst_1128_, 0);
v_toBind_1132_ = lean_ctor_get(v_inst_1128_, 1);
lean_inc_n(v_toBind_1132_, 3);
v_getSemiring_1133_ = lean_ctor_get(v_inst_1130_, 0);
lean_inc(v_getSemiring_1133_);
v_modifySemiring_1134_ = lean_ctor_get(v_inst_1130_, 1);
lean_inc(v_modifySemiring_1134_);
lean_dec_ref(v_inst_1130_);
v_toPure_1135_ = lean_ctor_get(v_toApplicative_1131_, 1);
lean_inc_n(v_toPure_1135_, 2);
v___f_1136_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1136_, 0, v_toPure_1135_);
lean_closure_set(v___f_1136_, 1, v_modifySemiring_1134_);
lean_closure_set(v___f_1136_, 2, v_toBind_1132_);
v___f_1137_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__3), 8, 7);
lean_closure_set(v___f_1137_, 0, v_toPure_1135_);
lean_closure_set(v___f_1137_, 1, v_inst_1126_);
lean_closure_set(v___f_1137_, 2, v_inst_1127_);
lean_closure_set(v___f_1137_, 3, v_inst_1128_);
lean_closure_set(v___f_1137_, 4, v_inst_1129_);
lean_closure_set(v___f_1137_, 5, v_toBind_1132_);
lean_closure_set(v___f_1137_, 6, v___f_1136_);
v___x_1138_ = lean_apply_4(v_toBind_1132_, lean_box(0), lean_box(0), v_getSemiring_1133_, v___f_1137_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27(lean_object* v_m_1139_, lean_object* v_inst_1140_, lean_object* v_inst_1141_, lean_object* v_inst_1142_, lean_object* v_inst_1143_, lean_object* v_inst_1144_){
_start:
{
lean_object* v___x_1145_; 
v___x_1145_ = l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg(v_inst_1140_, v_inst_1141_, v_inst_1142_, v_inst_1143_, v_inst_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__0(lean_object* v_natCastFn_1146_, lean_object* v_s_1147_){
_start:
{
lean_object* v_id_1148_; lean_object* v_type_1149_; lean_object* v_u_1150_; lean_object* v_semiringInst_1151_; lean_object* v_addFn_x3f_1152_; lean_object* v_mulFn_x3f_1153_; lean_object* v_powFn_x3f_1154_; lean_object* v_denote_1155_; lean_object* v_vars_1156_; lean_object* v_varMap_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1165_; 
v_id_1148_ = lean_ctor_get(v_s_1147_, 0);
v_type_1149_ = lean_ctor_get(v_s_1147_, 1);
v_u_1150_ = lean_ctor_get(v_s_1147_, 2);
v_semiringInst_1151_ = lean_ctor_get(v_s_1147_, 3);
v_addFn_x3f_1152_ = lean_ctor_get(v_s_1147_, 4);
v_mulFn_x3f_1153_ = lean_ctor_get(v_s_1147_, 5);
v_powFn_x3f_1154_ = lean_ctor_get(v_s_1147_, 6);
v_denote_1155_ = lean_ctor_get(v_s_1147_, 8);
v_vars_1156_ = lean_ctor_get(v_s_1147_, 9);
v_varMap_1157_ = lean_ctor_get(v_s_1147_, 10);
v_isSharedCheck_1165_ = !lean_is_exclusive(v_s_1147_);
if (v_isSharedCheck_1165_ == 0)
{
lean_object* v_unused_1166_; 
v_unused_1166_ = lean_ctor_get(v_s_1147_, 7);
lean_dec(v_unused_1166_);
v___x_1159_ = v_s_1147_;
v_isShared_1160_ = v_isSharedCheck_1165_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_varMap_1157_);
lean_inc(v_vars_1156_);
lean_inc(v_denote_1155_);
lean_inc(v_powFn_x3f_1154_);
lean_inc(v_mulFn_x3f_1153_);
lean_inc(v_addFn_x3f_1152_);
lean_inc(v_semiringInst_1151_);
lean_inc(v_u_1150_);
lean_inc(v_type_1149_);
lean_inc(v_id_1148_);
lean_dec(v_s_1147_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1165_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1161_; lean_object* v___x_1163_; 
v___x_1161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1161_, 0, v_natCastFn_1146_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 7, v___x_1161_);
v___x_1163_ = v___x_1159_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_id_1148_);
lean_ctor_set(v_reuseFailAlloc_1164_, 1, v_type_1149_);
lean_ctor_set(v_reuseFailAlloc_1164_, 2, v_u_1150_);
lean_ctor_set(v_reuseFailAlloc_1164_, 3, v_semiringInst_1151_);
lean_ctor_set(v_reuseFailAlloc_1164_, 4, v_addFn_x3f_1152_);
lean_ctor_set(v_reuseFailAlloc_1164_, 5, v_mulFn_x3f_1153_);
lean_ctor_set(v_reuseFailAlloc_1164_, 6, v_powFn_x3f_1154_);
lean_ctor_set(v_reuseFailAlloc_1164_, 7, v___x_1161_);
lean_ctor_set(v_reuseFailAlloc_1164_, 8, v_denote_1155_);
lean_ctor_set(v_reuseFailAlloc_1164_, 9, v_vars_1156_);
lean_ctor_set(v_reuseFailAlloc_1164_, 10, v_varMap_1157_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__1(lean_object* v_toPure_1167_, lean_object* v_natCastFn_1168_, lean_object* v_____r_1169_){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = lean_apply_2(v_toPure_1167_, lean_box(0), v_natCastFn_1168_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__2(lean_object* v_toPure_1171_, lean_object* v_modifySemiring_1172_, lean_object* v_toBind_1173_, lean_object* v_natCastFn_1174_){
_start:
{
lean_object* v___f_1175_; lean_object* v___f_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
lean_inc_ref(v_natCastFn_1174_);
v___f_1175_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1175_, 0, v_natCastFn_1174_);
v___f_1176_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1176_, 0, v_toPure_1171_);
lean_closure_set(v___f_1176_, 1, v_natCastFn_1174_);
v___x_1177_ = lean_apply_1(v_modifySemiring_1172_, v___f_1175_);
v___x_1178_ = lean_apply_4(v_toBind_1173_, lean_box(0), lean_box(0), v___x_1177_, v___f_1176_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__3(lean_object* v_toPure_1179_, lean_object* v_inst_1180_, lean_object* v_inst_1181_, lean_object* v_inst_1182_, lean_object* v_toBind_1183_, lean_object* v___f_1184_, lean_object* v_s_1185_){
_start:
{
lean_object* v_natCastFn_x3f_1186_; 
v_natCastFn_x3f_1186_ = lean_ctor_get(v_s_1185_, 7);
if (lean_obj_tag(v_natCastFn_x3f_1186_) == 1)
{
lean_object* v_val_1187_; lean_object* v___x_1188_; 
lean_inc_ref(v_natCastFn_x3f_1186_);
lean_dec_ref(v_s_1185_);
lean_dec(v___f_1184_);
lean_dec(v_toBind_1183_);
lean_dec_ref(v_inst_1182_);
lean_dec_ref(v_inst_1181_);
lean_dec(v_inst_1180_);
v_val_1187_ = lean_ctor_get(v_natCastFn_x3f_1186_, 0);
lean_inc(v_val_1187_);
lean_dec_ref_known(v_natCastFn_x3f_1186_, 1);
v___x_1188_ = lean_apply_2(v_toPure_1179_, lean_box(0), v_val_1187_);
return v___x_1188_;
}
else
{
lean_object* v_type_1189_; lean_object* v_u_1190_; lean_object* v_semiringInst_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
lean_dec(v_toPure_1179_);
v_type_1189_ = lean_ctor_get(v_s_1185_, 1);
lean_inc_ref(v_type_1189_);
v_u_1190_ = lean_ctor_get(v_s_1185_, 2);
lean_inc(v_u_1190_);
v_semiringInst_1191_ = lean_ctor_get(v_s_1185_, 3);
lean_inc_ref(v_semiringInst_1191_);
lean_dec_ref(v_s_1185_);
v___x_1192_ = l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___redArg(v_inst_1180_, v_inst_1181_, v_inst_1182_, v_u_1190_, v_type_1189_, v_semiringInst_1191_);
v___x_1193_ = lean_apply_4(v_toBind_1183_, lean_box(0), lean_box(0), v___x_1192_, v___f_1184_);
return v___x_1193_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg(lean_object* v_inst_1194_, lean_object* v_inst_1195_, lean_object* v_inst_1196_, lean_object* v_inst_1197_){
_start:
{
lean_object* v_toApplicative_1198_; lean_object* v_toBind_1199_; lean_object* v_getSemiring_1200_; lean_object* v_modifySemiring_1201_; lean_object* v_toPure_1202_; lean_object* v___f_1203_; lean_object* v___f_1204_; lean_object* v___x_1205_; 
v_toApplicative_1198_ = lean_ctor_get(v_inst_1195_, 0);
v_toBind_1199_ = lean_ctor_get(v_inst_1195_, 1);
lean_inc_n(v_toBind_1199_, 3);
v_getSemiring_1200_ = lean_ctor_get(v_inst_1197_, 0);
lean_inc(v_getSemiring_1200_);
v_modifySemiring_1201_ = lean_ctor_get(v_inst_1197_, 1);
lean_inc(v_modifySemiring_1201_);
lean_dec_ref(v_inst_1197_);
v_toPure_1202_ = lean_ctor_get(v_toApplicative_1198_, 1);
lean_inc_n(v_toPure_1202_, 2);
v___f_1203_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1203_, 0, v_toPure_1202_);
lean_closure_set(v___f_1203_, 1, v_modifySemiring_1201_);
lean_closure_set(v___f_1203_, 2, v_toBind_1199_);
v___f_1204_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__3), 7, 6);
lean_closure_set(v___f_1204_, 0, v_toPure_1202_);
lean_closure_set(v___f_1204_, 1, v_inst_1194_);
lean_closure_set(v___f_1204_, 2, v_inst_1195_);
lean_closure_set(v___f_1204_, 3, v_inst_1196_);
lean_closure_set(v___f_1204_, 4, v_toBind_1199_);
lean_closure_set(v___f_1204_, 5, v___f_1203_);
v___x_1205_ = lean_apply_4(v_toBind_1199_, lean_box(0), lean_box(0), v_getSemiring_1200_, v___f_1204_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27(lean_object* v_m_1206_, lean_object* v_inst_1207_, lean_object* v_inst_1208_, lean_object* v_inst_1209_, lean_object* v_inst_1210_){
_start:
{
lean_object* v___x_1211_; 
v___x_1211_ = l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg(v_inst_1207_, v_inst_1208_, v_inst_1209_, v_inst_1210_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1212_, lean_object* v_vals_1213_, lean_object* v_i_1214_, lean_object* v_k_1215_){
_start:
{
lean_object* v___x_1216_; uint8_t v___x_1217_; 
v___x_1216_ = lean_array_get_size(v_keys_1212_);
v___x_1217_ = lean_nat_dec_lt(v_i_1214_, v___x_1216_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1218_; 
lean_dec(v_i_1214_);
v___x_1218_ = lean_box(0);
return v___x_1218_;
}
else
{
lean_object* v_k_x27_1219_; size_t v___x_1220_; size_t v___x_1221_; uint8_t v___x_1222_; 
v_k_x27_1219_ = lean_array_fget_borrowed(v_keys_1212_, v_i_1214_);
v___x_1220_ = lean_ptr_addr(v_k_1215_);
v___x_1221_ = lean_ptr_addr(v_k_x27_1219_);
v___x_1222_ = lean_usize_dec_eq(v___x_1220_, v___x_1221_);
if (v___x_1222_ == 0)
{
lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1223_ = lean_unsigned_to_nat(1u);
v___x_1224_ = lean_nat_add(v_i_1214_, v___x_1223_);
lean_dec(v_i_1214_);
v_i_1214_ = v___x_1224_;
goto _start;
}
else
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = lean_array_fget_borrowed(v_vals_1213_, v_i_1214_);
lean_dec(v_i_1214_);
lean_inc(v___x_1226_);
v___x_1227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1226_);
return v___x_1227_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1228_, lean_object* v_vals_1229_, lean_object* v_i_1230_, lean_object* v_k_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1228_, v_vals_1229_, v_i_1230_, v_k_1231_);
lean_dec_ref(v_k_1231_);
lean_dec_ref(v_vals_1229_);
lean_dec_ref(v_keys_1228_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg(lean_object* v_x_1233_, size_t v_x_1234_, lean_object* v_x_1235_){
_start:
{
if (lean_obj_tag(v_x_1233_) == 0)
{
lean_object* v_es_1236_; lean_object* v___x_1237_; size_t v___x_1238_; size_t v___x_1239_; lean_object* v_j_1240_; lean_object* v___x_1241_; 
v_es_1236_ = lean_ctor_get(v_x_1233_, 0);
v___x_1237_ = lean_box(2);
v___x_1238_ = ((size_t)31ULL);
v___x_1239_ = lean_usize_land(v_x_1234_, v___x_1238_);
v_j_1240_ = lean_usize_to_nat(v___x_1239_);
v___x_1241_ = lean_array_get_borrowed(v___x_1237_, v_es_1236_, v_j_1240_);
lean_dec(v_j_1240_);
switch(lean_obj_tag(v___x_1241_))
{
case 0:
{
lean_object* v_key_1242_; lean_object* v_val_1243_; size_t v___x_1244_; size_t v___x_1245_; uint8_t v___x_1246_; 
v_key_1242_ = lean_ctor_get(v___x_1241_, 0);
v_val_1243_ = lean_ctor_get(v___x_1241_, 1);
v___x_1244_ = lean_ptr_addr(v_x_1235_);
v___x_1245_ = lean_ptr_addr(v_key_1242_);
v___x_1246_ = lean_usize_dec_eq(v___x_1244_, v___x_1245_);
if (v___x_1246_ == 0)
{
lean_object* v___x_1247_; 
v___x_1247_ = lean_box(0);
return v___x_1247_;
}
else
{
lean_object* v___x_1248_; 
lean_inc(v_val_1243_);
v___x_1248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1248_, 0, v_val_1243_);
return v___x_1248_;
}
}
case 1:
{
lean_object* v_node_1249_; size_t v___x_1250_; size_t v___x_1251_; 
v_node_1249_ = lean_ctor_get(v___x_1241_, 0);
v___x_1250_ = ((size_t)5ULL);
v___x_1251_ = lean_usize_shift_right(v_x_1234_, v___x_1250_);
v_x_1233_ = v_node_1249_;
v_x_1234_ = v___x_1251_;
goto _start;
}
default: 
{
lean_object* v___x_1253_; 
v___x_1253_ = lean_box(0);
return v___x_1253_;
}
}
}
else
{
lean_object* v_ks_1254_; lean_object* v_vs_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v_ks_1254_ = lean_ctor_get(v_x_1233_, 0);
v_vs_1255_ = lean_ctor_get(v_x_1233_, 1);
v___x_1256_ = lean_unsigned_to_nat(0u);
v___x_1257_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___redArg(v_ks_1254_, v_vs_1255_, v___x_1256_, v_x_1235_);
return v___x_1257_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_1258_, lean_object* v_x_1259_, lean_object* v_x_1260_){
_start:
{
size_t v_x_905__boxed_1261_; lean_object* v_res_1262_; 
v_x_905__boxed_1261_ = lean_unbox_usize(v_x_1259_);
lean_dec(v_x_1259_);
v_res_1262_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg(v_x_1258_, v_x_905__boxed_1261_, v_x_1260_);
lean_dec_ref(v_x_1260_);
lean_dec_ref(v_x_1258_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg(lean_object* v_x_1263_, lean_object* v_x_1264_){
_start:
{
size_t v___x_1265_; size_t v___x_1266_; size_t v___x_1267_; uint64_t v___x_1268_; size_t v___x_1269_; lean_object* v___x_1270_; 
v___x_1265_ = lean_ptr_addr(v_x_1264_);
v___x_1266_ = ((size_t)3ULL);
v___x_1267_ = lean_usize_shift_right(v___x_1265_, v___x_1266_);
v___x_1268_ = lean_usize_to_uint64(v___x_1267_);
v___x_1269_ = lean_uint64_to_usize(v___x_1268_);
v___x_1270_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg(v_x_1263_, v___x_1269_, v_x_1264_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg___boxed(lean_object* v_x_1271_, lean_object* v_x_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg(v_x_1271_, v_x_1272_);
lean_dec_ref(v_x_1272_);
lean_dec_ref(v_x_1271_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___redArg(lean_object* v_e_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_){
_start:
{
lean_object* v___x_1278_; 
v___x_1278_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_1275_, v_a_1276_);
if (lean_obj_tag(v___x_1278_) == 0)
{
lean_object* v_a_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1288_; 
v_a_1279_ = lean_ctor_get(v___x_1278_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1278_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1281_ = v___x_1278_;
v_isShared_1282_ = v_isSharedCheck_1288_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_a_1279_);
lean_dec(v___x_1278_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1288_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v_exprToSemiringId_1283_; lean_object* v___x_1284_; lean_object* v___x_1286_; 
v_exprToSemiringId_1283_ = lean_ctor_get(v_a_1279_, 5);
lean_inc_ref(v_exprToSemiringId_1283_);
lean_dec(v_a_1279_);
v___x_1284_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg(v_exprToSemiringId_1283_, v_e_1274_);
lean_dec_ref(v_exprToSemiringId_1283_);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 0, v___x_1284_);
v___x_1286_ = v___x_1281_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v___x_1284_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
else
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1296_; 
v_a_1289_ = lean_ctor_get(v___x_1278_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1278_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1291_ = v___x_1278_;
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v___x_1278_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___redArg___boxed(lean_object* v_e_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___redArg(v_e_1297_, v_a_1298_, v_a_1299_);
lean_dec_ref(v_a_1299_);
lean_dec(v_a_1298_);
lean_dec_ref(v_e_1297_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f(lean_object* v_e_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_){
_start:
{
lean_object* v___x_1314_; 
v___x_1314_ = l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___redArg(v_e_1302_, v_a_1303_, v_a_1311_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___boxed(lean_object* v_e_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_){
_start:
{
lean_object* v_res_1327_; 
v_res_1327_ = l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f(v_e_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
lean_dec(v_a_1325_);
lean_dec_ref(v_a_1324_);
lean_dec(v_a_1323_);
lean_dec_ref(v_a_1322_);
lean_dec(v_a_1321_);
lean_dec_ref(v_a_1320_);
lean_dec(v_a_1319_);
lean_dec_ref(v_a_1318_);
lean_dec(v_a_1317_);
lean_dec(v_a_1316_);
lean_dec_ref(v_e_1315_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0(lean_object* v_00_u03b2_1328_, lean_object* v_x_1329_, lean_object* v_x_1330_){
_start:
{
lean_object* v___x_1331_; 
v___x_1331_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg(v_x_1329_, v_x_1330_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___boxed(lean_object* v_00_u03b2_1332_, lean_object* v_x_1333_, lean_object* v_x_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0(v_00_u03b2_1332_, v_x_1333_, v_x_1334_);
lean_dec_ref(v_x_1334_);
lean_dec_ref(v_x_1333_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1336_, lean_object* v_x_1337_, size_t v_x_1338_, lean_object* v_x_1339_){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg(v_x_1337_, v_x_1338_, v_x_1339_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1341_, lean_object* v_x_1342_, lean_object* v_x_1343_, lean_object* v_x_1344_){
_start:
{
size_t v_x_1026__boxed_1345_; lean_object* v_res_1346_; 
v_x_1026__boxed_1345_ = lean_unbox_usize(v_x_1343_);
lean_dec(v_x_1343_);
v_res_1346_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0(v_00_u03b2_1341_, v_x_1342_, v_x_1026__boxed_1345_, v_x_1344_);
lean_dec_ref(v_x_1344_);
lean_dec_ref(v_x_1342_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1347_, lean_object* v_keys_1348_, lean_object* v_vals_1349_, lean_object* v_heq_1350_, lean_object* v_i_1351_, lean_object* v_k_1352_){
_start:
{
lean_object* v___x_1353_; 
v___x_1353_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1348_, v_vals_1349_, v_i_1351_, v_k_1352_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1354_, lean_object* v_keys_1355_, lean_object* v_vals_1356_, lean_object* v_heq_1357_, lean_object* v_i_1358_, lean_object* v_k_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1(v_00_u03b2_1354_, v_keys_1355_, v_vals_1356_, v_heq_1357_, v_i_1358_, v_k_1359_);
lean_dec_ref(v_k_1359_);
lean_dec_ref(v_vals_1356_);
lean_dec_ref(v_keys_1355_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_1361_, lean_object* v_x_1362_, lean_object* v_x_1363_, lean_object* v_x_1364_){
_start:
{
lean_object* v_ks_1365_; lean_object* v_vs_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1392_; 
v_ks_1365_ = lean_ctor_get(v_x_1361_, 0);
v_vs_1366_ = lean_ctor_get(v_x_1361_, 1);
v_isSharedCheck_1392_ = !lean_is_exclusive(v_x_1361_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1368_ = v_x_1361_;
v_isShared_1369_ = v_isSharedCheck_1392_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_vs_1366_);
lean_inc(v_ks_1365_);
lean_dec(v_x_1361_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1392_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1370_; uint8_t v___x_1371_; 
v___x_1370_ = lean_array_get_size(v_ks_1365_);
v___x_1371_ = lean_nat_dec_lt(v_x_1362_, v___x_1370_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1375_; 
lean_dec(v_x_1362_);
v___x_1372_ = lean_array_push(v_ks_1365_, v_x_1363_);
v___x_1373_ = lean_array_push(v_vs_1366_, v_x_1364_);
if (v_isShared_1369_ == 0)
{
lean_ctor_set(v___x_1368_, 1, v___x_1373_);
lean_ctor_set(v___x_1368_, 0, v___x_1372_);
v___x_1375_ = v___x_1368_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v___x_1372_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v___x_1373_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
return v___x_1375_;
}
}
else
{
lean_object* v_k_x27_1377_; size_t v___x_1378_; size_t v___x_1379_; uint8_t v___x_1380_; 
v_k_x27_1377_ = lean_array_fget_borrowed(v_ks_1365_, v_x_1362_);
v___x_1378_ = lean_ptr_addr(v_x_1363_);
v___x_1379_ = lean_ptr_addr(v_k_x27_1377_);
v___x_1380_ = lean_usize_dec_eq(v___x_1378_, v___x_1379_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1382_; 
if (v_isShared_1369_ == 0)
{
v___x_1382_ = v___x_1368_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_ks_1365_);
lean_ctor_set(v_reuseFailAlloc_1386_, 1, v_vs_1366_);
v___x_1382_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1383_ = lean_unsigned_to_nat(1u);
v___x_1384_ = lean_nat_add(v_x_1362_, v___x_1383_);
lean_dec(v_x_1362_);
v_x_1361_ = v___x_1382_;
v_x_1362_ = v___x_1384_;
goto _start;
}
}
else
{
lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1390_; 
v___x_1387_ = lean_array_fset(v_ks_1365_, v_x_1362_, v_x_1363_);
v___x_1388_ = lean_array_fset(v_vs_1366_, v_x_1362_, v_x_1364_);
lean_dec(v_x_1362_);
if (v_isShared_1369_ == 0)
{
lean_ctor_set(v___x_1368_, 1, v___x_1388_);
lean_ctor_set(v___x_1368_, 0, v___x_1387_);
v___x_1390_ = v___x_1368_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v___x_1387_);
lean_ctor_set(v_reuseFailAlloc_1391_, 1, v___x_1388_);
v___x_1390_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
return v___x_1390_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1___redArg(lean_object* v_n_1393_, lean_object* v_k_1394_, lean_object* v_v_1395_){
_start:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1396_ = lean_unsigned_to_nat(0u);
v___x_1397_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1_spec__2___redArg(v_n_1393_, v___x_1396_, v_k_1394_, v_v_1395_);
return v___x_1397_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1398_; 
v___x_1398_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg(lean_object* v_x_1399_, size_t v_x_1400_, size_t v_x_1401_, lean_object* v_x_1402_, lean_object* v_x_1403_){
_start:
{
if (lean_obj_tag(v_x_1399_) == 0)
{
lean_object* v_es_1404_; size_t v___x_1405_; size_t v___x_1406_; lean_object* v_j_1407_; lean_object* v___x_1408_; uint8_t v___x_1409_; 
v_es_1404_ = lean_ctor_get(v_x_1399_, 0);
v___x_1405_ = ((size_t)31ULL);
v___x_1406_ = lean_usize_land(v_x_1400_, v___x_1405_);
v_j_1407_ = lean_usize_to_nat(v___x_1406_);
v___x_1408_ = lean_array_get_size(v_es_1404_);
v___x_1409_ = lean_nat_dec_lt(v_j_1407_, v___x_1408_);
if (v___x_1409_ == 0)
{
lean_dec(v_j_1407_);
lean_dec(v_x_1403_);
lean_dec_ref(v_x_1402_);
return v_x_1399_;
}
else
{
lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1450_; 
lean_inc_ref(v_es_1404_);
v_isSharedCheck_1450_ = !lean_is_exclusive(v_x_1399_);
if (v_isSharedCheck_1450_ == 0)
{
lean_object* v_unused_1451_; 
v_unused_1451_ = lean_ctor_get(v_x_1399_, 0);
lean_dec(v_unused_1451_);
v___x_1411_ = v_x_1399_;
v_isShared_1412_ = v_isSharedCheck_1450_;
goto v_resetjp_1410_;
}
else
{
lean_dec(v_x_1399_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1450_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v_v_1413_; lean_object* v___x_1414_; lean_object* v_xs_x27_1415_; lean_object* v___y_1417_; 
v_v_1413_ = lean_array_fget(v_es_1404_, v_j_1407_);
v___x_1414_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0);
v_xs_x27_1415_ = lean_array_fset(v_es_1404_, v_j_1407_, v___x_1414_);
switch(lean_obj_tag(v_v_1413_))
{
case 0:
{
lean_object* v_key_1422_; lean_object* v_val_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1435_; 
v_key_1422_ = lean_ctor_get(v_v_1413_, 0);
v_val_1423_ = lean_ctor_get(v_v_1413_, 1);
v_isSharedCheck_1435_ = !lean_is_exclusive(v_v_1413_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1425_ = v_v_1413_;
v_isShared_1426_ = v_isSharedCheck_1435_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_val_1423_);
lean_inc(v_key_1422_);
lean_dec(v_v_1413_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1435_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
size_t v___x_1427_; size_t v___x_1428_; uint8_t v___x_1429_; 
v___x_1427_ = lean_ptr_addr(v_x_1402_);
v___x_1428_ = lean_ptr_addr(v_key_1422_);
v___x_1429_ = lean_usize_dec_eq(v___x_1427_, v___x_1428_);
if (v___x_1429_ == 0)
{
lean_object* v___x_1430_; lean_object* v___x_1431_; 
lean_del_object(v___x_1425_);
v___x_1430_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1422_, v_val_1423_, v_x_1402_, v_x_1403_);
v___x_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
v___y_1417_ = v___x_1431_;
goto v___jp_1416_;
}
else
{
lean_object* v___x_1433_; 
lean_dec(v_val_1423_);
lean_dec(v_key_1422_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 1, v_x_1403_);
lean_ctor_set(v___x_1425_, 0, v_x_1402_);
v___x_1433_ = v___x_1425_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_x_1402_);
lean_ctor_set(v_reuseFailAlloc_1434_, 1, v_x_1403_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
v___y_1417_ = v___x_1433_;
goto v___jp_1416_;
}
}
}
}
case 1:
{
lean_object* v_node_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1448_; 
v_node_1436_ = lean_ctor_get(v_v_1413_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v_v_1413_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1438_ = v_v_1413_;
v_isShared_1439_ = v_isSharedCheck_1448_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_node_1436_);
lean_dec(v_v_1413_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1448_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
size_t v___x_1440_; size_t v___x_1441_; size_t v___x_1442_; size_t v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1446_; 
v___x_1440_ = ((size_t)5ULL);
v___x_1441_ = lean_usize_shift_right(v_x_1400_, v___x_1440_);
v___x_1442_ = ((size_t)1ULL);
v___x_1443_ = lean_usize_add(v_x_1401_, v___x_1442_);
v___x_1444_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg(v_node_1436_, v___x_1441_, v___x_1443_, v_x_1402_, v_x_1403_);
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 0, v___x_1444_);
v___x_1446_ = v___x_1438_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v___x_1444_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
v___y_1417_ = v___x_1446_;
goto v___jp_1416_;
}
}
}
default: 
{
lean_object* v___x_1449_; 
v___x_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1449_, 0, v_x_1402_);
lean_ctor_set(v___x_1449_, 1, v_x_1403_);
v___y_1417_ = v___x_1449_;
goto v___jp_1416_;
}
}
v___jp_1416_:
{
lean_object* v___x_1418_; lean_object* v___x_1420_; 
v___x_1418_ = lean_array_fset(v_xs_x27_1415_, v_j_1407_, v___y_1417_);
lean_dec(v_j_1407_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 0, v___x_1418_);
v___x_1420_ = v___x_1411_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
}
else
{
lean_object* v_ks_1452_; lean_object* v_vs_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1471_; 
v_ks_1452_ = lean_ctor_get(v_x_1399_, 0);
v_vs_1453_ = lean_ctor_get(v_x_1399_, 1);
v_isSharedCheck_1471_ = !lean_is_exclusive(v_x_1399_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1455_ = v_x_1399_;
v_isShared_1456_ = v_isSharedCheck_1471_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_vs_1453_);
lean_inc(v_ks_1452_);
lean_dec(v_x_1399_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1471_;
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
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v_ks_1452_);
lean_ctor_set(v_reuseFailAlloc_1470_, 1, v_vs_1453_);
v___x_1458_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
lean_object* v_newNode_1459_; size_t v___x_1460_; uint8_t v___x_1461_; 
v_newNode_1459_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1___redArg(v___x_1458_, v_x_1402_, v_x_1403_);
v___x_1460_ = ((size_t)7ULL);
v___x_1461_ = lean_usize_dec_le(v___x_1460_, v_x_1401_);
if (v___x_1461_ == 0)
{
lean_object* v___x_1462_; lean_object* v___x_1463_; uint8_t v___x_1464_; 
v___x_1462_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1459_);
v___x_1463_ = lean_unsigned_to_nat(4u);
v___x_1464_ = lean_nat_dec_lt(v___x_1462_, v___x_1463_);
lean_dec(v___x_1462_);
if (v___x_1464_ == 0)
{
lean_object* v_ks_1465_; lean_object* v_vs_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v_ks_1465_ = lean_ctor_get(v_newNode_1459_, 0);
lean_inc_ref(v_ks_1465_);
v_vs_1466_ = lean_ctor_get(v_newNode_1459_, 1);
lean_inc_ref(v_vs_1466_);
lean_dec_ref(v_newNode_1459_);
v___x_1467_ = lean_unsigned_to_nat(0u);
v___x_1468_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___closed__0);
v___x_1469_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___redArg(v_x_1401_, v_ks_1465_, v_vs_1466_, v___x_1467_, v___x_1468_);
lean_dec_ref(v_vs_1466_);
lean_dec_ref(v_ks_1465_);
return v___x_1469_;
}
else
{
return v_newNode_1459_;
}
}
else
{
return v_newNode_1459_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___redArg(size_t v_depth_1472_, lean_object* v_keys_1473_, lean_object* v_vals_1474_, lean_object* v_i_1475_, lean_object* v_entries_1476_){
_start:
{
lean_object* v___x_1477_; uint8_t v___x_1478_; 
v___x_1477_ = lean_array_get_size(v_keys_1473_);
v___x_1478_ = lean_nat_dec_lt(v_i_1475_, v___x_1477_);
if (v___x_1478_ == 0)
{
lean_dec(v_i_1475_);
return v_entries_1476_;
}
else
{
lean_object* v_k_1479_; lean_object* v_v_1480_; size_t v___x_1481_; size_t v___x_1482_; size_t v___x_1483_; uint64_t v___x_1484_; size_t v_h_1485_; size_t v___x_1486_; lean_object* v___x_1487_; size_t v___x_1488_; size_t v___x_1489_; size_t v___x_1490_; size_t v_h_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v_k_1479_ = lean_array_fget_borrowed(v_keys_1473_, v_i_1475_);
v_v_1480_ = lean_array_fget_borrowed(v_vals_1474_, v_i_1475_);
v___x_1481_ = lean_ptr_addr(v_k_1479_);
v___x_1482_ = ((size_t)3ULL);
v___x_1483_ = lean_usize_shift_right(v___x_1481_, v___x_1482_);
v___x_1484_ = lean_usize_to_uint64(v___x_1483_);
v_h_1485_ = lean_uint64_to_usize(v___x_1484_);
v___x_1486_ = ((size_t)5ULL);
v___x_1487_ = lean_unsigned_to_nat(1u);
v___x_1488_ = ((size_t)1ULL);
v___x_1489_ = lean_usize_sub(v_depth_1472_, v___x_1488_);
v___x_1490_ = lean_usize_mul(v___x_1486_, v___x_1489_);
v_h_1491_ = lean_usize_shift_right(v_h_1485_, v___x_1490_);
v___x_1492_ = lean_nat_add(v_i_1475_, v___x_1487_);
lean_dec(v_i_1475_);
lean_inc(v_v_1480_);
lean_inc(v_k_1479_);
v___x_1493_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg(v_entries_1476_, v_h_1491_, v_depth_1472_, v_k_1479_, v_v_1480_);
v_i_1475_ = v___x_1492_;
v_entries_1476_ = v___x_1493_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_1495_, lean_object* v_keys_1496_, lean_object* v_vals_1497_, lean_object* v_i_1498_, lean_object* v_entries_1499_){
_start:
{
size_t v_depth_boxed_1500_; lean_object* v_res_1501_; 
v_depth_boxed_1500_ = lean_unbox_usize(v_depth_1495_);
lean_dec(v_depth_1495_);
v_res_1501_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___redArg(v_depth_boxed_1500_, v_keys_1496_, v_vals_1497_, v_i_1498_, v_entries_1499_);
lean_dec_ref(v_vals_1497_);
lean_dec_ref(v_keys_1496_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___boxed(lean_object* v_x_1502_, lean_object* v_x_1503_, lean_object* v_x_1504_, lean_object* v_x_1505_, lean_object* v_x_1506_){
_start:
{
size_t v_x_6678__boxed_1507_; size_t v_x_6679__boxed_1508_; lean_object* v_res_1509_; 
v_x_6678__boxed_1507_ = lean_unbox_usize(v_x_1503_);
lean_dec(v_x_1503_);
v_x_6679__boxed_1508_ = lean_unbox_usize(v_x_1504_);
lean_dec(v_x_1504_);
v_res_1509_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg(v_x_1502_, v_x_6678__boxed_1507_, v_x_6679__boxed_1508_, v_x_1505_, v_x_1506_);
return v_res_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0___redArg(lean_object* v_x_1510_, lean_object* v_x_1511_, lean_object* v_x_1512_){
_start:
{
size_t v___x_1513_; size_t v___x_1514_; size_t v___x_1515_; uint64_t v___x_1516_; size_t v___x_1517_; size_t v___x_1518_; lean_object* v___x_1519_; 
v___x_1513_ = lean_ptr_addr(v_x_1511_);
v___x_1514_ = ((size_t)3ULL);
v___x_1515_ = lean_usize_shift_right(v___x_1513_, v___x_1514_);
v___x_1516_ = lean_usize_to_uint64(v___x_1515_);
v___x_1517_ = lean_uint64_to_usize(v___x_1516_);
v___x_1518_ = ((size_t)1ULL);
v___x_1519_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg(v_x_1510_, v___x_1517_, v___x_1518_, v_x_1511_, v_x_1512_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___lam__0(lean_object* v_e_1520_, lean_object* v_a_1521_, lean_object* v_s_1522_){
_start:
{
lean_object* v_rings_1523_; lean_object* v_typeIdOf_1524_; lean_object* v_exprToRingId_1525_; lean_object* v_semirings_1526_; lean_object* v_stypeIdOf_1527_; lean_object* v_exprToSemiringId_1528_; lean_object* v_ncRings_1529_; lean_object* v_exprToNCRingId_1530_; lean_object* v_nctypeIdOf_1531_; lean_object* v_ncSemirings_1532_; lean_object* v_exprToNCSemiringId_1533_; lean_object* v_ncstypeIdOf_1534_; lean_object* v_steps_1535_; uint8_t v_reportedMaxDegreeIssue_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1544_; 
v_rings_1523_ = lean_ctor_get(v_s_1522_, 0);
v_typeIdOf_1524_ = lean_ctor_get(v_s_1522_, 1);
v_exprToRingId_1525_ = lean_ctor_get(v_s_1522_, 2);
v_semirings_1526_ = lean_ctor_get(v_s_1522_, 3);
v_stypeIdOf_1527_ = lean_ctor_get(v_s_1522_, 4);
v_exprToSemiringId_1528_ = lean_ctor_get(v_s_1522_, 5);
v_ncRings_1529_ = lean_ctor_get(v_s_1522_, 6);
v_exprToNCRingId_1530_ = lean_ctor_get(v_s_1522_, 7);
v_nctypeIdOf_1531_ = lean_ctor_get(v_s_1522_, 8);
v_ncSemirings_1532_ = lean_ctor_get(v_s_1522_, 9);
v_exprToNCSemiringId_1533_ = lean_ctor_get(v_s_1522_, 10);
v_ncstypeIdOf_1534_ = lean_ctor_get(v_s_1522_, 11);
v_steps_1535_ = lean_ctor_get(v_s_1522_, 12);
v_reportedMaxDegreeIssue_1536_ = lean_ctor_get_uint8(v_s_1522_, sizeof(void*)*13);
v_isSharedCheck_1544_ = !lean_is_exclusive(v_s_1522_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1538_ = v_s_1522_;
v_isShared_1539_ = v_isSharedCheck_1544_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_steps_1535_);
lean_inc(v_ncstypeIdOf_1534_);
lean_inc(v_exprToNCSemiringId_1533_);
lean_inc(v_ncSemirings_1532_);
lean_inc(v_nctypeIdOf_1531_);
lean_inc(v_exprToNCRingId_1530_);
lean_inc(v_ncRings_1529_);
lean_inc(v_exprToSemiringId_1528_);
lean_inc(v_stypeIdOf_1527_);
lean_inc(v_semirings_1526_);
lean_inc(v_exprToRingId_1525_);
lean_inc(v_typeIdOf_1524_);
lean_inc(v_rings_1523_);
lean_dec(v_s_1522_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1544_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v___x_1540_; lean_object* v___x_1542_; 
lean_inc(v_a_1521_);
v___x_1540_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0___redArg(v_exprToSemiringId_1528_, v_e_1520_, v_a_1521_);
if (v_isShared_1539_ == 0)
{
lean_ctor_set(v___x_1538_, 5, v___x_1540_);
v___x_1542_ = v___x_1538_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_rings_1523_);
lean_ctor_set(v_reuseFailAlloc_1543_, 1, v_typeIdOf_1524_);
lean_ctor_set(v_reuseFailAlloc_1543_, 2, v_exprToRingId_1525_);
lean_ctor_set(v_reuseFailAlloc_1543_, 3, v_semirings_1526_);
lean_ctor_set(v_reuseFailAlloc_1543_, 4, v_stypeIdOf_1527_);
lean_ctor_set(v_reuseFailAlloc_1543_, 5, v___x_1540_);
lean_ctor_set(v_reuseFailAlloc_1543_, 6, v_ncRings_1529_);
lean_ctor_set(v_reuseFailAlloc_1543_, 7, v_exprToNCRingId_1530_);
lean_ctor_set(v_reuseFailAlloc_1543_, 8, v_nctypeIdOf_1531_);
lean_ctor_set(v_reuseFailAlloc_1543_, 9, v_ncSemirings_1532_);
lean_ctor_set(v_reuseFailAlloc_1543_, 10, v_exprToNCSemiringId_1533_);
lean_ctor_set(v_reuseFailAlloc_1543_, 11, v_ncstypeIdOf_1534_);
lean_ctor_set(v_reuseFailAlloc_1543_, 12, v_steps_1535_);
lean_ctor_set_uint8(v_reuseFailAlloc_1543_, sizeof(void*)*13, v_reportedMaxDegreeIssue_1536_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___lam__0___boxed(lean_object* v_e_1545_, lean_object* v_a_1546_, lean_object* v_s_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___lam__0(v_e_1545_, v_a_1546_, v_s_1547_);
lean_dec(v_a_1546_);
return v_res_1548_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__1(void){
_start:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1550_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__0));
v___x_1551_ = l_Lean_stringToMessageData(v___x_1550_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(lean_object* v_e_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_){
_start:
{
lean_object* v___f_1565_; lean_object* v___x_1566_; 
lean_inc(v_a_1553_);
lean_inc_ref(v_e_1552_);
v___f_1565_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1565_, 0, v_e_1552_);
lean_closure_set(v___f_1565_, 1, v_a_1553_);
v___x_1566_ = l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___redArg(v_e_1552_, v_a_1554_, v_a_1559_);
if (lean_obj_tag(v___x_1566_) == 0)
{
lean_object* v_a_1567_; 
v_a_1567_ = lean_ctor_get(v___x_1566_, 0);
lean_inc(v_a_1567_);
lean_dec_ref_known(v___x_1566_, 1);
if (lean_obj_tag(v_a_1567_) == 1)
{
lean_object* v_val_1568_; uint8_t v___x_1569_; 
lean_dec_ref(v___f_1565_);
v_val_1568_ = lean_ctor_get(v_a_1567_, 0);
lean_inc(v_val_1568_);
lean_dec_ref_known(v_a_1567_, 1);
v___x_1569_ = lean_nat_dec_eq(v_val_1568_, v_a_1553_);
lean_dec(v_val_1568_);
if (v___x_1569_ == 0)
{
lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1570_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__1);
v___x_1571_ = l_Lean_indentExpr(v_e_1552_);
v___x_1572_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1570_);
lean_ctor_set(v___x_1572_, 1, v___x_1571_);
v___x_1573_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1555_);
if (lean_obj_tag(v___x_1573_) == 0)
{
lean_object* v_a_1574_; uint8_t v_verbose_1575_; 
v_a_1574_ = lean_ctor_get(v___x_1573_, 0);
lean_inc(v_a_1574_);
lean_dec_ref_known(v___x_1573_, 1);
v_verbose_1575_ = lean_ctor_get_uint8(v_a_1574_, 0);
lean_dec(v_a_1574_);
if (v_verbose_1575_ == 0)
{
lean_dec_ref_known(v___x_1572_, 2);
goto v___jp_1562_;
}
else
{
lean_object* v___x_1576_; 
v___x_1576_ = l_Lean_Meta_Sym_reportIssue(v___x_1572_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_dec_ref_known(v___x_1576_, 1);
goto v___jp_1562_;
}
else
{
return v___x_1576_;
}
}
}
else
{
lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1584_; 
lean_dec_ref_known(v___x_1572_, 2);
v_a_1577_ = lean_ctor_get(v___x_1573_, 0);
v_isSharedCheck_1584_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1584_ == 0)
{
v___x_1579_ = v___x_1573_;
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_dec(v___x_1573_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1582_; 
if (v_isShared_1580_ == 0)
{
v___x_1582_ = v___x_1579_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v_a_1577_);
v___x_1582_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
return v___x_1582_;
}
}
}
}
else
{
lean_dec_ref(v_e_1552_);
goto v___jp_1562_;
}
}
else
{
lean_object* v___x_1585_; lean_object* v___x_1586_; 
lean_dec(v_a_1567_);
lean_dec_ref(v_e_1552_);
v___x_1585_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_1586_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1585_, v___f_1565_, v_a_1554_);
return v___x_1586_;
}
}
else
{
lean_object* v_a_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1594_; 
lean_dec_ref(v___f_1565_);
lean_dec_ref(v_e_1552_);
v_a_1587_ = lean_ctor_get(v___x_1566_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1566_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1589_ = v___x_1566_;
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_a_1587_);
lean_dec(v___x_1566_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1592_; 
if (v_isShared_1590_ == 0)
{
v___x_1592_ = v___x_1589_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_a_1587_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
return v___x_1592_;
}
}
}
v___jp_1562_:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1563_ = lean_box(0);
v___x_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1563_);
return v___x_1564_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___boxed(lean_object* v_e_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_){
_start:
{
lean_object* v_res_1605_; 
v_res_1605_ = l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(v_e_1595_, v_a_1596_, v_a_1597_, v_a_1598_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_, v_a_1603_);
lean_dec(v_a_1603_);
lean_dec_ref(v_a_1602_);
lean_dec(v_a_1601_);
lean_dec_ref(v_a_1600_);
lean_dec(v_a_1599_);
lean_dec_ref(v_a_1598_);
lean_dec(v_a_1597_);
lean_dec(v_a_1596_);
return v_res_1605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId(lean_object* v_e_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_){
_start:
{
lean_object* v___x_1619_; 
v___x_1619_ = l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(v_e_1606_, v_a_1607_, v_a_1608_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___boxed(lean_object* v_e_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId(v_e_1620_, v_a_1621_, v_a_1622_, v_a_1623_, v_a_1624_, v_a_1625_, v_a_1626_, v_a_1627_, v_a_1628_, v_a_1629_, v_a_1630_, v_a_1631_);
lean_dec(v_a_1631_);
lean_dec_ref(v_a_1630_);
lean_dec(v_a_1629_);
lean_dec_ref(v_a_1628_);
lean_dec(v_a_1627_);
lean_dec_ref(v_a_1626_);
lean_dec(v_a_1625_);
lean_dec_ref(v_a_1624_);
lean_dec(v_a_1623_);
lean_dec(v_a_1622_);
lean_dec(v_a_1621_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0(lean_object* v_00_u03b2_1634_, lean_object* v_x_1635_, lean_object* v_x_1636_, lean_object* v_x_1637_){
_start:
{
lean_object* v___x_1638_; 
v___x_1638_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0___redArg(v_x_1635_, v_x_1636_, v_x_1637_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0(lean_object* v_00_u03b2_1639_, lean_object* v_x_1640_, size_t v_x_1641_, size_t v_x_1642_, lean_object* v_x_1643_, lean_object* v_x_1644_){
_start:
{
lean_object* v___x_1645_; 
v___x_1645_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg(v_x_1640_, v_x_1641_, v_x_1642_, v_x_1643_, v_x_1644_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1646_, lean_object* v_x_1647_, lean_object* v_x_1648_, lean_object* v_x_1649_, lean_object* v_x_1650_, lean_object* v_x_1651_){
_start:
{
size_t v_x_6964__boxed_1652_; size_t v_x_6965__boxed_1653_; lean_object* v_res_1654_; 
v_x_6964__boxed_1652_ = lean_unbox_usize(v_x_1648_);
lean_dec(v_x_1648_);
v_x_6965__boxed_1653_ = lean_unbox_usize(v_x_1649_);
lean_dec(v_x_1649_);
v_res_1654_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0(v_00_u03b2_1646_, v_x_1647_, v_x_6964__boxed_1652_, v_x_6965__boxed_1653_, v_x_1650_, v_x_1651_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1655_, lean_object* v_n_1656_, lean_object* v_k_1657_, lean_object* v_v_1658_){
_start:
{
lean_object* v___x_1659_; 
v___x_1659_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1___redArg(v_n_1656_, v_k_1657_, v_v_1658_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1660_, size_t v_depth_1661_, lean_object* v_keys_1662_, lean_object* v_vals_1663_, lean_object* v_heq_1664_, lean_object* v_i_1665_, lean_object* v_entries_1666_){
_start:
{
lean_object* v___x_1667_; 
v___x_1667_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___redArg(v_depth_1661_, v_keys_1662_, v_vals_1663_, v_i_1665_, v_entries_1666_);
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1668_, lean_object* v_depth_1669_, lean_object* v_keys_1670_, lean_object* v_vals_1671_, lean_object* v_heq_1672_, lean_object* v_i_1673_, lean_object* v_entries_1674_){
_start:
{
size_t v_depth_boxed_1675_; lean_object* v_res_1676_; 
v_depth_boxed_1675_ = lean_unbox_usize(v_depth_1669_);
lean_dec(v_depth_1669_);
v_res_1676_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2(v_00_u03b2_1668_, v_depth_boxed_1675_, v_keys_1670_, v_vals_1671_, v_heq_1672_, v_i_1673_, v_entries_1674_);
lean_dec_ref(v_vals_1671_);
lean_dec_ref(v_keys_1670_);
return v_res_1676_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1677_, lean_object* v_x_1678_, lean_object* v_x_1679_, lean_object* v_x_1680_, lean_object* v_x_1681_){
_start:
{
lean_object* v___x_1682_; 
v___x_1682_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1_spec__2___redArg(v_x_1678_, v_x_1679_, v_x_1680_, v_x_1681_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___lam__0(lean_object* v_e_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
lean_object* v___x_1696_; 
v___x_1696_ = l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(v_e_1683_, v___y_1684_, v___y_1685_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___lam__0___boxed(lean_object* v_e_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_){
_start:
{
lean_object* v_res_1710_; 
v_res_1710_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___lam__0(v_e_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_);
lean_dec(v___y_1708_);
lean_dec_ref(v___y_1707_);
lean_dec(v___y_1706_);
lean_dec_ref(v___y_1705_);
lean_dec(v___y_1704_);
lean_dec_ref(v___y_1703_);
lean_dec(v___y_1702_);
lean_dec_ref(v___y_1701_);
lean_dec(v___y_1700_);
lean_dec(v___y_1699_);
lean_dec(v___y_1698_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__0(lean_object* v_e_1713_, lean_object* v___f_1714_, lean_object* v___f_1715_, lean_object* v_size_1716_, lean_object* v_s_1717_){
_start:
{
lean_object* v_id_1718_; lean_object* v_type_1719_; lean_object* v_u_1720_; lean_object* v_semiringInst_1721_; lean_object* v_addFn_x3f_1722_; lean_object* v_mulFn_x3f_1723_; lean_object* v_powFn_x3f_1724_; lean_object* v_natCastFn_x3f_1725_; lean_object* v_denote_1726_; lean_object* v_vars_1727_; lean_object* v_varMap_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1737_; 
v_id_1718_ = lean_ctor_get(v_s_1717_, 0);
v_type_1719_ = lean_ctor_get(v_s_1717_, 1);
v_u_1720_ = lean_ctor_get(v_s_1717_, 2);
v_semiringInst_1721_ = lean_ctor_get(v_s_1717_, 3);
v_addFn_x3f_1722_ = lean_ctor_get(v_s_1717_, 4);
v_mulFn_x3f_1723_ = lean_ctor_get(v_s_1717_, 5);
v_powFn_x3f_1724_ = lean_ctor_get(v_s_1717_, 6);
v_natCastFn_x3f_1725_ = lean_ctor_get(v_s_1717_, 7);
v_denote_1726_ = lean_ctor_get(v_s_1717_, 8);
v_vars_1727_ = lean_ctor_get(v_s_1717_, 9);
v_varMap_1728_ = lean_ctor_get(v_s_1717_, 10);
v_isSharedCheck_1737_ = !lean_is_exclusive(v_s_1717_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1730_ = v_s_1717_;
v_isShared_1731_ = v_isSharedCheck_1737_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_varMap_1728_);
lean_inc(v_vars_1727_);
lean_inc(v_denote_1726_);
lean_inc(v_natCastFn_x3f_1725_);
lean_inc(v_powFn_x3f_1724_);
lean_inc(v_mulFn_x3f_1723_);
lean_inc(v_addFn_x3f_1722_);
lean_inc(v_semiringInst_1721_);
lean_inc(v_u_1720_);
lean_inc(v_type_1719_);
lean_inc(v_id_1718_);
lean_dec(v_s_1717_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1737_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1735_; 
lean_inc_ref(v_e_1713_);
v___x_1732_ = l_Lean_PersistentArray_push___redArg(v_vars_1727_, v_e_1713_);
v___x_1733_ = l_Lean_PersistentHashMap_insert___redArg(v___f_1714_, v___f_1715_, v_varMap_1728_, v_e_1713_, v_size_1716_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 10, v___x_1733_);
lean_ctor_set(v___x_1730_, 9, v___x_1732_);
v___x_1735_ = v___x_1730_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_id_1718_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_type_1719_);
lean_ctor_set(v_reuseFailAlloc_1736_, 2, v_u_1720_);
lean_ctor_set(v_reuseFailAlloc_1736_, 3, v_semiringInst_1721_);
lean_ctor_set(v_reuseFailAlloc_1736_, 4, v_addFn_x3f_1722_);
lean_ctor_set(v_reuseFailAlloc_1736_, 5, v_mulFn_x3f_1723_);
lean_ctor_set(v_reuseFailAlloc_1736_, 6, v_powFn_x3f_1724_);
lean_ctor_set(v_reuseFailAlloc_1736_, 7, v_natCastFn_x3f_1725_);
lean_ctor_set(v_reuseFailAlloc_1736_, 8, v_denote_1726_);
lean_ctor_set(v_reuseFailAlloc_1736_, 9, v___x_1732_);
lean_ctor_set(v_reuseFailAlloc_1736_, 10, v___x_1733_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__1(lean_object* v_toPure_1738_, lean_object* v_size_1739_, lean_object* v_____r_1740_){
_start:
{
lean_object* v___x_1741_; 
v___x_1741_ = lean_apply_2(v_toPure_1738_, lean_box(0), v_size_1739_);
return v___x_1741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__2(lean_object* v_e_1742_, lean_object* v_inst_1743_, lean_object* v_toBind_1744_, lean_object* v___f_1745_, lean_object* v_____r_1746_){
_start:
{
lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; 
v___x_1747_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_1748_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_SolverExtension_markTerm___boxed), 14, 3);
lean_closure_set(v___x_1748_, 0, lean_box(0));
lean_closure_set(v___x_1748_, 1, v___x_1747_);
lean_closure_set(v___x_1748_, 2, v_e_1742_);
v___x_1749_ = lean_apply_2(v_inst_1743_, lean_box(0), v___x_1748_);
v___x_1750_ = lean_apply_4(v_toBind_1744_, lean_box(0), lean_box(0), v___x_1749_, v___f_1745_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__3(lean_object* v_inst_1751_, lean_object* v_e_1752_, lean_object* v_toBind_1753_, lean_object* v___f_1754_, lean_object* v_____r_1755_){
_start:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1756_ = lean_apply_1(v_inst_1751_, v_e_1752_);
v___x_1757_ = lean_apply_4(v_toBind_1753_, lean_box(0), lean_box(0), v___x_1756_, v___f_1754_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__4(lean_object* v___f_1758_, lean_object* v___f_1759_, lean_object* v_e_1760_, lean_object* v_toPure_1761_, lean_object* v_inst_1762_, lean_object* v_toBind_1763_, lean_object* v_inst_1764_, lean_object* v_modifySemiring_1765_, lean_object* v_s_1766_){
_start:
{
lean_object* v_vars_1767_; lean_object* v_varMap_1768_; lean_object* v___x_1769_; 
v_vars_1767_ = lean_ctor_get(v_s_1766_, 9);
lean_inc_ref(v_vars_1767_);
v_varMap_1768_ = lean_ctor_get(v_s_1766_, 10);
lean_inc_ref(v_varMap_1768_);
lean_dec_ref(v_s_1766_);
lean_inc_ref(v_e_1760_);
lean_inc_ref(v___f_1759_);
lean_inc_ref(v___f_1758_);
v___x_1769_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___f_1758_, v___f_1759_, v_varMap_1768_, v_e_1760_);
lean_dec_ref(v_varMap_1768_);
if (lean_obj_tag(v___x_1769_) == 1)
{
lean_object* v_val_1770_; lean_object* v___x_1771_; 
lean_dec_ref(v_vars_1767_);
lean_dec(v_modifySemiring_1765_);
lean_dec(v_inst_1764_);
lean_dec(v_toBind_1763_);
lean_dec(v_inst_1762_);
lean_dec_ref(v_e_1760_);
lean_dec_ref(v___f_1759_);
lean_dec_ref(v___f_1758_);
v_val_1770_ = lean_ctor_get(v___x_1769_, 0);
lean_inc(v_val_1770_);
lean_dec_ref_known(v___x_1769_, 1);
v___x_1771_ = lean_apply_2(v_toPure_1761_, lean_box(0), v_val_1770_);
return v___x_1771_;
}
else
{
lean_object* v_size_1772_; lean_object* v___f_1773_; lean_object* v___f_1774_; lean_object* v___f_1775_; lean_object* v___f_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; 
lean_dec(v___x_1769_);
v_size_1772_ = lean_ctor_get(v_vars_1767_, 2);
lean_inc_n(v_size_1772_, 2);
lean_dec_ref(v_vars_1767_);
lean_inc_ref_n(v_e_1760_, 2);
v___f_1773_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1773_, 0, v_e_1760_);
lean_closure_set(v___f_1773_, 1, v___f_1758_);
lean_closure_set(v___f_1773_, 2, v___f_1759_);
lean_closure_set(v___f_1773_, 3, v_size_1772_);
v___f_1774_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1774_, 0, v_toPure_1761_);
lean_closure_set(v___f_1774_, 1, v_size_1772_);
lean_inc_n(v_toBind_1763_, 2);
v___f_1775_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__2), 5, 4);
lean_closure_set(v___f_1775_, 0, v_e_1760_);
lean_closure_set(v___f_1775_, 1, v_inst_1762_);
lean_closure_set(v___f_1775_, 2, v_toBind_1763_);
lean_closure_set(v___f_1775_, 3, v___f_1774_);
v___f_1776_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__3), 5, 4);
lean_closure_set(v___f_1776_, 0, v_inst_1764_);
lean_closure_set(v___f_1776_, 1, v_e_1760_);
lean_closure_set(v___f_1776_, 2, v_toBind_1763_);
lean_closure_set(v___f_1776_, 3, v___f_1775_);
v___x_1777_ = lean_apply_1(v_modifySemiring_1765_, v___f_1773_);
v___x_1778_ = lean_apply_4(v_toBind_1763_, lean_box(0), lean_box(0), v___x_1777_, v___f_1776_);
return v___x_1778_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg(lean_object* v_inst_1781_, lean_object* v_inst_1782_, lean_object* v_inst_1783_, lean_object* v_inst_1784_, lean_object* v_e_1785_){
_start:
{
lean_object* v_toApplicative_1786_; lean_object* v_toBind_1787_; lean_object* v_getSemiring_1788_; lean_object* v_modifySemiring_1789_; lean_object* v_toPure_1790_; lean_object* v___f_1791_; lean_object* v___f_1792_; lean_object* v___f_1793_; lean_object* v___x_1794_; 
v_toApplicative_1786_ = lean_ctor_get(v_inst_1782_, 0);
lean_inc_ref(v_toApplicative_1786_);
v_toBind_1787_ = lean_ctor_get(v_inst_1782_, 1);
lean_inc_n(v_toBind_1787_, 2);
lean_dec_ref(v_inst_1782_);
v_getSemiring_1788_ = lean_ctor_get(v_inst_1783_, 0);
lean_inc(v_getSemiring_1788_);
v_modifySemiring_1789_ = lean_ctor_get(v_inst_1783_, 1);
lean_inc(v_modifySemiring_1789_);
lean_dec_ref(v_inst_1783_);
v_toPure_1790_ = lean_ctor_get(v_toApplicative_1786_, 1);
lean_inc(v_toPure_1790_);
lean_dec_ref(v_toApplicative_1786_);
v___f_1791_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__0));
v___f_1792_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__1));
v___f_1793_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__4), 9, 8);
lean_closure_set(v___f_1793_, 0, v___f_1791_);
lean_closure_set(v___f_1793_, 1, v___f_1792_);
lean_closure_set(v___f_1793_, 2, v_e_1785_);
lean_closure_set(v___f_1793_, 3, v_toPure_1790_);
lean_closure_set(v___f_1793_, 4, v_inst_1781_);
lean_closure_set(v___f_1793_, 5, v_toBind_1787_);
lean_closure_set(v___f_1793_, 6, v_inst_1784_);
lean_closure_set(v___f_1793_, 7, v_modifySemiring_1789_);
v___x_1794_ = lean_apply_4(v_toBind_1787_, lean_box(0), lean_box(0), v_getSemiring_1788_, v___f_1793_);
return v___x_1794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore(lean_object* v_m_1795_, lean_object* v_inst_1796_, lean_object* v_inst_1797_, lean_object* v_inst_1798_, lean_object* v_inst_1799_, lean_object* v_e_1800_){
_start:
{
lean_object* v___x_1801_; 
v___x_1801_ = l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg(v_inst_1796_, v_inst_1797_, v_inst_1798_, v_inst_1799_, v_e_1800_);
return v___x_1801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___lam__0(lean_object* v___y_1802_, lean_object* v_e_1803_, lean_object* v_size_1804_, lean_object* v_s_1805_){
_start:
{
lean_object* v_rings_1806_; lean_object* v_typeIdOf_1807_; lean_object* v_exprToRingId_1808_; lean_object* v_semirings_1809_; lean_object* v_stypeIdOf_1810_; lean_object* v_exprToSemiringId_1811_; lean_object* v_ncRings_1812_; lean_object* v_exprToNCRingId_1813_; lean_object* v_nctypeIdOf_1814_; lean_object* v_ncSemirings_1815_; lean_object* v_exprToNCSemiringId_1816_; lean_object* v_ncstypeIdOf_1817_; lean_object* v_steps_1818_; uint8_t v_reportedMaxDegreeIssue_1819_; lean_object* v___x_1820_; uint8_t v___x_1821_; 
v_rings_1806_ = lean_ctor_get(v_s_1805_, 0);
v_typeIdOf_1807_ = lean_ctor_get(v_s_1805_, 1);
v_exprToRingId_1808_ = lean_ctor_get(v_s_1805_, 2);
v_semirings_1809_ = lean_ctor_get(v_s_1805_, 3);
v_stypeIdOf_1810_ = lean_ctor_get(v_s_1805_, 4);
v_exprToSemiringId_1811_ = lean_ctor_get(v_s_1805_, 5);
v_ncRings_1812_ = lean_ctor_get(v_s_1805_, 6);
v_exprToNCRingId_1813_ = lean_ctor_get(v_s_1805_, 7);
v_nctypeIdOf_1814_ = lean_ctor_get(v_s_1805_, 8);
v_ncSemirings_1815_ = lean_ctor_get(v_s_1805_, 9);
v_exprToNCSemiringId_1816_ = lean_ctor_get(v_s_1805_, 10);
v_ncstypeIdOf_1817_ = lean_ctor_get(v_s_1805_, 11);
v_steps_1818_ = lean_ctor_get(v_s_1805_, 12);
v_reportedMaxDegreeIssue_1819_ = lean_ctor_get_uint8(v_s_1805_, sizeof(void*)*13);
v___x_1820_ = lean_array_get_size(v_semirings_1809_);
v___x_1821_ = lean_nat_dec_lt(v___y_1802_, v___x_1820_);
if (v___x_1821_ == 0)
{
lean_dec(v_size_1804_);
lean_dec_ref(v_e_1803_);
return v_s_1805_;
}
else
{
lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1864_; 
lean_inc(v_steps_1818_);
lean_inc_ref(v_ncstypeIdOf_1817_);
lean_inc_ref(v_exprToNCSemiringId_1816_);
lean_inc_ref(v_ncSemirings_1815_);
lean_inc_ref(v_nctypeIdOf_1814_);
lean_inc_ref(v_exprToNCRingId_1813_);
lean_inc_ref(v_ncRings_1812_);
lean_inc_ref(v_exprToSemiringId_1811_);
lean_inc_ref(v_stypeIdOf_1810_);
lean_inc_ref(v_semirings_1809_);
lean_inc_ref(v_exprToRingId_1808_);
lean_inc_ref(v_typeIdOf_1807_);
lean_inc_ref(v_rings_1806_);
v_isSharedCheck_1864_ = !lean_is_exclusive(v_s_1805_);
if (v_isSharedCheck_1864_ == 0)
{
lean_object* v_unused_1865_; lean_object* v_unused_1866_; lean_object* v_unused_1867_; lean_object* v_unused_1868_; lean_object* v_unused_1869_; lean_object* v_unused_1870_; lean_object* v_unused_1871_; lean_object* v_unused_1872_; lean_object* v_unused_1873_; lean_object* v_unused_1874_; lean_object* v_unused_1875_; lean_object* v_unused_1876_; lean_object* v_unused_1877_; 
v_unused_1865_ = lean_ctor_get(v_s_1805_, 12);
lean_dec(v_unused_1865_);
v_unused_1866_ = lean_ctor_get(v_s_1805_, 11);
lean_dec(v_unused_1866_);
v_unused_1867_ = lean_ctor_get(v_s_1805_, 10);
lean_dec(v_unused_1867_);
v_unused_1868_ = lean_ctor_get(v_s_1805_, 9);
lean_dec(v_unused_1868_);
v_unused_1869_ = lean_ctor_get(v_s_1805_, 8);
lean_dec(v_unused_1869_);
v_unused_1870_ = lean_ctor_get(v_s_1805_, 7);
lean_dec(v_unused_1870_);
v_unused_1871_ = lean_ctor_get(v_s_1805_, 6);
lean_dec(v_unused_1871_);
v_unused_1872_ = lean_ctor_get(v_s_1805_, 5);
lean_dec(v_unused_1872_);
v_unused_1873_ = lean_ctor_get(v_s_1805_, 4);
lean_dec(v_unused_1873_);
v_unused_1874_ = lean_ctor_get(v_s_1805_, 3);
lean_dec(v_unused_1874_);
v_unused_1875_ = lean_ctor_get(v_s_1805_, 2);
lean_dec(v_unused_1875_);
v_unused_1876_ = lean_ctor_get(v_s_1805_, 1);
lean_dec(v_unused_1876_);
v_unused_1877_ = lean_ctor_get(v_s_1805_, 0);
lean_dec(v_unused_1877_);
v___x_1823_ = v_s_1805_;
v_isShared_1824_ = v_isSharedCheck_1864_;
goto v_resetjp_1822_;
}
else
{
lean_dec(v_s_1805_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1864_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v_v_1825_; lean_object* v_toSemiring_1826_; lean_object* v_ringId_1827_; lean_object* v_commSemiringInst_1828_; lean_object* v_addRightCancelInst_x3f_1829_; lean_object* v_toQFn_x3f_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1863_; 
v_v_1825_ = lean_array_fget(v_semirings_1809_, v___y_1802_);
v_toSemiring_1826_ = lean_ctor_get(v_v_1825_, 0);
v_ringId_1827_ = lean_ctor_get(v_v_1825_, 1);
v_commSemiringInst_1828_ = lean_ctor_get(v_v_1825_, 2);
v_addRightCancelInst_x3f_1829_ = lean_ctor_get(v_v_1825_, 3);
v_toQFn_x3f_1830_ = lean_ctor_get(v_v_1825_, 4);
v_isSharedCheck_1863_ = !lean_is_exclusive(v_v_1825_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1832_ = v_v_1825_;
v_isShared_1833_ = v_isSharedCheck_1863_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_toQFn_x3f_1830_);
lean_inc(v_addRightCancelInst_x3f_1829_);
lean_inc(v_commSemiringInst_1828_);
lean_inc(v_ringId_1827_);
lean_inc(v_toSemiring_1826_);
lean_dec(v_v_1825_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1863_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v_id_1834_; lean_object* v_type_1835_; lean_object* v_u_1836_; lean_object* v_semiringInst_1837_; lean_object* v_addFn_x3f_1838_; lean_object* v_mulFn_x3f_1839_; lean_object* v_powFn_x3f_1840_; lean_object* v_natCastFn_x3f_1841_; lean_object* v_denote_1842_; lean_object* v_vars_1843_; lean_object* v_varMap_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1862_; 
v_id_1834_ = lean_ctor_get(v_toSemiring_1826_, 0);
v_type_1835_ = lean_ctor_get(v_toSemiring_1826_, 1);
v_u_1836_ = lean_ctor_get(v_toSemiring_1826_, 2);
v_semiringInst_1837_ = lean_ctor_get(v_toSemiring_1826_, 3);
v_addFn_x3f_1838_ = lean_ctor_get(v_toSemiring_1826_, 4);
v_mulFn_x3f_1839_ = lean_ctor_get(v_toSemiring_1826_, 5);
v_powFn_x3f_1840_ = lean_ctor_get(v_toSemiring_1826_, 6);
v_natCastFn_x3f_1841_ = lean_ctor_get(v_toSemiring_1826_, 7);
v_denote_1842_ = lean_ctor_get(v_toSemiring_1826_, 8);
v_vars_1843_ = lean_ctor_get(v_toSemiring_1826_, 9);
v_varMap_1844_ = lean_ctor_get(v_toSemiring_1826_, 10);
v_isSharedCheck_1862_ = !lean_is_exclusive(v_toSemiring_1826_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1846_ = v_toSemiring_1826_;
v_isShared_1847_ = v_isSharedCheck_1862_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_varMap_1844_);
lean_inc(v_vars_1843_);
lean_inc(v_denote_1842_);
lean_inc(v_natCastFn_x3f_1841_);
lean_inc(v_powFn_x3f_1840_);
lean_inc(v_mulFn_x3f_1839_);
lean_inc(v_addFn_x3f_1838_);
lean_inc(v_semiringInst_1837_);
lean_inc(v_u_1836_);
lean_inc(v_type_1835_);
lean_inc(v_id_1834_);
lean_dec(v_toSemiring_1826_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1862_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1848_; lean_object* v_xs_x27_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1853_; 
v___x_1848_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___closed__0);
v_xs_x27_1849_ = lean_array_fset(v_semirings_1809_, v___y_1802_, v___x_1848_);
lean_inc_ref(v_e_1803_);
v___x_1850_ = l_Lean_PersistentArray_push___redArg(v_vars_1843_, v_e_1803_);
v___x_1851_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0___redArg(v_varMap_1844_, v_e_1803_, v_size_1804_);
if (v_isShared_1847_ == 0)
{
lean_ctor_set(v___x_1846_, 10, v___x_1851_);
lean_ctor_set(v___x_1846_, 9, v___x_1850_);
v___x_1853_ = v___x_1846_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_id_1834_);
lean_ctor_set(v_reuseFailAlloc_1861_, 1, v_type_1835_);
lean_ctor_set(v_reuseFailAlloc_1861_, 2, v_u_1836_);
lean_ctor_set(v_reuseFailAlloc_1861_, 3, v_semiringInst_1837_);
lean_ctor_set(v_reuseFailAlloc_1861_, 4, v_addFn_x3f_1838_);
lean_ctor_set(v_reuseFailAlloc_1861_, 5, v_mulFn_x3f_1839_);
lean_ctor_set(v_reuseFailAlloc_1861_, 6, v_powFn_x3f_1840_);
lean_ctor_set(v_reuseFailAlloc_1861_, 7, v_natCastFn_x3f_1841_);
lean_ctor_set(v_reuseFailAlloc_1861_, 8, v_denote_1842_);
lean_ctor_set(v_reuseFailAlloc_1861_, 9, v___x_1850_);
lean_ctor_set(v_reuseFailAlloc_1861_, 10, v___x_1851_);
v___x_1853_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
lean_object* v___x_1855_; 
if (v_isShared_1833_ == 0)
{
lean_ctor_set(v___x_1832_, 0, v___x_1853_);
v___x_1855_ = v___x_1832_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v___x_1853_);
lean_ctor_set(v_reuseFailAlloc_1860_, 1, v_ringId_1827_);
lean_ctor_set(v_reuseFailAlloc_1860_, 2, v_commSemiringInst_1828_);
lean_ctor_set(v_reuseFailAlloc_1860_, 3, v_addRightCancelInst_x3f_1829_);
lean_ctor_set(v_reuseFailAlloc_1860_, 4, v_toQFn_x3f_1830_);
v___x_1855_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
lean_object* v___x_1856_; lean_object* v___x_1858_; 
v___x_1856_ = lean_array_fset(v_xs_x27_1849_, v___y_1802_, v___x_1855_);
if (v_isShared_1824_ == 0)
{
lean_ctor_set(v___x_1823_, 3, v___x_1856_);
v___x_1858_ = v___x_1823_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v_rings_1806_);
lean_ctor_set(v_reuseFailAlloc_1859_, 1, v_typeIdOf_1807_);
lean_ctor_set(v_reuseFailAlloc_1859_, 2, v_exprToRingId_1808_);
lean_ctor_set(v_reuseFailAlloc_1859_, 3, v___x_1856_);
lean_ctor_set(v_reuseFailAlloc_1859_, 4, v_stypeIdOf_1810_);
lean_ctor_set(v_reuseFailAlloc_1859_, 5, v_exprToSemiringId_1811_);
lean_ctor_set(v_reuseFailAlloc_1859_, 6, v_ncRings_1812_);
lean_ctor_set(v_reuseFailAlloc_1859_, 7, v_exprToNCRingId_1813_);
lean_ctor_set(v_reuseFailAlloc_1859_, 8, v_nctypeIdOf_1814_);
lean_ctor_set(v_reuseFailAlloc_1859_, 9, v_ncSemirings_1815_);
lean_ctor_set(v_reuseFailAlloc_1859_, 10, v_exprToNCSemiringId_1816_);
lean_ctor_set(v_reuseFailAlloc_1859_, 11, v_ncstypeIdOf_1817_);
lean_ctor_set(v_reuseFailAlloc_1859_, 12, v_steps_1818_);
lean_ctor_set_uint8(v_reuseFailAlloc_1859_, sizeof(void*)*13, v_reportedMaxDegreeIssue_1819_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___lam__0___boxed(lean_object* v___y_1878_, lean_object* v_e_1879_, lean_object* v_size_1880_, lean_object* v_s_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___lam__0(v___y_1878_, v_e_1879_, v_size_1880_, v_s_1881_);
lean_dec(v___y_1878_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0(lean_object* v_e_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_){
_start:
{
lean_object* v___x_1896_; 
v___x_1896_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1947_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1899_ = v___x_1896_;
v_isShared_1900_ = v_isSharedCheck_1947_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___x_1896_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1947_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v_toSemiring_1901_; lean_object* v_vars_1902_; lean_object* v_varMap_1903_; lean_object* v___x_1904_; 
v_toSemiring_1901_ = lean_ctor_get(v_a_1897_, 0);
lean_inc_ref(v_toSemiring_1901_);
lean_dec(v_a_1897_);
v_vars_1902_ = lean_ctor_get(v_toSemiring_1901_, 9);
lean_inc_ref(v_vars_1902_);
v_varMap_1903_ = lean_ctor_get(v_toSemiring_1901_, 10);
lean_inc_ref(v_varMap_1903_);
lean_dec_ref(v_toSemiring_1901_);
v___x_1904_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg(v_varMap_1903_, v_e_1883_);
lean_dec_ref(v_varMap_1903_);
if (lean_obj_tag(v___x_1904_) == 1)
{
lean_object* v_val_1905_; lean_object* v___x_1907_; 
lean_dec_ref(v_vars_1902_);
lean_dec_ref(v_e_1883_);
v_val_1905_ = lean_ctor_get(v___x_1904_, 0);
lean_inc(v_val_1905_);
lean_dec_ref_known(v___x_1904_, 1);
if (v_isShared_1900_ == 0)
{
lean_ctor_set(v___x_1899_, 0, v_val_1905_);
v___x_1907_ = v___x_1899_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_val_1905_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
else
{
lean_object* v_size_1909_; lean_object* v___f_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; 
lean_dec(v___x_1904_);
lean_del_object(v___x_1899_);
v_size_1909_ = lean_ctor_get(v_vars_1902_, 2);
lean_inc_n(v_size_1909_, 2);
lean_dec_ref(v_vars_1902_);
lean_inc_ref(v_e_1883_);
lean_inc(v___y_1884_);
v___f_1910_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1910_, 0, v___y_1884_);
lean_closure_set(v___f_1910_, 1, v_e_1883_);
lean_closure_set(v___f_1910_, 2, v_size_1909_);
v___x_1911_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_1912_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1911_, v___f_1910_, v___y_1885_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v___x_1913_; 
lean_dec_ref_known(v___x_1912_, 1);
lean_inc_ref(v_e_1883_);
v___x_1913_ = l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(v_e_1883_, v___y_1884_, v___y_1885_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_);
if (lean_obj_tag(v___x_1913_) == 0)
{
lean_object* v___x_1914_; 
lean_dec_ref_known(v___x_1913_, 1);
v___x_1914_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_1911_, v_e_1883_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1921_; 
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1921_ == 0)
{
lean_object* v_unused_1922_; 
v_unused_1922_ = lean_ctor_get(v___x_1914_, 0);
lean_dec(v_unused_1922_);
v___x_1916_ = v___x_1914_;
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
else
{
lean_dec(v___x_1914_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1919_; 
if (v_isShared_1917_ == 0)
{
lean_ctor_set(v___x_1916_, 0, v_size_1909_);
v___x_1919_ = v___x_1916_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v_size_1909_);
v___x_1919_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
return v___x_1919_;
}
}
}
else
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1930_; 
lean_dec(v_size_1909_);
v_a_1923_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1930_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1930_ == 0)
{
v___x_1925_ = v___x_1914_;
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v___x_1914_);
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
lean_dec(v_size_1909_);
lean_dec_ref(v_e_1883_);
v_a_1931_ = lean_ctor_get(v___x_1913_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1913_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1933_ = v___x_1913_;
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1913_);
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
else
{
lean_object* v_a_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_1946_; 
lean_dec(v_size_1909_);
lean_dec_ref(v_e_1883_);
v_a_1939_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_1946_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1946_ == 0)
{
v___x_1941_ = v___x_1912_;
v_isShared_1942_ = v_isSharedCheck_1946_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_a_1939_);
lean_dec(v___x_1912_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_1946_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1944_; 
if (v_isShared_1942_ == 0)
{
v___x_1944_ = v___x_1941_;
goto v_reusejp_1943_;
}
else
{
lean_object* v_reuseFailAlloc_1945_; 
v_reuseFailAlloc_1945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1945_, 0, v_a_1939_);
v___x_1944_ = v_reuseFailAlloc_1945_;
goto v_reusejp_1943_;
}
v_reusejp_1943_:
{
return v___x_1944_;
}
}
}
}
}
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
lean_dec_ref(v_e_1883_);
v_a_1948_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___x_1896_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1896_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1951_ == 0)
{
v___x_1953_ = v___x_1950_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_a_1948_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___boxed(lean_object* v_e_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_){
_start:
{
lean_object* v_res_1969_; 
v_res_1969_ = l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0(v_e_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1959_);
lean_dec(v___y_1958_);
lean_dec(v___y_1957_);
return v_res_1969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVar(lean_object* v_e_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_){
_start:
{
lean_object* v___x_1983_; 
v___x_1983_ = l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0(v_e_1970_, v_a_1971_, v_a_1972_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_);
return v___x_1983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVar___boxed(lean_object* v_e_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_){
_start:
{
lean_object* v_res_1997_; 
v_res_1997_ = l_Lean_Meta_Grind_Arith_CommRing_mkSVar(v_e_1984_, v_a_1985_, v_a_1986_, v_a_1987_, v_a_1988_, v_a_1989_, v_a_1990_, v_a_1991_, v_a_1992_, v_a_1993_, v_a_1994_, v_a_1995_);
lean_dec(v_a_1995_);
lean_dec_ref(v_a_1994_);
lean_dec(v_a_1993_);
lean_dec_ref(v_a_1992_);
lean_dec(v_a_1991_);
lean_dec_ref(v_a_1990_);
lean_dec(v_a_1989_);
lean_dec_ref(v_a_1988_);
lean_dec(v_a_1987_);
lean_dec(v_a_1986_);
lean_dec(v_a_1985_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__1(lean_object* v_a_1998_){
_start:
{
lean_object* v___x_1999_; 
v___x_1999_ = lean_nat_to_int(v_a_1998_);
return v___x_1999_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___closed__0(void){
_start:
{
lean_object* v___x_2000_; 
v___x_2000_ = l_Lean_Meta_Grind_instInhabitedGoalM___redArg();
return v___x_2000_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5(lean_object* v_msg_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_){
_start:
{
lean_object* v___x_2014_; lean_object* v___f_2015_; lean_object* v___x_40259__overap_2016_; lean_object* v___x_2017_; 
v___x_2014_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___closed__0, &l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___closed__0);
v___f_2015_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2015_, 0, v___x_2014_);
v___x_40259__overap_2016_ = lean_panic_fn_borrowed(v___f_2015_, v_msg_2001_);
lean_dec_ref(v___f_2015_);
lean_inc(v___y_2012_);
lean_inc_ref(v___y_2011_);
lean_inc(v___y_2010_);
lean_inc_ref(v___y_2009_);
lean_inc(v___y_2008_);
lean_inc_ref(v___y_2007_);
lean_inc(v___y_2006_);
lean_inc_ref(v___y_2005_);
lean_inc(v___y_2004_);
lean_inc(v___y_2003_);
lean_inc(v___y_2002_);
v___x_2017_ = lean_apply_12(v___x_40259__overap_2016_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_, lean_box(0));
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___boxed(lean_object* v_msg_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5(v_msg_2018_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_);
lean_dec(v___y_2029_);
lean_dec_ref(v___y_2028_);
lean_dec(v___y_2027_);
lean_dec_ref(v___y_2026_);
lean_dec(v___y_2025_);
lean_dec_ref(v___y_2024_);
lean_dec(v___y_2023_);
lean_dec_ref(v___y_2022_);
lean_dec(v___y_2021_);
lean_dec(v___y_2020_);
lean_dec(v___y_2019_);
return v_res_2031_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_2033_; lean_object* v___x_2034_; 
v___x_2033_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__0));
v___x_2034_ = l_Lean_stringToMessageData(v___x_2033_);
return v___x_2034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg(lean_object* v_type_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_){
_start:
{
lean_object* v___x_2042_; 
lean_inc_ref(v_type_2035_);
v___x_2042_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_type_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2055_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2055_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2045_ = v___x_2042_;
v_isShared_2046_ = v_isSharedCheck_2055_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2042_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2055_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
if (lean_obj_tag(v_a_2043_) == 1)
{
lean_object* v_val_2047_; lean_object* v___x_2049_; 
lean_dec_ref(v_type_2035_);
v_val_2047_ = lean_ctor_get(v_a_2043_, 0);
lean_inc(v_val_2047_);
lean_dec_ref_known(v_a_2043_, 1);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 0, v_val_2047_);
v___x_2049_ = v___x_2045_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v_val_2047_);
v___x_2049_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
return v___x_2049_;
}
}
else
{
lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; 
lean_del_object(v___x_2045_);
lean_dec(v_a_2043_);
v___x_2051_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__1, &l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__1);
v___x_2052_ = l_Lean_indentExpr(v_type_2035_);
v___x_2053_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2051_);
lean_ctor_set(v___x_2053_, 1, v___x_2052_);
v___x_2054_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg(v___x_2053_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
return v___x_2054_;
}
}
}
else
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2063_; 
lean_dec_ref(v_type_2035_);
v_a_2056_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2058_ = v___x_2042_;
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2042_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2061_; 
if (v_isShared_2059_ == 0)
{
v___x_2061_ = v___x_2058_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_a_2056_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_type_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg(v_type_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_);
lean_dec(v___y_2069_);
lean_dec_ref(v___y_2068_);
lean_dec(v___y_2067_);
lean_dec_ref(v___y_2066_);
lean_dec(v___y_2065_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3(lean_object* v_type_2072_, lean_object* v_u_2073_, lean_object* v_instDeclName_2074_, lean_object* v_declName_2075_, lean_object* v_expectedInst_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_){
_start:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v___x_2089_ = lean_box(0);
lean_inc_n(v_u_2073_, 2);
v___x_2090_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2090_, 0, v_u_2073_);
lean_ctor_set(v___x_2090_, 1, v___x_2089_);
v___x_2091_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2091_, 0, v_u_2073_);
lean_ctor_set(v___x_2091_, 1, v___x_2090_);
v___x_2092_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2092_, 0, v_u_2073_);
lean_ctor_set(v___x_2092_, 1, v___x_2091_);
lean_inc_ref(v___x_2092_);
v___x_2093_ = l_Lean_mkConst(v_instDeclName_2074_, v___x_2092_);
lean_inc_ref_n(v_type_2072_, 3);
v___x_2094_ = l_Lean_mkApp3(v___x_2093_, v_type_2072_, v_type_2072_, v_type_2072_);
v___x_2095_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg(v___x_2094_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_);
if (lean_obj_tag(v___x_2095_) == 0)
{
lean_object* v_a_2096_; lean_object* v___x_2097_; 
v_a_2096_ = lean_ctor_get(v___x_2095_, 0);
lean_inc_n(v_a_2096_, 2);
lean_dec_ref_known(v___x_2095_, 1);
lean_inc(v_declName_2075_);
v___x_2097_ = l_Lean_Meta_Grind_Arith_CommRing_checkInst(v_declName_2075_, v_a_2096_, v_expectedInst_2076_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_);
if (lean_obj_tag(v___x_2097_) == 0)
{
lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
lean_dec_ref_known(v___x_2097_, 1);
v___x_2098_ = l_Lean_mkConst(v_declName_2075_, v___x_2092_);
lean_inc_ref_n(v_type_2072_, 2);
v___x_2099_ = l_Lean_mkApp4(v___x_2098_, v_type_2072_, v_type_2072_, v_type_2072_, v_a_2096_);
v___x_2100_ = l_Lean_Meta_Sym_canon(v___x_2099_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; lean_object* v___x_2102_; 
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
lean_inc(v_a_2101_);
lean_dec_ref_known(v___x_2100_, 1);
v___x_2102_ = l_Lean_Meta_Sym_shareCommon(v_a_2101_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_);
return v___x_2102_;
}
else
{
return v___x_2100_;
}
}
else
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2110_; 
lean_dec(v_a_2096_);
lean_dec_ref_known(v___x_2092_, 2);
lean_dec(v_declName_2075_);
lean_dec_ref(v_type_2072_);
v_a_2103_ = lean_ctor_get(v___x_2097_, 0);
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2105_ = v___x_2097_;
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2097_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_a_2103_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_2092_, 2);
lean_dec_ref(v_expectedInst_2076_);
lean_dec(v_declName_2075_);
lean_dec_ref(v_type_2072_);
return v___x_2095_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3___boxed(lean_object** _args){
lean_object* v_type_2111_ = _args[0];
lean_object* v_u_2112_ = _args[1];
lean_object* v_instDeclName_2113_ = _args[2];
lean_object* v_declName_2114_ = _args[3];
lean_object* v_expectedInst_2115_ = _args[4];
lean_object* v___y_2116_ = _args[5];
lean_object* v___y_2117_ = _args[6];
lean_object* v___y_2118_ = _args[7];
lean_object* v___y_2119_ = _args[8];
lean_object* v___y_2120_ = _args[9];
lean_object* v___y_2121_ = _args[10];
lean_object* v___y_2122_ = _args[11];
lean_object* v___y_2123_ = _args[12];
lean_object* v___y_2124_ = _args[13];
lean_object* v___y_2125_ = _args[14];
lean_object* v___y_2126_ = _args[15];
lean_object* v___y_2127_ = _args[16];
_start:
{
lean_object* v_res_2128_; 
v_res_2128_ = l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3(v_type_2111_, v_u_2112_, v_instDeclName_2113_, v_declName_2114_, v_expectedInst_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec(v___y_2122_);
lean_dec_ref(v___y_2121_);
lean_dec(v___y_2120_);
lean_dec_ref(v___y_2119_);
lean_dec(v___y_2118_);
lean_dec(v___y_2117_);
lean_dec(v___y_2116_);
return v_res_2128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3___lam__0(lean_object* v_a_2129_, lean_object* v_s_2130_){
_start:
{
lean_object* v_toRing_2131_; lean_object* v_invFn_x3f_2132_; lean_object* v_semiringId_x3f_2133_; lean_object* v_commSemiringInst_2134_; lean_object* v_commRingInst_2135_; lean_object* v_noZeroDivInst_x3f_2136_; lean_object* v_fieldInst_x3f_2137_; lean_object* v_powIdentityInst_x3f_2138_; lean_object* v_denoteEntries_2139_; lean_object* v_nextId_2140_; lean_object* v_steps_2141_; lean_object* v_queue_2142_; lean_object* v_basis_2143_; lean_object* v_diseqs_2144_; uint8_t v_recheck_2145_; lean_object* v_invSet_2146_; lean_object* v_powIdentityVarCount_2147_; lean_object* v_numEq0_x3f_2148_; uint8_t v_numEq0Updated_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2181_; 
v_toRing_2131_ = lean_ctor_get(v_s_2130_, 0);
v_invFn_x3f_2132_ = lean_ctor_get(v_s_2130_, 1);
v_semiringId_x3f_2133_ = lean_ctor_get(v_s_2130_, 2);
v_commSemiringInst_2134_ = lean_ctor_get(v_s_2130_, 3);
v_commRingInst_2135_ = lean_ctor_get(v_s_2130_, 4);
v_noZeroDivInst_x3f_2136_ = lean_ctor_get(v_s_2130_, 5);
v_fieldInst_x3f_2137_ = lean_ctor_get(v_s_2130_, 6);
v_powIdentityInst_x3f_2138_ = lean_ctor_get(v_s_2130_, 7);
v_denoteEntries_2139_ = lean_ctor_get(v_s_2130_, 8);
v_nextId_2140_ = lean_ctor_get(v_s_2130_, 9);
v_steps_2141_ = lean_ctor_get(v_s_2130_, 10);
v_queue_2142_ = lean_ctor_get(v_s_2130_, 11);
v_basis_2143_ = lean_ctor_get(v_s_2130_, 12);
v_diseqs_2144_ = lean_ctor_get(v_s_2130_, 13);
v_recheck_2145_ = lean_ctor_get_uint8(v_s_2130_, sizeof(void*)*17);
v_invSet_2146_ = lean_ctor_get(v_s_2130_, 14);
v_powIdentityVarCount_2147_ = lean_ctor_get(v_s_2130_, 15);
v_numEq0_x3f_2148_ = lean_ctor_get(v_s_2130_, 16);
v_numEq0Updated_2149_ = lean_ctor_get_uint8(v_s_2130_, sizeof(void*)*17 + 1);
v_isSharedCheck_2181_ = !lean_is_exclusive(v_s_2130_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2151_ = v_s_2130_;
v_isShared_2152_ = v_isSharedCheck_2181_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_numEq0_x3f_2148_);
lean_inc(v_powIdentityVarCount_2147_);
lean_inc(v_invSet_2146_);
lean_inc(v_diseqs_2144_);
lean_inc(v_basis_2143_);
lean_inc(v_queue_2142_);
lean_inc(v_steps_2141_);
lean_inc(v_nextId_2140_);
lean_inc(v_denoteEntries_2139_);
lean_inc(v_powIdentityInst_x3f_2138_);
lean_inc(v_fieldInst_x3f_2137_);
lean_inc(v_noZeroDivInst_x3f_2136_);
lean_inc(v_commRingInst_2135_);
lean_inc(v_commSemiringInst_2134_);
lean_inc(v_semiringId_x3f_2133_);
lean_inc(v_invFn_x3f_2132_);
lean_inc(v_toRing_2131_);
lean_dec(v_s_2130_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2181_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v_id_2153_; lean_object* v_type_2154_; lean_object* v_u_2155_; lean_object* v_ringInst_2156_; lean_object* v_semiringInst_2157_; lean_object* v_charInst_x3f_2158_; lean_object* v_addFn_x3f_2159_; lean_object* v_subFn_x3f_2160_; lean_object* v_negFn_x3f_2161_; lean_object* v_powFn_x3f_2162_; lean_object* v_intCastFn_x3f_2163_; lean_object* v_natCastFn_x3f_2164_; lean_object* v_one_x3f_2165_; lean_object* v_vars_2166_; lean_object* v_varMap_2167_; lean_object* v_denote_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2179_; 
v_id_2153_ = lean_ctor_get(v_toRing_2131_, 0);
v_type_2154_ = lean_ctor_get(v_toRing_2131_, 1);
v_u_2155_ = lean_ctor_get(v_toRing_2131_, 2);
v_ringInst_2156_ = lean_ctor_get(v_toRing_2131_, 3);
v_semiringInst_2157_ = lean_ctor_get(v_toRing_2131_, 4);
v_charInst_x3f_2158_ = lean_ctor_get(v_toRing_2131_, 5);
v_addFn_x3f_2159_ = lean_ctor_get(v_toRing_2131_, 6);
v_subFn_x3f_2160_ = lean_ctor_get(v_toRing_2131_, 8);
v_negFn_x3f_2161_ = lean_ctor_get(v_toRing_2131_, 9);
v_powFn_x3f_2162_ = lean_ctor_get(v_toRing_2131_, 10);
v_intCastFn_x3f_2163_ = lean_ctor_get(v_toRing_2131_, 11);
v_natCastFn_x3f_2164_ = lean_ctor_get(v_toRing_2131_, 12);
v_one_x3f_2165_ = lean_ctor_get(v_toRing_2131_, 13);
v_vars_2166_ = lean_ctor_get(v_toRing_2131_, 14);
v_varMap_2167_ = lean_ctor_get(v_toRing_2131_, 15);
v_denote_2168_ = lean_ctor_get(v_toRing_2131_, 16);
v_isSharedCheck_2179_ = !lean_is_exclusive(v_toRing_2131_);
if (v_isSharedCheck_2179_ == 0)
{
lean_object* v_unused_2180_; 
v_unused_2180_ = lean_ctor_get(v_toRing_2131_, 7);
lean_dec(v_unused_2180_);
v___x_2170_ = v_toRing_2131_;
v_isShared_2171_ = v_isSharedCheck_2179_;
goto v_resetjp_2169_;
}
else
{
lean_inc(v_denote_2168_);
lean_inc(v_varMap_2167_);
lean_inc(v_vars_2166_);
lean_inc(v_one_x3f_2165_);
lean_inc(v_natCastFn_x3f_2164_);
lean_inc(v_intCastFn_x3f_2163_);
lean_inc(v_powFn_x3f_2162_);
lean_inc(v_negFn_x3f_2161_);
lean_inc(v_subFn_x3f_2160_);
lean_inc(v_addFn_x3f_2159_);
lean_inc(v_charInst_x3f_2158_);
lean_inc(v_semiringInst_2157_);
lean_inc(v_ringInst_2156_);
lean_inc(v_u_2155_);
lean_inc(v_type_2154_);
lean_inc(v_id_2153_);
lean_dec(v_toRing_2131_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2179_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
lean_object* v___x_2172_; lean_object* v___x_2174_; 
v___x_2172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2172_, 0, v_a_2129_);
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 7, v___x_2172_);
v___x_2174_ = v___x_2170_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_id_2153_);
lean_ctor_set(v_reuseFailAlloc_2178_, 1, v_type_2154_);
lean_ctor_set(v_reuseFailAlloc_2178_, 2, v_u_2155_);
lean_ctor_set(v_reuseFailAlloc_2178_, 3, v_ringInst_2156_);
lean_ctor_set(v_reuseFailAlloc_2178_, 4, v_semiringInst_2157_);
lean_ctor_set(v_reuseFailAlloc_2178_, 5, v_charInst_x3f_2158_);
lean_ctor_set(v_reuseFailAlloc_2178_, 6, v_addFn_x3f_2159_);
lean_ctor_set(v_reuseFailAlloc_2178_, 7, v___x_2172_);
lean_ctor_set(v_reuseFailAlloc_2178_, 8, v_subFn_x3f_2160_);
lean_ctor_set(v_reuseFailAlloc_2178_, 9, v_negFn_x3f_2161_);
lean_ctor_set(v_reuseFailAlloc_2178_, 10, v_powFn_x3f_2162_);
lean_ctor_set(v_reuseFailAlloc_2178_, 11, v_intCastFn_x3f_2163_);
lean_ctor_set(v_reuseFailAlloc_2178_, 12, v_natCastFn_x3f_2164_);
lean_ctor_set(v_reuseFailAlloc_2178_, 13, v_one_x3f_2165_);
lean_ctor_set(v_reuseFailAlloc_2178_, 14, v_vars_2166_);
lean_ctor_set(v_reuseFailAlloc_2178_, 15, v_varMap_2167_);
lean_ctor_set(v_reuseFailAlloc_2178_, 16, v_denote_2168_);
v___x_2174_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
lean_object* v___x_2176_; 
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 0, v___x_2174_);
v___x_2176_ = v___x_2151_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v___x_2174_);
lean_ctor_set(v_reuseFailAlloc_2177_, 1, v_invFn_x3f_2132_);
lean_ctor_set(v_reuseFailAlloc_2177_, 2, v_semiringId_x3f_2133_);
lean_ctor_set(v_reuseFailAlloc_2177_, 3, v_commSemiringInst_2134_);
lean_ctor_set(v_reuseFailAlloc_2177_, 4, v_commRingInst_2135_);
lean_ctor_set(v_reuseFailAlloc_2177_, 5, v_noZeroDivInst_x3f_2136_);
lean_ctor_set(v_reuseFailAlloc_2177_, 6, v_fieldInst_x3f_2137_);
lean_ctor_set(v_reuseFailAlloc_2177_, 7, v_powIdentityInst_x3f_2138_);
lean_ctor_set(v_reuseFailAlloc_2177_, 8, v_denoteEntries_2139_);
lean_ctor_set(v_reuseFailAlloc_2177_, 9, v_nextId_2140_);
lean_ctor_set(v_reuseFailAlloc_2177_, 10, v_steps_2141_);
lean_ctor_set(v_reuseFailAlloc_2177_, 11, v_queue_2142_);
lean_ctor_set(v_reuseFailAlloc_2177_, 12, v_basis_2143_);
lean_ctor_set(v_reuseFailAlloc_2177_, 13, v_diseqs_2144_);
lean_ctor_set(v_reuseFailAlloc_2177_, 14, v_invSet_2146_);
lean_ctor_set(v_reuseFailAlloc_2177_, 15, v_powIdentityVarCount_2147_);
lean_ctor_set(v_reuseFailAlloc_2177_, 16, v_numEq0_x3f_2148_);
lean_ctor_set_uint8(v_reuseFailAlloc_2177_, sizeof(void*)*17, v_recheck_2145_);
lean_ctor_set_uint8(v_reuseFailAlloc_2177_, sizeof(void*)*17 + 1, v_numEq0Updated_2149_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3(lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_){
_start:
{
lean_object* v___x_2194_; 
v___x_2194_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_);
if (lean_obj_tag(v___x_2194_) == 0)
{
lean_object* v_a_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2238_; 
v_a_2195_ = lean_ctor_get(v___x_2194_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2194_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2197_ = v___x_2194_;
v_isShared_2198_ = v_isSharedCheck_2238_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_a_2195_);
lean_dec(v___x_2194_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2238_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v_toRing_2199_; lean_object* v_mulFn_x3f_2200_; 
v_toRing_2199_ = lean_ctor_get(v_a_2195_, 0);
lean_inc_ref(v_toRing_2199_);
lean_dec(v_a_2195_);
v_mulFn_x3f_2200_ = lean_ctor_get(v_toRing_2199_, 7);
if (lean_obj_tag(v_mulFn_x3f_2200_) == 1)
{
lean_object* v_val_2201_; lean_object* v___x_2203_; 
lean_inc_ref(v_mulFn_x3f_2200_);
lean_dec_ref(v_toRing_2199_);
v_val_2201_ = lean_ctor_get(v_mulFn_x3f_2200_, 0);
lean_inc(v_val_2201_);
lean_dec_ref_known(v_mulFn_x3f_2200_, 1);
if (v_isShared_2198_ == 0)
{
lean_ctor_set(v___x_2197_, 0, v_val_2201_);
v___x_2203_ = v___x_2197_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_val_2201_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
else
{
lean_object* v_type_2205_; lean_object* v_u_2206_; lean_object* v_semiringInst_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v_expectedInst_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; 
lean_del_object(v___x_2197_);
v_type_2205_ = lean_ctor_get(v_toRing_2199_, 1);
lean_inc_ref_n(v_type_2205_, 3);
v_u_2206_ = lean_ctor_get(v_toRing_2199_, 2);
lean_inc_n(v_u_2206_, 2);
v_semiringInst_2207_ = lean_ctor_get(v_toRing_2199_, 4);
lean_inc_ref(v_semiringInst_2207_);
lean_dec_ref(v_toRing_2199_);
v___x_2208_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__1));
v___x_2209_ = lean_box(0);
v___x_2210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2210_, 0, v_u_2206_);
lean_ctor_set(v___x_2210_, 1, v___x_2209_);
lean_inc_ref(v___x_2210_);
v___x_2211_ = l_Lean_mkConst(v___x_2208_, v___x_2210_);
v___x_2212_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3));
v___x_2213_ = l_Lean_mkConst(v___x_2212_, v___x_2210_);
v___x_2214_ = l_Lean_mkAppB(v___x_2213_, v_type_2205_, v_semiringInst_2207_);
v_expectedInst_2215_ = l_Lean_mkAppB(v___x_2211_, v_type_2205_, v___x_2214_);
v___x_2216_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__5));
v___x_2217_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7));
v___x_2218_ = l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3(v_type_2205_, v_u_2206_, v___x_2216_, v___x_2217_, v_expectedInst_2215_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_);
if (lean_obj_tag(v___x_2218_) == 0)
{
lean_object* v_a_2219_; lean_object* v___f_2220_; lean_object* v___x_2221_; 
v_a_2219_ = lean_ctor_get(v___x_2218_, 0);
lean_inc_n(v_a_2219_, 2);
lean_dec_ref_known(v___x_2218_, 1);
v___f_2220_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3___lam__0), 2, 1);
lean_closure_set(v___f_2220_, 0, v_a_2219_);
v___x_2221_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing(v___f_2220_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_);
if (lean_obj_tag(v___x_2221_) == 0)
{
lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2228_; 
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2221_);
if (v_isSharedCheck_2228_ == 0)
{
lean_object* v_unused_2229_; 
v_unused_2229_ = lean_ctor_get(v___x_2221_, 0);
lean_dec(v_unused_2229_);
v___x_2223_ = v___x_2221_;
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
else
{
lean_dec(v___x_2221_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v___x_2226_; 
if (v_isShared_2224_ == 0)
{
lean_ctor_set(v___x_2223_, 0, v_a_2219_);
v___x_2226_ = v___x_2223_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_a_2219_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2237_; 
lean_dec(v_a_2219_);
v_a_2230_ = lean_ctor_get(v___x_2221_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2221_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2232_ = v___x_2221_;
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2221_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2235_; 
if (v_isShared_2233_ == 0)
{
v___x_2235_ = v___x_2232_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_a_2230_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
}
else
{
return v___x_2218_;
}
}
}
}
else
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2246_; 
v_a_2239_ = lean_ctor_get(v___x_2194_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v___x_2194_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2241_ = v___x_2194_;
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___x_2194_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2244_; 
if (v_isShared_2242_ == 0)
{
v___x_2244_ = v___x_2241_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_a_2239_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
return v___x_2244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3___boxed(lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3(v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_);
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2256_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
lean_dec(v___y_2253_);
lean_dec_ref(v___y_2252_);
lean_dec(v___y_2251_);
lean_dec_ref(v___y_2250_);
lean_dec(v___y_2249_);
lean_dec(v___y_2248_);
lean_dec(v___y_2247_);
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2___lam__0(lean_object* v_a_2260_, lean_object* v_s_2261_){
_start:
{
lean_object* v_toRing_2262_; lean_object* v_invFn_x3f_2263_; lean_object* v_semiringId_x3f_2264_; lean_object* v_commSemiringInst_2265_; lean_object* v_commRingInst_2266_; lean_object* v_noZeroDivInst_x3f_2267_; lean_object* v_fieldInst_x3f_2268_; lean_object* v_powIdentityInst_x3f_2269_; lean_object* v_denoteEntries_2270_; lean_object* v_nextId_2271_; lean_object* v_steps_2272_; lean_object* v_queue_2273_; lean_object* v_basis_2274_; lean_object* v_diseqs_2275_; uint8_t v_recheck_2276_; lean_object* v_invSet_2277_; lean_object* v_powIdentityVarCount_2278_; lean_object* v_numEq0_x3f_2279_; uint8_t v_numEq0Updated_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2312_; 
v_toRing_2262_ = lean_ctor_get(v_s_2261_, 0);
v_invFn_x3f_2263_ = lean_ctor_get(v_s_2261_, 1);
v_semiringId_x3f_2264_ = lean_ctor_get(v_s_2261_, 2);
v_commSemiringInst_2265_ = lean_ctor_get(v_s_2261_, 3);
v_commRingInst_2266_ = lean_ctor_get(v_s_2261_, 4);
v_noZeroDivInst_x3f_2267_ = lean_ctor_get(v_s_2261_, 5);
v_fieldInst_x3f_2268_ = lean_ctor_get(v_s_2261_, 6);
v_powIdentityInst_x3f_2269_ = lean_ctor_get(v_s_2261_, 7);
v_denoteEntries_2270_ = lean_ctor_get(v_s_2261_, 8);
v_nextId_2271_ = lean_ctor_get(v_s_2261_, 9);
v_steps_2272_ = lean_ctor_get(v_s_2261_, 10);
v_queue_2273_ = lean_ctor_get(v_s_2261_, 11);
v_basis_2274_ = lean_ctor_get(v_s_2261_, 12);
v_diseqs_2275_ = lean_ctor_get(v_s_2261_, 13);
v_recheck_2276_ = lean_ctor_get_uint8(v_s_2261_, sizeof(void*)*17);
v_invSet_2277_ = lean_ctor_get(v_s_2261_, 14);
v_powIdentityVarCount_2278_ = lean_ctor_get(v_s_2261_, 15);
v_numEq0_x3f_2279_ = lean_ctor_get(v_s_2261_, 16);
v_numEq0Updated_2280_ = lean_ctor_get_uint8(v_s_2261_, sizeof(void*)*17 + 1);
v_isSharedCheck_2312_ = !lean_is_exclusive(v_s_2261_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2282_ = v_s_2261_;
v_isShared_2283_ = v_isSharedCheck_2312_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_numEq0_x3f_2279_);
lean_inc(v_powIdentityVarCount_2278_);
lean_inc(v_invSet_2277_);
lean_inc(v_diseqs_2275_);
lean_inc(v_basis_2274_);
lean_inc(v_queue_2273_);
lean_inc(v_steps_2272_);
lean_inc(v_nextId_2271_);
lean_inc(v_denoteEntries_2270_);
lean_inc(v_powIdentityInst_x3f_2269_);
lean_inc(v_fieldInst_x3f_2268_);
lean_inc(v_noZeroDivInst_x3f_2267_);
lean_inc(v_commRingInst_2266_);
lean_inc(v_commSemiringInst_2265_);
lean_inc(v_semiringId_x3f_2264_);
lean_inc(v_invFn_x3f_2263_);
lean_inc(v_toRing_2262_);
lean_dec(v_s_2261_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2312_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v_id_2284_; lean_object* v_type_2285_; lean_object* v_u_2286_; lean_object* v_ringInst_2287_; lean_object* v_semiringInst_2288_; lean_object* v_charInst_x3f_2289_; lean_object* v_mulFn_x3f_2290_; lean_object* v_subFn_x3f_2291_; lean_object* v_negFn_x3f_2292_; lean_object* v_powFn_x3f_2293_; lean_object* v_intCastFn_x3f_2294_; lean_object* v_natCastFn_x3f_2295_; lean_object* v_one_x3f_2296_; lean_object* v_vars_2297_; lean_object* v_varMap_2298_; lean_object* v_denote_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2310_; 
v_id_2284_ = lean_ctor_get(v_toRing_2262_, 0);
v_type_2285_ = lean_ctor_get(v_toRing_2262_, 1);
v_u_2286_ = lean_ctor_get(v_toRing_2262_, 2);
v_ringInst_2287_ = lean_ctor_get(v_toRing_2262_, 3);
v_semiringInst_2288_ = lean_ctor_get(v_toRing_2262_, 4);
v_charInst_x3f_2289_ = lean_ctor_get(v_toRing_2262_, 5);
v_mulFn_x3f_2290_ = lean_ctor_get(v_toRing_2262_, 7);
v_subFn_x3f_2291_ = lean_ctor_get(v_toRing_2262_, 8);
v_negFn_x3f_2292_ = lean_ctor_get(v_toRing_2262_, 9);
v_powFn_x3f_2293_ = lean_ctor_get(v_toRing_2262_, 10);
v_intCastFn_x3f_2294_ = lean_ctor_get(v_toRing_2262_, 11);
v_natCastFn_x3f_2295_ = lean_ctor_get(v_toRing_2262_, 12);
v_one_x3f_2296_ = lean_ctor_get(v_toRing_2262_, 13);
v_vars_2297_ = lean_ctor_get(v_toRing_2262_, 14);
v_varMap_2298_ = lean_ctor_get(v_toRing_2262_, 15);
v_denote_2299_ = lean_ctor_get(v_toRing_2262_, 16);
v_isSharedCheck_2310_ = !lean_is_exclusive(v_toRing_2262_);
if (v_isSharedCheck_2310_ == 0)
{
lean_object* v_unused_2311_; 
v_unused_2311_ = lean_ctor_get(v_toRing_2262_, 6);
lean_dec(v_unused_2311_);
v___x_2301_ = v_toRing_2262_;
v_isShared_2302_ = v_isSharedCheck_2310_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_denote_2299_);
lean_inc(v_varMap_2298_);
lean_inc(v_vars_2297_);
lean_inc(v_one_x3f_2296_);
lean_inc(v_natCastFn_x3f_2295_);
lean_inc(v_intCastFn_x3f_2294_);
lean_inc(v_powFn_x3f_2293_);
lean_inc(v_negFn_x3f_2292_);
lean_inc(v_subFn_x3f_2291_);
lean_inc(v_mulFn_x3f_2290_);
lean_inc(v_charInst_x3f_2289_);
lean_inc(v_semiringInst_2288_);
lean_inc(v_ringInst_2287_);
lean_inc(v_u_2286_);
lean_inc(v_type_2285_);
lean_inc(v_id_2284_);
lean_dec(v_toRing_2262_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2310_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2303_; lean_object* v___x_2305_; 
v___x_2303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2303_, 0, v_a_2260_);
if (v_isShared_2302_ == 0)
{
lean_ctor_set(v___x_2301_, 6, v___x_2303_);
v___x_2305_ = v___x_2301_;
goto v_reusejp_2304_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_id_2284_);
lean_ctor_set(v_reuseFailAlloc_2309_, 1, v_type_2285_);
lean_ctor_set(v_reuseFailAlloc_2309_, 2, v_u_2286_);
lean_ctor_set(v_reuseFailAlloc_2309_, 3, v_ringInst_2287_);
lean_ctor_set(v_reuseFailAlloc_2309_, 4, v_semiringInst_2288_);
lean_ctor_set(v_reuseFailAlloc_2309_, 5, v_charInst_x3f_2289_);
lean_ctor_set(v_reuseFailAlloc_2309_, 6, v___x_2303_);
lean_ctor_set(v_reuseFailAlloc_2309_, 7, v_mulFn_x3f_2290_);
lean_ctor_set(v_reuseFailAlloc_2309_, 8, v_subFn_x3f_2291_);
lean_ctor_set(v_reuseFailAlloc_2309_, 9, v_negFn_x3f_2292_);
lean_ctor_set(v_reuseFailAlloc_2309_, 10, v_powFn_x3f_2293_);
lean_ctor_set(v_reuseFailAlloc_2309_, 11, v_intCastFn_x3f_2294_);
lean_ctor_set(v_reuseFailAlloc_2309_, 12, v_natCastFn_x3f_2295_);
lean_ctor_set(v_reuseFailAlloc_2309_, 13, v_one_x3f_2296_);
lean_ctor_set(v_reuseFailAlloc_2309_, 14, v_vars_2297_);
lean_ctor_set(v_reuseFailAlloc_2309_, 15, v_varMap_2298_);
lean_ctor_set(v_reuseFailAlloc_2309_, 16, v_denote_2299_);
v___x_2305_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2304_;
}
v_reusejp_2304_:
{
lean_object* v___x_2307_; 
if (v_isShared_2283_ == 0)
{
lean_ctor_set(v___x_2282_, 0, v___x_2305_);
v___x_2307_ = v___x_2282_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v___x_2305_);
lean_ctor_set(v_reuseFailAlloc_2308_, 1, v_invFn_x3f_2263_);
lean_ctor_set(v_reuseFailAlloc_2308_, 2, v_semiringId_x3f_2264_);
lean_ctor_set(v_reuseFailAlloc_2308_, 3, v_commSemiringInst_2265_);
lean_ctor_set(v_reuseFailAlloc_2308_, 4, v_commRingInst_2266_);
lean_ctor_set(v_reuseFailAlloc_2308_, 5, v_noZeroDivInst_x3f_2267_);
lean_ctor_set(v_reuseFailAlloc_2308_, 6, v_fieldInst_x3f_2268_);
lean_ctor_set(v_reuseFailAlloc_2308_, 7, v_powIdentityInst_x3f_2269_);
lean_ctor_set(v_reuseFailAlloc_2308_, 8, v_denoteEntries_2270_);
lean_ctor_set(v_reuseFailAlloc_2308_, 9, v_nextId_2271_);
lean_ctor_set(v_reuseFailAlloc_2308_, 10, v_steps_2272_);
lean_ctor_set(v_reuseFailAlloc_2308_, 11, v_queue_2273_);
lean_ctor_set(v_reuseFailAlloc_2308_, 12, v_basis_2274_);
lean_ctor_set(v_reuseFailAlloc_2308_, 13, v_diseqs_2275_);
lean_ctor_set(v_reuseFailAlloc_2308_, 14, v_invSet_2277_);
lean_ctor_set(v_reuseFailAlloc_2308_, 15, v_powIdentityVarCount_2278_);
lean_ctor_set(v_reuseFailAlloc_2308_, 16, v_numEq0_x3f_2279_);
lean_ctor_set_uint8(v_reuseFailAlloc_2308_, sizeof(void*)*17, v_recheck_2276_);
lean_ctor_set_uint8(v_reuseFailAlloc_2308_, sizeof(void*)*17 + 1, v_numEq0Updated_2280_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2(lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_){
_start:
{
lean_object* v___x_2325_; 
v___x_2325_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_);
if (lean_obj_tag(v___x_2325_) == 0)
{
lean_object* v_a_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2369_; 
v_a_2326_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2328_ = v___x_2325_;
v_isShared_2329_ = v_isSharedCheck_2369_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_a_2326_);
lean_dec(v___x_2325_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2369_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v_toRing_2330_; lean_object* v_addFn_x3f_2331_; 
v_toRing_2330_ = lean_ctor_get(v_a_2326_, 0);
lean_inc_ref(v_toRing_2330_);
lean_dec(v_a_2326_);
v_addFn_x3f_2331_ = lean_ctor_get(v_toRing_2330_, 6);
if (lean_obj_tag(v_addFn_x3f_2331_) == 1)
{
lean_object* v_val_2332_; lean_object* v___x_2334_; 
lean_inc_ref(v_addFn_x3f_2331_);
lean_dec_ref(v_toRing_2330_);
v_val_2332_ = lean_ctor_get(v_addFn_x3f_2331_, 0);
lean_inc(v_val_2332_);
lean_dec_ref_known(v_addFn_x3f_2331_, 1);
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 0, v_val_2332_);
v___x_2334_ = v___x_2328_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_val_2332_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
else
{
lean_object* v_type_2336_; lean_object* v_u_2337_; lean_object* v_semiringInst_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v_expectedInst_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
lean_del_object(v___x_2328_);
v_type_2336_ = lean_ctor_get(v_toRing_2330_, 1);
lean_inc_ref_n(v_type_2336_, 3);
v_u_2337_ = lean_ctor_get(v_toRing_2330_, 2);
lean_inc_n(v_u_2337_, 2);
v_semiringInst_2338_ = lean_ctor_get(v_toRing_2330_, 4);
lean_inc_ref(v_semiringInst_2338_);
lean_dec_ref(v_toRing_2330_);
v___x_2339_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__1));
v___x_2340_ = lean_box(0);
v___x_2341_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2341_, 0, v_u_2337_);
lean_ctor_set(v___x_2341_, 1, v___x_2340_);
lean_inc_ref(v___x_2341_);
v___x_2342_ = l_Lean_mkConst(v___x_2339_, v___x_2341_);
v___x_2343_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4));
v___x_2344_ = l_Lean_mkConst(v___x_2343_, v___x_2341_);
v___x_2345_ = l_Lean_mkAppB(v___x_2344_, v_type_2336_, v_semiringInst_2338_);
v_expectedInst_2346_ = l_Lean_mkAppB(v___x_2342_, v_type_2336_, v___x_2345_);
v___x_2347_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__6));
v___x_2348_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8));
v___x_2349_ = l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3(v_type_2336_, v_u_2337_, v___x_2347_, v___x_2348_, v_expectedInst_2346_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_);
if (lean_obj_tag(v___x_2349_) == 0)
{
lean_object* v_a_2350_; lean_object* v___f_2351_; lean_object* v___x_2352_; 
v_a_2350_ = lean_ctor_get(v___x_2349_, 0);
lean_inc_n(v_a_2350_, 2);
lean_dec_ref_known(v___x_2349_, 1);
v___f_2351_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2___lam__0), 2, 1);
lean_closure_set(v___f_2351_, 0, v_a_2350_);
v___x_2352_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing(v___f_2351_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_);
if (lean_obj_tag(v___x_2352_) == 0)
{
lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2359_; 
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2359_ == 0)
{
lean_object* v_unused_2360_; 
v_unused_2360_ = lean_ctor_get(v___x_2352_, 0);
lean_dec(v_unused_2360_);
v___x_2354_ = v___x_2352_;
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
else
{
lean_dec(v___x_2352_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 0, v_a_2350_);
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_a_2350_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
else
{
lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2368_; 
lean_dec(v_a_2350_);
v_a_2361_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2368_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2363_ = v___x_2352_;
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_dec(v___x_2352_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2366_; 
if (v_isShared_2364_ == 0)
{
v___x_2366_ = v___x_2363_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_a_2361_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
}
}
else
{
return v___x_2349_;
}
}
}
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2377_; 
v_a_2370_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2372_ = v___x_2325_;
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v___x_2325_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2375_; 
if (v_isShared_2373_ == 0)
{
v___x_2375_ = v___x_2372_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2370_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2___boxed(lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_){
_start:
{
lean_object* v_res_2390_; 
v_res_2390_ = l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2(v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v___y_2380_);
lean_dec(v___y_2379_);
lean_dec(v___y_2378_);
return v_res_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0_spec__3(lean_object* v_type_2391_, lean_object* v_u_2392_, lean_object* v_instDeclName_2393_, lean_object* v_declName_2394_, lean_object* v_expectedInst_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_){
_start:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2408_ = lean_box(0);
v___x_2409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2409_, 0, v_u_2392_);
lean_ctor_set(v___x_2409_, 1, v___x_2408_);
lean_inc_ref(v___x_2409_);
v___x_2410_ = l_Lean_mkConst(v_instDeclName_2393_, v___x_2409_);
lean_inc_ref(v_type_2391_);
v___x_2411_ = l_Lean_Expr_app___override(v___x_2410_, v_type_2391_);
v___x_2412_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg(v___x_2411_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v_a_2413_; lean_object* v___x_2414_; 
v_a_2413_ = lean_ctor_get(v___x_2412_, 0);
lean_inc_n(v_a_2413_, 2);
lean_dec_ref_known(v___x_2412_, 1);
lean_inc(v_declName_2394_);
v___x_2414_ = l_Lean_Meta_Grind_Arith_CommRing_checkInst(v_declName_2394_, v_a_2413_, v_expectedInst_2395_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
lean_dec_ref_known(v___x_2414_, 1);
v___x_2415_ = l_Lean_mkConst(v_declName_2394_, v___x_2409_);
v___x_2416_ = l_Lean_mkAppB(v___x_2415_, v_type_2391_, v_a_2413_);
v___x_2417_ = l_Lean_Meta_Sym_canon(v___x_2416_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2419_; 
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
lean_inc(v_a_2418_);
lean_dec_ref_known(v___x_2417_, 1);
v___x_2419_ = l_Lean_Meta_Sym_shareCommon(v_a_2418_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
return v___x_2419_;
}
else
{
return v___x_2417_;
}
}
else
{
lean_object* v_a_2420_; lean_object* v___x_2422_; uint8_t v_isShared_2423_; uint8_t v_isSharedCheck_2427_; 
lean_dec(v_a_2413_);
lean_dec_ref_known(v___x_2409_, 2);
lean_dec(v_declName_2394_);
lean_dec_ref(v_type_2391_);
v_a_2420_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2422_ = v___x_2414_;
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
else
{
lean_inc(v_a_2420_);
lean_dec(v___x_2414_);
v___x_2422_ = lean_box(0);
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
v_resetjp_2421_:
{
lean_object* v___x_2425_; 
if (v_isShared_2423_ == 0)
{
v___x_2425_ = v___x_2422_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_a_2420_);
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
else
{
lean_dec_ref_known(v___x_2409_, 2);
lean_dec_ref(v_expectedInst_2395_);
lean_dec(v_declName_2394_);
lean_dec_ref(v_type_2391_);
return v___x_2412_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0_spec__3___boxed(lean_object** _args){
lean_object* v_type_2428_ = _args[0];
lean_object* v_u_2429_ = _args[1];
lean_object* v_instDeclName_2430_ = _args[2];
lean_object* v_declName_2431_ = _args[3];
lean_object* v_expectedInst_2432_ = _args[4];
lean_object* v___y_2433_ = _args[5];
lean_object* v___y_2434_ = _args[6];
lean_object* v___y_2435_ = _args[7];
lean_object* v___y_2436_ = _args[8];
lean_object* v___y_2437_ = _args[9];
lean_object* v___y_2438_ = _args[10];
lean_object* v___y_2439_ = _args[11];
lean_object* v___y_2440_ = _args[12];
lean_object* v___y_2441_ = _args[13];
lean_object* v___y_2442_ = _args[14];
lean_object* v___y_2443_ = _args[15];
lean_object* v___y_2444_ = _args[16];
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0_spec__3(v_type_2428_, v_u_2429_, v_instDeclName_2430_, v_declName_2431_, v_expectedInst_2432_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_);
lean_dec(v___y_2443_);
lean_dec_ref(v___y_2442_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
lean_dec(v___y_2439_);
lean_dec_ref(v___y_2438_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec(v___y_2435_);
lean_dec(v___y_2434_);
lean_dec(v___y_2433_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___lam__0(lean_object* v_a_2446_, lean_object* v_s_2447_){
_start:
{
lean_object* v_toRing_2448_; lean_object* v_invFn_x3f_2449_; lean_object* v_semiringId_x3f_2450_; lean_object* v_commSemiringInst_2451_; lean_object* v_commRingInst_2452_; lean_object* v_noZeroDivInst_x3f_2453_; lean_object* v_fieldInst_x3f_2454_; lean_object* v_powIdentityInst_x3f_2455_; lean_object* v_denoteEntries_2456_; lean_object* v_nextId_2457_; lean_object* v_steps_2458_; lean_object* v_queue_2459_; lean_object* v_basis_2460_; lean_object* v_diseqs_2461_; uint8_t v_recheck_2462_; lean_object* v_invSet_2463_; lean_object* v_powIdentityVarCount_2464_; lean_object* v_numEq0_x3f_2465_; uint8_t v_numEq0Updated_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2498_; 
v_toRing_2448_ = lean_ctor_get(v_s_2447_, 0);
v_invFn_x3f_2449_ = lean_ctor_get(v_s_2447_, 1);
v_semiringId_x3f_2450_ = lean_ctor_get(v_s_2447_, 2);
v_commSemiringInst_2451_ = lean_ctor_get(v_s_2447_, 3);
v_commRingInst_2452_ = lean_ctor_get(v_s_2447_, 4);
v_noZeroDivInst_x3f_2453_ = lean_ctor_get(v_s_2447_, 5);
v_fieldInst_x3f_2454_ = lean_ctor_get(v_s_2447_, 6);
v_powIdentityInst_x3f_2455_ = lean_ctor_get(v_s_2447_, 7);
v_denoteEntries_2456_ = lean_ctor_get(v_s_2447_, 8);
v_nextId_2457_ = lean_ctor_get(v_s_2447_, 9);
v_steps_2458_ = lean_ctor_get(v_s_2447_, 10);
v_queue_2459_ = lean_ctor_get(v_s_2447_, 11);
v_basis_2460_ = lean_ctor_get(v_s_2447_, 12);
v_diseqs_2461_ = lean_ctor_get(v_s_2447_, 13);
v_recheck_2462_ = lean_ctor_get_uint8(v_s_2447_, sizeof(void*)*17);
v_invSet_2463_ = lean_ctor_get(v_s_2447_, 14);
v_powIdentityVarCount_2464_ = lean_ctor_get(v_s_2447_, 15);
v_numEq0_x3f_2465_ = lean_ctor_get(v_s_2447_, 16);
v_numEq0Updated_2466_ = lean_ctor_get_uint8(v_s_2447_, sizeof(void*)*17 + 1);
v_isSharedCheck_2498_ = !lean_is_exclusive(v_s_2447_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2468_ = v_s_2447_;
v_isShared_2469_ = v_isSharedCheck_2498_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_numEq0_x3f_2465_);
lean_inc(v_powIdentityVarCount_2464_);
lean_inc(v_invSet_2463_);
lean_inc(v_diseqs_2461_);
lean_inc(v_basis_2460_);
lean_inc(v_queue_2459_);
lean_inc(v_steps_2458_);
lean_inc(v_nextId_2457_);
lean_inc(v_denoteEntries_2456_);
lean_inc(v_powIdentityInst_x3f_2455_);
lean_inc(v_fieldInst_x3f_2454_);
lean_inc(v_noZeroDivInst_x3f_2453_);
lean_inc(v_commRingInst_2452_);
lean_inc(v_commSemiringInst_2451_);
lean_inc(v_semiringId_x3f_2450_);
lean_inc(v_invFn_x3f_2449_);
lean_inc(v_toRing_2448_);
lean_dec(v_s_2447_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2498_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v_id_2470_; lean_object* v_type_2471_; lean_object* v_u_2472_; lean_object* v_ringInst_2473_; lean_object* v_semiringInst_2474_; lean_object* v_charInst_x3f_2475_; lean_object* v_addFn_x3f_2476_; lean_object* v_mulFn_x3f_2477_; lean_object* v_subFn_x3f_2478_; lean_object* v_powFn_x3f_2479_; lean_object* v_intCastFn_x3f_2480_; lean_object* v_natCastFn_x3f_2481_; lean_object* v_one_x3f_2482_; lean_object* v_vars_2483_; lean_object* v_varMap_2484_; lean_object* v_denote_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2496_; 
v_id_2470_ = lean_ctor_get(v_toRing_2448_, 0);
v_type_2471_ = lean_ctor_get(v_toRing_2448_, 1);
v_u_2472_ = lean_ctor_get(v_toRing_2448_, 2);
v_ringInst_2473_ = lean_ctor_get(v_toRing_2448_, 3);
v_semiringInst_2474_ = lean_ctor_get(v_toRing_2448_, 4);
v_charInst_x3f_2475_ = lean_ctor_get(v_toRing_2448_, 5);
v_addFn_x3f_2476_ = lean_ctor_get(v_toRing_2448_, 6);
v_mulFn_x3f_2477_ = lean_ctor_get(v_toRing_2448_, 7);
v_subFn_x3f_2478_ = lean_ctor_get(v_toRing_2448_, 8);
v_powFn_x3f_2479_ = lean_ctor_get(v_toRing_2448_, 10);
v_intCastFn_x3f_2480_ = lean_ctor_get(v_toRing_2448_, 11);
v_natCastFn_x3f_2481_ = lean_ctor_get(v_toRing_2448_, 12);
v_one_x3f_2482_ = lean_ctor_get(v_toRing_2448_, 13);
v_vars_2483_ = lean_ctor_get(v_toRing_2448_, 14);
v_varMap_2484_ = lean_ctor_get(v_toRing_2448_, 15);
v_denote_2485_ = lean_ctor_get(v_toRing_2448_, 16);
v_isSharedCheck_2496_ = !lean_is_exclusive(v_toRing_2448_);
if (v_isSharedCheck_2496_ == 0)
{
lean_object* v_unused_2497_; 
v_unused_2497_ = lean_ctor_get(v_toRing_2448_, 9);
lean_dec(v_unused_2497_);
v___x_2487_ = v_toRing_2448_;
v_isShared_2488_ = v_isSharedCheck_2496_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_denote_2485_);
lean_inc(v_varMap_2484_);
lean_inc(v_vars_2483_);
lean_inc(v_one_x3f_2482_);
lean_inc(v_natCastFn_x3f_2481_);
lean_inc(v_intCastFn_x3f_2480_);
lean_inc(v_powFn_x3f_2479_);
lean_inc(v_subFn_x3f_2478_);
lean_inc(v_mulFn_x3f_2477_);
lean_inc(v_addFn_x3f_2476_);
lean_inc(v_charInst_x3f_2475_);
lean_inc(v_semiringInst_2474_);
lean_inc(v_ringInst_2473_);
lean_inc(v_u_2472_);
lean_inc(v_type_2471_);
lean_inc(v_id_2470_);
lean_dec(v_toRing_2448_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2496_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2489_; lean_object* v___x_2491_; 
v___x_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2489_, 0, v_a_2446_);
if (v_isShared_2488_ == 0)
{
lean_ctor_set(v___x_2487_, 9, v___x_2489_);
v___x_2491_ = v___x_2487_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v_id_2470_);
lean_ctor_set(v_reuseFailAlloc_2495_, 1, v_type_2471_);
lean_ctor_set(v_reuseFailAlloc_2495_, 2, v_u_2472_);
lean_ctor_set(v_reuseFailAlloc_2495_, 3, v_ringInst_2473_);
lean_ctor_set(v_reuseFailAlloc_2495_, 4, v_semiringInst_2474_);
lean_ctor_set(v_reuseFailAlloc_2495_, 5, v_charInst_x3f_2475_);
lean_ctor_set(v_reuseFailAlloc_2495_, 6, v_addFn_x3f_2476_);
lean_ctor_set(v_reuseFailAlloc_2495_, 7, v_mulFn_x3f_2477_);
lean_ctor_set(v_reuseFailAlloc_2495_, 8, v_subFn_x3f_2478_);
lean_ctor_set(v_reuseFailAlloc_2495_, 9, v___x_2489_);
lean_ctor_set(v_reuseFailAlloc_2495_, 10, v_powFn_x3f_2479_);
lean_ctor_set(v_reuseFailAlloc_2495_, 11, v_intCastFn_x3f_2480_);
lean_ctor_set(v_reuseFailAlloc_2495_, 12, v_natCastFn_x3f_2481_);
lean_ctor_set(v_reuseFailAlloc_2495_, 13, v_one_x3f_2482_);
lean_ctor_set(v_reuseFailAlloc_2495_, 14, v_vars_2483_);
lean_ctor_set(v_reuseFailAlloc_2495_, 15, v_varMap_2484_);
lean_ctor_set(v_reuseFailAlloc_2495_, 16, v_denote_2485_);
v___x_2491_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
lean_object* v___x_2493_; 
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 0, v___x_2491_);
v___x_2493_ = v___x_2468_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v___x_2491_);
lean_ctor_set(v_reuseFailAlloc_2494_, 1, v_invFn_x3f_2449_);
lean_ctor_set(v_reuseFailAlloc_2494_, 2, v_semiringId_x3f_2450_);
lean_ctor_set(v_reuseFailAlloc_2494_, 3, v_commSemiringInst_2451_);
lean_ctor_set(v_reuseFailAlloc_2494_, 4, v_commRingInst_2452_);
lean_ctor_set(v_reuseFailAlloc_2494_, 5, v_noZeroDivInst_x3f_2453_);
lean_ctor_set(v_reuseFailAlloc_2494_, 6, v_fieldInst_x3f_2454_);
lean_ctor_set(v_reuseFailAlloc_2494_, 7, v_powIdentityInst_x3f_2455_);
lean_ctor_set(v_reuseFailAlloc_2494_, 8, v_denoteEntries_2456_);
lean_ctor_set(v_reuseFailAlloc_2494_, 9, v_nextId_2457_);
lean_ctor_set(v_reuseFailAlloc_2494_, 10, v_steps_2458_);
lean_ctor_set(v_reuseFailAlloc_2494_, 11, v_queue_2459_);
lean_ctor_set(v_reuseFailAlloc_2494_, 12, v_basis_2460_);
lean_ctor_set(v_reuseFailAlloc_2494_, 13, v_diseqs_2461_);
lean_ctor_set(v_reuseFailAlloc_2494_, 14, v_invSet_2463_);
lean_ctor_set(v_reuseFailAlloc_2494_, 15, v_powIdentityVarCount_2464_);
lean_ctor_set(v_reuseFailAlloc_2494_, 16, v_numEq0_x3f_2465_);
lean_ctor_set_uint8(v_reuseFailAlloc_2494_, sizeof(void*)*17, v_recheck_2462_);
lean_ctor_set_uint8(v_reuseFailAlloc_2494_, sizeof(void*)*17 + 1, v_numEq0Updated_2466_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
return v___x_2493_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0(lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_){
_start:
{
lean_object* v___x_2524_; 
v___x_2524_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_);
if (lean_obj_tag(v___x_2524_) == 0)
{
lean_object* v_a_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2565_; 
v_a_2525_ = lean_ctor_get(v___x_2524_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___x_2524_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2527_ = v___x_2524_;
v_isShared_2528_ = v_isSharedCheck_2565_;
goto v_resetjp_2526_;
}
else
{
lean_inc(v_a_2525_);
lean_dec(v___x_2524_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2565_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v_toRing_2529_; lean_object* v_negFn_x3f_2530_; 
v_toRing_2529_ = lean_ctor_get(v_a_2525_, 0);
lean_inc_ref(v_toRing_2529_);
lean_dec(v_a_2525_);
v_negFn_x3f_2530_ = lean_ctor_get(v_toRing_2529_, 9);
if (lean_obj_tag(v_negFn_x3f_2530_) == 1)
{
lean_object* v_val_2531_; lean_object* v___x_2533_; 
lean_inc_ref(v_negFn_x3f_2530_);
lean_dec_ref(v_toRing_2529_);
v_val_2531_ = lean_ctor_get(v_negFn_x3f_2530_, 0);
lean_inc(v_val_2531_);
lean_dec_ref_known(v_negFn_x3f_2530_, 1);
if (v_isShared_2528_ == 0)
{
lean_ctor_set(v___x_2527_, 0, v_val_2531_);
v___x_2533_ = v___x_2527_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_val_2531_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
}
}
else
{
lean_object* v_type_2535_; lean_object* v_u_2536_; lean_object* v_ringInst_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v_expectedInst_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; 
lean_del_object(v___x_2527_);
v_type_2535_ = lean_ctor_get(v_toRing_2529_, 1);
lean_inc_ref_n(v_type_2535_, 2);
v_u_2536_ = lean_ctor_get(v_toRing_2529_, 2);
lean_inc_n(v_u_2536_, 2);
v_ringInst_2537_ = lean_ctor_get(v_toRing_2529_, 3);
lean_inc_ref(v_ringInst_2537_);
lean_dec_ref(v_toRing_2529_);
v___x_2538_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1));
v___x_2539_ = lean_box(0);
v___x_2540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2540_, 0, v_u_2536_);
lean_ctor_set(v___x_2540_, 1, v___x_2539_);
v___x_2541_ = l_Lean_mkConst(v___x_2538_, v___x_2540_);
v_expectedInst_2542_ = l_Lean_mkAppB(v___x_2541_, v_type_2535_, v_ringInst_2537_);
v___x_2543_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__3));
v___x_2544_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__5));
v___x_2545_ = l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0_spec__3(v_type_2535_, v_u_2536_, v___x_2543_, v___x_2544_, v_expectedInst_2542_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_);
if (lean_obj_tag(v___x_2545_) == 0)
{
lean_object* v_a_2546_; lean_object* v___f_2547_; lean_object* v___x_2548_; 
v_a_2546_ = lean_ctor_get(v___x_2545_, 0);
lean_inc_n(v_a_2546_, 2);
lean_dec_ref_known(v___x_2545_, 1);
v___f_2547_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___lam__0), 2, 1);
lean_closure_set(v___f_2547_, 0, v_a_2546_);
v___x_2548_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing(v___f_2547_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_);
if (lean_obj_tag(v___x_2548_) == 0)
{
lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2555_; 
v_isSharedCheck_2555_ = !lean_is_exclusive(v___x_2548_);
if (v_isSharedCheck_2555_ == 0)
{
lean_object* v_unused_2556_; 
v_unused_2556_ = lean_ctor_get(v___x_2548_, 0);
lean_dec(v_unused_2556_);
v___x_2550_ = v___x_2548_;
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
else
{
lean_dec(v___x_2548_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___x_2553_; 
if (v_isShared_2551_ == 0)
{
lean_ctor_set(v___x_2550_, 0, v_a_2546_);
v___x_2553_ = v___x_2550_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v_a_2546_);
v___x_2553_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
return v___x_2553_;
}
}
}
else
{
lean_object* v_a_2557_; lean_object* v___x_2559_; uint8_t v_isShared_2560_; uint8_t v_isSharedCheck_2564_; 
lean_dec(v_a_2546_);
v_a_2557_ = lean_ctor_get(v___x_2548_, 0);
v_isSharedCheck_2564_ = !lean_is_exclusive(v___x_2548_);
if (v_isSharedCheck_2564_ == 0)
{
v___x_2559_ = v___x_2548_;
v_isShared_2560_ = v_isSharedCheck_2564_;
goto v_resetjp_2558_;
}
else
{
lean_inc(v_a_2557_);
lean_dec(v___x_2548_);
v___x_2559_ = lean_box(0);
v_isShared_2560_ = v_isSharedCheck_2564_;
goto v_resetjp_2558_;
}
v_resetjp_2558_:
{
lean_object* v___x_2562_; 
if (v_isShared_2560_ == 0)
{
v___x_2562_ = v___x_2559_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v_a_2557_);
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
else
{
return v___x_2545_;
}
}
}
}
else
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2573_; 
v_a_2566_ = lean_ctor_get(v___x_2524_, 0);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2524_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2568_ = v___x_2524_;
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v___x_2524_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v___x_2571_; 
if (v_isShared_2569_ == 0)
{
v___x_2571_ = v___x_2568_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_a_2566_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___boxed(lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_){
_start:
{
lean_object* v_res_2586_; 
v_res_2586_ = l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0(v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
lean_dec(v___y_2584_);
lean_dec_ref(v___y_2583_);
lean_dec(v___y_2582_);
lean_dec_ref(v___y_2581_);
lean_dec(v___y_2580_);
lean_dec_ref(v___y_2579_);
lean_dec(v___y_2578_);
lean_dec_ref(v___y_2577_);
lean_dec(v___y_2576_);
lean_dec(v___y_2575_);
lean_dec(v___y_2574_);
return v_res_2586_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__4(void){
_start:
{
lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2594_ = lean_unsigned_to_nat(0u);
v___x_2595_ = lean_nat_to_int(v___x_2594_);
return v___x_2595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0(lean_object* v_k_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_){
_start:
{
lean_object* v___x_2614_; 
v___x_2614_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_);
if (lean_obj_tag(v___x_2614_) == 0)
{
lean_object* v_a_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2676_; 
v_a_2615_ = lean_ctor_get(v___x_2614_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2617_ = v___x_2614_;
v_isShared_2618_ = v_isSharedCheck_2676_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_a_2615_);
lean_dec(v___x_2614_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2676_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v_toRing_2619_; lean_object* v_type_2620_; lean_object* v_u_2621_; lean_object* v_semiringInst_2622_; lean_object* v___x_2623_; lean_object* v_n_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v_ofNatInst_2629_; lean_object* v___y_2630_; lean_object* v___y_2631_; lean_object* v___y_2632_; lean_object* v___y_2633_; lean_object* v___y_2634_; lean_object* v___y_2635_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2638_; lean_object* v___y_2639_; lean_object* v___y_2640_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; 
v_toRing_2619_ = lean_ctor_get(v_a_2615_, 0);
lean_inc_ref(v_toRing_2619_);
lean_dec(v_a_2615_);
v_type_2620_ = lean_ctor_get(v_toRing_2619_, 1);
lean_inc_ref_n(v_type_2620_, 2);
v_u_2621_ = lean_ctor_get(v_toRing_2619_, 2);
lean_inc(v_u_2621_);
v_semiringInst_2622_ = lean_ctor_get(v_toRing_2619_, 4);
lean_inc_ref(v_semiringInst_2622_);
lean_dec_ref(v_toRing_2619_);
v___x_2623_ = lean_nat_abs(v_k_2601_);
v_n_2624_ = l_Lean_mkRawNatLit(v___x_2623_);
v___x_2625_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__1));
v___x_2626_ = lean_box(0);
v___x_2627_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2627_, 0, v_u_2621_);
lean_ctor_set(v___x_2627_, 1, v___x_2626_);
lean_inc_ref(v___x_2627_);
v___x_2659_ = l_Lean_mkConst(v___x_2625_, v___x_2627_);
lean_inc_ref(v_n_2624_);
v___x_2660_ = l_Lean_mkAppB(v___x_2659_, v_type_2620_, v_n_2624_);
v___x_2661_ = lean_box(0);
v___x_2662_ = l_Lean_Meta_synthInstance_x3f(v___x_2660_, v___x_2661_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_);
if (lean_obj_tag(v___x_2662_) == 0)
{
lean_object* v_a_2663_; 
v_a_2663_ = lean_ctor_get(v___x_2662_, 0);
lean_inc(v_a_2663_);
lean_dec_ref_known(v___x_2662_, 1);
if (lean_obj_tag(v_a_2663_) == 1)
{
lean_object* v_val_2664_; 
lean_dec_ref(v_semiringInst_2622_);
v_val_2664_ = lean_ctor_get(v_a_2663_, 0);
lean_inc(v_val_2664_);
lean_dec_ref_known(v_a_2663_, 1);
v_ofNatInst_2629_ = v_val_2664_;
v___y_2630_ = v___y_2602_;
v___y_2631_ = v___y_2603_;
v___y_2632_ = v___y_2604_;
v___y_2633_ = v___y_2605_;
v___y_2634_ = v___y_2606_;
v___y_2635_ = v___y_2607_;
v___y_2636_ = v___y_2608_;
v___y_2637_ = v___y_2609_;
v___y_2638_ = v___y_2610_;
v___y_2639_ = v___y_2611_;
v___y_2640_ = v___y_2612_;
goto v___jp_2628_;
}
else
{
lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; 
lean_dec(v_a_2663_);
v___x_2665_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5));
lean_inc_ref(v___x_2627_);
v___x_2666_ = l_Lean_mkConst(v___x_2665_, v___x_2627_);
lean_inc_ref(v_n_2624_);
lean_inc_ref(v_type_2620_);
v___x_2667_ = l_Lean_mkApp3(v___x_2666_, v_type_2620_, v_semiringInst_2622_, v_n_2624_);
v_ofNatInst_2629_ = v___x_2667_;
v___y_2630_ = v___y_2602_;
v___y_2631_ = v___y_2603_;
v___y_2632_ = v___y_2604_;
v___y_2633_ = v___y_2605_;
v___y_2634_ = v___y_2606_;
v___y_2635_ = v___y_2607_;
v___y_2636_ = v___y_2608_;
v___y_2637_ = v___y_2609_;
v___y_2638_ = v___y_2610_;
v___y_2639_ = v___y_2611_;
v___y_2640_ = v___y_2612_;
goto v___jp_2628_;
}
}
else
{
lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2675_; 
lean_dec_ref_known(v___x_2627_, 2);
lean_dec_ref(v_n_2624_);
lean_dec_ref(v_semiringInst_2622_);
lean_dec_ref(v_type_2620_);
lean_del_object(v___x_2617_);
v_a_2668_ = lean_ctor_get(v___x_2662_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2662_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2670_ = v___x_2662_;
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_dec(v___x_2662_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2673_; 
if (v_isShared_2671_ == 0)
{
v___x_2673_ = v___x_2670_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_a_2668_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
return v___x_2673_;
}
}
}
v___jp_2628_:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v_n_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; 
v___x_2641_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__3));
v___x_2642_ = l_Lean_mkConst(v___x_2641_, v___x_2627_);
v_n_2643_ = l_Lean_mkApp3(v___x_2642_, v_type_2620_, v_n_2624_, v_ofNatInst_2629_);
v___x_2644_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__4, &l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__4_once, _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__4);
v___x_2645_ = lean_int_dec_lt(v_k_2601_, v___x_2644_);
if (v___x_2645_ == 0)
{
lean_object* v___x_2647_; 
if (v_isShared_2618_ == 0)
{
lean_ctor_set(v___x_2617_, 0, v_n_2643_);
v___x_2647_ = v___x_2617_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_n_2643_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
else
{
lean_object* v___x_2649_; 
lean_del_object(v___x_2617_);
v___x_2649_ = l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0(v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v_a_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2658_; 
v_a_2650_ = lean_ctor_get(v___x_2649_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2649_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2652_ = v___x_2649_;
v_isShared_2653_ = v_isSharedCheck_2658_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_a_2650_);
lean_dec(v___x_2649_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2658_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2654_; lean_object* v___x_2656_; 
v___x_2654_ = l_Lean_Expr_app___override(v_a_2650_, v_n_2643_);
if (v_isShared_2653_ == 0)
{
lean_ctor_set(v___x_2652_, 0, v___x_2654_);
v___x_2656_ = v___x_2652_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v___x_2654_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
return v___x_2656_;
}
}
}
else
{
lean_dec_ref(v_n_2643_);
return v___x_2649_;
}
}
}
}
}
else
{
lean_object* v_a_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2684_; 
v_a_2677_ = lean_ctor_get(v___x_2614_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2679_ = v___x_2614_;
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_a_2677_);
lean_dec(v___x_2614_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2682_; 
if (v_isShared_2680_ == 0)
{
v___x_2682_ = v___x_2679_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v_a_2677_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___boxed(lean_object* v_k_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_){
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0(v_k_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
lean_dec(v___y_2696_);
lean_dec_ref(v___y_2695_);
lean_dec(v___y_2694_);
lean_dec_ref(v___y_2693_);
lean_dec(v___y_2692_);
lean_dec_ref(v___y_2691_);
lean_dec(v___y_2690_);
lean_dec_ref(v___y_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec(v_k_2685_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4___lam__0(lean_object* v_a_2699_, lean_object* v_s_2700_){
_start:
{
lean_object* v_toRing_2701_; lean_object* v_invFn_x3f_2702_; lean_object* v_semiringId_x3f_2703_; lean_object* v_commSemiringInst_2704_; lean_object* v_commRingInst_2705_; lean_object* v_noZeroDivInst_x3f_2706_; lean_object* v_fieldInst_x3f_2707_; lean_object* v_powIdentityInst_x3f_2708_; lean_object* v_denoteEntries_2709_; lean_object* v_nextId_2710_; lean_object* v_steps_2711_; lean_object* v_queue_2712_; lean_object* v_basis_2713_; lean_object* v_diseqs_2714_; uint8_t v_recheck_2715_; lean_object* v_invSet_2716_; lean_object* v_powIdentityVarCount_2717_; lean_object* v_numEq0_x3f_2718_; uint8_t v_numEq0Updated_2719_; lean_object* v___x_2721_; uint8_t v_isShared_2722_; uint8_t v_isSharedCheck_2751_; 
v_toRing_2701_ = lean_ctor_get(v_s_2700_, 0);
v_invFn_x3f_2702_ = lean_ctor_get(v_s_2700_, 1);
v_semiringId_x3f_2703_ = lean_ctor_get(v_s_2700_, 2);
v_commSemiringInst_2704_ = lean_ctor_get(v_s_2700_, 3);
v_commRingInst_2705_ = lean_ctor_get(v_s_2700_, 4);
v_noZeroDivInst_x3f_2706_ = lean_ctor_get(v_s_2700_, 5);
v_fieldInst_x3f_2707_ = lean_ctor_get(v_s_2700_, 6);
v_powIdentityInst_x3f_2708_ = lean_ctor_get(v_s_2700_, 7);
v_denoteEntries_2709_ = lean_ctor_get(v_s_2700_, 8);
v_nextId_2710_ = lean_ctor_get(v_s_2700_, 9);
v_steps_2711_ = lean_ctor_get(v_s_2700_, 10);
v_queue_2712_ = lean_ctor_get(v_s_2700_, 11);
v_basis_2713_ = lean_ctor_get(v_s_2700_, 12);
v_diseqs_2714_ = lean_ctor_get(v_s_2700_, 13);
v_recheck_2715_ = lean_ctor_get_uint8(v_s_2700_, sizeof(void*)*17);
v_invSet_2716_ = lean_ctor_get(v_s_2700_, 14);
v_powIdentityVarCount_2717_ = lean_ctor_get(v_s_2700_, 15);
v_numEq0_x3f_2718_ = lean_ctor_get(v_s_2700_, 16);
v_numEq0Updated_2719_ = lean_ctor_get_uint8(v_s_2700_, sizeof(void*)*17 + 1);
v_isSharedCheck_2751_ = !lean_is_exclusive(v_s_2700_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2721_ = v_s_2700_;
v_isShared_2722_ = v_isSharedCheck_2751_;
goto v_resetjp_2720_;
}
else
{
lean_inc(v_numEq0_x3f_2718_);
lean_inc(v_powIdentityVarCount_2717_);
lean_inc(v_invSet_2716_);
lean_inc(v_diseqs_2714_);
lean_inc(v_basis_2713_);
lean_inc(v_queue_2712_);
lean_inc(v_steps_2711_);
lean_inc(v_nextId_2710_);
lean_inc(v_denoteEntries_2709_);
lean_inc(v_powIdentityInst_x3f_2708_);
lean_inc(v_fieldInst_x3f_2707_);
lean_inc(v_noZeroDivInst_x3f_2706_);
lean_inc(v_commRingInst_2705_);
lean_inc(v_commSemiringInst_2704_);
lean_inc(v_semiringId_x3f_2703_);
lean_inc(v_invFn_x3f_2702_);
lean_inc(v_toRing_2701_);
lean_dec(v_s_2700_);
v___x_2721_ = lean_box(0);
v_isShared_2722_ = v_isSharedCheck_2751_;
goto v_resetjp_2720_;
}
v_resetjp_2720_:
{
lean_object* v_id_2723_; lean_object* v_type_2724_; lean_object* v_u_2725_; lean_object* v_ringInst_2726_; lean_object* v_semiringInst_2727_; lean_object* v_charInst_x3f_2728_; lean_object* v_addFn_x3f_2729_; lean_object* v_mulFn_x3f_2730_; lean_object* v_subFn_x3f_2731_; lean_object* v_negFn_x3f_2732_; lean_object* v_intCastFn_x3f_2733_; lean_object* v_natCastFn_x3f_2734_; lean_object* v_one_x3f_2735_; lean_object* v_vars_2736_; lean_object* v_varMap_2737_; lean_object* v_denote_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2749_; 
v_id_2723_ = lean_ctor_get(v_toRing_2701_, 0);
v_type_2724_ = lean_ctor_get(v_toRing_2701_, 1);
v_u_2725_ = lean_ctor_get(v_toRing_2701_, 2);
v_ringInst_2726_ = lean_ctor_get(v_toRing_2701_, 3);
v_semiringInst_2727_ = lean_ctor_get(v_toRing_2701_, 4);
v_charInst_x3f_2728_ = lean_ctor_get(v_toRing_2701_, 5);
v_addFn_x3f_2729_ = lean_ctor_get(v_toRing_2701_, 6);
v_mulFn_x3f_2730_ = lean_ctor_get(v_toRing_2701_, 7);
v_subFn_x3f_2731_ = lean_ctor_get(v_toRing_2701_, 8);
v_negFn_x3f_2732_ = lean_ctor_get(v_toRing_2701_, 9);
v_intCastFn_x3f_2733_ = lean_ctor_get(v_toRing_2701_, 11);
v_natCastFn_x3f_2734_ = lean_ctor_get(v_toRing_2701_, 12);
v_one_x3f_2735_ = lean_ctor_get(v_toRing_2701_, 13);
v_vars_2736_ = lean_ctor_get(v_toRing_2701_, 14);
v_varMap_2737_ = lean_ctor_get(v_toRing_2701_, 15);
v_denote_2738_ = lean_ctor_get(v_toRing_2701_, 16);
v_isSharedCheck_2749_ = !lean_is_exclusive(v_toRing_2701_);
if (v_isSharedCheck_2749_ == 0)
{
lean_object* v_unused_2750_; 
v_unused_2750_ = lean_ctor_get(v_toRing_2701_, 10);
lean_dec(v_unused_2750_);
v___x_2740_ = v_toRing_2701_;
v_isShared_2741_ = v_isSharedCheck_2749_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_denote_2738_);
lean_inc(v_varMap_2737_);
lean_inc(v_vars_2736_);
lean_inc(v_one_x3f_2735_);
lean_inc(v_natCastFn_x3f_2734_);
lean_inc(v_intCastFn_x3f_2733_);
lean_inc(v_negFn_x3f_2732_);
lean_inc(v_subFn_x3f_2731_);
lean_inc(v_mulFn_x3f_2730_);
lean_inc(v_addFn_x3f_2729_);
lean_inc(v_charInst_x3f_2728_);
lean_inc(v_semiringInst_2727_);
lean_inc(v_ringInst_2726_);
lean_inc(v_u_2725_);
lean_inc(v_type_2724_);
lean_inc(v_id_2723_);
lean_dec(v_toRing_2701_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2749_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v___x_2742_; lean_object* v___x_2744_; 
v___x_2742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2742_, 0, v_a_2699_);
if (v_isShared_2741_ == 0)
{
lean_ctor_set(v___x_2740_, 10, v___x_2742_);
v___x_2744_ = v___x_2740_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_id_2723_);
lean_ctor_set(v_reuseFailAlloc_2748_, 1, v_type_2724_);
lean_ctor_set(v_reuseFailAlloc_2748_, 2, v_u_2725_);
lean_ctor_set(v_reuseFailAlloc_2748_, 3, v_ringInst_2726_);
lean_ctor_set(v_reuseFailAlloc_2748_, 4, v_semiringInst_2727_);
lean_ctor_set(v_reuseFailAlloc_2748_, 5, v_charInst_x3f_2728_);
lean_ctor_set(v_reuseFailAlloc_2748_, 6, v_addFn_x3f_2729_);
lean_ctor_set(v_reuseFailAlloc_2748_, 7, v_mulFn_x3f_2730_);
lean_ctor_set(v_reuseFailAlloc_2748_, 8, v_subFn_x3f_2731_);
lean_ctor_set(v_reuseFailAlloc_2748_, 9, v_negFn_x3f_2732_);
lean_ctor_set(v_reuseFailAlloc_2748_, 10, v___x_2742_);
lean_ctor_set(v_reuseFailAlloc_2748_, 11, v_intCastFn_x3f_2733_);
lean_ctor_set(v_reuseFailAlloc_2748_, 12, v_natCastFn_x3f_2734_);
lean_ctor_set(v_reuseFailAlloc_2748_, 13, v_one_x3f_2735_);
lean_ctor_set(v_reuseFailAlloc_2748_, 14, v_vars_2736_);
lean_ctor_set(v_reuseFailAlloc_2748_, 15, v_varMap_2737_);
lean_ctor_set(v_reuseFailAlloc_2748_, 16, v_denote_2738_);
v___x_2744_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
lean_object* v___x_2746_; 
if (v_isShared_2722_ == 0)
{
lean_ctor_set(v___x_2721_, 0, v___x_2744_);
v___x_2746_ = v___x_2721_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v___x_2744_);
lean_ctor_set(v_reuseFailAlloc_2747_, 1, v_invFn_x3f_2702_);
lean_ctor_set(v_reuseFailAlloc_2747_, 2, v_semiringId_x3f_2703_);
lean_ctor_set(v_reuseFailAlloc_2747_, 3, v_commSemiringInst_2704_);
lean_ctor_set(v_reuseFailAlloc_2747_, 4, v_commRingInst_2705_);
lean_ctor_set(v_reuseFailAlloc_2747_, 5, v_noZeroDivInst_x3f_2706_);
lean_ctor_set(v_reuseFailAlloc_2747_, 6, v_fieldInst_x3f_2707_);
lean_ctor_set(v_reuseFailAlloc_2747_, 7, v_powIdentityInst_x3f_2708_);
lean_ctor_set(v_reuseFailAlloc_2747_, 8, v_denoteEntries_2709_);
lean_ctor_set(v_reuseFailAlloc_2747_, 9, v_nextId_2710_);
lean_ctor_set(v_reuseFailAlloc_2747_, 10, v_steps_2711_);
lean_ctor_set(v_reuseFailAlloc_2747_, 11, v_queue_2712_);
lean_ctor_set(v_reuseFailAlloc_2747_, 12, v_basis_2713_);
lean_ctor_set(v_reuseFailAlloc_2747_, 13, v_diseqs_2714_);
lean_ctor_set(v_reuseFailAlloc_2747_, 14, v_invSet_2716_);
lean_ctor_set(v_reuseFailAlloc_2747_, 15, v_powIdentityVarCount_2717_);
lean_ctor_set(v_reuseFailAlloc_2747_, 16, v_numEq0_x3f_2718_);
lean_ctor_set_uint8(v_reuseFailAlloc_2747_, sizeof(void*)*17, v_recheck_2715_);
lean_ctor_set_uint8(v_reuseFailAlloc_2747_, sizeof(void*)*17 + 1, v_numEq0Updated_2719_);
v___x_2746_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
return v___x_2746_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__2(void){
_start:
{
lean_object* v___x_2755_; lean_object* v___x_2756_; 
v___x_2755_ = lean_unsigned_to_nat(0u);
v___x_2756_ = l_Lean_Level_ofNat(v___x_2755_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6(lean_object* v_u_2767_, lean_object* v_type_2768_, lean_object* v_semiringInst_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_){
_start:
{
lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2782_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__1));
v___x_2783_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__2);
v___x_2784_ = lean_box(0);
lean_inc(v_u_2767_);
v___x_2785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2785_, 0, v_u_2767_);
lean_ctor_set(v___x_2785_, 1, v___x_2784_);
lean_inc_ref(v___x_2785_);
v___x_2786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2783_);
lean_ctor_set(v___x_2786_, 1, v___x_2785_);
v___x_2787_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2787_, 0, v_u_2767_);
lean_ctor_set(v___x_2787_, 1, v___x_2786_);
lean_inc_ref(v___x_2787_);
v___x_2788_ = l_Lean_mkConst(v___x_2782_, v___x_2787_);
v___x_2789_ = l_Lean_Nat_mkType;
lean_inc_ref_n(v_type_2768_, 2);
v___x_2790_ = l_Lean_mkApp3(v___x_2788_, v_type_2768_, v___x_2789_, v_type_2768_);
v___x_2791_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg(v___x_2790_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v_a_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v_inst_x27_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; 
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
lean_inc_n(v_a_2792_, 2);
lean_dec_ref_known(v___x_2791_, 1);
v___x_2793_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4));
v___x_2794_ = l_Lean_mkConst(v___x_2793_, v___x_2785_);
lean_inc_ref(v_type_2768_);
v_inst_x27_2795_ = l_Lean_mkAppB(v___x_2794_, v_type_2768_, v_semiringInst_2769_);
v___x_2796_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__6));
v___x_2797_ = l_Lean_Meta_Grind_Arith_CommRing_checkInst(v___x_2796_, v_a_2792_, v_inst_x27_2795_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2797_) == 0)
{
lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; 
lean_dec_ref_known(v___x_2797_, 1);
v___x_2798_ = l_Lean_mkConst(v___x_2796_, v___x_2787_);
lean_inc_ref(v_type_2768_);
v___x_2799_ = l_Lean_mkApp4(v___x_2798_, v_type_2768_, v___x_2789_, v_type_2768_, v_a_2792_);
v___x_2800_ = l_Lean_Meta_Sym_canon(v___x_2799_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2800_) == 0)
{
lean_object* v_a_2801_; lean_object* v___x_2802_; 
v_a_2801_ = lean_ctor_get(v___x_2800_, 0);
lean_inc(v_a_2801_);
lean_dec_ref_known(v___x_2800_, 1);
v___x_2802_ = l_Lean_Meta_Sym_shareCommon(v_a_2801_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
return v___x_2802_;
}
else
{
return v___x_2800_;
}
}
else
{
lean_object* v_a_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2810_; 
lean_dec(v_a_2792_);
lean_dec_ref_known(v___x_2787_, 2);
lean_dec_ref(v_type_2768_);
v_a_2803_ = lean_ctor_get(v___x_2797_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2805_ = v___x_2797_;
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_a_2803_);
lean_dec(v___x_2797_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2808_; 
if (v_isShared_2806_ == 0)
{
v___x_2808_ = v___x_2805_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v_a_2803_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
return v___x_2808_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_2787_, 2);
lean_dec_ref_known(v___x_2785_, 2);
lean_dec_ref(v_semiringInst_2769_);
lean_dec_ref(v_type_2768_);
return v___x_2791_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___boxed(lean_object* v_u_2811_, lean_object* v_type_2812_, lean_object* v_semiringInst_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_){
_start:
{
lean_object* v_res_2826_; 
v_res_2826_ = l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6(v_u_2811_, v_type_2812_, v_semiringInst_2813_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
lean_dec(v___y_2824_);
lean_dec_ref(v___y_2823_);
lean_dec(v___y_2822_);
lean_dec_ref(v___y_2821_);
lean_dec(v___y_2820_);
lean_dec_ref(v___y_2819_);
lean_dec(v___y_2818_);
lean_dec_ref(v___y_2817_);
lean_dec(v___y_2816_);
lean_dec(v___y_2815_);
lean_dec(v___y_2814_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4(lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_){
_start:
{
lean_object* v___x_2839_; 
v___x_2839_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2839_) == 0)
{
lean_object* v_a_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2873_; 
v_a_2840_ = lean_ctor_get(v___x_2839_, 0);
v_isSharedCheck_2873_ = !lean_is_exclusive(v___x_2839_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2842_ = v___x_2839_;
v_isShared_2843_ = v_isSharedCheck_2873_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_a_2840_);
lean_dec(v___x_2839_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2873_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v_toRing_2844_; lean_object* v_powFn_x3f_2845_; 
v_toRing_2844_ = lean_ctor_get(v_a_2840_, 0);
lean_inc_ref(v_toRing_2844_);
lean_dec(v_a_2840_);
v_powFn_x3f_2845_ = lean_ctor_get(v_toRing_2844_, 10);
if (lean_obj_tag(v_powFn_x3f_2845_) == 1)
{
lean_object* v_val_2846_; lean_object* v___x_2848_; 
lean_inc_ref(v_powFn_x3f_2845_);
lean_dec_ref(v_toRing_2844_);
v_val_2846_ = lean_ctor_get(v_powFn_x3f_2845_, 0);
lean_inc(v_val_2846_);
lean_dec_ref_known(v_powFn_x3f_2845_, 1);
if (v_isShared_2843_ == 0)
{
lean_ctor_set(v___x_2842_, 0, v_val_2846_);
v___x_2848_ = v___x_2842_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v_val_2846_);
v___x_2848_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
return v___x_2848_;
}
}
else
{
lean_object* v_type_2850_; lean_object* v_u_2851_; lean_object* v_semiringInst_2852_; lean_object* v___x_2853_; 
lean_del_object(v___x_2842_);
v_type_2850_ = lean_ctor_get(v_toRing_2844_, 1);
lean_inc_ref(v_type_2850_);
v_u_2851_ = lean_ctor_get(v_toRing_2844_, 2);
lean_inc(v_u_2851_);
v_semiringInst_2852_ = lean_ctor_get(v_toRing_2844_, 4);
lean_inc_ref(v_semiringInst_2852_);
lean_dec_ref(v_toRing_2844_);
v___x_2853_ = l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6(v_u_2851_, v_type_2850_, v_semiringInst_2852_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2853_) == 0)
{
lean_object* v_a_2854_; lean_object* v___f_2855_; lean_object* v___x_2856_; 
v_a_2854_ = lean_ctor_get(v___x_2853_, 0);
lean_inc_n(v_a_2854_, 2);
lean_dec_ref_known(v___x_2853_, 1);
v___f_2855_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4___lam__0), 2, 1);
lean_closure_set(v___f_2855_, 0, v_a_2854_);
v___x_2856_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing(v___f_2855_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2856_) == 0)
{
lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2863_; 
v_isSharedCheck_2863_ = !lean_is_exclusive(v___x_2856_);
if (v_isSharedCheck_2863_ == 0)
{
lean_object* v_unused_2864_; 
v_unused_2864_ = lean_ctor_get(v___x_2856_, 0);
lean_dec(v_unused_2864_);
v___x_2858_ = v___x_2856_;
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
else
{
lean_dec(v___x_2856_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v___x_2861_; 
if (v_isShared_2859_ == 0)
{
lean_ctor_set(v___x_2858_, 0, v_a_2854_);
v___x_2861_ = v___x_2858_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v_a_2854_);
v___x_2861_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
return v___x_2861_;
}
}
}
else
{
lean_object* v_a_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2872_; 
lean_dec(v_a_2854_);
v_a_2865_ = lean_ctor_get(v___x_2856_, 0);
v_isSharedCheck_2872_ = !lean_is_exclusive(v___x_2856_);
if (v_isSharedCheck_2872_ == 0)
{
v___x_2867_ = v___x_2856_;
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_a_2865_);
lean_dec(v___x_2856_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2870_; 
if (v_isShared_2868_ == 0)
{
v___x_2870_ = v___x_2867_;
goto v_reusejp_2869_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v_a_2865_);
v___x_2870_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2869_;
}
v_reusejp_2869_:
{
return v___x_2870_;
}
}
}
}
else
{
return v___x_2853_;
}
}
}
}
else
{
lean_object* v_a_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2881_; 
v_a_2874_ = lean_ctor_get(v___x_2839_, 0);
v_isSharedCheck_2881_ = !lean_is_exclusive(v___x_2839_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2876_ = v___x_2839_;
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_a_2874_);
lean_dec(v___x_2839_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
lean_object* v___x_2879_; 
if (v_isShared_2877_ == 0)
{
v___x_2879_ = v___x_2876_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v_a_2874_);
v___x_2879_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
return v___x_2879_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4___boxed(lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_){
_start:
{
lean_object* v_res_2894_; 
v_res_2894_ = l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4(v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec(v___y_2890_);
lean_dec_ref(v___y_2889_);
lean_dec(v___y_2888_);
lean_dec_ref(v___y_2887_);
lean_dec(v___y_2886_);
lean_dec_ref(v___y_2885_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2882_);
return v_res_2894_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__3(void){
_start:
{
lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v___x_2898_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__2));
v___x_2899_ = lean_unsigned_to_nat(39u);
v___x_2900_ = lean_unsigned_to_nat(159u);
v___x_2901_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__1));
v___x_2902_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__0));
v___x_2903_ = l_mkPanicMessageWithDecl(v___x_2902_, v___x_2901_, v___x_2900_, v___x_2899_, v___x_2898_);
return v___x_2903_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(lean_object* v_a_2904_, lean_object* v_a_2905_, lean_object* v_a_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_, lean_object* v_a_2910_, lean_object* v_a_2911_, lean_object* v_a_2912_, lean_object* v_a_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_){
_start:
{
switch(lean_obj_tag(v_a_2904_))
{
case 0:
{
lean_object* v_k_2917_; lean_object* v___x_2918_; 
v_k_2917_ = lean_ctor_get(v_a_2904_, 0);
lean_inc(v_k_2917_);
lean_dec_ref_known(v_a_2904_, 1);
v___x_2918_ = l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0(v_k_2917_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_);
lean_dec(v_k_2917_);
return v___x_2918_;
}
case 1:
{
lean_object* v_k_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
v_k_2919_ = lean_ctor_get(v_a_2904_, 0);
lean_inc(v_k_2919_);
lean_dec_ref_known(v_a_2904_, 1);
v___x_2920_ = lean_nat_to_int(v_k_2919_);
v___x_2921_ = l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0(v___x_2920_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_);
lean_dec(v___x_2920_);
return v___x_2921_;
}
case 3:
{
lean_object* v_i_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; 
v_i_2922_ = lean_ctor_get(v_a_2904_, 0);
lean_inc(v_i_2922_);
lean_dec_ref_known(v_a_2904_, 1);
v___x_2923_ = l_Lean_instInhabitedExpr;
v___x_2924_ = l_Lean_Meta_Grind_Arith_CommRing_getToQFn(v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_);
if (lean_obj_tag(v___x_2924_) == 0)
{
lean_object* v_a_2925_; lean_object* v___x_2926_; 
v_a_2925_ = lean_ctor_get(v___x_2924_, 0);
lean_inc(v_a_2925_);
lean_dec_ref_known(v___x_2924_, 1);
v___x_2926_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_);
if (lean_obj_tag(v___x_2926_) == 0)
{
lean_object* v_a_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2943_; 
v_a_2927_ = lean_ctor_get(v___x_2926_, 0);
v_isSharedCheck_2943_ = !lean_is_exclusive(v___x_2926_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2929_ = v___x_2926_;
v_isShared_2930_ = v_isSharedCheck_2943_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_a_2927_);
lean_dec(v___x_2926_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2943_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
lean_object* v___y_2932_; lean_object* v_toSemiring_2937_; lean_object* v_vars_2938_; lean_object* v_size_2939_; uint8_t v___x_2940_; 
v_toSemiring_2937_ = lean_ctor_get(v_a_2927_, 0);
lean_inc_ref(v_toSemiring_2937_);
lean_dec(v_a_2927_);
v_vars_2938_ = lean_ctor_get(v_toSemiring_2937_, 9);
lean_inc_ref(v_vars_2938_);
lean_dec_ref(v_toSemiring_2937_);
v_size_2939_ = lean_ctor_get(v_vars_2938_, 2);
v___x_2940_ = lean_nat_dec_lt(v_i_2922_, v_size_2939_);
if (v___x_2940_ == 0)
{
lean_object* v___x_2941_; 
lean_dec_ref(v_vars_2938_);
lean_dec(v_i_2922_);
v___x_2941_ = l_outOfBounds___redArg(v___x_2923_);
v___y_2932_ = v___x_2941_;
goto v___jp_2931_;
}
else
{
lean_object* v___x_2942_; 
v___x_2942_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2923_, v_vars_2938_, v_i_2922_);
lean_dec(v_i_2922_);
lean_dec_ref(v_vars_2938_);
v___y_2932_ = v___x_2942_;
goto v___jp_2931_;
}
v___jp_2931_:
{
lean_object* v___x_2933_; lean_object* v___x_2935_; 
v___x_2933_ = l_Lean_Expr_app___override(v_a_2925_, v___y_2932_);
if (v_isShared_2930_ == 0)
{
lean_ctor_set(v___x_2929_, 0, v___x_2933_);
v___x_2935_ = v___x_2929_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v___x_2933_);
v___x_2935_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
return v___x_2935_;
}
}
}
}
else
{
lean_object* v_a_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2951_; 
lean_dec(v_a_2925_);
lean_dec(v_i_2922_);
v_a_2944_ = lean_ctor_get(v___x_2926_, 0);
v_isSharedCheck_2951_ = !lean_is_exclusive(v___x_2926_);
if (v_isSharedCheck_2951_ == 0)
{
v___x_2946_ = v___x_2926_;
v_isShared_2947_ = v_isSharedCheck_2951_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_a_2944_);
lean_dec(v___x_2926_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2951_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v___x_2949_; 
if (v_isShared_2947_ == 0)
{
v___x_2949_ = v___x_2946_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_a_2944_);
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
lean_dec(v_i_2922_);
return v___x_2924_;
}
}
case 5:
{
lean_object* v_a_2952_; lean_object* v_b_2953_; lean_object* v___x_2954_; 
v_a_2952_ = lean_ctor_get(v_a_2904_, 0);
lean_inc_ref(v_a_2952_);
v_b_2953_ = lean_ctor_get(v_a_2904_, 1);
lean_inc_ref(v_b_2953_);
lean_dec_ref_known(v_a_2904_, 2);
v___x_2954_ = l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2(v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_a_2955_; lean_object* v___x_2956_; 
v_a_2955_ = lean_ctor_get(v___x_2954_, 0);
lean_inc(v_a_2955_);
lean_dec_ref_known(v___x_2954_, 1);
v___x_2956_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(v_a_2952_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_);
if (lean_obj_tag(v___x_2956_) == 0)
{
lean_object* v_a_2957_; lean_object* v___x_2958_; 
v_a_2957_ = lean_ctor_get(v___x_2956_, 0);
lean_inc(v_a_2957_);
lean_dec_ref_known(v___x_2956_, 1);
v___x_2958_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(v_b_2953_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_);
if (lean_obj_tag(v___x_2958_) == 0)
{
lean_object* v_a_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2967_; 
v_a_2959_ = lean_ctor_get(v___x_2958_, 0);
v_isSharedCheck_2967_ = !lean_is_exclusive(v___x_2958_);
if (v_isSharedCheck_2967_ == 0)
{
v___x_2961_ = v___x_2958_;
v_isShared_2962_ = v_isSharedCheck_2967_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_a_2959_);
lean_dec(v___x_2958_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2967_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___x_2963_; lean_object* v___x_2965_; 
v___x_2963_ = l_Lean_mkAppB(v_a_2955_, v_a_2957_, v_a_2959_);
if (v_isShared_2962_ == 0)
{
lean_ctor_set(v___x_2961_, 0, v___x_2963_);
v___x_2965_ = v___x_2961_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v___x_2963_);
v___x_2965_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
return v___x_2965_;
}
}
}
else
{
lean_dec(v_a_2957_);
lean_dec(v_a_2955_);
return v___x_2958_;
}
}
else
{
lean_dec(v_a_2955_);
lean_dec_ref(v_b_2953_);
return v___x_2956_;
}
}
else
{
lean_dec_ref(v_b_2953_);
lean_dec_ref(v_a_2952_);
return v___x_2954_;
}
}
case 7:
{
lean_object* v_a_2968_; lean_object* v_b_2969_; lean_object* v___x_2970_; 
v_a_2968_ = lean_ctor_get(v_a_2904_, 0);
lean_inc_ref(v_a_2968_);
v_b_2969_ = lean_ctor_get(v_a_2904_, 1);
lean_inc_ref(v_b_2969_);
lean_dec_ref_known(v_a_2904_, 2);
v___x_2970_ = l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3(v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_object* v_a_2971_; lean_object* v___x_2972_; 
v_a_2971_ = lean_ctor_get(v___x_2970_, 0);
lean_inc(v_a_2971_);
lean_dec_ref_known(v___x_2970_, 1);
v___x_2972_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(v_a_2968_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; lean_object* v___x_2974_; 
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
lean_inc(v_a_2973_);
lean_dec_ref_known(v___x_2972_, 1);
v___x_2974_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(v_b_2969_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_);
if (lean_obj_tag(v___x_2974_) == 0)
{
lean_object* v_a_2975_; lean_object* v___x_2977_; uint8_t v_isShared_2978_; uint8_t v_isSharedCheck_2983_; 
v_a_2975_ = lean_ctor_get(v___x_2974_, 0);
v_isSharedCheck_2983_ = !lean_is_exclusive(v___x_2974_);
if (v_isSharedCheck_2983_ == 0)
{
v___x_2977_ = v___x_2974_;
v_isShared_2978_ = v_isSharedCheck_2983_;
goto v_resetjp_2976_;
}
else
{
lean_inc(v_a_2975_);
lean_dec(v___x_2974_);
v___x_2977_ = lean_box(0);
v_isShared_2978_ = v_isSharedCheck_2983_;
goto v_resetjp_2976_;
}
v_resetjp_2976_:
{
lean_object* v___x_2979_; lean_object* v___x_2981_; 
v___x_2979_ = l_Lean_mkAppB(v_a_2971_, v_a_2973_, v_a_2975_);
if (v_isShared_2978_ == 0)
{
lean_ctor_set(v___x_2977_, 0, v___x_2979_);
v___x_2981_ = v___x_2977_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v___x_2979_);
v___x_2981_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
return v___x_2981_;
}
}
}
else
{
lean_dec(v_a_2973_);
lean_dec(v_a_2971_);
return v___x_2974_;
}
}
else
{
lean_dec(v_a_2971_);
lean_dec_ref(v_b_2969_);
return v___x_2972_;
}
}
else
{
lean_dec_ref(v_b_2969_);
lean_dec_ref(v_a_2968_);
return v___x_2970_;
}
}
case 8:
{
lean_object* v_a_2984_; lean_object* v_k_2985_; lean_object* v___x_2986_; 
v_a_2984_ = lean_ctor_get(v_a_2904_, 0);
lean_inc_ref(v_a_2984_);
v_k_2985_ = lean_ctor_get(v_a_2904_, 1);
lean_inc(v_k_2985_);
lean_dec_ref_known(v_a_2904_, 2);
v___x_2986_ = l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4(v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_);
if (lean_obj_tag(v___x_2986_) == 0)
{
lean_object* v_a_2987_; lean_object* v___x_2988_; 
v_a_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc(v_a_2987_);
lean_dec_ref_known(v___x_2986_, 1);
v___x_2988_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(v_a_2984_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_2998_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_2998_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_2998_ == 0)
{
v___x_2991_ = v___x_2988_;
v_isShared_2992_ = v_isSharedCheck_2998_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v___x_2988_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_2998_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2996_; 
v___x_2993_ = l_Lean_mkNatLit(v_k_2985_);
v___x_2994_ = l_Lean_mkAppB(v_a_2987_, v_a_2989_, v___x_2993_);
if (v_isShared_2992_ == 0)
{
lean_ctor_set(v___x_2991_, 0, v___x_2994_);
v___x_2996_ = v___x_2991_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v___x_2994_);
v___x_2996_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
return v___x_2996_;
}
}
}
else
{
lean_dec(v_a_2987_);
lean_dec(v_k_2985_);
return v___x_2988_;
}
}
else
{
lean_dec(v_k_2985_);
lean_dec_ref(v_a_2984_);
return v___x_2986_;
}
}
default: 
{
lean_object* v___x_2999_; lean_object* v___x_3000_; 
lean_dec_ref(v_a_2904_);
v___x_2999_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__3);
v___x_3000_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5(v___x_2999_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_);
return v___x_3000_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___boxed(lean_object* v_a_3001_, lean_object* v_a_3002_, lean_object* v_a_3003_, lean_object* v_a_3004_, lean_object* v_a_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_){
_start:
{
lean_object* v_res_3014_; 
v_res_3014_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(v_a_3001_, v_a_3002_, v_a_3003_, v_a_3004_, v_a_3005_, v_a_3006_, v_a_3007_, v_a_3008_, v_a_3009_, v_a_3010_, v_a_3011_, v_a_3012_);
lean_dec(v_a_3012_);
lean_dec_ref(v_a_3011_);
lean_dec(v_a_3010_);
lean_dec_ref(v_a_3009_);
lean_dec(v_a_3008_);
lean_dec_ref(v_a_3007_);
lean_dec(v_a_3006_);
lean_dec_ref(v_a_3005_);
lean_dec(v_a_3004_);
lean_dec(v_a_3003_);
lean_dec(v_a_3002_);
return v_res_3014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6(lean_object* v_type_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_){
_start:
{
lean_object* v___x_3028_; 
v___x_3028_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg(v_type_3015_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_, v___y_3026_);
return v___x_3028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___boxed(lean_object* v_type_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_){
_start:
{
lean_object* v_res_3042_; 
v_res_3042_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6(v_type_3029_, v___y_3030_, v___y_3031_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_);
lean_dec(v___y_3040_);
lean_dec_ref(v___y_3039_);
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec(v___y_3036_);
lean_dec_ref(v___y_3035_);
lean_dec(v___y_3034_);
lean_dec_ref(v___y_3033_);
lean_dec(v___y_3032_);
lean_dec(v___y_3031_);
lean_dec(v___y_3030_);
return v_res_3042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_CommRing_Expr_denoteAsRingExpr(lean_object* v_e_3043_, lean_object* v_a_3044_, lean_object* v_a_3045_, lean_object* v_a_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_, lean_object* v_a_3049_, lean_object* v_a_3050_, lean_object* v_a_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_){
_start:
{
lean_object* v___x_3056_; 
v___x_3056_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(v_e_3043_, v_a_3044_, v_a_3045_, v_a_3046_, v_a_3047_, v_a_3048_, v_a_3049_, v_a_3050_, v_a_3051_, v_a_3052_, v_a_3053_, v_a_3054_);
if (lean_obj_tag(v___x_3056_) == 0)
{
lean_object* v_a_3057_; lean_object* v___x_3058_; 
v_a_3057_ = lean_ctor_get(v___x_3056_, 0);
lean_inc(v_a_3057_);
lean_dec_ref_known(v___x_3056_, 1);
v___x_3058_ = l_Lean_Meta_Sym_shareCommon(v_a_3057_, v_a_3049_, v_a_3050_, v_a_3051_, v_a_3052_, v_a_3053_, v_a_3054_);
return v___x_3058_;
}
else
{
return v___x_3056_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_CommRing_Expr_denoteAsRingExpr___boxed(lean_object* v_e_3059_, lean_object* v_a_3060_, lean_object* v_a_3061_, lean_object* v_a_3062_, lean_object* v_a_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_){
_start:
{
lean_object* v_res_3072_; 
v_res_3072_ = l_Lean_Grind_CommRing_Expr_denoteAsRingExpr(v_e_3059_, v_a_3060_, v_a_3061_, v_a_3062_, v_a_3063_, v_a_3064_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_);
lean_dec(v_a_3070_);
lean_dec_ref(v_a_3069_);
lean_dec(v_a_3068_);
lean_dec_ref(v_a_3067_);
lean_dec(v_a_3066_);
lean_dec_ref(v_a_3065_);
lean_dec(v_a_3064_);
lean_dec_ref(v_a_3063_);
lean_dec(v_a_3062_);
lean_dec(v_a_3061_);
lean_dec(v_a_3060_);
return v_res_3072_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadSemiring(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Functions(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadSemiring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Functions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM = _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM);
l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM = _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadSemiring(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Functions(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadSemiring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Functions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(builtin);
}
#ifdef __cplusplus
}
#endif
